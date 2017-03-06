#include "nitc__typing.sep.0.h"
/* method typing$ASendExpr$accept_typing for (self: ASendExpr, TypeVisitor) */
void nitc__typing___ASendExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var_nrecv /* var nrecv: AExpr */;
val* var3 /* : nullable MType */;
val* var_recvtype /* var recvtype: nullable MType */;
val* var4 /* : String */;
val* var_name /* var name: String */;
val* var5 /* : ANode */;
val* var_node /* var node: ANode */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
val* var_callsite /* var callsite: nullable Object */;
val* var12 /* : MType */;
val* var_unsafe_type /* var unsafe_type: MType */;
val* var13 /* : nullable MProperty */;
val* var_mproperty /* var mproperty: nullable MProperty */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var_ /* var : Bool */;
short int var21 /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var22 /* : String */;
char* var23 /* : CString */;
val* var24 /* : String */;
val* var25 /* : nullable Int */;
val* var26 /* : nullable Int */;
val* var27 /* : nullable Bool */;
val* var28 /* : nullable Bool */;
val* var29 /* : nullable MClass */;
val* var_sysclass /* var sysclass: nullable MClass */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var_other33 /* var other: nullable Object */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
val* var36 /* : MClassType */;
val* var38 /* : MClassType */;
val* var_systype /* var systype: MClassType */;
val* var39 /* : nullable MProperty */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
val* var45 /* : nullable CallSite */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
int cltype62;
int idtype63;
val* var64 /* : nullable CallSite */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
short int var70 /* : Bool */;
val* var72 /* : MSignature */;
val* var74 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var75 /* : Array[AExpr] */;
val* var_args /* var args: Array[AExpr] */;
short int var76 /* : Bool */;
val* var77 /* : MMethod */;
val* var79 /* : MMethod */;
short int var80 /* : Bool */;
short int var82 /* : Bool */;
val* var83 /* : nullable MPropDef */;
val* var85 /* : nullable MPropDef */;
val* var_vmpropdef /* var vmpropdef: nullable MPropDef */;
short int var86 /* : Bool */;
short int var87 /* : Bool */;
int cltype88;
int idtype89;
short int var_90 /* var : Bool */;
val* var91 /* : MProperty */;
val* var93 /* : MProperty */;
short int var94 /* : Bool */;
short int var96 /* : Bool */;
short int var97 /* : Bool */;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : CString */;
val* var101 /* : String */;
val* var102 /* : nullable Int */;
val* var103 /* : nullable Int */;
val* var104 /* : nullable Bool */;
val* var105 /* : nullable Bool */;
short int var106 /* : Bool */;
short int var107 /* : Bool */;
short int var108 /* : Bool */;
int cltype109;
int idtype110;
short int var_111 /* var : Bool */;
val* var112 /* : MProperty */;
val* var114 /* : MProperty */;
short int var115 /* : Bool */;
short int var117 /* : Bool */;
short int var_118 /* var : Bool */;
val* var119 /* : MMethod */;
val* var121 /* : MMethod */;
short int var122 /* : Bool */;
short int var124 /* : Bool */;
short int var125 /* : Bool */;
val* var127 /* : NativeArray[String] */;
static val* varonce126;
static val* varonce128;
val* var129 /* : String */;
char* var130 /* : CString */;
val* var131 /* : String */;
val* var132 /* : nullable Int */;
val* var133 /* : nullable Int */;
val* var134 /* : nullable Bool */;
val* var135 /* : nullable Bool */;
static val* varonce136;
val* var137 /* : String */;
char* var138 /* : CString */;
val* var139 /* : String */;
val* var140 /* : nullable Int */;
val* var141 /* : nullable Int */;
val* var142 /* : nullable Bool */;
val* var143 /* : nullable Bool */;
static val* varonce144;
val* var145 /* : String */;
char* var146 /* : CString */;
val* var147 /* : String */;
val* var148 /* : nullable Int */;
val* var149 /* : nullable Int */;
val* var150 /* : nullable Bool */;
val* var151 /* : nullable Bool */;
val* var152 /* : String */;
val* var153 /* : MMethod */;
val* var155 /* : MMethod */;
val* var156 /* : String */;
val* var157 /* : String */;
val* var158 /* : nullable MType */;
val* var160 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
short int var161 /* : Bool */;
short int var162 /* : Bool */;
short int var164 /* : Bool */;
short int var165 /* : Bool */;
var_v = p0;
{
{ /* Inline parser_nodes$ASendExpr$n_expr (self) on <self:ASendExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASendExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2103);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_nrecv = var;
{
var3 = nitc__typing___nitc__typing__TypeVisitor___visit_expr(var_v, var_nrecv);
}
var_recvtype = var3;
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__typing__ASendExpr__property_name]))(self); /* property_name on <self:ASendExpr>*/
}
var_name = var4;
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__typing__ASendExpr__property_node]))(self); /* property_node on <self:ASendExpr>*/
}
var_node = var5;
if (var_recvtype == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_recvtype,((val*)NULL)) on <var_recvtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_recvtype,var_other) on <var_recvtype:nullable MType(MType)> */
var11 = var_recvtype == var_other;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (var6){
goto RET_LABEL;
} else {
}
var_callsite = ((val*)NULL);
{
var12 = nitc__typing___nitc__typing__TypeVisitor___anchor_to(var_v, var_recvtype);
}
var_unsafe_type = var12;
{
var13 = nitc__typing___nitc__typing__TypeVisitor___try_get_mproperty_by_name2(var_v, var_node, var_unsafe_type, var_name);
}
var_mproperty = var13;
if (var_mproperty == NULL) {
var15 = 1; /* is null */
} else {
var15 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mproperty,((val*)NULL)) on <var_mproperty:nullable MProperty> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mproperty,var_other) on <var_mproperty:nullable MProperty(MProperty)> */
var20 = var_mproperty == var_other;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var15 = var16;
}
var_ = var15;
if (var15){
/* <var_nrecv:AExpr> isa AImplicitSelfExpr */
cltype = type_nitc__AImplicitSelfExpr.color;
idtype = type_nitc__AImplicitSelfExpr.id;
if(cltype >= var_nrecv->type->table_size) {
var21 = 0;
} else {
var21 = var_nrecv->type->type_table[cltype] == idtype;
}
var14 = var21;
} else {
var14 = var_;
}
if (var14){
if (likely(varonce!=NULL)) {
var22 = varonce;
} else {
var23 = "Sys";
var25 = (val*)(3l<<2|1);
var26 = (val*)(3l<<2|1);
var27 = (val*)((long)(0)<<2|3);
var28 = (val*)((long)(0)<<2|3);
var24 = core__flat___CString___to_s_unsafe(var23, var25, var26, var27, var28);
var22 = var24;
varonce = var22;
}
{
var29 = nitc__typing___nitc__typing__TypeVisitor___try_get_mclass(var_v, var_node, var22);
}
var_sysclass = var29;
if (var_sysclass == NULL) {
var30 = 0; /* is null */
} else {
var30 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_sysclass,((val*)NULL)) on <var_sysclass:nullable MClass> */
var_other33 = ((val*)NULL);
{
var34 = ((short int(*)(val* self, val* p0))(var_sysclass->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_sysclass, var_other33); /* == on <var_sysclass:nullable MClass(MClass)>*/
}
var35 = !var34;
var31 = var35;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
var30 = var31;
}
if (var30){
{
{ /* Inline model$MClass$mclass_type (var_sysclass) on <var_sysclass:nullable MClass(MClass)> */
var38 = var_sysclass->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_sysclass:nullable MClass(MClass)> */
if (unlikely(var38 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
var_systype = var36;
{
var39 = nitc__typing___nitc__typing__TypeVisitor___try_get_mproperty_by_name2(var_v, var_node, var_systype, var_name);
}
var_mproperty = var39;
if (var_mproperty == NULL) {
var40 = 0; /* is null */
} else {
var40 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_mproperty,((val*)NULL)) on <var_mproperty:nullable MProperty> */
var_other33 = ((val*)NULL);
{
var43 = ((short int(*)(val* self, val* p0))(var_mproperty->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mproperty, var_other33); /* == on <var_mproperty:nullable MProperty(MProperty)>*/
}
var44 = !var43;
var41 = var44;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
var40 = var41;
}
if (var40){
{
var45 = nitc__typing___nitc__typing__TypeVisitor___get_method(var_v, var_node, var_systype, var_name, 0);
}
var_callsite = var45;
if (var_callsite == NULL) {
var46 = 1; /* is null */
} else {
var46 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_callsite,((val*)NULL)) on <var_callsite:nullable Object(nullable CallSite)> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_callsite,var_other) on <var_callsite:nullable Object(CallSite)> */
var51 = var_callsite == var_other;
var49 = var51;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
var46 = var47;
}
if (var46){
goto RET_LABEL;
} else {
}
{
{ /* Inline typing$AImplicitSelfExpr$is_sys= (var_nrecv,1) on <var_nrecv:AExpr(AImplicitSelfExpr)> */
var_nrecv->attrs[COLOR_nitc__typing__AImplicitSelfExpr___is_sys].s = 1; /* _is_sys on <var_nrecv:AExpr(AImplicitSelfExpr)> */
RET_LABEL52:(void)0;
}
}
{
{ /* Inline typing$ASelfExpr$its_variable= (var_nrecv,((val*)NULL)) on <var_nrecv:AExpr(AImplicitSelfExpr)> */
var_nrecv->attrs[COLOR_nitc__typing__ASelfExpr___its_variable].val = ((val*)NULL); /* _its_variable on <var_nrecv:AExpr(AImplicitSelfExpr)> */
RET_LABEL53:(void)0;
}
}
{
{ /* Inline typing$AExpr$mtype= (var_nrecv,var_systype) on <var_nrecv:AExpr(AImplicitSelfExpr)> */
var_nrecv->attrs[COLOR_nitc__typing__AExpr___mtype].val = var_systype; /* _mtype on <var_nrecv:AExpr(AImplicitSelfExpr)> */
RET_LABEL54:(void)0;
}
}
var_recvtype = var_systype;
} else {
}
} else {
}
} else {
}
if (var_callsite == NULL) {
var55 = 1; /* is null */
} else {
var55 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_callsite,((val*)NULL)) on <var_callsite:nullable Object(nullable CallSite)> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_callsite,var_other) on <var_callsite:nullable Object(CallSite)> */
var60 = var_callsite == var_other;
var58 = var60;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
}
var56 = var58;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
var55 = var56;
}
if (var55){
/* <var_nrecv:AExpr> isa ASelfExpr */
cltype62 = type_nitc__ASelfExpr.color;
idtype63 = type_nitc__ASelfExpr.id;
if(cltype62 >= var_nrecv->type->table_size) {
var61 = 0;
} else {
var61 = var_nrecv->type->type_table[cltype62] == idtype63;
}
{
var64 = nitc__typing___nitc__typing__TypeVisitor___get_method(var_v, var_node, var_recvtype, var_name, var61);
}
var_callsite = var64;
if (var_callsite == NULL) {
var65 = 1; /* is null */
} else {
var65 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_callsite,((val*)NULL)) on <var_callsite:nullable Object(nullable CallSite)> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_callsite,var_other) on <var_callsite:nullable Object(CallSite)> */
var70 = var_callsite == var_other;
var68 = var70;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
var66 = var68;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
var65 = var66;
}
if (var65){
goto RET_LABEL;
} else {
}
} else {
}
{
{ /* Inline typing$ASendExpr$callsite= (self,var_callsite) on <self:ASendExpr> */
self->attrs[COLOR_nitc__typing__ASendExpr___callsite].val = var_callsite; /* _callsite on <self:ASendExpr> */
RET_LABEL71:(void)0;
}
}
{
{ /* Inline typing$CallSite$msignature (var_callsite) on <var_callsite:nullable Object(CallSite)> */
var74 = var_callsite->attrs[COLOR_nitc__typing__CallSite___msignature].val; /* _msignature on <var_callsite:nullable Object(CallSite)> */
if (unlikely(var74 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 663);
fatal_exit(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
var_msignature = var72;
{
var75 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__typing__ASendExpr__compute_raw_arguments]))(self); /* compute_raw_arguments on <self:ASendExpr>*/
}
var_args = var75;
{
var76 = nitc___nitc__CallSite___check_signature(var_callsite, var_v, var_node, var_args);
}
{
{ /* Inline typing$CallSite$mproperty (var_callsite) on <var_callsite:nullable Object(CallSite)> */
var79 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:nullable Object(CallSite)> */
if (unlikely(var79 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 656);
fatal_exit(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
{
{ /* Inline model$MMethod$is_init (var77) on <var77:MMethod> */
var82 = var77->attrs[COLOR_nitc__model__MMethod___is_init].s; /* _is_init on <var77:MMethod> */
var80 = var82;
RET_LABEL81:(void)0;
}
}
if (var80){
{
{ /* Inline typing$TypeVisitor$mpropdef (var_v) on <var_v:TypeVisitor> */
var85 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___mpropdef].val; /* _mpropdef on <var_v:TypeVisitor> */
var83 = var85;
RET_LABEL84:(void)0;
}
}
var_vmpropdef = var83;
/* <var_vmpropdef:nullable MPropDef> isa MMethodDef */
cltype88 = type_nitc__MMethodDef.color;
idtype89 = type_nitc__MMethodDef.id;
if(var_vmpropdef == NULL) {
var87 = 0;
} else {
if(cltype88 >= var_vmpropdef->type->table_size) {
var87 = 0;
} else {
var87 = var_vmpropdef->type->type_table[cltype88] == idtype89;
}
}
var_90 = var87;
if (var87){
{
{ /* Inline model$MPropDef$mproperty (var_vmpropdef) on <var_vmpropdef:nullable MPropDef(MMethodDef)> */
var93 = var_vmpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_vmpropdef:nullable MPropDef(MMethodDef)> */
if (unlikely(var93 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var91 = var93;
RET_LABEL92:(void)0;
}
}
{
{ /* Inline model$MMethod$is_init (var91) on <var91:MProperty(MMethod)> */
var96 = var91->attrs[COLOR_nitc__model__MMethod___is_init].s; /* _is_init on <var91:MProperty(MMethod)> */
var94 = var96;
RET_LABEL95:(void)0;
}
}
var86 = var94;
} else {
var86 = var_90;
}
var97 = !var86;
if (var97){
if (likely(varonce98!=NULL)) {
var99 = varonce98;
} else {
var100 = "Error: an `init` can only be called from another `init`.";
var102 = (val*)(56l<<2|1);
var103 = (val*)(56l<<2|1);
var104 = (val*)((long)(0)<<2|3);
var105 = (val*)((long)(0)<<2|3);
var101 = core__flat___CString___to_s_unsafe(var100, var102, var103, var104, var105);
var99 = var101;
varonce98 = var99;
}
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, var_node, var99); /* Direct call typing$TypeVisitor$error on <var_v:TypeVisitor>*/
}
} else {
}
/* <var_vmpropdef:nullable MPropDef> isa MMethodDef */
cltype109 = type_nitc__MMethodDef.color;
idtype110 = type_nitc__MMethodDef.id;
if(var_vmpropdef == NULL) {
var108 = 0;
} else {
if(cltype109 >= var_vmpropdef->type->table_size) {
var108 = 0;
} else {
var108 = var_vmpropdef->type->type_table[cltype109] == idtype110;
}
}
var_111 = var108;
if (var108){
{
{ /* Inline model$MPropDef$mproperty (var_vmpropdef) on <var_vmpropdef:nullable MPropDef(MMethodDef)> */
var114 = var_vmpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_vmpropdef:nullable MPropDef(MMethodDef)> */
if (unlikely(var114 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var112 = var114;
RET_LABEL113:(void)0;
}
}
{
{ /* Inline model$MMethod$is_root_init (var112) on <var112:MProperty(MMethod)> */
var117 = var112->attrs[COLOR_nitc__model__MMethod___is_root_init].s; /* _is_root_init on <var112:MProperty(MMethod)> */
var115 = var117;
RET_LABEL116:(void)0;
}
}
var107 = var115;
} else {
var107 = var_111;
}
var_118 = var107;
if (var107){
{
{ /* Inline typing$CallSite$mproperty (var_callsite) on <var_callsite:nullable Object(CallSite)> */
var121 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:nullable Object(CallSite)> */
if (unlikely(var121 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 656);
fatal_exit(1);
}
var119 = var121;
RET_LABEL120:(void)0;
}
}
{
{ /* Inline model$MMethod$is_root_init (var119) on <var119:MMethod> */
var124 = var119->attrs[COLOR_nitc__model__MMethod___is_root_init].s; /* _is_root_init on <var119:MMethod> */
var122 = var124;
RET_LABEL123:(void)0;
}
}
var125 = !var122;
var106 = var125;
} else {
var106 = var_118;
}
if (var106){
if (unlikely(varonce126==NULL)) {
var127 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce128!=NULL)) {
var129 = varonce128;
} else {
var130 = "Error: `";
var132 = (val*)(8l<<2|1);
var133 = (val*)(8l<<2|1);
var134 = (val*)((long)(0)<<2|3);
var135 = (val*)((long)(0)<<2|3);
var131 = core__flat___CString___to_s_unsafe(var130, var132, var133, var134, var135);
var129 = var131;
varonce128 = var129;
}
((struct instance_core__NativeArray*)var127)->values[0]=var129;
if (likely(varonce136!=NULL)) {
var137 = varonce136;
} else {
var138 = "` cannot call a factory `";
var140 = (val*)(25l<<2|1);
var141 = (val*)(25l<<2|1);
var142 = (val*)((long)(0)<<2|3);
var143 = (val*)((long)(0)<<2|3);
var139 = core__flat___CString___to_s_unsafe(var138, var140, var141, var142, var143);
var137 = var139;
varonce136 = var137;
}
((struct instance_core__NativeArray*)var127)->values[2]=var137;
if (likely(varonce144!=NULL)) {
var145 = varonce144;
} else {
var146 = "`.";
var148 = (val*)(2l<<2|1);
var149 = (val*)(2l<<2|1);
var150 = (val*)((long)(0)<<2|3);
var151 = (val*)((long)(0)<<2|3);
var147 = core__flat___CString___to_s_unsafe(var146, var148, var149, var150, var151);
var145 = var147;
varonce144 = var145;
}
((struct instance_core__NativeArray*)var127)->values[4]=var145;
} else {
var127 = varonce126;
varonce126 = NULL;
}
{
var152 = ((val*(*)(val* self))(var_vmpropdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_vmpropdef); /* to_s on <var_vmpropdef:nullable MPropDef(MMethodDef)>*/
}
((struct instance_core__NativeArray*)var127)->values[1]=var152;
{
{ /* Inline typing$CallSite$mproperty (var_callsite) on <var_callsite:nullable Object(CallSite)> */
var155 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:nullable Object(CallSite)> */
if (unlikely(var155 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 656);
fatal_exit(1);
}
var153 = var155;
RET_LABEL154:(void)0;
}
}
{
var156 = ((val*(*)(val* self))(var153->class->vft[COLOR_core__abstract_text__Object__to_s]))(var153); /* to_s on <var153:MMethod>*/
}
((struct instance_core__NativeArray*)var127)->values[3]=var156;
{
var157 = ((val*(*)(val* self))(var127->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var127); /* native_to_s on <var127:NativeArray[String]>*/
}
varonce126 = var127;
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, var_node, var157); /* Direct call typing$TypeVisitor$error on <var_v:TypeVisitor>*/
}
} else {
}
} else {
}
{
{ /* Inline model$MSignature$return_mtype (var_msignature) on <var_msignature:MSignature> */
var160 = var_msignature->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:MSignature> */
var158 = var160;
RET_LABEL159:(void)0;
}
}
var_ret = var158;
if (var_ret == NULL) {
var161 = 0; /* is null */
} else {
var161 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other33 = ((val*)NULL);
{
var164 = ((short int(*)(val* self, val* p0))(var_ret->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ret, var_other33); /* == on <var_ret:nullable MType(MType)>*/
}
var165 = !var164;
var162 = var165;
goto RET_LABEL163;
RET_LABEL163:(void)0;
}
var161 = var162;
}
if (var161){
{
{ /* Inline typing$AExpr$mtype= (self,var_ret) on <self:ASendExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var_ret; /* _mtype on <self:ASendExpr> */
RET_LABEL166:(void)0;
}
}
} else {
{
{ /* Inline typing$AExpr$is_typed= (self,1) on <self:ASendExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = 1; /* _is_typed on <self:ASendExpr> */
RET_LABEL167:(void)0;
}
}
}
RET_LABEL:;
}
/* method typing$ASendExpr$property_node for (self: ASendExpr): ANode */
val* nitc__typing___ASendExpr___property_node(val* self) {
val* var /* : ANode */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing$ASendExpr$raw_arguments for (self: ASendExpr): Array[AExpr] */
val* nitc__typing___ASendExpr___raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : Array[AExpr] */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__typing__ASendExpr__compute_raw_arguments]))(self); /* compute_raw_arguments on <self:ASendExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing$ABinopExpr$compute_raw_arguments for (self: ABinopExpr): Array[AExpr] */
val* nitc__typing___ABinopExpr___ASendExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : Array[AExpr] */;
val* var_ /* var : Array[AExpr] */;
val* var2 /* : AExpr */;
val* var4 /* : AExpr */;
var1 = NEW_core__Array(&type_core__Array__nitc__AExpr);
{
core___core__Array___with_capacity(var1, 1l); /* Direct call array$Array$with_capacity on <var1:Array[AExpr]>*/
}
var_ = var1;
{
{ /* Inline parser_nodes$ABinopExpr$n_expr2 (self) on <self:ABinopExpr> */
var4 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ABinopExpr> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2114);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var2); /* Direct call array$AbstractArray$push on <var_:Array[AExpr]>*/
}
var = var_;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing$ABinopExpr$property_name for (self: ABinopExpr): String */
val* nitc__typing___ABinopExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__parser_nodes__ABinopExpr__operator]))(self); /* operator on <self:ABinopExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing$ABinopExpr$property_node for (self: ABinopExpr): ANode */
val* nitc__typing___ABinopExpr___ASendExpr__property_node(val* self) {
val* var /* : ANode */;
val* var1 /* : Token */;
val* var3 /* : Token */;
{
{ /* Inline parser_nodes$ABinopExpr$n_op (self) on <self:ABinopExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_op].val; /* _n_op on <self:ABinopExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2111);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing$AEqFormExpr$accept_typing for (self: AEqFormExpr, TypeVisitor) */
void nitc__typing___AEqFormExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__typing___AEqFormExpr___AExpr__accept_typing]))(self, p0); /* accept_typing on <self:AEqFormExpr>*/
}
{
nitc__typing___nitc__typing__TypeVisitor___null_test(var_v, self); /* Direct call typing$TypeVisitor$null_test on <var_v:TypeVisitor>*/
}
RET_LABEL:;
}
/* method typing$AEqFormExpr$accept_post_typing for (self: AEqFormExpr, TypeVisitor) */
void nitc__typing___AEqFormExpr___ANode__accept_post_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var4 /* : AExpr */;
val* var6 /* : AExpr */;
val* var7 /* : nullable MType */;
val* var_mtype2 /* var mtype2: nullable MType */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var_ /* var : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
int cltype;
int idtype;
short int var22 /* : Bool */;
val* var23 /* : AExpr */;
val* var25 /* : AExpr */;
short int var26 /* : Bool */;
var_v = p0;
{
{ /* Inline parser_nodes$ASendExpr$n_expr (self) on <self:AEqFormExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AEqFormExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2103);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = ((val*(*)(val* self))(var->class->vft[COLOR_nitc__typing__AExpr__mtype]))(var); /* mtype on <var:AExpr>*/
}
var_mtype = var3;
{
{ /* Inline parser_nodes$ABinopExpr$n_expr2 (self) on <self:AEqFormExpr> */
var6 = self->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AEqFormExpr> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2114);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = ((val*(*)(val* self))(var4->class->vft[COLOR_nitc__typing__AExpr__mtype]))(var4); /* mtype on <var4:AExpr>*/
}
var_mtype2 = var7;
if (var_mtype == NULL) {
var9 = 1; /* is null */
} else {
var9 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var14 = var_mtype == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
var_ = var9;
if (var9){
var8 = var_;
} else {
if (var_mtype2 == NULL) {
var15 = 1; /* is null */
} else {
var15 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mtype2,((val*)NULL)) on <var_mtype2:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mtype2,var_other) on <var_mtype2:nullable MType(MType)> */
var20 = var_mtype2 == var_other;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var15 = var16;
}
var8 = var15;
}
if (var8){
goto RET_LABEL;
} else {
}
/* <var_mtype2:nullable MType(MType)> isa MNullType */
cltype = type_nitc__MNullType.color;
idtype = type_nitc__MNullType.id;
if(cltype >= var_mtype2->type->table_size) {
var21 = 0;
} else {
var21 = var_mtype2->type->type_table[cltype] == idtype;
}
var22 = !var21;
if (var22){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes$ASendExpr$n_expr (self) on <self:AEqFormExpr> */
var25 = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AEqFormExpr> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2103);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = nitc__typing___nitc__typing__TypeVisitor___check_can_be_null(var_v, var23, var_mtype);
}
RET_LABEL:;
}
/* method typing$AUnaryopExpr$property_name for (self: AUnaryopExpr): String */
val* nitc__typing___AUnaryopExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
val* var10 /* : String */;
val* var11 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "unary ";
var6 = (val*)(6l<<2|1);
var7 = (val*)(6l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[0]=var3;
} else {
var1 = varonce;
varonce = NULL;
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__parser_nodes__AUnaryopExpr__operator]))(self); /* operator on <self:AUnaryopExpr>*/
}
((struct instance_core__NativeArray*)var1)->values[1]=var10;
{
var11 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing$AUnaryopExpr$compute_raw_arguments for (self: AUnaryopExpr): Array[AExpr] */
val* nitc__typing___AUnaryopExpr___ASendExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : Array[AExpr] */;
var1 = NEW_core__Array(&type_core__Array__nitc__AExpr);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array$Array$init on <var1:Array[AExpr]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing$ACallExpr$property_name for (self: ACallExpr): String */
val* nitc__typing___ACallExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : AQid */;
val* var3 /* : AQid */;
val* var4 /* : TId */;
val* var6 /* : TId */;
val* var7 /* : String */;
{
{ /* Inline parser_nodes$ACallFormExpr$n_qid (self) on <self:ACallExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ACallFormExpr___n_qid].val; /* _n_qid on <self:ACallExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_qid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2377);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline parser_nodes$AQid$n_id (var1) on <var1:AQid> */
var6 = var1->attrs[COLOR_nitc__parser_nodes__AQid___n_id].val; /* _n_id on <var1:AQid> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1721);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nitc__lexer_work___Token___text(var4);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing$ACallExpr$property_node for (self: ACallExpr): ANode */
val* nitc__typing___ACallExpr___ASendExpr__property_node(val* self) {
val* var /* : ANode */;
val* var1 /* : AQid */;
val* var3 /* : AQid */;
{
{ /* Inline parser_nodes$ACallFormExpr$n_qid (self) on <self:ACallExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ACallFormExpr___n_qid].val; /* _n_qid on <self:ACallExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_qid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2377);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing$ACallExpr$compute_raw_arguments for (self: ACallExpr): Array[AExpr] */
val* nitc__typing___ACallExpr___ASendExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : AExprs */;
val* var3 /* : AExprs */;
val* var4 /* : Array[AExpr] */;
{
{ /* Inline parser_nodes$ACallFormExpr$n_args (self) on <self:ACallExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2380);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc__typing___AExprs___to_a(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing$ACallAssignExpr$property_name for (self: ACallAssignExpr): String */
val* nitc__typing___ACallAssignExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : AQid */;
val* var3 /* : AQid */;
val* var4 /* : TId */;
val* var6 /* : TId */;
val* var7 /* : String */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : CString */;
val* var10 /* : String */;
val* var11 /* : nullable Int */;
val* var12 /* : nullable Int */;
val* var13 /* : nullable Bool */;
val* var14 /* : nullable Bool */;
val* var15 /* : Text */;
{
{ /* Inline parser_nodes$ACallFormExpr$n_qid (self) on <self:ACallAssignExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ACallFormExpr___n_qid].val; /* _n_qid on <self:ACallAssignExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_qid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2377);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline parser_nodes$AQid$n_id (var1) on <var1:AQid> */
var6 = var1->attrs[COLOR_nitc__parser_nodes__AQid___n_id].val; /* _n_id on <var1:AQid> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1721);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nitc__lexer_work___Token___text(var4);
}
if (likely(varonce!=NULL)) {
var8 = varonce;
} else {
var9 = "=";
var11 = (val*)(1l<<2|1);
var12 = (val*)(1l<<2|1);
var13 = (val*)((long)(0)<<2|3);
var14 = (val*)((long)(0)<<2|3);
var10 = core__flat___CString___to_s_unsafe(var9, var11, var12, var13, var14);
var8 = var10;
varonce = var8;
}
{
var15 = ((val*(*)(val* self, val* p0))(var7->class->vft[COLOR_core__abstract_text__Text___43d]))(var7, var8); /* + on <var7:String>*/
}
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing$ACallAssignExpr$property_node for (self: ACallAssignExpr): ANode */
val* nitc__typing___ACallAssignExpr___ASendExpr__property_node(val* self) {
val* var /* : ANode */;
val* var1 /* : AQid */;
val* var3 /* : AQid */;
{
{ /* Inline parser_nodes$ACallFormExpr$n_qid (self) on <self:ACallAssignExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ACallFormExpr___n_qid].val; /* _n_qid on <self:ACallAssignExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_qid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2377);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing$ACallAssignExpr$compute_raw_arguments for (self: ACallAssignExpr): Array[AExpr] */
val* nitc__typing___ACallAssignExpr___ASendExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : AExprs */;
val* var3 /* : AExprs */;
val* var4 /* : Array[AExpr] */;
val* var_res /* var res: Array[AExpr] */;
val* var5 /* : AExpr */;
val* var7 /* : AExpr */;
{
{ /* Inline parser_nodes$ACallFormExpr$n_args (self) on <self:ACallAssignExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallAssignExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2380);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc__typing___AExprs___to_a(var1);
}
var_res = var4;
{
{ /* Inline parser_nodes$AAssignFormExpr$n_value (self) on <self:ACallAssignExpr> */
var7 = self->attrs[COLOR_nitc__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:ACallAssignExpr> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2073);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var5); /* Direct call array$Array$add on <var_res:Array[AExpr]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing$ABraExpr$property_name for (self: ABraExpr): String */
val* nitc__typing___ABraExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Bool */;
val* var7 /* : nullable Bool */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "[]";
var4 = (val*)(2l<<2|1);
var5 = (val*)(2l<<2|1);
var6 = (val*)((long)(0)<<2|3);
var7 = (val*)((long)(0)<<2|3);
var3 = core__flat___CString___to_s_unsafe(var2, var4, var5, var6, var7);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing$ABraExpr$compute_raw_arguments for (self: ABraExpr): Array[AExpr] */
val* nitc__typing___ABraExpr___ASendExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : AExprs */;
val* var3 /* : AExprs */;
val* var4 /* : Array[AExpr] */;
{
{ /* Inline parser_nodes$ABraFormExpr$n_args (self) on <self:ABraExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2449);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc__typing___AExprs___to_a(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing$ABraAssignExpr$property_name for (self: ABraAssignExpr): String */
val* nitc__typing___ABraAssignExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Bool */;
val* var7 /* : nullable Bool */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "[]=";
var4 = (val*)(3l<<2|1);
var5 = (val*)(3l<<2|1);
var6 = (val*)((long)(0)<<2|3);
var7 = (val*)((long)(0)<<2|3);
var3 = core__flat___CString___to_s_unsafe(var2, var4, var5, var6, var7);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing$ABraAssignExpr$compute_raw_arguments for (self: ABraAssignExpr): Array[AExpr] */
val* nitc__typing___ABraAssignExpr___ASendExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : AExprs */;
val* var3 /* : AExprs */;
val* var4 /* : Array[AExpr] */;
val* var_res /* var res: Array[AExpr] */;
val* var5 /* : AExpr */;
val* var7 /* : AExpr */;
{
{ /* Inline parser_nodes$ABraFormExpr$n_args (self) on <self:ABraAssignExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraAssignExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2449);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc__typing___AExprs___to_a(var1);
}
var_res = var4;
{
{ /* Inline parser_nodes$AAssignFormExpr$n_value (self) on <self:ABraAssignExpr> */
var7 = self->attrs[COLOR_nitc__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:ABraAssignExpr> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2073);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var5); /* Direct call array$Array$add on <var_res:Array[AExpr]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing$ASendReassignFormExpr$write_callsite for (self: ASendReassignFormExpr): nullable CallSite */
val* nitc__typing___ASendReassignFormExpr___write_callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nitc__typing__ASendReassignFormExpr___write_callsite].val; /* _write_callsite on <self:ASendReassignFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing$ASendReassignFormExpr$write_callsite= for (self: ASendReassignFormExpr, nullable CallSite) */
void nitc__typing___ASendReassignFormExpr___write_callsite_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__ASendReassignFormExpr___write_callsite].val = p0; /* _write_callsite on <self:ASendReassignFormExpr> */
RET_LABEL:;
}
/* method typing$ASendReassignFormExpr$accept_typing for (self: ASendReassignFormExpr, TypeVisitor) */
void nitc__typing___ASendReassignFormExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var_recvtype /* var recvtype: nullable MType */;
val* var4 /* : String */;
val* var_name /* var name: String */;
val* var5 /* : ANode */;
val* var_node /* var node: ANode */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : AExpr */;
val* var14 /* : AExpr */;
short int var15 /* : Bool */;
int cltype;
int idtype;
short int var_for_self /* var for_self: Bool */;
val* var16 /* : nullable CallSite */;
val* var_callsite /* var callsite: nullable CallSite */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
val* var24 /* : Array[AExpr] */;
val* var_args /* var args: Array[AExpr] */;
short int var25 /* : Bool */;
val* var26 /* : MSignature */;
val* var28 /* : MSignature */;
val* var29 /* : nullable MType */;
val* var31 /* : nullable MType */;
val* var_readtype /* var readtype: nullable MType */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
val* var38 /* : NativeArray[String] */;
static val* varonce;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : CString */;
val* var42 /* : String */;
val* var43 /* : nullable Int */;
val* var44 /* : nullable Int */;
val* var45 /* : nullable Bool */;
val* var46 /* : nullable Bool */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : CString */;
val* var50 /* : String */;
val* var51 /* : nullable Int */;
val* var52 /* : nullable Int */;
val* var53 /* : nullable Bool */;
val* var54 /* : nullable Bool */;
val* var55 /* : String */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : CString */;
val* var59 /* : String */;
val* var60 /* : nullable Int */;
val* var61 /* : nullable Int */;
val* var62 /* : nullable Bool */;
val* var63 /* : nullable Bool */;
val* var64 /* : Text */;
val* var65 /* : AExpr */;
val* var67 /* : AExpr */;
short int var68 /* : Bool */;
int cltype69;
int idtype70;
val* var71 /* : nullable CallSite */;
val* var_wcallsite /* var wcallsite: nullable CallSite */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
short int var75 /* : Bool */;
short int var77 /* : Bool */;
val* var79 /* : MSignature */;
val* var81 /* : MSignature */;
val* var82 /* : Array[MParameter] */;
val* var84 /* : Array[MParameter] */;
val* var85 /* : nullable Object */;
val* var86 /* : MType */;
val* var88 /* : MType */;
val* var89 /* : nullable MType */;
val* var_wtype /* var wtype: nullable MType */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
short int var93 /* : Bool */;
short int var95 /* : Bool */;
val* var96 /* : Array[nullable Object] */;
val* var97 /* : AExpr */;
val* var99 /* : AExpr */;
short int var100 /* : Bool */;
var_v = p0;
{
{ /* Inline parser_nodes$ASendExpr$n_expr (self) on <self:ASendReassignFormExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASendReassignFormExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2103);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__typing___nitc__typing__TypeVisitor___visit_expr(var_v, var);
}
var_recvtype = var3;
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__typing__ASendExpr__property_name]))(self); /* property_name on <self:ASendReassignFormExpr>*/
}
var_name = var4;
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__typing__ASendExpr__property_node]))(self); /* property_node on <self:ASendReassignFormExpr>*/
}
var_node = var5;
if (var_recvtype == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_recvtype,((val*)NULL)) on <var_recvtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_recvtype,var_other) on <var_recvtype:nullable MType(MType)> */
var11 = var_recvtype == var_other;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (var6){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes$ASendExpr$n_expr (self) on <self:ASendReassignFormExpr> */
var14 = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASendReassignFormExpr> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2103);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
/* <var12:AExpr> isa ASelfExpr */
cltype = type_nitc__ASelfExpr.color;
idtype = type_nitc__ASelfExpr.id;
if(cltype >= var12->type->table_size) {
var15 = 0;
} else {
var15 = var12->type->type_table[cltype] == idtype;
}
var_for_self = var15;
{
var16 = nitc__typing___nitc__typing__TypeVisitor___get_method(var_v, var_node, var_recvtype, var_name, var_for_self);
}
var_callsite = var16;
if (var_callsite == NULL) {
var17 = 1; /* is null */
} else {
var17 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_callsite,((val*)NULL)) on <var_callsite:nullable CallSite> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_callsite,var_other) on <var_callsite:nullable CallSite(CallSite)> */
var22 = var_callsite == var_other;
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
var17 = var18;
}
if (var17){
goto RET_LABEL;
} else {
}
{
{ /* Inline typing$ASendExpr$callsite= (self,var_callsite) on <self:ASendReassignFormExpr> */
self->attrs[COLOR_nitc__typing__ASendExpr___callsite].val = var_callsite; /* _callsite on <self:ASendReassignFormExpr> */
RET_LABEL23:(void)0;
}
}
{
var24 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__typing__ASendExpr__compute_raw_arguments]))(self); /* compute_raw_arguments on <self:ASendReassignFormExpr>*/
}
var_args = var24;
{
var25 = nitc___nitc__CallSite___check_signature(var_callsite, var_v, var_node, var_args);
}
{
{ /* Inline typing$CallSite$msignature (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var28 = var_callsite->attrs[COLOR_nitc__typing__CallSite___msignature].val; /* _msignature on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 663);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline model$MSignature$return_mtype (var26) on <var26:MSignature> */
var31 = var26->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var26:MSignature> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
var_readtype = var29;
if (var_readtype == NULL) {
var32 = 1; /* is null */
} else {
var32 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_readtype,((val*)NULL)) on <var_readtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_readtype,var_other) on <var_readtype:nullable MType(MType)> */
var37 = var_readtype == var_other;
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
var32 = var33;
}
if (var32){
if (unlikely(varonce==NULL)) {
var38 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = "Error: `";
var43 = (val*)(8l<<2|1);
var44 = (val*)(8l<<2|1);
var45 = (val*)((long)(0)<<2|3);
var46 = (val*)((long)(0)<<2|3);
var42 = core__flat___CString___to_s_unsafe(var41, var43, var44, var45, var46);
var40 = var42;
varonce39 = var40;
}
((struct instance_core__NativeArray*)var38)->values[0]=var40;
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "` is not a function.";
var51 = (val*)(20l<<2|1);
var52 = (val*)(20l<<2|1);
var53 = (val*)((long)(0)<<2|3);
var54 = (val*)((long)(0)<<2|3);
var50 = core__flat___CString___to_s_unsafe(var49, var51, var52, var53, var54);
var48 = var50;
varonce47 = var48;
}
((struct instance_core__NativeArray*)var38)->values[2]=var48;
} else {
var38 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var38)->values[1]=var_name;
{
var55 = ((val*(*)(val* self))(var38->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var38); /* native_to_s on <var38:NativeArray[String]>*/
}
varonce = var38;
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, var_node, var55); /* Direct call typing$TypeVisitor$error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = "=";
var60 = (val*)(1l<<2|1);
var61 = (val*)(1l<<2|1);
var62 = (val*)((long)(0)<<2|3);
var63 = (val*)((long)(0)<<2|3);
var59 = core__flat___CString___to_s_unsafe(var58, var60, var61, var62, var63);
var57 = var59;
varonce56 = var57;
}
{
var64 = ((val*(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__abstract_text__Text___43d]))(var_name, var57); /* + on <var_name:String>*/
}
{
{ /* Inline parser_nodes$ASendExpr$n_expr (self) on <self:ASendReassignFormExpr> */
var67 = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASendReassignFormExpr> */
if (unlikely(var67 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2103);
fatal_exit(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
/* <var65:AExpr> isa ASelfExpr */
cltype69 = type_nitc__ASelfExpr.color;
idtype70 = type_nitc__ASelfExpr.id;
if(cltype69 >= var65->type->table_size) {
var68 = 0;
} else {
var68 = var65->type->type_table[cltype69] == idtype70;
}
{
var71 = nitc__typing___nitc__typing__TypeVisitor___get_method(var_v, var_node, var_recvtype, var64, var68);
}
var_wcallsite = var71;
if (var_wcallsite == NULL) {
var72 = 1; /* is null */
} else {
var72 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_wcallsite,((val*)NULL)) on <var_wcallsite:nullable CallSite> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_wcallsite,var_other) on <var_wcallsite:nullable CallSite(CallSite)> */
var77 = var_wcallsite == var_other;
var75 = var77;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
}
var73 = var75;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
var72 = var73;
}
if (var72){
goto RET_LABEL;
} else {
}
{
{ /* Inline typing$ASendReassignFormExpr$write_callsite= (self,var_wcallsite) on <self:ASendReassignFormExpr> */
self->attrs[COLOR_nitc__typing__ASendReassignFormExpr___write_callsite].val = var_wcallsite; /* _write_callsite on <self:ASendReassignFormExpr> */
RET_LABEL78:(void)0;
}
}
{
{ /* Inline typing$CallSite$msignature (var_wcallsite) on <var_wcallsite:nullable CallSite(CallSite)> */
var81 = var_wcallsite->attrs[COLOR_nitc__typing__CallSite___msignature].val; /* _msignature on <var_wcallsite:nullable CallSite(CallSite)> */
if (unlikely(var81 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 663);
fatal_exit(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
{
{ /* Inline model$MSignature$mparameters (var79) on <var79:MSignature> */
var84 = var79->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var79:MSignature> */
if (unlikely(var84 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
var85 = core___core__SequenceRead___last(var82);
}
{
{ /* Inline model$MParameter$mtype (var85) on <var85:nullable Object(MParameter)> */
var88 = var85->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var85:nullable Object(MParameter)> */
if (unlikely(var88 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var86 = var88;
RET_LABEL87:(void)0;
}
}
{
var89 = nitc__typing___AReassignFormExpr___resolve_reassignment(self, var_v, var_readtype, var86);
}
var_wtype = var89;
if (var_wtype == NULL) {
var90 = 1; /* is null */
} else {
var90 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_wtype,((val*)NULL)) on <var_wtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_wtype,var_other) on <var_wtype:nullable MType(MType)> */
var95 = var_wtype == var_other;
var93 = var95;
goto RET_LABEL94;
RET_LABEL94:(void)0;
}
}
var91 = var93;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
var90 = var91;
}
if (var90){
goto RET_LABEL;
} else {
}
{
var96 = core__array___Collection___to_a(var_args);
}
var_args = var96;
{
{ /* Inline parser_nodes$AReassignFormExpr$n_value (self) on <self:ASendReassignFormExpr> */
var99 = self->attrs[COLOR_nitc__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:ASendReassignFormExpr> */
if (unlikely(var99 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2084);
fatal_exit(1);
}
var97 = var99;
RET_LABEL98:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_args, var97); /* Direct call array$Array$add on <var_args:Array[AExpr]>*/
}
{
var100 = nitc___nitc__CallSite___check_signature(var_wcallsite, var_v, var_node, var_args);
}
{
{ /* Inline typing$AExpr$is_typed= (self,1) on <self:ASendReassignFormExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = 1; /* _is_typed on <self:ASendReassignFormExpr> */
RET_LABEL101:(void)0;
}
}
RET_LABEL:;
}
/* method typing$ACallReassignExpr$property_name for (self: ACallReassignExpr): String */
val* nitc__typing___ACallReassignExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : AQid */;
val* var3 /* : AQid */;
val* var4 /* : TId */;
val* var6 /* : TId */;
val* var7 /* : String */;
{
{ /* Inline parser_nodes$ACallFormExpr$n_qid (self) on <self:ACallReassignExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ACallFormExpr___n_qid].val; /* _n_qid on <self:ACallReassignExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_qid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2377);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline parser_nodes$AQid$n_id (var1) on <var1:AQid> */
var6 = var1->attrs[COLOR_nitc__parser_nodes__AQid___n_id].val; /* _n_id on <var1:AQid> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1721);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nitc__lexer_work___Token___text(var4);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing$ACallReassignExpr$property_node for (self: ACallReassignExpr): ANode */
val* nitc__typing___ACallReassignExpr___ASendExpr__property_node(val* self) {
val* var /* : ANode */;
val* var1 /* : AQid */;
val* var3 /* : AQid */;
val* var4 /* : TId */;
val* var6 /* : TId */;
{
{ /* Inline parser_nodes$ACallFormExpr$n_qid (self) on <self:ACallReassignExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ACallFormExpr___n_qid].val; /* _n_qid on <self:ACallReassignExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_qid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2377);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline parser_nodes$AQid$n_id (var1) on <var1:AQid> */
var6 = var1->attrs[COLOR_nitc__parser_nodes__AQid___n_id].val; /* _n_id on <var1:AQid> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1721);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing$ACallReassignExpr$compute_raw_arguments for (self: ACallReassignExpr): Array[AExpr] */
val* nitc__typing___ACallReassignExpr___ASendExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : AExprs */;
val* var3 /* : AExprs */;
val* var4 /* : Array[AExpr] */;
{
{ /* Inline parser_nodes$ACallFormExpr$n_args (self) on <self:ACallReassignExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallReassignExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2380);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc__typing___AExprs___to_a(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing$ABraReassignExpr$property_name for (self: ABraReassignExpr): String */
val* nitc__typing___ABraReassignExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Bool */;
val* var7 /* : nullable Bool */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "[]";
var4 = (val*)(2l<<2|1);
var5 = (val*)(2l<<2|1);
var6 = (val*)((long)(0)<<2|3);
var7 = (val*)((long)(0)<<2|3);
var3 = core__flat___CString___to_s_unsafe(var2, var4, var5, var6, var7);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing$ABraReassignExpr$compute_raw_arguments for (self: ABraReassignExpr): Array[AExpr] */
val* nitc__typing___ABraReassignExpr___ASendExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : AExprs */;
val* var3 /* : AExprs */;
val* var4 /* : Array[AExpr] */;
{
{ /* Inline parser_nodes$ABraFormExpr$n_args (self) on <self:ABraReassignExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraReassignExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2449);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc__typing___AExprs___to_a(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing$AInitExpr$property_name for (self: AInitExpr): String */
val* nitc__typing___AInitExpr___ASendExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Bool */;
val* var7 /* : nullable Bool */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "init";
var4 = (val*)(4l<<2|1);
var5 = (val*)(4l<<2|1);
var6 = (val*)((long)(0)<<2|3);
var7 = (val*)((long)(0)<<2|3);
var3 = core__flat___CString___to_s_unsafe(var2, var4, var5, var6, var7);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing$AInitExpr$property_node for (self: AInitExpr): ANode */
val* nitc__typing___AInitExpr___ASendExpr__property_node(val* self) {
val* var /* : ANode */;
val* var1 /* : TKwinit */;
val* var3 /* : TKwinit */;
{
{ /* Inline parser_nodes$AInitExpr$n_kwinit (self) on <self:AInitExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AInitExpr___n_kwinit].val; /* _n_kwinit on <self:AInitExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwinit");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2438);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing$AInitExpr$compute_raw_arguments for (self: AInitExpr): Array[AExpr] */
val* nitc__typing___AInitExpr___ASendExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : AExprs */;
val* var3 /* : AExprs */;
val* var4 /* : Array[AExpr] */;
{
{ /* Inline parser_nodes$AInitExpr$n_args (self) on <self:AInitExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AInitExpr___n_args].val; /* _n_args on <self:AInitExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2441);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc__typing___AExprs___to_a(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing$AExprs$to_a for (self: AExprs): Array[AExpr] */
val* nitc__typing___AExprs___to_a(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : ANodes[AExpr] */;
val* var3 /* : ANodes[AExpr] */;
val* var4 /* : Array[nullable Object] */;
{
{ /* Inline parser_nodes$AExprs$n_exprs (self) on <self:AExprs> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AExprs> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2790);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core__array___Collection___to_a(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing$ASuperExpr$callsite for (self: ASuperExpr): nullable CallSite */
val* nitc__typing___ASuperExpr___callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nitc__typing__ASuperExpr___callsite].val; /* _callsite on <self:ASuperExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing$ASuperExpr$callsite= for (self: ASuperExpr, nullable CallSite) */
void nitc__typing___ASuperExpr___callsite_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__ASuperExpr___callsite].val = p0; /* _callsite on <self:ASuperExpr> */
RET_LABEL:;
}
/* method typing$ASuperExpr$mpropdef for (self: ASuperExpr): nullable MMethodDef */
val* nitc__typing___ASuperExpr___mpropdef(val* self) {
val* var /* : nullable MMethodDef */;
val* var1 /* : nullable MMethodDef */;
var1 = self->attrs[COLOR_nitc__typing__ASuperExpr___mpropdef].val; /* _mpropdef on <self:ASuperExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing$ASuperExpr$mpropdef= for (self: ASuperExpr, nullable MMethodDef) */
void nitc__typing___ASuperExpr___mpropdef_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__ASuperExpr___mpropdef].val = p0; /* _mpropdef on <self:ASuperExpr> */
RET_LABEL:;
}
/* method typing$ASuperExpr$accept_typing for (self: ASuperExpr, TypeVisitor) */
void nitc__typing___ASuperExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MClassType */;
val* var2 /* : nullable MClassType */;
val* var_anchor /* var anchor: nullable MClassType */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : Variable */;
val* var10 /* : Variable */;
val* var11 /* : nullable MType */;
val* var_recvtype /* var recvtype: nullable MType */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : nullable MPropDef */;
val* var19 /* : nullable MPropDef */;
val* var20 /* : MProperty */;
val* var22 /* : MProperty */;
val* var_mproperty /* var mproperty: MProperty */;
short int var23 /* : Bool */;
int cltype;
int idtype;
short int var24 /* : Bool */;
static val* varonce;
val* var25 /* : String */;
char* var26 /* : CString */;
val* var27 /* : String */;
val* var28 /* : nullable Int */;
val* var29 /* : nullable Int */;
val* var30 /* : nullable Bool */;
val* var31 /* : nullable Bool */;
val* var32 /* : MModule */;
val* var34 /* : MModule */;
val* var35 /* : Array[MPropDef] */;
val* var_superprops /* var superprops: Array[MMethodDef] */;
long var36 /* : Int */;
long var38 /* : Int */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var_ /* var : Bool */;
val* var46 /* : nullable MPropDef */;
val* var48 /* : nullable MPropDef */;
short int var49 /* : Bool */;
val* var51 /* : NativeArray[String] */;
static val* varonce50;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : CString */;
val* var55 /* : String */;
val* var56 /* : nullable Int */;
val* var57 /* : nullable Int */;
val* var58 /* : nullable Bool */;
val* var59 /* : nullable Bool */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : CString */;
val* var63 /* : String */;
val* var64 /* : nullable Int */;
val* var65 /* : nullable Int */;
val* var66 /* : nullable Bool */;
val* var67 /* : nullable Bool */;
val* var68 /* : String */;
val* var69 /* : String */;
val* var70 /* : nullable Object */;
val* var_superprop /* var superprop: MMethodDef */;
val* var71 /* : nullable MSignature */;
val* var73 /* : nullable MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var74 /* : MType */;
short int var75 /* : Bool */;
int cltype76;
int idtype77;
const char* var_class_name;
val* var78 /* : AExprs */;
val* var80 /* : AExprs */;
val* var81 /* : Array[AExpr] */;
val* var_args /* var args: Array[AExpr] */;
long var82 /* : Int */;
long var84 /* : Int */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
int cltype88;
int idtype89;
const char* var_class_name90;
short int var91 /* : Bool */;
val* var92 /* : nullable SignatureMap */;
val* var94 /* : nullable MType */;
val* var96 /* : nullable MType */;
val* var99 /* : nullable MPropDef */;
val* var101 /* : nullable MPropDef */;
val* var103 /* : nullable MPropDef */;
val* var105 /* : nullable MPropDef */;
short int var106 /* : Bool */;
int cltype107;
int idtype108;
const char* var_class_name109;
var_v = p0;
{
{ /* Inline typing$TypeVisitor$anchor (var_v) on <var_v:TypeVisitor> */
var2 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___anchor].val; /* _anchor on <var_v:TypeVisitor> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_anchor = var;
if (var_anchor == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_anchor,((val*)NULL)) on <var_anchor:nullable MClassType> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_anchor->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_anchor, var_other); /* == on <var_anchor:nullable MClassType(MClassType)>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (unlikely(!var3)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 2033);
fatal_exit(1);
}
{
{ /* Inline typing$TypeVisitor$selfvariable (var_v) on <var_v:TypeVisitor> */
var10 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___selfvariable].val; /* _selfvariable on <var_v:TypeVisitor> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _selfvariable");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 51);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nitc__typing___nitc__typing__TypeVisitor___get_variable(var_v, self, var8);
}
var_recvtype = var11;
if (var_recvtype == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_recvtype,((val*)NULL)) on <var_recvtype:nullable MType> */
var_other = ((val*)NULL);
{
var15 = ((short int(*)(val* self, val* p0))(var_recvtype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_recvtype, var_other); /* == on <var_recvtype:nullable MType(MType)>*/
}
var16 = !var15;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (unlikely(!var12)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 2035);
fatal_exit(1);
}
{
{ /* Inline typing$TypeVisitor$mpropdef (var_v) on <var_v:TypeVisitor> */
var19 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___mpropdef].val; /* _mpropdef on <var_v:TypeVisitor> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
if (var17 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 2036);
fatal_exit(1);
} else {
{ /* Inline model$MPropDef$mproperty (var17) on <var17:nullable MPropDef> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var22 = var17->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var17:nullable MPropDef> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
var_mproperty = var20;
/* <var_mproperty:MProperty> isa MMethod */
cltype = type_nitc__MMethod.color;
idtype = type_nitc__MMethod.id;
if(cltype >= var_mproperty->type->table_size) {
var23 = 0;
} else {
var23 = var_mproperty->type->type_table[cltype] == idtype;
}
var24 = !var23;
if (var24){
if (likely(varonce!=NULL)) {
var25 = varonce;
} else {
var26 = "Error: `super` only usable in a `method`.";
var28 = (val*)(41l<<2|1);
var29 = (val*)(41l<<2|1);
var30 = (val*)((long)(0)<<2|3);
var31 = (val*)((long)(0)<<2|3);
var27 = core__flat___CString___to_s_unsafe(var26, var28, var29, var30, var31);
var25 = var27;
varonce = var25;
}
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var25); /* Direct call typing$TypeVisitor$error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline typing$TypeVisitor$mmodule (var_v) on <var_v:TypeVisitor> */
var34 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___mmodule].val; /* _mmodule on <var_v:TypeVisitor> */
if (unlikely(var34 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 37);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
var35 = nitc___nitc__MProperty___lookup_super_definitions(var_mproperty, var32, var_anchor);
}
var_superprops = var35;
{
{ /* Inline array$AbstractArrayRead$length (var_superprops) on <var_superprops:Array[MMethodDef]> */
var38 = var_superprops->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_superprops:Array[MMethodDef]> */
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var36,0l) on <var36:Int> */
var41 = var36 == 0l;
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
if (var39){
{
{ /* Inline model$MMethod$is_init (var_mproperty) on <var_mproperty:MProperty(MMethod)> */
var45 = var_mproperty->attrs[COLOR_nitc__model__MMethod___is_init].s; /* _is_init on <var_mproperty:MProperty(MMethod)> */
var43 = var45;
RET_LABEL44:(void)0;
}
}
var_ = var43;
if (var43){
{
{ /* Inline typing$TypeVisitor$mpropdef (var_v) on <var_v:TypeVisitor> */
var48 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___mpropdef].val; /* _mpropdef on <var_v:TypeVisitor> */
var46 = var48;
RET_LABEL47:(void)0;
}
}
if (var46 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 2043);
fatal_exit(1);
} else {
var49 = nitc___nitc__MPropDef___is_intro(var46);
}
var42 = var49;
} else {
var42 = var_;
}
if (var42){
{
nitc__typing___ASuperExpr___process_superinit(self, var_v); /* Direct call typing$ASuperExpr$process_superinit on <self:ASuperExpr>*/
}
goto RET_LABEL;
} else {
}
if (unlikely(varonce50==NULL)) {
var51 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = "Error: no super method to call for `";
var56 = (val*)(36l<<2|1);
var57 = (val*)(36l<<2|1);
var58 = (val*)((long)(0)<<2|3);
var59 = (val*)((long)(0)<<2|3);
var55 = core__flat___CString___to_s_unsafe(var54, var56, var57, var58, var59);
var53 = var55;
varonce52 = var53;
}
((struct instance_core__NativeArray*)var51)->values[0]=var53;
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = "`.";
var64 = (val*)(2l<<2|1);
var65 = (val*)(2l<<2|1);
var66 = (val*)((long)(0)<<2|3);
var67 = (val*)((long)(0)<<2|3);
var63 = core__flat___CString___to_s_unsafe(var62, var64, var65, var66, var67);
var61 = var63;
varonce60 = var61;
}
((struct instance_core__NativeArray*)var51)->values[2]=var61;
} else {
var51 = varonce50;
varonce50 = NULL;
}
{
var68 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mproperty); /* to_s on <var_mproperty:MProperty(MMethod)>*/
}
((struct instance_core__NativeArray*)var51)->values[1]=var68;
{
var69 = ((val*(*)(val* self))(var51->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var51); /* native_to_s on <var51:NativeArray[String]>*/
}
varonce50 = var51;
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var69); /* Direct call typing$TypeVisitor$error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
var70 = core___core__SequenceRead___Collection__first(var_superprops);
}
var_superprop = var70;
{
{ /* Inline model$MMethodDef$msignature (var_superprop) on <var_superprop:MMethodDef> */
var73 = var_superprop->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_superprop:MMethodDef> */
var71 = var73;
RET_LABEL72:(void)0;
}
}
if (unlikely(var71 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 2053);
fatal_exit(1);
}
var_msignature = var71;
{
var74 = nitc__typing___nitc__typing__TypeVisitor___resolve_for(var_v, var_msignature, var_recvtype, 1);
}
/* <var74:MType> isa MSignature */
cltype76 = type_nitc__MSignature.color;
idtype77 = type_nitc__MSignature.id;
if(cltype76 >= var74->type->table_size) {
var75 = 0;
} else {
var75 = var74->type->type_table[cltype76] == idtype77;
}
if (unlikely(!var75)) {
var_class_name = var74 == NULL ? "null" : var74->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MSignature", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 2054);
fatal_exit(1);
}
var_msignature = var74;
{
{ /* Inline parser_nodes$ASuperExpr$n_args (self) on <self:ASuperExpr> */
var80 = self->attrs[COLOR_nitc__parser_nodes__ASuperExpr___n_args].val; /* _n_args on <self:ASuperExpr> */
if (unlikely(var80 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2429);
fatal_exit(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
var81 = nitc__typing___AExprs___to_a(var78);
}
var_args = var81;
{
{ /* Inline array$AbstractArrayRead$length (var_args) on <var_args:Array[AExpr]> */
var84 = var_args->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_args:Array[AExpr]> */
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var82,0l) on <var82:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var87 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var87)) {
var_class_name90 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name90);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var91 = var82 > 0l;
var85 = var91;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
if (var85){
{
var92 = nitc__typing___nitc__typing__TypeVisitor___check_signature(var_v, self, var_args, var_mproperty, var_msignature);
}
{
{ /* Inline typing$ASuperExpr$signaturemap= (self,var92) on <self:ASuperExpr> */
self->attrs[COLOR_nitc__typing__ASuperExpr___signaturemap].val = var92; /* _signaturemap on <self:ASuperExpr> */
RET_LABEL93:(void)0;
}
}
} else {
}
{
{ /* Inline model$MSignature$return_mtype (var_msignature) on <var_msignature:MSignature> */
var96 = var_msignature->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:MSignature> */
var94 = var96;
RET_LABEL95:(void)0;
}
}
{
{ /* Inline typing$AExpr$mtype= (self,var94) on <self:ASuperExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var94; /* _mtype on <self:ASuperExpr> */
RET_LABEL97:(void)0;
}
}
{
{ /* Inline typing$AExpr$is_typed= (self,1) on <self:ASuperExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = 1; /* _is_typed on <self:ASuperExpr> */
RET_LABEL98:(void)0;
}
}
{
{ /* Inline typing$TypeVisitor$mpropdef (var_v) on <var_v:TypeVisitor> */
var101 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___mpropdef].val; /* _mpropdef on <var_v:TypeVisitor> */
var99 = var101;
RET_LABEL100:(void)0;
}
}
if (var99 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 2061);
fatal_exit(1);
} else {
{ /* Inline modelize_property$MPropDef$has_supercall= (var99,1) on <var99:nullable MPropDef> */
if (unlikely(var99 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 484);
fatal_exit(1);
}
var99->attrs[COLOR_nitc__modelize_property__MPropDef___has_supercall].s = 1; /* _has_supercall on <var99:nullable MPropDef> */
RET_LABEL102:(void)0;
}
}
{
{ /* Inline typing$TypeVisitor$mpropdef (var_v) on <var_v:TypeVisitor> */
var105 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___mpropdef].val; /* _mpropdef on <var_v:TypeVisitor> */
var103 = var105;
RET_LABEL104:(void)0;
}
}
/* <var103:nullable MPropDef> isa MMethodDef */
cltype107 = type_nitc__MMethodDef.color;
idtype108 = type_nitc__MMethodDef.id;
if(var103 == NULL) {
var106 = 0;
} else {
if(cltype107 >= var103->type->table_size) {
var106 = 0;
} else {
var106 = var103->type->type_table[cltype107] == idtype108;
}
}
if (unlikely(!var106)) {
var_class_name109 = var103 == NULL ? "null" : var103->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MMethodDef", var_class_name109);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 2062);
fatal_exit(1);
}
{
{ /* Inline typing$ASuperExpr$mpropdef= (self,var103) on <self:ASuperExpr> */
self->attrs[COLOR_nitc__typing__ASuperExpr___mpropdef].val = var103; /* _mpropdef on <self:ASuperExpr> */
RET_LABEL110:(void)0;
}
}
RET_LABEL:;
}
/* method typing$ASuperExpr$signaturemap for (self: ASuperExpr): nullable SignatureMap */
val* nitc__typing___ASuperExpr___signaturemap(val* self) {
val* var /* : nullable SignatureMap */;
val* var1 /* : nullable SignatureMap */;
var1 = self->attrs[COLOR_nitc__typing__ASuperExpr___signaturemap].val; /* _signaturemap on <self:ASuperExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing$ASuperExpr$signaturemap= for (self: ASuperExpr, nullable SignatureMap) */
void nitc__typing___ASuperExpr___signaturemap_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__ASuperExpr___signaturemap].val = p0; /* _signaturemap on <self:ASuperExpr> */
RET_LABEL:;
}
/* method typing$ASuperExpr$process_superinit for (self: ASuperExpr, TypeVisitor) */
void nitc__typing___ASuperExpr___process_superinit(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MClassType */;
val* var2 /* : nullable MClassType */;
val* var_anchor /* var anchor: nullable MClassType */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : Variable */;
val* var10 /* : Variable */;
val* var11 /* : nullable MType */;
val* var_recvtype /* var recvtype: nullable MType */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : nullable MPropDef */;
val* var19 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MPropDef */;
short int var20 /* : Bool */;
int cltype;
int idtype;
val* var21 /* : MProperty */;
val* var23 /* : MProperty */;
val* var_mproperty /* var mproperty: MMethod */;
val* var_superprop /* var superprop: nullable MMethodDef */;
val* var24 /* : MClassDef */;
val* var26 /* : MClassDef */;
val* var27 /* : Array[MClassType] */;
val* var29 /* : Array[MClassType] */;
val* var_ /* var : Array[MClassType] */;
val* var30 /* : IndexedIterator[nullable Object] */;
val* var_31 /* var : IndexedIterator[MClassType] */;
short int var32 /* : Bool */;
val* var33 /* : nullable Object */;
val* var_msupertype /* var msupertype: MClassType */;
val* var34 /* : MModule */;
val* var36 /* : MModule */;
val* var37 /* : MClassType */;
val* var38 /* : ModelBuilder */;
val* var40 /* : ModelBuilder */;
val* var41 /* : ToolContext */;
val* var43 /* : ToolContext */;
long var44 /* : Int */;
long var46 /* : Int */;
long var_errcount /* var errcount: Int */;
val* var47 /* : String */;
val* var49 /* : String */;
val* var50 /* : nullable MProperty */;
short int var51 /* : Bool */;
int cltype52;
int idtype53;
const char* var_class_name;
val* var_candidate /* var candidate: nullable MMethod */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
val* var_other57 /* var other: nullable Object */;
short int var58 /* : Bool */;
short int var60 /* : Bool */;
val* var61 /* : ModelBuilder */;
val* var63 /* : ModelBuilder */;
val* var64 /* : ToolContext */;
val* var66 /* : ToolContext */;
long var67 /* : Int */;
long var69 /* : Int */;
short int var70 /* : Bool */;
short int var72 /* : Bool */;
int cltype73;
int idtype74;
const char* var_class_name75;
short int var76 /* : Bool */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
short int var80 /* : Bool */;
short int var82 /* : Bool */;
short int var83 /* : Bool */;
short int var_84 /* var : Bool */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
short int var88 /* : Bool */;
short int var89 /* : Bool */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
short int var93 /* : Bool */;
short int var94 /* : Bool */;
short int var_95 /* var : Bool */;
val* var96 /* : MProperty */;
val* var98 /* : MProperty */;
short int var99 /* : Bool */;
short int var101 /* : Bool */;
short int var102 /* : Bool */;
short int var_103 /* var : Bool */;
val* var104 /* : MProperty */;
val* var106 /* : MProperty */;
short int var107 /* : Bool */;
short int var109 /* : Bool */;
short int var110 /* : Bool */;
val* var111 /* : NativeArray[String] */;
static val* varonce;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : CString */;
val* var115 /* : String */;
val* var116 /* : nullable Int */;
val* var117 /* : nullable Int */;
val* var118 /* : nullable Bool */;
val* var119 /* : nullable Bool */;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : CString */;
val* var123 /* : String */;
val* var124 /* : nullable Int */;
val* var125 /* : nullable Int */;
val* var126 /* : nullable Bool */;
val* var127 /* : nullable Bool */;
static val* varonce128;
val* var129 /* : String */;
char* var130 /* : CString */;
val* var131 /* : String */;
val* var132 /* : nullable Int */;
val* var133 /* : nullable Int */;
val* var134 /* : nullable Bool */;
val* var135 /* : nullable Bool */;
static val* varonce136;
val* var137 /* : String */;
char* var138 /* : CString */;
val* var139 /* : String */;
val* var140 /* : nullable Int */;
val* var141 /* : nullable Int */;
val* var142 /* : nullable Bool */;
val* var143 /* : nullable Bool */;
val* var144 /* : String */;
val* var145 /* : String */;
val* var146 /* : MProperty */;
val* var148 /* : MProperty */;
val* var149 /* : String */;
val* var150 /* : String */;
val* var151 /* : MModule */;
val* var153 /* : MModule */;
val* var154 /* : Array[MPropDef] */;
val* var_candidatedefs /* var candidatedefs: Array[MMethodDef] */;
short int var155 /* : Bool */;
short int var156 /* : Bool */;
short int var157 /* : Bool */;
short int var159 /* : Bool */;
short int var160 /* : Bool */;
short int var_161 /* var : Bool */;
val* var162 /* : MProperty */;
val* var164 /* : MProperty */;
short int var165 /* : Bool */;
short int var167 /* : Bool */;
short int var169 /* : Bool */;
val* var170 /* : nullable Object */;
short int var171 /* : Bool */;
short int var173 /* : Bool */;
short int var175 /* : Bool */;
long var176 /* : Int */;
long var178 /* : Int */;
short int var179 /* : Bool */;
short int var181 /* : Bool */;
int cltype182;
int idtype183;
const char* var_class_name184;
short int var185 /* : Bool */;
val* var187 /* : NativeArray[String] */;
static val* varonce186;
static val* varonce188;
val* var189 /* : String */;
char* var190 /* : CString */;
val* var191 /* : String */;
val* var192 /* : nullable Int */;
val* var193 /* : nullable Int */;
val* var194 /* : nullable Bool */;
val* var195 /* : nullable Bool */;
static val* varonce196;
val* var197 /* : String */;
char* var198 /* : CString */;
val* var199 /* : String */;
val* var200 /* : nullable Int */;
val* var201 /* : nullable Int */;
val* var202 /* : nullable Bool */;
val* var203 /* : nullable Bool */;
static val* varonce204;
val* var205 /* : String */;
char* var206 /* : CString */;
val* var207 /* : String */;
val* var208 /* : nullable Int */;
val* var209 /* : nullable Int */;
val* var210 /* : nullable Bool */;
val* var211 /* : nullable Bool */;
val* var212 /* : String */;
val* var213 /* : String */;
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
val* var224 /* : nullable Object */;
short int var225 /* : Bool */;
short int var226 /* : Bool */;
short int var228 /* : Bool */;
short int var230 /* : Bool */;
val* var232 /* : NativeArray[String] */;
static val* varonce231;
static val* varonce233;
val* var234 /* : String */;
char* var235 /* : CString */;
val* var236 /* : String */;
val* var237 /* : nullable Int */;
val* var238 /* : nullable Int */;
val* var239 /* : nullable Bool */;
val* var240 /* : nullable Bool */;
static val* varonce241;
val* var242 /* : String */;
char* var243 /* : CString */;
val* var244 /* : String */;
val* var245 /* : nullable Int */;
val* var246 /* : nullable Int */;
val* var247 /* : nullable Bool */;
val* var248 /* : nullable Bool */;
val* var249 /* : String */;
val* var250 /* : String */;
val* var251 /* : MSignature */;
val* var252 /* : nullable MSignature */;
val* var254 /* : nullable MSignature */;
val* var255 /* : nullable MSignature */;
val* var257 /* : nullable MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var258 /* : MType */;
short int var259 /* : Bool */;
int cltype260;
int idtype261;
const char* var_class_name262;
val* var263 /* : CallSite */;
val* var264 /* : Location */;
val* var265 /* : MModule */;
val* var267 /* : MModule */;
val* var268 /* : nullable MClassType */;
val* var270 /* : nullable MClassType */;
val* var271 /* : MProperty */;
val* var273 /* : MProperty */;
val* var_callsite /* var callsite: CallSite */;
val* var275 /* : AExprs */;
val* var277 /* : AExprs */;
val* var278 /* : Array[AExpr] */;
val* var_args /* var args: Array[AExpr] */;
long var279 /* : Int */;
long var281 /* : Int */;
short int var282 /* : Bool */;
short int var284 /* : Bool */;
int cltype285;
int idtype286;
const char* var_class_name287;
short int var288 /* : Bool */;
short int var289 /* : Bool */;
val* var290 /* : nullable MSignature */;
val* var292 /* : nullable MSignature */;
long var293 /* : Int */;
long var294 /* : Int */;
short int var295 /* : Bool */;
short int var297 /* : Bool */;
int cltype298;
int idtype299;
const char* var_class_name300;
short int var301 /* : Bool */;
val* var303 /* : NativeArray[String] */;
static val* varonce302;
static val* varonce304;
val* var305 /* : String */;
char* var306 /* : CString */;
val* var307 /* : String */;
val* var308 /* : nullable Int */;
val* var309 /* : nullable Int */;
val* var310 /* : nullable Bool */;
val* var311 /* : nullable Bool */;
static val* varonce312;
val* var313 /* : String */;
char* var314 /* : CString */;
val* var315 /* : String */;
val* var316 /* : nullable Int */;
val* var317 /* : nullable Int */;
val* var318 /* : nullable Bool */;
val* var319 /* : nullable Bool */;
static val* varonce320;
val* var321 /* : String */;
char* var322 /* : CString */;
val* var323 /* : String */;
val* var324 /* : nullable Int */;
val* var325 /* : nullable Int */;
val* var326 /* : nullable Bool */;
val* var327 /* : nullable Bool */;
static val* varonce328;
val* var329 /* : String */;
char* var330 /* : CString */;
val* var331 /* : String */;
val* var332 /* : nullable Int */;
val* var333 /* : nullable Int */;
val* var334 /* : nullable Bool */;
val* var335 /* : nullable Bool */;
val* var336 /* : nullable MSignature */;
val* var338 /* : nullable MSignature */;
long var339 /* : Int */;
val* var340 /* : String */;
long var341 /* : Int */;
val* var342 /* : String */;
val* var343 /* : String */;
val* var344 /* : String */;
long var_i /* var i: Int */;
val* var345 /* : Array[MParameter] */;
val* var347 /* : Array[MParameter] */;
val* var_348 /* var : Array[MParameter] */;
val* var349 /* : IndexedIterator[nullable Object] */;
val* var_350 /* var : IndexedIterator[MParameter] */;
short int var351 /* : Bool */;
val* var353 /* : nullable Object */;
val* var_sp /* var sp: MParameter */;
val* var354 /* : nullable MSignature */;
val* var356 /* : nullable MSignature */;
val* var357 /* : Array[MParameter] */;
val* var359 /* : Array[MParameter] */;
val* var360 /* : nullable Object */;
val* var_p /* var p: MParameter */;
val* var361 /* : MType */;
val* var363 /* : MType */;
val* var364 /* : MType */;
val* var366 /* : MType */;
short int var367 /* : Bool */;
short int var368 /* : Bool */;
val* var370 /* : NativeArray[String] */;
static val* varonce369;
static val* varonce371;
val* var372 /* : String */;
char* var373 /* : CString */;
val* var374 /* : String */;
val* var375 /* : nullable Int */;
val* var376 /* : nullable Int */;
val* var377 /* : nullable Bool */;
val* var378 /* : nullable Bool */;
static val* varonce379;
val* var380 /* : String */;
char* var381 /* : CString */;
val* var382 /* : String */;
val* var383 /* : nullable Int */;
val* var384 /* : nullable Int */;
val* var385 /* : nullable Bool */;
val* var386 /* : nullable Bool */;
static val* varonce387;
val* var388 /* : String */;
char* var389 /* : CString */;
val* var390 /* : String */;
val* var391 /* : nullable Int */;
val* var392 /* : nullable Int */;
val* var393 /* : nullable Bool */;
val* var394 /* : nullable Bool */;
static val* varonce395;
val* var396 /* : String */;
char* var397 /* : CString */;
val* var398 /* : String */;
val* var399 /* : nullable Int */;
val* var400 /* : nullable Int */;
val* var401 /* : nullable Bool */;
val* var402 /* : nullable Bool */;
static val* varonce403;
val* var404 /* : String */;
char* var405 /* : CString */;
val* var406 /* : String */;
val* var407 /* : nullable Int */;
val* var408 /* : nullable Int */;
val* var409 /* : nullable Bool */;
val* var410 /* : nullable Bool */;
val* var411 /* : String */;
val* var412 /* : MType */;
val* var414 /* : MType */;
val* var415 /* : String */;
val* var416 /* : String */;
val* var418 /* : String */;
val* var419 /* : MType */;
val* var421 /* : MType */;
val* var422 /* : String */;
val* var423 /* : String */;
val* var424 /* : String */;
long var425 /* : Int */;
short int var427 /* : Bool */;
int cltype428;
int idtype429;
const char* var_class_name430;
long var431 /* : Int */;
var_v = p0;
{
{ /* Inline typing$TypeVisitor$anchor (var_v) on <var_v:TypeVisitor> */
var2 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___anchor].val; /* _anchor on <var_v:TypeVisitor> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_anchor = var;
if (var_anchor == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_anchor,((val*)NULL)) on <var_anchor:nullable MClassType> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_anchor->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_anchor, var_other); /* == on <var_anchor:nullable MClassType(MClassType)>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (unlikely(!var3)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 2072);
fatal_exit(1);
}
{
{ /* Inline typing$TypeVisitor$selfvariable (var_v) on <var_v:TypeVisitor> */
var10 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___selfvariable].val; /* _selfvariable on <var_v:TypeVisitor> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _selfvariable");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 51);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nitc__typing___nitc__typing__TypeVisitor___get_variable(var_v, self, var8);
}
var_recvtype = var11;
if (var_recvtype == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_recvtype,((val*)NULL)) on <var_recvtype:nullable MType> */
var_other = ((val*)NULL);
{
var15 = ((short int(*)(val* self, val* p0))(var_recvtype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_recvtype, var_other); /* == on <var_recvtype:nullable MType(MType)>*/
}
var16 = !var15;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (unlikely(!var12)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 2074);
fatal_exit(1);
}
{
{ /* Inline typing$TypeVisitor$mpropdef (var_v) on <var_v:TypeVisitor> */
var19 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___mpropdef].val; /* _mpropdef on <var_v:TypeVisitor> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_mpropdef = var17;
/* <var_mpropdef:nullable MPropDef> isa MMethodDef */
cltype = type_nitc__MMethodDef.color;
idtype = type_nitc__MMethodDef.id;
if(var_mpropdef == NULL) {
var20 = 0;
} else {
if(cltype >= var_mpropdef->type->table_size) {
var20 = 0;
} else {
var20 = var_mpropdef->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var20)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 2076);
fatal_exit(1);
}
{
{ /* Inline model$MPropDef$mproperty (var_mpropdef) on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var23 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MPropDef(MMethodDef)> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
var_mproperty = var21;
var_superprop = ((val*)NULL);
{
{ /* Inline model$MPropDef$mclassdef (var_mpropdef) on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var26 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MPropDef(MMethodDef)> */
if (unlikely(var26 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline model$MClassDef$supertypes (var24) on <var24:MClassDef> */
var29 = var24->attrs[COLOR_nitc__model__MClassDef___supertypes].val; /* _supertypes on <var24:MClassDef> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supertypes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 666);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_ = var27;
{
var30 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_31 = var30;
for(;;) {
{
var32 = ((short int(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_31); /* is_ok on <var_31:IndexedIterator[MClassType]>*/
}
if (var32){
} else {
goto BREAK_label;
}
{
var33 = ((val*(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_31); /* item on <var_31:IndexedIterator[MClassType]>*/
}
var_msupertype = var33;
{
{ /* Inline typing$TypeVisitor$mmodule (var_v) on <var_v:TypeVisitor> */
var36 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___mmodule].val; /* _mmodule on <var_v:TypeVisitor> */
if (unlikely(var36 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 37);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
var37 = nitc___nitc__MClassType___MType__anchor_to(var_msupertype, var34, var_anchor);
}
var_msupertype = var37;
{
{ /* Inline typing$TypeVisitor$modelbuilder (var_v) on <var_v:TypeVisitor> */
var40 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <var_v:TypeVisitor> */
if (unlikely(var40 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var38) on <var38:ModelBuilder> */
var43 = var38->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var38:ModelBuilder> */
if (unlikely(var43 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline toolcontext$ToolContext$error_count (var41) on <var41:ToolContext> */
var46 = var41->attrs[COLOR_nitc__toolcontext__ToolContext___error_count].l; /* _error_count on <var41:ToolContext> */
var44 = var46;
RET_LABEL45:(void)0;
}
}
var_errcount = var44;
{
{ /* Inline model$MProperty$name (var_mproperty) on <var_mproperty:MMethod> */
var49 = var_mproperty->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var_mproperty:MMethod> */
if (unlikely(var49 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
var50 = nitc__typing___nitc__typing__TypeVisitor___try_get_mproperty_by_name2(var_v, self, var_msupertype, var47);
}
/* <var50:nullable MProperty> isa nullable MMethod */
cltype52 = type_nullable__nitc__MMethod.color;
idtype53 = type_nullable__nitc__MMethod.id;
if(var50 == NULL) {
var51 = 1;
} else {
if(cltype52 >= var50->type->table_size) {
var51 = 0;
} else {
var51 = var50->type->type_table[cltype52] == idtype53;
}
}
if (unlikely(!var51)) {
var_class_name = var50 == NULL ? "null" : var50->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MMethod", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 2082);
fatal_exit(1);
}
var_candidate = var50;
if (var_candidate == NULL) {
var54 = 1; /* is null */
} else {
var54 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_candidate,((val*)NULL)) on <var_candidate:nullable MMethod> */
var_other57 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_candidate,var_other57) on <var_candidate:nullable MMethod(MMethod)> */
var60 = var_candidate == var_other57;
var58 = var60;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
}
var55 = var58;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
var54 = var55;
}
if (var54){
{
{ /* Inline typing$TypeVisitor$modelbuilder (var_v) on <var_v:TypeVisitor> */
var63 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <var_v:TypeVisitor> */
if (unlikely(var63 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var61) on <var61:ModelBuilder> */
var66 = var61->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var61:ModelBuilder> */
if (unlikely(var66 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
{ /* Inline toolcontext$ToolContext$error_count (var64) on <var64:ToolContext> */
var69 = var64->attrs[COLOR_nitc__toolcontext__ToolContext___error_count].l; /* _error_count on <var64:ToolContext> */
var67 = var69;
RET_LABEL68:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var67,var_errcount) on <var67:Int> */
/* Covariant cast for argument 0 (i) <var_errcount:Int> isa OTHER */
/* <var_errcount:Int> isa OTHER */
var72 = 1; /* easy <var_errcount:Int> isa OTHER*/
if (unlikely(!var72)) {
var_class_name75 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name75);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var76 = var67 > var_errcount;
var70 = var76;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
if (var70){
goto RET_LABEL;
} else {
}
goto BREAK_label77;
} else {
}
if (var_superprop == NULL) {
var79 = 0; /* is null */
} else {
var79 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_superprop,((val*)NULL)) on <var_superprop:nullable MMethodDef> */
var_other = ((val*)NULL);
{
var82 = ((short int(*)(val* self, val* p0))(var_superprop->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_superprop, var_other); /* == on <var_superprop:nullable MMethodDef(MMethodDef)>*/
}
var83 = !var82;
var80 = var83;
goto RET_LABEL81;
RET_LABEL81:(void)0;
}
var79 = var80;
}
var_84 = var79;
if (var79){
{
{ /* Inline model$MMethod$is_root_init (var_candidate) on <var_candidate:nullable MMethod(MMethod)> */
var87 = var_candidate->attrs[COLOR_nitc__model__MMethod___is_root_init].s; /* _is_root_init on <var_candidate:nullable MMethod(MMethod)> */
var85 = var87;
RET_LABEL86:(void)0;
}
}
var78 = var85;
} else {
var78 = var_84;
}
if (var78){
goto BREAK_label77;
} else {
}
if (var_superprop == NULL) {
var90 = 0; /* is null */
} else {
var90 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_superprop,((val*)NULL)) on <var_superprop:nullable MMethodDef> */
var_other = ((val*)NULL);
{
var93 = ((short int(*)(val* self, val* p0))(var_superprop->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_superprop, var_other); /* == on <var_superprop:nullable MMethodDef(MMethodDef)>*/
}
var94 = !var93;
var91 = var94;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
var90 = var91;
}
var_95 = var90;
if (var90){
{
{ /* Inline model$MPropDef$mproperty (var_superprop) on <var_superprop:nullable MMethodDef(MMethodDef)> */
var98 = var_superprop->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_superprop:nullable MMethodDef(MMethodDef)> */
if (unlikely(var98 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var96 = var98;
RET_LABEL97:(void)0;
}
}
{
{ /* Inline kernel$Object$!= (var96,var_candidate) on <var96:MProperty(MMethod)> */
var_other = var_candidate;
{
var101 = ((short int(*)(val* self, val* p0))(var96->class->vft[COLOR_core__kernel__Object___61d_61d]))(var96, var_other); /* == on <var96:MProperty(MMethod)>*/
}
var102 = !var101;
var99 = var102;
goto RET_LABEL100;
RET_LABEL100:(void)0;
}
}
var89 = var99;
} else {
var89 = var_95;
}
var_103 = var89;
if (var89){
{
{ /* Inline model$MPropDef$mproperty (var_superprop) on <var_superprop:nullable MMethodDef(MMethodDef)> */
var106 = var_superprop->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_superprop:nullable MMethodDef(MMethodDef)> */
if (unlikely(var106 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var104 = var106;
RET_LABEL105:(void)0;
}
}
{
{ /* Inline model$MMethod$is_root_init (var104) on <var104:MProperty(MMethod)> */
var109 = var104->attrs[COLOR_nitc__model__MMethod___is_root_init].s; /* _is_root_init on <var104:MProperty(MMethod)> */
var107 = var109;
RET_LABEL108:(void)0;
}
}
var110 = !var107;
var88 = var110;
} else {
var88 = var_103;
}
if (var88){
if (unlikely(varonce==NULL)) {
var111 = NEW_core__NativeArray((int)7l, &type_core__NativeArray__core__String);
if (likely(varonce112!=NULL)) {
var113 = varonce112;
} else {
var114 = "Error: conflicting super constructor to call for `";
var116 = (val*)(50l<<2|1);
var117 = (val*)(50l<<2|1);
var118 = (val*)((long)(0)<<2|3);
var119 = (val*)((long)(0)<<2|3);
var115 = core__flat___CString___to_s_unsafe(var114, var116, var117, var118, var119);
var113 = var115;
varonce112 = var113;
}
((struct instance_core__NativeArray*)var111)->values[0]=var113;
if (likely(varonce120!=NULL)) {
var121 = varonce120;
} else {
var122 = "`: `";
var124 = (val*)(4l<<2|1);
var125 = (val*)(4l<<2|1);
var126 = (val*)((long)(0)<<2|3);
var127 = (val*)((long)(0)<<2|3);
var123 = core__flat___CString___to_s_unsafe(var122, var124, var125, var126, var127);
var121 = var123;
varonce120 = var121;
}
((struct instance_core__NativeArray*)var111)->values[2]=var121;
if (likely(varonce128!=NULL)) {
var129 = varonce128;
} else {
var130 = "`, `";
var132 = (val*)(4l<<2|1);
var133 = (val*)(4l<<2|1);
var134 = (val*)((long)(0)<<2|3);
var135 = (val*)((long)(0)<<2|3);
var131 = core__flat___CString___to_s_unsafe(var130, var132, var133, var134, var135);
var129 = var131;
varonce128 = var129;
}
((struct instance_core__NativeArray*)var111)->values[4]=var129;
if (likely(varonce136!=NULL)) {
var137 = varonce136;
} else {
var138 = "`";
var140 = (val*)(1l<<2|1);
var141 = (val*)(1l<<2|1);
var142 = (val*)((long)(0)<<2|3);
var143 = (val*)((long)(0)<<2|3);
var139 = core__flat___CString___to_s_unsafe(var138, var140, var141, var142, var143);
var137 = var139;
varonce136 = var137;
}
((struct instance_core__NativeArray*)var111)->values[6]=var137;
} else {
var111 = varonce;
varonce = NULL;
}
{
var144 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mproperty); /* to_s on <var_mproperty:MMethod>*/
}
((struct instance_core__NativeArray*)var111)->values[1]=var144;
{
var145 = nitc___nitc__MProperty___nitc__model_base__MEntity__full_name(var_candidate);
}
((struct instance_core__NativeArray*)var111)->values[3]=var145;
{
{ /* Inline model$MPropDef$mproperty (var_superprop) on <var_superprop:nullable MMethodDef(MMethodDef)> */
var148 = var_superprop->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_superprop:nullable MMethodDef(MMethodDef)> */
if (unlikely(var148 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var146 = var148;
RET_LABEL147:(void)0;
}
}
{
var149 = nitc___nitc__MProperty___nitc__model_base__MEntity__full_name(var146);
}
((struct instance_core__NativeArray*)var111)->values[5]=var149;
{
var150 = ((val*(*)(val* self))(var111->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var111); /* native_to_s on <var111:NativeArray[String]>*/
}
varonce = var111;
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var150); /* Direct call typing$TypeVisitor$error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline typing$TypeVisitor$mmodule (var_v) on <var_v:TypeVisitor> */
var153 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___mmodule].val; /* _mmodule on <var_v:TypeVisitor> */
if (unlikely(var153 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 37);
fatal_exit(1);
}
var151 = var153;
RET_LABEL152:(void)0;
}
}
{
var154 = nitc___nitc__MProperty___lookup_definitions(var_candidate, var151, var_anchor);
}
var_candidatedefs = var154;
if (var_superprop == NULL) {
var156 = 0; /* is null */
} else {
var156 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_superprop,((val*)NULL)) on <var_superprop:nullable MMethodDef> */
var_other = ((val*)NULL);
{
var159 = ((short int(*)(val* self, val* p0))(var_superprop->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_superprop, var_other); /* == on <var_superprop:nullable MMethodDef(MMethodDef)>*/
}
var160 = !var159;
var157 = var160;
goto RET_LABEL158;
RET_LABEL158:(void)0;
}
var156 = var157;
}
var_161 = var156;
if (var156){
{
{ /* Inline model$MPropDef$mproperty (var_superprop) on <var_superprop:nullable MMethodDef(MMethodDef)> */
var164 = var_superprop->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_superprop:nullable MMethodDef(MMethodDef)> */
if (unlikely(var164 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var162 = var164;
RET_LABEL163:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var162,var_candidate) on <var162:MProperty(MMethod)> */
var_other57 = var_candidate;
{
{ /* Inline kernel$Object$is_same_instance (var162,var_other57) on <var162:MProperty(MMethod)> */
var169 = var162 == var_other57;
var167 = var169;
goto RET_LABEL168;
RET_LABEL168:(void)0;
}
}
var165 = var167;
goto RET_LABEL166;
RET_LABEL166:(void)0;
}
}
var155 = var165;
} else {
var155 = var_161;
}
if (var155){
{
var170 = core___core__SequenceRead___Collection__first(var_candidatedefs);
}
{
{ /* Inline kernel$Object$== (var_superprop,var170) on <var_superprop:nullable MMethodDef(MMethodDef)> */
var_other57 = var170;
{
{ /* Inline kernel$Object$is_same_instance (var_superprop,var_other57) on <var_superprop:nullable MMethodDef(MMethodDef)> */
var175 = var_superprop == var_other57;
var173 = var175;
goto RET_LABEL174;
RET_LABEL174:(void)0;
}
}
var171 = var173;
goto RET_LABEL172;
RET_LABEL172:(void)0;
}
}
if (var171){
goto BREAK_label77;
} else {
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_candidatedefs, var_superprop); /* Direct call array$Array$add on <var_candidatedefs:Array[MMethodDef]>*/
}
} else {
}
{
{ /* Inline array$AbstractArrayRead$length (var_candidatedefs) on <var_candidatedefs:Array[MMethodDef]> */
var178 = var_candidatedefs->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_candidatedefs:Array[MMethodDef]> */
var176 = var178;
RET_LABEL177:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var176,1l) on <var176:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var181 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var181)) {
var_class_name184 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name184);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var185 = var176 > 1l;
var179 = var185;
goto RET_LABEL180;
RET_LABEL180:(void)0;
}
}
if (var179){
if (unlikely(varonce186==NULL)) {
var187 = NEW_core__NativeArray((int)6l, &type_core__NativeArray__core__String);
if (likely(varonce188!=NULL)) {
var189 = varonce188;
} else {
var190 = "Error: conflicting property definitions for property `";
var192 = (val*)(54l<<2|1);
var193 = (val*)(54l<<2|1);
var194 = (val*)((long)(0)<<2|3);
var195 = (val*)((long)(0)<<2|3);
var191 = core__flat___CString___to_s_unsafe(var190, var192, var193, var194, var195);
var189 = var191;
varonce188 = var189;
}
((struct instance_core__NativeArray*)var187)->values[0]=var189;
if (likely(varonce196!=NULL)) {
var197 = varonce196;
} else {
var198 = "` in `";
var200 = (val*)(6l<<2|1);
var201 = (val*)(6l<<2|1);
var202 = (val*)((long)(0)<<2|3);
var203 = (val*)((long)(0)<<2|3);
var199 = core__flat___CString___to_s_unsafe(var198, var200, var201, var202, var203);
var197 = var199;
varonce196 = var197;
}
((struct instance_core__NativeArray*)var187)->values[2]=var197;
if (likely(varonce204!=NULL)) {
var205 = varonce204;
} else {
var206 = "`: ";
var208 = (val*)(3l<<2|1);
var209 = (val*)(3l<<2|1);
var210 = (val*)((long)(0)<<2|3);
var211 = (val*)((long)(0)<<2|3);
var207 = core__flat___CString___to_s_unsafe(var206, var208, var209, var210, var211);
var205 = var207;
varonce204 = var205;
}
((struct instance_core__NativeArray*)var187)->values[4]=var205;
} else {
var187 = varonce186;
varonce186 = NULL;
}
{
var212 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mproperty); /* to_s on <var_mproperty:MMethod>*/
}
((struct instance_core__NativeArray*)var187)->values[1]=var212;
{
var213 = ((val*(*)(val* self))(var_recvtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recvtype); /* to_s on <var_recvtype:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var187)->values[3]=var213;
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
var222 = core__abstract_text___Collection___join(var_candidatedefs, var215, ((val*)NULL));
}
((struct instance_core__NativeArray*)var187)->values[5]=var222;
{
var223 = ((val*(*)(val* self))(var187->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var187); /* native_to_s on <var187:NativeArray[String]>*/
}
varonce186 = var187;
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var223); /* Direct call typing$TypeVisitor$error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
var224 = core___core__SequenceRead___Collection__first(var_candidatedefs);
}
var_superprop = var224;
BREAK_label77: (void)0;
{
((void(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_31); /* next on <var_31:IndexedIterator[MClassType]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_31); /* finish on <var_31:IndexedIterator[MClassType]>*/
}
if (var_superprop == NULL) {
var225 = 1; /* is null */
} else {
var225 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_superprop,((val*)NULL)) on <var_superprop:nullable MMethodDef> */
var_other57 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_superprop,var_other57) on <var_superprop:nullable MMethodDef(MMethodDef)> */
var230 = var_superprop == var_other57;
var228 = var230;
goto RET_LABEL229;
RET_LABEL229:(void)0;
}
}
var226 = var228;
goto RET_LABEL227;
RET_LABEL227:(void)0;
}
var225 = var226;
}
if (var225){
if (unlikely(varonce231==NULL)) {
var232 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce233!=NULL)) {
var234 = varonce233;
} else {
var235 = "Error: no super method to call for `";
var237 = (val*)(36l<<2|1);
var238 = (val*)(36l<<2|1);
var239 = (val*)((long)(0)<<2|3);
var240 = (val*)((long)(0)<<2|3);
var236 = core__flat___CString___to_s_unsafe(var235, var237, var238, var239, var240);
var234 = var236;
varonce233 = var234;
}
((struct instance_core__NativeArray*)var232)->values[0]=var234;
if (likely(varonce241!=NULL)) {
var242 = varonce241;
} else {
var243 = "`.";
var245 = (val*)(2l<<2|1);
var246 = (val*)(2l<<2|1);
var247 = (val*)((long)(0)<<2|3);
var248 = (val*)((long)(0)<<2|3);
var244 = core__flat___CString___to_s_unsafe(var243, var245, var246, var247, var248);
var242 = var244;
varonce241 = var242;
}
((struct instance_core__NativeArray*)var232)->values[2]=var242;
} else {
var232 = varonce231;
varonce231 = NULL;
}
{
var249 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mproperty); /* to_s on <var_mproperty:MMethod>*/
}
((struct instance_core__NativeArray*)var232)->values[1]=var249;
{
var250 = ((val*(*)(val* self))(var232->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var232); /* native_to_s on <var232:NativeArray[String]>*/
}
varonce231 = var232;
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var250); /* Direct call typing$TypeVisitor$error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MMethodDef$new_msignature (var_superprop) on <var_superprop:nullable MMethodDef(MMethodDef)> */
var254 = var_superprop->attrs[COLOR_nitc__model__MMethodDef___new_msignature].val; /* _new_msignature on <var_superprop:nullable MMethodDef(MMethodDef)> */
var252 = var254;
RET_LABEL253:(void)0;
}
}
if (var252!=NULL) {
var251 = var252;
} else {
{
{ /* Inline model$MMethodDef$msignature (var_superprop) on <var_superprop:nullable MMethodDef(MMethodDef)> */
var257 = var_superprop->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_superprop:nullable MMethodDef(MMethodDef)> */
var255 = var257;
RET_LABEL256:(void)0;
}
}
if (unlikely(var255 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 2110);
fatal_exit(1);
}
var251 = var255;
}
var_msignature = var251;
{
var258 = nitc__typing___nitc__typing__TypeVisitor___resolve_for(var_v, var_msignature, var_recvtype, 1);
}
/* <var258:MType> isa MSignature */
cltype260 = type_nitc__MSignature.color;
idtype261 = type_nitc__MSignature.id;
if(cltype260 >= var258->type->table_size) {
var259 = 0;
} else {
var259 = var258->type->type_table[cltype260] == idtype261;
}
if (unlikely(!var259)) {
var_class_name262 = var258 == NULL ? "null" : var258->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MSignature", var_class_name262);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 2111);
fatal_exit(1);
}
var_msignature = var258;
var263 = NEW_nitc__CallSite(&type_nitc__CallSite);
{
var264 = nitc___nitc__ANode___hot_location(self);
}
{
{ /* Inline typing$TypeVisitor$mmodule (var_v) on <var_v:TypeVisitor> */
var267 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___mmodule].val; /* _mmodule on <var_v:TypeVisitor> */
if (unlikely(var267 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 37);
fatal_exit(1);
}
var265 = var267;
RET_LABEL266:(void)0;
}
}
{
{ /* Inline typing$TypeVisitor$anchor (var_v) on <var_v:TypeVisitor> */
var270 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___anchor].val; /* _anchor on <var_v:TypeVisitor> */
var268 = var270;
RET_LABEL269:(void)0;
}
}
{
{ /* Inline model$MPropDef$mproperty (var_superprop) on <var_superprop:nullable MMethodDef(MMethodDef)> */
var273 = var_superprop->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_superprop:nullable MMethodDef(MMethodDef)> */
if (unlikely(var273 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var271 = var273;
RET_LABEL272:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var263->class->vft[COLOR_nitc__typing__CallSite__location_61d]))(var263, var264); /* location= on <var263:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var263->class->vft[COLOR_nitc__typing__CallSite__recv_61d]))(var263, var_recvtype); /* recv= on <var263:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var263->class->vft[COLOR_nitc__typing__CallSite__mmodule_61d]))(var263, var265); /* mmodule= on <var263:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var263->class->vft[COLOR_nitc__typing__CallSite__anchor_61d]))(var263, var268); /* anchor= on <var263:CallSite>*/
}
{
((void(*)(val* self, short int p0))(var263->class->vft[COLOR_nitc__typing__CallSite__recv_is_self_61d]))(var263, 1); /* recv_is_self= on <var263:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var263->class->vft[COLOR_nitc__typing__CallSite__mproperty_61d]))(var263, var271); /* mproperty= on <var263:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var263->class->vft[COLOR_nitc__typing__CallSite__mpropdef_61d]))(var263, var_superprop); /* mpropdef= on <var263:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var263->class->vft[COLOR_nitc__typing__CallSite__msignature_61d]))(var263, var_msignature); /* msignature= on <var263:CallSite>*/
}
{
((void(*)(val* self, short int p0))(var263->class->vft[COLOR_nitc__typing__CallSite__erasure_cast_61d]))(var263, 0); /* erasure_cast= on <var263:CallSite>*/
}
{
((void(*)(val* self))(var263->class->vft[COLOR_core__kernel__Object__init]))(var263); /* init on <var263:CallSite>*/
}
var_callsite = var263;
{
{ /* Inline typing$ASuperExpr$callsite= (self,var_callsite) on <self:ASuperExpr> */
self->attrs[COLOR_nitc__typing__ASuperExpr___callsite].val = var_callsite; /* _callsite on <self:ASuperExpr> */
RET_LABEL274:(void)0;
}
}
{
{ /* Inline parser_nodes$ASuperExpr$n_args (self) on <self:ASuperExpr> */
var277 = self->attrs[COLOR_nitc__parser_nodes__ASuperExpr___n_args].val; /* _n_args on <self:ASuperExpr> */
if (unlikely(var277 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2429);
fatal_exit(1);
}
var275 = var277;
RET_LABEL276:(void)0;
}
}
{
var278 = nitc__typing___AExprs___to_a(var275);
}
var_args = var278;
{
{ /* Inline array$AbstractArrayRead$length (var_args) on <var_args:Array[AExpr]> */
var281 = var_args->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_args:Array[AExpr]> */
var279 = var281;
RET_LABEL280:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var279,0l) on <var279:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var284 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var284)) {
var_class_name287 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name287);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var288 = var279 > 0l;
var282 = var288;
goto RET_LABEL283;
RET_LABEL283:(void)0;
}
}
if (var282){
{
var289 = nitc___nitc__CallSite___check_signature(var_callsite, var_v, self, var_args);
}
} else {
{
{ /* Inline model$MMethodDef$msignature (var_mpropdef) on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var292 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var290 = var292;
RET_LABEL291:(void)0;
}
}
if (var290 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 2121);
fatal_exit(1);
} else {
var293 = nitc___nitc__MSignature___arity(var290);
}
{
var294 = nitc___nitc__MSignature___arity(var_msignature);
}
{
{ /* Inline kernel$Int$< (var293,var294) on <var293:Int> */
/* Covariant cast for argument 0 (i) <var294:Int> isa OTHER */
/* <var294:Int> isa OTHER */
var297 = 1; /* easy <var294:Int> isa OTHER*/
if (unlikely(!var297)) {
var_class_name300 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name300);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var301 = var293 < var294;
var295 = var301;
goto RET_LABEL296;
RET_LABEL296:(void)0;
}
}
if (var295){
if (unlikely(varonce302==NULL)) {
var303 = NEW_core__NativeArray((int)7l, &type_core__NativeArray__core__String);
if (likely(varonce304!=NULL)) {
var305 = varonce304;
} else {
var306 = "Error: not enough implicit arguments to pass. Got `";
var308 = (val*)(51l<<2|1);
var309 = (val*)(51l<<2|1);
var310 = (val*)((long)(0)<<2|3);
var311 = (val*)((long)(0)<<2|3);
var307 = core__flat___CString___to_s_unsafe(var306, var308, var309, var310, var311);
var305 = var307;
varonce304 = var305;
}
((struct instance_core__NativeArray*)var303)->values[0]=var305;
if (likely(varonce312!=NULL)) {
var313 = varonce312;
} else {
var314 = "`, expected at least `";
var316 = (val*)(22l<<2|1);
var317 = (val*)(22l<<2|1);
var318 = (val*)((long)(0)<<2|3);
var319 = (val*)((long)(0)<<2|3);
var315 = core__flat___CString___to_s_unsafe(var314, var316, var317, var318, var319);
var313 = var315;
varonce312 = var313;
}
((struct instance_core__NativeArray*)var303)->values[2]=var313;
if (likely(varonce320!=NULL)) {
var321 = varonce320;
} else {
var322 = "`. Signature is `";
var324 = (val*)(17l<<2|1);
var325 = (val*)(17l<<2|1);
var326 = (val*)((long)(0)<<2|3);
var327 = (val*)((long)(0)<<2|3);
var323 = core__flat___CString___to_s_unsafe(var322, var324, var325, var326, var327);
var321 = var323;
varonce320 = var321;
}
((struct instance_core__NativeArray*)var303)->values[4]=var321;
if (likely(varonce328!=NULL)) {
var329 = varonce328;
} else {
var330 = "`.";
var332 = (val*)(2l<<2|1);
var333 = (val*)(2l<<2|1);
var334 = (val*)((long)(0)<<2|3);
var335 = (val*)((long)(0)<<2|3);
var331 = core__flat___CString___to_s_unsafe(var330, var332, var333, var334, var335);
var329 = var331;
varonce328 = var329;
}
((struct instance_core__NativeArray*)var303)->values[6]=var329;
} else {
var303 = varonce302;
varonce302 = NULL;
}
{
{ /* Inline model$MMethodDef$msignature (var_mpropdef) on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var338 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var336 = var338;
RET_LABEL337:(void)0;
}
}
if (var336 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 2122);
fatal_exit(1);
} else {
var339 = nitc___nitc__MSignature___arity(var336);
}
var340 = core__flat___Int___core__abstract_text__Object__to_s(var339);
((struct instance_core__NativeArray*)var303)->values[1]=var340;
{
var341 = nitc___nitc__MSignature___arity(var_msignature);
}
var342 = core__flat___Int___core__abstract_text__Object__to_s(var341);
((struct instance_core__NativeArray*)var303)->values[3]=var342;
{
var343 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_msignature); /* to_s on <var_msignature:MSignature>*/
}
((struct instance_core__NativeArray*)var303)->values[5]=var343;
{
var344 = ((val*(*)(val* self))(var303->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var303); /* native_to_s on <var303:NativeArray[String]>*/
}
varonce302 = var303;
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var344); /* Direct call typing$TypeVisitor$error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
var_i = 0l;
{
{ /* Inline model$MSignature$mparameters (var_msignature) on <var_msignature:MSignature> */
var347 = var_msignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var347 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var345 = var347;
RET_LABEL346:(void)0;
}
}
var_348 = var345;
{
var349 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_348);
}
var_350 = var349;
for(;;) {
{
var351 = ((short int(*)(val* self))((((long)var_350&3)?class_info[((long)var_350&3)]:var_350->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_350); /* is_ok on <var_350:IndexedIterator[MParameter]>*/
}
if (var351){
} else {
goto BREAK_label352;
}
{
var353 = ((val*(*)(val* self))((((long)var_350&3)?class_info[((long)var_350&3)]:var_350->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_350); /* item on <var_350:IndexedIterator[MParameter]>*/
}
var_sp = var353;
{
{ /* Inline model$MMethodDef$msignature (var_mpropdef) on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var356 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var354 = var356;
RET_LABEL355:(void)0;
}
}
if (var354 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 2128);
fatal_exit(1);
} else {
{ /* Inline model$MSignature$mparameters (var354) on <var354:nullable MSignature> */
if (unlikely(var354 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var359 = var354->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var354:nullable MSignature> */
if (unlikely(var359 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var357 = var359;
RET_LABEL358:(void)0;
}
}
{
var360 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var357, var_i);
}
var_p = var360;
{
{ /* Inline model$MParameter$mtype (var_p) on <var_p:MParameter> */
var363 = var_p->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_p:MParameter> */
if (unlikely(var363 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var361 = var363;
RET_LABEL362:(void)0;
}
}
{
{ /* Inline model$MParameter$mtype (var_sp) on <var_sp:MParameter> */
var366 = var_sp->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_sp:MParameter> */
if (unlikely(var366 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var364 = var366;
RET_LABEL365:(void)0;
}
}
{
var367 = nitc__typing___nitc__typing__TypeVisitor___is_subtype(var_v, var361, var364);
}
var368 = !var367;
if (var368){
if (unlikely(varonce369==NULL)) {
var370 = NEW_core__NativeArray((int)10l, &type_core__NativeArray__core__String);
if (likely(varonce371!=NULL)) {
var372 = varonce371;
} else {
var373 = "Type Error: expected argument #";
var375 = (val*)(31l<<2|1);
var376 = (val*)(31l<<2|1);
var377 = (val*)((long)(0)<<2|3);
var378 = (val*)((long)(0)<<2|3);
var374 = core__flat___CString___to_s_unsafe(var373, var375, var376, var377, var378);
var372 = var374;
varonce371 = var372;
}
((struct instance_core__NativeArray*)var370)->values[0]=var372;
if (likely(varonce379!=NULL)) {
var380 = varonce379;
} else {
var381 = " of type `";
var383 = (val*)(10l<<2|1);
var384 = (val*)(10l<<2|1);
var385 = (val*)((long)(0)<<2|3);
var386 = (val*)((long)(0)<<2|3);
var382 = core__flat___CString___to_s_unsafe(var381, var383, var384, var385, var386);
var380 = var382;
varonce379 = var380;
}
((struct instance_core__NativeArray*)var370)->values[2]=var380;
if (likely(varonce387!=NULL)) {
var388 = varonce387;
} else {
var389 = "`, got implicit argument `";
var391 = (val*)(26l<<2|1);
var392 = (val*)(26l<<2|1);
var393 = (val*)((long)(0)<<2|3);
var394 = (val*)((long)(0)<<2|3);
var390 = core__flat___CString___to_s_unsafe(var389, var391, var392, var393, var394);
var388 = var390;
varonce387 = var388;
}
((struct instance_core__NativeArray*)var370)->values[4]=var388;
if (likely(varonce395!=NULL)) {
var396 = varonce395;
} else {
var397 = "` of type `";
var399 = (val*)(11l<<2|1);
var400 = (val*)(11l<<2|1);
var401 = (val*)((long)(0)<<2|3);
var402 = (val*)((long)(0)<<2|3);
var398 = core__flat___CString___to_s_unsafe(var397, var399, var400, var401, var402);
var396 = var398;
varonce395 = var396;
}
((struct instance_core__NativeArray*)var370)->values[6]=var396;
if (likely(varonce403!=NULL)) {
var404 = varonce403;
} else {
var405 = "`. Signature is ";
var407 = (val*)(16l<<2|1);
var408 = (val*)(16l<<2|1);
var409 = (val*)((long)(0)<<2|3);
var410 = (val*)((long)(0)<<2|3);
var406 = core__flat___CString___to_s_unsafe(var405, var407, var408, var409, var410);
var404 = var406;
varonce403 = var404;
}
((struct instance_core__NativeArray*)var370)->values[8]=var404;
} else {
var370 = varonce369;
varonce369 = NULL;
}
var411 = core__flat___Int___core__abstract_text__Object__to_s(var_i);
((struct instance_core__NativeArray*)var370)->values[1]=var411;
{
{ /* Inline model$MParameter$mtype (var_sp) on <var_sp:MParameter> */
var414 = var_sp->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_sp:MParameter> */
if (unlikely(var414 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var412 = var414;
RET_LABEL413:(void)0;
}
}
{
var415 = ((val*(*)(val* self))(var412->class->vft[COLOR_core__abstract_text__Object__to_s]))(var412); /* to_s on <var412:MType>*/
}
((struct instance_core__NativeArray*)var370)->values[3]=var415;
{
{ /* Inline model$MParameter$name (var_p) on <var_p:MParameter> */
var418 = var_p->attrs[COLOR_nitc__model__MParameter___name].val; /* _name on <var_p:MParameter> */
if (unlikely(var418 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1993);
fatal_exit(1);
}
var416 = var418;
RET_LABEL417:(void)0;
}
}
((struct instance_core__NativeArray*)var370)->values[5]=var416;
{
{ /* Inline model$MParameter$mtype (var_p) on <var_p:MParameter> */
var421 = var_p->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_p:MParameter> */
if (unlikely(var421 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var419 = var421;
RET_LABEL420:(void)0;
}
}
{
var422 = ((val*(*)(val* self))(var419->class->vft[COLOR_core__abstract_text__Object__to_s]))(var419); /* to_s on <var419:MType>*/
}
((struct instance_core__NativeArray*)var370)->values[7]=var422;
{
var423 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_msignature); /* to_s on <var_msignature:MSignature>*/
}
((struct instance_core__NativeArray*)var370)->values[9]=var423;
{
var424 = ((val*(*)(val* self))(var370->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var370); /* native_to_s on <var370:NativeArray[String]>*/
}
varonce369 = var370;
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var424); /* Direct call typing$TypeVisitor$error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var427 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var427)) {
var_class_name430 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name430);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var431 = var_i + 1l;
var425 = var431;
goto RET_LABEL426;
RET_LABEL426:(void)0;
}
}
var_i = var425;
{
((void(*)(val* self))((((long)var_350&3)?class_info[((long)var_350&3)]:var_350->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_350); /* next on <var_350:IndexedIterator[MParameter]>*/
}
}
BREAK_label352: (void)0;
{
((void(*)(val* self))((((long)var_350&3)?class_info[((long)var_350&3)]:var_350->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_350); /* finish on <var_350:IndexedIterator[MParameter]>*/
}
}
{
{ /* Inline typing$AExpr$is_typed= (self,1) on <self:ASuperExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = 1; /* _is_typed on <self:ASuperExpr> */
RET_LABEL432:(void)0;
}
}
RET_LABEL:;
}
/* method typing$ANewExpr$callsite for (self: ANewExpr): nullable CallSite */
val* nitc__typing___ANewExpr___callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nitc__typing__ANewExpr___callsite].val; /* _callsite on <self:ANewExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing$ANewExpr$callsite= for (self: ANewExpr, nullable CallSite) */
void nitc__typing___ANewExpr___callsite_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__ANewExpr___callsite].val = p0; /* _callsite on <self:ANewExpr> */
RET_LABEL:;
}
/* method typing$ANewExpr$recvtype for (self: ANewExpr): nullable MClassType */
val* nitc__typing___ANewExpr___recvtype(val* self) {
val* var /* : nullable MClassType */;
val* var1 /* : nullable MClassType */;
var1 = self->attrs[COLOR_nitc__typing__ANewExpr___recvtype].val; /* _recvtype on <self:ANewExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing$ANewExpr$recvtype= for (self: ANewExpr, nullable MClassType) */
void nitc__typing___ANewExpr___recvtype_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__ANewExpr___recvtype].val = p0; /* _recvtype on <self:ANewExpr> */
RET_LABEL:;
}
/* method typing$ANewExpr$accept_typing for (self: ANewExpr, TypeVisitor) */
void nitc__typing___ANewExpr___AExpr__accept_typing(val* self, val* p0) {
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
char* var18 /* : CString */;
val* var19 /* : String */;
val* var20 /* : nullable Int */;
val* var21 /* : nullable Int */;
val* var22 /* : nullable Bool */;
val* var23 /* : nullable Bool */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : CString */;
val* var27 /* : String */;
val* var28 /* : nullable Int */;
val* var29 /* : nullable Int */;
val* var30 /* : nullable Bool */;
val* var31 /* : nullable Bool */;
val* var32 /* : String */;
val* var33 /* : String */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
val* var38 /* : NativeArray[String] */;
static val* varonce37;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : CString */;
val* var42 /* : String */;
val* var43 /* : nullable Int */;
val* var44 /* : nullable Int */;
val* var45 /* : nullable Bool */;
val* var46 /* : nullable Bool */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : CString */;
val* var50 /* : String */;
val* var51 /* : nullable Int */;
val* var52 /* : nullable Int */;
val* var53 /* : nullable Bool */;
val* var54 /* : nullable Bool */;
val* var55 /* : String */;
val* var56 /* : String */;
val* var58 /* : NativeArray[String] */;
static val* varonce57;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : CString */;
val* var62 /* : String */;
val* var63 /* : nullable Int */;
val* var64 /* : nullable Int */;
val* var65 /* : nullable Bool */;
val* var66 /* : nullable Bool */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : CString */;
val* var70 /* : String */;
val* var71 /* : nullable Int */;
val* var72 /* : nullable Int */;
val* var73 /* : nullable Bool */;
val* var74 /* : nullable Bool */;
val* var75 /* : String */;
val* var76 /* : String */;
val* var78 /* : MClass */;
val* var80 /* : MClass */;
val* var81 /* : MClassKind */;
val* var83 /* : MClassKind */;
val* var_kind /* var kind: MClassKind */;
val* var84 /* : nullable AQid */;
val* var86 /* : nullable AQid */;
val* var_nqid /* var nqid: nullable AQid */;
short int var87 /* : Bool */;
short int var88 /* : Bool */;
val* var_other90 /* var other: nullable Object */;
short int var91 /* : Bool */;
short int var92 /* : Bool */;
val* var93 /* : TId */;
val* var95 /* : TId */;
val* var96 /* : String */;
val* var_name /* var name: String */;
val* var_node /* var node: ANode */;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : CString */;
val* var100 /* : String */;
val* var101 /* : nullable Int */;
val* var102 /* : nullable Int */;
val* var103 /* : nullable Bool */;
val* var104 /* : nullable Bool */;
val* var105 /* : TKwnew */;
val* var107 /* : TKwnew */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : CString */;
val* var111 /* : String */;
val* var112 /* : nullable Int */;
val* var113 /* : nullable Int */;
val* var114 /* : nullable Bool */;
val* var115 /* : nullable Bool */;
short int var116 /* : Bool */;
val* var117 /* : Sys */;
val* var118 /* : MClassKind */;
short int var119 /* : Bool */;
short int var121 /* : Bool */;
short int var122 /* : Bool */;
val* var124 /* : NativeArray[String] */;
static val* varonce123;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : CString */;
val* var128 /* : String */;
val* var129 /* : nullable Int */;
val* var130 /* : nullable Int */;
val* var131 /* : nullable Bool */;
val* var132 /* : nullable Bool */;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : CString */;
val* var136 /* : String */;
val* var137 /* : nullable Int */;
val* var138 /* : nullable Int */;
val* var139 /* : nullable Bool */;
val* var140 /* : nullable Bool */;
static val* varonce141;
val* var142 /* : String */;
char* var143 /* : CString */;
val* var144 /* : String */;
val* var145 /* : nullable Int */;
val* var146 /* : nullable Int */;
val* var147 /* : nullable Bool */;
val* var148 /* : nullable Bool */;
val* var149 /* : String */;
val* var150 /* : String */;
val* var151 /* : String */;
val* var152 /* : AExprs */;
val* var154 /* : AExprs */;
val* var155 /* : ANodes[AExpr] */;
val* var157 /* : ANodes[AExpr] */;
short int var158 /* : Bool */;
val* var159 /* : AExprs */;
val* var161 /* : AExprs */;
static val* varonce162;
val* var163 /* : String */;
char* var164 /* : CString */;
val* var165 /* : String */;
val* var166 /* : nullable Int */;
val* var167 /* : nullable Int */;
val* var168 /* : nullable Bool */;
val* var169 /* : nullable Bool */;
val* var171 /* : nullable CallSite */;
val* var_callsite /* var callsite: nullable CallSite */;
short int var172 /* : Bool */;
short int var173 /* : Bool */;
short int var175 /* : Bool */;
short int var177 /* : Bool */;
val* var178 /* : MMethod */;
val* var180 /* : MMethod */;
short int var181 /* : Bool */;
short int var183 /* : Bool */;
short int var184 /* : Bool */;
val* var185 /* : Sys */;
val* var186 /* : MClassKind */;
short int var187 /* : Bool */;
short int var189 /* : Bool */;
short int var190 /* : Bool */;
val* var192 /* : NativeArray[String] */;
static val* varonce191;
static val* varonce193;
val* var194 /* : String */;
char* var195 /* : CString */;
val* var196 /* : String */;
val* var197 /* : nullable Int */;
val* var198 /* : nullable Int */;
val* var199 /* : nullable Bool */;
val* var200 /* : nullable Bool */;
static val* varonce201;
val* var202 /* : String */;
char* var203 /* : CString */;
val* var204 /* : String */;
val* var205 /* : nullable Int */;
val* var206 /* : nullable Int */;
val* var207 /* : nullable Bool */;
val* var208 /* : nullable Bool */;
static val* varonce209;
val* var210 /* : String */;
char* var211 /* : CString */;
val* var212 /* : String */;
val* var213 /* : nullable Int */;
val* var214 /* : nullable Int */;
val* var215 /* : nullable Bool */;
val* var216 /* : nullable Bool */;
val* var217 /* : String */;
val* var218 /* : String */;
val* var219 /* : String */;
val* var221 /* : MSignature */;
val* var223 /* : MSignature */;
val* var224 /* : nullable MType */;
val* var226 /* : nullable MType */;
val* var228 /* : nullable MType */;
val* var230 /* : nullable MType */;
short int var231 /* : Bool */;
short int var232 /* : Bool */;
short int var234 /* : Bool */;
short int var235 /* : Bool */;
val* var237 /* : MMethod */;
val* var239 /* : MMethod */;
val* var240 /* : MClass */;
val* var242 /* : MClass */;
short int var243 /* : Bool */;
short int var244 /* : Bool */;
val* var246 /* : NativeArray[String] */;
static val* varonce245;
static val* varonce247;
val* var248 /* : String */;
char* var249 /* : CString */;
val* var250 /* : String */;
val* var251 /* : nullable Int */;
val* var252 /* : nullable Int */;
val* var253 /* : nullable Bool */;
val* var254 /* : nullable Bool */;
static val* varonce255;
val* var256 /* : String */;
char* var257 /* : CString */;
val* var258 /* : String */;
val* var259 /* : nullable Int */;
val* var260 /* : nullable Int */;
val* var261 /* : nullable Bool */;
val* var262 /* : nullable Bool */;
val* var263 /* : String */;
val* var264 /* : AExprs */;
val* var266 /* : AExprs */;
val* var267 /* : Array[AExpr] */;
val* var_args /* var args: Array[AExpr] */;
short int var268 /* : Bool */;
var_v = p0;
{
{ /* Inline parser_nodes$ANewExpr$n_type (self) on <self:ANewExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ANewExpr___n_type].val; /* _n_type on <self:ANewExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2340);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__typing___nitc__typing__TypeVisitor___resolve_mtype(var_v, var);
}
var_recvtype = var3;
if (var_recvtype == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_recvtype,((val*)NULL)) on <var_recvtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_recvtype,var_other) on <var_recvtype:nullable MType(MType)> */
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
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var_recvtype->type->table_size) {
var10 = 0;
} else {
var10 = var_recvtype->type->type_table[cltype] == idtype;
}
var11 = !var10;
if (var11){
/* <var_recvtype:nullable MType(MType)> isa MNullableType */
cltype13 = type_nitc__MNullableType.color;
idtype14 = type_nitc__MNullableType.id;
if(cltype13 >= var_recvtype->type->table_size) {
var12 = 0;
} else {
var12 = var_recvtype->type->type_table[cltype13] == idtype14;
}
if (var12){
if (unlikely(varonce==NULL)) {
var15 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "Type Error: cannot instantiate the nullable type `";
var20 = (val*)(50l<<2|1);
var21 = (val*)(50l<<2|1);
var22 = (val*)((long)(0)<<2|3);
var23 = (val*)((long)(0)<<2|3);
var19 = core__flat___CString___to_s_unsafe(var18, var20, var21, var22, var23);
var17 = var19;
varonce16 = var17;
}
((struct instance_core__NativeArray*)var15)->values[0]=var17;
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "`.";
var28 = (val*)(2l<<2|1);
var29 = (val*)(2l<<2|1);
var30 = (val*)((long)(0)<<2|3);
var31 = (val*)((long)(0)<<2|3);
var27 = core__flat___CString___to_s_unsafe(var26, var28, var29, var30, var31);
var25 = var27;
varonce24 = var25;
}
((struct instance_core__NativeArray*)var15)->values[2]=var25;
} else {
var15 = varonce;
varonce = NULL;
}
{
var32 = ((val*(*)(val* self))(var_recvtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recvtype); /* to_s on <var_recvtype:nullable MType(MNullableType)>*/
}
((struct instance_core__NativeArray*)var15)->values[1]=var32;
{
var33 = ((val*(*)(val* self))(var15->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var15); /* native_to_s on <var15:NativeArray[String]>*/
}
varonce = var15;
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var33); /* Direct call typing$TypeVisitor$error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
/* <var_recvtype:nullable MType(MType)> isa MFormalType */
cltype35 = type_nitc__MFormalType.color;
idtype36 = type_nitc__MFormalType.id;
if(cltype35 >= var_recvtype->type->table_size) {
var34 = 0;
} else {
var34 = var_recvtype->type->type_table[cltype35] == idtype36;
}
if (var34){
if (unlikely(varonce37==NULL)) {
var38 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = "Type Error: cannot instantiate the formal type `";
var43 = (val*)(48l<<2|1);
var44 = (val*)(48l<<2|1);
var45 = (val*)((long)(0)<<2|3);
var46 = (val*)((long)(0)<<2|3);
var42 = core__flat___CString___to_s_unsafe(var41, var43, var44, var45, var46);
var40 = var42;
varonce39 = var40;
}
((struct instance_core__NativeArray*)var38)->values[0]=var40;
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "`.";
var51 = (val*)(2l<<2|1);
var52 = (val*)(2l<<2|1);
var53 = (val*)((long)(0)<<2|3);
var54 = (val*)((long)(0)<<2|3);
var50 = core__flat___CString___to_s_unsafe(var49, var51, var52, var53, var54);
var48 = var50;
varonce47 = var48;
}
((struct instance_core__NativeArray*)var38)->values[2]=var48;
} else {
var38 = varonce37;
varonce37 = NULL;
}
{
var55 = ((val*(*)(val* self))(var_recvtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recvtype); /* to_s on <var_recvtype:nullable MType(MFormalType)>*/
}
((struct instance_core__NativeArray*)var38)->values[1]=var55;
{
var56 = ((val*(*)(val* self))(var38->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var38); /* native_to_s on <var38:NativeArray[String]>*/
}
varonce37 = var38;
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var56); /* Direct call typing$TypeVisitor$error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
if (unlikely(varonce57==NULL)) {
var58 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce59!=NULL)) {
var60 = varonce59;
} else {
var61 = "Type Error: cannot instantiate the type `";
var63 = (val*)(41l<<2|1);
var64 = (val*)(41l<<2|1);
var65 = (val*)((long)(0)<<2|3);
var66 = (val*)((long)(0)<<2|3);
var62 = core__flat___CString___to_s_unsafe(var61, var63, var64, var65, var66);
var60 = var62;
varonce59 = var60;
}
((struct instance_core__NativeArray*)var58)->values[0]=var60;
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = "`.";
var71 = (val*)(2l<<2|1);
var72 = (val*)(2l<<2|1);
var73 = (val*)((long)(0)<<2|3);
var74 = (val*)((long)(0)<<2|3);
var70 = core__flat___CString___to_s_unsafe(var69, var71, var72, var73, var74);
var68 = var70;
varonce67 = var68;
}
((struct instance_core__NativeArray*)var58)->values[2]=var68;
} else {
var58 = varonce57;
varonce57 = NULL;
}
{
var75 = ((val*(*)(val* self))(var_recvtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recvtype); /* to_s on <var_recvtype:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var58)->values[1]=var75;
{
var76 = ((val*(*)(val* self))(var58->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var58); /* native_to_s on <var58:NativeArray[String]>*/
}
varonce57 = var58;
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var76); /* Direct call typing$TypeVisitor$error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
}
}
} else {
}
{
{ /* Inline typing$ANewExpr$recvtype= (self,var_recvtype) on <self:ANewExpr> */
self->attrs[COLOR_nitc__typing__ANewExpr___recvtype].val = var_recvtype; /* _recvtype on <self:ANewExpr> */
RET_LABEL77:(void)0;
}
}
{
{ /* Inline model$MClassType$mclass (var_recvtype) on <var_recvtype:nullable MType(MClassType)> */
var80 = var_recvtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_recvtype:nullable MType(MClassType)> */
if (unlikely(var80 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
{ /* Inline model$MClass$kind (var78) on <var78:MClass> */
var83 = var78->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var78:MClass> */
if (unlikely(var83 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
var_kind = var81;
{
{ /* Inline parser_nodes$ANewExpr$n_qid (self) on <self:ANewExpr> */
var86 = self->attrs[COLOR_nitc__parser_nodes__ANewExpr___n_qid].val; /* _n_qid on <self:ANewExpr> */
var84 = var86;
RET_LABEL85:(void)0;
}
}
var_nqid = var84;
if (var_nqid == NULL) {
var87 = 0; /* is null */
} else {
var87 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_nqid,((val*)NULL)) on <var_nqid:nullable AQid> */
var_other90 = ((val*)NULL);
{
var91 = ((short int(*)(val* self, val* p0))(var_nqid->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nqid, var_other90); /* == on <var_nqid:nullable AQid(AQid)>*/
}
var92 = !var91;
var88 = var92;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
var87 = var88;
}
if (var87){
{
{ /* Inline parser_nodes$AQid$n_id (var_nqid) on <var_nqid:nullable AQid(AQid)> */
var95 = var_nqid->attrs[COLOR_nitc__parser_nodes__AQid___n_id].val; /* _n_id on <var_nqid:nullable AQid(AQid)> */
if (unlikely(var95 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1721);
fatal_exit(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
{
var96 = nitc__lexer_work___Token___text(var93);
}
var_name = var96;
var_node = var_nqid;
} else {
if (likely(varonce97!=NULL)) {
var98 = varonce97;
} else {
var99 = "new";
var101 = (val*)(3l<<2|1);
var102 = (val*)(3l<<2|1);
var103 = (val*)((long)(0)<<2|3);
var104 = (val*)((long)(0)<<2|3);
var100 = core__flat___CString___to_s_unsafe(var99, var101, var102, var103, var104);
var98 = var100;
varonce97 = var98;
}
var_name = var98;
{
{ /* Inline parser_nodes$ANewExpr$n_kwnew (self) on <self:ANewExpr> */
var107 = self->attrs[COLOR_nitc__parser_nodes__ANewExpr___n_kwnew].val; /* _n_kwnew on <self:ANewExpr> */
if (unlikely(var107 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_kwnew");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2337);
fatal_exit(1);
}
var105 = var107;
RET_LABEL106:(void)0;
}
}
var_node = var105;
}
if (likely(varonce108!=NULL)) {
var109 = varonce108;
} else {
var110 = "intern";
var112 = (val*)(6l<<2|1);
var113 = (val*)(6l<<2|1);
var114 = (val*)((long)(0)<<2|3);
var115 = (val*)((long)(0)<<2|3);
var111 = core__flat___CString___to_s_unsafe(var110, var112, var113, var114, var115);
var109 = var111;
varonce108 = var109;
}
{
var116 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var109); /* == on <var_name:String>*/
}
if (var116){
var117 = glob_sys;
{
var118 = nitc__model___core__Sys___concrete_kind(var117);
}
{
{ /* Inline kernel$Object$!= (var_kind,var118) on <var_kind:MClassKind> */
var_other90 = var118;
{
var121 = ((short int(*)(val* self, val* p0))(var_kind->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_kind, var_other90); /* == on <var_kind:MClassKind>*/
}
var122 = !var121;
var119 = var122;
goto RET_LABEL120;
RET_LABEL120:(void)0;
}
}
if (var119){
if (unlikely(varonce123==NULL)) {
var124 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce125!=NULL)) {
var126 = varonce125;
} else {
var127 = "Type Error: cannot instantiate ";
var129 = (val*)(31l<<2|1);
var130 = (val*)(31l<<2|1);
var131 = (val*)((long)(0)<<2|3);
var132 = (val*)((long)(0)<<2|3);
var128 = core__flat___CString___to_s_unsafe(var127, var129, var130, var131, var132);
var126 = var128;
varonce125 = var126;
}
((struct instance_core__NativeArray*)var124)->values[0]=var126;
if (likely(varonce133!=NULL)) {
var134 = varonce133;
} else {
var135 = " ";
var137 = (val*)(1l<<2|1);
var138 = (val*)(1l<<2|1);
var139 = (val*)((long)(0)<<2|3);
var140 = (val*)((long)(0)<<2|3);
var136 = core__flat___CString___to_s_unsafe(var135, var137, var138, var139, var140);
var134 = var136;
varonce133 = var134;
}
((struct instance_core__NativeArray*)var124)->values[2]=var134;
if (likely(varonce141!=NULL)) {
var142 = varonce141;
} else {
var143 = ".";
var145 = (val*)(1l<<2|1);
var146 = (val*)(1l<<2|1);
var147 = (val*)((long)(0)<<2|3);
var148 = (val*)((long)(0)<<2|3);
var144 = core__flat___CString___to_s_unsafe(var143, var145, var146, var147, var148);
var142 = var144;
varonce141 = var142;
}
((struct instance_core__NativeArray*)var124)->values[4]=var142;
} else {
var124 = varonce123;
varonce123 = NULL;
}
{
var149 = ((val*(*)(val* self))(var_kind->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_kind); /* to_s on <var_kind:MClassKind>*/
}
((struct instance_core__NativeArray*)var124)->values[1]=var149;
{
var150 = ((val*(*)(val* self))(var_recvtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recvtype); /* to_s on <var_recvtype:nullable MType(MClassType)>*/
}
((struct instance_core__NativeArray*)var124)->values[3]=var150;
{
var151 = ((val*(*)(val* self))(var124->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var124); /* native_to_s on <var124:NativeArray[String]>*/
}
varonce123 = var124;
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var151); /* Direct call typing$TypeVisitor$error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes$ANewExpr$n_args (self) on <self:ANewExpr> */
var154 = self->attrs[COLOR_nitc__parser_nodes__ANewExpr___n_args].val; /* _n_args on <self:ANewExpr> */
if (unlikely(var154 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2346);
fatal_exit(1);
}
var152 = var154;
RET_LABEL153:(void)0;
}
}
{
{ /* Inline parser_nodes$AExprs$n_exprs (var152) on <var152:AExprs> */
var157 = var152->attrs[COLOR_nitc__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var152:AExprs> */
if (unlikely(var157 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2790);
fatal_exit(1);
}
var155 = var157;
RET_LABEL156:(void)0;
}
}
{
var158 = core___core__Collection___not_empty(var155);
}
if (var158){
{
{ /* Inline parser_nodes$ANewExpr$n_args (self) on <self:ANewExpr> */
var161 = self->attrs[COLOR_nitc__parser_nodes__ANewExpr___n_args].val; /* _n_args on <self:ANewExpr> */
if (unlikely(var161 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2346);
fatal_exit(1);
}
var159 = var161;
RET_LABEL160:(void)0;
}
}
if (likely(varonce162!=NULL)) {
var163 = varonce162;
} else {
var164 = "Type Error: the intern constructor expects no arguments.";
var166 = (val*)(56l<<2|1);
var167 = (val*)(56l<<2|1);
var168 = (val*)((long)(0)<<2|3);
var169 = (val*)((long)(0)<<2|3);
var165 = core__flat___CString___to_s_unsafe(var164, var166, var167, var168, var169);
var163 = var165;
varonce162 = var163;
}
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, var159, var163); /* Direct call typing$TypeVisitor$error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline typing$AExpr$mtype= (self,var_recvtype) on <self:ANewExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var_recvtype; /* _mtype on <self:ANewExpr> */
RET_LABEL170:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
var171 = nitc__typing___nitc__typing__TypeVisitor___get_method(var_v, var_node, var_recvtype, var_name, 0);
}
var_callsite = var171;
if (var_callsite == NULL) {
var172 = 1; /* is null */
} else {
var172 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_callsite,((val*)NULL)) on <var_callsite:nullable CallSite> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_callsite,var_other) on <var_callsite:nullable CallSite(CallSite)> */
var177 = var_callsite == var_other;
var175 = var177;
goto RET_LABEL176;
RET_LABEL176:(void)0;
}
}
var173 = var175;
goto RET_LABEL174;
RET_LABEL174:(void)0;
}
var172 = var173;
}
if (var172){
goto RET_LABEL;
} else {
}
{
{ /* Inline typing$CallSite$mproperty (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var180 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var180 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 656);
fatal_exit(1);
}
var178 = var180;
RET_LABEL179:(void)0;
}
}
{
{ /* Inline model$MMethod$is_new (var178) on <var178:MMethod> */
var183 = var178->attrs[COLOR_nitc__model__MMethod___is_new].s; /* _is_new on <var178:MMethod> */
var181 = var183;
RET_LABEL182:(void)0;
}
}
var184 = !var181;
if (var184){
var185 = glob_sys;
{
var186 = nitc__model___core__Sys___concrete_kind(var185);
}
{
{ /* Inline kernel$Object$!= (var_kind,var186) on <var_kind:MClassKind> */
var_other90 = var186;
{
var189 = ((short int(*)(val* self, val* p0))(var_kind->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_kind, var_other90); /* == on <var_kind:MClassKind>*/
}
var190 = !var189;
var187 = var190;
goto RET_LABEL188;
RET_LABEL188:(void)0;
}
}
if (var187){
if (unlikely(varonce191==NULL)) {
var192 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce193!=NULL)) {
var194 = varonce193;
} else {
var195 = "Type Error: cannot instantiate ";
var197 = (val*)(31l<<2|1);
var198 = (val*)(31l<<2|1);
var199 = (val*)((long)(0)<<2|3);
var200 = (val*)((long)(0)<<2|3);
var196 = core__flat___CString___to_s_unsafe(var195, var197, var198, var199, var200);
var194 = var196;
varonce193 = var194;
}
((struct instance_core__NativeArray*)var192)->values[0]=var194;
if (likely(varonce201!=NULL)) {
var202 = varonce201;
} else {
var203 = " `";
var205 = (val*)(2l<<2|1);
var206 = (val*)(2l<<2|1);
var207 = (val*)((long)(0)<<2|3);
var208 = (val*)((long)(0)<<2|3);
var204 = core__flat___CString___to_s_unsafe(var203, var205, var206, var207, var208);
var202 = var204;
varonce201 = var202;
}
((struct instance_core__NativeArray*)var192)->values[2]=var202;
if (likely(varonce209!=NULL)) {
var210 = varonce209;
} else {
var211 = "`.";
var213 = (val*)(2l<<2|1);
var214 = (val*)(2l<<2|1);
var215 = (val*)((long)(0)<<2|3);
var216 = (val*)((long)(0)<<2|3);
var212 = core__flat___CString___to_s_unsafe(var211, var213, var214, var215, var216);
var210 = var212;
varonce209 = var210;
}
((struct instance_core__NativeArray*)var192)->values[4]=var210;
} else {
var192 = varonce191;
varonce191 = NULL;
}
{
var217 = ((val*(*)(val* self))(var_kind->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_kind); /* to_s on <var_kind:MClassKind>*/
}
((struct instance_core__NativeArray*)var192)->values[1]=var217;
{
var218 = ((val*(*)(val* self))(var_recvtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recvtype); /* to_s on <var_recvtype:nullable MType(MClassType)>*/
}
((struct instance_core__NativeArray*)var192)->values[3]=var218;
{
var219 = ((val*(*)(val* self))(var192->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var192); /* native_to_s on <var192:NativeArray[String]>*/
}
varonce191 = var192;
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var219); /* Direct call typing$TypeVisitor$error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline typing$AExpr$mtype= (self,var_recvtype) on <self:ANewExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var_recvtype; /* _mtype on <self:ANewExpr> */
RET_LABEL220:(void)0;
}
}
} else {
{
{ /* Inline typing$CallSite$msignature (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var223 = var_callsite->attrs[COLOR_nitc__typing__CallSite___msignature].val; /* _msignature on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var223 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 663);
fatal_exit(1);
}
var221 = var223;
RET_LABEL222:(void)0;
}
}
{
{ /* Inline model$MSignature$return_mtype (var221) on <var221:MSignature> */
var226 = var221->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var221:MSignature> */
var224 = var226;
RET_LABEL225:(void)0;
}
}
{
{ /* Inline typing$AExpr$mtype= (self,var224) on <self:ANewExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var224; /* _mtype on <self:ANewExpr> */
RET_LABEL227:(void)0;
}
}
{
{ /* Inline typing$AExpr$mtype (self) on <self:ANewExpr> */
var230 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:ANewExpr> */
var228 = var230;
RET_LABEL229:(void)0;
}
}
if (var228 == NULL) {
var231 = 0; /* is null */
} else {
var231 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var228,((val*)NULL)) on <var228:nullable MType> */
var_other90 = ((val*)NULL);
{
var234 = ((short int(*)(val* self, val* p0))(var228->class->vft[COLOR_core__kernel__Object___61d_61d]))(var228, var_other90); /* == on <var228:nullable MType(MType)>*/
}
var235 = !var234;
var232 = var235;
goto RET_LABEL233;
RET_LABEL233:(void)0;
}
var231 = var232;
}
if (unlikely(!var231)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 2219);
fatal_exit(1);
}
}
{
{ /* Inline typing$ANewExpr$callsite= (self,var_callsite) on <self:ANewExpr> */
self->attrs[COLOR_nitc__typing__ANewExpr___callsite].val = var_callsite; /* _callsite on <self:ANewExpr> */
RET_LABEL236:(void)0;
}
}
{
{ /* Inline typing$CallSite$mproperty (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var239 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var239 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 656);
fatal_exit(1);
}
var237 = var239;
RET_LABEL238:(void)0;
}
}
{
{ /* Inline model$MClassType$mclass (var_recvtype) on <var_recvtype:nullable MType(MClassType)> */
var242 = var_recvtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_recvtype:nullable MType(MClassType)> */
if (unlikely(var242 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var240 = var242;
RET_LABEL241:(void)0;
}
}
{
var243 = nitc___nitc__MMethod___is_init_for(var237, var240);
}
var244 = !var243;
if (var244){
if (unlikely(varonce245==NULL)) {
var246 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce247!=NULL)) {
var248 = varonce247;
} else {
var249 = "Error: `";
var251 = (val*)(8l<<2|1);
var252 = (val*)(8l<<2|1);
var253 = (val*)((long)(0)<<2|3);
var254 = (val*)((long)(0)<<2|3);
var250 = core__flat___CString___to_s_unsafe(var249, var251, var252, var253, var254);
var248 = var250;
varonce247 = var248;
}
((struct instance_core__NativeArray*)var246)->values[0]=var248;
if (likely(varonce255!=NULL)) {
var256 = varonce255;
} else {
var257 = "` is not a constructor.";
var259 = (val*)(23l<<2|1);
var260 = (val*)(23l<<2|1);
var261 = (val*)((long)(0)<<2|3);
var262 = (val*)((long)(0)<<2|3);
var258 = core__flat___CString___to_s_unsafe(var257, var259, var260, var261, var262);
var256 = var258;
varonce255 = var256;
}
((struct instance_core__NativeArray*)var246)->values[2]=var256;
} else {
var246 = varonce245;
varonce245 = NULL;
}
((struct instance_core__NativeArray*)var246)->values[1]=var_name;
{
var263 = ((val*(*)(val* self))(var246->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var246); /* native_to_s on <var246:NativeArray[String]>*/
}
varonce245 = var246;
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var263); /* Direct call typing$TypeVisitor$error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes$ANewExpr$n_args (self) on <self:ANewExpr> */
var266 = self->attrs[COLOR_nitc__parser_nodes__ANewExpr___n_args].val; /* _n_args on <self:ANewExpr> */
if (unlikely(var266 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2346);
fatal_exit(1);
}
var264 = var266;
RET_LABEL265:(void)0;
}
}
{
var267 = nitc__typing___AExprs___to_a(var264);
}
var_args = var267;
{
var268 = nitc___nitc__CallSite___check_signature(var_callsite, var_v, var_node, var_args);
}
RET_LABEL:;
}
/* method typing$AAttrFormExpr$mproperty for (self: AAttrFormExpr): nullable MAttribute */
val* nitc__typing___AAttrFormExpr___mproperty(val* self) {
val* var /* : nullable MAttribute */;
val* var1 /* : nullable MAttribute */;
var1 = self->attrs[COLOR_nitc__typing__AAttrFormExpr___mproperty].val; /* _mproperty on <self:AAttrFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing$AAttrFormExpr$mproperty= for (self: AAttrFormExpr, nullable MAttribute) */
void nitc__typing___AAttrFormExpr___mproperty_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__AAttrFormExpr___mproperty].val = p0; /* _mproperty on <self:AAttrFormExpr> */
RET_LABEL:;
}
/* method typing$AAttrFormExpr$attr_type for (self: AAttrFormExpr): nullable MType */
val* nitc__typing___AAttrFormExpr___attr_type(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nitc__typing__AAttrFormExpr___attr_type].val; /* _attr_type on <self:AAttrFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing$AAttrFormExpr$attr_type= for (self: AAttrFormExpr, nullable MType) */
void nitc__typing___AAttrFormExpr___attr_type_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__AAttrFormExpr___attr_type].val = p0; /* _attr_type on <self:AAttrFormExpr> */
RET_LABEL:;
}
/* method typing$AAttrFormExpr$resolve_property for (self: AAttrFormExpr, TypeVisitor) */
void nitc__typing___AAttrFormExpr___resolve_property(val* self, val* p0) {
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
char* var18 /* : CString */;
val* var19 /* : String */;
val* var20 /* : nullable Int */;
val* var21 /* : nullable Int */;
val* var22 /* : nullable Bool */;
val* var23 /* : nullable Bool */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : CString */;
val* var27 /* : String */;
val* var28 /* : nullable Int */;
val* var29 /* : nullable Int */;
val* var30 /* : nullable Bool */;
val* var31 /* : nullable Bool */;
val* var32 /* : String */;
val* var33 /* : MType */;
val* var_unsafe_type /* var unsafe_type: MType */;
val* var34 /* : nullable MProperty */;
val* var_mproperty /* var mproperty: nullable MProperty */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
val* var41 /* : ModelBuilder */;
val* var43 /* : ModelBuilder */;
val* var45 /* : NativeArray[String] */;
static val* varonce44;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : CString */;
val* var49 /* : String */;
val* var50 /* : nullable Int */;
val* var51 /* : nullable Int */;
val* var52 /* : nullable Bool */;
val* var53 /* : nullable Bool */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : CString */;
val* var57 /* : String */;
val* var58 /* : nullable Int */;
val* var59 /* : nullable Int */;
val* var60 /* : nullable Bool */;
val* var61 /* : nullable Bool */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : CString */;
val* var65 /* : String */;
val* var66 /* : nullable Int */;
val* var67 /* : nullable Int */;
val* var68 /* : nullable Bool */;
val* var69 /* : nullable Bool */;
val* var70 /* : String */;
val* var71 /* : String */;
short int var72 /* : Bool */;
int cltype73;
int idtype74;
val* var76 /* : MModule */;
val* var78 /* : MModule */;
val* var79 /* : Array[MPropDef] */;
val* var_mpropdefs /* var mpropdefs: Array[MAttributeDef] */;
long var80 /* : Int */;
long var82 /* : Int */;
short int var83 /* : Bool */;
short int var85 /* : Bool */;
val* var86 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: MAttributeDef */;
val* var87 /* : nullable MType */;
val* var89 /* : nullable MType */;
val* var_attr_type /* var attr_type: nullable MType */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
short int var93 /* : Bool */;
short int var95 /* : Bool */;
val* var96 /* : AExpr */;
val* var98 /* : AExpr */;
short int var99 /* : Bool */;
int cltype100;
int idtype101;
val* var102 /* : MType */;
var_v = p0;
{
{ /* Inline parser_nodes$AAttrFormExpr$n_expr (self) on <self:AAttrFormExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrFormExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2354);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__typing___nitc__typing__TypeVisitor___visit_expr(var_v, var);
}
var_recvtype = var3;
if (var_recvtype == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_recvtype,((val*)NULL)) on <var_recvtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_recvtype,var_other) on <var_recvtype:nullable MType(MType)> */
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
{ /* Inline parser_nodes$AAttrFormExpr$n_id (self) on <self:AAttrFormExpr> */
var12 = self->attrs[COLOR_nitc__parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AAttrFormExpr> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2357);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_node = var10;
{
var13 = nitc__lexer_work___Token___text(var_node);
}
var_name = var13;
/* <var_recvtype:nullable MType(MType)> isa MNullType */
cltype = type_nitc__MNullType.color;
idtype = type_nitc__MNullType.id;
if(cltype >= var_recvtype->type->table_size) {
var14 = 0;
} else {
var14 = var_recvtype->type->type_table[cltype] == idtype;
}
if (var14){
if (unlikely(varonce==NULL)) {
var15 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "Error: attribute `";
var20 = (val*)(18l<<2|1);
var21 = (val*)(18l<<2|1);
var22 = (val*)((long)(0)<<2|3);
var23 = (val*)((long)(0)<<2|3);
var19 = core__flat___CString___to_s_unsafe(var18, var20, var21, var22, var23);
var17 = var19;
varonce16 = var17;
}
((struct instance_core__NativeArray*)var15)->values[0]=var17;
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "` access on `null`.";
var28 = (val*)(19l<<2|1);
var29 = (val*)(19l<<2|1);
var30 = (val*)((long)(0)<<2|3);
var31 = (val*)((long)(0)<<2|3);
var27 = core__flat___CString___to_s_unsafe(var26, var28, var29, var30, var31);
var25 = var27;
varonce24 = var25;
}
((struct instance_core__NativeArray*)var15)->values[2]=var25;
} else {
var15 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var15)->values[1]=var_name;
{
var32 = ((val*(*)(val* self))(var15->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var15); /* native_to_s on <var15:NativeArray[String]>*/
}
varonce = var15;
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, var_node, var32); /* Direct call typing$TypeVisitor$error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
var33 = nitc__typing___nitc__typing__TypeVisitor___anchor_to(var_v, var_recvtype);
}
var_unsafe_type = var33;
{
var34 = nitc__typing___nitc__typing__TypeVisitor___try_get_mproperty_by_name2(var_v, var_node, var_unsafe_type, var_name);
}
var_mproperty = var34;
if (var_mproperty == NULL) {
var35 = 1; /* is null */
} else {
var35 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mproperty,((val*)NULL)) on <var_mproperty:nullable MProperty> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mproperty,var_other) on <var_mproperty:nullable MProperty(MProperty)> */
var40 = var_mproperty == var_other;
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
{
{ /* Inline typing$TypeVisitor$modelbuilder (var_v) on <var_v:TypeVisitor> */
var43 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <var_v:TypeVisitor> */
if (unlikely(var43 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
if (unlikely(varonce44==NULL)) {
var45 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = "Error: attribute `";
var50 = (val*)(18l<<2|1);
var51 = (val*)(18l<<2|1);
var52 = (val*)((long)(0)<<2|3);
var53 = (val*)((long)(0)<<2|3);
var49 = core__flat___CString___to_s_unsafe(var48, var50, var51, var52, var53);
var47 = var49;
varonce46 = var47;
}
((struct instance_core__NativeArray*)var45)->values[0]=var47;
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = "` does not exist in `";
var58 = (val*)(21l<<2|1);
var59 = (val*)(21l<<2|1);
var60 = (val*)((long)(0)<<2|3);
var61 = (val*)((long)(0)<<2|3);
var57 = core__flat___CString___to_s_unsafe(var56, var58, var59, var60, var61);
var55 = var57;
varonce54 = var55;
}
((struct instance_core__NativeArray*)var45)->values[2]=var55;
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = "`.";
var66 = (val*)(2l<<2|1);
var67 = (val*)(2l<<2|1);
var68 = (val*)((long)(0)<<2|3);
var69 = (val*)((long)(0)<<2|3);
var65 = core__flat___CString___to_s_unsafe(var64, var66, var67, var68, var69);
var63 = var65;
varonce62 = var63;
}
((struct instance_core__NativeArray*)var45)->values[4]=var63;
} else {
var45 = varonce44;
varonce44 = NULL;
}
((struct instance_core__NativeArray*)var45)->values[1]=var_name;
{
var70 = ((val*(*)(val* self))(var_recvtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recvtype); /* to_s on <var_recvtype:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var45)->values[3]=var70;
{
var71 = ((val*(*)(val* self))(var45->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var45); /* native_to_s on <var45:NativeArray[String]>*/
}
varonce44 = var45;
{
nitc___nitc__ModelBuilder___error(var41, var_node, var71); /* Direct call modelbuilder_base$ModelBuilder$error on <var41:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
/* <var_mproperty:nullable MProperty(MProperty)> isa MAttribute */
cltype73 = type_nitc__MAttribute.color;
idtype74 = type_nitc__MAttribute.id;
if(cltype73 >= var_mproperty->type->table_size) {
var72 = 0;
} else {
var72 = var_mproperty->type->type_table[cltype73] == idtype74;
}
if (unlikely(!var72)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 2270);
fatal_exit(1);
}
{
{ /* Inline typing$AAttrFormExpr$mproperty= (self,var_mproperty) on <self:AAttrFormExpr> */
self->attrs[COLOR_nitc__typing__AAttrFormExpr___mproperty].val = var_mproperty; /* _mproperty on <self:AAttrFormExpr> */
RET_LABEL75:(void)0;
}
}
{
{ /* Inline typing$TypeVisitor$mmodule (var_v) on <var_v:TypeVisitor> */
var78 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___mmodule].val; /* _mmodule on <var_v:TypeVisitor> */
if (unlikely(var78 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 37);
fatal_exit(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
{
var79 = nitc___nitc__MProperty___lookup_definitions(var_mproperty, var76, var_unsafe_type);
}
var_mpropdefs = var79;
{
{ /* Inline array$AbstractArrayRead$length (var_mpropdefs) on <var_mpropdefs:Array[MAttributeDef]> */
var82 = var_mpropdefs->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_mpropdefs:Array[MAttributeDef]> */
var80 = var82;
RET_LABEL81:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var80,1l) on <var80:Int> */
var85 = var80 == 1l;
var83 = var85;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
}
if (unlikely(!var83)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 2274);
fatal_exit(1);
}
{
var86 = core___core__SequenceRead___Collection__first(var_mpropdefs);
}
var_mpropdef = var86;
{
{ /* Inline model$MAttributeDef$static_mtype (var_mpropdef) on <var_mpropdef:MAttributeDef> */
var89 = var_mpropdef->attrs[COLOR_nitc__model__MAttributeDef___static_mtype].val; /* _static_mtype on <var_mpropdef:MAttributeDef> */
var87 = var89;
RET_LABEL88:(void)0;
}
}
var_attr_type = var87;
if (var_attr_type == NULL) {
var90 = 1; /* is null */
} else {
var90 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_attr_type,((val*)NULL)) on <var_attr_type:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_attr_type,var_other) on <var_attr_type:nullable MType(MType)> */
var95 = var_attr_type == var_other;
var93 = var95;
goto RET_LABEL94;
RET_LABEL94:(void)0;
}
}
var91 = var93;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
var90 = var91;
}
if (var90){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes$AAttrFormExpr$n_expr (self) on <self:AAttrFormExpr> */
var98 = self->attrs[COLOR_nitc__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrFormExpr> */
if (unlikely(var98 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2354);
fatal_exit(1);
}
var96 = var98;
RET_LABEL97:(void)0;
}
}
/* <var96:AExpr> isa ASelfExpr */
cltype100 = type_nitc__ASelfExpr.color;
idtype101 = type_nitc__ASelfExpr.id;
if(cltype100 >= var96->type->table_size) {
var99 = 0;
} else {
var99 = var96->type->type_table[cltype100] == idtype101;
}
{
var102 = nitc__typing___nitc__typing__TypeVisitor___resolve_for(var_v, var_attr_type, var_recvtype, var99);
}
var_attr_type = var102;
{
{ /* Inline typing$AAttrFormExpr$attr_type= (self,var_attr_type) on <self:AAttrFormExpr> */
self->attrs[COLOR_nitc__typing__AAttrFormExpr___attr_type].val = var_attr_type; /* _attr_type on <self:AAttrFormExpr> */
RET_LABEL103:(void)0;
}
}
RET_LABEL:;
}
/* method typing$AAttrExpr$accept_typing for (self: AAttrExpr, TypeVisitor) */
void nitc__typing___AAttrExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MType */;
val* var2 /* : nullable MType */;
var_v = p0;
{
nitc__typing___AAttrFormExpr___resolve_property(self, var_v); /* Direct call typing$AAttrFormExpr$resolve_property on <self:AAttrExpr>*/
}
{
{ /* Inline typing$AAttrFormExpr$attr_type (self) on <self:AAttrExpr> */
var2 = self->attrs[COLOR_nitc__typing__AAttrFormExpr___attr_type].val; /* _attr_type on <self:AAttrExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline typing$AExpr$mtype= (self,var) on <self:AAttrExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var; /* _mtype on <self:AAttrExpr> */
RET_LABEL3:(void)0;
}
}
RET_LABEL:;
}
/* method typing$AAttrAssignExpr$accept_typing for (self: AAttrAssignExpr, TypeVisitor) */
void nitc__typing___AAttrAssignExpr___AExpr__accept_typing(val* self, val* p0) {
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
nitc__typing___AAttrFormExpr___resolve_property(self, var_v); /* Direct call typing$AAttrFormExpr$resolve_property on <self:AAttrAssignExpr>*/
}
{
{ /* Inline typing$AAttrFormExpr$attr_type (self) on <self:AAttrAssignExpr> */
var2 = self->attrs[COLOR_nitc__typing__AAttrFormExpr___attr_type].val; /* _attr_type on <self:AAttrAssignExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mtype = var;
{
{ /* Inline parser_nodes$AAssignFormExpr$n_value (self) on <self:AAttrAssignExpr> */
var5 = self->attrs[COLOR_nitc__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AAttrAssignExpr> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2073);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_subtype(var_v, var3, var_mtype);
}
if (var_mtype == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
var10 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mtype, var_other); /* == on <var_mtype:nullable MType(MType)>*/
}
var11 = !var10;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
{
{ /* Inline typing$AExpr$is_typed= (self,var7) on <self:AAttrAssignExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = var7; /* _is_typed on <self:AAttrAssignExpr> */
RET_LABEL12:(void)0;
}
}
RET_LABEL:;
}
/* method typing$AAttrReassignExpr$accept_typing for (self: AAttrReassignExpr, TypeVisitor) */
void nitc__typing___AAttrReassignExpr___AExpr__accept_typing(val* self, val* p0) {
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
nitc__typing___AAttrFormExpr___resolve_property(self, var_v); /* Direct call typing$AAttrFormExpr$resolve_property on <self:AAttrReassignExpr>*/
}
{
{ /* Inline typing$AAttrFormExpr$attr_type (self) on <self:AAttrReassignExpr> */
var2 = self->attrs[COLOR_nitc__typing__AAttrFormExpr___attr_type].val; /* _attr_type on <self:AAttrReassignExpr> */
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
{ /* Inline kernel$Object$== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
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
var9 = nitc__typing___AReassignFormExpr___resolve_reassignment(self, var_v, var_mtype, var_mtype);
}
var_rettype = var9;
if (var_rettype == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_rettype,((val*)NULL)) on <var_rettype:nullable MType> */
var_other13 = ((val*)NULL);
{
var14 = ((short int(*)(val* self, val* p0))(var_rettype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_rettype, var_other13); /* == on <var_rettype:nullable MType(MType)>*/
}
var15 = !var14;
var11 = var15;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
{
{ /* Inline typing$AExpr$is_typed= (self,var10) on <self:AAttrReassignExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = var10; /* _is_typed on <self:AAttrReassignExpr> */
RET_LABEL16:(void)0;
}
}
RET_LABEL:;
}
/* method typing$AIssetAttrExpr$accept_typing for (self: AIssetAttrExpr, TypeVisitor) */
void nitc__typing___AIssetAttrExpr___AExpr__accept_typing(val* self, val* p0) {
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
char* var19 /* : CString */;
val* var20 /* : String */;
val* var21 /* : nullable Int */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Bool */;
val* var24 /* : nullable Bool */;
val* var25 /* : nullable MType */;
var_v = p0;
{
nitc__typing___AAttrFormExpr___resolve_property(self, var_v); /* Direct call typing$AAttrFormExpr$resolve_property on <self:AIssetAttrExpr>*/
}
{
{ /* Inline typing$AAttrFormExpr$attr_type (self) on <self:AIssetAttrExpr> */
var2 = self->attrs[COLOR_nitc__typing__AAttrFormExpr___attr_type].val; /* _attr_type on <self:AIssetAttrExpr> */
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
{ /* Inline kernel$Object$== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
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
{ /* Inline parser_nodes$AAttrFormExpr$n_expr (self) on <self:AIssetAttrExpr> */
var11 = self->attrs[COLOR_nitc__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AIssetAttrExpr> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2354);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = ((val*(*)(val* self))(var9->class->vft[COLOR_nitc__typing__AExpr__mtype]))(var9); /* mtype on <var9:AExpr>*/
}
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 2333);
fatal_exit(1);
}
var_recvtype = var12;
{
var13 = nitc__typing___nitc__typing__TypeVisitor___resolve_for(var_v, var_mtype, var_recvtype, 0);
}
var_bound = var13;
/* <var_bound:MType> isa MNullableType */
cltype = type_nitc__MNullableType.color;
idtype = type_nitc__MNullableType.id;
if(cltype >= var_bound->type->table_size) {
var14 = 0;
} else {
var14 = var_bound->type->type_table[cltype] == idtype;
}
if (var14){
{
{ /* Inline parser_nodes$AAttrFormExpr$n_id (self) on <self:AIssetAttrExpr> */
var17 = self->attrs[COLOR_nitc__parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AIssetAttrExpr> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2357);
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
var21 = (val*)(44l<<2|1);
var22 = (val*)(44l<<2|1);
var23 = (val*)((long)(0)<<2|3);
var24 = (val*)((long)(0)<<2|3);
var20 = core__flat___CString___to_s_unsafe(var19, var21, var22, var23, var24);
var18 = var20;
varonce = var18;
}
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, var15, var18); /* Direct call typing$TypeVisitor$error on <var_v:TypeVisitor>*/
}
} else {
}
{
var25 = nitc__typing___nitc__typing__TypeVisitor___type_bool(var_v, self);
}
{
{ /* Inline typing$AExpr$mtype= (self,var25) on <self:AIssetAttrExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var25; /* _mtype on <self:AIssetAttrExpr> */
RET_LABEL26:(void)0;
}
}
RET_LABEL:;
}
/* method typing$AVarargExpr$accept_typing for (self: AVarargExpr, TypeVisitor) */
void nitc__typing___AVarargExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : CString */;
val* var2 /* : String */;
val* var3 /* : nullable Int */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Bool */;
val* var6 /* : nullable Bool */;
var_v = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "Syntax Error: unexpected `...`.";
var3 = (val*)(31l<<2|1);
var4 = (val*)(31l<<2|1);
var5 = (val*)((long)(0)<<2|3);
var6 = (val*)((long)(0)<<2|3);
var2 = core__flat___CString___to_s_unsafe(var1, var3, var4, var5, var6);
var = var2;
varonce = var;
}
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var); /* Direct call typing$TypeVisitor$error on <var_v:TypeVisitor>*/
}
RET_LABEL:;
}
/* method typing$ADebugTypeExpr$accept_typing for (self: ADebugTypeExpr, TypeVisitor) */
void nitc__typing___ADebugTypeExpr___AExpr__accept_typing(val* self, val* p0) {
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
char* var31 /* : CString */;
val* var32 /* : String */;
val* var33 /* : nullable Int */;
val* var34 /* : nullable Int */;
val* var35 /* : nullable Bool */;
val* var36 /* : nullable Bool */;
val* var38 /* : NativeArray[String] */;
static val* varonce37;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : CString */;
val* var42 /* : String */;
val* var43 /* : nullable Int */;
val* var44 /* : nullable Int */;
val* var45 /* : nullable Bool */;
val* var46 /* : nullable Bool */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : CString */;
val* var50 /* : String */;
val* var51 /* : nullable Int */;
val* var52 /* : nullable Int */;
val* var53 /* : nullable Bool */;
val* var54 /* : nullable Bool */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : CString */;
val* var58 /* : String */;
val* var59 /* : nullable Int */;
val* var60 /* : nullable Int */;
val* var61 /* : nullable Bool */;
val* var62 /* : nullable Bool */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : CString */;
val* var66 /* : String */;
val* var67 /* : nullable Int */;
val* var68 /* : nullable Int */;
val* var69 /* : nullable Bool */;
val* var70 /* : nullable Bool */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : CString */;
val* var74 /* : String */;
val* var75 /* : nullable Int */;
val* var76 /* : nullable Int */;
val* var77 /* : nullable Bool */;
val* var78 /* : nullable Bool */;
val* var79 /* : String */;
val* var80 /* : String */;
val* var81 /* : String */;
val* var82 /* : String */;
val* var83 /* : String */;
var_v = p0;
{
{ /* Inline parser_nodes$ADebugTypeExpr$n_expr (self) on <self:ADebugTypeExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ADebugTypeExpr___n_expr].val; /* _n_expr on <self:ADebugTypeExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2779);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__typing___nitc__typing__TypeVisitor___visit_expr(var_v, var);
}
var_expr = var3;
if (var_expr == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_expr,((val*)NULL)) on <var_expr:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_expr,var_other) on <var_expr:nullable MType(MType)> */
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
var10 = nitc__typing___nitc__typing__TypeVisitor___anchor_to(var_v, var_expr);
}
var_unsafe = var10;
{
{ /* Inline parser_nodes$ADebugTypeExpr$n_type (self) on <self:ADebugTypeExpr> */
var13 = self->attrs[COLOR_nitc__parser_nodes__ADebugTypeExpr___n_type].val; /* _n_type on <self:ADebugTypeExpr> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2782);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
var_ntype = var11;
{
var14 = nitc__typing___nitc__typing__TypeVisitor___resolve_mtype(var_v, var_ntype);
}
var_mtype = var14;
if (var_mtype == NULL) {
var16 = 0; /* is null */
} else {
var16 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other19 = ((val*)NULL);
{
var20 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mtype, var_other19); /* == on <var_mtype:nullable MType(MType)>*/
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
{ /* Inline kernel$Object$!= (var_mtype,var_expr) on <var_mtype:nullable MType(MType)> */
var_other19 = var_expr;
{
var24 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mtype, var_other19); /* == on <var_mtype:nullable MType(MType)>*/
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
var26 = nitc__typing___nitc__typing__TypeVisitor___anchor_to(var_v, var_mtype);
}
var_umtype = var26;
{
{ /* Inline typing$TypeVisitor$modelbuilder (var_v) on <var_v:TypeVisitor> */
var29 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <var_v:TypeVisitor> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
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
var33 = (val*)(5l<<2|1);
var34 = (val*)(5l<<2|1);
var35 = (val*)((long)(0)<<2|3);
var36 = (val*)((long)(0)<<2|3);
var32 = core__flat___CString___to_s_unsafe(var31, var33, var34, var35, var36);
var30 = var32;
varonce = var30;
}
if (unlikely(varonce37==NULL)) {
var38 = NEW_core__NativeArray((int)9l, &type_core__NativeArray__core__String);
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = "Found type ";
var43 = (val*)(11l<<2|1);
var44 = (val*)(11l<<2|1);
var45 = (val*)((long)(0)<<2|3);
var46 = (val*)((long)(0)<<2|3);
var42 = core__flat___CString___to_s_unsafe(var41, var43, var44, var45, var46);
var40 = var42;
varonce39 = var40;
}
((struct instance_core__NativeArray*)var38)->values[0]=var40;
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = " (-> ";
var51 = (val*)(5l<<2|1);
var52 = (val*)(5l<<2|1);
var53 = (val*)((long)(0)<<2|3);
var54 = (val*)((long)(0)<<2|3);
var50 = core__flat___CString___to_s_unsafe(var49, var51, var52, var53, var54);
var48 = var50;
varonce47 = var48;
}
((struct instance_core__NativeArray*)var38)->values[2]=var48;
if (likely(varonce55!=NULL)) {
var56 = varonce55;
} else {
var57 = "), expected ";
var59 = (val*)(12l<<2|1);
var60 = (val*)(12l<<2|1);
var61 = (val*)((long)(0)<<2|3);
var62 = (val*)((long)(0)<<2|3);
var58 = core__flat___CString___to_s_unsafe(var57, var59, var60, var61, var62);
var56 = var58;
varonce55 = var56;
}
((struct instance_core__NativeArray*)var38)->values[4]=var56;
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = " (-> ";
var67 = (val*)(5l<<2|1);
var68 = (val*)(5l<<2|1);
var69 = (val*)((long)(0)<<2|3);
var70 = (val*)((long)(0)<<2|3);
var66 = core__flat___CString___to_s_unsafe(var65, var67, var68, var69, var70);
var64 = var66;
varonce63 = var64;
}
((struct instance_core__NativeArray*)var38)->values[6]=var64;
if (likely(varonce71!=NULL)) {
var72 = varonce71;
} else {
var73 = ")";
var75 = (val*)(1l<<2|1);
var76 = (val*)(1l<<2|1);
var77 = (val*)((long)(0)<<2|3);
var78 = (val*)((long)(0)<<2|3);
var74 = core__flat___CString___to_s_unsafe(var73, var75, var76, var77, var78);
var72 = var74;
varonce71 = var72;
}
((struct instance_core__NativeArray*)var38)->values[8]=var72;
} else {
var38 = varonce37;
varonce37 = NULL;
}
{
var79 = ((val*(*)(val* self))(var_expr->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_expr); /* to_s on <var_expr:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var38)->values[1]=var79;
{
var80 = ((val*(*)(val* self))(var_unsafe->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_unsafe); /* to_s on <var_unsafe:MType>*/
}
((struct instance_core__NativeArray*)var38)->values[3]=var80;
{
var81 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var38)->values[5]=var81;
{
var82 = ((val*(*)(val* self))(var_umtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_umtype); /* to_s on <var_umtype:MType>*/
}
((struct instance_core__NativeArray*)var38)->values[7]=var82;
{
var83 = ((val*(*)(val* self))(var38->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var38); /* native_to_s on <var38:NativeArray[String]>*/
}
varonce37 = var38;
{
nitc___nitc__ModelBuilder___warning(var27, self, var30, var83); /* Direct call modelbuilder_base$ModelBuilder$warning on <var27:ModelBuilder>*/
}
} else {
}
{
{ /* Inline typing$AExpr$is_typed= (self,1) on <self:ADebugTypeExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = 1; /* _is_typed on <self:ADebugTypeExpr> */
RET_LABEL84:(void)0;
}
}
RET_LABEL:;
}
