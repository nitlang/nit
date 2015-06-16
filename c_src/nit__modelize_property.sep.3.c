#include "nit__modelize_property.sep.0.h"
/* method modelize_property#AAttrPropdef#check_signature for (self: AAttrPropdef, ModelBuilder) */
void nit__modelize_property___AAttrPropdef___APropdef__check_signature(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var /* : nullable MPropDef */;
val* var2 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MAttributeDef */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable AType */;
val* var11 /* : nullable AType */;
val* var_ntype /* var ntype: nullable AType */;
val* var12 /* : nullable MType */;
val* var14 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : MClassDef */;
val* var23 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var24 /* : MModule */;
val* var26 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var_other30 /* var other: nullable Object */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : nullable MType */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
val* var40 /* : nullable AExpr */;
val* var42 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
short int var43 /* : Bool */;
int cltype;
int idtype;
val* var44 /* : AType */;
val* var46 /* : AType */;
val* var47 /* : nullable MType */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
val* var56 /* : MProperty */;
val* var58 /* : MProperty */;
val* var59 /* : MPropDef */;
val* var61 /* : MPropDef */;
val* var62 /* : nullable MType */;
val* var64 /* : nullable MType */;
val* var_precursor_type /* var precursor_type: nullable MType */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
short int var70 /* : Bool */;
short int var71 /* : Bool */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
val* var75 /* : NativeArray[String] */;
static val* varonce;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
val* var79 /* : FlatString */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
val* var83 /* : FlatString */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : NativeString */;
val* var87 /* : FlatString */;
val* var88 /* : String */;
val* var89 /* : String */;
val* var90 /* : String */;
val* var91 /* : nullable MMethodDef */;
val* var93 /* : nullable MMethodDef */;
val* var_meth /* var meth: nullable MMethodDef */;
short int var94 /* : Bool */;
short int var95 /* : Bool */;
short int var97 /* : Bool */;
short int var98 /* : Bool */;
val* var_node /* var node: nullable ANode */;
short int var99 /* : Bool */;
short int var100 /* : Bool */;
short int var102 /* : Bool */;
short int var104 /* : Bool */;
val* var105 /* : nullable MMethodDef */;
val* var107 /* : nullable MMethodDef */;
short int var108 /* : Bool */;
short int var109 /* : Bool */;
short int var111 /* : Bool */;
short int var112 /* : Bool */;
val* var_node113 /* var node: nullable ANode */;
short int var114 /* : Bool */;
short int var115 /* : Bool */;
short int var117 /* : Bool */;
short int var119 /* : Bool */;
var_modelbuilder = p0;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var2 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mpropdef = var;
if (var_mpropdef == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MAttributeDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other) on <var_mpropdef:nullable MAttributeDef(MAttributeDef)> */
var8 = var_mpropdef == var_other;
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
{ /* Inline parser_nodes#AAttrPropdef#n_type (self) on <self:AAttrPropdef> */
var11 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_type].val; /* _n_type on <self:AAttrPropdef> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_ntype = var9;
{
{ /* Inline modelize_property#AAttrPropdef#mtype (self) on <self:AAttrPropdef> */
var14 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___mtype].val; /* _mtype on <self:AAttrPropdef> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_mtype = var12;
if (var_mtype == NULL) {
var15 = 1; /* is null */
} else {
var15 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var20 = var_mtype == var_other;
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
if (var15){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:nullable MAttributeDef(MAttributeDef)> */
var23 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MAttributeDef(MAttributeDef)> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
var_mclassdef = var21;
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var26 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
var_mmodule = var24;
if (var_ntype == NULL) {
var27 = 0; /* is null */
} else {
var27 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ntype,((val*)NULL)) on <var_ntype:nullable AType> */
var_other30 = ((val*)NULL);
{
var31 = ((short int(*)(val* self, val* p0))(var_ntype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ntype, var_other30); /* == on <var_ntype:nullable AType(AType)>*/
}
var32 = !var31;
var28 = var32;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
var27 = var28;
}
if (var27){
{
var33 = nit___nit__ModelBuilder___resolve_mtype(var_modelbuilder, var_mmodule, var_mclassdef, var_ntype);
}
if (var33 == NULL) {
var34 = 1; /* is null */
} else {
var34 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var33,((val*)NULL)) on <var33:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var33,var_other) on <var33:nullable MType(MType)> */
var39 = var33 == var_other;
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
var34 = var35;
}
if (var34){
goto RET_LABEL;
} else {
}
} else {
}
{
{ /* Inline parser_nodes#AAttrPropdef#n_expr (self) on <self:AAttrPropdef> */
var42 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <self:AAttrPropdef> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
var_nexpr = var40;
/* <var_nexpr:nullable AExpr> isa ANewExpr */
cltype = type_nit__ANewExpr.color;
idtype = type_nit__ANewExpr.id;
if(var_nexpr == NULL) {
var43 = 0;
} else {
if(cltype >= var_nexpr->type->table_size) {
var43 = 0;
} else {
var43 = var_nexpr->type->type_table[cltype] == idtype;
}
}
if (var43){
{
{ /* Inline parser_nodes#ANewExpr#n_type (var_nexpr) on <var_nexpr:nullable AExpr(ANewExpr)> */
var46 = var_nexpr->attrs[COLOR_nit__parser_nodes__ANewExpr___n_type].val; /* _n_type on <var_nexpr:nullable AExpr(ANewExpr)> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2255);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
var47 = nit___nit__ModelBuilder___resolve_mtype(var_modelbuilder, var_mmodule, var_mclassdef, var44);
}
if (var47 == NULL) {
var48 = 1; /* is null */
} else {
var48 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var47,((val*)NULL)) on <var47:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var47,var_other) on <var47:nullable MType(MType)> */
var53 = var47 == var_other;
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
goto RET_LABEL;
} else {
}
} else {
}
{
var54 = nit___nit__MPropDef___is_intro(var_mpropdef);
}
var55 = !var54;
if (var55){
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MAttributeDef(MAttributeDef)> */
var58 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MAttributeDef(MAttributeDef)> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var56) on <var56:MProperty(MAttribute)> */
var61 = var56->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var56:MProperty(MAttribute)> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1968);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
{ /* Inline model#MAttributeDef#static_mtype (var59) on <var59:MPropDef(MAttributeDef)> */
var64 = var59->attrs[COLOR_nit__model__MAttributeDef___static_mtype].val; /* _static_mtype on <var59:MPropDef(MAttributeDef)> */
var62 = var64;
RET_LABEL63:(void)0;
}
}
var_precursor_type = var62;
if (var_precursor_type == NULL) {
var65 = 1; /* is null */
} else {
var65 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_precursor_type,((val*)NULL)) on <var_precursor_type:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_precursor_type,var_other) on <var_precursor_type:nullable MType(MType)> */
var70 = var_precursor_type == var_other;
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
{
{ /* Inline kernel#Object#!= (var_mtype,var_precursor_type) on <var_mtype:nullable MType(MType)> */
var_other30 = var_precursor_type;
{
var73 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype, var_other30); /* == on <var_mtype:nullable MType(MType)>*/
}
var74 = !var73;
var71 = var74;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
if (var71){
if (unlikely(var_ntype == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1438);
fatal_exit(1);
}
if (unlikely(varonce==NULL)) {
var75 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce76!=NULL)) {
var77 = varonce76;
} else {
var78 = "Redef Error: expected `";
var79 = standard___standard__NativeString___to_s_with_length(var78, 23l);
var77 = var79;
varonce76 = var77;
}
((struct instance_standard__NativeArray*)var75)->values[0]=var77;
if (likely(varonce80!=NULL)) {
var81 = varonce80;
} else {
var82 = "` type as a bound; got `";
var83 = standard___standard__NativeString___to_s_with_length(var82, 24l);
var81 = var83;
varonce80 = var81;
}
((struct instance_standard__NativeArray*)var75)->values[2]=var81;
if (likely(varonce84!=NULL)) {
var85 = varonce84;
} else {
var86 = "`.";
var87 = standard___standard__NativeString___to_s_with_length(var86, 2l);
var85 = var87;
varonce84 = var85;
}
((struct instance_standard__NativeArray*)var75)->values[4]=var85;
} else {
var75 = varonce;
varonce = NULL;
}
{
var88 = ((val*(*)(val* self))(var_precursor_type->class->vft[COLOR_standard__string__Object__to_s]))(var_precursor_type); /* to_s on <var_precursor_type:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var75)->values[1]=var88;
{
var89 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype); /* to_s on <var_mtype:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var75)->values[3]=var89;
{
var90 = ((val*(*)(val* self))(var75->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var75); /* native_to_s on <var75:NativeArray[String]>*/
}
varonce = var75;
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_ntype, var90); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
} else {
}
{
{ /* Inline modelize_property#AAttrPropdef#mreadpropdef (self) on <self:AAttrPropdef> */
var93 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___mreadpropdef].val; /* _mreadpropdef on <self:AAttrPropdef> */
var91 = var93;
RET_LABEL92:(void)0;
}
}
var_meth = var91;
if (var_meth == NULL) {
var94 = 0; /* is null */
} else {
var94 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_meth,((val*)NULL)) on <var_meth:nullable MMethodDef> */
var_other30 = ((val*)NULL);
{
var97 = ((short int(*)(val* self, val* p0))(var_meth->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_meth, var_other30); /* == on <var_meth:nullable MMethodDef(MMethodDef)>*/
}
var98 = !var97;
var95 = var98;
goto RET_LABEL96;
RET_LABEL96:(void)0;
}
var94 = var95;
}
if (var94){
{
nit__modelize_property___AAttrPropdef___check_method_signature(self, var_modelbuilder, var_meth); /* Direct call modelize_property#AAttrPropdef#check_method_signature on <self:AAttrPropdef>*/
}
var_node = var_ntype;
if (var_node == NULL) {
var99 = 1; /* is null */
} else {
var99 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_node,((val*)NULL)) on <var_node:nullable ANode> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_node,var_other) on <var_node:nullable ANode(ANode)> */
var104 = var_node == var_other;
var102 = var104;
goto RET_LABEL103;
RET_LABEL103:(void)0;
}
}
var100 = var102;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
var99 = var100;
}
if (var99){
var_node = self;
} else {
}
{
nit__modelize_property___ModelBuilder___check_visibility(var_modelbuilder, var_node, var_mtype, var_meth); /* Direct call modelize_property#ModelBuilder#check_visibility on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
{
{ /* Inline modelize_property#AAttrPropdef#mwritepropdef (self) on <self:AAttrPropdef> */
var107 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___mwritepropdef].val; /* _mwritepropdef on <self:AAttrPropdef> */
var105 = var107;
RET_LABEL106:(void)0;
}
}
var_meth = var105;
if (var_meth == NULL) {
var108 = 0; /* is null */
} else {
var108 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_meth,((val*)NULL)) on <var_meth:nullable MMethodDef> */
var_other30 = ((val*)NULL);
{
var111 = ((short int(*)(val* self, val* p0))(var_meth->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_meth, var_other30); /* == on <var_meth:nullable MMethodDef(MMethodDef)>*/
}
var112 = !var111;
var109 = var112;
goto RET_LABEL110;
RET_LABEL110:(void)0;
}
var108 = var109;
}
if (var108){
{
nit__modelize_property___AAttrPropdef___check_method_signature(self, var_modelbuilder, var_meth); /* Direct call modelize_property#AAttrPropdef#check_method_signature on <self:AAttrPropdef>*/
}
var_node113 = var_ntype;
if (var_node113 == NULL) {
var114 = 1; /* is null */
} else {
var114 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_node113,((val*)NULL)) on <var_node113:nullable ANode> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_node113,var_other) on <var_node113:nullable ANode(ANode)> */
var119 = var_node113 == var_other;
var117 = var119;
goto RET_LABEL118;
RET_LABEL118:(void)0;
}
}
var115 = var117;
goto RET_LABEL116;
RET_LABEL116:(void)0;
}
var114 = var115;
}
if (var114){
var_node113 = self;
} else {
}
{
nit__modelize_property___ModelBuilder___check_visibility(var_modelbuilder, var_node113, var_mtype, var_meth); /* Direct call modelize_property#ModelBuilder#check_visibility on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#check_method_signature for (self: AAttrPropdef, ModelBuilder, MMethodDef) */
void nit__modelize_property___AAttrPropdef___check_method_signature(val* self, val* p0, val* p1) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var /* : MClassDef */;
val* var2 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var3 /* : MModule */;
val* var5 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var6 /* : nullable AType */;
val* var8 /* : nullable AType */;
val* var_nsig /* var nsig: nullable AType */;
val* var9 /* : nullable MSignature */;
val* var11 /* : nullable MSignature */;
val* var_mysignature /* var mysignature: nullable MSignature */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : MProperty */;
val* var22 /* : MProperty */;
val* var23 /* : MPropDef */;
val* var25 /* : MPropDef */;
val* var26 /* : nullable MSignature */;
val* var28 /* : nullable MSignature */;
val* var_msignature /* var msignature: nullable MSignature */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
long var35 /* : Int */;
long var36 /* : Int */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
val* var_other44 /* var other: nullable Object */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
val* var_node /* var node: ANode */;
val* var47 /* : NativeArray[String] */;
static val* varonce;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
val* var51 /* : FlatString */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
val* var55 /* : FlatString */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
val* var59 /* : FlatString */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
val* var63 /* : FlatString */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
val* var67 /* : FlatString */;
long var68 /* : Int */;
val* var69 /* : String */;
val* var70 /* : MProperty */;
val* var72 /* : MProperty */;
val* var73 /* : String */;
val* var75 /* : String */;
val* var76 /* : String */;
long var77 /* : Int */;
val* var78 /* : String */;
val* var79 /* : MProperty */;
val* var81 /* : MProperty */;
val* var82 /* : String */;
val* var83 /* : String */;
val* var84 /* : nullable MType */;
val* var86 /* : nullable MType */;
val* var_precursor_ret_type /* var precursor_ret_type: nullable MType */;
val* var87 /* : nullable MType */;
val* var89 /* : nullable MType */;
val* var_ret_type /* var ret_type: nullable MType */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
short int var92 /* : Bool */;
short int var94 /* : Bool */;
short int var95 /* : Bool */;
short int var_ /* var : Bool */;
short int var96 /* : Bool */;
short int var97 /* : Bool */;
short int var99 /* : Bool */;
short int var101 /* : Bool */;
short int var102 /* : Bool */;
short int var103 /* : Bool */;
short int var105 /* : Bool */;
short int var106 /* : Bool */;
val* var_node107 /* var node: ANode */;
val* var109 /* : NativeArray[String] */;
static val* varonce108;
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : NativeString */;
val* var113 /* : FlatString */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : NativeString */;
val* var117 /* : FlatString */;
val* var118 /* : MProperty */;
val* var120 /* : MProperty */;
val* var121 /* : String */;
val* var122 /* : String */;
long var123 /* : Int */;
short int var124 /* : Bool */;
short int var126 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var127 /* : Bool */;
long var_i /* var i: Int */;
long var128 /* : Int */;
long var_129 /* var : Int */;
short int var130 /* : Bool */;
short int var132 /* : Bool */;
int cltype133;
int idtype134;
const char* var_class_name135;
short int var136 /* : Bool */;
val* var137 /* : Array[MParameter] */;
val* var139 /* : Array[MParameter] */;
val* var140 /* : nullable Object */;
val* var141 /* : MType */;
val* var143 /* : MType */;
val* var_myt /* var myt: MType */;
val* var144 /* : Array[MParameter] */;
val* var146 /* : Array[MParameter] */;
val* var147 /* : nullable Object */;
val* var148 /* : MType */;
val* var150 /* : MType */;
val* var_prt /* var prt: MType */;
short int var151 /* : Bool */;
short int var152 /* : Bool */;
short int var154 /* : Bool */;
short int var155 /* : Bool */;
val* var_node156 /* var node: ANode */;
val* var157 /* : MClassType */;
val* var159 /* : MClassType */;
short int var160 /* : Bool */;
short int var161 /* : Bool */;
val* var163 /* : NativeArray[String] */;
static val* varonce162;
static val* varonce164;
val* var165 /* : String */;
char* var166 /* : NativeString */;
val* var167 /* : FlatString */;
static val* varonce168;
val* var169 /* : String */;
char* var170 /* : NativeString */;
val* var171 /* : FlatString */;
static val* varonce172;
val* var173 /* : String */;
char* var174 /* : NativeString */;
val* var175 /* : FlatString */;
static val* varonce176;
val* var177 /* : String */;
char* var178 /* : NativeString */;
val* var179 /* : FlatString */;
val* var180 /* : String */;
val* var181 /* : Array[MParameter] */;
val* var183 /* : Array[MParameter] */;
val* var184 /* : nullable Object */;
val* var185 /* : String */;
val* var187 /* : String */;
val* var188 /* : String */;
val* var189 /* : String */;
long var190 /* : Int */;
short int var191 /* : Bool */;
short int var192 /* : Bool */;
short int var194 /* : Bool */;
short int var195 /* : Bool */;
short int var196 /* : Bool */;
short int var197 /* : Bool */;
short int var199 /* : Bool */;
short int var200 /* : Bool */;
val* var_node201 /* var node: ANode */;
short int var202 /* : Bool */;
short int var203 /* : Bool */;
short int var205 /* : Bool */;
short int var207 /* : Bool */;
val* var208 /* : MClassType */;
val* var210 /* : MClassType */;
short int var211 /* : Bool */;
short int var212 /* : Bool */;
val* var214 /* : NativeArray[String] */;
static val* varonce213;
static val* varonce215;
val* var216 /* : String */;
char* var217 /* : NativeString */;
val* var218 /* : FlatString */;
static val* varonce219;
val* var220 /* : String */;
char* var221 /* : NativeString */;
val* var222 /* : FlatString */;
static val* varonce223;
val* var224 /* : String */;
char* var225 /* : NativeString */;
val* var226 /* : FlatString */;
val* var227 /* : String */;
val* var228 /* : String */;
val* var229 /* : String */;
var_modelbuilder = p0;
var_mpropdef = p1;
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var2 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_mclassdef = var;
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var5 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_mmodule = var3;
{
{ /* Inline parser_nodes#AAttrPropdef#n_type (self) on <self:AAttrPropdef> */
var8 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_type].val; /* _n_type on <self:AAttrPropdef> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_nsig = var6;
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var11 = var_mpropdef->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:MMethodDef> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_mysignature = var9;
if (var_mysignature == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mysignature,((val*)NULL)) on <var_mysignature:nullable MSignature> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mysignature,var_other) on <var_mysignature:nullable MSignature(MSignature)> */
var17 = var_mysignature == var_other;
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
var18 = nit___nit__MPropDef___is_intro(var_mpropdef);
}
var19 = !var18;
if (var19){
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var22 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var20) on <var20:MProperty(MMethod)> */
var25 = var20->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var20:MProperty(MMethod)> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1968);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var23) on <var23:MPropDef(MMethodDef)> */
var28 = var23->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var23:MPropDef(MMethodDef)> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
var_msignature = var26;
if (var_msignature == NULL) {
var29 = 1; /* is null */
} else {
var29 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_msignature,((val*)NULL)) on <var_msignature:nullable MSignature> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_msignature,var_other) on <var_msignature:nullable MSignature(MSignature)> */
var34 = var_msignature == var_other;
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
if (var29){
goto RET_LABEL;
} else {
}
{
var35 = nit___nit__MSignature___arity(var_mysignature);
}
{
var36 = nit___nit__MSignature___arity(var_msignature);
}
{
{ /* Inline kernel#Int#!= (var35,var36) on <var35:Int> */
var39 = var35 == var36;
var40 = !var39;
var37 = var40;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
if (var37){
if (var_nsig == NULL) {
var41 = 0; /* is null */
} else {
var41 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nsig,((val*)NULL)) on <var_nsig:nullable AType> */
var_other44 = ((val*)NULL);
{
var45 = ((short int(*)(val* self, val* p0))(var_nsig->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nsig, var_other44); /* == on <var_nsig:nullable AType(AType)>*/
}
var46 = !var45;
var42 = var46;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
var41 = var42;
}
if (var41){
var_node = var_nsig;
} else {
var_node = self;
}
if (unlikely(varonce==NULL)) {
var47 = NEW_standard__NativeArray(10l, &type_standard__NativeArray__standard__String);
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = "Redef Error: expected ";
var51 = standard___standard__NativeString___to_s_with_length(var50, 22l);
var49 = var51;
varonce48 = var49;
}
((struct instance_standard__NativeArray*)var47)->values[0]=var49;
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = " parameter(s) for `";
var55 = standard___standard__NativeString___to_s_with_length(var54, 19l);
var53 = var55;
varonce52 = var53;
}
((struct instance_standard__NativeArray*)var47)->values[2]=var53;
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = "`; got ";
var59 = standard___standard__NativeString___to_s_with_length(var58, 7l);
var57 = var59;
varonce56 = var57;
}
((struct instance_standard__NativeArray*)var47)->values[5]=var57;
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = ". See introduction at `";
var63 = standard___standard__NativeString___to_s_with_length(var62, 23l);
var61 = var63;
varonce60 = var61;
}
((struct instance_standard__NativeArray*)var47)->values[7]=var61;
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = "`.";
var67 = standard___standard__NativeString___to_s_with_length(var66, 2l);
var65 = var67;
varonce64 = var65;
}
((struct instance_standard__NativeArray*)var47)->values[9]=var65;
} else {
var47 = varonce;
varonce = NULL;
}
{
var68 = nit___nit__MSignature___arity(var_msignature);
}
var69 = standard__string___Int___Object__to_s(var68);
((struct instance_standard__NativeArray*)var47)->values[1]=var69;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var72 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var72 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var70) on <var70:MProperty(MMethod)> */
var75 = var70->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var70:MProperty(MMethod)> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1933);
fatal_exit(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
((struct instance_standard__NativeArray*)var47)->values[3]=var73;
{
var76 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_standard__string__Object__to_s]))(var_msignature); /* to_s on <var_msignature:nullable MSignature(MSignature)>*/
}
((struct instance_standard__NativeArray*)var47)->values[4]=var76;
{
var77 = nit___nit__MSignature___arity(var_mysignature);
}
var78 = standard__string___Int___Object__to_s(var77);
((struct instance_standard__NativeArray*)var47)->values[6]=var78;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var81 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
{
var82 = nit___nit__MProperty___nit__model_base__MEntity__full_name(var79);
}
((struct instance_standard__NativeArray*)var47)->values[8]=var82;
{
var83 = ((val*(*)(val* self))(var47->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var47); /* native_to_s on <var47:NativeArray[String]>*/
}
varonce = var47;
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_node, var83); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var86 = var_msignature->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:nullable MSignature(MSignature)> */
var84 = var86;
RET_LABEL85:(void)0;
}
}
var_precursor_ret_type = var84;
{
{ /* Inline model#MSignature#return_mtype (var_mysignature) on <var_mysignature:nullable MSignature(MSignature)> */
var89 = var_mysignature->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var_mysignature:nullable MSignature(MSignature)> */
var87 = var89;
RET_LABEL88:(void)0;
}
}
var_ret_type = var87;
if (var_ret_type == NULL) {
var91 = 0; /* is null */
} else {
var91 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret_type,((val*)NULL)) on <var_ret_type:nullable MType> */
var_other44 = ((val*)NULL);
{
var94 = ((short int(*)(val* self, val* p0))(var_ret_type->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ret_type, var_other44); /* == on <var_ret_type:nullable MType(MType)>*/
}
var95 = !var94;
var92 = var95;
goto RET_LABEL93;
RET_LABEL93:(void)0;
}
var91 = var92;
}
var_ = var91;
if (var91){
if (var_precursor_ret_type == NULL) {
var96 = 1; /* is null */
} else {
var96 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_precursor_ret_type,((val*)NULL)) on <var_precursor_ret_type:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_precursor_ret_type,var_other) on <var_precursor_ret_type:nullable MType(MType)> */
var101 = var_precursor_ret_type == var_other;
var99 = var101;
goto RET_LABEL100;
RET_LABEL100:(void)0;
}
}
var97 = var99;
goto RET_LABEL98;
RET_LABEL98:(void)0;
}
var96 = var97;
}
var90 = var96;
} else {
var90 = var_;
}
if (var90){
if (var_nsig == NULL) {
var102 = 0; /* is null */
} else {
var102 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nsig,((val*)NULL)) on <var_nsig:nullable AType> */
var_other44 = ((val*)NULL);
{
var105 = ((short int(*)(val* self, val* p0))(var_nsig->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nsig, var_other44); /* == on <var_nsig:nullable AType(AType)>*/
}
var106 = !var105;
var103 = var106;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
var102 = var103;
}
if (var102){
var_node107 = var_nsig;
} else {
var_node107 = self;
}
if (unlikely(varonce108==NULL)) {
var109 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce110!=NULL)) {
var111 = varonce110;
} else {
var112 = "Redef Error: `";
var113 = standard___standard__NativeString___to_s_with_length(var112, 14l);
var111 = var113;
varonce110 = var111;
}
((struct instance_standard__NativeArray*)var109)->values[0]=var111;
if (likely(varonce114!=NULL)) {
var115 = varonce114;
} else {
var116 = "` is a procedure, not a function.";
var117 = standard___standard__NativeString___to_s_with_length(var116, 33l);
var115 = var117;
varonce114 = var115;
}
((struct instance_standard__NativeArray*)var109)->values[2]=var115;
} else {
var109 = varonce108;
varonce108 = NULL;
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var120 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var120 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var118 = var120;
RET_LABEL119:(void)0;
}
}
{
var121 = ((val*(*)(val* self))(var118->class->vft[COLOR_standard__string__Object__to_s]))(var118); /* to_s on <var118:MProperty(MMethod)>*/
}
((struct instance_standard__NativeArray*)var109)->values[1]=var121;
{
var122 = ((val*(*)(val* self))(var109->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var109); /* native_to_s on <var109:NativeArray[String]>*/
}
varonce108 = var109;
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_node107, var122); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
var123 = nit___nit__MSignature___arity(var_mysignature);
}
{
{ /* Inline kernel#Int#> (var123,0l) on <var123:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var126 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var126)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var127 = var123 > 0l;
var124 = var127;
goto RET_LABEL125;
RET_LABEL125:(void)0;
}
}
if (var124){
var_i = 0l;
{
var128 = nit___nit__MSignature___arity(var_mysignature);
}
var_129 = var128;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_129) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_129:Int> isa OTHER */
/* <var_129:Int> isa OTHER */
var132 = 1; /* easy <var_129:Int> isa OTHER*/
if (unlikely(!var132)) {
var_class_name135 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name135);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var136 = var_i < var_129;
var130 = var136;
goto RET_LABEL131;
RET_LABEL131:(void)0;
}
}
if (var130){
{
{ /* Inline model#MSignature#mparameters (var_mysignature) on <var_mysignature:nullable MSignature(MSignature)> */
var139 = var_mysignature->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var_mysignature:nullable MSignature(MSignature)> */
if (unlikely(var139 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1756);
fatal_exit(1);
}
var137 = var139;
RET_LABEL138:(void)0;
}
}
{
var140 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var137, var_i);
}
{
{ /* Inline model#MParameter#mtype (var140) on <var140:nullable Object(MParameter)> */
var143 = var140->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var140:nullable Object(MParameter)> */
if (unlikely(var143 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1879);
fatal_exit(1);
}
var141 = var143;
RET_LABEL142:(void)0;
}
}
var_myt = var141;
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var146 = var_msignature->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:nullable MSignature(MSignature)> */
if (unlikely(var146 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1756);
fatal_exit(1);
}
var144 = var146;
RET_LABEL145:(void)0;
}
}
{
var147 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var144, var_i);
}
{
{ /* Inline model#MParameter#mtype (var147) on <var147:nullable Object(MParameter)> */
var150 = var147->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var147:nullable Object(MParameter)> */
if (unlikely(var150 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1879);
fatal_exit(1);
}
var148 = var150;
RET_LABEL149:(void)0;
}
}
var_prt = var148;
if (var_nsig == NULL) {
var151 = 0; /* is null */
} else {
var151 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nsig,((val*)NULL)) on <var_nsig:nullable AType> */
var_other44 = ((val*)NULL);
{
var154 = ((short int(*)(val* self, val* p0))(var_nsig->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nsig, var_other44); /* == on <var_nsig:nullable AType(AType)>*/
}
var155 = !var154;
var152 = var155;
goto RET_LABEL153;
RET_LABEL153:(void)0;
}
var151 = var152;
}
if (var151){
var_node156 = var_nsig;
} else {
var_node156 = self;
}
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var159 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var159 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var157 = var159;
RET_LABEL158:(void)0;
}
}
{
var160 = nit___nit__ModelBuilder___check_sametype(var_modelbuilder, var_node156, var_mmodule, var157, var_myt, var_prt);
}
var161 = !var160;
if (var161){
if (unlikely(varonce162==NULL)) {
var163 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce164!=NULL)) {
var165 = varonce164;
} else {
var166 = "Redef Error: expected `";
var167 = standard___standard__NativeString___to_s_with_length(var166, 23l);
var165 = var167;
varonce164 = var165;
}
((struct instance_standard__NativeArray*)var163)->values[0]=var165;
if (likely(varonce168!=NULL)) {
var169 = varonce168;
} else {
var170 = "` type for parameter `";
var171 = standard___standard__NativeString___to_s_with_length(var170, 22l);
var169 = var171;
varonce168 = var169;
}
((struct instance_standard__NativeArray*)var163)->values[2]=var169;
if (likely(varonce172!=NULL)) {
var173 = varonce172;
} else {
var174 = "\'; got `";
var175 = standard___standard__NativeString___to_s_with_length(var174, 8l);
var173 = var175;
varonce172 = var173;
}
((struct instance_standard__NativeArray*)var163)->values[4]=var173;
if (likely(varonce176!=NULL)) {
var177 = varonce176;
} else {
var178 = "`.";
var179 = standard___standard__NativeString___to_s_with_length(var178, 2l);
var177 = var179;
varonce176 = var177;
}
((struct instance_standard__NativeArray*)var163)->values[6]=var177;
} else {
var163 = varonce162;
varonce162 = NULL;
}
{
var180 = ((val*(*)(val* self))(var_prt->class->vft[COLOR_standard__string__Object__to_s]))(var_prt); /* to_s on <var_prt:MType>*/
}
((struct instance_standard__NativeArray*)var163)->values[1]=var180;
{
{ /* Inline model#MSignature#mparameters (var_mysignature) on <var_mysignature:nullable MSignature(MSignature)> */
var183 = var_mysignature->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var_mysignature:nullable MSignature(MSignature)> */
if (unlikely(var183 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1756);
fatal_exit(1);
}
var181 = var183;
RET_LABEL182:(void)0;
}
}
{
var184 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var181, var_i);
}
{
{ /* Inline model#MParameter#name (var184) on <var184:nullable Object(MParameter)> */
var187 = var184->attrs[COLOR_nit__model__MParameter___name].val; /* _name on <var184:nullable Object(MParameter)> */
if (unlikely(var187 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1876);
fatal_exit(1);
}
var185 = var187;
RET_LABEL186:(void)0;
}
}
((struct instance_standard__NativeArray*)var163)->values[3]=var185;
{
var188 = ((val*(*)(val* self))(var_myt->class->vft[COLOR_standard__string__Object__to_s]))(var_myt); /* to_s on <var_myt:MType>*/
}
((struct instance_standard__NativeArray*)var163)->values[5]=var188;
{
var189 = ((val*(*)(val* self))(var163->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var163); /* native_to_s on <var163:NativeArray[String]>*/
}
varonce162 = var163;
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_node156, var189); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
{
var190 = standard___standard__Int___Discrete__successor(var_i, 1l);
}
var_i = var190;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
} else {
}
if (var_precursor_ret_type == NULL) {
var191 = 0; /* is null */
} else {
var191 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_precursor_ret_type,((val*)NULL)) on <var_precursor_ret_type:nullable MType> */
var_other44 = ((val*)NULL);
{
var194 = ((short int(*)(val* self, val* p0))(var_precursor_ret_type->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_precursor_ret_type, var_other44); /* == on <var_precursor_ret_type:nullable MType(MType)>*/
}
var195 = !var194;
var192 = var195;
goto RET_LABEL193;
RET_LABEL193:(void)0;
}
var191 = var192;
}
if (var191){
if (var_nsig == NULL) {
var196 = 0; /* is null */
} else {
var196 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nsig,((val*)NULL)) on <var_nsig:nullable AType> */
var_other44 = ((val*)NULL);
{
var199 = ((short int(*)(val* self, val* p0))(var_nsig->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nsig, var_other44); /* == on <var_nsig:nullable AType(AType)>*/
}
var200 = !var199;
var197 = var200;
goto RET_LABEL198;
RET_LABEL198:(void)0;
}
var196 = var197;
}
if (var196){
var_node201 = var_nsig;
} else {
var_node201 = self;
}
if (var_ret_type == NULL) {
var202 = 1; /* is null */
} else {
var202 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ret_type,((val*)NULL)) on <var_ret_type:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_ret_type,var_other) on <var_ret_type:nullable MType(MType)> */
var207 = var_ret_type == var_other;
var205 = var207;
goto RET_LABEL206;
RET_LABEL206:(void)0;
}
}
var203 = var205;
goto RET_LABEL204;
RET_LABEL204:(void)0;
}
var202 = var203;
}
if (var202){
var_ret_type = var_precursor_ret_type;
} else {
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var210 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var210 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var208 = var210;
RET_LABEL209:(void)0;
}
}
{
var211 = nit___nit__ModelBuilder___check_subtype(var_modelbuilder, var_node201, var_mmodule, var208, var_ret_type, var_precursor_ret_type);
}
var212 = !var211;
if (var212){
if (unlikely(varonce213==NULL)) {
var214 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce215!=NULL)) {
var216 = varonce215;
} else {
var217 = "Redef Error: expected `";
var218 = standard___standard__NativeString___to_s_with_length(var217, 23l);
var216 = var218;
varonce215 = var216;
}
((struct instance_standard__NativeArray*)var214)->values[0]=var216;
if (likely(varonce219!=NULL)) {
var220 = varonce219;
} else {
var221 = "` return type; got `";
var222 = standard___standard__NativeString___to_s_with_length(var221, 20l);
var220 = var222;
varonce219 = var220;
}
((struct instance_standard__NativeArray*)var214)->values[2]=var220;
if (likely(varonce223!=NULL)) {
var224 = varonce223;
} else {
var225 = "`.";
var226 = standard___standard__NativeString___to_s_with_length(var225, 2l);
var224 = var226;
varonce223 = var224;
}
((struct instance_standard__NativeArray*)var214)->values[4]=var224;
} else {
var214 = varonce213;
varonce213 = NULL;
}
{
var227 = ((val*(*)(val* self))(var_precursor_ret_type->class->vft[COLOR_standard__string__Object__to_s]))(var_precursor_ret_type); /* to_s on <var_precursor_ret_type:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var214)->values[1]=var227;
{
var228 = ((val*(*)(val* self))(var_ret_type->class->vft[COLOR_standard__string__Object__to_s]))(var_ret_type); /* to_s on <var_ret_type:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var214)->values[3]=var228;
{
var229 = ((val*(*)(val* self))(var214->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var214); /* native_to_s on <var214:NativeArray[String]>*/
}
varonce213 = var214;
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_node201, var229); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
}
} else {
}
} else {
}
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#check_repeated_types for (self: AAttrPropdef, ModelBuilder) */
void nit__modelize_property___AAttrPropdef___APropdef__check_repeated_types(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
short int var /* : Bool */;
val* var1 /* : nullable MMethodDef */;
val* var3 /* : nullable MMethodDef */;
short int var4 /* : Bool */;
short int var_ /* var : Bool */;
val* var5 /* : nullable AType */;
val* var7 /* : nullable AType */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : nullable MMethodDef */;
val* var16 /* : nullable MMethodDef */;
val* var17 /* : MProperty */;
val* var19 /* : MProperty */;
val* var20 /* : MPropDef */;
val* var22 /* : MPropDef */;
val* var_intro /* var intro: MMethodDef */;
val* var23 /* : HashMap[MPropDef, APropdef] */;
val* var25 /* : HashMap[MPropDef, APropdef] */;
val* var26 /* : nullable Object */;
val* var_n_intro /* var n_intro: nullable APropdef */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
val* var_ntype /* var ntype: nullable Object */;
short int var33 /* : Bool */;
int cltype;
int idtype;
val* var34 /* : nullable ASignature */;
val* var36 /* : nullable ASignature */;
val* var37 /* : nullable MType */;
val* var39 /* : nullable MType */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
short int var_44 /* var : Bool */;
val* var45 /* : nullable AType */;
val* var47 /* : nullable AType */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
val* var_other51 /* var other: nullable Object */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
val* var54 /* : nullable AType */;
val* var56 /* : nullable AType */;
val* var57 /* : nullable MType */;
val* var59 /* : nullable MType */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
short int var_67 /* var : Bool */;
val* var68 /* : nullable AType */;
val* var70 /* : nullable AType */;
val* var71 /* : nullable MType */;
val* var73 /* : nullable MType */;
short int var74 /* : Bool */;
short int var76 /* : Bool */;
short int var77 /* : Bool */;
val* var78 /* : nullable AType */;
val* var80 /* : nullable AType */;
static val* varonce;
val* var81 /* : String */;
char* var82 /* : NativeString */;
val* var83 /* : FlatString */;
val* var85 /* : NativeArray[String] */;
static val* varonce84;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
val* var89 /* : FlatString */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : NativeString */;
val* var93 /* : FlatString */;
val* var94 /* : nullable MPropDef */;
val* var96 /* : nullable MPropDef */;
val* var97 /* : String */;
val* var98 /* : String */;
var_modelbuilder = p0;
{
{ /* Inline modelize_property#AAttrPropdef#mreadpropdef (self) on <self:AAttrPropdef> */
var3 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___mreadpropdef].val; /* _mreadpropdef on <self:AAttrPropdef> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1516);
fatal_exit(1);
} else {
var4 = nit___nit__MPropDef___is_intro(var1);
}
var_ = var4;
if (var4){
var = var_;
} else {
{
{ /* Inline parser_nodes#AAttrPropdef#n_type (self) on <self:AAttrPropdef> */
var7 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_type].val; /* _n_type on <self:AAttrPropdef> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (var5 == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var5,((val*)NULL)) on <var5:nullable AType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var5,var_other) on <var5:nullable AType(AType)> */
var13 = var5 == var_other;
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
var = var8;
}
if (var){
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property#AAttrPropdef#mreadpropdef (self) on <self:AAttrPropdef> */
var16 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___mreadpropdef].val; /* _mreadpropdef on <self:AAttrPropdef> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
if (var14 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1518);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mproperty (var14) on <var14:nullable MMethodDef> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var19 = var14->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var14:nullable MMethodDef> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var17) on <var17:MProperty(MMethod)> */
var22 = var17->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var17:MProperty(MMethod)> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1968);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
var_intro = var20;
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var25 = var_modelbuilder->attrs[COLOR_nit__modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 40);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = standard___standard__HashMap___standard__abstract_collection__MapRead__get_or_null(var23, var_intro);
}
var_n_intro = var26;
if (var_n_intro == NULL) {
var27 = 1; /* is null */
} else {
var27 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_n_intro,((val*)NULL)) on <var_n_intro:nullable APropdef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_n_intro,var_other) on <var_n_intro:nullable APropdef(APropdef)> */
var32 = var_n_intro == var_other;
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
goto RET_LABEL;
} else {
}
var_ntype = ((val*)NULL);
/* <var_n_intro:nullable APropdef(APropdef)> isa AMethPropdef */
cltype = type_nit__AMethPropdef.color;
idtype = type_nit__AMethPropdef.id;
if(cltype >= var_n_intro->type->table_size) {
var33 = 0;
} else {
var33 = var_n_intro->type->type_table[cltype] == idtype;
}
if (var33){
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (var_n_intro) on <var_n_intro:nullable APropdef(AMethPropdef)> */
var36 = var_n_intro->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <var_n_intro:nullable APropdef(AMethPropdef)> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
if (var34 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1524);
fatal_exit(1);
} else {
{ /* Inline modelize_property#ASignature#ret_type (var34) on <var34:nullable ASignature> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 669);
fatal_exit(1);
}
var39 = var34->attrs[COLOR_nit__modelize_property__ASignature___ret_type].val; /* _ret_type on <var34:nullable ASignature> */
var37 = var39;
RET_LABEL38:(void)0;
}
}
var_ntype = var37;
} else {
/* <var_n_intro:nullable APropdef(APropdef)> isa AAttrPropdef */
cltype42 = type_nit__AAttrPropdef.color;
idtype43 = type_nit__AAttrPropdef.id;
if(cltype42 >= var_n_intro->type->table_size) {
var41 = 0;
} else {
var41 = var_n_intro->type->type_table[cltype42] == idtype43;
}
var_44 = var41;
if (var41){
{
{ /* Inline parser_nodes#AAttrPropdef#n_type (var_n_intro) on <var_n_intro:nullable APropdef(AAttrPropdef)> */
var47 = var_n_intro->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_type].val; /* _n_type on <var_n_intro:nullable APropdef(AAttrPropdef)> */
var45 = var47;
RET_LABEL46:(void)0;
}
}
if (var45 == NULL) {
var48 = 0; /* is null */
} else {
var48 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var45,((val*)NULL)) on <var45:nullable AType> */
var_other51 = ((val*)NULL);
{
var52 = ((short int(*)(val* self, val* p0))(var45->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var45, var_other51); /* == on <var45:nullable AType(AType)>*/
}
var53 = !var52;
var49 = var53;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
var48 = var49;
}
var40 = var48;
} else {
var40 = var_44;
}
if (var40){
{
{ /* Inline parser_nodes#AAttrPropdef#n_type (var_n_intro) on <var_n_intro:nullable APropdef(AAttrPropdef)> */
var56 = var_n_intro->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_type].val; /* _n_type on <var_n_intro:nullable APropdef(AAttrPropdef)> */
var54 = var56;
RET_LABEL55:(void)0;
}
}
if (var54 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1526);
fatal_exit(1);
} else {
{ /* Inline modelbuilder_base#AType#mtype (var54) on <var54:nullable AType> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 358);
fatal_exit(1);
}
var59 = var54->attrs[COLOR_nit__modelbuilder_base__AType___mtype].val; /* _mtype on <var54:nullable AType> */
var57 = var59;
RET_LABEL58:(void)0;
}
}
var_ntype = var57;
} else {
}
}
if (var_ntype == NULL) {
var61 = 1; /* is null */
} else {
var61 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ntype,((val*)NULL)) on <var_ntype:nullable Object(nullable MType)> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_ntype,var_other) on <var_ntype:nullable MType(MType)> */
var66 = var_ntype == var_other;
var64 = var66;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
var62 = var64;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
var61 = var62;
}
var_67 = var61;
if (var61){
var60 = var_67;
} else {
{
{ /* Inline parser_nodes#AAttrPropdef#n_type (self) on <self:AAttrPropdef> */
var70 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_type].val; /* _n_type on <self:AAttrPropdef> */
var68 = var70;
RET_LABEL69:(void)0;
}
}
if (var68 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1529);
fatal_exit(1);
} else {
{ /* Inline modelbuilder_base#AType#mtype (var68) on <var68:nullable AType> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 358);
fatal_exit(1);
}
var73 = var68->attrs[COLOR_nit__modelbuilder_base__AType___mtype].val; /* _mtype on <var68:nullable AType> */
var71 = var73;
RET_LABEL72:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var_ntype,var71) on <var_ntype:nullable Object(MType)> */
var_other51 = var71;
{
var76 = ((short int(*)(val* self, val* p0))(var_ntype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ntype, var_other51); /* == on <var_ntype:nullable Object(MType)>*/
}
var77 = !var76;
var74 = var77;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
}
var60 = var74;
}
if (var60){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AAttrPropdef#n_type (self) on <self:AAttrPropdef> */
var80 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_type].val; /* _n_type on <self:AAttrPropdef> */
var78 = var80;
RET_LABEL79:(void)0;
}
}
if (likely(varonce!=NULL)) {
var81 = varonce;
} else {
var82 = "useless-signature";
var83 = standard___standard__NativeString___to_s_with_length(var82, 17l);
var81 = var83;
varonce = var81;
}
if (unlikely(varonce84==NULL)) {
var85 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = "Warning: useless type repetition on redefined attribute `";
var89 = standard___standard__NativeString___to_s_with_length(var88, 57l);
var87 = var89;
varonce86 = var87;
}
((struct instance_standard__NativeArray*)var85)->values[0]=var87;
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = "`";
var93 = standard___standard__NativeString___to_s_with_length(var92, 1l);
var91 = var93;
varonce90 = var91;
}
((struct instance_standard__NativeArray*)var85)->values[2]=var91;
} else {
var85 = varonce84;
varonce84 = NULL;
}
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var96 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var94 = var96;
RET_LABEL95:(void)0;
}
}
if (var94 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1530);
fatal_exit(1);
} else {
var97 = nit___nit__MPropDef___nit__model_base__MEntity__name(var94);
}
((struct instance_standard__NativeArray*)var85)->values[1]=var97;
{
var98 = ((val*(*)(val* self))(var85->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var85); /* native_to_s on <var85:NativeArray[String]>*/
}
varonce84 = var85;
{
nit___nit__ModelBuilder___advice(var_modelbuilder, var78, var81, var98); /* Direct call modelbuilder_base#ModelBuilder#advice on <var_modelbuilder:ModelBuilder>*/
}
RET_LABEL:;
}
/* method modelize_property#ATypePropdef#build_property for (self: ATypePropdef, ModelBuilder, MClassDef) */
void nit__modelize_property___ATypePropdef___APropdef__build_property(val* self, val* p0, val* p1) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var /* : TClassid */;
val* var2 /* : TClassid */;
val* var3 /* : String */;
val* var_name /* var name: String */;
val* var4 /* : TClassid */;
val* var6 /* : TClassid */;
val* var7 /* : nullable MProperty */;
val* var_mprop /* var mprop: nullable MProperty */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : nullable AVisibility */;
val* var16 /* : nullable AVisibility */;
val* var17 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: MVisibility */;
val* var18 /* : MVirtualTypeProp */;
val* var19 /* : SequenceRead[Char] */;
val* var_ /* var : SequenceRead[Char] */;
val* var20 /* : Iterator[nullable Object] */;
val* var_21 /* var : IndexedIterator[Char] */;
short int var22 /* : Bool */;
val* var23 /* : nullable Object */;
uint32_t var24 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var29 /* : Bool */;
short int var_30 /* var : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
short int var37 /* : Bool */;
val* var38 /* : TClassid */;
val* var40 /* : TClassid */;
static val* varonce;
val* var41 /* : String */;
char* var42 /* : NativeString */;
val* var43 /* : FlatString */;
val* var45 /* : NativeArray[String] */;
static val* varonce44;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
val* var49 /* : FlatString */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
val* var53 /* : FlatString */;
val* var54 /* : String */;
val* var55 /* : nullable TKwredef */;
val* var57 /* : nullable TKwredef */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
val* var60 /* : nullable TKwredef */;
val* var62 /* : nullable TKwredef */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
int cltype66;
int idtype67;
val* var68 /* : nullable AVisibility */;
val* var70 /* : nullable AVisibility */;
val* var71 /* : Map[MProperty, APropdef] */;
val* var73 /* : Map[MProperty, APropdef] */;
val* var74 /* : MVirtualTypeDef */;
val* var75 /* : Location */;
val* var77 /* : Location */;
val* var_mpropdef /* var mpropdef: MVirtualTypeDef */;
short int var78 /* : Bool */;
int cltype79;
int idtype80;
const struct type* type_struct;
const char* var_class_name81;
short int var83 /* : Bool */;
int cltype84;
int idtype85;
const struct type* type_struct86;
const char* var_class_name87;
val* var88 /* : HashMap[MPropDef, APropdef] */;
val* var90 /* : HashMap[MPropDef, APropdef] */;
short int var91 /* : Bool */;
val* var92 /* : ToolContext */;
val* var94 /* : ToolContext */;
val* var96 /* : NativeArray[String] */;
static val* varonce95;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : NativeString */;
val* var100 /* : FlatString */;
val* var101 /* : String */;
val* var102 /* : String */;
val* var103 /* : String */;
val* var104 /* : ToolContext */;
val* var106 /* : ToolContext */;
val* var108 /* : NativeArray[String] */;
static val* varonce107;
static val* varonce109;
val* var110 /* : String */;
char* var111 /* : NativeString */;
val* var112 /* : FlatString */;
val* var113 /* : String */;
val* var114 /* : String */;
val* var115 /* : String */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : NativeString */;
val* var119 /* : FlatString */;
val* var120 /* : nullable AAnnotation */;
val* var_atfixed /* var atfixed: nullable AAnnotation */;
short int var121 /* : Bool */;
short int var122 /* : Bool */;
val* var_other124 /* var other: nullable Object */;
short int var125 /* : Bool */;
short int var126 /* : Bool */;
var_modelbuilder = p0;
var_mclassdef = p1;
{
{ /* Inline parser_nodes#ATypePropdef#n_id (self) on <self:ATypePropdef> */
var2 = self->attrs[COLOR_nit__parser_nodes__ATypePropdef___n_id].val; /* _n_id on <self:ATypePropdef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1527);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit__lexer_work___Token___text(var);
}
var_name = var3;
{
{ /* Inline parser_nodes#ATypePropdef#n_id (self) on <self:ATypePropdef> */
var6 = self->attrs[COLOR_nit__parser_nodes__ATypePropdef___n_id].val; /* _n_id on <self:ATypePropdef> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1527);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nit___nit__ModelBuilder___try_get_mproperty_by_name(var_modelbuilder, var4, var_mclassdef, var_name);
}
var_mprop = var7;
if (var_mprop == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mprop,((val*)NULL)) on <var_mprop:nullable MProperty> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mprop,var_other) on <var_mprop:nullable MProperty(MProperty)> */
var13 = var_mprop == var_other;
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
{
{ /* Inline parser_nodes#ADefinition#n_visibility (self) on <self:ATypePropdef> */
var16 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:ATypePropdef> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = nit__modelize_property___APropdef___new_property_visibility(self, var_modelbuilder, var_mclassdef, var14);
}
var_mvisibility = var17;
var18 = NEW_nit__MVirtualTypeProp(&type_nit__MVirtualTypeProp);
{
((void(*)(val* self, val* p0))(var18->class->vft[COLOR_nit__model__MProperty__intro_mclassdef_61d]))(var18, var_mclassdef); /* intro_mclassdef= on <var18:MVirtualTypeProp>*/
}
{
((void(*)(val* self, val* p0))(var18->class->vft[COLOR_nit__model__MProperty__name_61d]))(var18, var_name); /* name= on <var18:MVirtualTypeProp>*/
}
{
((void(*)(val* self, val* p0))(var18->class->vft[COLOR_nit__model__MProperty__visibility_61d]))(var18, var_mvisibility); /* visibility= on <var18:MVirtualTypeProp>*/
}
{
((void(*)(val* self))(var18->class->vft[COLOR_standard__kernel__Object__init]))(var18); /* init on <var18:MVirtualTypeProp>*/
}
var_mprop = var18;
{
var19 = ((val*(*)(val* self))(var_name->class->vft[COLOR_standard__string__Text__chars]))(var_name); /* chars on <var_name:String>*/
}
var_ = var19;
{
var20 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:SequenceRead[Char]>*/
}
var_21 = var20;
for(;;) {
{
var22 = ((short int(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_21); /* is_ok on <var_21:IndexedIterator[Char]>*/
}
if (var22){
{
var23 = ((val*(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_21); /* item on <var_21:IndexedIterator[Char]>*/
}
var24 = (uint32_t)((long)(var23)>>2);
var_c = var24;
{
{ /* Inline kernel#Char#>= (var_c,'a') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'a':Char> isa OTHER */
/* <'a':Char> isa OTHER */
var28 = 1; /* easy <'a':Char> isa OTHER*/
if (unlikely(!var28)) {
var_class_name = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 724);
fatal_exit(1);
}
var29 = var_c >= 'a';
var26 = var29;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var_30 = var26;
if (var26){
{
{ /* Inline kernel#Char#<= (var_c,'z') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'z':Char> isa OTHER */
/* <'z':Char> isa OTHER */
var33 = 1; /* easy <'z':Char> isa OTHER*/
if (unlikely(!var33)) {
var_class_name36 = type_standard__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 722);
fatal_exit(1);
}
var37 = var_c <= 'z';
var31 = var37;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var25 = var31;
} else {
var25 = var_30;
}
if (var25){
{
{ /* Inline parser_nodes#ATypePropdef#n_id (self) on <self:ATypePropdef> */
var40 = self->attrs[COLOR_nit__parser_nodes__ATypePropdef___n_id].val; /* _n_id on <self:ATypePropdef> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1527);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
if (likely(varonce!=NULL)) {
var41 = varonce;
} else {
var42 = "bad-type-name";
var43 = standard___standard__NativeString___to_s_with_length(var42, 13l);
var41 = var43;
varonce = var41;
}
if (unlikely(varonce44==NULL)) {
var45 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = "Warning: lowercase in the virtual type `";
var49 = standard___standard__NativeString___to_s_with_length(var48, 40l);
var47 = var49;
varonce46 = var47;
}
((struct instance_standard__NativeArray*)var45)->values[0]=var47;
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = "`.";
var53 = standard___standard__NativeString___to_s_with_length(var52, 2l);
var51 = var53;
varonce50 = var51;
}
((struct instance_standard__NativeArray*)var45)->values[2]=var51;
} else {
var45 = varonce44;
varonce44 = NULL;
}
((struct instance_standard__NativeArray*)var45)->values[1]=var_name;
{
var54 = ((val*(*)(val* self))(var45->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var45); /* native_to_s on <var45:NativeArray[String]>*/
}
varonce44 = var45;
{
nit___nit__ModelBuilder___warning(var_modelbuilder, var38, var41, var54); /* Direct call modelbuilder_base#ModelBuilder#warning on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label;
} else {
}
{
((void(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_21); /* next on <var_21:IndexedIterator[Char]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_21); /* finish on <var_21:IndexedIterator[Char]>*/
}
{
{ /* Inline parser_nodes#ADefinition#n_kwredef (self) on <self:ATypePropdef> */
var57 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:ATypePropdef> */
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
var58 = nit__modelize_property___APropdef___check_redef_keyword(self, var_modelbuilder, var_mclassdef, var55, 0, var_mprop);
}
var59 = !var58;
if (var59){
goto RET_LABEL;
} else {
}
} else {
{
{ /* Inline parser_nodes#ADefinition#n_kwredef (self) on <self:ATypePropdef> */
var62 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:ATypePropdef> */
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
var63 = nit__modelize_property___APropdef___check_redef_keyword(self, var_modelbuilder, var_mclassdef, var60, 1, var_mprop);
}
var64 = !var63;
if (var64){
goto RET_LABEL;
} else {
}
/* <var_mprop:nullable MProperty(MProperty)> isa MVirtualTypeProp */
cltype66 = type_nit__MVirtualTypeProp.color;
idtype67 = type_nit__MVirtualTypeProp.id;
if(cltype66 >= var_mprop->type->table_size) {
var65 = 0;
} else {
var65 = var_mprop->type->type_table[cltype66] == idtype67;
}
if (unlikely(!var65)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1551);
fatal_exit(1);
}
{
{ /* Inline parser_nodes#ADefinition#n_visibility (self) on <self:ATypePropdef> */
var70 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:ATypePropdef> */
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
nit__modelize_property___APropdef___check_redef_property_visibility(self, var_modelbuilder, var68, var_mprop); /* Direct call modelize_property#APropdef#check_redef_property_visibility on <self:ATypePropdef>*/
}
}
{
{ /* Inline modelize_property#MClassDef#mprop2npropdef (var_mclassdef) on <var_mclassdef:MClassDef> */
var73 = var_mclassdef->attrs[COLOR_nit__modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <var_mclassdef:MClassDef> */
if (unlikely(var73 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 505);
fatal_exit(1);
}
var71 = var73;
RET_LABEL72:(void)0;
}
}
{
((void(*)(val* self, val* p0, val* p1))((((long)var71&3)?class_info[((long)var71&3)]:var71->class)->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var71, var_mprop, self); /* []= on <var71:Map[MProperty, APropdef]>*/
}
var74 = NEW_nit__MVirtualTypeDef(&type_nit__MVirtualTypeDef);
{
{ /* Inline parser_nodes#ANode#location (self) on <self:ATypePropdef> */
var77 = self->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <self:ATypePropdef> */
if (unlikely(var77 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var74->class->vft[COLOR_nit__model__MPropDef__mclassdef_61d]))(var74, var_mclassdef); /* mclassdef= on <var74:MVirtualTypeDef>*/
}
{
((void(*)(val* self, val* p0))(var74->class->vft[COLOR_nit__model__MPropDef__mproperty_61d]))(var74, var_mprop); /* mproperty= on <var74:MVirtualTypeDef>*/
}
{
((void(*)(val* self, val* p0))(var74->class->vft[COLOR_nit__model__MPropDef__location_61d]))(var74, var75); /* location= on <var74:MVirtualTypeDef>*/
}
{
((void(*)(val* self))(var74->class->vft[COLOR_standard__kernel__Object__init]))(var74); /* init on <var74:MVirtualTypeDef>*/
}
var_mpropdef = var74;
/* <var_mpropdef:MVirtualTypeDef> isa nullable MPROPDEF */
type_struct = self->type->resolution_table->types[COLOR_nullable__nit__modelize_property__APropdef__MPROPDEF];
cltype79 = type_struct->color;
idtype80 = type_struct->id;
if(cltype79 >= var_mpropdef->type->table_size) {
var78 = 0;
} else {
var78 = var_mpropdef->type->type_table[cltype79] == idtype80;
}
if (unlikely(!var78)) {
var_class_name81 = var_mpropdef == NULL ? "null" : var_mpropdef->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name81);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 1557);
fatal_exit(1);
}
{
{ /* Inline modelize_property#APropdef#mpropdef= (self,var_mpropdef) on <self:ATypePropdef> */
/* Covariant cast for argument 0 (mpropdef) <var_mpropdef:MVirtualTypeDef> isa nullable MPROPDEF */
/* <var_mpropdef:MVirtualTypeDef> isa nullable MPROPDEF */
type_struct86 = self->type->resolution_table->types[COLOR_nullable__nit__modelize_property__APropdef__MPROPDEF];
cltype84 = type_struct86->color;
idtype85 = type_struct86->id;
if(cltype84 >= var_mpropdef->type->table_size) {
var83 = 0;
} else {
var83 = var_mpropdef->type->type_table[cltype84] == idtype85;
}
if (unlikely(!var83)) {
var_class_name87 = var_mpropdef == NULL ? "null" : var_mpropdef->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name87);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 558);
fatal_exit(1);
}
self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val = var_mpropdef; /* _mpropdef on <self:ATypePropdef> */
RET_LABEL82:(void)0;
}
}
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var90 = var_modelbuilder->attrs[COLOR_nit__modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var90 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 40);
fatal_exit(1);
}
var88 = var90;
RET_LABEL89:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var88, var_mpropdef, self); /* Direct call hash_collection#HashMap#[]= on <var88:HashMap[MPropDef, APropdef]>*/
}
{
var91 = nit___nit__MPropDef___is_intro(var_mpropdef);
}
if (var91){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var94 = var_modelbuilder->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var_modelbuilder:ModelBuilder> */
if (unlikely(var94 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var92 = var94;
RET_LABEL93:(void)0;
}
}
if (unlikely(varonce95==NULL)) {
var96 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce97!=NULL)) {
var98 = varonce97;
} else {
var99 = " introduces new type ";
var100 = standard___standard__NativeString___to_s_with_length(var99, 21l);
var98 = var100;
varonce97 = var98;
}
((struct instance_standard__NativeArray*)var96)->values[1]=var98;
} else {
var96 = varonce95;
varonce95 = NULL;
}
{
var101 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:MVirtualTypeDef>*/
}
((struct instance_standard__NativeArray*)var96)->values[0]=var101;
{
var102 = nit___nit__MProperty___nit__model_base__MEntity__full_name(var_mprop);
}
((struct instance_standard__NativeArray*)var96)->values[2]=var102;
{
var103 = ((val*(*)(val* self))(var96->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var96); /* native_to_s on <var96:NativeArray[String]>*/
}
varonce95 = var96;
{
nit___nit__ToolContext___info(var92, var103, 4l); /* Direct call toolcontext#ToolContext#info on <var92:ToolContext>*/
}
} else {
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var106 = var_modelbuilder->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var_modelbuilder:ModelBuilder> */
if (unlikely(var106 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var104 = var106;
RET_LABEL105:(void)0;
}
}
if (unlikely(varonce107==NULL)) {
var108 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce109!=NULL)) {
var110 = varonce109;
} else {
var111 = " redefines type ";
var112 = standard___standard__NativeString___to_s_with_length(var111, 16l);
var110 = var112;
varonce109 = var110;
}
((struct instance_standard__NativeArray*)var108)->values[1]=var110;
} else {
var108 = varonce107;
varonce107 = NULL;
}
{
var113 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:MVirtualTypeDef>*/
}
((struct instance_standard__NativeArray*)var108)->values[0]=var113;
{
var114 = nit___nit__MProperty___nit__model_base__MEntity__full_name(var_mprop);
}
((struct instance_standard__NativeArray*)var108)->values[2]=var114;
{
var115 = ((val*(*)(val* self))(var108->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var108); /* native_to_s on <var108:NativeArray[String]>*/
}
varonce107 = var108;
{
nit___nit__ToolContext___info(var104, var115, 4l); /* Direct call toolcontext#ToolContext#info on <var104:ToolContext>*/
}
}
{
nit__modelize_property___APropdef___set_doc(self, var_mpropdef, var_modelbuilder); /* Direct call modelize_property#APropdef#set_doc on <self:ATypePropdef>*/
}
if (likely(varonce116!=NULL)) {
var117 = varonce116;
} else {
var118 = "fixed";
var119 = standard___standard__NativeString___to_s_with_length(var118, 5l);
var117 = var119;
varonce116 = var117;
}
{
var120 = nit__annotation___Prod___get_single_annotation(self, var117, var_modelbuilder);
}
var_atfixed = var120;
if (var_atfixed == NULL) {
var121 = 0; /* is null */
} else {
var121 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atfixed,((val*)NULL)) on <var_atfixed:nullable AAnnotation> */
var_other124 = ((val*)NULL);
{
var125 = ((short int(*)(val* self, val* p0))(var_atfixed->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_atfixed, var_other124); /* == on <var_atfixed:nullable AAnnotation(AAnnotation)>*/
}
var126 = !var125;
var122 = var126;
goto RET_LABEL123;
RET_LABEL123:(void)0;
}
var121 = var122;
}
if (var121){
{
{ /* Inline model#MVirtualTypeDef#is_fixed= (var_mpropdef,1) on <var_mpropdef:MVirtualTypeDef> */
var_mpropdef->attrs[COLOR_nit__model__MVirtualTypeDef___is_fixed].s = 1; /* _is_fixed on <var_mpropdef:MVirtualTypeDef> */
RET_LABEL127:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method modelize_property#ATypePropdef#build_signature for (self: ATypePropdef, ModelBuilder) */
void nit__modelize_property___ATypePropdef___APropdef__build_signature(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var /* : nullable MPropDef */;
val* var2 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MVirtualTypeDef */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : MClassDef */;
val* var11 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var12 /* : MModule */;
val* var14 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mtype /* var mtype: nullable MType */;
val* var15 /* : AType */;
val* var17 /* : AType */;
val* var_ntype /* var ntype: AType */;
val* var18 /* : nullable MType */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
var_modelbuilder = p0;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:ATypePropdef> */
var2 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:ATypePropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mpropdef = var;
if (var_mpropdef == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MVirtualTypeDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var8 = var_mpropdef == var_other;
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
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var11 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_mclassdef = var9;
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var14 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_mmodule = var12;
var_mtype = ((val*)NULL);
{
{ /* Inline parser_nodes#ATypePropdef#n_type (self) on <self:ATypePropdef> */
var17 = self->attrs[COLOR_nit__parser_nodes__ATypePropdef___n_type].val; /* _n_type on <self:ATypePropdef> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1530);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_ntype = var15;
{
var18 = nit___nit__ModelBuilder___resolve_mtype_unchecked(var_modelbuilder, var_mmodule, var_mclassdef, var_ntype, 1);
}
var_mtype = var18;
if (var_mtype == NULL) {
var19 = 1; /* is null */
} else {
var19 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
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
{
{ /* Inline model#MVirtualTypeDef#bound= (var_mpropdef,var_mtype) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var_mpropdef->attrs[COLOR_nit__model__MVirtualTypeDef___bound].val = var_mtype; /* _bound on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
RET_LABEL25:(void)0;
}
}
RET_LABEL:;
}
/* method modelize_property#ATypePropdef#check_signature for (self: ATypePropdef, ModelBuilder) */
void nit__modelize_property___ATypePropdef___APropdef__check_signature(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var /* : nullable MPropDef */;
val* var2 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MVirtualTypeDef */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable MType */;
val* var11 /* : nullable MType */;
val* var_bound /* var bound: nullable MType */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : AType */;
val* var20 /* : AType */;
val* var21 /* : MClassDef */;
val* var23 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var24 /* : MModule */;
val* var26 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var27 /* : MClassType */;
val* var29 /* : MClassType */;
val* var_anchor /* var anchor: MClassType */;
val* var30 /* : AType */;
val* var32 /* : AType */;
val* var_ntype /* var ntype: AType */;
val* var33 /* : nullable MType */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
val* var41 /* : MProperty */;
val* var43 /* : MProperty */;
val* var44 /* : Array[MPropDef] */;
val* var_ /* var : Array[MVirtualTypeDef] */;
val* var45 /* : ArrayIterator[nullable Object] */;
val* var_46 /* var : ArrayIterator[MVirtualTypeDef] */;
short int var47 /* : Bool */;
val* var48 /* : nullable Object */;
val* var_p /* var p: MVirtualTypeDef */;
val* var49 /* : nullable MType */;
val* var51 /* : nullable MType */;
val* var_supbound /* var supbound: nullable MType */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
short int var60 /* : Bool */;
val* var61 /* : NativeArray[String] */;
static val* varonce;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
val* var65 /* : FlatString */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
val* var69 /* : FlatString */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
val* var73 /* : FlatString */;
val* var74 /* : MProperty */;
val* var76 /* : MProperty */;
val* var77 /* : String */;
val* var78 /* : MClassDef */;
val* var80 /* : MClassDef */;
val* var81 /* : MClass */;
val* var83 /* : MClass */;
val* var84 /* : String */;
val* var85 /* : String */;
val* var86 /* : MClassDef */;
val* var88 /* : MClassDef */;
val* var89 /* : MClass */;
val* var91 /* : MClass */;
val* var92 /* : MClass */;
val* var94 /* : MClass */;
short int var95 /* : Bool */;
short int var97 /* : Bool */;
short int var99 /* : Bool */;
val* var100 /* : AType */;
val* var102 /* : AType */;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : NativeString */;
val* var106 /* : FlatString */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
val* var110 /* : FlatString */;
val* var111 /* : AType */;
val* var113 /* : AType */;
short int var114 /* : Bool */;
short int var115 /* : Bool */;
val* var116 /* : AType */;
val* var118 /* : AType */;
val* var120 /* : NativeArray[String] */;
static val* varonce119;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : NativeString */;
val* var124 /* : FlatString */;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : NativeString */;
val* var128 /* : FlatString */;
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : NativeString */;
val* var132 /* : FlatString */;
val* var133 /* : String */;
val* var134 /* : String */;
val* var135 /* : String */;
var_modelbuilder = p0;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:ATypePropdef> */
var2 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:ATypePropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mpropdef = var;
if (var_mpropdef == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MVirtualTypeDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var8 = var_mpropdef == var_other;
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
{ /* Inline model#MVirtualTypeDef#bound (var_mpropdef) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var11 = var_mpropdef->attrs[COLOR_nit__model__MVirtualTypeDef___bound].val; /* _bound on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_bound = var9;
if (var_bound == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_bound,((val*)NULL)) on <var_bound:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_bound,var_other) on <var_bound:nullable MType(MType)> */
var17 = var_bound == var_other;
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
{ /* Inline parser_nodes#ATypePropdef#n_type (self) on <self:ATypePropdef> */
var20 = self->attrs[COLOR_nit__parser_nodes__ATypePropdef___n_type].val; /* _n_type on <self:ATypePropdef> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1530);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
nit__modelize_property___ModelBuilder___check_visibility(var_modelbuilder, var18, var_bound, var_mpropdef); /* Direct call modelize_property#ModelBuilder#check_visibility on <var_modelbuilder:ModelBuilder>*/
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var23 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
var_mclassdef = var21;
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var26 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
var_mmodule = var24;
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var29 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_anchor = var27;
{
{ /* Inline parser_nodes#ATypePropdef#n_type (self) on <self:ATypePropdef> */
var32 = self->attrs[COLOR_nit__parser_nodes__ATypePropdef___n_type].val; /* _n_type on <self:ATypePropdef> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1530);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
var_ntype = var30;
{
var33 = nit___nit__ModelBuilder___resolve_mtype(var_modelbuilder, var_mmodule, var_mclassdef, var_ntype);
}
if (var33 == NULL) {
var34 = 1; /* is null */
} else {
var34 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var33,((val*)NULL)) on <var33:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var33,var_other) on <var33:nullable MType(MType)> */
var39 = var33 == var_other;
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
var34 = var35;
}
if (var34){
{
{ /* Inline model#MVirtualTypeDef#bound= (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var_mpropdef->attrs[COLOR_nit__model__MVirtualTypeDef___bound].val = ((val*)NULL); /* _bound on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
RET_LABEL40:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var43 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
var44 = nit___nit__MProperty___lookup_super_definitions(var41, var_mmodule, var_anchor);
}
var_ = var44;
{
var45 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_46 = var45;
for(;;) {
{
var47 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_46);
}
if (var47){
{
var48 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_46);
}
var_p = var48;
{
{ /* Inline model#MVirtualTypeDef#bound (var_p) on <var_p:MVirtualTypeDef> */
var51 = var_p->attrs[COLOR_nit__model__MVirtualTypeDef___bound].val; /* _bound on <var_p:MVirtualTypeDef> */
var49 = var51;
RET_LABEL50:(void)0;
}
}
var_supbound = var49;
if (var_supbound == NULL) {
var52 = 1; /* is null */
} else {
var52 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_supbound,((val*)NULL)) on <var_supbound:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_supbound,var_other) on <var_supbound:nullable MType(MType)> */
var57 = var_supbound == var_other;
var55 = var57;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
var52 = var53;
}
if (var52){
goto BREAK_label;
} else {
}
{
{ /* Inline model#MVirtualTypeDef#is_fixed (var_p) on <var_p:MVirtualTypeDef> */
var60 = var_p->attrs[COLOR_nit__model__MVirtualTypeDef___is_fixed].s; /* _is_fixed on <var_p:MVirtualTypeDef> */
var58 = var60;
RET_LABEL59:(void)0;
}
}
if (var58){
if (unlikely(varonce==NULL)) {
var61 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = "Redef Error: virtual type `";
var65 = standard___standard__NativeString___to_s_with_length(var64, 27l);
var63 = var65;
varonce62 = var63;
}
((struct instance_standard__NativeArray*)var61)->values[0]=var63;
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = "` is fixed in super-class `";
var69 = standard___standard__NativeString___to_s_with_length(var68, 27l);
var67 = var69;
varonce66 = var67;
}
((struct instance_standard__NativeArray*)var61)->values[2]=var67;
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = "`.";
var73 = standard___standard__NativeString___to_s_with_length(var72, 2l);
var71 = var73;
varonce70 = var71;
}
((struct instance_standard__NativeArray*)var61)->values[4]=var71;
} else {
var61 = varonce;
varonce = NULL;
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var76 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
var77 = ((val*(*)(val* self))(var74->class->vft[COLOR_standard__string__Object__to_s]))(var74); /* to_s on <var74:MProperty(MVirtualTypeProp)>*/
}
((struct instance_standard__NativeArray*)var61)->values[1]=var77;
{
{ /* Inline model#MPropDef#mclassdef (var_p) on <var_p:MVirtualTypeDef> */
var80 = var_p->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_p:MVirtualTypeDef> */
if (unlikely(var80 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var78) on <var78:MClassDef> */
var83 = var78->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var78:MClassDef> */
if (unlikely(var83 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
{
var84 = ((val*(*)(val* self))(var81->class->vft[COLOR_standard__string__Object__to_s]))(var81); /* to_s on <var81:MClass>*/
}
((struct instance_standard__NativeArray*)var61)->values[3]=var84;
{
var85 = ((val*(*)(val* self))(var61->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var61); /* native_to_s on <var61:NativeArray[String]>*/
}
varonce = var61;
{
nit___nit__ModelBuilder___error(var_modelbuilder, self, var85); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label;
} else {
}
{
{ /* Inline model#MPropDef#mclassdef (var_p) on <var_p:MVirtualTypeDef> */
var88 = var_p->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_p:MVirtualTypeDef> */
if (unlikely(var88 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var86 = var88;
RET_LABEL87:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var86) on <var86:MClassDef> */
var91 = var86->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var86:MClassDef> */
if (unlikely(var91 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var89 = var91;
RET_LABEL90:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var94 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var94 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var92 = var94;
RET_LABEL93:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var89,var92) on <var89:MClass> */
var_other = var92;
{
{ /* Inline kernel#Object#is_same_instance (var89,var_other) on <var89:MClass> */
var99 = var89 == var_other;
var97 = var99;
goto RET_LABEL98;
RET_LABEL98:(void)0;
}
}
var95 = var97;
goto RET_LABEL96;
RET_LABEL96:(void)0;
}
}
if (var95){
{
{ /* Inline parser_nodes#ATypePropdef#n_type (self) on <self:ATypePropdef> */
var102 = self->attrs[COLOR_nit__parser_nodes__ATypePropdef___n_type].val; /* _n_type on <self:ATypePropdef> */
if (unlikely(var102 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1530);
fatal_exit(1);
}
var100 = var102;
RET_LABEL101:(void)0;
}
}
if (likely(varonce103!=NULL)) {
var104 = varonce103;
} else {
var105 = "refine-type";
var106 = standard___standard__NativeString___to_s_with_length(var105, 11l);
var104 = var106;
varonce103 = var104;
}
if (likely(varonce107!=NULL)) {
var108 = varonce107;
} else {
var109 = "Redef Error: a virtual type cannot be refined.";
var110 = standard___standard__NativeString___to_s_with_length(var109, 46l);
var108 = var110;
varonce107 = var108;
}
{
nit___nit__ModelBuilder___warning(var_modelbuilder, var100, var104, var108); /* Direct call modelbuilder_base#ModelBuilder#warning on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label;
} else {
}
{
{ /* Inline parser_nodes#ATypePropdef#n_type (self) on <self:ATypePropdef> */
var113 = self->attrs[COLOR_nit__parser_nodes__ATypePropdef___n_type].val; /* _n_type on <self:ATypePropdef> */
if (unlikely(var113 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1530);
fatal_exit(1);
}
var111 = var113;
RET_LABEL112:(void)0;
}
}
{
var114 = nit___nit__ModelBuilder___check_subtype(var_modelbuilder, var111, var_mmodule, var_anchor, var_bound, var_supbound);
}
var115 = !var114;
if (var115){
{
{ /* Inline parser_nodes#ATypePropdef#n_type (self) on <self:ATypePropdef> */
var118 = self->attrs[COLOR_nit__parser_nodes__ATypePropdef___n_type].val; /* _n_type on <self:ATypePropdef> */
if (unlikely(var118 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1530);
fatal_exit(1);
}
var116 = var118;
RET_LABEL117:(void)0;
}
}
if (unlikely(varonce119==NULL)) {
var120 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce121!=NULL)) {
var122 = varonce121;
} else {
var123 = "Redef Error: expected `";
var124 = standard___standard__NativeString___to_s_with_length(var123, 23l);
var122 = var124;
varonce121 = var122;
}
((struct instance_standard__NativeArray*)var120)->values[0]=var122;
if (likely(varonce125!=NULL)) {
var126 = varonce125;
} else {
var127 = "` bound type; got `";
var128 = standard___standard__NativeString___to_s_with_length(var127, 19l);
var126 = var128;
varonce125 = var126;
}
((struct instance_standard__NativeArray*)var120)->values[2]=var126;
if (likely(varonce129!=NULL)) {
var130 = varonce129;
} else {
var131 = "`.";
var132 = standard___standard__NativeString___to_s_with_length(var131, 2l);
var130 = var132;
varonce129 = var130;
}
((struct instance_standard__NativeArray*)var120)->values[4]=var130;
} else {
var120 = varonce119;
varonce119 = NULL;
}
{
var133 = ((val*(*)(val* self))(var_supbound->class->vft[COLOR_standard__string__Object__to_s]))(var_supbound); /* to_s on <var_supbound:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var120)->values[1]=var133;
{
var134 = ((val*(*)(val* self))(var_bound->class->vft[COLOR_standard__string__Object__to_s]))(var_bound); /* to_s on <var_bound:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var120)->values[3]=var134;
{
var135 = ((val*(*)(val* self))(var120->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var120); /* native_to_s on <var120:NativeArray[String]>*/
}
varonce119 = var120;
{
nit___nit__ModelBuilder___error(var_modelbuilder, var116, var135); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label;
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_46); /* Direct call array#ArrayIterator#next on <var_46:ArrayIterator[MVirtualTypeDef]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_46); /* Direct call array#ArrayIterator#finish on <var_46:ArrayIterator[MVirtualTypeDef]>*/
}
RET_LABEL:;
}
