#include "nitc__typing.sep.0.h"
/* method typing$PostTypingVisitor$type_visitor for (self: PostTypingVisitor): TypeVisitor */
val* nitc__typing___nitc__typing__PostTypingVisitor___type_visitor(val* self) {
val* var /* : TypeVisitor */;
val* var1 /* : TypeVisitor */;
var1 = self->attrs[COLOR_nitc__typing__PostTypingVisitor___type_visitor].val; /* _type_visitor on <self:PostTypingVisitor> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _type_visitor");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 801);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing$PostTypingVisitor$type_visitor= for (self: PostTypingVisitor, TypeVisitor) */
void nitc__typing___nitc__typing__PostTypingVisitor___type_visitor_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__PostTypingVisitor___type_visitor].val = p0; /* _type_visitor on <self:PostTypingVisitor> */
RET_LABEL:;
}
/* method typing$PostTypingVisitor$visit for (self: PostTypingVisitor, ANode) */
void nitc__typing___nitc__typing__PostTypingVisitor___nitc__parser_nodes__Visitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
val* var /* : TypeVisitor */;
val* var2 /* : TypeVisitor */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var6 /* : nullable MType */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var_13 /* var : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
var_n = p0;
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nitc__parser_nodes__ANode__visit_all]))(var_n, self); /* visit_all on <var_n:ANode>*/
}
{
{ /* Inline typing$PostTypingVisitor$type_visitor (self) on <self:PostTypingVisitor> */
var2 = self->attrs[COLOR_nitc__typing__PostTypingVisitor___type_visitor].val; /* _type_visitor on <self:PostTypingVisitor> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _type_visitor");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 801);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nitc__typing__ANode__accept_post_typing]))(var_n, var); /* accept_post_typing on <var_n:ANode>*/
}
/* <var_n:ANode> isa AExpr */
cltype = type_nitc__AExpr.color;
idtype = type_nitc__AExpr.id;
if(cltype >= var_n->type->table_size) {
var5 = 0;
} else {
var5 = var_n->type->type_table[cltype] == idtype;
}
var_ = var5;
if (var5){
{
var6 = ((val*(*)(val* self))(var_n->class->vft[COLOR_nitc__typing__AExpr__mtype]))(var_n); /* mtype on <var_n:ANode(AExpr)>*/
}
if (var6 == NULL) {
var7 = 1; /* is null */
} else {
var7 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var6,((val*)NULL)) on <var6:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var6,var_other) on <var6:nullable MType(MType)> */
var12 = var6 == var_other;
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
var4 = var7;
} else {
var4 = var_;
}
var_13 = var4;
if (var4){
{
{ /* Inline typing$AExpr$is_typed (var_n) on <var_n:ANode(AExpr)> */
var16 = var_n->attrs[COLOR_nitc__typing__AExpr___is_typed].s; /* _is_typed on <var_n:ANode(AExpr)> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
var17 = !var14;
var3 = var17;
} else {
var3 = var_13;
}
if (var3){
{
{ /* Inline modelbuilder_base$ANode$is_broken= (var_n,1) on <var_n:ANode(AExpr)> */
var_n->attrs[COLOR_nitc__modelbuilder_base__ANode___is_broken].s = 1; /* _is_broken on <var_n:ANode(AExpr)> */
RET_LABEL18:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method typing$PostTypingVisitor$init for (self: PostTypingVisitor) */
void nitc__typing___nitc__typing__PostTypingVisitor___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc__typing___nitc__typing__PostTypingVisitor___core__kernel__Object__init]))(self); /* init on <self:PostTypingVisitor>*/
}
RET_LABEL:;
}
/* method typing$ANode$accept_post_typing for (self: ANode, TypeVisitor) */
void nitc__typing___ANode___accept_post_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method typing$ANode$bad_expr_message for (self: ANode, AExpr): nullable String */
val* nitc__typing___ANode___bad_expr_message(val* self, val* p0) {
val* var /* : nullable String */;
val* var_child /* var child: AExpr */;
var_child = p0;
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing$AAttrPropdef$do_typing for (self: AAttrPropdef, ModelBuilder) */
void nitc__typing___AAttrPropdef___APropdef__do_typing(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
short int var /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : nullable MMethodDef */;
val* var6 /* : nullable MMethodDef */;
val* var_mpropdef /* var mpropdef: nullable MMethodDef */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var_ /* var : Bool */;
val* var14 /* : nullable MSignature */;
val* var16 /* : nullable MSignature */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
val* var23 /* : TypeVisitor */;
val* var24 /* : MClassDef */;
val* var26 /* : MClassDef */;
val* var27 /* : MModule */;
val* var29 /* : MModule */;
val* var_v /* var v: TypeVisitor */;
val* var30 /* : Variable */;
val* var32 /* : Variable */;
val* var34 /* : nullable AExpr */;
val* var36 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
val* var_other40 /* var other: nullable Object */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
val* var43 /* : nullable MType */;
val* var45 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var46 /* : nullable MType */;
val* var47 /* : nullable AExpr */;
val* var49 /* : nullable AExpr */;
val* var_nblock /* var nblock: nullable AExpr */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
val* var55 /* : nullable FlowContext */;
val* var57 /* : nullable FlowContext */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
static val* varonce;
val* var60 /* : String */;
char* var61 /* : CString */;
val* var62 /* : String */;
val* var63 /* : nullable Int */;
val* var64 /* : nullable Int */;
val* var65 /* : nullable Bool */;
val* var66 /* : nullable Bool */;
var_modelbuilder = p0;
{
{ /* Inline modelize_property$AAttrPropdef$has_value (self) on <self:AAttrPropdef> */
var2 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <self:AAttrPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = !var;
if (var3){
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property$AAttrPropdef$mreadpropdef (self) on <self:AAttrPropdef> */
var6 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mreadpropdef].val; /* _mreadpropdef on <self:AAttrPropdef> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_mpropdef = var4;
if (var_mpropdef == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MMethodDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mpropdef,var_other) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var13 = var_mpropdef == var_other;
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
{ /* Inline model$MMethodDef$msignature (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var16 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
if (var14 == NULL) {
var17 = 1; /* is null */
} else {
var17 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var14,((val*)NULL)) on <var14:nullable MSignature> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var14,var_other) on <var14:nullable MSignature(MSignature)> */
var22 = var14 == var_other;
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
var7 = var17;
}
if (var7){
goto RET_LABEL;
} else {
}
var23 = NEW_nitc__typing__TypeVisitor(&type_nitc__typing__TypeVisitor);
{
{ /* Inline model$MPropDef$mclassdef (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var26 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
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
{ /* Inline model$MClassDef$mmodule (var24) on <var24:MClassDef> */
var29 = var24->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var24:MClassDef> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_nitc__typing__TypeVisitor__modelbuilder_61d]))(var23, var_modelbuilder); /* modelbuilder= on <var23:TypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_nitc__typing__TypeVisitor__mmodule_61d]))(var23, var27); /* mmodule= on <var23:TypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_nitc__typing__TypeVisitor__mpropdef_61d]))(var23, var_mpropdef); /* mpropdef= on <var23:TypeVisitor>*/
}
{
((void(*)(val* self))(var23->class->vft[COLOR_core__kernel__Object__init]))(var23); /* init on <var23:TypeVisitor>*/
}
var_v = var23;
{
{ /* Inline typing$TypeVisitor$selfvariable (var_v) on <var_v:TypeVisitor> */
var32 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___selfvariable].val; /* _selfvariable on <var_v:TypeVisitor> */
if (unlikely(var32 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _selfvariable");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 51);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline typing$APropdef$selfvariable= (self,var30) on <self:AAttrPropdef> */
self->attrs[COLOR_nitc__typing__APropdef___selfvariable].val = var30; /* _selfvariable on <self:AAttrPropdef> */
RET_LABEL33:(void)0;
}
}
{
{ /* Inline parser_nodes$AAttrPropdef$n_expr (self) on <self:AAttrPropdef> */
var36 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <self:AAttrPropdef> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
var_nexpr = var34;
if (var_nexpr == NULL) {
var37 = 0; /* is null */
} else {
var37 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_nexpr,((val*)NULL)) on <var_nexpr:nullable AExpr> */
var_other40 = ((val*)NULL);
{
var41 = ((short int(*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nexpr, var_other40); /* == on <var_nexpr:nullable AExpr(AExpr)>*/
}
var42 = !var41;
var38 = var42;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
var37 = var38;
}
if (var37){
{
{ /* Inline modelize_property$AAttrPropdef$mtype (self) on <self:AAttrPropdef> */
var45 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mtype].val; /* _mtype on <self:AAttrPropdef> */
var43 = var45;
RET_LABEL44:(void)0;
}
}
var_mtype = var43;
{
var46 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_subtype(var_v, var_nexpr, var_mtype);
}
} else {
}
{
{ /* Inline parser_nodes$AAttrPropdef$n_block (self) on <self:AAttrPropdef> */
var49 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_block].val; /* _n_block on <self:AAttrPropdef> */
var47 = var49;
RET_LABEL48:(void)0;
}
}
var_nblock = var47;
if (var_nblock == NULL) {
var50 = 0; /* is null */
} else {
var50 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_nblock,((val*)NULL)) on <var_nblock:nullable AExpr> */
var_other40 = ((val*)NULL);
{
var53 = ((short int(*)(val* self, val* p0))(var_nblock->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nblock, var_other40); /* == on <var_nblock:nullable AExpr(AExpr)>*/
}
var54 = !var53;
var51 = var54;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
var50 = var51;
}
if (var50){
{
nitc__typing___nitc__typing__TypeVisitor___visit_stmt(var_v, var_nblock); /* Direct call typing$TypeVisitor$visit_stmt on <var_v:TypeVisitor>*/
}
{
{ /* Inline flow$AExpr$after_flow_context (var_nblock) on <var_nblock:nullable AExpr(AExpr)> */
var57 = var_nblock->attrs[COLOR_nitc__flow__AExpr___after_flow_context].val; /* _after_flow_context on <var_nblock:nullable AExpr(AExpr)> */
var55 = var57;
RET_LABEL56:(void)0;
}
}
if (var55 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 840);
fatal_exit(1);
} else {
var58 = nitc___nitc__FlowContext___is_unreachable(var55);
}
var59 = !var58;
if (var59){
if (likely(varonce!=NULL)) {
var60 = varonce;
} else {
var61 = "Error: reached end of block; expected `return`.";
var63 = (val*)(47l<<2|1);
var64 = (val*)(47l<<2|1);
var65 = (val*)((long)(0)<<2|3);
var66 = (val*)((long)(0)<<2|3);
var62 = core__flat___CString___to_s_unsafe(var61, var63, var64, var65, var66);
var60 = var62;
varonce = var60;
}
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var60); /* Direct call typing$TypeVisitor$error on <var_v:TypeVisitor>*/
}
} else {
}
} else {
}
RET_LABEL:;
}
/* method typing$AExpr$mtype for (self: AExpr): nullable MType */
val* nitc__typing___AExpr___mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:AExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing$AExpr$mtype= for (self: AExpr, nullable MType) */
void nitc__typing___AExpr___mtype_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = p0; /* _mtype on <self:AExpr> */
RET_LABEL:;
}
/* method typing$AExpr$is_typed for (self: AExpr): Bool */
short int nitc__typing___AExpr___is_typed(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__typing__AExpr___is_typed].s; /* _is_typed on <self:AExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing$AExpr$is_typed= for (self: AExpr, Bool) */
void nitc__typing___AExpr___is_typed_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = p0; /* _is_typed on <self:AExpr> */
RET_LABEL:;
}
/* method typing$AExpr$implicit_cast_to for (self: AExpr): nullable MType */
val* nitc__typing___AExpr___implicit_cast_to(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nitc__typing__AExpr___implicit_cast_to].val; /* _implicit_cast_to on <self:AExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing$AExpr$implicit_cast_to= for (self: AExpr, nullable MType) */
void nitc__typing___AExpr___implicit_cast_to_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__AExpr___implicit_cast_to].val = p0; /* _implicit_cast_to on <self:AExpr> */
RET_LABEL:;
}
/* method typing$AExpr$its_variable for (self: AExpr): nullable Variable */
val* nitc__typing___AExpr___its_variable(val* self) {
val* var /* : nullable Variable */;
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing$AExpr$accept_typing for (self: AExpr, TypeVisitor) */
void nitc__typing___AExpr___accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : NativeArray[String] */;
static val* varonce;
static val* varonce1;
val* var2 /* : String */;
char* var3 /* : CString */;
val* var4 /* : String */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Bool */;
val* var8 /* : nullable Bool */;
val* var9 /* : String */;
val* var10 /* : String */;
var_v = p0;
if (unlikely(varonce==NULL)) {
var = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce1!=NULL)) {
var2 = varonce1;
} else {
var3 = "no implemented accept_typing for ";
var5 = (val*)(33l<<2|1);
var6 = (val*)(33l<<2|1);
var7 = (val*)((long)(0)<<2|3);
var8 = (val*)((long)(0)<<2|3);
var4 = core__flat___CString___to_s_unsafe(var3, var5, var6, var7, var8);
var2 = var4;
varonce1 = var2;
}
((struct instance_core__NativeArray*)var)->values[0]=var2;
} else {
var = varonce;
varonce = NULL;
}
{
var9 = core__abstract_text___Object___class_name(self);
}
((struct instance_core__NativeArray*)var)->values[1]=var9;
{
var10 = ((val*(*)(val* self))(var->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var); /* native_to_s on <var:NativeArray[String]>*/
}
varonce = var;
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var10); /* Direct call typing$TypeVisitor$error on <var_v:TypeVisitor>*/
}
RET_LABEL:;
}
/* method typing$AExpr$comprehension for (self: AExpr): nullable AArrayExpr */
val* nitc__typing___AExpr___comprehension(val* self) {
val* var /* : nullable AArrayExpr */;
val* var1 /* : nullable AArrayExpr */;
var1 = self->attrs[COLOR_nitc__typing__AExpr___comprehension].val; /* _comprehension on <self:AExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing$AExpr$comprehension= for (self: AExpr, nullable AArrayExpr) */
void nitc__typing___AExpr___comprehension_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__AExpr___comprehension].val = p0; /* _comprehension on <self:AExpr> */
RET_LABEL:;
}
/* method typing$AExpr$vararg_decl for (self: AExpr): Int */
long nitc__typing___AExpr___vararg_decl(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nitc__typing__AExpr___vararg_decl].l; /* _vararg_decl on <self:AExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing$AExpr$vararg_decl= for (self: AExpr, Int) */
void nitc__typing___AExpr___vararg_decl_61d(val* self, long p0) {
self->attrs[COLOR_nitc__typing__AExpr___vararg_decl].l = p0; /* _vararg_decl on <self:AExpr> */
RET_LABEL:;
}
/* method typing$ABlockExpr$accept_typing for (self: ABlockExpr, TypeVisitor) */
void nitc__typing___ABlockExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : ANodes[AExpr] */;
val* var2 /* : ANodes[AExpr] */;
val* var_ /* var : ANodes[AExpr] */;
val* var3 /* : Iterator[ANode] */;
val* var_4 /* var : Iterator[AExpr] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_e /* var e: AExpr */;
var_v = p0;
{
{ /* Inline parser_nodes$ABlockExpr$n_expr (self) on <self:ABlockExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1811);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_ = var;
{
var3 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_);
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:Iterator[AExpr]>*/
}
if (var5){
} else {
goto BREAK_label;
}
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:Iterator[AExpr]>*/
}
var_e = var6;
{
nitc__typing___nitc__typing__TypeVisitor___visit_stmt(var_v, var_e); /* Direct call typing$TypeVisitor$visit_stmt on <var_v:TypeVisitor>*/
}
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:Iterator[AExpr]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:Iterator[AExpr]>*/
}
{
{ /* Inline typing$AExpr$is_typed= (self,1) on <self:ABlockExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = 1; /* _is_typed on <self:ABlockExpr> */
RET_LABEL7:(void)0;
}
}
RET_LABEL:;
}
/* method typing$ABlockExpr$mtype for (self: ABlockExpr): nullable MType */
val* nitc__typing___ABlockExpr___AExpr__mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : ANodes[AExpr] */;
val* var3 /* : ANodes[AExpr] */;
short int var4 /* : Bool */;
val* var5 /* : ANodes[AExpr] */;
val* var7 /* : ANodes[AExpr] */;
val* var8 /* : nullable Object */;
val* var9 /* : nullable MType */;
{
{ /* Inline parser_nodes$ABlockExpr$n_expr (self) on <self:ABlockExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1811);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc___nitc__ANodes___core__abstract_collection__Collection__is_empty(var1);
}
if (var4){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes$ABlockExpr$n_expr (self) on <self:ABlockExpr> */
var7 = self->attrs[COLOR_nitc__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1811);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = core___core__SequenceRead___last(var5);
}
{
var9 = ((val*(*)(val* self))(var8->class->vft[COLOR_nitc__typing__AExpr__mtype]))(var8); /* mtype on <var8:nullable Object(AExpr)>*/
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing$AVardeclExpr$accept_typing for (self: AVardeclExpr, TypeVisitor) */
void nitc__typing___AVardeclExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable Variable */;
val* var2 /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable AType */;
val* var11 /* : nullable AType */;
val* var_ntype /* var ntype: nullable AType */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
val* var_mtype /* var mtype: nullable MType */;
val* var18 /* : nullable MType */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : nullable AExpr */;
val* var27 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var_other31 /* var other: nullable Object */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
val* var39 /* : nullable MType */;
val* var_etype /* var etype: nullable MType */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
val* var51 /* : ModelBuilder */;
val* var53 /* : ModelBuilder */;
static val* varonce;
val* var54 /* : String */;
char* var55 /* : CString */;
val* var56 /* : String */;
val* var57 /* : nullable Int */;
val* var58 /* : nullable Int */;
val* var59 /* : nullable Bool */;
val* var60 /* : nullable Bool */;
val* var62 /* : NativeArray[String] */;
static val* varonce61;
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
val* var81 /* : String */;
val* var82 /* : String */;
val* var83 /* : nullable MType */;
short int var84 /* : Bool */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
short int var89 /* : Bool */;
val* var_decltype /* var decltype: nullable MType */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
short int var92 /* : Bool */;
short int var94 /* : Bool */;
short int var96 /* : Bool */;
short int var_ /* var : Bool */;
short int var97 /* : Bool */;
int cltype;
int idtype;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : CString */;
val* var101 /* : String */;
val* var102 /* : nullable Int */;
val* var103 /* : nullable Int */;
val* var104 /* : nullable Bool */;
val* var105 /* : nullable Bool */;
val* var106 /* : nullable MClass */;
val* var_objclass /* var objclass: nullable MClass */;
short int var107 /* : Bool */;
short int var108 /* : Bool */;
short int var110 /* : Bool */;
short int var112 /* : Bool */;
val* var113 /* : MClassType */;
val* var115 /* : MClassType */;
val* var116 /* : MType */;
short int var117 /* : Bool */;
short int var118 /* : Bool */;
short int var120 /* : Bool */;
short int var122 /* : Bool */;
var_v = p0;
{
{ /* Inline scope$AVardeclExpr$variable (self) on <self:AVardeclExpr> */
var2 = self->attrs[COLOR_nitc__scope__AVardeclExpr___variable].val; /* _variable on <self:AVardeclExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_variable = var;
if (var_variable == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_variable,((val*)NULL)) on <var_variable:nullable Variable> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_variable,var_other) on <var_variable:nullable Variable(Variable)> */
var8 = var_variable == var_other;
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
{ /* Inline parser_nodes$AVardeclExpr$n_type (self) on <self:AVardeclExpr> */
var11 = self->attrs[COLOR_nitc__parser_nodes__AVardeclExpr___n_type].val; /* _n_type on <self:AVardeclExpr> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_ntype = var9;
if (var_ntype == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_ntype,((val*)NULL)) on <var_ntype:nullable AType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_ntype,var_other) on <var_ntype:nullable AType(AType)> */
var17 = var_ntype == var_other;
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
var_mtype = ((val*)NULL);
} else {
{
var18 = nitc__typing___nitc__typing__TypeVisitor___resolve_mtype(var_v, var_ntype);
}
var_mtype = var18;
if (var_mtype == NULL) {
var19 = 1; /* is null */
} else {
var19 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var24 = var_mtype == var_other;
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var19 = var20;
}
if (var19){
goto RET_LABEL;
} else {
}
}
{
{ /* Inline parser_nodes$AVardeclExpr$n_expr (self) on <self:AVardeclExpr> */
var27 = self->attrs[COLOR_nitc__parser_nodes__AVardeclExpr___n_expr].val; /* _n_expr on <self:AVardeclExpr> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
var_nexpr = var25;
if (var_nexpr == NULL) {
var28 = 0; /* is null */
} else {
var28 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_nexpr,((val*)NULL)) on <var_nexpr:nullable AExpr> */
var_other31 = ((val*)NULL);
{
var32 = ((short int(*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nexpr, var_other31); /* == on <var_nexpr:nullable AExpr(AExpr)>*/
}
var33 = !var32;
var29 = var33;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
var28 = var29;
}
if (var28){
if (var_mtype == NULL) {
var34 = 0; /* is null */
} else {
var34 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other31 = ((val*)NULL);
{
var37 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mtype, var_other31); /* == on <var_mtype:nullable MType(MType)>*/
}
var38 = !var37;
var35 = var38;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
var34 = var35;
}
if (var34){
{
var39 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_subtype(var_v, var_nexpr, var_mtype);
}
var_etype = var39;
if (var_etype == NULL) {
var40 = 0; /* <var_mtype:nullable MType(MType)> cannot be null */
} else {
{ /* Inline kernel$Object$== (var_etype,var_mtype) on <var_etype:nullable MType> */
var_other = var_mtype;
{
{ /* Inline kernel$Object$is_same_instance (var_etype,var_other) on <var_etype:nullable MType(MType)> */
var45 = var_etype == var_other;
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
var40 = var41;
}
if (var40){
if (var_ntype == NULL) {
var46 = 0; /* is null */
} else {
var46 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_ntype,((val*)NULL)) on <var_ntype:nullable AType> */
var_other31 = ((val*)NULL);
{
var49 = ((short int(*)(val* self, val* p0))(var_ntype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ntype, var_other31); /* == on <var_ntype:nullable AType(AType)>*/
}
var50 = !var49;
var47 = var50;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
var46 = var47;
}
if (unlikely(!var46)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 938);
fatal_exit(1);
}
{
{ /* Inline typing$TypeVisitor$modelbuilder (var_v) on <var_v:TypeVisitor> */
var53 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <var_v:TypeVisitor> */
if (unlikely(var53 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
if (likely(varonce!=NULL)) {
var54 = varonce;
} else {
var55 = "useless-type";
var57 = (val*)(12l<<2|1);
var58 = (val*)(12l<<2|1);
var59 = (val*)((long)(0)<<2|3);
var60 = (val*)((long)(0)<<2|3);
var56 = core__flat___CString___to_s_unsafe(var55, var57, var58, var59, var60);
var54 = var56;
varonce = var54;
}
if (unlikely(varonce61==NULL)) {
var62 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "Warning: useless type definition for variable `";
var67 = (val*)(47l<<2|1);
var68 = (val*)(47l<<2|1);
var69 = (val*)((long)(0)<<2|3);
var70 = (val*)((long)(0)<<2|3);
var66 = core__flat___CString___to_s_unsafe(var65, var67, var68, var69, var70);
var64 = var66;
varonce63 = var64;
}
((struct instance_core__NativeArray*)var62)->values[0]=var64;
if (likely(varonce71!=NULL)) {
var72 = varonce71;
} else {
var73 = "`";
var75 = (val*)(1l<<2|1);
var76 = (val*)(1l<<2|1);
var77 = (val*)((long)(0)<<2|3);
var78 = (val*)((long)(0)<<2|3);
var74 = core__flat___CString___to_s_unsafe(var73, var75, var76, var77, var78);
var72 = var74;
varonce71 = var72;
}
((struct instance_core__NativeArray*)var62)->values[2]=var72;
} else {
var62 = varonce61;
varonce61 = NULL;
}
{
{ /* Inline scope$Variable$name (var_variable) on <var_variable:nullable Variable(Variable)> */
var81 = var_variable->attrs[COLOR_nitc__scope__Variable___name].val; /* _name on <var_variable:nullable Variable(Variable)> */
if (unlikely(var81 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__scope, 36);
fatal_exit(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
((struct instance_core__NativeArray*)var62)->values[1]=var79;
{
var82 = ((val*(*)(val* self))(var62->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var62); /* native_to_s on <var62:NativeArray[String]>*/
}
varonce61 = var62;
{
nitc___nitc__ModelBuilder___advice(var51, var_ntype, var54, var82); /* Direct call modelbuilder_base$ModelBuilder$advice on <var51:ModelBuilder>*/
}
} else {
}
} else {
{
var83 = nitc__typing___nitc__typing__TypeVisitor___visit_expr(var_v, var_nexpr);
}
var_mtype = var83;
if (var_mtype == NULL) {
var84 = 1; /* is null */
} else {
var84 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var89 = var_mtype == var_other;
var87 = var89;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
}
var85 = var87;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
var84 = var85;
}
if (var84){
goto RET_LABEL;
} else {
}
}
} else {
}
var_decltype = var_mtype;
if (var_mtype == NULL) {
var91 = 1; /* is null */
} else {
var91 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var96 = var_mtype == var_other;
var94 = var96;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
}
var92 = var94;
goto RET_LABEL93;
RET_LABEL93:(void)0;
}
var91 = var92;
}
var_ = var91;
if (var91){
var90 = var_;
} else {
/* <var_mtype:nullable MType(MType)> isa MNullType */
cltype = type_nitc__MNullType.color;
idtype = type_nitc__MNullType.id;
if(cltype >= var_mtype->type->table_size) {
var97 = 0;
} else {
var97 = var_mtype->type->type_table[cltype] == idtype;
}
var90 = var97;
}
if (var90){
if (likely(varonce98!=NULL)) {
var99 = varonce98;
} else {
var100 = "Object";
var102 = (val*)(6l<<2|1);
var103 = (val*)(6l<<2|1);
var104 = (val*)((long)(0)<<2|3);
var105 = (val*)((long)(0)<<2|3);
var101 = core__flat___CString___to_s_unsafe(var100, var102, var103, var104, var105);
var99 = var101;
varonce98 = var99;
}
{
var106 = nitc__typing___nitc__typing__TypeVisitor___get_mclass(var_v, self, var99);
}
var_objclass = var106;
if (var_objclass == NULL) {
var107 = 1; /* is null */
} else {
var107 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_objclass,((val*)NULL)) on <var_objclass:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_objclass,var_other) on <var_objclass:nullable MClass(MClass)> */
var112 = var_objclass == var_other;
var110 = var112;
goto RET_LABEL111;
RET_LABEL111:(void)0;
}
}
var108 = var110;
goto RET_LABEL109;
RET_LABEL109:(void)0;
}
var107 = var108;
}
if (var107){
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MClass$mclass_type (var_objclass) on <var_objclass:nullable MClass(MClass)> */
var115 = var_objclass->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_objclass:nullable MClass(MClass)> */
if (unlikely(var115 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var113 = var115;
RET_LABEL114:(void)0;
}
}
{
var116 = nitc___nitc__MType___as_nullable(var113);
}
var_decltype = var116;
if (var_mtype == NULL) {
var117 = 1; /* is null */
} else {
var117 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType(nullable MNullType)> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MNullType)> */
var122 = var_mtype == var_other;
var120 = var122;
goto RET_LABEL121;
RET_LABEL121:(void)0;
}
}
var118 = var120;
goto RET_LABEL119;
RET_LABEL119:(void)0;
}
var117 = var118;
}
if (var117){
var_mtype = var_decltype;
} else {
}
} else {
}
{
{ /* Inline typing$Variable$declared_type= (var_variable,var_decltype) on <var_variable:nullable Variable(Variable)> */
var_variable->attrs[COLOR_nitc__typing__Variable___declared_type].val = var_decltype; /* _declared_type on <var_variable:nullable Variable(Variable)> */
RET_LABEL123:(void)0;
}
}
{
nitc__typing___nitc__typing__TypeVisitor___set_variable(var_v, self, var_variable, var_mtype); /* Direct call typing$TypeVisitor$set_variable on <var_v:TypeVisitor>*/
}
{
{ /* Inline typing$AExpr$mtype= (self,var_mtype) on <self:AVardeclExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var_mtype; /* _mtype on <self:AVardeclExpr> */
RET_LABEL124:(void)0;
}
}
{
{ /* Inline typing$AExpr$is_typed= (self,1) on <self:AVardeclExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = 1; /* _is_typed on <self:AVardeclExpr> */
RET_LABEL125:(void)0;
}
}
RET_LABEL:;
}
/* method typing$AVarExpr$its_variable for (self: AVarExpr): nullable Variable */
val* nitc__typing___AVarExpr___AExpr__its_variable(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
val* var3 /* : nullable Variable */;
{
{ /* Inline scope$AVarFormExpr$variable (self) on <self:AVarExpr> */
var3 = self->attrs[COLOR_nitc__scope__AVarFormExpr___variable].val; /* _variable on <self:AVarExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing$AVarExpr$accept_typing for (self: AVarExpr, TypeVisitor) */
void nitc__typing___AVarExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable Variable */;
val* var2 /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_other13 /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
var_v = p0;
{
{ /* Inline scope$AVarFormExpr$variable (self) on <self:AVarExpr> */
var2 = self->attrs[COLOR_nitc__scope__AVarFormExpr___variable].val; /* _variable on <self:AVarExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_variable = var;
if (var_variable == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_variable,((val*)NULL)) on <var_variable:nullable Variable> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_variable,var_other) on <var_variable:nullable Variable(Variable)> */
var8 = var_variable == var_other;
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
var9 = nitc__typing___nitc__typing__TypeVisitor___get_variable(var_v, self, var_variable);
}
var_mtype = var9;
if (var_mtype == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other13 = ((val*)NULL);
{
var14 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mtype, var_other13); /* == on <var_mtype:nullable MType(MType)>*/
}
var15 = !var14;
var11 = var15;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
if (var10){
} else {
}
{
{ /* Inline typing$AExpr$mtype= (self,var_mtype) on <self:AVarExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var_mtype; /* _mtype on <self:AVarExpr> */
RET_LABEL16:(void)0;
}
}
RET_LABEL:;
}
/* method typing$AVarAssignExpr$accept_typing for (self: AVarAssignExpr, TypeVisitor) */
void nitc__typing___AVarAssignExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable Variable */;
val* var2 /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : AExpr */;
val* var10 /* : AExpr */;
val* var11 /* : nullable MType */;
val* var13 /* : nullable MType */;
val* var14 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
var_v = p0;
{
{ /* Inline scope$AVarFormExpr$variable (self) on <self:AVarAssignExpr> */
var2 = self->attrs[COLOR_nitc__scope__AVarFormExpr___variable].val; /* _variable on <self:AVarAssignExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_variable = var;
if (var_variable == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_variable,((val*)NULL)) on <var_variable:nullable Variable> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_variable->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_variable, var_other); /* == on <var_variable:nullable Variable(Variable)>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 987);
fatal_exit(1);
}
{
{ /* Inline parser_nodes$AAssignFormExpr$n_value (self) on <self:AVarAssignExpr> */
var10 = self->attrs[COLOR_nitc__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AVarAssignExpr> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2073);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline typing$Variable$declared_type (var_variable) on <var_variable:nullable Variable(Variable)> */
var13 = var_variable->attrs[COLOR_nitc__typing__Variable___declared_type].val; /* _declared_type on <var_variable:nullable Variable(Variable)> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_subtype(var_v, var8, var11);
}
var_mtype = var14;
{
nitc__typing___nitc__typing__TypeVisitor___set_variable(var_v, self, var_variable, var_mtype); /* Direct call typing$TypeVisitor$set_variable on <var_v:TypeVisitor>*/
}
{
{ /* Inline typing$AExpr$is_typed= (self,1) on <self:AVarAssignExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = 1; /* _is_typed on <self:AVarAssignExpr> */
RET_LABEL15:(void)0;
}
}
RET_LABEL:;
}
/* method typing$AReassignFormExpr$reassign_callsite for (self: AReassignFormExpr): nullable CallSite */
val* nitc__typing___AReassignFormExpr___reassign_callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nitc__typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:AReassignFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing$AReassignFormExpr$reassign_callsite= for (self: AReassignFormExpr, nullable CallSite) */
void nitc__typing___AReassignFormExpr___reassign_callsite_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__AReassignFormExpr___reassign_callsite].val = p0; /* _reassign_callsite on <self:AReassignFormExpr> */
RET_LABEL:;
}
/* method typing$AReassignFormExpr$read_type for (self: AReassignFormExpr): nullable MType */
val* nitc__typing___AReassignFormExpr___read_type(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nitc__typing__AReassignFormExpr___read_type].val; /* _read_type on <self:AReassignFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing$AReassignFormExpr$read_type= for (self: AReassignFormExpr, nullable MType) */
void nitc__typing___AReassignFormExpr___read_type_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__AReassignFormExpr___read_type].val = p0; /* _read_type on <self:AReassignFormExpr> */
RET_LABEL:;
}
/* method typing$AReassignFormExpr$resolve_reassignment for (self: AReassignFormExpr, TypeVisitor, MType, MType): nullable MType */
val* nitc__typing___AReassignFormExpr___resolve_reassignment(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MType */;
val* var_v /* var v: TypeVisitor */;
val* var_readtype /* var readtype: MType */;
val* var_writetype /* var writetype: MType */;
val* var1 /* : AAssignOp */;
val* var3 /* : AAssignOp */;
val* var4 /* : String */;
val* var_reassign_name /* var reassign_name: String */;
val* var6 /* : AAssignOp */;
val* var8 /* : AAssignOp */;
val* var9 /* : nullable CallSite */;
val* var_callsite /* var callsite: nullable CallSite */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
val* var17 /* : MSignature */;
val* var19 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var20 /* : nullable MType */;
val* var22 /* : nullable MType */;
val* var_rettype /* var rettype: nullable MType */;
short int var23 /* : Bool */;
long var24 /* : Int */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
short int var_ /* var : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var_other31 /* var other: nullable Object */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
val* var34 /* : AExpr */;
val* var36 /* : AExpr */;
val* var37 /* : Array[MParameter] */;
val* var39 /* : Array[MParameter] */;
val* var40 /* : nullable Object */;
val* var41 /* : MType */;
val* var43 /* : MType */;
val* var44 /* : nullable MType */;
val* var_value_type /* var value_type: nullable MType */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
val* var51 /* : nullable MType */;
var_v = p0;
var_readtype = p1;
var_writetype = p2;
{
{ /* Inline parser_nodes$AReassignFormExpr$n_assign_op (self) on <self:AReassignFormExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:AReassignFormExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2081);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val*(*)(val* self))(var1->class->vft[COLOR_nitc__parser_nodes__AAssignOp__operator]))(var1); /* operator on <var1:AAssignOp>*/
}
var_reassign_name = var4;
{
{ /* Inline typing$AReassignFormExpr$read_type= (self,var_readtype) on <self:AReassignFormExpr> */
self->attrs[COLOR_nitc__typing__AReassignFormExpr___read_type].val = var_readtype; /* _read_type on <self:AReassignFormExpr> */
RET_LABEL5:(void)0;
}
}
{
{ /* Inline parser_nodes$AReassignFormExpr$n_assign_op (self) on <self:AReassignFormExpr> */
var8 = self->attrs[COLOR_nitc__parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:AReassignFormExpr> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2081);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = nitc__typing___nitc__typing__TypeVisitor___get_method(var_v, var6, var_readtype, var_reassign_name, 0);
}
var_callsite = var9;
if (var_callsite == NULL) {
var10 = 1; /* is null */
} else {
var10 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_callsite,((val*)NULL)) on <var_callsite:nullable CallSite> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_callsite,var_other) on <var_callsite:nullable CallSite(CallSite)> */
var15 = var_callsite == var_other;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
if (var10){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline typing$AReassignFormExpr$reassign_callsite= (self,var_callsite) on <self:AReassignFormExpr> */
self->attrs[COLOR_nitc__typing__AReassignFormExpr___reassign_callsite].val = var_callsite; /* _reassign_callsite on <self:AReassignFormExpr> */
RET_LABEL16:(void)0;
}
}
{
{ /* Inline typing$CallSite$msignature (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var19 = var_callsite->attrs[COLOR_nitc__typing__CallSite___msignature].val; /* _msignature on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var19 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 663);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_msignature = var17;
{
{ /* Inline model$MSignature$return_mtype (var_msignature) on <var_msignature:MSignature> */
var22 = var_msignature->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:MSignature> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
var_rettype = var20;
{
var24 = nitc___nitc__MSignature___arity(var_msignature);
}
{
{ /* Inline kernel$Int$== (var24,1l) on <var24:Int> */
var27 = var24 == 1l;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var_ = var25;
if (var25){
if (var_rettype == NULL) {
var28 = 0; /* is null */
} else {
var28 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_rettype,((val*)NULL)) on <var_rettype:nullable MType> */
var_other31 = ((val*)NULL);
{
var32 = ((short int(*)(val* self, val* p0))(var_rettype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_rettype, var_other31); /* == on <var_rettype:nullable MType(MType)>*/
}
var33 = !var32;
var29 = var33;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
var28 = var29;
}
var23 = var28;
} else {
var23 = var_;
}
if (unlikely(!var23)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1020);
fatal_exit(1);
}
{
{ /* Inline parser_nodes$AReassignFormExpr$n_value (self) on <self:AReassignFormExpr> */
var36 = self->attrs[COLOR_nitc__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AReassignFormExpr> */
if (unlikely(var36 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2084);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline model$MSignature$mparameters (var_msignature) on <var_msignature:MSignature> */
var39 = var_msignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var39 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
var40 = core___core__SequenceRead___Collection__first(var37);
}
{
{ /* Inline model$MParameter$mtype (var40) on <var40:nullable Object(MParameter)> */
var43 = var40->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var40:nullable Object(MParameter)> */
if (unlikely(var43 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
var44 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_subtype(var_v, var34, var41);
}
var_value_type = var44;
if (var_value_type == NULL) {
var45 = 1; /* is null */
} else {
var45 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_value_type,((val*)NULL)) on <var_value_type:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_value_type,var_other) on <var_value_type:nullable MType(MType)> */
var50 = var_value_type == var_other;
var48 = var50;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
var46 = var48;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
var45 = var46;
}
if (var45){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var51 = nitc__typing___nitc__typing__TypeVisitor___check_subtype(var_v, self, var_rettype, var_writetype, 0);
}
var = var_rettype;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing$AVarReassignExpr$accept_typing for (self: AVarReassignExpr, TypeVisitor) */
void nitc__typing___AVarReassignExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable Variable */;
val* var2 /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable MType */;
val* var_readtype /* var readtype: nullable MType */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var_other12 /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
val* var17 /* : nullable MType */;
val* var19 /* : nullable MType */;
val* var_writetype /* var writetype: nullable MType */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
val* var26 /* : nullable MType */;
val* var_rettype /* var rettype: nullable MType */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
var_v = p0;
{
{ /* Inline scope$AVarFormExpr$variable (self) on <self:AVarReassignExpr> */
var2 = self->attrs[COLOR_nitc__scope__AVarFormExpr___variable].val; /* _variable on <self:AVarReassignExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_variable = var;
if (var_variable == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_variable,((val*)NULL)) on <var_variable:nullable Variable> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_variable->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_variable, var_other); /* == on <var_variable:nullable Variable(Variable)>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1034);
fatal_exit(1);
}
{
var8 = nitc__typing___nitc__typing__TypeVisitor___get_variable(var_v, self, var_variable);
}
var_readtype = var8;
if (var_readtype == NULL) {
var9 = 1; /* is null */
} else {
var9 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_readtype,((val*)NULL)) on <var_readtype:nullable MType> */
var_other12 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_readtype,var_other12) on <var_readtype:nullable MType(MType)> */
var15 = var_readtype == var_other12;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
goto RET_LABEL;
} else {
}
{
{ /* Inline typing$AReassignFormExpr$read_type= (self,var_readtype) on <self:AVarReassignExpr> */
self->attrs[COLOR_nitc__typing__AReassignFormExpr___read_type].val = var_readtype; /* _read_type on <self:AVarReassignExpr> */
RET_LABEL16:(void)0;
}
}
{
{ /* Inline typing$Variable$declared_type (var_variable) on <var_variable:nullable Variable(Variable)> */
var19 = var_variable->attrs[COLOR_nitc__typing__Variable___declared_type].val; /* _declared_type on <var_variable:nullable Variable(Variable)> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_writetype = var17;
if (var_writetype == NULL) {
var20 = 1; /* is null */
} else {
var20 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_writetype,((val*)NULL)) on <var_writetype:nullable MType> */
var_other12 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_writetype,var_other12) on <var_writetype:nullable MType(MType)> */
var25 = var_writetype == var_other12;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (var20){
goto RET_LABEL;
} else {
}
{
var26 = nitc__typing___AReassignFormExpr___resolve_reassignment(self, var_v, var_readtype, var_writetype);
}
var_rettype = var26;
{
nitc__typing___nitc__typing__TypeVisitor___set_variable(var_v, self, var_variable, var_rettype); /* Direct call typing$TypeVisitor$set_variable on <var_v:TypeVisitor>*/
}
if (var_rettype == NULL) {
var27 = 0; /* is null */
} else {
var27 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_rettype,((val*)NULL)) on <var_rettype:nullable MType> */
var_other = ((val*)NULL);
{
var30 = ((short int(*)(val* self, val* p0))(var_rettype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_rettype, var_other); /* == on <var_rettype:nullable MType(MType)>*/
}
var31 = !var30;
var28 = var31;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
var27 = var28;
}
{
{ /* Inline typing$AExpr$is_typed= (self,var27) on <self:AVarReassignExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = var27; /* _is_typed on <self:AVarReassignExpr> */
RET_LABEL32:(void)0;
}
}
RET_LABEL:;
}
/* method typing$AContinueExpr$accept_typing for (self: AContinueExpr, TypeVisitor) */
void nitc__typing___AContinueExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable AExpr */;
val* var2 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable MType */;
var_v = p0;
{
{ /* Inline parser_nodes$AEscapeExpr$n_expr (self) on <self:AContinueExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AEscapeExpr___n_expr].val; /* _n_expr on <self:AContinueExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_nexpr = var;
if (var_nexpr == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_nexpr,((val*)NULL)) on <var_nexpr:nullable AExpr> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nexpr, var_other); /* == on <var_nexpr:nullable AExpr(AExpr)>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
{
var8 = nitc__typing___nitc__typing__TypeVisitor___visit_expr(var_v, var_nexpr);
}
} else {
}
{
{ /* Inline typing$AExpr$is_typed= (self,1) on <self:AContinueExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = 1; /* _is_typed on <self:AContinueExpr> */
RET_LABEL9:(void)0;
}
}
RET_LABEL:;
}
/* method typing$ABreakExpr$accept_typing for (self: ABreakExpr, TypeVisitor) */
void nitc__typing___ABreakExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable AExpr */;
val* var2 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable MType */;
var_v = p0;
{
{ /* Inline parser_nodes$AEscapeExpr$n_expr (self) on <self:ABreakExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AEscapeExpr___n_expr].val; /* _n_expr on <self:ABreakExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_nexpr = var;
if (var_nexpr == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_nexpr,((val*)NULL)) on <var_nexpr:nullable AExpr> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nexpr, var_other); /* == on <var_nexpr:nullable AExpr(AExpr)>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
{
var8 = nitc__typing___nitc__typing__TypeVisitor___visit_expr(var_v, var_nexpr);
}
} else {
}
{
{ /* Inline typing$AExpr$is_typed= (self,1) on <self:ABreakExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = 1; /* _is_typed on <self:ABreakExpr> */
RET_LABEL9:(void)0;
}
}
RET_LABEL:;
}
/* method typing$AReturnExpr$accept_typing for (self: AReturnExpr, TypeVisitor) */
void nitc__typing___AReturnExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable AExpr */;
val* var2 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
val* var3 /* : nullable MPropDef */;
val* var5 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MPropDef */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var7 /* : nullable MSignature */;
val* var9 /* : nullable MSignature */;
val* var10 /* : nullable MType */;
val* var12 /* : nullable MType */;
val* var_ret_type /* var ret_type: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : nullable MType */;
val* var18 /* : nullable MType */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : nullable MType */;
val* var30 /* : nullable MType */;
static val* varonce;
val* var31 /* : String */;
char* var32 /* : CString */;
val* var33 /* : String */;
val* var34 /* : nullable Int */;
val* var35 /* : nullable Int */;
val* var36 /* : nullable Bool */;
val* var37 /* : nullable Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : CString */;
val* var46 /* : String */;
val* var47 /* : nullable Int */;
val* var48 /* : nullable Int */;
val* var49 /* : nullable Bool */;
val* var50 /* : nullable Bool */;
var_v = p0;
{
{ /* Inline parser_nodes$AEscapeExpr$n_expr (self) on <self:AReturnExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AEscapeExpr___n_expr].val; /* _n_expr on <self:AReturnExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_nexpr = var;
{
{ /* Inline typing$TypeVisitor$mpropdef (var_v) on <var_v:TypeVisitor> */
var5 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___mpropdef].val; /* _mpropdef on <var_v:TypeVisitor> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_mpropdef = var3;
/* <var_mpropdef:nullable MPropDef> isa MMethodDef */
cltype = type_nitc__MMethodDef.color;
idtype = type_nitc__MMethodDef.id;
if(var_mpropdef == NULL) {
var6 = 0;
} else {
if(cltype >= var_mpropdef->type->table_size) {
var6 = 0;
} else {
var6 = var_mpropdef->type->type_table[cltype] == idtype;
}
}
if (var6){
{
{ /* Inline model$MMethodDef$msignature (var_mpropdef) on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var9 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (var7 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1082);
fatal_exit(1);
} else {
{ /* Inline model$MSignature$return_mtype (var7) on <var7:nullable MSignature> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1891);
fatal_exit(1);
}
var12 = var7->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var7:nullable MSignature> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_ret_type = var10;
} else {
/* <var_mpropdef:nullable MPropDef> isa MAttributeDef */
cltype14 = type_nitc__MAttributeDef.color;
idtype15 = type_nitc__MAttributeDef.id;
if(var_mpropdef == NULL) {
var13 = 0;
} else {
if(cltype14 >= var_mpropdef->type->table_size) {
var13 = 0;
} else {
var13 = var_mpropdef->type->type_table[cltype14] == idtype15;
}
}
if (var13){
{
{ /* Inline model$MAttributeDef$static_mtype (var_mpropdef) on <var_mpropdef:nullable MPropDef(MAttributeDef)> */
var18 = var_mpropdef->attrs[COLOR_nitc__model__MAttributeDef___static_mtype].val; /* _static_mtype on <var_mpropdef:nullable MPropDef(MAttributeDef)> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_ret_type = var16;
} else {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1086);
fatal_exit(1);
}
}
if (var_nexpr == NULL) {
var19 = 0; /* is null */
} else {
var19 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_nexpr,((val*)NULL)) on <var_nexpr:nullable AExpr> */
var_other = ((val*)NULL);
{
var22 = ((short int(*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nexpr, var_other); /* == on <var_nexpr:nullable AExpr(AExpr)>*/
}
var23 = !var22;
var20 = var23;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var19 = var20;
}
if (var19){
if (var_ret_type == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_ret_type,((val*)NULL)) on <var_ret_type:nullable Object(nullable MType)> */
var_other = ((val*)NULL);
{
var27 = ((short int(*)(val* self, val* p0))(var_ret_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ret_type, var_other); /* == on <var_ret_type:nullable Object(MType)>*/
}
var28 = !var27;
var25 = var28;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var24 = var25;
}
if (var24){
{
var29 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_subtype(var_v, var_nexpr, var_ret_type);
}
} else {
{
var30 = nitc__typing___nitc__typing__TypeVisitor___visit_expr(var_v, var_nexpr);
}
if (likely(varonce!=NULL)) {
var31 = varonce;
} else {
var32 = "Error: `return` with value in a procedure.";
var34 = (val*)(42l<<2|1);
var35 = (val*)(42l<<2|1);
var36 = (val*)((long)(0)<<2|3);
var37 = (val*)((long)(0)<<2|3);
var33 = core__flat___CString___to_s_unsafe(var32, var34, var35, var36, var37);
var31 = var33;
varonce = var31;
}
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, var_nexpr, var31); /* Direct call typing$TypeVisitor$error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
}
} else {
if (var_ret_type == NULL) {
var38 = 0; /* is null */
} else {
var38 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_ret_type,((val*)NULL)) on <var_ret_type:nullable Object(nullable MType)> */
var_other = ((val*)NULL);
{
var41 = ((short int(*)(val* self, val* p0))(var_ret_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ret_type, var_other); /* == on <var_ret_type:nullable Object(MType)>*/
}
var42 = !var41;
var39 = var42;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
var38 = var39;
}
if (var38){
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "Error: `return` without value in a function.";
var47 = (val*)(44l<<2|1);
var48 = (val*)(44l<<2|1);
var49 = (val*)((long)(0)<<2|3);
var50 = (val*)((long)(0)<<2|3);
var46 = core__flat___CString___to_s_unsafe(var45, var47, var48, var49, var50);
var44 = var46;
varonce43 = var44;
}
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var44); /* Direct call typing$TypeVisitor$error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
}
{
{ /* Inline typing$AExpr$is_typed= (self,1) on <self:AReturnExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = 1; /* _is_typed on <self:AReturnExpr> */
RET_LABEL51:(void)0;
}
}
RET_LABEL:;
}
/* method typing$AAbortExpr$accept_typing for (self: AAbortExpr, TypeVisitor) */
void nitc__typing___AAbortExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
var_v = p0;
{
{ /* Inline typing$AExpr$is_typed= (self,1) on <self:AAbortExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = 1; /* _is_typed on <self:AAbortExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method typing$AIfExpr$accept_typing for (self: AIfExpr, TypeVisitor) */
void nitc__typing___AIfExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var4 /* : nullable AExpr */;
val* var6 /* : nullable AExpr */;
val* var7 /* : nullable AExpr */;
val* var9 /* : nullable AExpr */;
short int var11 /* : Bool */;
val* var12 /* : nullable AExpr */;
val* var14 /* : nullable AExpr */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var_ /* var : Bool */;
val* var20 /* : nullable AExpr */;
val* var22 /* : nullable AExpr */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var_other26 /* var other: nullable Object */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : nullable AExpr */;
val* var32 /* : nullable AExpr */;
val* var33 /* : nullable MType */;
var_v = p0;
{
{ /* Inline parser_nodes$AIfExpr$n_expr (self) on <self:AIfExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_expr].val; /* _n_expr on <self:AIfExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1924);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_bool(var_v, var);
}
{
{ /* Inline parser_nodes$AIfExpr$n_then (self) on <self:AIfExpr> */
var6 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_then].val; /* _n_then on <self:AIfExpr> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
nitc__typing___nitc__typing__TypeVisitor___visit_stmt(var_v, var4); /* Direct call typing$TypeVisitor$visit_stmt on <var_v:TypeVisitor>*/
}
{
{ /* Inline parser_nodes$AIfExpr$n_else (self) on <self:AIfExpr> */
var9 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_else].val; /* _n_else on <self:AIfExpr> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
nitc__typing___nitc__typing__TypeVisitor___visit_stmt(var_v, var7); /* Direct call typing$TypeVisitor$visit_stmt on <var_v:TypeVisitor>*/
}
{
{ /* Inline typing$AExpr$is_typed= (self,1) on <self:AIfExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = 1; /* _is_typed on <self:AIfExpr> */
RET_LABEL10:(void)0;
}
}
{
{ /* Inline parser_nodes$AIfExpr$n_then (self) on <self:AIfExpr> */
var14 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_then].val; /* _n_then on <self:AIfExpr> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
if (var12 == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var12,((val*)NULL)) on <var12:nullable AExpr> */
var_other = ((val*)NULL);
{
var18 = ((short int(*)(val* self, val* p0))(var12->class->vft[COLOR_core__kernel__Object___61d_61d]))(var12, var_other); /* == on <var12:nullable AExpr(AExpr)>*/
}
var19 = !var18;
var16 = var19;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var15 = var16;
}
var_ = var15;
if (var15){
{
{ /* Inline parser_nodes$AIfExpr$n_else (self) on <self:AIfExpr> */
var22 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_else].val; /* _n_else on <self:AIfExpr> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
if (var20 == NULL) {
var23 = 1; /* is null */
} else {
var23 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var20,((val*)NULL)) on <var20:nullable AExpr> */
var_other26 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var20,var_other26) on <var20:nullable AExpr(AExpr)> */
var29 = var20 == var_other26;
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var24 = var27;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
var23 = var24;
}
var11 = var23;
} else {
var11 = var_;
}
if (var11){
{
{ /* Inline parser_nodes$AIfExpr$n_then (self) on <self:AIfExpr> */
var32 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_then].val; /* _n_then on <self:AIfExpr> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
if (var30 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1122);
fatal_exit(1);
} else {
var33 = ((val*(*)(val* self))(var30->class->vft[COLOR_nitc__typing__AExpr__mtype]))(var30); /* mtype on <var30:nullable AExpr>*/
}
{
{ /* Inline typing$AExpr$mtype= (self,var33) on <self:AIfExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var33; /* _mtype on <self:AIfExpr> */
RET_LABEL34:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method typing$AIfexprExpr$accept_typing for (self: AIfexprExpr, TypeVisitor) */
void nitc__typing___AIfexprExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var4 /* : AExpr */;
val* var6 /* : AExpr */;
val* var7 /* : nullable MType */;
val* var_t1 /* var t1: nullable MType */;
val* var8 /* : AExpr */;
val* var10 /* : AExpr */;
val* var11 /* : nullable MType */;
val* var_t2 /* var t2: nullable MType */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var_ /* var : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : Array[MType] */;
val* var_26 /* var : Array[MType] */;
val* var27 /* : nullable MType */;
val* var_t /* var t: nullable MType */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
val* var34 /* : NativeArray[String] */;
static val* varonce;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : CString */;
val* var38 /* : String */;
val* var39 /* : nullable Int */;
val* var40 /* : nullable Int */;
val* var41 /* : nullable Bool */;
val* var42 /* : nullable Bool */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : CString */;
val* var46 /* : String */;
val* var47 /* : nullable Int */;
val* var48 /* : nullable Int */;
val* var49 /* : nullable Bool */;
val* var50 /* : nullable Bool */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : CString */;
val* var54 /* : String */;
val* var55 /* : nullable Int */;
val* var56 /* : nullable Int */;
val* var57 /* : nullable Bool */;
val* var58 /* : nullable Bool */;
val* var59 /* : String */;
val* var60 /* : String */;
val* var61 /* : String */;
var_v = p0;
{
{ /* Inline parser_nodes$AIfexprExpr$n_expr (self) on <self:AIfexprExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_expr].val; /* _n_expr on <self:AIfexprExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1947);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_bool(var_v, var);
}
{
{ /* Inline parser_nodes$AIfexprExpr$n_then (self) on <self:AIfexprExpr> */
var6 = self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_then].val; /* _n_then on <self:AIfexprExpr> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_then");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1953);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nitc__typing___nitc__typing__TypeVisitor___visit_expr(var_v, var4);
}
var_t1 = var7;
{
{ /* Inline parser_nodes$AIfexprExpr$n_else (self) on <self:AIfexprExpr> */
var10 = self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_else].val; /* _n_else on <self:AIfexprExpr> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_else");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1959);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nitc__typing___nitc__typing__TypeVisitor___visit_expr(var_v, var8);
}
var_t2 = var11;
if (var_t1 == NULL) {
var13 = 1; /* is null */
} else {
var13 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_t1,((val*)NULL)) on <var_t1:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_t1,var_other) on <var_t1:nullable MType(MType)> */
var18 = var_t1 == var_other;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
var_ = var13;
if (var13){
var12 = var_;
} else {
if (var_t2 == NULL) {
var19 = 1; /* is null */
} else {
var19 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_t2,((val*)NULL)) on <var_t2:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_t2,var_other) on <var_t2:nullable MType(MType)> */
var24 = var_t2 == var_other;
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var19 = var20;
}
var12 = var19;
}
if (var12){
goto RET_LABEL;
} else {
}
var25 = NEW_core__Array(&type_core__Array__nitc__MType);
{
core___core__Array___with_capacity(var25, 2l); /* Direct call array$Array$with_capacity on <var25:Array[MType]>*/
}
var_26 = var25;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_26, var_t1); /* Direct call array$AbstractArray$push on <var_26:Array[MType]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_26, var_t2); /* Direct call array$AbstractArray$push on <var_26:Array[MType]>*/
}
{
var27 = nitc__typing___nitc__typing__TypeVisitor___merge_types(var_v, self, var_26);
}
var_t = var27;
if (var_t == NULL) {
var28 = 1; /* is null */
} else {
var28 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_t,((val*)NULL)) on <var_t:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_t,var_other) on <var_t:nullable MType(MType)> */
var33 = var_t == var_other;
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
var28 = var29;
}
if (var28){
if (unlikely(varonce==NULL)) {
var34 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "Type Error: ambiguous type `";
var39 = (val*)(28l<<2|1);
var40 = (val*)(28l<<2|1);
var41 = (val*)((long)(0)<<2|3);
var42 = (val*)((long)(0)<<2|3);
var38 = core__flat___CString___to_s_unsafe(var37, var39, var40, var41, var42);
var36 = var38;
varonce35 = var36;
}
((struct instance_core__NativeArray*)var34)->values[0]=var36;
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "` vs `";
var47 = (val*)(6l<<2|1);
var48 = (val*)(6l<<2|1);
var49 = (val*)((long)(0)<<2|3);
var50 = (val*)((long)(0)<<2|3);
var46 = core__flat___CString___to_s_unsafe(var45, var47, var48, var49, var50);
var44 = var46;
varonce43 = var44;
}
((struct instance_core__NativeArray*)var34)->values[2]=var44;
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "`.";
var55 = (val*)(2l<<2|1);
var56 = (val*)(2l<<2|1);
var57 = (val*)((long)(0)<<2|3);
var58 = (val*)((long)(0)<<2|3);
var54 = core__flat___CString___to_s_unsafe(var53, var55, var56, var57, var58);
var52 = var54;
varonce51 = var52;
}
((struct instance_core__NativeArray*)var34)->values[4]=var52;
} else {
var34 = varonce;
varonce = NULL;
}
{
var59 = ((val*(*)(val* self))(var_t1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_t1); /* to_s on <var_t1:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var34)->values[1]=var59;
{
var60 = ((val*(*)(val* self))(var_t2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_t2); /* to_s on <var_t2:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var34)->values[3]=var60;
{
var61 = ((val*(*)(val* self))(var34->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var34); /* native_to_s on <var34:NativeArray[String]>*/
}
varonce = var34;
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var61); /* Direct call typing$TypeVisitor$error on <var_v:TypeVisitor>*/
}
} else {
}
{
{ /* Inline typing$AExpr$mtype= (self,var_t) on <self:AIfexprExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var_t; /* _mtype on <self:AIfexprExpr> */
RET_LABEL62:(void)0;
}
}
RET_LABEL:;
}
/* method typing$ADoExpr$accept_typing for (self: ADoExpr, TypeVisitor) */
void nitc__typing___ADoExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable AExpr */;
val* var2 /* : nullable AExpr */;
val* var3 /* : nullable AExpr */;
val* var5 /* : nullable AExpr */;
var_v = p0;
{
{ /* Inline parser_nodes$ADoExpr$n_block (self) on <self:ADoExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ADoExpr___n_block].val; /* _n_block on <self:ADoExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc__typing___nitc__typing__TypeVisitor___visit_stmt(var_v, var); /* Direct call typing$TypeVisitor$visit_stmt on <var_v:TypeVisitor>*/
}
{
{ /* Inline parser_nodes$ADoExpr$n_catch (self) on <self:ADoExpr> */
var5 = self->attrs[COLOR_nitc__parser_nodes__ADoExpr___n_catch].val; /* _n_catch on <self:ADoExpr> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
nitc__typing___nitc__typing__TypeVisitor___visit_stmt(var_v, var3); /* Direct call typing$TypeVisitor$visit_stmt on <var_v:TypeVisitor>*/
}
{
{ /* Inline typing$AExpr$is_typed= (self,1) on <self:ADoExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = 1; /* _is_typed on <self:ADoExpr> */
RET_LABEL6:(void)0;
}
}
RET_LABEL:;
}
/* method typing$AWhileExpr$accept_typing for (self: AWhileExpr, TypeVisitor) */
void nitc__typing___AWhileExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : nullable MType */;
val* var5 /* : nullable AExpr */;
val* var7 /* : nullable AExpr */;
var_v = p0;
{
{ /* Inline typing$TypeVisitor$has_loop= (var_v,1) on <var_v:TypeVisitor> */
var_v->attrs[COLOR_nitc__typing__TypeVisitor___has_loop].s = 1; /* _has_loop on <var_v:TypeVisitor> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline parser_nodes$AWhileExpr$n_expr (self) on <self:AWhileExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AWhileExpr___n_expr].val; /* _n_expr on <self:AWhileExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1971);
fatal_exit(1);
}
var = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_bool(var_v, var);
}
{
{ /* Inline parser_nodes$AWhileExpr$n_block (self) on <self:AWhileExpr> */
var7 = self->attrs[COLOR_nitc__parser_nodes__AWhileExpr___n_block].val; /* _n_block on <self:AWhileExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
nitc__typing___nitc__typing__TypeVisitor___visit_stmt(var_v, var5); /* Direct call typing$TypeVisitor$visit_stmt on <var_v:TypeVisitor>*/
}
{
{ /* Inline typing$AExpr$is_typed= (self,1) on <self:AWhileExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = 1; /* _is_typed on <self:AWhileExpr> */
RET_LABEL8:(void)0;
}
}
RET_LABEL:;
}
/* method typing$ALoopExpr$accept_typing for (self: ALoopExpr, TypeVisitor) */
void nitc__typing___ALoopExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable AExpr */;
val* var3 /* : nullable AExpr */;
var_v = p0;
{
{ /* Inline typing$TypeVisitor$has_loop= (var_v,1) on <var_v:TypeVisitor> */
var_v->attrs[COLOR_nitc__typing__TypeVisitor___has_loop].s = 1; /* _has_loop on <var_v:TypeVisitor> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline parser_nodes$ALoopExpr$n_block (self) on <self:ALoopExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ALoopExpr___n_block].val; /* _n_block on <self:ALoopExpr> */
var = var3;
RET_LABEL2:(void)0;
}
}
{
nitc__typing___nitc__typing__TypeVisitor___visit_stmt(var_v, var); /* Direct call typing$TypeVisitor$visit_stmt on <var_v:TypeVisitor>*/
}
{
{ /* Inline typing$AExpr$is_typed= (self,1) on <self:ALoopExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = 1; /* _is_typed on <self:ALoopExpr> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method typing$AForExpr$accept_typing for (self: AForExpr, TypeVisitor) */
void nitc__typing___AForExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : ANodes[AForGroup] */;
val* var3 /* : ANodes[AForGroup] */;
val* var_ /* var : ANodes[AForGroup] */;
val* var4 /* : Iterator[ANode] */;
val* var_5 /* var : Iterator[AForGroup] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_g /* var g: AForGroup */;
val* var8 /* : AExpr */;
val* var10 /* : AExpr */;
val* var11 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
val* var22 /* : nullable AExpr */;
val* var24 /* : nullable AExpr */;
val* var25 /* : nullable AExpr */;
val* var27 /* : nullable AExpr */;
val* var28 /* : nullable MType */;
var_v = p0;
{
{ /* Inline typing$TypeVisitor$has_loop= (var_v,1) on <var_v:TypeVisitor> */
var_v->attrs[COLOR_nitc__typing__TypeVisitor___has_loop].s = 1; /* _has_loop on <var_v:TypeVisitor> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline parser_nodes$AForExpr$n_groups (self) on <self:AForExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_groups].val; /* _n_groups on <self:AForExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_groups");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2001);
fatal_exit(1);
}
var = var3;
RET_LABEL2:(void)0;
}
}
var_ = var;
{
var4 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_);
}
var_5 = var4;
for(;;) {
{
var6 = ((short int(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_5); /* is_ok on <var_5:Iterator[AForGroup]>*/
}
if (var6){
} else {
goto BREAK_label;
}
{
var7 = ((val*(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_5); /* item on <var_5:Iterator[AForGroup]>*/
}
var_g = var7;
{
{ /* Inline parser_nodes$AForGroup$n_expr (var_g) on <var_g:AForGroup> */
var10 = var_g->attrs[COLOR_nitc__parser_nodes__AForGroup___n_expr].val; /* _n_expr on <var_g:AForGroup> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2024);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nitc__typing___nitc__typing__TypeVisitor___visit_expr(var_v, var8);
}
var_mtype = var11;
if (var_mtype == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var17 = var_mtype == var_other;
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
nitc__typing___AForGroup___do_type_iterator(var_g, var_v, var_mtype); /* Direct call typing$AForGroup$do_type_iterator on <var_g:AForGroup>*/
}
{
{ /* Inline modelbuilder_base$ANode$is_broken (var_g) on <var_g:AForGroup> */
var20 = var_g->attrs[COLOR_nitc__modelbuilder_base__ANode___is_broken].s; /* _is_broken on <var_g:AForGroup> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (var18){
{
{ /* Inline modelbuilder_base$ANode$is_broken= (self,1) on <self:AForExpr> */
self->attrs[COLOR_nitc__modelbuilder_base__ANode___is_broken].s = 1; /* _is_broken on <self:AForExpr> */
RET_LABEL21:(void)0;
}
}
} else {
}
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_5); /* next on <var_5:Iterator[AForGroup]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_5); /* finish on <var_5:Iterator[AForGroup]>*/
}
{
{ /* Inline parser_nodes$AForExpr$n_block (self) on <self:AForExpr> */
var24 = self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_block].val; /* _n_block on <self:AForExpr> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
nitc__typing___nitc__typing__TypeVisitor___visit_stmt(var_v, var22); /* Direct call typing$TypeVisitor$visit_stmt on <var_v:TypeVisitor>*/
}
{
{ /* Inline parser_nodes$AForExpr$n_block (self) on <self:AForExpr> */
var27 = self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_block].val; /* _n_block on <self:AForExpr> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
if (var25 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1189);
fatal_exit(1);
} else {
var28 = ((val*(*)(val* self))(var25->class->vft[COLOR_nitc__typing__AExpr__mtype]))(var25); /* mtype on <var25:nullable AExpr>*/
}
{
{ /* Inline typing$AExpr$mtype= (self,var28) on <self:AForExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var28; /* _mtype on <self:AForExpr> */
RET_LABEL29:(void)0;
}
}
{
{ /* Inline typing$AExpr$is_typed= (self,1) on <self:AForExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = 1; /* _is_typed on <self:AForExpr> */
RET_LABEL30:(void)0;
}
}
RET_LABEL:;
}
/* method typing$AForGroup$coltype= for (self: AForGroup, nullable MClassType) */
void nitc__typing___AForGroup___coltype_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__AForGroup___coltype].val = p0; /* _coltype on <self:AForGroup> */
RET_LABEL:;
}
/* method typing$AForGroup$method_iterator for (self: AForGroup): nullable CallSite */
val* nitc__typing___AForGroup___method_iterator(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nitc__typing__AForGroup___method_iterator].val; /* _method_iterator on <self:AForGroup> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing$AForGroup$method_iterator= for (self: AForGroup, nullable CallSite) */
void nitc__typing___AForGroup___method_iterator_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__AForGroup___method_iterator].val = p0; /* _method_iterator on <self:AForGroup> */
RET_LABEL:;
}
/* method typing$AForGroup$method_is_ok for (self: AForGroup): nullable CallSite */
val* nitc__typing___AForGroup___method_is_ok(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nitc__typing__AForGroup___method_is_ok].val; /* _method_is_ok on <self:AForGroup> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing$AForGroup$method_is_ok= for (self: AForGroup, nullable CallSite) */
void nitc__typing___AForGroup___method_is_ok_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__AForGroup___method_is_ok].val = p0; /* _method_is_ok on <self:AForGroup> */
RET_LABEL:;
}
/* method typing$AForGroup$method_item for (self: AForGroup): nullable CallSite */
val* nitc__typing___AForGroup___method_item(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nitc__typing__AForGroup___method_item].val; /* _method_item on <self:AForGroup> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing$AForGroup$method_item= for (self: AForGroup, nullable CallSite) */
void nitc__typing___AForGroup___method_item_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__AForGroup___method_item].val = p0; /* _method_item on <self:AForGroup> */
RET_LABEL:;
}
/* method typing$AForGroup$method_next for (self: AForGroup): nullable CallSite */
val* nitc__typing___AForGroup___method_next(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nitc__typing__AForGroup___method_next].val; /* _method_next on <self:AForGroup> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing$AForGroup$method_next= for (self: AForGroup, nullable CallSite) */
void nitc__typing___AForGroup___method_next_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__AForGroup___method_next].val = p0; /* _method_next on <self:AForGroup> */
RET_LABEL:;
}
/* method typing$AForGroup$method_key for (self: AForGroup): nullable CallSite */
val* nitc__typing___AForGroup___method_key(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nitc__typing__AForGroup___method_key].val; /* _method_key on <self:AForGroup> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing$AForGroup$method_key= for (self: AForGroup, nullable CallSite) */
void nitc__typing___AForGroup___method_key_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__AForGroup___method_key].val = p0; /* _method_key on <self:AForGroup> */
RET_LABEL:;
}
/* method typing$AForGroup$method_finish for (self: AForGroup): nullable CallSite */
val* nitc__typing___AForGroup___method_finish(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nitc__typing__AForGroup___method_finish].val; /* _method_finish on <self:AForGroup> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing$AForGroup$method_finish= for (self: AForGroup, nullable CallSite) */
void nitc__typing___AForGroup___method_finish_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__AForGroup___method_finish].val = p0; /* _method_finish on <self:AForGroup> */
RET_LABEL:;
}
/* method typing$AForGroup$method_lt for (self: AForGroup): nullable CallSite */
val* nitc__typing___AForGroup___method_lt(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nitc__typing__AForGroup___method_lt].val; /* _method_lt on <self:AForGroup> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing$AForGroup$method_lt= for (self: AForGroup, nullable CallSite) */
void nitc__typing___AForGroup___method_lt_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__AForGroup___method_lt].val = p0; /* _method_lt on <self:AForGroup> */
RET_LABEL:;
}
/* method typing$AForGroup$method_successor for (self: AForGroup): nullable CallSite */
val* nitc__typing___AForGroup___method_successor(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nitc__typing__AForGroup___method_successor].val; /* _method_successor on <self:AForGroup> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing$AForGroup$method_successor= for (self: AForGroup, nullable CallSite) */
void nitc__typing___AForGroup___method_successor_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__AForGroup___method_successor].val = p0; /* _method_successor on <self:AForGroup> */
RET_LABEL:;
}
/* method typing$AForGroup$do_type_iterator for (self: AForGroup, TypeVisitor, MType) */
void nitc__typing___AForGroup___do_type_iterator(val* self, val* p0, val* p1) {
val* var_v /* var v: TypeVisitor */;
val* var_mtype /* var mtype: MType */;
short int var /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Bool */;
val* var7 /* : nullable Bool */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : CString */;
val* var11 /* : String */;
val* var12 /* : nullable Int */;
val* var13 /* : nullable Int */;
val* var14 /* : nullable Bool */;
val* var15 /* : nullable Bool */;
val* var16 /* : nullable MClass */;
val* var_objcla /* var objcla: nullable MClass */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : CString */;
val* var26 /* : String */;
val* var27 /* : nullable Int */;
val* var28 /* : nullable Int */;
val* var29 /* : nullable Bool */;
val* var30 /* : nullable Bool */;
val* var31 /* : AExpr */;
val* var33 /* : AExpr */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
val* var37 /* : nullable CallSite */;
val* var_itdef /* var itdef: nullable CallSite */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
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
val* var62 /* : String */;
val* var63 /* : String */;
val* var65 /* : MSignature */;
val* var67 /* : MSignature */;
val* var68 /* : nullable MType */;
val* var70 /* : nullable MType */;
val* var_ittype /* var ittype: nullable MType */;
short int var71 /* : Bool */;
short int var72 /* : Bool */;
short int var74 /* : Bool */;
short int var76 /* : Bool */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : CString */;
val* var80 /* : String */;
val* var81 /* : nullable Int */;
val* var82 /* : nullable Int */;
val* var83 /* : nullable Bool */;
val* var84 /* : nullable Bool */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : CString */;
val* var88 /* : String */;
val* var89 /* : nullable Int */;
val* var90 /* : nullable Int */;
val* var91 /* : nullable Bool */;
val* var92 /* : nullable Bool */;
val* var93 /* : nullable MClass */;
val* var_colit_cla /* var colit_cla: nullable MClass */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : CString */;
val* var97 /* : String */;
val* var98 /* : nullable Int */;
val* var99 /* : nullable Int */;
val* var100 /* : nullable Bool */;
val* var101 /* : nullable Bool */;
val* var102 /* : nullable MClass */;
val* var_mapit_cla /* var mapit_cla: nullable MClass */;
short int var_is_col /* var is_col: Bool */;
short int var_is_map /* var is_map: Bool */;
short int var103 /* : Bool */;
short int var104 /* : Bool */;
short int var105 /* : Bool */;
val* var_other107 /* var other: nullable Object */;
short int var108 /* : Bool */;
short int var109 /* : Bool */;
short int var_ /* var : Bool */;
val* var110 /* : Array[MType] */;
val* var_111 /* var : Array[MType] */;
val* var112 /* : MClassType */;
val* var114 /* : MClassType */;
val* var115 /* : MType */;
val* var116 /* : MClassType */;
short int var117 /* : Bool */;
val* var118 /* : MModule */;
val* var120 /* : MModule */;
val* var121 /* : nullable MClassType */;
val* var123 /* : nullable MClassType */;
val* var124 /* : MClassType */;
val* var_coltype /* var coltype: MClassType */;
val* var125 /* : nullable Array[Variable] */;
val* var127 /* : nullable Array[Variable] */;
val* var_variables /* var variables: nullable Array[Variable] */;
long var128 /* : Int */;
long var130 /* : Int */;
short int var131 /* : Bool */;
short int var133 /* : Bool */;
short int var134 /* : Bool */;
static val* varonce135;
val* var136 /* : String */;
char* var137 /* : CString */;
val* var138 /* : String */;
val* var139 /* : nullable Int */;
val* var140 /* : nullable Int */;
val* var141 /* : nullable Bool */;
val* var142 /* : nullable Bool */;
val* var143 /* : nullable Object */;
val* var144 /* : Array[MType] */;
val* var145 /* : nullable Object */;
short int var147 /* : Bool */;
short int var148 /* : Bool */;
short int var149 /* : Bool */;
short int var151 /* : Bool */;
short int var152 /* : Bool */;
short int var_153 /* var : Bool */;
val* var154 /* : Array[MType] */;
val* var_155 /* var : Array[MType] */;
val* var156 /* : MClassType */;
val* var158 /* : MClassType */;
val* var159 /* : MType */;
val* var160 /* : MClassType */;
val* var162 /* : MClassType */;
val* var163 /* : MType */;
val* var164 /* : MClassType */;
short int var165 /* : Bool */;
val* var166 /* : MModule */;
val* var168 /* : MModule */;
val* var169 /* : nullable MClassType */;
val* var171 /* : nullable MClassType */;
val* var172 /* : MClassType */;
val* var_coltype173 /* var coltype: MClassType */;
val* var174 /* : nullable Array[Variable] */;
val* var176 /* : nullable Array[Variable] */;
val* var_variables177 /* var variables: nullable Array[Variable] */;
long var178 /* : Int */;
long var180 /* : Int */;
short int var181 /* : Bool */;
short int var183 /* : Bool */;
short int var184 /* : Bool */;
static val* varonce185;
val* var186 /* : String */;
char* var187 /* : CString */;
val* var188 /* : String */;
val* var189 /* : nullable Int */;
val* var190 /* : nullable Int */;
val* var191 /* : nullable Bool */;
val* var192 /* : nullable Bool */;
val* var193 /* : nullable Object */;
val* var194 /* : Array[MType] */;
val* var195 /* : nullable Object */;
val* var197 /* : nullable Object */;
val* var198 /* : Array[MType] */;
val* var199 /* : nullable Object */;
short int var201 /* : Bool */;
short int var202 /* : Bool */;
short int var_203 /* var : Bool */;
short int var204 /* : Bool */;
static val* varonce205;
val* var206 /* : String */;
char* var207 /* : CString */;
val* var208 /* : String */;
val* var209 /* : nullable Int */;
val* var210 /* : nullable Int */;
val* var211 /* : nullable Bool */;
val* var212 /* : nullable Bool */;
short int var213 /* : Bool */;
val* var214 /* : MType */;
val* var215 /* : MType */;
short int var216 /* : Bool */;
int cltype217;
int idtype218;
const char* var_class_name;
static val* varonce220;
val* var221 /* : String */;
char* var222 /* : CString */;
val* var223 /* : String */;
val* var224 /* : nullable Int */;
val* var225 /* : nullable Int */;
val* var226 /* : nullable Bool */;
val* var227 /* : nullable Bool */;
val* var228 /* : nullable CallSite */;
val* var_ikdef /* var ikdef: nullable CallSite */;
short int var229 /* : Bool */;
short int var230 /* : Bool */;
short int var232 /* : Bool */;
short int var234 /* : Bool */;
val* var236 /* : NativeArray[String] */;
static val* varonce235;
static val* varonce237;
val* var238 /* : String */;
char* var239 /* : CString */;
val* var240 /* : String */;
val* var241 /* : nullable Int */;
val* var242 /* : nullable Int */;
val* var243 /* : nullable Bool */;
val* var244 /* : nullable Bool */;
static val* varonce245;
val* var246 /* : String */;
char* var247 /* : CString */;
val* var248 /* : String */;
val* var249 /* : nullable Int */;
val* var250 /* : nullable Int */;
val* var251 /* : nullable Bool */;
val* var252 /* : nullable Bool */;
val* var253 /* : String */;
val* var254 /* : String */;
static val* varonce256;
val* var257 /* : String */;
char* var258 /* : CString */;
val* var259 /* : String */;
val* var260 /* : nullable Int */;
val* var261 /* : nullable Int */;
val* var262 /* : nullable Bool */;
val* var263 /* : nullable Bool */;
val* var264 /* : nullable CallSite */;
val* var_itemdef /* var itemdef: nullable CallSite */;
short int var265 /* : Bool */;
short int var266 /* : Bool */;
short int var268 /* : Bool */;
short int var270 /* : Bool */;
val* var272 /* : NativeArray[String] */;
static val* varonce271;
static val* varonce273;
val* var274 /* : String */;
char* var275 /* : CString */;
val* var276 /* : String */;
val* var277 /* : nullable Int */;
val* var278 /* : nullable Int */;
val* var279 /* : nullable Bool */;
val* var280 /* : nullable Bool */;
static val* varonce281;
val* var282 /* : String */;
char* var283 /* : CString */;
val* var284 /* : String */;
val* var285 /* : nullable Int */;
val* var286 /* : nullable Int */;
val* var287 /* : nullable Bool */;
val* var288 /* : nullable Bool */;
val* var289 /* : String */;
val* var290 /* : String */;
static val* varonce292;
val* var293 /* : String */;
char* var294 /* : CString */;
val* var295 /* : String */;
val* var296 /* : nullable Int */;
val* var297 /* : nullable Int */;
val* var298 /* : nullable Bool */;
val* var299 /* : nullable Bool */;
val* var300 /* : nullable CallSite */;
val* var_nextdef /* var nextdef: nullable CallSite */;
short int var301 /* : Bool */;
short int var302 /* : Bool */;
short int var304 /* : Bool */;
short int var306 /* : Bool */;
val* var308 /* : NativeArray[String] */;
static val* varonce307;
static val* varonce309;
val* var310 /* : String */;
char* var311 /* : CString */;
val* var312 /* : String */;
val* var313 /* : nullable Int */;
val* var314 /* : nullable Int */;
val* var315 /* : nullable Bool */;
val* var316 /* : nullable Bool */;
static val* varonce317;
val* var318 /* : String */;
char* var319 /* : CString */;
val* var320 /* : String */;
val* var321 /* : nullable Int */;
val* var322 /* : nullable Int */;
val* var323 /* : nullable Bool */;
val* var324 /* : nullable Bool */;
val* var325 /* : String */;
val* var326 /* : String */;
static val* varonce328;
val* var329 /* : String */;
char* var330 /* : CString */;
val* var331 /* : String */;
val* var332 /* : nullable Int */;
val* var333 /* : nullable Int */;
val* var334 /* : nullable Bool */;
val* var335 /* : nullable Bool */;
val* var336 /* : nullable CallSite */;
static val* varonce338;
val* var339 /* : String */;
char* var340 /* : CString */;
val* var341 /* : String */;
val* var342 /* : nullable Int */;
val* var343 /* : nullable Int */;
val* var344 /* : nullable Bool */;
val* var345 /* : nullable Bool */;
val* var346 /* : nullable CallSite */;
val* var_keydef /* var keydef: nullable CallSite */;
short int var347 /* : Bool */;
short int var348 /* : Bool */;
short int var350 /* : Bool */;
short int var352 /* : Bool */;
val* var354 /* : NativeArray[String] */;
static val* varonce353;
static val* varonce355;
val* var356 /* : String */;
char* var357 /* : CString */;
val* var358 /* : String */;
val* var359 /* : nullable Int */;
val* var360 /* : nullable Int */;
val* var361 /* : nullable Bool */;
val* var362 /* : nullable Bool */;
static val* varonce363;
val* var364 /* : String */;
char* var365 /* : CString */;
val* var366 /* : String */;
val* var367 /* : nullable Int */;
val* var368 /* : nullable Int */;
val* var369 /* : nullable Bool */;
val* var370 /* : nullable Bool */;
val* var371 /* : String */;
val* var372 /* : String */;
short int var374 /* : Bool */;
val* var375 /* : nullable Array[Variable] */;
val* var377 /* : nullable Array[Variable] */;
long var378 /* : Int */;
long var380 /* : Int */;
short int var381 /* : Bool */;
short int var383 /* : Bool */;
short int var_384 /* var : Bool */;
val* var385 /* : AExpr */;
val* var387 /* : AExpr */;
short int var388 /* : Bool */;
int cltype389;
int idtype390;
val* var391 /* : nullable Array[Variable] */;
val* var393 /* : nullable Array[Variable] */;
val* var394 /* : nullable Object */;
val* var_variable /* var variable: Variable */;
val* var395 /* : nullable MType */;
val* var397 /* : nullable MType */;
val* var_vtype /* var vtype: MType */;
val* var398 /* : AExpr */;
val* var400 /* : AExpr */;
short int var401 /* : Bool */;
int cltype402;
int idtype403;
static val* varonce404;
val* var405 /* : String */;
char* var406 /* : CString */;
val* var407 /* : String */;
val* var408 /* : nullable Int */;
val* var409 /* : nullable Int */;
val* var410 /* : nullable Bool */;
val* var411 /* : nullable Bool */;
val* var412 /* : nullable CallSite */;
static val* varonce414;
val* var415 /* : String */;
char* var416 /* : CString */;
val* var417 /* : String */;
val* var418 /* : nullable Int */;
val* var419 /* : nullable Int */;
val* var420 /* : nullable Bool */;
val* var421 /* : nullable Bool */;
val* var422 /* : nullable CallSite */;
static val* varonce424;
val* var425 /* : String */;
char* var426 /* : CString */;
val* var427 /* : String */;
val* var428 /* : nullable Int */;
val* var429 /* : nullable Int */;
val* var430 /* : nullable Bool */;
val* var431 /* : nullable Bool */;
val* var432 /* : nullable CallSite */;
var_v = p0;
var_mtype = p1;
/* <var_mtype:MType> isa MNullType */
cltype = type_nitc__MNullType.color;
idtype = type_nitc__MNullType.id;
if(cltype >= var_mtype->type->table_size) {
var = 0;
} else {
var = var_mtype->type->type_table[cltype] == idtype;
}
if (var){
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "Type Error: `for` cannot iterate over `null`.";
var4 = (val*)(45l<<2|1);
var5 = (val*)(45l<<2|1);
var6 = (val*)((long)(0)<<2|3);
var7 = (val*)((long)(0)<<2|3);
var3 = core__flat___CString___to_s_unsafe(var2, var4, var5, var6, var7);
var1 = var3;
varonce = var1;
}
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var1); /* Direct call typing$TypeVisitor$error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = "Object";
var12 = (val*)(6l<<2|1);
var13 = (val*)(6l<<2|1);
var14 = (val*)((long)(0)<<2|3);
var15 = (val*)((long)(0)<<2|3);
var11 = core__flat___CString___to_s_unsafe(var10, var12, var13, var14, var15);
var9 = var11;
varonce8 = var9;
}
{
var16 = nitc__typing___nitc__typing__TypeVisitor___get_mclass(var_v, self, var9);
}
var_objcla = var16;
if (var_objcla == NULL) {
var17 = 1; /* is null */
} else {
var17 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_objcla,((val*)NULL)) on <var_objcla:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_objcla,var_other) on <var_objcla:nullable MClass(MClass)> */
var22 = var_objcla == var_other;
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
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "iterator";
var27 = (val*)(8l<<2|1);
var28 = (val*)(8l<<2|1);
var29 = (val*)((long)(0)<<2|3);
var30 = (val*)((long)(0)<<2|3);
var26 = core__flat___CString___to_s_unsafe(var25, var27, var28, var29, var30);
var24 = var26;
varonce23 = var24;
}
{
{ /* Inline parser_nodes$AForGroup$n_expr (self) on <self:AForGroup> */
var33 = self->attrs[COLOR_nitc__parser_nodes__AForGroup___n_expr].val; /* _n_expr on <self:AForGroup> */
if (unlikely(var33 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2024);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
/* <var31:AExpr> isa ASelfExpr */
cltype35 = type_nitc__ASelfExpr.color;
idtype36 = type_nitc__ASelfExpr.id;
if(cltype35 >= var31->type->table_size) {
var34 = 0;
} else {
var34 = var31->type->type_table[cltype35] == idtype36;
}
{
var37 = nitc__typing___nitc__typing__TypeVisitor___get_method(var_v, self, var_mtype, var24, var34);
}
var_itdef = var37;
if (var_itdef == NULL) {
var38 = 1; /* is null */
} else {
var38 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_itdef,((val*)NULL)) on <var_itdef:nullable CallSite> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_itdef,var_other) on <var_itdef:nullable CallSite(CallSite)> */
var43 = var_itdef == var_other;
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
var38 = var39;
}
if (var38){
if (unlikely(varonce44==NULL)) {
var45 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = "Type Error: `for` expects a type providing an `iterator` method, got `";
var50 = (val*)(70l<<2|1);
var51 = (val*)(70l<<2|1);
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
var56 = "`.";
var58 = (val*)(2l<<2|1);
var59 = (val*)(2l<<2|1);
var60 = (val*)((long)(0)<<2|3);
var61 = (val*)((long)(0)<<2|3);
var57 = core__flat___CString___to_s_unsafe(var56, var58, var59, var60, var61);
var55 = var57;
varonce54 = var55;
}
((struct instance_core__NativeArray*)var45)->values[2]=var55;
} else {
var45 = varonce44;
varonce44 = NULL;
}
{
var62 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var45)->values[1]=var62;
{
var63 = ((val*(*)(val* self))(var45->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var45); /* native_to_s on <var45:NativeArray[String]>*/
}
varonce44 = var45;
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var63); /* Direct call typing$TypeVisitor$error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline typing$AForGroup$method_iterator= (self,var_itdef) on <self:AForGroup> */
self->attrs[COLOR_nitc__typing__AForGroup___method_iterator].val = var_itdef; /* _method_iterator on <self:AForGroup> */
RET_LABEL64:(void)0;
}
}
{
{ /* Inline typing$CallSite$msignature (var_itdef) on <var_itdef:nullable CallSite(CallSite)> */
var67 = var_itdef->attrs[COLOR_nitc__typing__CallSite___msignature].val; /* _msignature on <var_itdef:nullable CallSite(CallSite)> */
if (unlikely(var67 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 663);
fatal_exit(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
{ /* Inline model$MSignature$return_mtype (var65) on <var65:MSignature> */
var70 = var65->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var65:MSignature> */
var68 = var70;
RET_LABEL69:(void)0;
}
}
var_ittype = var68;
if (var_ittype == NULL) {
var71 = 1; /* is null */
} else {
var71 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_ittype,((val*)NULL)) on <var_ittype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_ittype,var_other) on <var_ittype:nullable MType(MType)> */
var76 = var_ittype == var_other;
var74 = var76;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
}
var72 = var74;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
var71 = var72;
}
if (var71){
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = "Type Error: `for` expects the method `iterator` to return an `Iterator` or `MapIterator` type.";
var81 = (val*)(94l<<2|1);
var82 = (val*)(94l<<2|1);
var83 = (val*)((long)(0)<<2|3);
var84 = (val*)((long)(0)<<2|3);
var80 = core__flat___CString___to_s_unsafe(var79, var81, var82, var83, var84);
var78 = var80;
varonce77 = var78;
}
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var78); /* Direct call typing$TypeVisitor$error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
if (likely(varonce85!=NULL)) {
var86 = varonce85;
} else {
var87 = "Iterator";
var89 = (val*)(8l<<2|1);
var90 = (val*)(8l<<2|1);
var91 = (val*)((long)(0)<<2|3);
var92 = (val*)((long)(0)<<2|3);
var88 = core__flat___CString___to_s_unsafe(var87, var89, var90, var91, var92);
var86 = var88;
varonce85 = var86;
}
{
var93 = nitc__typing___nitc__typing__TypeVisitor___try_get_mclass(var_v, self, var86);
}
var_colit_cla = var93;
if (likely(varonce94!=NULL)) {
var95 = varonce94;
} else {
var96 = "MapIterator";
var98 = (val*)(11l<<2|1);
var99 = (val*)(11l<<2|1);
var100 = (val*)((long)(0)<<2|3);
var101 = (val*)((long)(0)<<2|3);
var97 = core__flat___CString___to_s_unsafe(var96, var98, var99, var100, var101);
var95 = var97;
varonce94 = var95;
}
{
var102 = nitc__typing___nitc__typing__TypeVisitor___try_get_mclass(var_v, self, var95);
}
var_mapit_cla = var102;
var_is_col = 0;
var_is_map = 0;
if (var_colit_cla == NULL) {
var104 = 0; /* is null */
} else {
var104 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_colit_cla,((val*)NULL)) on <var_colit_cla:nullable MClass> */
var_other107 = ((val*)NULL);
{
var108 = ((short int(*)(val* self, val* p0))(var_colit_cla->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_colit_cla, var_other107); /* == on <var_colit_cla:nullable MClass(MClass)>*/
}
var109 = !var108;
var105 = var109;
goto RET_LABEL106;
RET_LABEL106:(void)0;
}
var104 = var105;
}
var_ = var104;
if (var104){
var110 = NEW_core__Array(&type_core__Array__nitc__MType);
{
core___core__Array___with_capacity(var110, 1l); /* Direct call array$Array$with_capacity on <var110:Array[MType]>*/
}
var_111 = var110;
{
{ /* Inline model$MClass$mclass_type (var_objcla) on <var_objcla:nullable MClass(MClass)> */
var114 = var_objcla->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_objcla:nullable MClass(MClass)> */
if (unlikely(var114 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var112 = var114;
RET_LABEL113:(void)0;
}
}
{
var115 = nitc___nitc__MType___as_nullable(var112);
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_111, var115); /* Direct call array$AbstractArray$push on <var_111:Array[MType]>*/
}
{
var116 = nitc___nitc__MClass___get_mtype(var_colit_cla, var_111);
}
{
var117 = nitc__typing___nitc__typing__TypeVisitor___is_subtype(var_v, var_ittype, var116);
}
var103 = var117;
} else {
var103 = var_;
}
if (var103){
{
{ /* Inline typing$TypeVisitor$mmodule (var_v) on <var_v:TypeVisitor> */
var120 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___mmodule].val; /* _mmodule on <var_v:TypeVisitor> */
if (unlikely(var120 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 37);
fatal_exit(1);
}
var118 = var120;
RET_LABEL119:(void)0;
}
}
{
{ /* Inline typing$TypeVisitor$anchor (var_v) on <var_v:TypeVisitor> */
var123 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___anchor].val; /* _anchor on <var_v:TypeVisitor> */
var121 = var123;
RET_LABEL122:(void)0;
}
}
{
var124 = nitc___nitc__MType___supertype_to(var_ittype, var118, var121, var_colit_cla);
}
var_coltype = var124;
{
{ /* Inline scope$AForGroup$variables (self) on <self:AForGroup> */
var127 = self->attrs[COLOR_nitc__scope__AForGroup___variables].val; /* _variables on <self:AForGroup> */
var125 = var127;
RET_LABEL126:(void)0;
}
}
var_variables = var125;
if (var_variables == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1243);
fatal_exit(1);
} else {
{ /* Inline array$AbstractArrayRead$length (var_variables) on <var_variables:nullable Array[Variable]> */
if (unlikely(var_variables == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 26);
fatal_exit(1);
}
var130 = var_variables->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_variables:nullable Array[Variable]> */
var128 = var130;
RET_LABEL129:(void)0;
}
}
{
{ /* Inline kernel$Int$!= (var128,1l) on <var128:Int> */
var133 = var128 == 1l;
var134 = !var133;
var131 = var134;
goto RET_LABEL132;
RET_LABEL132:(void)0;
}
}
if (var131){
if (likely(varonce135!=NULL)) {
var136 = varonce135;
} else {
var137 = "Type Error: `for` expects only one variable when using `Iterator`.";
var139 = (val*)(66l<<2|1);
var140 = (val*)(66l<<2|1);
var141 = (val*)((long)(0)<<2|3);
var142 = (val*)((long)(0)<<2|3);
var138 = core__flat___CString___to_s_unsafe(var137, var139, var140, var141, var142);
var136 = var138;
varonce135 = var136;
}
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var136); /* Direct call typing$TypeVisitor$error on <var_v:TypeVisitor>*/
}
} else {
if (var_variables == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1246);
fatal_exit(1);
} else {
var143 = core___core__SequenceRead___Collection__first(var_variables);
}
{
var144 = ((val*(*)(val* self))(var_coltype->class->vft[COLOR_nitc__model__MClassType__arguments]))(var_coltype); /* arguments on <var_coltype:MClassType>*/
}
{
var145 = core___core__SequenceRead___Collection__first(var144);
}
{
{ /* Inline typing$Variable$declared_type= (var143,var145) on <var143:nullable Object(Variable)> */
var143->attrs[COLOR_nitc__typing__Variable___declared_type].val = var145; /* _declared_type on <var143:nullable Object(Variable)> */
RET_LABEL146:(void)0;
}
}
}
var_is_col = 1;
} else {
}
if (var_mapit_cla == NULL) {
var148 = 0; /* is null */
} else {
var148 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_mapit_cla,((val*)NULL)) on <var_mapit_cla:nullable MClass> */
var_other107 = ((val*)NULL);
{
var151 = ((short int(*)(val* self, val* p0))(var_mapit_cla->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mapit_cla, var_other107); /* == on <var_mapit_cla:nullable MClass(MClass)>*/
}
var152 = !var151;
var149 = var152;
goto RET_LABEL150;
RET_LABEL150:(void)0;
}
var148 = var149;
}
var_153 = var148;
if (var148){
var154 = NEW_core__Array(&type_core__Array__nitc__MType);
{
core___core__Array___with_capacity(var154, 2l); /* Direct call array$Array$with_capacity on <var154:Array[MType]>*/
}
var_155 = var154;
{
{ /* Inline model$MClass$mclass_type (var_objcla) on <var_objcla:nullable MClass(MClass)> */
var158 = var_objcla->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_objcla:nullable MClass(MClass)> */
if (unlikely(var158 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var156 = var158;
RET_LABEL157:(void)0;
}
}
{
var159 = nitc___nitc__MType___as_nullable(var156);
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_155, var159); /* Direct call array$AbstractArray$push on <var_155:Array[MType]>*/
}
{
{ /* Inline model$MClass$mclass_type (var_objcla) on <var_objcla:nullable MClass(MClass)> */
var162 = var_objcla->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_objcla:nullable MClass(MClass)> */
if (unlikely(var162 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var160 = var162;
RET_LABEL161:(void)0;
}
}
{
var163 = nitc___nitc__MType___as_nullable(var160);
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_155, var163); /* Direct call array$AbstractArray$push on <var_155:Array[MType]>*/
}
{
var164 = nitc___nitc__MClass___get_mtype(var_mapit_cla, var_155);
}
{
var165 = nitc__typing___nitc__typing__TypeVisitor___is_subtype(var_v, var_ittype, var164);
}
var147 = var165;
} else {
var147 = var_153;
}
if (var147){
{
{ /* Inline typing$TypeVisitor$mmodule (var_v) on <var_v:TypeVisitor> */
var168 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___mmodule].val; /* _mmodule on <var_v:TypeVisitor> */
if (unlikely(var168 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 37);
fatal_exit(1);
}
var166 = var168;
RET_LABEL167:(void)0;
}
}
{
{ /* Inline typing$TypeVisitor$anchor (var_v) on <var_v:TypeVisitor> */
var171 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___anchor].val; /* _anchor on <var_v:TypeVisitor> */
var169 = var171;
RET_LABEL170:(void)0;
}
}
{
var172 = nitc___nitc__MType___supertype_to(var_ittype, var166, var169, var_mapit_cla);
}
var_coltype173 = var172;
{
{ /* Inline scope$AForGroup$variables (self) on <self:AForGroup> */
var176 = self->attrs[COLOR_nitc__scope__AForGroup___variables].val; /* _variables on <self:AForGroup> */
var174 = var176;
RET_LABEL175:(void)0;
}
}
var_variables177 = var174;
if (var_variables177 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1255);
fatal_exit(1);
} else {
{ /* Inline array$AbstractArrayRead$length (var_variables177) on <var_variables177:nullable Array[Variable]> */
if (unlikely(var_variables177 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 26);
fatal_exit(1);
}
var180 = var_variables177->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_variables177:nullable Array[Variable]> */
var178 = var180;
RET_LABEL179:(void)0;
}
}
{
{ /* Inline kernel$Int$!= (var178,2l) on <var178:Int> */
var183 = var178 == 2l;
var184 = !var183;
var181 = var184;
goto RET_LABEL182;
RET_LABEL182:(void)0;
}
}
if (var181){
if (likely(varonce185!=NULL)) {
var186 = varonce185;
} else {
var187 = "Type Error: `for` expects two variables when using `MapIterator`.";
var189 = (val*)(65l<<2|1);
var190 = (val*)(65l<<2|1);
var191 = (val*)((long)(0)<<2|3);
var192 = (val*)((long)(0)<<2|3);
var188 = core__flat___CString___to_s_unsafe(var187, var189, var190, var191, var192);
var186 = var188;
varonce185 = var186;
}
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var186); /* Direct call typing$TypeVisitor$error on <var_v:TypeVisitor>*/
}
} else {
if (var_variables177 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1258);
fatal_exit(1);
} else {
var193 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_variables177, 0l);
}
{
var194 = ((val*(*)(val* self))(var_coltype173->class->vft[COLOR_nitc__model__MClassType__arguments]))(var_coltype173); /* arguments on <var_coltype173:MClassType>*/
}
{
var195 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var194, 0l);
}
{
{ /* Inline typing$Variable$declared_type= (var193,var195) on <var193:nullable Object(Variable)> */
var193->attrs[COLOR_nitc__typing__Variable___declared_type].val = var195; /* _declared_type on <var193:nullable Object(Variable)> */
RET_LABEL196:(void)0;
}
}
if (var_variables177 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1259);
fatal_exit(1);
} else {
var197 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_variables177, 1l);
}
{
var198 = ((val*(*)(val* self))(var_coltype173->class->vft[COLOR_nitc__model__MClassType__arguments]))(var_coltype173); /* arguments on <var_coltype173:MClassType>*/
}
{
var199 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var198, 1l);
}
{
{ /* Inline typing$Variable$declared_type= (var197,var199) on <var197:nullable Object(Variable)> */
var197->attrs[COLOR_nitc__typing__Variable___declared_type].val = var199; /* _declared_type on <var197:nullable Object(Variable)> */
RET_LABEL200:(void)0;
}
}
}
var_is_map = 1;
} else {
}
var202 = !var_is_col;
var_203 = var202;
if (var202){
var204 = !var_is_map;
var201 = var204;
} else {
var201 = var_203;
}
if (var201){
if (likely(varonce205!=NULL)) {
var206 = varonce205;
} else {
var207 = "Type Error: `for` expects the method `iterator` to return an `Iterator` or `MapIterator` type.";
var209 = (val*)(94l<<2|1);
var210 = (val*)(94l<<2|1);
var211 = (val*)((long)(0)<<2|3);
var212 = (val*)((long)(0)<<2|3);
var208 = core__flat___CString___to_s_unsafe(var207, var209, var210, var211, var212);
var206 = var208;
varonce205 = var206;
}
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var206); /* Direct call typing$TypeVisitor$error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
var213 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType>*/
}
if (var213){
{
var214 = nitc__typing___nitc__typing__TypeVisitor___anchor_to(var_v, var_mtype);
}
var_mtype = var214;
} else {
}
{
var215 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__undecorate]))(var_mtype); /* undecorate on <var_mtype:MType>*/
}
var_mtype = var215;
/* <var_mtype:MType> isa MClassType */
cltype217 = type_nitc__MClassType.color;
idtype218 = type_nitc__MClassType.id;
if(cltype217 >= var_mtype->type->table_size) {
var216 = 0;
} else {
var216 = var_mtype->type->type_table[cltype217] == idtype218;
}
if (unlikely(!var216)) {
var_class_name = var_mtype == NULL ? "null" : var_mtype->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1273);
fatal_exit(1);
}
{
{ /* Inline typing$AForGroup$coltype= (self,var_mtype) on <self:AForGroup> */
self->attrs[COLOR_nitc__typing__AForGroup___coltype].val = var_mtype; /* _coltype on <self:AForGroup> */
RET_LABEL219:(void)0;
}
}
if (likely(varonce220!=NULL)) {
var221 = varonce220;
} else {
var222 = "is_ok";
var224 = (val*)(5l<<2|1);
var225 = (val*)(5l<<2|1);
var226 = (val*)((long)(0)<<2|3);
var227 = (val*)((long)(0)<<2|3);
var223 = core__flat___CString___to_s_unsafe(var222, var224, var225, var226, var227);
var221 = var223;
varonce220 = var221;
}
{
var228 = nitc__typing___nitc__typing__TypeVisitor___get_method(var_v, self, var_ittype, var221, 0);
}
var_ikdef = var228;
if (var_ikdef == NULL) {
var229 = 1; /* is null */
} else {
var229 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_ikdef,((val*)NULL)) on <var_ikdef:nullable CallSite> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_ikdef,var_other) on <var_ikdef:nullable CallSite(CallSite)> */
var234 = var_ikdef == var_other;
var232 = var234;
goto RET_LABEL233;
RET_LABEL233:(void)0;
}
}
var230 = var232;
goto RET_LABEL231;
RET_LABEL231:(void)0;
}
var229 = var230;
}
if (var229){
if (unlikely(varonce235==NULL)) {
var236 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce237!=NULL)) {
var238 = varonce237;
} else {
var239 = "Type Error: `for` expects a method `is_ok` in type `";
var241 = (val*)(52l<<2|1);
var242 = (val*)(52l<<2|1);
var243 = (val*)((long)(0)<<2|3);
var244 = (val*)((long)(0)<<2|3);
var240 = core__flat___CString___to_s_unsafe(var239, var241, var242, var243, var244);
var238 = var240;
varonce237 = var238;
}
((struct instance_core__NativeArray*)var236)->values[0]=var238;
if (likely(varonce245!=NULL)) {
var246 = varonce245;
} else {
var247 = "`.";
var249 = (val*)(2l<<2|1);
var250 = (val*)(2l<<2|1);
var251 = (val*)((long)(0)<<2|3);
var252 = (val*)((long)(0)<<2|3);
var248 = core__flat___CString___to_s_unsafe(var247, var249, var250, var251, var252);
var246 = var248;
varonce245 = var246;
}
((struct instance_core__NativeArray*)var236)->values[2]=var246;
} else {
var236 = varonce235;
varonce235 = NULL;
}
{
var253 = ((val*(*)(val* self))(var_ittype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_ittype); /* to_s on <var_ittype:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var236)->values[1]=var253;
{
var254 = ((val*(*)(val* self))(var236->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var236); /* native_to_s on <var236:NativeArray[String]>*/
}
varonce235 = var236;
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var254); /* Direct call typing$TypeVisitor$error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline typing$AForGroup$method_is_ok= (self,var_ikdef) on <self:AForGroup> */
self->attrs[COLOR_nitc__typing__AForGroup___method_is_ok].val = var_ikdef; /* _method_is_ok on <self:AForGroup> */
RET_LABEL255:(void)0;
}
}
if (likely(varonce256!=NULL)) {
var257 = varonce256;
} else {
var258 = "item";
var260 = (val*)(4l<<2|1);
var261 = (val*)(4l<<2|1);
var262 = (val*)((long)(0)<<2|3);
var263 = (val*)((long)(0)<<2|3);
var259 = core__flat___CString___to_s_unsafe(var258, var260, var261, var262, var263);
var257 = var259;
varonce256 = var257;
}
{
var264 = nitc__typing___nitc__typing__TypeVisitor___get_method(var_v, self, var_ittype, var257, 0);
}
var_itemdef = var264;
if (var_itemdef == NULL) {
var265 = 1; /* is null */
} else {
var265 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_itemdef,((val*)NULL)) on <var_itemdef:nullable CallSite> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_itemdef,var_other) on <var_itemdef:nullable CallSite(CallSite)> */
var270 = var_itemdef == var_other;
var268 = var270;
goto RET_LABEL269;
RET_LABEL269:(void)0;
}
}
var266 = var268;
goto RET_LABEL267;
RET_LABEL267:(void)0;
}
var265 = var266;
}
if (var265){
if (unlikely(varonce271==NULL)) {
var272 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce273!=NULL)) {
var274 = varonce273;
} else {
var275 = "Type Error: `for` expects a method `item` in type `";
var277 = (val*)(51l<<2|1);
var278 = (val*)(51l<<2|1);
var279 = (val*)((long)(0)<<2|3);
var280 = (val*)((long)(0)<<2|3);
var276 = core__flat___CString___to_s_unsafe(var275, var277, var278, var279, var280);
var274 = var276;
varonce273 = var274;
}
((struct instance_core__NativeArray*)var272)->values[0]=var274;
if (likely(varonce281!=NULL)) {
var282 = varonce281;
} else {
var283 = "`.";
var285 = (val*)(2l<<2|1);
var286 = (val*)(2l<<2|1);
var287 = (val*)((long)(0)<<2|3);
var288 = (val*)((long)(0)<<2|3);
var284 = core__flat___CString___to_s_unsafe(var283, var285, var286, var287, var288);
var282 = var284;
varonce281 = var282;
}
((struct instance_core__NativeArray*)var272)->values[2]=var282;
} else {
var272 = varonce271;
varonce271 = NULL;
}
{
var289 = ((val*(*)(val* self))(var_ittype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_ittype); /* to_s on <var_ittype:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var272)->values[1]=var289;
{
var290 = ((val*(*)(val* self))(var272->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var272); /* native_to_s on <var272:NativeArray[String]>*/
}
varonce271 = var272;
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var290); /* Direct call typing$TypeVisitor$error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline typing$AForGroup$method_item= (self,var_itemdef) on <self:AForGroup> */
self->attrs[COLOR_nitc__typing__AForGroup___method_item].val = var_itemdef; /* _method_item on <self:AForGroup> */
RET_LABEL291:(void)0;
}
}
if (likely(varonce292!=NULL)) {
var293 = varonce292;
} else {
var294 = "next";
var296 = (val*)(4l<<2|1);
var297 = (val*)(4l<<2|1);
var298 = (val*)((long)(0)<<2|3);
var299 = (val*)((long)(0)<<2|3);
var295 = core__flat___CString___to_s_unsafe(var294, var296, var297, var298, var299);
var293 = var295;
varonce292 = var293;
}
{
var300 = nitc__typing___nitc__typing__TypeVisitor___get_method(var_v, self, var_ittype, var293, 0);
}
var_nextdef = var300;
if (var_nextdef == NULL) {
var301 = 1; /* is null */
} else {
var301 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_nextdef,((val*)NULL)) on <var_nextdef:nullable CallSite> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_nextdef,var_other) on <var_nextdef:nullable CallSite(CallSite)> */
var306 = var_nextdef == var_other;
var304 = var306;
goto RET_LABEL305;
RET_LABEL305:(void)0;
}
}
var302 = var304;
goto RET_LABEL303;
RET_LABEL303:(void)0;
}
var301 = var302;
}
if (var301){
if (unlikely(varonce307==NULL)) {
var308 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce309!=NULL)) {
var310 = varonce309;
} else {
var311 = "Type Error: `for` expects a method `next` in type ";
var313 = (val*)(50l<<2|1);
var314 = (val*)(50l<<2|1);
var315 = (val*)((long)(0)<<2|3);
var316 = (val*)((long)(0)<<2|3);
var312 = core__flat___CString___to_s_unsafe(var311, var313, var314, var315, var316);
var310 = var312;
varonce309 = var310;
}
((struct instance_core__NativeArray*)var308)->values[0]=var310;
if (likely(varonce317!=NULL)) {
var318 = varonce317;
} else {
var319 = ".";
var321 = (val*)(1l<<2|1);
var322 = (val*)(1l<<2|1);
var323 = (val*)((long)(0)<<2|3);
var324 = (val*)((long)(0)<<2|3);
var320 = core__flat___CString___to_s_unsafe(var319, var321, var322, var323, var324);
var318 = var320;
varonce317 = var318;
}
((struct instance_core__NativeArray*)var308)->values[2]=var318;
} else {
var308 = varonce307;
varonce307 = NULL;
}
{
var325 = ((val*(*)(val* self))(var_ittype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_ittype); /* to_s on <var_ittype:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var308)->values[1]=var325;
{
var326 = ((val*(*)(val* self))(var308->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var308); /* native_to_s on <var308:NativeArray[String]>*/
}
varonce307 = var308;
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var326); /* Direct call typing$TypeVisitor$error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline typing$AForGroup$method_next= (self,var_nextdef) on <self:AForGroup> */
self->attrs[COLOR_nitc__typing__AForGroup___method_next].val = var_nextdef; /* _method_next on <self:AForGroup> */
RET_LABEL327:(void)0;
}
}
if (likely(varonce328!=NULL)) {
var329 = varonce328;
} else {
var330 = "finish";
var332 = (val*)(6l<<2|1);
var333 = (val*)(6l<<2|1);
var334 = (val*)((long)(0)<<2|3);
var335 = (val*)((long)(0)<<2|3);
var331 = core__flat___CString___to_s_unsafe(var330, var332, var333, var334, var335);
var329 = var331;
varonce328 = var329;
}
{
var336 = nitc__typing___nitc__typing__TypeVisitor___try_get_method(var_v, self, var_ittype, var329, 0);
}
{
{ /* Inline typing$AForGroup$method_finish= (self,var336) on <self:AForGroup> */
self->attrs[COLOR_nitc__typing__AForGroup___method_finish].val = var336; /* _method_finish on <self:AForGroup> */
RET_LABEL337:(void)0;
}
}
if (var_is_map){
if (likely(varonce338!=NULL)) {
var339 = varonce338;
} else {
var340 = "key";
var342 = (val*)(3l<<2|1);
var343 = (val*)(3l<<2|1);
var344 = (val*)((long)(0)<<2|3);
var345 = (val*)((long)(0)<<2|3);
var341 = core__flat___CString___to_s_unsafe(var340, var342, var343, var344, var345);
var339 = var341;
varonce338 = var339;
}
{
var346 = nitc__typing___nitc__typing__TypeVisitor___get_method(var_v, self, var_ittype, var339, 0);
}
var_keydef = var346;
if (var_keydef == NULL) {
var347 = 1; /* is null */
} else {
var347 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_keydef,((val*)NULL)) on <var_keydef:nullable CallSite> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_keydef,var_other) on <var_keydef:nullable CallSite(CallSite)> */
var352 = var_keydef == var_other;
var350 = var352;
goto RET_LABEL351;
RET_LABEL351:(void)0;
}
}
var348 = var350;
goto RET_LABEL349;
RET_LABEL349:(void)0;
}
var347 = var348;
}
if (var347){
if (unlikely(varonce353==NULL)) {
var354 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce355!=NULL)) {
var356 = varonce355;
} else {
var357 = "Type Error: `for` expects a method `key` in type `";
var359 = (val*)(50l<<2|1);
var360 = (val*)(50l<<2|1);
var361 = (val*)((long)(0)<<2|3);
var362 = (val*)((long)(0)<<2|3);
var358 = core__flat___CString___to_s_unsafe(var357, var359, var360, var361, var362);
var356 = var358;
varonce355 = var356;
}
((struct instance_core__NativeArray*)var354)->values[0]=var356;
if (likely(varonce363!=NULL)) {
var364 = varonce363;
} else {
var365 = "`.";
var367 = (val*)(2l<<2|1);
var368 = (val*)(2l<<2|1);
var369 = (val*)((long)(0)<<2|3);
var370 = (val*)((long)(0)<<2|3);
var366 = core__flat___CString___to_s_unsafe(var365, var367, var368, var369, var370);
var364 = var366;
varonce363 = var364;
}
((struct instance_core__NativeArray*)var354)->values[2]=var364;
} else {
var354 = varonce353;
varonce353 = NULL;
}
{
var371 = ((val*(*)(val* self))(var_ittype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_ittype); /* to_s on <var_ittype:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var354)->values[1]=var371;
{
var372 = ((val*(*)(val* self))(var354->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var354); /* native_to_s on <var354:NativeArray[String]>*/
}
varonce353 = var354;
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var372); /* Direct call typing$TypeVisitor$error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline typing$AForGroup$method_key= (self,var_keydef) on <self:AForGroup> */
self->attrs[COLOR_nitc__typing__AForGroup___method_key].val = var_keydef; /* _method_key on <self:AForGroup> */
RET_LABEL373:(void)0;
}
}
} else {
}
{
{ /* Inline scope$AForGroup$variables (self) on <self:AForGroup> */
var377 = self->attrs[COLOR_nitc__scope__AForGroup___variables].val; /* _variables on <self:AForGroup> */
var375 = var377;
RET_LABEL376:(void)0;
}
}
if (var375 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1308);
fatal_exit(1);
} else {
{ /* Inline array$AbstractArrayRead$length (var375) on <var375:nullable Array[Variable]> */
if (unlikely(var375 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 26);
fatal_exit(1);
}
var380 = var375->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var375:nullable Array[Variable]> */
var378 = var380;
RET_LABEL379:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var378,1l) on <var378:Int> */
var383 = var378 == 1l;
var381 = var383;
goto RET_LABEL382;
RET_LABEL382:(void)0;
}
}
var_384 = var381;
if (var381){
{
{ /* Inline parser_nodes$AForGroup$n_expr (self) on <self:AForGroup> */
var387 = self->attrs[COLOR_nitc__parser_nodes__AForGroup___n_expr].val; /* _n_expr on <self:AForGroup> */
if (unlikely(var387 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2024);
fatal_exit(1);
}
var385 = var387;
RET_LABEL386:(void)0;
}
}
/* <var385:AExpr> isa ARangeExpr */
cltype389 = type_nitc__ARangeExpr.color;
idtype390 = type_nitc__ARangeExpr.id;
if(cltype389 >= var385->type->table_size) {
var388 = 0;
} else {
var388 = var385->type->type_table[cltype389] == idtype390;
}
var374 = var388;
} else {
var374 = var_384;
}
if (var374){
{
{ /* Inline scope$AForGroup$variables (self) on <self:AForGroup> */
var393 = self->attrs[COLOR_nitc__scope__AForGroup___variables].val; /* _variables on <self:AForGroup> */
var391 = var393;
RET_LABEL392:(void)0;
}
}
if (var391 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1309);
fatal_exit(1);
} else {
var394 = core___core__SequenceRead___Collection__first(var391);
}
var_variable = var394;
{
{ /* Inline typing$Variable$declared_type (var_variable) on <var_variable:Variable> */
var397 = var_variable->attrs[COLOR_nitc__typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var395 = var397;
RET_LABEL396:(void)0;
}
}
if (unlikely(var395 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1310);
fatal_exit(1);
}
var_vtype = var395;
{
{ /* Inline parser_nodes$AForGroup$n_expr (self) on <self:AForGroup> */
var400 = self->attrs[COLOR_nitc__parser_nodes__AForGroup___n_expr].val; /* _n_expr on <self:AForGroup> */
if (unlikely(var400 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2024);
fatal_exit(1);
}
var398 = var400;
RET_LABEL399:(void)0;
}
}
/* <var398:AExpr> isa AOrangeExpr */
cltype402 = type_nitc__AOrangeExpr.color;
idtype403 = type_nitc__AOrangeExpr.id;
if(cltype402 >= var398->type->table_size) {
var401 = 0;
} else {
var401 = var398->type->type_table[cltype402] == idtype403;
}
if (var401){
if (likely(varonce404!=NULL)) {
var405 = varonce404;
} else {
var406 = "<";
var408 = (val*)(1l<<2|1);
var409 = (val*)(1l<<2|1);
var410 = (val*)((long)(0)<<2|3);
var411 = (val*)((long)(0)<<2|3);
var407 = core__flat___CString___to_s_unsafe(var406, var408, var409, var410, var411);
var405 = var407;
varonce404 = var405;
}
{
var412 = nitc__typing___nitc__typing__TypeVisitor___get_method(var_v, self, var_vtype, var405, 0);
}
{
{ /* Inline typing$AForGroup$method_lt= (self,var412) on <self:AForGroup> */
self->attrs[COLOR_nitc__typing__AForGroup___method_lt].val = var412; /* _method_lt on <self:AForGroup> */
RET_LABEL413:(void)0;
}
}
} else {
if (likely(varonce414!=NULL)) {
var415 = varonce414;
} else {
var416 = "<=";
var418 = (val*)(2l<<2|1);
var419 = (val*)(2l<<2|1);
var420 = (val*)((long)(0)<<2|3);
var421 = (val*)((long)(0)<<2|3);
var417 = core__flat___CString___to_s_unsafe(var416, var418, var419, var420, var421);
var415 = var417;
varonce414 = var415;
}
{
var422 = nitc__typing___nitc__typing__TypeVisitor___get_method(var_v, self, var_vtype, var415, 0);
}
{
{ /* Inline typing$AForGroup$method_lt= (self,var422) on <self:AForGroup> */
self->attrs[COLOR_nitc__typing__AForGroup___method_lt].val = var422; /* _method_lt on <self:AForGroup> */
RET_LABEL423:(void)0;
}
}
}
if (likely(varonce424!=NULL)) {
var425 = varonce424;
} else {
var426 = "successor";
var428 = (val*)(9l<<2|1);
var429 = (val*)(9l<<2|1);
var430 = (val*)((long)(0)<<2|3);
var431 = (val*)((long)(0)<<2|3);
var427 = core__flat___CString___to_s_unsafe(var426, var428, var429, var430, var431);
var425 = var427;
varonce424 = var425;
}
{
var432 = nitc__typing___nitc__typing__TypeVisitor___get_method(var_v, self, var_vtype, var425, 0);
}
{
{ /* Inline typing$AForGroup$method_successor= (self,var432) on <self:AForGroup> */
self->attrs[COLOR_nitc__typing__AForGroup___method_successor].val = var432; /* _method_successor on <self:AForGroup> */
RET_LABEL433:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method typing$AWithExpr$method_start for (self: AWithExpr): nullable CallSite */
val* nitc__typing___AWithExpr___method_start(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nitc__typing__AWithExpr___method_start].val; /* _method_start on <self:AWithExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing$AWithExpr$method_start= for (self: AWithExpr, nullable CallSite) */
void nitc__typing___AWithExpr___method_start_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__AWithExpr___method_start].val = p0; /* _method_start on <self:AWithExpr> */
RET_LABEL:;
}
/* method typing$AWithExpr$method_finish for (self: AWithExpr): nullable CallSite */
val* nitc__typing___AWithExpr___method_finish(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nitc__typing__AWithExpr___method_finish].val; /* _method_finish on <self:AWithExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing$AWithExpr$method_finish= for (self: AWithExpr, nullable CallSite) */
void nitc__typing___AWithExpr___method_finish_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__AWithExpr___method_finish].val = p0; /* _method_finish on <self:AWithExpr> */
RET_LABEL:;
}
/* method typing$AWithExpr$accept_typing for (self: AWithExpr, TypeVisitor) */
void nitc__typing___AWithExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : CString */;
val* var12 /* : String */;
val* var13 /* : nullable Int */;
val* var14 /* : nullable Int */;
val* var15 /* : nullable Bool */;
val* var16 /* : nullable Bool */;
val* var17 /* : AExpr */;
val* var19 /* : AExpr */;
short int var20 /* : Bool */;
int cltype;
int idtype;
val* var21 /* : nullable CallSite */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : CString */;
val* var26 /* : String */;
val* var27 /* : nullable Int */;
val* var28 /* : nullable Int */;
val* var29 /* : nullable Bool */;
val* var30 /* : nullable Bool */;
val* var31 /* : AExpr */;
val* var33 /* : AExpr */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
val* var37 /* : nullable CallSite */;
val* var39 /* : nullable AExpr */;
val* var41 /* : nullable AExpr */;
val* var42 /* : nullable AExpr */;
val* var44 /* : nullable AExpr */;
val* var45 /* : nullable MType */;
var_v = p0;
{
{ /* Inline parser_nodes$AWithExpr$n_expr (self) on <self:AWithExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AWithExpr___n_expr].val; /* _n_expr on <self:AWithExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2036);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__typing___nitc__typing__TypeVisitor___visit_expr(var_v, var);
}
var_mtype = var3;
if (var_mtype == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
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
if (likely(varonce!=NULL)) {
var10 = varonce;
} else {
var11 = "start";
var13 = (val*)(5l<<2|1);
var14 = (val*)(5l<<2|1);
var15 = (val*)((long)(0)<<2|3);
var16 = (val*)((long)(0)<<2|3);
var12 = core__flat___CString___to_s_unsafe(var11, var13, var14, var15, var16);
var10 = var12;
varonce = var10;
}
{
{ /* Inline parser_nodes$AWithExpr$n_expr (self) on <self:AWithExpr> */
var19 = self->attrs[COLOR_nitc__parser_nodes__AWithExpr___n_expr].val; /* _n_expr on <self:AWithExpr> */
if (unlikely(var19 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2036);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
/* <var17:AExpr> isa ASelfExpr */
cltype = type_nitc__ASelfExpr.color;
idtype = type_nitc__ASelfExpr.id;
if(cltype >= var17->type->table_size) {
var20 = 0;
} else {
var20 = var17->type->type_table[cltype] == idtype;
}
{
var21 = nitc__typing___nitc__typing__TypeVisitor___get_method(var_v, self, var_mtype, var10, var20);
}
{
{ /* Inline typing$AWithExpr$method_start= (self,var21) on <self:AWithExpr> */
self->attrs[COLOR_nitc__typing__AWithExpr___method_start].val = var21; /* _method_start on <self:AWithExpr> */
RET_LABEL22:(void)0;
}
}
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "finish";
var27 = (val*)(6l<<2|1);
var28 = (val*)(6l<<2|1);
var29 = (val*)((long)(0)<<2|3);
var30 = (val*)((long)(0)<<2|3);
var26 = core__flat___CString___to_s_unsafe(var25, var27, var28, var29, var30);
var24 = var26;
varonce23 = var24;
}
{
{ /* Inline parser_nodes$AWithExpr$n_expr (self) on <self:AWithExpr> */
var33 = self->attrs[COLOR_nitc__parser_nodes__AWithExpr___n_expr].val; /* _n_expr on <self:AWithExpr> */
if (unlikely(var33 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2036);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
/* <var31:AExpr> isa ASelfExpr */
cltype35 = type_nitc__ASelfExpr.color;
idtype36 = type_nitc__ASelfExpr.id;
if(cltype35 >= var31->type->table_size) {
var34 = 0;
} else {
var34 = var31->type->type_table[cltype35] == idtype36;
}
{
var37 = nitc__typing___nitc__typing__TypeVisitor___get_method(var_v, self, var_mtype, var24, var34);
}
{
{ /* Inline typing$AWithExpr$method_finish= (self,var37) on <self:AWithExpr> */
self->attrs[COLOR_nitc__typing__AWithExpr___method_finish].val = var37; /* _method_finish on <self:AWithExpr> */
RET_LABEL38:(void)0;
}
}
{
{ /* Inline parser_nodes$AWithExpr$n_block (self) on <self:AWithExpr> */
var41 = self->attrs[COLOR_nitc__parser_nodes__AWithExpr___n_block].val; /* _n_block on <self:AWithExpr> */
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
nitc__typing___nitc__typing__TypeVisitor___visit_stmt(var_v, var39); /* Direct call typing$TypeVisitor$visit_stmt on <var_v:TypeVisitor>*/
}
{
{ /* Inline parser_nodes$AWithExpr$n_block (self) on <self:AWithExpr> */
var44 = self->attrs[COLOR_nitc__parser_nodes__AWithExpr___n_block].val; /* _n_block on <self:AWithExpr> */
var42 = var44;
RET_LABEL43:(void)0;
}
}
if (var42 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1336);
fatal_exit(1);
} else {
var45 = ((val*(*)(val* self))(var42->class->vft[COLOR_nitc__typing__AExpr__mtype]))(var42); /* mtype on <var42:nullable AExpr>*/
}
{
{ /* Inline typing$AExpr$mtype= (self,var45) on <self:AWithExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var45; /* _mtype on <self:AWithExpr> */
RET_LABEL46:(void)0;
}
}
{
{ /* Inline typing$AExpr$is_typed= (self,1) on <self:AWithExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = 1; /* _is_typed on <self:AWithExpr> */
RET_LABEL47:(void)0;
}
}
RET_LABEL:;
}
/* method typing$AAssertExpr$accept_typing for (self: AAssertExpr, TypeVisitor) */
void nitc__typing___AAssertExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var4 /* : nullable AExpr */;
val* var6 /* : nullable AExpr */;
var_v = p0;
{
{ /* Inline parser_nodes$AAssertExpr$n_expr (self) on <self:AAssertExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AAssertExpr___n_expr].val; /* _n_expr on <self:AAssertExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2056);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_bool(var_v, var);
}
{
{ /* Inline parser_nodes$AAssertExpr$n_else (self) on <self:AAssertExpr> */
var6 = self->attrs[COLOR_nitc__parser_nodes__AAssertExpr___n_else].val; /* _n_else on <self:AAssertExpr> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
nitc__typing___nitc__typing__TypeVisitor___visit_stmt(var_v, var4); /* Direct call typing$TypeVisitor$visit_stmt on <var_v:TypeVisitor>*/
}
{
{ /* Inline typing$AExpr$is_typed= (self,1) on <self:AAssertExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = 1; /* _is_typed on <self:AAssertExpr> */
RET_LABEL7:(void)0;
}
}
RET_LABEL:;
}
/* method typing$AOrExpr$accept_typing for (self: AOrExpr, TypeVisitor) */
void nitc__typing___AOrExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var4 /* : AExpr */;
val* var6 /* : AExpr */;
val* var7 /* : nullable MType */;
val* var8 /* : nullable MType */;
var_v = p0;
{
{ /* Inline parser_nodes$ABinBoolExpr$n_expr (self) on <self:AOrExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AOrExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2131);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_bool(var_v, var);
}
{
{ /* Inline parser_nodes$ABinBoolExpr$n_expr2 (self) on <self:AOrExpr> */
var6 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AOrExpr> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2137);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_bool(var_v, var4);
}
{
var8 = nitc__typing___nitc__typing__TypeVisitor___type_bool(var_v, self);
}
{
{ /* Inline typing$AExpr$mtype= (self,var8) on <self:AOrExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var8; /* _mtype on <self:AOrExpr> */
RET_LABEL9:(void)0;
}
}
RET_LABEL:;
}
/* method typing$AImpliesExpr$accept_typing for (self: AImpliesExpr, TypeVisitor) */
void nitc__typing___AImpliesExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var4 /* : AExpr */;
val* var6 /* : AExpr */;
val* var7 /* : nullable MType */;
val* var8 /* : nullable MType */;
var_v = p0;
{
{ /* Inline parser_nodes$ABinBoolExpr$n_expr (self) on <self:AImpliesExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AImpliesExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2131);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_bool(var_v, var);
}
{
{ /* Inline parser_nodes$ABinBoolExpr$n_expr2 (self) on <self:AImpliesExpr> */
var6 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AImpliesExpr> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2137);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_bool(var_v, var4);
}
{
var8 = nitc__typing___nitc__typing__TypeVisitor___type_bool(var_v, self);
}
{
{ /* Inline typing$AExpr$mtype= (self,var8) on <self:AImpliesExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var8; /* _mtype on <self:AImpliesExpr> */
RET_LABEL9:(void)0;
}
}
RET_LABEL:;
}
/* method typing$AAndExpr$accept_typing for (self: AAndExpr, TypeVisitor) */
void nitc__typing___AAndExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var4 /* : AExpr */;
val* var6 /* : AExpr */;
val* var7 /* : nullable MType */;
val* var8 /* : nullable MType */;
var_v = p0;
{
{ /* Inline parser_nodes$ABinBoolExpr$n_expr (self) on <self:AAndExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AAndExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2131);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_bool(var_v, var);
}
{
{ /* Inline parser_nodes$ABinBoolExpr$n_expr2 (self) on <self:AAndExpr> */
var6 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AAndExpr> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2137);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_bool(var_v, var4);
}
{
var8 = nitc__typing___nitc__typing__TypeVisitor___type_bool(var_v, self);
}
{
{ /* Inline typing$AExpr$mtype= (self,var8) on <self:AAndExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var8; /* _mtype on <self:AAndExpr> */
RET_LABEL9:(void)0;
}
}
RET_LABEL:;
}
/* method typing$ANotExpr$accept_typing for (self: ANotExpr, TypeVisitor) */
void nitc__typing___ANotExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var4 /* : nullable MType */;
var_v = p0;
{
{ /* Inline parser_nodes$ANotExpr$n_expr (self) on <self:ANotExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ANotExpr___n_expr].val; /* _n_expr on <self:ANotExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2171);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_bool(var_v, var);
}
{
var4 = nitc__typing___nitc__typing__TypeVisitor___type_bool(var_v, self);
}
{
{ /* Inline typing$AExpr$mtype= (self,var4) on <self:ANotExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var4; /* _mtype on <self:ANotExpr> */
RET_LABEL5:(void)0;
}
}
RET_LABEL:;
}
/* method typing$AOrElseExpr$accept_typing for (self: AOrElseExpr, TypeVisitor) */
void nitc__typing___AOrElseExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var_t1 /* var t1: nullable MType */;
val* var4 /* : AExpr */;
val* var6 /* : AExpr */;
val* var7 /* : nullable MType */;
val* var_t2 /* var t2: nullable MType */;
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
short int var23 /* : Bool */;
val* var24 /* : MType */;
val* var25 /* : Array[MType] */;
val* var_26 /* var : Array[MType] */;
val* var27 /* : nullable MType */;
val* var_t /* var t: nullable MType */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
static val* varonce;
val* var34 /* : String */;
char* var35 /* : CString */;
val* var36 /* : String */;
val* var37 /* : nullable Int */;
val* var38 /* : nullable Int */;
val* var39 /* : nullable Bool */;
val* var40 /* : nullable Bool */;
val* var41 /* : nullable MClass */;
val* var_c /* var c: nullable MClass */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
val* var48 /* : MClassType */;
val* var50 /* : MClassType */;
short int var51 /* : Bool */;
val* var52 /* : MType */;
var_v = p0;
{
{ /* Inline parser_nodes$ABinBoolExpr$n_expr (self) on <self:AOrElseExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AOrElseExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2131);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__typing___nitc__typing__TypeVisitor___visit_expr(var_v, var);
}
var_t1 = var3;
{
{ /* Inline parser_nodes$ABinBoolExpr$n_expr2 (self) on <self:AOrElseExpr> */
var6 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AOrElseExpr> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2137);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nitc__typing___nitc__typing__TypeVisitor___visit_expr(var_v, var4);
}
var_t2 = var7;
if (var_t1 == NULL) {
var9 = 1; /* is null */
} else {
var9 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_t1,((val*)NULL)) on <var_t1:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_t1,var_other) on <var_t1:nullable MType(MType)> */
var14 = var_t1 == var_other;
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
if (var_t2 == NULL) {
var15 = 1; /* is null */
} else {
var15 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_t2,((val*)NULL)) on <var_t2:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_t2,var_other) on <var_t2:nullable MType(MType)> */
var20 = var_t2 == var_other;
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
/* <var_t1:nullable MType(MType)> isa MNullType */
cltype = type_nitc__MNullType.color;
idtype = type_nitc__MNullType.id;
if(cltype >= var_t1->type->table_size) {
var21 = 0;
} else {
var21 = var_t1->type->type_table[cltype] == idtype;
}
if (var21){
{
{ /* Inline typing$AExpr$mtype= (self,var_t2) on <self:AOrElseExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var_t2; /* _mtype on <self:AOrElseExpr> */
RET_LABEL22:(void)0;
}
}
goto RET_LABEL;
} else {
{
var23 = nitc__typing___nitc__typing__TypeVisitor___can_be_null(var_v, var_t1);
}
if (var23){
{
var24 = ((val*(*)(val* self))(var_t1->class->vft[COLOR_nitc__model__MType__as_notnull]))(var_t1); /* as_notnull on <var_t1:nullable MType(MType)>*/
}
var_t1 = var24;
} else {
}
}
var25 = NEW_core__Array(&type_core__Array__nitc__MType);
{
core___core__Array___with_capacity(var25, 2l); /* Direct call array$Array$with_capacity on <var25:Array[MType]>*/
}
var_26 = var25;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_26, var_t1); /* Direct call array$AbstractArray$push on <var_26:Array[MType]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_26, var_t2); /* Direct call array$AbstractArray$push on <var_26:Array[MType]>*/
}
{
var27 = nitc__typing___nitc__typing__TypeVisitor___merge_types(var_v, self, var_26);
}
var_t = var27;
if (var_t == NULL) {
var28 = 1; /* is null */
} else {
var28 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_t,((val*)NULL)) on <var_t:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_t,var_other) on <var_t:nullable MType(MType)> */
var33 = var_t == var_other;
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
var28 = var29;
}
if (var28){
if (likely(varonce!=NULL)) {
var34 = varonce;
} else {
var35 = "Object";
var37 = (val*)(6l<<2|1);
var38 = (val*)(6l<<2|1);
var39 = (val*)((long)(0)<<2|3);
var40 = (val*)((long)(0)<<2|3);
var36 = core__flat___CString___to_s_unsafe(var35, var37, var38, var39, var40);
var34 = var36;
varonce = var34;
}
{
var41 = nitc__typing___nitc__typing__TypeVisitor___get_mclass(var_v, self, var34);
}
var_c = var41;
if (var_c == NULL) {
var42 = 1; /* is null */
} else {
var42 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_c,((val*)NULL)) on <var_c:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_c,var_other) on <var_c:nullable MClass(MClass)> */
var47 = var_c == var_other;
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
var42 = var43;
}
if (var42){
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MClass$mclass_type (var_c) on <var_c:nullable MClass(MClass)> */
var50 = var_c->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_c:nullable MClass(MClass)> */
if (unlikely(var50 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
var_t = var48;
{
var51 = nitc__typing___nitc__typing__TypeVisitor___can_be_null(var_v, var_t2);
}
if (var51){
{
var52 = nitc___nitc__MType___as_nullable(var_t);
}
var_t = var52;
} else {
}
} else {
}
{
{ /* Inline typing$AExpr$mtype= (self,var_t) on <self:AOrElseExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var_t; /* _mtype on <self:AOrElseExpr> */
RET_LABEL53:(void)0;
}
}
RET_LABEL:;
}
/* method typing$AOrElseExpr$accept_post_typing for (self: AOrElseExpr, TypeVisitor) */
void nitc__typing___AOrElseExpr___ANode__accept_post_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var_t1 /* var t1: nullable MType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : AExpr */;
val* var12 /* : AExpr */;
short int var13 /* : Bool */;
var_v = p0;
{
{ /* Inline parser_nodes$ABinBoolExpr$n_expr (self) on <self:AOrElseExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AOrElseExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2131);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = ((val*(*)(val* self))(var->class->vft[COLOR_nitc__typing__AExpr__mtype]))(var); /* mtype on <var:AExpr>*/
}
var_t1 = var3;
if (var_t1 == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_t1,((val*)NULL)) on <var_t1:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_t1,var_other) on <var_t1:nullable MType(MType)> */
var9 = var_t1 == var_other;
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
{
{ /* Inline parser_nodes$ABinBoolExpr$n_expr (self) on <self:AOrElseExpr> */
var12 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AOrElseExpr> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2131);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = nitc__typing___nitc__typing__TypeVisitor___check_can_be_null(var_v, var10, var_t1);
}
}
RET_LABEL:;
}
/* method typing$ATrueExpr$accept_typing for (self: ATrueExpr, TypeVisitor) */
void nitc__typing___ATrueExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MType */;
var_v = p0;
{
var = nitc__typing___nitc__typing__TypeVisitor___type_bool(var_v, self);
}
{
{ /* Inline typing$AExpr$mtype= (self,var) on <self:ATrueExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var; /* _mtype on <self:ATrueExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method typing$AFalseExpr$accept_typing for (self: AFalseExpr, TypeVisitor) */
void nitc__typing___AFalseExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MType */;
var_v = p0;
{
var = nitc__typing___nitc__typing__TypeVisitor___type_bool(var_v, self);
}
{
{ /* Inline typing$AExpr$mtype= (self,var) on <self:AFalseExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var; /* _mtype on <self:AFalseExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method typing$AIntegerExpr$accept_typing for (self: AIntegerExpr, TypeVisitor) */
void nitc__typing___AIntegerExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var_mclass /* var mclass: nullable MClass */;
val* var /* : nullable Numeric */;
val* var2 /* : nullable Numeric */;
short int var3 /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : CString */;
val* var6 /* : String */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Int */;
val* var9 /* : nullable Bool */;
val* var10 /* : nullable Bool */;
val* var11 /* : nullable MClass */;
val* var12 /* : nullable Numeric */;
val* var14 /* : nullable Numeric */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Bool */;
val* var25 /* : nullable Bool */;
val* var26 /* : nullable MClass */;
val* var27 /* : nullable Numeric */;
val* var29 /* : nullable Numeric */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : CString */;
val* var36 /* : String */;
val* var37 /* : nullable Int */;
val* var38 /* : nullable Int */;
val* var39 /* : nullable Bool */;
val* var40 /* : nullable Bool */;
val* var41 /* : nullable MClass */;
val* var42 /* : nullable Numeric */;
val* var44 /* : nullable Numeric */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : CString */;
val* var51 /* : String */;
val* var52 /* : nullable Int */;
val* var53 /* : nullable Int */;
val* var54 /* : nullable Bool */;
val* var55 /* : nullable Bool */;
val* var56 /* : nullable MClass */;
val* var57 /* : nullable Numeric */;
val* var59 /* : nullable Numeric */;
short int var60 /* : Bool */;
int cltype61;
int idtype62;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : CString */;
val* var66 /* : String */;
val* var67 /* : nullable Int */;
val* var68 /* : nullable Int */;
val* var69 /* : nullable Bool */;
val* var70 /* : nullable Bool */;
val* var71 /* : nullable MClass */;
val* var72 /* : nullable Numeric */;
val* var74 /* : nullable Numeric */;
short int var75 /* : Bool */;
int cltype76;
int idtype77;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : CString */;
val* var81 /* : String */;
val* var82 /* : nullable Int */;
val* var83 /* : nullable Int */;
val* var84 /* : nullable Bool */;
val* var85 /* : nullable Bool */;
val* var86 /* : nullable MClass */;
val* var87 /* : nullable Numeric */;
val* var89 /* : nullable Numeric */;
short int var90 /* : Bool */;
int cltype91;
int idtype92;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : CString */;
val* var96 /* : String */;
val* var97 /* : nullable Int */;
val* var98 /* : nullable Int */;
val* var99 /* : nullable Bool */;
val* var100 /* : nullable Bool */;
val* var101 /* : nullable MClass */;
short int var102 /* : Bool */;
short int var103 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var105 /* : Bool */;
short int var107 /* : Bool */;
val* var108 /* : MClassType */;
val* var110 /* : MClassType */;
var_v = p0;
var_mclass = ((val*)NULL);
{
{ /* Inline literal$AIntegerExpr$value (self) on <self:AIntegerExpr> */
var2 = self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <self:AIntegerExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
/* <var:nullable Numeric> isa Byte */
cltype = type_core__Byte.color;
idtype = type_core__Byte.id;
if(var == NULL) {
var3 = 0;
} else {
if(cltype >= (((long)var&3)?type_info[((long)var&3)]:var->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var&3)?type_info[((long)var&3)]:var->type)->type_table[cltype] == idtype;
}
}
if (var3){
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "Byte";
var7 = (val*)(4l<<2|1);
var8 = (val*)(4l<<2|1);
var9 = (val*)((long)(0)<<2|3);
var10 = (val*)((long)(0)<<2|3);
var6 = core__flat___CString___to_s_unsafe(var5, var7, var8, var9, var10);
var4 = var6;
varonce = var4;
}
{
var11 = nitc__typing___nitc__typing__TypeVisitor___get_mclass(var_v, self, var4);
}
var_mclass = var11;
} else {
{
{ /* Inline literal$AIntegerExpr$value (self) on <self:AIntegerExpr> */
var14 = self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <self:AIntegerExpr> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
/* <var12:nullable Numeric> isa Int */
cltype16 = type_core__Int.color;
idtype17 = type_core__Int.id;
if(var12 == NULL) {
var15 = 0;
} else {
if(cltype16 >= (((long)var12&3)?type_info[((long)var12&3)]:var12->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var12&3)?type_info[((long)var12&3)]:var12->type)->type_table[cltype16] == idtype17;
}
}
if (var15){
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "Int";
var22 = (val*)(3l<<2|1);
var23 = (val*)(3l<<2|1);
var24 = (val*)((long)(0)<<2|3);
var25 = (val*)((long)(0)<<2|3);
var21 = core__flat___CString___to_s_unsafe(var20, var22, var23, var24, var25);
var19 = var21;
varonce18 = var19;
}
{
var26 = nitc__typing___nitc__typing__TypeVisitor___get_mclass(var_v, self, var19);
}
var_mclass = var26;
} else {
{
{ /* Inline literal$AIntegerExpr$value (self) on <self:AIntegerExpr> */
var29 = self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <self:AIntegerExpr> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
/* <var27:nullable Numeric> isa Int8 */
cltype31 = type_core__Int8.color;
idtype32 = type_core__Int8.id;
if(var27 == NULL) {
var30 = 0;
} else {
if(cltype31 >= (((long)var27&3)?type_info[((long)var27&3)]:var27->type)->table_size) {
var30 = 0;
} else {
var30 = (((long)var27&3)?type_info[((long)var27&3)]:var27->type)->type_table[cltype31] == idtype32;
}
}
if (var30){
if (likely(varonce33!=NULL)) {
var34 = varonce33;
} else {
var35 = "Int8";
var37 = (val*)(4l<<2|1);
var38 = (val*)(4l<<2|1);
var39 = (val*)((long)(0)<<2|3);
var40 = (val*)((long)(0)<<2|3);
var36 = core__flat___CString___to_s_unsafe(var35, var37, var38, var39, var40);
var34 = var36;
varonce33 = var34;
}
{
var41 = nitc__typing___nitc__typing__TypeVisitor___get_mclass(var_v, self, var34);
}
var_mclass = var41;
} else {
{
{ /* Inline literal$AIntegerExpr$value (self) on <self:AIntegerExpr> */
var44 = self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <self:AIntegerExpr> */
var42 = var44;
RET_LABEL43:(void)0;
}
}
/* <var42:nullable Numeric> isa Int16 */
cltype46 = type_core__Int16.color;
idtype47 = type_core__Int16.id;
if(var42 == NULL) {
var45 = 0;
} else {
if(cltype46 >= (((long)var42&3)?type_info[((long)var42&3)]:var42->type)->table_size) {
var45 = 0;
} else {
var45 = (((long)var42&3)?type_info[((long)var42&3)]:var42->type)->type_table[cltype46] == idtype47;
}
}
if (var45){
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = "Int16";
var52 = (val*)(5l<<2|1);
var53 = (val*)(5l<<2|1);
var54 = (val*)((long)(0)<<2|3);
var55 = (val*)((long)(0)<<2|3);
var51 = core__flat___CString___to_s_unsafe(var50, var52, var53, var54, var55);
var49 = var51;
varonce48 = var49;
}
{
var56 = nitc__typing___nitc__typing__TypeVisitor___get_mclass(var_v, self, var49);
}
var_mclass = var56;
} else {
{
{ /* Inline literal$AIntegerExpr$value (self) on <self:AIntegerExpr> */
var59 = self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <self:AIntegerExpr> */
var57 = var59;
RET_LABEL58:(void)0;
}
}
/* <var57:nullable Numeric> isa UInt16 */
cltype61 = type_core__UInt16.color;
idtype62 = type_core__UInt16.id;
if(var57 == NULL) {
var60 = 0;
} else {
if(cltype61 >= (((long)var57&3)?type_info[((long)var57&3)]:var57->type)->table_size) {
var60 = 0;
} else {
var60 = (((long)var57&3)?type_info[((long)var57&3)]:var57->type)->type_table[cltype61] == idtype62;
}
}
if (var60){
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "UInt16";
var67 = (val*)(6l<<2|1);
var68 = (val*)(6l<<2|1);
var69 = (val*)((long)(0)<<2|3);
var70 = (val*)((long)(0)<<2|3);
var66 = core__flat___CString___to_s_unsafe(var65, var67, var68, var69, var70);
var64 = var66;
varonce63 = var64;
}
{
var71 = nitc__typing___nitc__typing__TypeVisitor___get_mclass(var_v, self, var64);
}
var_mclass = var71;
} else {
{
{ /* Inline literal$AIntegerExpr$value (self) on <self:AIntegerExpr> */
var74 = self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <self:AIntegerExpr> */
var72 = var74;
RET_LABEL73:(void)0;
}
}
/* <var72:nullable Numeric> isa Int32 */
cltype76 = type_core__Int32.color;
idtype77 = type_core__Int32.id;
if(var72 == NULL) {
var75 = 0;
} else {
if(cltype76 >= (((long)var72&3)?type_info[((long)var72&3)]:var72->type)->table_size) {
var75 = 0;
} else {
var75 = (((long)var72&3)?type_info[((long)var72&3)]:var72->type)->type_table[cltype76] == idtype77;
}
}
if (var75){
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = "Int32";
var82 = (val*)(5l<<2|1);
var83 = (val*)(5l<<2|1);
var84 = (val*)((long)(0)<<2|3);
var85 = (val*)((long)(0)<<2|3);
var81 = core__flat___CString___to_s_unsafe(var80, var82, var83, var84, var85);
var79 = var81;
varonce78 = var79;
}
{
var86 = nitc__typing___nitc__typing__TypeVisitor___get_mclass(var_v, self, var79);
}
var_mclass = var86;
} else {
{
{ /* Inline literal$AIntegerExpr$value (self) on <self:AIntegerExpr> */
var89 = self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <self:AIntegerExpr> */
var87 = var89;
RET_LABEL88:(void)0;
}
}
/* <var87:nullable Numeric> isa UInt32 */
cltype91 = type_core__UInt32.color;
idtype92 = type_core__UInt32.id;
if(var87 == NULL) {
var90 = 0;
} else {
if(cltype91 >= (((long)var87&3)?type_info[((long)var87&3)]:var87->type)->table_size) {
var90 = 0;
} else {
var90 = (((long)var87&3)?type_info[((long)var87&3)]:var87->type)->type_table[cltype91] == idtype92;
}
}
if (var90){
if (likely(varonce93!=NULL)) {
var94 = varonce93;
} else {
var95 = "UInt32";
var97 = (val*)(6l<<2|1);
var98 = (val*)(6l<<2|1);
var99 = (val*)((long)(0)<<2|3);
var100 = (val*)((long)(0)<<2|3);
var96 = core__flat___CString___to_s_unsafe(var95, var97, var98, var99, var100);
var94 = var96;
varonce93 = var94;
}
{
var101 = nitc__typing___nitc__typing__TypeVisitor___get_mclass(var_v, self, var94);
}
var_mclass = var101;
} else {
}
}
}
}
}
}
}
if (var_mclass == NULL) {
var102 = 1; /* is null */
} else {
var102 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mclass,((val*)NULL)) on <var_mclass:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
var107 = var_mclass == var_other;
var105 = var107;
goto RET_LABEL106;
RET_LABEL106:(void)0;
}
}
var103 = var105;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
var102 = var103;
}
if (var102){
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MClass$mclass_type (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var110 = var_mclass->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var110 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var108 = var110;
RET_LABEL109:(void)0;
}
}
{
{ /* Inline typing$AExpr$mtype= (self,var108) on <self:AIntegerExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var108; /* _mtype on <self:AIntegerExpr> */
RET_LABEL111:(void)0;
}
}
RET_LABEL:;
}
/* method typing$AFloatExpr$accept_typing for (self: AFloatExpr, TypeVisitor) */
void nitc__typing___AFloatExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : CString */;
val* var2 /* : String */;
val* var3 /* : nullable Int */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Bool */;
val* var6 /* : nullable Bool */;
val* var7 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : MClassType */;
val* var16 /* : MClassType */;
var_v = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "Float";
var3 = (val*)(5l<<2|1);
var4 = (val*)(5l<<2|1);
var5 = (val*)((long)(0)<<2|3);
var6 = (val*)((long)(0)<<2|3);
var2 = core__flat___CString___to_s_unsafe(var1, var3, var4, var5, var6);
var = var2;
varonce = var;
}
{
var7 = nitc__typing___nitc__typing__TypeVisitor___get_mclass(var_v, self, var);
}
var_mclass = var7;
if (var_mclass == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mclass,((val*)NULL)) on <var_mclass:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
var13 = var_mclass == var_other;
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
if (var8){
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MClass$mclass_type (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var16 = var_mclass->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline typing$AExpr$mtype= (self,var14) on <self:AFloatExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var14; /* _mtype on <self:AFloatExpr> */
RET_LABEL17:(void)0;
}
}
RET_LABEL:;
}
/* method typing$ACharExpr$accept_typing for (self: ACharExpr, TypeVisitor) */
void nitc__typing___ACharExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var_mclass /* var mclass: nullable MClass */;
short int var /* : Bool */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Bool */;
val* var7 /* : nullable Bool */;
val* var8 /* : nullable MClass */;
short int var9 /* : Bool */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : CString */;
val* var13 /* : String */;
val* var14 /* : nullable Int */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Bool */;
val* var17 /* : nullable Bool */;
val* var18 /* : nullable MClass */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : CString */;
val* var22 /* : String */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Int */;
val* var25 /* : nullable Bool */;
val* var26 /* : nullable Bool */;
val* var27 /* : nullable MClass */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
val* var34 /* : MClassType */;
val* var36 /* : MClassType */;
var_v = p0;
var_mclass = ((val*)NULL);
{
var = nitc__literal___ACharExpr___is_ascii(self);
}
if (var){
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "Byte";
var4 = (val*)(4l<<2|1);
var5 = (val*)(4l<<2|1);
var6 = (val*)((long)(0)<<2|3);
var7 = (val*)((long)(0)<<2|3);
var3 = core__flat___CString___to_s_unsafe(var2, var4, var5, var6, var7);
var1 = var3;
varonce = var1;
}
{
var8 = nitc__typing___nitc__typing__TypeVisitor___get_mclass(var_v, self, var1);
}
var_mclass = var8;
} else {
{
var9 = nitc__literal___ACharExpr___is_code_point(self);
}
if (var9){
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "Int";
var14 = (val*)(3l<<2|1);
var15 = (val*)(3l<<2|1);
var16 = (val*)((long)(0)<<2|3);
var17 = (val*)((long)(0)<<2|3);
var13 = core__flat___CString___to_s_unsafe(var12, var14, var15, var16, var17);
var11 = var13;
varonce10 = var11;
}
{
var18 = nitc__typing___nitc__typing__TypeVisitor___get_mclass(var_v, self, var11);
}
var_mclass = var18;
} else {
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "Char";
var23 = (val*)(4l<<2|1);
var24 = (val*)(4l<<2|1);
var25 = (val*)((long)(0)<<2|3);
var26 = (val*)((long)(0)<<2|3);
var22 = core__flat___CString___to_s_unsafe(var21, var23, var24, var25, var26);
var20 = var22;
varonce19 = var20;
}
{
var27 = nitc__typing___nitc__typing__TypeVisitor___get_mclass(var_v, self, var20);
}
var_mclass = var27;
}
}
if (var_mclass == NULL) {
var28 = 1; /* is null */
} else {
var28 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mclass,((val*)NULL)) on <var_mclass:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
var33 = var_mclass == var_other;
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
var28 = var29;
}
if (var28){
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MClass$mclass_type (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var36 = var_mclass->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var36 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline typing$AExpr$mtype= (self,var34) on <self:ACharExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var34; /* _mtype on <self:ACharExpr> */
RET_LABEL37:(void)0;
}
}
RET_LABEL:;
}
/* method typing$AugmentedStringFormExpr$to_re for (self: AugmentedStringFormExpr): nullable CallSite */
val* nitc__typing___AugmentedStringFormExpr___to_re(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nitc__typing__AugmentedStringFormExpr___to_re].val; /* _to_re on <self:AugmentedStringFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing$AugmentedStringFormExpr$to_re= for (self: AugmentedStringFormExpr, nullable CallSite) */
void nitc__typing___AugmentedStringFormExpr___to_re_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__AugmentedStringFormExpr___to_re].val = p0; /* _to_re on <self:AugmentedStringFormExpr> */
RET_LABEL:;
}
/* method typing$AugmentedStringFormExpr$ignore_case for (self: AugmentedStringFormExpr): nullable CallSite */
val* nitc__typing___AugmentedStringFormExpr___ignore_case(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nitc__typing__AugmentedStringFormExpr___ignore_case].val; /* _ignore_case on <self:AugmentedStringFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing$AugmentedStringFormExpr$ignore_case= for (self: AugmentedStringFormExpr, nullable CallSite) */
void nitc__typing___AugmentedStringFormExpr___ignore_case_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__AugmentedStringFormExpr___ignore_case].val = p0; /* _ignore_case on <self:AugmentedStringFormExpr> */
RET_LABEL:;
}
/* method typing$AugmentedStringFormExpr$newline for (self: AugmentedStringFormExpr): nullable CallSite */
val* nitc__typing___AugmentedStringFormExpr___newline(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nitc__typing__AugmentedStringFormExpr___newline].val; /* _newline on <self:AugmentedStringFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing$AugmentedStringFormExpr$newline= for (self: AugmentedStringFormExpr, nullable CallSite) */
void nitc__typing___AugmentedStringFormExpr___newline_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__AugmentedStringFormExpr___newline].val = p0; /* _newline on <self:AugmentedStringFormExpr> */
RET_LABEL:;
}
/* method typing$AugmentedStringFormExpr$extended for (self: AugmentedStringFormExpr): nullable CallSite */
val* nitc__typing___AugmentedStringFormExpr___extended(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nitc__typing__AugmentedStringFormExpr___extended].val; /* _extended on <self:AugmentedStringFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing$AugmentedStringFormExpr$extended= for (self: AugmentedStringFormExpr, nullable CallSite) */
void nitc__typing___AugmentedStringFormExpr___extended_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__AugmentedStringFormExpr___extended].val = p0; /* _extended on <self:AugmentedStringFormExpr> */
RET_LABEL:;
}
/* method typing$AugmentedStringFormExpr$to_bytes_with_copy for (self: AugmentedStringFormExpr): nullable CallSite */
val* nitc__typing___AugmentedStringFormExpr___to_bytes_with_copy(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nitc__typing__AugmentedStringFormExpr___to_bytes_with_copy].val; /* _to_bytes_with_copy on <self:AugmentedStringFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing$AugmentedStringFormExpr$to_bytes_with_copy= for (self: AugmentedStringFormExpr, nullable CallSite) */
void nitc__typing___AugmentedStringFormExpr___to_bytes_with_copy_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__AugmentedStringFormExpr___to_bytes_with_copy].val = p0; /* _to_bytes_with_copy on <self:AugmentedStringFormExpr> */
RET_LABEL:;
}
/* method typing$AugmentedStringFormExpr$accept_typing for (self: AugmentedStringFormExpr, TypeVisitor) */
void nitc__typing___AugmentedStringFormExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : CString */;
val* var2 /* : String */;
val* var3 /* : nullable Int */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Bool */;
val* var6 /* : nullable Bool */;
val* var7 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : MModule */;
val* var17 /* : MModule */;
val* var18 /* : MClassType */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : CString */;
val* var22 /* : String */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Int */;
val* var25 /* : nullable Bool */;
val* var26 /* : nullable Bool */;
val* var27 /* : nullable CallSite */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : CString */;
val* var32 /* : String */;
val* var33 /* : nullable Int */;
val* var34 /* : nullable Int */;
val* var35 /* : nullable Bool */;
val* var36 /* : nullable Bool */;
val* var37 /* : nullable MClass */;
short int var38 /* : Bool */;
val* var39 /* : MClassType */;
val* var41 /* : MClassType */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : CString */;
val* var45 /* : String */;
val* var46 /* : nullable Int */;
val* var47 /* : nullable Int */;
val* var48 /* : nullable Bool */;
val* var49 /* : nullable Bool */;
val* var50 /* : nullable CallSite */;
val* var52 /* : String */;
val* var53 /* : SequenceRead[Char] */;
val* var_ /* var : SequenceRead[Char] */;
val* var54 /* : Iterator[nullable Object] */;
val* var_55 /* var : IndexedIterator[Char] */;
short int var56 /* : Bool */;
val* var57 /* : nullable Object */;
uint32_t var58 /* : Char */;
uint32_t var_i /* var i: Char */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : CString */;
val* var62 /* : String */;
val* var63 /* : nullable Int */;
val* var64 /* : nullable Int */;
val* var65 /* : nullable Bool */;
val* var66 /* : nullable Bool */;
val* var67 /* : nullable MClass */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
short int var71 /* : Bool */;
short int var73 /* : Bool */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : CString */;
val* var77 /* : String */;
val* var78 /* : nullable Int */;
val* var79 /* : nullable Int */;
val* var80 /* : nullable Bool */;
val* var81 /* : nullable Bool */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : CString */;
val* var85 /* : String */;
val* var86 /* : nullable Int */;
val* var87 /* : nullable Int */;
val* var88 /* : nullable Bool */;
val* var89 /* : nullable Bool */;
val* var_service /* var service: String */;
short int var90 /* : Bool */;
short int var92 /* : Bool */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : CString */;
val* var96 /* : String */;
val* var97 /* : nullable Int */;
val* var98 /* : nullable Int */;
val* var99 /* : nullable Bool */;
val* var100 /* : nullable Bool */;
val* var101 /* : MClassType */;
val* var103 /* : MClassType */;
val* var104 /* : nullable CallSite */;
short int var106 /* : Bool */;
short int var108 /* : Bool */;
static val* varonce109;
val* var110 /* : String */;
char* var111 /* : CString */;
val* var112 /* : String */;
val* var113 /* : nullable Int */;
val* var114 /* : nullable Int */;
val* var115 /* : nullable Bool */;
val* var116 /* : nullable Bool */;
val* var117 /* : MClassType */;
val* var119 /* : MClassType */;
val* var120 /* : nullable CallSite */;
short int var122 /* : Bool */;
short int var124 /* : Bool */;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : CString */;
val* var128 /* : String */;
val* var129 /* : nullable Int */;
val* var130 /* : nullable Int */;
val* var131 /* : nullable Bool */;
val* var132 /* : nullable Bool */;
val* var133 /* : MClassType */;
val* var135 /* : MClassType */;
val* var136 /* : nullable CallSite */;
val* var139 /* : NativeArray[String] */;
static val* varonce138;
static val* varonce140;
val* var141 /* : String */;
char* var142 /* : CString */;
val* var143 /* : String */;
val* var144 /* : nullable Int */;
val* var145 /* : nullable Int */;
val* var146 /* : nullable Bool */;
val* var147 /* : nullable Bool */;
static val* varonce148;
val* var149 /* : String */;
char* var150 /* : CString */;
val* var151 /* : String */;
val* var152 /* : nullable Int */;
val* var153 /* : nullable Int */;
val* var154 /* : nullable Bool */;
val* var155 /* : nullable Bool */;
val* var156 /* : String */;
val* var157 /* : String */;
short int var158 /* : Bool */;
short int var159 /* : Bool */;
short int var161 /* : Bool */;
short int var163 /* : Bool */;
val* var164 /* : MClassType */;
val* var166 /* : MClassType */;
var_v = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "String";
var3 = (val*)(6l<<2|1);
var4 = (val*)(6l<<2|1);
var5 = (val*)((long)(0)<<2|3);
var6 = (val*)((long)(0)<<2|3);
var2 = core__flat___CString___to_s_unsafe(var1, var3, var4, var5, var6);
var = var2;
varonce = var;
}
{
var7 = nitc__typing___nitc__typing__TypeVisitor___get_mclass(var_v, self, var);
}
var_mclass = var7;
if (var_mclass == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mclass,((val*)NULL)) on <var_mclass:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
var13 = var_mclass == var_other;
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
if (var8){
goto RET_LABEL;
} else {
}
{
var14 = nitc___nitc__AugmentedStringFormExpr___is_bytestring(self);
}
if (var14){
{
{ /* Inline typing$TypeVisitor$mmodule (var_v) on <var_v:TypeVisitor> */
var17 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___mmodule].val; /* _mmodule on <var_v:TypeVisitor> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 37);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = nitc__model___MModule___c_string_type(var15);
}
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "to_bytes_with_copy";
var23 = (val*)(18l<<2|1);
var24 = (val*)(18l<<2|1);
var25 = (val*)((long)(0)<<2|3);
var26 = (val*)((long)(0)<<2|3);
var22 = core__flat___CString___to_s_unsafe(var21, var23, var24, var25, var26);
var20 = var22;
varonce19 = var20;
}
{
var27 = nitc__typing___nitc__typing__TypeVisitor___get_method(var_v, self, var18, var20, 0);
}
{
{ /* Inline typing$AugmentedStringFormExpr$to_bytes_with_copy= (self,var27) on <self:AugmentedStringFormExpr> */
self->attrs[COLOR_nitc__typing__AugmentedStringFormExpr___to_bytes_with_copy].val = var27; /* _to_bytes_with_copy on <self:AugmentedStringFormExpr> */
RET_LABEL28:(void)0;
}
}
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = "Bytes";
var33 = (val*)(5l<<2|1);
var34 = (val*)(5l<<2|1);
var35 = (val*)((long)(0)<<2|3);
var36 = (val*)((long)(0)<<2|3);
var32 = core__flat___CString___to_s_unsafe(var31, var33, var34, var35, var36);
var30 = var32;
varonce29 = var30;
}
{
var37 = nitc__typing___nitc__typing__TypeVisitor___get_mclass(var_v, self, var30);
}
var_mclass = var37;
} else {
{
var38 = nitc___nitc__AugmentedStringFormExpr___is_re(self);
}
if (var38){
{
{ /* Inline model$MClass$mclass_type (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var41 = var_mclass->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var41 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "to_re";
var46 = (val*)(5l<<2|1);
var47 = (val*)(5l<<2|1);
var48 = (val*)((long)(0)<<2|3);
var49 = (val*)((long)(0)<<2|3);
var45 = core__flat___CString___to_s_unsafe(var44, var46, var47, var48, var49);
var43 = var45;
varonce42 = var43;
}
{
var50 = nitc__typing___nitc__typing__TypeVisitor___get_method(var_v, self, var39, var43, 0);
}
{
{ /* Inline typing$AugmentedStringFormExpr$to_re= (self,var50) on <self:AugmentedStringFormExpr> */
self->attrs[COLOR_nitc__typing__AugmentedStringFormExpr___to_re].val = var50; /* _to_re on <self:AugmentedStringFormExpr> */
RET_LABEL51:(void)0;
}
}
{
var52 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__literal__AAugmentedLiteral__suffix]))(self); /* suffix on <self:AugmentedStringFormExpr>*/
}
{
var53 = ((val*(*)(val* self))(var52->class->vft[COLOR_core__abstract_text__Text__chars]))(var52); /* chars on <var52:String>*/
}
var_ = var53;
{
var54 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:SequenceRead[Char]>*/
}
var_55 = var54;
for(;;) {
{
var56 = ((short int(*)(val* self))((((long)var_55&3)?class_info[((long)var_55&3)]:var_55->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_55); /* is_ok on <var_55:IndexedIterator[Char]>*/
}
if (var56){
} else {
goto BREAK_label;
}
{
var57 = ((val*(*)(val* self))((((long)var_55&3)?class_info[((long)var_55&3)]:var_55->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_55); /* item on <var_55:IndexedIterator[Char]>*/
}
var58 = (uint32_t)((long)(var57)>>2);
var_i = var58;
if (likely(varonce59!=NULL)) {
var60 = varonce59;
} else {
var61 = "Regex";
var63 = (val*)(5l<<2|1);
var64 = (val*)(5l<<2|1);
var65 = (val*)((long)(0)<<2|3);
var66 = (val*)((long)(0)<<2|3);
var62 = core__flat___CString___to_s_unsafe(var61, var63, var64, var65, var66);
var60 = var62;
varonce59 = var60;
}
{
var67 = nitc__typing___nitc__typing__TypeVisitor___get_mclass(var_v, self, var60);
}
var_mclass = var67;
if (var_mclass == NULL) {
var68 = 1; /* is null */
} else {
var68 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mclass,((val*)NULL)) on <var_mclass:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
var73 = var_mclass == var_other;
var71 = var73;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
var69 = var71;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
var68 = var69;
}
if (var68){
if (likely(varonce74!=NULL)) {
var75 = varonce74;
} else {
var76 = "Error: `Regex` class unknown";
var78 = (val*)(28l<<2|1);
var79 = (val*)(28l<<2|1);
var80 = (val*)((long)(0)<<2|3);
var81 = (val*)((long)(0)<<2|3);
var77 = core__flat___CString___to_s_unsafe(var76, var78, var79, var80, var81);
var75 = var77;
varonce74 = var75;
}
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var75); /* Direct call typing$TypeVisitor$error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = "";
var86 = (val*)(0l<<2|1);
var87 = (val*)(0l<<2|1);
var88 = (val*)((long)(0)<<2|3);
var89 = (val*)((long)(0)<<2|3);
var85 = core__flat___CString___to_s_unsafe(var84, var86, var87, var88, var89);
var83 = var85;
varonce82 = var83;
}
var_service = var83;
{
{ /* Inline kernel$Char$== (var_i,'i') on <var_i:Char> */
var92 = var_i == 'i';
var90 = var92;
goto RET_LABEL91;
RET_LABEL91:(void)0;
}
}
if (var90){
if (likely(varonce93!=NULL)) {
var94 = varonce93;
} else {
var95 = "ignore_case=";
var97 = (val*)(12l<<2|1);
var98 = (val*)(12l<<2|1);
var99 = (val*)((long)(0)<<2|3);
var100 = (val*)((long)(0)<<2|3);
var96 = core__flat___CString___to_s_unsafe(var95, var97, var98, var99, var100);
var94 = var96;
varonce93 = var94;
}
var_service = var94;
{
{ /* Inline model$MClass$mclass_type (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var103 = var_mclass->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var103 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var101 = var103;
RET_LABEL102:(void)0;
}
}
{
var104 = nitc__typing___nitc__typing__TypeVisitor___get_method(var_v, self, var101, var_service, 0);
}
{
{ /* Inline typing$AugmentedStringFormExpr$ignore_case= (self,var104) on <self:AugmentedStringFormExpr> */
self->attrs[COLOR_nitc__typing__AugmentedStringFormExpr___ignore_case].val = var104; /* _ignore_case on <self:AugmentedStringFormExpr> */
RET_LABEL105:(void)0;
}
}
} else {
{
{ /* Inline kernel$Char$== (var_i,'m') on <var_i:Char> */
var108 = var_i == 'm';
var106 = var108;
goto RET_LABEL107;
RET_LABEL107:(void)0;
}
}
if (var106){
if (likely(varonce109!=NULL)) {
var110 = varonce109;
} else {
var111 = "newline=";
var113 = (val*)(8l<<2|1);
var114 = (val*)(8l<<2|1);
var115 = (val*)((long)(0)<<2|3);
var116 = (val*)((long)(0)<<2|3);
var112 = core__flat___CString___to_s_unsafe(var111, var113, var114, var115, var116);
var110 = var112;
varonce109 = var110;
}
var_service = var110;
{
{ /* Inline model$MClass$mclass_type (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var119 = var_mclass->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var119 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var117 = var119;
RET_LABEL118:(void)0;
}
}
{
var120 = nitc__typing___nitc__typing__TypeVisitor___get_method(var_v, self, var117, var_service, 0);
}
{
{ /* Inline typing$AugmentedStringFormExpr$newline= (self,var120) on <self:AugmentedStringFormExpr> */
self->attrs[COLOR_nitc__typing__AugmentedStringFormExpr___newline].val = var120; /* _newline on <self:AugmentedStringFormExpr> */
RET_LABEL121:(void)0;
}
}
} else {
{
{ /* Inline kernel$Char$== (var_i,'b') on <var_i:Char> */
var124 = var_i == 'b';
var122 = var124;
goto RET_LABEL123;
RET_LABEL123:(void)0;
}
}
if (var122){
if (likely(varonce125!=NULL)) {
var126 = varonce125;
} else {
var127 = "extended=";
var129 = (val*)(9l<<2|1);
var130 = (val*)(9l<<2|1);
var131 = (val*)((long)(0)<<2|3);
var132 = (val*)((long)(0)<<2|3);
var128 = core__flat___CString___to_s_unsafe(var127, var129, var130, var131, var132);
var126 = var128;
varonce125 = var126;
}
var_service = var126;
{
{ /* Inline model$MClass$mclass_type (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var135 = var_mclass->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var135 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var133 = var135;
RET_LABEL134:(void)0;
}
}
{
var136 = nitc__typing___nitc__typing__TypeVisitor___get_method(var_v, self, var133, var_service, 0);
}
{
{ /* Inline typing$AugmentedStringFormExpr$extended= (self,var136) on <self:AugmentedStringFormExpr> */
self->attrs[COLOR_nitc__typing__AugmentedStringFormExpr___extended].val = var136; /* _extended on <self:AugmentedStringFormExpr> */
RET_LABEL137:(void)0;
}
}
} else {
if (unlikely(varonce138==NULL)) {
var139 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce140!=NULL)) {
var141 = varonce140;
} else {
var142 = "Type Error: Unrecognized suffix ";
var144 = (val*)(32l<<2|1);
var145 = (val*)(32l<<2|1);
var146 = (val*)((long)(0)<<2|3);
var147 = (val*)((long)(0)<<2|3);
var143 = core__flat___CString___to_s_unsafe(var142, var144, var145, var146, var147);
var141 = var143;
varonce140 = var141;
}
((struct instance_core__NativeArray*)var139)->values[0]=var141;
if (likely(varonce148!=NULL)) {
var149 = varonce148;
} else {
var150 = " in prefixed Regex";
var152 = (val*)(18l<<2|1);
var153 = (val*)(18l<<2|1);
var154 = (val*)((long)(0)<<2|3);
var155 = (val*)((long)(0)<<2|3);
var151 = core__flat___CString___to_s_unsafe(var150, var152, var153, var154, var155);
var149 = var151;
varonce148 = var149;
}
((struct instance_core__NativeArray*)var139)->values[2]=var149;
} else {
var139 = varonce138;
varonce138 = NULL;
}
var156 = core__abstract_text___Char___Object__to_s(var_i);
((struct instance_core__NativeArray*)var139)->values[1]=var156;
{
var157 = ((val*(*)(val* self))(var139->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var139); /* native_to_s on <var139:NativeArray[String]>*/
}
varonce138 = var139;
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var157); /* Direct call typing$TypeVisitor$error on <var_v:TypeVisitor>*/
}
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1530);
fatal_exit(1);
}
}
}
{
((void(*)(val* self))((((long)var_55&3)?class_info[((long)var_55&3)]:var_55->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_55); /* next on <var_55:IndexedIterator[Char]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_55&3)?class_info[((long)var_55&3)]:var_55->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_55); /* finish on <var_55:IndexedIterator[Char]>*/
}
} else {
}
}
if (var_mclass == NULL) {
var158 = 1; /* is null */
} else {
var158 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mclass,((val*)NULL)) on <var_mclass:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
var163 = var_mclass == var_other;
var161 = var163;
goto RET_LABEL162;
RET_LABEL162:(void)0;
}
}
var159 = var161;
goto RET_LABEL160;
RET_LABEL160:(void)0;
}
var158 = var159;
}
if (var158){
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MClass$mclass_type (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var166 = var_mclass->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var166 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var164 = var166;
RET_LABEL165:(void)0;
}
}
{
{ /* Inline typing$AExpr$mtype= (self,var164) on <self:AugmentedStringFormExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var164; /* _mtype on <self:AugmentedStringFormExpr> */
RET_LABEL167:(void)0;
}
}
RET_LABEL:;
}
/* method typing$ASuperstringExpr$accept_typing for (self: ASuperstringExpr, TypeVisitor) */
void nitc__typing___ASuperstringExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : CString */;
val* var2 /* : String */;
val* var3 /* : nullable Int */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Bool */;
val* var6 /* : nullable Bool */;
val* var7 /* : nullable MClass */;
val* var_objclass /* var objclass: nullable MClass */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : MClassType */;
val* var16 /* : MClassType */;
val* var_objtype /* var objtype: MClassType */;
val* var17 /* : ANodes[AExpr] */;
val* var19 /* : ANodes[AExpr] */;
val* var_ /* var : ANodes[AExpr] */;
val* var20 /* : Iterator[ANode] */;
val* var_21 /* var : Iterator[AExpr] */;
short int var22 /* : Bool */;
val* var23 /* : nullable Object */;
val* var_nexpr /* var nexpr: AExpr */;
val* var24 /* : nullable MType */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__typing___ASuperstringExpr___AExpr__accept_typing]))(self, p0); /* accept_typing on <self:ASuperstringExpr>*/
}
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "Object";
var3 = (val*)(6l<<2|1);
var4 = (val*)(6l<<2|1);
var5 = (val*)((long)(0)<<2|3);
var6 = (val*)((long)(0)<<2|3);
var2 = core__flat___CString___to_s_unsafe(var1, var3, var4, var5, var6);
var = var2;
varonce = var;
}
{
var7 = nitc__typing___nitc__typing__TypeVisitor___get_mclass(var_v, self, var);
}
var_objclass = var7;
if (var_objclass == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_objclass,((val*)NULL)) on <var_objclass:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_objclass,var_other) on <var_objclass:nullable MClass(MClass)> */
var13 = var_objclass == var_other;
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
if (var8){
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MClass$mclass_type (var_objclass) on <var_objclass:nullable MClass(MClass)> */
var16 = var_objclass->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_objclass:nullable MClass(MClass)> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
var_objtype = var14;
{
{ /* Inline parser_nodes$ASuperstringExpr$n_exprs (self) on <self:ASuperstringExpr> */
var19 = self->attrs[COLOR_nitc__parser_nodes__ASuperstringExpr___n_exprs].val; /* _n_exprs on <self:ASuperstringExpr> */
if (unlikely(var19 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2645);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_ = var17;
{
var20 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_);
}
var_21 = var20;
for(;;) {
{
var22 = ((short int(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_21); /* is_ok on <var_21:Iterator[AExpr]>*/
}
if (var22){
} else {
goto BREAK_label;
}
{
var23 = ((val*(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_21); /* item on <var_21:Iterator[AExpr]>*/
}
var_nexpr = var23;
{
var24 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_subtype(var_v, var_nexpr, var_objtype);
}
{
((void(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_21); /* next on <var_21:Iterator[AExpr]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_21); /* finish on <var_21:Iterator[AExpr]>*/
}
RET_LABEL:;
}
/* method typing$AArrayExpr$with_capacity_callsite for (self: AArrayExpr): nullable CallSite */
val* nitc__typing___AArrayExpr___with_capacity_callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nitc__typing__AArrayExpr___with_capacity_callsite].val; /* _with_capacity_callsite on <self:AArrayExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing$AArrayExpr$with_capacity_callsite= for (self: AArrayExpr, nullable CallSite) */
void nitc__typing___AArrayExpr___with_capacity_callsite_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__AArrayExpr___with_capacity_callsite].val = p0; /* _with_capacity_callsite on <self:AArrayExpr> */
RET_LABEL:;
}
/* method typing$AArrayExpr$push_callsite for (self: AArrayExpr): nullable CallSite */
val* nitc__typing___AArrayExpr___push_callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nitc__typing__AArrayExpr___push_callsite].val; /* _push_callsite on <self:AArrayExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing$AArrayExpr$push_callsite= for (self: AArrayExpr, nullable CallSite) */
void nitc__typing___AArrayExpr___push_callsite_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__AArrayExpr___push_callsite].val = p0; /* _push_callsite on <self:AArrayExpr> */
RET_LABEL:;
}
/* method typing$AArrayExpr$element_mtype for (self: AArrayExpr): nullable MType */
val* nitc__typing___AArrayExpr___element_mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nitc__typing__AArrayExpr___element_mtype].val; /* _element_mtype on <self:AArrayExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing$AArrayExpr$element_mtype= for (self: AArrayExpr, nullable MType) */
void nitc__typing___AArrayExpr___element_mtype_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__AArrayExpr___element_mtype].val = p0; /* _element_mtype on <self:AArrayExpr> */
RET_LABEL:;
}
/* method typing$AArrayExpr$set_comprehension for (self: AArrayExpr, nullable AExpr) */
void nitc__typing___AArrayExpr___set_comprehension(val* self, val* p0) {
val* var_n /* var n: nullable AExpr */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var7 /* : nullable AExpr */;
val* var9 /* : nullable AExpr */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : nullable AExpr */;
val* var15 /* : nullable AExpr */;
val* var16 /* : nullable AExpr */;
val* var18 /* : nullable AExpr */;
var_n = p0;
if (var_n == NULL) {
var = 1; /* is null */
} else {
var = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_n,((val*)NULL)) on <var_n:nullable AExpr> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_n,var_other) on <var_n:nullable AExpr(AExpr)> */
var5 = var_n == var_other;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
}
if (var){
goto RET_LABEL;
} else {
/* <var_n:nullable AExpr(AExpr)> isa AForExpr */
cltype = type_nitc__AForExpr.color;
idtype = type_nitc__AForExpr.id;
if(cltype >= var_n->type->table_size) {
var6 = 0;
} else {
var6 = var_n->type->type_table[cltype] == idtype;
}
if (var6){
{
{ /* Inline parser_nodes$AForExpr$n_block (var_n) on <var_n:nullable AExpr(AForExpr)> */
var9 = var_n->attrs[COLOR_nitc__parser_nodes__AForExpr___n_block].val; /* _n_block on <var_n:nullable AExpr(AForExpr)> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
nitc__typing___AArrayExpr___set_comprehension(self, var7); /* Direct call typing$AArrayExpr$set_comprehension on <self:AArrayExpr>*/
}
} else {
/* <var_n:nullable AExpr(AExpr)> isa AIfExpr */
cltype11 = type_nitc__AIfExpr.color;
idtype12 = type_nitc__AIfExpr.id;
if(cltype11 >= var_n->type->table_size) {
var10 = 0;
} else {
var10 = var_n->type->type_table[cltype11] == idtype12;
}
if (var10){
{
{ /* Inline parser_nodes$AIfExpr$n_then (var_n) on <var_n:nullable AExpr(AIfExpr)> */
var15 = var_n->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_then].val; /* _n_then on <var_n:nullable AExpr(AIfExpr)> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
nitc__typing___AArrayExpr___set_comprehension(self, var13); /* Direct call typing$AArrayExpr$set_comprehension on <self:AArrayExpr>*/
}
{
{ /* Inline parser_nodes$AIfExpr$n_else (var_n) on <var_n:nullable AExpr(AIfExpr)> */
var18 = var_n->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_else].val; /* _n_else on <var_n:nullable AExpr(AIfExpr)> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
nitc__typing___AArrayExpr___set_comprehension(self, var16); /* Direct call typing$AArrayExpr$set_comprehension on <self:AArrayExpr>*/
}
} else {
{
{ /* Inline typing$AExpr$comprehension= (var_n,self) on <var_n:nullable AExpr(AExpr)> */
var_n->attrs[COLOR_nitc__typing__AExpr___comprehension].val = self; /* _comprehension on <var_n:nullable AExpr(AExpr)> */
RET_LABEL19:(void)0;
}
}
}
}
}
RET_LABEL:;
}
/* method typing$AArrayExpr$accept_typing for (self: AArrayExpr, TypeVisitor) */
void nitc__typing___AArrayExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var_mtype /* var mtype: nullable MType */;
val* var /* : nullable AType */;
val* var2 /* : nullable AType */;
val* var_ntype /* var ntype: nullable AType */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable MType */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var_other12 /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : Array[nullable MType] */;
val* var_mtypes /* var mtypes: Array[nullable MType] */;
short int var_useless /* var useless: Bool */;
val* var17 /* : ANodes[AExpr] */;
val* var19 /* : ANodes[AExpr] */;
val* var_ /* var : ANodes[AExpr] */;
val* var20 /* : Iterator[ANode] */;
val* var_21 /* var : Iterator[AExpr] */;
short int var22 /* : Bool */;
val* var23 /* : nullable Object */;
val* var_e /* var e: AExpr */;
val* var24 /* : nullable MType */;
val* var_t /* var t: nullable MType */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
val* var36 /* : nullable MType */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
val* var54 /* : nullable MType */;
val* var56 /* : nullable MType */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
val* var62 /* : nullable MType */;
val* var64 /* : nullable MType */;
val* var65 /* : nullable MType */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
short int var70 /* : Bool */;
short int var72 /* : Bool */;
short int var_73 /* var : Bool */;
short int var74 /* : Bool */;
int cltype;
int idtype;
val* var75 /* : NativeArray[String] */;
static val* varonce;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : CString */;
val* var79 /* : String */;
val* var80 /* : nullable Int */;
val* var81 /* : nullable Int */;
val* var82 /* : nullable Bool */;
val* var83 /* : nullable Bool */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : CString */;
val* var87 /* : String */;
val* var88 /* : nullable Int */;
val* var89 /* : nullable Int */;
val* var90 /* : nullable Bool */;
val* var91 /* : nullable Bool */;
val* var92 /* : String */;
val* var93 /* : String */;
short int var94 /* : Bool */;
short int var95 /* : Bool */;
short int var97 /* : Bool */;
short int var98 /* : Bool */;
val* var99 /* : ModelBuilder */;
val* var101 /* : ModelBuilder */;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : CString */;
val* var105 /* : String */;
val* var106 /* : nullable Int */;
val* var107 /* : nullable Int */;
val* var108 /* : nullable Bool */;
val* var109 /* : nullable Bool */;
val* var111 /* : NativeArray[String] */;
static val* varonce110;
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
val* var128 /* : String */;
val* var129 /* : String */;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : CString */;
val* var134 /* : String */;
val* var135 /* : nullable Int */;
val* var136 /* : nullable Int */;
val* var137 /* : nullable Bool */;
val* var138 /* : nullable Bool */;
val* var139 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
short int var140 /* : Bool */;
short int var141 /* : Bool */;
short int var143 /* : Bool */;
short int var145 /* : Bool */;
val* var146 /* : Array[MType] */;
val* var_147 /* var : Array[MType] */;
val* var148 /* : MClassType */;
val* var_array_mtype /* var array_mtype: MClassType */;
static val* varonce149;
val* var150 /* : String */;
char* var151 /* : CString */;
val* var152 /* : String */;
val* var153 /* : nullable Int */;
val* var154 /* : nullable Int */;
val* var155 /* : nullable Bool */;
val* var156 /* : nullable Bool */;
val* var157 /* : nullable CallSite */;
static val* varonce159;
val* var160 /* : String */;
char* var161 /* : CString */;
val* var162 /* : String */;
val* var163 /* : nullable Int */;
val* var164 /* : nullable Int */;
val* var165 /* : nullable Bool */;
val* var166 /* : nullable Bool */;
val* var167 /* : nullable CallSite */;
var_v = p0;
var_mtype = ((val*)NULL);
{
{ /* Inline parser_nodes$AArrayExpr$n_type (self) on <self:AArrayExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AArrayExpr___n_type].val; /* _n_type on <self:AArrayExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_ntype = var;
if (var_ntype == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_ntype,((val*)NULL)) on <var_ntype:nullable AType> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_ntype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ntype, var_other); /* == on <var_ntype:nullable AType(AType)>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
{
var8 = nitc__typing___nitc__typing__TypeVisitor___resolve_mtype(var_v, var_ntype);
}
var_mtype = var8;
if (var_mtype == NULL) {
var9 = 1; /* is null */
} else {
var9 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other12 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mtype,var_other12) on <var_mtype:nullable MType(MType)> */
var15 = var_mtype == var_other12;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
goto RET_LABEL;
} else {
}
} else {
}
var16 = NEW_core__Array(&type_core__Array__nullable__nitc__MType);
{
core___core__Array___core__kernel__Object__init(var16); /* Direct call array$Array$init on <var16:Array[nullable MType]>*/
}
var_mtypes = var16;
var_useless = 0;
{
{ /* Inline parser_nodes$AArrayExpr$n_exprs (self) on <self:AArrayExpr> */
var19 = self->attrs[COLOR_nitc__parser_nodes__AArrayExpr___n_exprs].val; /* _n_exprs on <self:AArrayExpr> */
if (unlikely(var19 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2541);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_ = var17;
{
var20 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_);
}
var_21 = var20;
for(;;) {
{
var22 = ((short int(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_21); /* is_ok on <var_21:Iterator[AExpr]>*/
}
if (var22){
} else {
goto BREAK_label;
}
{
var23 = ((val*(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_21); /* item on <var_21:Iterator[AExpr]>*/
}
var_e = var23;
{
var24 = nitc__typing___nitc__typing__TypeVisitor___visit_expr(var_v, var_e);
}
var_t = var24;
if (var_t == NULL) {
var25 = 1; /* is null */
} else {
var25 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_t,((val*)NULL)) on <var_t:nullable MType> */
var_other12 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_t,var_other12) on <var_t:nullable MType(MType)> */
var30 = var_t == var_other12;
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
var25 = var26;
}
if (var25){
goto RET_LABEL;
} else {
}
{
nitc__typing___AArrayExpr___set_comprehension(self, var_e); /* Direct call typing$AArrayExpr$set_comprehension on <self:AArrayExpr>*/
}
if (var_mtype == NULL) {
var31 = 0; /* is null */
} else {
var31 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
var34 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mtype, var_other); /* == on <var_mtype:nullable MType(MType)>*/
}
var35 = !var34;
var32 = var35;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
var31 = var32;
}
if (var31){
{
var36 = nitc__typing___nitc__typing__TypeVisitor___check_subtype(var_v, var_e, var_t, var_mtype, 0);
}
if (var36 == NULL) {
var37 = 1; /* is null */
} else {
var37 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var36,((val*)NULL)) on <var36:nullable MType> */
var_other12 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var36,var_other12) on <var36:nullable MType(MType)> */
var42 = var36 == var_other12;
var40 = var42;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
var37 = var38;
}
if (var37){
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Object$== (var_t,var_mtype) on <var_t:nullable MType(MType)> */
var_other12 = var_mtype;
{
{ /* Inline kernel$Object$is_same_instance (var_t,var_other12) on <var_t:nullable MType(MType)> */
var47 = var_t == var_other12;
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
if (var43){
var_useless = 1;
} else {
}
} else {
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_mtypes, var_t); /* Direct call array$Array$add on <var_mtypes:Array[nullable MType]>*/
}
}
{
((void(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_21); /* next on <var_21:Iterator[AExpr]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_21); /* finish on <var_21:Iterator[AExpr]>*/
}
if (var_mtype == NULL) {
var48 = 1; /* is null */
} else {
var48 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other12 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mtype,var_other12) on <var_mtype:nullable MType(MType)> */
var53 = var_mtype == var_other12;
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
var49 = var51;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
var48 = var49;
}
if (var48){
{
{ /* Inline typing$AArrayExpr$element_mtype (self) on <self:AArrayExpr> */
var56 = self->attrs[COLOR_nitc__typing__AArrayExpr___element_mtype].val; /* _element_mtype on <self:AArrayExpr> */
var54 = var56;
RET_LABEL55:(void)0;
}
}
if (var54 == NULL) {
var57 = 0; /* is null */
} else {
var57 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var54,((val*)NULL)) on <var54:nullable MType> */
var_other = ((val*)NULL);
{
var60 = ((short int(*)(val* self, val* p0))(var54->class->vft[COLOR_core__kernel__Object___61d_61d]))(var54, var_other); /* == on <var54:nullable MType(MType)>*/
}
var61 = !var60;
var58 = var61;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
var57 = var58;
}
if (var57){
{
{ /* Inline typing$AArrayExpr$element_mtype (self) on <self:AArrayExpr> */
var64 = self->attrs[COLOR_nitc__typing__AArrayExpr___element_mtype].val; /* _element_mtype on <self:AArrayExpr> */
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_mtypes, var62); /* Direct call array$Array$add on <var_mtypes:Array[nullable MType]>*/
}
} else {
}
{
var65 = nitc__typing___nitc__typing__TypeVisitor___merge_types(var_v, self, var_mtypes);
}
var_mtype = var65;
} else {
}
if (var_mtype == NULL) {
var67 = 1; /* is null */
} else {
var67 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other12 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mtype,var_other12) on <var_mtype:nullable MType(MType)> */
var72 = var_mtype == var_other12;
var70 = var72;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
var68 = var70;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
var67 = var68;
}
var_73 = var67;
if (var67){
var66 = var_73;
} else {
/* <var_mtype:nullable MType(MType)> isa MNullType */
cltype = type_nitc__MNullType.color;
idtype = type_nitc__MNullType.id;
if(cltype >= var_mtype->type->table_size) {
var74 = 0;
} else {
var74 = var_mtype->type->type_table[cltype] == idtype;
}
var66 = var74;
}
if (var66){
if (unlikely(varonce==NULL)) {
var75 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce76!=NULL)) {
var77 = varonce76;
} else {
var78 = "Type Error: ambiguous array type ";
var80 = (val*)(33l<<2|1);
var81 = (val*)(33l<<2|1);
var82 = (val*)((long)(0)<<2|3);
var83 = (val*)((long)(0)<<2|3);
var79 = core__flat___CString___to_s_unsafe(var78, var80, var81, var82, var83);
var77 = var79;
varonce76 = var77;
}
((struct instance_core__NativeArray*)var75)->values[0]=var77;
} else {
var75 = varonce;
varonce = NULL;
}
if (likely(varonce84!=NULL)) {
var85 = varonce84;
} else {
var86 = " ";
var88 = (val*)(1l<<2|1);
var89 = (val*)(1l<<2|1);
var90 = (val*)((long)(0)<<2|3);
var91 = (val*)((long)(0)<<2|3);
var87 = core__flat___CString___to_s_unsafe(var86, var88, var89, var90, var91);
var85 = var87;
varonce84 = var85;
}
{
var92 = core__abstract_text___Collection___join(var_mtypes, var85, ((val*)NULL));
}
((struct instance_core__NativeArray*)var75)->values[1]=var92;
{
var93 = ((val*(*)(val* self))(var75->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var75); /* native_to_s on <var75:NativeArray[String]>*/
}
varonce = var75;
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var93); /* Direct call typing$TypeVisitor$error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
if (var_useless){
if (var_ntype == NULL) {
var94 = 0; /* is null */
} else {
var94 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_ntype,((val*)NULL)) on <var_ntype:nullable AType> */
var_other = ((val*)NULL);
{
var97 = ((short int(*)(val* self, val* p0))(var_ntype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ntype, var_other); /* == on <var_ntype:nullable AType(AType)>*/
}
var98 = !var97;
var95 = var98;
goto RET_LABEL96;
RET_LABEL96:(void)0;
}
var94 = var95;
}
if (unlikely(!var94)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1611);
fatal_exit(1);
}
{
{ /* Inline typing$TypeVisitor$modelbuilder (var_v) on <var_v:TypeVisitor> */
var101 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <var_v:TypeVisitor> */
if (unlikely(var101 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var99 = var101;
RET_LABEL100:(void)0;
}
}
if (likely(varonce102!=NULL)) {
var103 = varonce102;
} else {
var104 = "useless-type";
var106 = (val*)(12l<<2|1);
var107 = (val*)(12l<<2|1);
var108 = (val*)((long)(0)<<2|3);
var109 = (val*)((long)(0)<<2|3);
var105 = core__flat___CString___to_s_unsafe(var104, var106, var107, var108, var109);
var103 = var105;
varonce102 = var103;
}
if (unlikely(varonce110==NULL)) {
var111 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce112!=NULL)) {
var113 = varonce112;
} else {
var114 = "Warning: useless type declaration `";
var116 = (val*)(35l<<2|1);
var117 = (val*)(35l<<2|1);
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
var122 = "` in literal Array since it can be inferred from the elements type.";
var124 = (val*)(67l<<2|1);
var125 = (val*)(67l<<2|1);
var126 = (val*)((long)(0)<<2|3);
var127 = (val*)((long)(0)<<2|3);
var123 = core__flat___CString___to_s_unsafe(var122, var124, var125, var126, var127);
var121 = var123;
varonce120 = var121;
}
((struct instance_core__NativeArray*)var111)->values[2]=var121;
} else {
var111 = varonce110;
varonce110 = NULL;
}
{
var128 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var111)->values[1]=var128;
{
var129 = ((val*(*)(val* self))(var111->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var111); /* native_to_s on <var111:NativeArray[String]>*/
}
varonce110 = var111;
{
nitc___nitc__ModelBuilder___warning(var99, var_ntype, var103, var129); /* Direct call modelbuilder_base$ModelBuilder$warning on <var99:ModelBuilder>*/
}
} else {
}
{
{ /* Inline typing$AArrayExpr$element_mtype= (self,var_mtype) on <self:AArrayExpr> */
self->attrs[COLOR_nitc__typing__AArrayExpr___element_mtype].val = var_mtype; /* _element_mtype on <self:AArrayExpr> */
RET_LABEL130:(void)0;
}
}
if (likely(varonce131!=NULL)) {
var132 = varonce131;
} else {
var133 = "Array";
var135 = (val*)(5l<<2|1);
var136 = (val*)(5l<<2|1);
var137 = (val*)((long)(0)<<2|3);
var138 = (val*)((long)(0)<<2|3);
var134 = core__flat___CString___to_s_unsafe(var133, var135, var136, var137, var138);
var132 = var134;
varonce131 = var132;
}
{
var139 = nitc__typing___nitc__typing__TypeVisitor___get_mclass(var_v, self, var132);
}
var_mclass = var139;
if (var_mclass == NULL) {
var140 = 1; /* is null */
} else {
var140 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mclass,((val*)NULL)) on <var_mclass:nullable MClass> */
var_other12 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mclass,var_other12) on <var_mclass:nullable MClass(MClass)> */
var145 = var_mclass == var_other12;
var143 = var145;
goto RET_LABEL144;
RET_LABEL144:(void)0;
}
}
var141 = var143;
goto RET_LABEL142;
RET_LABEL142:(void)0;
}
var140 = var141;
}
if (var140){
goto RET_LABEL;
} else {
}
var146 = NEW_core__Array(&type_core__Array__nitc__MType);
{
core___core__Array___with_capacity(var146, 1l); /* Direct call array$Array$with_capacity on <var146:Array[MType]>*/
}
var_147 = var146;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_147, var_mtype); /* Direct call array$AbstractArray$push on <var_147:Array[MType]>*/
}
{
var148 = nitc___nitc__MClass___get_mtype(var_mclass, var_147);
}
var_array_mtype = var148;
if (likely(varonce149!=NULL)) {
var150 = varonce149;
} else {
var151 = "with_capacity";
var153 = (val*)(13l<<2|1);
var154 = (val*)(13l<<2|1);
var155 = (val*)((long)(0)<<2|3);
var156 = (val*)((long)(0)<<2|3);
var152 = core__flat___CString___to_s_unsafe(var151, var153, var154, var155, var156);
var150 = var152;
varonce149 = var150;
}
{
var157 = nitc__typing___nitc__typing__TypeVisitor___get_method(var_v, self, var_array_mtype, var150, 0);
}
{
{ /* Inline typing$AArrayExpr$with_capacity_callsite= (self,var157) on <self:AArrayExpr> */
self->attrs[COLOR_nitc__typing__AArrayExpr___with_capacity_callsite].val = var157; /* _with_capacity_callsite on <self:AArrayExpr> */
RET_LABEL158:(void)0;
}
}
if (likely(varonce159!=NULL)) {
var160 = varonce159;
} else {
var161 = "push";
var163 = (val*)(4l<<2|1);
var164 = (val*)(4l<<2|1);
var165 = (val*)((long)(0)<<2|3);
var166 = (val*)((long)(0)<<2|3);
var162 = core__flat___CString___to_s_unsafe(var161, var163, var164, var165, var166);
var160 = var162;
varonce159 = var160;
}
{
var167 = nitc__typing___nitc__typing__TypeVisitor___get_method(var_v, self, var_array_mtype, var160, 0);
}
{
{ /* Inline typing$AArrayExpr$push_callsite= (self,var167) on <self:AArrayExpr> */
self->attrs[COLOR_nitc__typing__AArrayExpr___push_callsite].val = var167; /* _push_callsite on <self:AArrayExpr> */
RET_LABEL168:(void)0;
}
}
{
{ /* Inline typing$AExpr$mtype= (self,var_array_mtype) on <self:AArrayExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var_array_mtype; /* _mtype on <self:AArrayExpr> */
RET_LABEL169:(void)0;
}
}
RET_LABEL:;
}
/* method typing$ARangeExpr$init_callsite for (self: ARangeExpr): nullable CallSite */
val* nitc__typing___ARangeExpr___init_callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nitc__typing__ARangeExpr___init_callsite].val; /* _init_callsite on <self:ARangeExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing$ARangeExpr$init_callsite= for (self: ARangeExpr, nullable CallSite) */
void nitc__typing___ARangeExpr___init_callsite_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__ARangeExpr___init_callsite].val = p0; /* _init_callsite on <self:ARangeExpr> */
RET_LABEL:;
}
/* method typing$ARangeExpr$accept_typing for (self: ARangeExpr, TypeVisitor) */
void nitc__typing___ARangeExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : CString */;
val* var2 /* : String */;
val* var3 /* : nullable Int */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Bool */;
val* var6 /* : nullable Bool */;
val* var7 /* : nullable MClass */;
val* var_discrete_class /* var discrete_class: nullable MClass */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : MClassDef */;
val* var16 /* : MClassDef */;
val* var17 /* : MClassType */;
val* var19 /* : MClassType */;
val* var_discrete_type /* var discrete_type: MClassType */;
val* var20 /* : AExpr */;
val* var22 /* : AExpr */;
val* var23 /* : nullable MType */;
val* var_t1 /* var t1: nullable MType */;
val* var24 /* : AExpr */;
val* var26 /* : AExpr */;
val* var27 /* : nullable MType */;
val* var_t2 /* var t2: nullable MType */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var_ /* var : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : CString */;
val* var44 /* : String */;
val* var45 /* : nullable Int */;
val* var46 /* : nullable Int */;
val* var47 /* : nullable Bool */;
val* var48 /* : nullable Bool */;
val* var49 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
val* var57 /* : Array[MType] */;
val* var_58 /* var : Array[MType] */;
val* var59 /* : MClassType */;
val* var_mtype /* var mtype: nullable Object */;
short int var60 /* : Bool */;
val* var61 /* : Array[MType] */;
val* var_62 /* var : Array[MType] */;
val* var63 /* : MClassType */;
val* var65 /* : NativeArray[String] */;
static val* varonce64;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : CString */;
val* var69 /* : String */;
val* var70 /* : nullable Int */;
val* var71 /* : nullable Int */;
val* var72 /* : nullable Bool */;
val* var73 /* : nullable Bool */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : CString */;
val* var77 /* : String */;
val* var78 /* : nullable Int */;
val* var79 /* : nullable Int */;
val* var80 /* : nullable Bool */;
val* var81 /* : nullable Bool */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : CString */;
val* var85 /* : String */;
val* var86 /* : nullable Int */;
val* var87 /* : nullable Int */;
val* var88 /* : nullable Bool */;
val* var89 /* : nullable Bool */;
val* var90 /* : String */;
val* var91 /* : String */;
val* var92 /* : String */;
short int var94 /* : Bool */;
int cltype;
int idtype;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : CString */;
val* var98 /* : String */;
val* var99 /* : nullable Int */;
val* var100 /* : nullable Int */;
val* var101 /* : nullable Bool */;
val* var102 /* : nullable Bool */;
val* var103 /* : nullable CallSite */;
val* var_callsite /* var callsite: nullable Object */;
short int var104 /* : Bool */;
int cltype105;
int idtype106;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : CString */;
val* var110 /* : String */;
val* var111 /* : nullable Int */;
val* var112 /* : nullable Int */;
val* var113 /* : nullable Bool */;
val* var114 /* : nullable Bool */;
val* var115 /* : nullable CallSite */;
var_v = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "Discrete";
var3 = (val*)(8l<<2|1);
var4 = (val*)(8l<<2|1);
var5 = (val*)((long)(0)<<2|3);
var6 = (val*)((long)(0)<<2|3);
var2 = core__flat___CString___to_s_unsafe(var1, var3, var4, var5, var6);
var = var2;
varonce = var;
}
{
var7 = nitc__typing___nitc__typing__TypeVisitor___get_mclass(var_v, self, var);
}
var_discrete_class = var7;
if (var_discrete_class == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_discrete_class,((val*)NULL)) on <var_discrete_class:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_discrete_class,var_other) on <var_discrete_class:nullable MClass(MClass)> */
var13 = var_discrete_class == var_other;
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
if (var8){
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MClass$intro (var_discrete_class) on <var_discrete_class:nullable MClass(MClass)> */
var16 = var_discrete_class->attrs[COLOR_nitc__model__MClass___intro].val; /* _intro on <var_discrete_class:nullable MClass(MClass)> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 496);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var14) on <var14:MClassDef> */
var19 = var14->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var14:MClassDef> */
if (unlikely(var19 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_discrete_type = var17;
{
{ /* Inline parser_nodes$ARangeExpr$n_expr (self) on <self:ARangeExpr> */
var22 = self->attrs[COLOR_nitc__parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:ARangeExpr> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2502);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_subtype(var_v, var20, var_discrete_type);
}
var_t1 = var23;
{
{ /* Inline parser_nodes$ARangeExpr$n_expr2 (self) on <self:ARangeExpr> */
var26 = self->attrs[COLOR_nitc__parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:ARangeExpr> */
if (unlikely(var26 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2508);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
var27 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_subtype(var_v, var24, var_discrete_type);
}
var_t2 = var27;
if (var_t1 == NULL) {
var29 = 1; /* is null */
} else {
var29 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_t1,((val*)NULL)) on <var_t1:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_t1,var_other) on <var_t1:nullable MType(MType)> */
var34 = var_t1 == var_other;
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
var29 = var30;
}
var_ = var29;
if (var29){
var28 = var_;
} else {
if (var_t2 == NULL) {
var35 = 1; /* is null */
} else {
var35 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_t2,((val*)NULL)) on <var_t2:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_t2,var_other) on <var_t2:nullable MType(MType)> */
var40 = var_t2 == var_other;
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
var28 = var35;
}
if (var28){
goto RET_LABEL;
} else {
}
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "Range";
var45 = (val*)(5l<<2|1);
var46 = (val*)(5l<<2|1);
var47 = (val*)((long)(0)<<2|3);
var48 = (val*)((long)(0)<<2|3);
var44 = core__flat___CString___to_s_unsafe(var43, var45, var46, var47, var48);
var42 = var44;
varonce41 = var42;
}
{
var49 = nitc__typing___nitc__typing__TypeVisitor___get_mclass(var_v, self, var42);
}
var_mclass = var49;
if (var_mclass == NULL) {
var50 = 1; /* is null */
} else {
var50 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mclass,((val*)NULL)) on <var_mclass:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
var55 = var_mclass == var_other;
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
var50 = var51;
}
if (var50){
goto RET_LABEL;
} else {
}
{
var56 = nitc__typing___nitc__typing__TypeVisitor___is_subtype(var_v, var_t1, var_t2);
}
if (var56){
var57 = NEW_core__Array(&type_core__Array__nitc__MType);
{
core___core__Array___with_capacity(var57, 1l); /* Direct call array$Array$with_capacity on <var57:Array[MType]>*/
}
var_58 = var57;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_58, var_t2); /* Direct call array$AbstractArray$push on <var_58:Array[MType]>*/
}
{
var59 = nitc___nitc__MClass___get_mtype(var_mclass, var_58);
}
var_mtype = var59;
} else {
{
var60 = nitc__typing___nitc__typing__TypeVisitor___is_subtype(var_v, var_t2, var_t1);
}
if (var60){
var61 = NEW_core__Array(&type_core__Array__nitc__MType);
{
core___core__Array___with_capacity(var61, 1l); /* Direct call array$Array$with_capacity on <var61:Array[MType]>*/
}
var_62 = var61;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_62, var_t1); /* Direct call array$AbstractArray$push on <var_62:Array[MType]>*/
}
{
var63 = nitc___nitc__MClass___get_mtype(var_mclass, var_62);
}
var_mtype = var63;
} else {
if (unlikely(varonce64==NULL)) {
var65 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = "Type Error: cannot create range: `";
var70 = (val*)(34l<<2|1);
var71 = (val*)(34l<<2|1);
var72 = (val*)((long)(0)<<2|3);
var73 = (val*)((long)(0)<<2|3);
var69 = core__flat___CString___to_s_unsafe(var68, var70, var71, var72, var73);
var67 = var69;
varonce66 = var67;
}
((struct instance_core__NativeArray*)var65)->values[0]=var67;
if (likely(varonce74!=NULL)) {
var75 = varonce74;
} else {
var76 = "` vs `";
var78 = (val*)(6l<<2|1);
var79 = (val*)(6l<<2|1);
var80 = (val*)((long)(0)<<2|3);
var81 = (val*)((long)(0)<<2|3);
var77 = core__flat___CString___to_s_unsafe(var76, var78, var79, var80, var81);
var75 = var77;
varonce74 = var75;
}
((struct instance_core__NativeArray*)var65)->values[2]=var75;
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = "`.";
var86 = (val*)(2l<<2|1);
var87 = (val*)(2l<<2|1);
var88 = (val*)((long)(0)<<2|3);
var89 = (val*)((long)(0)<<2|3);
var85 = core__flat___CString___to_s_unsafe(var84, var86, var87, var88, var89);
var83 = var85;
varonce82 = var83;
}
((struct instance_core__NativeArray*)var65)->values[4]=var83;
} else {
var65 = varonce64;
varonce64 = NULL;
}
{
var90 = ((val*(*)(val* self))(var_t1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_t1); /* to_s on <var_t1:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var65)->values[1]=var90;
{
var91 = ((val*(*)(val* self))(var_t2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_t2); /* to_s on <var_t2:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var65)->values[3]=var91;
{
var92 = ((val*(*)(val* self))(var65->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var65); /* native_to_s on <var65:NativeArray[String]>*/
}
varonce64 = var65;
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var92); /* Direct call typing$TypeVisitor$error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
}
}
{
{ /* Inline typing$AExpr$mtype= (self,var_mtype) on <self:ARangeExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var_mtype; /* _mtype on <self:ARangeExpr> */
RET_LABEL93:(void)0;
}
}
/* <self:ARangeExpr> isa ACrangeExpr */
cltype = type_nitc__ACrangeExpr.color;
idtype = type_nitc__ACrangeExpr.id;
if(cltype >= self->type->table_size) {
var94 = 0;
} else {
var94 = self->type->type_table[cltype] == idtype;
}
if (var94){
if (likely(varonce95!=NULL)) {
var96 = varonce95;
} else {
var97 = "init";
var99 = (val*)(4l<<2|1);
var100 = (val*)(4l<<2|1);
var101 = (val*)((long)(0)<<2|3);
var102 = (val*)((long)(0)<<2|3);
var98 = core__flat___CString___to_s_unsafe(var97, var99, var100, var101, var102);
var96 = var98;
varonce95 = var96;
}
{
var103 = nitc__typing___nitc__typing__TypeVisitor___get_method(var_v, self, var_mtype, var96, 0);
}
var_callsite = var103;
} else {
/* <self:ARangeExpr> isa AOrangeExpr */
cltype105 = type_nitc__AOrangeExpr.color;
idtype106 = type_nitc__AOrangeExpr.id;
if(cltype105 >= self->type->table_size) {
var104 = 0;
} else {
var104 = self->type->type_table[cltype105] == idtype106;
}
if (var104){
if (likely(varonce107!=NULL)) {
var108 = varonce107;
} else {
var109 = "without_last";
var111 = (val*)(12l<<2|1);
var112 = (val*)(12l<<2|1);
var113 = (val*)((long)(0)<<2|3);
var114 = (val*)((long)(0)<<2|3);
var110 = core__flat___CString___to_s_unsafe(var109, var111, var112, var113, var114);
var108 = var110;
varonce107 = var108;
}
{
var115 = nitc__typing___nitc__typing__TypeVisitor___get_method(var_v, self, var_mtype, var108, 0);
}
var_callsite = var115;
} else {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1660);
fatal_exit(1);
}
}
{
{ /* Inline typing$ARangeExpr$init_callsite= (self,var_callsite) on <self:ARangeExpr> */
self->attrs[COLOR_nitc__typing__ARangeExpr___init_callsite].val = var_callsite; /* _init_callsite on <self:ARangeExpr> */
RET_LABEL116:(void)0;
}
}
RET_LABEL:;
}
/* method typing$ANullExpr$accept_typing for (self: ANullExpr, TypeVisitor) */
void nitc__typing___ANullExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : MModule */;
val* var2 /* : MModule */;
val* var3 /* : Model */;
val* var5 /* : Model */;
val* var6 /* : MNullType */;
val* var8 /* : MNullType */;
var_v = p0;
{
{ /* Inline typing$TypeVisitor$mmodule (var_v) on <var_v:TypeVisitor> */
var2 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___mmodule].val; /* _mmodule on <var_v:TypeVisitor> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 37);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline mmodule$MModule$model (var) on <var:MModule> */
var5 = var->attrs[COLOR_nitc__mmodule__MModule___model].val; /* _model on <var:MModule> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 77);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model$Model$null_type (var3) on <var3:Model> */
var8 = var3->attrs[COLOR_nitc__model__Model___null_type].val; /* _null_type on <var3:Model> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _null_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 103);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline typing$AExpr$mtype= (self,var6) on <self:ANullExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var6; /* _mtype on <self:ANullExpr> */
RET_LABEL9:(void)0;
}
}
RET_LABEL:;
}
/* method typing$AIsaExpr$cast_type for (self: AIsaExpr): nullable MType */
val* nitc__typing___AIsaExpr___cast_type(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nitc__typing__AIsaExpr___cast_type].val; /* _cast_type on <self:AIsaExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing$AIsaExpr$cast_type= for (self: AIsaExpr, nullable MType) */
void nitc__typing___AIsaExpr___cast_type_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__AIsaExpr___cast_type].val = p0; /* _cast_type on <self:AIsaExpr> */
RET_LABEL:;
}
/* method typing$AIsaExpr$accept_typing for (self: AIsaExpr, TypeVisitor) */
void nitc__typing___AIsaExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var4 /* : AType */;
val* var6 /* : AType */;
val* var7 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var9 /* : AExpr */;
val* var11 /* : AExpr */;
val* var12 /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : AExpr */;
val* var20 /* : AExpr */;
val* var21 /* : nullable MType */;
val* var_orig /* var orig: nullable MType */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var_other27 /* var other: nullable Object */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var_ /* var : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var_37 /* var : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
val* var40 /* : nullable FlowContext */;
val* var42 /* : nullable FlowContext */;
val* var43 /* : FlowContext */;
val* var45 /* : FlowContext */;
val* var46 /* : nullable MType */;
var_v = p0;
{
{ /* Inline parser_nodes$AIsaExpr$n_expr (self) on <self:AIsaExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AIsaExpr___n_expr].val; /* _n_expr on <self:AIsaExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2234);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__typing___nitc__typing__TypeVisitor___visit_expr(var_v, var);
}
{
{ /* Inline parser_nodes$AIsaExpr$n_type (self) on <self:AIsaExpr> */
var6 = self->attrs[COLOR_nitc__parser_nodes__AIsaExpr___n_type].val; /* _n_type on <self:AIsaExpr> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2240);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nitc__typing___nitc__typing__TypeVisitor___resolve_mtype(var_v, var4);
}
var_mtype = var7;
{
{ /* Inline typing$AIsaExpr$cast_type= (self,var_mtype) on <self:AIsaExpr> */
self->attrs[COLOR_nitc__typing__AIsaExpr___cast_type].val = var_mtype; /* _cast_type on <self:AIsaExpr> */
RET_LABEL8:(void)0;
}
}
{
{ /* Inline parser_nodes$AIsaExpr$n_expr (self) on <self:AIsaExpr> */
var11 = self->attrs[COLOR_nitc__parser_nodes__AIsaExpr___n_expr].val; /* _n_expr on <self:AIsaExpr> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2234);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = ((val*(*)(val* self))(var9->class->vft[COLOR_nitc__typing__AExpr__its_variable]))(var9); /* its_variable on <var9:AExpr>*/
}
var_variable = var12;
if (var_variable == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_variable,((val*)NULL)) on <var_variable:nullable Variable> */
var_other = ((val*)NULL);
{
var16 = ((short int(*)(val* self, val* p0))(var_variable->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_variable, var_other); /* == on <var_variable:nullable Variable(Variable)>*/
}
var17 = !var16;
var14 = var17;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
if (var13){
{
{ /* Inline parser_nodes$AIsaExpr$n_expr (self) on <self:AIsaExpr> */
var20 = self->attrs[COLOR_nitc__parser_nodes__AIsaExpr___n_expr].val; /* _n_expr on <self:AIsaExpr> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2234);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = ((val*(*)(val* self))(var18->class->vft[COLOR_nitc__typing__AExpr__mtype]))(var18); /* mtype on <var18:AExpr>*/
}
var_orig = var21;
if (var_mtype == NULL) {
var24 = 1; /* is null */
} else {
var24 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other27 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mtype,var_other27) on <var_mtype:nullable MType(MType)> */
var30 = var_mtype == var_other27;
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var25 = var28;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var24 = var25;
}
var_ = var24;
if (var24){
var23 = var_;
} else {
if (var_orig == NULL) {
var31 = 1; /* is null */
} else {
var31 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_orig,((val*)NULL)) on <var_orig:nullable MType> */
var_other27 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_orig,var_other27) on <var_orig:nullable MType(MType)> */
var36 = var_orig == var_other27;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
var31 = var32;
}
var23 = var31;
}
var_37 = var23;
if (var23){
var22 = var_37;
} else {
{
var38 = nitc__typing___nitc__typing__TypeVisitor___is_subtype(var_v, var_orig, var_mtype);
}
var39 = !var38;
var22 = var39;
}
if (var22){
{
{ /* Inline flow$AExpr$after_flow_context (self) on <self:AIsaExpr> */
var42 = self->attrs[COLOR_nitc__flow__AExpr___after_flow_context].val; /* _after_flow_context on <self:AIsaExpr> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
if (var40 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 1694);
fatal_exit(1);
} else {
{ /* Inline flow$FlowContext$when_true (var40) on <var40:nullable FlowContext> */
if (unlikely(var40 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 225);
fatal_exit(1);
}
var45 = var40->attrs[COLOR_nitc__flow__FlowContext___when_true].val; /* _when_true on <var40:nullable FlowContext> */
if (unlikely(var45 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_true");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 225);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
nitc__typing___FlowContext___set_var(var43, var_v, var_variable, var_mtype); /* Direct call typing$FlowContext$set_var on <var43:FlowContext>*/
}
} else {
}
} else {
}
{
var46 = nitc__typing___nitc__typing__TypeVisitor___type_bool(var_v, self);
}
{
{ /* Inline typing$AExpr$mtype= (self,var46) on <self:AIsaExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var46; /* _mtype on <self:AIsaExpr> */
RET_LABEL47:(void)0;
}
}
RET_LABEL:;
}
/* method typing$AIsaExpr$accept_post_typing for (self: AIsaExpr, TypeVisitor) */
void nitc__typing___AIsaExpr___ANode__accept_post_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : AType */;
val* var5 /* : AType */;
val* var6 /* : nullable MType */;
var_v = p0;
{
{ /* Inline parser_nodes$AIsaExpr$n_expr (self) on <self:AIsaExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AIsaExpr___n_expr].val; /* _n_expr on <self:AIsaExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2234);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline parser_nodes$AIsaExpr$n_type (self) on <self:AIsaExpr> */
var5 = self->attrs[COLOR_nitc__parser_nodes__AIsaExpr___n_type].val; /* _n_type on <self:AIsaExpr> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2240);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = nitc__typing___nitc__typing__TypeVisitor___check_expr_cast(var_v, self, var, var3);
}
RET_LABEL:;
}
/* method typing$AAsCastExpr$accept_typing for (self: AAsCastExpr, TypeVisitor) */
void nitc__typing___AAsCastExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var4 /* : AType */;
val* var6 /* : AType */;
val* var7 /* : nullable MType */;
var_v = p0;
{
{ /* Inline parser_nodes$AAsCastForm$n_expr (self) on <self:AAsCastExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_expr].val; /* _n_expr on <self:AAsCastExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2667);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__typing___nitc__typing__TypeVisitor___visit_expr(var_v, var);
}
{
{ /* Inline parser_nodes$AAsCastExpr$n_type (self) on <self:AAsCastExpr> */
var6 = self->attrs[COLOR_nitc__parser_nodes__AAsCastExpr___n_type].val; /* _n_type on <self:AAsCastExpr> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2684);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nitc__typing___nitc__typing__TypeVisitor___resolve_mtype(var_v, var4);
}
{
{ /* Inline typing$AExpr$mtype= (self,var7) on <self:AAsCastExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var7; /* _mtype on <self:AAsCastExpr> */
RET_LABEL8:(void)0;
}
}
RET_LABEL:;
}
/* method typing$AAsCastExpr$accept_post_typing for (self: AAsCastExpr, TypeVisitor) */
void nitc__typing___AAsCastExpr___ANode__accept_post_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : AType */;
val* var5 /* : AType */;
val* var6 /* : nullable MType */;
var_v = p0;
{
{ /* Inline parser_nodes$AAsCastForm$n_expr (self) on <self:AAsCastExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_expr].val; /* _n_expr on <self:AAsCastExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2667);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline parser_nodes$AAsCastExpr$n_type (self) on <self:AAsCastExpr> */
var5 = self->attrs[COLOR_nitc__parser_nodes__AAsCastExpr___n_type].val; /* _n_type on <self:AAsCastExpr> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2684);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = nitc__typing___nitc__typing__TypeVisitor___check_expr_cast(var_v, self, var, var3);
}
RET_LABEL:;
}
/* method typing$AAsNotnullExpr$accept_typing for (self: AAsNotnullExpr, TypeVisitor) */
void nitc__typing___AAsNotnullExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : CString */;
val* var13 /* : String */;
val* var14 /* : nullable Int */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Bool */;
val* var17 /* : nullable Bool */;
short int var18 /* : Bool */;
val* var19 /* : MType */;
var_v = p0;
{
{ /* Inline parser_nodes$AAsCastForm$n_expr (self) on <self:AAsNotnullExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_expr].val; /* _n_expr on <self:AAsNotnullExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2667);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__typing___nitc__typing__TypeVisitor___visit_expr(var_v, var);
}
var_mtype = var3;
if (var_mtype == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
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
/* <var_mtype:nullable MType(MType)> isa MNullType */
cltype = type_nitc__MNullType.color;
idtype = type_nitc__MNullType.id;
if(cltype >= var_mtype->type->table_size) {
var10 = 0;
} else {
var10 = var_mtype->type->type_table[cltype] == idtype;
}
if (var10){
if (likely(varonce!=NULL)) {
var11 = varonce;
} else {
var12 = "Type Error: `as(not null)` on `null`.";
var14 = (val*)(37l<<2|1);
var15 = (val*)(37l<<2|1);
var16 = (val*)((long)(0)<<2|3);
var17 = (val*)((long)(0)<<2|3);
var13 = core__flat___CString___to_s_unsafe(var12, var14, var15, var16, var17);
var11 = var13;
varonce = var11;
}
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var11); /* Direct call typing$TypeVisitor$error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
var18 = nitc__typing___nitc__typing__TypeVisitor___can_be_null(var_v, var_mtype);
}
if (var18){
{
var19 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__as_notnull]))(var_mtype); /* as_notnull on <var_mtype:nullable MType(MType)>*/
}
var_mtype = var19;
} else {
}
{
{ /* Inline typing$AExpr$mtype= (self,var_mtype) on <self:AAsNotnullExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var_mtype; /* _mtype on <self:AAsNotnullExpr> */
RET_LABEL20:(void)0;
}
}
RET_LABEL:;
}
/* method typing$AAsNotnullExpr$accept_post_typing for (self: AAsNotnullExpr, TypeVisitor) */
void nitc__typing___AAsNotnullExpr___ANode__accept_post_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : AExpr */;
val* var12 /* : AExpr */;
short int var13 /* : Bool */;
var_v = p0;
{
{ /* Inline parser_nodes$AAsCastForm$n_expr (self) on <self:AAsNotnullExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_expr].val; /* _n_expr on <self:AAsNotnullExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2667);
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
if (var_mtype == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
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
{ /* Inline parser_nodes$AAsCastForm$n_expr (self) on <self:AAsNotnullExpr> */
var12 = self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_expr].val; /* _n_expr on <self:AAsNotnullExpr> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2667);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = nitc__typing___nitc__typing__TypeVisitor___check_can_be_null(var_v, var10, var_mtype);
}
RET_LABEL:;
}
/* method typing$AParExpr$accept_typing for (self: AParExpr, TypeVisitor) */
void nitc__typing___AParExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
var_v = p0;
{
{ /* Inline parser_nodes$AParExpr$n_expr (self) on <self:AParExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AParExpr___n_expr].val; /* _n_expr on <self:AParExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2656);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__typing___nitc__typing__TypeVisitor___visit_expr(var_v, var);
}
{
{ /* Inline typing$AExpr$mtype= (self,var3) on <self:AParExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var3; /* _mtype on <self:AParExpr> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method typing$AOnceExpr$accept_typing for (self: AOnceExpr, TypeVisitor) */
void nitc__typing___AOnceExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
var_v = p0;
{
{ /* Inline parser_nodes$AOnceExpr$n_expr (self) on <self:AOnceExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AOnceExpr___n_expr].val; /* _n_expr on <self:AOnceExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2095);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__typing___nitc__typing__TypeVisitor___visit_expr(var_v, var);
}
{
{ /* Inline typing$AExpr$mtype= (self,var3) on <self:AOnceExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var3; /* _mtype on <self:AOnceExpr> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method typing$ASelfExpr$its_variable for (self: ASelfExpr): nullable Variable */
val* nitc__typing___ASelfExpr___AExpr__its_variable(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
var1 = self->attrs[COLOR_nitc__typing__ASelfExpr___its_variable].val; /* _its_variable on <self:ASelfExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing$ASelfExpr$its_variable= for (self: ASelfExpr, nullable Variable) */
void nitc__typing___ASelfExpr___its_variable_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__ASelfExpr___its_variable].val = p0; /* _its_variable on <self:ASelfExpr> */
RET_LABEL:;
}
/* method typing$ASelfExpr$accept_typing for (self: ASelfExpr, TypeVisitor) */
void nitc__typing___ASelfExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var_ /* var : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
short int var5 /* : Bool */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
val* var9 /* : nullable Int */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Bool */;
val* var12 /* : nullable Bool */;
val* var13 /* : Variable */;
val* var15 /* : Variable */;
val* var_variable /* var variable: Variable */;
val* var17 /* : nullable MType */;
var_v = p0;
{
{ /* Inline typing$TypeVisitor$is_toplevel_context (var_v) on <var_v:TypeVisitor> */
var3 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___is_toplevel_context].s; /* _is_toplevel_context on <var_v:TypeVisitor> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_ = var1;
if (var1){
/* <self:ASelfExpr> isa AImplicitSelfExpr */
cltype = type_nitc__AImplicitSelfExpr.color;
idtype = type_nitc__AImplicitSelfExpr.id;
if(cltype >= self->type->table_size) {
var4 = 0;
} else {
var4 = self->type->type_table[cltype] == idtype;
}
var5 = !var4;
var = var5;
} else {
var = var_;
}
if (var){
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "Error: `self` cannot be used in top-level method.";
var9 = (val*)(49l<<2|1);
var10 = (val*)(49l<<2|1);
var11 = (val*)((long)(0)<<2|3);
var12 = (val*)((long)(0)<<2|3);
var8 = core__flat___CString___to_s_unsafe(var7, var9, var10, var11, var12);
var6 = var8;
varonce = var6;
}
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var6); /* Direct call typing$TypeVisitor$error on <var_v:TypeVisitor>*/
}
} else {
}
{
{ /* Inline typing$TypeVisitor$selfvariable (var_v) on <var_v:TypeVisitor> */
var15 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___selfvariable].val; /* _selfvariable on <var_v:TypeVisitor> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _selfvariable");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 51);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_variable = var13;
{
{ /* Inline typing$ASelfExpr$its_variable= (self,var_variable) on <self:ASelfExpr> */
self->attrs[COLOR_nitc__typing__ASelfExpr___its_variable].val = var_variable; /* _its_variable on <self:ASelfExpr> */
RET_LABEL16:(void)0;
}
}
{
var17 = nitc__typing___nitc__typing__TypeVisitor___get_variable(var_v, self, var_variable);
}
{
{ /* Inline typing$AExpr$mtype= (self,var17) on <self:ASelfExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var17; /* _mtype on <self:ASelfExpr> */
RET_LABEL18:(void)0;
}
}
RET_LABEL:;
}
/* method typing$AImplicitSelfExpr$is_sys for (self: AImplicitSelfExpr): Bool */
short int nitc__typing___AImplicitSelfExpr___is_sys(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__typing__AImplicitSelfExpr___is_sys].s; /* _is_sys on <self:AImplicitSelfExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing$AImplicitSelfExpr$is_sys= for (self: AImplicitSelfExpr, Bool) */
void nitc__typing___AImplicitSelfExpr___is_sys_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__typing__AImplicitSelfExpr___is_sys].s = p0; /* _is_sys on <self:AImplicitSelfExpr> */
RET_LABEL:;
}
/* method typing$ASendExpr$callsite for (self: ASendExpr): nullable CallSite */
val* nitc__typing___ASendExpr___callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nitc__typing__ASendExpr___callsite].val; /* _callsite on <self:ASendExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing$ASendExpr$callsite= for (self: ASendExpr, nullable CallSite) */
void nitc__typing___ASendExpr___callsite_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__ASendExpr___callsite].val = p0; /* _callsite on <self:ASendExpr> */
RET_LABEL:;
}
/* method typing$ASendExpr$bad_expr_message for (self: ASendExpr, AExpr): nullable String */
val* nitc__typing___ASendExpr___ANode__bad_expr_message(val* self, val* p0) {
val* var /* : nullable String */;
val* var_child /* var child: AExpr */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : NativeArray[String] */;
static val* varonce;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : CString */;
val* var13 /* : String */;
val* var14 /* : nullable Int */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Bool */;
val* var17 /* : nullable Bool */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Bool */;
val* var25 /* : nullable Bool */;
val* var26 /* : String */;
val* var27 /* : String */;
var_child = p0;
{
{ /* Inline parser_nodes$ASendExpr$n_expr (self) on <self:ASendExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASendExpr> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2103);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var_child,var1) on <var_child:AExpr> */
var_other = var1;
{
{ /* Inline kernel$Object$is_same_instance (var_child,var_other) on <var_child:AExpr> */
var8 = var_child == var_other;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
if (unlikely(varonce==NULL)) {
var9 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "to be the receiver of `";
var14 = (val*)(23l<<2|1);
var15 = (val*)(23l<<2|1);
var16 = (val*)((long)(0)<<2|3);
var17 = (val*)((long)(0)<<2|3);
var13 = core__flat___CString___to_s_unsafe(var12, var14, var15, var16, var17);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var9)->values[0]=var11;
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "`";
var22 = (val*)(1l<<2|1);
var23 = (val*)(1l<<2|1);
var24 = (val*)((long)(0)<<2|3);
var25 = (val*)((long)(0)<<2|3);
var21 = core__flat___CString___to_s_unsafe(var20, var22, var23, var24, var25);
var19 = var21;
varonce18 = var19;
}
((struct instance_core__NativeArray*)var9)->values[2]=var19;
} else {
var9 = varonce;
varonce = NULL;
}
{
var26 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__typing__ASendExpr__property_name]))(self); /* property_name on <self:ASendExpr>*/
}
((struct instance_core__NativeArray*)var9)->values[1]=var26;
{
var27 = ((val*(*)(val* self))(var9->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var9); /* native_to_s on <var9:NativeArray[String]>*/
}
varonce = var9;
var = var27;
goto RET_LABEL;
} else {
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
