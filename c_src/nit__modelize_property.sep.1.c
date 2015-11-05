#include "nit__modelize_property.sep.0.h"
/* method modelize_property#ToolContext#modelize_property_phase for (self: ToolContext): Phase */
val* nit__modelize_property___ToolContext___modelize_property_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nit__modelize_property__ToolContext___modelize_property_phase].val; /* _modelize_property_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelize_property_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 24);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ModelizePropertyPhase#process_nmodule for (self: ModelizePropertyPhase, AModule) */
void nit__modelize_property___nit__modelize_property__ModelizePropertyPhase___nit__phase__Phase__process_nmodule(val* self, val* p0) {
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
val* var12 /* : ToolContext */;
val* var14 /* : ToolContext */;
val* var15 /* : ModelBuilder */;
var_nmodule = p0;
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var2 = var_nmodule->attrs[COLOR_nit__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1096);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_ = var;
{
var3 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_);
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:Iterator[AClassdef]>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:Iterator[AClassdef]>*/
}
var_nclassdef = var6;
{
{ /* Inline modelize_class#AClassdef#all_defs (var_nclassdef) on <var_nclassdef:AClassdef> */
var9 = var_nclassdef->attrs[COLOR_nit__modelize_class__AClassdef___all_defs].val; /* _all_defs on <var_nclassdef:AClassdef> */
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
var11 = standard___standard__Array___standard__kernel__Object___61d_61d(var7, ((val*)NULL));
var10 = var11;
}
if (var10){
goto BREAK_label;
} else {
}
{
{ /* Inline phase#Phase#toolcontext (self) on <self:ModelizePropertyPhase> */
var14 = self->attrs[COLOR_nit__phase__Phase___toolcontext].val; /* _toolcontext on <self:ModelizePropertyPhase> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 200);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = nit__modelbuilder_base___ToolContext___modelbuilder(var12);
}
{
nit__modelize_property___ModelBuilder___build_properties(var15, var_nclassdef); /* Direct call modelize_property#ModelBuilder#build_properties on <var15:ModelBuilder>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:Iterator[AClassdef]>*/
}
} else {
goto BREAK_label16;
}
}
BREAK_label16: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:Iterator[AClassdef]>*/
}
RET_LABEL:;
}
/* method modelize_property#ModelBuilder#mpropdef2npropdef for (self: ModelBuilder): HashMap[MPropDef, APropdef] */
val* nit__modelize_property___ModelBuilder___mpropdef2npropdef(val* self) {
val* var /* : HashMap[MPropDef, APropdef] */;
val* var1 /* : HashMap[MPropDef, APropdef] */;
var1 = self->attrs[COLOR_nit__modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 40);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ModelBuilder#mpropdef2node for (self: ModelBuilder, MPropDef): nullable ANode */
val* nit__modelize_property___ModelBuilder___mpropdef2node(val* self, val* p0) {
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
var3 = self->attrs[COLOR_nit__modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <self:ModelBuilder> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 40);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = standard___standard__HashMap___standard__abstract_collection__MapRead__get_or_null(var1, var_mpropdef);
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
var8 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable APropdef(APropdef)>*/
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
var12 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
nit__phase___ToolContext___run_phases_on_npropdef(var10, var_res); /* Direct call phase#ToolContext#run_phases_on_npropdef on <var10:ToolContext>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
/* <var_mpropdef:MPropDef> isa MMethodDef */
cltype = type_nit__MMethodDef.color;
idtype = type_nit__MMethodDef.id;
if(cltype >= var_mpropdef->type->table_size) {
var14 = 0;
} else {
var14 = var_mpropdef->type->type_table[cltype] == idtype;
}
var_ = var14;
if (var14){
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MPropDef(MMethodDef)> */
var17 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MPropDef(MMethodDef)> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model#MMethod#is_root_init (var15) on <var15:MProperty(MMethod)> */
var20 = var15->attrs[COLOR_nit__model__MMethod___is_root_init].s; /* _is_root_init on <var15:MProperty(MMethod)> */
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
var23 = self->attrs[COLOR_nit__modelize_class__ModelBuilder___mclassdef2nclassdef].val; /* _mclassdef2nclassdef on <self:ModelBuilder> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 449);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MPropDef(MMethodDef)> */
var26 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MPropDef(MMethodDef)> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
var27 = standard___standard__HashMap___standard__abstract_collection__MapRead__get_or_null(var21, var24);
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
var31 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable AClassdef(AClassdef)>*/
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
val* nit__modelize_property___ModelBuilder___collect_attr_propdef(val* self, val* p0) {
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
var1 = NEW_standard__Array(&type_standard__Array__nit__AAttrPropdef);
{
standard___standard__Array___standard__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[AAttrPropdef]>*/
}
var_res = var1;
{
{ /* Inline modelize_class#ModelBuilder#mclassdef2nclassdef (self) on <self:ModelBuilder> */
var4 = self->attrs[COLOR_nit__modelize_class__ModelBuilder___mclassdef2nclassdef].val; /* _mclassdef2nclassdef on <self:ModelBuilder> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 449);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = standard___standard__HashMap___standard__abstract_collection__MapRead__get_or_null(var2, var_mclassdef);
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
var14 = var_n->attrs[COLOR_nit__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_n:nullable AClassdef(AClassdef)> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1189);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_ = var12;
{
var15 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_);
}
var_16 = var15;
for(;;) {
{
var17 = ((short int(*)(val* self))((((long)var_16&3)?class_info[((long)var_16&3)]:var_16->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_16); /* is_ok on <var_16:Iterator[APropdef]>*/
}
if (var17){
{
var18 = ((val*(*)(val* self))((((long)var_16&3)?class_info[((long)var_16&3)]:var_16->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_16); /* item on <var_16:Iterator[APropdef]>*/
}
var_npropdef = var18;
/* <var_npropdef:APropdef> isa AAttrPropdef */
cltype = type_nit__AAttrPropdef.color;
idtype = type_nit__AAttrPropdef.id;
if(cltype >= var_npropdef->type->table_size) {
var19 = 0;
} else {
var19 = var_npropdef->type->type_table[cltype] == idtype;
}
if (var19){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var22 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
nit__phase___ToolContext___run_phases_on_npropdef(var20, var_npropdef); /* Direct call phase#ToolContext#run_phases_on_npropdef on <var20:ToolContext>*/
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_res, var_npropdef); /* Direct call array#Array#add on <var_res:Array[AAttrPropdef]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_16&3)?class_info[((long)var_16&3)]:var_16->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_16); /* next on <var_16:Iterator[APropdef]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_16&3)?class_info[((long)var_16&3)]:var_16->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_16); /* finish on <var_16:Iterator[APropdef]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#ModelBuilder#build_properties for (self: ModelBuilder, AClassdef) */
void nit__modelize_property___ModelBuilder___build_properties(val* self, val* p0) {
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
val* var35 /* : HashMap[MClassDef, AClassdef] */;
val* var37 /* : HashMap[MClassDef, AClassdef] */;
val* var38 /* : nullable Object */;
val* var40 /* : nullable Array[AClassdef] */;
val* var42 /* : nullable Array[AClassdef] */;
val* var_43 /* var : nullable Array[AClassdef] */;
val* var44 /* : ArrayIterator[nullable Object] */;
val* var_45 /* var : ArrayIterator[AClassdef] */;
short int var46 /* : Bool */;
val* var47 /* : nullable Object */;
val* var_nclassdef2 /* var nclassdef2: AClassdef */;
val* var48 /* : ANodes[APropdef] */;
val* var50 /* : ANodes[APropdef] */;
val* var_51 /* var : ANodes[APropdef] */;
val* var52 /* : Iterator[ANode] */;
val* var_53 /* var : Iterator[APropdef] */;
short int var54 /* : Bool */;
val* var55 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
val* var57 /* : ANodes[APropdef] */;
val* var59 /* : ANodes[APropdef] */;
val* var_60 /* var : ANodes[APropdef] */;
val* var61 /* : Iterator[ANode] */;
val* var_62 /* var : Iterator[APropdef] */;
short int var63 /* : Bool */;
val* var64 /* : nullable Object */;
val* var_npropdef65 /* var npropdef: APropdef */;
val* var67 /* : ANodes[APropdef] */;
val* var69 /* : ANodes[APropdef] */;
val* var_70 /* var : ANodes[APropdef] */;
val* var71 /* : Iterator[ANode] */;
val* var_72 /* var : Iterator[APropdef] */;
short int var73 /* : Bool */;
val* var74 /* : nullable Object */;
val* var_npropdef75 /* var npropdef: APropdef */;
short int var76 /* : Bool */;
int cltype;
int idtype;
short int var77 /* : Bool */;
val* var79 /* : nullable MPropDef */;
val* var81 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MVirtualTypeDef */;
short int var82 /* : Bool */;
short int var83 /* : Bool */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
val* var88 /* : nullable MType */;
val* var90 /* : nullable MType */;
short int var91 /* : Bool */;
short int var92 /* : Bool */;
short int var94 /* : Bool */;
short int var96 /* : Bool */;
val* var97 /* : MProperty */;
val* var99 /* : MProperty */;
val* var100 /* : MClassType */;
val* var102 /* : MClassType */;
val* var103 /* : MModule */;
val* var105 /* : MModule */;
short int var106 /* : Bool */;
short int var107 /* : Bool */;
val* var108 /* : MModule */;
val* var110 /* : MModule */;
val* var111 /* : Model */;
val* var113 /* : Model */;
val* var114 /* : MNullType */;
val* var116 /* : MNullType */;
val* var119 /* : ANodes[APropdef] */;
val* var121 /* : ANodes[APropdef] */;
val* var_122 /* var : ANodes[APropdef] */;
val* var123 /* : Iterator[ANode] */;
val* var_124 /* var : Iterator[APropdef] */;
short int var125 /* : Bool */;
val* var126 /* : nullable Object */;
val* var_npropdef127 /* var npropdef: APropdef */;
short int var128 /* : Bool */;
int cltype129;
int idtype130;
short int var131 /* : Bool */;
val* var134 /* : ANodes[APropdef] */;
val* var136 /* : ANodes[APropdef] */;
val* var_137 /* var : ANodes[APropdef] */;
val* var138 /* : Iterator[ANode] */;
val* var_139 /* var : Iterator[APropdef] */;
short int var140 /* : Bool */;
val* var141 /* : nullable Object */;
val* var_npropdef142 /* var npropdef: APropdef */;
short int var143 /* : Bool */;
int cltype144;
int idtype145;
var_nclassdef = p0;
{
{ /* Inline modelize_property#AClassdef#build_properties_is_done (var_nclassdef) on <var_nclassdef:AClassdef> */
var2 = var_nclassdef->attrs[COLOR_nit__modelize_property__AClassdef___build_properties_is_done].s; /* _build_properties_is_done on <var_nclassdef:AClassdef> */
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
var_nclassdef->attrs[COLOR_nit__modelize_property__AClassdef___build_properties_is_done].s = 1; /* _build_properties_is_done on <var_nclassdef:AClassdef> */
RET_LABEL3:(void)0;
}
}
{
{ /* Inline modelize_class#AClassdef#mclassdef (var_nclassdef) on <var_nclassdef:AClassdef> */
var6 = var_nclassdef->attrs[COLOR_nit__modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_nclassdef:AClassdef> */
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
var15 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___in_hierarchy].val; /* _in_hierarchy on <var_mclassdef:nullable MClassDef(MClassDef)> */
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
var24 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___in_hierarchy].val; /* _in_hierarchy on <var_mclassdef:nullable MClassDef(MClassDef)> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
if (var22 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 92);
fatal_exit(1);
} else {
var25 = poset___poset__POSetElement___direct_greaters(var22);
}
var_ = var25;
{
var26 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[MClassDef]>*/
}
var_27 = var26;
for(;;) {
{
var28 = ((short int(*)(val* self))((((long)var_27&3)?class_info[((long)var_27&3)]:var_27->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_27); /* is_ok on <var_27:Iterator[MClassDef]>*/
}
if (var28){
{
var29 = ((val*(*)(val* self))((((long)var_27&3)?class_info[((long)var_27&3)]:var_27->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_27); /* item on <var_27:Iterator[MClassDef]>*/
}
var_superclassdef = var29;
{
{ /* Inline modelize_class#ModelBuilder#mclassdef2nclassdef (self) on <self:ModelBuilder> */
var32 = self->attrs[COLOR_nit__modelize_class__ModelBuilder___mclassdef2nclassdef].val; /* _mclassdef2nclassdef on <self:ModelBuilder> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 449);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
var33 = standard___standard__HashMap___standard__abstract_collection__MapRead__has_key(var30, var_superclassdef);
}
var34 = !var33;
if (var34){
goto BREAK_label;
} else {
}
{
{ /* Inline modelize_class#ModelBuilder#mclassdef2nclassdef (self) on <self:ModelBuilder> */
var37 = self->attrs[COLOR_nit__modelize_class__ModelBuilder___mclassdef2nclassdef].val; /* _mclassdef2nclassdef on <self:ModelBuilder> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 449);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
var38 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var35, var_superclassdef);
}
{
nit__modelize_property___ModelBuilder___build_properties(self, var38); /* Direct call modelize_property#ModelBuilder#build_properties on <self:ModelBuilder>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_27&3)?class_info[((long)var_27&3)]:var_27->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_27); /* next on <var_27:Iterator[MClassDef]>*/
}
} else {
goto BREAK_label39;
}
}
BREAK_label39: (void)0;
{
((void(*)(val* self))((((long)var_27&3)?class_info[((long)var_27&3)]:var_27->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_27); /* finish on <var_27:Iterator[MClassDef]>*/
}
{
nit__modelize_property___MClassDef___build_self_type(var_mclassdef, self, var_nclassdef); /* Direct call modelize_property#MClassDef#build_self_type on <var_mclassdef:nullable MClassDef(MClassDef)>*/
}
{
{ /* Inline modelize_class#AClassdef#all_defs (var_nclassdef) on <var_nclassdef:AClassdef> */
var42 = var_nclassdef->attrs[COLOR_nit__modelize_class__AClassdef___all_defs].val; /* _all_defs on <var_nclassdef:AClassdef> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
var_43 = var40;
if (var_43 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 98);
fatal_exit(1);
} else {
var44 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_43);
}
var_45 = var44;
for(;;) {
{
var46 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_45);
}
if (var46){
{
var47 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_45);
}
var_nclassdef2 = var47;
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_nclassdef2) on <var_nclassdef2:AClassdef> */
var50 = var_nclassdef2->attrs[COLOR_nit__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef2:AClassdef> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1189);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
var_51 = var48;
{
var52 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_51);
}
var_53 = var52;
for(;;) {
{
var54 = ((short int(*)(val* self))((((long)var_53&3)?class_info[((long)var_53&3)]:var_53->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_53); /* is_ok on <var_53:Iterator[APropdef]>*/
}
if (var54){
{
var55 = ((val*(*)(val* self))((((long)var_53&3)?class_info[((long)var_53&3)]:var_53->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_53); /* item on <var_53:Iterator[APropdef]>*/
}
var_npropdef = var55;
{
((void(*)(val* self, val* p0, val* p1))(var_npropdef->class->vft[COLOR_nit__modelize_property__APropdef__build_property]))(var_npropdef, self, var_mclassdef); /* build_property on <var_npropdef:APropdef>*/
}
{
((void(*)(val* self))((((long)var_53&3)?class_info[((long)var_53&3)]:var_53->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_53); /* next on <var_53:Iterator[APropdef]>*/
}
} else {
goto BREAK_label56;
}
}
BREAK_label56: (void)0;
{
((void(*)(val* self))((((long)var_53&3)?class_info[((long)var_53&3)]:var_53->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_53); /* finish on <var_53:Iterator[APropdef]>*/
}
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_nclassdef2) on <var_nclassdef2:AClassdef> */
var59 = var_nclassdef2->attrs[COLOR_nit__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef2:AClassdef> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1189);
fatal_exit(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
var_60 = var57;
{
var61 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_60);
}
var_62 = var61;
for(;;) {
{
var63 = ((short int(*)(val* self))((((long)var_62&3)?class_info[((long)var_62&3)]:var_62->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_62); /* is_ok on <var_62:Iterator[APropdef]>*/
}
if (var63){
{
var64 = ((val*(*)(val* self))((((long)var_62&3)?class_info[((long)var_62&3)]:var_62->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_62); /* item on <var_62:Iterator[APropdef]>*/
}
var_npropdef65 = var64;
{
((void(*)(val* self, val* p0))(var_npropdef65->class->vft[COLOR_nit__modelize_property__APropdef__build_signature]))(var_npropdef65, self); /* build_signature on <var_npropdef65:APropdef>*/
}
{
((void(*)(val* self))((((long)var_62&3)?class_info[((long)var_62&3)]:var_62->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_62); /* next on <var_62:Iterator[APropdef]>*/
}
} else {
goto BREAK_label66;
}
}
BREAK_label66: (void)0;
{
((void(*)(val* self))((((long)var_62&3)?class_info[((long)var_62&3)]:var_62->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_62); /* finish on <var_62:Iterator[APropdef]>*/
}
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_nclassdef2) on <var_nclassdef2:AClassdef> */
var69 = var_nclassdef2->attrs[COLOR_nit__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef2:AClassdef> */
if (unlikely(var69 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1189);
fatal_exit(1);
}
var67 = var69;
RET_LABEL68:(void)0;
}
}
var_70 = var67;
{
var71 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_70);
}
var_72 = var71;
for(;;) {
{
var73 = ((short int(*)(val* self))((((long)var_72&3)?class_info[((long)var_72&3)]:var_72->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_72); /* is_ok on <var_72:Iterator[APropdef]>*/
}
if (var73){
{
var74 = ((val*(*)(val* self))((((long)var_72&3)?class_info[((long)var_72&3)]:var_72->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_72); /* item on <var_72:Iterator[APropdef]>*/
}
var_npropdef75 = var74;
/* <var_npropdef75:APropdef> isa ATypePropdef */
cltype = type_nit__ATypePropdef.color;
idtype = type_nit__ATypePropdef.id;
if(cltype >= var_npropdef75->type->table_size) {
var76 = 0;
} else {
var76 = var_npropdef75->type->type_table[cltype] == idtype;
}
var77 = !var76;
if (var77){
goto BREAK_label78;
} else {
}
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef75) on <var_npropdef75:APropdef(ATypePropdef)> */
var81 = var_npropdef75->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef75:APropdef(ATypePropdef)> */
var79 = var81;
RET_LABEL80:(void)0;
}
}
var_mpropdef = var79;
if (var_mpropdef == NULL) {
var82 = 1; /* is null */
} else {
var82 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MVirtualTypeDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var87 = var_mpropdef == var_other;
var85 = var87;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
var83 = var85;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
var82 = var83;
}
if (var82){
goto BREAK_label78;
} else {
}
{
{ /* Inline model#MVirtualTypeDef#bound (var_mpropdef) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var90 = var_mpropdef->attrs[COLOR_nit__model__MVirtualTypeDef___bound].val; /* _bound on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var88 = var90;
RET_LABEL89:(void)0;
}
}
if (var88 == NULL) {
var91 = 1; /* is null */
} else {
var91 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var88,((val*)NULL)) on <var88:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var88,var_other) on <var88:nullable MType(MType)> */
var96 = var88 == var_other;
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
if (var91){
goto BREAK_label78;
} else {
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var99 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
if (unlikely(var99 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var97 = var99;
RET_LABEL98:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var102 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:nullable MClassDef(MClassDef)> */
if (unlikely(var102 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var100 = var102;
RET_LABEL101:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var105 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:nullable MClassDef(MClassDef)> */
if (unlikely(var105 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var103 = var105;
RET_LABEL104:(void)0;
}
}
{
var106 = nit__modelize_property___ModelBuilder___check_virtual_types_circularity(self, var_npropdef75, var97, var100, var103);
}
var107 = !var106;
if (var107){
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var110 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:nullable MClassDef(MClassDef)> */
if (unlikely(var110 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var108 = var110;
RET_LABEL109:(void)0;
}
}
{
{ /* Inline mmodule#MModule#model (var108) on <var108:MModule> */
var113 = var108->attrs[COLOR_nit__mmodule__MModule___model].val; /* _model on <var108:MModule> */
if (unlikely(var113 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 73);
fatal_exit(1);
}
var111 = var113;
RET_LABEL112:(void)0;
}
}
{
{ /* Inline model#Model#null_type (var111) on <var111:Model> */
var116 = var111->attrs[COLOR_nit__model__Model___null_type].val; /* _null_type on <var111:Model> */
if (unlikely(var116 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _null_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 94);
fatal_exit(1);
}
var114 = var116;
RET_LABEL115:(void)0;
}
}
{
{ /* Inline model#MVirtualTypeDef#bound= (var_mpropdef,var114) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var_mpropdef->attrs[COLOR_nit__model__MVirtualTypeDef___bound].val = var114; /* _bound on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
RET_LABEL117:(void)0;
}
}
} else {
}
BREAK_label78: (void)0;
{
((void(*)(val* self))((((long)var_72&3)?class_info[((long)var_72&3)]:var_72->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_72); /* next on <var_72:Iterator[APropdef]>*/
}
} else {
goto BREAK_label118;
}
}
BREAK_label118: (void)0;
{
((void(*)(val* self))((((long)var_72&3)?class_info[((long)var_72&3)]:var_72->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_72); /* finish on <var_72:Iterator[APropdef]>*/
}
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_nclassdef2) on <var_nclassdef2:AClassdef> */
var121 = var_nclassdef2->attrs[COLOR_nit__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef2:AClassdef> */
if (unlikely(var121 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1189);
fatal_exit(1);
}
var119 = var121;
RET_LABEL120:(void)0;
}
}
var_122 = var119;
{
var123 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_122);
}
var_124 = var123;
for(;;) {
{
var125 = ((short int(*)(val* self))((((long)var_124&3)?class_info[((long)var_124&3)]:var_124->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_124); /* is_ok on <var_124:Iterator[APropdef]>*/
}
if (var125){
{
var126 = ((val*(*)(val* self))((((long)var_124&3)?class_info[((long)var_124&3)]:var_124->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_124); /* item on <var_124:Iterator[APropdef]>*/
}
var_npropdef127 = var126;
/* <var_npropdef127:APropdef> isa ATypePropdef */
cltype129 = type_nit__ATypePropdef.color;
idtype130 = type_nit__ATypePropdef.id;
if(cltype129 >= var_npropdef127->type->table_size) {
var128 = 0;
} else {
var128 = var_npropdef127->type->type_table[cltype129] == idtype130;
}
var131 = !var128;
if (var131){
goto BREAK_label132;
} else {
}
{
nit__modelize_property___ATypePropdef___APropdef__check_signature(var_npropdef127, self); /* Direct call modelize_property#ATypePropdef#check_signature on <var_npropdef127:APropdef(ATypePropdef)>*/
}
BREAK_label132: (void)0;
{
((void(*)(val* self))((((long)var_124&3)?class_info[((long)var_124&3)]:var_124->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_124); /* next on <var_124:Iterator[APropdef]>*/
}
} else {
goto BREAK_label133;
}
}
BREAK_label133: (void)0;
{
((void(*)(val* self))((((long)var_124&3)?class_info[((long)var_124&3)]:var_124->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_124); /* finish on <var_124:Iterator[APropdef]>*/
}
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_nclassdef2) on <var_nclassdef2:AClassdef> */
var136 = var_nclassdef2->attrs[COLOR_nit__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef2:AClassdef> */
if (unlikely(var136 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1189);
fatal_exit(1);
}
var134 = var136;
RET_LABEL135:(void)0;
}
}
var_137 = var134;
{
var138 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_137);
}
var_139 = var138;
for(;;) {
{
var140 = ((short int(*)(val* self))((((long)var_139&3)?class_info[((long)var_139&3)]:var_139->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_139); /* is_ok on <var_139:Iterator[APropdef]>*/
}
if (var140){
{
var141 = ((val*(*)(val* self))((((long)var_139&3)?class_info[((long)var_139&3)]:var_139->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_139); /* item on <var_139:Iterator[APropdef]>*/
}
var_npropdef142 = var141;
/* <var_npropdef142:APropdef> isa ATypePropdef */
cltype144 = type_nit__ATypePropdef.color;
idtype145 = type_nit__ATypePropdef.id;
if(cltype144 >= var_npropdef142->type->table_size) {
var143 = 0;
} else {
var143 = var_npropdef142->type->type_table[cltype144] == idtype145;
}
if (var143){
goto BREAK_label146;
} else {
}
{
((void(*)(val* self, val* p0))(var_npropdef142->class->vft[COLOR_nit__modelize_property__APropdef__check_signature]))(var_npropdef142, self); /* check_signature on <var_npropdef142:APropdef>*/
}
BREAK_label146: (void)0;
{
((void(*)(val* self))((((long)var_139&3)?class_info[((long)var_139&3)]:var_139->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_139); /* next on <var_139:Iterator[APropdef]>*/
}
} else {
goto BREAK_label147;
}
}
BREAK_label147: (void)0;
{
((void(*)(val* self))((((long)var_139&3)?class_info[((long)var_139&3)]:var_139->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_139); /* finish on <var_139:Iterator[APropdef]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_45); /* Direct call array#ArrayIterator#next on <var_45:ArrayIterator[AClassdef]>*/
}
} else {
goto BREAK_label148;
}
}
BREAK_label148: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_45); /* Direct call array#ArrayIterator#finish on <var_45:ArrayIterator[AClassdef]>*/
}
{
nit__modelize_property___ModelBuilder___process_default_constructors(self, var_nclassdef); /* Direct call modelize_property#ModelBuilder#process_default_constructors on <self:ModelBuilder>*/
}
RET_LABEL:;
}
/* method modelize_property#ModelBuilder#the_root_init_mmethod for (self: ModelBuilder): nullable MMethod */
val* nit__modelize_property___ModelBuilder___the_root_init_mmethod(val* self) {
val* var /* : nullable MMethod */;
val* var1 /* : nullable MMethod */;
var1 = self->attrs[COLOR_nit__modelize_property__ModelBuilder___the_root_init_mmethod].val; /* _the_root_init_mmethod on <self:ModelBuilder> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ModelBuilder#the_root_init_mmethod= for (self: ModelBuilder, nullable MMethod) */
void nit__modelize_property___ModelBuilder___the_root_init_mmethod_61d(val* self, val* p0) {
self->attrs[COLOR_nit__modelize_property__ModelBuilder___the_root_init_mmethod].val = p0; /* _the_root_init_mmethod on <self:ModelBuilder> */
RET_LABEL:;
}
/* method modelize_property#ModelBuilder#process_default_constructors for (self: ModelBuilder, AClassdef) */
void nit__modelize_property___ModelBuilder___process_default_constructors(val* self, val* p0) {
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
val* var14 /* : FlatString */;
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
val* var29 /* : FlatString */;
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
val* var55 /* : FlatString */;
val* var56 /* : String */;
val* var57 /* : String */;
val* var58 /* : String */;
val* var59 /* : String */;
val* var_defined_init /* var defined_init: nullable MMethodDef */;
val* var61 /* : Array[MPropDef] */;
val* var63 /* : Array[MPropDef] */;
val* var_64 /* var : Array[MPropDef] */;
val* var65 /* : ArrayIterator[nullable Object] */;
val* var_66 /* var : ArrayIterator[MPropDef] */;
short int var67 /* : Bool */;
val* var68 /* : nullable Object */;
val* var_mpropdef69 /* var mpropdef: MPropDef */;
short int var70 /* : Bool */;
int cltype;
int idtype;
short int var71 /* : Bool */;
val* var72 /* : MProperty */;
val* var74 /* : MProperty */;
short int var75 /* : Bool */;
short int var77 /* : Bool */;
short int var78 /* : Bool */;
val* var79 /* : MProperty */;
val* var81 /* : MProperty */;
short int var82 /* : Bool */;
short int var84 /* : Bool */;
short int var85 /* : Bool */;
short int var86 /* : Bool */;
short int var88 /* : Bool */;
short int var90 /* : Bool */;
val* var91 /* : MProperty */;
val* var93 /* : MProperty */;
val* var94 /* : String */;
val* var96 /* : String */;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : NativeString */;
val* var100 /* : FlatString */;
short int var101 /* : Bool */;
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
val* var117 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
short int var118 /* : Bool */;
int cltype119;
int idtype120;
short int var121 /* : Bool */;
short int var123 /* : Bool */;
short int var124 /* : Bool */;
val* var126 /* : nullable MPropDef */;
val* var128 /* : nullable MPropDef */;
short int var129 /* : Bool */;
short int var130 /* : Bool */;
short int var132 /* : Bool */;
short int var134 /* : Bool */;
val* var135 /* : nullable MPropDef */;
val* var137 /* : nullable MPropDef */;
val* var138 /* : nullable MSignature */;
val* var140 /* : nullable MSignature */;
val* var_sig /* var sig: nullable MSignature */;
short int var141 /* : Bool */;
short int var142 /* : Bool */;
short int var144 /* : Bool */;
short int var146 /* : Bool */;
val* var147 /* : Array[MParameter] */;
val* var149 /* : Array[MParameter] */;
val* var_150 /* var : Array[MParameter] */;
val* var151 /* : ArrayIterator[nullable Object] */;
val* var_152 /* var : ArrayIterator[MParameter] */;
short int var153 /* : Bool */;
val* var154 /* : nullable Object */;
val* var_param /* var param: MParameter */;
val* var155 /* : MType */;
val* var157 /* : MType */;
val* var_ret_type /* var ret_type: MType */;
val* var158 /* : MParameter */;
val* var159 /* : String */;
val* var161 /* : String */;
short int var162 /* : Bool */;
int cltype163;
int idtype164;
val* var_mparameter /* var mparameter: MParameter */;
val* var166 /* : nullable MPropDef */;
val* var168 /* : nullable MPropDef */;
val* var169 /* : MProperty */;
val* var171 /* : MProperty */;
val* var172 /* : nullable MPropDef */;
val* var174 /* : nullable MPropDef */;
val* var175 /* : MProperty */;
val* var177 /* : MProperty */;
short int var179 /* : Bool */;
int cltype180;
int idtype181;
val* var182 /* : nullable MMethodDef */;
val* var184 /* : nullable MMethodDef */;
val* var_mreadpropdef /* var mreadpropdef: nullable MMethodDef */;
short int var185 /* : Bool */;
short int var186 /* : Bool */;
short int var187 /* : Bool */;
short int var189 /* : Bool */;
short int var191 /* : Bool */;
short int var_192 /* var : Bool */;
val* var193 /* : nullable MSignature */;
val* var195 /* : nullable MSignature */;
short int var196 /* : Bool */;
short int var197 /* : Bool */;
short int var199 /* : Bool */;
short int var201 /* : Bool */;
short int var202 /* : Bool */;
short int var204 /* : Bool */;
static val* varonce205;
val* var206 /* : String */;
char* var207 /* : NativeString */;
val* var208 /* : FlatString */;
val* var209 /* : nullable AAnnotation */;
val* var_atlateinit /* var atlateinit: nullable AAnnotation */;
short int var210 /* : Bool */;
short int var211 /* : Bool */;
val* var_other213 /* var other: nullable Object */;
short int var214 /* : Bool */;
short int var215 /* : Bool */;
val* var216 /* : MProperty */;
val* var218 /* : MProperty */;
val* var219 /* : MProperty */;
val* var221 /* : MProperty */;
short int var223 /* : Bool */;
short int var225 /* : Bool */;
val* var226 /* : MProperty */;
val* var228 /* : MProperty */;
val* var229 /* : String */;
val* var231 /* : String */;
val* var_paramname /* var paramname: String */;
val* var232 /* : nullable MSignature */;
val* var234 /* : nullable MSignature */;
val* var235 /* : nullable MType */;
val* var237 /* : nullable MType */;
val* var_ret_type238 /* var ret_type: nullable MType */;
short int var239 /* : Bool */;
short int var240 /* : Bool */;
short int var242 /* : Bool */;
short int var244 /* : Bool */;
val* var245 /* : MParameter */;
short int var246 /* : Bool */;
int cltype247;
int idtype248;
val* var_mparameter249 /* var mparameter: MParameter */;
val* var250 /* : nullable MMethodDef */;
val* var252 /* : nullable MMethodDef */;
val* var_msetter /* var msetter: nullable MMethodDef */;
short int var253 /* : Bool */;
short int var254 /* : Bool */;
short int var256 /* : Bool */;
short int var258 /* : Bool */;
val* var259 /* : nullable MPropDef */;
val* var261 /* : nullable MPropDef */;
val* var262 /* : MProperty */;
val* var264 /* : MProperty */;
val* var265 /* : nullable MPropDef */;
val* var267 /* : nullable MPropDef */;
val* var268 /* : MProperty */;
val* var270 /* : MProperty */;
val* var272 /* : MProperty */;
val* var274 /* : MProperty */;
val* var275 /* : MProperty */;
val* var277 /* : MProperty */;
val* var280 /* : nullable MMethod */;
val* var282 /* : nullable MMethod */;
short int var283 /* : Bool */;
short int var284 /* : Bool */;
short int var286 /* : Bool */;
short int var288 /* : Bool */;
val* var289 /* : nullable MMethod */;
val* var291 /* : nullable MMethod */;
val* var292 /* : MModule */;
val* var294 /* : MModule */;
val* var295 /* : MClassType */;
val* var297 /* : MClassType */;
val* var298 /* : Array[MPropDef] */;
val* var_spropdefs /* var spropdefs: Array[MMethodDef] */;
short int var299 /* : Bool */;
val* var300 /* : ToolContext */;
val* var302 /* : ToolContext */;
val* var303 /* : Location */;
val* var305 /* : Location */;
val* var307 /* : NativeArray[String] */;
static val* varonce306;
static val* varonce308;
val* var309 /* : String */;
char* var310 /* : NativeString */;
val* var311 /* : FlatString */;
static val* varonce312;
val* var313 /* : String */;
char* var314 /* : NativeString */;
val* var315 /* : FlatString */;
static val* varonce316;
val* var317 /* : String */;
char* var318 /* : NativeString */;
val* var319 /* : FlatString */;
val* var320 /* : String */;
val* var321 /* : nullable MMethod */;
val* var323 /* : nullable MMethod */;
val* var324 /* : MClassDef */;
val* var326 /* : MClassDef */;
val* var327 /* : String */;
val* var328 /* : String */;
val* var329 /* : Message */;
static val* varonce330;
val* var331 /* : String */;
char* var332 /* : NativeString */;
val* var333 /* : FlatString */;
val* var334 /* : nullable AAnnotation */;
val* var_autoinit /* var autoinit: nullable AAnnotation */;
static val* varonce335;
val* var336 /* : String */;
char* var337 /* : NativeString */;
val* var338 /* : FlatString */;
val* var339 /* : nullable AAnnotation */;
val* var_noautoinit /* var noautoinit: nullable AAnnotation */;
short int var340 /* : Bool */;
short int var341 /* : Bool */;
short int var343 /* : Bool */;
short int var344 /* : Bool */;
short int var345 /* : Bool */;
short int var346 /* : Bool */;
short int var348 /* : Bool */;
short int var349 /* : Bool */;
static val* varonce350;
val* var351 /* : String */;
char* var352 /* : NativeString */;
val* var353 /* : FlatString */;
val* var354 /* : ANodes[AExpr] */;
val* var356 /* : ANodes[AExpr] */;
short int var357 /* : Bool */;
static val* varonce358;
val* var359 /* : String */;
char* var360 /* : NativeString */;
val* var361 /* : FlatString */;
val* var362 /* : ANodes[AExpr] */;
val* var364 /* : ANodes[AExpr] */;
val* var_365 /* var : ANodes[AExpr] */;
val* var366 /* : Iterator[ANode] */;
val* var_367 /* var : Iterator[AExpr] */;
short int var368 /* : Bool */;
val* var369 /* : nullable Object */;
val* var_narg /* var narg: AExpr */;
val* var370 /* : nullable String */;
val* var_id /* var id: nullable String */;
short int var371 /* : Bool */;
short int var372 /* : Bool */;
static val* varonce373;
val* var374 /* : String */;
char* var375 /* : NativeString */;
val* var376 /* : FlatString */;
static val* varonce377;
val* var378 /* : String */;
char* var379 /* : NativeString */;
val* var380 /* : FlatString */;
val* var381 /* : String */;
val* var382 /* : nullable MProperty */;
val* var_p /* var p: nullable MProperty */;
short int var383 /* : Bool */;
short int var384 /* : Bool */;
short int var386 /* : Bool */;
short int var388 /* : Bool */;
val* var389 /* : nullable MProperty */;
short int var390 /* : Bool */;
short int var391 /* : Bool */;
short int var393 /* : Bool */;
short int var395 /* : Bool */;
val* var397 /* : NativeArray[String] */;
static val* varonce396;
static val* varonce398;
val* var399 /* : String */;
char* var400 /* : NativeString */;
val* var401 /* : FlatString */;
static val* varonce402;
val* var403 /* : String */;
char* var404 /* : NativeString */;
val* var405 /* : FlatString */;
val* var406 /* : String */;
short int var407 /* : Bool */;
short int var409 /* : Bool */;
short int var410 /* : Bool */;
val* var412 /* : NativeArray[String] */;
static val* varonce411;
static val* varonce413;
val* var414 /* : String */;
char* var415 /* : NativeString */;
val* var416 /* : FlatString */;
static val* varonce417;
val* var418 /* : String */;
char* var419 /* : NativeString */;
val* var420 /* : FlatString */;
val* var421 /* : String */;
val* var422 /* : String */;
val* var423 /* : MPropDef */;
val* var425 /* : MPropDef */;
val* var_pd /* var pd: MPropDef */;
short int var426 /* : Bool */;
int cltype427;
int idtype428;
val* var429 /* : nullable MSignature */;
val* var431 /* : nullable MSignature */;
val* var432 /* : MClass */;
val* var434 /* : MClass */;
val* var435 /* : MClassType */;
val* var437 /* : MClassType */;
val* var438 /* : MClassType */;
val* var440 /* : MClassType */;
val* var441 /* : MModule */;
val* var443 /* : MModule */;
val* var444 /* : MSignature */;
val* var_sig445 /* var sig: MSignature */;
val* var446 /* : Array[MParameter] */;
val* var448 /* : Array[MParameter] */;
val* var_449 /* var : Array[MParameter] */;
val* var450 /* : ArrayIterator[nullable Object] */;
val* var_451 /* var : ArrayIterator[MParameter] */;
short int var452 /* : Bool */;
val* var453 /* : nullable Object */;
val* var_param454 /* var param: MParameter */;
short int var455 /* : Bool */;
short int var456 /* : Bool */;
short int var458 /* : Bool */;
short int var459 /* : Bool */;
short int var_460 /* var : Bool */;
val* var461 /* : MType */;
val* var463 /* : MType */;
short int var464 /* : Bool */;
int cltype465;
int idtype466;
val* var467 /* : MParameter */;
val* var468 /* : String */;
val* var470 /* : String */;
val* var471 /* : MType */;
val* var473 /* : MType */;
short int var474 /* : Bool */;
short int var476 /* : Bool */;
val* var479 /* : nullable Object */;
val* var_longest /* var longest: MMethodDef */;
long var480 /* : Int */;
long var482 /* : Int */;
short int var483 /* : Bool */;
short int var485 /* : Bool */;
int cltype486;
int idtype487;
const char* var_class_name;
short int var488 /* : Bool */;
val* var_489 /* var : Array[MMethodDef] */;
val* var490 /* : ArrayIterator[nullable Object] */;
val* var_491 /* var : ArrayIterator[MMethodDef] */;
short int var492 /* : Bool */;
val* var493 /* : nullable Object */;
val* var_spd /* var spd: MMethodDef */;
val* var494 /* : Array[MProperty] */;
val* var496 /* : Array[MProperty] */;
long var497 /* : Int */;
long var499 /* : Int */;
val* var500 /* : Array[MProperty] */;
val* var502 /* : Array[MProperty] */;
long var503 /* : Int */;
long var505 /* : Int */;
short int var506 /* : Bool */;
short int var508 /* : Bool */;
int cltype509;
int idtype510;
const char* var_class_name511;
short int var512 /* : Bool */;
short int var514 /* : Bool */;
short int var515 /* : Bool */;
short int var517 /* : Bool */;
short int var519 /* : Bool */;
val* var_520 /* var : Array[MMethodDef] */;
val* var521 /* : ArrayIterator[nullable Object] */;
val* var_522 /* var : ArrayIterator[MMethodDef] */;
short int var523 /* : Bool */;
val* var524 /* : nullable Object */;
val* var_spd525 /* var spd: MMethodDef */;
long var_i /* var i: Int */;
val* var526 /* : Array[MProperty] */;
val* var528 /* : Array[MProperty] */;
val* var_529 /* var : Array[MProperty] */;
val* var530 /* : ArrayIterator[nullable Object] */;
val* var_531 /* var : ArrayIterator[MProperty] */;
short int var532 /* : Bool */;
val* var533 /* : nullable Object */;
val* var_p534 /* var p: MProperty */;
val* var535 /* : Array[MProperty] */;
val* var537 /* : Array[MProperty] */;
val* var538 /* : nullable Object */;
short int var539 /* : Bool */;
short int var541 /* : Bool */;
short int var542 /* : Bool */;
val* var544 /* : NativeArray[String] */;
static val* varonce543;
static val* varonce545;
val* var546 /* : String */;
char* var547 /* : NativeString */;
val* var548 /* : FlatString */;
static val* varonce549;
val* var550 /* : String */;
char* var551 /* : NativeString */;
val* var552 /* : FlatString */;
static val* varonce553;
val* var554 /* : String */;
char* var555 /* : NativeString */;
val* var556 /* : FlatString */;
static val* varonce557;
val* var558 /* : String */;
char* var559 /* : NativeString */;
val* var560 /* : FlatString */;
static val* varonce561;
val* var562 /* : String */;
char* var563 /* : NativeString */;
val* var564 /* : FlatString */;
val* var565 /* : String */;
val* var566 /* : Array[MProperty] */;
val* var568 /* : Array[MProperty] */;
static val* varonce569;
val* var570 /* : String */;
char* var571 /* : NativeString */;
val* var572 /* : FlatString */;
val* var573 /* : String */;
val* var574 /* : String */;
val* var575 /* : Array[MProperty] */;
val* var577 /* : Array[MProperty] */;
static val* varonce578;
val* var579 /* : String */;
char* var580 /* : NativeString */;
val* var581 /* : FlatString */;
val* var582 /* : String */;
val* var583 /* : String */;
long var584 /* : Int */;
short int var586 /* : Bool */;
int cltype587;
int idtype588;
const char* var_class_name589;
long var590 /* : Int */;
short int var593 /* : Bool */;
short int var594 /* : Bool */;
short int var596 /* : Bool */;
short int var597 /* : Bool */;
short int var598 /* : Bool */;
short int var599 /* : Bool */;
short int var_600 /* var : Bool */;
val* var601 /* : Array[MProperty] */;
val* var603 /* : Array[MProperty] */;
short int var604 /* : Bool */;
static val* varonce605;
val* var606 /* : String */;
char* var607 /* : NativeString */;
val* var608 /* : FlatString */;
static val* varonce609;
val* var610 /* : String */;
char* var611 /* : NativeString */;
val* var612 /* : FlatString */;
short int var613 /* : Bool */;
short int var614 /* : Bool */;
long var615 /* : Int */;
long var617 /* : Int */;
short int var618 /* : Bool */;
short int var620 /* : Bool */;
short int var_621 /* var : Bool */;
short int var622 /* : Bool */;
short int var_623 /* var : Bool */;
short int var624 /* : Bool */;
short int var625 /* : Bool */;
short int var627 /* : Bool */;
short int var629 /* : Bool */;
val* var630 /* : ToolContext */;
val* var632 /* : ToolContext */;
val* var634 /* : NativeArray[String] */;
static val* varonce633;
static val* varonce635;
val* var636 /* : String */;
char* var637 /* : NativeString */;
val* var638 /* : FlatString */;
val* var639 /* : String */;
val* var640 /* : String */;
val* var641 /* : String */;
val* var642 /* : MClass */;
val* var644 /* : MClass */;
val* var646 /* : Array[MProperty] */;
val* var648 /* : Array[MProperty] */;
long var649 /* : Int */;
long var651 /* : Int */;
short int var652 /* : Bool */;
short int var654 /* : Bool */;
int cltype655;
int idtype656;
const char* var_class_name657;
short int var658 /* : Bool */;
val* var659 /* : nullable MSignature */;
val* var661 /* : nullable MSignature */;
val* var662 /* : Array[MParameter] */;
val* var664 /* : Array[MParameter] */;
val* var665 /* : Array[MProperty] */;
val* var667 /* : Array[MProperty] */;
short int var668 /* : Bool */;
short int var669 /* : Bool */;
short int var671 /* : Bool */;
short int var672 /* : Bool */;
val* var673 /* : Array[MProperty] */;
val* var675 /* : Array[MProperty] */;
val* var676 /* : MSignature */;
val* var_msignature677 /* var msignature: MSignature */;
val* var679 /* : ToolContext */;
val* var681 /* : ToolContext */;
val* var683 /* : NativeArray[String] */;
static val* varonce682;
static val* varonce684;
val* var685 /* : String */;
char* var686 /* : NativeString */;
val* var687 /* : FlatString */;
val* var688 /* : String */;
val* var689 /* : String */;
val* var690 /* : String */;
val* var691 /* : String */;
val* var692 /* : MClass */;
val* var694 /* : MClass */;
val* var696 /* : nullable MMethod */;
val* var698 /* : nullable MMethod */;
val* var_mprop699 /* var mprop: MMethod */;
val* var700 /* : MMethodDef */;
val* var701 /* : Location */;
val* var703 /* : Location */;
val* var_mpropdef704 /* var mpropdef: MMethodDef */;
val* var706 /* : Array[MProperty] */;
val* var708 /* : Array[MProperty] */;
val* var709 /* : MSignature */;
val* var_msignature710 /* var msignature: MSignature */;
val* var712 /* : MSignature */;
val* var713 /* : Array[MParameter] */;
val* var716 /* : ToolContext */;
val* var718 /* : ToolContext */;
val* var720 /* : NativeArray[String] */;
static val* varonce719;
static val* varonce721;
val* var722 /* : String */;
char* var723 /* : NativeString */;
val* var724 /* : FlatString */;
val* var725 /* : String */;
val* var726 /* : String */;
val* var727 /* : String */;
val* var728 /* : String */;
val* var729 /* : MClass */;
val* var731 /* : MClass */;
var_nclassdef = p0;
{
{ /* Inline modelize_class#AClassdef#mclassdef (var_nclassdef) on <var_nclassdef:AClassdef> */
var2 = var_nclassdef->attrs[COLOR_nit__modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_nclassdef:AClassdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 139);
fatal_exit(1);
}
var_mclassdef = var;
{
var3 = nit___nit__MClassDef___is_intro(var_mclassdef);
}
var4 = !var3;
if (var4){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var8 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline model#MClass#name (var6) on <var6:MClass> */
var11 = var6->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var6:MClass> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
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
var14 = standard___standard__NativeString___to_s_with_length(var13, 6l);
var12 = var14;
varonce = var12;
}
{
var15 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var9, var12); /* == on <var9:String>*/
}
var_ = var15;
if (var15){
{
{ /* Inline modelize_property#ModelBuilder#the_root_init_mmethod (self) on <self:ModelBuilder> */
var18 = self->attrs[COLOR_nit__modelize_property__ModelBuilder___the_root_init_mmethod].val; /* _the_root_init_mmethod on <self:ModelBuilder> */
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
var25 = NEW_nit__MMethod(&type_nit__MMethod);
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "init";
var29 = standard___standard__NativeString___to_s_with_length(var28, 4l);
var27 = var29;
varonce26 = var27;
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var32 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline model#MClass#visibility (var30) on <var30:MClass> */
var35 = var30->attrs[COLOR_nit__model__MClass___visibility].val; /* _visibility on <var30:MClass> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 440);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var25->class->vft[COLOR_nit__model__MProperty__intro_mclassdef_61d]))(var25, var_mclassdef); /* intro_mclassdef= on <var25:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var25->class->vft[COLOR_nit__model__MProperty__name_61d]))(var25, var27); /* name= on <var25:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var25->class->vft[COLOR_nit__model__MProperty__visibility_61d]))(var25, var33); /* visibility= on <var25:MMethod>*/
}
{
((void(*)(val* self))(var25->class->vft[COLOR_standard__kernel__Object__init]))(var25); /* init on <var25:MMethod>*/
}
var_mprop = var25;
{
{ /* Inline model#MMethod#is_root_init= (var_mprop,1) on <var_mprop:MMethod> */
var_mprop->attrs[COLOR_nit__model__MMethod___is_root_init].s = 1; /* _is_root_init on <var_mprop:MMethod> */
RET_LABEL36:(void)0;
}
}
var37 = NEW_nit__MMethodDef(&type_nit__MMethodDef);
{
{ /* Inline parser_nodes#ANode#location (var_nclassdef) on <var_nclassdef:AClassdef> */
var40 = var_nclassdef->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var_nclassdef:AClassdef> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var37->class->vft[COLOR_nit__model__MPropDef__mclassdef_61d]))(var37, var_mclassdef); /* mclassdef= on <var37:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var37->class->vft[COLOR_nit__model__MPropDef__mproperty_61d]))(var37, var_mprop); /* mproperty= on <var37:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var37->class->vft[COLOR_nit__model__MPropDef__location_61d]))(var37, var38); /* location= on <var37:MMethodDef>*/
}
{
((void(*)(val* self))(var37->class->vft[COLOR_standard__kernel__Object__init]))(var37); /* init on <var37:MMethodDef>*/
}
var_mpropdef = var37;
var41 = NEW_standard__Array(&type_standard__Array__nit__MParameter);
{
standard___standard__Array___standard__kernel__Object__init(var41); /* Direct call array#Array#init on <var41:Array[MParameter]>*/
}
var_mparameters = var41;
var42 = NEW_nit__MSignature(&type_nit__MSignature);
{
((void(*)(val* self, val* p0))(var42->class->vft[COLOR_nit__model__MSignature__mparameters_61d]))(var42, var_mparameters); /* mparameters= on <var42:MSignature>*/
}
{
((void(*)(val* self, val* p0))(var42->class->vft[COLOR_nit__model__MSignature__return_mtype_61d]))(var42, ((val*)NULL)); /* return_mtype= on <var42:MSignature>*/
}
{
((void(*)(val* self))(var42->class->vft[COLOR_standard__kernel__Object__init]))(var42); /* init on <var42:MSignature>*/
}
var_msignature = var42;
{
{ /* Inline model#MMethodDef#msignature= (var_mpropdef,var_msignature) on <var_mpropdef:MMethodDef> */
var_mpropdef->attrs[COLOR_nit__model__MMethodDef___msignature].val = var_msignature; /* _msignature on <var_mpropdef:MMethodDef> */
RET_LABEL43:(void)0;
}
}
{
{ /* Inline model#MMethodDef#new_msignature= (var_mpropdef,var_msignature) on <var_mpropdef:MMethodDef> */
var_mpropdef->attrs[COLOR_nit__model__MMethodDef___new_msignature].val = var_msignature; /* _new_msignature on <var_mpropdef:MMethodDef> */
RET_LABEL44:(void)0;
}
}
{
{ /* Inline model#MMethod#is_init= (var_mprop,1) on <var_mprop:MMethod> */
var_mprop->attrs[COLOR_nit__model__MMethod___is_init].s = 1; /* _is_init on <var_mprop:MMethod> */
RET_LABEL45:(void)0;
}
}
{
{ /* Inline modelize_property#AClassdef#mfree_init= (var_nclassdef,var_mpropdef) on <var_nclassdef:AClassdef> */
var_nclassdef->attrs[COLOR_nit__modelize_property__AClassdef___mfree_init].val = var_mpropdef; /* _mfree_init on <var_nclassdef:AClassdef> */
RET_LABEL46:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var49 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
if (unlikely(varonce50==NULL)) {
var51 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = " gets a free empty constructor ";
var55 = standard___standard__NativeString___to_s_with_length(var54, 31l);
var53 = var55;
varonce52 = var53;
}
((struct instance_standard__NativeArray*)var51)->values[1]=var53;
} else {
var51 = varonce50;
varonce50 = NULL;
}
{
var56 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:MClassDef>*/
}
((struct instance_standard__NativeArray*)var51)->values[0]=var56;
{
var57 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:MMethodDef>*/
}
((struct instance_standard__NativeArray*)var51)->values[2]=var57;
{
var58 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_standard__string__Object__to_s]))(var_msignature); /* to_s on <var_msignature:MSignature>*/
}
((struct instance_standard__NativeArray*)var51)->values[3]=var58;
{
var59 = ((val*(*)(val* self))(var51->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var51); /* native_to_s on <var51:NativeArray[String]>*/
}
varonce50 = var51;
{
nit___nit__ToolContext___info(var47, var59, 3l); /* Direct call toolcontext#ToolContext#info on <var47:ToolContext>*/
}
{
{ /* Inline modelize_property#ModelBuilder#the_root_init_mmethod= (self,var_mprop) on <self:ModelBuilder> */
self->attrs[COLOR_nit__modelize_property__ModelBuilder___the_root_init_mmethod].val = var_mprop; /* _the_root_init_mmethod on <self:ModelBuilder> */
RET_LABEL60:(void)0;
}
}
goto RET_LABEL;
} else {
}
var_defined_init = ((val*)NULL);
{
{ /* Inline model#MClassDef#mpropdefs (var_mclassdef) on <var_mclassdef:MClassDef> */
var63 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mpropdefs].val; /* _mpropdefs on <var_mclassdef:MClassDef> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 684);
fatal_exit(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
var_64 = var61;
{
var65 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_64);
}
var_66 = var65;
for(;;) {
{
var67 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_66);
}
if (var67){
{
var68 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_66);
}
var_mpropdef69 = var68;
/* <var_mpropdef69:MPropDef> isa MMethodDef */
cltype = type_nit__MMethodDef.color;
idtype = type_nit__MMethodDef.id;
if(cltype >= var_mpropdef69->type->table_size) {
var70 = 0;
} else {
var70 = var_mpropdef69->type->type_table[cltype] == idtype;
}
var71 = !var70;
if (var71){
goto BREAK_label;
} else {
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef69) on <var_mpropdef69:MPropDef(MMethodDef)> */
var74 = var_mpropdef69->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef69:MPropDef(MMethodDef)> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
{
{ /* Inline model#MMethod#is_init (var72) on <var72:MProperty(MMethod)> */
var77 = var72->attrs[COLOR_nit__model__MMethod___is_init].s; /* _is_init on <var72:MProperty(MMethod)> */
var75 = var77;
RET_LABEL76:(void)0;
}
}
var78 = !var75;
if (var78){
goto BREAK_label;
} else {
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef69) on <var_mpropdef69:MPropDef(MMethodDef)> */
var81 = var_mpropdef69->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef69:MPropDef(MMethodDef)> */
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
{ /* Inline model#MMethod#is_root_init (var79) on <var79:MProperty(MMethod)> */
var84 = var79->attrs[COLOR_nit__model__MMethod___is_root_init].s; /* _is_root_init on <var79:MProperty(MMethod)> */
var82 = var84;
RET_LABEL83:(void)0;
}
}
if (var82){
if (var_defined_init == NULL) {
var85 = 1; /* is null */
} else {
var85 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_defined_init,((val*)NULL)) on <var_defined_init:nullable MMethodDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_defined_init,var_other) on <var_defined_init:nullable MMethodDef(MMethodDef)> */
var90 = var_defined_init == var_other;
var88 = var90;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
}
var86 = var88;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
var85 = var86;
}
if (unlikely(!var85)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 167);
fatal_exit(1);
}
var_defined_init = var_mpropdef69;
} else {
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef69) on <var_mpropdef69:MPropDef(MMethodDef)> */
var93 = var_mpropdef69->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef69:MPropDef(MMethodDef)> */
if (unlikely(var93 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var91 = var93;
RET_LABEL92:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var91) on <var91:MProperty(MMethod)> */
var96 = var91->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var91:MProperty(MMethod)> */
if (unlikely(var96 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1933);
fatal_exit(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
if (likely(varonce97!=NULL)) {
var98 = varonce97;
} else {
var99 = "init";
var100 = standard___standard__NativeString___to_s_with_length(var99, 4l);
var98 = var100;
varonce97 = var98;
}
{
var101 = ((short int(*)(val* self, val* p0))(var94->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var94, var98); /* == on <var94:String>*/
}
if (var101){
goto RET_LABEL;
} else {
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_66); /* Direct call array#ArrayIterator#next on <var_66:ArrayIterator[MPropDef]>*/
}
} else {
goto BREAK_label102;
}
}
BREAK_label102: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_66); /* Direct call array#ArrayIterator#finish on <var_66:ArrayIterator[MPropDef]>*/
}
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype104 = type_nit__AStdClassdef.color;
idtype105 = type_nit__AStdClassdef.id;
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
var107 = NEW_standard__Array(&type_standard__Array__nit__MParameter);
{
standard___standard__Array___standard__kernel__Object__init(var107); /* Direct call array#Array#init on <var107:Array[MParameter]>*/
}
var_mparameters108 = var107;
var109 = NEW_standard__Array(&type_standard__Array__nit__MProperty);
{
standard___standard__Array___standard__kernel__Object__init(var109); /* Direct call array#Array#init on <var109:Array[MProperty]>*/
}
var_initializers = var109;
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var112 = var_nclassdef->attrs[COLOR_nit__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var112 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1189);
fatal_exit(1);
}
var110 = var112;
RET_LABEL111:(void)0;
}
}
var_113 = var110;
{
var114 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_113);
}
var_115 = var114;
for(;;) {
{
var116 = ((short int(*)(val* self))((((long)var_115&3)?class_info[((long)var_115&3)]:var_115->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_115); /* is_ok on <var_115:Iterator[APropdef]>*/
}
if (var116){
{
var117 = ((val*(*)(val* self))((((long)var_115&3)?class_info[((long)var_115&3)]:var_115->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_115); /* item on <var_115:Iterator[APropdef]>*/
}
var_npropdef = var117;
/* <var_npropdef:APropdef> isa AMethPropdef */
cltype119 = type_nit__AMethPropdef.color;
idtype120 = type_nit__AMethPropdef.id;
if(cltype119 >= var_npropdef->type->table_size) {
var118 = 0;
} else {
var118 = var_npropdef->type->type_table[cltype119] == idtype120;
}
if (var118){
{
{ /* Inline modelize_property#AMethPropdef#is_autoinit (var_npropdef) on <var_npropdef:APropdef(AMethPropdef)> */
var123 = var_npropdef->attrs[COLOR_nit__modelize_property__AMethPropdef___is_autoinit].s; /* _is_autoinit on <var_npropdef:APropdef(AMethPropdef)> */
var121 = var123;
RET_LABEL122:(void)0;
}
}
var124 = !var121;
if (var124){
goto BREAK_label125;
} else {
}
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:APropdef(AMethPropdef)> */
var128 = var_npropdef->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:APropdef(AMethPropdef)> */
var126 = var128;
RET_LABEL127:(void)0;
}
}
if (var126 == NULL) {
var129 = 1; /* is null */
} else {
var129 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var126,((val*)NULL)) on <var126:nullable MPropDef(nullable MMethodDef)> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var126,var_other) on <var126:nullable MMethodDef(MMethodDef)> */
var134 = var126 == var_other;
var132 = var134;
goto RET_LABEL133;
RET_LABEL133:(void)0;
}
}
var130 = var132;
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
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:APropdef(AMethPropdef)> */
var137 = var_npropdef->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:APropdef(AMethPropdef)> */
var135 = var137;
RET_LABEL136:(void)0;
}
}
if (var135 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 184);
fatal_exit(1);
} else {
{ /* Inline model#MMethodDef#msignature (var135) on <var135:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var135 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2336);
fatal_exit(1);
}
var140 = var135->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var135:nullable MPropDef(nullable MMethodDef)> */
var138 = var140;
RET_LABEL139:(void)0;
}
}
var_sig = var138;
if (var_sig == NULL) {
var141 = 1; /* is null */
} else {
var141 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_sig,((val*)NULL)) on <var_sig:nullable MSignature> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_sig,var_other) on <var_sig:nullable MSignature(MSignature)> */
var146 = var_sig == var_other;
var144 = var146;
goto RET_LABEL145;
RET_LABEL145:(void)0;
}
}
var142 = var144;
goto RET_LABEL143;
RET_LABEL143:(void)0;
}
var141 = var142;
}
if (var141){
goto BREAK_label125;
} else {
}
{
{ /* Inline model#MSignature#mparameters (var_sig) on <var_sig:nullable MSignature(MSignature)> */
var149 = var_sig->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var_sig:nullable MSignature(MSignature)> */
if (unlikely(var149 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1756);
fatal_exit(1);
}
var147 = var149;
RET_LABEL148:(void)0;
}
}
var_150 = var147;
{
var151 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_150);
}
var_152 = var151;
for(;;) {
{
var153 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_152);
}
if (var153){
{
var154 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_152);
}
var_param = var154;
{
{ /* Inline model#MParameter#mtype (var_param) on <var_param:MParameter> */
var157 = var_param->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var_param:MParameter> */
if (unlikely(var157 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1879);
fatal_exit(1);
}
var155 = var157;
RET_LABEL156:(void)0;
}
}
var_ret_type = var155;
var158 = NEW_nit__MParameter(&type_nit__MParameter);
{
{ /* Inline model#MParameter#name (var_param) on <var_param:MParameter> */
var161 = var_param->attrs[COLOR_nit__model__MParameter___name].val; /* _name on <var_param:MParameter> */
if (unlikely(var161 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1876);
fatal_exit(1);
}
var159 = var161;
RET_LABEL160:(void)0;
}
}
/* <var_ret_type:MType> isa MNullableType */
cltype163 = type_nit__MNullableType.color;
idtype164 = type_nit__MNullableType.id;
if(cltype163 >= var_ret_type->type->table_size) {
var162 = 0;
} else {
var162 = var_ret_type->type->type_table[cltype163] == idtype164;
}
{
((void(*)(val* self, val* p0))(var158->class->vft[COLOR_nit__model__MParameter__name_61d]))(var158, var159); /* name= on <var158:MParameter>*/
}
{
((void(*)(val* self, val* p0))(var158->class->vft[COLOR_nit__model__MParameter__mtype_61d]))(var158, var_ret_type); /* mtype= on <var158:MParameter>*/
}
{
((void(*)(val* self, short int p0))(var158->class->vft[COLOR_nit__model__MParameter__is_vararg_61d]))(var158, 0); /* is_vararg= on <var158:MParameter>*/
}
{
((void(*)(val* self, short int p0))(var158->class->vft[COLOR_nit__model__MParameter__is_default_61d]))(var158, var162); /* is_default= on <var158:MParameter>*/
}
{
((void(*)(val* self))(var158->class->vft[COLOR_standard__kernel__Object__init]))(var158); /* init on <var158:MParameter>*/
}
var_mparameter = var158;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_mparameters108, var_mparameter); /* Direct call array#Array#add on <var_mparameters108:Array[MParameter]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_152); /* Direct call array#ArrayIterator#next on <var_152:ArrayIterator[MParameter]>*/
}
} else {
goto BREAK_label165;
}
}
BREAK_label165: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_152); /* Direct call array#ArrayIterator#finish on <var_152:ArrayIterator[MParameter]>*/
}
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:APropdef(AMethPropdef)> */
var168 = var_npropdef->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:APropdef(AMethPropdef)> */
var166 = var168;
RET_LABEL167:(void)0;
}
}
if (var166 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 192);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mproperty (var166) on <var166:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var166 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var171 = var166->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var166:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var171 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var169 = var171;
RET_LABEL170:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_initializers, var169); /* Direct call array#Array#add on <var_initializers:Array[MProperty]>*/
}
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:APropdef(AMethPropdef)> */
var174 = var_npropdef->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:APropdef(AMethPropdef)> */
var172 = var174;
RET_LABEL173:(void)0;
}
}
if (var172 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 193);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mproperty (var172) on <var172:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var172 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var177 = var172->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var172:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var177 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var175 = var177;
RET_LABEL176:(void)0;
}
}
{
{ /* Inline model#MProperty#is_autoinit= (var175,1) on <var175:MProperty(MMethod)> */
var175->attrs[COLOR_nit__model__MProperty___is_autoinit].s = 1; /* _is_autoinit on <var175:MProperty(MMethod)> */
RET_LABEL178:(void)0;
}
}
} else {
}
/* <var_npropdef:APropdef> isa AAttrPropdef */
cltype180 = type_nit__AAttrPropdef.color;
idtype181 = type_nit__AAttrPropdef.id;
if(cltype180 >= var_npropdef->type->table_size) {
var179 = 0;
} else {
var179 = var_npropdef->type->type_table[cltype180] == idtype181;
}
if (var179){
{
{ /* Inline modelize_property#AAttrPropdef#mreadpropdef (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var184 = var_npropdef->attrs[COLOR_nit__modelize_property__AAttrPropdef___mreadpropdef].val; /* _mreadpropdef on <var_npropdef:APropdef(AAttrPropdef)> */
var182 = var184;
RET_LABEL183:(void)0;
}
}
var_mreadpropdef = var182;
if (var_mreadpropdef == NULL) {
var186 = 1; /* is null */
} else {
var186 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mreadpropdef,((val*)NULL)) on <var_mreadpropdef:nullable MMethodDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mreadpropdef,var_other) on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var191 = var_mreadpropdef == var_other;
var189 = var191;
goto RET_LABEL190;
RET_LABEL190:(void)0;
}
}
var187 = var189;
goto RET_LABEL188;
RET_LABEL188:(void)0;
}
var186 = var187;
}
var_192 = var186;
if (var186){
var185 = var_192;
} else {
{
{ /* Inline model#MMethodDef#msignature (var_mreadpropdef) on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var195 = var_mreadpropdef->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var193 = var195;
RET_LABEL194:(void)0;
}
}
if (var193 == NULL) {
var196 = 1; /* is null */
} else {
var196 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var193,((val*)NULL)) on <var193:nullable MSignature> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var193,var_other) on <var193:nullable MSignature(MSignature)> */
var201 = var193 == var_other;
var199 = var201;
goto RET_LABEL200;
RET_LABEL200:(void)0;
}
}
var197 = var199;
goto RET_LABEL198;
RET_LABEL198:(void)0;
}
var196 = var197;
}
var185 = var196;
}
if (var185){
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property#AAttrPropdef#noinit (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var204 = var_npropdef->attrs[COLOR_nit__modelize_property__AAttrPropdef___noinit].s; /* _noinit on <var_npropdef:APropdef(AAttrPropdef)> */
var202 = var204;
RET_LABEL203:(void)0;
}
}
if (var202){
goto BREAK_label125;
} else {
}
if (likely(varonce205!=NULL)) {
var206 = varonce205;
} else {
var207 = "lateinit";
var208 = standard___standard__NativeString___to_s_with_length(var207, 8l);
var206 = var208;
varonce205 = var206;
}
{
var209 = nit__annotation___Prod___get_single_annotation(var_npropdef, var206, self);
}
var_atlateinit = var209;
if (var_atlateinit == NULL) {
var210 = 0; /* is null */
} else {
var210 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atlateinit,((val*)NULL)) on <var_atlateinit:nullable AAnnotation> */
var_other213 = ((val*)NULL);
{
var214 = ((short int(*)(val* self, val* p0))(var_atlateinit->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_atlateinit, var_other213); /* == on <var_atlateinit:nullable AAnnotation(AAnnotation)>*/
}
var215 = !var214;
var211 = var215;
goto RET_LABEL212;
RET_LABEL212:(void)0;
}
var210 = var211;
}
if (var210){
{
{ /* Inline model#MPropDef#mproperty (var_mreadpropdef) on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var218 = var_mreadpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var218 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var216 = var218;
RET_LABEL217:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_initializers, var216); /* Direct call array#Array#add on <var_initializers:Array[MProperty]>*/
}
{
{ /* Inline model#MPropDef#mproperty (var_mreadpropdef) on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var221 = var_mreadpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var221 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var219 = var221;
RET_LABEL220:(void)0;
}
}
{
{ /* Inline model#MProperty#is_autoinit= (var219,1) on <var219:MProperty(MMethod)> */
var219->attrs[COLOR_nit__model__MProperty___is_autoinit].s = 1; /* _is_autoinit on <var219:MProperty(MMethod)> */
RET_LABEL222:(void)0;
}
}
goto BREAK_label125;
} else {
}
{
{ /* Inline modelize_property#AAttrPropdef#has_value (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var225 = var_npropdef->attrs[COLOR_nit__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <var_npropdef:APropdef(AAttrPropdef)> */
var223 = var225;
RET_LABEL224:(void)0;
}
}
if (var223){
goto BREAK_label125;
} else {
}
{
{ /* Inline model#MPropDef#mproperty (var_mreadpropdef) on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var228 = var_mreadpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var228 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var226 = var228;
RET_LABEL227:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var226) on <var226:MProperty(MMethod)> */
var231 = var226->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var226:MProperty(MMethod)> */
if (unlikely(var231 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1933);
fatal_exit(1);
}
var229 = var231;
RET_LABEL230:(void)0;
}
}
var_paramname = var229;
{
{ /* Inline model#MMethodDef#msignature (var_mreadpropdef) on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var234 = var_mreadpropdef->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var232 = var234;
RET_LABEL233:(void)0;
}
}
if (var232 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 209);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#return_mtype (var232) on <var232:nullable MSignature> */
if (unlikely(var232 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1768);
fatal_exit(1);
}
var237 = var232->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var232:nullable MSignature> */
var235 = var237;
RET_LABEL236:(void)0;
}
}
var_ret_type238 = var235;
if (var_ret_type238 == NULL) {
var239 = 1; /* is null */
} else {
var239 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ret_type238,((val*)NULL)) on <var_ret_type238:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_ret_type238,var_other) on <var_ret_type238:nullable MType(MType)> */
var244 = var_ret_type238 == var_other;
var242 = var244;
goto RET_LABEL243;
RET_LABEL243:(void)0;
}
}
var240 = var242;
goto RET_LABEL241;
RET_LABEL241:(void)0;
}
var239 = var240;
}
if (var239){
goto RET_LABEL;
} else {
}
var245 = NEW_nit__MParameter(&type_nit__MParameter);
/* <var_ret_type238:nullable MType(MType)> isa MNullableType */
cltype247 = type_nit__MNullableType.color;
idtype248 = type_nit__MNullableType.id;
if(cltype247 >= var_ret_type238->type->table_size) {
var246 = 0;
} else {
var246 = var_ret_type238->type->type_table[cltype247] == idtype248;
}
{
((void(*)(val* self, val* p0))(var245->class->vft[COLOR_nit__model__MParameter__name_61d]))(var245, var_paramname); /* name= on <var245:MParameter>*/
}
{
((void(*)(val* self, val* p0))(var245->class->vft[COLOR_nit__model__MParameter__mtype_61d]))(var245, var_ret_type238); /* mtype= on <var245:MParameter>*/
}
{
((void(*)(val* self, short int p0))(var245->class->vft[COLOR_nit__model__MParameter__is_vararg_61d]))(var245, 0); /* is_vararg= on <var245:MParameter>*/
}
{
((void(*)(val* self, short int p0))(var245->class->vft[COLOR_nit__model__MParameter__is_default_61d]))(var245, var246); /* is_default= on <var245:MParameter>*/
}
{
((void(*)(val* self))(var245->class->vft[COLOR_standard__kernel__Object__init]))(var245); /* init on <var245:MParameter>*/
}
var_mparameter249 = var245;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_mparameters108, var_mparameter249); /* Direct call array#Array#add on <var_mparameters108:Array[MParameter]>*/
}
{
{ /* Inline modelize_property#AAttrPropdef#mwritepropdef (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var252 = var_npropdef->attrs[COLOR_nit__modelize_property__AAttrPropdef___mwritepropdef].val; /* _mwritepropdef on <var_npropdef:APropdef(AAttrPropdef)> */
var250 = var252;
RET_LABEL251:(void)0;
}
}
var_msetter = var250;
if (var_msetter == NULL) {
var253 = 1; /* is null */
} else {
var253 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_msetter,((val*)NULL)) on <var_msetter:nullable MMethodDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_msetter,var_other) on <var_msetter:nullable MMethodDef(MMethodDef)> */
var258 = var_msetter == var_other;
var256 = var258;
goto RET_LABEL257;
RET_LABEL257:(void)0;
}
}
var254 = var256;
goto RET_LABEL255;
RET_LABEL255:(void)0;
}
var253 = var254;
}
if (var253){
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var261 = var_npropdef->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:APropdef(AAttrPropdef)> */
var259 = var261;
RET_LABEL260:(void)0;
}
}
if (var259 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 216);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mproperty (var259) on <var259:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var259 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var264 = var259->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var259:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var264 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var262 = var264;
RET_LABEL263:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_initializers, var262); /* Direct call array#Array#add on <var_initializers:Array[MProperty]>*/
}
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var267 = var_npropdef->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:APropdef(AAttrPropdef)> */
var265 = var267;
RET_LABEL266:(void)0;
}
}
if (var265 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 217);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mproperty (var265) on <var265:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var265 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var270 = var265->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var265:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var270 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var268 = var270;
RET_LABEL269:(void)0;
}
}
{
{ /* Inline model#MProperty#is_autoinit= (var268,1) on <var268:MProperty(MAttribute)> */
var268->attrs[COLOR_nit__model__MProperty___is_autoinit].s = 1; /* _is_autoinit on <var268:MProperty(MAttribute)> */
RET_LABEL271:(void)0;
}
}
} else {
{
{ /* Inline model#MPropDef#mproperty (var_msetter) on <var_msetter:nullable MMethodDef(MMethodDef)> */
var274 = var_msetter->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_msetter:nullable MMethodDef(MMethodDef)> */
if (unlikely(var274 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var272 = var274;
RET_LABEL273:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_initializers, var272); /* Direct call array#Array#add on <var_initializers:Array[MProperty]>*/
}
{
{ /* Inline model#MPropDef#mproperty (var_msetter) on <var_msetter:nullable MMethodDef(MMethodDef)> */
var277 = var_msetter->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_msetter:nullable MMethodDef(MMethodDef)> */
if (unlikely(var277 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var275 = var277;
RET_LABEL276:(void)0;
}
}
{
{ /* Inline model#MProperty#is_autoinit= (var275,1) on <var275:MProperty(MMethod)> */
var275->attrs[COLOR_nit__model__MProperty___is_autoinit].s = 1; /* _is_autoinit on <var275:MProperty(MMethod)> */
RET_LABEL278:(void)0;
}
}
}
} else {
}
BREAK_label125: (void)0;
{
((void(*)(val* self))((((long)var_115&3)?class_info[((long)var_115&3)]:var_115->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_115); /* next on <var_115:Iterator[APropdef]>*/
}
} else {
goto BREAK_label279;
}
}
BREAK_label279: (void)0;
{
((void(*)(val* self))((((long)var_115&3)?class_info[((long)var_115&3)]:var_115->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_115); /* finish on <var_115:Iterator[APropdef]>*/
}
{
{ /* Inline modelize_property#ModelBuilder#the_root_init_mmethod (self) on <self:ModelBuilder> */
var282 = self->attrs[COLOR_nit__modelize_property__ModelBuilder___the_root_init_mmethod].val; /* _the_root_init_mmethod on <self:ModelBuilder> */
var280 = var282;
RET_LABEL281:(void)0;
}
}
if (var280 == NULL) {
var283 = 1; /* is null */
} else {
var283 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var280,((val*)NULL)) on <var280:nullable MMethod> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var280,var_other) on <var280:nullable MMethod(MMethod)> */
var288 = var280 == var_other;
var286 = var288;
goto RET_LABEL287;
RET_LABEL287:(void)0;
}
}
var284 = var286;
goto RET_LABEL285;
RET_LABEL285:(void)0;
}
var283 = var284;
}
if (var283){
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property#ModelBuilder#the_root_init_mmethod (self) on <self:ModelBuilder> */
var291 = self->attrs[COLOR_nit__modelize_property__ModelBuilder___the_root_init_mmethod].val; /* _the_root_init_mmethod on <self:ModelBuilder> */
var289 = var291;
RET_LABEL290:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var294 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var294 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var292 = var294;
RET_LABEL293:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var297 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var297 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var295 = var297;
RET_LABEL296:(void)0;
}
}
if (var289 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 229);
fatal_exit(1);
} else {
var298 = nit___nit__MProperty___lookup_super_definitions(var289, var292, var295);
}
var_spropdefs = var298;
{
var299 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_spropdefs);
}
if (var299){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var302 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var302 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var300 = var302;
RET_LABEL301:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var305 = var_nclassdef->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var305 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var303 = var305;
RET_LABEL304:(void)0;
}
}
if (unlikely(varonce306==NULL)) {
var307 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce308!=NULL)) {
var309 = varonce308;
} else {
var310 = "Error: `";
var311 = standard___standard__NativeString___to_s_with_length(var310, 8l);
var309 = var311;
varonce308 = var309;
}
((struct instance_standard__NativeArray*)var307)->values[0]=var309;
if (likely(varonce312!=NULL)) {
var313 = varonce312;
} else {
var314 = "` does not specialize `";
var315 = standard___standard__NativeString___to_s_with_length(var314, 23l);
var313 = var315;
varonce312 = var313;
}
((struct instance_standard__NativeArray*)var307)->values[2]=var313;
if (likely(varonce316!=NULL)) {
var317 = varonce316;
} else {
var318 = "`. Possible duplication of the root class `Object`?";
var319 = standard___standard__NativeString___to_s_with_length(var318, 51l);
var317 = var319;
varonce316 = var317;
}
((struct instance_standard__NativeArray*)var307)->values[4]=var317;
} else {
var307 = varonce306;
varonce306 = NULL;
}
{
var320 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:MClassDef>*/
}
((struct instance_standard__NativeArray*)var307)->values[1]=var320;
{
{ /* Inline modelize_property#ModelBuilder#the_root_init_mmethod (self) on <self:ModelBuilder> */
var323 = self->attrs[COLOR_nit__modelize_property__ModelBuilder___the_root_init_mmethod].val; /* _the_root_init_mmethod on <self:ModelBuilder> */
var321 = var323;
RET_LABEL322:(void)0;
}
}
if (var321 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 231);
fatal_exit(1);
} else {
{ /* Inline model#MProperty#intro_mclassdef (var321) on <var321:nullable MMethod> */
if (unlikely(var321 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1928);
fatal_exit(1);
}
var326 = var321->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var321:nullable MMethod> */
if (unlikely(var326 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1928);
fatal_exit(1);
}
var324 = var326;
RET_LABEL325:(void)0;
}
}
{
var327 = ((val*(*)(val* self))(var324->class->vft[COLOR_standard__string__Object__to_s]))(var324); /* to_s on <var324:MClassDef>*/
}
((struct instance_standard__NativeArray*)var307)->values[3]=var327;
{
var328 = ((val*(*)(val* self))(var307->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var307); /* native_to_s on <var307:NativeArray[String]>*/
}
varonce306 = var307;
{
var329 = nit___nit__ToolContext___error(var300, var303, var328);
}
goto RET_LABEL;
} else {
}
if (likely(varonce330!=NULL)) {
var331 = varonce330;
} else {
var332 = "autoinit";
var333 = standard___standard__NativeString___to_s_with_length(var332, 8l);
var331 = var333;
varonce330 = var331;
}
{
var334 = nit__annotation___Prod___get_single_annotation(var_nclassdef, var331, self);
}
var_autoinit = var334;
if (likely(varonce335!=NULL)) {
var336 = varonce335;
} else {
var337 = "noautoinit";
var338 = standard___standard__NativeString___to_s_with_length(var337, 10l);
var336 = var338;
varonce335 = var336;
}
{
var339 = nit__annotation___Prod___get_single_annotation(var_nclassdef, var336, self);
}
var_noautoinit = var339;
if (var_autoinit == NULL) {
var340 = 0; /* is null */
} else {
var340 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_autoinit,((val*)NULL)) on <var_autoinit:nullable AAnnotation> */
var_other213 = ((val*)NULL);
{
var343 = ((short int(*)(val* self, val* p0))(var_autoinit->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_autoinit, var_other213); /* == on <var_autoinit:nullable AAnnotation(AAnnotation)>*/
}
var344 = !var343;
var341 = var344;
goto RET_LABEL342;
RET_LABEL342:(void)0;
}
var340 = var341;
}
if (var340){
{
standard___standard__AbstractArray___standard__abstract_collection__RemovableCollection__clear(var_mparameters108); /* Direct call array#AbstractArray#clear on <var_mparameters108:Array[MParameter]>*/
}
{
standard___standard__AbstractArray___standard__abstract_collection__RemovableCollection__clear(var_initializers); /* Direct call array#AbstractArray#clear on <var_initializers:Array[MProperty]>*/
}
if (var_noautoinit == NULL) {
var345 = 0; /* is null */
} else {
var345 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_noautoinit,((val*)NULL)) on <var_noautoinit:nullable AAnnotation> */
var_other213 = ((val*)NULL);
{
var348 = ((short int(*)(val* self, val* p0))(var_noautoinit->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_noautoinit, var_other213); /* == on <var_noautoinit:nullable AAnnotation(AAnnotation)>*/
}
var349 = !var348;
var346 = var349;
goto RET_LABEL347;
RET_LABEL347:(void)0;
}
var345 = var346;
}
if (var345){
if (likely(varonce350!=NULL)) {
var351 = varonce350;
} else {
var352 = "Error: `autoinit` and `noautoinit` are incompatible.";
var353 = standard___standard__NativeString___to_s_with_length(var352, 52l);
var351 = var353;
varonce350 = var351;
}
{
nit___nit__ModelBuilder___error(self, var_autoinit, var351); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
{
{ /* Inline parser_nodes#AAnnotation#n_args (var_autoinit) on <var_autoinit:nullable AAnnotation(AAnnotation)> */
var356 = var_autoinit->attrs[COLOR_nit__parser_nodes__AAnnotation___n_args].val; /* _n_args on <var_autoinit:nullable AAnnotation(AAnnotation)> */
if (unlikely(var356 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2988);
fatal_exit(1);
}
var354 = var356;
RET_LABEL355:(void)0;
}
}
{
var357 = nit___nit__ANodes___standard__abstract_collection__Collection__is_empty(var354);
}
if (var357){
if (likely(varonce358!=NULL)) {
var359 = varonce358;
} else {
var360 = "Syntax Error: `autoinit` expects method identifiers, use `noautoinit` to clear all autoinits.";
var361 = standard___standard__NativeString___to_s_with_length(var360, 93l);
var359 = var361;
varonce358 = var359;
}
{
nit___nit__ModelBuilder___error(self, var_autoinit, var359); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
{
{ /* Inline parser_nodes#AAnnotation#n_args (var_autoinit) on <var_autoinit:nullable AAnnotation(AAnnotation)> */
var364 = var_autoinit->attrs[COLOR_nit__parser_nodes__AAnnotation___n_args].val; /* _n_args on <var_autoinit:nullable AAnnotation(AAnnotation)> */
if (unlikely(var364 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2988);
fatal_exit(1);
}
var362 = var364;
RET_LABEL363:(void)0;
}
}
var_365 = var362;
{
var366 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_365);
}
var_367 = var366;
for(;;) {
{
var368 = ((short int(*)(val* self))((((long)var_367&3)?class_info[((long)var_367&3)]:var_367->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_367); /* is_ok on <var_367:Iterator[AExpr]>*/
}
if (var368){
{
var369 = ((val*(*)(val* self))((((long)var_367&3)?class_info[((long)var_367&3)]:var_367->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_367); /* item on <var_367:Iterator[AExpr]>*/
}
var_narg = var369;
{
var370 = nit__literal___AExpr___as_id(var_narg);
}
var_id = var370;
if (var_id == NULL) {
var371 = 1; /* is null */
} else {
var371 = 0; /* arg is null but recv is not */
}
if (0) {
var372 = ((short int(*)(val* self, val* p0))(var_id->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_id, ((val*)NULL)); /* == on <var_id:nullable String>*/
var371 = var372;
}
if (var371){
if (likely(varonce373!=NULL)) {
var374 = varonce373;
} else {
var375 = "Syntax Error: `autoinit` expects method identifiers.";
var376 = standard___standard__NativeString___to_s_with_length(var375, 52l);
var374 = var376;
varonce373 = var374;
}
{
nit___nit__ModelBuilder___error(self, var_narg, var374); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
if (likely(varonce377!=NULL)) {
var378 = varonce377;
} else {
var379 = "=";
var380 = standard___standard__NativeString___to_s_with_length(var379, 1l);
var378 = var380;
varonce377 = var378;
}
{
var381 = ((val*(*)(val* self, val* p0))(var_id->class->vft[COLOR_standard__string__String___43d]))(var_id, var378); /* + on <var_id:nullable String(String)>*/
}
{
var382 = nit___nit__ModelBuilder___try_get_mproperty_by_name(self, var_narg, var_mclassdef, var381);
}
var_p = var382;
if (var_p == NULL) {
var383 = 1; /* is null */
} else {
var383 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_p,((val*)NULL)) on <var_p:nullable MProperty> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_p,var_other) on <var_p:nullable MProperty(MProperty)> */
var388 = var_p == var_other;
var386 = var388;
goto RET_LABEL387;
RET_LABEL387:(void)0;
}
}
var384 = var386;
goto RET_LABEL385;
RET_LABEL385:(void)0;
}
var383 = var384;
}
if (var383){
{
var389 = nit___nit__ModelBuilder___try_get_mproperty_by_name(self, var_narg, var_mclassdef, var_id);
}
var_p = var389;
} else {
}
if (var_p == NULL) {
var390 = 1; /* is null */
} else {
var390 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_p,((val*)NULL)) on <var_p:nullable MProperty> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_p,var_other) on <var_p:nullable MProperty(MProperty)> */
var395 = var_p == var_other;
var393 = var395;
goto RET_LABEL394;
RET_LABEL394:(void)0;
}
}
var391 = var393;
goto RET_LABEL392;
RET_LABEL392:(void)0;
}
var390 = var391;
}
if (var390){
if (unlikely(varonce396==NULL)) {
var397 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce398!=NULL)) {
var399 = varonce398;
} else {
var400 = "Error: unknown method `";
var401 = standard___standard__NativeString___to_s_with_length(var400, 23l);
var399 = var401;
varonce398 = var399;
}
((struct instance_standard__NativeArray*)var397)->values[0]=var399;
if (likely(varonce402!=NULL)) {
var403 = varonce402;
} else {
var404 = "`";
var405 = standard___standard__NativeString___to_s_with_length(var404, 1l);
var403 = var405;
varonce402 = var403;
}
((struct instance_standard__NativeArray*)var397)->values[2]=var403;
} else {
var397 = varonce396;
varonce396 = NULL;
}
((struct instance_standard__NativeArray*)var397)->values[1]=var_id;
{
var406 = ((val*(*)(val* self))(var397->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var397); /* native_to_s on <var397:NativeArray[String]>*/
}
varonce396 = var397;
{
nit___nit__ModelBuilder___error(self, var_narg, var406); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MProperty#is_autoinit (var_p) on <var_p:nullable MProperty(MProperty)> */
var409 = var_p->attrs[COLOR_nit__model__MProperty___is_autoinit].s; /* _is_autoinit on <var_p:nullable MProperty(MProperty)> */
var407 = var409;
RET_LABEL408:(void)0;
}
}
var410 = !var407;
if (var410){
if (unlikely(varonce411==NULL)) {
var412 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce413!=NULL)) {
var414 = varonce413;
} else {
var415 = "Error: `";
var416 = standard___standard__NativeString___to_s_with_length(var415, 8l);
var414 = var416;
varonce413 = var414;
}
((struct instance_standard__NativeArray*)var412)->values[0]=var414;
if (likely(varonce417!=NULL)) {
var418 = varonce417;
} else {
var419 = "` is not an autoinit method";
var420 = standard___standard__NativeString___to_s_with_length(var419, 27l);
var418 = var420;
varonce417 = var418;
}
((struct instance_standard__NativeArray*)var412)->values[2]=var418;
} else {
var412 = varonce411;
varonce411 = NULL;
}
{
var421 = ((val*(*)(val* self))(var_p->class->vft[COLOR_standard__string__Object__to_s]))(var_p); /* to_s on <var_p:nullable MProperty(MProperty)>*/
}
((struct instance_standard__NativeArray*)var412)->values[1]=var421;
{
var422 = ((val*(*)(val* self))(var412->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var412); /* native_to_s on <var412:NativeArray[String]>*/
}
varonce411 = var412;
{
nit___nit__ModelBuilder___error(self, var_narg, var422); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_initializers, var_p); /* Direct call array#Array#add on <var_initializers:Array[MProperty]>*/
}
{
{ /* Inline model#MProperty#intro (var_p) on <var_p:nullable MProperty(MProperty)> */
var425 = var_p->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var_p:nullable MProperty(MProperty)> */
if (unlikely(var425 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1968);
fatal_exit(1);
}
var423 = var425;
RET_LABEL424:(void)0;
}
}
var_pd = var423;
/* <var_pd:MPropDef> isa MMethodDef */
cltype427 = type_nit__MMethodDef.color;
idtype428 = type_nit__MMethodDef.id;
if(cltype427 >= var_pd->type->table_size) {
var426 = 0;
} else {
var426 = var_pd->type->type_table[cltype427] == idtype428;
}
if (var426){
{
{ /* Inline model#MMethodDef#msignature (var_pd) on <var_pd:MPropDef(MMethodDef)> */
var431 = var_pd->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_pd:MPropDef(MMethodDef)> */
var429 = var431;
RET_LABEL430:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var434 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var434 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var432 = var434;
RET_LABEL433:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var432) on <var432:MClass> */
var437 = var432->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var432:MClass> */
if (unlikely(var437 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 484);
fatal_exit(1);
}
var435 = var437;
RET_LABEL436:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var440 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var440 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var438 = var440;
RET_LABEL439:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var443 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var443 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var441 = var443;
RET_LABEL442:(void)0;
}
}
if (var429 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 279);
fatal_exit(1);
} else {
var444 = nit___nit__MSignature___MType__resolve_for(var429, var435, var438, var441, 0);
}
var_sig445 = var444;
{
{ /* Inline model#MSignature#mparameters (var_sig445) on <var_sig445:MSignature> */
var448 = var_sig445->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var_sig445:MSignature> */
if (unlikely(var448 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1756);
fatal_exit(1);
}
var446 = var448;
RET_LABEL447:(void)0;
}
}
var_449 = var446;
{
var450 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_449);
}
var_451 = var450;
for(;;) {
{
var452 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_451);
}
if (var452){
{
var453 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_451);
}
var_param454 = var453;
{
{ /* Inline model#MParameter#is_default (var_param454) on <var_param454:MParameter> */
var458 = var_param454->attrs[COLOR_nit__model__MParameter___is_default].s; /* _is_default on <var_param454:MParameter> */
var456 = var458;
RET_LABEL457:(void)0;
}
}
var459 = !var456;
var_460 = var459;
if (var459){
{
{ /* Inline model#MParameter#mtype (var_param454) on <var_param454:MParameter> */
var463 = var_param454->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var_param454:MParameter> */
if (unlikely(var463 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1879);
fatal_exit(1);
}
var461 = var463;
RET_LABEL462:(void)0;
}
}
/* <var461:MType> isa MNullableType */
cltype465 = type_nit__MNullableType.color;
idtype466 = type_nit__MNullableType.id;
if(cltype465 >= var461->type->table_size) {
var464 = 0;
} else {
var464 = var461->type->type_table[cltype465] == idtype466;
}
var455 = var464;
} else {
var455 = var_460;
}
if (var455){
var467 = NEW_nit__MParameter(&type_nit__MParameter);
{
{ /* Inline model#MParameter#name (var_param454) on <var_param454:MParameter> */
var470 = var_param454->attrs[COLOR_nit__model__MParameter___name].val; /* _name on <var_param454:MParameter> */
if (unlikely(var470 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1876);
fatal_exit(1);
}
var468 = var470;
RET_LABEL469:(void)0;
}
}
{
{ /* Inline model#MParameter#mtype (var_param454) on <var_param454:MParameter> */
var473 = var_param454->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var_param454:MParameter> */
if (unlikely(var473 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1879);
fatal_exit(1);
}
var471 = var473;
RET_LABEL472:(void)0;
}
}
{
{ /* Inline model#MParameter#is_vararg (var_param454) on <var_param454:MParameter> */
var476 = var_param454->attrs[COLOR_nit__model__MParameter___is_vararg].s; /* _is_vararg on <var_param454:MParameter> */
var474 = var476;
RET_LABEL475:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var467->class->vft[COLOR_nit__model__MParameter__name_61d]))(var467, var468); /* name= on <var467:MParameter>*/
}
{
((void(*)(val* self, val* p0))(var467->class->vft[COLOR_nit__model__MParameter__mtype_61d]))(var467, var471); /* mtype= on <var467:MParameter>*/
}
{
((void(*)(val* self, short int p0))(var467->class->vft[COLOR_nit__model__MParameter__is_vararg_61d]))(var467, var474); /* is_vararg= on <var467:MParameter>*/
}
{
((void(*)(val* self, short int p0))(var467->class->vft[COLOR_nit__model__MParameter__is_default_61d]))(var467, 1); /* is_default= on <var467:MParameter>*/
}
{
((void(*)(val* self))(var467->class->vft[COLOR_standard__kernel__Object__init]))(var467); /* init on <var467:MParameter>*/
}
var_param454 = var467;
} else {
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_mparameters108, var_param454); /* Direct call array#Array#add on <var_mparameters108:Array[MParameter]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_451); /* Direct call array#ArrayIterator#next on <var_451:ArrayIterator[MParameter]>*/
}
} else {
goto BREAK_label477;
}
}
BREAK_label477: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_451); /* Direct call array#ArrayIterator#finish on <var_451:ArrayIterator[MParameter]>*/
}
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 289);
fatal_exit(1);
}
{
((void(*)(val* self))((((long)var_367&3)?class_info[((long)var_367&3)]:var_367->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_367); /* next on <var_367:Iterator[AExpr]>*/
}
} else {
goto BREAK_label478;
}
}
BREAK_label478: (void)0;
{
((void(*)(val* self))((((long)var_367&3)?class_info[((long)var_367&3)]:var_367->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_367); /* finish on <var_367:Iterator[AExpr]>*/
}
} else {
{
var479 = standard___standard__SequenceRead___Collection__first(var_spropdefs);
}
var_longest = var479;
{
{ /* Inline array#AbstractArrayRead#length (var_spropdefs) on <var_spropdefs:Array[MMethodDef]> */
var482 = var_spropdefs->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_spropdefs:Array[MMethodDef]> */
var480 = var482;
RET_LABEL481:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var480,1l) on <var480:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var485 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var485)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var488 = var480 > 1l;
var483 = var488;
goto RET_LABEL484;
RET_LABEL484:(void)0;
}
}
if (var483){
var_489 = var_spropdefs;
{
var490 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_489);
}
var_491 = var490;
for(;;) {
{
var492 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_491);
}
if (var492){
{
var493 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_491);
}
var_spd = var493;
{
{ /* Inline model#MMethodDef#initializers (var_spd) on <var_spd:MMethodDef> */
var496 = var_spd->attrs[COLOR_nit__model__MMethodDef___initializers].val; /* _initializers on <var_spd:MMethodDef> */
if (unlikely(var496 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2345);
fatal_exit(1);
}
var494 = var496;
RET_LABEL495:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var494) on <var494:Array[MProperty]> */
var499 = var494->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var494:Array[MProperty]> */
var497 = var499;
RET_LABEL498:(void)0;
}
}
{
{ /* Inline model#MMethodDef#initializers (var_longest) on <var_longest:MMethodDef> */
var502 = var_longest->attrs[COLOR_nit__model__MMethodDef___initializers].val; /* _initializers on <var_longest:MMethodDef> */
if (unlikely(var502 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2345);
fatal_exit(1);
}
var500 = var502;
RET_LABEL501:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var500) on <var500:Array[MProperty]> */
var505 = var500->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var500:Array[MProperty]> */
var503 = var505;
RET_LABEL504:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var497,var503) on <var497:Int> */
/* Covariant cast for argument 0 (i) <var503:Int> isa OTHER */
/* <var503:Int> isa OTHER */
var508 = 1; /* easy <var503:Int> isa OTHER*/
if (unlikely(!var508)) {
var_class_name511 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name511);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var512 = var497 > var503;
var506 = var512;
goto RET_LABEL507;
RET_LABEL507:(void)0;
}
}
if (var506){
var_longest = var_spd;
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_491); /* Direct call array#ArrayIterator#next on <var_491:ArrayIterator[MMethodDef]>*/
}
} else {
goto BREAK_label513;
}
}
BREAK_label513: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_491); /* Direct call array#ArrayIterator#finish on <var_491:ArrayIterator[MMethodDef]>*/
}
if (var_noautoinit == NULL) {
var514 = 1; /* is null */
} else {
var514 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_noautoinit,((val*)NULL)) on <var_noautoinit:nullable AAnnotation> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_noautoinit,var_other) on <var_noautoinit:nullable AAnnotation(AAnnotation)> */
var519 = var_noautoinit == var_other;
var517 = var519;
goto RET_LABEL518;
RET_LABEL518:(void)0;
}
}
var515 = var517;
goto RET_LABEL516;
RET_LABEL516:(void)0;
}
var514 = var515;
}
if (var514){
var_520 = var_spropdefs;
{
var521 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_520);
}
var_522 = var521;
for(;;) {
{
var523 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_522);
}
if (var523){
{
var524 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_522);
}
var_spd525 = var524;
var_i = 0l;
{
{ /* Inline model#MMethodDef#initializers (var_spd525) on <var_spd525:MMethodDef> */
var528 = var_spd525->attrs[COLOR_nit__model__MMethodDef___initializers].val; /* _initializers on <var_spd525:MMethodDef> */
if (unlikely(var528 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2345);
fatal_exit(1);
}
var526 = var528;
RET_LABEL527:(void)0;
}
}
var_529 = var526;
{
var530 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_529);
}
var_531 = var530;
for(;;) {
{
var532 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_531);
}
if (var532){
{
var533 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_531);
}
var_p534 = var533;
{
{ /* Inline model#MMethodDef#initializers (var_longest) on <var_longest:MMethodDef> */
var537 = var_longest->attrs[COLOR_nit__model__MMethodDef___initializers].val; /* _initializers on <var_longest:MMethodDef> */
if (unlikely(var537 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2345);
fatal_exit(1);
}
var535 = var537;
RET_LABEL536:(void)0;
}
}
{
var538 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var535, var_i);
}
{
{ /* Inline kernel#Object#!= (var_p534,var538) on <var_p534:MProperty> */
var_other213 = var538;
{
var541 = ((short int(*)(val* self, val* p0))(var_p534->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_p534, var_other213); /* == on <var_p534:MProperty>*/
}
var542 = !var541;
var539 = var542;
goto RET_LABEL540;
RET_LABEL540:(void)0;
}
}
if (var539){
if (unlikely(varonce543==NULL)) {
var544 = NEW_standard__NativeArray(9l, &type_standard__NativeArray__standard__String);
if (likely(varonce545!=NULL)) {
var546 = varonce545;
} else {
var547 = "Error: conflict for inherited inits ";
var548 = standard___standard__NativeString___to_s_with_length(var547, 36l);
var546 = var548;
varonce545 = var546;
}
((struct instance_standard__NativeArray*)var544)->values[0]=var546;
if (likely(varonce549!=NULL)) {
var550 = varonce549;
} else {
var551 = "(";
var552 = standard___standard__NativeString___to_s_with_length(var551, 1l);
var550 = var552;
varonce549 = var550;
}
((struct instance_standard__NativeArray*)var544)->values[2]=var550;
if (likely(varonce553!=NULL)) {
var554 = varonce553;
} else {
var555 = ") and ";
var556 = standard___standard__NativeString___to_s_with_length(var555, 6l);
var554 = var556;
varonce553 = var554;
}
((struct instance_standard__NativeArray*)var544)->values[4]=var554;
if (likely(varonce557!=NULL)) {
var558 = varonce557;
} else {
var559 = "(";
var560 = standard___standard__NativeString___to_s_with_length(var559, 1l);
var558 = var560;
varonce557 = var558;
}
((struct instance_standard__NativeArray*)var544)->values[6]=var558;
if (likely(varonce561!=NULL)) {
var562 = varonce561;
} else {
var563 = ")";
var564 = standard___standard__NativeString___to_s_with_length(var563, 1l);
var562 = var564;
varonce561 = var562;
}
((struct instance_standard__NativeArray*)var544)->values[8]=var562;
} else {
var544 = varonce543;
varonce543 = NULL;
}
{
var565 = ((val*(*)(val* self))(var_spd525->class->vft[COLOR_standard__string__Object__to_s]))(var_spd525); /* to_s on <var_spd525:MMethodDef>*/
}
((struct instance_standard__NativeArray*)var544)->values[1]=var565;
{
{ /* Inline model#MMethodDef#initializers (var_spd525) on <var_spd525:MMethodDef> */
var568 = var_spd525->attrs[COLOR_nit__model__MMethodDef___initializers].val; /* _initializers on <var_spd525:MMethodDef> */
if (unlikely(var568 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2345);
fatal_exit(1);
}
var566 = var568;
RET_LABEL567:(void)0;
}
}
if (likely(varonce569!=NULL)) {
var570 = varonce569;
} else {
var571 = ", ";
var572 = standard___standard__NativeString___to_s_with_length(var571, 2l);
var570 = var572;
varonce569 = var570;
}
{
var573 = standard__string___Collection___join(var566, var570);
}
((struct instance_standard__NativeArray*)var544)->values[3]=var573;
{
var574 = ((val*(*)(val* self))(var_longest->class->vft[COLOR_standard__string__Object__to_s]))(var_longest); /* to_s on <var_longest:MMethodDef>*/
}
((struct instance_standard__NativeArray*)var544)->values[5]=var574;
{
{ /* Inline model#MMethodDef#initializers (var_longest) on <var_longest:MMethodDef> */
var577 = var_longest->attrs[COLOR_nit__model__MMethodDef___initializers].val; /* _initializers on <var_longest:MMethodDef> */
if (unlikely(var577 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2345);
fatal_exit(1);
}
var575 = var577;
RET_LABEL576:(void)0;
}
}
if (likely(varonce578!=NULL)) {
var579 = varonce578;
} else {
var580 = ", ";
var581 = standard___standard__NativeString___to_s_with_length(var580, 2l);
var579 = var581;
varonce578 = var579;
}
{
var582 = standard__string___Collection___join(var575, var579);
}
((struct instance_standard__NativeArray*)var544)->values[7]=var582;
{
var583 = ((val*(*)(val* self))(var544->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var544); /* native_to_s on <var544:NativeArray[String]>*/
}
varonce543 = var544;
{
nit___nit__ModelBuilder___error(self, var_nclassdef, var583); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var586 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var586)) {
var_class_name589 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name589);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var590 = var_i + 1l;
var584 = var590;
goto RET_LABEL585;
RET_LABEL585:(void)0;
}
}
var_i = var584;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_531); /* Direct call array#ArrayIterator#next on <var_531:ArrayIterator[MProperty]>*/
}
} else {
goto BREAK_label591;
}
}
BREAK_label591: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_531); /* Direct call array#ArrayIterator#finish on <var_531:ArrayIterator[MProperty]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_522); /* Direct call array#ArrayIterator#next on <var_522:ArrayIterator[MMethodDef]>*/
}
} else {
goto BREAK_label592;
}
}
BREAK_label592: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_522); /* Direct call array#ArrayIterator#finish on <var_522:ArrayIterator[MMethodDef]>*/
}
} else {
}
} else {
}
if (var_noautoinit == NULL) {
var593 = 0; /* is null */
} else {
var593 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_noautoinit,((val*)NULL)) on <var_noautoinit:nullable AAnnotation> */
var_other213 = ((val*)NULL);
{
var596 = ((short int(*)(val* self, val* p0))(var_noautoinit->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_noautoinit, var_other213); /* == on <var_noautoinit:nullable AAnnotation(AAnnotation)>*/
}
var597 = !var596;
var594 = var597;
goto RET_LABEL595;
RET_LABEL595:(void)0;
}
var593 = var594;
}
if (var593){
{
var599 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_initializers);
}
var_600 = var599;
if (var599){
{
{ /* Inline model#MMethodDef#initializers (var_longest) on <var_longest:MMethodDef> */
var603 = var_longest->attrs[COLOR_nit__model__MMethodDef___initializers].val; /* _initializers on <var_longest:MMethodDef> */
if (unlikely(var603 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2345);
fatal_exit(1);
}
var601 = var603;
RET_LABEL602:(void)0;
}
}
{
var604 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var601);
}
var598 = var604;
} else {
var598 = var_600;
}
if (var598){
if (likely(varonce605!=NULL)) {
var606 = varonce605;
} else {
var607 = "useless-noautoinit";
var608 = standard___standard__NativeString___to_s_with_length(var607, 18l);
var606 = var608;
varonce605 = var606;
}
if (likely(varonce609!=NULL)) {
var610 = varonce609;
} else {
var611 = "Warning: the list of autoinit is already empty.";
var612 = standard___standard__NativeString___to_s_with_length(var611, 47l);
var610 = var612;
varonce609 = var610;
}
{
nit___nit__ModelBuilder___warning(self, var_noautoinit, var606, var610); /* Direct call modelbuilder_base#ModelBuilder#warning on <self:ModelBuilder>*/
}
} else {
}
{
standard___standard__AbstractArray___standard__abstract_collection__RemovableCollection__clear(var_mparameters108); /* Direct call array#AbstractArray#clear on <var_mparameters108:Array[MParameter]>*/
}
{
standard___standard__AbstractArray___standard__abstract_collection__RemovableCollection__clear(var_initializers); /* Direct call array#AbstractArray#clear on <var_initializers:Array[MProperty]>*/
}
} else {
{
{ /* Inline array#AbstractArrayRead#length (var_spropdefs) on <var_spropdefs:Array[MMethodDef]> */
var617 = var_spropdefs->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_spropdefs:Array[MMethodDef]> */
var615 = var617;
RET_LABEL616:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var615,1l) on <var615:Int> */
var620 = var615 == 1l;
var618 = var620;
goto RET_LABEL619;
RET_LABEL619:(void)0;
}
}
var_621 = var618;
if (var618){
{
var622 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_mparameters108);
}
var614 = var622;
} else {
var614 = var_621;
}
var_623 = var614;
if (var614){
if (var_defined_init == NULL) {
var624 = 1; /* is null */
} else {
var624 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_defined_init,((val*)NULL)) on <var_defined_init:nullable MMethodDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_defined_init,var_other) on <var_defined_init:nullable MMethodDef(MMethodDef)> */
var629 = var_defined_init == var_other;
var627 = var629;
goto RET_LABEL628;
RET_LABEL628:(void)0;
}
}
var625 = var627;
goto RET_LABEL626;
RET_LABEL626:(void)0;
}
var624 = var625;
}
var613 = var624;
} else {
var613 = var_623;
}
if (var613){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var632 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var632 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var630 = var632;
RET_LABEL631:(void)0;
}
}
if (unlikely(varonce633==NULL)) {
var634 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce635!=NULL)) {
var636 = varonce635;
} else {
var637 = " inherits the basic constructor ";
var638 = standard___standard__NativeString___to_s_with_length(var637, 32l);
var636 = var638;
varonce635 = var636;
}
((struct instance_standard__NativeArray*)var634)->values[1]=var636;
} else {
var634 = varonce633;
varonce633 = NULL;
}
{
var639 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:MClassDef>*/
}
((struct instance_standard__NativeArray*)var634)->values[0]=var639;
{
var640 = ((val*(*)(val* self))(var_longest->class->vft[COLOR_standard__string__Object__to_s]))(var_longest); /* to_s on <var_longest:MMethodDef>*/
}
((struct instance_standard__NativeArray*)var634)->values[2]=var640;
{
var641 = ((val*(*)(val* self))(var634->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var634); /* native_to_s on <var634:NativeArray[String]>*/
}
varonce633 = var634;
{
nit___nit__ToolContext___info(var630, var641, 3l); /* Direct call toolcontext#ToolContext#info on <var630:ToolContext>*/
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var644 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var644 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var642 = var644;
RET_LABEL643:(void)0;
}
}
{
{ /* Inline modelize_property#MClass#root_init= (var642,var_longest) on <var642:MClass> */
var642->attrs[COLOR_nit__modelize_property__MClass___root_init].val = var_longest; /* _root_init on <var642:MClass> */
RET_LABEL645:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MMethodDef#initializers (var_longest) on <var_longest:MMethodDef> */
var648 = var_longest->attrs[COLOR_nit__model__MMethodDef___initializers].val; /* _initializers on <var_longest:MMethodDef> */
if (unlikely(var648 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2345);
fatal_exit(1);
}
var646 = var648;
RET_LABEL647:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var646) on <var646:Array[MProperty]> */
var651 = var646->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var646:Array[MProperty]> */
var649 = var651;
RET_LABEL650:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var649,0l) on <var649:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var654 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var654)) {
var_class_name657 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name657);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var658 = var649 > 0l;
var652 = var658;
goto RET_LABEL653;
RET_LABEL653:(void)0;
}
}
if (var652){
{
{ /* Inline model#MMethodDef#new_msignature (var_longest) on <var_longest:MMethodDef> */
var661 = var_longest->attrs[COLOR_nit__model__MMethodDef___new_msignature].val; /* _new_msignature on <var_longest:MMethodDef> */
var659 = var661;
RET_LABEL660:(void)0;
}
}
if (var659 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 335);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#mparameters (var659) on <var659:nullable MSignature> */
if (unlikely(var659 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1756);
fatal_exit(1);
}
var664 = var659->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var659:nullable MSignature> */
if (unlikely(var664 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1756);
fatal_exit(1);
}
var662 = var664;
RET_LABEL663:(void)0;
}
}
{
standard___standard__Sequence___prepend(var_mparameters108, var662); /* Direct call abstract_collection#Sequence#prepend on <var_mparameters108:Array[MParameter]>*/
}
{
{ /* Inline model#MMethodDef#initializers (var_longest) on <var_longest:MMethodDef> */
var667 = var_longest->attrs[COLOR_nit__model__MMethodDef___initializers].val; /* _initializers on <var_longest:MMethodDef> */
if (unlikely(var667 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2345);
fatal_exit(1);
}
var665 = var667;
RET_LABEL666:(void)0;
}
}
{
standard___standard__Sequence___prepend(var_initializers, var665); /* Direct call abstract_collection#Sequence#prepend on <var_initializers:Array[MProperty]>*/
}
} else {
}
}
}
if (var_defined_init == NULL) {
var668 = 0; /* is null */
} else {
var668 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_defined_init,((val*)NULL)) on <var_defined_init:nullable MMethodDef> */
var_other213 = ((val*)NULL);
{
var671 = ((short int(*)(val* self, val* p0))(var_defined_init->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_defined_init, var_other213); /* == on <var_defined_init:nullable MMethodDef(MMethodDef)>*/
}
var672 = !var671;
var669 = var672;
goto RET_LABEL670;
RET_LABEL670:(void)0;
}
var668 = var669;
}
if (var668){
{
{ /* Inline model#MMethodDef#initializers (var_defined_init) on <var_defined_init:nullable MMethodDef(MMethodDef)> */
var675 = var_defined_init->attrs[COLOR_nit__model__MMethodDef___initializers].val; /* _initializers on <var_defined_init:nullable MMethodDef(MMethodDef)> */
if (unlikely(var675 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2345);
fatal_exit(1);
}
var673 = var675;
RET_LABEL674:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add_all(var673, var_initializers); /* Direct call array#Array#add_all on <var673:Array[MProperty]>*/
}
var676 = NEW_nit__MSignature(&type_nit__MSignature);
{
((void(*)(val* self, val* p0))(var676->class->vft[COLOR_nit__model__MSignature__mparameters_61d]))(var676, var_mparameters108); /* mparameters= on <var676:MSignature>*/
}
{
((void(*)(val* self, val* p0))(var676->class->vft[COLOR_nit__model__MSignature__return_mtype_61d]))(var676, ((val*)NULL)); /* return_mtype= on <var676:MSignature>*/
}
{
((void(*)(val* self))(var676->class->vft[COLOR_standard__kernel__Object__init]))(var676); /* init on <var676:MSignature>*/
}
var_msignature677 = var676;
{
{ /* Inline model#MMethodDef#new_msignature= (var_defined_init,var_msignature677) on <var_defined_init:nullable MMethodDef(MMethodDef)> */
var_defined_init->attrs[COLOR_nit__model__MMethodDef___new_msignature].val = var_msignature677; /* _new_msignature on <var_defined_init:nullable MMethodDef(MMethodDef)> */
RET_LABEL678:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var681 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var681 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var679 = var681;
RET_LABEL680:(void)0;
}
}
if (unlikely(varonce682==NULL)) {
var683 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce684!=NULL)) {
var685 = varonce684;
} else {
var686 = " extends its basic constructor signature to ";
var687 = standard___standard__NativeString___to_s_with_length(var686, 44l);
var685 = var687;
varonce684 = var685;
}
((struct instance_standard__NativeArray*)var683)->values[1]=var685;
} else {
var683 = varonce682;
varonce682 = NULL;
}
{
var688 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:MClassDef>*/
}
((struct instance_standard__NativeArray*)var683)->values[0]=var688;
{
var689 = ((val*(*)(val* self))(var_defined_init->class->vft[COLOR_standard__string__Object__to_s]))(var_defined_init); /* to_s on <var_defined_init:nullable MMethodDef(MMethodDef)>*/
}
((struct instance_standard__NativeArray*)var683)->values[2]=var689;
{
var690 = ((val*(*)(val* self))(var_msignature677->class->vft[COLOR_standard__string__Object__to_s]))(var_msignature677); /* to_s on <var_msignature677:MSignature>*/
}
((struct instance_standard__NativeArray*)var683)->values[3]=var690;
{
var691 = ((val*(*)(val* self))(var683->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var683); /* native_to_s on <var683:NativeArray[String]>*/
}
varonce682 = var683;
{
nit___nit__ToolContext___info(var679, var691, 3l); /* Direct call toolcontext#ToolContext#info on <var679:ToolContext>*/
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var694 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var694 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var692 = var694;
RET_LABEL693:(void)0;
}
}
{
{ /* Inline modelize_property#MClass#root_init= (var692,var_defined_init) on <var692:MClass> */
var692->attrs[COLOR_nit__modelize_property__MClass___root_init].val = var_defined_init; /* _root_init on <var692:MClass> */
RET_LABEL695:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property#ModelBuilder#the_root_init_mmethod (self) on <self:ModelBuilder> */
var698 = self->attrs[COLOR_nit__modelize_property__ModelBuilder___the_root_init_mmethod].val; /* _the_root_init_mmethod on <self:ModelBuilder> */
var696 = var698;
RET_LABEL697:(void)0;
}
}
if (unlikely(var696 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 352);
fatal_exit(1);
}
var_mprop699 = var696;
var700 = NEW_nit__MMethodDef(&type_nit__MMethodDef);
{
{ /* Inline parser_nodes#ANode#location (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var703 = var_nclassdef->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var703 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var701 = var703;
RET_LABEL702:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var700->class->vft[COLOR_nit__model__MPropDef__mclassdef_61d]))(var700, var_mclassdef); /* mclassdef= on <var700:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var700->class->vft[COLOR_nit__model__MPropDef__mproperty_61d]))(var700, var_mprop699); /* mproperty= on <var700:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var700->class->vft[COLOR_nit__model__MPropDef__location_61d]))(var700, var701); /* location= on <var700:MMethodDef>*/
}
{
((void(*)(val* self))(var700->class->vft[COLOR_standard__kernel__Object__init]))(var700); /* init on <var700:MMethodDef>*/
}
var_mpropdef704 = var700;
{
{ /* Inline modelize_property#MPropDef#has_supercall= (var_mpropdef704,1) on <var_mpropdef704:MMethodDef> */
var_mpropdef704->attrs[COLOR_nit__modelize_property__MPropDef___has_supercall].s = 1; /* _has_supercall on <var_mpropdef704:MMethodDef> */
RET_LABEL705:(void)0;
}
}
{
{ /* Inline model#MMethodDef#initializers (var_mpropdef704) on <var_mpropdef704:MMethodDef> */
var708 = var_mpropdef704->attrs[COLOR_nit__model__MMethodDef___initializers].val; /* _initializers on <var_mpropdef704:MMethodDef> */
if (unlikely(var708 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2345);
fatal_exit(1);
}
var706 = var708;
RET_LABEL707:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add_all(var706, var_initializers); /* Direct call array#Array#add_all on <var706:Array[MProperty]>*/
}
var709 = NEW_nit__MSignature(&type_nit__MSignature);
{
((void(*)(val* self, val* p0))(var709->class->vft[COLOR_nit__model__MSignature__mparameters_61d]))(var709, var_mparameters108); /* mparameters= on <var709:MSignature>*/
}
{
((void(*)(val* self, val* p0))(var709->class->vft[COLOR_nit__model__MSignature__return_mtype_61d]))(var709, ((val*)NULL)); /* return_mtype= on <var709:MSignature>*/
}
{
((void(*)(val* self))(var709->class->vft[COLOR_standard__kernel__Object__init]))(var709); /* init on <var709:MSignature>*/
}
var_msignature710 = var709;
{
{ /* Inline model#MMethodDef#new_msignature= (var_mpropdef704,var_msignature710) on <var_mpropdef704:MMethodDef> */
var_mpropdef704->attrs[COLOR_nit__model__MMethodDef___new_msignature].val = var_msignature710; /* _new_msignature on <var_mpropdef704:MMethodDef> */
RET_LABEL711:(void)0;
}
}
var712 = NEW_nit__MSignature(&type_nit__MSignature);
var713 = NEW_standard__Array(&type_standard__Array__nit__MParameter);
{
standard___standard__Array___standard__kernel__Object__init(var713); /* Direct call array#Array#init on <var713:Array[MParameter]>*/
}
{
((void(*)(val* self, val* p0))(var712->class->vft[COLOR_nit__model__MSignature__mparameters_61d]))(var712, var713); /* mparameters= on <var712:MSignature>*/
}
{
((void(*)(val* self, val* p0))(var712->class->vft[COLOR_nit__model__MSignature__return_mtype_61d]))(var712, ((val*)NULL)); /* return_mtype= on <var712:MSignature>*/
}
{
((void(*)(val* self))(var712->class->vft[COLOR_standard__kernel__Object__init]))(var712); /* init on <var712:MSignature>*/
}
{
{ /* Inline model#MMethodDef#msignature= (var_mpropdef704,var712) on <var_mpropdef704:MMethodDef> */
var_mpropdef704->attrs[COLOR_nit__model__MMethodDef___msignature].val = var712; /* _msignature on <var_mpropdef704:MMethodDef> */
RET_LABEL714:(void)0;
}
}
{
{ /* Inline modelize_property#AClassdef#mfree_init= (var_nclassdef,var_mpropdef704) on <var_nclassdef:AClassdef(AStdClassdef)> */
var_nclassdef->attrs[COLOR_nit__modelize_property__AClassdef___mfree_init].val = var_mpropdef704; /* _mfree_init on <var_nclassdef:AClassdef(AStdClassdef)> */
RET_LABEL715:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var718 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var718 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var716 = var718;
RET_LABEL717:(void)0;
}
}
if (unlikely(varonce719==NULL)) {
var720 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce721!=NULL)) {
var722 = varonce721;
} else {
var723 = " gets a free constructor for attributes ";
var724 = standard___standard__NativeString___to_s_with_length(var723, 40l);
var722 = var724;
varonce721 = var722;
}
((struct instance_standard__NativeArray*)var720)->values[1]=var722;
} else {
var720 = varonce719;
varonce719 = NULL;
}
{
var725 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:MClassDef>*/
}
((struct instance_standard__NativeArray*)var720)->values[0]=var725;
{
var726 = ((val*(*)(val* self))(var_mpropdef704->class->vft[COLOR_standard__string__Object__to_s]))(var_mpropdef704); /* to_s on <var_mpropdef704:MMethodDef>*/
}
((struct instance_standard__NativeArray*)var720)->values[2]=var726;
{
var727 = ((val*(*)(val* self))(var_msignature710->class->vft[COLOR_standard__string__Object__to_s]))(var_msignature710); /* to_s on <var_msignature710:MSignature>*/
}
((struct instance_standard__NativeArray*)var720)->values[3]=var727;
{
var728 = ((val*(*)(val* self))(var720->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var720); /* native_to_s on <var720:NativeArray[String]>*/
}
varonce719 = var720;
{
nit___nit__ToolContext___info(var716, var728, 3l); /* Direct call toolcontext#ToolContext#info on <var716:ToolContext>*/
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var731 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var731 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var729 = var731;
RET_LABEL730:(void)0;
}
}
{
{ /* Inline modelize_property#MClass#root_init= (var729,var_mpropdef704) on <var729:MClass> */
var729->attrs[COLOR_nit__modelize_property__MClass___root_init].val = var_mpropdef704; /* _root_init on <var729:MClass> */
RET_LABEL732:(void)0;
}
}
RET_LABEL:;
}
/* method modelize_property#ModelBuilder#check_visibility for (self: ModelBuilder, ANode, MType, MPropDef) */
void nit__modelize_property___ModelBuilder___check_visibility(val* self, val* p0, val* p1, val* p2) {
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
val* var20 /* : MClassDef */;
val* var22 /* : MClassDef */;
val* var23 /* : MModule */;
val* var25 /* : MModule */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : MVirtualTypeProp */;
val* var31 /* : MVirtualTypeProp */;
val* var32 /* : MVisibility */;
val* var34 /* : MVisibility */;
val* var35 /* : MVirtualTypeProp */;
val* var37 /* : MVirtualTypeProp */;
val* var38 /* : MClassDef */;
val* var40 /* : MClassDef */;
val* var41 /* : MModule */;
val* var43 /* : MModule */;
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
val* var54 /* : FlatString */;
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
val* var77 /* : FlatString */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
val* var81 /* : FlatString */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
val* var85 /* : FlatString */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
val* var89 /* : FlatString */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : NativeString */;
val* var93 /* : FlatString */;
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
val* var111 /* : FlatString */;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : NativeString */;
val* var115 /* : FlatString */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : NativeString */;
val* var119 /* : FlatString */;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : NativeString */;
val* var123 /* : FlatString */;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : NativeString */;
val* var127 /* : FlatString */;
static val* varonce128;
val* var129 /* : String */;
char* var130 /* : NativeString */;
val* var131 /* : FlatString */;
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
val* var169 /* : ArrayIterator[nullable Object] */;
val* var_170 /* var : ArrayIterator[MType] */;
short int var171 /* : Bool */;
val* var172 /* : nullable Object */;
val* var_t173 /* var t: MType */;
var_node = p0;
var_mtype = p1;
var_mpropdef = p2;
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MPropDef> */
var2 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MPropDef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var) on <var:MClassDef> */
var5 = var->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var:MClassDef> */
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
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MPropDef> */
var8 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MPropDef> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
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
var9 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__undecorate]))(var_mtype); /* undecorate on <var_mtype:MType>*/
}
var_mtype = var9;
/* <var_mtype:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var10 = 0;
} else {
var10 = var_mtype->type->type_table[cltype] == idtype;
}
if (var10){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var13 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline model#MClass#visibility (var11) on <var11:MClass> */
var16 = var11->attrs[COLOR_nit__model__MClass___visibility].val; /* _visibility on <var11:MClass> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 440);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
var_vis_type = var14;
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var19 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline model#MClass#intro (var17) on <var17:MClass> */
var22 = var17->attrs[COLOR_nit__model__MClass___intro].val; /* _intro on <var17:MClass> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 460);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var20) on <var20:MClassDef> */
var25 = var20->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var20:MClassDef> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
var_mmodule_type = var23;
} else {
/* <var_mtype:MType> isa MVirtualType */
cltype27 = type_nit__MVirtualType.color;
idtype28 = type_nit__MVirtualType.id;
if(cltype27 >= var_mtype->type->table_size) {
var26 = 0;
} else {
var26 = var_mtype->type->type_table[cltype27] == idtype28;
}
if (var26){
{
{ /* Inline model#MVirtualType#mproperty (var_mtype) on <var_mtype:MType(MVirtualType)> */
var31 = var_mtype->attrs[COLOR_nit__model__MVirtualType___mproperty].val; /* _mproperty on <var_mtype:MType(MVirtualType)> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1344);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline model#MProperty#visibility (var29) on <var29:MVirtualTypeProp> */
var34 = var29->attrs[COLOR_nit__model__MProperty___visibility].val; /* _visibility on <var29:MVirtualTypeProp> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1949);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
var_vis_type = var32;
{
{ /* Inline model#MVirtualType#mproperty (var_mtype) on <var_mtype:MType(MVirtualType)> */
var37 = var_mtype->attrs[COLOR_nit__model__MVirtualType___mproperty].val; /* _mproperty on <var_mtype:MType(MVirtualType)> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1344);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline model#MProperty#intro_mclassdef (var35) on <var35:MVirtualTypeProp> */
var40 = var35->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var35:MVirtualTypeProp> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1928);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var38) on <var38:MClassDef> */
var43 = var38->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var38:MClassDef> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
var_mmodule_type = var41;
} else {
/* <var_mtype:MType> isa MParameterType */
cltype45 = type_nit__MParameterType.color;
idtype46 = type_nit__MParameterType.id;
if(cltype45 >= var_mtype->type->table_size) {
var44 = 0;
} else {
var44 = var_mtype->type->type_table[cltype45] == idtype46;
}
if (var44){
} else {
/* <var_mtype:MType> isa MNullType */
cltype48 = type_nit__MNullType.color;
idtype49 = type_nit__MNullType.id;
if(cltype48 >= var_mtype->type->table_size) {
var47 = 0;
} else {
var47 = var_mtype->type->type_table[cltype48] == idtype49;
}
if (var47){
} else {
if (unlikely(varonce==NULL)) {
var50 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "Unexpected type ";
var54 = standard___standard__NativeString___to_s_with_length(var53, 16l);
var52 = var54;
varonce51 = var52;
}
((struct instance_standard__NativeArray*)var50)->values[0]=var52;
} else {
var50 = varonce;
varonce = NULL;
}
{
var55 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_standard__NativeArray*)var50)->values[1]=var55;
{
var56 = ((val*(*)(val* self))(var50->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var50); /* native_to_s on <var50:NativeArray[String]>*/
}
varonce = var50;
{
nit___nit__ANode___debug(var_node, var56); /* Direct call parser_nodes#ANode#debug on <var_node:ANode>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 387);
fatal_exit(1);
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
var60 = ((short int(*)(val* self, val* p0))(var_vis_type->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_vis_type, var_other); /* == on <var_vis_type:nullable MVisibility(MVisibility)>*/
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
var65 = ((short int(*)(val* self, val* p0))(var_mmodule_type->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mmodule_type, var_other); /* == on <var_mmodule_type:nullable MModule(MModule)>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 391);
fatal_exit(1);
}
{
var67 = nit___nit__MModule___visibility_for(var_mmodule, var_mmodule_type);
}
var_vis_module_type = var67;
{
{ /* Inline model#MProperty#visibility (var_mproperty) on <var_mproperty:MProperty> */
var70 = var_mproperty->attrs[COLOR_nit__model__MProperty___visibility].val; /* _visibility on <var_mproperty:MProperty> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1949);
fatal_exit(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
var71 = standard___standard__Comparable____62d(var68, var_vis_type);
}
if (var71){
if (unlikely(varonce72==NULL)) {
var73 = NEW_standard__NativeArray(9l, &type_standard__NativeArray__standard__String);
if (likely(varonce74!=NULL)) {
var75 = varonce74;
} else {
var76 = "Error: the ";
var77 = standard___standard__NativeString___to_s_with_length(var76, 11l);
var75 = var77;
varonce74 = var75;
}
((struct instance_standard__NativeArray*)var73)->values[0]=var75;
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = " property `";
var81 = standard___standard__NativeString___to_s_with_length(var80, 11l);
var79 = var81;
varonce78 = var79;
}
((struct instance_standard__NativeArray*)var73)->values[2]=var79;
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = "` cannot contain the ";
var85 = standard___standard__NativeString___to_s_with_length(var84, 21l);
var83 = var85;
varonce82 = var83;
}
((struct instance_standard__NativeArray*)var73)->values[4]=var83;
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = " type `";
var89 = standard___standard__NativeString___to_s_with_length(var88, 7l);
var87 = var89;
varonce86 = var87;
}
((struct instance_standard__NativeArray*)var73)->values[6]=var87;
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = "`.";
var93 = standard___standard__NativeString___to_s_with_length(var92, 2l);
var91 = var93;
varonce90 = var91;
}
((struct instance_standard__NativeArray*)var73)->values[8]=var91;
} else {
var73 = varonce72;
varonce72 = NULL;
}
{
{ /* Inline model#MProperty#visibility (var_mproperty) on <var_mproperty:MProperty> */
var96 = var_mproperty->attrs[COLOR_nit__model__MProperty___visibility].val; /* _visibility on <var_mproperty:MProperty> */
if (unlikely(var96 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1949);
fatal_exit(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
{
var97 = ((val*(*)(val* self))(var94->class->vft[COLOR_standard__string__Object__to_s]))(var94); /* to_s on <var94:MVisibility>*/
}
((struct instance_standard__NativeArray*)var73)->values[1]=var97;
{
var98 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_standard__string__Object__to_s]))(var_mproperty); /* to_s on <var_mproperty:MProperty>*/
}
((struct instance_standard__NativeArray*)var73)->values[3]=var98;
{
var99 = ((val*(*)(val* self))(var_vis_type->class->vft[COLOR_standard__string__Object__to_s]))(var_vis_type); /* to_s on <var_vis_type:nullable MVisibility(MVisibility)>*/
}
((struct instance_standard__NativeArray*)var73)->values[5]=var99;
{
var100 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_standard__NativeArray*)var73)->values[7]=var100;
{
var101 = ((val*(*)(val* self))(var73->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var73); /* native_to_s on <var73:NativeArray[String]>*/
}
varonce72 = var73;
{
nit___nit__ModelBuilder___error(self, var_node, var101); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
{
{ /* Inline model#MProperty#visibility (var_mproperty) on <var_mproperty:MProperty> */
var104 = var_mproperty->attrs[COLOR_nit__model__MProperty___visibility].val; /* _visibility on <var_mproperty:MProperty> */
if (unlikely(var104 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1949);
fatal_exit(1);
}
var102 = var104;
RET_LABEL103:(void)0;
}
}
{
var105 = standard___standard__Comparable____62d(var102, var_vis_module_type);
}
if (var105){
if (unlikely(varonce106==NULL)) {
var107 = NEW_standard__NativeArray(11l, &type_standard__NativeArray__standard__String);
if (likely(varonce108!=NULL)) {
var109 = varonce108;
} else {
var110 = "Error: the ";
var111 = standard___standard__NativeString___to_s_with_length(var110, 11l);
var109 = var111;
varonce108 = var109;
}
((struct instance_standard__NativeArray*)var107)->values[0]=var109;
if (likely(varonce112!=NULL)) {
var113 = varonce112;
} else {
var114 = " property `";
var115 = standard___standard__NativeString___to_s_with_length(var114, 11l);
var113 = var115;
varonce112 = var113;
}
((struct instance_standard__NativeArray*)var107)->values[2]=var113;
if (likely(varonce116!=NULL)) {
var117 = varonce116;
} else {
var118 = "` cannot contain the type `";
var119 = standard___standard__NativeString___to_s_with_length(var118, 27l);
var117 = var119;
varonce116 = var117;
}
((struct instance_standard__NativeArray*)var107)->values[4]=var117;
if (likely(varonce120!=NULL)) {
var121 = varonce120;
} else {
var122 = "` from the ";
var123 = standard___standard__NativeString___to_s_with_length(var122, 11l);
var121 = var123;
varonce120 = var121;
}
((struct instance_standard__NativeArray*)var107)->values[6]=var121;
if (likely(varonce124!=NULL)) {
var125 = varonce124;
} else {
var126 = " module `";
var127 = standard___standard__NativeString___to_s_with_length(var126, 9l);
var125 = var127;
varonce124 = var125;
}
((struct instance_standard__NativeArray*)var107)->values[8]=var125;
if (likely(varonce128!=NULL)) {
var129 = varonce128;
} else {
var130 = "`.";
var131 = standard___standard__NativeString___to_s_with_length(var130, 2l);
var129 = var131;
varonce128 = var129;
}
((struct instance_standard__NativeArray*)var107)->values[10]=var129;
} else {
var107 = varonce106;
varonce106 = NULL;
}
{
{ /* Inline model#MProperty#visibility (var_mproperty) on <var_mproperty:MProperty> */
var134 = var_mproperty->attrs[COLOR_nit__model__MProperty___visibility].val; /* _visibility on <var_mproperty:MProperty> */
if (unlikely(var134 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1949);
fatal_exit(1);
}
var132 = var134;
RET_LABEL133:(void)0;
}
}
{
var135 = ((val*(*)(val* self))(var132->class->vft[COLOR_standard__string__Object__to_s]))(var132); /* to_s on <var132:MVisibility>*/
}
((struct instance_standard__NativeArray*)var107)->values[1]=var135;
{
var136 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_standard__string__Object__to_s]))(var_mproperty); /* to_s on <var_mproperty:MProperty>*/
}
((struct instance_standard__NativeArray*)var107)->values[3]=var136;
{
var137 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_standard__NativeArray*)var107)->values[5]=var137;
{
var138 = ((val*(*)(val* self))(var_vis_module_type->class->vft[COLOR_standard__string__Object__to_s]))(var_vis_module_type); /* to_s on <var_vis_module_type:MVisibility>*/
}
((struct instance_standard__NativeArray*)var107)->values[7]=var138;
{
var139 = ((val*(*)(val* self))(var_mmodule_type->class->vft[COLOR_standard__string__Object__to_s]))(var_mmodule_type); /* to_s on <var_mmodule_type:nullable MModule(MModule)>*/
}
((struct instance_standard__NativeArray*)var107)->values[9]=var139;
{
var140 = ((val*(*)(val* self))(var107->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var107); /* native_to_s on <var107:NativeArray[String]>*/
}
varonce106 = var107;
{
nit___nit__ModelBuilder___error(self, var_node, var140); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
}
} else {
}
/* <var_node:ANode> isa AType */
cltype142 = type_nit__AType.color;
idtype143 = type_nit__AType.id;
if(cltype142 >= var_node->type->table_size) {
var141 = 0;
} else {
var141 = var_node->type->type_table[cltype142] == idtype143;
}
if (var141){
{
{ /* Inline parser_nodes#AType#n_types (var_node) on <var_node:ANode(AType)> */
var146 = var_node->attrs[COLOR_nit__parser_nodes__AType___n_types].val; /* _n_types on <var_node:ANode(AType)> */
if (unlikely(var146 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1729);
fatal_exit(1);
}
var144 = var146;
RET_LABEL145:(void)0;
}
}
var_ = var144;
{
var147 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_);
}
var_148 = var147;
for(;;) {
{
var149 = ((short int(*)(val* self))((((long)var_148&3)?class_info[((long)var_148&3)]:var_148->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_148); /* is_ok on <var_148:Iterator[AType]>*/
}
if (var149){
{
var150 = ((val*(*)(val* self))((((long)var_148&3)?class_info[((long)var_148&3)]:var_148->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_148); /* item on <var_148:Iterator[AType]>*/
}
var_a = var150;
{
{ /* Inline modelbuilder_base#AType#mtype (var_a) on <var_a:AType> */
var153 = var_a->attrs[COLOR_nit__modelbuilder_base__AType___mtype].val; /* _mtype on <var_a:AType> */
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
goto BREAK_label;
} else {
}
{
nit__modelize_property___ModelBuilder___check_visibility(self, var_a, var_t, var_mpropdef); /* Direct call modelize_property#ModelBuilder#check_visibility on <self:ModelBuilder>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_148&3)?class_info[((long)var_148&3)]:var_148->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_148); /* next on <var_148:Iterator[AType]>*/
}
} else {
goto BREAK_label161;
}
}
BREAK_label161: (void)0;
{
((void(*)(val* self))((((long)var_148&3)?class_info[((long)var_148&3)]:var_148->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_148); /* finish on <var_148:Iterator[AType]>*/
}
} else {
/* <var_mtype:MType> isa MGenericType */
cltype163 = type_nit__MGenericType.color;
idtype164 = type_nit__MGenericType.id;
if(cltype163 >= var_mtype->type->table_size) {
var162 = 0;
} else {
var162 = var_mtype->type->type_table[cltype163] == idtype164;
}
if (var162){
{
{ /* Inline model#MGenericType#arguments (var_mtype) on <var_mtype:MType(MGenericType)> */
var167 = var_mtype->attrs[COLOR_nit__model__MGenericType___arguments].val; /* _arguments on <var_mtype:MType(MGenericType)> */
if (unlikely(var167 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1244);
fatal_exit(1);
}
var165 = var167;
RET_LABEL166:(void)0;
}
}
var_168 = var165;
{
var169 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_168);
}
var_170 = var169;
for(;;) {
{
var171 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_170);
}
if (var171){
{
var172 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_170);
}
var_t173 = var172;
{
nit__modelize_property___ModelBuilder___check_visibility(self, var_node, var_t173, var_mpropdef); /* Direct call modelize_property#ModelBuilder#check_visibility on <self:ModelBuilder>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_170); /* Direct call array#ArrayIterator#next on <var_170:ArrayIterator[MType]>*/
}
} else {
goto BREAK_label174;
}
}
BREAK_label174: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_170); /* Direct call array#ArrayIterator#finish on <var_170:ArrayIterator[MType]>*/
}
} else {
}
}
RET_LABEL:;
}
/* method modelize_property#ModelBuilder#check_virtual_types_circularity for (self: ModelBuilder, ANode, MVirtualTypeProp, MType, MModule): Bool */
short int nit__modelize_property___ModelBuilder___check_virtual_types_circularity(val* self, val* p0, val* p1, val* p2, val* p3) {
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
short int var32 /* : Bool */;
val* var33 /* : Array[MType] */;
val* var_34 /* var : Array[MVirtualTypeDef] */;
val* var35 /* : ArrayIterator[nullable Object] */;
val* var_36 /* var : ArrayIterator[MVirtualTypeDef] */;
short int var37 /* : Bool */;
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
short int var50 /* : Bool */;
int cltype51;
int idtype52;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
val* var_56 /* var : Array[MType] */;
val* var57 /* : ArrayIterator[nullable Object] */;
val* var_58 /* var : ArrayIterator[MType] */;
short int var59 /* : Bool */;
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
val* var72 /* : FlatString */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
val* var76 /* : FlatString */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
val* var80 /* : FlatString */;
val* var81 /* : String */;
val* var82 /* : String */;
val* var83 /* : String */;
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
val* var105 /* : String */;
var_node = p0;
var_mproperty = p1;
var_recv = p2;
var_mmodule = p3;
{
{ /* Inline model#MVirtualTypeProp#mvirtualtype (var_mproperty) on <var_mproperty:MVirtualTypeProp> */
var3 = var_mproperty->attrs[COLOR_nit__model__MVirtualTypeProp___mvirtualtype].val; /* _mvirtualtype on <var_mproperty:MVirtualTypeProp> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mvirtualtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2191);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_mtype = var1;
var4 = NEW_poset__POSet(&type_poset__POSet__nit__MType);
{
{ /* Inline kernel#Object#init (var4) on <var4:POSet[MType]> */
RET_LABEL5:(void)0;
}
}
var_poset = var4;
var6 = NEW_standard__List(&type_standard__List__nit__MType);
{
{ /* Inline list#List#init (var6) on <var6:List[MType]> */
RET_LABEL7:(void)0;
}
}
var_todo = var6;
{
standard___standard__Sequence___SimpleCollection__add(var_todo, var_mtype); /* Direct call abstract_collection#Sequence#add on <var_todo:List[MType]>*/
}
for(;;) {
{
var8 = standard___standard__List___standard__abstract_collection__Collection__is_empty(var_todo);
}
var9 = !var8;
if (var9){
{
var10 = standard___standard__List___standard__abstract_collection__Sequence__pop(var_todo);
}
var_t = var10;
{
var11 = ((short int(*)(val* self))(var_t->class->vft[COLOR_nit__model__MType__need_anchor]))(var_t); /* need_anchor on <var_t:MType>*/
}
var12 = !var11;
if (var12){
goto BREAK_label;
} else {
}
/* <var_t:MType> isa MNullableType */
cltype = type_nit__MNullableType.color;
idtype = type_nit__MNullableType.id;
if(cltype >= var_t->type->table_size) {
var13 = 0;
} else {
var13 = var_t->type->type_table[cltype] == idtype;
}
if (var13){
var14 = NEW_standard__Array(&type_standard__Array__nit__MType);
{
standard___standard__Array___with_capacity(var14, 1l); /* Direct call array#Array#with_capacity on <var14:Array[MType]>*/
}
var_ = var14;
{
{ /* Inline model#MProxyType#mtype (var_t) on <var_t:MType(MNullableType)> */
var17 = var_t->attrs[COLOR_nit__model__MProxyType___mtype].val; /* _mtype on <var_t:MType(MNullableType)> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1598);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var15); /* Direct call array#AbstractArray#push on <var_:Array[MType]>*/
}
var_nexts = var_;
} else {
/* <var_t:MType> isa MGenericType */
cltype19 = type_nit__MGenericType.color;
idtype20 = type_nit__MGenericType.id;
if(cltype19 >= var_t->type->table_size) {
var18 = 0;
} else {
var18 = var_t->type->type_table[cltype19] == idtype20;
}
if (var18){
{
{ /* Inline model#MGenericType#arguments (var_t) on <var_t:MType(MGenericType)> */
var23 = var_t->attrs[COLOR_nit__model__MGenericType___arguments].val; /* _arguments on <var_t:MType(MGenericType)> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1244);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
var_nexts = var21;
} else {
/* <var_t:MType> isa MVirtualType */
cltype25 = type_nit__MVirtualType.color;
idtype26 = type_nit__MVirtualType.id;
if(cltype25 >= var_t->type->table_size) {
var24 = 0;
} else {
var24 = var_t->type->type_table[cltype25] == idtype26;
}
if (var24){
{
{ /* Inline model#MVirtualType#mproperty (var_t) on <var_t:MType(MVirtualType)> */
var29 = var_t->attrs[COLOR_nit__model__MVirtualType___mproperty].val; /* _mproperty on <var_t:MType(MVirtualType)> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1344);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_vt = var27;
{
var30 = nit___nit__MProperty___lookup_definitions(var_vt, var_mmodule, var_recv);
}
var_defs = var30;
{
var31 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_defs);
}
var32 = !var31;
if (unlikely(!var32)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 445);
fatal_exit(1);
}
var33 = NEW_standard__Array(&type_standard__Array__nit__MType);
{
standard___standard__Array___standard__kernel__Object__init(var33); /* Direct call array#Array#init on <var33:Array[MType]>*/
}
var_nexts = var33;
var_34 = var_defs;
{
var35 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_34);
}
var_36 = var35;
for(;;) {
{
var37 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_36);
}
if (var37){
{
var38 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_36);
}
var_d = var38;
{
var39 = standard___standard__SequenceRead___Collection__first(var_defs);
}
{
{ /* Inline model#MVirtualTypeDef#bound (var39) on <var39:nullable Object(MVirtualTypeDef)> */
var42 = var39->attrs[COLOR_nit__model__MVirtualTypeDef___bound].val; /* _bound on <var39:nullable Object(MVirtualTypeDef)> */
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
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_nexts, var_next); /* Direct call array#Array#add on <var_nexts:nullable Object(Array[MType])>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_36); /* Direct call array#ArrayIterator#next on <var_36:ArrayIterator[MVirtualTypeDef]>*/
}
} else {
goto BREAK_label49;
}
}
BREAK_label49: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_36); /* Direct call array#ArrayIterator#finish on <var_36:ArrayIterator[MVirtualTypeDef]>*/
}
} else {
/* <var_t:MType> isa MClassType */
cltype51 = type_nit__MClassType.color;
idtype52 = type_nit__MClassType.id;
if(cltype51 >= var_t->type->table_size) {
var50 = 0;
} else {
var50 = var_t->type->type_table[cltype51] == idtype52;
}
if (var50){
goto BREAK_label;
} else {
/* <var_t:MType> isa MParameterType */
cltype54 = type_nit__MParameterType.color;
idtype55 = type_nit__MParameterType.id;
if(cltype54 >= var_t->type->table_size) {
var53 = 0;
} else {
var53 = var_t->type->type_table[cltype54] == idtype55;
}
if (var53){
goto BREAK_label;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 459);
fatal_exit(1);
}
}
}
}
}
var_56 = var_nexts;
{
var57 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_56);
}
var_58 = var57;
for(;;) {
{
var59 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_58);
}
if (var59){
{
var60 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_58);
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
var68 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce69!=NULL)) {
var70 = varonce69;
} else {
var71 = "Error: circularity of virtual type definition: ";
var72 = standard___standard__NativeString___to_s_with_length(var71, 47l);
var70 = var72;
varonce69 = var70;
}
((struct instance_standard__NativeArray*)var68)->values[0]=var70;
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = " <-> ";
var76 = standard___standard__NativeString___to_s_with_length(var75, 5l);
var74 = var76;
varonce73 = var74;
}
((struct instance_standard__NativeArray*)var68)->values[2]=var74;
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = ".";
var80 = standard___standard__NativeString___to_s_with_length(var79, 1l);
var78 = var80;
varonce77 = var78;
}
((struct instance_standard__NativeArray*)var68)->values[4]=var78;
} else {
var68 = varonce;
varonce = NULL;
}
{
var81 = ((val*(*)(val* self))(var_next61->class->vft[COLOR_standard__string__Object__to_s]))(var_next61); /* to_s on <var_next61:MType>*/
}
((struct instance_standard__NativeArray*)var68)->values[1]=var81;
{
var82 = ((val*(*)(val* self))(var_t->class->vft[COLOR_standard__string__Object__to_s]))(var_t); /* to_s on <var_t:MType>*/
}
((struct instance_standard__NativeArray*)var68)->values[3]=var82;
{
var83 = ((val*(*)(val* self))(var68->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var68); /* native_to_s on <var68:NativeArray[String]>*/
}
varonce = var68;
{
nit___nit__ModelBuilder___error(self, var_node, var83); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
if (unlikely(varonce84==NULL)) {
var85 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = "Error: circularity of virtual type definition: ";
var89 = standard___standard__NativeString___to_s_with_length(var88, 47l);
var87 = var89;
varonce86 = var87;
}
((struct instance_standard__NativeArray*)var85)->values[0]=var87;
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = " -> ";
var93 = standard___standard__NativeString___to_s_with_length(var92, 4l);
var91 = var93;
varonce90 = var91;
}
((struct instance_standard__NativeArray*)var85)->values[2]=var91;
if (likely(varonce94!=NULL)) {
var95 = varonce94;
} else {
var96 = " <-> ";
var97 = standard___standard__NativeString___to_s_with_length(var96, 5l);
var95 = var97;
varonce94 = var95;
}
((struct instance_standard__NativeArray*)var85)->values[4]=var95;
if (likely(varonce98!=NULL)) {
var99 = varonce98;
} else {
var100 = ".";
var101 = standard___standard__NativeString___to_s_with_length(var100, 1l);
var99 = var101;
varonce98 = var99;
}
((struct instance_standard__NativeArray*)var85)->values[6]=var99;
} else {
var85 = varonce84;
varonce84 = NULL;
}
{
var102 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MVirtualType>*/
}
((struct instance_standard__NativeArray*)var85)->values[1]=var102;
{
var103 = ((val*(*)(val* self))(var_next61->class->vft[COLOR_standard__string__Object__to_s]))(var_next61); /* to_s on <var_next61:MType>*/
}
((struct instance_standard__NativeArray*)var85)->values[3]=var103;
{
var104 = ((val*(*)(val* self))(var_t->class->vft[COLOR_standard__string__Object__to_s]))(var_t); /* to_s on <var_t:MType>*/
}
((struct instance_standard__NativeArray*)var85)->values[5]=var104;
{
var105 = ((val*(*)(val* self))(var85->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var85); /* native_to_s on <var85:NativeArray[String]>*/
}
varonce84 = var85;
{
nit___nit__ModelBuilder___error(self, var_node, var105); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
}
var = 0;
goto RET_LABEL;
} else {
{
poset___poset__POSet___add_edge(var_poset, var_t, var_next61); /* Direct call poset#POSet#add_edge on <var_poset:POSet[MType]>*/
}
{
standard___standard__Sequence___SimpleCollection__add(var_todo, var_next61); /* Direct call abstract_collection#Sequence#add on <var_todo:List[MType]>*/
}
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_58); /* Direct call array#ArrayIterator#next on <var_58:ArrayIterator[MType]>*/
}
} else {
goto BREAK_label106;
}
}
BREAK_label106: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_58); /* Direct call array#ArrayIterator#finish on <var_58:ArrayIterator[MType]>*/
}
} else {
goto BREAK_label107;
}
BREAK_label: (void)0;
}
BREAK_label107: (void)0;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#MPropDef#has_supercall for (self: MPropDef): Bool */
short int nit__modelize_property___MPropDef___has_supercall(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__modelize_property__MPropDef___has_supercall].s; /* _has_supercall on <self:MPropDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#MPropDef#has_supercall= for (self: MPropDef, Bool) */
void nit__modelize_property___MPropDef___has_supercall_61d(val* self, short int p0) {
self->attrs[COLOR_nit__modelize_property__MPropDef___has_supercall].s = p0; /* _has_supercall on <self:MPropDef> */
RET_LABEL:;
}
/* method modelize_property#AClassdef#build_properties_is_done for (self: AClassdef): Bool */
short int nit__modelize_property___AClassdef___build_properties_is_done(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__modelize_property__AClassdef___build_properties_is_done].s; /* _build_properties_is_done on <self:AClassdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AClassdef#build_properties_is_done= for (self: AClassdef, Bool) */
void nit__modelize_property___AClassdef___build_properties_is_done_61d(val* self, short int p0) {
self->attrs[COLOR_nit__modelize_property__AClassdef___build_properties_is_done].s = p0; /* _build_properties_is_done on <self:AClassdef> */
RET_LABEL:;
}
/* method modelize_property#AClassdef#mfree_init for (self: AClassdef): nullable MMethodDef */
val* nit__modelize_property___AClassdef___mfree_init(val* self) {
val* var /* : nullable MMethodDef */;
val* var1 /* : nullable MMethodDef */;
var1 = self->attrs[COLOR_nit__modelize_property__AClassdef___mfree_init].val; /* _mfree_init on <self:AClassdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AClassdef#mfree_init= for (self: AClassdef, nullable MMethodDef) */
void nit__modelize_property___AClassdef___mfree_init_61d(val* self, val* p0) {
self->attrs[COLOR_nit__modelize_property__AClassdef___mfree_init].val = p0; /* _mfree_init on <self:AClassdef> */
RET_LABEL:;
}
/* method modelize_property#MClass#root_init for (self: MClass): nullable MMethodDef */
val* nit__modelize_property___MClass___root_init(val* self) {
val* var /* : nullable MMethodDef */;
val* var1 /* : nullable MMethodDef */;
var1 = self->attrs[COLOR_nit__modelize_property__MClass___root_init].val; /* _root_init on <self:MClass> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#MClass#root_init= for (self: MClass, nullable MMethodDef) */
void nit__modelize_property___MClass___root_init_61d(val* self, val* p0) {
self->attrs[COLOR_nit__modelize_property__MClass___root_init].val = p0; /* _root_init on <self:MClass> */
RET_LABEL:;
}
/* method modelize_property#MClassDef#mprop2npropdef for (self: MClassDef): Map[MProperty, APropdef] */
val* nit__modelize_property___MClassDef___mprop2npropdef(val* self) {
val* var /* : Map[MProperty, APropdef] */;
val* var1 /* : Map[MProperty, APropdef] */;
var1 = self->attrs[COLOR_nit__modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <self:MClassDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 505);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#MClassDef#build_self_type for (self: MClassDef, ModelBuilder, AClassdef) */
void nit__modelize_property___MClassDef___build_self_type(val* self, val* p0, val* p1) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_nclassdef /* var nclassdef: AClassdef */;
short int var /* : Bool */;
short int var1 /* : Bool */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : FlatString */;
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
val* var38 /* : FlatString */;
short int var39 /* : Bool */;
val* var_other41 /* var other: nullable Object */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
val* var47 /* : FlatString */;
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
val* var60 /* : FlatString */;
short int var61 /* : Bool */;
short int var63 /* : Bool */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
val* var67 /* : FlatString */;
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
var = nit___nit__MClassDef___is_intro(self);
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
var4 = standard___standard__NativeString___to_s_with_length(var3, 4l);
var2 = var4;
varonce = var2;
}
var_name = var2;
{
var5 = nit___nit__ModelBuilder___try_get_mproperty_by_name(var_modelbuilder, var_nclassdef, self, var_name);
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
cltype = type_nit__MVirtualTypeProp.color;
idtype = type_nit__MVirtualTypeProp.id;
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
var16 = var_mprop->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var_mprop:nullable MProperty(MVirtualTypeProp)> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1968);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
var_intro = var14;
{
{ /* Inline model#MPropDef#mclassdef (var_intro) on <var_intro:MVirtualTypeDef> */
var19 = var_intro->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_intro:MVirtualTypeDef> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
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
var27 = var_modelbuilder->attrs[COLOR_nit__modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 40);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
var28 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var25, var_intro);
}
var_nintro = var28;
{
{ /* Inline model#MClassDef#mclass (var_intro_mclassdef) on <var_intro_mclassdef:MClassDef> */
var31 = var_intro_mclassdef->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_intro_mclassdef:MClassDef> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline model#MClass#name (var29) on <var29:MClass> */
var34 = var29->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var29:MClass> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
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
var38 = standard___standard__NativeString___to_s_with_length(var37, 6l);
var36 = var38;
varonce35 = var36;
}
{
{ /* Inline kernel#Object#!= (var32,var36) on <var32:String> */
var_other41 = var36;
{
var42 = ((short int(*)(val* self, val* p0))(var32->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var32, var_other41); /* == on <var32:String>*/
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
var47 = standard___standard__NativeString___to_s_with_length(var46, 60l);
var45 = var47;
varonce44 = var45;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_nintro, var45); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
{
{ /* Inline model#MProperty#visibility (var_mprop) on <var_mprop:nullable MProperty(MVirtualTypeProp)> */
var50 = var_mprop->attrs[COLOR_nit__model__MProperty___visibility].val; /* _visibility on <var_mprop:nullable MProperty(MVirtualTypeProp)> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1949);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
var51 = glob_sys;
{
var52 = nit__model_base___standard__Sys___public_visibility(var51);
}
{
{ /* Inline kernel#Object#!= (var48,var52) on <var48:MVisibility> */
var_other41 = var52;
{
var55 = ((short int(*)(val* self, val* p0))(var48->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var48, var_other41); /* == on <var48:MVisibility>*/
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
var60 = standard___standard__NativeString___to_s_with_length(var59, 46l);
var58 = var60;
varonce57 = var58;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_nintro, var58); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
{
{ /* Inline model#MVirtualTypeDef#is_fixed (var_intro) on <var_intro:MVirtualTypeDef> */
var63 = var_intro->attrs[COLOR_nit__model__MVirtualTypeDef___is_fixed].s; /* _is_fixed on <var_intro:MVirtualTypeDef> */
var61 = var63;
RET_LABEL62:(void)0;
}
}
if (var61){
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = "Error: the virtual type `SELF` cannot be fixed.";
var67 = standard___standard__NativeString___to_s_with_length(var66, 47l);
var65 = var67;
varonce64 = var65;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_nintro, var65); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
goto RET_LABEL;
} else {
}
var68 = NEW_nit__MVirtualTypeDef(&type_nit__MVirtualTypeDef);
{
{ /* Inline model#MClassDef#location (self) on <self:MClassDef> */
var71 = self->attrs[COLOR_nit__model__MClassDef___location].val; /* _location on <self:MClassDef> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 568);
fatal_exit(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var68->class->vft[COLOR_nit__model__MPropDef__mclassdef_61d]))(var68, self); /* mclassdef= on <var68:MVirtualTypeDef>*/
}
{
((void(*)(val* self, val* p0))(var68->class->vft[COLOR_nit__model__MPropDef__mproperty_61d]))(var68, var_mprop); /* mproperty= on <var68:MVirtualTypeDef>*/
}
{
((void(*)(val* self, val* p0))(var68->class->vft[COLOR_nit__model__MPropDef__location_61d]))(var68, var69); /* location= on <var68:MVirtualTypeDef>*/
}
{
((void(*)(val* self))(var68->class->vft[COLOR_standard__kernel__Object__init]))(var68); /* init on <var68:MVirtualTypeDef>*/
}
var_mpropdef = var68;
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var74 = self->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var72) on <var72:MClass> */
var77 = var72->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var72:MClass> */
if (unlikely(var77 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 484);
fatal_exit(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
{
{ /* Inline model#MVirtualTypeDef#bound= (var_mpropdef,var75) on <var_mpropdef:MVirtualTypeDef> */
var_mpropdef->attrs[COLOR_nit__model__MVirtualTypeDef___bound].val = var75; /* _bound on <var_mpropdef:MVirtualTypeDef> */
RET_LABEL78:(void)0;
}
}
RET_LABEL:;
}
/* method modelize_property#APropdef#mpropdef for (self: APropdef): nullable MPropDef */
val* nit__modelize_property___APropdef___mpropdef(val* self) {
val* var /* : nullable MPropDef */;
val* var1 /* : nullable MPropDef */;
var1 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:APropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#APropdef#mpropdef= for (self: APropdef, nullable MPropDef) */
void nit__modelize_property___APropdef___mpropdef_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (mpropdef) <p0:nullable MPropDef> isa nullable MPROPDEF */
/* <p0:nullable MPropDef> isa nullable MPROPDEF */
type_struct = self->type->resolution_table->types[COLOR_nullable__nit__modelize_property__APropdef__MPROPDEF];
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 558);
fatal_exit(1);
}
self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val = p0; /* _mpropdef on <self:APropdef> */
RET_LABEL:;
}
/* method modelize_property#APropdef#build_property for (self: APropdef, ModelBuilder, MClassDef) */
void nit__modelize_property___APropdef___build_property(val* self, val* p0, val* p1) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_mclassdef /* var mclassdef: MClassDef */;
var_modelbuilder = p0;
var_mclassdef = p1;
RET_LABEL:;
}
/* method modelize_property#APropdef#build_signature for (self: APropdef, ModelBuilder) */
void nit__modelize_property___APropdef___build_signature(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
var_modelbuilder = p0;
RET_LABEL:;
}
/* method modelize_property#APropdef#check_signature for (self: APropdef, ModelBuilder) */
void nit__modelize_property___APropdef___check_signature(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
var_modelbuilder = p0;
RET_LABEL:;
}
/* method modelize_property#APropdef#new_property_visibility for (self: APropdef, ModelBuilder, MClassDef, nullable AVisibility): MVisibility */
val* nit__modelize_property___APropdef___new_property_visibility(val* self, val* p0, val* p1, val* p2) {
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
val* var19 /* : FlatString */;
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
val* var50 /* : FlatString */;
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
val* var66 /* : FlatString */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
val* var70 /* : FlatString */;
val* var71 /* : Sys */;
val* var72 /* : MVisibility */;
var_modelbuilder = p0;
var_mclassdef = p1;
var_nvisibility = p2;
var1 = glob_sys;
{
var2 = nit__model_base___standard__Sys___public_visibility(var1);
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
var6 = ((short int(*)(val* self, val* p0))(var_nvisibility->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nvisibility, var_other); /* == on <var_nvisibility:nullable AVisibility(AVisibility)>*/
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
var8 = ((val*(*)(val* self))(var_nvisibility->class->vft[COLOR_nit__modelbuilder_base__AVisibility__mvisibility]))(var_nvisibility); /* mvisibility on <var_nvisibility:nullable AVisibility(AVisibility)>*/
}
var_mvisibility = var8;
var9 = glob_sys;
{
var10 = nit__model_base___standard__Sys___intrude_visibility(var9);
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
var19 = standard___standard__NativeString___to_s_with_length(var18, 58l);
var17 = var19;
varonce = var17;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_nvisibility, var17); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
var20 = glob_sys;
{
var21 = nit__model_base___standard__Sys___public_visibility(var20);
}
var_mvisibility = var21;
} else {
}
} else {
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var24 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline model#MClass#visibility (var22) on <var22:MClass> */
var27 = var22->attrs[COLOR_nit__model__MClass___visibility].val; /* _visibility on <var22:MClass> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 440);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
var28 = glob_sys;
{
var29 = nit__model_base___standard__Sys___private_visibility(var28);
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
var36 = nit__model_base___standard__Sys___protected_visibility(var35);
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
var45 = ((short int(*)(val* self, val* p0))(var_nvisibility->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nvisibility, var_other); /* == on <var_nvisibility:nullable AVisibility(AVisibility)>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 576);
fatal_exit(1);
}
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "Error: `private` is the only legal visibility for properties in a private class.";
var50 = standard___standard__NativeString___to_s_with_length(var49, 80l);
var48 = var50;
varonce47 = var48;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_nvisibility, var48); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
var51 = glob_sys;
{
var52 = nit__model_base___standard__Sys___private_visibility(var51);
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
var61 = ((short int(*)(val* self, val* p0))(var_nvisibility->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nvisibility, var_other); /* == on <var_nvisibility:nullable AVisibility(AVisibility)>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 579);
fatal_exit(1);
}
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "useless-visibility";
var66 = standard___standard__NativeString___to_s_with_length(var65, 18l);
var64 = var66;
varonce63 = var64;
}
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = "Warning: `private` is superfluous since the only legal visibility for properties in a private class is private.";
var70 = standard___standard__NativeString___to_s_with_length(var69, 111l);
var68 = var70;
varonce67 = var68;
}
{
nit___nit__ModelBuilder___advice(var_modelbuilder, var_nvisibility, var64, var68); /* Direct call modelbuilder_base#ModelBuilder#advice on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
}
var71 = glob_sys;
{
var72 = nit__model_base___standard__Sys___private_visibility(var71);
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
void nit__modelize_property___APropdef___set_doc(val* self, val* p0, val* p1) {
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
val* var24 /* : FlatString */;
val* var26 /* : NativeArray[String] */;
static val* varonce25;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
val* var30 /* : FlatString */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
val* var34 /* : FlatString */;
val* var35 /* : MProperty */;
val* var37 /* : MProperty */;
val* var38 /* : String */;
val* var39 /* : String */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
val* var43 /* : FlatString */;
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
val* var55 /* : FlatString */;
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
var2 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:APropdef> */
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
var6 = ((short int(*)(val* self, val* p0))(var_ndoc->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ndoc, var_other); /* == on <var_ndoc:nullable ADoc(ADoc)>*/
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
var8 = nit__modelbuilder_base___ADoc___to_mdoc(var_ndoc);
}
var_mdoc = var8;
{
{ /* Inline mdoc#MEntity#mdoc= (var_mpropdef,var_mdoc) on <var_mpropdef:MPropDef> */
var_mpropdef->attrs[COLOR_nit__mdoc__MEntity___mdoc].val = var_mdoc; /* _mdoc on <var_mpropdef:MPropDef> */
RET_LABEL9:(void)0;
}
}
{
{ /* Inline mdoc#MDoc#original_mentity= (var_mdoc,var_mpropdef) on <var_mdoc:MDoc> */
var_mdoc->attrs[COLOR_nit__mdoc__MDoc___original_mentity].val = var_mpropdef; /* _original_mentity on <var_mdoc:MDoc> */
RET_LABEL10:(void)0;
}
}
} else {
{
var12 = nit___nit__MPropDef___is_intro(var_mpropdef);
}
var_ = var12;
if (var12){
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MPropDef> */
var15 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MPropDef> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline model#MProperty#visibility (var13) on <var13:MProperty> */
var18 = var13->attrs[COLOR_nit__model__MProperty___visibility].val; /* _visibility on <var13:MProperty> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1949);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var19 = glob_sys;
{
var20 = nit__model_base___standard__Sys___protected_visibility(var19);
}
{
var21 = standard___standard__Comparable____62d_61d(var16, var20);
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
var24 = standard___standard__NativeString___to_s_with_length(var23, 11l);
var22 = var24;
varonce = var22;
}
if (unlikely(varonce25==NULL)) {
var26 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "Documentation warning: Undocumented property `";
var30 = standard___standard__NativeString___to_s_with_length(var29, 46l);
var28 = var30;
varonce27 = var28;
}
((struct instance_standard__NativeArray*)var26)->values[0]=var28;
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "`";
var34 = standard___standard__NativeString___to_s_with_length(var33, 1l);
var32 = var34;
varonce31 = var32;
}
((struct instance_standard__NativeArray*)var26)->values[2]=var32;
} else {
var26 = varonce25;
varonce25 = NULL;
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MPropDef> */
var37 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MPropDef> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
var38 = ((val*(*)(val* self))(var35->class->vft[COLOR_standard__string__Object__to_s]))(var35); /* to_s on <var35:MProperty>*/
}
((struct instance_standard__NativeArray*)var26)->values[1]=var38;
{
var39 = ((val*(*)(val* self))(var26->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var26); /* native_to_s on <var26:NativeArray[String]>*/
}
varonce25 = var26;
{
nit___nit__ModelBuilder___advice(var_modelbuilder, self, var22, var39); /* Direct call modelbuilder_base#ModelBuilder#advice on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
}
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "deprecated";
var43 = standard___standard__NativeString___to_s_with_length(var42, 10l);
var41 = var43;
varonce40 = var41;
}
{
var44 = nit__annotation___Prod___get_single_annotation(self, var41, var_modelbuilder);
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
var48 = ((short int(*)(val* self, val* p0))(var_at_deprecated->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_at_deprecated, var_other); /* == on <var_at_deprecated:nullable AAnnotation(AAnnotation)>*/
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
var50 = nit___nit__MPropDef___is_intro(var_mpropdef);
}
var51 = !var50;
if (var51){
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = "Error: method redefinition cannot be deprecated.";
var55 = standard___standard__NativeString___to_s_with_length(var54, 48l);
var53 = var55;
varonce52 = var53;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, self, var53); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
var56 = NEW_nit__MDeprecationInfo(&type_nit__MDeprecationInfo);
{
{ /* Inline kernel#Object#init (var56) on <var56:MDeprecationInfo> */
RET_LABEL57:(void)0;
}
}
var_info = var56;
{
{ /* Inline parser_nodes#ADefinition#n_doc (var_at_deprecated) on <var_at_deprecated:nullable AAnnotation(AAnnotation)> */
var60 = var_at_deprecated->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <var_at_deprecated:nullable AAnnotation(AAnnotation)> */
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
var64 = ((short int(*)(val* self, val* p0))(var_ndoc->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ndoc, var_other); /* == on <var_ndoc:nullable ADoc(ADoc)>*/
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
var66 = nit__modelbuilder_base___ADoc___to_mdoc(var_ndoc);
}
{
{ /* Inline mdoc#MDeprecationInfo#mdoc= (var_info,var66) on <var_info:MDeprecationInfo> */
var_info->attrs[COLOR_nit__mdoc__MDeprecationInfo___mdoc].val = var66; /* _mdoc on <var_info:MDeprecationInfo> */
RET_LABEL67:(void)0;
}
}
} else {
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MPropDef> */
var70 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MPropDef> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
{ /* Inline mdoc#MEntity#deprecation= (var68,var_info) on <var68:MProperty> */
var68->attrs[COLOR_nit__mdoc__MEntity___deprecation].val = var_info; /* _deprecation on <var68:MProperty> */
RET_LABEL71:(void)0;
}
}
}
} else {
}
RET_LABEL:;
}
/* method modelize_property#APropdef#check_redef_property_visibility for (self: APropdef, ModelBuilder, nullable AVisibility, MProperty) */
void nit__modelize_property___APropdef___check_redef_property_visibility(val* self, val* p0, val* p1, val* p2) {
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
val* var26 /* : FlatString */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
val* var30 /* : FlatString */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
val* var34 /* : FlatString */;
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
var6 = ((val*(*)(val* self))(var_nvisibility->class->vft[COLOR_nit__modelbuilder_base__AVisibility__mvisibility]))(var_nvisibility); /* mvisibility on <var_nvisibility:nullable AVisibility(AVisibility)>*/
}
var_mvisibility = var6;
{
{ /* Inline model#MProperty#visibility (var_mprop) on <var_mprop:MProperty> */
var10 = var_mprop->attrs[COLOR_nit__model__MProperty___visibility].val; /* _visibility on <var_mprop:MProperty> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1949);
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
var14 = ((short int(*)(val* self, val* p0))(var_mvisibility->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mvisibility, var_other13); /* == on <var_mvisibility:MVisibility>*/
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
var17 = nit__model_base___standard__Sys___public_visibility(var16);
}
{
{ /* Inline kernel#Object#!= (var_mvisibility,var17) on <var_mvisibility:MVisibility> */
var_other13 = var17;
{
var20 = ((short int(*)(val* self, val* p0))(var_mvisibility->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mvisibility, var_other13); /* == on <var_mvisibility:MVisibility>*/
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
var22 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "Error: redefinition changed the visibility from `";
var26 = standard___standard__NativeString___to_s_with_length(var25, 49l);
var24 = var26;
varonce23 = var24;
}
((struct instance_standard__NativeArray*)var22)->values[0]=var24;
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "` to `";
var30 = standard___standard__NativeString___to_s_with_length(var29, 6l);
var28 = var30;
varonce27 = var28;
}
((struct instance_standard__NativeArray*)var22)->values[2]=var28;
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "`.";
var34 = standard___standard__NativeString___to_s_with_length(var33, 2l);
var32 = var34;
varonce31 = var32;
}
((struct instance_standard__NativeArray*)var22)->values[4]=var32;
} else {
var22 = varonce;
varonce = NULL;
}
{
{ /* Inline model#MProperty#visibility (var_mprop) on <var_mprop:MProperty> */
var37 = var_mprop->attrs[COLOR_nit__model__MProperty___visibility].val; /* _visibility on <var_mprop:MProperty> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1949);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
var38 = ((val*(*)(val* self))(var35->class->vft[COLOR_standard__string__Object__to_s]))(var35); /* to_s on <var35:MVisibility>*/
}
((struct instance_standard__NativeArray*)var22)->values[1]=var38;
{
var39 = ((val*(*)(val* self))(var_mvisibility->class->vft[COLOR_standard__string__Object__to_s]))(var_mvisibility); /* to_s on <var_mvisibility:MVisibility>*/
}
((struct instance_standard__NativeArray*)var22)->values[3]=var39;
{
var40 = ((val*(*)(val* self))(var22->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var22); /* native_to_s on <var22:NativeArray[String]>*/
}
varonce = var22;
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_nvisibility, var40); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
RET_LABEL:;
}
/* method modelize_property#APropdef#check_redef_keyword for (self: APropdef, ModelBuilder, MClassDef, nullable Token, Bool, MProperty): Bool */
short int nit__modelize_property___APropdef___check_redef_keyword(val* self, val* p0, val* p1, val* p2, short int p3, val* p4) {
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
val* var9 /* : FlatString */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : FlatString */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : FlatString */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
val* var21 /* : FlatString */;
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
val* var55 /* : FlatString */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
val* var59 /* : FlatString */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
val* var63 /* : FlatString */;
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
val* var108 /* : ArrayIterator[nullable Object] */;
val* var_109 /* var : ArrayIterator[MProperty] */;
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
val* var146 /* : MProject */;
val* var148 /* : MProject */;
val* var149 /* : MClassDef */;
val* var151 /* : MClassDef */;
val* var152 /* : MModule */;
val* var154 /* : MModule */;
val* var155 /* : nullable MGroup */;
val* var157 /* : nullable MGroup */;
val* var158 /* : MProject */;
val* var160 /* : MProject */;
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
val* var196 /* : FlatString */;
val* var198 /* : NativeArray[String] */;
static val* varonce197;
static val* varonce199;
val* var200 /* : String */;
char* var201 /* : NativeString */;
val* var202 /* : FlatString */;
static val* varonce203;
val* var204 /* : String */;
char* var205 /* : NativeString */;
val* var206 /* : FlatString */;
static val* varonce207;
val* var208 /* : String */;
char* var209 /* : NativeString */;
val* var210 /* : FlatString */;
static val* varonce211;
val* var212 /* : String */;
char* var213 /* : NativeString */;
val* var214 /* : FlatString */;
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
val* var239 /* : FlatString */;
static val* varonce240;
val* var241 /* : String */;
char* var242 /* : NativeString */;
val* var243 /* : FlatString */;
static val* varonce244;
val* var245 /* : String */;
char* var246 /* : NativeString */;
val* var247 /* : FlatString */;
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
var3 = var_mclassdef->attrs[COLOR_nit__modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <var_mclassdef:MClassDef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 505);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((short int(*)(val* self, val* p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_standard__abstract_collection__MapRead__has_key]))(var1, var_mprop); /* has_key on <var1:Map[MProperty, APropdef]>*/
}
if (var4){
if (unlikely(varonce==NULL)) {
var5 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "Error: a property `";
var9 = standard___standard__NativeString___to_s_with_length(var8, 19l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var5)->values[0]=var7;
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "` is already defined in class `";
var13 = standard___standard__NativeString___to_s_with_length(var12, 31l);
var11 = var13;
varonce10 = var11;
}
((struct instance_standard__NativeArray*)var5)->values[2]=var11;
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "` at line ";
var17 = standard___standard__NativeString___to_s_with_length(var16, 10l);
var15 = var17;
varonce14 = var15;
}
((struct instance_standard__NativeArray*)var5)->values[4]=var15;
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = ".";
var21 = standard___standard__NativeString___to_s_with_length(var20, 1l);
var19 = var21;
varonce18 = var19;
}
((struct instance_standard__NativeArray*)var5)->values[6]=var19;
} else {
var5 = varonce;
varonce = NULL;
}
{
var22 = ((val*(*)(val* self))(var_mprop->class->vft[COLOR_standard__string__Object__to_s]))(var_mprop); /* to_s on <var_mprop:MProperty>*/
}
((struct instance_standard__NativeArray*)var5)->values[1]=var22;
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var25 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = ((val*(*)(val* self))(var23->class->vft[COLOR_standard__string__Object__to_s]))(var23); /* to_s on <var23:MClass>*/
}
((struct instance_standard__NativeArray*)var5)->values[3]=var26;
{
{ /* Inline modelize_property#MClassDef#mprop2npropdef (var_mclassdef) on <var_mclassdef:MClassDef> */
var29 = var_mclassdef->attrs[COLOR_nit__modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <var_mclassdef:MClassDef> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 505);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
var30 = ((val*(*)(val* self, val* p0))((((long)var27&3)?class_info[((long)var27&3)]:var27->class)->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var27, var_mprop); /* [] on <var27:Map[MProperty, APropdef]>*/
}
{
{ /* Inline parser_nodes#ANode#location (var30) on <var30:nullable Object(APropdef)> */
var33 = var30->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var30:nullable Object(APropdef)> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline location#Location#line_start (var31) on <var31:Location> */
var36 = var31->attrs[COLOR_nit__location__Location___line_start].l; /* _line_start on <var31:Location> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
var37 = standard__string___Int___Object__to_s(var34);
((struct instance_standard__NativeArray*)var5)->values[5]=var37;
{
var38 = ((val*(*)(val* self))(var5->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
{
nit___nit__ModelBuilder___error(var_modelbuilder, self, var38); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
var = 0;
goto RET_LABEL;
} else {
}
/* <var_mprop:MProperty> isa MMethod */
cltype = type_nit__MMethod.color;
idtype = type_nit__MMethod.id;
if(cltype >= var_mprop->type->table_size) {
var40 = 0;
} else {
var40 = var_mprop->type->type_table[cltype] == idtype;
}
var_ = var40;
if (var40){
{
{ /* Inline model#MMethod#is_root_init (var_mprop) on <var_mprop:MProperty(MMethod)> */
var43 = var_mprop->attrs[COLOR_nit__model__MMethod___is_root_init].s; /* _is_root_init on <var_mprop:MProperty(MMethod)> */
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
var51 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = "Redef Error: `";
var55 = standard___standard__NativeString___to_s_with_length(var54, 14l);
var53 = var55;
varonce52 = var53;
}
((struct instance_standard__NativeArray*)var51)->values[0]=var53;
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = "::";
var59 = standard___standard__NativeString___to_s_with_length(var58, 2l);
var57 = var59;
varonce56 = var57;
}
((struct instance_standard__NativeArray*)var51)->values[2]=var57;
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = "` is an inherited property. To redefine it, add the `redef` keyword.";
var63 = standard___standard__NativeString___to_s_with_length(var62, 68l);
var61 = var63;
varonce60 = var61;
}
((struct instance_standard__NativeArray*)var51)->values[4]=var61;
} else {
var51 = varonce50;
varonce50 = NULL;
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var66 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
var67 = ((val*(*)(val* self))(var64->class->vft[COLOR_standard__string__Object__to_s]))(var64); /* to_s on <var64:MClass>*/
}
((struct instance_standard__NativeArray*)var51)->values[1]=var67;
{
{ /* Inline model#MProperty#name (var_mprop) on <var_mprop:MProperty> */
var70 = var_mprop->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var_mprop:MProperty> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1933);
fatal_exit(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
((struct instance_standard__NativeArray*)var51)->values[3]=var68;
{
var71 = ((val*(*)(val* self))(var51->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var51); /* native_to_s on <var51:NativeArray[String]>*/
}
varonce50 = var51;
{
nit___nit__ModelBuilder___error(var_modelbuilder, self, var71); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MProperty#intro_mclassdef (var_mprop) on <var_mprop:MProperty> */
var75 = var_mprop->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mprop:MProperty> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1928);
fatal_exit(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var73) on <var73:MClassDef> */
var78 = var73->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var73:MClassDef> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
{
{ /* Inline mmodule#MModule#mgroup (var76) on <var76:MModule> */
var81 = var76->attrs[COLOR_nit__mmodule__MModule___mgroup].val; /* _mgroup on <var76:MModule> */
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
var86 = ((short int(*)(val* self, val* p0))(var79->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var79, var_other85); /* == on <var79:nullable MGroup(MGroup)>*/
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
var91 = var_mprop->attrs[COLOR_nit__model__MProperty___visibility].val; /* _visibility on <var_mprop:MProperty> */
if (unlikely(var91 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1949);
fatal_exit(1);
}
var89 = var91;
RET_LABEL90:(void)0;
}
}
var92 = glob_sys;
{
var93 = nit__model_base___standard__Sys___protected_visibility(var92);
}
{
var94 = standard___standard__Comparable____62d_61d(var89, var93);
}
var72 = var94;
} else {
var72 = var_88;
}
if (var72){
{
{ /* Inline modelbuilder_base#ModelBuilder#model (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var97 = var_modelbuilder->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___model].val; /* _model on <var_modelbuilder:ModelBuilder> */
if (unlikely(var97 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 44);
fatal_exit(1);
}
var95 = var97;
RET_LABEL96:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var_mprop) on <var_mprop:MProperty> */
var100 = var_mprop->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var_mprop:MProperty> */
if (unlikely(var100 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1933);
fatal_exit(1);
}
var98 = var100;
RET_LABEL99:(void)0;
}
}
{
var101 = nit__model___Model___get_mproperties_by_name(var95, var98);
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
var105 = ((short int(*)(val* self, val* p0))(var_others->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_others, var_other85); /* == on <var_others:nullable Array[MProperty](Array[MProperty])>*/
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
var108 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_107);
}
var_109 = var108;
for(;;) {
{
var110 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_109);
}
if (var110){
{
var111 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_109);
}
var_other112 = var111;
{
{ /* Inline kernel#Object#!= (var_other112,var_mprop) on <var_other112:MProperty> */
var_other85 = var_mprop;
{
var119 = ((short int(*)(val* self, val* p0))(var_other112->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_other112, var_other85); /* == on <var_other112:MProperty>*/
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
var124 = var_other112->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_other112:MProperty> */
if (unlikely(var124 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1928);
fatal_exit(1);
}
var122 = var124;
RET_LABEL123:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var122) on <var122:MClassDef> */
var127 = var122->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var122:MClassDef> */
if (unlikely(var127 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var125 = var127;
RET_LABEL126:(void)0;
}
}
{
{ /* Inline mmodule#MModule#mgroup (var125) on <var125:MModule> */
var130 = var125->attrs[COLOR_nit__mmodule__MModule___mgroup].val; /* _mgroup on <var125:MModule> */
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
var134 = ((short int(*)(val* self, val* p0))(var128->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var128, var_other85); /* == on <var128:nullable MGroup(MGroup)>*/
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
var139 = var_other112->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_other112:MProperty> */
if (unlikely(var139 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1928);
fatal_exit(1);
}
var137 = var139;
RET_LABEL138:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var137) on <var137:MClassDef> */
var142 = var137->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var137:MClassDef> */
if (unlikely(var142 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var140 = var142;
RET_LABEL141:(void)0;
}
}
{
{ /* Inline mmodule#MModule#mgroup (var140) on <var140:MModule> */
var145 = var140->attrs[COLOR_nit__mmodule__MModule___mgroup].val; /* _mgroup on <var140:MModule> */
var143 = var145;
RET_LABEL144:(void)0;
}
}
if (var143 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 638);
fatal_exit(1);
} else {
{ /* Inline mproject#MGroup#mproject (var143) on <var143:nullable MGroup> */
if (unlikely(var143 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 69);
fatal_exit(1);
}
var148 = var143->attrs[COLOR_nit__mproject__MGroup___mproject].val; /* _mproject on <var143:nullable MGroup> */
if (unlikely(var148 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproject");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 69);
fatal_exit(1);
}
var146 = var148;
RET_LABEL147:(void)0;
}
}
{
{ /* Inline model#MProperty#intro_mclassdef (var_mprop) on <var_mprop:MProperty> */
var151 = var_mprop->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mprop:MProperty> */
if (unlikely(var151 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1928);
fatal_exit(1);
}
var149 = var151;
RET_LABEL150:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var149) on <var149:MClassDef> */
var154 = var149->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var149:MClassDef> */
if (unlikely(var154 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var152 = var154;
RET_LABEL153:(void)0;
}
}
{
{ /* Inline mmodule#MModule#mgroup (var152) on <var152:MModule> */
var157 = var152->attrs[COLOR_nit__mmodule__MModule___mgroup].val; /* _mgroup on <var152:MModule> */
var155 = var157;
RET_LABEL156:(void)0;
}
}
if (var155 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 638);
fatal_exit(1);
} else {
{ /* Inline mproject#MGroup#mproject (var155) on <var155:nullable MGroup> */
if (unlikely(var155 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 69);
fatal_exit(1);
}
var160 = var155->attrs[COLOR_nit__mproject__MGroup___mproject].val; /* _mproject on <var155:nullable MGroup> */
if (unlikely(var160 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproject");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 69);
fatal_exit(1);
}
var158 = var160;
RET_LABEL159:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var146,var158) on <var146:MProject> */
var_other = var158;
{
{ /* Inline kernel#Object#is_same_instance (var146,var_other) on <var146:MProject> */
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
var169 = var_other112->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_other112:MProperty> */
if (unlikely(var169 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1928);
fatal_exit(1);
}
var167 = var169;
RET_LABEL168:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var167) on <var167:MClassDef> */
var172 = var167->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var167:MClassDef> */
if (unlikely(var172 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var170 = var172;
RET_LABEL171:(void)0;
}
}
{
{ /* Inline model#MClass#name (var170) on <var170:MClass> */
var175 = var170->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var170:MClass> */
if (unlikely(var175 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
fatal_exit(1);
}
var173 = var175;
RET_LABEL174:(void)0;
}
}
{
{ /* Inline model#MProperty#intro_mclassdef (var_mprop) on <var_mprop:MProperty> */
var178 = var_mprop->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mprop:MProperty> */
if (unlikely(var178 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1928);
fatal_exit(1);
}
var176 = var178;
RET_LABEL177:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var176) on <var176:MClassDef> */
var181 = var176->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var176:MClassDef> */
if (unlikely(var181 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var179 = var181;
RET_LABEL180:(void)0;
}
}
{
{ /* Inline model#MClass#name (var179) on <var179:MClass> */
var184 = var179->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var179:MClass> */
if (unlikely(var184 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
fatal_exit(1);
}
var182 = var184;
RET_LABEL183:(void)0;
}
}
{
var185 = ((short int(*)(val* self, val* p0))(var173->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var173, var182); /* == on <var173:String>*/
}
var114 = var185;
} else {
var114 = var_166;
}
var_186 = var114;
if (var114){
{
{ /* Inline model#MProperty#visibility (var_other112) on <var_other112:MProperty> */
var189 = var_other112->attrs[COLOR_nit__model__MProperty___visibility].val; /* _visibility on <var_other112:MProperty> */
if (unlikely(var189 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1949);
fatal_exit(1);
}
var187 = var189;
RET_LABEL188:(void)0;
}
}
var190 = glob_sys;
{
var191 = nit__model_base___standard__Sys___protected_visibility(var190);
}
{
var192 = standard___standard__Comparable____62d_61d(var187, var191);
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
var196 = standard___standard__NativeString___to_s_with_length(var195, 18l);
var194 = var196;
varonce193 = var194;
}
if (unlikely(varonce197==NULL)) {
var198 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce199!=NULL)) {
var200 = varonce199;
} else {
var201 = "Warning: A property named `";
var202 = standard___standard__NativeString___to_s_with_length(var201, 27l);
var200 = var202;
varonce199 = var200;
}
((struct instance_standard__NativeArray*)var198)->values[0]=var200;
if (likely(varonce203!=NULL)) {
var204 = varonce203;
} else {
var205 = "` is already defined in module `";
var206 = standard___standard__NativeString___to_s_with_length(var205, 32l);
var204 = var206;
varonce203 = var204;
}
((struct instance_standard__NativeArray*)var198)->values[2]=var204;
if (likely(varonce207!=NULL)) {
var208 = varonce207;
} else {
var209 = "` for the class `";
var210 = standard___standard__NativeString___to_s_with_length(var209, 17l);
var208 = var210;
varonce207 = var208;
}
((struct instance_standard__NativeArray*)var198)->values[4]=var208;
if (likely(varonce211!=NULL)) {
var212 = varonce211;
} else {
var213 = "`.";
var214 = standard___standard__NativeString___to_s_with_length(var213, 2l);
var212 = var214;
varonce211 = var212;
}
((struct instance_standard__NativeArray*)var198)->values[6]=var212;
} else {
var198 = varonce197;
varonce197 = NULL;
}
{
var215 = nit___nit__MProperty___nit__model_base__MEntity__full_name(var_other112);
}
((struct instance_standard__NativeArray*)var198)->values[1]=var215;
{
{ /* Inline model#MProperty#intro_mclassdef (var_other112) on <var_other112:MProperty> */
var218 = var_other112->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_other112:MProperty> */
if (unlikely(var218 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1928);
fatal_exit(1);
}
var216 = var218;
RET_LABEL217:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var216) on <var216:MClassDef> */
var221 = var216->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var216:MClassDef> */
if (unlikely(var221 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var219 = var221;
RET_LABEL220:(void)0;
}
}
{
var222 = ((val*(*)(val* self))(var219->class->vft[COLOR_standard__string__Object__to_s]))(var219); /* to_s on <var219:MModule>*/
}
((struct instance_standard__NativeArray*)var198)->values[3]=var222;
{
{ /* Inline model#MProperty#intro_mclassdef (var_other112) on <var_other112:MProperty> */
var225 = var_other112->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_other112:MProperty> */
if (unlikely(var225 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1928);
fatal_exit(1);
}
var223 = var225;
RET_LABEL224:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var223) on <var223:MClassDef> */
var228 = var223->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var223:MClassDef> */
if (unlikely(var228 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var226 = var228;
RET_LABEL227:(void)0;
}
}
{
{ /* Inline model#MClass#name (var226) on <var226:MClass> */
var231 = var226->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var226:MClass> */
if (unlikely(var231 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
fatal_exit(1);
}
var229 = var231;
RET_LABEL230:(void)0;
}
}
((struct instance_standard__NativeArray*)var198)->values[5]=var229;
{
var232 = ((val*(*)(val* self))(var198->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var198); /* native_to_s on <var198:NativeArray[String]>*/
}
varonce197 = var198;
{
nit___nit__ModelBuilder___advice(var_modelbuilder, self, var194, var232); /* Direct call modelbuilder_base#ModelBuilder#advice on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label;
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_109); /* Direct call array#ArrayIterator#next on <var_109:ArrayIterator[MProperty]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_109); /* Direct call array#ArrayIterator#finish on <var_109:ArrayIterator[MProperty]>*/
}
} else {
}
} else {
}
} else {
var233 = !var_need_redef;
if (var233){
if (unlikely(varonce234==NULL)) {
var235 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce236!=NULL)) {
var237 = varonce236;
} else {
var238 = "Error: no property `";
var239 = standard___standard__NativeString___to_s_with_length(var238, 20l);
var237 = var239;
varonce236 = var237;
}
((struct instance_standard__NativeArray*)var235)->values[0]=var237;
if (likely(varonce240!=NULL)) {
var241 = varonce240;
} else {
var242 = "::";
var243 = standard___standard__NativeString___to_s_with_length(var242, 2l);
var241 = var243;
varonce240 = var241;
}
((struct instance_standard__NativeArray*)var235)->values[2]=var241;
if (likely(varonce244!=NULL)) {
var245 = varonce244;
} else {
var246 = "` is inherited. Remove the `redef` keyword to define a new property.";
var247 = standard___standard__NativeString___to_s_with_length(var246, 68l);
var245 = var247;
varonce244 = var245;
}
((struct instance_standard__NativeArray*)var235)->values[4]=var245;
} else {
var235 = varonce234;
varonce234 = NULL;
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var250 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var250 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var248 = var250;
RET_LABEL249:(void)0;
}
}
{
var251 = ((val*(*)(val* self))(var248->class->vft[COLOR_standard__string__Object__to_s]))(var248); /* to_s on <var248:MClass>*/
}
((struct instance_standard__NativeArray*)var235)->values[1]=var251;
{
{ /* Inline model#MProperty#name (var_mprop) on <var_mprop:MProperty> */
var254 = var_mprop->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var_mprop:MProperty> */
if (unlikely(var254 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1933);
fatal_exit(1);
}
var252 = var254;
RET_LABEL253:(void)0;
}
}
((struct instance_standard__NativeArray*)var235)->values[3]=var252;
{
var255 = ((val*(*)(val* self))(var235->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var235); /* native_to_s on <var235:NativeArray[String]>*/
}
varonce234 = var235;
{
nit___nit__ModelBuilder___error(var_modelbuilder, self, var255); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
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
void nit__modelize_property___APropdef___check_repeated_types(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
var_modelbuilder = p0;
RET_LABEL:;
}
/* method modelize_property#ASignature#is_visited= for (self: ASignature, Bool) */
void nit__modelize_property___ASignature___is_visited_61d(val* self, short int p0) {
self->attrs[COLOR_nit__modelize_property__ASignature___is_visited].s = p0; /* _is_visited on <self:ASignature> */
RET_LABEL:;
}
/* method modelize_property#ASignature#param_names for (self: ASignature): Array[String] */
val* nit__modelize_property___ASignature___param_names(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_nit__modelize_property__ASignature___param_names].val; /* _param_names on <self:ASignature> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _param_names");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 660);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ASignature#param_types for (self: ASignature): Array[MType] */
val* nit__modelize_property___ASignature___param_types(val* self) {
val* var /* : Array[MType] */;
val* var1 /* : Array[MType] */;
var1 = self->attrs[COLOR_nit__modelize_property__ASignature___param_types].val; /* _param_types on <self:ASignature> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _param_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 663);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ASignature#vararg_rank for (self: ASignature): Int */
long nit__modelize_property___ASignature___vararg_rank(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__modelize_property__ASignature___vararg_rank].l; /* _vararg_rank on <self:ASignature> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ASignature#vararg_rank= for (self: ASignature, Int) */
void nit__modelize_property___ASignature___vararg_rank_61d(val* self, long p0) {
self->attrs[COLOR_nit__modelize_property__ASignature___vararg_rank].l = p0; /* _vararg_rank on <self:ASignature> */
RET_LABEL:;
}
/* method modelize_property#ASignature#ret_type for (self: ASignature): nullable MType */
val* nit__modelize_property___ASignature___ret_type(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nit__modelize_property__ASignature___ret_type].val; /* _ret_type on <self:ASignature> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ASignature#ret_type= for (self: ASignature, nullable MType) */
void nit__modelize_property___ASignature___ret_type_61d(val* self, val* p0) {
self->attrs[COLOR_nit__modelize_property__ASignature___ret_type].val = p0; /* _ret_type on <self:ASignature> */
RET_LABEL:;
}
/* method modelize_property#ASignature#visit_signature for (self: ASignature, ModelBuilder, MClassDef): Bool */
short int nit__modelize_property___ASignature___visit_signature(val* self, val* p0, val* p1) {
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
long var55 /* : Int */;
val* var56 /* : nullable TDotdotdot */;
val* var58 /* : nullable TDotdotdot */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
long var64 /* : Int */;
long var66 /* : Int */;
long var67 /* : Int */;
long var69 /* : Int */;
short int var70 /* : Bool */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
val* var74 /* : NativeArray[String] */;
static val* varonce;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : NativeString */;
val* var78 /* : FlatString */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
val* var82 /* : FlatString */;
long var83 /* : Int */;
long var85 /* : Int */;
val* var86 /* : nullable Object */;
val* var87 /* : String */;
long var88 /* : Int */;
long var90 /* : Int */;
long var91 /* : Int */;
short int var93 /* : Bool */;
int cltype94;
int idtype95;
const char* var_class_name96;
long var97 /* : Int */;
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
var3 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_mmodule = var1;
{
{ /* Inline modelize_property#ASignature#param_names (self) on <self:ASignature> */
var6 = self->attrs[COLOR_nit__modelize_property__ASignature___param_names].val; /* _param_names on <self:ASignature> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _param_names");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 660);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_param_names = var4;
{
{ /* Inline modelize_property#ASignature#param_types (self) on <self:ASignature> */
var9 = self->attrs[COLOR_nit__modelize_property__ASignature___param_types].val; /* _param_types on <self:ASignature> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _param_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 663);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_param_types = var7;
{
{ /* Inline parser_nodes#ASignature#n_params (self) on <self:ASignature> */
var12 = self->attrs[COLOR_nit__parser_nodes__ASignature___n_params].val; /* _n_params on <self:ASignature> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1693);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_ = var10;
{
var13 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_);
}
var_14 = var13;
for(;;) {
{
var15 = ((short int(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_14); /* is_ok on <var_14:Iterator[AParam]>*/
}
if (var15){
{
var16 = ((val*(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_14); /* item on <var_14:Iterator[AParam]>*/
}
var_np = var16;
{
{ /* Inline parser_nodes#AParam#n_id (var_np) on <var_np:AParam> */
var19 = var_np->attrs[COLOR_nit__parser_nodes__AParam___n_id].val; /* _n_id on <var_np:AParam> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1707);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = nit__lexer_work___Token___text(var17);
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_param_names, var20); /* Direct call array#Array#add on <var_param_names:Array[String]>*/
}
{
{ /* Inline parser_nodes#AParam#n_type (var_np) on <var_np:AParam> */
var23 = var_np->attrs[COLOR_nit__parser_nodes__AParam___n_type].val; /* _n_type on <var_np:AParam> */
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
var27 = ((short int(*)(val* self, val* p0))(var_ntype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ntype, var_other); /* == on <var_ntype:nullable AType(AType)>*/
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
var29 = nit___nit__ModelBuilder___resolve_mtype_unchecked(var_modelbuilder, var_mmodule, var_mclassdef, var_ntype, 1);
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
var39 = var_param_names->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_param_names:Array[String]> */
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var_param_types) on <var_param_types:Array[MType]> */
var42 = var_param_types->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_param_types:Array[MType]> */
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
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
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
var_class_name53 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var54 = var_i < var_47;
var48 = var54;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
if (var48){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_param_types, var_mtype); /* Direct call array#Array#add on <var_param_types:Array[MType]>*/
}
{
var55 = standard___standard__Int___Discrete__successor(var_i, 1l);
}
var_i = var55;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline parser_nodes#AParam#n_dotdotdot (var_np) on <var_np:AParam> */
var58 = var_np->attrs[COLOR_nit__parser_nodes__AParam___n_dotdotdot].val; /* _n_dotdotdot on <var_np:AParam> */
var56 = var58;
RET_LABEL57:(void)0;
}
}
if (var56 == NULL) {
var59 = 0; /* is null */
} else {
var59 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var56,((val*)NULL)) on <var56:nullable TDotdotdot> */
var_other = ((val*)NULL);
{
var62 = ((short int(*)(val* self, val* p0))(var56->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var56, var_other); /* == on <var56:nullable TDotdotdot(TDotdotdot)>*/
}
var63 = !var62;
var60 = var63;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
var59 = var60;
}
if (var59){
{
{ /* Inline modelize_property#ASignature#vararg_rank (self) on <self:ASignature> */
var66 = self->attrs[COLOR_nit__modelize_property__ASignature___vararg_rank].l; /* _vararg_rank on <self:ASignature> */
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var69 = -1l;
var67 = var69;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var64,var67) on <var64:Int> */
var72 = var64 == var67;
var73 = !var72;
var70 = var73;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
if (var70){
if (unlikely(varonce==NULL)) {
var74 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = "Error: `";
var78 = standard___standard__NativeString___to_s_with_length(var77, 8l);
var76 = var78;
varonce75 = var76;
}
((struct instance_standard__NativeArray*)var74)->values[0]=var76;
if (likely(varonce79!=NULL)) {
var80 = varonce79;
} else {
var81 = "` is already a vararg";
var82 = standard___standard__NativeString___to_s_with_length(var81, 21l);
var80 = var82;
varonce79 = var80;
}
((struct instance_standard__NativeArray*)var74)->values[2]=var80;
} else {
var74 = varonce;
varonce = NULL;
}
{
{ /* Inline modelize_property#ASignature#vararg_rank (self) on <self:ASignature> */
var85 = self->attrs[COLOR_nit__modelize_property__ASignature___vararg_rank].l; /* _vararg_rank on <self:ASignature> */
var83 = var85;
RET_LABEL84:(void)0;
}
}
{
var86 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_param_names, var83);
}
((struct instance_standard__NativeArray*)var74)->values[1]=var86;
{
var87 = ((val*(*)(val* self))(var74->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var74); /* native_to_s on <var74:NativeArray[String]>*/
}
varonce = var74;
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_np, var87); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
var = 0;
goto RET_LABEL;
} else {
{
{ /* Inline array#AbstractArrayRead#length (var_param_names) on <var_param_names:Array[String]> */
var90 = var_param_names->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_param_names:Array[String]> */
var88 = var90;
RET_LABEL89:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var88,1l) on <var88:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var93 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var93)) {
var_class_name96 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name96);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var97 = var88 - 1l;
var91 = var97;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
}
{
{ /* Inline modelize_property#ASignature#vararg_rank= (self,var91) on <self:ASignature> */
self->attrs[COLOR_nit__modelize_property__ASignature___vararg_rank].l = var91; /* _vararg_rank on <self:ASignature> */
RET_LABEL98:(void)0;
}
}
}
} else {
}
} else {
}
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_14); /* next on <var_14:Iterator[AParam]>*/
}
} else {
goto BREAK_label99;
}
}
BREAK_label99: (void)0;
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_14); /* finish on <var_14:Iterator[AParam]>*/
}
{
{ /* Inline parser_nodes#ASignature#n_type (self) on <self:ASignature> */
var102 = self->attrs[COLOR_nit__parser_nodes__ASignature___n_type].val; /* _n_type on <self:ASignature> */
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
var107 = ((short int(*)(val* self, val* p0))(var_ntype103->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ntype103, var_other); /* == on <var_ntype103:nullable AType(AType)>*/
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
var109 = nit___nit__ModelBuilder___resolve_mtype_unchecked(var_modelbuilder, var_mmodule, var_mclassdef, var_ntype103, 1);
}
{
{ /* Inline modelize_property#ASignature#ret_type= (self,var109) on <self:ASignature> */
self->attrs[COLOR_nit__modelize_property__ASignature___ret_type].val = var109; /* _ret_type on <self:ASignature> */
RET_LABEL110:(void)0;
}
}
{
{ /* Inline modelize_property#ASignature#ret_type (self) on <self:ASignature> */
var113 = self->attrs[COLOR_nit__modelize_property__ASignature___ret_type].val; /* _ret_type on <self:ASignature> */
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
self->attrs[COLOR_nit__modelize_property__ASignature___is_visited].s = 1; /* _is_visited on <self:ASignature> */
RET_LABEL120:(void)0;
}
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#ASignature#check_signature for (self: ASignature, ModelBuilder, MClassDef): Bool */
short int nit__modelize_property___ASignature___check_signature(val* self, val* p0, val* p1) {
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
var_modelbuilder = p0;
var_mclassdef = p1;
var_res = 1;
{
{ /* Inline parser_nodes#ASignature#n_params (self) on <self:ASignature> */
var3 = self->attrs[COLOR_nit__parser_nodes__ASignature___n_params].val; /* _n_params on <self:ASignature> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1693);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_ = var1;
{
var4 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_);
}
var_5 = var4;
for(;;) {
{
var6 = ((short int(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_5); /* is_ok on <var_5:Iterator[AParam]>*/
}
if (var6){
{
var7 = ((val*(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_5); /* item on <var_5:Iterator[AParam]>*/
}
var_np = var7;
{
{ /* Inline parser_nodes#AParam#n_type (var_np) on <var_np:AParam> */
var10 = var_np->attrs[COLOR_nit__parser_nodes__AParam___n_type].val; /* _n_type on <var_np:AParam> */
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
var14 = ((short int(*)(val* self, val* p0))(var_ntype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ntype, var_other); /* == on <var_ntype:nullable AType(AType)>*/
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
var18 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = nit___nit__ModelBuilder___resolve_mtype(var_modelbuilder, var16, var_mclassdef, var_ntype);
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
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_5); /* next on <var_5:Iterator[AParam]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_5); /* finish on <var_5:Iterator[AParam]>*/
}
{
{ /* Inline parser_nodes#ASignature#n_type (self) on <self:ASignature> */
var29 = self->attrs[COLOR_nit__parser_nodes__ASignature___n_type].val; /* _n_type on <self:ASignature> */
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
var34 = ((short int(*)(val* self, val* p0))(var_ntype30->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ntype30, var_other); /* == on <var_ntype30:nullable AType(AType)>*/
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
var38 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
var39 = nit___nit__ModelBuilder___resolve_mtype(var_modelbuilder, var36, var_mclassdef, var_ntype30);
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
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#AParam#mparameter= for (self: AParam, nullable MParameter) */
void nit__modelize_property___AParam___mparameter_61d(val* self, val* p0) {
self->attrs[COLOR_nit__modelize_property__AParam___mparameter].val = p0; /* _mparameter on <self:AParam> */
RET_LABEL:;
}
/* method modelize_property#AMethPropdef#is_autoinit for (self: AMethPropdef): Bool */
short int nit__modelize_property___AMethPropdef___is_autoinit(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__modelize_property__AMethPropdef___is_autoinit].s; /* _is_autoinit on <self:AMethPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AMethPropdef#is_autoinit= for (self: AMethPropdef, Bool) */
void nit__modelize_property___AMethPropdef___is_autoinit_61d(val* self, short int p0) {
self->attrs[COLOR_nit__modelize_property__AMethPropdef___is_autoinit].s = p0; /* _is_autoinit on <self:AMethPropdef> */
RET_LABEL:;
}
/* method modelize_property#AMethPropdef#look_like_a_root_init for (self: AMethPropdef, ModelBuilder, MClassDef): Bool */
short int nit__modelize_property___AMethPropdef___look_like_a_root_init(val* self, val* p0, val* p1) {
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
val* var21 /* : FlatString */;
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
val* var46 /* : FlatString */;
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
val* var70 /* : FlatString */;
val* var72 /* : NativeArray[String] */;
static val* varonce71;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
val* var76 /* : FlatString */;
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
val* var89 /* : FlatString */;
val* var91 /* : NativeArray[String] */;
static val* varonce90;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : NativeString */;
val* var95 /* : FlatString */;
val* var96 /* : String */;
val* var97 /* : String */;
var_modelbuilder = p0;
var_mclassdef = p1;
{
{ /* Inline parser_nodes#AMethPropdef#n_kwinit (self) on <self:AMethPropdef> */
var3 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwinit].val; /* _n_kwinit on <self:AMethPropdef> */
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
var12 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
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
var17 = ((short int(*)(val* self, val* p0))(var10->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var10, var_other16); /* == on <var10:nullable AMethid(AMethid)>*/
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
var21 = standard___standard__NativeString___to_s_with_length(var20, 14l);
var19 = var21;
varonce = var19;
}
{
var22 = nit__annotation___Prod___get_single_annotation(self, var19, var_modelbuilder);
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
var26 = ((short int(*)(val* self, val* p0))(var22->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var22, var_other16); /* == on <var22:nullable AAnnotation(AAnnotation)>*/
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
var30 = self->attrs[COLOR_nit__parser_nodes__ANode___parent].val; /* _parent on <self:AMethPropdef> */
var28 = var30;
RET_LABEL29:(void)0;
}
}
if (var28 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 749);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent (var28) on <var28:nullable ANode> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 46);
fatal_exit(1);
}
var33 = var28->attrs[COLOR_nit__parser_nodes__ANode___parent].val; /* _parent on <var28:nullable ANode> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
/* <var31:nullable ANode> isa AModule */
cltype = type_nit__AModule.color;
idtype = type_nit__AModule.id;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 749);
fatal_exit(1);
}
var_amod = var31;
{
{ /* Inline parser_nodes#AModule#n_moduledecl (var_amod) on <var_amod:AModule> */
var37 = var_amod->attrs[COLOR_nit__parser_nodes__AModule___n_moduledecl].val; /* _n_moduledecl on <var_amod:AModule> */
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
var41 = ((short int(*)(val* self, val* p0))(var_amoddecl->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_amoddecl, var_other16); /* == on <var_amoddecl:nullable AModuledecl(AModuledecl)>*/
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
var46 = standard___standard__NativeString___to_s_with_length(var45, 14l);
var44 = var46;
varonce43 = var44;
}
{
var47 = nit__annotation___Prod___get_single_annotation(var_amoddecl, var44, var_modelbuilder);
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
var51 = ((short int(*)(val* self, val* p0))(var_old->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_old, var_other16); /* == on <var_old:nullable AAnnotation(AAnnotation)>*/
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
var55 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var53 = var55;
RET_LABEL54:(void)0;
}
}
if (var53 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 756);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var53) on <var53:nullable ASignature> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1693);
fatal_exit(1);
}
var58 = var53->attrs[COLOR_nit__parser_nodes__ASignature___n_params].val; /* _n_params on <var53:nullable ASignature> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1693);
fatal_exit(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
var59 = nit___nit__ANodes___standard__abstract_collection__Collection__length(var56);
}
{
{ /* Inline kernel#Int#> (var59,0l) on <var59:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var62 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var62)) {
var_class_name65 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name65);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
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
var70 = standard___standard__NativeString___to_s_with_length(var69, 8l);
var68 = var70;
varonce67 = var68;
}
if (unlikely(varonce71==NULL)) {
var72 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = "Warning: init with signature in ";
var76 = standard___standard__NativeString___to_s_with_length(var75, 32l);
var74 = var76;
varonce73 = var74;
}
((struct instance_standard__NativeArray*)var72)->values[0]=var74;
} else {
var72 = varonce71;
varonce71 = NULL;
}
{
var77 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:MClassDef>*/
}
((struct instance_standard__NativeArray*)var72)->values[1]=var77;
{
var78 = ((val*(*)(val* self))(var72->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var72); /* native_to_s on <var72:NativeArray[String]>*/
}
varonce71 = var72;
{
nit___nit__ModelBuilder___advice(var_modelbuilder, self, var68, var78); /* Direct call modelbuilder_base#ModelBuilder#advice on <var_modelbuilder:ModelBuilder>*/
}
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ADefinition#n_visibility (self) on <self:AMethPropdef> */
var81 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AMethPropdef> */
var79 = var81;
RET_LABEL80:(void)0;
}
}
/* <var79:nullable AVisibility> isa APublicVisibility */
cltype83 = type_nit__APublicVisibility.color;
idtype84 = type_nit__APublicVisibility.id;
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
var89 = standard___standard__NativeString___to_s_with_length(var88, 8l);
var87 = var89;
varonce86 = var87;
}
if (unlikely(varonce90==NULL)) {
var91 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce92!=NULL)) {
var93 = varonce92;
} else {
var94 = "Warning: non-public init in ";
var95 = standard___standard__NativeString___to_s_with_length(var94, 28l);
var93 = var95;
varonce92 = var93;
}
((struct instance_standard__NativeArray*)var91)->values[0]=var93;
} else {
var91 = varonce90;
varonce90 = NULL;
}
{
var96 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:MClassDef>*/
}
((struct instance_standard__NativeArray*)var91)->values[1]=var96;
{
var97 = ((val*(*)(val* self))(var91->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var91); /* native_to_s on <var91:NativeArray[String]>*/
}
varonce90 = var91;
{
nit___nit__ModelBuilder___advice(var_modelbuilder, self, var87, var97); /* Direct call modelbuilder_base#ModelBuilder#advice on <var_modelbuilder:ModelBuilder>*/
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
