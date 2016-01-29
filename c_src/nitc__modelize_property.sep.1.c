#include "nitc__modelize_property.sep.0.h"
/* method modelize_property#ToolContext#modelize_property_phase for (self: ToolContext): Phase */
val* nitc__modelize_property___ToolContext___modelize_property_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nitc__modelize_property__ToolContext___modelize_property_phase].val; /* _modelize_property_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelize_property_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 24);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ModelizePropertyPhase#process_nmodule for (self: ModelizePropertyPhase, AModule) */
void nitc__modelize_property___nitc__modelize_property__ModelizePropertyPhase___nitc__phase__Phase__process_nmodule(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
val* var /* : ANodes[AClassdef] */;
val* var2 /* : ANodes[AClassdef] */;
val* var_ /* var : ANodes[AClassdef] */;
val* var3 /* : Iterator[ANode] */;
val* var_4 /* var : Iterator[AClassdef] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var7 /* : nullable Array[AClassdef] */;
val* var9 /* : nullable Array[AClassdef] */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var13 /* : ToolContext */;
val* var15 /* : ToolContext */;
val* var16 /* : ModelBuilder */;
var_nmodule = p0;
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var2 = var_nmodule->attrs[COLOR_nitc__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1062);
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
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:Iterator[AClassdef]>*/
}
if (var5){
} else {
goto BREAK_label;
}
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:Iterator[AClassdef]>*/
}
var_nclassdef = var6;
{
{ /* Inline modelize_class#AClassdef#all_defs (var_nclassdef) on <var_nclassdef:AClassdef> */
var9 = var_nclassdef->attrs[COLOR_nitc__modelize_class__AClassdef___all_defs].val; /* _all_defs on <var_nclassdef:AClassdef> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (var7 == NULL) {
var10 = 1; /* is null */
} else {
var10 = 0; /* arg is null but recv is not */
}
if (0) {
var11 = core___core__Array___core__kernel__Object___61d_61d(var7, ((val*)NULL));
var10 = var11;
}
if (var10){
goto BREAK_label12;
} else {
}
{
{ /* Inline phase#Phase#toolcontext (self) on <self:ModelizePropertyPhase> */
var15 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:ModelizePropertyPhase> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 200);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = nitc__modelbuilder_base___ToolContext___modelbuilder(var13);
}
{
nitc__modelize_property___ModelBuilder___build_properties(var16, var_nclassdef); /* Direct call modelize_property#ModelBuilder#build_properties on <var16:ModelBuilder>*/
}
BREAK_label12: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:Iterator[AClassdef]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:Iterator[AClassdef]>*/
}
RET_LABEL:;
}
/* method modelize_property#ModelBuilder#mpropdef2npropdef for (self: ModelBuilder): HashMap[MPropDef, APropdef] */
val* nitc__modelize_property___ModelBuilder___mpropdef2npropdef(val* self) {
val* var /* : HashMap[MPropDef, APropdef] */;
val* var1 /* : HashMap[MPropDef, APropdef] */;
var1 = self->attrs[COLOR_nitc__modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 40);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ModelBuilder#mpropdef2node for (self: ModelBuilder, MPropDef): nullable ANode */
val* nitc__modelize_property___ModelBuilder___mpropdef2node(val* self, val* p0) {
val* var /* : nullable ANode */;
val* var_mpropdef /* var mpropdef: MPropDef */;
val* var1 /* : HashMap[MPropDef, APropdef] */;
val* var3 /* : HashMap[MPropDef, APropdef] */;
val* var4 /* : nullable Object */;
val* var_res /* var res: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : ToolContext */;
val* var12 /* : ToolContext */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var15 /* : MProperty */;
val* var17 /* : MProperty */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : HashMap[MClassDef, AClassdef] */;
val* var23 /* : HashMap[MClassDef, AClassdef] */;
val* var24 /* : MClassDef */;
val* var26 /* : MClassDef */;
val* var27 /* : nullable Object */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
var_mpropdef = p0;
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (self) on <self:ModelBuilder> */
var3 = self->attrs[COLOR_nitc__modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <self:ModelBuilder> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 40);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__HashMap___core__abstract_collection__MapRead__get_or_null(var1, var_mpropdef);
}
var_res = var4;
if (var_res == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,((val*)NULL)) on <var_res:nullable Object(nullable APropdef)> */
var_other = ((val*)NULL);
{
var8 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable APropdef(APropdef)>*/
}
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var12 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
nitc__phase___ToolContext___run_phases_on_npropdef(var10, var_res); /* Direct call phase#ToolContext#run_phases_on_npropdef on <var10:ToolContext>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
/* <var_mpropdef:MPropDef> isa MMethodDef */
cltype = type_nitc__MMethodDef.color;
idtype = type_nitc__MMethodDef.id;
if(cltype >= var_mpropdef->type->table_size) {
var14 = 0;
} else {
var14 = var_mpropdef->type->type_table[cltype] == idtype;
}
var_ = var14;
if (var14){
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MPropDef(MMethodDef)> */
var17 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MPropDef(MMethodDef)> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model#MMethod#is_root_init (var15) on <var15:MProperty(MMethod)> */
var20 = var15->attrs[COLOR_nitc__model__MMethod___is_root_init].s; /* _is_root_init on <var15:MProperty(MMethod)> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
var13 = var18;
} else {
var13 = var_;
}
if (var13){
{
{ /* Inline modelize_class#ModelBuilder#mclassdef2nclassdef (self) on <self:ModelBuilder> */
var23 = self->attrs[COLOR_nitc__modelize_class__ModelBuilder___mclassdef2nclassdef].val; /* _mclassdef2nclassdef on <self:ModelBuilder> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 435);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MPropDef(MMethodDef)> */
var26 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MPropDef(MMethodDef)> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2227);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
var27 = core___core__HashMap___core__abstract_collection__MapRead__get_or_null(var21, var24);
}
var_res = var27;
if (var_res == NULL) {
var28 = 0; /* is null */
} else {
var28 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,((val*)NULL)) on <var_res:nullable Object(nullable AClassdef)> */
var_other = ((val*)NULL);
{
var31 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable AClassdef(AClassdef)>*/
}
var32 = !var31;
var29 = var32;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
var28 = var29;
}
if (var28){
var = var_res;
goto RET_LABEL;
} else {
}
} else {
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#ModelBuilder#collect_attr_propdef for (self: ModelBuilder, MClassDef): Array[AAttrPropdef] */
val* nitc__modelize_property___ModelBuilder___collect_attr_propdef(val* self, val* p0) {
val* var /* : Array[AAttrPropdef] */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var1 /* : Array[AAttrPropdef] */;
val* var_res /* var res: Array[AAttrPropdef] */;
val* var2 /* : HashMap[MClassDef, AClassdef] */;
val* var4 /* : HashMap[MClassDef, AClassdef] */;
val* var5 /* : nullable Object */;
val* var_n /* var n: nullable AClassdef */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : ANodes[APropdef] */;
val* var14 /* : ANodes[APropdef] */;
val* var_ /* var : ANodes[APropdef] */;
val* var15 /* : Iterator[ANode] */;
val* var_16 /* var : Iterator[APropdef] */;
short int var17 /* : Bool */;
val* var18 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
short int var19 /* : Bool */;
int cltype;
int idtype;
val* var20 /* : ToolContext */;
val* var22 /* : ToolContext */;
var_mclassdef = p0;
var1 = NEW_core__Array(&type_core__Array__nitc__AAttrPropdef);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[AAttrPropdef]>*/
}
var_res = var1;
{
{ /* Inline modelize_class#ModelBuilder#mclassdef2nclassdef (self) on <self:ModelBuilder> */
var4 = self->attrs[COLOR_nitc__modelize_class__ModelBuilder___mclassdef2nclassdef].val; /* _mclassdef2nclassdef on <self:ModelBuilder> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 435);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = core___core__HashMap___core__abstract_collection__MapRead__get_or_null(var2, var_mclassdef);
}
var_n = var5;
if (var_n == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_n,((val*)NULL)) on <var_n:nullable AClassdef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_n,var_other) on <var_n:nullable AClassdef(AClassdef)> */
var11 = var_n == var_other;
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
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_n) on <var_n:nullable AClassdef(AClassdef)> */
var14 = var_n->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_n:nullable AClassdef(AClassdef)> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1155);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_ = var12;
{
var15 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_);
}
var_16 = var15;
for(;;) {
{
var17 = ((short int(*)(val* self))((((long)var_16&3)?class_info[((long)var_16&3)]:var_16->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_16); /* is_ok on <var_16:Iterator[APropdef]>*/
}
if (var17){
} else {
goto BREAK_label;
}
{
var18 = ((val*(*)(val* self))((((long)var_16&3)?class_info[((long)var_16&3)]:var_16->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_16); /* item on <var_16:Iterator[APropdef]>*/
}
var_npropdef = var18;
/* <var_npropdef:APropdef> isa AAttrPropdef */
cltype = type_nitc__AAttrPropdef.color;
idtype = type_nitc__AAttrPropdef.id;
if(cltype >= var_npropdef->type->table_size) {
var19 = 0;
} else {
var19 = var_npropdef->type->type_table[cltype] == idtype;
}
if (var19){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var22 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
nitc__phase___ToolContext___run_phases_on_npropdef(var20, var_npropdef); /* Direct call phase#ToolContext#run_phases_on_npropdef on <var20:ToolContext>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var_npropdef); /* Direct call array#Array#add on <var_res:Array[AAttrPropdef]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_16&3)?class_info[((long)var_16&3)]:var_16->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_16); /* next on <var_16:Iterator[APropdef]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_16&3)?class_info[((long)var_16&3)]:var_16->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_16); /* finish on <var_16:Iterator[APropdef]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#ModelBuilder#build_properties for (self: ModelBuilder, AClassdef) */
void nitc__modelize_property___ModelBuilder___build_properties(val* self, val* p0) {
val* var_nclassdef /* var nclassdef: AClassdef */;
short int var /* : Bool */;
short int var2 /* : Bool */;
val* var4 /* : nullable MClassDef */;
val* var6 /* : nullable MClassDef */;
val* var_mclassdef /* var mclassdef: nullable MClassDef */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : nullable POSetElement[MClassDef] */;
val* var15 /* : nullable POSetElement[MClassDef] */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : nullable POSetElement[MClassDef] */;
val* var24 /* : nullable POSetElement[MClassDef] */;
val* var25 /* : Collection[nullable Object] */;
val* var_ /* var : Collection[MClassDef] */;
val* var26 /* : Iterator[nullable Object] */;
val* var_27 /* var : Iterator[MClassDef] */;
short int var28 /* : Bool */;
val* var29 /* : nullable Object */;
val* var_superclassdef /* var superclassdef: MClassDef */;
val* var30 /* : HashMap[MClassDef, AClassdef] */;
val* var32 /* : HashMap[MClassDef, AClassdef] */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
val* var36 /* : HashMap[MClassDef, AClassdef] */;
val* var38 /* : HashMap[MClassDef, AClassdef] */;
val* var39 /* : nullable Object */;
val* var40 /* : nullable Array[AClassdef] */;
val* var42 /* : nullable Array[AClassdef] */;
val* var_43 /* var : nullable Array[AClassdef] */;
val* var44 /* : IndexedIterator[nullable Object] */;
val* var_45 /* var : IndexedIterator[AClassdef] */;
short int var46 /* : Bool */;
val* var48 /* : nullable Object */;
val* var_nclassdef2 /* var nclassdef2: AClassdef */;
val* var49 /* : ANodes[APropdef] */;
val* var51 /* : ANodes[APropdef] */;
val* var_52 /* var : ANodes[APropdef] */;
val* var53 /* : Iterator[ANode] */;
val* var_54 /* var : Iterator[APropdef] */;
short int var55 /* : Bool */;
val* var57 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
val* var58 /* : ANodes[APropdef] */;
val* var60 /* : ANodes[APropdef] */;
val* var_61 /* var : ANodes[APropdef] */;
val* var62 /* : Iterator[ANode] */;
val* var_63 /* var : Iterator[APropdef] */;
short int var64 /* : Bool */;
val* var66 /* : nullable Object */;
val* var_npropdef67 /* var npropdef: APropdef */;
val* var68 /* : ANodes[APropdef] */;
val* var70 /* : ANodes[APropdef] */;
val* var_71 /* var : ANodes[APropdef] */;
val* var72 /* : Iterator[ANode] */;
val* var_73 /* var : Iterator[APropdef] */;
short int var74 /* : Bool */;
val* var76 /* : nullable Object */;
val* var_npropdef77 /* var npropdef: APropdef */;
short int var78 /* : Bool */;
int cltype;
int idtype;
short int var79 /* : Bool */;
val* var81 /* : nullable MPropDef */;
val* var83 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MVirtualTypeDef */;
short int var84 /* : Bool */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
short int var89 /* : Bool */;
val* var90 /* : nullable MType */;
val* var92 /* : nullable MType */;
short int var93 /* : Bool */;
short int var94 /* : Bool */;
short int var96 /* : Bool */;
short int var98 /* : Bool */;
val* var99 /* : MProperty */;
val* var101 /* : MProperty */;
val* var102 /* : MClassType */;
val* var104 /* : MClassType */;
val* var105 /* : MModule */;
val* var107 /* : MModule */;
short int var108 /* : Bool */;
short int var109 /* : Bool */;
val* var111 /* : MBottomType */;
val* var112 /* : MModule */;
val* var114 /* : MModule */;
val* var115 /* : Model */;
val* var117 /* : Model */;
val* var119 /* : ANodes[APropdef] */;
val* var121 /* : ANodes[APropdef] */;
val* var_122 /* var : ANodes[APropdef] */;
val* var123 /* : Iterator[ANode] */;
val* var_124 /* var : Iterator[APropdef] */;
short int var125 /* : Bool */;
val* var127 /* : nullable Object */;
val* var_npropdef128 /* var npropdef: APropdef */;
short int var129 /* : Bool */;
int cltype130;
int idtype131;
short int var132 /* : Bool */;
val* var134 /* : ANodes[APropdef] */;
val* var136 /* : ANodes[APropdef] */;
val* var_137 /* var : ANodes[APropdef] */;
val* var138 /* : Iterator[ANode] */;
val* var_139 /* var : Iterator[APropdef] */;
short int var140 /* : Bool */;
val* var142 /* : nullable Object */;
val* var_npropdef143 /* var npropdef: APropdef */;
short int var144 /* : Bool */;
int cltype145;
int idtype146;
var_nclassdef = p0;
{
{ /* Inline modelize_property#AClassdef#build_properties_is_done (var_nclassdef) on <var_nclassdef:AClassdef> */
var2 = var_nclassdef->attrs[COLOR_nitc__modelize_property__AClassdef___build_properties_is_done].s; /* _build_properties_is_done on <var_nclassdef:AClassdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var){
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property#AClassdef#build_properties_is_done= (var_nclassdef,1) on <var_nclassdef:AClassdef> */
var_nclassdef->attrs[COLOR_nitc__modelize_property__AClassdef___build_properties_is_done].s = 1; /* _build_properties_is_done on <var_nclassdef:AClassdef> */
RET_LABEL3:(void)0;
}
}
{
{ /* Inline modelize_class#AClassdef#mclassdef (var_nclassdef) on <var_nclassdef:AClassdef> */
var6 = var_nclassdef->attrs[COLOR_nitc__modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_nclassdef:AClassdef> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_mclassdef = var4;
if (var_mclassdef == NULL) {
var7 = 1; /* is null */
} else {
var7 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mclassdef,((val*)NULL)) on <var_mclassdef:nullable MClassDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mclassdef,var_other) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var12 = var_mclassdef == var_other;
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
if (var7){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassDef#in_hierarchy (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var15 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___in_hierarchy].val; /* _in_hierarchy on <var_mclassdef:nullable MClassDef(MClassDef)> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (var13 == NULL) {
var16 = 1; /* is null */
} else {
var16 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var13,((val*)NULL)) on <var13:nullable POSetElement[MClassDef]> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var13,var_other) on <var13:nullable POSetElement[MClassDef](POSetElement[MClassDef])> */
var21 = var13 == var_other;
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
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassDef#in_hierarchy (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var24 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___in_hierarchy].val; /* _in_hierarchy on <var_mclassdef:nullable MClassDef(MClassDef)> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
if (var22 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 92);
fatal_exit(1);
} else {
var25 = poset___poset__POSetElement___direct_greaters(var22);
}
var_ = var25;
{
var26 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[MClassDef]>*/
}
var_27 = var26;
for(;;) {
{
var28 = ((short int(*)(val* self))((((long)var_27&3)?class_info[((long)var_27&3)]:var_27->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_27); /* is_ok on <var_27:Iterator[MClassDef]>*/
}
if (var28){
} else {
goto BREAK_label;
}
{
var29 = ((val*(*)(val* self))((((long)var_27&3)?class_info[((long)var_27&3)]:var_27->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_27); /* item on <var_27:Iterator[MClassDef]>*/
}
var_superclassdef = var29;
{
{ /* Inline modelize_class#ModelBuilder#mclassdef2nclassdef (self) on <self:ModelBuilder> */
var32 = self->attrs[COLOR_nitc__modelize_class__ModelBuilder___mclassdef2nclassdef].val; /* _mclassdef2nclassdef on <self:ModelBuilder> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 435);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
var33 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var30, var_superclassdef);
}
var34 = !var33;
if (var34){
goto BREAK_label35;
} else {
}
{
{ /* Inline modelize_class#ModelBuilder#mclassdef2nclassdef (self) on <self:ModelBuilder> */
var38 = self->attrs[COLOR_nitc__modelize_class__ModelBuilder___mclassdef2nclassdef].val; /* _mclassdef2nclassdef on <self:ModelBuilder> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 435);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
var39 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var36, var_superclassdef);
}
{
nitc__modelize_property___ModelBuilder___build_properties(self, var39); /* Direct call modelize_property#ModelBuilder#build_properties on <self:ModelBuilder>*/
}
BREAK_label35: (void)0;
{
((void(*)(val* self))((((long)var_27&3)?class_info[((long)var_27&3)]:var_27->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_27); /* next on <var_27:Iterator[MClassDef]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_27&3)?class_info[((long)var_27&3)]:var_27->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_27); /* finish on <var_27:Iterator[MClassDef]>*/
}
{
nitc__modelize_property___MClassDef___build_self_type(var_mclassdef, self, var_nclassdef); /* Direct call modelize_property#MClassDef#build_self_type on <var_mclassdef:nullable MClassDef(MClassDef)>*/
}
{
{ /* Inline modelize_class#AClassdef#all_defs (var_nclassdef) on <var_nclassdef:AClassdef> */
var42 = var_nclassdef->attrs[COLOR_nitc__modelize_class__AClassdef___all_defs].val; /* _all_defs on <var_nclassdef:AClassdef> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
var_43 = var40;
if (var_43 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 98);
fatal_exit(1);
} else {
var44 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_43);
}
var_45 = var44;
for(;;) {
{
var46 = ((short int(*)(val* self))((((long)var_45&3)?class_info[((long)var_45&3)]:var_45->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_45); /* is_ok on <var_45:IndexedIterator[AClassdef]>*/
}
if (var46){
} else {
goto BREAK_label47;
}
{
var48 = ((val*(*)(val* self))((((long)var_45&3)?class_info[((long)var_45&3)]:var_45->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_45); /* item on <var_45:IndexedIterator[AClassdef]>*/
}
var_nclassdef2 = var48;
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_nclassdef2) on <var_nclassdef2:AClassdef> */
var51 = var_nclassdef2->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef2:AClassdef> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1155);
fatal_exit(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
var_52 = var49;
{
var53 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_52);
}
var_54 = var53;
for(;;) {
{
var55 = ((short int(*)(val* self))((((long)var_54&3)?class_info[((long)var_54&3)]:var_54->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_54); /* is_ok on <var_54:Iterator[APropdef]>*/
}
if (var55){
} else {
goto BREAK_label56;
}
{
var57 = ((val*(*)(val* self))((((long)var_54&3)?class_info[((long)var_54&3)]:var_54->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_54); /* item on <var_54:Iterator[APropdef]>*/
}
var_npropdef = var57;
{
((void(*)(val* self, val* p0, val* p1))(var_npropdef->class->vft[COLOR_nitc__modelize_property__APropdef__build_property]))(var_npropdef, self, var_mclassdef); /* build_property on <var_npropdef:APropdef>*/
}
{
((void(*)(val* self))((((long)var_54&3)?class_info[((long)var_54&3)]:var_54->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_54); /* next on <var_54:Iterator[APropdef]>*/
}
}
BREAK_label56: (void)0;
{
((void(*)(val* self))((((long)var_54&3)?class_info[((long)var_54&3)]:var_54->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_54); /* finish on <var_54:Iterator[APropdef]>*/
}
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_nclassdef2) on <var_nclassdef2:AClassdef> */
var60 = var_nclassdef2->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef2:AClassdef> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1155);
fatal_exit(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
var_61 = var58;
{
var62 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_61);
}
var_63 = var62;
for(;;) {
{
var64 = ((short int(*)(val* self))((((long)var_63&3)?class_info[((long)var_63&3)]:var_63->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_63); /* is_ok on <var_63:Iterator[APropdef]>*/
}
if (var64){
} else {
goto BREAK_label65;
}
{
var66 = ((val*(*)(val* self))((((long)var_63&3)?class_info[((long)var_63&3)]:var_63->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_63); /* item on <var_63:Iterator[APropdef]>*/
}
var_npropdef67 = var66;
{
((void(*)(val* self, val* p0))(var_npropdef67->class->vft[COLOR_nitc__modelize_property__APropdef__build_signature]))(var_npropdef67, self); /* build_signature on <var_npropdef67:APropdef>*/
}
{
((void(*)(val* self))((((long)var_63&3)?class_info[((long)var_63&3)]:var_63->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_63); /* next on <var_63:Iterator[APropdef]>*/
}
}
BREAK_label65: (void)0;
{
((void(*)(val* self))((((long)var_63&3)?class_info[((long)var_63&3)]:var_63->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_63); /* finish on <var_63:Iterator[APropdef]>*/
}
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_nclassdef2) on <var_nclassdef2:AClassdef> */
var70 = var_nclassdef2->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef2:AClassdef> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1155);
fatal_exit(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
var_71 = var68;
{
var72 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_71);
}
var_73 = var72;
for(;;) {
{
var74 = ((short int(*)(val* self))((((long)var_73&3)?class_info[((long)var_73&3)]:var_73->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_73); /* is_ok on <var_73:Iterator[APropdef]>*/
}
if (var74){
} else {
goto BREAK_label75;
}
{
var76 = ((val*(*)(val* self))((((long)var_73&3)?class_info[((long)var_73&3)]:var_73->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_73); /* item on <var_73:Iterator[APropdef]>*/
}
var_npropdef77 = var76;
/* <var_npropdef77:APropdef> isa ATypePropdef */
cltype = type_nitc__ATypePropdef.color;
idtype = type_nitc__ATypePropdef.id;
if(cltype >= var_npropdef77->type->table_size) {
var78 = 0;
} else {
var78 = var_npropdef77->type->type_table[cltype] == idtype;
}
var79 = !var78;
if (var79){
goto BREAK_label80;
} else {
}
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef77) on <var_npropdef77:APropdef(ATypePropdef)> */
var83 = var_npropdef77->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef77:APropdef(ATypePropdef)> */
var81 = var83;
RET_LABEL82:(void)0;
}
}
var_mpropdef = var81;
if (var_mpropdef == NULL) {
var84 = 1; /* is null */
} else {
var84 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MVirtualTypeDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var89 = var_mpropdef == var_other;
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
goto BREAK_label80;
} else {
}
{
{ /* Inline model#MVirtualTypeDef#bound (var_mpropdef) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var92 = var_mpropdef->attrs[COLOR_nitc__model__MVirtualTypeDef___bound].val; /* _bound on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var90 = var92;
RET_LABEL91:(void)0;
}
}
if (var90 == NULL) {
var93 = 1; /* is null */
} else {
var93 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var90,((val*)NULL)) on <var90:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var90,var_other) on <var90:nullable MType(MType)> */
var98 = var90 == var_other;
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
if (var93){
goto BREAK_label80;
} else {
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var101 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
if (unlikely(var101 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var99 = var101;
RET_LABEL100:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var104 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:nullable MClassDef(MClassDef)> */
if (unlikely(var104 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 579);
fatal_exit(1);
}
var102 = var104;
RET_LABEL103:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var107 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:nullable MClassDef(MClassDef)> */
if (unlikely(var107 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 573);
fatal_exit(1);
}
var105 = var107;
RET_LABEL106:(void)0;
}
}
{
var108 = nitc__modelize_property___ModelBuilder___check_virtual_types_circularity(self, var_npropdef77, var99, var102, var105);
}
var109 = !var108;
if (var109){
{
{ /* Inline model_base#MEntity#is_broken= (var_mpropdef,1) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var_mpropdef->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
RET_LABEL110:(void)0;
}
}
var111 = NEW_nitc__MBottomType(&type_nitc__MBottomType);
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var114 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:nullable MClassDef(MClassDef)> */
if (unlikely(var114 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 573);
fatal_exit(1);
}
var112 = var114;
RET_LABEL113:(void)0;
}
}
{
{ /* Inline mmodule#MModule#model (var112) on <var112:MModule> */
var117 = var112->attrs[COLOR_nitc__mmodule__MModule___model].val; /* _model on <var112:MModule> */
if (unlikely(var117 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 78);
fatal_exit(1);
}
var115 = var117;
RET_LABEL116:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var111->class->vft[COLOR_nitc__model__MBottomType__model_61d]))(var111, var115); /* model= on <var111:MBottomType>*/
}
{
((void(*)(val* self))(var111->class->vft[COLOR_core__kernel__Object__init]))(var111); /* init on <var111:MBottomType>*/
}
{
{ /* Inline model#MVirtualTypeDef#bound= (var_mpropdef,var111) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var_mpropdef->attrs[COLOR_nitc__model__MVirtualTypeDef___bound].val = var111; /* _bound on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
RET_LABEL118:(void)0;
}
}
} else {
}
BREAK_label80: (void)0;
{
((void(*)(val* self))((((long)var_73&3)?class_info[((long)var_73&3)]:var_73->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_73); /* next on <var_73:Iterator[APropdef]>*/
}
}
BREAK_label75: (void)0;
{
((void(*)(val* self))((((long)var_73&3)?class_info[((long)var_73&3)]:var_73->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_73); /* finish on <var_73:Iterator[APropdef]>*/
}
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_nclassdef2) on <var_nclassdef2:AClassdef> */
var121 = var_nclassdef2->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef2:AClassdef> */
if (unlikely(var121 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1155);
fatal_exit(1);
}
var119 = var121;
RET_LABEL120:(void)0;
}
}
var_122 = var119;
{
var123 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_122);
}
var_124 = var123;
for(;;) {
{
var125 = ((short int(*)(val* self))((((long)var_124&3)?class_info[((long)var_124&3)]:var_124->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_124); /* is_ok on <var_124:Iterator[APropdef]>*/
}
if (var125){
} else {
goto BREAK_label126;
}
{
var127 = ((val*(*)(val* self))((((long)var_124&3)?class_info[((long)var_124&3)]:var_124->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_124); /* item on <var_124:Iterator[APropdef]>*/
}
var_npropdef128 = var127;
/* <var_npropdef128:APropdef> isa ATypePropdef */
cltype130 = type_nitc__ATypePropdef.color;
idtype131 = type_nitc__ATypePropdef.id;
if(cltype130 >= var_npropdef128->type->table_size) {
var129 = 0;
} else {
var129 = var_npropdef128->type->type_table[cltype130] == idtype131;
}
var132 = !var129;
if (var132){
goto BREAK_label133;
} else {
}
{
nitc__modelize_property___ATypePropdef___APropdef__check_signature(var_npropdef128, self); /* Direct call modelize_property#ATypePropdef#check_signature on <var_npropdef128:APropdef(ATypePropdef)>*/
}
BREAK_label133: (void)0;
{
((void(*)(val* self))((((long)var_124&3)?class_info[((long)var_124&3)]:var_124->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_124); /* next on <var_124:Iterator[APropdef]>*/
}
}
BREAK_label126: (void)0;
{
((void(*)(val* self))((((long)var_124&3)?class_info[((long)var_124&3)]:var_124->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_124); /* finish on <var_124:Iterator[APropdef]>*/
}
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_nclassdef2) on <var_nclassdef2:AClassdef> */
var136 = var_nclassdef2->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef2:AClassdef> */
if (unlikely(var136 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1155);
fatal_exit(1);
}
var134 = var136;
RET_LABEL135:(void)0;
}
}
var_137 = var134;
{
var138 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_137);
}
var_139 = var138;
for(;;) {
{
var140 = ((short int(*)(val* self))((((long)var_139&3)?class_info[((long)var_139&3)]:var_139->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_139); /* is_ok on <var_139:Iterator[APropdef]>*/
}
if (var140){
} else {
goto BREAK_label141;
}
{
var142 = ((val*(*)(val* self))((((long)var_139&3)?class_info[((long)var_139&3)]:var_139->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_139); /* item on <var_139:Iterator[APropdef]>*/
}
var_npropdef143 = var142;
/* <var_npropdef143:APropdef> isa ATypePropdef */
cltype145 = type_nitc__ATypePropdef.color;
idtype146 = type_nitc__ATypePropdef.id;
if(cltype145 >= var_npropdef143->type->table_size) {
var144 = 0;
} else {
var144 = var_npropdef143->type->type_table[cltype145] == idtype146;
}
if (var144){
goto BREAK_label147;
} else {
}
{
((void(*)(val* self, val* p0))(var_npropdef143->class->vft[COLOR_nitc__modelize_property__APropdef__check_signature]))(var_npropdef143, self); /* check_signature on <var_npropdef143:APropdef>*/
}
BREAK_label147: (void)0;
{
((void(*)(val* self))((((long)var_139&3)?class_info[((long)var_139&3)]:var_139->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_139); /* next on <var_139:Iterator[APropdef]>*/
}
}
BREAK_label141: (void)0;
{
((void(*)(val* self))((((long)var_139&3)?class_info[((long)var_139&3)]:var_139->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_139); /* finish on <var_139:Iterator[APropdef]>*/
}
{
((void(*)(val* self))((((long)var_45&3)?class_info[((long)var_45&3)]:var_45->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_45); /* next on <var_45:IndexedIterator[AClassdef]>*/
}
}
BREAK_label47: (void)0;
{
((void(*)(val* self))((((long)var_45&3)?class_info[((long)var_45&3)]:var_45->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_45); /* finish on <var_45:IndexedIterator[AClassdef]>*/
}
{
nitc__modelize_property___ModelBuilder___process_default_constructors(self, var_nclassdef); /* Direct call modelize_property#ModelBuilder#process_default_constructors on <self:ModelBuilder>*/
}
RET_LABEL:;
}
/* method modelize_property#ModelBuilder#the_root_init_mmethod for (self: ModelBuilder): nullable MMethod */
val* nitc__modelize_property___ModelBuilder___the_root_init_mmethod(val* self) {
val* var /* : nullable MMethod */;
val* var1 /* : nullable MMethod */;
var1 = self->attrs[COLOR_nitc__modelize_property__ModelBuilder___the_root_init_mmethod].val; /* _the_root_init_mmethod on <self:ModelBuilder> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ModelBuilder#the_root_init_mmethod= for (self: ModelBuilder, nullable MMethod) */
void nitc__modelize_property___ModelBuilder___the_root_init_mmethod_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__modelize_property__ModelBuilder___the_root_init_mmethod].val = p0; /* _the_root_init_mmethod on <self:ModelBuilder> */
RET_LABEL:;
}
/* method modelize_property#ModelBuilder#process_default_constructors for (self: ModelBuilder, AClassdef) */
void nitc__modelize_property___ModelBuilder___process_default_constructors(val* self, val* p0) {
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var /* : nullable MClassDef */;
val* var2 /* : nullable MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : MClass */;
val* var8 /* : MClass */;
val* var9 /* : String */;
val* var11 /* : String */;
static val* varonce;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : String */;
short int var15 /* : Bool */;
short int var_ /* var : Bool */;
val* var16 /* : nullable MMethod */;
val* var18 /* : nullable MMethod */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : MMethod */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
val* var29 /* : String */;
val* var30 /* : MClass */;
val* var32 /* : MClass */;
val* var33 /* : MVisibility */;
val* var35 /* : MVisibility */;
val* var_mprop /* var mprop: MMethod */;
val* var37 /* : MMethodDef */;
val* var38 /* : Location */;
val* var40 /* : Location */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var41 /* : Array[MParameter] */;
val* var_mparameters /* var mparameters: Array[MParameter] */;
val* var42 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var47 /* : ToolContext */;
val* var49 /* : ToolContext */;
val* var51 /* : NativeArray[String] */;
static val* varonce50;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
val* var55 /* : String */;
val* var56 /* : String */;
val* var57 /* : String */;
val* var58 /* : String */;
val* var59 /* : String */;
val* var_defined_init /* var defined_init: nullable MMethodDef */;
val* var61 /* : Array[MPropDef] */;
val* var63 /* : Array[MPropDef] */;
val* var_64 /* var : Array[MPropDef] */;
val* var65 /* : IndexedIterator[nullable Object] */;
val* var_66 /* var : IndexedIterator[MPropDef] */;
short int var67 /* : Bool */;
val* var68 /* : nullable Object */;
val* var_mpropdef69 /* var mpropdef: MPropDef */;
short int var70 /* : Bool */;
int cltype;
int idtype;
short int var71 /* : Bool */;
val* var73 /* : MProperty */;
val* var75 /* : MProperty */;
short int var76 /* : Bool */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
val* var80 /* : MProperty */;
val* var82 /* : MProperty */;
short int var83 /* : Bool */;
short int var85 /* : Bool */;
short int var86 /* : Bool */;
short int var87 /* : Bool */;
short int var89 /* : Bool */;
short int var91 /* : Bool */;
val* var92 /* : MProperty */;
val* var94 /* : MProperty */;
val* var95 /* : String */;
val* var97 /* : String */;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : NativeString */;
val* var101 /* : String */;
short int var102 /* : Bool */;
short int var103 /* : Bool */;
int cltype104;
int idtype105;
short int var106 /* : Bool */;
val* var107 /* : Array[MParameter] */;
val* var_mparameters108 /* var mparameters: Array[MParameter] */;
val* var109 /* : Array[MProperty] */;
val* var_initializers /* var initializers: Array[MProperty] */;
val* var110 /* : ANodes[APropdef] */;
val* var112 /* : ANodes[APropdef] */;
val* var_113 /* var : ANodes[APropdef] */;
val* var114 /* : Iterator[ANode] */;
val* var_115 /* var : Iterator[APropdef] */;
short int var116 /* : Bool */;
val* var118 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
short int var119 /* : Bool */;
int cltype120;
int idtype121;
short int var122 /* : Bool */;
short int var124 /* : Bool */;
short int var125 /* : Bool */;
val* var127 /* : nullable MPropDef */;
val* var129 /* : nullable MPropDef */;
val* var_mpropdef130 /* var mpropdef: nullable MMethodDef */;
short int var131 /* : Bool */;
short int var132 /* : Bool */;
short int var134 /* : Bool */;
short int var136 /* : Bool */;
val* var137 /* : nullable MSignature */;
val* var139 /* : nullable MSignature */;
val* var_sig /* var sig: nullable MSignature */;
short int var140 /* : Bool */;
short int var141 /* : Bool */;
short int var143 /* : Bool */;
short int var145 /* : Bool */;
val* var146 /* : Array[MParameter] */;
val* var148 /* : Array[MParameter] */;
val* var149 /* : MProperty */;
val* var151 /* : MProperty */;
val* var152 /* : MProperty */;
val* var154 /* : MProperty */;
short int var156 /* : Bool */;
int cltype157;
int idtype158;
val* var159 /* : nullable MMethodDef */;
val* var161 /* : nullable MMethodDef */;
val* var_mreadpropdef /* var mreadpropdef: nullable MMethodDef */;
short int var162 /* : Bool */;
short int var163 /* : Bool */;
short int var165 /* : Bool */;
short int var167 /* : Bool */;
val* var168 /* : nullable MSignature */;
val* var170 /* : nullable MSignature */;
val* var_msignature171 /* var msignature: nullable MSignature */;
short int var172 /* : Bool */;
short int var173 /* : Bool */;
short int var175 /* : Bool */;
short int var177 /* : Bool */;
short int var178 /* : Bool */;
short int var180 /* : Bool */;
static val* varonce181;
val* var182 /* : String */;
char* var183 /* : NativeString */;
val* var184 /* : String */;
val* var185 /* : nullable AAnnotation */;
val* var_atlateinit /* var atlateinit: nullable AAnnotation */;
short int var186 /* : Bool */;
short int var187 /* : Bool */;
val* var_other189 /* var other: nullable Object */;
short int var190 /* : Bool */;
short int var191 /* : Bool */;
val* var192 /* : MProperty */;
val* var194 /* : MProperty */;
val* var195 /* : MProperty */;
val* var197 /* : MProperty */;
short int var199 /* : Bool */;
short int var201 /* : Bool */;
val* var202 /* : MProperty */;
val* var204 /* : MProperty */;
val* var205 /* : String */;
val* var207 /* : String */;
val* var_paramname /* var paramname: String */;
val* var208 /* : nullable MType */;
val* var210 /* : nullable MType */;
val* var_ret_type /* var ret_type: nullable MType */;
short int var211 /* : Bool */;
short int var212 /* : Bool */;
short int var214 /* : Bool */;
short int var216 /* : Bool */;
val* var217 /* : MParameter */;
val* var_mparameter /* var mparameter: MParameter */;
val* var218 /* : nullable MMethodDef */;
val* var220 /* : nullable MMethodDef */;
val* var_msetter /* var msetter: nullable MMethodDef */;
short int var221 /* : Bool */;
short int var222 /* : Bool */;
short int var224 /* : Bool */;
short int var226 /* : Bool */;
val* var227 /* : nullable MPropDef */;
val* var229 /* : nullable MPropDef */;
val* var230 /* : MProperty */;
val* var232 /* : MProperty */;
val* var233 /* : nullable MPropDef */;
val* var235 /* : nullable MPropDef */;
val* var236 /* : MProperty */;
val* var238 /* : MProperty */;
val* var240 /* : MProperty */;
val* var242 /* : MProperty */;
val* var243 /* : MProperty */;
val* var245 /* : MProperty */;
val* var247 /* : nullable MMethod */;
val* var249 /* : nullable MMethod */;
val* var_the_root_init_mmethod /* var the_root_init_mmethod: nullable MMethod */;
short int var250 /* : Bool */;
short int var251 /* : Bool */;
short int var253 /* : Bool */;
short int var255 /* : Bool */;
val* var256 /* : MModule */;
val* var258 /* : MModule */;
val* var259 /* : MClassType */;
val* var261 /* : MClassType */;
val* var262 /* : Array[MPropDef] */;
val* var_spropdefs /* var spropdefs: Array[MMethodDef] */;
short int var263 /* : Bool */;
val* var264 /* : ToolContext */;
val* var266 /* : ToolContext */;
val* var267 /* : Location */;
val* var269 /* : Location */;
val* var271 /* : NativeArray[String] */;
static val* varonce270;
static val* varonce272;
val* var273 /* : String */;
char* var274 /* : NativeString */;
val* var275 /* : String */;
static val* varonce276;
val* var277 /* : String */;
char* var278 /* : NativeString */;
val* var279 /* : String */;
static val* varonce280;
val* var281 /* : String */;
char* var282 /* : NativeString */;
val* var283 /* : String */;
val* var284 /* : String */;
val* var285 /* : MClassDef */;
val* var287 /* : MClassDef */;
val* var288 /* : String */;
val* var289 /* : String */;
val* var290 /* : Message */;
static val* varonce291;
val* var292 /* : String */;
char* var293 /* : NativeString */;
val* var294 /* : String */;
val* var295 /* : nullable AAnnotation */;
val* var_autoinit /* var autoinit: nullable AAnnotation */;
static val* varonce296;
val* var297 /* : String */;
char* var298 /* : NativeString */;
val* var299 /* : String */;
val* var300 /* : nullable AAnnotation */;
val* var_noautoinit /* var noautoinit: nullable AAnnotation */;
short int var301 /* : Bool */;
short int var302 /* : Bool */;
short int var304 /* : Bool */;
short int var305 /* : Bool */;
short int var306 /* : Bool */;
short int var307 /* : Bool */;
short int var309 /* : Bool */;
short int var310 /* : Bool */;
static val* varonce311;
val* var312 /* : String */;
char* var313 /* : NativeString */;
val* var314 /* : String */;
val* var315 /* : ANodes[AExpr] */;
val* var317 /* : ANodes[AExpr] */;
short int var318 /* : Bool */;
static val* varonce319;
val* var320 /* : String */;
char* var321 /* : NativeString */;
val* var322 /* : String */;
val* var323 /* : ANodes[AExpr] */;
val* var325 /* : ANodes[AExpr] */;
val* var_326 /* var : ANodes[AExpr] */;
val* var327 /* : Iterator[ANode] */;
val* var_328 /* var : Iterator[AExpr] */;
short int var329 /* : Bool */;
val* var331 /* : nullable Object */;
val* var_narg /* var narg: AExpr */;
val* var332 /* : nullable String */;
val* var_id /* var id: nullable String */;
short int var333 /* : Bool */;
short int var334 /* : Bool */;
static val* varonce335;
val* var336 /* : String */;
char* var337 /* : NativeString */;
val* var338 /* : String */;
static val* varonce339;
val* var340 /* : String */;
char* var341 /* : NativeString */;
val* var342 /* : String */;
val* var343 /* : String */;
val* var344 /* : nullable MProperty */;
val* var_p /* var p: nullable MProperty */;
short int var345 /* : Bool */;
short int var346 /* : Bool */;
short int var348 /* : Bool */;
short int var350 /* : Bool */;
val* var351 /* : nullable MProperty */;
short int var352 /* : Bool */;
short int var353 /* : Bool */;
short int var355 /* : Bool */;
short int var357 /* : Bool */;
val* var359 /* : NativeArray[String] */;
static val* varonce358;
static val* varonce360;
val* var361 /* : String */;
char* var362 /* : NativeString */;
val* var363 /* : String */;
static val* varonce364;
val* var365 /* : String */;
char* var366 /* : NativeString */;
val* var367 /* : String */;
val* var368 /* : String */;
short int var369 /* : Bool */;
short int var371 /* : Bool */;
short int var372 /* : Bool */;
val* var374 /* : NativeArray[String] */;
static val* varonce373;
static val* varonce375;
val* var376 /* : String */;
char* var377 /* : NativeString */;
val* var378 /* : String */;
static val* varonce379;
val* var380 /* : String */;
char* var381 /* : NativeString */;
val* var382 /* : String */;
val* var383 /* : String */;
val* var384 /* : String */;
val* var385 /* : MPropDef */;
val* var387 /* : MPropDef */;
val* var_pd /* var pd: MPropDef */;
short int var388 /* : Bool */;
int cltype389;
int idtype390;
val* var391 /* : nullable MSignature */;
val* var393 /* : nullable MSignature */;
val* var394 /* : MClass */;
val* var396 /* : MClass */;
val* var397 /* : MClassType */;
val* var399 /* : MClassType */;
val* var400 /* : MClassType */;
val* var402 /* : MClassType */;
val* var403 /* : MModule */;
val* var405 /* : MModule */;
val* var406 /* : MSignature */;
val* var_sig407 /* var sig: MSignature */;
val* var408 /* : Array[MParameter] */;
val* var410 /* : Array[MParameter] */;
val* var411 /* : nullable Object */;
val* var_longest /* var longest: MMethodDef */;
long var412 /* : Int */;
long var414 /* : Int */;
short int var415 /* : Bool */;
short int var417 /* : Bool */;
int cltype418;
int idtype419;
const char* var_class_name;
short int var420 /* : Bool */;
val* var_421 /* var : Array[MMethodDef] */;
val* var422 /* : IndexedIterator[nullable Object] */;
val* var_423 /* var : IndexedIterator[MMethodDef] */;
short int var424 /* : Bool */;
val* var426 /* : nullable Object */;
val* var_spd /* var spd: MMethodDef */;
val* var427 /* : Array[MProperty] */;
val* var429 /* : Array[MProperty] */;
long var430 /* : Int */;
long var432 /* : Int */;
val* var433 /* : Array[MProperty] */;
val* var435 /* : Array[MProperty] */;
long var436 /* : Int */;
long var438 /* : Int */;
short int var439 /* : Bool */;
short int var441 /* : Bool */;
int cltype442;
int idtype443;
const char* var_class_name444;
short int var445 /* : Bool */;
short int var446 /* : Bool */;
short int var447 /* : Bool */;
short int var449 /* : Bool */;
short int var451 /* : Bool */;
val* var_452 /* var : Array[MMethodDef] */;
val* var453 /* : IndexedIterator[nullable Object] */;
val* var_454 /* var : IndexedIterator[MMethodDef] */;
short int var455 /* : Bool */;
val* var457 /* : nullable Object */;
val* var_spd458 /* var spd: MMethodDef */;
long var_i /* var i: Int */;
val* var459 /* : Array[MProperty] */;
val* var461 /* : Array[MProperty] */;
val* var_462 /* var : Array[MProperty] */;
val* var463 /* : IndexedIterator[nullable Object] */;
val* var_464 /* var : IndexedIterator[MProperty] */;
short int var465 /* : Bool */;
val* var467 /* : nullable Object */;
val* var_p468 /* var p: MProperty */;
val* var469 /* : Array[MProperty] */;
val* var471 /* : Array[MProperty] */;
val* var472 /* : nullable Object */;
short int var473 /* : Bool */;
short int var475 /* : Bool */;
short int var476 /* : Bool */;
val* var477 /* : ArraySet[MProperty] */;
val* var_proposal /* var proposal: ArraySet[MProperty] */;
val* var_478 /* var : Array[MMethodDef] */;
val* var479 /* : IndexedIterator[nullable Object] */;
val* var_480 /* var : IndexedIterator[MMethodDef] */;
short int var481 /* : Bool */;
val* var483 /* : nullable Object */;
val* var_spd2 /* var spd2: MMethodDef */;
val* var484 /* : Array[MProperty] */;
val* var486 /* : Array[MProperty] */;
val* var488 /* : NativeArray[String] */;
static val* varonce487;
static val* varonce489;
val* var490 /* : String */;
char* var491 /* : NativeString */;
val* var492 /* : String */;
static val* varonce493;
val* var494 /* : String */;
char* var495 /* : NativeString */;
val* var496 /* : String */;
static val* varonce497;
val* var498 /* : String */;
char* var499 /* : NativeString */;
val* var500 /* : String */;
static val* varonce501;
val* var502 /* : String */;
char* var503 /* : NativeString */;
val* var504 /* : String */;
static val* varonce505;
val* var506 /* : String */;
char* var507 /* : NativeString */;
val* var508 /* : String */;
static val* varonce509;
val* var510 /* : String */;
char* var511 /* : NativeString */;
val* var512 /* : String */;
static val* varonce513;
val* var514 /* : String */;
char* var515 /* : NativeString */;
val* var516 /* : String */;
val* var517 /* : MClass */;
val* var519 /* : MClass */;
val* var520 /* : String */;
val* var521 /* : String */;
val* var522 /* : Array[MProperty] */;
val* var524 /* : Array[MProperty] */;
static val* varonce525;
val* var526 /* : String */;
char* var527 /* : NativeString */;
val* var528 /* : String */;
val* var529 /* : String */;
val* var530 /* : String */;
val* var531 /* : Array[MProperty] */;
val* var533 /* : Array[MProperty] */;
static val* varonce534;
val* var535 /* : String */;
char* var536 /* : NativeString */;
val* var537 /* : String */;
val* var538 /* : String */;
static val* varonce539;
val* var540 /* : String */;
char* var541 /* : NativeString */;
val* var542 /* : String */;
val* var543 /* : String */;
val* var544 /* : String */;
long var545 /* : Int */;
short int var547 /* : Bool */;
int cltype548;
int idtype549;
const char* var_class_name550;
long var551 /* : Int */;
short int var552 /* : Bool */;
short int var553 /* : Bool */;
short int var555 /* : Bool */;
short int var556 /* : Bool */;
short int var557 /* : Bool */;
short int var558 /* : Bool */;
short int var_559 /* var : Bool */;
val* var560 /* : Array[MProperty] */;
val* var562 /* : Array[MProperty] */;
short int var563 /* : Bool */;
static val* varonce564;
val* var565 /* : String */;
char* var566 /* : NativeString */;
val* var567 /* : String */;
static val* varonce568;
val* var569 /* : String */;
char* var570 /* : NativeString */;
val* var571 /* : String */;
short int var572 /* : Bool */;
short int var573 /* : Bool */;
long var574 /* : Int */;
long var576 /* : Int */;
short int var577 /* : Bool */;
short int var579 /* : Bool */;
short int var_580 /* var : Bool */;
short int var581 /* : Bool */;
short int var_582 /* var : Bool */;
short int var583 /* : Bool */;
short int var584 /* : Bool */;
short int var586 /* : Bool */;
short int var588 /* : Bool */;
val* var589 /* : ToolContext */;
val* var591 /* : ToolContext */;
val* var593 /* : NativeArray[String] */;
static val* varonce592;
static val* varonce594;
val* var595 /* : String */;
char* var596 /* : NativeString */;
val* var597 /* : String */;
val* var598 /* : String */;
val* var599 /* : String */;
val* var600 /* : String */;
val* var601 /* : MClass */;
val* var603 /* : MClass */;
val* var605 /* : Array[MProperty] */;
val* var607 /* : Array[MProperty] */;
long var608 /* : Int */;
long var610 /* : Int */;
short int var611 /* : Bool */;
short int var613 /* : Bool */;
int cltype614;
int idtype615;
const char* var_class_name616;
short int var617 /* : Bool */;
val* var618 /* : nullable MSignature */;
val* var620 /* : nullable MSignature */;
val* var621 /* : Array[MParameter] */;
val* var623 /* : Array[MParameter] */;
val* var624 /* : Array[MProperty] */;
val* var626 /* : Array[MProperty] */;
short int var627 /* : Bool */;
short int var628 /* : Bool */;
short int var630 /* : Bool */;
short int var631 /* : Bool */;
val* var632 /* : Array[MProperty] */;
val* var634 /* : Array[MProperty] */;
val* var635 /* : MSignature */;
val* var_msignature636 /* var msignature: MSignature */;
val* var638 /* : ToolContext */;
val* var640 /* : ToolContext */;
val* var642 /* : NativeArray[String] */;
static val* varonce641;
static val* varonce643;
val* var644 /* : String */;
char* var645 /* : NativeString */;
val* var646 /* : String */;
val* var647 /* : String */;
val* var648 /* : String */;
val* var649 /* : String */;
val* var650 /* : String */;
val* var651 /* : MClass */;
val* var653 /* : MClass */;
val* var_mprop655 /* var mprop: MMethod */;
val* var656 /* : MMethodDef */;
val* var657 /* : Location */;
val* var659 /* : Location */;
val* var_mpropdef660 /* var mpropdef: MMethodDef */;
val* var662 /* : Array[MProperty] */;
val* var664 /* : Array[MProperty] */;
val* var665 /* : MSignature */;
val* var_msignature666 /* var msignature: MSignature */;
val* var668 /* : MSignature */;
val* var669 /* : Array[MParameter] */;
val* var672 /* : ToolContext */;
val* var674 /* : ToolContext */;
val* var676 /* : NativeArray[String] */;
static val* varonce675;
static val* varonce677;
val* var678 /* : String */;
char* var679 /* : NativeString */;
val* var680 /* : String */;
val* var681 /* : String */;
val* var682 /* : String */;
val* var683 /* : String */;
val* var684 /* : String */;
val* var685 /* : MClass */;
val* var687 /* : MClass */;
var_nclassdef = p0;
{
{ /* Inline modelize_class#AClassdef#mclassdef (var_nclassdef) on <var_nclassdef:AClassdef> */
var2 = var_nclassdef->attrs[COLOR_nitc__modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_nclassdef:AClassdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 140);
fatal_exit(1);
}
var_mclassdef = var;
{
var3 = nitc___nitc__MClassDef___is_intro(var_mclassdef);
}
var4 = !var3;
if (var4){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var8 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 576);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline model#MClass#name (var6) on <var6:MClass> */
var11 = var6->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var6:MClass> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 385);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
if (likely(varonce!=NULL)) {
var12 = varonce;
} else {
var13 = "Object";
var14 = core__flat___NativeString___to_s_full(var13, 6l, 6l);
var12 = var14;
varonce = var12;
}
{
var15 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_core__kernel__Object___61d_61d]))(var9, var12); /* == on <var9:String>*/
}
var_ = var15;
if (var15){
{
{ /* Inline modelize_property#ModelBuilder#the_root_init_mmethod (self) on <self:ModelBuilder> */
var18 = self->attrs[COLOR_nitc__modelize_property__ModelBuilder___the_root_init_mmethod].val; /* _the_root_init_mmethod on <self:ModelBuilder> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
if (var16 == NULL) {
var19 = 1; /* is null */
} else {
var19 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var16,((val*)NULL)) on <var16:nullable MMethod> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var16,var_other) on <var16:nullable MMethod(MMethod)> */
var24 = var16 == var_other;
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
var5 = var19;
} else {
var5 = var_;
}
if (var5){
var25 = NEW_nitc__MMethod(&type_nitc__MMethod);
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "init";
var29 = core__flat___NativeString___to_s_full(var28, 4l, 4l);
var27 = var29;
varonce26 = var27;
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var32 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 576);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline model#MClass#visibility (var30) on <var30:MClass> */
var35 = var30->attrs[COLOR_nitc__model__MClass___visibility].val; /* _visibility on <var30:MClass> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 463);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var25->class->vft[COLOR_nitc__model__MProperty__intro_mclassdef_61d]))(var25, var_mclassdef); /* intro_mclassdef= on <var25:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var25->class->vft[COLOR_nitc__model__MProperty__name_61d]))(var25, var27); /* name= on <var25:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var25->class->vft[COLOR_nitc__model__MProperty__visibility_61d]))(var25, var33); /* visibility= on <var25:MMethod>*/
}
{
((void(*)(val* self))(var25->class->vft[COLOR_core__kernel__Object__init]))(var25); /* init on <var25:MMethod>*/
}
var_mprop = var25;
{
{ /* Inline model#MMethod#is_root_init= (var_mprop,1) on <var_mprop:MMethod> */
var_mprop->attrs[COLOR_nitc__model__MMethod___is_root_init].s = 1; /* _is_root_init on <var_mprop:MMethod> */
RET_LABEL36:(void)0;
}
}
var37 = NEW_nitc__MMethodDef(&type_nitc__MMethodDef);
{
{ /* Inline parser_nodes#ANode#location (var_nclassdef) on <var_nclassdef:AClassdef> */
var40 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_nclassdef:AClassdef> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 24);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var37->class->vft[COLOR_nitc__model__MPropDef__mclassdef_61d]))(var37, var_mclassdef); /* mclassdef= on <var37:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var37->class->vft[COLOR_nitc__model__MPropDef__mproperty_61d]))(var37, var_mprop); /* mproperty= on <var37:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var37->class->vft[COLOR_nitc__model__MPropDef__location_61d]))(var37, var38); /* location= on <var37:MMethodDef>*/
}
{
((void(*)(val* self))(var37->class->vft[COLOR_core__kernel__Object__init]))(var37); /* init on <var37:MMethodDef>*/
}
var_mpropdef = var37;
var41 = NEW_core__Array(&type_core__Array__nitc__MParameter);
{
core___core__Array___core__kernel__Object__init(var41); /* Direct call array#Array#init on <var41:Array[MParameter]>*/
}
var_mparameters = var41;
var42 = NEW_nitc__MSignature(&type_nitc__MSignature);
{
((void(*)(val* self, val* p0))(var42->class->vft[COLOR_nitc__model__MSignature__mparameters_61d]))(var42, var_mparameters); /* mparameters= on <var42:MSignature>*/
}
{
((void(*)(val* self, val* p0))(var42->class->vft[COLOR_nitc__model__MSignature__return_mtype_61d]))(var42, ((val*)NULL)); /* return_mtype= on <var42:MSignature>*/
}
{
((void(*)(val* self))(var42->class->vft[COLOR_core__kernel__Object__init]))(var42); /* init on <var42:MSignature>*/
}
var_msignature = var42;
{
{ /* Inline model#MMethodDef#msignature= (var_mpropdef,var_msignature) on <var_mpropdef:MMethodDef> */
var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val = var_msignature; /* _msignature on <var_mpropdef:MMethodDef> */
RET_LABEL43:(void)0;
}
}
{
{ /* Inline model#MMethodDef#new_msignature= (var_mpropdef,var_msignature) on <var_mpropdef:MMethodDef> */
var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___new_msignature].val = var_msignature; /* _new_msignature on <var_mpropdef:MMethodDef> */
RET_LABEL44:(void)0;
}
}
{
{ /* Inline model#MMethod#is_init= (var_mprop,1) on <var_mprop:MMethod> */
var_mprop->attrs[COLOR_nitc__model__MMethod___is_init].s = 1; /* _is_init on <var_mprop:MMethod> */
RET_LABEL45:(void)0;
}
}
{
{ /* Inline modelize_property#AClassdef#mfree_init= (var_nclassdef,var_mpropdef) on <var_nclassdef:AClassdef> */
var_nclassdef->attrs[COLOR_nitc__modelize_property__AClassdef___mfree_init].val = var_mpropdef; /* _mfree_init on <var_nclassdef:AClassdef> */
RET_LABEL46:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var49 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
if (unlikely(varonce50==NULL)) {
var51 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = " gets a free empty constructor ";
var55 = core__flat___NativeString___to_s_full(var54, 31l, 31l);
var53 = var55;
varonce52 = var53;
}
((struct instance_core__NativeArray*)var51)->values[1]=var53;
} else {
var51 = varonce50;
varonce50 = NULL;
}
{
var56 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:MClassDef>*/
}
((struct instance_core__NativeArray*)var51)->values[0]=var56;
{
var57 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:MMethodDef>*/
}
((struct instance_core__NativeArray*)var51)->values[2]=var57;
{
var58 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_msignature); /* to_s on <var_msignature:MSignature>*/
}
((struct instance_core__NativeArray*)var51)->values[3]=var58;
{
var59 = ((val*(*)(val* self))(var51->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var51); /* native_to_s on <var51:NativeArray[String]>*/
}
varonce50 = var51;
{
nitc___nitc__ToolContext___info(var47, var59, 3l); /* Direct call toolcontext#ToolContext#info on <var47:ToolContext>*/
}
{
{ /* Inline modelize_property#ModelBuilder#the_root_init_mmethod= (self,var_mprop) on <self:ModelBuilder> */
self->attrs[COLOR_nitc__modelize_property__ModelBuilder___the_root_init_mmethod].val = var_mprop; /* _the_root_init_mmethod on <self:ModelBuilder> */
RET_LABEL60:(void)0;
}
}
goto RET_LABEL;
} else {
}
var_defined_init = ((val*)NULL);
{
{ /* Inline model#MClassDef#mpropdefs (var_mclassdef) on <var_mclassdef:MClassDef> */
var63 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mpropdefs].val; /* _mpropdefs on <var_mclassdef:MClassDef> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 707);
fatal_exit(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
var_64 = var61;
{
var65 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_64);
}
var_66 = var65;
for(;;) {
{
var67 = ((short int(*)(val* self))((((long)var_66&3)?class_info[((long)var_66&3)]:var_66->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_66); /* is_ok on <var_66:IndexedIterator[MPropDef]>*/
}
if (var67){
} else {
goto BREAK_label;
}
{
var68 = ((val*(*)(val* self))((((long)var_66&3)?class_info[((long)var_66&3)]:var_66->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_66); /* item on <var_66:IndexedIterator[MPropDef]>*/
}
var_mpropdef69 = var68;
/* <var_mpropdef69:MPropDef> isa MMethodDef */
cltype = type_nitc__MMethodDef.color;
idtype = type_nitc__MMethodDef.id;
if(cltype >= var_mpropdef69->type->table_size) {
var70 = 0;
} else {
var70 = var_mpropdef69->type->type_table[cltype] == idtype;
}
var71 = !var70;
if (var71){
goto BREAK_label72;
} else {
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef69) on <var_mpropdef69:MPropDef(MMethodDef)> */
var75 = var_mpropdef69->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef69:MPropDef(MMethodDef)> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
{ /* Inline model#MMethod#is_init (var73) on <var73:MProperty(MMethod)> */
var78 = var73->attrs[COLOR_nitc__model__MMethod___is_init].s; /* _is_init on <var73:MProperty(MMethod)> */
var76 = var78;
RET_LABEL77:(void)0;
}
}
var79 = !var76;
if (var79){
goto BREAK_label72;
} else {
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef69) on <var_mpropdef69:MPropDef(MMethodDef)> */
var82 = var_mpropdef69->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef69:MPropDef(MMethodDef)> */
if (unlikely(var82 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var80 = var82;
RET_LABEL81:(void)0;
}
}
{
{ /* Inline model#MMethod#is_root_init (var80) on <var80:MProperty(MMethod)> */
var85 = var80->attrs[COLOR_nitc__model__MMethod___is_root_init].s; /* _is_root_init on <var80:MProperty(MMethod)> */
var83 = var85;
RET_LABEL84:(void)0;
}
}
if (var83){
if (var_defined_init == NULL) {
var86 = 1; /* is null */
} else {
var86 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_defined_init,((val*)NULL)) on <var_defined_init:nullable MMethodDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_defined_init,var_other) on <var_defined_init:nullable MMethodDef(MMethodDef)> */
var91 = var_defined_init == var_other;
var89 = var91;
goto RET_LABEL90;
RET_LABEL90:(void)0;
}
}
var87 = var89;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
var86 = var87;
}
if (unlikely(!var86)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 168);
fatal_exit(1);
}
var_defined_init = var_mpropdef69;
} else {
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef69) on <var_mpropdef69:MPropDef(MMethodDef)> */
var94 = var_mpropdef69->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef69:MPropDef(MMethodDef)> */
if (unlikely(var94 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var92 = var94;
RET_LABEL93:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var92) on <var92:MProperty(MMethod)> */
var97 = var92->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var92:MProperty(MMethod)> */
if (unlikely(var97 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1951);
fatal_exit(1);
}
var95 = var97;
RET_LABEL96:(void)0;
}
}
if (likely(varonce98!=NULL)) {
var99 = varonce98;
} else {
var100 = "init";
var101 = core__flat___NativeString___to_s_full(var100, 4l, 4l);
var99 = var101;
varonce98 = var99;
}
{
var102 = ((short int(*)(val* self, val* p0))(var95->class->vft[COLOR_core__kernel__Object___61d_61d]))(var95, var99); /* == on <var95:String>*/
}
if (var102){
goto RET_LABEL;
} else {
}
}
BREAK_label72: (void)0;
{
((void(*)(val* self))((((long)var_66&3)?class_info[((long)var_66&3)]:var_66->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_66); /* next on <var_66:IndexedIterator[MPropDef]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_66&3)?class_info[((long)var_66&3)]:var_66->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_66); /* finish on <var_66:IndexedIterator[MPropDef]>*/
}
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype104 = type_nitc__AStdClassdef.color;
idtype105 = type_nitc__AStdClassdef.id;
if(cltype104 >= var_nclassdef->type->table_size) {
var103 = 0;
} else {
var103 = var_nclassdef->type->type_table[cltype104] == idtype105;
}
var106 = !var103;
if (var106){
goto RET_LABEL;
} else {
}
var107 = NEW_core__Array(&type_core__Array__nitc__MParameter);
{
core___core__Array___core__kernel__Object__init(var107); /* Direct call array#Array#init on <var107:Array[MParameter]>*/
}
var_mparameters108 = var107;
var109 = NEW_core__Array(&type_core__Array__nitc__MProperty);
{
core___core__Array___core__kernel__Object__init(var109); /* Direct call array#Array#init on <var109:Array[MProperty]>*/
}
var_initializers = var109;
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var112 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var112 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1155);
fatal_exit(1);
}
var110 = var112;
RET_LABEL111:(void)0;
}
}
var_113 = var110;
{
var114 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_113);
}
var_115 = var114;
for(;;) {
{
var116 = ((short int(*)(val* self))((((long)var_115&3)?class_info[((long)var_115&3)]:var_115->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_115); /* is_ok on <var_115:Iterator[APropdef]>*/
}
if (var116){
} else {
goto BREAK_label117;
}
{
var118 = ((val*(*)(val* self))((((long)var_115&3)?class_info[((long)var_115&3)]:var_115->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_115); /* item on <var_115:Iterator[APropdef]>*/
}
var_npropdef = var118;
/* <var_npropdef:APropdef> isa AMethPropdef */
cltype120 = type_nitc__AMethPropdef.color;
idtype121 = type_nitc__AMethPropdef.id;
if(cltype120 >= var_npropdef->type->table_size) {
var119 = 0;
} else {
var119 = var_npropdef->type->type_table[cltype120] == idtype121;
}
if (var119){
{
{ /* Inline modelize_property#AMethPropdef#is_autoinit (var_npropdef) on <var_npropdef:APropdef(AMethPropdef)> */
var124 = var_npropdef->attrs[COLOR_nitc__modelize_property__AMethPropdef___is_autoinit].s; /* _is_autoinit on <var_npropdef:APropdef(AMethPropdef)> */
var122 = var124;
RET_LABEL123:(void)0;
}
}
var125 = !var122;
if (var125){
goto BREAK_label126;
} else {
}
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:APropdef(AMethPropdef)> */
var129 = var_npropdef->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:APropdef(AMethPropdef)> */
var127 = var129;
RET_LABEL128:(void)0;
}
}
var_mpropdef130 = var127;
if (var_mpropdef130 == NULL) {
var131 = 1; /* is null */
} else {
var131 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mpropdef130,((val*)NULL)) on <var_mpropdef130:nullable MMethodDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef130,var_other) on <var_mpropdef130:nullable MMethodDef(MMethodDef)> */
var136 = var_mpropdef130 == var_other;
var134 = var136;
goto RET_LABEL135;
RET_LABEL135:(void)0;
}
}
var132 = var134;
goto RET_LABEL133;
RET_LABEL133:(void)0;
}
var131 = var132;
}
if (var131){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef130) on <var_mpropdef130:nullable MMethodDef(MMethodDef)> */
var139 = var_mpropdef130->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef130:nullable MMethodDef(MMethodDef)> */
var137 = var139;
RET_LABEL138:(void)0;
}
}
var_sig = var137;
if (var_sig == NULL) {
var140 = 1; /* is null */
} else {
var140 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_sig,((val*)NULL)) on <var_sig:nullable MSignature> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_sig,var_other) on <var_sig:nullable MSignature(MSignature)> */
var145 = var_sig == var_other;
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
goto BREAK_label126;
} else {
}
{
{ /* Inline model#MSignature#mparameters (var_sig) on <var_sig:nullable MSignature(MSignature)> */
var148 = var_sig->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_sig:nullable MSignature(MSignature)> */
if (unlikely(var148 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1783);
fatal_exit(1);
}
var146 = var148;
RET_LABEL147:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var_mparameters108, var146); /* Direct call array#Array#add_all on <var_mparameters108:Array[MParameter]>*/
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef130) on <var_mpropdef130:nullable MMethodDef(MMethodDef)> */
var151 = var_mpropdef130->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef130:nullable MMethodDef(MMethodDef)> */
if (unlikely(var151 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var149 = var151;
RET_LABEL150:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_initializers, var149); /* Direct call array#Array#add on <var_initializers:Array[MProperty]>*/
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef130) on <var_mpropdef130:nullable MMethodDef(MMethodDef)> */
var154 = var_mpropdef130->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef130:nullable MMethodDef(MMethodDef)> */
if (unlikely(var154 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var152 = var154;
RET_LABEL153:(void)0;
}
}
{
{ /* Inline model#MProperty#is_autoinit= (var152,1) on <var152:MProperty(MMethod)> */
var152->attrs[COLOR_nitc__model__MProperty___is_autoinit].s = 1; /* _is_autoinit on <var152:MProperty(MMethod)> */
RET_LABEL155:(void)0;
}
}
} else {
}
/* <var_npropdef:APropdef> isa AAttrPropdef */
cltype157 = type_nitc__AAttrPropdef.color;
idtype158 = type_nitc__AAttrPropdef.id;
if(cltype157 >= var_npropdef->type->table_size) {
var156 = 0;
} else {
var156 = var_npropdef->type->type_table[cltype157] == idtype158;
}
if (var156){
{
{ /* Inline modelize_property#AAttrPropdef#mreadpropdef (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var161 = var_npropdef->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mreadpropdef].val; /* _mreadpropdef on <var_npropdef:APropdef(AAttrPropdef)> */
var159 = var161;
RET_LABEL160:(void)0;
}
}
var_mreadpropdef = var159;
if (var_mreadpropdef == NULL) {
var162 = 1; /* is null */
} else {
var162 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mreadpropdef,((val*)NULL)) on <var_mreadpropdef:nullable MMethodDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mreadpropdef,var_other) on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var167 = var_mreadpropdef == var_other;
var165 = var167;
goto RET_LABEL166;
RET_LABEL166:(void)0;
}
}
var163 = var165;
goto RET_LABEL164;
RET_LABEL164:(void)0;
}
var162 = var163;
}
if (var162){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MMethodDef#msignature (var_mreadpropdef) on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var170 = var_mreadpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var168 = var170;
RET_LABEL169:(void)0;
}
}
var_msignature171 = var168;
if (var_msignature171 == NULL) {
var172 = 1; /* is null */
} else {
var172 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_msignature171,((val*)NULL)) on <var_msignature171:nullable MSignature> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_msignature171,var_other) on <var_msignature171:nullable MSignature(MSignature)> */
var177 = var_msignature171 == var_other;
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
{ /* Inline modelize_property#AAttrPropdef#noinit (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var180 = var_npropdef->attrs[COLOR_nitc__modelize_property__AAttrPropdef___noinit].s; /* _noinit on <var_npropdef:APropdef(AAttrPropdef)> */
var178 = var180;
RET_LABEL179:(void)0;
}
}
if (var178){
goto BREAK_label126;
} else {
}
if (likely(varonce181!=NULL)) {
var182 = varonce181;
} else {
var183 = "lateinit";
var184 = core__flat___NativeString___to_s_full(var183, 8l, 8l);
var182 = var184;
varonce181 = var182;
}
{
var185 = nitc__annotation___Prod___get_single_annotation(var_npropdef, var182, self);
}
var_atlateinit = var185;
if (var_atlateinit == NULL) {
var186 = 0; /* is null */
} else {
var186 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atlateinit,((val*)NULL)) on <var_atlateinit:nullable AAnnotation> */
var_other189 = ((val*)NULL);
{
var190 = ((short int(*)(val* self, val* p0))(var_atlateinit->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atlateinit, var_other189); /* == on <var_atlateinit:nullable AAnnotation(AAnnotation)>*/
}
var191 = !var190;
var187 = var191;
goto RET_LABEL188;
RET_LABEL188:(void)0;
}
var186 = var187;
}
if (var186){
{
{ /* Inline model#MPropDef#mproperty (var_mreadpropdef) on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var194 = var_mreadpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var194 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var192 = var194;
RET_LABEL193:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_initializers, var192); /* Direct call array#Array#add on <var_initializers:Array[MProperty]>*/
}
{
{ /* Inline model#MPropDef#mproperty (var_mreadpropdef) on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var197 = var_mreadpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var197 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var195 = var197;
RET_LABEL196:(void)0;
}
}
{
{ /* Inline model#MProperty#is_autoinit= (var195,1) on <var195:MProperty(MMethod)> */
var195->attrs[COLOR_nitc__model__MProperty___is_autoinit].s = 1; /* _is_autoinit on <var195:MProperty(MMethod)> */
RET_LABEL198:(void)0;
}
}
goto BREAK_label126;
} else {
}
{
{ /* Inline modelize_property#AAttrPropdef#has_value (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var201 = var_npropdef->attrs[COLOR_nitc__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <var_npropdef:APropdef(AAttrPropdef)> */
var199 = var201;
RET_LABEL200:(void)0;
}
}
if (var199){
goto BREAK_label126;
} else {
}
{
{ /* Inline model#MPropDef#mproperty (var_mreadpropdef) on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var204 = var_mreadpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var204 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var202 = var204;
RET_LABEL203:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var202) on <var202:MProperty(MMethod)> */
var207 = var202->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var202:MProperty(MMethod)> */
if (unlikely(var207 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1951);
fatal_exit(1);
}
var205 = var207;
RET_LABEL206:(void)0;
}
}
var_paramname = var205;
{
{ /* Inline model#MSignature#return_mtype (var_msignature171) on <var_msignature171:nullable MSignature(MSignature)> */
var210 = var_msignature171->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature171:nullable MSignature(MSignature)> */
var208 = var210;
RET_LABEL209:(void)0;
}
}
var_ret_type = var208;
if (var_ret_type == NULL) {
var211 = 1; /* is null */
} else {
var211 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ret_type,((val*)NULL)) on <var_ret_type:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_ret_type,var_other) on <var_ret_type:nullable MType(MType)> */
var216 = var_ret_type == var_other;
var214 = var216;
goto RET_LABEL215;
RET_LABEL215:(void)0;
}
}
var212 = var214;
goto RET_LABEL213;
RET_LABEL213:(void)0;
}
var211 = var212;
}
if (var211){
goto RET_LABEL;
} else {
}
var217 = NEW_nitc__MParameter(&type_nitc__MParameter);
{
((void(*)(val* self, val* p0))(var217->class->vft[COLOR_nitc__model__MParameter__name_61d]))(var217, var_paramname); /* name= on <var217:MParameter>*/
}
{
((void(*)(val* self, val* p0))(var217->class->vft[COLOR_nitc__model__MParameter__mtype_61d]))(var217, var_ret_type); /* mtype= on <var217:MParameter>*/
}
{
((void(*)(val* self, short int p0))(var217->class->vft[COLOR_nitc__model__MParameter__is_vararg_61d]))(var217, 0); /* is_vararg= on <var217:MParameter>*/
}
{
((void(*)(val* self))(var217->class->vft[COLOR_core__kernel__Object__init]))(var217); /* init on <var217:MParameter>*/
}
var_mparameter = var217;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_mparameters108, var_mparameter); /* Direct call array#Array#add on <var_mparameters108:Array[MParameter]>*/
}
{
{ /* Inline modelize_property#AAttrPropdef#mwritepropdef (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var220 = var_npropdef->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mwritepropdef].val; /* _mwritepropdef on <var_npropdef:APropdef(AAttrPropdef)> */
var218 = var220;
RET_LABEL219:(void)0;
}
}
var_msetter = var218;
if (var_msetter == NULL) {
var221 = 1; /* is null */
} else {
var221 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_msetter,((val*)NULL)) on <var_msetter:nullable MMethodDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_msetter,var_other) on <var_msetter:nullable MMethodDef(MMethodDef)> */
var226 = var_msetter == var_other;
var224 = var226;
goto RET_LABEL225;
RET_LABEL225:(void)0;
}
}
var222 = var224;
goto RET_LABEL223;
RET_LABEL223:(void)0;
}
var221 = var222;
}
if (var221){
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var229 = var_npropdef->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:APropdef(AAttrPropdef)> */
var227 = var229;
RET_LABEL228:(void)0;
}
}
if (var227 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 216);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mproperty (var227) on <var227:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var227 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var232 = var227->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var227:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var232 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var230 = var232;
RET_LABEL231:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_initializers, var230); /* Direct call array#Array#add on <var_initializers:Array[MProperty]>*/
}
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var235 = var_npropdef->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:APropdef(AAttrPropdef)> */
var233 = var235;
RET_LABEL234:(void)0;
}
}
if (var233 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 217);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mproperty (var233) on <var233:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var233 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var238 = var233->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var233:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var238 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var236 = var238;
RET_LABEL237:(void)0;
}
}
{
{ /* Inline model#MProperty#is_autoinit= (var236,1) on <var236:MProperty(MAttribute)> */
var236->attrs[COLOR_nitc__model__MProperty___is_autoinit].s = 1; /* _is_autoinit on <var236:MProperty(MAttribute)> */
RET_LABEL239:(void)0;
}
}
} else {
{
{ /* Inline model#MPropDef#mproperty (var_msetter) on <var_msetter:nullable MMethodDef(MMethodDef)> */
var242 = var_msetter->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_msetter:nullable MMethodDef(MMethodDef)> */
if (unlikely(var242 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var240 = var242;
RET_LABEL241:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_initializers, var240); /* Direct call array#Array#add on <var_initializers:Array[MProperty]>*/
}
{
{ /* Inline model#MPropDef#mproperty (var_msetter) on <var_msetter:nullable MMethodDef(MMethodDef)> */
var245 = var_msetter->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_msetter:nullable MMethodDef(MMethodDef)> */
if (unlikely(var245 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var243 = var245;
RET_LABEL244:(void)0;
}
}
{
{ /* Inline model#MProperty#is_autoinit= (var243,1) on <var243:MProperty(MMethod)> */
var243->attrs[COLOR_nitc__model__MProperty___is_autoinit].s = 1; /* _is_autoinit on <var243:MProperty(MMethod)> */
RET_LABEL246:(void)0;
}
}
}
} else {
}
BREAK_label126: (void)0;
{
((void(*)(val* self))((((long)var_115&3)?class_info[((long)var_115&3)]:var_115->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_115); /* next on <var_115:Iterator[APropdef]>*/
}
}
BREAK_label117: (void)0;
{
((void(*)(val* self))((((long)var_115&3)?class_info[((long)var_115&3)]:var_115->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_115); /* finish on <var_115:Iterator[APropdef]>*/
}
{
{ /* Inline modelize_property#ModelBuilder#the_root_init_mmethod (self) on <self:ModelBuilder> */
var249 = self->attrs[COLOR_nitc__modelize_property__ModelBuilder___the_root_init_mmethod].val; /* _the_root_init_mmethod on <self:ModelBuilder> */
var247 = var249;
RET_LABEL248:(void)0;
}
}
var_the_root_init_mmethod = var247;
if (var_the_root_init_mmethod == NULL) {
var250 = 1; /* is null */
} else {
var250 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_the_root_init_mmethod,((val*)NULL)) on <var_the_root_init_mmethod:nullable MMethod> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_the_root_init_mmethod,var_other) on <var_the_root_init_mmethod:nullable MMethod(MMethod)> */
var255 = var_the_root_init_mmethod == var_other;
var253 = var255;
goto RET_LABEL254;
RET_LABEL254:(void)0;
}
}
var251 = var253;
goto RET_LABEL252;
RET_LABEL252:(void)0;
}
var250 = var251;
}
if (var250){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var258 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var258 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 573);
fatal_exit(1);
}
var256 = var258;
RET_LABEL257:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var261 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var261 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 579);
fatal_exit(1);
}
var259 = var261;
RET_LABEL260:(void)0;
}
}
{
var262 = nitc___nitc__MProperty___lookup_super_definitions(var_the_root_init_mmethod, var256, var259);
}
var_spropdefs = var262;
{
var263 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_spropdefs);
}
if (var263){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var266 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var266 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var264 = var266;
RET_LABEL265:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var269 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var269 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 24);
fatal_exit(1);
}
var267 = var269;
RET_LABEL268:(void)0;
}
}
if (unlikely(varonce270==NULL)) {
var271 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce272!=NULL)) {
var273 = varonce272;
} else {
var274 = "Error: `";
var275 = core__flat___NativeString___to_s_full(var274, 8l, 8l);
var273 = var275;
varonce272 = var273;
}
((struct instance_core__NativeArray*)var271)->values[0]=var273;
if (likely(varonce276!=NULL)) {
var277 = varonce276;
} else {
var278 = "` does not specialize `";
var279 = core__flat___NativeString___to_s_full(var278, 23l, 23l);
var277 = var279;
varonce276 = var277;
}
((struct instance_core__NativeArray*)var271)->values[2]=var277;
if (likely(varonce280!=NULL)) {
var281 = varonce280;
} else {
var282 = "`. Possible duplication of the root class `Object`?";
var283 = core__flat___NativeString___to_s_full(var282, 51l, 51l);
var281 = var283;
varonce280 = var281;
}
((struct instance_core__NativeArray*)var271)->values[4]=var281;
} else {
var271 = varonce270;
varonce270 = NULL;
}
{
var284 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:MClassDef>*/
}
((struct instance_core__NativeArray*)var271)->values[1]=var284;
{
{ /* Inline model#MProperty#intro_mclassdef (var_the_root_init_mmethod) on <var_the_root_init_mmethod:nullable MMethod(MMethod)> */
var287 = var_the_root_init_mmethod->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_the_root_init_mmethod:nullable MMethod(MMethod)> */
if (unlikely(var287 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1946);
fatal_exit(1);
}
var285 = var287;
RET_LABEL286:(void)0;
}
}
{
var288 = ((val*(*)(val* self))(var285->class->vft[COLOR_core__abstract_text__Object__to_s]))(var285); /* to_s on <var285:MClassDef>*/
}
((struct instance_core__NativeArray*)var271)->values[3]=var288;
{
var289 = ((val*(*)(val* self))(var271->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var271); /* native_to_s on <var271:NativeArray[String]>*/
}
varonce270 = var271;
{
var290 = nitc___nitc__ToolContext___error(var264, var267, var289);
}
goto RET_LABEL;
} else {
}
if (likely(varonce291!=NULL)) {
var292 = varonce291;
} else {
var293 = "autoinit";
var294 = core__flat___NativeString___to_s_full(var293, 8l, 8l);
var292 = var294;
varonce291 = var292;
}
{
var295 = nitc__annotation___Prod___get_single_annotation(var_nclassdef, var292, self);
}
var_autoinit = var295;
if (likely(varonce296!=NULL)) {
var297 = varonce296;
} else {
var298 = "noautoinit";
var299 = core__flat___NativeString___to_s_full(var298, 10l, 10l);
var297 = var299;
varonce296 = var297;
}
{
var300 = nitc__annotation___Prod___get_single_annotation(var_nclassdef, var297, self);
}
var_noautoinit = var300;
if (var_autoinit == NULL) {
var301 = 0; /* is null */
} else {
var301 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_autoinit,((val*)NULL)) on <var_autoinit:nullable AAnnotation> */
var_other189 = ((val*)NULL);
{
var304 = ((short int(*)(val* self, val* p0))(var_autoinit->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_autoinit, var_other189); /* == on <var_autoinit:nullable AAnnotation(AAnnotation)>*/
}
var305 = !var304;
var302 = var305;
goto RET_LABEL303;
RET_LABEL303:(void)0;
}
var301 = var302;
}
if (var301){
{
core___core__AbstractArray___core__abstract_collection__RemovableCollection__clear(var_mparameters108); /* Direct call array#AbstractArray#clear on <var_mparameters108:Array[MParameter]>*/
}
{
core___core__AbstractArray___core__abstract_collection__RemovableCollection__clear(var_initializers); /* Direct call array#AbstractArray#clear on <var_initializers:Array[MProperty]>*/
}
if (var_noautoinit == NULL) {
var306 = 0; /* is null */
} else {
var306 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_noautoinit,((val*)NULL)) on <var_noautoinit:nullable AAnnotation> */
var_other189 = ((val*)NULL);
{
var309 = ((short int(*)(val* self, val* p0))(var_noautoinit->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_noautoinit, var_other189); /* == on <var_noautoinit:nullable AAnnotation(AAnnotation)>*/
}
var310 = !var309;
var307 = var310;
goto RET_LABEL308;
RET_LABEL308:(void)0;
}
var306 = var307;
}
if (var306){
if (likely(varonce311!=NULL)) {
var312 = varonce311;
} else {
var313 = "Error: `autoinit` and `noautoinit` are incompatible.";
var314 = core__flat___NativeString___to_s_full(var313, 52l, 52l);
var312 = var314;
varonce311 = var312;
}
{
nitc___nitc__ModelBuilder___error(self, var_autoinit, var312); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
{
{ /* Inline parser_nodes#AAnnotation#n_args (var_autoinit) on <var_autoinit:nullable AAnnotation(AAnnotation)> */
var317 = var_autoinit->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_args].val; /* _n_args on <var_autoinit:nullable AAnnotation(AAnnotation)> */
if (unlikely(var317 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2926);
fatal_exit(1);
}
var315 = var317;
RET_LABEL316:(void)0;
}
}
{
var318 = nitc___nitc__ANodes___core__abstract_collection__Collection__is_empty(var315);
}
if (var318){
if (likely(varonce319!=NULL)) {
var320 = varonce319;
} else {
var321 = "Syntax Error: `autoinit` expects method identifiers, use `noautoinit` to clear all autoinits.";
var322 = core__flat___NativeString___to_s_full(var321, 93l, 93l);
var320 = var322;
varonce319 = var320;
}
{
nitc___nitc__ModelBuilder___error(self, var_autoinit, var320); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
{
{ /* Inline parser_nodes#AAnnotation#n_args (var_autoinit) on <var_autoinit:nullable AAnnotation(AAnnotation)> */
var325 = var_autoinit->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_args].val; /* _n_args on <var_autoinit:nullable AAnnotation(AAnnotation)> */
if (unlikely(var325 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2926);
fatal_exit(1);
}
var323 = var325;
RET_LABEL324:(void)0;
}
}
var_326 = var323;
{
var327 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_326);
}
var_328 = var327;
for(;;) {
{
var329 = ((short int(*)(val* self))((((long)var_328&3)?class_info[((long)var_328&3)]:var_328->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_328); /* is_ok on <var_328:Iterator[AExpr]>*/
}
if (var329){
} else {
goto BREAK_label330;
}
{
var331 = ((val*(*)(val* self))((((long)var_328&3)?class_info[((long)var_328&3)]:var_328->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_328); /* item on <var_328:Iterator[AExpr]>*/
}
var_narg = var331;
{
var332 = nitc__parser_work___AExpr___as_id(var_narg);
}
var_id = var332;
if (var_id == NULL) {
var333 = 1; /* is null */
} else {
var333 = 0; /* arg is null but recv is not */
}
if (0) {
var334 = ((short int(*)(val* self, val* p0))(var_id->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_id, ((val*)NULL)); /* == on <var_id:nullable String>*/
var333 = var334;
}
if (var333){
if (likely(varonce335!=NULL)) {
var336 = varonce335;
} else {
var337 = "Syntax Error: `autoinit` expects method identifiers.";
var338 = core__flat___NativeString___to_s_full(var337, 52l, 52l);
var336 = var338;
varonce335 = var336;
}
{
nitc___nitc__ModelBuilder___error(self, var_narg, var336); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
if (likely(varonce339!=NULL)) {
var340 = varonce339;
} else {
var341 = "=";
var342 = core__flat___NativeString___to_s_full(var341, 1l, 1l);
var340 = var342;
varonce339 = var340;
}
{
var343 = ((val*(*)(val* self, val* p0))(var_id->class->vft[COLOR_core__abstract_text__String___43d]))(var_id, var340); /* + on <var_id:nullable String(String)>*/
}
{
var344 = nitc___nitc__ModelBuilder___try_get_mproperty_by_name(self, var_narg, var_mclassdef, var343);
}
var_p = var344;
if (var_p == NULL) {
var345 = 1; /* is null */
} else {
var345 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_p,((val*)NULL)) on <var_p:nullable MProperty> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_p,var_other) on <var_p:nullable MProperty(MProperty)> */
var350 = var_p == var_other;
var348 = var350;
goto RET_LABEL349;
RET_LABEL349:(void)0;
}
}
var346 = var348;
goto RET_LABEL347;
RET_LABEL347:(void)0;
}
var345 = var346;
}
if (var345){
{
var351 = nitc___nitc__ModelBuilder___try_get_mproperty_by_name(self, var_narg, var_mclassdef, var_id);
}
var_p = var351;
} else {
}
if (var_p == NULL) {
var352 = 1; /* is null */
} else {
var352 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_p,((val*)NULL)) on <var_p:nullable MProperty> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_p,var_other) on <var_p:nullable MProperty(MProperty)> */
var357 = var_p == var_other;
var355 = var357;
goto RET_LABEL356;
RET_LABEL356:(void)0;
}
}
var353 = var355;
goto RET_LABEL354;
RET_LABEL354:(void)0;
}
var352 = var353;
}
if (var352){
if (unlikely(varonce358==NULL)) {
var359 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce360!=NULL)) {
var361 = varonce360;
} else {
var362 = "Error: unknown method `";
var363 = core__flat___NativeString___to_s_full(var362, 23l, 23l);
var361 = var363;
varonce360 = var361;
}
((struct instance_core__NativeArray*)var359)->values[0]=var361;
if (likely(varonce364!=NULL)) {
var365 = varonce364;
} else {
var366 = "`";
var367 = core__flat___NativeString___to_s_full(var366, 1l, 1l);
var365 = var367;
varonce364 = var365;
}
((struct instance_core__NativeArray*)var359)->values[2]=var365;
} else {
var359 = varonce358;
varonce358 = NULL;
}
((struct instance_core__NativeArray*)var359)->values[1]=var_id;
{
var368 = ((val*(*)(val* self))(var359->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var359); /* native_to_s on <var359:NativeArray[String]>*/
}
varonce358 = var359;
{
nitc___nitc__ModelBuilder___error(self, var_narg, var368); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MProperty#is_autoinit (var_p) on <var_p:nullable MProperty(MProperty)> */
var371 = var_p->attrs[COLOR_nitc__model__MProperty___is_autoinit].s; /* _is_autoinit on <var_p:nullable MProperty(MProperty)> */
var369 = var371;
RET_LABEL370:(void)0;
}
}
var372 = !var369;
if (var372){
if (unlikely(varonce373==NULL)) {
var374 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce375!=NULL)) {
var376 = varonce375;
} else {
var377 = "Error: `";
var378 = core__flat___NativeString___to_s_full(var377, 8l, 8l);
var376 = var378;
varonce375 = var376;
}
((struct instance_core__NativeArray*)var374)->values[0]=var376;
if (likely(varonce379!=NULL)) {
var380 = varonce379;
} else {
var381 = "` is not an autoinit method";
var382 = core__flat___NativeString___to_s_full(var381, 27l, 27l);
var380 = var382;
varonce379 = var380;
}
((struct instance_core__NativeArray*)var374)->values[2]=var380;
} else {
var374 = varonce373;
varonce373 = NULL;
}
{
var383 = ((val*(*)(val* self))(var_p->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_p); /* to_s on <var_p:nullable MProperty(MProperty)>*/
}
((struct instance_core__NativeArray*)var374)->values[1]=var383;
{
var384 = ((val*(*)(val* self))(var374->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var374); /* native_to_s on <var374:NativeArray[String]>*/
}
varonce373 = var374;
{
nitc___nitc__ModelBuilder___error(self, var_narg, var384); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_initializers, var_p); /* Direct call array#Array#add on <var_initializers:Array[MProperty]>*/
}
{
{ /* Inline model#MProperty#intro (var_p) on <var_p:nullable MProperty(MProperty)> */
var387 = var_p->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var_p:nullable MProperty(MProperty)> */
if (unlikely(var387 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1986);
fatal_exit(1);
}
var385 = var387;
RET_LABEL386:(void)0;
}
}
var_pd = var385;
/* <var_pd:MPropDef> isa MMethodDef */
cltype389 = type_nitc__MMethodDef.color;
idtype390 = type_nitc__MMethodDef.id;
if(cltype389 >= var_pd->type->table_size) {
var388 = 0;
} else {
var388 = var_pd->type->type_table[cltype389] == idtype390;
}
if (var388){
{
{ /* Inline model#MMethodDef#msignature (var_pd) on <var_pd:MPropDef(MMethodDef)> */
var393 = var_pd->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_pd:MPropDef(MMethodDef)> */
var391 = var393;
RET_LABEL392:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var396 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var396 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 576);
fatal_exit(1);
}
var394 = var396;
RET_LABEL395:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var394) on <var394:MClass> */
var399 = var394->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var394:MClass> */
if (unlikely(var399 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 507);
fatal_exit(1);
}
var397 = var399;
RET_LABEL398:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var402 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var402 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 579);
fatal_exit(1);
}
var400 = var402;
RET_LABEL401:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var405 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var405 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 573);
fatal_exit(1);
}
var403 = var405;
RET_LABEL404:(void)0;
}
}
if (var391 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 280);
fatal_exit(1);
} else {
var406 = nitc___nitc__MSignature___MType__resolve_for(var391, var397, var400, var403, 0);
}
var_sig407 = var406;
{
{ /* Inline model#MSignature#mparameters (var_sig407) on <var_sig407:MSignature> */
var410 = var_sig407->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_sig407:MSignature> */
if (unlikely(var410 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1783);
fatal_exit(1);
}
var408 = var410;
RET_LABEL409:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var_mparameters108, var408); /* Direct call array#Array#add_all on <var_mparameters108:Array[MParameter]>*/
}
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 284);
fatal_exit(1);
}
{
((void(*)(val* self))((((long)var_328&3)?class_info[((long)var_328&3)]:var_328->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_328); /* next on <var_328:Iterator[AExpr]>*/
}
}
BREAK_label330: (void)0;
{
((void(*)(val* self))((((long)var_328&3)?class_info[((long)var_328&3)]:var_328->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_328); /* finish on <var_328:Iterator[AExpr]>*/
}
} else {
{
var411 = core___core__SequenceRead___Collection__first(var_spropdefs);
}
var_longest = var411;
{
{ /* Inline array#AbstractArrayRead#length (var_spropdefs) on <var_spropdefs:Array[MMethodDef]> */
var414 = var_spropdefs->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_spropdefs:Array[MMethodDef]> */
var412 = var414;
RET_LABEL413:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var412,1l) on <var412:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var417 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var417)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
fatal_exit(1);
}
var420 = var412 > 1l;
var415 = var420;
goto RET_LABEL416;
RET_LABEL416:(void)0;
}
}
if (var415){
var_421 = var_spropdefs;
{
var422 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_421);
}
var_423 = var422;
for(;;) {
{
var424 = ((short int(*)(val* self))((((long)var_423&3)?class_info[((long)var_423&3)]:var_423->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_423); /* is_ok on <var_423:IndexedIterator[MMethodDef]>*/
}
if (var424){
} else {
goto BREAK_label425;
}
{
var426 = ((val*(*)(val* self))((((long)var_423&3)?class_info[((long)var_423&3)]:var_423->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_423); /* item on <var_423:IndexedIterator[MMethodDef]>*/
}
var_spd = var426;
{
{ /* Inline model#MMethodDef#initializers (var_spd) on <var_spd:MMethodDef> */
var429 = var_spd->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var_spd:MMethodDef> */
if (unlikely(var429 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2363);
fatal_exit(1);
}
var427 = var429;
RET_LABEL428:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var427) on <var427:Array[MProperty]> */
var432 = var427->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var427:Array[MProperty]> */
var430 = var432;
RET_LABEL431:(void)0;
}
}
{
{ /* Inline model#MMethodDef#initializers (var_longest) on <var_longest:MMethodDef> */
var435 = var_longest->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var_longest:MMethodDef> */
if (unlikely(var435 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2363);
fatal_exit(1);
}
var433 = var435;
RET_LABEL434:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var433) on <var433:Array[MProperty]> */
var438 = var433->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var433:Array[MProperty]> */
var436 = var438;
RET_LABEL437:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var430,var436) on <var430:Int> */
/* Covariant cast for argument 0 (i) <var436:Int> isa OTHER */
/* <var436:Int> isa OTHER */
var441 = 1; /* easy <var436:Int> isa OTHER*/
if (unlikely(!var441)) {
var_class_name444 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name444);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
fatal_exit(1);
}
var445 = var430 > var436;
var439 = var445;
goto RET_LABEL440;
RET_LABEL440:(void)0;
}
}
if (var439){
var_longest = var_spd;
} else {
}
{
((void(*)(val* self))((((long)var_423&3)?class_info[((long)var_423&3)]:var_423->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_423); /* next on <var_423:IndexedIterator[MMethodDef]>*/
}
}
BREAK_label425: (void)0;
{
((void(*)(val* self))((((long)var_423&3)?class_info[((long)var_423&3)]:var_423->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_423); /* finish on <var_423:IndexedIterator[MMethodDef]>*/
}
if (var_noautoinit == NULL) {
var446 = 1; /* is null */
} else {
var446 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_noautoinit,((val*)NULL)) on <var_noautoinit:nullable AAnnotation> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_noautoinit,var_other) on <var_noautoinit:nullable AAnnotation(AAnnotation)> */
var451 = var_noautoinit == var_other;
var449 = var451;
goto RET_LABEL450;
RET_LABEL450:(void)0;
}
}
var447 = var449;
goto RET_LABEL448;
RET_LABEL448:(void)0;
}
var446 = var447;
}
if (var446){
var_452 = var_spropdefs;
{
var453 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_452);
}
var_454 = var453;
for(;;) {
{
var455 = ((short int(*)(val* self))((((long)var_454&3)?class_info[((long)var_454&3)]:var_454->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_454); /* is_ok on <var_454:IndexedIterator[MMethodDef]>*/
}
if (var455){
} else {
goto BREAK_label456;
}
{
var457 = ((val*(*)(val* self))((((long)var_454&3)?class_info[((long)var_454&3)]:var_454->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_454); /* item on <var_454:IndexedIterator[MMethodDef]>*/
}
var_spd458 = var457;
var_i = 0l;
{
{ /* Inline model#MMethodDef#initializers (var_spd458) on <var_spd458:MMethodDef> */
var461 = var_spd458->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var_spd458:MMethodDef> */
if (unlikely(var461 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2363);
fatal_exit(1);
}
var459 = var461;
RET_LABEL460:(void)0;
}
}
var_462 = var459;
{
var463 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_462);
}
var_464 = var463;
for(;;) {
{
var465 = ((short int(*)(val* self))((((long)var_464&3)?class_info[((long)var_464&3)]:var_464->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_464); /* is_ok on <var_464:IndexedIterator[MProperty]>*/
}
if (var465){
} else {
goto BREAK_label466;
}
{
var467 = ((val*(*)(val* self))((((long)var_464&3)?class_info[((long)var_464&3)]:var_464->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_464); /* item on <var_464:IndexedIterator[MProperty]>*/
}
var_p468 = var467;
{
{ /* Inline model#MMethodDef#initializers (var_longest) on <var_longest:MMethodDef> */
var471 = var_longest->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var_longest:MMethodDef> */
if (unlikely(var471 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2363);
fatal_exit(1);
}
var469 = var471;
RET_LABEL470:(void)0;
}
}
{
var472 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var469, var_i);
}
{
{ /* Inline kernel#Object#!= (var_p468,var472) on <var_p468:MProperty> */
var_other189 = var472;
{
var475 = ((short int(*)(val* self, val* p0))(var_p468->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_p468, var_other189); /* == on <var_p468:MProperty>*/
}
var476 = !var475;
var473 = var476;
goto RET_LABEL474;
RET_LABEL474:(void)0;
}
}
if (var473){
var477 = NEW_core__ArraySet(&type_core__ArraySet__nitc__MProperty);
{
core___core__ArraySet___core__kernel__Object__init(var477); /* Direct call array#ArraySet#init on <var477:ArraySet[MProperty]>*/
}
var_proposal = var477;
var_478 = var_spropdefs;
{
var479 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_478);
}
var_480 = var479;
for(;;) {
{
var481 = ((short int(*)(val* self))((((long)var_480&3)?class_info[((long)var_480&3)]:var_480->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_480); /* is_ok on <var_480:IndexedIterator[MMethodDef]>*/
}
if (var481){
} else {
goto BREAK_label482;
}
{
var483 = ((val*(*)(val* self))((((long)var_480&3)?class_info[((long)var_480&3)]:var_480->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_480); /* item on <var_480:IndexedIterator[MMethodDef]>*/
}
var_spd2 = var483;
{
{ /* Inline model#MMethodDef#initializers (var_spd2) on <var_spd2:MMethodDef> */
var486 = var_spd2->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var_spd2:MMethodDef> */
if (unlikely(var486 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2363);
fatal_exit(1);
}
var484 = var486;
RET_LABEL485:(void)0;
}
}
{
core___core__SimpleCollection___add_all(var_proposal, var484); /* Direct call abstract_collection#SimpleCollection#add_all on <var_proposal:ArraySet[MProperty]>*/
}
{
((void(*)(val* self))((((long)var_480&3)?class_info[((long)var_480&3)]:var_480->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_480); /* next on <var_480:IndexedIterator[MMethodDef]>*/
}
}
BREAK_label482: (void)0;
{
((void(*)(val* self))((((long)var_480&3)?class_info[((long)var_480&3)]:var_480->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_480); /* finish on <var_480:IndexedIterator[MMethodDef]>*/
}
{
core___core__SimpleCollection___add_all(var_proposal, var_initializers); /* Direct call abstract_collection#SimpleCollection#add_all on <var_proposal:ArraySet[MProperty]>*/
}
if (unlikely(varonce487==NULL)) {
var488 = NEW_core__NativeArray(13l, &type_core__NativeArray__core__String);
if (likely(varonce489!=NULL)) {
var490 = varonce489;
} else {
var491 = "Error: cannot generate automatic init for class ";
var492 = core__flat___NativeString___to_s_full(var491, 48l, 48l);
var490 = var492;
varonce489 = var490;
}
((struct instance_core__NativeArray*)var488)->values[0]=var490;
if (likely(varonce493!=NULL)) {
var494 = varonce493;
} else {
var495 = ". Conflict in the order in inherited initializers ";
var496 = core__flat___NativeString___to_s_full(var495, 50l, 50l);
var494 = var496;
varonce493 = var494;
}
((struct instance_core__NativeArray*)var488)->values[2]=var494;
if (likely(varonce497!=NULL)) {
var498 = varonce497;
} else {
var499 = "(";
var500 = core__flat___NativeString___to_s_full(var499, 1l, 1l);
var498 = var500;
varonce497 = var498;
}
((struct instance_core__NativeArray*)var488)->values[4]=var498;
if (likely(varonce501!=NULL)) {
var502 = varonce501;
} else {
var503 = ") and ";
var504 = core__flat___NativeString___to_s_full(var503, 6l, 6l);
var502 = var504;
varonce501 = var502;
}
((struct instance_core__NativeArray*)var488)->values[6]=var502;
if (likely(varonce505!=NULL)) {
var506 = varonce505;
} else {
var507 = "(";
var508 = core__flat___NativeString___to_s_full(var507, 1l, 1l);
var506 = var508;
varonce505 = var506;
}
((struct instance_core__NativeArray*)var488)->values[8]=var506;
if (likely(varonce509!=NULL)) {
var510 = varonce509;
} else {
var511 = "). Use `autoinit` to order initializers. eg `autoinit ";
var512 = core__flat___NativeString___to_s_full(var511, 54l, 54l);
var510 = var512;
varonce509 = var510;
}
((struct instance_core__NativeArray*)var488)->values[10]=var510;
if (likely(varonce513!=NULL)) {
var514 = varonce513;
} else {
var515 = "`";
var516 = core__flat___NativeString___to_s_full(var515, 1l, 1l);
var514 = var516;
varonce513 = var514;
}
((struct instance_core__NativeArray*)var488)->values[12]=var514;
} else {
var488 = varonce487;
varonce487 = NULL;
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var519 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var519 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 576);
fatal_exit(1);
}
var517 = var519;
RET_LABEL518:(void)0;
}
}
{
var520 = ((val*(*)(val* self))(var517->class->vft[COLOR_core__abstract_text__Object__to_s]))(var517); /* to_s on <var517:MClass>*/
}
((struct instance_core__NativeArray*)var488)->values[1]=var520;
{
var521 = ((val*(*)(val* self))(var_spd458->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_spd458); /* to_s on <var_spd458:MMethodDef>*/
}
((struct instance_core__NativeArray*)var488)->values[3]=var521;
{
{ /* Inline model#MMethodDef#initializers (var_spd458) on <var_spd458:MMethodDef> */
var524 = var_spd458->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var_spd458:MMethodDef> */
if (unlikely(var524 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2363);
fatal_exit(1);
}
var522 = var524;
RET_LABEL523:(void)0;
}
}
if (likely(varonce525!=NULL)) {
var526 = varonce525;
} else {
var527 = ", ";
var528 = core__flat___NativeString___to_s_full(var527, 2l, 2l);
var526 = var528;
varonce525 = var526;
}
{
var529 = core__abstract_text___Collection___join(var522, var526);
}
((struct instance_core__NativeArray*)var488)->values[5]=var529;
{
var530 = ((val*(*)(val* self))(var_longest->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_longest); /* to_s on <var_longest:MMethodDef>*/
}
((struct instance_core__NativeArray*)var488)->values[7]=var530;
{
{ /* Inline model#MMethodDef#initializers (var_longest) on <var_longest:MMethodDef> */
var533 = var_longest->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var_longest:MMethodDef> */
if (unlikely(var533 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2363);
fatal_exit(1);
}
var531 = var533;
RET_LABEL532:(void)0;
}
}
if (likely(varonce534!=NULL)) {
var535 = varonce534;
} else {
var536 = ", ";
var537 = core__flat___NativeString___to_s_full(var536, 2l, 2l);
var535 = var537;
varonce534 = var535;
}
{
var538 = core__abstract_text___Collection___join(var531, var535);
}
((struct instance_core__NativeArray*)var488)->values[9]=var538;
if (likely(varonce539!=NULL)) {
var540 = varonce539;
} else {
var541 = ", ";
var542 = core__flat___NativeString___to_s_full(var541, 2l, 2l);
var540 = var542;
varonce539 = var540;
}
{
var543 = core__abstract_text___Collection___join(var_proposal, var540);
}
((struct instance_core__NativeArray*)var488)->values[11]=var543;
{
var544 = ((val*(*)(val* self))(var488->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var488); /* native_to_s on <var488:NativeArray[String]>*/
}
varonce487 = var488;
{
nitc___nitc__ModelBuilder___error(self, var_nclassdef, var544); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var547 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var547)) {
var_class_name550 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name550);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var551 = var_i + 1l;
var545 = var551;
goto RET_LABEL546;
RET_LABEL546:(void)0;
}
}
var_i = var545;
{
((void(*)(val* self))((((long)var_464&3)?class_info[((long)var_464&3)]:var_464->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_464); /* next on <var_464:IndexedIterator[MProperty]>*/
}
}
BREAK_label466: (void)0;
{
((void(*)(val* self))((((long)var_464&3)?class_info[((long)var_464&3)]:var_464->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_464); /* finish on <var_464:IndexedIterator[MProperty]>*/
}
{
((void(*)(val* self))((((long)var_454&3)?class_info[((long)var_454&3)]:var_454->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_454); /* next on <var_454:IndexedIterator[MMethodDef]>*/
}
}
BREAK_label456: (void)0;
{
((void(*)(val* self))((((long)var_454&3)?class_info[((long)var_454&3)]:var_454->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_454); /* finish on <var_454:IndexedIterator[MMethodDef]>*/
}
} else {
}
} else {
}
if (var_noautoinit == NULL) {
var552 = 0; /* is null */
} else {
var552 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_noautoinit,((val*)NULL)) on <var_noautoinit:nullable AAnnotation> */
var_other189 = ((val*)NULL);
{
var555 = ((short int(*)(val* self, val* p0))(var_noautoinit->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_noautoinit, var_other189); /* == on <var_noautoinit:nullable AAnnotation(AAnnotation)>*/
}
var556 = !var555;
var553 = var556;
goto RET_LABEL554;
RET_LABEL554:(void)0;
}
var552 = var553;
}
if (var552){
{
var558 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_initializers);
}
var_559 = var558;
if (var558){
{
{ /* Inline model#MMethodDef#initializers (var_longest) on <var_longest:MMethodDef> */
var562 = var_longest->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var_longest:MMethodDef> */
if (unlikely(var562 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2363);
fatal_exit(1);
}
var560 = var562;
RET_LABEL561:(void)0;
}
}
{
var563 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var560);
}
var557 = var563;
} else {
var557 = var_559;
}
if (var557){
if (likely(varonce564!=NULL)) {
var565 = varonce564;
} else {
var566 = "useless-noautoinit";
var567 = core__flat___NativeString___to_s_full(var566, 18l, 18l);
var565 = var567;
varonce564 = var565;
}
if (likely(varonce568!=NULL)) {
var569 = varonce568;
} else {
var570 = "Warning: the list of autoinit is already empty.";
var571 = core__flat___NativeString___to_s_full(var570, 47l, 47l);
var569 = var571;
varonce568 = var569;
}
{
nitc___nitc__ModelBuilder___warning(self, var_noautoinit, var565, var569); /* Direct call modelbuilder_base#ModelBuilder#warning on <self:ModelBuilder>*/
}
} else {
}
{
core___core__AbstractArray___core__abstract_collection__RemovableCollection__clear(var_mparameters108); /* Direct call array#AbstractArray#clear on <var_mparameters108:Array[MParameter]>*/
}
{
core___core__AbstractArray___core__abstract_collection__RemovableCollection__clear(var_initializers); /* Direct call array#AbstractArray#clear on <var_initializers:Array[MProperty]>*/
}
} else {
{
{ /* Inline array#AbstractArrayRead#length (var_spropdefs) on <var_spropdefs:Array[MMethodDef]> */
var576 = var_spropdefs->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_spropdefs:Array[MMethodDef]> */
var574 = var576;
RET_LABEL575:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var574,1l) on <var574:Int> */
var579 = var574 == 1l;
var577 = var579;
goto RET_LABEL578;
RET_LABEL578:(void)0;
}
}
var_580 = var577;
if (var577){
{
var581 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_mparameters108);
}
var573 = var581;
} else {
var573 = var_580;
}
var_582 = var573;
if (var573){
if (var_defined_init == NULL) {
var583 = 1; /* is null */
} else {
var583 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_defined_init,((val*)NULL)) on <var_defined_init:nullable MMethodDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_defined_init,var_other) on <var_defined_init:nullable MMethodDef(MMethodDef)> */
var588 = var_defined_init == var_other;
var586 = var588;
goto RET_LABEL587;
RET_LABEL587:(void)0;
}
}
var584 = var586;
goto RET_LABEL585;
RET_LABEL585:(void)0;
}
var583 = var584;
}
var572 = var583;
} else {
var572 = var_582;
}
if (var572){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var591 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var591 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var589 = var591;
RET_LABEL590:(void)0;
}
}
if (unlikely(varonce592==NULL)) {
var593 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce594!=NULL)) {
var595 = varonce594;
} else {
var596 = " inherits the basic constructor ";
var597 = core__flat___NativeString___to_s_full(var596, 32l, 32l);
var595 = var597;
varonce594 = var595;
}
((struct instance_core__NativeArray*)var593)->values[1]=var595;
} else {
var593 = varonce592;
varonce592 = NULL;
}
{
var598 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:MClassDef>*/
}
((struct instance_core__NativeArray*)var593)->values[0]=var598;
{
var599 = ((val*(*)(val* self))(var_longest->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_longest); /* to_s on <var_longest:MMethodDef>*/
}
((struct instance_core__NativeArray*)var593)->values[2]=var599;
{
var600 = ((val*(*)(val* self))(var593->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var593); /* native_to_s on <var593:NativeArray[String]>*/
}
varonce592 = var593;
{
nitc___nitc__ToolContext___info(var589, var600, 3l); /* Direct call toolcontext#ToolContext#info on <var589:ToolContext>*/
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var603 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var603 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 576);
fatal_exit(1);
}
var601 = var603;
RET_LABEL602:(void)0;
}
}
{
{ /* Inline modelize_property#MClass#root_init= (var601,var_longest) on <var601:MClass> */
var601->attrs[COLOR_nitc__modelize_property__MClass___root_init].val = var_longest; /* _root_init on <var601:MClass> */
RET_LABEL604:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MMethodDef#initializers (var_longest) on <var_longest:MMethodDef> */
var607 = var_longest->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var_longest:MMethodDef> */
if (unlikely(var607 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2363);
fatal_exit(1);
}
var605 = var607;
RET_LABEL606:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var605) on <var605:Array[MProperty]> */
var610 = var605->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var605:Array[MProperty]> */
var608 = var610;
RET_LABEL609:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var608,0l) on <var608:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var613 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var613)) {
var_class_name616 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name616);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
fatal_exit(1);
}
var617 = var608 > 0l;
var611 = var617;
goto RET_LABEL612;
RET_LABEL612:(void)0;
}
}
if (var611){
{
{ /* Inline model#MMethodDef#new_msignature (var_longest) on <var_longest:MMethodDef> */
var620 = var_longest->attrs[COLOR_nitc__model__MMethodDef___new_msignature].val; /* _new_msignature on <var_longest:MMethodDef> */
var618 = var620;
RET_LABEL619:(void)0;
}
}
if (var618 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 335);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#mparameters (var618) on <var618:nullable MSignature> */
if (unlikely(var618 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1783);
fatal_exit(1);
}
var623 = var618->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var618:nullable MSignature> */
if (unlikely(var623 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1783);
fatal_exit(1);
}
var621 = var623;
RET_LABEL622:(void)0;
}
}
{
core___core__Sequence___prepend(var_mparameters108, var621); /* Direct call abstract_collection#Sequence#prepend on <var_mparameters108:Array[MParameter]>*/
}
{
{ /* Inline model#MMethodDef#initializers (var_longest) on <var_longest:MMethodDef> */
var626 = var_longest->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var_longest:MMethodDef> */
if (unlikely(var626 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2363);
fatal_exit(1);
}
var624 = var626;
RET_LABEL625:(void)0;
}
}
{
core___core__Sequence___prepend(var_initializers, var624); /* Direct call abstract_collection#Sequence#prepend on <var_initializers:Array[MProperty]>*/
}
} else {
}
}
}
if (var_defined_init == NULL) {
var627 = 0; /* is null */
} else {
var627 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_defined_init,((val*)NULL)) on <var_defined_init:nullable MMethodDef> */
var_other189 = ((val*)NULL);
{
var630 = ((short int(*)(val* self, val* p0))(var_defined_init->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_defined_init, var_other189); /* == on <var_defined_init:nullable MMethodDef(MMethodDef)>*/
}
var631 = !var630;
var628 = var631;
goto RET_LABEL629;
RET_LABEL629:(void)0;
}
var627 = var628;
}
if (var627){
{
{ /* Inline model#MMethodDef#initializers (var_defined_init) on <var_defined_init:nullable MMethodDef(MMethodDef)> */
var634 = var_defined_init->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var_defined_init:nullable MMethodDef(MMethodDef)> */
if (unlikely(var634 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2363);
fatal_exit(1);
}
var632 = var634;
RET_LABEL633:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var632, var_initializers); /* Direct call array#Array#add_all on <var632:Array[MProperty]>*/
}
var635 = NEW_nitc__MSignature(&type_nitc__MSignature);
{
((void(*)(val* self, val* p0))(var635->class->vft[COLOR_nitc__model__MSignature__mparameters_61d]))(var635, var_mparameters108); /* mparameters= on <var635:MSignature>*/
}
{
((void(*)(val* self, val* p0))(var635->class->vft[COLOR_nitc__model__MSignature__return_mtype_61d]))(var635, ((val*)NULL)); /* return_mtype= on <var635:MSignature>*/
}
{
((void(*)(val* self))(var635->class->vft[COLOR_core__kernel__Object__init]))(var635); /* init on <var635:MSignature>*/
}
var_msignature636 = var635;
{
{ /* Inline model#MMethodDef#new_msignature= (var_defined_init,var_msignature636) on <var_defined_init:nullable MMethodDef(MMethodDef)> */
var_defined_init->attrs[COLOR_nitc__model__MMethodDef___new_msignature].val = var_msignature636; /* _new_msignature on <var_defined_init:nullable MMethodDef(MMethodDef)> */
RET_LABEL637:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var640 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var640 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var638 = var640;
RET_LABEL639:(void)0;
}
}
if (unlikely(varonce641==NULL)) {
var642 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce643!=NULL)) {
var644 = varonce643;
} else {
var645 = " extends its basic constructor signature to ";
var646 = core__flat___NativeString___to_s_full(var645, 44l, 44l);
var644 = var646;
varonce643 = var644;
}
((struct instance_core__NativeArray*)var642)->values[1]=var644;
} else {
var642 = varonce641;
varonce641 = NULL;
}
{
var647 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:MClassDef>*/
}
((struct instance_core__NativeArray*)var642)->values[0]=var647;
{
var648 = ((val*(*)(val* self))(var_defined_init->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_defined_init); /* to_s on <var_defined_init:nullable MMethodDef(MMethodDef)>*/
}
((struct instance_core__NativeArray*)var642)->values[2]=var648;
{
var649 = ((val*(*)(val* self))(var_msignature636->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_msignature636); /* to_s on <var_msignature636:MSignature>*/
}
((struct instance_core__NativeArray*)var642)->values[3]=var649;
{
var650 = ((val*(*)(val* self))(var642->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var642); /* native_to_s on <var642:NativeArray[String]>*/
}
varonce641 = var642;
{
nitc___nitc__ToolContext___info(var638, var650, 3l); /* Direct call toolcontext#ToolContext#info on <var638:ToolContext>*/
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var653 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var653 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 576);
fatal_exit(1);
}
var651 = var653;
RET_LABEL652:(void)0;
}
}
{
{ /* Inline modelize_property#MClass#root_init= (var651,var_defined_init) on <var651:MClass> */
var651->attrs[COLOR_nitc__modelize_property__MClass___root_init].val = var_defined_init; /* _root_init on <var651:MClass> */
RET_LABEL654:(void)0;
}
}
goto RET_LABEL;
} else {
}
var_mprop655 = var_the_root_init_mmethod;
var656 = NEW_nitc__MMethodDef(&type_nitc__MMethodDef);
{
{ /* Inline parser_nodes#ANode#location (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var659 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var659 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 24);
fatal_exit(1);
}
var657 = var659;
RET_LABEL658:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var656->class->vft[COLOR_nitc__model__MPropDef__mclassdef_61d]))(var656, var_mclassdef); /* mclassdef= on <var656:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var656->class->vft[COLOR_nitc__model__MPropDef__mproperty_61d]))(var656, var_mprop655); /* mproperty= on <var656:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var656->class->vft[COLOR_nitc__model__MPropDef__location_61d]))(var656, var657); /* location= on <var656:MMethodDef>*/
}
{
((void(*)(val* self))(var656->class->vft[COLOR_core__kernel__Object__init]))(var656); /* init on <var656:MMethodDef>*/
}
var_mpropdef660 = var656;
{
{ /* Inline modelize_property#MPropDef#has_supercall= (var_mpropdef660,1) on <var_mpropdef660:MMethodDef> */
var_mpropdef660->attrs[COLOR_nitc__modelize_property__MPropDef___has_supercall].s = 1; /* _has_supercall on <var_mpropdef660:MMethodDef> */
RET_LABEL661:(void)0;
}
}
{
{ /* Inline model#MMethodDef#initializers (var_mpropdef660) on <var_mpropdef660:MMethodDef> */
var664 = var_mpropdef660->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var_mpropdef660:MMethodDef> */
if (unlikely(var664 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2363);
fatal_exit(1);
}
var662 = var664;
RET_LABEL663:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var662, var_initializers); /* Direct call array#Array#add_all on <var662:Array[MProperty]>*/
}
var665 = NEW_nitc__MSignature(&type_nitc__MSignature);
{
((void(*)(val* self, val* p0))(var665->class->vft[COLOR_nitc__model__MSignature__mparameters_61d]))(var665, var_mparameters108); /* mparameters= on <var665:MSignature>*/
}
{
((void(*)(val* self, val* p0))(var665->class->vft[COLOR_nitc__model__MSignature__return_mtype_61d]))(var665, ((val*)NULL)); /* return_mtype= on <var665:MSignature>*/
}
{
((void(*)(val* self))(var665->class->vft[COLOR_core__kernel__Object__init]))(var665); /* init on <var665:MSignature>*/
}
var_msignature666 = var665;
{
{ /* Inline model#MMethodDef#new_msignature= (var_mpropdef660,var_msignature666) on <var_mpropdef660:MMethodDef> */
var_mpropdef660->attrs[COLOR_nitc__model__MMethodDef___new_msignature].val = var_msignature666; /* _new_msignature on <var_mpropdef660:MMethodDef> */
RET_LABEL667:(void)0;
}
}
var668 = NEW_nitc__MSignature(&type_nitc__MSignature);
var669 = NEW_core__Array(&type_core__Array__nitc__MParameter);
{
core___core__Array___core__kernel__Object__init(var669); /* Direct call array#Array#init on <var669:Array[MParameter]>*/
}
{
((void(*)(val* self, val* p0))(var668->class->vft[COLOR_nitc__model__MSignature__mparameters_61d]))(var668, var669); /* mparameters= on <var668:MSignature>*/
}
{
((void(*)(val* self, val* p0))(var668->class->vft[COLOR_nitc__model__MSignature__return_mtype_61d]))(var668, ((val*)NULL)); /* return_mtype= on <var668:MSignature>*/
}
{
((void(*)(val* self))(var668->class->vft[COLOR_core__kernel__Object__init]))(var668); /* init on <var668:MSignature>*/
}
{
{ /* Inline model#MMethodDef#msignature= (var_mpropdef660,var668) on <var_mpropdef660:MMethodDef> */
var_mpropdef660->attrs[COLOR_nitc__model__MMethodDef___msignature].val = var668; /* _msignature on <var_mpropdef660:MMethodDef> */
RET_LABEL670:(void)0;
}
}
{
{ /* Inline modelize_property#AClassdef#mfree_init= (var_nclassdef,var_mpropdef660) on <var_nclassdef:AClassdef(AStdClassdef)> */
var_nclassdef->attrs[COLOR_nitc__modelize_property__AClassdef___mfree_init].val = var_mpropdef660; /* _mfree_init on <var_nclassdef:AClassdef(AStdClassdef)> */
RET_LABEL671:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var674 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var674 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var672 = var674;
RET_LABEL673:(void)0;
}
}
if (unlikely(varonce675==NULL)) {
var676 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce677!=NULL)) {
var678 = varonce677;
} else {
var679 = " gets a free constructor for attributes ";
var680 = core__flat___NativeString___to_s_full(var679, 40l, 40l);
var678 = var680;
varonce677 = var678;
}
((struct instance_core__NativeArray*)var676)->values[1]=var678;
} else {
var676 = varonce675;
varonce675 = NULL;
}
{
var681 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:MClassDef>*/
}
((struct instance_core__NativeArray*)var676)->values[0]=var681;
{
var682 = ((val*(*)(val* self))(var_mpropdef660->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mpropdef660); /* to_s on <var_mpropdef660:MMethodDef>*/
}
((struct instance_core__NativeArray*)var676)->values[2]=var682;
{
var683 = ((val*(*)(val* self))(var_msignature666->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_msignature666); /* to_s on <var_msignature666:MSignature>*/
}
((struct instance_core__NativeArray*)var676)->values[3]=var683;
{
var684 = ((val*(*)(val* self))(var676->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var676); /* native_to_s on <var676:NativeArray[String]>*/
}
varonce675 = var676;
{
nitc___nitc__ToolContext___info(var672, var684, 3l); /* Direct call toolcontext#ToolContext#info on <var672:ToolContext>*/
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var687 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var687 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 576);
fatal_exit(1);
}
var685 = var687;
RET_LABEL686:(void)0;
}
}
{
{ /* Inline modelize_property#MClass#root_init= (var685,var_mpropdef660) on <var685:MClass> */
var685->attrs[COLOR_nitc__modelize_property__MClass___root_init].val = var_mpropdef660; /* _root_init on <var685:MClass> */
RET_LABEL688:(void)0;
}
}
RET_LABEL:;
}
/* method modelize_property#ModelBuilder#check_visibility for (self: ModelBuilder, ANode, MType, MPropDef) */
void nitc__modelize_property___ModelBuilder___check_visibility(val* self, val* p0, val* p1, val* p2) {
val* var_node /* var node: ANode */;
val* var_mtype /* var mtype: MType */;
val* var_mpropdef /* var mpropdef: MPropDef */;
val* var /* : MClassDef */;
val* var2 /* : MClassDef */;
val* var3 /* : MModule */;
val* var5 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var6 /* : MProperty */;
val* var8 /* : MProperty */;
val* var_mproperty /* var mproperty: MProperty */;
val* var_vis_type /* var vis_type: nullable MVisibility */;
val* var_mmodule_type /* var mmodule_type: nullable MModule */;
val* var9 /* : MType */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var11 /* : MClass */;
val* var13 /* : MClass */;
val* var14 /* : MVisibility */;
val* var16 /* : MVisibility */;
val* var17 /* : MClass */;
val* var19 /* : MClass */;
val* var20 /* : MModule */;
val* var22 /* : MModule */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var26 /* : MVirtualTypeProp */;
val* var28 /* : MVirtualTypeProp */;
val* var29 /* : MVisibility */;
val* var31 /* : MVisibility */;
val* var32 /* : MVirtualTypeProp */;
val* var34 /* : MVirtualTypeProp */;
val* var35 /* : MClassDef */;
val* var37 /* : MClassDef */;
val* var38 /* : MModule */;
val* var40 /* : MModule */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
val* var50 /* : NativeArray[String] */;
static val* varonce;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
val* var54 /* : String */;
val* var55 /* : String */;
val* var56 /* : String */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
val* var67 /* : MVisibility */;
val* var_vis_module_type /* var vis_module_type: MVisibility */;
val* var68 /* : MVisibility */;
val* var70 /* : MVisibility */;
short int var71 /* : Bool */;
val* var73 /* : NativeArray[String] */;
static val* varonce72;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
val* var77 /* : String */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
val* var81 /* : String */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
val* var85 /* : String */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
val* var89 /* : String */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : NativeString */;
val* var93 /* : String */;
val* var94 /* : MVisibility */;
val* var96 /* : MVisibility */;
val* var97 /* : String */;
val* var98 /* : String */;
val* var99 /* : String */;
val* var100 /* : String */;
val* var101 /* : String */;
val* var102 /* : MVisibility */;
val* var104 /* : MVisibility */;
short int var105 /* : Bool */;
val* var107 /* : NativeArray[String] */;
static val* varonce106;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : NativeString */;
val* var111 /* : String */;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : NativeString */;
val* var115 /* : String */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : NativeString */;
val* var119 /* : String */;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : NativeString */;
val* var123 /* : String */;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : NativeString */;
val* var127 /* : String */;
static val* varonce128;
val* var129 /* : String */;
char* var130 /* : NativeString */;
val* var131 /* : String */;
val* var132 /* : MVisibility */;
val* var134 /* : MVisibility */;
val* var135 /* : String */;
val* var136 /* : String */;
val* var137 /* : String */;
val* var138 /* : String */;
val* var139 /* : String */;
val* var140 /* : String */;
short int var141 /* : Bool */;
int cltype142;
int idtype143;
val* var144 /* : ANodes[AType] */;
val* var146 /* : ANodes[AType] */;
val* var_ /* var : ANodes[AType] */;
val* var147 /* : Iterator[ANode] */;
val* var_148 /* var : Iterator[AType] */;
short int var149 /* : Bool */;
val* var150 /* : nullable Object */;
val* var_a /* var a: AType */;
val* var151 /* : nullable MType */;
val* var153 /* : nullable MType */;
val* var_t /* var t: nullable MType */;
short int var154 /* : Bool */;
short int var155 /* : Bool */;
val* var_other157 /* var other: nullable Object */;
short int var158 /* : Bool */;
short int var160 /* : Bool */;
short int var162 /* : Bool */;
int cltype163;
int idtype164;
val* var165 /* : Array[MType] */;
val* var167 /* : Array[MType] */;
val* var_168 /* var : Array[MType] */;
val* var169 /* : IndexedIterator[nullable Object] */;
val* var_170 /* var : IndexedIterator[MType] */;
short int var171 /* : Bool */;
val* var173 /* : nullable Object */;
val* var_t174 /* var t: MType */;
var_node = p0;
var_mtype = p1;
var_mpropdef = p2;
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MPropDef> */
var2 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MPropDef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2227);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var) on <var:MClassDef> */
var5 = var->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var:MClassDef> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 573);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_mmodule = var3;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MPropDef> */
var8 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MPropDef> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_mproperty = var6;
var_vis_type = ((val*)NULL);
var_mmodule_type = ((val*)NULL);
{
var9 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__undecorate]))(var_mtype); /* undecorate on <var_mtype:MType>*/
}
var_mtype = var9;
/* <var_mtype:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var10 = 0;
} else {
var10 = var_mtype->type->type_table[cltype] == idtype;
}
if (var10){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var13 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1163);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline model#MClass#visibility (var11) on <var11:MClass> */
var16 = var11->attrs[COLOR_nitc__model__MClass___visibility].val; /* _visibility on <var11:MClass> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 463);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
var_vis_type = var14;
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var19 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1163);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline model#MClass#intro_mmodule (var17) on <var17:MClass> */
var22 = var17->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var17:MClass> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 380);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
var_mmodule_type = var20;
} else {
/* <var_mtype:MType> isa MVirtualType */
cltype24 = type_nitc__MVirtualType.color;
idtype25 = type_nitc__MVirtualType.id;
if(cltype24 >= var_mtype->type->table_size) {
var23 = 0;
} else {
var23 = var_mtype->type->type_table[cltype24] == idtype25;
}
if (var23){
{
{ /* Inline model#MVirtualType#mproperty (var_mtype) on <var_mtype:MType(MVirtualType)> */
var28 = var_mtype->attrs[COLOR_nitc__model__MVirtualType___mproperty].val; /* _mproperty on <var_mtype:MType(MVirtualType)> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1369);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline model#MProperty#visibility (var26) on <var26:MVirtualTypeProp> */
var31 = var26->attrs[COLOR_nitc__model__MProperty___visibility].val; /* _visibility on <var26:MVirtualTypeProp> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1967);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
var_vis_type = var29;
{
{ /* Inline model#MVirtualType#mproperty (var_mtype) on <var_mtype:MType(MVirtualType)> */
var34 = var_mtype->attrs[COLOR_nitc__model__MVirtualType___mproperty].val; /* _mproperty on <var_mtype:MType(MVirtualType)> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1369);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline model#MProperty#intro_mclassdef (var32) on <var32:MVirtualTypeProp> */
var37 = var32->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var32:MVirtualTypeProp> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1946);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var35) on <var35:MClassDef> */
var40 = var35->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var35:MClassDef> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 573);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
var_mmodule_type = var38;
} else {
/* <var_mtype:MType> isa MParameterType */
cltype42 = type_nitc__MParameterType.color;
idtype43 = type_nitc__MParameterType.id;
if(cltype42 >= var_mtype->type->table_size) {
var41 = 0;
} else {
var41 = var_mtype->type->type_table[cltype42] == idtype43;
}
if (var41){
} else {
/* <var_mtype:MType> isa MNullType */
cltype45 = type_nitc__MNullType.color;
idtype46 = type_nitc__MNullType.id;
if(cltype45 >= var_mtype->type->table_size) {
var44 = 0;
} else {
var44 = var_mtype->type->type_table[cltype45] == idtype46;
}
if (var44){
} else {
/* <var_mtype:MType> isa MBottomType */
cltype48 = type_nitc__MBottomType.color;
idtype49 = type_nitc__MBottomType.id;
if(cltype48 >= var_mtype->type->table_size) {
var47 = 0;
} else {
var47 = var_mtype->type->type_table[cltype48] == idtype49;
}
if (var47){
} else {
if (unlikely(varonce==NULL)) {
var50 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "Unexpected type ";
var54 = core__flat___NativeString___to_s_full(var53, 16l, 16l);
var52 = var54;
varonce51 = var52;
}
((struct instance_core__NativeArray*)var50)->values[0]=var52;
} else {
var50 = varonce;
varonce = NULL;
}
{
var55 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var50)->values[1]=var55;
{
var56 = ((val*(*)(val* self))(var50->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var50); /* native_to_s on <var50:NativeArray[String]>*/
}
varonce = var50;
{
nitc___nitc__ANode___debug(var_node, var56); /* Direct call parser_nodes#ANode#debug on <var_node:ANode>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 389);
fatal_exit(1);
}
}
}
}
}
if (var_vis_type == NULL) {
var57 = 0; /* is null */
} else {
var57 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_vis_type,((val*)NULL)) on <var_vis_type:nullable MVisibility> */
var_other = ((val*)NULL);
{
var60 = ((short int(*)(val* self, val* p0))(var_vis_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_vis_type, var_other); /* == on <var_vis_type:nullable MVisibility(MVisibility)>*/
}
var61 = !var60;
var58 = var61;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
var57 = var58;
}
if (var57){
if (var_mmodule_type == NULL) {
var62 = 0; /* is null */
} else {
var62 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mmodule_type,((val*)NULL)) on <var_mmodule_type:nullable MModule> */
var_other = ((val*)NULL);
{
var65 = ((short int(*)(val* self, val* p0))(var_mmodule_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mmodule_type, var_other); /* == on <var_mmodule_type:nullable MModule(MModule)>*/
}
var66 = !var65;
var63 = var66;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
var62 = var63;
}
if (unlikely(!var62)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 393);
fatal_exit(1);
}
{
var67 = nitc___nitc__MModule___visibility_for(var_mmodule, var_mmodule_type);
}
var_vis_module_type = var67;
{
{ /* Inline model#MProperty#visibility (var_mproperty) on <var_mproperty:MProperty> */
var70 = var_mproperty->attrs[COLOR_nitc__model__MProperty___visibility].val; /* _visibility on <var_mproperty:MProperty> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1967);
fatal_exit(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
var71 = core___core__Comparable____62d(var68, var_vis_type);
}
if (var71){
if (unlikely(varonce72==NULL)) {
var73 = NEW_core__NativeArray(9l, &type_core__NativeArray__core__String);
if (likely(varonce74!=NULL)) {
var75 = varonce74;
} else {
var76 = "Error: the ";
var77 = core__flat___NativeString___to_s_full(var76, 11l, 11l);
var75 = var77;
varonce74 = var75;
}
((struct instance_core__NativeArray*)var73)->values[0]=var75;
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = " property `";
var81 = core__flat___NativeString___to_s_full(var80, 11l, 11l);
var79 = var81;
varonce78 = var79;
}
((struct instance_core__NativeArray*)var73)->values[2]=var79;
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = "` cannot contain the ";
var85 = core__flat___NativeString___to_s_full(var84, 21l, 21l);
var83 = var85;
varonce82 = var83;
}
((struct instance_core__NativeArray*)var73)->values[4]=var83;
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = " type `";
var89 = core__flat___NativeString___to_s_full(var88, 7l, 7l);
var87 = var89;
varonce86 = var87;
}
((struct instance_core__NativeArray*)var73)->values[6]=var87;
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = "`.";
var93 = core__flat___NativeString___to_s_full(var92, 2l, 2l);
var91 = var93;
varonce90 = var91;
}
((struct instance_core__NativeArray*)var73)->values[8]=var91;
} else {
var73 = varonce72;
varonce72 = NULL;
}
{
{ /* Inline model#MProperty#visibility (var_mproperty) on <var_mproperty:MProperty> */
var96 = var_mproperty->attrs[COLOR_nitc__model__MProperty___visibility].val; /* _visibility on <var_mproperty:MProperty> */
if (unlikely(var96 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1967);
fatal_exit(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
{
var97 = ((val*(*)(val* self))(var94->class->vft[COLOR_core__abstract_text__Object__to_s]))(var94); /* to_s on <var94:MVisibility>*/
}
((struct instance_core__NativeArray*)var73)->values[1]=var97;
{
var98 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mproperty); /* to_s on <var_mproperty:MProperty>*/
}
((struct instance_core__NativeArray*)var73)->values[3]=var98;
{
var99 = ((val*(*)(val* self))(var_vis_type->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_vis_type); /* to_s on <var_vis_type:nullable MVisibility(MVisibility)>*/
}
((struct instance_core__NativeArray*)var73)->values[5]=var99;
{
var100 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var73)->values[7]=var100;
{
var101 = ((val*(*)(val* self))(var73->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var73); /* native_to_s on <var73:NativeArray[String]>*/
}
varonce72 = var73;
{
nitc___nitc__ModelBuilder___error(self, var_node, var101); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
{
{ /* Inline model#MProperty#visibility (var_mproperty) on <var_mproperty:MProperty> */
var104 = var_mproperty->attrs[COLOR_nitc__model__MProperty___visibility].val; /* _visibility on <var_mproperty:MProperty> */
if (unlikely(var104 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1967);
fatal_exit(1);
}
var102 = var104;
RET_LABEL103:(void)0;
}
}
{
var105 = core___core__Comparable____62d(var102, var_vis_module_type);
}
if (var105){
if (unlikely(varonce106==NULL)) {
var107 = NEW_core__NativeArray(11l, &type_core__NativeArray__core__String);
if (likely(varonce108!=NULL)) {
var109 = varonce108;
} else {
var110 = "Error: the ";
var111 = core__flat___NativeString___to_s_full(var110, 11l, 11l);
var109 = var111;
varonce108 = var109;
}
((struct instance_core__NativeArray*)var107)->values[0]=var109;
if (likely(varonce112!=NULL)) {
var113 = varonce112;
} else {
var114 = " property `";
var115 = core__flat___NativeString___to_s_full(var114, 11l, 11l);
var113 = var115;
varonce112 = var113;
}
((struct instance_core__NativeArray*)var107)->values[2]=var113;
if (likely(varonce116!=NULL)) {
var117 = varonce116;
} else {
var118 = "` cannot contain the type `";
var119 = core__flat___NativeString___to_s_full(var118, 27l, 27l);
var117 = var119;
varonce116 = var117;
}
((struct instance_core__NativeArray*)var107)->values[4]=var117;
if (likely(varonce120!=NULL)) {
var121 = varonce120;
} else {
var122 = "` from the ";
var123 = core__flat___NativeString___to_s_full(var122, 11l, 11l);
var121 = var123;
varonce120 = var121;
}
((struct instance_core__NativeArray*)var107)->values[6]=var121;
if (likely(varonce124!=NULL)) {
var125 = varonce124;
} else {
var126 = " module `";
var127 = core__flat___NativeString___to_s_full(var126, 9l, 9l);
var125 = var127;
varonce124 = var125;
}
((struct instance_core__NativeArray*)var107)->values[8]=var125;
if (likely(varonce128!=NULL)) {
var129 = varonce128;
} else {
var130 = "`.";
var131 = core__flat___NativeString___to_s_full(var130, 2l, 2l);
var129 = var131;
varonce128 = var129;
}
((struct instance_core__NativeArray*)var107)->values[10]=var129;
} else {
var107 = varonce106;
varonce106 = NULL;
}
{
{ /* Inline model#MProperty#visibility (var_mproperty) on <var_mproperty:MProperty> */
var134 = var_mproperty->attrs[COLOR_nitc__model__MProperty___visibility].val; /* _visibility on <var_mproperty:MProperty> */
if (unlikely(var134 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1967);
fatal_exit(1);
}
var132 = var134;
RET_LABEL133:(void)0;
}
}
{
var135 = ((val*(*)(val* self))(var132->class->vft[COLOR_core__abstract_text__Object__to_s]))(var132); /* to_s on <var132:MVisibility>*/
}
((struct instance_core__NativeArray*)var107)->values[1]=var135;
{
var136 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mproperty); /* to_s on <var_mproperty:MProperty>*/
}
((struct instance_core__NativeArray*)var107)->values[3]=var136;
{
var137 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var107)->values[5]=var137;
{
var138 = ((val*(*)(val* self))(var_vis_module_type->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_vis_module_type); /* to_s on <var_vis_module_type:MVisibility>*/
}
((struct instance_core__NativeArray*)var107)->values[7]=var138;
{
var139 = ((val*(*)(val* self))(var_mmodule_type->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmodule_type); /* to_s on <var_mmodule_type:nullable MModule(MModule)>*/
}
((struct instance_core__NativeArray*)var107)->values[9]=var139;
{
var140 = ((val*(*)(val* self))(var107->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var107); /* native_to_s on <var107:NativeArray[String]>*/
}
varonce106 = var107;
{
nitc___nitc__ModelBuilder___error(self, var_node, var140); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
}
} else {
}
/* <var_node:ANode> isa AType */
cltype142 = type_nitc__AType.color;
idtype143 = type_nitc__AType.id;
if(cltype142 >= var_node->type->table_size) {
var141 = 0;
} else {
var141 = var_node->type->type_table[cltype142] == idtype143;
}
if (var141){
{
{ /* Inline parser_nodes#AType#n_types (var_node) on <var_node:ANode(AType)> */
var146 = var_node->attrs[COLOR_nitc__parser_nodes__AType___n_types].val; /* _n_types on <var_node:ANode(AType)> */
if (unlikely(var146 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1715);
fatal_exit(1);
}
var144 = var146;
RET_LABEL145:(void)0;
}
}
var_ = var144;
{
var147 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_);
}
var_148 = var147;
for(;;) {
{
var149 = ((short int(*)(val* self))((((long)var_148&3)?class_info[((long)var_148&3)]:var_148->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_148); /* is_ok on <var_148:Iterator[AType]>*/
}
if (var149){
} else {
goto BREAK_label;
}
{
var150 = ((val*(*)(val* self))((((long)var_148&3)?class_info[((long)var_148&3)]:var_148->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_148); /* item on <var_148:Iterator[AType]>*/
}
var_a = var150;
{
{ /* Inline modelbuilder_base#AType#mtype (var_a) on <var_a:AType> */
var153 = var_a->attrs[COLOR_nitc__modelbuilder_base__AType___mtype].val; /* _mtype on <var_a:AType> */
var151 = var153;
RET_LABEL152:(void)0;
}
}
var_t = var151;
if (var_t == NULL) {
var154 = 1; /* is null */
} else {
var154 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t,((val*)NULL)) on <var_t:nullable MType> */
var_other157 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_t,var_other157) on <var_t:nullable MType(MType)> */
var160 = var_t == var_other157;
var158 = var160;
goto RET_LABEL159;
RET_LABEL159:(void)0;
}
}
var155 = var158;
goto RET_LABEL156;
RET_LABEL156:(void)0;
}
var154 = var155;
}
if (var154){
goto BREAK_label161;
} else {
}
{
nitc__modelize_property___ModelBuilder___check_visibility(self, var_a, var_t, var_mpropdef); /* Direct call modelize_property#ModelBuilder#check_visibility on <self:ModelBuilder>*/
}
BREAK_label161: (void)0;
{
((void(*)(val* self))((((long)var_148&3)?class_info[((long)var_148&3)]:var_148->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_148); /* next on <var_148:Iterator[AType]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_148&3)?class_info[((long)var_148&3)]:var_148->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_148); /* finish on <var_148:Iterator[AType]>*/
}
} else {
/* <var_mtype:MType> isa MGenericType */
cltype163 = type_nitc__MGenericType.color;
idtype164 = type_nitc__MGenericType.id;
if(cltype163 >= var_mtype->type->table_size) {
var162 = 0;
} else {
var162 = var_mtype->type->type_table[cltype163] == idtype164;
}
if (var162){
{
{ /* Inline model#MGenericType#arguments (var_mtype) on <var_mtype:MType(MGenericType)> */
var167 = var_mtype->attrs[COLOR_nitc__model__MGenericType___arguments].val; /* _arguments on <var_mtype:MType(MGenericType)> */
if (unlikely(var167 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1269);
fatal_exit(1);
}
var165 = var167;
RET_LABEL166:(void)0;
}
}
var_168 = var165;
{
var169 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_168);
}
var_170 = var169;
for(;;) {
{
var171 = ((short int(*)(val* self))((((long)var_170&3)?class_info[((long)var_170&3)]:var_170->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_170); /* is_ok on <var_170:IndexedIterator[MType]>*/
}
if (var171){
} else {
goto BREAK_label172;
}
{
var173 = ((val*(*)(val* self))((((long)var_170&3)?class_info[((long)var_170&3)]:var_170->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_170); /* item on <var_170:IndexedIterator[MType]>*/
}
var_t174 = var173;
{
nitc__modelize_property___ModelBuilder___check_visibility(self, var_node, var_t174, var_mpropdef); /* Direct call modelize_property#ModelBuilder#check_visibility on <self:ModelBuilder>*/
}
{
((void(*)(val* self))((((long)var_170&3)?class_info[((long)var_170&3)]:var_170->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_170); /* next on <var_170:IndexedIterator[MType]>*/
}
}
BREAK_label172: (void)0;
{
((void(*)(val* self))((((long)var_170&3)?class_info[((long)var_170&3)]:var_170->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_170); /* finish on <var_170:IndexedIterator[MType]>*/
}
} else {
}
}
RET_LABEL:;
}
/* method modelize_property#ModelBuilder#check_virtual_types_circularity for (self: ModelBuilder, ANode, MVirtualTypeProp, MType, MModule): Bool */
short int nitc__modelize_property___ModelBuilder___check_virtual_types_circularity(val* self, val* p0, val* p1, val* p2, val* p3) {
short int var /* : Bool */;
val* var_node /* var node: ANode */;
val* var_mproperty /* var mproperty: MVirtualTypeProp */;
val* var_recv /* var recv: MType */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : MVirtualType */;
val* var3 /* : MVirtualType */;
val* var_mtype /* var mtype: MVirtualType */;
val* var4 /* : POSet[MType] */;
val* var_poset /* var poset: POSet[MType] */;
val* var6 /* : List[MType] */;
val* var_todo /* var todo: List[MType] */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_t /* var t: MType */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype;
int idtype;
val* var14 /* : Array[MType] */;
val* var_ /* var : Array[MType] */;
val* var15 /* : MType */;
val* var17 /* : MType */;
val* var_nexts /* var nexts: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : Array[MType] */;
val* var23 /* : Array[MType] */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var27 /* : MVirtualTypeProp */;
val* var29 /* : MVirtualTypeProp */;
val* var_vt /* var vt: MVirtualTypeProp */;
val* var30 /* : Array[MPropDef] */;
val* var_defs /* var defs: Array[MVirtualTypeDef] */;
short int var31 /* : Bool */;
val* var32 /* : Array[MType] */;
val* var_33 /* var : Array[MVirtualTypeDef] */;
val* var34 /* : IndexedIterator[nullable Object] */;
val* var_35 /* var : IndexedIterator[MVirtualTypeDef] */;
short int var36 /* : Bool */;
val* var38 /* : nullable Object */;
val* var_d /* var d: MVirtualTypeDef */;
val* var39 /* : nullable Object */;
val* var40 /* : nullable MType */;
val* var42 /* : nullable MType */;
val* var_next /* var next: nullable MType */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
val* var_55 /* var : Array[MType] */;
val* var56 /* : IndexedIterator[nullable Object] */;
val* var_57 /* var : IndexedIterator[MType] */;
short int var58 /* : Bool */;
val* var60 /* : nullable Object */;
val* var_next61 /* var next: MType */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
short int var65 /* : Bool */;
short int var67 /* : Bool */;
val* var68 /* : NativeArray[String] */;
static val* varonce;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
val* var72 /* : String */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
val* var76 /* : String */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
val* var80 /* : String */;
val* var81 /* : String */;
val* var82 /* : String */;
val* var83 /* : String */;
val* var85 /* : NativeArray[String] */;
static val* varonce84;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
val* var89 /* : String */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : NativeString */;
val* var93 /* : String */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : NativeString */;
val* var97 /* : String */;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : NativeString */;
val* var101 /* : String */;
val* var102 /* : String */;
val* var103 /* : String */;
val* var104 /* : String */;
val* var105 /* : String */;
var_node = p0;
var_mproperty = p1;
var_recv = p2;
var_mmodule = p3;
{
{ /* Inline model#MVirtualTypeProp#mvirtualtype (var_mproperty) on <var_mproperty:MVirtualTypeProp> */
var3 = var_mproperty->attrs[COLOR_nitc__model__MVirtualTypeProp___mvirtualtype].val; /* _mvirtualtype on <var_mproperty:MVirtualTypeProp> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mvirtualtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2209);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_mtype = var1;
var4 = NEW_poset__POSet(&type_poset__POSet__nitc__MType);
{
{ /* Inline kernel#Object#init (var4) on <var4:POSet[MType]> */
RET_LABEL5:(void)0;
}
}
var_poset = var4;
var6 = NEW_core__List(&type_core__List__nitc__MType);
{
{ /* Inline list#List#init (var6) on <var6:List[MType]> */
{
((void(*)(val* self))(var6->class->vft[COLOR_core___core__List___core__kernel__Object__init]))(var6); /* init on <var6:List[MType]>*/
}
RET_LABEL7:(void)0;
}
}
var_todo = var6;
{
core___core__Sequence___SimpleCollection__add(var_todo, var_mtype); /* Direct call abstract_collection#Sequence#add on <var_todo:List[MType]>*/
}
for(;;) {
{
var8 = core___core__List___core__abstract_collection__Collection__is_empty(var_todo);
}
var9 = !var8;
if (var9){
{
var10 = core___core__List___core__abstract_collection__Sequence__pop(var_todo);
}
var_t = var10;
{
var11 = ((short int(*)(val* self))(var_t->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_t); /* need_anchor on <var_t:MType>*/
}
var12 = !var11;
if (var12){
goto BREAK_label;
} else {
}
/* <var_t:MType> isa MNullableType */
cltype = type_nitc__MNullableType.color;
idtype = type_nitc__MNullableType.id;
if(cltype >= var_t->type->table_size) {
var13 = 0;
} else {
var13 = var_t->type->type_table[cltype] == idtype;
}
if (var13){
var14 = NEW_core__Array(&type_core__Array__nitc__MType);
{
core___core__Array___with_capacity(var14, 1l); /* Direct call array#Array#with_capacity on <var14:Array[MType]>*/
}
var_ = var14;
{
{ /* Inline model#MProxyType#mtype (var_t) on <var_t:MType(MNullableType)> */
var17 = var_t->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <var_t:MType(MNullableType)> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1625);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var15); /* Direct call array#AbstractArray#push on <var_:Array[MType]>*/
}
var_nexts = var_;
} else {
/* <var_t:MType> isa MGenericType */
cltype19 = type_nitc__MGenericType.color;
idtype20 = type_nitc__MGenericType.id;
if(cltype19 >= var_t->type->table_size) {
var18 = 0;
} else {
var18 = var_t->type->type_table[cltype19] == idtype20;
}
if (var18){
{
{ /* Inline model#MGenericType#arguments (var_t) on <var_t:MType(MGenericType)> */
var23 = var_t->attrs[COLOR_nitc__model__MGenericType___arguments].val; /* _arguments on <var_t:MType(MGenericType)> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1269);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
var_nexts = var21;
} else {
/* <var_t:MType> isa MVirtualType */
cltype25 = type_nitc__MVirtualType.color;
idtype26 = type_nitc__MVirtualType.id;
if(cltype25 >= var_t->type->table_size) {
var24 = 0;
} else {
var24 = var_t->type->type_table[cltype25] == idtype26;
}
if (var24){
{
{ /* Inline model#MVirtualType#mproperty (var_t) on <var_t:MType(MVirtualType)> */
var29 = var_t->attrs[COLOR_nitc__model__MVirtualType___mproperty].val; /* _mproperty on <var_t:MType(MVirtualType)> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1369);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_vt = var27;
{
var30 = nitc___nitc__MProperty___lookup_definitions(var_vt, var_mmodule, var_recv);
}
var_defs = var30;
{
var31 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_defs);
}
if (var31){
var = 0;
goto RET_LABEL;
} else {
}
var32 = NEW_core__Array(&type_core__Array__nitc__MType);
{
core___core__Array___core__kernel__Object__init(var32); /* Direct call array#Array#init on <var32:Array[MType]>*/
}
var_nexts = var32;
var_33 = var_defs;
{
var34 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_33);
}
var_35 = var34;
for(;;) {
{
var36 = ((short int(*)(val* self))((((long)var_35&3)?class_info[((long)var_35&3)]:var_35->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_35); /* is_ok on <var_35:IndexedIterator[MVirtualTypeDef]>*/
}
if (var36){
} else {
goto BREAK_label37;
}
{
var38 = ((val*(*)(val* self))((((long)var_35&3)?class_info[((long)var_35&3)]:var_35->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_35); /* item on <var_35:IndexedIterator[MVirtualTypeDef]>*/
}
var_d = var38;
{
var39 = core___core__SequenceRead___Collection__first(var_defs);
}
{
{ /* Inline model#MVirtualTypeDef#bound (var39) on <var39:nullable Object(MVirtualTypeDef)> */
var42 = var39->attrs[COLOR_nitc__model__MVirtualTypeDef___bound].val; /* _bound on <var39:nullable Object(MVirtualTypeDef)> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
var_next = var40;
if (var_next == NULL) {
var43 = 1; /* is null */
} else {
var43 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_next,((val*)NULL)) on <var_next:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_next,var_other) on <var_next:nullable MType(MType)> */
var48 = var_next == var_other;
var46 = var48;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
var44 = var46;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
var43 = var44;
}
if (var43){
var = 0;
goto RET_LABEL;
} else {
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_nexts, var_next); /* Direct call array#Array#add on <var_nexts:nullable Object(Array[MType])>*/
}
{
((void(*)(val* self))((((long)var_35&3)?class_info[((long)var_35&3)]:var_35->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_35); /* next on <var_35:IndexedIterator[MVirtualTypeDef]>*/
}
}
BREAK_label37: (void)0;
{
((void(*)(val* self))((((long)var_35&3)?class_info[((long)var_35&3)]:var_35->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_35); /* finish on <var_35:IndexedIterator[MVirtualTypeDef]>*/
}
} else {
/* <var_t:MType> isa MClassType */
cltype50 = type_nitc__MClassType.color;
idtype51 = type_nitc__MClassType.id;
if(cltype50 >= var_t->type->table_size) {
var49 = 0;
} else {
var49 = var_t->type->type_table[cltype50] == idtype51;
}
if (var49){
goto BREAK_label;
} else {
/* <var_t:MType> isa MParameterType */
cltype53 = type_nitc__MParameterType.color;
idtype54 = type_nitc__MParameterType.id;
if(cltype53 >= var_t->type->table_size) {
var52 = 0;
} else {
var52 = var_t->type->type_table[cltype53] == idtype54;
}
if (var52){
goto BREAK_label;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 460);
fatal_exit(1);
}
}
}
}
}
var_55 = var_nexts;
{
var56 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_55);
}
var_57 = var56;
for(;;) {
{
var58 = ((short int(*)(val* self))((((long)var_57&3)?class_info[((long)var_57&3)]:var_57->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_57); /* is_ok on <var_57:IndexedIterator[MType]>*/
}
if (var58){
} else {
goto BREAK_label59;
}
{
var60 = ((val*(*)(val* self))((((long)var_57&3)?class_info[((long)var_57&3)]:var_57->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_57); /* item on <var_57:IndexedIterator[MType]>*/
}
var_next61 = var60;
{
var62 = poset___poset__POSet___has_edge(var_poset, var_next61, var_t);
}
if (var62){
{
{ /* Inline kernel#Object#== (var_mtype,var_next61) on <var_mtype:MVirtualType> */
var_other = var_next61;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:MVirtualType> */
var67 = var_mtype == var_other;
var65 = var67;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
var63 = var65;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
if (var63){
if (unlikely(varonce==NULL)) {
var68 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce69!=NULL)) {
var70 = varonce69;
} else {
var71 = "Error: circularity of virtual type definition: ";
var72 = core__flat___NativeString___to_s_full(var71, 47l, 47l);
var70 = var72;
varonce69 = var70;
}
((struct instance_core__NativeArray*)var68)->values[0]=var70;
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = " <-> ";
var76 = core__flat___NativeString___to_s_full(var75, 5l, 5l);
var74 = var76;
varonce73 = var74;
}
((struct instance_core__NativeArray*)var68)->values[2]=var74;
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = ".";
var80 = core__flat___NativeString___to_s_full(var79, 1l, 1l);
var78 = var80;
varonce77 = var78;
}
((struct instance_core__NativeArray*)var68)->values[4]=var78;
} else {
var68 = varonce;
varonce = NULL;
}
{
var81 = ((val*(*)(val* self))(var_next61->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_next61); /* to_s on <var_next61:MType>*/
}
((struct instance_core__NativeArray*)var68)->values[1]=var81;
{
var82 = ((val*(*)(val* self))(var_t->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_t); /* to_s on <var_t:MType>*/
}
((struct instance_core__NativeArray*)var68)->values[3]=var82;
{
var83 = ((val*(*)(val* self))(var68->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var68); /* native_to_s on <var68:NativeArray[String]>*/
}
varonce = var68;
{
nitc___nitc__ModelBuilder___error(self, var_node, var83); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
if (unlikely(varonce84==NULL)) {
var85 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = "Error: circularity of virtual type definition: ";
var89 = core__flat___NativeString___to_s_full(var88, 47l, 47l);
var87 = var89;
varonce86 = var87;
}
((struct instance_core__NativeArray*)var85)->values[0]=var87;
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = " -> ";
var93 = core__flat___NativeString___to_s_full(var92, 4l, 4l);
var91 = var93;
varonce90 = var91;
}
((struct instance_core__NativeArray*)var85)->values[2]=var91;
if (likely(varonce94!=NULL)) {
var95 = varonce94;
} else {
var96 = " <-> ";
var97 = core__flat___NativeString___to_s_full(var96, 5l, 5l);
var95 = var97;
varonce94 = var95;
}
((struct instance_core__NativeArray*)var85)->values[4]=var95;
if (likely(varonce98!=NULL)) {
var99 = varonce98;
} else {
var100 = ".";
var101 = core__flat___NativeString___to_s_full(var100, 1l, 1l);
var99 = var101;
varonce98 = var99;
}
((struct instance_core__NativeArray*)var85)->values[6]=var99;
} else {
var85 = varonce84;
varonce84 = NULL;
}
{
var102 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MVirtualType>*/
}
((struct instance_core__NativeArray*)var85)->values[1]=var102;
{
var103 = ((val*(*)(val* self))(var_next61->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_next61); /* to_s on <var_next61:MType>*/
}
((struct instance_core__NativeArray*)var85)->values[3]=var103;
{
var104 = ((val*(*)(val* self))(var_t->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_t); /* to_s on <var_t:MType>*/
}
((struct instance_core__NativeArray*)var85)->values[5]=var104;
{
var105 = ((val*(*)(val* self))(var85->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var85); /* native_to_s on <var85:NativeArray[String]>*/
}
varonce84 = var85;
{
nitc___nitc__ModelBuilder___error(self, var_node, var105); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
}
var = 0;
goto RET_LABEL;
} else {
{
poset___poset__POSet___add_edge(var_poset, var_t, var_next61); /* Direct call poset#POSet#add_edge on <var_poset:POSet[MType]>*/
}
{
core___core__Sequence___SimpleCollection__add(var_todo, var_next61); /* Direct call abstract_collection#Sequence#add on <var_todo:List[MType]>*/
}
}
{
((void(*)(val* self))((((long)var_57&3)?class_info[((long)var_57&3)]:var_57->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_57); /* next on <var_57:IndexedIterator[MType]>*/
}
}
BREAK_label59: (void)0;
{
((void(*)(val* self))((((long)var_57&3)?class_info[((long)var_57&3)]:var_57->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_57); /* finish on <var_57:IndexedIterator[MType]>*/
}
} else {
goto BREAK_label106;
}
BREAK_label: (void)0;
}
BREAK_label106: (void)0;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#MPropDef#has_supercall for (self: MPropDef): Bool */
short int nitc__modelize_property___MPropDef___has_supercall(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__modelize_property__MPropDef___has_supercall].s; /* _has_supercall on <self:MPropDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#MPropDef#has_supercall= for (self: MPropDef, Bool) */
void nitc__modelize_property___MPropDef___has_supercall_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__modelize_property__MPropDef___has_supercall].s = p0; /* _has_supercall on <self:MPropDef> */
RET_LABEL:;
}
/* method modelize_property#AClassdef#build_properties_is_done for (self: AClassdef): Bool */
short int nitc__modelize_property___AClassdef___build_properties_is_done(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__modelize_property__AClassdef___build_properties_is_done].s; /* _build_properties_is_done on <self:AClassdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AClassdef#build_properties_is_done= for (self: AClassdef, Bool) */
void nitc__modelize_property___AClassdef___build_properties_is_done_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__modelize_property__AClassdef___build_properties_is_done].s = p0; /* _build_properties_is_done on <self:AClassdef> */
RET_LABEL:;
}
/* method modelize_property#AClassdef#mfree_init for (self: AClassdef): nullable MMethodDef */
val* nitc__modelize_property___AClassdef___mfree_init(val* self) {
val* var /* : nullable MMethodDef */;
val* var1 /* : nullable MMethodDef */;
var1 = self->attrs[COLOR_nitc__modelize_property__AClassdef___mfree_init].val; /* _mfree_init on <self:AClassdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AClassdef#mfree_init= for (self: AClassdef, nullable MMethodDef) */
void nitc__modelize_property___AClassdef___mfree_init_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__modelize_property__AClassdef___mfree_init].val = p0; /* _mfree_init on <self:AClassdef> */
RET_LABEL:;
}
/* method modelize_property#MClass#root_init for (self: MClass): nullable MMethodDef */
val* nitc__modelize_property___MClass___root_init(val* self) {
val* var /* : nullable MMethodDef */;
val* var1 /* : nullable MMethodDef */;
var1 = self->attrs[COLOR_nitc__modelize_property__MClass___root_init].val; /* _root_init on <self:MClass> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#MClass#root_init= for (self: MClass, nullable MMethodDef) */
void nitc__modelize_property___MClass___root_init_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__modelize_property__MClass___root_init].val = p0; /* _root_init on <self:MClass> */
RET_LABEL:;
}
/* method modelize_property#MClassDef#mprop2npropdef for (self: MClassDef): Map[MProperty, APropdef] */
val* nitc__modelize_property___MClassDef___mprop2npropdef(val* self) {
val* var /* : Map[MProperty, APropdef] */;
val* var1 /* : Map[MProperty, APropdef] */;
var1 = self->attrs[COLOR_nitc__modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <self:MClassDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 506);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#MClassDef#build_self_type for (self: MClassDef, ModelBuilder, AClassdef) */
void nitc__modelize_property___MClassDef___build_self_type(val* self, val* p0, val* p1) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_nclassdef /* var nclassdef: AClassdef */;
short int var /* : Bool */;
short int var1 /* : Bool */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : String */;
val* var_name /* var name: String */;
val* var5 /* : nullable MProperty */;
val* var_mprop /* var mprop: nullable MProperty */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
int cltype;
int idtype;
short int var13 /* : Bool */;
val* var14 /* : MPropDef */;
val* var16 /* : MPropDef */;
val* var_intro /* var intro: MVirtualTypeDef */;
val* var17 /* : MClassDef */;
val* var19 /* : MClassDef */;
val* var_intro_mclassdef /* var intro_mclassdef: MClassDef */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : HashMap[MPropDef, APropdef] */;
val* var27 /* : HashMap[MPropDef, APropdef] */;
val* var28 /* : nullable Object */;
val* var_nintro /* var nintro: APropdef */;
val* var29 /* : MClass */;
val* var31 /* : MClass */;
val* var32 /* : String */;
val* var34 /* : String */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
val* var38 /* : String */;
short int var39 /* : Bool */;
val* var_other41 /* var other: nullable Object */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
val* var47 /* : String */;
val* var48 /* : MVisibility */;
val* var50 /* : MVisibility */;
val* var51 /* : Sys */;
val* var52 /* : MVisibility */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
val* var60 /* : String */;
short int var61 /* : Bool */;
short int var63 /* : Bool */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
val* var67 /* : String */;
val* var68 /* : MVirtualTypeDef */;
val* var69 /* : Location */;
val* var71 /* : Location */;
val* var_mpropdef /* var mpropdef: MVirtualTypeDef */;
val* var72 /* : MClass */;
val* var74 /* : MClass */;
val* var75 /* : MClassType */;
val* var77 /* : MClassType */;
var_modelbuilder = p0;
var_nclassdef = p1;
{
var = nitc___nitc__MClassDef___is_intro(self);
}
var1 = !var;
if (var1){
goto RET_LABEL;
} else {
}
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "SELF";
var4 = core__flat___NativeString___to_s_full(var3, 4l, 4l);
var2 = var4;
varonce = var2;
}
var_name = var2;
{
var5 = nitc___nitc__ModelBuilder___try_get_mproperty_by_name(var_modelbuilder, var_nclassdef, self, var_name);
}
var_mprop = var5;
if (var_mprop == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mprop,((val*)NULL)) on <var_mprop:nullable MProperty> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mprop,var_other) on <var_mprop:nullable MProperty(MProperty)> */
var11 = var_mprop == var_other;
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
/* <var_mprop:nullable MProperty(MProperty)> isa MVirtualTypeProp */
cltype = type_nitc__MVirtualTypeProp.color;
idtype = type_nitc__MVirtualTypeProp.id;
if(cltype >= var_mprop->type->table_size) {
var12 = 0;
} else {
var12 = var_mprop->type->type_table[cltype] == idtype;
}
var13 = !var12;
if (var13){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MProperty#intro (var_mprop) on <var_mprop:nullable MProperty(MVirtualTypeProp)> */
var16 = var_mprop->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var_mprop:nullable MProperty(MVirtualTypeProp)> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1986);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
var_intro = var14;
{
{ /* Inline model#MPropDef#mclassdef (var_intro) on <var_intro:MVirtualTypeDef> */
var19 = var_intro->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_intro:MVirtualTypeDef> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2227);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_intro_mclassdef = var17;
{
{ /* Inline kernel#Object#== (var_intro_mclassdef,self) on <var_intro_mclassdef:MClassDef> */
var_other = self;
{
{ /* Inline kernel#Object#is_same_instance (var_intro_mclassdef,var_other) on <var_intro_mclassdef:MClassDef> */
var24 = var_intro_mclassdef == var_other;
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
if (var20){
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var27 = var_modelbuilder->attrs[COLOR_nitc__modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 40);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
var28 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var25, var_intro);
}
var_nintro = var28;
{
{ /* Inline model#MClassDef#mclass (var_intro_mclassdef) on <var_intro_mclassdef:MClassDef> */
var31 = var_intro_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_intro_mclassdef:MClassDef> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 576);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline model#MClass#name (var29) on <var29:MClass> */
var34 = var29->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var29:MClass> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 385);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "Object";
var38 = core__flat___NativeString___to_s_full(var37, 6l, 6l);
var36 = var38;
varonce35 = var36;
}
{
{ /* Inline kernel#Object#!= (var32,var36) on <var32:String> */
var_other41 = var36;
{
var42 = ((short int(*)(val* self, val* p0))(var32->class->vft[COLOR_core__kernel__Object___61d_61d]))(var32, var_other41); /* == on <var32:String>*/
}
var43 = !var42;
var39 = var43;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
if (var39){
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = "Error: the virtual type `SELF` must be declared in `Object`.";
var47 = core__flat___NativeString___to_s_full(var46, 60l, 60l);
var45 = var47;
varonce44 = var45;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_nintro, var45); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
{
{ /* Inline model#MProperty#visibility (var_mprop) on <var_mprop:nullable MProperty(MVirtualTypeProp)> */
var50 = var_mprop->attrs[COLOR_nitc__model__MProperty___visibility].val; /* _visibility on <var_mprop:nullable MProperty(MVirtualTypeProp)> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1967);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
var51 = glob_sys;
{
var52 = nitc__model_base___core__Sys___public_visibility(var51);
}
{
{ /* Inline kernel#Object#!= (var48,var52) on <var48:MVisibility> */
var_other41 = var52;
{
var55 = ((short int(*)(val* self, val* p0))(var48->class->vft[COLOR_core__kernel__Object___61d_61d]))(var48, var_other41); /* == on <var48:MVisibility>*/
}
var56 = !var55;
var53 = var56;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
if (var53){
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = "Error: the virtual type `SELF` must be public.";
var60 = core__flat___NativeString___to_s_full(var59, 46l, 46l);
var58 = var60;
varonce57 = var58;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_nintro, var58); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
{
{ /* Inline model#MVirtualTypeDef#is_fixed (var_intro) on <var_intro:MVirtualTypeDef> */
var63 = var_intro->attrs[COLOR_nitc__model__MVirtualTypeDef___is_fixed].s; /* _is_fixed on <var_intro:MVirtualTypeDef> */
var61 = var63;
RET_LABEL62:(void)0;
}
}
if (var61){
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = "Error: the virtual type `SELF` cannot be fixed.";
var67 = core__flat___NativeString___to_s_full(var66, 47l, 47l);
var65 = var67;
varonce64 = var65;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_nintro, var65); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
goto RET_LABEL;
} else {
}
var68 = NEW_nitc__MVirtualTypeDef(&type_nitc__MVirtualTypeDef);
{
{ /* Inline model#MClassDef#location (self) on <self:MClassDef> */
var71 = self->attrs[COLOR_nitc__model__MClassDef___location].val; /* _location on <self:MClassDef> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var68->class->vft[COLOR_nitc__model__MPropDef__mclassdef_61d]))(var68, self); /* mclassdef= on <var68:MVirtualTypeDef>*/
}
{
((void(*)(val* self, val* p0))(var68->class->vft[COLOR_nitc__model__MPropDef__mproperty_61d]))(var68, var_mprop); /* mproperty= on <var68:MVirtualTypeDef>*/
}
{
((void(*)(val* self, val* p0))(var68->class->vft[COLOR_nitc__model__MPropDef__location_61d]))(var68, var69); /* location= on <var68:MVirtualTypeDef>*/
}
{
((void(*)(val* self))(var68->class->vft[COLOR_core__kernel__Object__init]))(var68); /* init on <var68:MVirtualTypeDef>*/
}
var_mpropdef = var68;
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var74 = self->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 576);
fatal_exit(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var72) on <var72:MClass> */
var77 = var72->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var72:MClass> */
if (unlikely(var77 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 507);
fatal_exit(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
{
{ /* Inline model#MVirtualTypeDef#bound= (var_mpropdef,var75) on <var_mpropdef:MVirtualTypeDef> */
var_mpropdef->attrs[COLOR_nitc__model__MVirtualTypeDef___bound].val = var75; /* _bound on <var_mpropdef:MVirtualTypeDef> */
RET_LABEL78:(void)0;
}
}
RET_LABEL:;
}
/* method modelize_property#APropdef#mpropdef for (self: APropdef): nullable MPropDef */
val* nitc__modelize_property___APropdef___mpropdef(val* self) {
val* var /* : nullable MPropDef */;
val* var1 /* : nullable MPropDef */;
var1 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:APropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#APropdef#mpropdef= for (self: APropdef, nullable MPropDef) */
void nitc__modelize_property___APropdef___mpropdef_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (mpropdef) <p0:nullable MPropDef> isa nullable MPROPDEF */
/* <p0:nullable MPropDef> isa nullable MPROPDEF */
type_struct = self->type->resolution_table->types[COLOR_nullable__nitc__modelize_property__APropdef__MPROPDEF];
cltype = type_struct->color;
idtype = type_struct->id;
if(p0 == NULL) {
var = 1;
} else {
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 559);
fatal_exit(1);
}
self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val = p0; /* _mpropdef on <self:APropdef> */
RET_LABEL:;
}
/* method modelize_property#APropdef#build_property for (self: APropdef, ModelBuilder, MClassDef) */
void nitc__modelize_property___APropdef___build_property(val* self, val* p0, val* p1) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_mclassdef /* var mclassdef: MClassDef */;
var_modelbuilder = p0;
var_mclassdef = p1;
RET_LABEL:;
}
/* method modelize_property#APropdef#build_signature for (self: APropdef, ModelBuilder) */
void nitc__modelize_property___APropdef___build_signature(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
var_modelbuilder = p0;
RET_LABEL:;
}
/* method modelize_property#APropdef#check_signature for (self: APropdef, ModelBuilder) */
void nitc__modelize_property___APropdef___check_signature(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
var_modelbuilder = p0;
RET_LABEL:;
}
/* method modelize_property#APropdef#new_property_visibility for (self: APropdef, ModelBuilder, MClassDef, nullable AVisibility): MVisibility */
val* nitc__modelize_property___APropdef___new_property_visibility(val* self, val* p0, val* p1, val* p2) {
val* var /* : MVisibility */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var_nvisibility /* var nvisibility: nullable AVisibility */;
val* var1 /* : Sys */;
val* var2 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: MVisibility */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : MVisibility */;
val* var9 /* : Sys */;
val* var10 /* : MVisibility */;
short int var11 /* : Bool */;
val* var_other13 /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
static val* varonce;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : String */;
val* var20 /* : Sys */;
val* var21 /* : MVisibility */;
val* var22 /* : MClass */;
val* var24 /* : MClass */;
val* var25 /* : MVisibility */;
val* var27 /* : MVisibility */;
val* var28 /* : Sys */;
val* var29 /* : MVisibility */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
val* var35 /* : Sys */;
val* var36 /* : MVisibility */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
val* var50 /* : String */;
val* var51 /* : Sys */;
val* var52 /* : MVisibility */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
val* var66 /* : String */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
val* var70 /* : String */;
val* var71 /* : Sys */;
val* var72 /* : MVisibility */;
var_modelbuilder = p0;
var_mclassdef = p1;
var_nvisibility = p2;
var1 = glob_sys;
{
var2 = nitc__model_base___core__Sys___public_visibility(var1);
}
var_mvisibility = var2;
if (var_nvisibility == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nvisibility,((val*)NULL)) on <var_nvisibility:nullable AVisibility> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_nvisibility->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nvisibility, var_other); /* == on <var_nvisibility:nullable AVisibility(AVisibility)>*/
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
var8 = ((val*(*)(val* self))(var_nvisibility->class->vft[COLOR_nitc__modelbuilder_base__AVisibility__mvisibility]))(var_nvisibility); /* mvisibility on <var_nvisibility:nullable AVisibility(AVisibility)>*/
}
var_mvisibility = var8;
var9 = glob_sys;
{
var10 = nitc__model_base___core__Sys___intrude_visibility(var9);
}
{
{ /* Inline kernel#Object#== (var_mvisibility,var10) on <var_mvisibility:MVisibility> */
var_other13 = var10;
{
{ /* Inline kernel#Object#is_same_instance (var_mvisibility,var_other13) on <var_mvisibility:MVisibility> */
var16 = var_mvisibility == var_other13;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
if (likely(varonce!=NULL)) {
var17 = varonce;
} else {
var18 = "Error: `intrude` is not a legal visibility for properties.";
var19 = core__flat___NativeString___to_s_full(var18, 58l, 58l);
var17 = var19;
varonce = var17;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_nvisibility, var17); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
var20 = glob_sys;
{
var21 = nitc__model_base___core__Sys___public_visibility(var20);
}
var_mvisibility = var21;
} else {
}
} else {
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var24 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 576);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline model#MClass#visibility (var22) on <var22:MClass> */
var27 = var22->attrs[COLOR_nitc__model__MClass___visibility].val; /* _visibility on <var22:MClass> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 463);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
var28 = glob_sys;
{
var29 = nitc__model_base___core__Sys___private_visibility(var28);
}
{
{ /* Inline kernel#Object#== (var25,var29) on <var25:MVisibility> */
var_other13 = var29;
{
{ /* Inline kernel#Object#is_same_instance (var25,var_other13) on <var25:MVisibility> */
var34 = var25 == var_other13;
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
if (var30){
var35 = glob_sys;
{
var36 = nitc__model_base___core__Sys___protected_visibility(var35);
}
{
{ /* Inline kernel#Object#== (var_mvisibility,var36) on <var_mvisibility:MVisibility> */
var_other13 = var36;
{
{ /* Inline kernel#Object#is_same_instance (var_mvisibility,var_other13) on <var_mvisibility:MVisibility> */
var41 = var_mvisibility == var_other13;
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
if (var37){
if (var_nvisibility == NULL) {
var42 = 0; /* is null */
} else {
var42 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nvisibility,((val*)NULL)) on <var_nvisibility:nullable AVisibility> */
var_other = ((val*)NULL);
{
var45 = ((short int(*)(val* self, val* p0))(var_nvisibility->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nvisibility, var_other); /* == on <var_nvisibility:nullable AVisibility(AVisibility)>*/
}
var46 = !var45;
var43 = var46;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
var42 = var43;
}
if (unlikely(!var42)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 577);
fatal_exit(1);
}
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "Error: `private` is the only legal visibility for properties in a private class.";
var50 = core__flat___NativeString___to_s_full(var49, 80l, 80l);
var48 = var50;
varonce47 = var48;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_nvisibility, var48); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
var51 = glob_sys;
{
var52 = nitc__model_base___core__Sys___private_visibility(var51);
}
{
{ /* Inline kernel#Object#== (var_mvisibility,var52) on <var_mvisibility:MVisibility> */
var_other13 = var52;
{
{ /* Inline kernel#Object#is_same_instance (var_mvisibility,var_other13) on <var_mvisibility:MVisibility> */
var57 = var_mvisibility == var_other13;
var55 = var57;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
if (var53){
if (var_nvisibility == NULL) {
var58 = 0; /* is null */
} else {
var58 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nvisibility,((val*)NULL)) on <var_nvisibility:nullable AVisibility> */
var_other = ((val*)NULL);
{
var61 = ((short int(*)(val* self, val* p0))(var_nvisibility->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nvisibility, var_other); /* == on <var_nvisibility:nullable AVisibility(AVisibility)>*/
}
var62 = !var61;
var59 = var62;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
var58 = var59;
}
if (unlikely(!var58)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 580);
fatal_exit(1);
}
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "useless-visibility";
var66 = core__flat___NativeString___to_s_full(var65, 18l, 18l);
var64 = var66;
varonce63 = var64;
}
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = "Warning: `private` is superfluous since the only legal visibility for properties in a private class is private.";
var70 = core__flat___NativeString___to_s_full(var69, 111l, 111l);
var68 = var70;
varonce67 = var68;
}
{
nitc___nitc__ModelBuilder___advice(var_modelbuilder, var_nvisibility, var64, var68); /* Direct call modelbuilder_base#ModelBuilder#advice on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
}
var71 = glob_sys;
{
var72 = nitc__model_base___core__Sys___private_visibility(var71);
}
var_mvisibility = var72;
} else {
}
var = var_mvisibility;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#APropdef#set_doc for (self: APropdef, MPropDef, ModelBuilder) */
void nitc__modelize_property___APropdef___set_doc(val* self, val* p0, val* p1) {
val* var_mpropdef /* var mpropdef: MPropDef */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var /* : nullable ADoc */;
val* var2 /* : nullable ADoc */;
val* var_ndoc /* var ndoc: nullable ADoc */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : MDoc */;
val* var_mdoc /* var mdoc: MDoc */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var_ /* var : Bool */;
val* var13 /* : MProperty */;
val* var15 /* : MProperty */;
val* var16 /* : MVisibility */;
val* var18 /* : MVisibility */;
val* var19 /* : Sys */;
val* var20 /* : MVisibility */;
short int var21 /* : Bool */;
static val* varonce;
val* var22 /* : String */;
char* var23 /* : NativeString */;
val* var24 /* : String */;
val* var26 /* : NativeArray[String] */;
static val* varonce25;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
val* var30 /* : String */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
val* var34 /* : String */;
val* var35 /* : MProperty */;
val* var37 /* : MProperty */;
val* var38 /* : String */;
val* var39 /* : String */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
val* var43 /* : String */;
val* var44 /* : nullable AAnnotation */;
val* var_at_deprecated /* var at_deprecated: nullable AAnnotation */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
val* var55 /* : String */;
val* var56 /* : MDeprecationInfo */;
val* var_info /* var info: MDeprecationInfo */;
val* var58 /* : nullable ADoc */;
val* var60 /* : nullable ADoc */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
val* var66 /* : MDoc */;
val* var68 /* : MProperty */;
val* var70 /* : MProperty */;
var_mpropdef = p0;
var_modelbuilder = p1;
{
{ /* Inline parser_nodes#ADefinition#n_doc (self) on <self:APropdef> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:APropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_ndoc = var;
if (var_ndoc == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ndoc,((val*)NULL)) on <var_ndoc:nullable ADoc> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_ndoc->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ndoc, var_other); /* == on <var_ndoc:nullable ADoc(ADoc)>*/
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
var8 = nitc__modelbuilder_base___ADoc___to_mdoc(var_ndoc);
}
var_mdoc = var8;
{
{ /* Inline mdoc#MEntity#mdoc= (var_mpropdef,var_mdoc) on <var_mpropdef:MPropDef> */
var_mpropdef->attrs[COLOR_nitc__mdoc__MEntity___mdoc].val = var_mdoc; /* _mdoc on <var_mpropdef:MPropDef> */
RET_LABEL9:(void)0;
}
}
{
{ /* Inline mdoc#MDoc#original_mentity= (var_mdoc,var_mpropdef) on <var_mdoc:MDoc> */
var_mdoc->attrs[COLOR_nitc__mdoc__MDoc___original_mentity].val = var_mpropdef; /* _original_mentity on <var_mdoc:MDoc> */
RET_LABEL10:(void)0;
}
}
} else {
{
var12 = nitc___nitc__MPropDef___is_intro(var_mpropdef);
}
var_ = var12;
if (var12){
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MPropDef> */
var15 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MPropDef> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline model#MProperty#visibility (var13) on <var13:MProperty> */
var18 = var13->attrs[COLOR_nitc__model__MProperty___visibility].val; /* _visibility on <var13:MProperty> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1967);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var19 = glob_sys;
{
var20 = nitc__model_base___core__Sys___protected_visibility(var19);
}
{
var21 = core___core__Comparable____62d_61d(var16, var20);
}
var11 = var21;
} else {
var11 = var_;
}
if (var11){
if (likely(varonce!=NULL)) {
var22 = varonce;
} else {
var23 = "missing-doc";
var24 = core__flat___NativeString___to_s_full(var23, 11l, 11l);
var22 = var24;
varonce = var22;
}
if (unlikely(varonce25==NULL)) {
var26 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "Documentation warning: Undocumented property `";
var30 = core__flat___NativeString___to_s_full(var29, 46l, 46l);
var28 = var30;
varonce27 = var28;
}
((struct instance_core__NativeArray*)var26)->values[0]=var28;
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "`";
var34 = core__flat___NativeString___to_s_full(var33, 1l, 1l);
var32 = var34;
varonce31 = var32;
}
((struct instance_core__NativeArray*)var26)->values[2]=var32;
} else {
var26 = varonce25;
varonce25 = NULL;
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MPropDef> */
var37 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MPropDef> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
var38 = ((val*(*)(val* self))(var35->class->vft[COLOR_core__abstract_text__Object__to_s]))(var35); /* to_s on <var35:MProperty>*/
}
((struct instance_core__NativeArray*)var26)->values[1]=var38;
{
var39 = ((val*(*)(val* self))(var26->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var26); /* native_to_s on <var26:NativeArray[String]>*/
}
varonce25 = var26;
{
nitc___nitc__ModelBuilder___advice(var_modelbuilder, self, var22, var39); /* Direct call modelbuilder_base#ModelBuilder#advice on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
}
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "deprecated";
var43 = core__flat___NativeString___to_s_full(var42, 10l, 10l);
var41 = var43;
varonce40 = var41;
}
{
var44 = nitc__annotation___Prod___get_single_annotation(self, var41, var_modelbuilder);
}
var_at_deprecated = var44;
if (var_at_deprecated == NULL) {
var45 = 0; /* is null */
} else {
var45 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_at_deprecated,((val*)NULL)) on <var_at_deprecated:nullable AAnnotation> */
var_other = ((val*)NULL);
{
var48 = ((short int(*)(val* self, val* p0))(var_at_deprecated->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_at_deprecated, var_other); /* == on <var_at_deprecated:nullable AAnnotation(AAnnotation)>*/
}
var49 = !var48;
var46 = var49;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
var45 = var46;
}
if (var45){
{
var50 = nitc___nitc__MPropDef___is_intro(var_mpropdef);
}
var51 = !var50;
if (var51){
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = "Error: method redefinition cannot be deprecated.";
var55 = core__flat___NativeString___to_s_full(var54, 48l, 48l);
var53 = var55;
varonce52 = var53;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, self, var53); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
var56 = NEW_nitc__MDeprecationInfo(&type_nitc__MDeprecationInfo);
{
{ /* Inline kernel#Object#init (var56) on <var56:MDeprecationInfo> */
RET_LABEL57:(void)0;
}
}
var_info = var56;
{
{ /* Inline parser_nodes#ADefinition#n_doc (var_at_deprecated) on <var_at_deprecated:nullable AAnnotation(AAnnotation)> */
var60 = var_at_deprecated->attrs[COLOR_nitc__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <var_at_deprecated:nullable AAnnotation(AAnnotation)> */
var58 = var60;
RET_LABEL59:(void)0;
}
}
var_ndoc = var58;
if (var_ndoc == NULL) {
var61 = 0; /* is null */
} else {
var61 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ndoc,((val*)NULL)) on <var_ndoc:nullable ADoc> */
var_other = ((val*)NULL);
{
var64 = ((short int(*)(val* self, val* p0))(var_ndoc->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ndoc, var_other); /* == on <var_ndoc:nullable ADoc(ADoc)>*/
}
var65 = !var64;
var62 = var65;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
var61 = var62;
}
if (var61){
{
var66 = nitc__modelbuilder_base___ADoc___to_mdoc(var_ndoc);
}
{
{ /* Inline mdoc#MDeprecationInfo#mdoc= (var_info,var66) on <var_info:MDeprecationInfo> */
var_info->attrs[COLOR_nitc__mdoc__MDeprecationInfo___mdoc].val = var66; /* _mdoc on <var_info:MDeprecationInfo> */
RET_LABEL67:(void)0;
}
}
} else {
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MPropDef> */
var70 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MPropDef> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
{ /* Inline mdoc#MEntity#deprecation= (var68,var_info) on <var68:MProperty> */
var68->attrs[COLOR_nitc__mdoc__MEntity___deprecation].val = var_info; /* _deprecation on <var68:MProperty> */
RET_LABEL71:(void)0;
}
}
}
} else {
}
RET_LABEL:;
}
/* method modelize_property#APropdef#check_redef_property_visibility for (self: APropdef, ModelBuilder, nullable AVisibility, MProperty) */
void nitc__modelize_property___APropdef___check_redef_property_visibility(val* self, val* p0, val* p1, val* p2) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_nvisibility /* var nvisibility: nullable AVisibility */;
val* var_mprop /* var mprop: MProperty */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: MVisibility */;
short int var7 /* : Bool */;
val* var8 /* : MVisibility */;
val* var10 /* : MVisibility */;
short int var11 /* : Bool */;
val* var_other13 /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var_ /* var : Bool */;
val* var16 /* : Sys */;
val* var17 /* : MVisibility */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : NativeArray[String] */;
static val* varonce;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
val* var26 /* : String */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
val* var30 /* : String */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
val* var34 /* : String */;
val* var35 /* : MVisibility */;
val* var37 /* : MVisibility */;
val* var38 /* : String */;
val* var39 /* : String */;
val* var40 /* : String */;
var_modelbuilder = p0;
var_nvisibility = p1;
var_mprop = p2;
if (var_nvisibility == NULL) {
var = 1; /* is null */
} else {
var = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nvisibility,((val*)NULL)) on <var_nvisibility:nullable AVisibility> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_nvisibility,var_other) on <var_nvisibility:nullable AVisibility(AVisibility)> */
var5 = var_nvisibility == var_other;
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
}
{
var6 = ((val*(*)(val* self))(var_nvisibility->class->vft[COLOR_nitc__modelbuilder_base__AVisibility__mvisibility]))(var_nvisibility); /* mvisibility on <var_nvisibility:nullable AVisibility(AVisibility)>*/
}
var_mvisibility = var6;
{
{ /* Inline model#MProperty#visibility (var_mprop) on <var_mprop:MProperty> */
var10 = var_mprop->attrs[COLOR_nitc__model__MProperty___visibility].val; /* _visibility on <var_mprop:MProperty> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1967);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var_mvisibility,var8) on <var_mvisibility:MVisibility> */
var_other13 = var8;
{
var14 = ((short int(*)(val* self, val* p0))(var_mvisibility->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mvisibility, var_other13); /* == on <var_mvisibility:MVisibility>*/
}
var15 = !var14;
var11 = var15;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var_ = var11;
if (var11){
var16 = glob_sys;
{
var17 = nitc__model_base___core__Sys___public_visibility(var16);
}
{
{ /* Inline kernel#Object#!= (var_mvisibility,var17) on <var_mvisibility:MVisibility> */
var_other13 = var17;
{
var20 = ((short int(*)(val* self, val* p0))(var_mvisibility->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mvisibility, var_other13); /* == on <var_mvisibility:MVisibility>*/
}
var21 = !var20;
var18 = var21;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var7 = var18;
} else {
var7 = var_;
}
if (var7){
if (unlikely(varonce==NULL)) {
var22 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "Error: redefinition changed the visibility from `";
var26 = core__flat___NativeString___to_s_full(var25, 49l, 49l);
var24 = var26;
varonce23 = var24;
}
((struct instance_core__NativeArray*)var22)->values[0]=var24;
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "` to `";
var30 = core__flat___NativeString___to_s_full(var29, 6l, 6l);
var28 = var30;
varonce27 = var28;
}
((struct instance_core__NativeArray*)var22)->values[2]=var28;
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "`.";
var34 = core__flat___NativeString___to_s_full(var33, 2l, 2l);
var32 = var34;
varonce31 = var32;
}
((struct instance_core__NativeArray*)var22)->values[4]=var32;
} else {
var22 = varonce;
varonce = NULL;
}
{
{ /* Inline model#MProperty#visibility (var_mprop) on <var_mprop:MProperty> */
var37 = var_mprop->attrs[COLOR_nitc__model__MProperty___visibility].val; /* _visibility on <var_mprop:MProperty> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1967);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
var38 = ((val*(*)(val* self))(var35->class->vft[COLOR_core__abstract_text__Object__to_s]))(var35); /* to_s on <var35:MVisibility>*/
}
((struct instance_core__NativeArray*)var22)->values[1]=var38;
{
var39 = ((val*(*)(val* self))(var_mvisibility->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mvisibility); /* to_s on <var_mvisibility:MVisibility>*/
}
((struct instance_core__NativeArray*)var22)->values[3]=var39;
{
var40 = ((val*(*)(val* self))(var22->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var22); /* native_to_s on <var22:NativeArray[String]>*/
}
varonce = var22;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_nvisibility, var40); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
RET_LABEL:;
}
/* method modelize_property#APropdef#check_redef_keyword for (self: APropdef, ModelBuilder, MClassDef, nullable Token, Bool, MProperty): Bool */
short int nitc__modelize_property___APropdef___check_redef_keyword(val* self, val* p0, val* p1, val* p2, short int p3, val* p4) {
short int var /* : Bool */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var_kwredef /* var kwredef: nullable Token */;
short int var_need_redef /* var need_redef: Bool */;
val* var_mprop /* var mprop: MProperty */;
val* var1 /* : Map[MProperty, APropdef] */;
val* var3 /* : Map[MProperty, APropdef] */;
short int var4 /* : Bool */;
val* var5 /* : NativeArray[String] */;
static val* varonce;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : String */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : String */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : String */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
val* var21 /* : String */;
val* var22 /* : String */;
val* var23 /* : MClass */;
val* var25 /* : MClass */;
val* var26 /* : String */;
val* var27 /* : Map[MProperty, APropdef] */;
val* var29 /* : Map[MProperty, APropdef] */;
val* var30 /* : nullable Object */;
val* var31 /* : Location */;
val* var33 /* : Location */;
long var34 /* : Int */;
long var36 /* : Int */;
val* var37 /* : String */;
val* var38 /* : String */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
val* var51 /* : NativeArray[String] */;
static val* varonce50;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
val* var55 /* : String */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
val* var59 /* : String */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
val* var63 /* : String */;
val* var64 /* : MClass */;
val* var66 /* : MClass */;
val* var67 /* : String */;
val* var68 /* : String */;
val* var70 /* : String */;
val* var71 /* : String */;
short int var72 /* : Bool */;
val* var73 /* : MClassDef */;
val* var75 /* : MClassDef */;
val* var76 /* : MModule */;
val* var78 /* : MModule */;
val* var79 /* : nullable MGroup */;
val* var81 /* : nullable MGroup */;
short int var82 /* : Bool */;
short int var83 /* : Bool */;
val* var_other85 /* var other: nullable Object */;
short int var86 /* : Bool */;
short int var87 /* : Bool */;
short int var_88 /* var : Bool */;
val* var89 /* : MVisibility */;
val* var91 /* : MVisibility */;
val* var92 /* : Sys */;
val* var93 /* : MVisibility */;
short int var94 /* : Bool */;
val* var95 /* : Model */;
val* var97 /* : Model */;
val* var98 /* : String */;
val* var100 /* : String */;
val* var101 /* : nullable Array[MProperty] */;
val* var_others /* var others: nullable Array[MProperty] */;
short int var102 /* : Bool */;
short int var103 /* : Bool */;
short int var105 /* : Bool */;
short int var106 /* : Bool */;
val* var_107 /* var : Array[MProperty] */;
val* var108 /* : IndexedIterator[nullable Object] */;
val* var_109 /* var : IndexedIterator[MProperty] */;
short int var110 /* : Bool */;
val* var111 /* : nullable Object */;
val* var_other112 /* var other: MProperty */;
short int var113 /* : Bool */;
short int var114 /* : Bool */;
short int var115 /* : Bool */;
short int var116 /* : Bool */;
short int var117 /* : Bool */;
short int var119 /* : Bool */;
short int var120 /* : Bool */;
short int var_121 /* var : Bool */;
val* var122 /* : MClassDef */;
val* var124 /* : MClassDef */;
val* var125 /* : MModule */;
val* var127 /* : MModule */;
val* var128 /* : nullable MGroup */;
val* var130 /* : nullable MGroup */;
short int var131 /* : Bool */;
short int var132 /* : Bool */;
short int var134 /* : Bool */;
short int var135 /* : Bool */;
short int var_136 /* var : Bool */;
val* var137 /* : MClassDef */;
val* var139 /* : MClassDef */;
val* var140 /* : MModule */;
val* var142 /* : MModule */;
val* var143 /* : nullable MGroup */;
val* var145 /* : nullable MGroup */;
val* var146 /* : MPackage */;
val* var148 /* : MPackage */;
val* var149 /* : MClassDef */;
val* var151 /* : MClassDef */;
val* var152 /* : MModule */;
val* var154 /* : MModule */;
val* var155 /* : nullable MGroup */;
val* var157 /* : nullable MGroup */;
val* var158 /* : MPackage */;
val* var160 /* : MPackage */;
short int var161 /* : Bool */;
short int var163 /* : Bool */;
short int var165 /* : Bool */;
short int var_166 /* var : Bool */;
val* var167 /* : MClassDef */;
val* var169 /* : MClassDef */;
val* var170 /* : MClass */;
val* var172 /* : MClass */;
val* var173 /* : String */;
val* var175 /* : String */;
val* var176 /* : MClassDef */;
val* var178 /* : MClassDef */;
val* var179 /* : MClass */;
val* var181 /* : MClass */;
val* var182 /* : String */;
val* var184 /* : String */;
short int var185 /* : Bool */;
short int var_186 /* var : Bool */;
val* var187 /* : MVisibility */;
val* var189 /* : MVisibility */;
val* var190 /* : Sys */;
val* var191 /* : MVisibility */;
short int var192 /* : Bool */;
static val* varonce193;
val* var194 /* : String */;
char* var195 /* : NativeString */;
val* var196 /* : String */;
val* var198 /* : NativeArray[String] */;
static val* varonce197;
static val* varonce199;
val* var200 /* : String */;
char* var201 /* : NativeString */;
val* var202 /* : String */;
static val* varonce203;
val* var204 /* : String */;
char* var205 /* : NativeString */;
val* var206 /* : String */;
static val* varonce207;
val* var208 /* : String */;
char* var209 /* : NativeString */;
val* var210 /* : String */;
static val* varonce211;
val* var212 /* : String */;
char* var213 /* : NativeString */;
val* var214 /* : String */;
val* var215 /* : String */;
val* var216 /* : MClassDef */;
val* var218 /* : MClassDef */;
val* var219 /* : MModule */;
val* var221 /* : MModule */;
val* var222 /* : String */;
val* var223 /* : MClassDef */;
val* var225 /* : MClassDef */;
val* var226 /* : MClass */;
val* var228 /* : MClass */;
val* var229 /* : String */;
val* var231 /* : String */;
val* var232 /* : String */;
short int var233 /* : Bool */;
val* var235 /* : NativeArray[String] */;
static val* varonce234;
static val* varonce236;
val* var237 /* : String */;
char* var238 /* : NativeString */;
val* var239 /* : String */;
static val* varonce240;
val* var241 /* : String */;
char* var242 /* : NativeString */;
val* var243 /* : String */;
static val* varonce244;
val* var245 /* : String */;
char* var246 /* : NativeString */;
val* var247 /* : String */;
val* var248 /* : MClass */;
val* var250 /* : MClass */;
val* var251 /* : String */;
val* var252 /* : String */;
val* var254 /* : String */;
val* var255 /* : String */;
var_modelbuilder = p0;
var_mclassdef = p1;
var_kwredef = p2;
var_need_redef = p3;
var_mprop = p4;
{
{ /* Inline modelize_property#MClassDef#mprop2npropdef (var_mclassdef) on <var_mclassdef:MClassDef> */
var3 = var_mclassdef->attrs[COLOR_nitc__modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <var_mclassdef:MClassDef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 506);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((short int(*)(val* self, val* p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__MapRead__has_key]))(var1, var_mprop); /* has_key on <var1:Map[MProperty, APropdef]>*/
}
if (var4){
if (unlikely(varonce==NULL)) {
var5 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "Error: a property `";
var9 = core__flat___NativeString___to_s_full(var8, 19l, 19l);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var5)->values[0]=var7;
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "` is already defined in class `";
var13 = core__flat___NativeString___to_s_full(var12, 31l, 31l);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var5)->values[2]=var11;
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "` at line ";
var17 = core__flat___NativeString___to_s_full(var16, 10l, 10l);
var15 = var17;
varonce14 = var15;
}
((struct instance_core__NativeArray*)var5)->values[4]=var15;
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = ".";
var21 = core__flat___NativeString___to_s_full(var20, 1l, 1l);
var19 = var21;
varonce18 = var19;
}
((struct instance_core__NativeArray*)var5)->values[6]=var19;
} else {
var5 = varonce;
varonce = NULL;
}
{
var22 = ((val*(*)(val* self))(var_mprop->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mprop); /* to_s on <var_mprop:MProperty>*/
}
((struct instance_core__NativeArray*)var5)->values[1]=var22;
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var25 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 576);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = ((val*(*)(val* self))(var23->class->vft[COLOR_core__abstract_text__Object__to_s]))(var23); /* to_s on <var23:MClass>*/
}
((struct instance_core__NativeArray*)var5)->values[3]=var26;
{
{ /* Inline modelize_property#MClassDef#mprop2npropdef (var_mclassdef) on <var_mclassdef:MClassDef> */
var29 = var_mclassdef->attrs[COLOR_nitc__modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <var_mclassdef:MClassDef> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 506);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
var30 = ((val*(*)(val* self, val* p0))((((long)var27&3)?class_info[((long)var27&3)]:var27->class)->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var27, var_mprop); /* [] on <var27:Map[MProperty, APropdef]>*/
}
{
{ /* Inline parser_nodes#ANode#location (var30) on <var30:nullable Object(APropdef)> */
var33 = var30->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var30:nullable Object(APropdef)> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 24);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline location#Location#line_start (var31) on <var31:Location> */
var36 = var31->attrs[COLOR_nitc__location__Location___line_start].l; /* _line_start on <var31:Location> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
var37 = core__flat___Int___core__abstract_text__Object__to_s(var34);
((struct instance_core__NativeArray*)var5)->values[5]=var37;
{
var38 = ((val*(*)(val* self))(var5->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, self, var38); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
var = 0;
goto RET_LABEL;
} else {
}
/* <var_mprop:MProperty> isa MMethod */
cltype = type_nitc__MMethod.color;
idtype = type_nitc__MMethod.id;
if(cltype >= var_mprop->type->table_size) {
var40 = 0;
} else {
var40 = var_mprop->type->type_table[cltype] == idtype;
}
var_ = var40;
if (var40){
{
{ /* Inline model#MMethod#is_root_init (var_mprop) on <var_mprop:MProperty(MMethod)> */
var43 = var_mprop->attrs[COLOR_nitc__model__MMethod___is_root_init].s; /* _is_root_init on <var_mprop:MProperty(MMethod)> */
var41 = var43;
RET_LABEL42:(void)0;
}
}
var39 = var41;
} else {
var39 = var_;
}
if (var39){
var = 1;
goto RET_LABEL;
} else {
}
if (var_kwredef == NULL) {
var44 = 1; /* is null */
} else {
var44 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_kwredef,((val*)NULL)) on <var_kwredef:nullable Token> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_kwredef,var_other) on <var_kwredef:nullable Token(Token)> */
var49 = var_kwredef == var_other;
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
var44 = var45;
}
if (var44){
if (var_need_redef){
if (unlikely(varonce50==NULL)) {
var51 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = "Redef Error: `";
var55 = core__flat___NativeString___to_s_full(var54, 14l, 14l);
var53 = var55;
varonce52 = var53;
}
((struct instance_core__NativeArray*)var51)->values[0]=var53;
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = "::";
var59 = core__flat___NativeString___to_s_full(var58, 2l, 2l);
var57 = var59;
varonce56 = var57;
}
((struct instance_core__NativeArray*)var51)->values[2]=var57;
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = "` is an inherited property. To redefine it, add the `redef` keyword.";
var63 = core__flat___NativeString___to_s_full(var62, 68l, 68l);
var61 = var63;
varonce60 = var61;
}
((struct instance_core__NativeArray*)var51)->values[4]=var61;
} else {
var51 = varonce50;
varonce50 = NULL;
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var66 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 576);
fatal_exit(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
var67 = ((val*(*)(val* self))(var64->class->vft[COLOR_core__abstract_text__Object__to_s]))(var64); /* to_s on <var64:MClass>*/
}
((struct instance_core__NativeArray*)var51)->values[1]=var67;
{
{ /* Inline model#MProperty#name (var_mprop) on <var_mprop:MProperty> */
var70 = var_mprop->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var_mprop:MProperty> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1951);
fatal_exit(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
((struct instance_core__NativeArray*)var51)->values[3]=var68;
{
var71 = ((val*(*)(val* self))(var51->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var51); /* native_to_s on <var51:NativeArray[String]>*/
}
varonce50 = var51;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, self, var71); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MProperty#intro_mclassdef (var_mprop) on <var_mprop:MProperty> */
var75 = var_mprop->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mprop:MProperty> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1946);
fatal_exit(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var73) on <var73:MClassDef> */
var78 = var73->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var73:MClassDef> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 573);
fatal_exit(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
{
{ /* Inline mmodule#MModule#mgroup (var76) on <var76:MModule> */
var81 = var76->attrs[COLOR_nitc__mmodule__MModule___mgroup].val; /* _mgroup on <var76:MModule> */
var79 = var81;
RET_LABEL80:(void)0;
}
}
if (var79 == NULL) {
var82 = 0; /* is null */
} else {
var82 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var79,((val*)NULL)) on <var79:nullable MGroup> */
var_other85 = ((val*)NULL);
{
var86 = ((short int(*)(val* self, val* p0))(var79->class->vft[COLOR_core__kernel__Object___61d_61d]))(var79, var_other85); /* == on <var79:nullable MGroup(MGroup)>*/
}
var87 = !var86;
var83 = var87;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
var82 = var83;
}
var_88 = var82;
if (var82){
{
{ /* Inline model#MProperty#visibility (var_mprop) on <var_mprop:MProperty> */
var91 = var_mprop->attrs[COLOR_nitc__model__MProperty___visibility].val; /* _visibility on <var_mprop:MProperty> */
if (unlikely(var91 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1967);
fatal_exit(1);
}
var89 = var91;
RET_LABEL90:(void)0;
}
}
var92 = glob_sys;
{
var93 = nitc__model_base___core__Sys___protected_visibility(var92);
}
{
var94 = core___core__Comparable____62d_61d(var89, var93);
}
var72 = var94;
} else {
var72 = var_88;
}
if (var72){
{
{ /* Inline modelbuilder_base#ModelBuilder#model (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var97 = var_modelbuilder->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___model].val; /* _model on <var_modelbuilder:ModelBuilder> */
if (unlikely(var97 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 44);
fatal_exit(1);
}
var95 = var97;
RET_LABEL96:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var_mprop) on <var_mprop:MProperty> */
var100 = var_mprop->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var_mprop:MProperty> */
if (unlikely(var100 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1951);
fatal_exit(1);
}
var98 = var100;
RET_LABEL99:(void)0;
}
}
{
var101 = nitc__model___Model___get_mproperties_by_name(var95, var98);
}
var_others = var101;
if (var_others == NULL) {
var102 = 0; /* is null */
} else {
var102 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_others,((val*)NULL)) on <var_others:nullable Array[MProperty]> */
var_other85 = ((val*)NULL);
{
var105 = ((short int(*)(val* self, val* p0))(var_others->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_others, var_other85); /* == on <var_others:nullable Array[MProperty](Array[MProperty])>*/
}
var106 = !var105;
var103 = var106;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
var102 = var103;
}
if (var102){
var_107 = var_others;
{
var108 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_107);
}
var_109 = var108;
for(;;) {
{
var110 = ((short int(*)(val* self))((((long)var_109&3)?class_info[((long)var_109&3)]:var_109->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_109); /* is_ok on <var_109:IndexedIterator[MProperty]>*/
}
if (var110){
} else {
goto BREAK_label;
}
{
var111 = ((val*(*)(val* self))((((long)var_109&3)?class_info[((long)var_109&3)]:var_109->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_109); /* item on <var_109:IndexedIterator[MProperty]>*/
}
var_other112 = var111;
{
{ /* Inline kernel#Object#!= (var_other112,var_mprop) on <var_other112:MProperty> */
var_other85 = var_mprop;
{
var119 = ((short int(*)(val* self, val* p0))(var_other112->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_other112, var_other85); /* == on <var_other112:MProperty>*/
}
var120 = !var119;
var117 = var120;
goto RET_LABEL118;
RET_LABEL118:(void)0;
}
}
var_121 = var117;
if (var117){
{
{ /* Inline model#MProperty#intro_mclassdef (var_other112) on <var_other112:MProperty> */
var124 = var_other112->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_other112:MProperty> */
if (unlikely(var124 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1946);
fatal_exit(1);
}
var122 = var124;
RET_LABEL123:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var122) on <var122:MClassDef> */
var127 = var122->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var122:MClassDef> */
if (unlikely(var127 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 573);
fatal_exit(1);
}
var125 = var127;
RET_LABEL126:(void)0;
}
}
{
{ /* Inline mmodule#MModule#mgroup (var125) on <var125:MModule> */
var130 = var125->attrs[COLOR_nitc__mmodule__MModule___mgroup].val; /* _mgroup on <var125:MModule> */
var128 = var130;
RET_LABEL129:(void)0;
}
}
if (var128 == NULL) {
var131 = 0; /* is null */
} else {
var131 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var128,((val*)NULL)) on <var128:nullable MGroup> */
var_other85 = ((val*)NULL);
{
var134 = ((short int(*)(val* self, val* p0))(var128->class->vft[COLOR_core__kernel__Object___61d_61d]))(var128, var_other85); /* == on <var128:nullable MGroup(MGroup)>*/
}
var135 = !var134;
var132 = var135;
goto RET_LABEL133;
RET_LABEL133:(void)0;
}
var131 = var132;
}
var116 = var131;
} else {
var116 = var_121;
}
var_136 = var116;
if (var116){
{
{ /* Inline model#MProperty#intro_mclassdef (var_other112) on <var_other112:MProperty> */
var139 = var_other112->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_other112:MProperty> */
if (unlikely(var139 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1946);
fatal_exit(1);
}
var137 = var139;
RET_LABEL138:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var137) on <var137:MClassDef> */
var142 = var137->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var137:MClassDef> */
if (unlikely(var142 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 573);
fatal_exit(1);
}
var140 = var142;
RET_LABEL141:(void)0;
}
}
{
{ /* Inline mmodule#MModule#mgroup (var140) on <var140:MModule> */
var145 = var140->attrs[COLOR_nitc__mmodule__MModule___mgroup].val; /* _mgroup on <var140:MModule> */
var143 = var145;
RET_LABEL144:(void)0;
}
}
if (var143 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 639);
fatal_exit(1);
} else {
{ /* Inline mpackage#MGroup#mpackage (var143) on <var143:nullable MGroup> */
if (unlikely(var143 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 69);
fatal_exit(1);
}
var148 = var143->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val; /* _mpackage on <var143:nullable MGroup> */
if (unlikely(var148 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 69);
fatal_exit(1);
}
var146 = var148;
RET_LABEL147:(void)0;
}
}
{
{ /* Inline model#MProperty#intro_mclassdef (var_mprop) on <var_mprop:MProperty> */
var151 = var_mprop->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mprop:MProperty> */
if (unlikely(var151 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1946);
fatal_exit(1);
}
var149 = var151;
RET_LABEL150:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var149) on <var149:MClassDef> */
var154 = var149->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var149:MClassDef> */
if (unlikely(var154 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 573);
fatal_exit(1);
}
var152 = var154;
RET_LABEL153:(void)0;
}
}
{
{ /* Inline mmodule#MModule#mgroup (var152) on <var152:MModule> */
var157 = var152->attrs[COLOR_nitc__mmodule__MModule___mgroup].val; /* _mgroup on <var152:MModule> */
var155 = var157;
RET_LABEL156:(void)0;
}
}
if (var155 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 639);
fatal_exit(1);
} else {
{ /* Inline mpackage#MGroup#mpackage (var155) on <var155:nullable MGroup> */
if (unlikely(var155 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 69);
fatal_exit(1);
}
var160 = var155->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val; /* _mpackage on <var155:nullable MGroup> */
if (unlikely(var160 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 69);
fatal_exit(1);
}
var158 = var160;
RET_LABEL159:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var146,var158) on <var146:MPackage> */
var_other = var158;
{
{ /* Inline kernel#Object#is_same_instance (var146,var_other) on <var146:MPackage> */
var165 = var146 == var_other;
var163 = var165;
goto RET_LABEL164;
RET_LABEL164:(void)0;
}
}
var161 = var163;
goto RET_LABEL162;
RET_LABEL162:(void)0;
}
}
var115 = var161;
} else {
var115 = var_136;
}
var_166 = var115;
if (var115){
{
{ /* Inline model#MProperty#intro_mclassdef (var_other112) on <var_other112:MProperty> */
var169 = var_other112->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_other112:MProperty> */
if (unlikely(var169 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1946);
fatal_exit(1);
}
var167 = var169;
RET_LABEL168:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var167) on <var167:MClassDef> */
var172 = var167->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var167:MClassDef> */
if (unlikely(var172 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 576);
fatal_exit(1);
}
var170 = var172;
RET_LABEL171:(void)0;
}
}
{
{ /* Inline model#MClass#name (var170) on <var170:MClass> */
var175 = var170->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var170:MClass> */
if (unlikely(var175 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 385);
fatal_exit(1);
}
var173 = var175;
RET_LABEL174:(void)0;
}
}
{
{ /* Inline model#MProperty#intro_mclassdef (var_mprop) on <var_mprop:MProperty> */
var178 = var_mprop->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mprop:MProperty> */
if (unlikely(var178 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1946);
fatal_exit(1);
}
var176 = var178;
RET_LABEL177:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var176) on <var176:MClassDef> */
var181 = var176->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var176:MClassDef> */
if (unlikely(var181 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 576);
fatal_exit(1);
}
var179 = var181;
RET_LABEL180:(void)0;
}
}
{
{ /* Inline model#MClass#name (var179) on <var179:MClass> */
var184 = var179->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var179:MClass> */
if (unlikely(var184 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 385);
fatal_exit(1);
}
var182 = var184;
RET_LABEL183:(void)0;
}
}
{
var185 = ((short int(*)(val* self, val* p0))(var173->class->vft[COLOR_core__kernel__Object___61d_61d]))(var173, var182); /* == on <var173:String>*/
}
var114 = var185;
} else {
var114 = var_166;
}
var_186 = var114;
if (var114){
{
{ /* Inline model#MProperty#visibility (var_other112) on <var_other112:MProperty> */
var189 = var_other112->attrs[COLOR_nitc__model__MProperty___visibility].val; /* _visibility on <var_other112:MProperty> */
if (unlikely(var189 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1967);
fatal_exit(1);
}
var187 = var189;
RET_LABEL188:(void)0;
}
}
var190 = glob_sys;
{
var191 = nitc__model_base___core__Sys___protected_visibility(var190);
}
{
var192 = core___core__Comparable____62d_61d(var187, var191);
}
var113 = var192;
} else {
var113 = var_186;
}
if (var113){
if (likely(varonce193!=NULL)) {
var194 = varonce193;
} else {
var195 = "full-name-conflict";
var196 = core__flat___NativeString___to_s_full(var195, 18l, 18l);
var194 = var196;
varonce193 = var194;
}
if (unlikely(varonce197==NULL)) {
var198 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce199!=NULL)) {
var200 = varonce199;
} else {
var201 = "Warning: A property named `";
var202 = core__flat___NativeString___to_s_full(var201, 27l, 27l);
var200 = var202;
varonce199 = var200;
}
((struct instance_core__NativeArray*)var198)->values[0]=var200;
if (likely(varonce203!=NULL)) {
var204 = varonce203;
} else {
var205 = "` is already defined in module `";
var206 = core__flat___NativeString___to_s_full(var205, 32l, 32l);
var204 = var206;
varonce203 = var204;
}
((struct instance_core__NativeArray*)var198)->values[2]=var204;
if (likely(varonce207!=NULL)) {
var208 = varonce207;
} else {
var209 = "` for the class `";
var210 = core__flat___NativeString___to_s_full(var209, 17l, 17l);
var208 = var210;
varonce207 = var208;
}
((struct instance_core__NativeArray*)var198)->values[4]=var208;
if (likely(varonce211!=NULL)) {
var212 = varonce211;
} else {
var213 = "`.";
var214 = core__flat___NativeString___to_s_full(var213, 2l, 2l);
var212 = var214;
varonce211 = var212;
}
((struct instance_core__NativeArray*)var198)->values[6]=var212;
} else {
var198 = varonce197;
varonce197 = NULL;
}
{
var215 = nitc___nitc__MProperty___nitc__model_base__MEntity__full_name(var_other112);
}
((struct instance_core__NativeArray*)var198)->values[1]=var215;
{
{ /* Inline model#MProperty#intro_mclassdef (var_other112) on <var_other112:MProperty> */
var218 = var_other112->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_other112:MProperty> */
if (unlikely(var218 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1946);
fatal_exit(1);
}
var216 = var218;
RET_LABEL217:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var216) on <var216:MClassDef> */
var221 = var216->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var216:MClassDef> */
if (unlikely(var221 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 573);
fatal_exit(1);
}
var219 = var221;
RET_LABEL220:(void)0;
}
}
{
var222 = ((val*(*)(val* self))(var219->class->vft[COLOR_core__abstract_text__Object__to_s]))(var219); /* to_s on <var219:MModule>*/
}
((struct instance_core__NativeArray*)var198)->values[3]=var222;
{
{ /* Inline model#MProperty#intro_mclassdef (var_other112) on <var_other112:MProperty> */
var225 = var_other112->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_other112:MProperty> */
if (unlikely(var225 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1946);
fatal_exit(1);
}
var223 = var225;
RET_LABEL224:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var223) on <var223:MClassDef> */
var228 = var223->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var223:MClassDef> */
if (unlikely(var228 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 576);
fatal_exit(1);
}
var226 = var228;
RET_LABEL227:(void)0;
}
}
{
{ /* Inline model#MClass#name (var226) on <var226:MClass> */
var231 = var226->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var226:MClass> */
if (unlikely(var231 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 385);
fatal_exit(1);
}
var229 = var231;
RET_LABEL230:(void)0;
}
}
((struct instance_core__NativeArray*)var198)->values[5]=var229;
{
var232 = ((val*(*)(val* self))(var198->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var198); /* native_to_s on <var198:NativeArray[String]>*/
}
varonce197 = var198;
{
nitc___nitc__ModelBuilder___advice(var_modelbuilder, self, var194, var232); /* Direct call modelbuilder_base#ModelBuilder#advice on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label;
} else {
}
{
((void(*)(val* self))((((long)var_109&3)?class_info[((long)var_109&3)]:var_109->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_109); /* next on <var_109:IndexedIterator[MProperty]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_109&3)?class_info[((long)var_109&3)]:var_109->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_109); /* finish on <var_109:IndexedIterator[MProperty]>*/
}
} else {
}
} else {
}
} else {
var233 = !var_need_redef;
if (var233){
if (unlikely(varonce234==NULL)) {
var235 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce236!=NULL)) {
var237 = varonce236;
} else {
var238 = "Error: no property `";
var239 = core__flat___NativeString___to_s_full(var238, 20l, 20l);
var237 = var239;
varonce236 = var237;
}
((struct instance_core__NativeArray*)var235)->values[0]=var237;
if (likely(varonce240!=NULL)) {
var241 = varonce240;
} else {
var242 = "::";
var243 = core__flat___NativeString___to_s_full(var242, 2l, 2l);
var241 = var243;
varonce240 = var241;
}
((struct instance_core__NativeArray*)var235)->values[2]=var241;
if (likely(varonce244!=NULL)) {
var245 = varonce244;
} else {
var246 = "` is inherited. Remove the `redef` keyword to define a new property.";
var247 = core__flat___NativeString___to_s_full(var246, 68l, 68l);
var245 = var247;
varonce244 = var245;
}
((struct instance_core__NativeArray*)var235)->values[4]=var245;
} else {
var235 = varonce234;
varonce234 = NULL;
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var250 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var250 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 576);
fatal_exit(1);
}
var248 = var250;
RET_LABEL249:(void)0;
}
}
{
var251 = ((val*(*)(val* self))(var248->class->vft[COLOR_core__abstract_text__Object__to_s]))(var248); /* to_s on <var248:MClass>*/
}
((struct instance_core__NativeArray*)var235)->values[1]=var251;
{
{ /* Inline model#MProperty#name (var_mprop) on <var_mprop:MProperty> */
var254 = var_mprop->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var_mprop:MProperty> */
if (unlikely(var254 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1951);
fatal_exit(1);
}
var252 = var254;
RET_LABEL253:(void)0;
}
}
((struct instance_core__NativeArray*)var235)->values[3]=var252;
{
var255 = ((val*(*)(val* self))(var235->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var235); /* native_to_s on <var235:NativeArray[String]>*/
}
varonce234 = var235;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, self, var255); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
var = 0;
goto RET_LABEL;
} else {
}
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#APropdef#check_repeated_types for (self: APropdef, ModelBuilder) */
void nitc__modelize_property___APropdef___check_repeated_types(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
var_modelbuilder = p0;
RET_LABEL:;
}
/* method modelize_property#ASignature#is_visited= for (self: ASignature, Bool) */
void nitc__modelize_property___ASignature___is_visited_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__modelize_property__ASignature___is_visited].s = p0; /* _is_visited on <self:ASignature> */
RET_LABEL:;
}
/* method modelize_property#ASignature#param_names for (self: ASignature): Array[String] */
val* nitc__modelize_property___ASignature___param_names(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_nitc__modelize_property__ASignature___param_names].val; /* _param_names on <self:ASignature> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _param_names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 661);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ASignature#param_types for (self: ASignature): Array[MType] */
val* nitc__modelize_property___ASignature___param_types(val* self) {
val* var /* : Array[MType] */;
val* var1 /* : Array[MType] */;
var1 = self->attrs[COLOR_nitc__modelize_property__ASignature___param_types].val; /* _param_types on <self:ASignature> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _param_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 664);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ASignature#vararg_rank for (self: ASignature): Int */
long nitc__modelize_property___ASignature___vararg_rank(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nitc__modelize_property__ASignature___vararg_rank].l; /* _vararg_rank on <self:ASignature> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ASignature#vararg_rank= for (self: ASignature, Int) */
void nitc__modelize_property___ASignature___vararg_rank_61d(val* self, long p0) {
self->attrs[COLOR_nitc__modelize_property__ASignature___vararg_rank].l = p0; /* _vararg_rank on <self:ASignature> */
RET_LABEL:;
}
/* method modelize_property#ASignature#ret_type for (self: ASignature): nullable MType */
val* nitc__modelize_property___ASignature___ret_type(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nitc__modelize_property__ASignature___ret_type].val; /* _ret_type on <self:ASignature> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ASignature#ret_type= for (self: ASignature, nullable MType) */
void nitc__modelize_property___ASignature___ret_type_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__modelize_property__ASignature___ret_type].val = p0; /* _ret_type on <self:ASignature> */
RET_LABEL:;
}
/* method modelize_property#ASignature#visit_signature for (self: ASignature, ModelBuilder, MClassDef): Bool */
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
char* var78 /* : NativeString */;
val* var79 /* : String */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
val* var83 /* : String */;
long var84 /* : Int */;
long var86 /* : Int */;
val* var87 /* : nullable Object */;
val* var88 /* : String */;
long var89 /* : Int */;
long var91 /* : Int */;
long var92 /* : Int */;
short int var94 /* : Bool */;
int cltype95;
int idtype96;
const char* var_class_name97;
long var98 /* : Int */;
val* var100 /* : nullable AType */;
val* var102 /* : nullable AType */;
val* var_ntype103 /* var ntype: nullable AType */;
short int var104 /* : Bool */;
short int var105 /* : Bool */;
short int var107 /* : Bool */;
short int var108 /* : Bool */;
val* var109 /* : nullable MType */;
val* var111 /* : nullable MType */;
val* var113 /* : nullable MType */;
short int var114 /* : Bool */;
short int var115 /* : Bool */;
short int var117 /* : Bool */;
short int var119 /* : Bool */;
var_modelbuilder = p0;
var_mclassdef = p1;
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var3 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 573);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_mmodule = var1;
{
{ /* Inline modelize_property#ASignature#param_names (self) on <self:ASignature> */
var6 = self->attrs[COLOR_nitc__modelize_property__ASignature___param_names].val; /* _param_names on <self:ASignature> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _param_names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 661);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_param_names = var4;
{
{ /* Inline modelize_property#ASignature#param_types (self) on <self:ASignature> */
var9 = self->attrs[COLOR_nitc__modelize_property__ASignature___param_types].val; /* _param_types on <self:ASignature> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _param_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 664);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_param_types = var7;
{
{ /* Inline parser_nodes#ASignature#n_params (self) on <self:ASignature> */
var12 = self->attrs[COLOR_nitc__parser_nodes__ASignature___n_params].val; /* _n_params on <self:ASignature> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1679);
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
{ /* Inline parser_nodes#AParam#n_id (var_np) on <var_np:AParam> */
var19 = var_np->attrs[COLOR_nitc__parser_nodes__AParam___n_id].val; /* _n_id on <var_np:AParam> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1693);
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
core___core__Array___core__abstract_collection__SimpleCollection__add(var_param_names, var20); /* Direct call array#Array#add on <var_param_names:Array[String]>*/
}
{
{ /* Inline parser_nodes#AParam#n_type (var_np) on <var_np:AParam> */
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
{ /* Inline kernel#Object#!= (var_ntype,((val*)NULL)) on <var_ntype:nullable AType> */
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
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other33 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other33) on <var_mtype:nullable MType(MType)> */
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
{ /* Inline array#AbstractArrayRead#length (var_param_names) on <var_param_names:Array[String]> */
var39 = var_param_names->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_param_names:Array[String]> */
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var_param_types) on <var_param_types:Array[MType]> */
var42 = var_param_types->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_param_types:Array[MType]> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var37,var40) on <var37:Int> */
/* Covariant cast for argument 0 (i) <var40:Int> isa OTHER */
/* <var40:Int> isa OTHER */
var45 = 1; /* easy <var40:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
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
{ /* Inline kernel#Int#< (var_i,var_47) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_47:Int> isa OTHER */
/* <var_47:Int> isa OTHER */
var50 = 1; /* easy <var_47:Int> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
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
core___core__Array___core__abstract_collection__SimpleCollection__add(var_param_types, var_mtype); /* Direct call array#Array#add on <var_param_types:Array[MType]>*/
}
{
var56 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var56;
}
BREAK_label55: (void)0;
{
{ /* Inline parser_nodes#AParam#n_dotdotdot (var_np) on <var_np:AParam> */
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
{ /* Inline kernel#Object#!= (var57,((val*)NULL)) on <var57:nullable TDotdotdot> */
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
{ /* Inline modelize_property#ASignature#vararg_rank (self) on <self:ASignature> */
var67 = self->attrs[COLOR_nitc__modelize_property__ASignature___vararg_rank].l; /* _vararg_rank on <self:ASignature> */
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var70 = -1l;
var68 = var70;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var65,var68) on <var65:Int> */
var73 = var65 == var68;
var74 = !var73;
var71 = var74;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
if (var71){
if (unlikely(varonce==NULL)) {
var75 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce76!=NULL)) {
var77 = varonce76;
} else {
var78 = "Error: `";
var79 = core__flat___NativeString___to_s_full(var78, 8l, 8l);
var77 = var79;
varonce76 = var77;
}
((struct instance_core__NativeArray*)var75)->values[0]=var77;
if (likely(varonce80!=NULL)) {
var81 = varonce80;
} else {
var82 = "` is already a vararg";
var83 = core__flat___NativeString___to_s_full(var82, 21l, 21l);
var81 = var83;
varonce80 = var81;
}
((struct instance_core__NativeArray*)var75)->values[2]=var81;
} else {
var75 = varonce;
varonce = NULL;
}
{
{ /* Inline modelize_property#ASignature#vararg_rank (self) on <self:ASignature> */
var86 = self->attrs[COLOR_nitc__modelize_property__ASignature___vararg_rank].l; /* _vararg_rank on <self:ASignature> */
var84 = var86;
RET_LABEL85:(void)0;
}
}
{
var87 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_param_names, var84);
}
((struct instance_core__NativeArray*)var75)->values[1]=var87;
{
var88 = ((val*(*)(val* self))(var75->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var75); /* native_to_s on <var75:NativeArray[String]>*/
}
varonce = var75;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_np, var88); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
var = 0;
goto RET_LABEL;
} else {
{
{ /* Inline array#AbstractArrayRead#length (var_param_names) on <var_param_names:Array[String]> */
var91 = var_param_names->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_param_names:Array[String]> */
var89 = var91;
RET_LABEL90:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var89,1l) on <var89:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var94 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var94)) {
var_class_name97 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name97);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var98 = var89 - 1l;
var92 = var98;
goto RET_LABEL93;
RET_LABEL93:(void)0;
}
}
{
{ /* Inline modelize_property#ASignature#vararg_rank= (self,var92) on <self:ASignature> */
self->attrs[COLOR_nitc__modelize_property__ASignature___vararg_rank].l = var92; /* _vararg_rank on <self:ASignature> */
RET_LABEL99:(void)0;
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
{ /* Inline parser_nodes#ASignature#n_type (self) on <self:ASignature> */
var102 = self->attrs[COLOR_nitc__parser_nodes__ASignature___n_type].val; /* _n_type on <self:ASignature> */
var100 = var102;
RET_LABEL101:(void)0;
}
}
var_ntype103 = var100;
if (var_ntype103 == NULL) {
var104 = 0; /* is null */
} else {
var104 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ntype103,((val*)NULL)) on <var_ntype103:nullable AType> */
var_other = ((val*)NULL);
{
var107 = ((short int(*)(val* self, val* p0))(var_ntype103->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ntype103, var_other); /* == on <var_ntype103:nullable AType(AType)>*/
}
var108 = !var107;
var105 = var108;
goto RET_LABEL106;
RET_LABEL106:(void)0;
}
var104 = var105;
}
if (var104){
{
var109 = nitc___nitc__ModelBuilder___resolve_mtype_unchecked(var_modelbuilder, var_mmodule, var_mclassdef, var_ntype103, 1);
}
{
{ /* Inline modelize_property#ASignature#ret_type= (self,var109) on <self:ASignature> */
self->attrs[COLOR_nitc__modelize_property__ASignature___ret_type].val = var109; /* _ret_type on <self:ASignature> */
RET_LABEL110:(void)0;
}
}
{
{ /* Inline modelize_property#ASignature#ret_type (self) on <self:ASignature> */
var113 = self->attrs[COLOR_nitc__modelize_property__ASignature___ret_type].val; /* _ret_type on <self:ASignature> */
var111 = var113;
RET_LABEL112:(void)0;
}
}
if (var111 == NULL) {
var114 = 1; /* is null */
} else {
var114 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var111,((val*)NULL)) on <var111:nullable MType> */
var_other33 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var111,var_other33) on <var111:nullable MType(MType)> */
var119 = var111 == var_other33;
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
var = 0;
goto RET_LABEL;
} else {
}
} else {
}
{
{ /* Inline modelize_property#ASignature#is_visited= (self,1) on <self:ASignature> */
self->attrs[COLOR_nitc__modelize_property__ASignature___is_visited].s = 1; /* _is_visited on <self:ASignature> */
RET_LABEL120:(void)0;
}
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#ASignature#check_signature for (self: ASignature, ModelBuilder, MClassDef): Bool */
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
{ /* Inline parser_nodes#ASignature#n_params (self) on <self:ASignature> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ASignature___n_params].val; /* _n_params on <self:ASignature> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1679);
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
{ /* Inline parser_nodes#AParam#n_type (var_np) on <var_np:AParam> */
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
{ /* Inline kernel#Object#!= (var_ntype,((val*)NULL)) on <var_ntype:nullable AType> */
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
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var18 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 573);
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
{ /* Inline kernel#Object#== (var19,((val*)NULL)) on <var19:nullable MType> */
var_other23 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var19,var_other23) on <var19:nullable MType(MType)> */
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
{ /* Inline parser_nodes#ASignature#n_type (self) on <self:ASignature> */
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
{ /* Inline kernel#Object#!= (var_ntype30,((val*)NULL)) on <var_ntype30:nullable AType> */
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
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var38 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 573);
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
{ /* Inline kernel#Object#== (var39,((val*)NULL)) on <var39:nullable MType> */
var_other23 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var39,var_other23) on <var39:nullable MType(MType)> */
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
{ /* Inline modelbuilder_base#ANode#is_broken= (self,1) on <self:ASignature> */
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
/* method modelize_property#AParam#mparameter= for (self: AParam, nullable MParameter) */
void nitc__modelize_property___AParam___mparameter_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__modelize_property__AParam___mparameter].val = p0; /* _mparameter on <self:AParam> */
RET_LABEL:;
}
/* method modelize_property#AMethPropdef#is_autoinit for (self: AMethPropdef): Bool */
short int nitc__modelize_property___AMethPropdef___is_autoinit(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__modelize_property__AMethPropdef___is_autoinit].s; /* _is_autoinit on <self:AMethPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AMethPropdef#is_autoinit= for (self: AMethPropdef, Bool) */
void nitc__modelize_property___AMethPropdef___is_autoinit_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__modelize_property__AMethPropdef___is_autoinit].s = p0; /* _is_autoinit on <self:AMethPropdef> */
RET_LABEL:;
}
/* method modelize_property#AMethPropdef#look_like_a_root_init for (self: AMethPropdef, ModelBuilder, MClassDef): Bool */
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
char* var20 /* : NativeString */;
val* var21 /* : String */;
val* var22 /* : nullable AAnnotation */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : nullable ANode */;
val* var30 /* : nullable ANode */;
val* var31 /* : nullable ANode */;
val* var33 /* : nullable ANode */;
short int var34 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_amod /* var amod: AModule */;
val* var35 /* : nullable AModuledecl */;
val* var37 /* : nullable AModuledecl */;
val* var_amoddecl /* var amoddecl: nullable AModuledecl */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
val* var46 /* : String */;
val* var47 /* : nullable AAnnotation */;
val* var_old /* var old: nullable AAnnotation */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
val* var53 /* : nullable ASignature */;
val* var55 /* : nullable ASignature */;
val* var56 /* : ANodes[AParam] */;
val* var58 /* : ANodes[AParam] */;
long var59 /* : Int */;
short int var60 /* : Bool */;
short int var62 /* : Bool */;
int cltype63;
int idtype64;
const char* var_class_name65;
short int var66 /* : Bool */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
val* var70 /* : String */;
val* var72 /* : NativeArray[String] */;
static val* varonce71;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
val* var76 /* : String */;
val* var77 /* : String */;
val* var78 /* : String */;
val* var79 /* : nullable AVisibility */;
val* var81 /* : nullable AVisibility */;
short int var82 /* : Bool */;
int cltype83;
int idtype84;
short int var85 /* : Bool */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
val* var89 /* : String */;
val* var91 /* : NativeArray[String] */;
static val* varonce90;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : NativeString */;
val* var95 /* : String */;
val* var96 /* : String */;
val* var97 /* : String */;
var_modelbuilder = p0;
var_mclassdef = p1;
{
{ /* Inline parser_nodes#AMethPropdef#n_kwinit (self) on <self:AMethPropdef> */
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
{ /* Inline kernel#Object#== (var1,((val*)NULL)) on <var1:nullable TKwinit> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var1,var_other) on <var1:nullable TKwinit(TKwinit)> */
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
{ /* Inline parser_nodes#AMethPropdef#n_methid (self) on <self:AMethPropdef> */
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
{ /* Inline kernel#Object#!= (var10,((val*)NULL)) on <var10:nullable AMethid> */
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
var21 = core__flat___NativeString___to_s_full(var20, 14l, 14l);
var19 = var21;
varonce = var19;
}
{
var22 = nitc__annotation___Prod___get_single_annotation(self, var19, var_modelbuilder);
}
if (var22 == NULL) {
var23 = 0; /* is null */
} else {
var23 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var22,((val*)NULL)) on <var22:nullable AAnnotation> */
var_other16 = ((val*)NULL);
{
var26 = ((short int(*)(val* self, val* p0))(var22->class->vft[COLOR_core__kernel__Object___61d_61d]))(var22, var_other16); /* == on <var22:nullable AAnnotation(AAnnotation)>*/
}
var27 = !var26;
var24 = var27;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
var23 = var24;
}
if (var23){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ANode#parent (self) on <self:AMethPropdef> */
var30 = self->attrs[COLOR_nitc__parser_nodes__ANode___parent].val; /* _parent on <self:AMethPropdef> */
var28 = var30;
RET_LABEL29:(void)0;
}
}
if (var28 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 751);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent (var28) on <var28:nullable ANode> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 46);
fatal_exit(1);
}
var33 = var28->attrs[COLOR_nitc__parser_nodes__ANode___parent].val; /* _parent on <var28:nullable ANode> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
/* <var31:nullable ANode> isa AModule */
cltype = type_nitc__AModule.color;
idtype = type_nitc__AModule.id;
if(var31 == NULL) {
var34 = 0;
} else {
if(cltype >= var31->type->table_size) {
var34 = 0;
} else {
var34 = var31->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var34)) {
var_class_name = var31 == NULL ? "null" : var31->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AModule", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 751);
fatal_exit(1);
}
var_amod = var31;
{
{ /* Inline parser_nodes#AModule#n_moduledecl (var_amod) on <var_amod:AModule> */
var37 = var_amod->attrs[COLOR_nitc__parser_nodes__AModule___n_moduledecl].val; /* _n_moduledecl on <var_amod:AModule> */
var35 = var37;
RET_LABEL36:(void)0;
}
}
var_amoddecl = var35;
if (var_amoddecl == NULL) {
var38 = 0; /* is null */
} else {
var38 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_amoddecl,((val*)NULL)) on <var_amoddecl:nullable AModuledecl> */
var_other16 = ((val*)NULL);
{
var41 = ((short int(*)(val* self, val* p0))(var_amoddecl->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_amoddecl, var_other16); /* == on <var_amoddecl:nullable AModuledecl(AModuledecl)>*/
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
var45 = "old_style_init";
var46 = core__flat___NativeString___to_s_full(var45, 14l, 14l);
var44 = var46;
varonce43 = var44;
}
{
var47 = nitc__annotation___Prod___get_single_annotation(var_amoddecl, var44, var_modelbuilder);
}
var_old = var47;
if (var_old == NULL) {
var48 = 0; /* is null */
} else {
var48 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_old,((val*)NULL)) on <var_old:nullable AAnnotation> */
var_other16 = ((val*)NULL);
{
var51 = ((short int(*)(val* self, val* p0))(var_old->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_old, var_other16); /* == on <var_old:nullable AAnnotation(AAnnotation)>*/
}
var52 = !var51;
var49 = var52;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
var48 = var49;
}
if (var48){
var = 0;
goto RET_LABEL;
} else {
}
} else {
}
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (self) on <self:AMethPropdef> */
var55 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var53 = var55;
RET_LABEL54:(void)0;
}
}
if (var53 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 758);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var53) on <var53:nullable ASignature> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1679);
fatal_exit(1);
}
var58 = var53->attrs[COLOR_nitc__parser_nodes__ASignature___n_params].val; /* _n_params on <var53:nullable ASignature> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1679);
fatal_exit(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
var59 = nitc___nitc__ANodes___core__abstract_collection__Collection__length(var56);
}
{
{ /* Inline kernel#Int#> (var59,0l) on <var59:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var62 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var62)) {
var_class_name65 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name65);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
fatal_exit(1);
}
var66 = var59 > 0l;
var60 = var66;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
if (var60){
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = "old-init";
var70 = core__flat___NativeString___to_s_full(var69, 8l, 8l);
var68 = var70;
varonce67 = var68;
}
if (unlikely(varonce71==NULL)) {
var72 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = "Warning: init with signature in ";
var76 = core__flat___NativeString___to_s_full(var75, 32l, 32l);
var74 = var76;
varonce73 = var74;
}
((struct instance_core__NativeArray*)var72)->values[0]=var74;
} else {
var72 = varonce71;
varonce71 = NULL;
}
{
var77 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:MClassDef>*/
}
((struct instance_core__NativeArray*)var72)->values[1]=var77;
{
var78 = ((val*(*)(val* self))(var72->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var72); /* native_to_s on <var72:NativeArray[String]>*/
}
varonce71 = var72;
{
nitc___nitc__ModelBuilder___advice(var_modelbuilder, self, var68, var78); /* Direct call modelbuilder_base#ModelBuilder#advice on <var_modelbuilder:ModelBuilder>*/
}
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ADefinition#n_visibility (self) on <self:AMethPropdef> */
var81 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AMethPropdef> */
var79 = var81;
RET_LABEL80:(void)0;
}
}
/* <var79:nullable AVisibility> isa APublicVisibility */
cltype83 = type_nitc__APublicVisibility.color;
idtype84 = type_nitc__APublicVisibility.id;
if(var79 == NULL) {
var82 = 0;
} else {
if(cltype83 >= var79->type->table_size) {
var82 = 0;
} else {
var82 = var79->type->type_table[cltype83] == idtype84;
}
}
var85 = !var82;
if (var85){
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = "old-init";
var89 = core__flat___NativeString___to_s_full(var88, 8l, 8l);
var87 = var89;
varonce86 = var87;
}
if (unlikely(varonce90==NULL)) {
var91 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce92!=NULL)) {
var93 = varonce92;
} else {
var94 = "Warning: non-public init in ";
var95 = core__flat___NativeString___to_s_full(var94, 28l, 28l);
var93 = var95;
varonce92 = var93;
}
((struct instance_core__NativeArray*)var91)->values[0]=var93;
} else {
var91 = varonce90;
varonce90 = NULL;
}
{
var96 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:MClassDef>*/
}
((struct instance_core__NativeArray*)var91)->values[1]=var96;
{
var97 = ((val*(*)(val* self))(var91->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var91); /* native_to_s on <var91:NativeArray[String]>*/
}
varonce90 = var91;
{
nitc___nitc__ModelBuilder___advice(var_modelbuilder, self, var87, var97); /* Direct call modelbuilder_base#ModelBuilder#advice on <var_modelbuilder:ModelBuilder>*/
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
