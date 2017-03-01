#include "nitc__modelize_property.sep.0.h"
/* method modelize_property$ASignature$visit_signature for (self: ASignature, ModelBuilder, MClassDef): Bool */
short int nitc__modelize_property___ASignature___visit_signature(val* self, val* p0, val* p1) {
short int var /* : Bool */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var1 /* : MModule */;
val* var3 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var4 /* : Array[String] */;
val* var6 /* : Array[String] */;
val* var_param_names /* var param_names: Array[String] */;
val* var7 /* : Array[MType] */;
val* var9 /* : Array[MType] */;
val* var_param_types /* var param_types: Array[MType] */;
val* var10 /* : ANodes[AParam] */;
val* var12 /* : ANodes[AParam] */;
val* var_ /* var : ANodes[AParam] */;
val* var13 /* : Iterator[ANode] */;
val* var_14 /* var : Iterator[AParam] */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
val* var_np /* var np: AParam */;
val* var17 /* : TId */;
val* var19 /* : TId */;
val* var20 /* : String */;
val* var21 /* : nullable AType */;
val* var23 /* : nullable AType */;
val* var_ntype /* var ntype: nullable AType */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var_other33 /* var other: nullable Object */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
long var_i /* var i: Int */;
long var37 /* : Int */;
long var39 /* : Int */;
long var40 /* : Int */;
long var42 /* : Int */;
long var43 /* : Int */;
short int var45 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var46 /* : Int */;
long var_47 /* var : Int */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const char* var_class_name53;
short int var54 /* : Bool */;
long var56 /* : Int */;
val* var57 /* : nullable TDotdotdot */;
val* var59 /* : nullable TDotdotdot */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
long var65 /* : Int */;
long var67 /* : Int */;
long var68 /* : Int */;
long var70 /* : Int */;
short int var71 /* : Bool */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
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
long var92 /* : Int */;
long var94 /* : Int */;
val* var95 /* : nullable Object */;
val* var96 /* : String */;
long var97 /* : Int */;
long var99 /* : Int */;
long var100 /* : Int */;
short int var102 /* : Bool */;
int cltype103;
int idtype104;
const char* var_class_name105;
long var106 /* : Int */;
val* var108 /* : nullable AType */;
val* var110 /* : nullable AType */;
val* var_ntype111 /* var ntype: nullable AType */;
short int var112 /* : Bool */;
short int var113 /* : Bool */;
short int var115 /* : Bool */;
short int var116 /* : Bool */;
val* var117 /* : nullable MType */;
val* var119 /* : nullable MType */;
val* var121 /* : nullable MType */;
short int var122 /* : Bool */;
short int var123 /* : Bool */;
short int var125 /* : Bool */;
short int var127 /* : Bool */;
var_modelbuilder = p0;
var_mclassdef = p1;
{
{ /* Inline model$MClassDef$mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var3 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_mmodule = var1;
{
{ /* Inline modelize_property$ASignature$param_names (self) on <self:ASignature> */
var6 = self->attrs[COLOR_nitc__modelize_property__ASignature___param_names].val; /* _param_names on <self:ASignature> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _param_names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 659);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_param_names = var4;
{
{ /* Inline modelize_property$ASignature$param_types (self) on <self:ASignature> */
var9 = self->attrs[COLOR_nitc__modelize_property__ASignature___param_types].val; /* _param_types on <self:ASignature> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _param_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 662);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_param_types = var7;
{
{ /* Inline parser_nodes$ASignature$n_params (self) on <self:ASignature> */
var12 = self->attrs[COLOR_nitc__parser_nodes__ASignature___n_params].val; /* _n_params on <self:ASignature> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1746);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_ = var10;
{
var13 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_);
}
var_14 = var13;
for(;;) {
{
var15 = ((short int(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_14); /* is_ok on <var_14:Iterator[AParam]>*/
}
if (var15){
} else {
goto BREAK_label;
}
{
var16 = ((val*(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_14); /* item on <var_14:Iterator[AParam]>*/
}
var_np = var16;
{
{ /* Inline parser_nodes$AParam$n_id (var_np) on <var_np:AParam> */
var19 = var_np->attrs[COLOR_nitc__parser_nodes__AParam___n_id].val; /* _n_id on <var_np:AParam> */
if (unlikely(var19 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1760);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = nitc__lexer_work___Token___text(var17);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_param_names, var20); /* Direct call array$Array$add on <var_param_names:Array[String]>*/
}
{
{ /* Inline parser_nodes$AParam$n_type (var_np) on <var_np:AParam> */
var23 = var_np->attrs[COLOR_nitc__parser_nodes__AParam___n_type].val; /* _n_type on <var_np:AParam> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
var_ntype = var21;
if (var_ntype == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_ntype,((val*)NULL)) on <var_ntype:nullable AType> */
var_other = ((val*)NULL);
{
var27 = ((short int(*)(val* self, val* p0))(var_ntype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ntype, var_other); /* == on <var_ntype:nullable AType(AType)>*/
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
var29 = nitc___nitc__ModelBuilder___resolve_mtype_unchecked(var_modelbuilder, var_mmodule, var_mclassdef, var_ntype, 1);
}
var_mtype = var29;
if (var_mtype == NULL) {
var30 = 1; /* is null */
} else {
var30 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other33 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mtype,var_other33) on <var_mtype:nullable MType(MType)> */
var36 = var_mtype == var_other33;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var31 = var34;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
var30 = var31;
}
if (var30){
var = 0;
goto RET_LABEL;
} else {
}
var_i = 0l;
{
{ /* Inline array$AbstractArrayRead$length (var_param_names) on <var_param_names:Array[String]> */
var39 = var_param_names->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_param_names:Array[String]> */
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline array$AbstractArrayRead$length (var_param_types) on <var_param_types:Array[MType]> */
var42 = var_param_types->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_param_types:Array[MType]> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var37,var40) on <var37:Int> */
/* Covariant cast for argument 0 (i) <var40:Int> isa OTHER */
/* <var40:Int> isa OTHER */
var45 = 1; /* easy <var40:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var46 = var37 - var40;
var43 = var46;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
var_47 = var43;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_47) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_47:Int> isa OTHER */
/* <var_47:Int> isa OTHER */
var50 = 1; /* easy <var_47:Int> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var54 = var_i < var_47;
var48 = var54;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
if (var48){
} else {
goto BREAK_label55;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_param_types, var_mtype); /* Direct call array$Array$add on <var_param_types:Array[MType]>*/
}
{
var56 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var56;
}
BREAK_label55: (void)0;
{
{ /* Inline parser_nodes$AParam$n_dotdotdot (var_np) on <var_np:AParam> */
var59 = var_np->attrs[COLOR_nitc__parser_nodes__AParam___n_dotdotdot].val; /* _n_dotdotdot on <var_np:AParam> */
var57 = var59;
RET_LABEL58:(void)0;
}
}
if (var57 == NULL) {
var60 = 0; /* is null */
} else {
var60 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var57,((val*)NULL)) on <var57:nullable TDotdotdot> */
var_other = ((val*)NULL);
{
var63 = ((short int(*)(val* self, val* p0))(var57->class->vft[COLOR_core__kernel__Object___61d_61d]))(var57, var_other); /* == on <var57:nullable TDotdotdot(TDotdotdot)>*/
}
var64 = !var63;
var61 = var64;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
var60 = var61;
}
if (var60){
{
{ /* Inline modelize_property$ASignature$vararg_rank (self) on <self:ASignature> */
var67 = self->attrs[COLOR_nitc__modelize_property__ASignature___vararg_rank].l; /* _vararg_rank on <self:ASignature> */
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var70 = -1l;
var68 = var70;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
{
{ /* Inline kernel$Int$!= (var65,var68) on <var65:Int> */
var73 = var65 == var68;
var74 = !var73;
var71 = var74;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
if (var71){
if (unlikely(varonce==NULL)) {
var75 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce76!=NULL)) {
var77 = varonce76;
} else {
var78 = "Error: `";
var80 = (val*)(8l<<2|1);
var81 = (val*)(8l<<2|1);
var82 = (val*)((long)(0)<<2|3);
var83 = (val*)((long)(0)<<2|3);
var79 = core__flat___CString___to_s_unsafe(var78, var80, var81, var82, var83);
var77 = var79;
varonce76 = var77;
}
((struct instance_core__NativeArray*)var75)->values[0]=var77;
if (likely(varonce84!=NULL)) {
var85 = varonce84;
} else {
var86 = "` is already a vararg";
var88 = (val*)(21l<<2|1);
var89 = (val*)(21l<<2|1);
var90 = (val*)((long)(0)<<2|3);
var91 = (val*)((long)(0)<<2|3);
var87 = core__flat___CString___to_s_unsafe(var86, var88, var89, var90, var91);
var85 = var87;
varonce84 = var85;
}
((struct instance_core__NativeArray*)var75)->values[2]=var85;
} else {
var75 = varonce;
varonce = NULL;
}
{
{ /* Inline modelize_property$ASignature$vararg_rank (self) on <self:ASignature> */
var94 = self->attrs[COLOR_nitc__modelize_property__ASignature___vararg_rank].l; /* _vararg_rank on <self:ASignature> */
var92 = var94;
RET_LABEL93:(void)0;
}
}
{
var95 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_param_names, var92);
}
((struct instance_core__NativeArray*)var75)->values[1]=var95;
{
var96 = ((val*(*)(val* self))(var75->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var75); /* native_to_s on <var75:NativeArray[String]>*/
}
varonce = var75;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_np, var96); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
var = 0;
goto RET_LABEL;
} else {
{
{ /* Inline array$AbstractArrayRead$length (var_param_names) on <var_param_names:Array[String]> */
var99 = var_param_names->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_param_names:Array[String]> */
var97 = var99;
RET_LABEL98:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var97,1l) on <var97:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var102 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var102)) {
var_class_name105 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name105);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var106 = var97 - 1l;
var100 = var106;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
}
{
{ /* Inline modelize_property$ASignature$vararg_rank= (self,var100) on <self:ASignature> */
self->attrs[COLOR_nitc__modelize_property__ASignature___vararg_rank].l = var100; /* _vararg_rank on <self:ASignature> */
RET_LABEL107:(void)0;
}
}
}
} else {
}
} else {
}
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_14); /* next on <var_14:Iterator[AParam]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_14); /* finish on <var_14:Iterator[AParam]>*/
}
{
{ /* Inline parser_nodes$ASignature$n_type (self) on <self:ASignature> */
var110 = self->attrs[COLOR_nitc__parser_nodes__ASignature___n_type].val; /* _n_type on <self:ASignature> */
var108 = var110;
RET_LABEL109:(void)0;
}
}
var_ntype111 = var108;
if (var_ntype111 == NULL) {
var112 = 0; /* is null */
} else {
var112 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_ntype111,((val*)NULL)) on <var_ntype111:nullable AType> */
var_other = ((val*)NULL);
{
var115 = ((short int(*)(val* self, val* p0))(var_ntype111->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ntype111, var_other); /* == on <var_ntype111:nullable AType(AType)>*/
}
var116 = !var115;
var113 = var116;
goto RET_LABEL114;
RET_LABEL114:(void)0;
}
var112 = var113;
}
if (var112){
{
var117 = nitc___nitc__ModelBuilder___resolve_mtype_unchecked(var_modelbuilder, var_mmodule, var_mclassdef, var_ntype111, 1);
}
{
{ /* Inline modelize_property$ASignature$ret_type= (self,var117) on <self:ASignature> */
self->attrs[COLOR_nitc__modelize_property__ASignature___ret_type].val = var117; /* _ret_type on <self:ASignature> */
RET_LABEL118:(void)0;
}
}
{
{ /* Inline modelize_property$ASignature$ret_type (self) on <self:ASignature> */
var121 = self->attrs[COLOR_nitc__modelize_property__ASignature___ret_type].val; /* _ret_type on <self:ASignature> */
var119 = var121;
RET_LABEL120:(void)0;
}
}
if (var119 == NULL) {
var122 = 1; /* is null */
} else {
var122 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var119,((val*)NULL)) on <var119:nullable MType> */
var_other33 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var119,var_other33) on <var119:nullable MType(MType)> */
var127 = var119 == var_other33;
var125 = var127;
goto RET_LABEL126;
RET_LABEL126:(void)0;
}
}
var123 = var125;
goto RET_LABEL124;
RET_LABEL124:(void)0;
}
var122 = var123;
}
if (var122){
var = 0;
goto RET_LABEL;
} else {
}
} else {
}
{
{ /* Inline modelize_property$ASignature$is_visited= (self,1) on <self:ASignature> */
self->attrs[COLOR_nitc__modelize_property__ASignature___is_visited].s = 1; /* _is_visited on <self:ASignature> */
RET_LABEL128:(void)0;
}
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property$ASignature$check_signature for (self: ASignature, ModelBuilder, MClassDef): Bool */
short int nitc__modelize_property___ASignature___check_signature(val* self, val* p0, val* p1) {
short int var /* : Bool */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_mclassdef /* var mclassdef: MClassDef */;
short int var_res /* var res: Bool */;
val* var1 /* : ANodes[AParam] */;
val* var3 /* : ANodes[AParam] */;
val* var_ /* var : ANodes[AParam] */;
val* var4 /* : Iterator[ANode] */;
val* var_5 /* var : Iterator[AParam] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_np /* var np: AParam */;
val* var8 /* : nullable AType */;
val* var10 /* : nullable AType */;
val* var_ntype /* var ntype: nullable AType */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : MModule */;
val* var18 /* : MModule */;
val* var19 /* : nullable MType */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var_other23 /* var other: nullable Object */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : nullable AType */;
val* var29 /* : nullable AType */;
val* var_ntype30 /* var ntype: nullable AType */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
val* var36 /* : MModule */;
val* var38 /* : MModule */;
val* var39 /* : nullable MType */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
var_modelbuilder = p0;
var_mclassdef = p1;
var_res = 1;
{
{ /* Inline parser_nodes$ASignature$n_params (self) on <self:ASignature> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ASignature___n_params].val; /* _n_params on <self:ASignature> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1746);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_ = var1;
{
var4 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_);
}
var_5 = var4;
for(;;) {
{
var6 = ((short int(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_5); /* is_ok on <var_5:Iterator[AParam]>*/
}
if (var6){
} else {
goto BREAK_label;
}
{
var7 = ((val*(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_5); /* item on <var_5:Iterator[AParam]>*/
}
var_np = var7;
{
{ /* Inline parser_nodes$AParam$n_type (var_np) on <var_np:AParam> */
var10 = var_np->attrs[COLOR_nitc__parser_nodes__AParam___n_type].val; /* _n_type on <var_np:AParam> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_ntype = var8;
if (var_ntype == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_ntype,((val*)NULL)) on <var_ntype:nullable AType> */
var_other = ((val*)NULL);
{
var14 = ((short int(*)(val* self, val* p0))(var_ntype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ntype, var_other); /* == on <var_ntype:nullable AType(AType)>*/
}
var15 = !var14;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
if (var11){
{
{ /* Inline model$MClassDef$mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var18 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = nitc___nitc__ModelBuilder___resolve_mtype(var_modelbuilder, var16, var_mclassdef, var_ntype);
}
if (var19 == NULL) {
var20 = 1; /* is null */
} else {
var20 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var19,((val*)NULL)) on <var19:nullable MType> */
var_other23 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var19,var_other23) on <var19:nullable MType(MType)> */
var26 = var19 == var_other23;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var21 = var24;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (var20){
var_res = 0;
} else {
}
} else {
}
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_5); /* next on <var_5:Iterator[AParam]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_5); /* finish on <var_5:Iterator[AParam]>*/
}
{
{ /* Inline parser_nodes$ASignature$n_type (self) on <self:ASignature> */
var29 = self->attrs[COLOR_nitc__parser_nodes__ASignature___n_type].val; /* _n_type on <self:ASignature> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_ntype30 = var27;
if (var_ntype30 == NULL) {
var31 = 0; /* is null */
} else {
var31 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_ntype30,((val*)NULL)) on <var_ntype30:nullable AType> */
var_other = ((val*)NULL);
{
var34 = ((short int(*)(val* self, val* p0))(var_ntype30->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ntype30, var_other); /* == on <var_ntype30:nullable AType(AType)>*/
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
{ /* Inline model$MClassDef$mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var38 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var38 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
var39 = nitc___nitc__ModelBuilder___resolve_mtype(var_modelbuilder, var36, var_mclassdef, var_ntype30);
}
if (var39 == NULL) {
var40 = 1; /* is null */
} else {
var40 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var39,((val*)NULL)) on <var39:nullable MType> */
var_other23 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var39,var_other23) on <var39:nullable MType(MType)> */
var45 = var39 == var_other23;
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
var_res = 0;
} else {
}
} else {
}
var46 = !var_res;
if (var46){
{
{ /* Inline modelbuilder_base$ANode$is_broken= (self,1) on <self:ASignature> */
self->attrs[COLOR_nitc__modelbuilder_base__ANode___is_broken].s = 1; /* _is_broken on <self:ASignature> */
RET_LABEL47:(void)0;
}
}
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property$AParam$mparameter= for (self: AParam, nullable MParameter) */
void nitc__modelize_property___AParam___mparameter_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__modelize_property__AParam___mparameter].val = p0; /* _mparameter on <self:AParam> */
RET_LABEL:;
}
/* method modelize_property$AMethPropdef$is_autoinit for (self: AMethPropdef): Bool */
short int nitc__modelize_property___AMethPropdef___is_autoinit(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__modelize_property__AMethPropdef___is_autoinit].s; /* _is_autoinit on <self:AMethPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property$AMethPropdef$is_autoinit= for (self: AMethPropdef, Bool) */
void nitc__modelize_property___AMethPropdef___is_autoinit_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__modelize_property__AMethPropdef___is_autoinit].s = p0; /* _is_autoinit on <self:AMethPropdef> */
RET_LABEL:;
}
/* method modelize_property$AMethPropdef$look_like_a_root_init for (self: AMethPropdef, ModelBuilder, MClassDef): Bool */
short int nitc__modelize_property___AMethPropdef___look_like_a_root_init(val* self, val* p0, val* p1) {
short int var /* : Bool */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var1 /* : nullable TKwinit */;
val* var3 /* : nullable TKwinit */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable AMethid */;
val* var12 /* : nullable AMethid */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var_other16 /* var other: nullable Object */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
static val* varonce;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Bool */;
val* var25 /* : nullable Bool */;
val* var26 /* : nullable AAnnotation */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var32 /* : nullable ANode */;
val* var34 /* : nullable ANode */;
val* var35 /* : nullable ANode */;
val* var37 /* : nullable ANode */;
short int var38 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_amod /* var amod: AModule */;
val* var39 /* : nullable AModuledecl */;
val* var41 /* : nullable AModuledecl */;
val* var_amoddecl /* var amoddecl: nullable AModuledecl */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : CString */;
val* var50 /* : String */;
val* var51 /* : nullable Int */;
val* var52 /* : nullable Int */;
val* var53 /* : nullable Bool */;
val* var54 /* : nullable Bool */;
val* var55 /* : nullable AAnnotation */;
val* var_old /* var old: nullable AAnnotation */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
val* var61 /* : nullable ASignature */;
val* var63 /* : nullable ASignature */;
val* var64 /* : ANodes[AParam] */;
val* var66 /* : ANodes[AParam] */;
long var67 /* : Int */;
short int var68 /* : Bool */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const char* var_class_name73;
short int var74 /* : Bool */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : CString */;
val* var78 /* : String */;
val* var79 /* : nullable Int */;
val* var80 /* : nullable Int */;
val* var81 /* : nullable Bool */;
val* var82 /* : nullable Bool */;
val* var84 /* : NativeArray[String] */;
static val* varonce83;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : CString */;
val* var88 /* : String */;
val* var89 /* : nullable Int */;
val* var90 /* : nullable Int */;
val* var91 /* : nullable Bool */;
val* var92 /* : nullable Bool */;
val* var93 /* : String */;
val* var94 /* : String */;
val* var95 /* : nullable AVisibility */;
val* var97 /* : nullable AVisibility */;
short int var98 /* : Bool */;
int cltype99;
int idtype100;
short int var101 /* : Bool */;
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
val* var120 /* : String */;
val* var121 /* : String */;
var_modelbuilder = p0;
var_mclassdef = p1;
{
{ /* Inline parser_nodes$AMethPropdef$n_kwinit (self) on <self:AMethPropdef> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_kwinit].val; /* _n_kwinit on <self:AMethPropdef> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var1,((val*)NULL)) on <var1:nullable TKwinit> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var1,var_other) on <var1:nullable TKwinit(TKwinit)> */
var9 = var1 == var_other;
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
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes$AMethPropdef$n_methid (self) on <self:AMethPropdef> */
var12 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (var10 == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var10,((val*)NULL)) on <var10:nullable AMethid> */
var_other16 = ((val*)NULL);
{
var17 = ((short int(*)(val* self, val* p0))(var10->class->vft[COLOR_core__kernel__Object___61d_61d]))(var10, var_other16); /* == on <var10:nullable AMethid(AMethid)>*/
}
var18 = !var17;
var14 = var18;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
if (var13){
var = 0;
goto RET_LABEL;
} else {
}
if (likely(varonce!=NULL)) {
var19 = varonce;
} else {
var20 = "old_style_init";
var22 = (val*)(14l<<2|1);
var23 = (val*)(14l<<2|1);
var24 = (val*)((long)(0)<<2|3);
var25 = (val*)((long)(0)<<2|3);
var21 = core__flat___CString___to_s_unsafe(var20, var22, var23, var24, var25);
var19 = var21;
varonce = var19;
}
{
var26 = nitc__annotation___Prod___get_single_annotation(self, var19, var_modelbuilder);
}
if (var26 == NULL) {
var27 = 0; /* is null */
} else {
var27 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var26,((val*)NULL)) on <var26:nullable AAnnotation> */
var_other16 = ((val*)NULL);
{
var30 = ((short int(*)(val* self, val* p0))(var26->class->vft[COLOR_core__kernel__Object___61d_61d]))(var26, var_other16); /* == on <var26:nullable AAnnotation(AAnnotation)>*/
}
var31 = !var30;
var28 = var31;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
var27 = var28;
}
if (var27){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes$ANode$parent (self) on <self:AMethPropdef> */
var34 = self->attrs[COLOR_nitc__parser_nodes__ANode___parent].val; /* _parent on <self:AMethPropdef> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
if (var32 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 749);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$parent (var32) on <var32:nullable ANode> */
if (unlikely(var32 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var37 = var32->attrs[COLOR_nitc__parser_nodes__ANode___parent].val; /* _parent on <var32:nullable ANode> */
var35 = var37;
RET_LABEL36:(void)0;
}
}
/* <var35:nullable ANode> isa AModule */
cltype = type_nitc__AModule.color;
idtype = type_nitc__AModule.id;
if(var35 == NULL) {
var38 = 0;
} else {
if(cltype >= var35->type->table_size) {
var38 = 0;
} else {
var38 = var35->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var38)) {
var_class_name = var35 == NULL ? "null" : var35->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AModule", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 749);
fatal_exit(1);
}
var_amod = var35;
{
{ /* Inline parser_nodes$AModule$n_moduledecl (var_amod) on <var_amod:AModule> */
var41 = var_amod->attrs[COLOR_nitc__parser_nodes__AModule___n_moduledecl].val; /* _n_moduledecl on <var_amod:AModule> */
var39 = var41;
RET_LABEL40:(void)0;
}
}
var_amoddecl = var39;
if (var_amoddecl == NULL) {
var42 = 0; /* is null */
} else {
var42 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_amoddecl,((val*)NULL)) on <var_amoddecl:nullable AModuledecl> */
var_other16 = ((val*)NULL);
{
var45 = ((short int(*)(val* self, val* p0))(var_amoddecl->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_amoddecl, var_other16); /* == on <var_amoddecl:nullable AModuledecl(AModuledecl)>*/
}
var46 = !var45;
var43 = var46;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
var42 = var43;
}
if (var42){
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "old_style_init";
var51 = (val*)(14l<<2|1);
var52 = (val*)(14l<<2|1);
var53 = (val*)((long)(0)<<2|3);
var54 = (val*)((long)(0)<<2|3);
var50 = core__flat___CString___to_s_unsafe(var49, var51, var52, var53, var54);
var48 = var50;
varonce47 = var48;
}
{
var55 = nitc__annotation___Prod___get_single_annotation(var_amoddecl, var48, var_modelbuilder);
}
var_old = var55;
if (var_old == NULL) {
var56 = 0; /* is null */
} else {
var56 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_old,((val*)NULL)) on <var_old:nullable AAnnotation> */
var_other16 = ((val*)NULL);
{
var59 = ((short int(*)(val* self, val* p0))(var_old->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_old, var_other16); /* == on <var_old:nullable AAnnotation(AAnnotation)>*/
}
var60 = !var59;
var57 = var60;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
var56 = var57;
}
if (var56){
var = 0;
goto RET_LABEL;
} else {
}
} else {
}
{
{ /* Inline parser_nodes$AMethPropdef$n_signature (self) on <self:AMethPropdef> */
var63 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var61 = var63;
RET_LABEL62:(void)0;
}
}
if (var61 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 756);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ASignature$n_params (var61) on <var61:nullable ASignature> */
if (unlikely(var61 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1746);
fatal_exit(1);
}
var66 = var61->attrs[COLOR_nitc__parser_nodes__ASignature___n_params].val; /* _n_params on <var61:nullable ASignature> */
if (unlikely(var66 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1746);
fatal_exit(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
var67 = nitc___nitc__ANodes___core__abstract_collection__Collection__length(var64);
}
{
{ /* Inline kernel$Int$> (var67,0l) on <var67:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var70 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var70)) {
var_class_name73 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var74 = var67 > 0l;
var68 = var74;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
if (var68){
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = "old-init";
var79 = (val*)(8l<<2|1);
var80 = (val*)(8l<<2|1);
var81 = (val*)((long)(0)<<2|3);
var82 = (val*)((long)(0)<<2|3);
var78 = core__flat___CString___to_s_unsafe(var77, var79, var80, var81, var82);
var76 = var78;
varonce75 = var76;
}
if (unlikely(varonce83==NULL)) {
var84 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce85!=NULL)) {
var86 = varonce85;
} else {
var87 = "Warning: init with signature in ";
var89 = (val*)(32l<<2|1);
var90 = (val*)(32l<<2|1);
var91 = (val*)((long)(0)<<2|3);
var92 = (val*)((long)(0)<<2|3);
var88 = core__flat___CString___to_s_unsafe(var87, var89, var90, var91, var92);
var86 = var88;
varonce85 = var86;
}
((struct instance_core__NativeArray*)var84)->values[0]=var86;
} else {
var84 = varonce83;
varonce83 = NULL;
}
{
var93 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:MClassDef>*/
}
((struct instance_core__NativeArray*)var84)->values[1]=var93;
{
var94 = ((val*(*)(val* self))(var84->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var84); /* native_to_s on <var84:NativeArray[String]>*/
}
varonce83 = var84;
{
nitc___nitc__ModelBuilder___advice(var_modelbuilder, self, var76, var94); /* Direct call modelbuilder_base$ModelBuilder$advice on <var_modelbuilder:ModelBuilder>*/
}
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes$ADefinition$n_visibility (self) on <self:AMethPropdef> */
var97 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AMethPropdef> */
var95 = var97;
RET_LABEL96:(void)0;
}
}
/* <var95:nullable AVisibility> isa APublicVisibility */
cltype99 = type_nitc__APublicVisibility.color;
idtype100 = type_nitc__APublicVisibility.id;
if(var95 == NULL) {
var98 = 0;
} else {
if(cltype99 >= var95->type->table_size) {
var98 = 0;
} else {
var98 = var95->type->type_table[cltype99] == idtype100;
}
}
var101 = !var98;
if (var101){
if (likely(varonce102!=NULL)) {
var103 = varonce102;
} else {
var104 = "old-init";
var106 = (val*)(8l<<2|1);
var107 = (val*)(8l<<2|1);
var108 = (val*)((long)(0)<<2|3);
var109 = (val*)((long)(0)<<2|3);
var105 = core__flat___CString___to_s_unsafe(var104, var106, var107, var108, var109);
var103 = var105;
varonce102 = var103;
}
if (unlikely(varonce110==NULL)) {
var111 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce112!=NULL)) {
var113 = varonce112;
} else {
var114 = "Warning: non-public init in ";
var116 = (val*)(28l<<2|1);
var117 = (val*)(28l<<2|1);
var118 = (val*)((long)(0)<<2|3);
var119 = (val*)((long)(0)<<2|3);
var115 = core__flat___CString___to_s_unsafe(var114, var116, var117, var118, var119);
var113 = var115;
varonce112 = var113;
}
((struct instance_core__NativeArray*)var111)->values[0]=var113;
} else {
var111 = varonce110;
varonce110 = NULL;
}
{
var120 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:MClassDef>*/
}
((struct instance_core__NativeArray*)var111)->values[1]=var120;
{
var121 = ((val*(*)(val* self))(var111->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var111); /* native_to_s on <var111:NativeArray[String]>*/
}
varonce110 = var111;
{
nitc___nitc__ModelBuilder___advice(var_modelbuilder, self, var103, var121); /* Direct call modelbuilder_base$ModelBuilder$advice on <var_modelbuilder:ModelBuilder>*/
}
var = 0;
goto RET_LABEL;
} else {
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property$AMethPropdef$build_property for (self: AMethPropdef, ModelBuilder, MClassDef) */
void nitc__modelize_property___AMethPropdef___APropdef__build_property(val* self, val* p0, val* p1) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var /* : nullable TKwinit */;
val* var2 /* : nullable TKwinit */;
val* var_n_kwinit /* var n_kwinit: nullable TKwinit */;
val* var3 /* : nullable TKwnew */;
val* var5 /* : nullable TKwnew */;
val* var_n_kwnew /* var n_kwnew: nullable TKwnew */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var_ /* var : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var_is_init /* var is_init: Bool */;
val* var17 /* : nullable AMethid */;
val* var19 /* : nullable AMethid */;
val* var_amethodid /* var amethodid: nullable AMethid */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var_other23 /* var other: nullable Object */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
static val* varonce;
val* var28 /* : String */;
char* var29 /* : CString */;
val* var30 /* : String */;
val* var31 /* : nullable Int */;
val* var32 /* : nullable Int */;
val* var33 /* : nullable Bool */;
val* var34 /* : nullable Bool */;
val* var_name /* var name: String */;
val* var_name_node /* var name_node: ANode */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : CString */;
val* var43 /* : String */;
val* var44 /* : nullable Int */;
val* var45 /* : nullable Int */;
val* var46 /* : nullable Bool */;
val* var47 /* : nullable Bool */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : CString */;
val* var56 /* : String */;
val* var57 /* : nullable Int */;
val* var58 /* : nullable Int */;
val* var59 /* : nullable Bool */;
val* var60 /* : nullable Bool */;
short int var61 /* : Bool */;
int cltype;
int idtype;
val* var62 /* : TId */;
val* var64 /* : TId */;
val* var65 /* : String */;
val* var66 /* : String */;
val* var67 /* : nullable ASignature */;
val* var69 /* : nullable ASignature */;
val* var70 /* : ANodes[AParam] */;
val* var72 /* : ANodes[AParam] */;
long var73 /* : Int */;
long var_arity /* var arity: Int */;
short int var74 /* : Bool */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : CString */;
val* var78 /* : String */;
val* var79 /* : nullable Int */;
val* var80 /* : nullable Int */;
val* var81 /* : nullable Bool */;
val* var82 /* : nullable Bool */;
short int var83 /* : Bool */;
short int var_84 /* var : Bool */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : CString */;
val* var91 /* : String */;
val* var92 /* : nullable Int */;
val* var93 /* : nullable Int */;
val* var94 /* : nullable Bool */;
val* var95 /* : nullable Bool */;
short int var96 /* : Bool */;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : CString */;
val* var100 /* : String */;
val* var101 /* : nullable Int */;
val* var102 /* : nullable Int */;
val* var103 /* : nullable Bool */;
val* var104 /* : nullable Bool */;
short int var105 /* : Bool */;
short int var_106 /* var : Bool */;
short int var107 /* : Bool */;
short int var109 /* : Bool */;
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : CString */;
val* var113 /* : String */;
val* var114 /* : nullable Int */;
val* var115 /* : nullable Int */;
val* var116 /* : nullable Bool */;
val* var117 /* : nullable Bool */;
short int var118 /* : Bool */;
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : CString */;
val* var122 /* : String */;
val* var123 /* : nullable Int */;
val* var124 /* : nullable Int */;
val* var125 /* : nullable Bool */;
val* var126 /* : nullable Bool */;
short int var127 /* : Bool */;
short int var_128 /* var : Bool */;
short int var129 /* : Bool */;
short int var131 /* : Bool */;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : CString */;
val* var135 /* : String */;
val* var136 /* : nullable Int */;
val* var137 /* : nullable Int */;
val* var138 /* : nullable Bool */;
val* var139 /* : nullable Bool */;
short int var140 /* : Bool */;
short int var141 /* : Bool */;
short int var_142 /* var : Bool */;
short int var143 /* : Bool */;
short int var145 /* : Bool */;
short int var146 /* : Bool */;
val* var147 /* : nullable ASignature */;
val* var149 /* : nullable ASignature */;
val* var151 /* : NativeArray[String] */;
static val* varonce150;
static val* varonce152;
val* var153 /* : String */;
char* var154 /* : CString */;
val* var155 /* : String */;
val* var156 /* : nullable Int */;
val* var157 /* : nullable Int */;
val* var158 /* : nullable Bool */;
val* var159 /* : nullable Bool */;
static val* varonce160;
val* var161 /* : String */;
char* var162 /* : CString */;
val* var163 /* : String */;
val* var164 /* : nullable Int */;
val* var165 /* : nullable Int */;
val* var166 /* : nullable Bool */;
val* var167 /* : nullable Bool */;
static val* varonce168;
val* var169 /* : String */;
char* var170 /* : CString */;
val* var171 /* : String */;
val* var172 /* : nullable Int */;
val* var173 /* : nullable Int */;
val* var174 /* : nullable Bool */;
val* var175 /* : nullable Bool */;
val* var176 /* : String */;
val* var177 /* : String */;
long var178 /* : Int */;
short int var179 /* : Bool */;
short int var181 /* : Bool */;
int cltype182;
int idtype183;
const char* var_class_name;
short int var184 /* : Bool */;
val* var185 /* : nullable ASignature */;
val* var187 /* : nullable ASignature */;
val* var189 /* : NativeArray[String] */;
static val* varonce188;
static val* varonce190;
val* var191 /* : String */;
char* var192 /* : CString */;
val* var193 /* : String */;
val* var194 /* : nullable Int */;
val* var195 /* : nullable Int */;
val* var196 /* : nullable Bool */;
val* var197 /* : nullable Bool */;
static val* varonce198;
val* var199 /* : String */;
char* var200 /* : CString */;
val* var201 /* : String */;
val* var202 /* : nullable Int */;
val* var203 /* : nullable Int */;
val* var204 /* : nullable Bool */;
val* var205 /* : nullable Bool */;
static val* varonce206;
val* var207 /* : String */;
char* var208 /* : CString */;
val* var209 /* : String */;
val* var210 /* : nullable Int */;
val* var211 /* : nullable Int */;
val* var212 /* : nullable Bool */;
val* var213 /* : nullable Bool */;
static val* varonce214;
val* var215 /* : String */;
char* var216 /* : CString */;
val* var217 /* : String */;
val* var218 /* : nullable Int */;
val* var219 /* : nullable Int */;
val* var220 /* : nullable Bool */;
val* var221 /* : nullable Bool */;
long var222 /* : Int */;
val* var223 /* : String */;
val* var224 /* : String */;
val* var225 /* : String */;
short int var226 /* : Bool */;
short int var_look_like_a_root_init /* var look_like_a_root_init: Bool */;
val* var_mprop /* var mprop: nullable MMethod */;
short int var227 /* : Bool */;
short int var228 /* : Bool */;
short int var_229 /* var : Bool */;
val* var230 /* : nullable TKwredef */;
val* var232 /* : nullable TKwredef */;
short int var233 /* : Bool */;
short int var234 /* : Bool */;
short int var236 /* : Bool */;
short int var237 /* : Bool */;
val* var238 /* : nullable MProperty */;
short int var239 /* : Bool */;
int cltype240;
int idtype241;
const char* var_class_name242;
short int var243 /* : Bool */;
short int var244 /* : Bool */;
short int var245 /* : Bool */;
short int var247 /* : Bool */;
short int var249 /* : Bool */;
short int var_250 /* var : Bool */;
val* var251 /* : nullable MMethod */;
val* var253 /* : nullable MMethod */;
val* var254 /* : nullable AExpr */;
val* var256 /* : nullable AExpr */;
val* var_nb /* var nb: nullable AExpr */;
short int var257 /* : Bool */;
short int var258 /* : Bool */;
short int var259 /* : Bool */;
int cltype260;
int idtype261;
short int var_262 /* var : Bool */;
val* var263 /* : ANodes[AExpr] */;
val* var265 /* : ANodes[AExpr] */;
short int var266 /* : Bool */;
short int var_267 /* var : Bool */;
val* var268 /* : nullable ADoc */;
val* var270 /* : nullable ADoc */;
short int var271 /* : Bool */;
short int var272 /* : Bool */;
short int var274 /* : Bool */;
short int var276 /* : Bool */;
static val* varonce277;
val* var278 /* : String */;
char* var279 /* : CString */;
val* var280 /* : String */;
val* var281 /* : nullable Int */;
val* var282 /* : nullable Int */;
val* var283 /* : nullable Bool */;
val* var284 /* : nullable Bool */;
val* var286 /* : NativeArray[String] */;
static val* varonce285;
static val* varonce287;
val* var288 /* : String */;
char* var289 /* : CString */;
val* var290 /* : String */;
val* var291 /* : nullable Int */;
val* var292 /* : nullable Int */;
val* var293 /* : nullable Bool */;
val* var294 /* : nullable Bool */;
val* var295 /* : String */;
val* var296 /* : String */;
short int var297 /* : Bool */;
short int var298 /* : Bool */;
short int var300 /* : Bool */;
short int var302 /* : Bool */;
val* var303 /* : nullable AVisibility */;
val* var305 /* : nullable AVisibility */;
val* var306 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: MVisibility */;
val* var307 /* : MMethod */;
val* var308 /* : Location */;
val* var310 /* : Location */;
short int var311 /* : Bool */;
short int var_312 /* var : Bool */;
val* var313 /* : nullable MMethod */;
val* var315 /* : nullable MMethod */;
short int var316 /* : Bool */;
short int var317 /* : Bool */;
short int var319 /* : Bool */;
short int var321 /* : Bool */;
short int var325 /* : Bool */;
short int var326 /* : Bool */;
short int var328 /* : Bool */;
short int var329 /* : Bool */;
short int var331 /* : Bool */;
short int var333 /* : Bool */;
val* var334 /* : MClass */;
val* var336 /* : MClass */;
static val* varonce338;
val* var339 /* : String */;
char* var340 /* : CString */;
val* var341 /* : String */;
val* var342 /* : nullable Int */;
val* var343 /* : nullable Int */;
val* var344 /* : nullable Bool */;
val* var345 /* : nullable Bool */;
short int var346 /* : Bool */;
val* var348 /* : nullable TKwredef */;
val* var350 /* : nullable TKwredef */;
short int var351 /* : Bool */;
short int var352 /* : Bool */;
short int var354 /* : Bool */;
short int var356 /* : Bool */;
val* var357 /* : nullable TKwredef */;
val* var359 /* : nullable TKwredef */;
short int var360 /* : Bool */;
int cltype361;
int idtype362;
short int var363 /* : Bool */;
short int var364 /* : Bool */;
short int var365 /* : Bool */;
val* var366 /* : nullable AVisibility */;
val* var368 /* : nullable AVisibility */;
val* var369 /* : Map[MProperty, APropdef] */;
val* var371 /* : Map[MProperty, APropdef] */;
val* var_372 /* var : Map[MProperty, APropdef] */;
val* var373 /* : MapIterator[nullable Object, nullable Object] */;
val* var_374 /* var : MapIterator[MProperty, APropdef] */;
short int var375 /* : Bool */;
val* var376 /* : nullable Object */;
val* var_p /* var p: MProperty */;
val* var377 /* : nullable Object */;
val* var_n /* var n: APropdef */;
short int var378 /* : Bool */;
short int var379 /* : Bool */;
short int var380 /* : Bool */;
short int var382 /* : Bool */;
short int var383 /* : Bool */;
short int var_384 /* var : Bool */;
short int var385 /* : Bool */;
int cltype386;
int idtype387;
short int var_388 /* var : Bool */;
val* var389 /* : String */;
val* var391 /* : String */;
short int var392 /* : Bool */;
val* var393 /* : nullable TKwredef */;
val* var395 /* : nullable TKwredef */;
short int var396 /* : Bool */;
short int var397 /* : Bool */;
val* var400 /* : Map[MProperty, APropdef] */;
val* var402 /* : Map[MProperty, APropdef] */;
val* var403 /* : MMethodDef */;
val* var404 /* : Location */;
val* var406 /* : Location */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
short int var407 /* : Bool */;
int cltype408;
int idtype409;
const struct type* type_struct;
const char* var_class_name410;
short int var412 /* : Bool */;
int cltype413;
int idtype414;
const struct type* type_struct415;
const char* var_class_name416;
val* var417 /* : HashMap[MPropDef, APropdef] */;
val* var419 /* : HashMap[MPropDef, APropdef] */;
short int var420 /* : Bool */;
val* var421 /* : ToolContext */;
val* var423 /* : ToolContext */;
val* var425 /* : NativeArray[String] */;
static val* varonce424;
static val* varonce426;
val* var427 /* : String */;
char* var428 /* : CString */;
val* var429 /* : String */;
val* var430 /* : nullable Int */;
val* var431 /* : nullable Int */;
val* var432 /* : nullable Bool */;
val* var433 /* : nullable Bool */;
val* var434 /* : String */;
val* var435 /* : String */;
val* var436 /* : String */;
val* var437 /* : ToolContext */;
val* var439 /* : ToolContext */;
val* var441 /* : NativeArray[String] */;
static val* varonce440;
static val* varonce442;
val* var443 /* : String */;
char* var444 /* : CString */;
val* var445 /* : String */;
val* var446 /* : nullable Int */;
val* var447 /* : nullable Int */;
val* var448 /* : nullable Bool */;
val* var449 /* : nullable Bool */;
val* var450 /* : String */;
val* var451 /* : String */;
val* var452 /* : String */;
var_modelbuilder = p0;
var_mclassdef = p1;
{
{ /* Inline parser_nodes$AMethPropdef$n_kwinit (self) on <self:AMethPropdef> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_kwinit].val; /* _n_kwinit on <self:AMethPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_n_kwinit = var;
{
{ /* Inline parser_nodes$AMethPropdef$n_kwnew (self) on <self:AMethPropdef> */
var5 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_kwnew].val; /* _n_kwnew on <self:AMethPropdef> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_n_kwnew = var3;
if (var_n_kwinit == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_kwinit,((val*)NULL)) on <var_n_kwinit:nullable TKwinit> */
var_other = ((val*)NULL);
{
var10 = ((short int(*)(val* self, val* p0))(var_n_kwinit->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_kwinit, var_other); /* == on <var_n_kwinit:nullable TKwinit(TKwinit)>*/
}
var11 = !var10;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
var_ = var7;
if (var7){
var6 = var_;
} else {
if (var_n_kwnew == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_kwnew,((val*)NULL)) on <var_n_kwnew:nullable TKwnew> */
var_other = ((val*)NULL);
{
var15 = ((short int(*)(val* self, val* p0))(var_n_kwnew->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_kwnew, var_other); /* == on <var_n_kwnew:nullable TKwnew(TKwnew)>*/
}
var16 = !var15;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
var6 = var12;
}
var_is_init = var6;
{
{ /* Inline parser_nodes$AMethPropdef$n_methid (self) on <self:AMethPropdef> */
var19 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_amethodid = var17;
if (var_amethodid == NULL) {
var20 = 1; /* is null */
} else {
var20 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_amethodid,((val*)NULL)) on <var_amethodid:nullable AMethid> */
var_other23 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_amethodid,var_other23) on <var_amethodid:nullable AMethid(AMethid)> */
var26 = var_amethodid == var_other23;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var21 = var24;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (var20){
var27 = !var_is_init;
if (var27){
if (likely(varonce!=NULL)) {
var28 = varonce;
} else {
var29 = "main";
var31 = (val*)(4l<<2|1);
var32 = (val*)(4l<<2|1);
var33 = (val*)((long)(0)<<2|3);
var34 = (val*)((long)(0)<<2|3);
var30 = core__flat___CString___to_s_unsafe(var29, var31, var32, var33, var34);
var28 = var30;
varonce = var28;
}
var_name = var28;
var_name_node = self;
} else {
if (var_n_kwinit == NULL) {
var35 = 0; /* is null */
} else {
var35 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_kwinit,((val*)NULL)) on <var_n_kwinit:nullable TKwinit> */
var_other = ((val*)NULL);
{
var38 = ((short int(*)(val* self, val* p0))(var_n_kwinit->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_kwinit, var_other); /* == on <var_n_kwinit:nullable TKwinit(TKwinit)>*/
}
var39 = !var38;
var36 = var39;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
var35 = var36;
}
if (var35){
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "init";
var44 = (val*)(4l<<2|1);
var45 = (val*)(4l<<2|1);
var46 = (val*)((long)(0)<<2|3);
var47 = (val*)((long)(0)<<2|3);
var43 = core__flat___CString___to_s_unsafe(var42, var44, var45, var46, var47);
var41 = var43;
varonce40 = var41;
}
var_name = var41;
var_name_node = var_n_kwinit;
} else {
if (var_n_kwnew == NULL) {
var48 = 0; /* is null */
} else {
var48 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_kwnew,((val*)NULL)) on <var_n_kwnew:nullable TKwnew> */
var_other = ((val*)NULL);
{
var51 = ((short int(*)(val* self, val* p0))(var_n_kwnew->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_kwnew, var_other); /* == on <var_n_kwnew:nullable TKwnew(TKwnew)>*/
}
var52 = !var51;
var49 = var52;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
var48 = var49;
}
if (var48){
if (likely(varonce53!=NULL)) {
var54 = varonce53;
} else {
var55 = "new";
var57 = (val*)(3l<<2|1);
var58 = (val*)(3l<<2|1);
var59 = (val*)((long)(0)<<2|3);
var60 = (val*)((long)(0)<<2|3);
var56 = core__flat___CString___to_s_unsafe(var55, var57, var58, var59, var60);
var54 = var56;
varonce53 = var54;
}
var_name = var54;
var_name_node = var_n_kwnew;
} else {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 788);
fatal_exit(1);
}
}
}
} else {
/* <var_amethodid:nullable AMethid(AMethid)> isa AIdMethid */
cltype = type_nitc__AIdMethid.color;
idtype = type_nitc__AIdMethid.id;
if(cltype >= var_amethodid->type->table_size) {
var61 = 0;
} else {
var61 = var_amethodid->type->type_table[cltype] == idtype;
}
if (var61){
{
{ /* Inline parser_nodes$AIdMethid$n_id (var_amethodid) on <var_amethodid:nullable AMethid(AIdMethid)> */
var64 = var_amethodid->attrs[COLOR_nitc__parser_nodes__AIdMethid___n_id].val; /* _n_id on <var_amethodid:nullable AMethid(AIdMethid)> */
if (unlikely(var64 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1573);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
var65 = nitc__lexer_work___Token___text(var62);
}
var_name = var65;
var_name_node = var_amethodid;
} else {
{
var66 = nitc__parser_work___Prod___collect_text(var_amethodid);
}
var_name = var66;
var_name_node = var_amethodid;
{
{ /* Inline parser_nodes$AMethPropdef$n_signature (self) on <self:AMethPropdef> */
var69 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var67 = var69;
RET_LABEL68:(void)0;
}
}
if (var67 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 798);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ASignature$n_params (var67) on <var67:nullable ASignature> */
if (unlikely(var67 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1746);
fatal_exit(1);
}
var72 = var67->attrs[COLOR_nitc__parser_nodes__ASignature___n_params].val; /* _n_params on <var67:nullable ASignature> */
if (unlikely(var72 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1746);
fatal_exit(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
{
var73 = nitc___nitc__ANodes___core__abstract_collection__Collection__length(var70);
}
var_arity = var73;
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = "+";
var79 = (val*)(1l<<2|1);
var80 = (val*)(1l<<2|1);
var81 = (val*)((long)(0)<<2|3);
var82 = (val*)((long)(0)<<2|3);
var78 = core__flat___CString___to_s_unsafe(var77, var79, var80, var81, var82);
var76 = var78;
varonce75 = var76;
}
{
var83 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var76); /* == on <var_name:String>*/
}
var_84 = var83;
if (var83){
{
{ /* Inline kernel$Int$== (var_arity,0l) on <var_arity:Int> */
var87 = var_arity == 0l;
var85 = var87;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
var74 = var85;
} else {
var74 = var_84;
}
if (var74){
if (likely(varonce88!=NULL)) {
var89 = varonce88;
} else {
var90 = "unary +";
var92 = (val*)(7l<<2|1);
var93 = (val*)(7l<<2|1);
var94 = (val*)((long)(0)<<2|3);
var95 = (val*)((long)(0)<<2|3);
var91 = core__flat___CString___to_s_unsafe(var90, var92, var93, var94, var95);
var89 = var91;
varonce88 = var89;
}
var_name = var89;
} else {
if (likely(varonce97!=NULL)) {
var98 = varonce97;
} else {
var99 = "-";
var101 = (val*)(1l<<2|1);
var102 = (val*)(1l<<2|1);
var103 = (val*)((long)(0)<<2|3);
var104 = (val*)((long)(0)<<2|3);
var100 = core__flat___CString___to_s_unsafe(var99, var101, var102, var103, var104);
var98 = var100;
varonce97 = var98;
}
{
var105 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var98); /* == on <var_name:String>*/
}
var_106 = var105;
if (var105){
{
{ /* Inline kernel$Int$== (var_arity,0l) on <var_arity:Int> */
var109 = var_arity == 0l;
var107 = var109;
goto RET_LABEL108;
RET_LABEL108:(void)0;
}
}
var96 = var107;
} else {
var96 = var_106;
}
if (var96){
if (likely(varonce110!=NULL)) {
var111 = varonce110;
} else {
var112 = "unary -";
var114 = (val*)(7l<<2|1);
var115 = (val*)(7l<<2|1);
var116 = (val*)((long)(0)<<2|3);
var117 = (val*)((long)(0)<<2|3);
var113 = core__flat___CString___to_s_unsafe(var112, var114, var115, var116, var117);
var111 = var113;
varonce110 = var111;
}
var_name = var111;
} else {
if (likely(varonce119!=NULL)) {
var120 = varonce119;
} else {
var121 = "~";
var123 = (val*)(1l<<2|1);
var124 = (val*)(1l<<2|1);
var125 = (val*)((long)(0)<<2|3);
var126 = (val*)((long)(0)<<2|3);
var122 = core__flat___CString___to_s_unsafe(var121, var123, var124, var125, var126);
var120 = var122;
varonce119 = var120;
}
{
var127 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var120); /* == on <var_name:String>*/
}
var_128 = var127;
if (var127){
{
{ /* Inline kernel$Int$== (var_arity,0l) on <var_arity:Int> */
var131 = var_arity == 0l;
var129 = var131;
goto RET_LABEL130;
RET_LABEL130:(void)0;
}
}
var118 = var129;
} else {
var118 = var_128;
}
if (var118){
if (likely(varonce132!=NULL)) {
var133 = varonce132;
} else {
var134 = "unary ~";
var136 = (val*)(7l<<2|1);
var137 = (val*)(7l<<2|1);
var138 = (val*)((long)(0)<<2|3);
var139 = (val*)((long)(0)<<2|3);
var135 = core__flat___CString___to_s_unsafe(var134, var136, var137, var138, var139);
var133 = var135;
varonce132 = var133;
}
var_name = var133;
} else {
{
var141 = ((short int(*)(val* self))(var_amethodid->class->vft[COLOR_nitc__modelize_property__AMethid__is_binary]))(var_amethodid); /* is_binary on <var_amethodid:nullable AMethid(AMethid)>*/
}
var_142 = var141;
if (var141){
{
{ /* Inline kernel$Int$!= (var_arity,1l) on <var_arity:Int> */
var145 = var_arity == 1l;
var146 = !var145;
var143 = var146;
goto RET_LABEL144;
RET_LABEL144:(void)0;
}
}
var140 = var143;
} else {
var140 = var_142;
}
if (var140){
{
{ /* Inline parser_nodes$AMethPropdef$n_signature (self) on <self:AMethPropdef> */
var149 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var147 = var149;
RET_LABEL148:(void)0;
}
}
if (unlikely(varonce150==NULL)) {
var151 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce152!=NULL)) {
var153 = varonce152;
} else {
var154 = "Syntax Error: binary operator `";
var156 = (val*)(31l<<2|1);
var157 = (val*)(31l<<2|1);
var158 = (val*)((long)(0)<<2|3);
var159 = (val*)((long)(0)<<2|3);
var155 = core__flat___CString___to_s_unsafe(var154, var156, var157, var158, var159);
var153 = var155;
varonce152 = var153;
}
((struct instance_core__NativeArray*)var151)->values[0]=var153;
if (likely(varonce160!=NULL)) {
var161 = varonce160;
} else {
var162 = "` requires exactly one parameter; got ";
var164 = (val*)(38l<<2|1);
var165 = (val*)(38l<<2|1);
var166 = (val*)((long)(0)<<2|3);
var167 = (val*)((long)(0)<<2|3);
var163 = core__flat___CString___to_s_unsafe(var162, var164, var165, var166, var167);
var161 = var163;
varonce160 = var161;
}
((struct instance_core__NativeArray*)var151)->values[2]=var161;
if (likely(varonce168!=NULL)) {
var169 = varonce168;
} else {
var170 = ".";
var172 = (val*)(1l<<2|1);
var173 = (val*)(1l<<2|1);
var174 = (val*)((long)(0)<<2|3);
var175 = (val*)((long)(0)<<2|3);
var171 = core__flat___CString___to_s_unsafe(var170, var172, var173, var174, var175);
var169 = var171;
varonce168 = var169;
}
((struct instance_core__NativeArray*)var151)->values[4]=var169;
} else {
var151 = varonce150;
varonce150 = NULL;
}
((struct instance_core__NativeArray*)var151)->values[1]=var_name;
var176 = core__flat___Int___core__abstract_text__Object__to_s(var_arity);
((struct instance_core__NativeArray*)var151)->values[3]=var176;
{
var177 = ((val*(*)(val* self))(var151->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var151); /* native_to_s on <var151:NativeArray[String]>*/
}
varonce150 = var151;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var147, var177); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
} else {
{
var178 = ((long(*)(val* self))(var_amethodid->class->vft[COLOR_nitc__modelize_property__AMethid__min_arity]))(var_amethodid); /* min_arity on <var_amethodid:nullable AMethid(AMethid)>*/
}
{
{ /* Inline kernel$Int$> (var178,var_arity) on <var178:Int> */
/* Covariant cast for argument 0 (i) <var_arity:Int> isa OTHER */
/* <var_arity:Int> isa OTHER */
var181 = 1; /* easy <var_arity:Int> isa OTHER*/
if (unlikely(!var181)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var184 = var178 > var_arity;
var179 = var184;
goto RET_LABEL180;
RET_LABEL180:(void)0;
}
}
if (var179){
{
{ /* Inline parser_nodes$AMethPropdef$n_signature (self) on <self:AMethPropdef> */
var187 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var185 = var187;
RET_LABEL186:(void)0;
}
}
if (unlikely(varonce188==NULL)) {
var189 = NEW_core__NativeArray((int)7l, &type_core__NativeArray__core__String);
if (likely(varonce190!=NULL)) {
var191 = varonce190;
} else {
var192 = "Syntax Error: `";
var194 = (val*)(15l<<2|1);
var195 = (val*)(15l<<2|1);
var196 = (val*)((long)(0)<<2|3);
var197 = (val*)((long)(0)<<2|3);
var193 = core__flat___CString___to_s_unsafe(var192, var194, var195, var196, var197);
var191 = var193;
varonce190 = var191;
}
((struct instance_core__NativeArray*)var189)->values[0]=var191;
if (likely(varonce198!=NULL)) {
var199 = varonce198;
} else {
var200 = "` requires at least ";
var202 = (val*)(20l<<2|1);
var203 = (val*)(20l<<2|1);
var204 = (val*)((long)(0)<<2|3);
var205 = (val*)((long)(0)<<2|3);
var201 = core__flat___CString___to_s_unsafe(var200, var202, var203, var204, var205);
var199 = var201;
varonce198 = var199;
}
((struct instance_core__NativeArray*)var189)->values[2]=var199;
if (likely(varonce206!=NULL)) {
var207 = varonce206;
} else {
var208 = " parameter(s); got ";
var210 = (val*)(19l<<2|1);
var211 = (val*)(19l<<2|1);
var212 = (val*)((long)(0)<<2|3);
var213 = (val*)((long)(0)<<2|3);
var209 = core__flat___CString___to_s_unsafe(var208, var210, var211, var212, var213);
var207 = var209;
varonce206 = var207;
}
((struct instance_core__NativeArray*)var189)->values[4]=var207;
if (likely(varonce214!=NULL)) {
var215 = varonce214;
} else {
var216 = ".";
var218 = (val*)(1l<<2|1);
var219 = (val*)(1l<<2|1);
var220 = (val*)((long)(0)<<2|3);
var221 = (val*)((long)(0)<<2|3);
var217 = core__flat___CString___to_s_unsafe(var216, var218, var219, var220, var221);
var215 = var217;
varonce214 = var215;
}
((struct instance_core__NativeArray*)var189)->values[6]=var215;
} else {
var189 = varonce188;
varonce188 = NULL;
}
((struct instance_core__NativeArray*)var189)->values[1]=var_name;
{
var222 = ((long(*)(val* self))(var_amethodid->class->vft[COLOR_nitc__modelize_property__AMethid__min_arity]))(var_amethodid); /* min_arity on <var_amethodid:nullable AMethid(AMethid)>*/
}
var223 = core__flat___Int___core__abstract_text__Object__to_s(var222);
((struct instance_core__NativeArray*)var189)->values[3]=var223;
var224 = core__flat___Int___core__abstract_text__Object__to_s(var_arity);
((struct instance_core__NativeArray*)var189)->values[5]=var224;
{
var225 = ((val*(*)(val* self))(var189->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var189); /* native_to_s on <var189:NativeArray[String]>*/
}
varonce188 = var189;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var185, var225); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
}
}
}
}
}
}
{
var226 = nitc__modelize_property___AMethPropdef___look_like_a_root_init(self, var_modelbuilder, var_mclassdef);
}
var_look_like_a_root_init = var226;
var_mprop = ((val*)NULL);
var228 = !var_is_init;
var_229 = var228;
if (var228){
var227 = var_229;
} else {
{
{ /* Inline parser_nodes$ADefinition$n_kwredef (self) on <self:AMethPropdef> */
var232 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AMethPropdef> */
var230 = var232;
RET_LABEL231:(void)0;
}
}
if (var230 == NULL) {
var233 = 0; /* is null */
} else {
var233 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var230,((val*)NULL)) on <var230:nullable TKwredef> */
var_other = ((val*)NULL);
{
var236 = ((short int(*)(val* self, val* p0))(var230->class->vft[COLOR_core__kernel__Object___61d_61d]))(var230, var_other); /* == on <var230:nullable TKwredef(TKwredef)>*/
}
var237 = !var236;
var234 = var237;
goto RET_LABEL235;
RET_LABEL235:(void)0;
}
var233 = var234;
}
var227 = var233;
}
if (var227){
{
var238 = nitc___nitc__ModelBuilder___try_get_mproperty_by_name(var_modelbuilder, var_name_node, var_mclassdef, var_name);
}
/* <var238:nullable MProperty> isa nullable MMethod */
cltype240 = type_nullable__nitc__MMethod.color;
idtype241 = type_nullable__nitc__MMethod.id;
if(var238 == NULL) {
var239 = 1;
} else {
if(cltype240 >= var238->type->table_size) {
var239 = 0;
} else {
var239 = var238->type->type_table[cltype240] == idtype241;
}
}
if (unlikely(!var239)) {
var_class_name242 = var238 == NULL ? "null" : var238->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MMethod", var_class_name242);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 816);
fatal_exit(1);
}
var_mprop = var238;
} else {
}
if (var_mprop == NULL) {
var244 = 1; /* is null */
} else {
var244 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mprop,((val*)NULL)) on <var_mprop:nullable MMethod> */
var_other23 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mprop,var_other23) on <var_mprop:nullable MMethod(MMethod)> */
var249 = var_mprop == var_other23;
var247 = var249;
goto RET_LABEL248;
RET_LABEL248:(void)0;
}
}
var245 = var247;
goto RET_LABEL246;
RET_LABEL246:(void)0;
}
var244 = var245;
}
var_250 = var244;
if (var244){
var243 = var_look_like_a_root_init;
} else {
var243 = var_250;
}
if (var243){
{
{ /* Inline modelize_property$ModelBuilder$the_root_init_mmethod (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var253 = var_modelbuilder->attrs[COLOR_nitc__modelize_property__ModelBuilder___the_root_init_mmethod].val; /* _the_root_init_mmethod on <var_modelbuilder:ModelBuilder> */
var251 = var253;
RET_LABEL252:(void)0;
}
}
var_mprop = var251;
{
{ /* Inline parser_nodes$AMethPropdef$n_block (self) on <self:AMethPropdef> */
var256 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:AMethPropdef> */
var254 = var256;
RET_LABEL255:(void)0;
}
}
var_nb = var254;
/* <var_nb:nullable AExpr> isa ABlockExpr */
cltype260 = type_nitc__ABlockExpr.color;
idtype261 = type_nitc__ABlockExpr.id;
if(var_nb == NULL) {
var259 = 0;
} else {
if(cltype260 >= var_nb->type->table_size) {
var259 = 0;
} else {
var259 = var_nb->type->type_table[cltype260] == idtype261;
}
}
var_262 = var259;
if (var259){
{
{ /* Inline parser_nodes$ABlockExpr$n_expr (var_nb) on <var_nb:nullable AExpr(ABlockExpr)> */
var265 = var_nb->attrs[COLOR_nitc__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <var_nb:nullable AExpr(ABlockExpr)> */
if (unlikely(var265 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1811);
fatal_exit(1);
}
var263 = var265;
RET_LABEL264:(void)0;
}
}
{
var266 = nitc___nitc__ANodes___core__abstract_collection__Collection__is_empty(var263);
}
var258 = var266;
} else {
var258 = var_262;
}
var_267 = var258;
if (var258){
{
{ /* Inline parser_nodes$ADefinition$n_doc (self) on <self:AMethPropdef> */
var270 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:AMethPropdef> */
var268 = var270;
RET_LABEL269:(void)0;
}
}
if (var268 == NULL) {
var271 = 1; /* is null */
} else {
var271 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var268,((val*)NULL)) on <var268:nullable ADoc> */
var_other23 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var268,var_other23) on <var268:nullable ADoc(ADoc)> */
var276 = var268 == var_other23;
var274 = var276;
goto RET_LABEL275;
RET_LABEL275:(void)0;
}
}
var272 = var274;
goto RET_LABEL273;
RET_LABEL273:(void)0;
}
var271 = var272;
}
var257 = var271;
} else {
var257 = var_267;
}
if (var257){
if (likely(varonce277!=NULL)) {
var278 = varonce277;
} else {
var279 = "useless-init";
var281 = (val*)(12l<<2|1);
var282 = (val*)(12l<<2|1);
var283 = (val*)((long)(0)<<2|3);
var284 = (val*)((long)(0)<<2|3);
var280 = core__flat___CString___to_s_unsafe(var279, var281, var282, var283, var284);
var278 = var280;
varonce277 = var278;
}
if (unlikely(varonce285==NULL)) {
var286 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce287!=NULL)) {
var288 = varonce287;
} else {
var289 = "Warning: useless empty init in ";
var291 = (val*)(31l<<2|1);
var292 = (val*)(31l<<2|1);
var293 = (val*)((long)(0)<<2|3);
var294 = (val*)((long)(0)<<2|3);
var290 = core__flat___CString___to_s_unsafe(var289, var291, var292, var293, var294);
var288 = var290;
varonce287 = var288;
}
((struct instance_core__NativeArray*)var286)->values[0]=var288;
} else {
var286 = varonce285;
varonce285 = NULL;
}
{
var295 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:MClassDef>*/
}
((struct instance_core__NativeArray*)var286)->values[1]=var295;
{
var296 = ((val*(*)(val* self))(var286->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var286); /* native_to_s on <var286:NativeArray[String]>*/
}
varonce285 = var286;
{
nitc___nitc__ModelBuilder___advice(var_modelbuilder, self, var278, var296); /* Direct call modelbuilder_base$ModelBuilder$advice on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
} else {
}
if (var_mprop == NULL) {
var297 = 1; /* is null */
} else {
var297 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mprop,((val*)NULL)) on <var_mprop:nullable MMethod> */
var_other23 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mprop,var_other23) on <var_mprop:nullable MMethod(MMethod)> */
var302 = var_mprop == var_other23;
var300 = var302;
goto RET_LABEL301;
RET_LABEL301:(void)0;
}
}
var298 = var300;
goto RET_LABEL299;
RET_LABEL299:(void)0;
}
var297 = var298;
}
if (var297){
{
{ /* Inline parser_nodes$ADefinition$n_visibility (self) on <self:AMethPropdef> */
var305 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AMethPropdef> */
var303 = var305;
RET_LABEL304:(void)0;
}
}
{
var306 = nitc__modelize_property___APropdef___new_property_visibility(self, var_modelbuilder, var_mclassdef, var303);
}
var_mvisibility = var306;
var307 = NEW_nitc__MMethod(&type_nitc__MMethod);
{
{ /* Inline parser_nodes$ANode$location (self) on <self:AMethPropdef> */
var310 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <self:AMethPropdef> */
if (unlikely(var310 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var308 = var310;
RET_LABEL309:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var307->class->vft[COLOR_nitc__model__MProperty__intro_mclassdef_61d]))(var307, var_mclassdef); /* intro_mclassdef= on <var307:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var307->class->vft[COLOR_nitc__model__MProperty__name_61d]))(var307, var_name); /* name= on <var307:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var307->class->vft[COLOR_nitc__model__MProperty__location_61d]))(var307, var308); /* location= on <var307:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var307->class->vft[COLOR_nitc__model__MProperty__visibility_61d]))(var307, var_mvisibility); /* visibility= on <var307:MMethod>*/
}
{
((void(*)(val* self))(var307->class->vft[COLOR_core__kernel__Object__init]))(var307); /* init on <var307:MMethod>*/
}
var_mprop = var307;
var_312 = var_look_like_a_root_init;
if (var_look_like_a_root_init){
{
{ /* Inline modelize_property$ModelBuilder$the_root_init_mmethod (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var315 = var_modelbuilder->attrs[COLOR_nitc__modelize_property__ModelBuilder___the_root_init_mmethod].val; /* _the_root_init_mmethod on <var_modelbuilder:ModelBuilder> */
var313 = var315;
RET_LABEL314:(void)0;
}
}
if (var313 == NULL) {
var316 = 1; /* is null */
} else {
var316 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var313,((val*)NULL)) on <var313:nullable MMethod> */
var_other23 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var313,var_other23) on <var313:nullable MMethod(MMethod)> */
var321 = var313 == var_other23;
var319 = var321;
goto RET_LABEL320;
RET_LABEL320:(void)0;
}
}
var317 = var319;
goto RET_LABEL318;
RET_LABEL318:(void)0;
}
var316 = var317;
}
var311 = var316;
} else {
var311 = var_312;
}
if (var311){
{
{ /* Inline modelize_property$ModelBuilder$the_root_init_mmethod= (var_modelbuilder,var_mprop) on <var_modelbuilder:ModelBuilder> */
var_modelbuilder->attrs[COLOR_nitc__modelize_property__ModelBuilder___the_root_init_mmethod].val = var_mprop; /* _the_root_init_mmethod on <var_modelbuilder:ModelBuilder> */
RET_LABEL322:(void)0;
}
}
{
{ /* Inline model$MMethod$is_root_init= (var_mprop,1) on <var_mprop:nullable MMethod(MMethod)> */
var_mprop->attrs[COLOR_nitc__model__MMethod___is_root_init].s = 1; /* _is_root_init on <var_mprop:nullable MMethod(MMethod)> */
RET_LABEL323:(void)0;
}
}
} else {
}
{
{ /* Inline model$MMethod$is_init= (var_mprop,var_is_init) on <var_mprop:nullable MMethod(MMethod)> */
var_mprop->attrs[COLOR_nitc__model__MMethod___is_init].s = var_is_init; /* _is_init on <var_mprop:nullable MMethod(MMethod)> */
RET_LABEL324:(void)0;
}
}
if (var_n_kwnew == NULL) {
var325 = 0; /* is null */
} else {
var325 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n_kwnew,((val*)NULL)) on <var_n_kwnew:nullable TKwnew> */
var_other = ((val*)NULL);
{
var328 = ((short int(*)(val* self, val* p0))(var_n_kwnew->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_kwnew, var_other); /* == on <var_n_kwnew:nullable TKwnew(TKwnew)>*/
}
var329 = !var328;
var326 = var329;
goto RET_LABEL327;
RET_LABEL327:(void)0;
}
var325 = var326;
}
{
{ /* Inline model$MMethod$is_new= (var_mprop,var325) on <var_mprop:nullable MMethod(MMethod)> */
var_mprop->attrs[COLOR_nitc__model__MMethod___is_new].s = var325; /* _is_new on <var_mprop:nullable MMethod(MMethod)> */
RET_LABEL330:(void)0;
}
}
{
{ /* Inline model$MMethod$is_new (var_mprop) on <var_mprop:nullable MMethod(MMethod)> */
var333 = var_mprop->attrs[COLOR_nitc__model__MMethod___is_new].s; /* _is_new on <var_mprop:nullable MMethod(MMethod)> */
var331 = var333;
RET_LABEL332:(void)0;
}
}
if (var331){
{
{ /* Inline model$MClassDef$mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var336 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var336 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var334 = var336;
RET_LABEL335:(void)0;
}
}
{
{ /* Inline model$MClass$has_new_factory= (var334,1) on <var334:MClass> */
var334->attrs[COLOR_nitc__model__MClass___has_new_factory].s = 1; /* _has_new_factory on <var334:MClass> */
RET_LABEL337:(void)0;
}
}
} else {
}
if (likely(varonce338!=NULL)) {
var339 = varonce338;
} else {
var340 = "sys";
var342 = (val*)(3l<<2|1);
var343 = (val*)(3l<<2|1);
var344 = (val*)((long)(0)<<2|3);
var345 = (val*)((long)(0)<<2|3);
var341 = core__flat___CString___to_s_unsafe(var340, var342, var343, var344, var345);
var339 = var341;
varonce338 = var339;
}
{
var346 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var339); /* == on <var_name:String>*/
}
if (var346){
{
{ /* Inline model$MMethod$is_toplevel= (var_mprop,1) on <var_mprop:nullable MMethod(MMethod)> */
var_mprop->attrs[COLOR_nitc__model__MMethod___is_toplevel].s = 1; /* _is_toplevel on <var_mprop:nullable MMethod(MMethod)> */
RET_LABEL347:(void)0;
}
}
} else {
}
{
{ /* Inline parser_nodes$ADefinition$n_kwredef (self) on <self:AMethPropdef> */
var350 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AMethPropdef> */
var348 = var350;
RET_LABEL349:(void)0;
}
}
{
var351 = nitc__modelize_property___APropdef___check_redef_keyword(self, var_modelbuilder, var_mclassdef, var348, 0, var_mprop);
}
var352 = !var351;
if (var352){
{
{ /* Inline model_base$MEntity$is_broken= (var_mprop,1) on <var_mprop:nullable MMethod(MMethod)> */
var_mprop->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mprop:nullable MMethod(MMethod)> */
RET_LABEL353:(void)0;
}
}
goto RET_LABEL;
} else {
}
} else {
{
{ /* Inline model_base$MEntity$is_broken (var_mprop) on <var_mprop:nullable MMethod(MMethod)> */
var356 = var_mprop->attrs[COLOR_nitc__model_base__MEntity___is_broken].s; /* _is_broken on <var_mprop:nullable MMethod(MMethod)> */
var354 = var356;
RET_LABEL355:(void)0;
}
}
if (var354){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes$ADefinition$n_kwredef (self) on <self:AMethPropdef> */
var359 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AMethPropdef> */
var357 = var359;
RET_LABEL358:(void)0;
}
}
/* <self:AMethPropdef> isa AMainMethPropdef */
cltype361 = type_nitc__AMainMethPropdef.color;
idtype362 = type_nitc__AMainMethPropdef.id;
if(cltype361 >= self->type->table_size) {
var360 = 0;
} else {
var360 = self->type->type_table[cltype361] == idtype362;
}
var363 = !var360;
{
var364 = nitc__modelize_property___APropdef___check_redef_keyword(self, var_modelbuilder, var_mclassdef, var357, var363, var_mprop);
}
var365 = !var364;
if (var365){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes$ADefinition$n_visibility (self) on <self:AMethPropdef> */
var368 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AMethPropdef> */
var366 = var368;
RET_LABEL367:(void)0;
}
}
{
nitc__modelize_property___APropdef___check_redef_property_visibility(self, var_modelbuilder, var366, var_mprop); /* Direct call modelize_property$APropdef$check_redef_property_visibility on <self:AMethPropdef>*/
}
}
if (var_is_init){
{
{ /* Inline modelize_property$MClassDef$mprop2npropdef (var_mclassdef) on <var_mclassdef:MClassDef> */
var371 = var_mclassdef->attrs[COLOR_nitc__modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <var_mclassdef:MClassDef> */
if (unlikely(var371 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 504);
fatal_exit(1);
}
var369 = var371;
RET_LABEL370:(void)0;
}
}
var_372 = var369;
{
var373 = ((val*(*)(val* self))((((long)var_372&3)?class_info[((long)var_372&3)]:var_372->class)->vft[COLOR_core__abstract_collection__MapRead__iterator]))(var_372); /* iterator on <var_372:Map[MProperty, APropdef]>*/
}
var_374 = var373;
for(;;) {
{
var375 = ((short int(*)(val* self))((((long)var_374&3)?class_info[((long)var_374&3)]:var_374->class)->vft[COLOR_core__abstract_collection__MapIterator__is_ok]))(var_374); /* is_ok on <var_374:MapIterator[MProperty, APropdef]>*/
}
if (var375){
} else {
goto BREAK_label;
}
{
var376 = ((val*(*)(val* self))((((long)var_374&3)?class_info[((long)var_374&3)]:var_374->class)->vft[COLOR_core__abstract_collection__MapIterator__key]))(var_374); /* key on <var_374:MapIterator[MProperty, APropdef]>*/
}
var_p = var376;
{
var377 = ((val*(*)(val* self))((((long)var_374&3)?class_info[((long)var_374&3)]:var_374->class)->vft[COLOR_core__abstract_collection__MapIterator__item]))(var_374); /* item on <var_374:MapIterator[MProperty, APropdef]>*/
}
var_n = var377;
{
{ /* Inline kernel$Object$!= (var_p,var_mprop) on <var_p:MProperty> */
var_other = var_mprop;
{
var382 = ((short int(*)(val* self, val* p0))(var_p->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_p, var_other); /* == on <var_p:MProperty>*/
}
var383 = !var382;
var380 = var383;
goto RET_LABEL381;
RET_LABEL381:(void)0;
}
}
var_384 = var380;
if (var380){
/* <var_p:MProperty> isa MMethod */
cltype386 = type_nitc__MMethod.color;
idtype387 = type_nitc__MMethod.id;
if(cltype386 >= var_p->type->table_size) {
var385 = 0;
} else {
var385 = var_p->type->type_table[cltype386] == idtype387;
}
var379 = var385;
} else {
var379 = var_384;
}
var_388 = var379;
if (var379){
{
{ /* Inline model$MProperty$name (var_p) on <var_p:MProperty(MMethod)> */
var391 = var_p->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var_p:MProperty(MMethod)> */
if (unlikely(var391 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var389 = var391;
RET_LABEL390:(void)0;
}
}
{
var392 = ((short int(*)(val* self, val* p0))(var389->class->vft[COLOR_core__kernel__Object___61d_61d]))(var389, var_name); /* == on <var389:String>*/
}
var378 = var392;
} else {
var378 = var_388;
}
if (var378){
{
{ /* Inline parser_nodes$ADefinition$n_kwredef (self) on <self:AMethPropdef> */
var395 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AMethPropdef> */
var393 = var395;
RET_LABEL394:(void)0;
}
}
{
var396 = nitc__modelize_property___APropdef___check_redef_keyword(self, var_modelbuilder, var_mclassdef, var393, 0, var_p);
}
var397 = !var396;
if (var397){
{
{ /* Inline model_base$MEntity$is_broken= (var_mprop,1) on <var_mprop:nullable MMethod(MMethod)> */
var_mprop->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mprop:nullable MMethod(MMethod)> */
RET_LABEL398:(void)0;
}
}
goto RET_LABEL;
} else {
}
goto BREAK_label;
} else {
}
{
((void(*)(val* self))((((long)var_374&3)?class_info[((long)var_374&3)]:var_374->class)->vft[COLOR_core__abstract_collection__MapIterator__next]))(var_374); /* next on <var_374:MapIterator[MProperty, APropdef]>*/
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection$MapIterator$finish (var_374) on <var_374:MapIterator[MProperty, APropdef]> */
RET_LABEL399:(void)0;
}
}
} else {
}
{
{ /* Inline modelize_property$MClassDef$mprop2npropdef (var_mclassdef) on <var_mclassdef:MClassDef> */
var402 = var_mclassdef->attrs[COLOR_nitc__modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <var_mclassdef:MClassDef> */
if (unlikely(var402 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 504);
fatal_exit(1);
}
var400 = var402;
RET_LABEL401:(void)0;
}
}
{
((void(*)(val* self, val* p0, val* p1))((((long)var400&3)?class_info[((long)var400&3)]:var400->class)->vft[COLOR_core__abstract_collection__Map___91d_93d_61d]))(var400, var_mprop, self); /* []= on <var400:Map[MProperty, APropdef]>*/
}
var403 = NEW_nitc__MMethodDef(&type_nitc__MMethodDef);
{
{ /* Inline parser_nodes$ANode$location (self) on <self:AMethPropdef> */
var406 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <self:AMethPropdef> */
if (unlikely(var406 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var404 = var406;
RET_LABEL405:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var403->class->vft[COLOR_nitc__model__MPropDef__mclassdef_61d]))(var403, var_mclassdef); /* mclassdef= on <var403:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var403->class->vft[COLOR_nitc__model__MPropDef__mproperty_61d]))(var403, var_mprop); /* mproperty= on <var403:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var403->class->vft[COLOR_nitc__model__MPropDef__location_61d]))(var403, var404); /* location= on <var403:MMethodDef>*/
}
{
((void(*)(val* self))(var403->class->vft[COLOR_core__kernel__Object__init]))(var403); /* init on <var403:MMethodDef>*/
}
var_mpropdef = var403;
{
nitc__modelize_property___APropdef___set_doc(self, var_mpropdef, var_modelbuilder); /* Direct call modelize_property$APropdef$set_doc on <self:AMethPropdef>*/
}
/* <var_mpropdef:MMethodDef> isa nullable MPROPDEF */
type_struct = self->type->resolution_table->types[COLOR_nullable__nitc__modelize_property__APropdef__MPROPDEF];
cltype408 = type_struct->color;
idtype409 = type_struct->id;
if(cltype408 >= var_mpropdef->type->table_size) {
var407 = 0;
} else {
var407 = var_mpropdef->type->type_table[cltype408] == idtype409;
}
if (unlikely(!var407)) {
var_class_name410 = var_mpropdef == NULL ? "null" : var_mpropdef->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name410);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 864);
fatal_exit(1);
}
{
{ /* Inline modelize_property$APropdef$mpropdef= (self,var_mpropdef) on <self:AMethPropdef> */
/* Covariant cast for argument 0 (mpropdef) <var_mpropdef:MMethodDef> isa nullable MPROPDEF */
/* <var_mpropdef:MMethodDef> isa nullable MPROPDEF */
type_struct415 = self->type->resolution_table->types[COLOR_nullable__nitc__modelize_property__APropdef__MPROPDEF];
cltype413 = type_struct415->color;
idtype414 = type_struct415->id;
if(cltype413 >= var_mpropdef->type->table_size) {
var412 = 0;
} else {
var412 = var_mpropdef->type->type_table[cltype413] == idtype414;
}
if (unlikely(!var412)) {
var_class_name416 = var_mpropdef == NULL ? "null" : var_mpropdef->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name416);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 557);
fatal_exit(1);
}
self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val = var_mpropdef; /* _mpropdef on <self:AMethPropdef> */
RET_LABEL411:(void)0;
}
}
{
{ /* Inline modelize_property$ModelBuilder$mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var419 = var_modelbuilder->attrs[COLOR_nitc__modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var419 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 40);
fatal_exit(1);
}
var417 = var419;
RET_LABEL418:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var417, var_mpropdef, self); /* Direct call hash_collection$HashMap$[]= on <var417:HashMap[MPropDef, APropdef]>*/
}
{
var420 = nitc___nitc__MPropDef___is_intro(var_mpropdef);
}
if (var420){
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var423 = var_modelbuilder->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var_modelbuilder:ModelBuilder> */
if (unlikely(var423 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var421 = var423;
RET_LABEL422:(void)0;
}
}
if (unlikely(varonce424==NULL)) {
var425 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce426!=NULL)) {
var427 = varonce426;
} else {
var428 = " introduces new method ";
var430 = (val*)(23l<<2|1);
var431 = (val*)(23l<<2|1);
var432 = (val*)((long)(0)<<2|3);
var433 = (val*)((long)(0)<<2|3);
var429 = core__flat___CString___to_s_unsafe(var428, var430, var431, var432, var433);
var427 = var429;
varonce426 = var427;
}
((struct instance_core__NativeArray*)var425)->values[1]=var427;
} else {
var425 = varonce424;
varonce424 = NULL;
}
{
var434 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:MMethodDef>*/
}
((struct instance_core__NativeArray*)var425)->values[0]=var434;
{
var435 = nitc___nitc__MProperty___nitc__model_base__MEntity__full_name(var_mprop);
}
((struct instance_core__NativeArray*)var425)->values[2]=var435;
{
var436 = ((val*(*)(val* self))(var425->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var425); /* native_to_s on <var425:NativeArray[String]>*/
}
varonce424 = var425;
{
nitc___nitc__ToolContext___info(var421, var436, 4l); /* Direct call toolcontext$ToolContext$info on <var421:ToolContext>*/
}
} else {
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var439 = var_modelbuilder->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var_modelbuilder:ModelBuilder> */
if (unlikely(var439 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var437 = var439;
RET_LABEL438:(void)0;
}
}
if (unlikely(varonce440==NULL)) {
var441 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce442!=NULL)) {
var443 = varonce442;
} else {
var444 = " redefines method ";
var446 = (val*)(18l<<2|1);
var447 = (val*)(18l<<2|1);
var448 = (val*)((long)(0)<<2|3);
var449 = (val*)((long)(0)<<2|3);
var445 = core__flat___CString___to_s_unsafe(var444, var446, var447, var448, var449);
var443 = var445;
varonce442 = var443;
}
((struct instance_core__NativeArray*)var441)->values[1]=var443;
} else {
var441 = varonce440;
varonce440 = NULL;
}
{
var450 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:MMethodDef>*/
}
((struct instance_core__NativeArray*)var441)->values[0]=var450;
{
var451 = nitc___nitc__MProperty___nitc__model_base__MEntity__full_name(var_mprop);
}
((struct instance_core__NativeArray*)var441)->values[2]=var451;
{
var452 = ((val*(*)(val* self))(var441->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var441); /* native_to_s on <var441:NativeArray[String]>*/
}
varonce440 = var441;
{
nitc___nitc__ToolContext___info(var437, var452, 4l); /* Direct call toolcontext$ToolContext$info on <var437:ToolContext>*/
}
}
RET_LABEL:;
}
/* method modelize_property$AMethPropdef$build_signature for (self: AMethPropdef, ModelBuilder) */
void nitc__modelize_property___AMethPropdef___APropdef__build_signature(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var /* : nullable MPropDef */;
val* var2 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MMethodDef */;
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
val* var15 /* : nullable ASignature */;
val* var17 /* : nullable ASignature */;
val* var_nsig /* var nsig: nullable ASignature */;
short int var18 /* : Bool */;
val* var19 /* : MProperty */;
val* var21 /* : MProperty */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var_ /* var : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : MClass */;
val* var29 /* : MClass */;
val* var30 /* : nullable MMethodDef */;
val* var32 /* : nullable MMethodDef */;
val* var_root_init /* var root_init: nullable MMethodDef */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
val* var_other36 /* var other: nullable Object */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
val* var39 /* : nullable MSignature */;
val* var41 /* : nullable MSignature */;
val* var43 /* : Array[MProperty] */;
val* var45 /* : Array[MProperty] */;
short int var46 /* : Bool */;
val* var47 /* : Array[MProperty] */;
val* var49 /* : Array[MProperty] */;
val* var50 /* : Array[MProperty] */;
val* var52 /* : Array[MProperty] */;
short int var53 /* : Bool */;
val* var54 /* : nullable AMethid */;
val* var56 /* : nullable AMethid */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
short int var60 /* : Bool */;
short int var62 /* : Bool */;
short int var_63 /* var : Bool */;
val* var64 /* : nullable AMethid */;
val* var66 /* : nullable AMethid */;
short int var67 /* : Bool */;
short int var_accept_special_last_parameter /* var accept_special_last_parameter: Bool */;
short int var68 /* : Bool */;
val* var69 /* : nullable AMethid */;
val* var71 /* : nullable AMethid */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
short int var_77 /* var : Bool */;
val* var78 /* : nullable AMethid */;
val* var80 /* : nullable AMethid */;
short int var81 /* : Bool */;
short int var_return_is_mandatory /* var return_is_mandatory: Bool */;
val* var82 /* : Array[String] */;
val* var_param_names /* var param_names: Array[String] */;
val* var83 /* : Array[MType] */;
val* var_param_types /* var param_types: Array[MType] */;
long var84 /* : Int */;
long var86 /* : Int */;
long var_vararg_rank /* var vararg_rank: Int */;
val* var_ret_type /* var ret_type: nullable MType */;
short int var87 /* : Bool */;
short int var88 /* : Bool */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
short int var92 /* : Bool */;
short int var93 /* : Bool */;
val* var94 /* : Array[String] */;
val* var96 /* : Array[String] */;
val* var97 /* : Array[MType] */;
val* var99 /* : Array[MType] */;
long var100 /* : Int */;
long var102 /* : Int */;
val* var103 /* : nullable MType */;
val* var105 /* : nullable MType */;
val* var_msignature /* var msignature: nullable MSignature */;
short int var106 /* : Bool */;
short int var107 /* : Bool */;
val* var108 /* : MProperty */;
val* var110 /* : MProperty */;
val* var111 /* : MPropDef */;
val* var113 /* : MPropDef */;
val* var114 /* : nullable MSignature */;
val* var116 /* : nullable MSignature */;
short int var117 /* : Bool */;
short int var118 /* : Bool */;
short int var120 /* : Bool */;
short int var122 /* : Bool */;
val* var123 /* : MClass */;
val* var125 /* : MClass */;
val* var126 /* : MClassType */;
val* var128 /* : MClassType */;
val* var129 /* : MClassType */;
val* var131 /* : MClassType */;
val* var132 /* : MSignature */;
long var133 /* : Int */;
long var135 /* : Int */;
long var136 /* : Int */;
short int var137 /* : Bool */;
short int var139 /* : Bool */;
short int var140 /* : Bool */;
short int var141 /* : Bool */;
short int var142 /* : Bool */;
short int var144 /* : Bool */;
short int var145 /* : Bool */;
val* var_node /* var node: ANode */;
val* var146 /* : NativeArray[String] */;
static val* varonce;
static val* varonce147;
val* var148 /* : String */;
char* var149 /* : CString */;
val* var150 /* : String */;
val* var151 /* : nullable Int */;
val* var152 /* : nullable Int */;
val* var153 /* : nullable Bool */;
val* var154 /* : nullable Bool */;
static val* varonce155;
val* var156 /* : String */;
char* var157 /* : CString */;
val* var158 /* : String */;
val* var159 /* : nullable Int */;
val* var160 /* : nullable Int */;
val* var161 /* : nullable Bool */;
val* var162 /* : nullable Bool */;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : CString */;
val* var166 /* : String */;
val* var167 /* : nullable Int */;
val* var168 /* : nullable Int */;
val* var169 /* : nullable Bool */;
val* var170 /* : nullable Bool */;
static val* varonce171;
val* var172 /* : String */;
char* var173 /* : CString */;
val* var174 /* : String */;
val* var175 /* : nullable Int */;
val* var176 /* : nullable Int */;
val* var177 /* : nullable Bool */;
val* var178 /* : nullable Bool */;
static val* varonce179;
val* var180 /* : String */;
char* var181 /* : CString */;
val* var182 /* : String */;
val* var183 /* : nullable Int */;
val* var184 /* : nullable Int */;
val* var185 /* : nullable Bool */;
val* var186 /* : nullable Bool */;
long var187 /* : Int */;
val* var188 /* : String */;
val* var189 /* : MProperty */;
val* var191 /* : MProperty */;
val* var192 /* : String */;
val* var194 /* : String */;
val* var195 /* : String */;
long var196 /* : Int */;
long var198 /* : Int */;
val* var199 /* : String */;
val* var200 /* : MProperty */;
val* var202 /* : MProperty */;
val* var203 /* : String */;
val* var204 /* : String */;
short int var205 /* : Bool */;
val* var206 /* : MProperty */;
val* var208 /* : MProperty */;
short int var209 /* : Bool */;
short int var211 /* : Bool */;
short int var_212 /* var : Bool */;
val* var213 /* : MProperty */;
val* var215 /* : MProperty */;
short int var216 /* : Bool */;
short int var218 /* : Bool */;
short int var219 /* : Bool */;
val* var220 /* : Array[MClassType] */;
val* var222 /* : Array[MClassType] */;
val* var_223 /* var : Array[MClassType] */;
val* var224 /* : IndexedIterator[nullable Object] */;
val* var_225 /* var : IndexedIterator[MClassType] */;
short int var226 /* : Bool */;
val* var227 /* : nullable Object */;
val* var_msupertype /* var msupertype: MClassType */;
val* var228 /* : MClassType */;
val* var230 /* : MClassType */;
val* var231 /* : MClassType */;
val* var232 /* : MProperty */;
val* var234 /* : MProperty */;
val* var235 /* : String */;
val* var237 /* : String */;
val* var238 /* : nullable MProperty */;
val* var_candidate /* var candidate: nullable MProperty */;
short int var239 /* : Bool */;
short int var240 /* : Bool */;
short int var242 /* : Bool */;
short int var243 /* : Bool */;
short int var244 /* : Bool */;
short int var245 /* : Bool */;
short int var247 /* : Bool */;
short int var249 /* : Bool */;
val* var250 /* : MPropDef */;
val* var252 /* : MPropDef */;
short int var253 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var254 /* : nullable MSignature */;
val* var256 /* : nullable MSignature */;
short int var257 /* : Bool */;
short int var258 /* : Bool */;
short int var259 /* : Bool */;
short int var260 /* : Bool */;
short int var261 /* : Bool */;
short int var263 /* : Bool */;
short int var264 /* : Bool */;
short int var_265 /* var : Bool */;
long var266 /* : Int */;
long var268 /* : Int */;
long var269 /* : Int */;
long var271 /* : Int */;
short int var272 /* : Bool */;
short int var274 /* : Bool */;
short int var275 /* : Bool */;
short int var_276 /* var : Bool */;
long var277 /* : Int */;
long var279 /* : Int */;
long var280 /* : Int */;
short int var281 /* : Bool */;
short int var283 /* : Bool */;
short int var_284 /* var : Bool */;
long var285 /* : Int */;
long var287 /* : Int */;
short int var288 /* : Bool */;
short int var290 /* : Bool */;
val* var291 /* : Array[MType] */;
val* var292 /* : Array[MParameter] */;
val* var294 /* : Array[MParameter] */;
val* var_295 /* var : Array[MParameter] */;
val* var296 /* : IndexedIterator[nullable Object] */;
val* var_297 /* var : IndexedIterator[MParameter] */;
short int var298 /* : Bool */;
val* var300 /* : nullable Object */;
val* var_mparameter /* var mparameter: MParameter */;
val* var301 /* : MType */;
val* var303 /* : MType */;
long var304 /* : Int */;
long var306 /* : Int */;
short int var307 /* : Bool */;
short int var308 /* : Bool */;
short int var309 /* : Bool */;
short int var311 /* : Bool */;
short int var312 /* : Bool */;
short int var_313 /* var : Bool */;
short int var314 /* : Bool */;
short int var315 /* : Bool */;
short int var317 /* : Bool */;
short int var319 /* : Bool */;
val* var320 /* : nullable MType */;
val* var322 /* : nullable MType */;
long var323 /* : Int */;
long var325 /* : Int */;
long var326 /* : Int */;
long var328 /* : Int */;
short int var329 /* : Bool */;
short int var331 /* : Bool */;
short int var332 /* : Bool */;
val* var333 /* : ANodes[AParam] */;
val* var335 /* : ANodes[AParam] */;
long var336 /* : Int */;
long var338 /* : Int */;
val* var339 /* : ANode */;
val* var341 /* : NativeArray[String] */;
static val* varonce340;
static val* varonce342;
val* var343 /* : String */;
char* var344 /* : CString */;
val* var345 /* : String */;
val* var346 /* : nullable Int */;
val* var347 /* : nullable Int */;
val* var348 /* : nullable Bool */;
val* var349 /* : nullable Bool */;
static val* varonce350;
val* var351 /* : String */;
char* var352 /* : CString */;
val* var353 /* : String */;
val* var354 /* : nullable Int */;
val* var355 /* : nullable Int */;
val* var356 /* : nullable Bool */;
val* var357 /* : nullable Bool */;
long var358 /* : Int */;
long var360 /* : Int */;
val* var361 /* : nullable Object */;
val* var362 /* : String */;
val* var363 /* : Array[MParameter] */;
val* var_mparameters /* var mparameters: Array[MParameter] */;
long var_i /* var i: Int */;
long var364 /* : Int */;
long var366 /* : Int */;
long var_367 /* var : Int */;
short int var368 /* : Bool */;
short int var370 /* : Bool */;
int cltype371;
int idtype372;
const char* var_class_name373;
short int var374 /* : Bool */;
val* var376 /* : MParameter */;
val* var377 /* : nullable Object */;
val* var378 /* : nullable Object */;
short int var379 /* : Bool */;
short int var381 /* : Bool */;
val* var_mparameter382 /* var mparameter: MParameter */;
short int var383 /* : Bool */;
short int var384 /* : Bool */;
short int var386 /* : Bool */;
short int var387 /* : Bool */;
val* var388 /* : ANodes[AParam] */;
val* var390 /* : ANodes[AParam] */;
val* var391 /* : ANode */;
long var393 /* : Int */;
short int var394 /* : Bool */;
short int var395 /* : Bool */;
short int var396 /* : Bool */;
short int var398 /* : Bool */;
short int var400 /* : Bool */;
short int var_401 /* var : Bool */;
val* var402 /* : MProperty */;
val* var404 /* : MProperty */;
short int var405 /* : Bool */;
short int var407 /* : Bool */;
val* var408 /* : MClass */;
val* var410 /* : MClass */;
val* var411 /* : MClassType */;
val* var413 /* : MClassType */;
short int var414 /* : Bool */;
short int var415 /* : Bool */;
short int var416 /* : Bool */;
short int var_417 /* var : Bool */;
short int var418 /* : Bool */;
short int var_419 /* var : Bool */;
val* var420 /* : nullable Object */;
short int var421 /* : Bool */;
short int var423 /* : Bool */;
val* var424 /* : nullable ASignature */;
val* var426 /* : nullable ASignature */;
val* var427 /* : ANodes[AParam] */;
val* var429 /* : ANodes[AParam] */;
val* var430 /* : nullable Object */;
val* var432 /* : NativeArray[String] */;
static val* varonce431;
static val* varonce433;
val* var434 /* : String */;
char* var435 /* : CString */;
val* var436 /* : String */;
val* var437 /* : nullable Int */;
val* var438 /* : nullable Int */;
val* var439 /* : nullable Bool */;
val* var440 /* : nullable Bool */;
static val* varonce441;
val* var442 /* : String */;
char* var443 /* : CString */;
val* var444 /* : String */;
val* var445 /* : nullable Int */;
val* var446 /* : nullable Int */;
val* var447 /* : nullable Bool */;
val* var448 /* : nullable Bool */;
static val* varonce449;
val* var450 /* : String */;
char* var451 /* : CString */;
val* var452 /* : String */;
val* var453 /* : nullable Int */;
val* var454 /* : nullable Int */;
val* var455 /* : nullable Bool */;
val* var456 /* : nullable Bool */;
val* var457 /* : nullable Object */;
val* var458 /* : String */;
val* var459 /* : MProperty */;
val* var461 /* : MProperty */;
val* var462 /* : String */;
val* var464 /* : String */;
val* var465 /* : String */;
short int var466 /* : Bool */;
short int var467 /* : Bool */;
short int var468 /* : Bool */;
short int var470 /* : Bool */;
short int var472 /* : Bool */;
short int var_473 /* var : Bool */;
val* var474 /* : nullable AMethid */;
val* var476 /* : nullable AMethid */;
val* var478 /* : NativeArray[String] */;
static val* varonce477;
static val* varonce479;
val* var480 /* : String */;
char* var481 /* : CString */;
val* var482 /* : String */;
val* var483 /* : nullable Int */;
val* var484 /* : nullable Int */;
val* var485 /* : nullable Bool */;
val* var486 /* : nullable Bool */;
static val* varonce487;
val* var488 /* : String */;
char* var489 /* : CString */;
val* var490 /* : String */;
val* var491 /* : nullable Int */;
val* var492 /* : nullable Int */;
val* var493 /* : nullable Bool */;
val* var494 /* : nullable Bool */;
val* var495 /* : MProperty */;
val* var497 /* : MProperty */;
val* var498 /* : String */;
val* var500 /* : String */;
val* var501 /* : String */;
val* var502 /* : MSignature */;
static val* varonce504;
val* var505 /* : String */;
char* var506 /* : CString */;
val* var507 /* : String */;
val* var508 /* : nullable Int */;
val* var509 /* : nullable Int */;
val* var510 /* : nullable Bool */;
val* var511 /* : nullable Bool */;
val* var512 /* : nullable AAnnotation */;
short int var513 /* : Bool */;
short int var514 /* : Bool */;
short int var516 /* : Bool */;
short int var517 /* : Bool */;
static val* varonce519;
val* var520 /* : String */;
char* var521 /* : CString */;
val* var522 /* : String */;
val* var523 /* : nullable Int */;
val* var524 /* : nullable Int */;
val* var525 /* : nullable Bool */;
val* var526 /* : nullable Bool */;
val* var527 /* : nullable AAnnotation */;
short int var528 /* : Bool */;
short int var529 /* : Bool */;
short int var531 /* : Bool */;
short int var532 /* : Bool */;
short int var534 /* : Bool */;
val* var535 /* : nullable AExternCodeBlock */;
val* var537 /* : nullable AExternCodeBlock */;
short int var538 /* : Bool */;
short int var539 /* : Bool */;
short int var541 /* : Bool */;
short int var542 /* : Bool */;
short int var_543 /* var : Bool */;
static val* varonce544;
val* var545 /* : String */;
char* var546 /* : CString */;
val* var547 /* : String */;
val* var548 /* : nullable Int */;
val* var549 /* : nullable Int */;
val* var550 /* : nullable Bool */;
val* var551 /* : nullable Bool */;
val* var552 /* : nullable AAnnotation */;
short int var553 /* : Bool */;
short int var554 /* : Bool */;
short int var556 /* : Bool */;
short int var557 /* : Bool */;
static val* varonce559;
val* var560 /* : String */;
char* var561 /* : CString */;
val* var562 /* : String */;
val* var563 /* : nullable Int */;
val* var564 /* : nullable Int */;
val* var565 /* : nullable Bool */;
val* var566 /* : nullable Bool */;
val* var567 /* : nullable AAnnotation */;
val* var_at /* var at: nullable AAnnotation */;
short int var568 /* : Bool */;
short int var569 /* : Bool */;
short int var571 /* : Bool */;
short int var572 /* : Bool */;
static val* varonce573;
val* var574 /* : String */;
char* var575 /* : CString */;
val* var576 /* : String */;
val* var577 /* : nullable Int */;
val* var578 /* : nullable Int */;
val* var579 /* : nullable Bool */;
val* var580 /* : nullable Bool */;
static val* varonce581;
val* var582 /* : String */;
char* var583 /* : CString */;
val* var584 /* : String */;
val* var585 /* : nullable Int */;
val* var586 /* : nullable Int */;
val* var587 /* : nullable Bool */;
val* var588 /* : nullable Bool */;
val* var589 /* : nullable AAnnotation */;
val* var_atautoinit /* var atautoinit: nullable AAnnotation */;
short int var590 /* : Bool */;
short int var591 /* : Bool */;
short int var593 /* : Bool */;
short int var594 /* : Bool */;
short int var595 /* : Bool */;
short int var596 /* : Bool */;
static val* varonce597;
val* var598 /* : String */;
char* var599 /* : CString */;
val* var600 /* : String */;
val* var601 /* : nullable Int */;
val* var602 /* : nullable Int */;
val* var603 /* : nullable Bool */;
val* var604 /* : nullable Bool */;
short int var605 /* : Bool */;
short int var606 /* : Bool */;
static val* varonce607;
val* var608 /* : String */;
char* var609 /* : CString */;
val* var610 /* : String */;
val* var611 /* : nullable Int */;
val* var612 /* : nullable Int */;
val* var613 /* : nullable Bool */;
val* var614 /* : nullable Bool */;
var_modelbuilder = p0;
{
{ /* Inline modelize_property$APropdef$mpropdef (self) on <self:AMethPropdef> */
var2 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
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
{ /* Inline kernel$Object$== (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MMethodDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mpropdef,var_other) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
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
{ /* Inline model$MPropDef$mclassdef (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var11 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_mclassdef = var9;
{
{ /* Inline model$MClassDef$mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var14 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_mmodule = var12;
{
{ /* Inline parser_nodes$AMethPropdef$n_signature (self) on <self:AMethPropdef> */
var17 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_nsig = var15;
{
{ /* Inline model$MPropDef$mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var21 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline model$MMethod$is_root_init (var19) on <var19:MProperty(MMethod)> */
var24 = var19->attrs[COLOR_nitc__model__MMethod___is_root_init].s; /* _is_root_init on <var19:MProperty(MMethod)> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
var_ = var22;
if (var22){
{
var25 = nitc___nitc__MClassDef___is_intro(var_mclassdef);
}
var26 = !var25;
var18 = var26;
} else {
var18 = var_;
}
if (var18){
{
{ /* Inline model$MClassDef$mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var29 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline modelize_property$MClass$root_init (var27) on <var27:MClass> */
var32 = var27->attrs[COLOR_nitc__modelize_property__MClass___root_init].val; /* _root_init on <var27:MClass> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
var_root_init = var30;
if (var_root_init == NULL) {
var33 = 0; /* is null */
} else {
var33 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_root_init,((val*)NULL)) on <var_root_init:nullable MMethodDef> */
var_other36 = ((val*)NULL);
{
var37 = ((short int(*)(val* self, val* p0))(var_root_init->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_root_init, var_other36); /* == on <var_root_init:nullable MMethodDef(MMethodDef)>*/
}
var38 = !var37;
var34 = var38;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
var33 = var34;
}
if (var33){
{
{ /* Inline model$MMethodDef$new_msignature (var_root_init) on <var_root_init:nullable MMethodDef(MMethodDef)> */
var41 = var_root_init->attrs[COLOR_nitc__model__MMethodDef___new_msignature].val; /* _new_msignature on <var_root_init:nullable MMethodDef(MMethodDef)> */
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline model$MMethodDef$new_msignature= (var_mpropdef,var39) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___new_msignature].val = var39; /* _new_msignature on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL42:(void)0;
}
}
{
{ /* Inline model$MMethodDef$initializers (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var45 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var45 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2492);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
var46 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var43);
}
if (unlikely(!var46)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 886);
fatal_exit(1);
}
{
{ /* Inline model$MMethodDef$initializers (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var49 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var49 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2492);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline model$MMethodDef$initializers (var_root_init) on <var_root_init:nullable MMethodDef(MMethodDef)> */
var52 = var_root_init->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var_root_init:nullable MMethodDef(MMethodDef)> */
if (unlikely(var52 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2492);
fatal_exit(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var47, var50); /* Direct call array$Array$add_all on <var47:Array[MProperty]>*/
}
} else {
}
} else {
}
{
{ /* Inline parser_nodes$AMethPropdef$n_methid (self) on <self:AMethPropdef> */
var56 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
var54 = var56;
RET_LABEL55:(void)0;
}
}
if (var54 == NULL) {
var57 = 1; /* is null */
} else {
var57 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var54,((val*)NULL)) on <var54:nullable AMethid> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var54,var_other) on <var54:nullable AMethid(AMethid)> */
var62 = var54 == var_other;
var60 = var62;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
var58 = var60;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
var57 = var58;
}
var_63 = var57;
if (var57){
var53 = var_63;
} else {
{
{ /* Inline parser_nodes$AMethPropdef$n_methid (self) on <self:AMethPropdef> */
var66 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
var64 = var66;
RET_LABEL65:(void)0;
}
}
if (var64 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 891);
fatal_exit(1);
} else {
var67 = ((short int(*)(val* self))(var64->class->vft[COLOR_nitc__modelize_property__AMethid__accept_special_last_parameter]))(var64); /* accept_special_last_parameter on <var64:nullable AMethid>*/
}
var53 = var67;
}
var_accept_special_last_parameter = var53;
{
{ /* Inline parser_nodes$AMethPropdef$n_methid (self) on <self:AMethPropdef> */
var71 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
var69 = var71;
RET_LABEL70:(void)0;
}
}
if (var69 == NULL) {
var72 = 0; /* is null */
} else {
var72 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var69,((val*)NULL)) on <var69:nullable AMethid> */
var_other36 = ((val*)NULL);
{
var75 = ((short int(*)(val* self, val* p0))(var69->class->vft[COLOR_core__kernel__Object___61d_61d]))(var69, var_other36); /* == on <var69:nullable AMethid(AMethid)>*/
}
var76 = !var75;
var73 = var76;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
var72 = var73;
}
var_77 = var72;
if (var72){
{
{ /* Inline parser_nodes$AMethPropdef$n_methid (self) on <self:AMethPropdef> */
var80 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
var78 = var80;
RET_LABEL79:(void)0;
}
}
if (var78 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 892);
fatal_exit(1);
} else {
var81 = ((short int(*)(val* self))(var78->class->vft[COLOR_nitc__modelize_property__AMethid__return_is_mandatory]))(var78); /* return_is_mandatory on <var78:nullable AMethid>*/
}
var68 = var81;
} else {
var68 = var_77;
}
var_return_is_mandatory = var68;
var82 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var82); /* Direct call array$Array$init on <var82:Array[String]>*/
}
var_param_names = var82;
var83 = NEW_core__Array(&type_core__Array__nitc__MType);
{
core___core__Array___core__kernel__Object__init(var83); /* Direct call array$Array$init on <var83:Array[MType]>*/
}
var_param_types = var83;
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var86 = -1l;
var84 = var86;
goto RET_LABEL85;
RET_LABEL85:(void)0;
}
}
var_vararg_rank = var84;
var_ret_type = ((val*)NULL);
if (var_nsig == NULL) {
var87 = 0; /* is null */
} else {
var87 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_nsig,((val*)NULL)) on <var_nsig:nullable ASignature> */
var_other36 = ((val*)NULL);
{
var90 = ((short int(*)(val* self, val* p0))(var_nsig->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nsig, var_other36); /* == on <var_nsig:nullable ASignature(ASignature)>*/
}
var91 = !var90;
var88 = var91;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
var87 = var88;
}
if (var87){
{
var92 = nitc__modelize_property___ASignature___visit_signature(var_nsig, var_modelbuilder, var_mclassdef);
}
var93 = !var92;
if (var93){
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property$ASignature$param_names (var_nsig) on <var_nsig:nullable ASignature(ASignature)> */
var96 = var_nsig->attrs[COLOR_nitc__modelize_property__ASignature___param_names].val; /* _param_names on <var_nsig:nullable ASignature(ASignature)> */
if (unlikely(var96 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _param_names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 659);
fatal_exit(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
var_param_names = var94;
{
{ /* Inline modelize_property$ASignature$param_types (var_nsig) on <var_nsig:nullable ASignature(ASignature)> */
var99 = var_nsig->attrs[COLOR_nitc__modelize_property__ASignature___param_types].val; /* _param_types on <var_nsig:nullable ASignature(ASignature)> */
if (unlikely(var99 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _param_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 662);
fatal_exit(1);
}
var97 = var99;
RET_LABEL98:(void)0;
}
}
var_param_types = var97;
{
{ /* Inline modelize_property$ASignature$vararg_rank (var_nsig) on <var_nsig:nullable ASignature(ASignature)> */
var102 = var_nsig->attrs[COLOR_nitc__modelize_property__ASignature___vararg_rank].l; /* _vararg_rank on <var_nsig:nullable ASignature(ASignature)> */
var100 = var102;
RET_LABEL101:(void)0;
}
}
var_vararg_rank = var100;
{
{ /* Inline modelize_property$ASignature$ret_type (var_nsig) on <var_nsig:nullable ASignature(ASignature)> */
var105 = var_nsig->attrs[COLOR_nitc__modelize_property__ASignature___ret_type].val; /* _ret_type on <var_nsig:nullable ASignature(ASignature)> */
var103 = var105;
RET_LABEL104:(void)0;
}
}
var_ret_type = var103;
} else {
}
var_msignature = ((val*)NULL);
{
var106 = nitc___nitc__MPropDef___is_intro(var_mpropdef);
}
var107 = !var106;
if (var107){
{
{ /* Inline model$MPropDef$mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var110 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var110 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var108 = var110;
RET_LABEL109:(void)0;
}
}
{
{ /* Inline model$MProperty$intro (var108) on <var108:MProperty(MMethod)> */
var113 = var108->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var108:MProperty(MMethod)> */
if (unlikely(var113 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var111 = var113;
RET_LABEL112:(void)0;
}
}
{
{ /* Inline model$MMethodDef$msignature (var111) on <var111:MPropDef(MMethodDef)> */
var116 = var111->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var111:MPropDef(MMethodDef)> */
var114 = var116;
RET_LABEL115:(void)0;
}
}
var_msignature = var114;
if (var_msignature == NULL) {
var117 = 1; /* is null */
} else {
var117 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_msignature,((val*)NULL)) on <var_msignature:nullable MSignature> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_msignature,var_other) on <var_msignature:nullable MSignature(MSignature)> */
var122 = var_msignature == var_other;
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
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MClassDef$mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var125 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var125 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var123 = var125;
RET_LABEL124:(void)0;
}
}
{
{ /* Inline model$MClass$mclass_type (var123) on <var123:MClass> */
var128 = var123->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var123:MClass> */
if (unlikely(var128 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var126 = var128;
RET_LABEL127:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var131 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var131 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var129 = var131;
RET_LABEL130:(void)0;
}
}
{
var132 = nitc___nitc__MSignature___MType__resolve_for(var_msignature, var126, var129, var_mmodule, 0);
}
var_msignature = var132;
{
{ /* Inline array$AbstractArrayRead$length (var_param_names) on <var_param_names:Array[String]> */
var135 = var_param_names->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_param_names:Array[String]> */
var133 = var135;
RET_LABEL134:(void)0;
}
}
{
var136 = nitc___nitc__MSignature___arity(var_msignature);
}
{
{ /* Inline kernel$Int$!= (var133,var136) on <var133:Int> */
var139 = var133 == var136;
var140 = !var139;
var137 = var140;
goto RET_LABEL138;
RET_LABEL138:(void)0;
}
}
if (var137){
if (var_nsig == NULL) {
var141 = 0; /* is null */
} else {
var141 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_nsig,((val*)NULL)) on <var_nsig:nullable ASignature> */
var_other36 = ((val*)NULL);
{
var144 = ((short int(*)(val* self, val* p0))(var_nsig->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nsig, var_other36); /* == on <var_nsig:nullable ASignature(ASignature)>*/
}
var145 = !var144;
var142 = var145;
goto RET_LABEL143;
RET_LABEL143:(void)0;
}
var141 = var142;
}
if (var141){
var_node = var_nsig;
} else {
var_node = self;
}
if (unlikely(varonce==NULL)) {
var146 = NEW_core__NativeArray((int)10l, &type_core__NativeArray__core__String);
if (likely(varonce147!=NULL)) {
var148 = varonce147;
} else {
var149 = "Redef Error: expected ";
var151 = (val*)(22l<<2|1);
var152 = (val*)(22l<<2|1);
var153 = (val*)((long)(0)<<2|3);
var154 = (val*)((long)(0)<<2|3);
var150 = core__flat___CString___to_s_unsafe(var149, var151, var152, var153, var154);
var148 = var150;
varonce147 = var148;
}
((struct instance_core__NativeArray*)var146)->values[0]=var148;
if (likely(varonce155!=NULL)) {
var156 = varonce155;
} else {
var157 = " parameter(s) for `";
var159 = (val*)(19l<<2|1);
var160 = (val*)(19l<<2|1);
var161 = (val*)((long)(0)<<2|3);
var162 = (val*)((long)(0)<<2|3);
var158 = core__flat___CString___to_s_unsafe(var157, var159, var160, var161, var162);
var156 = var158;
varonce155 = var156;
}
((struct instance_core__NativeArray*)var146)->values[2]=var156;
if (likely(varonce163!=NULL)) {
var164 = varonce163;
} else {
var165 = "`; got ";
var167 = (val*)(7l<<2|1);
var168 = (val*)(7l<<2|1);
var169 = (val*)((long)(0)<<2|3);
var170 = (val*)((long)(0)<<2|3);
var166 = core__flat___CString___to_s_unsafe(var165, var167, var168, var169, var170);
var164 = var166;
varonce163 = var164;
}
((struct instance_core__NativeArray*)var146)->values[5]=var164;
if (likely(varonce171!=NULL)) {
var172 = varonce171;
} else {
var173 = ". See introduction at `";
var175 = (val*)(23l<<2|1);
var176 = (val*)(23l<<2|1);
var177 = (val*)((long)(0)<<2|3);
var178 = (val*)((long)(0)<<2|3);
var174 = core__flat___CString___to_s_unsafe(var173, var175, var176, var177, var178);
var172 = var174;
varonce171 = var172;
}
((struct instance_core__NativeArray*)var146)->values[7]=var172;
if (likely(varonce179!=NULL)) {
var180 = varonce179;
} else {
var181 = "`.";
var183 = (val*)(2l<<2|1);
var184 = (val*)(2l<<2|1);
var185 = (val*)((long)(0)<<2|3);
var186 = (val*)((long)(0)<<2|3);
var182 = core__flat___CString___to_s_unsafe(var181, var183, var184, var185, var186);
var180 = var182;
varonce179 = var180;
}
((struct instance_core__NativeArray*)var146)->values[9]=var180;
} else {
var146 = varonce;
varonce = NULL;
}
{
var187 = nitc___nitc__MSignature___arity(var_msignature);
}
var188 = core__flat___Int___core__abstract_text__Object__to_s(var187);
((struct instance_core__NativeArray*)var146)->values[1]=var188;
{
{ /* Inline model$MPropDef$mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var191 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var191 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var189 = var191;
RET_LABEL190:(void)0;
}
}
{
{ /* Inline model$MProperty$name (var189) on <var189:MProperty(MMethod)> */
var194 = var189->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var189:MProperty(MMethod)> */
if (unlikely(var194 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var192 = var194;
RET_LABEL193:(void)0;
}
}
((struct instance_core__NativeArray*)var146)->values[3]=var192;
{
var195 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_msignature); /* to_s on <var_msignature:nullable MSignature(MSignature)>*/
}
((struct instance_core__NativeArray*)var146)->values[4]=var195;
{
{ /* Inline array$AbstractArrayRead$length (var_param_names) on <var_param_names:Array[String]> */
var198 = var_param_names->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_param_names:Array[String]> */
var196 = var198;
RET_LABEL197:(void)0;
}
}
var199 = core__flat___Int___core__abstract_text__Object__to_s(var196);
((struct instance_core__NativeArray*)var146)->values[6]=var199;
{
{ /* Inline model$MPropDef$mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var202 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var202 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var200 = var202;
RET_LABEL201:(void)0;
}
}
{
var203 = nitc___nitc__MProperty___nitc__model_base__MEntity__full_name(var200);
}
((struct instance_core__NativeArray*)var146)->values[8]=var203;
{
var204 = ((val*(*)(val* self))(var146->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var146); /* native_to_s on <var146:NativeArray[String]>*/
}
varonce = var146;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_node, var204); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
} else {
{
{ /* Inline model$MPropDef$mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var208 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var208 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var206 = var208;
RET_LABEL207:(void)0;
}
}
{
{ /* Inline model$MMethod$is_init (var206) on <var206:MProperty(MMethod)> */
var211 = var206->attrs[COLOR_nitc__model__MMethod___is_init].s; /* _is_init on <var206:MProperty(MMethod)> */
var209 = var211;
RET_LABEL210:(void)0;
}
}
var_212 = var209;
if (var209){
{
{ /* Inline model$MPropDef$mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var215 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var215 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var213 = var215;
RET_LABEL214:(void)0;
}
}
{
{ /* Inline model$MMethod$is_new (var213) on <var213:MProperty(MMethod)> */
var218 = var213->attrs[COLOR_nitc__model__MMethod___is_new].s; /* _is_new on <var213:MProperty(MMethod)> */
var216 = var218;
RET_LABEL217:(void)0;
}
}
var219 = !var216;
var205 = var219;
} else {
var205 = var_212;
}
if (var205){
{
{ /* Inline model$MClassDef$supertypes (var_mclassdef) on <var_mclassdef:MClassDef> */
var222 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___supertypes].val; /* _supertypes on <var_mclassdef:MClassDef> */
if (unlikely(var222 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supertypes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 666);
fatal_exit(1);
}
var220 = var222;
RET_LABEL221:(void)0;
}
}
var_223 = var220;
{
var224 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_223);
}
var_225 = var224;
for(;;) {
{
var226 = ((short int(*)(val* self))((((long)var_225&3)?class_info[((long)var_225&3)]:var_225->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_225); /* is_ok on <var_225:IndexedIterator[MClassType]>*/
}
if (var226){
} else {
goto BREAK_label;
}
{
var227 = ((val*(*)(val* self))((((long)var_225&3)?class_info[((long)var_225&3)]:var_225->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_225); /* item on <var_225:IndexedIterator[MClassType]>*/
}
var_msupertype = var227;
{
{ /* Inline model$MClassDef$bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var230 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var230 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var228 = var230;
RET_LABEL229:(void)0;
}
}
{
var231 = nitc___nitc__MClassType___MType__anchor_to(var_msupertype, var_mmodule, var228);
}
var_msupertype = var231;
{
{ /* Inline model$MPropDef$mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var234 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var234 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var232 = var234;
RET_LABEL233:(void)0;
}
}
{
{ /* Inline model$MProperty$name (var232) on <var232:MProperty(MMethod)> */
var237 = var232->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var232:MProperty(MMethod)> */
if (unlikely(var237 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var235 = var237;
RET_LABEL236:(void)0;
}
}
{
var238 = nitc___nitc__ModelBuilder___try_get_mproperty_by_name2(var_modelbuilder, self, var_mmodule, var_msupertype, var235);
}
var_candidate = var238;
if (var_candidate == NULL) {
var239 = 0; /* is null */
} else {
var239 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_candidate,((val*)NULL)) on <var_candidate:nullable MProperty> */
var_other36 = ((val*)NULL);
{
var242 = ((short int(*)(val* self, val* p0))(var_candidate->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_candidate, var_other36); /* == on <var_candidate:nullable MProperty(MProperty)>*/
}
var243 = !var242;
var240 = var243;
goto RET_LABEL241;
RET_LABEL241:(void)0;
}
var239 = var240;
}
if (var239){
if (var_msignature == NULL) {
var244 = 1; /* is null */
} else {
var244 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_msignature,((val*)NULL)) on <var_msignature:nullable MSignature> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_msignature,var_other) on <var_msignature:nullable MSignature(MSignature)> */
var249 = var_msignature == var_other;
var247 = var249;
goto RET_LABEL248;
RET_LABEL248:(void)0;
}
}
var245 = var247;
goto RET_LABEL246;
RET_LABEL246:(void)0;
}
var244 = var245;
}
if (var244){
{
{ /* Inline model$MProperty$intro (var_candidate) on <var_candidate:nullable MProperty(MProperty)> */
var252 = var_candidate->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var_candidate:nullable MProperty(MProperty)> */
if (unlikely(var252 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var250 = var252;
RET_LABEL251:(void)0;
}
}
/* <var250:MPropDef> isa MMethodDef */
cltype = type_nitc__MMethodDef.color;
idtype = type_nitc__MMethodDef.id;
if(cltype >= var250->type->table_size) {
var253 = 0;
} else {
var253 = var250->type->type_table[cltype] == idtype;
}
if (unlikely(!var253)) {
var_class_name = var250 == NULL ? "null" : var250->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MMethodDef", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 931);
fatal_exit(1);
}
{
{ /* Inline model$MMethodDef$msignature (var250) on <var250:MPropDef(MMethodDef)> */
var256 = var250->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var250:MPropDef(MMethodDef)> */
var254 = var256;
RET_LABEL255:(void)0;
}
}
var_msignature = var254;
} else {
}
} else {
}
{
((void(*)(val* self))((((long)var_225&3)?class_info[((long)var_225&3)]:var_225->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_225); /* next on <var_225:IndexedIterator[MClassType]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_225&3)?class_info[((long)var_225&3)]:var_225->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_225); /* finish on <var_225:IndexedIterator[MClassType]>*/
}
} else {
}
}
if (var_msignature == NULL) {
var260 = 0; /* is null */
} else {
var260 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_msignature,((val*)NULL)) on <var_msignature:nullable MSignature> */
var_other36 = ((val*)NULL);
{
var263 = ((short int(*)(val* self, val* p0))(var_msignature->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_msignature, var_other36); /* == on <var_msignature:nullable MSignature(MSignature)>*/
}
var264 = !var263;
var261 = var264;
goto RET_LABEL262;
RET_LABEL262:(void)0;
}
var260 = var261;
}
var_265 = var260;
if (var260){
{
{ /* Inline array$AbstractArrayRead$length (var_param_names) on <var_param_names:Array[String]> */
var268 = var_param_names->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_param_names:Array[String]> */
var266 = var268;
RET_LABEL267:(void)0;
}
}
{
{ /* Inline array$AbstractArrayRead$length (var_param_types) on <var_param_types:Array[MType]> */
var271 = var_param_types->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_param_types:Array[MType]> */
var269 = var271;
RET_LABEL270:(void)0;
}
}
{
{ /* Inline kernel$Int$!= (var266,var269) on <var266:Int> */
var274 = var266 == var269;
var275 = !var274;
var272 = var275;
goto RET_LABEL273;
RET_LABEL273:(void)0;
}
}
var259 = var272;
} else {
var259 = var_265;
}
var_276 = var259;
if (var259){
{
{ /* Inline array$AbstractArrayRead$length (var_param_names) on <var_param_names:Array[String]> */
var279 = var_param_names->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_param_names:Array[String]> */
var277 = var279;
RET_LABEL278:(void)0;
}
}
{
var280 = nitc___nitc__MSignature___arity(var_msignature);
}
{
{ /* Inline kernel$Int$== (var277,var280) on <var277:Int> */
var283 = var277 == var280;
var281 = var283;
goto RET_LABEL282;
RET_LABEL282:(void)0;
}
}
var258 = var281;
} else {
var258 = var_276;
}
var_284 = var258;
if (var258){
{
{ /* Inline array$AbstractArrayRead$length (var_param_types) on <var_param_types:Array[MType]> */
var287 = var_param_types->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_param_types:Array[MType]> */
var285 = var287;
RET_LABEL286:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var285,0l) on <var285:Int> */
var290 = var285 == 0l;
var288 = var290;
goto RET_LABEL289;
RET_LABEL289:(void)0;
}
}
var257 = var288;
} else {
var257 = var_284;
}
if (var257){
var291 = NEW_core__Array(&type_core__Array__nitc__MType);
{
core___core__Array___core__kernel__Object__init(var291); /* Direct call array$Array$init on <var291:Array[MType]>*/
}
var_param_types = var291;
{
{ /* Inline model$MSignature$mparameters (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var294 = var_msignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:nullable MSignature(MSignature)> */
if (unlikely(var294 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var292 = var294;
RET_LABEL293:(void)0;
}
}
var_295 = var292;
{
var296 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_295);
}
var_297 = var296;
for(;;) {
{
var298 = ((short int(*)(val* self))((((long)var_297&3)?class_info[((long)var_297&3)]:var_297->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_297); /* is_ok on <var_297:IndexedIterator[MParameter]>*/
}
if (var298){
} else {
goto BREAK_label299;
}
{
var300 = ((val*(*)(val* self))((((long)var_297&3)?class_info[((long)var_297&3)]:var_297->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_297); /* item on <var_297:IndexedIterator[MParameter]>*/
}
var_mparameter = var300;
{
{ /* Inline model$MParameter$mtype (var_mparameter) on <var_mparameter:MParameter> */
var303 = var_mparameter->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_mparameter:MParameter> */
if (unlikely(var303 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var301 = var303;
RET_LABEL302:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_param_types, var301); /* Direct call array$Array$add on <var_param_types:Array[MType]>*/
}
{
((void(*)(val* self))((((long)var_297&3)?class_info[((long)var_297&3)]:var_297->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_297); /* next on <var_297:IndexedIterator[MParameter]>*/
}
}
BREAK_label299: (void)0;
{
((void(*)(val* self))((((long)var_297&3)?class_info[((long)var_297&3)]:var_297->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_297); /* finish on <var_297:IndexedIterator[MParameter]>*/
}
{
{ /* Inline model$MSignature$vararg_rank (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var306 = var_msignature->attrs[COLOR_nitc__model__MSignature___vararg_rank].l; /* _vararg_rank on <var_msignature:nullable MSignature(MSignature)> */
var304 = var306;
RET_LABEL305:(void)0;
}
}
var_vararg_rank = var304;
} else {
}
if (var_msignature == NULL) {
var308 = 0; /* is null */
} else {
var308 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_msignature,((val*)NULL)) on <var_msignature:nullable MSignature> */
var_other36 = ((val*)NULL);
{
var311 = ((short int(*)(val* self, val* p0))(var_msignature->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_msignature, var_other36); /* == on <var_msignature:nullable MSignature(MSignature)>*/
}
var312 = !var311;
var309 = var312;
goto RET_LABEL310;
RET_LABEL310:(void)0;
}
var308 = var309;
}
var_313 = var308;
if (var308){
if (var_ret_type == NULL) {
var314 = 1; /* is null */
} else {
var314 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_ret_type,((val*)NULL)) on <var_ret_type:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_ret_type,var_other) on <var_ret_type:nullable MType(MType)> */
var319 = var_ret_type == var_other;
var317 = var319;
goto RET_LABEL318;
RET_LABEL318:(void)0;
}
}
var315 = var317;
goto RET_LABEL316;
RET_LABEL316:(void)0;
}
var314 = var315;
}
var307 = var314;
} else {
var307 = var_313;
}
if (var307){
{
{ /* Inline model$MSignature$return_mtype (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var322 = var_msignature->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:nullable MSignature(MSignature)> */
var320 = var322;
RET_LABEL321:(void)0;
}
}
var_ret_type = var320;
} else {
}
{
{ /* Inline array$AbstractArrayRead$length (var_param_names) on <var_param_names:Array[String]> */
var325 = var_param_names->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_param_names:Array[String]> */
var323 = var325;
RET_LABEL324:(void)0;
}
}
{
{ /* Inline array$AbstractArrayRead$length (var_param_types) on <var_param_types:Array[MType]> */
var328 = var_param_types->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_param_types:Array[MType]> */
var326 = var328;
RET_LABEL327:(void)0;
}
}
{
{ /* Inline kernel$Int$!= (var323,var326) on <var323:Int> */
var331 = var323 == var326;
var332 = !var331;
var329 = var332;
goto RET_LABEL330;
RET_LABEL330:(void)0;
}
}
if (var329){
if (var_nsig == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 953);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ASignature$n_params (var_nsig) on <var_nsig:nullable ASignature> */
if (unlikely(var_nsig == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1746);
fatal_exit(1);
}
var335 = var_nsig->attrs[COLOR_nitc__parser_nodes__ASignature___n_params].val; /* _n_params on <var_nsig:nullable ASignature> */
if (unlikely(var335 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1746);
fatal_exit(1);
}
var333 = var335;
RET_LABEL334:(void)0;
}
}
{
{ /* Inline array$AbstractArrayRead$length (var_param_types) on <var_param_types:Array[MType]> */
var338 = var_param_types->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_param_types:Array[MType]> */
var336 = var338;
RET_LABEL337:(void)0;
}
}
{
var339 = nitc___nitc__ANodes___core__abstract_collection__SequenceRead___91d_93d(var333, var336);
}
if (unlikely(varonce340==NULL)) {
var341 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce342!=NULL)) {
var343 = varonce342;
} else {
var344 = "Error: untyped parameter `";
var346 = (val*)(26l<<2|1);
var347 = (val*)(26l<<2|1);
var348 = (val*)((long)(0)<<2|3);
var349 = (val*)((long)(0)<<2|3);
var345 = core__flat___CString___to_s_unsafe(var344, var346, var347, var348, var349);
var343 = var345;
varonce342 = var343;
}
((struct instance_core__NativeArray*)var341)->values[0]=var343;
if (likely(varonce350!=NULL)) {
var351 = varonce350;
} else {
var352 = "\'.";
var354 = (val*)(2l<<2|1);
var355 = (val*)(2l<<2|1);
var356 = (val*)((long)(0)<<2|3);
var357 = (val*)((long)(0)<<2|3);
var353 = core__flat___CString___to_s_unsafe(var352, var354, var355, var356, var357);
var351 = var353;
varonce350 = var351;
}
((struct instance_core__NativeArray*)var341)->values[2]=var351;
} else {
var341 = varonce340;
varonce340 = NULL;
}
{
{ /* Inline array$AbstractArrayRead$length (var_param_types) on <var_param_types:Array[MType]> */
var360 = var_param_types->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_param_types:Array[MType]> */
var358 = var360;
RET_LABEL359:(void)0;
}
}
{
var361 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_param_names, var358);
}
((struct instance_core__NativeArray*)var341)->values[1]=var361;
{
var362 = ((val*(*)(val* self))(var341->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var341); /* native_to_s on <var341:NativeArray[String]>*/
}
varonce340 = var341;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var339, var362); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
var363 = NEW_core__Array(&type_core__Array__nitc__MParameter);
{
core___core__Array___core__kernel__Object__init(var363); /* Direct call array$Array$init on <var363:Array[MParameter]>*/
}
var_mparameters = var363;
var_i = 0l;
{
{ /* Inline array$AbstractArrayRead$length (var_param_names) on <var_param_names:Array[String]> */
var366 = var_param_names->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_param_names:Array[String]> */
var364 = var366;
RET_LABEL365:(void)0;
}
}
var_367 = var364;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_367) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_367:Int> isa OTHER */
/* <var_367:Int> isa OTHER */
var370 = 1; /* easy <var_367:Int> isa OTHER*/
if (unlikely(!var370)) {
var_class_name373 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name373);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var374 = var_i < var_367;
var368 = var374;
goto RET_LABEL369;
RET_LABEL369:(void)0;
}
}
if (var368){
} else {
goto BREAK_label375;
}
var376 = NEW_nitc__MParameter(&type_nitc__MParameter);
{
var377 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_param_names, var_i);
}
{
var378 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_param_types, var_i);
}
{
{ /* Inline kernel$Int$== (var_i,var_vararg_rank) on <var_i:Int> */
var381 = var_i == var_vararg_rank;
var379 = var381;
goto RET_LABEL380;
RET_LABEL380:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var376->class->vft[COLOR_nitc__model__MParameter__name_61d]))(var376, var377); /* name= on <var376:MParameter>*/
}
{
((void(*)(val* self, val* p0))(var376->class->vft[COLOR_nitc__model__MParameter__mtype_61d]))(var376, var378); /* mtype= on <var376:MParameter>*/
}
{
((void(*)(val* self, short int p0))(var376->class->vft[COLOR_nitc__model__MParameter__is_vararg_61d]))(var376, var379); /* is_vararg= on <var376:MParameter>*/
}
{
((void(*)(val* self))(var376->class->vft[COLOR_core__kernel__Object__init]))(var376); /* init on <var376:MParameter>*/
}
var_mparameter382 = var376;
if (var_nsig == NULL) {
var383 = 0; /* is null */
} else {
var383 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_nsig,((val*)NULL)) on <var_nsig:nullable ASignature> */
var_other36 = ((val*)NULL);
{
var386 = ((short int(*)(val* self, val* p0))(var_nsig->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nsig, var_other36); /* == on <var_nsig:nullable ASignature(ASignature)>*/
}
var387 = !var386;
var384 = var387;
goto RET_LABEL385;
RET_LABEL385:(void)0;
}
var383 = var384;
}
if (var383){
{
{ /* Inline parser_nodes$ASignature$n_params (var_nsig) on <var_nsig:nullable ASignature(ASignature)> */
var390 = var_nsig->attrs[COLOR_nitc__parser_nodes__ASignature___n_params].val; /* _n_params on <var_nsig:nullable ASignature(ASignature)> */
if (unlikely(var390 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1746);
fatal_exit(1);
}
var388 = var390;
RET_LABEL389:(void)0;
}
}
{
var391 = nitc___nitc__ANodes___core__abstract_collection__SequenceRead___91d_93d(var388, var_i);
}
{
{ /* Inline modelize_property$AParam$mparameter= (var391,var_mparameter382) on <var391:ANode(AParam)> */
var391->attrs[COLOR_nitc__modelize_property__AParam___mparameter].val = var_mparameter382; /* _mparameter on <var391:ANode(AParam)> */
RET_LABEL392:(void)0;
}
}
} else {
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_mparameters, var_mparameter382); /* Direct call array$Array$add on <var_mparameters:Array[MParameter]>*/
}
{
var393 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var393;
}
BREAK_label375: (void)0;
if (var_ret_type == NULL) {
var395 = 1; /* is null */
} else {
var395 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_ret_type,((val*)NULL)) on <var_ret_type:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_ret_type,var_other) on <var_ret_type:nullable MType(MType)> */
var400 = var_ret_type == var_other;
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
var_401 = var395;
if (var395){
{
{ /* Inline model$MPropDef$mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var404 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var404 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var402 = var404;
RET_LABEL403:(void)0;
}
}
{
{ /* Inline model$MMethod$is_new (var402) on <var402:MProperty(MMethod)> */
var407 = var402->attrs[COLOR_nitc__model__MMethod___is_new].s; /* _is_new on <var402:MProperty(MMethod)> */
var405 = var407;
RET_LABEL406:(void)0;
}
}
var394 = var405;
} else {
var394 = var_401;
}
if (var394){
{
{ /* Inline model$MClassDef$mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var410 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var410 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var408 = var410;
RET_LABEL409:(void)0;
}
}
{
{ /* Inline model$MClass$mclass_type (var408) on <var408:MClass> */
var413 = var408->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var408:MClass> */
if (unlikely(var413 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var411 = var413;
RET_LABEL412:(void)0;
}
}
var_ret_type = var411;
} else {
}
var416 = !var_accept_special_last_parameter;
var_417 = var416;
if (var416){
{
var418 = core___core__Collection___not_empty(var_mparameters);
}
var415 = var418;
} else {
var415 = var_417;
}
var_419 = var415;
if (var415){
{
var420 = core___core__SequenceRead___last(var_mparameters);
}
{
{ /* Inline model$MParameter$is_vararg (var420) on <var420:nullable Object(MParameter)> */
var423 = var420->attrs[COLOR_nitc__model__MParameter___is_vararg].s; /* _is_vararg on <var420:nullable Object(MParameter)> */
var421 = var423;
RET_LABEL422:(void)0;
}
}
var414 = var421;
} else {
var414 = var_419;
}
if (var414){
{
{ /* Inline parser_nodes$AMethPropdef$n_signature (self) on <self:AMethPropdef> */
var426 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var424 = var426;
RET_LABEL425:(void)0;
}
}
if (var424 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 969);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ASignature$n_params (var424) on <var424:nullable ASignature> */
if (unlikely(var424 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1746);
fatal_exit(1);
}
var429 = var424->attrs[COLOR_nitc__parser_nodes__ASignature___n_params].val; /* _n_params on <var424:nullable ASignature> */
if (unlikely(var429 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1746);
fatal_exit(1);
}
var427 = var429;
RET_LABEL428:(void)0;
}
}
{
var430 = core___core__SequenceRead___last(var427);
}
if (unlikely(varonce431==NULL)) {
var432 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce433!=NULL)) {
var434 = varonce433;
} else {
var435 = "Error: illegal variadic parameter `";
var437 = (val*)(35l<<2|1);
var438 = (val*)(35l<<2|1);
var439 = (val*)((long)(0)<<2|3);
var440 = (val*)((long)(0)<<2|3);
var436 = core__flat___CString___to_s_unsafe(var435, var437, var438, var439, var440);
var434 = var436;
varonce433 = var434;
}
((struct instance_core__NativeArray*)var432)->values[0]=var434;
if (likely(varonce441!=NULL)) {
var442 = varonce441;
} else {
var443 = "` for `";
var445 = (val*)(7l<<2|1);
var446 = (val*)(7l<<2|1);
var447 = (val*)((long)(0)<<2|3);
var448 = (val*)((long)(0)<<2|3);
var444 = core__flat___CString___to_s_unsafe(var443, var445, var446, var447, var448);
var442 = var444;
varonce441 = var442;
}
((struct instance_core__NativeArray*)var432)->values[2]=var442;
if (likely(varonce449!=NULL)) {
var450 = varonce449;
} else {
var451 = "`.";
var453 = (val*)(2l<<2|1);
var454 = (val*)(2l<<2|1);
var455 = (val*)((long)(0)<<2|3);
var456 = (val*)((long)(0)<<2|3);
var452 = core__flat___CString___to_s_unsafe(var451, var453, var454, var455, var456);
var450 = var452;
varonce449 = var450;
}
((struct instance_core__NativeArray*)var432)->values[4]=var450;
} else {
var432 = varonce431;
varonce431 = NULL;
}
{
var457 = core___core__SequenceRead___last(var_mparameters);
}
{
var458 = ((val*(*)(val* self))(var457->class->vft[COLOR_core__abstract_text__Object__to_s]))(var457); /* to_s on <var457:nullable Object(MParameter)>*/
}
((struct instance_core__NativeArray*)var432)->values[1]=var458;
{
{ /* Inline model$MPropDef$mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var461 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var461 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var459 = var461;
RET_LABEL460:(void)0;
}
}
{
{ /* Inline model$MProperty$name (var459) on <var459:MProperty(MMethod)> */
var464 = var459->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var459:MProperty(MMethod)> */
if (unlikely(var464 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var462 = var464;
RET_LABEL463:(void)0;
}
}
((struct instance_core__NativeArray*)var432)->values[3]=var462;
{
var465 = ((val*(*)(val* self))(var432->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var432); /* native_to_s on <var432:NativeArray[String]>*/
}
varonce431 = var432;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var430, var465); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
if (var_ret_type == NULL) {
var467 = 1; /* is null */
} else {
var467 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_ret_type,((val*)NULL)) on <var_ret_type:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_ret_type,var_other) on <var_ret_type:nullable MType(MType)> */
var472 = var_ret_type == var_other;
var470 = var472;
goto RET_LABEL471;
RET_LABEL471:(void)0;
}
}
var468 = var470;
goto RET_LABEL469;
RET_LABEL469:(void)0;
}
var467 = var468;
}
var_473 = var467;
if (var467){
var466 = var_return_is_mandatory;
} else {
var466 = var_473;
}
if (var466){
{
{ /* Inline parser_nodes$AMethPropdef$n_methid (self) on <self:AMethPropdef> */
var476 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
var474 = var476;
RET_LABEL475:(void)0;
}
}
if (unlikely(varonce477==NULL)) {
var478 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce479!=NULL)) {
var480 = varonce479;
} else {
var481 = "Error: mandatory return type for `";
var483 = (val*)(34l<<2|1);
var484 = (val*)(34l<<2|1);
var485 = (val*)((long)(0)<<2|3);
var486 = (val*)((long)(0)<<2|3);
var482 = core__flat___CString___to_s_unsafe(var481, var483, var484, var485, var486);
var480 = var482;
varonce479 = var480;
}
((struct instance_core__NativeArray*)var478)->values[0]=var480;
if (likely(varonce487!=NULL)) {
var488 = varonce487;
} else {
var489 = "`.";
var491 = (val*)(2l<<2|1);
var492 = (val*)(2l<<2|1);
var493 = (val*)((long)(0)<<2|3);
var494 = (val*)((long)(0)<<2|3);
var490 = core__flat___CString___to_s_unsafe(var489, var491, var492, var493, var494);
var488 = var490;
varonce487 = var488;
}
((struct instance_core__NativeArray*)var478)->values[2]=var488;
} else {
var478 = varonce477;
varonce477 = NULL;
}
{
{ /* Inline model$MPropDef$mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var497 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var497 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var495 = var497;
RET_LABEL496:(void)0;
}
}
{
{ /* Inline model$MProperty$name (var495) on <var495:MProperty(MMethod)> */
var500 = var495->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var495:MProperty(MMethod)> */
if (unlikely(var500 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var498 = var500;
RET_LABEL499:(void)0;
}
}
((struct instance_core__NativeArray*)var478)->values[1]=var498;
{
var501 = ((val*(*)(val* self))(var478->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var478); /* native_to_s on <var478:NativeArray[String]>*/
}
varonce477 = var478;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var474, var501); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
var502 = NEW_nitc__MSignature(&type_nitc__MSignature);
{
((void(*)(val* self, val* p0))(var502->class->vft[COLOR_nitc__model__MSignature__mparameters_61d]))(var502, var_mparameters); /* mparameters= on <var502:MSignature>*/
}
{
((void(*)(val* self, val* p0))(var502->class->vft[COLOR_nitc__model__MSignature__return_mtype_61d]))(var502, var_ret_type); /* return_mtype= on <var502:MSignature>*/
}
{
((void(*)(val* self))(var502->class->vft[COLOR_core__kernel__Object__init]))(var502); /* init on <var502:MSignature>*/
}
var_msignature = var502;
{
{ /* Inline model$MMethodDef$msignature= (var_mpropdef,var_msignature) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val = var_msignature; /* _msignature on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL503:(void)0;
}
}
if (likely(varonce504!=NULL)) {
var505 = varonce504;
} else {
var506 = "abstract";
var508 = (val*)(8l<<2|1);
var509 = (val*)(8l<<2|1);
var510 = (val*)((long)(0)<<2|3);
var511 = (val*)((long)(0)<<2|3);
var507 = core__flat___CString___to_s_unsafe(var506, var508, var509, var510, var511);
var505 = var507;
varonce504 = var505;
}
{
var512 = nitc__annotation___Prod___get_single_annotation(self, var505, var_modelbuilder);
}
if (var512 == NULL) {
var513 = 0; /* is null */
} else {
var513 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var512,((val*)NULL)) on <var512:nullable AAnnotation> */
var_other36 = ((val*)NULL);
{
var516 = ((short int(*)(val* self, val* p0))(var512->class->vft[COLOR_core__kernel__Object___61d_61d]))(var512, var_other36); /* == on <var512:nullable AAnnotation(AAnnotation)>*/
}
var517 = !var516;
var514 = var517;
goto RET_LABEL515;
RET_LABEL515:(void)0;
}
var513 = var514;
}
{
{ /* Inline model$MMethodDef$is_abstract= (var_mpropdef,var513) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___is_abstract].s = var513; /* _is_abstract on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL518:(void)0;
}
}
if (likely(varonce519!=NULL)) {
var520 = varonce519;
} else {
var521 = "intern";
var523 = (val*)(6l<<2|1);
var524 = (val*)(6l<<2|1);
var525 = (val*)((long)(0)<<2|3);
var526 = (val*)((long)(0)<<2|3);
var522 = core__flat___CString___to_s_unsafe(var521, var523, var524, var525, var526);
var520 = var522;
varonce519 = var520;
}
{
var527 = nitc__annotation___Prod___get_single_annotation(self, var520, var_modelbuilder);
}
if (var527 == NULL) {
var528 = 0; /* is null */
} else {
var528 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var527,((val*)NULL)) on <var527:nullable AAnnotation> */
var_other36 = ((val*)NULL);
{
var531 = ((short int(*)(val* self, val* p0))(var527->class->vft[COLOR_core__kernel__Object___61d_61d]))(var527, var_other36); /* == on <var527:nullable AAnnotation(AAnnotation)>*/
}
var532 = !var531;
var529 = var532;
goto RET_LABEL530;
RET_LABEL530:(void)0;
}
var528 = var529;
}
{
{ /* Inline model$MMethodDef$is_intern= (var_mpropdef,var528) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___is_intern].s = var528; /* _is_intern on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL533:(void)0;
}
}
{
{ /* Inline parser_nodes$AMethPropdef$n_extern_code_block (self) on <self:AMethPropdef> */
var537 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AMethPropdef> */
var535 = var537;
RET_LABEL536:(void)0;
}
}
if (var535 == NULL) {
var538 = 0; /* is null */
} else {
var538 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var535,((val*)NULL)) on <var535:nullable AExternCodeBlock> */
var_other36 = ((val*)NULL);
{
var541 = ((short int(*)(val* self, val* p0))(var535->class->vft[COLOR_core__kernel__Object___61d_61d]))(var535, var_other36); /* == on <var535:nullable AExternCodeBlock(AExternCodeBlock)>*/
}
var542 = !var541;
var539 = var542;
goto RET_LABEL540;
RET_LABEL540:(void)0;
}
var538 = var539;
}
var_543 = var538;
if (var538){
var534 = var_543;
} else {
if (likely(varonce544!=NULL)) {
var545 = varonce544;
} else {
var546 = "extern";
var548 = (val*)(6l<<2|1);
var549 = (val*)(6l<<2|1);
var550 = (val*)((long)(0)<<2|3);
var551 = (val*)((long)(0)<<2|3);
var547 = core__flat___CString___to_s_unsafe(var546, var548, var549, var550, var551);
var545 = var547;
varonce544 = var545;
}
{
var552 = nitc__annotation___Prod___get_single_annotation(self, var545, var_modelbuilder);
}
if (var552 == NULL) {
var553 = 0; /* is null */
} else {
var553 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var552,((val*)NULL)) on <var552:nullable AAnnotation> */
var_other36 = ((val*)NULL);
{
var556 = ((short int(*)(val* self, val* p0))(var552->class->vft[COLOR_core__kernel__Object___61d_61d]))(var552, var_other36); /* == on <var552:nullable AAnnotation(AAnnotation)>*/
}
var557 = !var556;
var554 = var557;
goto RET_LABEL555;
RET_LABEL555:(void)0;
}
var553 = var554;
}
var534 = var553;
}
{
{ /* Inline model$MMethodDef$is_extern= (var_mpropdef,var534) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___is_extern].s = var534; /* _is_extern on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL558:(void)0;
}
}
if (likely(varonce559!=NULL)) {
var560 = varonce559;
} else {
var561 = "lazy";
var563 = (val*)(4l<<2|1);
var564 = (val*)(4l<<2|1);
var565 = (val*)((long)(0)<<2|3);
var566 = (val*)((long)(0)<<2|3);
var562 = core__flat___CString___to_s_unsafe(var561, var563, var564, var565, var566);
var560 = var562;
varonce559 = var560;
}
{
var567 = nitc__annotation___Prod___get_single_annotation(self, var560, var_modelbuilder);
}
var_at = var567;
if (var_at == NULL) {
var568 = 0; /* is null */
} else {
var568 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_at,((val*)NULL)) on <var_at:nullable AAnnotation> */
var_other36 = ((val*)NULL);
{
var571 = ((short int(*)(val* self, val* p0))(var_at->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_at, var_other36); /* == on <var_at:nullable AAnnotation(AAnnotation)>*/
}
var572 = !var571;
var569 = var572;
goto RET_LABEL570;
RET_LABEL570:(void)0;
}
var568 = var569;
}
if (var568){
if (likely(varonce573!=NULL)) {
var574 = varonce573;
} else {
var575 = "Syntax Error: `lazy` must be used on attributes.";
var577 = (val*)(48l<<2|1);
var578 = (val*)(48l<<2|1);
var579 = (val*)((long)(0)<<2|3);
var580 = (val*)((long)(0)<<2|3);
var576 = core__flat___CString___to_s_unsafe(var575, var577, var578, var579, var580);
var574 = var576;
varonce573 = var574;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_at, var574); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
if (likely(varonce581!=NULL)) {
var582 = varonce581;
} else {
var583 = "autoinit";
var585 = (val*)(8l<<2|1);
var586 = (val*)(8l<<2|1);
var587 = (val*)((long)(0)<<2|3);
var588 = (val*)((long)(0)<<2|3);
var584 = core__flat___CString___to_s_unsafe(var583, var585, var586, var587, var588);
var582 = var584;
varonce581 = var582;
}
{
var589 = nitc__annotation___Prod___get_single_annotation(self, var582, var_modelbuilder);
}
var_atautoinit = var589;
if (var_atautoinit == NULL) {
var590 = 0; /* is null */
} else {
var590 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_atautoinit,((val*)NULL)) on <var_atautoinit:nullable AAnnotation> */
var_other36 = ((val*)NULL);
{
var593 = ((short int(*)(val* self, val* p0))(var_atautoinit->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atautoinit, var_other36); /* == on <var_atautoinit:nullable AAnnotation(AAnnotation)>*/
}
var594 = !var593;
var591 = var594;
goto RET_LABEL592;
RET_LABEL592:(void)0;
}
var590 = var591;
}
if (var590){
{
var595 = nitc___nitc__MPropDef___is_intro(var_mpropdef);
}
var596 = !var595;
if (var596){
if (likely(varonce597!=NULL)) {
var598 = varonce597;
} else {
var599 = "Error: `autoinit` cannot be set on redefinitions.";
var601 = (val*)(49l<<2|1);
var602 = (val*)(49l<<2|1);
var603 = (val*)((long)(0)<<2|3);
var604 = (val*)((long)(0)<<2|3);
var600 = core__flat___CString___to_s_unsafe(var599, var601, var602, var603, var604);
var598 = var600;
varonce597 = var598;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_atautoinit, var598); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
} else {
{
var605 = nitc___nitc__MClassDef___is_intro(var_mclassdef);
}
var606 = !var605;
if (var606){
if (likely(varonce607!=NULL)) {
var608 = varonce607;
} else {
var609 = "Error: `autoinit` cannot be used in class refinements.";
var611 = (val*)(54l<<2|1);
var612 = (val*)(54l<<2|1);
var613 = (val*)((long)(0)<<2|3);
var614 = (val*)((long)(0)<<2|3);
var610 = core__flat___CString___to_s_unsafe(var609, var611, var612, var613, var614);
var608 = var610;
varonce607 = var608;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_atautoinit, var608); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
} else {
{
{ /* Inline modelize_property$AMethPropdef$is_autoinit= (self,1) on <self:AMethPropdef> */
self->attrs[COLOR_nitc__modelize_property__AMethPropdef___is_autoinit].s = 1; /* _is_autoinit on <self:AMethPropdef> */
RET_LABEL615:(void)0;
}
}
}
}
} else {
}
RET_LABEL:;
}
/* method modelize_property$AMethPropdef$check_signature for (self: AMethPropdef, ModelBuilder) */
void nitc__modelize_property___AMethPropdef___APropdef__check_signature(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var /* : nullable MPropDef */;
val* var2 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MMethodDef */;
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
val* var15 /* : nullable ASignature */;
val* var17 /* : nullable ASignature */;
val* var_nsig /* var nsig: nullable ASignature */;
val* var18 /* : nullable MSignature */;
val* var20 /* : nullable MSignature */;
val* var_mysignature /* var mysignature: nullable MSignature */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var_other30 /* var other: nullable Object */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
val* var39 /* : MProperty */;
val* var41 /* : MProperty */;
val* var42 /* : MPropDef */;
val* var44 /* : MPropDef */;
val* var45 /* : nullable MSignature */;
val* var47 /* : nullable MSignature */;
val* var_msignature /* var msignature: nullable MSignature */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
val* var54 /* : nullable MType */;
val* var56 /* : nullable MType */;
val* var_precursor_ret_type /* var precursor_ret_type: nullable MType */;
val* var57 /* : nullable MType */;
val* var59 /* : nullable MType */;
val* var_ret_type /* var ret_type: nullable MType */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
short int var_ /* var : Bool */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
short int var69 /* : Bool */;
short int var71 /* : Bool */;
val* var72 /* : nullable AType */;
val* var74 /* : nullable AType */;
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
val* var92 /* : MProperty */;
val* var94 /* : MProperty */;
val* var95 /* : String */;
val* var96 /* : String */;
long var99 /* : Int */;
short int var100 /* : Bool */;
short int var102 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var103 /* : Bool */;
long var_i /* var i: Int */;
long var104 /* : Int */;
long var_105 /* var : Int */;
short int var106 /* : Bool */;
short int var108 /* : Bool */;
int cltype109;
int idtype110;
const char* var_class_name111;
short int var112 /* : Bool */;
val* var113 /* : Array[MParameter] */;
val* var115 /* : Array[MParameter] */;
val* var116 /* : nullable Object */;
val* var117 /* : MType */;
val* var119 /* : MType */;
val* var_myt /* var myt: MType */;
val* var120 /* : Array[MParameter] */;
val* var122 /* : Array[MParameter] */;
val* var123 /* : nullable Object */;
val* var124 /* : MType */;
val* var126 /* : MType */;
val* var_prt /* var prt: MType */;
val* var127 /* : ANodes[AParam] */;
val* var129 /* : ANodes[AParam] */;
val* var130 /* : ANode */;
val* var_node /* var node: AParam */;
val* var131 /* : MClassType */;
val* var133 /* : MClassType */;
short int var134 /* : Bool */;
short int var135 /* : Bool */;
val* var137 /* : NativeArray[String] */;
static val* varonce136;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : CString */;
val* var141 /* : String */;
val* var142 /* : nullable Int */;
val* var143 /* : nullable Int */;
val* var144 /* : nullable Bool */;
val* var145 /* : nullable Bool */;
static val* varonce146;
val* var147 /* : String */;
char* var148 /* : CString */;
val* var149 /* : String */;
val* var150 /* : nullable Int */;
val* var151 /* : nullable Int */;
val* var152 /* : nullable Bool */;
val* var153 /* : nullable Bool */;
static val* varonce154;
val* var155 /* : String */;
char* var156 /* : CString */;
val* var157 /* : String */;
val* var158 /* : nullable Int */;
val* var159 /* : nullable Int */;
val* var160 /* : nullable Bool */;
val* var161 /* : nullable Bool */;
static val* varonce162;
val* var163 /* : String */;
char* var164 /* : CString */;
val* var165 /* : String */;
val* var166 /* : nullable Int */;
val* var167 /* : nullable Int */;
val* var168 /* : nullable Bool */;
val* var169 /* : nullable Bool */;
val* var170 /* : String */;
val* var171 /* : Array[MParameter] */;
val* var173 /* : Array[MParameter] */;
val* var174 /* : nullable Object */;
val* var175 /* : String */;
val* var177 /* : String */;
val* var178 /* : String */;
val* var179 /* : String */;
long var182 /* : Int */;
short int var183 /* : Bool */;
short int var184 /* : Bool */;
short int var186 /* : Bool */;
short int var187 /* : Bool */;
val* var_node188 /* var node: nullable ANode */;
short int var189 /* : Bool */;
short int var190 /* : Bool */;
short int var192 /* : Bool */;
short int var193 /* : Bool */;
val* var194 /* : nullable AType */;
val* var196 /* : nullable AType */;
short int var197 /* : Bool */;
short int var198 /* : Bool */;
short int var200 /* : Bool */;
short int var202 /* : Bool */;
short int var203 /* : Bool */;
short int var204 /* : Bool */;
short int var206 /* : Bool */;
short int var208 /* : Bool */;
val* var209 /* : MClassType */;
val* var211 /* : MClassType */;
short int var212 /* : Bool */;
short int var213 /* : Bool */;
val* var215 /* : NativeArray[String] */;
static val* varonce214;
static val* varonce216;
val* var217 /* : String */;
char* var218 /* : CString */;
val* var219 /* : String */;
val* var220 /* : nullable Int */;
val* var221 /* : nullable Int */;
val* var222 /* : nullable Bool */;
val* var223 /* : nullable Bool */;
static val* varonce224;
val* var225 /* : String */;
char* var226 /* : CString */;
val* var227 /* : String */;
val* var228 /* : nullable Int */;
val* var229 /* : nullable Int */;
val* var230 /* : nullable Bool */;
val* var231 /* : nullable Bool */;
static val* varonce232;
val* var233 /* : String */;
char* var234 /* : CString */;
val* var235 /* : String */;
val* var236 /* : nullable Int */;
val* var237 /* : nullable Int */;
val* var238 /* : nullable Bool */;
val* var239 /* : nullable Bool */;
val* var240 /* : String */;
val* var241 /* : String */;
val* var242 /* : String */;
short int var245 /* : Bool */;
short int var246 /* : Bool */;
short int var248 /* : Bool */;
short int var249 /* : Bool */;
long var_i250 /* var i: Int */;
long var251 /* : Int */;
long var_252 /* var : Int */;
short int var253 /* : Bool */;
short int var255 /* : Bool */;
int cltype256;
int idtype257;
const char* var_class_name258;
short int var259 /* : Bool */;
val* var261 /* : ANodes[AParam] */;
val* var263 /* : ANodes[AParam] */;
val* var264 /* : ANode */;
val* var265 /* : nullable AType */;
val* var267 /* : nullable AType */;
val* var_nt /* var nt: nullable AType */;
short int var268 /* : Bool */;
short int var269 /* : Bool */;
short int var271 /* : Bool */;
short int var272 /* : Bool */;
val* var273 /* : nullable MType */;
val* var275 /* : nullable MType */;
long var276 /* : Int */;
val* var277 /* : nullable AType */;
val* var279 /* : nullable AType */;
val* var_nt280 /* var nt: nullable AType */;
short int var281 /* : Bool */;
short int var282 /* : Bool */;
short int var284 /* : Bool */;
short int var285 /* : Bool */;
val* var286 /* : nullable MType */;
val* var288 /* : nullable MType */;
var_modelbuilder = p0;
{
{ /* Inline modelize_property$APropdef$mpropdef (self) on <self:AMethPropdef> */
var2 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
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
{ /* Inline kernel$Object$== (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MMethodDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mpropdef,var_other) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
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
{ /* Inline model$MPropDef$mclassdef (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var11 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_mclassdef = var9;
{
{ /* Inline model$MClassDef$mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var14 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_mmodule = var12;
{
{ /* Inline parser_nodes$AMethPropdef$n_signature (self) on <self:AMethPropdef> */
var17 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_nsig = var15;
{
{ /* Inline model$MMethodDef$msignature (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var20 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
var_mysignature = var18;
if (var_mysignature == NULL) {
var21 = 1; /* is null */
} else {
var21 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mysignature,((val*)NULL)) on <var_mysignature:nullable MSignature> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mysignature,var_other) on <var_mysignature:nullable MSignature(MSignature)> */
var26 = var_mysignature == var_other;
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
if (var21){
goto RET_LABEL;
} else {
}
if (var_nsig == NULL) {
var27 = 0; /* is null */
} else {
var27 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_nsig,((val*)NULL)) on <var_nsig:nullable ASignature> */
var_other30 = ((val*)NULL);
{
var31 = ((short int(*)(val* self, val* p0))(var_nsig->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nsig, var_other30); /* == on <var_nsig:nullable ASignature(ASignature)>*/
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
var33 = nitc__modelize_property___ASignature___check_signature(var_nsig, var_modelbuilder, var_mclassdef);
}
var34 = !var33;
if (var34){
{
{ /* Inline model$MMethodDef$msignature= (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val = ((val*)NULL); /* _msignature on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL35:(void)0;
}
}
{
{ /* Inline model_base$MEntity$is_broken= (var_mpropdef,1) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL36:(void)0;
}
}
goto RET_LABEL;
} else {
}
} else {
}
{
var37 = nitc___nitc__MPropDef___is_intro(var_mpropdef);
}
var38 = !var37;
if (var38){
{
{ /* Inline model$MPropDef$mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var41 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var41 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline model$MProperty$intro (var39) on <var39:MProperty(MMethod)> */
var44 = var39->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var39:MProperty(MMethod)> */
if (unlikely(var44 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline model$MMethodDef$msignature (var42) on <var42:MPropDef(MMethodDef)> */
var47 = var42->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var42:MPropDef(MMethodDef)> */
var45 = var47;
RET_LABEL46:(void)0;
}
}
var_msignature = var45;
if (var_msignature == NULL) {
var48 = 1; /* is null */
} else {
var48 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_msignature,((val*)NULL)) on <var_msignature:nullable MSignature> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_msignature,var_other) on <var_msignature:nullable MSignature(MSignature)> */
var53 = var_msignature == var_other;
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
{
{ /* Inline model$MSignature$return_mtype (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var56 = var_msignature->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:nullable MSignature(MSignature)> */
var54 = var56;
RET_LABEL55:(void)0;
}
}
var_precursor_ret_type = var54;
{
{ /* Inline model$MSignature$return_mtype (var_mysignature) on <var_mysignature:nullable MSignature(MSignature)> */
var59 = var_mysignature->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_mysignature:nullable MSignature(MSignature)> */
var57 = var59;
RET_LABEL58:(void)0;
}
}
var_ret_type = var57;
if (var_ret_type == NULL) {
var61 = 0; /* is null */
} else {
var61 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_ret_type,((val*)NULL)) on <var_ret_type:nullable MType> */
var_other30 = ((val*)NULL);
{
var64 = ((short int(*)(val* self, val* p0))(var_ret_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ret_type, var_other30); /* == on <var_ret_type:nullable MType(MType)>*/
}
var65 = !var64;
var62 = var65;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
var61 = var62;
}
var_ = var61;
if (var61){
if (var_precursor_ret_type == NULL) {
var66 = 1; /* is null */
} else {
var66 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_precursor_ret_type,((val*)NULL)) on <var_precursor_ret_type:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_precursor_ret_type,var_other) on <var_precursor_ret_type:nullable MType(MType)> */
var71 = var_precursor_ret_type == var_other;
var69 = var71;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
}
var67 = var69;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
var66 = var67;
}
var60 = var66;
} else {
var60 = var_;
}
if (var60){
if (var_nsig == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1025);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ASignature$n_type (var_nsig) on <var_nsig:nullable ASignature> */
if (unlikely(var_nsig == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1752);
fatal_exit(1);
}
var74 = var_nsig->attrs[COLOR_nitc__parser_nodes__ASignature___n_type].val; /* _n_type on <var_nsig:nullable ASignature> */
var72 = var74;
RET_LABEL73:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var75 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce76!=NULL)) {
var77 = varonce76;
} else {
var78 = "Redef Error: `";
var80 = (val*)(14l<<2|1);
var81 = (val*)(14l<<2|1);
var82 = (val*)((long)(0)<<2|3);
var83 = (val*)((long)(0)<<2|3);
var79 = core__flat___CString___to_s_unsafe(var78, var80, var81, var82, var83);
var77 = var79;
varonce76 = var77;
}
((struct instance_core__NativeArray*)var75)->values[0]=var77;
if (likely(varonce84!=NULL)) {
var85 = varonce84;
} else {
var86 = "` is a procedure, not a function.";
var88 = (val*)(33l<<2|1);
var89 = (val*)(33l<<2|1);
var90 = (val*)((long)(0)<<2|3);
var91 = (val*)((long)(0)<<2|3);
var87 = core__flat___CString___to_s_unsafe(var86, var88, var89, var90, var91);
var85 = var87;
varonce84 = var85;
}
((struct instance_core__NativeArray*)var75)->values[2]=var85;
} else {
var75 = varonce;
varonce = NULL;
}
{
{ /* Inline model$MPropDef$mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var94 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var94 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var92 = var94;
RET_LABEL93:(void)0;
}
}
{
var95 = ((val*(*)(val* self))(var92->class->vft[COLOR_core__abstract_text__Object__to_s]))(var92); /* to_s on <var92:MProperty(MMethod)>*/
}
((struct instance_core__NativeArray*)var75)->values[1]=var95;
{
var96 = ((val*(*)(val* self))(var75->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var75); /* native_to_s on <var75:NativeArray[String]>*/
}
varonce = var75;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var72, var96); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
{
{ /* Inline model$MMethodDef$msignature= (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val = ((val*)NULL); /* _msignature on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL97:(void)0;
}
}
{
{ /* Inline model_base$MEntity$is_broken= (var_mpropdef,1) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL98:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
var99 = nitc___nitc__MSignature___arity(var_mysignature);
}
{
{ /* Inline kernel$Int$> (var99,0l) on <var99:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var102 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var102)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var103 = var99 > 0l;
var100 = var103;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
}
if (var100){
var_i = 0l;
{
var104 = nitc___nitc__MSignature___arity(var_mysignature);
}
var_105 = var104;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_105) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_105:Int> isa OTHER */
/* <var_105:Int> isa OTHER */
var108 = 1; /* easy <var_105:Int> isa OTHER*/
if (unlikely(!var108)) {
var_class_name111 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name111);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var112 = var_i < var_105;
var106 = var112;
goto RET_LABEL107;
RET_LABEL107:(void)0;
}
}
if (var106){
} else {
goto BREAK_label;
}
{
{ /* Inline model$MSignature$mparameters (var_mysignature) on <var_mysignature:nullable MSignature(MSignature)> */
var115 = var_mysignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_mysignature:nullable MSignature(MSignature)> */
if (unlikely(var115 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var113 = var115;
RET_LABEL114:(void)0;
}
}
{
var116 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var113, var_i);
}
{
{ /* Inline model$MParameter$mtype (var116) on <var116:nullable Object(MParameter)> */
var119 = var116->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var116:nullable Object(MParameter)> */
if (unlikely(var119 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var117 = var119;
RET_LABEL118:(void)0;
}
}
var_myt = var117;
{
{ /* Inline model$MSignature$mparameters (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var122 = var_msignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:nullable MSignature(MSignature)> */
if (unlikely(var122 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var120 = var122;
RET_LABEL121:(void)0;
}
}
{
var123 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var120, var_i);
}
{
{ /* Inline model$MParameter$mtype (var123) on <var123:nullable Object(MParameter)> */
var126 = var123->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var123:nullable Object(MParameter)> */
if (unlikely(var126 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var124 = var126;
RET_LABEL125:(void)0;
}
}
var_prt = var124;
if (var_nsig == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1036);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ASignature$n_params (var_nsig) on <var_nsig:nullable ASignature> */
if (unlikely(var_nsig == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1746);
fatal_exit(1);
}
var129 = var_nsig->attrs[COLOR_nitc__parser_nodes__ASignature___n_params].val; /* _n_params on <var_nsig:nullable ASignature> */
if (unlikely(var129 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1746);
fatal_exit(1);
}
var127 = var129;
RET_LABEL128:(void)0;
}
}
{
var130 = nitc___nitc__ANodes___core__abstract_collection__SequenceRead___91d_93d(var127, var_i);
}
var_node = var130;
{
{ /* Inline model$MClassDef$bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var133 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var133 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var131 = var133;
RET_LABEL132:(void)0;
}
}
{
var134 = nitc___nitc__ModelBuilder___check_sametype(var_modelbuilder, var_node, var_mmodule, var131, var_myt, var_prt);
}
var135 = !var134;
if (var135){
if (unlikely(varonce136==NULL)) {
var137 = NEW_core__NativeArray((int)7l, &type_core__NativeArray__core__String);
if (likely(varonce138!=NULL)) {
var139 = varonce138;
} else {
var140 = "Redef Error: expected `";
var142 = (val*)(23l<<2|1);
var143 = (val*)(23l<<2|1);
var144 = (val*)((long)(0)<<2|3);
var145 = (val*)((long)(0)<<2|3);
var141 = core__flat___CString___to_s_unsafe(var140, var142, var143, var144, var145);
var139 = var141;
varonce138 = var139;
}
((struct instance_core__NativeArray*)var137)->values[0]=var139;
if (likely(varonce146!=NULL)) {
var147 = varonce146;
} else {
var148 = "` for parameter `";
var150 = (val*)(17l<<2|1);
var151 = (val*)(17l<<2|1);
var152 = (val*)((long)(0)<<2|3);
var153 = (val*)((long)(0)<<2|3);
var149 = core__flat___CString___to_s_unsafe(var148, var150, var151, var152, var153);
var147 = var149;
varonce146 = var147;
}
((struct instance_core__NativeArray*)var137)->values[2]=var147;
if (likely(varonce154!=NULL)) {
var155 = varonce154;
} else {
var156 = "\'; got `";
var158 = (val*)(8l<<2|1);
var159 = (val*)(8l<<2|1);
var160 = (val*)((long)(0)<<2|3);
var161 = (val*)((long)(0)<<2|3);
var157 = core__flat___CString___to_s_unsafe(var156, var158, var159, var160, var161);
var155 = var157;
varonce154 = var155;
}
((struct instance_core__NativeArray*)var137)->values[4]=var155;
if (likely(varonce162!=NULL)) {
var163 = varonce162;
} else {
var164 = "`.";
var166 = (val*)(2l<<2|1);
var167 = (val*)(2l<<2|1);
var168 = (val*)((long)(0)<<2|3);
var169 = (val*)((long)(0)<<2|3);
var165 = core__flat___CString___to_s_unsafe(var164, var166, var167, var168, var169);
var163 = var165;
varonce162 = var163;
}
((struct instance_core__NativeArray*)var137)->values[6]=var163;
} else {
var137 = varonce136;
varonce136 = NULL;
}
{
var170 = ((val*(*)(val* self))(var_prt->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_prt); /* to_s on <var_prt:MType>*/
}
((struct instance_core__NativeArray*)var137)->values[1]=var170;
{
{ /* Inline model$MSignature$mparameters (var_mysignature) on <var_mysignature:nullable MSignature(MSignature)> */
var173 = var_mysignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_mysignature:nullable MSignature(MSignature)> */
if (unlikely(var173 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var171 = var173;
RET_LABEL172:(void)0;
}
}
{
var174 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var171, var_i);
}
{
{ /* Inline model$MParameter$name (var174) on <var174:nullable Object(MParameter)> */
var177 = var174->attrs[COLOR_nitc__model__MParameter___name].val; /* _name on <var174:nullable Object(MParameter)> */
if (unlikely(var177 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1993);
fatal_exit(1);
}
var175 = var177;
RET_LABEL176:(void)0;
}
}
((struct instance_core__NativeArray*)var137)->values[3]=var175;
{
var178 = ((val*(*)(val* self))(var_myt->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_myt); /* to_s on <var_myt:MType>*/
}
((struct instance_core__NativeArray*)var137)->values[5]=var178;
{
var179 = ((val*(*)(val* self))(var137->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var137); /* native_to_s on <var137:NativeArray[String]>*/
}
varonce136 = var137;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_node, var179); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
{
{ /* Inline model$MMethodDef$msignature= (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val = ((val*)NULL); /* _msignature on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL180:(void)0;
}
}
{
{ /* Inline model_base$MEntity$is_broken= (var_mpropdef,1) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL181:(void)0;
}
}
} else {
}
{
var182 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var182;
}
BREAK_label: (void)0;
} else {
}
if (var_precursor_ret_type == NULL) {
var183 = 0; /* is null */
} else {
var183 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_precursor_ret_type,((val*)NULL)) on <var_precursor_ret_type:nullable MType> */
var_other30 = ((val*)NULL);
{
var186 = ((short int(*)(val* self, val* p0))(var_precursor_ret_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_precursor_ret_type, var_other30); /* == on <var_precursor_ret_type:nullable MType(MType)>*/
}
var187 = !var186;
var184 = var187;
goto RET_LABEL185;
RET_LABEL185:(void)0;
}
var183 = var184;
}
if (var183){
var_node188 = ((val*)NULL);
if (var_nsig == NULL) {
var189 = 0; /* is null */
} else {
var189 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_nsig,((val*)NULL)) on <var_nsig:nullable ASignature> */
var_other30 = ((val*)NULL);
{
var192 = ((short int(*)(val* self, val* p0))(var_nsig->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nsig, var_other30); /* == on <var_nsig:nullable ASignature(ASignature)>*/
}
var193 = !var192;
var190 = var193;
goto RET_LABEL191;
RET_LABEL191:(void)0;
}
var189 = var190;
}
if (var189){
{
{ /* Inline parser_nodes$ASignature$n_type (var_nsig) on <var_nsig:nullable ASignature(ASignature)> */
var196 = var_nsig->attrs[COLOR_nitc__parser_nodes__ASignature___n_type].val; /* _n_type on <var_nsig:nullable ASignature(ASignature)> */
var194 = var196;
RET_LABEL195:(void)0;
}
}
var_node188 = var194;
} else {
}
if (var_node188 == NULL) {
var197 = 1; /* is null */
} else {
var197 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_node188,((val*)NULL)) on <var_node188:nullable ANode> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_node188,var_other) on <var_node188:nullable ANode(ANode)> */
var202 = var_node188 == var_other;
var200 = var202;
goto RET_LABEL201;
RET_LABEL201:(void)0;
}
}
var198 = var200;
goto RET_LABEL199;
RET_LABEL199:(void)0;
}
var197 = var198;
}
if (var197){
var_node188 = self;
} else {
}
if (var_ret_type == NULL) {
var203 = 1; /* is null */
} else {
var203 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_ret_type,((val*)NULL)) on <var_ret_type:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_ret_type,var_other) on <var_ret_type:nullable MType(MType)> */
var208 = var_ret_type == var_other;
var206 = var208;
goto RET_LABEL207;
RET_LABEL207:(void)0;
}
}
var204 = var206;
goto RET_LABEL205;
RET_LABEL205:(void)0;
}
var203 = var204;
}
if (var203){
var_ret_type = var_precursor_ret_type;
} else {
{
{ /* Inline model$MClassDef$bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var211 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var211 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var209 = var211;
RET_LABEL210:(void)0;
}
}
{
var212 = nitc___nitc__ModelBuilder___check_subtype(var_modelbuilder, var_node188, var_mmodule, var209, var_ret_type, var_precursor_ret_type);
}
var213 = !var212;
if (var213){
if (unlikely(varonce214==NULL)) {
var215 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce216!=NULL)) {
var217 = varonce216;
} else {
var218 = "Redef Error: expected `";
var220 = (val*)(23l<<2|1);
var221 = (val*)(23l<<2|1);
var222 = (val*)((long)(0)<<2|3);
var223 = (val*)((long)(0)<<2|3);
var219 = core__flat___CString___to_s_unsafe(var218, var220, var221, var222, var223);
var217 = var219;
varonce216 = var217;
}
((struct instance_core__NativeArray*)var215)->values[0]=var217;
if (likely(varonce224!=NULL)) {
var225 = varonce224;
} else {
var226 = "` for return type; got `";
var228 = (val*)(24l<<2|1);
var229 = (val*)(24l<<2|1);
var230 = (val*)((long)(0)<<2|3);
var231 = (val*)((long)(0)<<2|3);
var227 = core__flat___CString___to_s_unsafe(var226, var228, var229, var230, var231);
var225 = var227;
varonce224 = var225;
}
((struct instance_core__NativeArray*)var215)->values[2]=var225;
if (likely(varonce232!=NULL)) {
var233 = varonce232;
} else {
var234 = "`.";
var236 = (val*)(2l<<2|1);
var237 = (val*)(2l<<2|1);
var238 = (val*)((long)(0)<<2|3);
var239 = (val*)((long)(0)<<2|3);
var235 = core__flat___CString___to_s_unsafe(var234, var236, var237, var238, var239);
var233 = var235;
varonce232 = var233;
}
((struct instance_core__NativeArray*)var215)->values[4]=var233;
} else {
var215 = varonce214;
varonce214 = NULL;
}
{
var240 = ((val*(*)(val* self))(var_precursor_ret_type->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_precursor_ret_type); /* to_s on <var_precursor_ret_type:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var215)->values[1]=var240;
{
var241 = ((val*(*)(val* self))(var_ret_type->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_ret_type); /* to_s on <var_ret_type:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var215)->values[3]=var241;
{
var242 = ((val*(*)(val* self))(var215->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var215); /* native_to_s on <var215:NativeArray[String]>*/
}
varonce214 = var215;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_node188, var242); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
{
{ /* Inline model$MMethodDef$msignature= (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val = ((val*)NULL); /* _msignature on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL243:(void)0;
}
}
{
{ /* Inline model_base$MEntity$is_broken= (var_mpropdef,1) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL244:(void)0;
}
}
} else {
}
}
} else {
}
} else {
}
if (var_nsig == NULL) {
var245 = 0; /* is null */
} else {
var245 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_nsig,((val*)NULL)) on <var_nsig:nullable ASignature> */
var_other30 = ((val*)NULL);
{
var248 = ((short int(*)(val* self, val* p0))(var_nsig->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nsig, var_other30); /* == on <var_nsig:nullable ASignature(ASignature)>*/
}
var249 = !var248;
var246 = var249;
goto RET_LABEL247;
RET_LABEL247:(void)0;
}
var245 = var246;
}
if (var245){
var_i250 = 0l;
{
var251 = nitc___nitc__MSignature___arity(var_mysignature);
}
var_252 = var251;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i250,var_252) on <var_i250:Int> */
/* Covariant cast for argument 0 (i) <var_252:Int> isa OTHER */
/* <var_252:Int> isa OTHER */
var255 = 1; /* easy <var_252:Int> isa OTHER*/
if (unlikely(!var255)) {
var_class_name258 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name258);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var259 = var_i250 < var_252;
var253 = var259;
goto RET_LABEL254;
RET_LABEL254:(void)0;
}
}
if (var253){
} else {
goto BREAK_label260;
}
{
{ /* Inline parser_nodes$ASignature$n_params (var_nsig) on <var_nsig:nullable ASignature(ASignature)> */
var263 = var_nsig->attrs[COLOR_nitc__parser_nodes__ASignature___n_params].val; /* _n_params on <var_nsig:nullable ASignature(ASignature)> */
if (unlikely(var263 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1746);
fatal_exit(1);
}
var261 = var263;
RET_LABEL262:(void)0;
}
}
{
var264 = nitc___nitc__ANodes___core__abstract_collection__SequenceRead___91d_93d(var261, var_i250);
}
{
{ /* Inline parser_nodes$AParam$n_type (var264) on <var264:ANode(AParam)> */
var267 = var264->attrs[COLOR_nitc__parser_nodes__AParam___n_type].val; /* _n_type on <var264:ANode(AParam)> */
var265 = var267;
RET_LABEL266:(void)0;
}
}
var_nt = var265;
if (var_nt == NULL) {
var268 = 0; /* is null */
} else {
var268 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_nt,((val*)NULL)) on <var_nt:nullable AType> */
var_other30 = ((val*)NULL);
{
var271 = ((short int(*)(val* self, val* p0))(var_nt->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nt, var_other30); /* == on <var_nt:nullable AType(AType)>*/
}
var272 = !var271;
var269 = var272;
goto RET_LABEL270;
RET_LABEL270:(void)0;
}
var268 = var269;
}
if (var268){
{
{ /* Inline modelbuilder_base$AType$mtype (var_nt) on <var_nt:nullable AType(AType)> */
var275 = var_nt->attrs[COLOR_nitc__modelbuilder_base__AType___mtype].val; /* _mtype on <var_nt:nullable AType(AType)> */
var273 = var275;
RET_LABEL274:(void)0;
}
}
if (unlikely(var273 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1063);
fatal_exit(1);
}
{
nitc__modelize_property___ModelBuilder___check_visibility(var_modelbuilder, var_nt, var273, var_mpropdef); /* Direct call modelize_property$ModelBuilder$check_visibility on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
{
var276 = core___core__Int___Discrete__successor(var_i250, 1l);
}
var_i250 = var276;
}
BREAK_label260: (void)0;
{
{ /* Inline parser_nodes$ASignature$n_type (var_nsig) on <var_nsig:nullable ASignature(ASignature)> */
var279 = var_nsig->attrs[COLOR_nitc__parser_nodes__ASignature___n_type].val; /* _n_type on <var_nsig:nullable ASignature(ASignature)> */
var277 = var279;
RET_LABEL278:(void)0;
}
}
var_nt280 = var277;
if (var_nt280 == NULL) {
var281 = 0; /* is null */
} else {
var281 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_nt280,((val*)NULL)) on <var_nt280:nullable AType> */
var_other30 = ((val*)NULL);
{
var284 = ((short int(*)(val* self, val* p0))(var_nt280->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nt280, var_other30); /* == on <var_nt280:nullable AType(AType)>*/
}
var285 = !var284;
var282 = var285;
goto RET_LABEL283;
RET_LABEL283:(void)0;
}
var281 = var282;
}
if (var281){
{
{ /* Inline modelbuilder_base$AType$mtype (var_nt280) on <var_nt280:nullable AType(AType)> */
var288 = var_nt280->attrs[COLOR_nitc__modelbuilder_base__AType___mtype].val; /* _mtype on <var_nt280:nullable AType(AType)> */
var286 = var288;
RET_LABEL287:(void)0;
}
}
if (unlikely(var286 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1066);
fatal_exit(1);
}
{
nitc__modelize_property___ModelBuilder___check_visibility(var_modelbuilder, var_nt280, var286, var_mpropdef); /* Direct call modelize_property$ModelBuilder$check_visibility on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
} else {
}
{
nitc__modelize_property___AMethPropdef___APropdef__check_repeated_types(self, var_modelbuilder); /* Direct call modelize_property$AMethPropdef$check_repeated_types on <self:AMethPropdef>*/
}
RET_LABEL:;
}
/* method modelize_property$AMethPropdef$check_repeated_types for (self: AMethPropdef, ModelBuilder) */
void nitc__modelize_property___AMethPropdef___APropdef__check_repeated_types(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var /* : nullable MPropDef */;
val* var2 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MMethodDef */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var_ /* var : Bool */;
val* var11 /* : nullable ASignature */;
val* var13 /* : nullable ASignature */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : nullable ASignature */;
val* var22 /* : nullable ASignature */;
val* var23 /* : ANodes[AParam] */;
val* var25 /* : ANodes[AParam] */;
val* var_26 /* var : ANodes[AParam] */;
val* var27 /* : Iterator[ANode] */;
val* var_28 /* var : Iterator[AParam] */;
short int var29 /* : Bool */;
val* var30 /* : nullable Object */;
val* var_param /* var param: AParam */;
val* var31 /* : nullable AType */;
val* var33 /* : nullable AType */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
val* var_other37 /* var other: nullable Object */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
val* var40 /* : nullable AType */;
val* var42 /* : nullable AType */;
static val* varonce;
val* var43 /* : String */;
char* var44 /* : CString */;
val* var45 /* : String */;
val* var46 /* : nullable Int */;
val* var47 /* : nullable Int */;
val* var48 /* : nullable Bool */;
val* var49 /* : nullable Bool */;
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
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : CString */;
val* var71 /* : String */;
val* var72 /* : nullable Int */;
val* var73 /* : nullable Int */;
val* var74 /* : nullable Bool */;
val* var75 /* : nullable Bool */;
val* var76 /* : TId */;
val* var78 /* : TId */;
val* var79 /* : String */;
val* var80 /* : String */;
val* var81 /* : String */;
val* var82 /* : MProperty */;
val* var84 /* : MProperty */;
val* var85 /* : MPropDef */;
val* var87 /* : MPropDef */;
val* var_intro /* var intro: MMethodDef */;
val* var88 /* : HashMap[MPropDef, APropdef] */;
val* var90 /* : HashMap[MPropDef, APropdef] */;
val* var91 /* : nullable Object */;
val* var_n_intro /* var n_intro: nullable APropdef */;
short int var92 /* : Bool */;
short int var93 /* : Bool */;
short int var94 /* : Bool */;
short int var96 /* : Bool */;
short int var98 /* : Bool */;
short int var_99 /* var : Bool */;
short int var100 /* : Bool */;
int cltype;
int idtype;
short int var101 /* : Bool */;
val* var102 /* : nullable ASignature */;
val* var104 /* : nullable ASignature */;
val* var105 /* : nullable MType */;
val* var107 /* : nullable MType */;
val* var_ret_type /* var ret_type: nullable MType */;
short int var108 /* : Bool */;
short int var109 /* : Bool */;
short int var110 /* : Bool */;
short int var112 /* : Bool */;
short int var113 /* : Bool */;
short int var_114 /* var : Bool */;
val* var115 /* : nullable ASignature */;
val* var117 /* : nullable ASignature */;
val* var118 /* : nullable MType */;
val* var120 /* : nullable MType */;
short int var121 /* : Bool */;
short int var123 /* : Bool */;
short int var125 /* : Bool */;
val* var126 /* : nullable ASignature */;
val* var128 /* : nullable ASignature */;
val* var129 /* : nullable AType */;
val* var131 /* : nullable AType */;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : CString */;
val* var135 /* : String */;
val* var136 /* : nullable Int */;
val* var137 /* : nullable Int */;
val* var138 /* : nullable Bool */;
val* var139 /* : nullable Bool */;
val* var141 /* : NativeArray[String] */;
static val* varonce140;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : CString */;
val* var145 /* : String */;
val* var146 /* : nullable Int */;
val* var147 /* : nullable Int */;
val* var148 /* : nullable Bool */;
val* var149 /* : nullable Bool */;
static val* varonce150;
val* var151 /* : String */;
char* var152 /* : CString */;
val* var153 /* : String */;
val* var154 /* : nullable Int */;
val* var155 /* : nullable Int */;
val* var156 /* : nullable Bool */;
val* var157 /* : nullable Bool */;
val* var158 /* : String */;
val* var159 /* : String */;
var_modelbuilder = p0;
{
{ /* Inline modelize_property$APropdef$mpropdef (self) on <self:AMethPropdef> */
var2 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
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
{ /* Inline kernel$Object$== (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MMethodDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mpropdef,var_other) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
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
var10 = nitc___nitc__MPropDef___is_intro(var_mpropdef);
}
var_ = var10;
if (var10){
var9 = var_;
} else {
{
{ /* Inline parser_nodes$AMethPropdef$n_signature (self) on <self:AMethPropdef> */
var13 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
if (var11 == NULL) {
var14 = 1; /* is null */
} else {
var14 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var11,((val*)NULL)) on <var11:nullable ASignature> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var11,var_other) on <var11:nullable ASignature(ASignature)> */
var19 = var11 == var_other;
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
var9 = var14;
}
if (var9){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes$AMethPropdef$n_signature (self) on <self:AMethPropdef> */
var22 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
if (var20 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1078);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ASignature$n_params (var20) on <var20:nullable ASignature> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1746);
fatal_exit(1);
}
var25 = var20->attrs[COLOR_nitc__parser_nodes__ASignature___n_params].val; /* _n_params on <var20:nullable ASignature> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1746);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
var_26 = var23;
{
var27 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_26);
}
var_28 = var27;
for(;;) {
{
var29 = ((short int(*)(val* self))((((long)var_28&3)?class_info[((long)var_28&3)]:var_28->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_28); /* is_ok on <var_28:Iterator[AParam]>*/
}
if (var29){
} else {
goto BREAK_label;
}
{
var30 = ((val*(*)(val* self))((((long)var_28&3)?class_info[((long)var_28&3)]:var_28->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_28); /* item on <var_28:Iterator[AParam]>*/
}
var_param = var30;
{
{ /* Inline parser_nodes$AParam$n_type (var_param) on <var_param:AParam> */
var33 = var_param->attrs[COLOR_nitc__parser_nodes__AParam___n_type].val; /* _n_type on <var_param:AParam> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
if (var31 == NULL) {
var34 = 0; /* is null */
} else {
var34 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var31,((val*)NULL)) on <var31:nullable AType> */
var_other37 = ((val*)NULL);
{
var38 = ((short int(*)(val* self, val* p0))(var31->class->vft[COLOR_core__kernel__Object___61d_61d]))(var31, var_other37); /* == on <var31:nullable AType(AType)>*/
}
var39 = !var38;
var35 = var39;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
var34 = var35;
}
if (var34){
{
{ /* Inline parser_nodes$AParam$n_type (var_param) on <var_param:AParam> */
var42 = var_param->attrs[COLOR_nitc__parser_nodes__AParam___n_type].val; /* _n_type on <var_param:AParam> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
if (likely(varonce!=NULL)) {
var43 = varonce;
} else {
var44 = "useless-signature";
var46 = (val*)(17l<<2|1);
var47 = (val*)(17l<<2|1);
var48 = (val*)((long)(0)<<2|3);
var49 = (val*)((long)(0)<<2|3);
var45 = core__flat___CString___to_s_unsafe(var44, var46, var47, var48, var49);
var43 = var45;
varonce = var43;
}
if (unlikely(varonce50==NULL)) {
var51 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = "Warning: useless type repetition on parameter `";
var56 = (val*)(47l<<2|1);
var57 = (val*)(47l<<2|1);
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
var62 = "` for redefined method `";
var64 = (val*)(24l<<2|1);
var65 = (val*)(24l<<2|1);
var66 = (val*)((long)(0)<<2|3);
var67 = (val*)((long)(0)<<2|3);
var63 = core__flat___CString___to_s_unsafe(var62, var64, var65, var66, var67);
var61 = var63;
varonce60 = var61;
}
((struct instance_core__NativeArray*)var51)->values[2]=var61;
if (likely(varonce68!=NULL)) {
var69 = varonce68;
} else {
var70 = "`";
var72 = (val*)(1l<<2|1);
var73 = (val*)(1l<<2|1);
var74 = (val*)((long)(0)<<2|3);
var75 = (val*)((long)(0)<<2|3);
var71 = core__flat___CString___to_s_unsafe(var70, var72, var73, var74, var75);
var69 = var71;
varonce68 = var69;
}
((struct instance_core__NativeArray*)var51)->values[4]=var69;
} else {
var51 = varonce50;
varonce50 = NULL;
}
{
{ /* Inline parser_nodes$AParam$n_id (var_param) on <var_param:AParam> */
var78 = var_param->attrs[COLOR_nitc__parser_nodes__AParam___n_id].val; /* _n_id on <var_param:AParam> */
if (unlikely(var78 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1760);
fatal_exit(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
{
var79 = nitc__lexer_work___Token___text(var76);
}
((struct instance_core__NativeArray*)var51)->values[1]=var79;
{
var80 = nitc___nitc__MPropDef___nitc__model_base__MEntity__name(var_mpropdef);
}
((struct instance_core__NativeArray*)var51)->values[3]=var80;
{
var81 = ((val*(*)(val* self))(var51->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var51); /* native_to_s on <var51:NativeArray[String]>*/
}
varonce50 = var51;
{
nitc___nitc__ModelBuilder___advice(var_modelbuilder, var40, var43, var81); /* Direct call modelbuilder_base$ModelBuilder$advice on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_28&3)?class_info[((long)var_28&3)]:var_28->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_28); /* next on <var_28:Iterator[AParam]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_28&3)?class_info[((long)var_28&3)]:var_28->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_28); /* finish on <var_28:Iterator[AParam]>*/
}
{
{ /* Inline model$MPropDef$mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var84 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var84 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
{ /* Inline model$MProperty$intro (var82) on <var82:MProperty(MMethod)> */
var87 = var82->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var82:MProperty(MMethod)> */
if (unlikely(var87 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var85 = var87;
RET_LABEL86:(void)0;
}
}
var_intro = var85;
{
{ /* Inline modelize_property$ModelBuilder$mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var90 = var_modelbuilder->attrs[COLOR_nitc__modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var90 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 40);
fatal_exit(1);
}
var88 = var90;
RET_LABEL89:(void)0;
}
}
{
var91 = core___core__HashMap___core__abstract_collection__MapRead__get_or_null(var88, var_intro);
}
var_n_intro = var91;
if (var_n_intro == NULL) {
var93 = 1; /* is null */
} else {
var93 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_n_intro,((val*)NULL)) on <var_n_intro:nullable APropdef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_n_intro,var_other) on <var_n_intro:nullable APropdef(APropdef)> */
var98 = var_n_intro == var_other;
var96 = var98;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
}
var94 = var96;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
var93 = var94;
}
var_99 = var93;
if (var93){
var92 = var_99;
} else {
/* <var_n_intro:nullable APropdef(APropdef)> isa AMethPropdef */
cltype = type_nitc__AMethPropdef.color;
idtype = type_nitc__AMethPropdef.id;
if(cltype >= var_n_intro->type->table_size) {
var100 = 0;
} else {
var100 = var_n_intro->type->type_table[cltype] == idtype;
}
var101 = !var100;
var92 = var101;
}
if (var92){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes$AMethPropdef$n_signature (self) on <self:AMethPropdef> */
var104 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var102 = var104;
RET_LABEL103:(void)0;
}
}
if (var102 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1088);
fatal_exit(1);
} else {
{ /* Inline modelize_property$ASignature$ret_type (var102) on <var102:nullable ASignature> */
if (unlikely(var102 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 668);
fatal_exit(1);
}
var107 = var102->attrs[COLOR_nitc__modelize_property__ASignature___ret_type].val; /* _ret_type on <var102:nullable ASignature> */
var105 = var107;
RET_LABEL106:(void)0;
}
}
var_ret_type = var105;
if (var_ret_type == NULL) {
var109 = 0; /* is null */
} else {
var109 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_ret_type,((val*)NULL)) on <var_ret_type:nullable MType> */
var_other37 = ((val*)NULL);
{
var112 = ((short int(*)(val* self, val* p0))(var_ret_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ret_type, var_other37); /* == on <var_ret_type:nullable MType(MType)>*/
}
var113 = !var112;
var110 = var113;
goto RET_LABEL111;
RET_LABEL111:(void)0;
}
var109 = var110;
}
var_114 = var109;
if (var109){
{
{ /* Inline parser_nodes$AMethPropdef$n_signature (var_n_intro) on <var_n_intro:nullable APropdef(AMethPropdef)> */
var117 = var_n_intro->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <var_n_intro:nullable APropdef(AMethPropdef)> */
var115 = var117;
RET_LABEL116:(void)0;
}
}
if (var115 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1089);
fatal_exit(1);
} else {
{ /* Inline modelize_property$ASignature$ret_type (var115) on <var115:nullable ASignature> */
if (unlikely(var115 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 668);
fatal_exit(1);
}
var120 = var115->attrs[COLOR_nitc__modelize_property__ASignature___ret_type].val; /* _ret_type on <var115:nullable ASignature> */
var118 = var120;
RET_LABEL119:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var_ret_type,var118) on <var_ret_type:nullable MType(MType)> */
var_other = var118;
{
{ /* Inline kernel$Object$is_same_instance (var_ret_type,var_other) on <var_ret_type:nullable MType(MType)> */
var125 = var_ret_type == var_other;
var123 = var125;
goto RET_LABEL124;
RET_LABEL124:(void)0;
}
}
var121 = var123;
goto RET_LABEL122;
RET_LABEL122:(void)0;
}
}
var108 = var121;
} else {
var108 = var_114;
}
if (var108){
{
{ /* Inline parser_nodes$AMethPropdef$n_signature (self) on <self:AMethPropdef> */
var128 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var126 = var128;
RET_LABEL127:(void)0;
}
}
if (var126 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1090);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ASignature$n_type (var126) on <var126:nullable ASignature> */
if (unlikely(var126 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1752);
fatal_exit(1);
}
var131 = var126->attrs[COLOR_nitc__parser_nodes__ASignature___n_type].val; /* _n_type on <var126:nullable ASignature> */
var129 = var131;
RET_LABEL130:(void)0;
}
}
if (likely(varonce132!=NULL)) {
var133 = varonce132;
} else {
var134 = "useless-signature";
var136 = (val*)(17l<<2|1);
var137 = (val*)(17l<<2|1);
var138 = (val*)((long)(0)<<2|3);
var139 = (val*)((long)(0)<<2|3);
var135 = core__flat___CString___to_s_unsafe(var134, var136, var137, var138, var139);
var133 = var135;
varonce132 = var133;
}
if (unlikely(varonce140==NULL)) {
var141 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce142!=NULL)) {
var143 = varonce142;
} else {
var144 = "Warning: useless return type repetition for redefined method `";
var146 = (val*)(62l<<2|1);
var147 = (val*)(62l<<2|1);
var148 = (val*)((long)(0)<<2|3);
var149 = (val*)((long)(0)<<2|3);
var145 = core__flat___CString___to_s_unsafe(var144, var146, var147, var148, var149);
var143 = var145;
varonce142 = var143;
}
((struct instance_core__NativeArray*)var141)->values[0]=var143;
if (likely(varonce150!=NULL)) {
var151 = varonce150;
} else {
var152 = "`";
var154 = (val*)(1l<<2|1);
var155 = (val*)(1l<<2|1);
var156 = (val*)((long)(0)<<2|3);
var157 = (val*)((long)(0)<<2|3);
var153 = core__flat___CString___to_s_unsafe(var152, var154, var155, var156, var157);
var151 = var153;
varonce150 = var151;
}
((struct instance_core__NativeArray*)var141)->values[2]=var151;
} else {
var141 = varonce140;
varonce140 = NULL;
}
{
var158 = nitc___nitc__MPropDef___nitc__model_base__MEntity__name(var_mpropdef);
}
((struct instance_core__NativeArray*)var141)->values[1]=var158;
{
var159 = ((val*(*)(val* self))(var141->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var141); /* native_to_s on <var141:NativeArray[String]>*/
}
varonce140 = var141;
{
nitc___nitc__ModelBuilder___advice(var_modelbuilder, var129, var133, var159); /* Direct call modelbuilder_base$ModelBuilder$advice on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
RET_LABEL:;
}
/* method modelize_property$AMethid$return_is_mandatory for (self: AMethid): Bool */
short int nitc__modelize_property___AMethid___return_is_mandatory(val* self) {
short int var /* : Bool */;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property$AMethid$accept_special_last_parameter for (self: AMethid): Bool */
short int nitc__modelize_property___AMethid___accept_special_last_parameter(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property$AMethid$min_arity for (self: AMethid): Int */
long nitc__modelize_property___AMethid___min_arity(val* self) {
long var /* : Int */;
var = 1l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property$AMethid$is_binary for (self: AMethid): Bool */
short int nitc__modelize_property___AMethid___is_binary(val* self) {
short int var /* : Bool */;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property$AIdMethid$return_is_mandatory for (self: AIdMethid): Bool */
short int nitc__modelize_property___AIdMethid___AMethid__return_is_mandatory(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property$AIdMethid$accept_special_last_parameter for (self: AIdMethid): Bool */
short int nitc__modelize_property___AIdMethid___AMethid__accept_special_last_parameter(val* self) {
short int var /* : Bool */;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property$AIdMethid$min_arity for (self: AIdMethid): Int */
long nitc__modelize_property___AIdMethid___AMethid__min_arity(val* self) {
long var /* : Int */;
var = 0l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property$AIdMethid$is_binary for (self: AIdMethid): Bool */
short int nitc__modelize_property___AIdMethid___AMethid__is_binary(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property$ABraMethid$accept_special_last_parameter for (self: ABraMethid): Bool */
short int nitc__modelize_property___ABraMethid___AMethid__accept_special_last_parameter(val* self) {
short int var /* : Bool */;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property$ABraMethid$is_binary for (self: ABraMethid): Bool */
short int nitc__modelize_property___ABraMethid___AMethid__is_binary(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property$ABraassignMethid$return_is_mandatory for (self: ABraassignMethid): Bool */
short int nitc__modelize_property___ABraassignMethid___AMethid__return_is_mandatory(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property$ABraassignMethid$min_arity for (self: ABraassignMethid): Int */
long nitc__modelize_property___ABraassignMethid___AMethid__min_arity(val* self) {
long var /* : Int */;
var = 2l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property$ABraassignMethid$is_binary for (self: ABraassignMethid): Bool */
short int nitc__modelize_property___ABraassignMethid___AMethid__is_binary(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property$AAssignMethid$return_is_mandatory for (self: AAssignMethid): Bool */
short int nitc__modelize_property___AAssignMethid___AMethid__return_is_mandatory(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property$AAssignMethid$is_binary for (self: AAssignMethid): Bool */
short int nitc__modelize_property___AAssignMethid___AMethid__is_binary(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property$AAttrPropdef$mtype for (self: AAttrPropdef): nullable MType */
val* nitc__modelize_property___AAttrPropdef___mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mtype].val; /* _mtype on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property$AAttrPropdef$mtype= for (self: AAttrPropdef, nullable MType) */
void nitc__modelize_property___AAttrPropdef___mtype_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mtype].val = p0; /* _mtype on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method modelize_property$AAttrPropdef$noinit for (self: AAttrPropdef): Bool */
short int nitc__modelize_property___AAttrPropdef___noinit(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___noinit].s; /* _noinit on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property$AAttrPropdef$noinit= for (self: AAttrPropdef, Bool) */
void nitc__modelize_property___AAttrPropdef___noinit_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___noinit].s = p0; /* _noinit on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method modelize_property$AAttrPropdef$is_lazy for (self: AAttrPropdef): Bool */
short int nitc__modelize_property___AAttrPropdef___is_lazy(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___is_lazy].s; /* _is_lazy on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property$AAttrPropdef$is_lazy= for (self: AAttrPropdef, Bool) */
void nitc__modelize_property___AAttrPropdef___is_lazy_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___is_lazy].s = p0; /* _is_lazy on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method modelize_property$AAttrPropdef$is_optional for (self: AAttrPropdef): Bool */
short int nitc__modelize_property___AAttrPropdef___is_optional(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___is_optional].s; /* _is_optional on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property$AAttrPropdef$is_optional= for (self: AAttrPropdef, Bool) */
void nitc__modelize_property___AAttrPropdef___is_optional_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___is_optional].s = p0; /* _is_optional on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method modelize_property$AAttrPropdef$has_value for (self: AAttrPropdef): Bool */
short int nitc__modelize_property___AAttrPropdef___has_value(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property$AAttrPropdef$has_value= for (self: AAttrPropdef, Bool) */
void nitc__modelize_property___AAttrPropdef___has_value_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___has_value].s = p0; /* _has_value on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method modelize_property$AAttrPropdef$mlazypropdef for (self: AAttrPropdef): nullable MAttributeDef */
val* nitc__modelize_property___AAttrPropdef___mlazypropdef(val* self) {
val* var /* : nullable MAttributeDef */;
val* var1 /* : nullable MAttributeDef */;
var1 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mlazypropdef].val; /* _mlazypropdef on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property$AAttrPropdef$mlazypropdef= for (self: AAttrPropdef, nullable MAttributeDef) */
void nitc__modelize_property___AAttrPropdef___mlazypropdef_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mlazypropdef].val = p0; /* _mlazypropdef on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method modelize_property$AAttrPropdef$mreadpropdef for (self: AAttrPropdef): nullable MMethodDef */
val* nitc__modelize_property___AAttrPropdef___mreadpropdef(val* self) {
val* var /* : nullable MMethodDef */;
val* var1 /* : nullable MMethodDef */;
var1 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mreadpropdef].val; /* _mreadpropdef on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property$AAttrPropdef$mreadpropdef= for (self: AAttrPropdef, nullable MMethodDef) */
void nitc__modelize_property___AAttrPropdef___mreadpropdef_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mreadpropdef].val = p0; /* _mreadpropdef on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method modelize_property$AAttrPropdef$mwritepropdef for (self: AAttrPropdef): nullable MMethodDef */
val* nitc__modelize_property___AAttrPropdef___mwritepropdef(val* self) {
val* var /* : nullable MMethodDef */;
val* var1 /* : nullable MMethodDef */;
var1 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mwritepropdef].val; /* _mwritepropdef on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property$AAttrPropdef$mwritepropdef= for (self: AAttrPropdef, nullable MMethodDef) */
void nitc__modelize_property___AAttrPropdef___mwritepropdef_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mwritepropdef].val = p0; /* _mwritepropdef on <self:AAttrPropdef> */
RET_LABEL:;
}
