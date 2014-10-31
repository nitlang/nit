#include "typing.sep.0.h"
/* method typing#ANewExpr#accept_typing for (self: ANewExpr, TypeVisitor) */
void typing__ANewExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AType */;
val* var2 /* : AType */;
val* var3 /* : nullable MType */;
val* var_recvtype /* var recvtype: nullable MType */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
int cltype;
int idtype;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
static val* varonce;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : FlatString */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : FlatString */;
val* var25 /* : Array[Object] */;
long var26 /* : Int */;
val* var27 /* : NativeArray[Object] */;
val* var28 /* : String */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : FlatString */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : FlatString */;
val* var39 /* : Array[Object] */;
long var40 /* : Int */;
val* var41 /* : NativeArray[Object] */;
val* var42 /* : String */;
val* var44 /* : nullable TId */;
val* var46 /* : nullable TId */;
val* var_nid /* var nid: nullable TId */;
val* var47 /* : null */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
val* var_other51 /* var other: nullable Object */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
val* var55 /* : String */;
val* var_name /* var name: String */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
long var59 /* : Int */;
val* var60 /* : FlatString */;
short int var61 /* : Bool */;
val* var62 /* : nullable CallSite */;
val* var_callsite /* var callsite: nullable CallSite */;
val* var63 /* : null */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
short int var67 /* : Bool */;
short int var69 /* : Bool */;
val* var70 /* : MMethod */;
val* var72 /* : MMethod */;
short int var73 /* : Bool */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
val* var77 /* : MClass */;
val* var79 /* : MClass */;
val* var80 /* : MClassKind */;
val* var82 /* : MClassKind */;
val* var_kind /* var kind: MClassKind */;
val* var83 /* : MClassKind */;
short int var84 /* : Bool */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
short int var88 /* : Bool */;
short int var89 /* : Bool */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : NativeString */;
long var93 /* : Int */;
val* var94 /* : FlatString */;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : NativeString */;
long var98 /* : Int */;
val* var99 /* : FlatString */;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : NativeString */;
long var103 /* : Int */;
val* var104 /* : FlatString */;
val* var105 /* : Array[Object] */;
long var106 /* : Int */;
val* var107 /* : NativeArray[Object] */;
val* var108 /* : String */;
val* var110 /* : MSignature */;
val* var112 /* : MSignature */;
val* var113 /* : nullable MType */;
val* var115 /* : nullable MType */;
val* var117 /* : nullable MType */;
val* var119 /* : nullable MType */;
val* var120 /* : null */;
short int var121 /* : Bool */;
short int var122 /* : Bool */;
short int var124 /* : Bool */;
short int var125 /* : Bool */;
short int var126 /* : Bool */;
val* var128 /* : MMethod */;
val* var130 /* : MMethod */;
val* var131 /* : MClass */;
val* var133 /* : MClass */;
short int var134 /* : Bool */;
short int var135 /* : Bool */;
static val* varonce136;
val* var137 /* : String */;
char* var138 /* : NativeString */;
long var139 /* : Int */;
val* var140 /* : FlatString */;
static val* varonce141;
val* var142 /* : String */;
char* var143 /* : NativeString */;
long var144 /* : Int */;
val* var145 /* : FlatString */;
val* var146 /* : Array[Object] */;
long var147 /* : Int */;
val* var148 /* : NativeArray[Object] */;
val* var149 /* : String */;
val* var150 /* : AExprs */;
val* var152 /* : AExprs */;
val* var153 /* : Array[AExpr] */;
val* var_args /* var args: Array[AExpr] */;
short int var154 /* : Bool */;
var_v = p0;
{
{ /* Inline parser_nodes#ANewExpr#n_type (self) on <self:ANewExpr> */
var2 = self->attrs[COLOR_parser_nodes__ANewExpr___n_type].val; /* _n_type on <self:ANewExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1610);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = typing__TypeVisitor__resolve_mtype(var_v, var);
}
var_recvtype = var3;
var4 = NULL;
if (var_recvtype == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_recvtype,var4) on <var_recvtype:nullable MType> */
var_other = var4;
{
{ /* Inline kernel#Object#is_same_instance (var_recvtype,var_other) on <var_recvtype:nullable MType(MType)> */
var10 = var_recvtype == var_other;
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
goto RET_LABEL;
} else {
}
/* <var_recvtype:nullable MType(MType)> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var_recvtype->type->table_size) {
var11 = 0;
} else {
var11 = var_recvtype->type->type_table[cltype] == idtype;
}
var12 = !var11;
if (var12){
/* <var_recvtype:nullable MType(MType)> isa MNullableType */
cltype14 = type_model__MNullableType.color;
idtype15 = type_model__MNullableType.id;
if(cltype14 >= var_recvtype->type->table_size) {
var13 = 0;
} else {
var13 = var_recvtype->type->type_table[cltype14] == idtype15;
}
if (var13){
if (varonce) {
var16 = varonce;
} else {
var17 = "Type error: cannot instantiate the nullable type ";
var18 = 49;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce = var16;
}
if (varonce20) {
var21 = varonce20;
} else {
var22 = ".";
var23 = 1;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
var25 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var25 = array_instance Array[Object] */
var26 = 3;
var27 = NEW_array__NativeArray(var26, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var27)->values[0] = (val*) var16;
((struct instance_array__NativeArray*)var27)->values[1] = (val*) var_recvtype;
((struct instance_array__NativeArray*)var27)->values[2] = (val*) var21;
{
((void (*)(val*, val*, long))(var25->class->vft[COLOR_array__Array__with_native]))(var25, var27, var26) /* with_native on <var25:Array[Object]>*/;
}
}
{
var28 = ((val* (*)(val*))(var25->class->vft[COLOR_string__Object__to_s]))(var25) /* to_s on <var25:Array[Object]>*/;
}
{
typing__TypeVisitor__error(var_v, self, var28); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce29) {
var30 = varonce29;
} else {
var31 = "Type error: cannot instantiate the formal type ";
var32 = 47;
var33 = string__NativeString__to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
if (varonce34) {
var35 = varonce34;
} else {
var36 = ".";
var37 = 1;
var38 = string__NativeString__to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
var39 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var39 = array_instance Array[Object] */
var40 = 3;
var41 = NEW_array__NativeArray(var40, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var41)->values[0] = (val*) var30;
((struct instance_array__NativeArray*)var41)->values[1] = (val*) var_recvtype;
((struct instance_array__NativeArray*)var41)->values[2] = (val*) var35;
{
((void (*)(val*, val*, long))(var39->class->vft[COLOR_array__Array__with_native]))(var39, var41, var40) /* with_native on <var39:Array[Object]>*/;
}
}
{
var42 = ((val* (*)(val*))(var39->class->vft[COLOR_string__Object__to_s]))(var39) /* to_s on <var39:Array[Object]>*/;
}
{
typing__TypeVisitor__error(var_v, self, var42); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
}
} else {
}
{
{ /* Inline typing#ANewExpr#recvtype= (self,var_recvtype) on <self:ANewExpr> */
self->attrs[COLOR_typing__ANewExpr___recvtype].val = var_recvtype; /* _recvtype on <self:ANewExpr> */
RET_LABEL43:(void)0;
}
}
{
{ /* Inline parser_nodes#ANewExpr#n_id (self) on <self:ANewExpr> */
var46 = self->attrs[COLOR_parser_nodes__ANewExpr___n_id].val; /* _n_id on <self:ANewExpr> */
var44 = var46;
RET_LABEL45:(void)0;
}
}
var_nid = var44;
var47 = NULL;
if (var_nid == NULL) {
var48 = 0; /* is null */
} else {
var48 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nid,var47) on <var_nid:nullable TId> */
var_other51 = var47;
{
var53 = ((short int (*)(val*, val*))(var_nid->class->vft[COLOR_kernel__Object___61d_61d]))(var_nid, var_other51) /* == on <var_nid:nullable TId(TId)>*/;
var52 = var53;
}
var54 = !var52;
var49 = var54;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
var48 = var49;
}
if (var48){
{
var55 = lexer_work__Token__text(var_nid);
}
var_name = var55;
} else {
if (varonce56) {
var57 = varonce56;
} else {
var58 = "new";
var59 = 3;
var60 = string__NativeString__to_s_with_length(var58, var59);
var57 = var60;
varonce56 = var57;
}
var_name = var57;
}
var61 = 0;
{
var62 = typing__TypeVisitor__get_method(var_v, self, var_recvtype, var_name, var61);
}
var_callsite = var62;
var63 = NULL;
if (var_callsite == NULL) {
var64 = 1; /* is null */
} else {
var64 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_callsite,var63) on <var_callsite:nullable CallSite> */
var_other = var63;
{
{ /* Inline kernel#Object#is_same_instance (var_callsite,var_other) on <var_callsite:nullable CallSite(CallSite)> */
var69 = var_callsite == var_other;
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
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#CallSite#mproperty (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var72 = var_callsite->attrs[COLOR_typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var72 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 483);
show_backtrace(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
{
{ /* Inline model#MMethod#is_new (var70) on <var70:MMethod> */
var75 = var70->attrs[COLOR_model__MMethod___is_new].s; /* _is_new on <var70:MMethod> */
var73 = var75;
RET_LABEL74:(void)0;
}
}
var76 = !var73;
if (var76){
{
{ /* Inline model#MClassType#mclass (var_recvtype) on <var_recvtype:nullable MType(MClassType)> */
var79 = var_recvtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_recvtype:nullable MType(MClassType)> */
if (unlikely(var79 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var77) on <var77:MClass> */
var82 = var77->attrs[COLOR_model__MClass___kind].val; /* _kind on <var77:MClass> */
if (unlikely(var82 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 371);
show_backtrace(1);
}
var80 = var82;
RET_LABEL81:(void)0;
}
}
var_kind = var80;
{
var83 = model__Object__concrete_kind(self);
}
{
{ /* Inline kernel#Object#!= (var_kind,var83) on <var_kind:MClassKind> */
var_other51 = var83;
{
var88 = ((short int (*)(val*, val*))(var_kind->class->vft[COLOR_kernel__Object___61d_61d]))(var_kind, var_other51) /* == on <var_kind:MClassKind>*/;
var87 = var88;
}
var89 = !var87;
var85 = var89;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
var84 = var85;
}
if (var84){
if (varonce90) {
var91 = varonce90;
} else {
var92 = "Cannot instantiate ";
var93 = 19;
var94 = string__NativeString__to_s_with_length(var92, var93);
var91 = var94;
varonce90 = var91;
}
if (varonce95) {
var96 = varonce95;
} else {
var97 = " ";
var98 = 1;
var99 = string__NativeString__to_s_with_length(var97, var98);
var96 = var99;
varonce95 = var96;
}
if (varonce100) {
var101 = varonce100;
} else {
var102 = ".";
var103 = 1;
var104 = string__NativeString__to_s_with_length(var102, var103);
var101 = var104;
varonce100 = var101;
}
var105 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var105 = array_instance Array[Object] */
var106 = 5;
var107 = NEW_array__NativeArray(var106, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var107)->values[0] = (val*) var91;
((struct instance_array__NativeArray*)var107)->values[1] = (val*) var_kind;
((struct instance_array__NativeArray*)var107)->values[2] = (val*) var96;
((struct instance_array__NativeArray*)var107)->values[3] = (val*) var_recvtype;
((struct instance_array__NativeArray*)var107)->values[4] = (val*) var101;
{
((void (*)(val*, val*, long))(var105->class->vft[COLOR_array__Array__with_native]))(var105, var107, var106) /* with_native on <var105:Array[Object]>*/;
}
}
{
var108 = ((val* (*)(val*))(var105->class->vft[COLOR_string__Object__to_s]))(var105) /* to_s on <var105:Array[Object]>*/;
}
{
typing__TypeVisitor__error(var_v, self, var108); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#AExpr#mtype= (self,var_recvtype) on <self:ANewExpr> */
self->attrs[COLOR_typing__AExpr___mtype].val = var_recvtype; /* _mtype on <self:ANewExpr> */
RET_LABEL109:(void)0;
}
}
} else {
{
{ /* Inline typing#CallSite#msignature (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var112 = var_callsite->attrs[COLOR_typing__CallSite___msignature].val; /* _msignature on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var112 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 490);
show_backtrace(1);
}
var110 = var112;
RET_LABEL111:(void)0;
}
}
{
{ /* Inline model#MSignature#return_mtype (var110) on <var110:MSignature> */
var115 = var110->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <var110:MSignature> */
var113 = var115;
RET_LABEL114:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var113) on <self:ANewExpr> */
self->attrs[COLOR_typing__AExpr___mtype].val = var113; /* _mtype on <self:ANewExpr> */
RET_LABEL116:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype (self) on <self:ANewExpr> */
var119 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:ANewExpr> */
var117 = var119;
RET_LABEL118:(void)0;
}
}
var120 = NULL;
if (var117 == NULL) {
var121 = 0; /* is null */
} else {
var121 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var117,var120) on <var117:nullable MType> */
var_other51 = var120;
{
var125 = ((short int (*)(val*, val*))(var117->class->vft[COLOR_kernel__Object___61d_61d]))(var117, var_other51) /* == on <var117:nullable MType(MType)>*/;
var124 = var125;
}
var126 = !var124;
var122 = var126;
goto RET_LABEL123;
RET_LABEL123:(void)0;
}
var121 = var122;
}
if (unlikely(!var121)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 1734);
show_backtrace(1);
}
}
{
{ /* Inline typing#ANewExpr#callsite= (self,var_callsite) on <self:ANewExpr> */
self->attrs[COLOR_typing__ANewExpr___callsite].val = var_callsite; /* _callsite on <self:ANewExpr> */
RET_LABEL127:(void)0;
}
}
{
{ /* Inline typing#CallSite#mproperty (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var130 = var_callsite->attrs[COLOR_typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var130 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 483);
show_backtrace(1);
}
var128 = var130;
RET_LABEL129:(void)0;
}
}
{
{ /* Inline model#MClassType#mclass (var_recvtype) on <var_recvtype:nullable MType(MClassType)> */
var133 = var_recvtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_recvtype:nullable MType(MClassType)> */
if (unlikely(var133 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var131 = var133;
RET_LABEL132:(void)0;
}
}
{
var134 = model__MMethod__is_init_for(var128, var131);
}
var135 = !var134;
if (var135){
if (varonce136) {
var137 = varonce136;
} else {
var138 = "Error: ";
var139 = 7;
var140 = string__NativeString__to_s_with_length(var138, var139);
var137 = var140;
varonce136 = var137;
}
if (varonce141) {
var142 = varonce141;
} else {
var143 = " is not a constructor.";
var144 = 22;
var145 = string__NativeString__to_s_with_length(var143, var144);
var142 = var145;
varonce141 = var142;
}
var146 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var146 = array_instance Array[Object] */
var147 = 3;
var148 = NEW_array__NativeArray(var147, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var148)->values[0] = (val*) var137;
((struct instance_array__NativeArray*)var148)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var148)->values[2] = (val*) var142;
{
((void (*)(val*, val*, long))(var146->class->vft[COLOR_array__Array__with_native]))(var146, var148, var147) /* with_native on <var146:Array[Object]>*/;
}
}
{
var149 = ((val* (*)(val*))(var146->class->vft[COLOR_string__Object__to_s]))(var146) /* to_s on <var146:Array[Object]>*/;
}
{
typing__TypeVisitor__error(var_v, self, var149); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ANewExpr#n_args (self) on <self:ANewExpr> */
var152 = self->attrs[COLOR_parser_nodes__ANewExpr___n_args].val; /* _n_args on <self:ANewExpr> */
if (unlikely(var152 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1614);
show_backtrace(1);
}
var150 = var152;
RET_LABEL151:(void)0;
}
}
{
var153 = typing__AExprs__to_a(var150);
}
var_args = var153;
{
var154 = typing__CallSite__check_signature(var_callsite, var_v, var_args);
}
RET_LABEL:;
}
/* method typing#ANewExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__ANewExpr__accept_typing(val* self, val* p0) {
typing__ANewExpr__accept_typing(self, p0); /* Direct call typing#ANewExpr#accept_typing on <self:Object(ANewExpr)>*/
RET_LABEL:;
}
/* method typing#AAttrFormExpr#mproperty for (self: AAttrFormExpr): nullable MAttribute */
val* typing__AAttrFormExpr__mproperty(val* self) {
val* var /* : nullable MAttribute */;
val* var1 /* : nullable MAttribute */;
var1 = self->attrs[COLOR_typing__AAttrFormExpr___mproperty].val; /* _mproperty on <self:AAttrFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AAttrFormExpr#mproperty for (self: Object): nullable MAttribute */
val* VIRTUAL_typing__AAttrFormExpr__mproperty(val* self) {
val* var /* : nullable MAttribute */;
val* var1 /* : nullable MAttribute */;
val* var3 /* : nullable MAttribute */;
{ /* Inline typing#AAttrFormExpr#mproperty (self) on <self:Object(AAttrFormExpr)> */
var3 = self->attrs[COLOR_typing__AAttrFormExpr___mproperty].val; /* _mproperty on <self:Object(AAttrFormExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AAttrFormExpr#mproperty= for (self: AAttrFormExpr, nullable MAttribute) */
void typing__AAttrFormExpr__mproperty_61d(val* self, val* p0) {
self->attrs[COLOR_typing__AAttrFormExpr___mproperty].val = p0; /* _mproperty on <self:AAttrFormExpr> */
RET_LABEL:;
}
/* method typing#AAttrFormExpr#mproperty= for (self: Object, nullable MAttribute) */
void VIRTUAL_typing__AAttrFormExpr__mproperty_61d(val* self, val* p0) {
{ /* Inline typing#AAttrFormExpr#mproperty= (self,p0) on <self:Object(AAttrFormExpr)> */
self->attrs[COLOR_typing__AAttrFormExpr___mproperty].val = p0; /* _mproperty on <self:Object(AAttrFormExpr)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method typing#AAttrFormExpr#attr_type for (self: AAttrFormExpr): nullable MType */
val* typing__AAttrFormExpr__attr_type(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_typing__AAttrFormExpr___attr_type].val; /* _attr_type on <self:AAttrFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AAttrFormExpr#attr_type for (self: Object): nullable MType */
val* VIRTUAL_typing__AAttrFormExpr__attr_type(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
{ /* Inline typing#AAttrFormExpr#attr_type (self) on <self:Object(AAttrFormExpr)> */
var3 = self->attrs[COLOR_typing__AAttrFormExpr___attr_type].val; /* _attr_type on <self:Object(AAttrFormExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AAttrFormExpr#attr_type= for (self: AAttrFormExpr, nullable MType) */
void typing__AAttrFormExpr__attr_type_61d(val* self, val* p0) {
self->attrs[COLOR_typing__AAttrFormExpr___attr_type].val = p0; /* _attr_type on <self:AAttrFormExpr> */
RET_LABEL:;
}
/* method typing#AAttrFormExpr#attr_type= for (self: Object, nullable MType) */
void VIRTUAL_typing__AAttrFormExpr__attr_type_61d(val* self, val* p0) {
{ /* Inline typing#AAttrFormExpr#attr_type= (self,p0) on <self:Object(AAttrFormExpr)> */
self->attrs[COLOR_typing__AAttrFormExpr___attr_type].val = p0; /* _attr_type on <self:Object(AAttrFormExpr)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method typing#AAttrFormExpr#resolve_property for (self: AAttrFormExpr, TypeVisitor) */
void typing__AAttrFormExpr__resolve_property(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var_recvtype /* var recvtype: nullable MType */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : TAttrid */;
val* var13 /* : TAttrid */;
val* var14 /* : String */;
val* var_name /* var name: String */;
short int var15 /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : FlatString */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : FlatString */;
val* var25 /* : Array[Object] */;
long var26 /* : Int */;
val* var27 /* : NativeArray[Object] */;
val* var28 /* : String */;
val* var29 /* : MType */;
val* var_unsafe_type /* var unsafe_type: MType */;
val* var30 /* : nullable MProperty */;
val* var_mproperty /* var mproperty: nullable MProperty */;
val* var31 /* : null */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
val* var38 /* : ModelBuilder */;
val* var40 /* : ModelBuilder */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
long var44 /* : Int */;
val* var45 /* : FlatString */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
long var49 /* : Int */;
val* var50 /* : FlatString */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : FlatString */;
val* var56 /* : Array[Object] */;
long var57 /* : Int */;
val* var58 /* : NativeArray[Object] */;
val* var59 /* : String */;
short int var60 /* : Bool */;
int cltype61;
int idtype62;
val* var64 /* : MModule */;
val* var66 /* : MModule */;
val* var67 /* : Array[MPropDef] */;
val* var_mpropdefs /* var mpropdefs: Array[MAttributeDef] */;
long var68 /* : Int */;
long var70 /* : Int */;
long var71 /* : Int */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
short int var75 /* : Bool */;
val* var76 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: MAttributeDef */;
val* var77 /* : nullable MType */;
val* var79 /* : nullable MType */;
val* var_attr_type /* var attr_type: MType */;
val* var80 /* : AExpr */;
val* var82 /* : AExpr */;
short int var83 /* : Bool */;
int cltype84;
int idtype85;
val* var86 /* : MType */;
var_v = p0;
{
{ /* Inline parser_nodes#AAttrFormExpr#n_expr (self) on <self:AAttrFormExpr> */
var2 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrFormExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1621);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = typing__TypeVisitor__visit_expr(var_v, var);
}
var_recvtype = var3;
var4 = NULL;
if (var_recvtype == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_recvtype,var4) on <var_recvtype:nullable MType> */
var_other = var4;
{
{ /* Inline kernel#Object#is_same_instance (var_recvtype,var_other) on <var_recvtype:nullable MType(MType)> */
var10 = var_recvtype == var_other;
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
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AAttrFormExpr#n_id (self) on <self:AAttrFormExpr> */
var13 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AAttrFormExpr> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1624);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = lexer_work__Token__text(var11);
}
var_name = var14;
/* <var_recvtype:nullable MType(MType)> isa MNullType */
cltype = type_model__MNullType.color;
idtype = type_model__MNullType.id;
if(cltype >= var_recvtype->type->table_size) {
var15 = 0;
} else {
var15 = var_recvtype->type->type_table[cltype] == idtype;
}
if (var15){
if (varonce) {
var16 = varonce;
} else {
var17 = "Error: Attribute \'";
var18 = 18;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce = var16;
}
if (varonce20) {
var21 = varonce20;
} else {
var22 = "\' access on \'null\'.";
var23 = 19;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
var25 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var25 = array_instance Array[Object] */
var26 = 3;
var27 = NEW_array__NativeArray(var26, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var27)->values[0] = (val*) var16;
((struct instance_array__NativeArray*)var27)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var27)->values[2] = (val*) var21;
{
((void (*)(val*, val*, long))(var25->class->vft[COLOR_array__Array__with_native]))(var25, var27, var26) /* with_native on <var25:Array[Object]>*/;
}
}
{
var28 = ((val* (*)(val*))(var25->class->vft[COLOR_string__Object__to_s]))(var25) /* to_s on <var25:Array[Object]>*/;
}
{
typing__TypeVisitor__error(var_v, self, var28); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
var29 = typing__TypeVisitor__anchor_to(var_v, var_recvtype);
}
var_unsafe_type = var29;
{
var30 = typing__TypeVisitor__try_get_mproperty_by_name2(var_v, self, var_unsafe_type, var_name);
}
var_mproperty = var30;
var31 = NULL;
if (var_mproperty == NULL) {
var32 = 1; /* is null */
} else {
var32 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mproperty,var31) on <var_mproperty:nullable MProperty> */
var_other = var31;
{
{ /* Inline kernel#Object#is_same_instance (var_mproperty,var_other) on <var_mproperty:nullable MProperty(MProperty)> */
var37 = var_mproperty == var_other;
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
{
{ /* Inline typing#TypeVisitor#modelbuilder (var_v) on <var_v:TypeVisitor> */
var40 = var_v->attrs[COLOR_typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <var_v:TypeVisitor> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 34);
show_backtrace(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
if (varonce41) {
var42 = varonce41;
} else {
var43 = "Error: Attribute ";
var44 = 17;
var45 = string__NativeString__to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
if (varonce46) {
var47 = varonce46;
} else {
var48 = " doesn\'t exists in ";
var49 = 19;
var50 = string__NativeString__to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
if (varonce51) {
var52 = varonce51;
} else {
var53 = ".";
var54 = 1;
var55 = string__NativeString__to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
var56 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var56 = array_instance Array[Object] */
var57 = 5;
var58 = NEW_array__NativeArray(var57, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var58)->values[0] = (val*) var42;
((struct instance_array__NativeArray*)var58)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var58)->values[2] = (val*) var47;
((struct instance_array__NativeArray*)var58)->values[3] = (val*) var_recvtype;
((struct instance_array__NativeArray*)var58)->values[4] = (val*) var52;
{
((void (*)(val*, val*, long))(var56->class->vft[COLOR_array__Array__with_native]))(var56, var58, var57) /* with_native on <var56:Array[Object]>*/;
}
}
{
var59 = ((val* (*)(val*))(var56->class->vft[COLOR_string__Object__to_s]))(var56) /* to_s on <var56:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var38, self, var59); /* Direct call modelbuilder#ModelBuilder#error on <var38:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
/* <var_mproperty:nullable MProperty(MProperty)> isa MAttribute */
cltype61 = type_model__MAttribute.color;
idtype62 = type_model__MAttribute.id;
if(cltype61 >= var_mproperty->type->table_size) {
var60 = 0;
} else {
var60 = var_mproperty->type->type_table[cltype61] == idtype62;
}
if (unlikely(!var60)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 1775);
show_backtrace(1);
}
{
{ /* Inline typing#AAttrFormExpr#mproperty= (self,var_mproperty) on <self:AAttrFormExpr> */
self->attrs[COLOR_typing__AAttrFormExpr___mproperty].val = var_mproperty; /* _mproperty on <self:AAttrFormExpr> */
RET_LABEL63:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#mmodule (var_v) on <var_v:TypeVisitor> */
var66 = var_v->attrs[COLOR_typing__TypeVisitor___mmodule].val; /* _mmodule on <var_v:TypeVisitor> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 36);
show_backtrace(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
var67 = model__MProperty__lookup_definitions(var_mproperty, var64, var_unsafe_type);
}
var_mpropdefs = var67;
{
{ /* Inline array#AbstractArrayRead#length (var_mpropdefs) on <var_mpropdefs:Array[MAttributeDef]> */
var70 = var_mpropdefs->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_mpropdefs:Array[MAttributeDef]> */
var68 = var70;
RET_LABEL69:(void)0;
}
}
var71 = 1;
{
{ /* Inline kernel#Int#== (var68,var71) on <var68:Int> */
var75 = var68 == var71;
var73 = var75;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
var72 = var73;
}
if (unlikely(!var72)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 1779);
show_backtrace(1);
}
{
var76 = abstract_collection__SequenceRead__first(var_mpropdefs);
}
var_mpropdef = var76;
{
{ /* Inline model#MAttributeDef#static_mtype (var_mpropdef) on <var_mpropdef:MAttributeDef> */
var79 = var_mpropdef->attrs[COLOR_model__MAttributeDef___static_mtype].val; /* _static_mtype on <var_mpropdef:MAttributeDef> */
var77 = var79;
RET_LABEL78:(void)0;
}
}
if (unlikely(var77 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 1781);
show_backtrace(1);
}
var_attr_type = var77;
{
{ /* Inline parser_nodes#AAttrFormExpr#n_expr (self) on <self:AAttrFormExpr> */
var82 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrFormExpr> */
if (unlikely(var82 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1621);
show_backtrace(1);
}
var80 = var82;
RET_LABEL81:(void)0;
}
}
/* <var80:AExpr> isa ASelfExpr */
cltype84 = type_parser_nodes__ASelfExpr.color;
idtype85 = type_parser_nodes__ASelfExpr.id;
if(cltype84 >= var80->type->table_size) {
var83 = 0;
} else {
var83 = var80->type->type_table[cltype84] == idtype85;
}
{
var86 = typing__TypeVisitor__resolve_for(var_v, var_attr_type, var_recvtype, var83);
}
var_attr_type = var86;
{
{ /* Inline typing#AAttrFormExpr#attr_type= (self,var_attr_type) on <self:AAttrFormExpr> */
self->attrs[COLOR_typing__AAttrFormExpr___attr_type].val = var_attr_type; /* _attr_type on <self:AAttrFormExpr> */
RET_LABEL87:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AAttrFormExpr#resolve_property for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AAttrFormExpr__resolve_property(val* self, val* p0) {
typing__AAttrFormExpr__resolve_property(self, p0); /* Direct call typing#AAttrFormExpr#resolve_property on <self:Object(AAttrFormExpr)>*/
RET_LABEL:;
}
/* method typing#AAttrExpr#accept_typing for (self: AAttrExpr, TypeVisitor) */
void typing__AAttrExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MType */;
val* var2 /* : nullable MType */;
var_v = p0;
{
typing__AAttrFormExpr__resolve_property(self, var_v); /* Direct call typing#AAttrFormExpr#resolve_property on <self:AAttrExpr>*/
}
{
{ /* Inline typing#AAttrFormExpr#attr_type (self) on <self:AAttrExpr> */
var2 = self->attrs[COLOR_typing__AAttrFormExpr___attr_type].val; /* _attr_type on <self:AAttrExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var) on <self:AAttrExpr> */
self->attrs[COLOR_typing__AExpr___mtype].val = var; /* _mtype on <self:AAttrExpr> */
RET_LABEL3:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AAttrExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AAttrExpr__accept_typing(val* self, val* p0) {
typing__AAttrExpr__accept_typing(self, p0); /* Direct call typing#AAttrExpr#accept_typing on <self:Object(AAttrExpr)>*/
RET_LABEL:;
}
/* method typing#AAttrAssignExpr#accept_typing for (self: AAttrAssignExpr, TypeVisitor) */
void typing__AAttrAssignExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MType */;
val* var2 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var3 /* : AExpr */;
val* var5 /* : AExpr */;
val* var6 /* : nullable MType */;
short int var7 /* : Bool */;
var_v = p0;
{
typing__AAttrFormExpr__resolve_property(self, var_v); /* Direct call typing#AAttrFormExpr#resolve_property on <self:AAttrAssignExpr>*/
}
{
{ /* Inline typing#AAttrFormExpr#attr_type (self) on <self:AAttrAssignExpr> */
var2 = self->attrs[COLOR_typing__AAttrFormExpr___attr_type].val; /* _attr_type on <self:AAttrAssignExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mtype = var;
{
{ /* Inline parser_nodes#AAssignFormExpr#n_value (self) on <self:AAttrAssignExpr> */
var5 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AAttrAssignExpr> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1445);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = typing__TypeVisitor__visit_expr_subtype(var_v, var3, var_mtype);
}
var7 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var7) on <self:AAttrAssignExpr> */
self->attrs[COLOR_typing__AExpr___is_typed].s = var7; /* _is_typed on <self:AAttrAssignExpr> */
RET_LABEL8:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AAttrAssignExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AAttrAssignExpr__accept_typing(val* self, val* p0) {
typing__AAttrAssignExpr__accept_typing(self, p0); /* Direct call typing#AAttrAssignExpr#accept_typing on <self:Object(AAttrAssignExpr)>*/
RET_LABEL:;
}
/* method typing#AAttrReassignExpr#accept_typing for (self: AAttrReassignExpr, TypeVisitor) */
void typing__AAttrReassignExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MType */;
val* var2 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable MType */;
short int var11 /* : Bool */;
var_v = p0;
{
typing__AAttrFormExpr__resolve_property(self, var_v); /* Direct call typing#AAttrFormExpr#resolve_property on <self:AAttrReassignExpr>*/
}
{
{ /* Inline typing#AAttrFormExpr#attr_type (self) on <self:AAttrReassignExpr> */
var2 = self->attrs[COLOR_typing__AAttrFormExpr___attr_type].val; /* _attr_type on <self:AAttrReassignExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mtype = var;
var3 = NULL;
if (var_mtype == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var3) on <var_mtype:nullable MType> */
var_other = var3;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var9 = var_mtype == var_other;
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
var10 = typing__AReassignFormExpr__resolve_reassignment(self, var_v, var_mtype, var_mtype);
}
var11 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var11) on <self:AAttrReassignExpr> */
self->attrs[COLOR_typing__AExpr___is_typed].s = var11; /* _is_typed on <self:AAttrReassignExpr> */
RET_LABEL12:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AAttrReassignExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AAttrReassignExpr__accept_typing(val* self, val* p0) {
typing__AAttrReassignExpr__accept_typing(self, p0); /* Direct call typing#AAttrReassignExpr#accept_typing on <self:Object(AAttrReassignExpr)>*/
RET_LABEL:;
}
/* method typing#AIssetAttrExpr#accept_typing for (self: AIssetAttrExpr, TypeVisitor) */
void typing__AIssetAttrExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MType */;
val* var2 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : AExpr */;
val* var12 /* : AExpr */;
val* var13 /* : nullable MType */;
val* var_recvtype /* var recvtype: MType */;
short int var14 /* : Bool */;
val* var15 /* : MType */;
val* var_bound /* var bound: MType */;
short int var16 /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : FlatString */;
val* var21 /* : nullable MType */;
var_v = p0;
{
typing__AAttrFormExpr__resolve_property(self, var_v); /* Direct call typing#AAttrFormExpr#resolve_property on <self:AIssetAttrExpr>*/
}
{
{ /* Inline typing#AAttrFormExpr#attr_type (self) on <self:AIssetAttrExpr> */
var2 = self->attrs[COLOR_typing__AAttrFormExpr___attr_type].val; /* _attr_type on <self:AIssetAttrExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mtype = var;
var3 = NULL;
if (var_mtype == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var3) on <var_mtype:nullable MType> */
var_other = var3;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var9 = var_mtype == var_other;
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
{ /* Inline parser_nodes#AAttrFormExpr#n_expr (self) on <self:AIssetAttrExpr> */
var12 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AIssetAttrExpr> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1621);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = ((val* (*)(val*))(var10->class->vft[COLOR_typing__AExpr__mtype]))(var10) /* mtype on <var10:AExpr>*/;
}
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 1827);
show_backtrace(1);
}
var_recvtype = var13;
var14 = 0;
{
var15 = typing__TypeVisitor__resolve_for(var_v, var_mtype, var_recvtype, var14);
}
var_bound = var15;
/* <var_bound:MType> isa MNullableType */
cltype = type_model__MNullableType.color;
idtype = type_model__MNullableType.id;
if(cltype >= var_bound->type->table_size) {
var16 = 0;
} else {
var16 = var_bound->type->type_table[cltype] == idtype;
}
if (var16){
if (varonce) {
var17 = varonce;
} else {
var18 = "Error: isset on a nullable attribute.";
var19 = 37;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce = var17;
}
{
typing__TypeVisitor__error(var_v, self, var17); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
} else {
}
{
var21 = typing__TypeVisitor__type_bool(var_v, self);
}
{
{ /* Inline typing#AExpr#mtype= (self,var21) on <self:AIssetAttrExpr> */
self->attrs[COLOR_typing__AExpr___mtype].val = var21; /* _mtype on <self:AIssetAttrExpr> */
RET_LABEL22:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AIssetAttrExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AIssetAttrExpr__accept_typing(val* self, val* p0) {
typing__AIssetAttrExpr__accept_typing(self, p0); /* Direct call typing#AIssetAttrExpr#accept_typing on <self:Object(AIssetAttrExpr)>*/
RET_LABEL:;
}
/* method typing#AVarargExpr#accept_typing for (self: AVarargExpr, TypeVisitor) */
void typing__AVarargExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : FlatString */;
var_v = p0;
if (varonce) {
var = varonce;
} else {
var1 = "Syntax error: unexpected `...`";
var2 = 30;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
typing__TypeVisitor__error(var_v, self, var); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
RET_LABEL:;
}
/* method typing#AVarargExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AVarargExpr__accept_typing(val* self, val* p0) {
typing__AVarargExpr__accept_typing(self, p0); /* Direct call typing#AVarargExpr#accept_typing on <self:Object(AVarargExpr)>*/
RET_LABEL:;
}
/* method typing#ADebugTypeExpr#accept_typing for (self: ADebugTypeExpr, TypeVisitor) */
void typing__ADebugTypeExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var_expr /* var expr: nullable MType */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : MType */;
val* var_unsafe /* var unsafe: MType */;
val* var12 /* : AType */;
val* var14 /* : AType */;
val* var_ntype /* var ntype: AType */;
val* var15 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var16 /* : Bool */;
val* var17 /* : null */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var_other21 /* var other: nullable Object */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var_ /* var : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
val* var31 /* : MType */;
val* var_umtype /* var umtype: MType */;
val* var32 /* : ModelBuilder */;
val* var34 /* : ModelBuilder */;
static val* varonce;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : FlatString */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
long var42 /* : Int */;
val* var43 /* : FlatString */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
long var47 /* : Int */;
val* var48 /* : FlatString */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
long var52 /* : Int */;
val* var53 /* : FlatString */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
long var57 /* : Int */;
val* var58 /* : FlatString */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
long var62 /* : Int */;
val* var63 /* : FlatString */;
val* var64 /* : Array[Object] */;
long var65 /* : Int */;
val* var66 /* : NativeArray[Object] */;
val* var67 /* : String */;
short int var68 /* : Bool */;
var_v = p0;
{
{ /* Inline parser_nodes#ADebugTypeExpr#n_expr (self) on <self:ADebugTypeExpr> */
var2 = self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_expr].val; /* _n_expr on <self:ADebugTypeExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1939);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = typing__TypeVisitor__visit_expr(var_v, var);
}
var_expr = var3;
var4 = NULL;
if (var_expr == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_expr,var4) on <var_expr:nullable MType> */
var_other = var4;
{
{ /* Inline kernel#Object#is_same_instance (var_expr,var_other) on <var_expr:nullable MType(MType)> */
var10 = var_expr == var_other;
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
goto RET_LABEL;
} else {
}
{
var11 = typing__TypeVisitor__anchor_to(var_v, var_expr);
}
var_unsafe = var11;
{
{ /* Inline parser_nodes#ADebugTypeExpr#n_type (self) on <self:ADebugTypeExpr> */
var14 = self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_type].val; /* _n_type on <self:ADebugTypeExpr> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1940);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_ntype = var12;
{
var15 = typing__TypeVisitor__resolve_mtype(var_v, var_ntype);
}
var_mtype = var15;
var17 = NULL;
if (var_mtype == NULL) {
var18 = 0; /* is null */
} else {
var18 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mtype,var17) on <var_mtype:nullable MType> */
var_other21 = var17;
{
var23 = ((short int (*)(val*, val*))(var_mtype->class->vft[COLOR_kernel__Object___61d_61d]))(var_mtype, var_other21) /* == on <var_mtype:nullable MType(MType)>*/;
var22 = var23;
}
var24 = !var22;
var19 = var24;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var18 = var19;
}
var_ = var18;
if (var18){
{
{ /* Inline kernel#Object#!= (var_mtype,var_expr) on <var_mtype:nullable MType(MType)> */
var_other21 = var_expr;
{
var29 = ((short int (*)(val*, val*))(var_mtype->class->vft[COLOR_kernel__Object___61d_61d]))(var_mtype, var_other21) /* == on <var_mtype:nullable MType(MType)>*/;
var28 = var29;
}
var30 = !var28;
var26 = var30;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
var25 = var26;
}
var16 = var25;
} else {
var16 = var_;
}
if (var16){
{
var31 = typing__TypeVisitor__anchor_to(var_v, var_mtype);
}
var_umtype = var31;
{
{ /* Inline typing#TypeVisitor#modelbuilder (var_v) on <var_v:TypeVisitor> */
var34 = var_v->attrs[COLOR_typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <var_v:TypeVisitor> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 34);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
if (varonce) {
var35 = varonce;
} else {
var36 = "debug";
var37 = 5;
var38 = string__NativeString__to_s_with_length(var36, var37);
var35 = var38;
varonce = var35;
}
if (varonce39) {
var40 = varonce39;
} else {
var41 = "Found type ";
var42 = 11;
var43 = string__NativeString__to_s_with_length(var41, var42);
var40 = var43;
varonce39 = var40;
}
if (varonce44) {
var45 = varonce44;
} else {
var46 = " (-> ";
var47 = 5;
var48 = string__NativeString__to_s_with_length(var46, var47);
var45 = var48;
varonce44 = var45;
}
if (varonce49) {
var50 = varonce49;
} else {
var51 = "), expected ";
var52 = 12;
var53 = string__NativeString__to_s_with_length(var51, var52);
var50 = var53;
varonce49 = var50;
}
if (varonce54) {
var55 = varonce54;
} else {
var56 = " (-> ";
var57 = 5;
var58 = string__NativeString__to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
if (varonce59) {
var60 = varonce59;
} else {
var61 = ")";
var62 = 1;
var63 = string__NativeString__to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
var64 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var64 = array_instance Array[Object] */
var65 = 9;
var66 = NEW_array__NativeArray(var65, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var66)->values[0] = (val*) var40;
((struct instance_array__NativeArray*)var66)->values[1] = (val*) var_expr;
((struct instance_array__NativeArray*)var66)->values[2] = (val*) var45;
((struct instance_array__NativeArray*)var66)->values[3] = (val*) var_unsafe;
((struct instance_array__NativeArray*)var66)->values[4] = (val*) var50;
((struct instance_array__NativeArray*)var66)->values[5] = (val*) var_mtype;
((struct instance_array__NativeArray*)var66)->values[6] = (val*) var55;
((struct instance_array__NativeArray*)var66)->values[7] = (val*) var_umtype;
((struct instance_array__NativeArray*)var66)->values[8] = (val*) var60;
{
((void (*)(val*, val*, long))(var64->class->vft[COLOR_array__Array__with_native]))(var64, var66, var65) /* with_native on <var64:Array[Object]>*/;
}
}
{
var67 = ((val* (*)(val*))(var64->class->vft[COLOR_string__Object__to_s]))(var64) /* to_s on <var64:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__warning(var32, self, var35, var67); /* Direct call modelbuilder#ModelBuilder#warning on <var32:ModelBuilder>*/
}
} else {
}
var68 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var68) on <self:ADebugTypeExpr> */
self->attrs[COLOR_typing__AExpr___is_typed].s = var68; /* _is_typed on <self:ADebugTypeExpr> */
RET_LABEL69:(void)0;
}
}
RET_LABEL:;
}
/* method typing#ADebugTypeExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__ADebugTypeExpr__accept_typing(val* self, val* p0) {
typing__ADebugTypeExpr__accept_typing(self, p0); /* Direct call typing#ADebugTypeExpr#accept_typing on <self:Object(ADebugTypeExpr)>*/
RET_LABEL:;
}
