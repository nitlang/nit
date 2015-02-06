#include "nit__modelize_property.sep.0.h"
/* method modelize_property#ToolContext#modelize_property_phase for (self: ToolContext): Phase */
val* nit__modelize_property___ToolContext___modelize_property_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nit__modelize_property__ToolContext___modelize_property_phase].val; /* _modelize_property_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelize_property_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 24);
show_backtrace(1);
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
val* var10 /* : null */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : ToolContext */;
val* var15 /* : ToolContext */;
val* var16 /* : ModelBuilder */;
var_nmodule = p0;
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var2 = var_nmodule->attrs[COLOR_nit__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 919);
show_backtrace(1);
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
var5 = ((short int (*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4) /* is_ok on <var_4:Iterator[AClassdef]>*/;
}
if (var5){
{
var6 = ((val* (*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4) /* item on <var_4:Iterator[AClassdef]>*/;
}
var_nclassdef = var6;
{
{ /* Inline modelize_class#AClassdef#all_defs (var_nclassdef) on <var_nclassdef:AClassdef> */
var9 = var_nclassdef->attrs[COLOR_nit__modelize_class__AClassdef___all_defs].val; /* _all_defs on <var_nclassdef:AClassdef> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
var10 = NULL;
if (var7 == NULL) {
var11 = 1; /* is null */
} else {
var11 = 0; /* arg is null but recv is not */
}
if (0) {
var12 = standard___standard__Array___standard__kernel__Object___61d_61d(var7, var10);
var11 = var12;
}
if (var11){
goto BREAK_label;
} else {
}
{
{ /* Inline phase#Phase#toolcontext (self) on <self:ModelizePropertyPhase> */
var15 = self->attrs[COLOR_nit__phase__Phase___toolcontext].val; /* _toolcontext on <self:ModelizePropertyPhase> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 201);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = nit__modelbuilder_base___ToolContext___modelbuilder(var13);
}
{
nit__modelize_property___ModelBuilder___build_properties(var16, var_nclassdef); /* Direct call modelize_property#ModelBuilder#build_properties on <var16:ModelBuilder>*/
}
BREAK_label: (void)0;
{
((void (*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4) /* next on <var_4:Iterator[AClassdef]>*/;
}
} else {
goto BREAK_label17;
}
}
BREAK_label17: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_4) on <var_4:Iterator[AClassdef]> */
RET_LABEL18:(void)0;
}
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
show_backtrace(1);
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
val* var5 /* : null */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : ToolContext */;
val* var13 /* : ToolContext */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var16 /* : MProperty */;
val* var18 /* : MProperty */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : HashMap[MClassDef, AClassdef] */;
val* var24 /* : HashMap[MClassDef, AClassdef] */;
val* var25 /* : MClassDef */;
val* var27 /* : MClassDef */;
val* var28 /* : nullable Object */;
val* var29 /* : null */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
val* var35 /* : null */;
var_mpropdef = p0;
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (self) on <self:ModelBuilder> */
var3 = self->attrs[COLOR_nit__modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <self:ModelBuilder> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 40);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = standard___standard__HashMap___standard__abstract_collection__MapRead__get_or_null(var1, var_mpropdef);
}
var_res = var4;
var5 = NULL;
if (var_res == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var5) on <var_res:nullable Object(nullable APropdef)> */
var_other = var5;
{
var9 = ((short int (*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable APropdef(APropdef)>*/;
}
var10 = !var9;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (var6){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var13 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
nit__phase___ToolContext___run_phases_on_npropdef(var11, var_res); /* Direct call phase#ToolContext#run_phases_on_npropdef on <var11:ToolContext>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
/* <var_mpropdef:MPropDef> isa MMethodDef */
cltype = type_nit__MMethodDef.color;
idtype = type_nit__MMethodDef.id;
if(cltype >= var_mpropdef->type->table_size) {
var15 = 0;
} else {
var15 = var_mpropdef->type->type_table[cltype] == idtype;
}
var_ = var15;
if (var15){
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MPropDef(MMethodDef)> */
var18 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MPropDef(MMethodDef)> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline model#MMethod#is_root_init (var16) on <var16:MProperty(MMethod)> */
var21 = var16->attrs[COLOR_nit__model__MMethod___is_root_init].s; /* _is_root_init on <var16:MProperty(MMethod)> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
var14 = var19;
} else {
var14 = var_;
}
if (var14){
{
{ /* Inline modelize_class#ModelBuilder#mclassdef2nclassdef (self) on <self:ModelBuilder> */
var24 = self->attrs[COLOR_nit__modelize_class__ModelBuilder___mclassdef2nclassdef].val; /* _mclassdef2nclassdef on <self:ModelBuilder> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 426);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MPropDef(MMethodDef)> */
var27 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MPropDef(MMethodDef)> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
var28 = standard___standard__HashMap___standard__abstract_collection__MapRead__get_or_null(var22, var25);
}
var_res = var28;
var29 = NULL;
if (var_res == NULL) {
var30 = 0; /* is null */
} else {
var30 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var29) on <var_res:nullable Object(nullable AClassdef)> */
var_other = var29;
{
var33 = ((short int (*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable AClassdef(AClassdef)>*/;
}
var34 = !var33;
var31 = var34;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
var30 = var31;
}
if (var30){
var = var_res;
goto RET_LABEL;
} else {
}
} else {
}
var35 = NULL;
var = var35;
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
val* var6 /* : null */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : ANodes[APropdef] */;
val* var15 /* : ANodes[APropdef] */;
val* var_ /* var : ANodes[APropdef] */;
val* var16 /* : Iterator[ANode] */;
val* var_17 /* var : Iterator[APropdef] */;
short int var18 /* : Bool */;
val* var19 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
short int var20 /* : Bool */;
int cltype;
int idtype;
val* var21 /* : ToolContext */;
val* var23 /* : ToolContext */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 426);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = standard___standard__HashMap___standard__abstract_collection__MapRead__get_or_null(var2, var_mclassdef);
}
var_n = var5;
var6 = NULL;
if (var_n == NULL) {
var7 = 1; /* is null */
} else {
var7 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_n,var6) on <var_n:nullable AClassdef> */
var_other = var6;
{
{ /* Inline kernel#Object#is_same_instance (var_n,var_other) on <var_n:nullable AClassdef(AClassdef)> */
var12 = var_n == var_other;
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
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_n) on <var_n:nullable AClassdef(AClassdef)> */
var15 = var_n->attrs[COLOR_nit__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_n:nullable AClassdef(AClassdef)> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1012);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_ = var13;
{
var16 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_);
}
var_17 = var16;
for(;;) {
{
var18 = ((short int (*)(val* self))(var_17->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_17) /* is_ok on <var_17:Iterator[APropdef]>*/;
}
if (var18){
{
var19 = ((val* (*)(val* self))(var_17->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_17) /* item on <var_17:Iterator[APropdef]>*/;
}
var_npropdef = var19;
/* <var_npropdef:APropdef> isa AAttrPropdef */
cltype = type_nit__AAttrPropdef.color;
idtype = type_nit__AAttrPropdef.id;
if(cltype >= var_npropdef->type->table_size) {
var20 = 0;
} else {
var20 = var_npropdef->type->type_table[cltype] == idtype;
}
if (var20){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var23 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
nit__phase___ToolContext___run_phases_on_npropdef(var21, var_npropdef); /* Direct call phase#ToolContext#run_phases_on_npropdef on <var21:ToolContext>*/
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_res, var_npropdef); /* Direct call array#Array#add on <var_res:Array[AAttrPropdef]>*/
}
} else {
}
{
((void (*)(val* self))(var_17->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_17) /* next on <var_17:Iterator[APropdef]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_17) on <var_17:Iterator[APropdef]> */
RET_LABEL24:(void)0;
}
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
short int var3 /* : Bool */;
val* var5 /* : nullable MClassDef */;
val* var7 /* : nullable MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var8 /* : nullable POSetElement[MClassDef] */;
val* var10 /* : nullable POSetElement[MClassDef] */;
val* var11 /* : null */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : nullable POSetElement[MClassDef] */;
val* var20 /* : nullable POSetElement[MClassDef] */;
val* var21 /* : Collection[nullable Object] */;
val* var_ /* var : Collection[MClassDef] */;
val* var22 /* : Iterator[nullable Object] */;
val* var_23 /* var : Iterator[MClassDef] */;
short int var24 /* : Bool */;
val* var25 /* : nullable Object */;
val* var_superclassdef /* var superclassdef: MClassDef */;
val* var26 /* : HashMap[MClassDef, AClassdef] */;
val* var28 /* : HashMap[MClassDef, AClassdef] */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
val* var31 /* : HashMap[MClassDef, AClassdef] */;
val* var33 /* : HashMap[MClassDef, AClassdef] */;
val* var34 /* : nullable Object */;
val* var37 /* : nullable Array[AClassdef] */;
val* var39 /* : nullable Array[AClassdef] */;
val* var_40 /* var : nullable Array[AClassdef] */;
val* var41 /* : ArrayIterator[nullable Object] */;
val* var_42 /* var : ArrayIterator[AClassdef] */;
short int var43 /* : Bool */;
val* var44 /* : nullable Object */;
val* var_nclassdef2 /* var nclassdef2: AClassdef */;
val* var45 /* : ANodes[APropdef] */;
val* var47 /* : ANodes[APropdef] */;
val* var_48 /* var : ANodes[APropdef] */;
val* var49 /* : Iterator[ANode] */;
val* var_50 /* var : Iterator[APropdef] */;
short int var51 /* : Bool */;
val* var52 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
val* var55 /* : ANodes[APropdef] */;
val* var57 /* : ANodes[APropdef] */;
val* var_58 /* var : ANodes[APropdef] */;
val* var59 /* : Iterator[ANode] */;
val* var_60 /* var : Iterator[APropdef] */;
short int var61 /* : Bool */;
val* var62 /* : nullable Object */;
val* var_npropdef63 /* var npropdef: APropdef */;
val* var66 /* : ANodes[APropdef] */;
val* var68 /* : ANodes[APropdef] */;
val* var_69 /* var : ANodes[APropdef] */;
val* var70 /* : Iterator[ANode] */;
val* var_71 /* var : Iterator[APropdef] */;
short int var72 /* : Bool */;
val* var73 /* : nullable Object */;
val* var_npropdef74 /* var npropdef: APropdef */;
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
var3 = 1;
{
{ /* Inline modelize_property#AClassdef#build_properties_is_done= (var_nclassdef,var3) on <var_nclassdef:AClassdef> */
var_nclassdef->attrs[COLOR_nit__modelize_property__AClassdef___build_properties_is_done].s = var3; /* _build_properties_is_done on <var_nclassdef:AClassdef> */
RET_LABEL4:(void)0;
}
}
{
{ /* Inline modelize_class#AClassdef#mclassdef (var_nclassdef) on <var_nclassdef:AClassdef> */
var7 = var_nclassdef->attrs[COLOR_nit__modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_nclassdef:AClassdef> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 89);
show_backtrace(1);
}
var_mclassdef = var5;
{
{ /* Inline model#MClassDef#in_hierarchy (var_mclassdef) on <var_mclassdef:MClassDef> */
var10 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___in_hierarchy].val; /* _in_hierarchy on <var_mclassdef:MClassDef> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var11 = NULL;
if (var8 == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var8,var11) on <var8:nullable POSetElement[MClassDef]> */
var_other = var11;
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:nullable POSetElement[MClassDef](POSetElement[MClassDef])> */
var17 = var8 == var_other;
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
{ /* Inline model#MClassDef#in_hierarchy (var_mclassdef) on <var_mclassdef:MClassDef> */
var20 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___in_hierarchy].val; /* _in_hierarchy on <var_mclassdef:MClassDef> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (var18 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 91);
show_backtrace(1);
} else {
var21 = poset___poset__POSetElement___direct_greaters(var18);
}
var_ = var21;
{
var22 = ((val* (*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Collection[MClassDef]>*/;
}
var_23 = var22;
for(;;) {
{
var24 = ((short int (*)(val* self))(var_23->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_23) /* is_ok on <var_23:Iterator[MClassDef]>*/;
}
if (var24){
{
var25 = ((val* (*)(val* self))(var_23->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_23) /* item on <var_23:Iterator[MClassDef]>*/;
}
var_superclassdef = var25;
{
{ /* Inline modelize_class#ModelBuilder#mclassdef2nclassdef (self) on <self:ModelBuilder> */
var28 = self->attrs[COLOR_nit__modelize_class__ModelBuilder___mclassdef2nclassdef].val; /* _mclassdef2nclassdef on <self:ModelBuilder> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 426);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
var29 = standard___standard__MapRead___has_key(var26, var_superclassdef);
}
var30 = !var29;
if (var30){
goto BREAK_label;
} else {
}
{
{ /* Inline modelize_class#ModelBuilder#mclassdef2nclassdef (self) on <self:ModelBuilder> */
var33 = self->attrs[COLOR_nit__modelize_class__ModelBuilder___mclassdef2nclassdef].val; /* _mclassdef2nclassdef on <self:ModelBuilder> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_class, 426);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
var34 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var31, var_superclassdef);
}
{
nit__modelize_property___ModelBuilder___build_properties(self, var34); /* Direct call modelize_property#ModelBuilder#build_properties on <self:ModelBuilder>*/
}
BREAK_label: (void)0;
{
((void (*)(val* self))(var_23->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_23) /* next on <var_23:Iterator[MClassDef]>*/;
}
} else {
goto BREAK_label35;
}
}
BREAK_label35: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_23) on <var_23:Iterator[MClassDef]> */
RET_LABEL36:(void)0;
}
}
{
nit__modelize_property___MClassDef___build_self_type(var_mclassdef, self, var_nclassdef); /* Direct call modelize_property#MClassDef#build_self_type on <var_mclassdef:MClassDef>*/
}
{
{ /* Inline modelize_class#AClassdef#all_defs (var_nclassdef) on <var_nclassdef:AClassdef> */
var39 = var_nclassdef->attrs[COLOR_nit__modelize_class__AClassdef___all_defs].val; /* _all_defs on <var_nclassdef:AClassdef> */
var37 = var39;
RET_LABEL38:(void)0;
}
}
var_40 = var37;
if (var_40 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 97);
show_backtrace(1);
} else {
var41 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_40);
}
var_42 = var41;
for(;;) {
{
var43 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_42);
}
if (var43){
{
var44 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_42);
}
var_nclassdef2 = var44;
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_nclassdef2) on <var_nclassdef2:AClassdef> */
var47 = var_nclassdef2->attrs[COLOR_nit__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef2:AClassdef> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1012);
show_backtrace(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
var_48 = var45;
{
var49 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_48);
}
var_50 = var49;
for(;;) {
{
var51 = ((short int (*)(val* self))(var_50->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_50) /* is_ok on <var_50:Iterator[APropdef]>*/;
}
if (var51){
{
var52 = ((val* (*)(val* self))(var_50->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_50) /* item on <var_50:Iterator[APropdef]>*/;
}
var_npropdef = var52;
{
((void (*)(val* self, val* p0, val* p1))(var_npropdef->class->vft[COLOR_nit__modelize_property__APropdef__build_property]))(var_npropdef, self, var_mclassdef) /* build_property on <var_npropdef:APropdef>*/;
}
{
((void (*)(val* self))(var_50->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_50) /* next on <var_50:Iterator[APropdef]>*/;
}
} else {
goto BREAK_label53;
}
}
BREAK_label53: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_50) on <var_50:Iterator[APropdef]> */
RET_LABEL54:(void)0;
}
}
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_nclassdef2) on <var_nclassdef2:AClassdef> */
var57 = var_nclassdef2->attrs[COLOR_nit__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef2:AClassdef> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1012);
show_backtrace(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
var_58 = var55;
{
var59 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_58);
}
var_60 = var59;
for(;;) {
{
var61 = ((short int (*)(val* self))(var_60->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_60) /* is_ok on <var_60:Iterator[APropdef]>*/;
}
if (var61){
{
var62 = ((val* (*)(val* self))(var_60->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_60) /* item on <var_60:Iterator[APropdef]>*/;
}
var_npropdef63 = var62;
{
((void (*)(val* self, val* p0))(var_npropdef63->class->vft[COLOR_nit__modelize_property__APropdef__build_signature]))(var_npropdef63, self) /* build_signature on <var_npropdef63:APropdef>*/;
}
{
((void (*)(val* self))(var_60->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_60) /* next on <var_60:Iterator[APropdef]>*/;
}
} else {
goto BREAK_label64;
}
}
BREAK_label64: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_60) on <var_60:Iterator[APropdef]> */
RET_LABEL65:(void)0;
}
}
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_nclassdef2) on <var_nclassdef2:AClassdef> */
var68 = var_nclassdef2->attrs[COLOR_nit__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef2:AClassdef> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1012);
show_backtrace(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
var_69 = var66;
{
var70 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_69);
}
var_71 = var70;
for(;;) {
{
var72 = ((short int (*)(val* self))(var_71->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_71) /* is_ok on <var_71:Iterator[APropdef]>*/;
}
if (var72){
{
var73 = ((val* (*)(val* self))(var_71->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_71) /* item on <var_71:Iterator[APropdef]>*/;
}
var_npropdef74 = var73;
{
((void (*)(val* self, val* p0))(var_npropdef74->class->vft[COLOR_nit__modelize_property__APropdef__check_signature]))(var_npropdef74, self) /* check_signature on <var_npropdef74:APropdef>*/;
}
{
((void (*)(val* self))(var_71->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_71) /* next on <var_71:Iterator[APropdef]>*/;
}
} else {
goto BREAK_label75;
}
}
BREAK_label75: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_71) on <var_71:Iterator[APropdef]> */
RET_LABEL76:(void)0;
}
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_42); /* Direct call array#ArrayIterator#next on <var_42:ArrayIterator[AClassdef]>*/
}
} else {
goto BREAK_label77;
}
}
BREAK_label77: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_42) on <var_42:ArrayIterator[AClassdef]> */
RET_LABEL78:(void)0;
}
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
long var14 /* : Int */;
val* var15 /* : FlatString */;
short int var16 /* : Bool */;
short int var_ /* var : Bool */;
val* var17 /* : nullable MMethod */;
val* var19 /* : nullable MMethod */;
val* var20 /* : null */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : MMethod */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : FlatString */;
val* var33 /* : MClass */;
val* var35 /* : MClass */;
val* var36 /* : MVisibility */;
val* var38 /* : MVisibility */;
val* var_mprop /* var mprop: MMethod */;
short int var39 /* : Bool */;
val* var41 /* : MMethodDef */;
val* var42 /* : Location */;
val* var44 /* : Location */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var45 /* : Array[MParameter] */;
val* var_mparameters /* var mparameters: Array[MParameter] */;
val* var46 /* : MSignature */;
val* var47 /* : null */;
val* var_msignature /* var msignature: MSignature */;
short int var50 /* : Bool */;
val* var53 /* : ToolContext */;
val* var55 /* : ToolContext */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
long var59 /* : Int */;
val* var60 /* : FlatString */;
val* var61 /* : Array[Object] */;
long var62 /* : Int */;
val* var63 /* : NativeArray[Object] */;
val* var64 /* : String */;
long var65 /* : Int */;
val* var67 /* : MClass */;
val* var69 /* : MClass */;
val* var70 /* : MClassKind */;
val* var72 /* : MClassKind */;
short int var73 /* : Bool */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
val* var77 /* : null */;
val* var_defined_init /* var defined_init: nullable MMethodDef */;
val* var78 /* : Array[MPropDef] */;
val* var80 /* : Array[MPropDef] */;
val* var_81 /* var : Array[MPropDef] */;
val* var82 /* : ArrayIterator[nullable Object] */;
val* var_83 /* var : ArrayIterator[MPropDef] */;
short int var84 /* : Bool */;
val* var85 /* : nullable Object */;
val* var_mpropdef86 /* var mpropdef: MPropDef */;
short int var87 /* : Bool */;
int cltype;
int idtype;
short int var88 /* : Bool */;
val* var89 /* : MProperty */;
val* var91 /* : MProperty */;
short int var92 /* : Bool */;
short int var94 /* : Bool */;
short int var95 /* : Bool */;
val* var96 /* : MProperty */;
val* var98 /* : MProperty */;
short int var99 /* : Bool */;
short int var101 /* : Bool */;
val* var102 /* : null */;
short int var103 /* : Bool */;
short int var104 /* : Bool */;
short int var106 /* : Bool */;
short int var108 /* : Bool */;
val* var109 /* : MProperty */;
val* var111 /* : MProperty */;
val* var112 /* : String */;
val* var114 /* : String */;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : NativeString */;
long var118 /* : Int */;
val* var119 /* : FlatString */;
short int var120 /* : Bool */;
short int var123 /* : Bool */;
int cltype124;
int idtype125;
short int var126 /* : Bool */;
val* var127 /* : Array[MParameter] */;
val* var_mparameters128 /* var mparameters: Array[MParameter] */;
val* var129 /* : Array[MProperty] */;
val* var_initializers /* var initializers: Array[MProperty] */;
val* var130 /* : ANodes[APropdef] */;
val* var132 /* : ANodes[APropdef] */;
val* var_133 /* var : ANodes[APropdef] */;
val* var134 /* : Iterator[ANode] */;
val* var_135 /* var : Iterator[APropdef] */;
short int var136 /* : Bool */;
val* var137 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
short int var138 /* : Bool */;
int cltype139;
int idtype140;
val* var141 /* : nullable MPropDef */;
val* var143 /* : nullable MPropDef */;
val* var144 /* : null */;
short int var145 /* : Bool */;
short int var146 /* : Bool */;
short int var148 /* : Bool */;
short int var150 /* : Bool */;
static val* varonce151;
val* var152 /* : String */;
char* var153 /* : NativeString */;
long var154 /* : Int */;
val* var155 /* : FlatString */;
val* var156 /* : nullable AAnnotation */;
val* var_at /* var at: nullable AAnnotation */;
val* var157 /* : null */;
short int var158 /* : Bool */;
short int var159 /* : Bool */;
short int var161 /* : Bool */;
short int var163 /* : Bool */;
val* var165 /* : nullable MPropDef */;
val* var167 /* : nullable MPropDef */;
val* var168 /* : nullable MSignature */;
val* var170 /* : nullable MSignature */;
val* var_sig /* var sig: nullable MSignature */;
val* var171 /* : null */;
short int var172 /* : Bool */;
short int var173 /* : Bool */;
short int var175 /* : Bool */;
short int var177 /* : Bool */;
val* var178 /* : nullable MPropDef */;
val* var180 /* : nullable MPropDef */;
short int var181 /* : Bool */;
short int var182 /* : Bool */;
static val* varonce183;
val* var184 /* : String */;
char* var185 /* : NativeString */;
long var186 /* : Int */;
val* var187 /* : FlatString */;
val* var188 /* : Array[MParameter] */;
val* var190 /* : Array[MParameter] */;
val* var_191 /* var : Array[MParameter] */;
val* var192 /* : ArrayIterator[nullable Object] */;
val* var_193 /* var : ArrayIterator[MParameter] */;
short int var194 /* : Bool */;
val* var195 /* : nullable Object */;
val* var_param /* var param: MParameter */;
val* var196 /* : MType */;
val* var198 /* : MType */;
val* var_ret_type /* var ret_type: MType */;
val* var199 /* : MParameter */;
val* var200 /* : String */;
val* var202 /* : String */;
short int var203 /* : Bool */;
val* var_mparameter /* var mparameter: MParameter */;
val* var206 /* : nullable MPropDef */;
val* var208 /* : nullable MPropDef */;
val* var209 /* : MProperty */;
val* var211 /* : MProperty */;
short int var212 /* : Bool */;
int cltype213;
int idtype214;
val* var215 /* : nullable MPropDef */;
val* var217 /* : nullable MPropDef */;
val* var218 /* : null */;
short int var219 /* : Bool */;
short int var220 /* : Bool */;
short int var222 /* : Bool */;
short int var224 /* : Bool */;
short int var225 /* : Bool */;
short int var227 /* : Bool */;
static val* varonce228;
val* var229 /* : String */;
char* var230 /* : NativeString */;
long var231 /* : Int */;
val* var232 /* : FlatString */;
val* var233 /* : nullable AAnnotation */;
val* var_atautoinit /* var atautoinit: nullable AAnnotation */;
val* var234 /* : null */;
short int var235 /* : Bool */;
short int var236 /* : Bool */;
val* var_other238 /* var other: nullable Object */;
short int var239 /* : Bool */;
short int var240 /* : Bool */;
val* var241 /* : nullable MMethodDef */;
val* var243 /* : nullable MMethodDef */;
val* var244 /* : MProperty */;
val* var246 /* : MProperty */;
short int var247 /* : Bool */;
short int var249 /* : Bool */;
val* var250 /* : nullable MPropDef */;
val* var252 /* : nullable MPropDef */;
val* var253 /* : MProperty */;
val* var255 /* : MProperty */;
val* var256 /* : String */;
val* var258 /* : String */;
long var259 /* : Int */;
val* var260 /* : Text */;
val* var_paramname /* var paramname: String */;
val* var261 /* : nullable MPropDef */;
val* var263 /* : nullable MPropDef */;
val* var264 /* : nullable MType */;
val* var266 /* : nullable MType */;
val* var_ret_type267 /* var ret_type: nullable MType */;
val* var268 /* : null */;
short int var269 /* : Bool */;
short int var270 /* : Bool */;
short int var272 /* : Bool */;
short int var274 /* : Bool */;
val* var275 /* : MParameter */;
short int var276 /* : Bool */;
val* var_mparameter277 /* var mparameter: MParameter */;
val* var278 /* : nullable MMethodDef */;
val* var280 /* : nullable MMethodDef */;
val* var_msetter /* var msetter: nullable MMethodDef */;
val* var281 /* : null */;
short int var282 /* : Bool */;
short int var283 /* : Bool */;
short int var285 /* : Bool */;
short int var287 /* : Bool */;
val* var288 /* : nullable MPropDef */;
val* var290 /* : nullable MPropDef */;
val* var291 /* : MProperty */;
val* var293 /* : MProperty */;
val* var294 /* : MProperty */;
val* var296 /* : MProperty */;
val* var299 /* : nullable MMethod */;
val* var301 /* : nullable MMethod */;
val* var302 /* : null */;
short int var303 /* : Bool */;
short int var304 /* : Bool */;
short int var306 /* : Bool */;
short int var308 /* : Bool */;
val* var309 /* : nullable MMethod */;
val* var311 /* : nullable MMethod */;
val* var312 /* : MModule */;
val* var314 /* : MModule */;
val* var315 /* : MClassType */;
val* var317 /* : MClassType */;
val* var318 /* : Array[MPropDef] */;
val* var_spropdefs /* var spropdefs: Array[MMethodDef] */;
short int var319 /* : Bool */;
val* var320 /* : ToolContext */;
val* var322 /* : ToolContext */;
val* var323 /* : Location */;
val* var325 /* : Location */;
static val* varonce326;
val* var327 /* : String */;
char* var328 /* : NativeString */;
long var329 /* : Int */;
val* var330 /* : FlatString */;
static val* varonce331;
val* var332 /* : String */;
char* var333 /* : NativeString */;
long var334 /* : Int */;
val* var335 /* : FlatString */;
val* var336 /* : nullable MMethod */;
val* var338 /* : nullable MMethod */;
val* var339 /* : MClassDef */;
val* var341 /* : MClassDef */;
static val* varonce342;
val* var343 /* : String */;
char* var344 /* : NativeString */;
long var345 /* : Int */;
val* var346 /* : FlatString */;
val* var347 /* : Array[Object] */;
long var348 /* : Int */;
val* var349 /* : NativeArray[Object] */;
val* var350 /* : String */;
val* var351 /* : nullable Object */;
val* var_longest /* var longest: MMethodDef */;
long var352 /* : Int */;
long var354 /* : Int */;
long var355 /* : Int */;
short int var356 /* : Bool */;
short int var358 /* : Bool */;
int cltype359;
int idtype360;
const char* var_class_name;
short int var361 /* : Bool */;
val* var_362 /* var : Array[MMethodDef] */;
val* var363 /* : ArrayIterator[nullable Object] */;
val* var_364 /* var : ArrayIterator[MMethodDef] */;
short int var365 /* : Bool */;
val* var366 /* : nullable Object */;
val* var_spd /* var spd: MMethodDef */;
val* var367 /* : Array[MProperty] */;
val* var369 /* : Array[MProperty] */;
long var370 /* : Int */;
long var372 /* : Int */;
val* var373 /* : Array[MProperty] */;
val* var375 /* : Array[MProperty] */;
long var376 /* : Int */;
long var378 /* : Int */;
short int var379 /* : Bool */;
short int var381 /* : Bool */;
int cltype382;
int idtype383;
const char* var_class_name384;
short int var385 /* : Bool */;
val* var_388 /* var : Array[MMethodDef] */;
val* var389 /* : ArrayIterator[nullable Object] */;
val* var_390 /* var : ArrayIterator[MMethodDef] */;
short int var391 /* : Bool */;
val* var392 /* : nullable Object */;
val* var_spd393 /* var spd: MMethodDef */;
long var394 /* : Int */;
long var_i /* var i: Int */;
val* var395 /* : Array[MProperty] */;
val* var397 /* : Array[MProperty] */;
val* var_398 /* var : Array[MProperty] */;
val* var399 /* : ArrayIterator[nullable Object] */;
val* var_400 /* var : ArrayIterator[MProperty] */;
short int var401 /* : Bool */;
val* var402 /* : nullable Object */;
val* var_p /* var p: MProperty */;
val* var403 /* : Array[MProperty] */;
val* var405 /* : Array[MProperty] */;
val* var406 /* : nullable Object */;
short int var407 /* : Bool */;
short int var409 /* : Bool */;
short int var410 /* : Bool */;
static val* varonce411;
val* var412 /* : String */;
char* var413 /* : NativeString */;
long var414 /* : Int */;
val* var415 /* : FlatString */;
static val* varonce416;
val* var417 /* : String */;
char* var418 /* : NativeString */;
long var419 /* : Int */;
val* var420 /* : FlatString */;
val* var421 /* : Array[MProperty] */;
val* var423 /* : Array[MProperty] */;
static val* varonce424;
val* var425 /* : String */;
char* var426 /* : NativeString */;
long var427 /* : Int */;
val* var428 /* : FlatString */;
val* var429 /* : String */;
static val* varonce430;
val* var431 /* : String */;
char* var432 /* : NativeString */;
long var433 /* : Int */;
val* var434 /* : FlatString */;
static val* varonce435;
val* var436 /* : String */;
char* var437 /* : NativeString */;
long var438 /* : Int */;
val* var439 /* : FlatString */;
val* var440 /* : Array[MProperty] */;
val* var442 /* : Array[MProperty] */;
static val* varonce443;
val* var444 /* : String */;
char* var445 /* : NativeString */;
long var446 /* : Int */;
val* var447 /* : FlatString */;
val* var448 /* : String */;
static val* varonce449;
val* var450 /* : String */;
char* var451 /* : NativeString */;
long var452 /* : Int */;
val* var453 /* : FlatString */;
val* var454 /* : Array[Object] */;
long var455 /* : Int */;
val* var456 /* : NativeArray[Object] */;
val* var457 /* : String */;
long var458 /* : Int */;
long var459 /* : Int */;
short int var461 /* : Bool */;
int cltype462;
int idtype463;
const char* var_class_name464;
long var465 /* : Int */;
short int var470 /* : Bool */;
short int var471 /* : Bool */;
long var472 /* : Int */;
long var474 /* : Int */;
long var475 /* : Int */;
short int var476 /* : Bool */;
short int var478 /* : Bool */;
short int var_479 /* var : Bool */;
short int var480 /* : Bool */;
short int var_481 /* var : Bool */;
val* var482 /* : null */;
short int var483 /* : Bool */;
short int var484 /* : Bool */;
short int var486 /* : Bool */;
short int var488 /* : Bool */;
val* var489 /* : ToolContext */;
val* var491 /* : ToolContext */;
static val* varonce492;
val* var493 /* : String */;
char* var494 /* : NativeString */;
long var495 /* : Int */;
val* var496 /* : FlatString */;
val* var497 /* : Array[Object] */;
long var498 /* : Int */;
val* var499 /* : NativeArray[Object] */;
val* var500 /* : String */;
long var501 /* : Int */;
val* var502 /* : MClass */;
val* var504 /* : MClass */;
val* var506 /* : Array[MProperty] */;
val* var508 /* : Array[MProperty] */;
long var509 /* : Int */;
long var511 /* : Int */;
long var512 /* : Int */;
short int var513 /* : Bool */;
short int var515 /* : Bool */;
int cltype516;
int idtype517;
const char* var_class_name518;
short int var519 /* : Bool */;
val* var520 /* : nullable MSignature */;
val* var522 /* : nullable MSignature */;
val* var523 /* : Array[MParameter] */;
val* var525 /* : Array[MParameter] */;
val* var526 /* : Array[MProperty] */;
val* var528 /* : Array[MProperty] */;
val* var529 /* : null */;
short int var530 /* : Bool */;
short int var531 /* : Bool */;
short int var533 /* : Bool */;
short int var534 /* : Bool */;
val* var535 /* : Array[MProperty] */;
val* var537 /* : Array[MProperty] */;
val* var538 /* : MSignature */;
val* var539 /* : null */;
val* var_msignature540 /* var msignature: MSignature */;
val* var542 /* : ToolContext */;
val* var544 /* : ToolContext */;
static val* varonce545;
val* var546 /* : String */;
char* var547 /* : NativeString */;
long var548 /* : Int */;
val* var549 /* : FlatString */;
val* var550 /* : Array[Object] */;
long var551 /* : Int */;
val* var552 /* : NativeArray[Object] */;
val* var553 /* : String */;
long var554 /* : Int */;
val* var555 /* : MClass */;
val* var557 /* : MClass */;
val* var559 /* : nullable MMethod */;
val* var561 /* : nullable MMethod */;
val* var_mprop562 /* var mprop: MMethod */;
val* var563 /* : MMethodDef */;
val* var564 /* : Location */;
val* var566 /* : Location */;
val* var_mpropdef567 /* var mpropdef: MMethodDef */;
short int var568 /* : Bool */;
val* var570 /* : Array[MProperty] */;
val* var572 /* : Array[MProperty] */;
val* var573 /* : MSignature */;
val* var574 /* : null */;
val* var_msignature575 /* var msignature: MSignature */;
val* var577 /* : MSignature */;
val* var578 /* : Array[MParameter] */;
val* var579 /* : null */;
val* var582 /* : ToolContext */;
val* var584 /* : ToolContext */;
static val* varonce585;
val* var586 /* : String */;
char* var587 /* : NativeString */;
long var588 /* : Int */;
val* var589 /* : FlatString */;
val* var590 /* : Array[Object] */;
long var591 /* : Int */;
val* var592 /* : NativeArray[Object] */;
val* var593 /* : String */;
long var594 /* : Int */;
val* var595 /* : MClass */;
val* var597 /* : MClass */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 120);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
if (varonce) {
var12 = varonce;
} else {
var13 = "Object";
var14 = 6;
var15 = standard___standard__NativeString___to_s_with_length(var13, var14);
var12 = var15;
varonce = var12;
}
{
var16 = ((short int (*)(val* self, val* p0))(var9->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var9, var12) /* == on <var9:String>*/;
}
var_ = var16;
if (var16){
{
{ /* Inline modelize_property#ModelBuilder#the_root_init_mmethod (self) on <self:ModelBuilder> */
var19 = self->attrs[COLOR_nit__modelize_property__ModelBuilder___the_root_init_mmethod].val; /* _the_root_init_mmethod on <self:ModelBuilder> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
var20 = NULL;
if (var17 == NULL) {
var21 = 1; /* is null */
} else {
var21 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var17,var20) on <var17:nullable MMethod> */
var_other = var20;
{
{ /* Inline kernel#Object#is_same_instance (var17,var_other) on <var17:nullable MMethod(MMethod)> */
var26 = var17 == var_other;
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
var5 = var21;
} else {
var5 = var_;
}
if (var5){
var27 = NEW_nit__MMethod(&type_nit__MMethod);
if (varonce28) {
var29 = varonce28;
} else {
var30 = "init";
var31 = 4;
var32 = standard___standard__NativeString___to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var35 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline model#MClass#visibility (var33) on <var33:MClass> */
var38 = var33->attrs[COLOR_nit__model__MClass___visibility].val; /* _visibility on <var33:MClass> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 403);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
((void (*)(val* self, val* p0))(var27->class->vft[COLOR_nit__model__MProperty__intro_mclassdef_61d]))(var27, var_mclassdef) /* intro_mclassdef= on <var27:MMethod>*/;
}
{
((void (*)(val* self, val* p0))(var27->class->vft[COLOR_nit__model__MProperty__name_61d]))(var27, var29) /* name= on <var27:MMethod>*/;
}
{
((void (*)(val* self, val* p0))(var27->class->vft[COLOR_nit__model__MProperty__visibility_61d]))(var27, var36) /* visibility= on <var27:MMethod>*/;
}
{
((void (*)(val* self))(var27->class->vft[COLOR_standard__kernel__Object__init]))(var27) /* init on <var27:MMethod>*/;
}
var_mprop = var27;
var39 = 1;
{
{ /* Inline model#MMethod#is_root_init= (var_mprop,var39) on <var_mprop:MMethod> */
var_mprop->attrs[COLOR_nit__model__MMethod___is_root_init].s = var39; /* _is_root_init on <var_mprop:MMethod> */
RET_LABEL40:(void)0;
}
}
var41 = NEW_nit__MMethodDef(&type_nit__MMethodDef);
{
{ /* Inline parser_nodes#ANode#location (var_nclassdef) on <var_nclassdef:AClassdef> */
var44 = var_nclassdef->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var_nclassdef:AClassdef> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 23);
show_backtrace(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
((void (*)(val* self, val* p0))(var41->class->vft[COLOR_nit__model__MPropDef__mclassdef_61d]))(var41, var_mclassdef) /* mclassdef= on <var41:MMethodDef>*/;
}
{
((void (*)(val* self, val* p0))(var41->class->vft[COLOR_nit__model__MPropDef__mproperty_61d]))(var41, var_mprop) /* mproperty= on <var41:MMethodDef>*/;
}
{
((void (*)(val* self, val* p0))(var41->class->vft[COLOR_nit__model__MPropDef__location_61d]))(var41, var42) /* location= on <var41:MMethodDef>*/;
}
{
((void (*)(val* self))(var41->class->vft[COLOR_standard__kernel__Object__init]))(var41) /* init on <var41:MMethodDef>*/;
}
var_mpropdef = var41;
var45 = NEW_standard__Array(&type_standard__Array__nit__MParameter);
{
standard___standard__Array___standard__kernel__Object__init(var45); /* Direct call array#Array#init on <var45:Array[MParameter]>*/
}
var_mparameters = var45;
var46 = NEW_nit__MSignature(&type_nit__MSignature);
var47 = NULL;
{
((void (*)(val* self, val* p0))(var46->class->vft[COLOR_nit__model__MSignature__mparameters_61d]))(var46, var_mparameters) /* mparameters= on <var46:MSignature>*/;
}
{
((void (*)(val* self, val* p0))(var46->class->vft[COLOR_nit__model__MSignature__return_mtype_61d]))(var46, var47) /* return_mtype= on <var46:MSignature>*/;
}
{
((void (*)(val* self))(var46->class->vft[COLOR_standard__kernel__Object__init]))(var46) /* init on <var46:MSignature>*/;
}
var_msignature = var46;
{
{ /* Inline model#MMethodDef#msignature= (var_mpropdef,var_msignature) on <var_mpropdef:MMethodDef> */
var_mpropdef->attrs[COLOR_nit__model__MMethodDef___msignature].val = var_msignature; /* _msignature on <var_mpropdef:MMethodDef> */
RET_LABEL48:(void)0;
}
}
{
{ /* Inline model#MMethodDef#new_msignature= (var_mpropdef,var_msignature) on <var_mpropdef:MMethodDef> */
var_mpropdef->attrs[COLOR_nit__model__MMethodDef___new_msignature].val = var_msignature; /* _new_msignature on <var_mpropdef:MMethodDef> */
RET_LABEL49:(void)0;
}
}
var50 = 1;
{
{ /* Inline model#MMethod#is_init= (var_mprop,var50) on <var_mprop:MMethod> */
var_mprop->attrs[COLOR_nit__model__MMethod___is_init].s = var50; /* _is_init on <var_mprop:MMethod> */
RET_LABEL51:(void)0;
}
}
{
{ /* Inline modelize_property#AClassdef#mfree_init= (var_nclassdef,var_mpropdef) on <var_nclassdef:AClassdef> */
var_nclassdef->attrs[COLOR_nit__modelize_property__AClassdef___mfree_init].val = var_mpropdef; /* _mfree_init on <var_nclassdef:AClassdef> */
RET_LABEL52:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var55 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
if (varonce56) {
var57 = varonce56;
} else {
var58 = " gets a free empty constructor ";
var59 = 31;
var60 = standard___standard__NativeString___to_s_with_length(var58, var59);
var57 = var60;
varonce56 = var57;
}
var61 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var61 = array_instance Array[Object] */
var62 = 4;
var63 = NEW_standard__NativeArray(var62, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var63)->values[0] = (val*) var_mclassdef;
((struct instance_standard__NativeArray*)var63)->values[1] = (val*) var57;
((struct instance_standard__NativeArray*)var63)->values[2] = (val*) var_mpropdef;
((struct instance_standard__NativeArray*)var63)->values[3] = (val*) var_msignature;
{
((void (*)(val* self, val* p0, long p1))(var61->class->vft[COLOR_standard__array__Array__with_native]))(var61, var63, var62) /* with_native on <var61:Array[Object]>*/;
}
}
{
var64 = ((val* (*)(val* self))(var61->class->vft[COLOR_standard__string__Object__to_s]))(var61) /* to_s on <var61:Array[Object]>*/;
}
var65 = 3;
{
nit___nit__ToolContext___info(var53, var64, var65); /* Direct call toolcontext#ToolContext#info on <var53:ToolContext>*/
}
{
{ /* Inline modelize_property#ModelBuilder#the_root_init_mmethod= (self,var_mprop) on <self:ModelBuilder> */
self->attrs[COLOR_nit__modelize_property__ModelBuilder___the_root_init_mmethod].val = var_mprop; /* _the_root_init_mmethod on <self:ModelBuilder> */
RET_LABEL66:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var69 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var69 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var67 = var69;
RET_LABEL68:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var67) on <var67:MClass> */
var72 = var67->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var67:MClass> */
if (unlikely(var72 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 399);
show_backtrace(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
{
{ /* Inline model#MClassKind#need_init (var70) on <var70:MClassKind> */
var75 = var70->attrs[COLOR_nit__model__MClassKind___need_init].s; /* _need_init on <var70:MClassKind> */
var73 = var75;
RET_LABEL74:(void)0;
}
}
var76 = !var73;
if (var76){
goto RET_LABEL;
} else {
}
var77 = NULL;
var_defined_init = var77;
{
{ /* Inline model#MClassDef#mpropdefs (var_mclassdef) on <var_mclassdef:MClassDef> */
var80 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mpropdefs].val; /* _mpropdefs on <var_mclassdef:MClassDef> */
if (unlikely(var80 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 623);
show_backtrace(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
var_81 = var78;
{
var82 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_81);
}
var_83 = var82;
for(;;) {
{
var84 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_83);
}
if (var84){
{
var85 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_83);
}
var_mpropdef86 = var85;
/* <var_mpropdef86:MPropDef> isa MMethodDef */
cltype = type_nit__MMethodDef.color;
idtype = type_nit__MMethodDef.id;
if(cltype >= var_mpropdef86->type->table_size) {
var87 = 0;
} else {
var87 = var_mpropdef86->type->type_table[cltype] == idtype;
}
var88 = !var87;
if (var88){
goto BREAK_label;
} else {
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef86) on <var_mpropdef86:MPropDef(MMethodDef)> */
var91 = var_mpropdef86->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef86:MPropDef(MMethodDef)> */
if (unlikely(var91 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var89 = var91;
RET_LABEL90:(void)0;
}
}
{
{ /* Inline model#MMethod#is_init (var89) on <var89:MProperty(MMethod)> */
var94 = var89->attrs[COLOR_nit__model__MMethod___is_init].s; /* _is_init on <var89:MProperty(MMethod)> */
var92 = var94;
RET_LABEL93:(void)0;
}
}
var95 = !var92;
if (var95){
goto BREAK_label;
} else {
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef86) on <var_mpropdef86:MPropDef(MMethodDef)> */
var98 = var_mpropdef86->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef86:MPropDef(MMethodDef)> */
if (unlikely(var98 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var96 = var98;
RET_LABEL97:(void)0;
}
}
{
{ /* Inline model#MMethod#is_root_init (var96) on <var96:MProperty(MMethod)> */
var101 = var96->attrs[COLOR_nit__model__MMethod___is_root_init].s; /* _is_root_init on <var96:MProperty(MMethod)> */
var99 = var101;
RET_LABEL100:(void)0;
}
}
if (var99){
var102 = NULL;
if (var_defined_init == NULL) {
var103 = 1; /* is null */
} else {
var103 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_defined_init,var102) on <var_defined_init:nullable MMethodDef> */
var_other = var102;
{
{ /* Inline kernel#Object#is_same_instance (var_defined_init,var_other) on <var_defined_init:nullable MMethodDef(MMethodDef)> */
var108 = var_defined_init == var_other;
var106 = var108;
goto RET_LABEL107;
RET_LABEL107:(void)0;
}
}
var104 = var106;
goto RET_LABEL105;
RET_LABEL105:(void)0;
}
var103 = var104;
}
if (unlikely(!var103)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 151);
show_backtrace(1);
}
var_defined_init = var_mpropdef86;
} else {
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef86) on <var_mpropdef86:MPropDef(MMethodDef)> */
var111 = var_mpropdef86->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef86:MPropDef(MMethodDef)> */
if (unlikely(var111 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var109 = var111;
RET_LABEL110:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var109) on <var109:MProperty(MMethod)> */
var114 = var109->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var109:MProperty(MMethod)> */
if (unlikely(var114 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1741);
show_backtrace(1);
}
var112 = var114;
RET_LABEL113:(void)0;
}
}
if (varonce115) {
var116 = varonce115;
} else {
var117 = "init";
var118 = 4;
var119 = standard___standard__NativeString___to_s_with_length(var117, var118);
var116 = var119;
varonce115 = var116;
}
{
var120 = ((short int (*)(val* self, val* p0))(var112->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var112, var116) /* == on <var112:String>*/;
}
if (var120){
goto RET_LABEL;
} else {
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_83); /* Direct call array#ArrayIterator#next on <var_83:ArrayIterator[MPropDef]>*/
}
} else {
goto BREAK_label121;
}
}
BREAK_label121: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_83) on <var_83:ArrayIterator[MPropDef]> */
RET_LABEL122:(void)0;
}
}
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype124 = type_nit__AStdClassdef.color;
idtype125 = type_nit__AStdClassdef.id;
if(cltype124 >= var_nclassdef->type->table_size) {
var123 = 0;
} else {
var123 = var_nclassdef->type->type_table[cltype124] == idtype125;
}
var126 = !var123;
if (var126){
goto RET_LABEL;
} else {
}
var127 = NEW_standard__Array(&type_standard__Array__nit__MParameter);
{
standard___standard__Array___standard__kernel__Object__init(var127); /* Direct call array#Array#init on <var127:Array[MParameter]>*/
}
var_mparameters128 = var127;
var129 = NEW_standard__Array(&type_standard__Array__nit__MProperty);
{
standard___standard__Array___standard__kernel__Object__init(var129); /* Direct call array#Array#init on <var129:Array[MProperty]>*/
}
var_initializers = var129;
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var132 = var_nclassdef->attrs[COLOR_nit__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var132 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1012);
show_backtrace(1);
}
var130 = var132;
RET_LABEL131:(void)0;
}
}
var_133 = var130;
{
var134 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_133);
}
var_135 = var134;
for(;;) {
{
var136 = ((short int (*)(val* self))(var_135->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_135) /* is_ok on <var_135:Iterator[APropdef]>*/;
}
if (var136){
{
var137 = ((val* (*)(val* self))(var_135->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_135) /* item on <var_135:Iterator[APropdef]>*/;
}
var_npropdef = var137;
/* <var_npropdef:APropdef> isa AMethPropdef */
cltype139 = type_nit__AMethPropdef.color;
idtype140 = type_nit__AMethPropdef.id;
if(cltype139 >= var_npropdef->type->table_size) {
var138 = 0;
} else {
var138 = var_npropdef->type->type_table[cltype139] == idtype140;
}
if (var138){
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:APropdef(AMethPropdef)> */
var143 = var_npropdef->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:APropdef(AMethPropdef)> */
var141 = var143;
RET_LABEL142:(void)0;
}
}
var144 = NULL;
if (var141 == NULL) {
var145 = 1; /* is null */
} else {
var145 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var141,var144) on <var141:nullable MPropDef(nullable MMethodDef)> */
var_other = var144;
{
{ /* Inline kernel#Object#is_same_instance (var141,var_other) on <var141:nullable MMethodDef(MMethodDef)> */
var150 = var141 == var_other;
var148 = var150;
goto RET_LABEL149;
RET_LABEL149:(void)0;
}
}
var146 = var148;
goto RET_LABEL147;
RET_LABEL147:(void)0;
}
var145 = var146;
}
if (var145){
goto RET_LABEL;
} else {
}
if (varonce151) {
var152 = varonce151;
} else {
var153 = "autoinit";
var154 = 8;
var155 = standard___standard__NativeString___to_s_with_length(var153, var154);
var152 = var155;
varonce151 = var152;
}
{
var156 = nit__annotation___Prod___get_single_annotation(var_npropdef, var152, self);
}
var_at = var156;
var157 = NULL;
if (var_at == NULL) {
var158 = 1; /* is null */
} else {
var158 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_at,var157) on <var_at:nullable AAnnotation> */
var_other = var157;
{
{ /* Inline kernel#Object#is_same_instance (var_at,var_other) on <var_at:nullable AAnnotation(AAnnotation)> */
var163 = var_at == var_other;
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
goto BREAK_label164;
} else {
}
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:APropdef(AMethPropdef)> */
var167 = var_npropdef->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:APropdef(AMethPropdef)> */
var165 = var167;
RET_LABEL166:(void)0;
}
}
if (var165 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 170);
show_backtrace(1);
} else {
{ /* Inline model#MMethodDef#msignature (var165) on <var165:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var165 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2137);
show_backtrace(1);
}
var170 = var165->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var165:nullable MPropDef(nullable MMethodDef)> */
var168 = var170;
RET_LABEL169:(void)0;
}
}
var_sig = var168;
var171 = NULL;
if (var_sig == NULL) {
var172 = 1; /* is null */
} else {
var172 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_sig,var171) on <var_sig:nullable MSignature> */
var_other = var171;
{
{ /* Inline kernel#Object#is_same_instance (var_sig,var_other) on <var_sig:nullable MSignature(MSignature)> */
var177 = var_sig == var_other;
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
goto BREAK_label164;
} else {
}
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:APropdef(AMethPropdef)> */
var180 = var_npropdef->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:APropdef(AMethPropdef)> */
var178 = var180;
RET_LABEL179:(void)0;
}
}
if (var178 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 173);
show_backtrace(1);
} else {
var181 = nit___nit__MPropDef___is_intro(var178);
}
var182 = !var181;
if (var182){
if (varonce183) {
var184 = varonce183;
} else {
var185 = "Error: `autoinit` cannot be set on redefinitions";
var186 = 48;
var187 = standard___standard__NativeString___to_s_with_length(var185, var186);
var184 = var187;
varonce183 = var184;
}
{
nit___nit__ModelBuilder___error(self, var_at, var184); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto BREAK_label164;
} else {
}
{
{ /* Inline model#MSignature#mparameters (var_sig) on <var_sig:nullable MSignature(MSignature)> */
var190 = var_sig->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var_sig:nullable MSignature(MSignature)> */
if (unlikely(var190 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var188 = var190;
RET_LABEL189:(void)0;
}
}
var_191 = var188;
{
var192 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_191);
}
var_193 = var192;
for(;;) {
{
var194 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_193);
}
if (var194){
{
var195 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_193);
}
var_param = var195;
{
{ /* Inline model#MParameter#mtype (var_param) on <var_param:MParameter> */
var198 = var_param->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var_param:MParameter> */
if (unlikely(var198 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1690);
show_backtrace(1);
}
var196 = var198;
RET_LABEL197:(void)0;
}
}
var_ret_type = var196;
var199 = NEW_nit__MParameter(&type_nit__MParameter);
{
{ /* Inline model#MParameter#name (var_param) on <var_param:MParameter> */
var202 = var_param->attrs[COLOR_nit__model__MParameter___name].val; /* _name on <var_param:MParameter> */
if (unlikely(var202 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1687);
show_backtrace(1);
}
var200 = var202;
RET_LABEL201:(void)0;
}
}
var203 = 0;
{
((void (*)(val* self, val* p0))(var199->class->vft[COLOR_nit__model__MParameter__name_61d]))(var199, var200) /* name= on <var199:MParameter>*/;
}
{
((void (*)(val* self, val* p0))(var199->class->vft[COLOR_nit__model__MParameter__mtype_61d]))(var199, var_ret_type) /* mtype= on <var199:MParameter>*/;
}
{
((void (*)(val* self, short int p0))(var199->class->vft[COLOR_nit__model__MParameter__is_vararg_61d]))(var199, var203) /* is_vararg= on <var199:MParameter>*/;
}
{
((void (*)(val* self))(var199->class->vft[COLOR_standard__kernel__Object__init]))(var199) /* init on <var199:MParameter>*/;
}
var_mparameter = var199;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_mparameters128, var_mparameter); /* Direct call array#Array#add on <var_mparameters128:Array[MParameter]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_193); /* Direct call array#ArrayIterator#next on <var_193:ArrayIterator[MParameter]>*/
}
} else {
goto BREAK_label204;
}
}
BREAK_label204: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_193) on <var_193:ArrayIterator[MParameter]> */
RET_LABEL205:(void)0;
}
}
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:APropdef(AMethPropdef)> */
var208 = var_npropdef->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:APropdef(AMethPropdef)> */
var206 = var208;
RET_LABEL207:(void)0;
}
}
if (var206 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 183);
show_backtrace(1);
} else {
{ /* Inline model#MPropDef#mproperty (var206) on <var206:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var206 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var211 = var206->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var206:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var211 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var209 = var211;
RET_LABEL210:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_initializers, var209); /* Direct call array#Array#add on <var_initializers:Array[MProperty]>*/
}
} else {
}
/* <var_npropdef:APropdef> isa AAttrPropdef */
cltype213 = type_nit__AAttrPropdef.color;
idtype214 = type_nit__AAttrPropdef.id;
if(cltype213 >= var_npropdef->type->table_size) {
var212 = 0;
} else {
var212 = var_npropdef->type->type_table[cltype213] == idtype214;
}
if (var212){
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var217 = var_npropdef->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:APropdef(AAttrPropdef)> */
var215 = var217;
RET_LABEL216:(void)0;
}
}
var218 = NULL;
if (var215 == NULL) {
var219 = 1; /* is null */
} else {
var219 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var215,var218) on <var215:nullable MPropDef(nullable MAttributeDef)> */
var_other = var218;
{
{ /* Inline kernel#Object#is_same_instance (var215,var_other) on <var215:nullable MAttributeDef(MAttributeDef)> */
var224 = var215 == var_other;
var222 = var224;
goto RET_LABEL223;
RET_LABEL223:(void)0;
}
}
var220 = var222;
goto RET_LABEL221;
RET_LABEL221:(void)0;
}
var219 = var220;
}
if (var219){
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property#AAttrPropdef#noinit (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var227 = var_npropdef->attrs[COLOR_nit__modelize_property__AAttrPropdef___noinit].s; /* _noinit on <var_npropdef:APropdef(AAttrPropdef)> */
var225 = var227;
RET_LABEL226:(void)0;
}
}
if (var225){
goto BREAK_label164;
} else {
}
if (varonce228) {
var229 = varonce228;
} else {
var230 = "autoinit";
var231 = 8;
var232 = standard___standard__NativeString___to_s_with_length(var230, var231);
var229 = var232;
varonce228 = var229;
}
{
var233 = nit__annotation___Prod___get_single_annotation(var_npropdef, var229, self);
}
var_atautoinit = var233;
var234 = NULL;
if (var_atautoinit == NULL) {
var235 = 0; /* is null */
} else {
var235 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atautoinit,var234) on <var_atautoinit:nullable AAnnotation> */
var_other238 = var234;
{
var239 = ((short int (*)(val* self, val* p0))(var_atautoinit->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_atautoinit, var_other238) /* == on <var_atautoinit:nullable AAnnotation(AAnnotation)>*/;
}
var240 = !var239;
var236 = var240;
goto RET_LABEL237;
RET_LABEL237:(void)0;
}
var235 = var236;
}
if (var235){
{
{ /* Inline modelize_property#AAttrPropdef#mreadpropdef (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var243 = var_npropdef->attrs[COLOR_nit__modelize_property__AAttrPropdef___mreadpropdef].val; /* _mreadpropdef on <var_npropdef:APropdef(AAttrPropdef)> */
var241 = var243;
RET_LABEL242:(void)0;
}
}
if (var241 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 192);
show_backtrace(1);
} else {
{ /* Inline model#MPropDef#mproperty (var241) on <var241:nullable MMethodDef> */
if (unlikely(var241 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var246 = var241->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var241:nullable MMethodDef> */
if (unlikely(var246 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var244 = var246;
RET_LABEL245:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_initializers, var244); /* Direct call array#Array#add on <var_initializers:Array[MProperty]>*/
}
goto BREAK_label164;
} else {
}
{
{ /* Inline modelize_property#AAttrPropdef#has_value (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var249 = var_npropdef->attrs[COLOR_nit__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <var_npropdef:APropdef(AAttrPropdef)> */
var247 = var249;
RET_LABEL248:(void)0;
}
}
if (var247){
goto BREAK_label164;
} else {
}
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var252 = var_npropdef->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:APropdef(AAttrPropdef)> */
var250 = var252;
RET_LABEL251:(void)0;
}
}
if (var250 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 196);
show_backtrace(1);
} else {
{ /* Inline model#MPropDef#mproperty (var250) on <var250:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var250 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var255 = var250->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var250:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var255 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var253 = var255;
RET_LABEL254:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var253) on <var253:MProperty(MAttribute)> */
var258 = var253->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var253:MProperty(MAttribute)> */
if (unlikely(var258 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1741);
show_backtrace(1);
}
var256 = var258;
RET_LABEL257:(void)0;
}
}
var259 = 1;
{
var260 = standard___standard__Text___substring_from(var256, var259);
}
var_paramname = var260;
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var263 = var_npropdef->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:APropdef(AAttrPropdef)> */
var261 = var263;
RET_LABEL262:(void)0;
}
}
if (var261 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 197);
show_backtrace(1);
} else {
{ /* Inline model#MAttributeDef#static_mtype (var261) on <var261:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var261 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2180);
show_backtrace(1);
}
var266 = var261->attrs[COLOR_nit__model__MAttributeDef___static_mtype].val; /* _static_mtype on <var261:nullable MPropDef(nullable MAttributeDef)> */
var264 = var266;
RET_LABEL265:(void)0;
}
}
var_ret_type267 = var264;
var268 = NULL;
if (var_ret_type267 == NULL) {
var269 = 1; /* is null */
} else {
var269 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ret_type267,var268) on <var_ret_type267:nullable MType> */
var_other = var268;
{
{ /* Inline kernel#Object#is_same_instance (var_ret_type267,var_other) on <var_ret_type267:nullable MType(MType)> */
var274 = var_ret_type267 == var_other;
var272 = var274;
goto RET_LABEL273;
RET_LABEL273:(void)0;
}
}
var270 = var272;
goto RET_LABEL271;
RET_LABEL271:(void)0;
}
var269 = var270;
}
if (var269){
goto RET_LABEL;
} else {
}
var275 = NEW_nit__MParameter(&type_nit__MParameter);
var276 = 0;
{
((void (*)(val* self, val* p0))(var275->class->vft[COLOR_nit__model__MParameter__name_61d]))(var275, var_paramname) /* name= on <var275:MParameter>*/;
}
{
((void (*)(val* self, val* p0))(var275->class->vft[COLOR_nit__model__MParameter__mtype_61d]))(var275, var_ret_type267) /* mtype= on <var275:MParameter>*/;
}
{
((void (*)(val* self, short int p0))(var275->class->vft[COLOR_nit__model__MParameter__is_vararg_61d]))(var275, var276) /* is_vararg= on <var275:MParameter>*/;
}
{
((void (*)(val* self))(var275->class->vft[COLOR_standard__kernel__Object__init]))(var275) /* init on <var275:MParameter>*/;
}
var_mparameter277 = var275;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_mparameters128, var_mparameter277); /* Direct call array#Array#add on <var_mparameters128:Array[MParameter]>*/
}
{
{ /* Inline modelize_property#AAttrPropdef#mwritepropdef (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var280 = var_npropdef->attrs[COLOR_nit__modelize_property__AAttrPropdef___mwritepropdef].val; /* _mwritepropdef on <var_npropdef:APropdef(AAttrPropdef)> */
var278 = var280;
RET_LABEL279:(void)0;
}
}
var_msetter = var278;
var281 = NULL;
if (var_msetter == NULL) {
var282 = 1; /* is null */
} else {
var282 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_msetter,var281) on <var_msetter:nullable MMethodDef> */
var_other = var281;
{
{ /* Inline kernel#Object#is_same_instance (var_msetter,var_other) on <var_msetter:nullable MMethodDef(MMethodDef)> */
var287 = var_msetter == var_other;
var285 = var287;
goto RET_LABEL286;
RET_LABEL286:(void)0;
}
}
var283 = var285;
goto RET_LABEL284;
RET_LABEL284:(void)0;
}
var282 = var283;
}
if (var282){
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var290 = var_npropdef->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:APropdef(AAttrPropdef)> */
var288 = var290;
RET_LABEL289:(void)0;
}
}
if (var288 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 204);
show_backtrace(1);
} else {
{ /* Inline model#MPropDef#mproperty (var288) on <var288:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var288 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var293 = var288->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var288:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var293 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var291 = var293;
RET_LABEL292:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_initializers, var291); /* Direct call array#Array#add on <var_initializers:Array[MProperty]>*/
}
} else {
{
{ /* Inline model#MPropDef#mproperty (var_msetter) on <var_msetter:nullable MMethodDef(MMethodDef)> */
var296 = var_msetter->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_msetter:nullable MMethodDef(MMethodDef)> */
if (unlikely(var296 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var294 = var296;
RET_LABEL295:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_initializers, var294); /* Direct call array#Array#add on <var_initializers:Array[MProperty]>*/
}
}
} else {
}
BREAK_label164: (void)0;
{
((void (*)(val* self))(var_135->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_135) /* next on <var_135:Iterator[APropdef]>*/;
}
} else {
goto BREAK_label297;
}
}
BREAK_label297: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_135) on <var_135:Iterator[APropdef]> */
RET_LABEL298:(void)0;
}
}
{
{ /* Inline modelize_property#ModelBuilder#the_root_init_mmethod (self) on <self:ModelBuilder> */
var301 = self->attrs[COLOR_nit__modelize_property__ModelBuilder___the_root_init_mmethod].val; /* _the_root_init_mmethod on <self:ModelBuilder> */
var299 = var301;
RET_LABEL300:(void)0;
}
}
var302 = NULL;
if (var299 == NULL) {
var303 = 1; /* is null */
} else {
var303 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var299,var302) on <var299:nullable MMethod> */
var_other = var302;
{
{ /* Inline kernel#Object#is_same_instance (var299,var_other) on <var299:nullable MMethod(MMethod)> */
var308 = var299 == var_other;
var306 = var308;
goto RET_LABEL307;
RET_LABEL307:(void)0;
}
}
var304 = var306;
goto RET_LABEL305;
RET_LABEL305:(void)0;
}
var303 = var304;
}
if (var303){
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property#ModelBuilder#the_root_init_mmethod (self) on <self:ModelBuilder> */
var311 = self->attrs[COLOR_nit__modelize_property__ModelBuilder___the_root_init_mmethod].val; /* _the_root_init_mmethod on <self:ModelBuilder> */
var309 = var311;
RET_LABEL310:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var314 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var314 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var312 = var314;
RET_LABEL313:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var317 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var317 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var315 = var317;
RET_LABEL316:(void)0;
}
}
if (var309 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 215);
show_backtrace(1);
} else {
var318 = nit___nit__MProperty___lookup_super_definitions(var309, var312, var315);
}
var_spropdefs = var318;
{
var319 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_spropdefs);
}
if (var319){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var322 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var322 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var320 = var322;
RET_LABEL321:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var325 = var_nclassdef->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var325 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 23);
show_backtrace(1);
}
var323 = var325;
RET_LABEL324:(void)0;
}
}
if (varonce326) {
var327 = varonce326;
} else {
var328 = "Error: ";
var329 = 7;
var330 = standard___standard__NativeString___to_s_with_length(var328, var329);
var327 = var330;
varonce326 = var327;
}
if (varonce331) {
var332 = varonce331;
} else {
var333 = " does not specialize ";
var334 = 21;
var335 = standard___standard__NativeString___to_s_with_length(var333, var334);
var332 = var335;
varonce331 = var332;
}
{
{ /* Inline modelize_property#ModelBuilder#the_root_init_mmethod (self) on <self:ModelBuilder> */
var338 = self->attrs[COLOR_nit__modelize_property__ModelBuilder___the_root_init_mmethod].val; /* _the_root_init_mmethod on <self:ModelBuilder> */
var336 = var338;
RET_LABEL337:(void)0;
}
}
if (var336 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 217);
show_backtrace(1);
} else {
{ /* Inline model#MProperty#intro_mclassdef (var336) on <var336:nullable MMethod> */
if (unlikely(var336 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1736);
show_backtrace(1);
}
var341 = var336->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var336:nullable MMethod> */
if (unlikely(var341 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1736);
show_backtrace(1);
}
var339 = var341;
RET_LABEL340:(void)0;
}
}
if (varonce342) {
var343 = varonce342;
} else {
var344 = ". Possible duplication of the root class `Object`?";
var345 = 50;
var346 = standard___standard__NativeString___to_s_with_length(var344, var345);
var343 = var346;
varonce342 = var343;
}
var347 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var347 = array_instance Array[Object] */
var348 = 5;
var349 = NEW_standard__NativeArray(var348, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var349)->values[0] = (val*) var327;
((struct instance_standard__NativeArray*)var349)->values[1] = (val*) var_mclassdef;
((struct instance_standard__NativeArray*)var349)->values[2] = (val*) var332;
((struct instance_standard__NativeArray*)var349)->values[3] = (val*) var339;
((struct instance_standard__NativeArray*)var349)->values[4] = (val*) var343;
{
((void (*)(val* self, val* p0, long p1))(var347->class->vft[COLOR_standard__array__Array__with_native]))(var347, var349, var348) /* with_native on <var347:Array[Object]>*/;
}
}
{
var350 = ((val* (*)(val* self))(var347->class->vft[COLOR_standard__string__Object__to_s]))(var347) /* to_s on <var347:Array[Object]>*/;
}
{
nit___nit__ToolContext___error(var320, var323, var350); /* Direct call toolcontext#ToolContext#error on <var320:ToolContext>*/
}
goto RET_LABEL;
} else {
}
{
var351 = standard___standard__SequenceRead___Collection__first(var_spropdefs);
}
var_longest = var351;
{
{ /* Inline array#AbstractArrayRead#length (var_spropdefs) on <var_spropdefs:Array[MMethodDef]> */
var354 = var_spropdefs->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_spropdefs:Array[MMethodDef]> */
var352 = var354;
RET_LABEL353:(void)0;
}
}
var355 = 1;
{
{ /* Inline kernel#Int#> (var352,var355) on <var352:Int> */
/* Covariant cast for argument 0 (i) <var355:Int> isa OTHER */
/* <var355:Int> isa OTHER */
var358 = 1; /* easy <var355:Int> isa OTHER*/
if (unlikely(!var358)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var361 = var352 > var355;
var356 = var361;
goto RET_LABEL357;
RET_LABEL357:(void)0;
}
}
if (var356){
var_362 = var_spropdefs;
{
var363 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_362);
}
var_364 = var363;
for(;;) {
{
var365 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_364);
}
if (var365){
{
var366 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_364);
}
var_spd = var366;
{
{ /* Inline model#MMethodDef#initializers (var_spd) on <var_spd:MMethodDef> */
var369 = var_spd->attrs[COLOR_nit__model__MMethodDef___initializers].val; /* _initializers on <var_spd:MMethodDef> */
if (unlikely(var369 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2146);
show_backtrace(1);
}
var367 = var369;
RET_LABEL368:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var367) on <var367:Array[MProperty]> */
var372 = var367->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var367:Array[MProperty]> */
var370 = var372;
RET_LABEL371:(void)0;
}
}
{
{ /* Inline model#MMethodDef#initializers (var_longest) on <var_longest:MMethodDef> */
var375 = var_longest->attrs[COLOR_nit__model__MMethodDef___initializers].val; /* _initializers on <var_longest:MMethodDef> */
if (unlikely(var375 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2146);
show_backtrace(1);
}
var373 = var375;
RET_LABEL374:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var373) on <var373:Array[MProperty]> */
var378 = var373->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var373:Array[MProperty]> */
var376 = var378;
RET_LABEL377:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var370,var376) on <var370:Int> */
/* Covariant cast for argument 0 (i) <var376:Int> isa OTHER */
/* <var376:Int> isa OTHER */
var381 = 1; /* easy <var376:Int> isa OTHER*/
if (unlikely(!var381)) {
var_class_name384 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name384);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var385 = var370 > var376;
var379 = var385;
goto RET_LABEL380;
RET_LABEL380:(void)0;
}
}
if (var379){
var_longest = var_spd;
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_364); /* Direct call array#ArrayIterator#next on <var_364:ArrayIterator[MMethodDef]>*/
}
} else {
goto BREAK_label386;
}
}
BREAK_label386: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_364) on <var_364:ArrayIterator[MMethodDef]> */
RET_LABEL387:(void)0;
}
}
var_388 = var_spropdefs;
{
var389 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_388);
}
var_390 = var389;
for(;;) {
{
var391 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_390);
}
if (var391){
{
var392 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_390);
}
var_spd393 = var392;
var394 = 0;
var_i = var394;
{
{ /* Inline model#MMethodDef#initializers (var_spd393) on <var_spd393:MMethodDef> */
var397 = var_spd393->attrs[COLOR_nit__model__MMethodDef___initializers].val; /* _initializers on <var_spd393:MMethodDef> */
if (unlikely(var397 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2146);
show_backtrace(1);
}
var395 = var397;
RET_LABEL396:(void)0;
}
}
var_398 = var395;
{
var399 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_398);
}
var_400 = var399;
for(;;) {
{
var401 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_400);
}
if (var401){
{
var402 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_400);
}
var_p = var402;
{
{ /* Inline model#MMethodDef#initializers (var_longest) on <var_longest:MMethodDef> */
var405 = var_longest->attrs[COLOR_nit__model__MMethodDef___initializers].val; /* _initializers on <var_longest:MMethodDef> */
if (unlikely(var405 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2146);
show_backtrace(1);
}
var403 = var405;
RET_LABEL404:(void)0;
}
}
{
var406 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var403, var_i);
}
{
{ /* Inline kernel#Object#!= (var_p,var406) on <var_p:MProperty> */
var_other238 = var406;
{
var409 = ((short int (*)(val* self, val* p0))(var_p->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_p, var_other238) /* == on <var_p:MProperty>*/;
}
var410 = !var409;
var407 = var410;
goto RET_LABEL408;
RET_LABEL408:(void)0;
}
}
if (var407){
if (varonce411) {
var412 = varonce411;
} else {
var413 = "Error: conflict for inherited inits ";
var414 = 36;
var415 = standard___standard__NativeString___to_s_with_length(var413, var414);
var412 = var415;
varonce411 = var412;
}
if (varonce416) {
var417 = varonce416;
} else {
var418 = "(";
var419 = 1;
var420 = standard___standard__NativeString___to_s_with_length(var418, var419);
var417 = var420;
varonce416 = var417;
}
{
{ /* Inline model#MMethodDef#initializers (var_spd393) on <var_spd393:MMethodDef> */
var423 = var_spd393->attrs[COLOR_nit__model__MMethodDef___initializers].val; /* _initializers on <var_spd393:MMethodDef> */
if (unlikely(var423 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2146);
show_backtrace(1);
}
var421 = var423;
RET_LABEL422:(void)0;
}
}
if (varonce424) {
var425 = varonce424;
} else {
var426 = ", ";
var427 = 2;
var428 = standard___standard__NativeString___to_s_with_length(var426, var427);
var425 = var428;
varonce424 = var425;
}
{
var429 = standard__string___Collection___join(var421, var425);
}
if (varonce430) {
var431 = varonce430;
} else {
var432 = ") and ";
var433 = 6;
var434 = standard___standard__NativeString___to_s_with_length(var432, var433);
var431 = var434;
varonce430 = var431;
}
if (varonce435) {
var436 = varonce435;
} else {
var437 = "(";
var438 = 1;
var439 = standard___standard__NativeString___to_s_with_length(var437, var438);
var436 = var439;
varonce435 = var436;
}
{
{ /* Inline model#MMethodDef#initializers (var_longest) on <var_longest:MMethodDef> */
var442 = var_longest->attrs[COLOR_nit__model__MMethodDef___initializers].val; /* _initializers on <var_longest:MMethodDef> */
if (unlikely(var442 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2146);
show_backtrace(1);
}
var440 = var442;
RET_LABEL441:(void)0;
}
}
if (varonce443) {
var444 = varonce443;
} else {
var445 = ", ";
var446 = 2;
var447 = standard___standard__NativeString___to_s_with_length(var445, var446);
var444 = var447;
varonce443 = var444;
}
{
var448 = standard__string___Collection___join(var440, var444);
}
if (varonce449) {
var450 = varonce449;
} else {
var451 = ")";
var452 = 1;
var453 = standard___standard__NativeString___to_s_with_length(var451, var452);
var450 = var453;
varonce449 = var450;
}
var454 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var454 = array_instance Array[Object] */
var455 = 9;
var456 = NEW_standard__NativeArray(var455, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var456)->values[0] = (val*) var412;
((struct instance_standard__NativeArray*)var456)->values[1] = (val*) var_spd393;
((struct instance_standard__NativeArray*)var456)->values[2] = (val*) var417;
((struct instance_standard__NativeArray*)var456)->values[3] = (val*) var429;
((struct instance_standard__NativeArray*)var456)->values[4] = (val*) var431;
((struct instance_standard__NativeArray*)var456)->values[5] = (val*) var_longest;
((struct instance_standard__NativeArray*)var456)->values[6] = (val*) var436;
((struct instance_standard__NativeArray*)var456)->values[7] = (val*) var448;
((struct instance_standard__NativeArray*)var456)->values[8] = (val*) var450;
{
((void (*)(val* self, val* p0, long p1))(var454->class->vft[COLOR_standard__array__Array__with_native]))(var454, var456, var455) /* with_native on <var454:Array[Object]>*/;
}
}
{
var457 = ((val* (*)(val* self))(var454->class->vft[COLOR_standard__string__Object__to_s]))(var454) /* to_s on <var454:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(self, var_nclassdef, var457); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
var458 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var458) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var458:Int> isa OTHER */
/* <var458:Int> isa OTHER */
var461 = 1; /* easy <var458:Int> isa OTHER*/
if (unlikely(!var461)) {
var_class_name464 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name464);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var465 = var_i + var458;
var459 = var465;
goto RET_LABEL460;
RET_LABEL460:(void)0;
}
}
var_i = var459;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_400); /* Direct call array#ArrayIterator#next on <var_400:ArrayIterator[MProperty]>*/
}
} else {
goto BREAK_label466;
}
}
BREAK_label466: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_400) on <var_400:ArrayIterator[MProperty]> */
RET_LABEL467:(void)0;
}
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_390); /* Direct call array#ArrayIterator#next on <var_390:ArrayIterator[MMethodDef]>*/
}
} else {
goto BREAK_label468;
}
}
BREAK_label468: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_390) on <var_390:ArrayIterator[MMethodDef]> */
RET_LABEL469:(void)0;
}
}
} else {
}
{
{ /* Inline array#AbstractArrayRead#length (var_spropdefs) on <var_spropdefs:Array[MMethodDef]> */
var474 = var_spropdefs->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_spropdefs:Array[MMethodDef]> */
var472 = var474;
RET_LABEL473:(void)0;
}
}
var475 = 1;
{
{ /* Inline kernel#Int#== (var472,var475) on <var472:Int> */
var478 = var472 == var475;
var476 = var478;
goto RET_LABEL477;
RET_LABEL477:(void)0;
}
}
var_479 = var476;
if (var476){
{
var480 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_mparameters128);
}
var471 = var480;
} else {
var471 = var_479;
}
var_481 = var471;
if (var471){
var482 = NULL;
if (var_defined_init == NULL) {
var483 = 1; /* is null */
} else {
var483 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_defined_init,var482) on <var_defined_init:nullable MMethodDef> */
var_other = var482;
{
{ /* Inline kernel#Object#is_same_instance (var_defined_init,var_other) on <var_defined_init:nullable MMethodDef(MMethodDef)> */
var488 = var_defined_init == var_other;
var486 = var488;
goto RET_LABEL487;
RET_LABEL487:(void)0;
}
}
var484 = var486;
goto RET_LABEL485;
RET_LABEL485:(void)0;
}
var483 = var484;
}
var470 = var483;
} else {
var470 = var_481;
}
if (var470){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var491 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var491 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var489 = var491;
RET_LABEL490:(void)0;
}
}
if (varonce492) {
var493 = varonce492;
} else {
var494 = " inherits the basic constructor ";
var495 = 32;
var496 = standard___standard__NativeString___to_s_with_length(var494, var495);
var493 = var496;
varonce492 = var493;
}
var497 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var497 = array_instance Array[Object] */
var498 = 3;
var499 = NEW_standard__NativeArray(var498, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var499)->values[0] = (val*) var_mclassdef;
((struct instance_standard__NativeArray*)var499)->values[1] = (val*) var493;
((struct instance_standard__NativeArray*)var499)->values[2] = (val*) var_longest;
{
((void (*)(val* self, val* p0, long p1))(var497->class->vft[COLOR_standard__array__Array__with_native]))(var497, var499, var498) /* with_native on <var497:Array[Object]>*/;
}
}
{
var500 = ((val* (*)(val* self))(var497->class->vft[COLOR_standard__string__Object__to_s]))(var497) /* to_s on <var497:Array[Object]>*/;
}
var501 = 3;
{
nit___nit__ToolContext___info(var489, var500, var501); /* Direct call toolcontext#ToolContext#info on <var489:ToolContext>*/
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var504 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var504 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var502 = var504;
RET_LABEL503:(void)0;
}
}
{
{ /* Inline modelize_property#MClass#root_init= (var502,var_longest) on <var502:MClass> */
var502->attrs[COLOR_nit__modelize_property__MClass___root_init].val = var_longest; /* _root_init on <var502:MClass> */
RET_LABEL505:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MMethodDef#initializers (var_longest) on <var_longest:MMethodDef> */
var508 = var_longest->attrs[COLOR_nit__model__MMethodDef___initializers].val; /* _initializers on <var_longest:MMethodDef> */
if (unlikely(var508 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2146);
show_backtrace(1);
}
var506 = var508;
RET_LABEL507:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var506) on <var506:Array[MProperty]> */
var511 = var506->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var506:Array[MProperty]> */
var509 = var511;
RET_LABEL510:(void)0;
}
}
var512 = 0;
{
{ /* Inline kernel#Int#> (var509,var512) on <var509:Int> */
/* Covariant cast for argument 0 (i) <var512:Int> isa OTHER */
/* <var512:Int> isa OTHER */
var515 = 1; /* easy <var512:Int> isa OTHER*/
if (unlikely(!var515)) {
var_class_name518 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name518);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var519 = var509 > var512;
var513 = var519;
goto RET_LABEL514;
RET_LABEL514:(void)0;
}
}
if (var513){
{
{ /* Inline model#MMethodDef#new_msignature (var_longest) on <var_longest:MMethodDef> */
var522 = var_longest->attrs[COLOR_nit__model__MMethodDef___new_msignature].val; /* _new_msignature on <var_longest:MMethodDef> */
var520 = var522;
RET_LABEL521:(void)0;
}
}
if (var520 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 252);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#mparameters (var520) on <var520:nullable MSignature> */
if (unlikely(var520 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var525 = var520->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var520:nullable MSignature> */
if (unlikely(var525 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var523 = var525;
RET_LABEL524:(void)0;
}
}
{
standard___standard__Sequence___prepend(var_mparameters128, var523); /* Direct call abstract_collection#Sequence#prepend on <var_mparameters128:Array[MParameter]>*/
}
{
{ /* Inline model#MMethodDef#initializers (var_longest) on <var_longest:MMethodDef> */
var528 = var_longest->attrs[COLOR_nit__model__MMethodDef___initializers].val; /* _initializers on <var_longest:MMethodDef> */
if (unlikely(var528 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2146);
show_backtrace(1);
}
var526 = var528;
RET_LABEL527:(void)0;
}
}
{
standard___standard__Sequence___prepend(var_initializers, var526); /* Direct call abstract_collection#Sequence#prepend on <var_initializers:Array[MProperty]>*/
}
} else {
}
var529 = NULL;
if (var_defined_init == NULL) {
var530 = 0; /* is null */
} else {
var530 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_defined_init,var529) on <var_defined_init:nullable MMethodDef> */
var_other238 = var529;
{
var533 = ((short int (*)(val* self, val* p0))(var_defined_init->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_defined_init, var_other238) /* == on <var_defined_init:nullable MMethodDef(MMethodDef)>*/;
}
var534 = !var533;
var531 = var534;
goto RET_LABEL532;
RET_LABEL532:(void)0;
}
var530 = var531;
}
if (var530){
{
{ /* Inline model#MMethodDef#initializers (var_defined_init) on <var_defined_init:nullable MMethodDef(MMethodDef)> */
var537 = var_defined_init->attrs[COLOR_nit__model__MMethodDef___initializers].val; /* _initializers on <var_defined_init:nullable MMethodDef(MMethodDef)> */
if (unlikely(var537 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2146);
show_backtrace(1);
}
var535 = var537;
RET_LABEL536:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add_all(var535, var_initializers); /* Direct call array#Array#add_all on <var535:Array[MProperty]>*/
}
var538 = NEW_nit__MSignature(&type_nit__MSignature);
var539 = NULL;
{
((void (*)(val* self, val* p0))(var538->class->vft[COLOR_nit__model__MSignature__mparameters_61d]))(var538, var_mparameters128) /* mparameters= on <var538:MSignature>*/;
}
{
((void (*)(val* self, val* p0))(var538->class->vft[COLOR_nit__model__MSignature__return_mtype_61d]))(var538, var539) /* return_mtype= on <var538:MSignature>*/;
}
{
((void (*)(val* self))(var538->class->vft[COLOR_standard__kernel__Object__init]))(var538) /* init on <var538:MSignature>*/;
}
var_msignature540 = var538;
{
{ /* Inline model#MMethodDef#new_msignature= (var_defined_init,var_msignature540) on <var_defined_init:nullable MMethodDef(MMethodDef)> */
var_defined_init->attrs[COLOR_nit__model__MMethodDef___new_msignature].val = var_msignature540; /* _new_msignature on <var_defined_init:nullable MMethodDef(MMethodDef)> */
RET_LABEL541:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var544 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var544 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var542 = var544;
RET_LABEL543:(void)0;
}
}
if (varonce545) {
var546 = varonce545;
} else {
var547 = " extends its basic constructor signature to ";
var548 = 44;
var549 = standard___standard__NativeString___to_s_with_length(var547, var548);
var546 = var549;
varonce545 = var546;
}
var550 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var550 = array_instance Array[Object] */
var551 = 4;
var552 = NEW_standard__NativeArray(var551, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var552)->values[0] = (val*) var_mclassdef;
((struct instance_standard__NativeArray*)var552)->values[1] = (val*) var546;
((struct instance_standard__NativeArray*)var552)->values[2] = (val*) var_defined_init;
((struct instance_standard__NativeArray*)var552)->values[3] = (val*) var_msignature540;
{
((void (*)(val* self, val* p0, long p1))(var550->class->vft[COLOR_standard__array__Array__with_native]))(var550, var552, var551) /* with_native on <var550:Array[Object]>*/;
}
}
{
var553 = ((val* (*)(val* self))(var550->class->vft[COLOR_standard__string__Object__to_s]))(var550) /* to_s on <var550:Array[Object]>*/;
}
var554 = 3;
{
nit___nit__ToolContext___info(var542, var553, var554); /* Direct call toolcontext#ToolContext#info on <var542:ToolContext>*/
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var557 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var557 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var555 = var557;
RET_LABEL556:(void)0;
}
}
{
{ /* Inline modelize_property#MClass#root_init= (var555,var_defined_init) on <var555:MClass> */
var555->attrs[COLOR_nit__modelize_property__MClass___root_init].val = var_defined_init; /* _root_init on <var555:MClass> */
RET_LABEL558:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property#ModelBuilder#the_root_init_mmethod (self) on <self:ModelBuilder> */
var561 = self->attrs[COLOR_nit__modelize_property__ModelBuilder___the_root_init_mmethod].val; /* _the_root_init_mmethod on <self:ModelBuilder> */
var559 = var561;
RET_LABEL560:(void)0;
}
}
if (unlikely(var559 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 267);
show_backtrace(1);
}
var_mprop562 = var559;
var563 = NEW_nit__MMethodDef(&type_nit__MMethodDef);
{
{ /* Inline parser_nodes#ANode#location (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var566 = var_nclassdef->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var566 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 23);
show_backtrace(1);
}
var564 = var566;
RET_LABEL565:(void)0;
}
}
{
((void (*)(val* self, val* p0))(var563->class->vft[COLOR_nit__model__MPropDef__mclassdef_61d]))(var563, var_mclassdef) /* mclassdef= on <var563:MMethodDef>*/;
}
{
((void (*)(val* self, val* p0))(var563->class->vft[COLOR_nit__model__MPropDef__mproperty_61d]))(var563, var_mprop562) /* mproperty= on <var563:MMethodDef>*/;
}
{
((void (*)(val* self, val* p0))(var563->class->vft[COLOR_nit__model__MPropDef__location_61d]))(var563, var564) /* location= on <var563:MMethodDef>*/;
}
{
((void (*)(val* self))(var563->class->vft[COLOR_standard__kernel__Object__init]))(var563) /* init on <var563:MMethodDef>*/;
}
var_mpropdef567 = var563;
var568 = 1;
{
{ /* Inline modelize_property#MPropDef#has_supercall= (var_mpropdef567,var568) on <var_mpropdef567:MMethodDef> */
var_mpropdef567->attrs[COLOR_nit__modelize_property__MPropDef___has_supercall].s = var568; /* _has_supercall on <var_mpropdef567:MMethodDef> */
RET_LABEL569:(void)0;
}
}
{
{ /* Inline model#MMethodDef#initializers (var_mpropdef567) on <var_mpropdef567:MMethodDef> */
var572 = var_mpropdef567->attrs[COLOR_nit__model__MMethodDef___initializers].val; /* _initializers on <var_mpropdef567:MMethodDef> */
if (unlikely(var572 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2146);
show_backtrace(1);
}
var570 = var572;
RET_LABEL571:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add_all(var570, var_initializers); /* Direct call array#Array#add_all on <var570:Array[MProperty]>*/
}
var573 = NEW_nit__MSignature(&type_nit__MSignature);
var574 = NULL;
{
((void (*)(val* self, val* p0))(var573->class->vft[COLOR_nit__model__MSignature__mparameters_61d]))(var573, var_mparameters128) /* mparameters= on <var573:MSignature>*/;
}
{
((void (*)(val* self, val* p0))(var573->class->vft[COLOR_nit__model__MSignature__return_mtype_61d]))(var573, var574) /* return_mtype= on <var573:MSignature>*/;
}
{
((void (*)(val* self))(var573->class->vft[COLOR_standard__kernel__Object__init]))(var573) /* init on <var573:MSignature>*/;
}
var_msignature575 = var573;
{
{ /* Inline model#MMethodDef#new_msignature= (var_mpropdef567,var_msignature575) on <var_mpropdef567:MMethodDef> */
var_mpropdef567->attrs[COLOR_nit__model__MMethodDef___new_msignature].val = var_msignature575; /* _new_msignature on <var_mpropdef567:MMethodDef> */
RET_LABEL576:(void)0;
}
}
var577 = NEW_nit__MSignature(&type_nit__MSignature);
var578 = NEW_standard__Array(&type_standard__Array__nit__MParameter);
{
standard___standard__Array___standard__kernel__Object__init(var578); /* Direct call array#Array#init on <var578:Array[MParameter]>*/
}
var579 = NULL;
{
((void (*)(val* self, val* p0))(var577->class->vft[COLOR_nit__model__MSignature__mparameters_61d]))(var577, var578) /* mparameters= on <var577:MSignature>*/;
}
{
((void (*)(val* self, val* p0))(var577->class->vft[COLOR_nit__model__MSignature__return_mtype_61d]))(var577, var579) /* return_mtype= on <var577:MSignature>*/;
}
{
((void (*)(val* self))(var577->class->vft[COLOR_standard__kernel__Object__init]))(var577) /* init on <var577:MSignature>*/;
}
{
{ /* Inline model#MMethodDef#msignature= (var_mpropdef567,var577) on <var_mpropdef567:MMethodDef> */
var_mpropdef567->attrs[COLOR_nit__model__MMethodDef___msignature].val = var577; /* _msignature on <var_mpropdef567:MMethodDef> */
RET_LABEL580:(void)0;
}
}
{
{ /* Inline modelize_property#AClassdef#mfree_init= (var_nclassdef,var_mpropdef567) on <var_nclassdef:AClassdef(AStdClassdef)> */
var_nclassdef->attrs[COLOR_nit__modelize_property__AClassdef___mfree_init].val = var_mpropdef567; /* _mfree_init on <var_nclassdef:AClassdef(AStdClassdef)> */
RET_LABEL581:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var584 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var584 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var582 = var584;
RET_LABEL583:(void)0;
}
}
if (varonce585) {
var586 = varonce585;
} else {
var587 = " gets a free constructor for attributes ";
var588 = 40;
var589 = standard___standard__NativeString___to_s_with_length(var587, var588);
var586 = var589;
varonce585 = var586;
}
var590 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var590 = array_instance Array[Object] */
var591 = 4;
var592 = NEW_standard__NativeArray(var591, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var592)->values[0] = (val*) var_mclassdef;
((struct instance_standard__NativeArray*)var592)->values[1] = (val*) var586;
((struct instance_standard__NativeArray*)var592)->values[2] = (val*) var_mpropdef567;
((struct instance_standard__NativeArray*)var592)->values[3] = (val*) var_msignature575;
{
((void (*)(val* self, val* p0, long p1))(var590->class->vft[COLOR_standard__array__Array__with_native]))(var590, var592, var591) /* with_native on <var590:Array[Object]>*/;
}
}
{
var593 = ((val* (*)(val* self))(var590->class->vft[COLOR_standard__string__Object__to_s]))(var590) /* to_s on <var590:Array[Object]>*/;
}
var594 = 3;
{
nit___nit__ToolContext___info(var582, var593, var594); /* Direct call toolcontext#ToolContext#info on <var582:ToolContext>*/
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var597 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var597 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var595 = var597;
RET_LABEL596:(void)0;
}
}
{
{ /* Inline modelize_property#MClass#root_init= (var595,var_mpropdef567) on <var595:MClass> */
var595->attrs[COLOR_nit__modelize_property__MClass___root_init].val = var_mpropdef567; /* _root_init on <var595:MClass> */
RET_LABEL598:(void)0;
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
val* var9 /* : null */;
val* var_vis_type /* var vis_type: nullable MVisibility */;
val* var10 /* : null */;
val* var_mmodule_type /* var mmodule_type: nullable MModule */;
val* var11 /* : MType */;
short int var12 /* : Bool */;
int cltype;
int idtype;
val* var13 /* : MClass */;
val* var15 /* : MClass */;
val* var16 /* : MVisibility */;
val* var18 /* : MVisibility */;
val* var19 /* : MClass */;
val* var21 /* : MClass */;
val* var22 /* : MClassDef */;
val* var24 /* : MClassDef */;
val* var25 /* : MModule */;
val* var27 /* : MModule */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var31 /* : MVirtualTypeProp */;
val* var33 /* : MVirtualTypeProp */;
val* var34 /* : MVisibility */;
val* var36 /* : MVisibility */;
val* var37 /* : MVirtualTypeProp */;
val* var39 /* : MVirtualTypeProp */;
val* var40 /* : MClassDef */;
val* var42 /* : MClassDef */;
val* var43 /* : MModule */;
val* var45 /* : MModule */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
static val* varonce;
val* var49 /* : String */;
char* var50 /* : NativeString */;
long var51 /* : Int */;
val* var52 /* : FlatString */;
val* var53 /* : Array[Object] */;
long var54 /* : Int */;
val* var55 /* : NativeArray[Object] */;
val* var56 /* : String */;
val* var57 /* : null */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
val* var63 /* : null */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
val* var69 /* : MVisibility */;
val* var_vis_module_type /* var vis_module_type: MVisibility */;
val* var70 /* : MVisibility */;
val* var72 /* : MVisibility */;
short int var73 /* : Bool */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
long var77 /* : Int */;
val* var78 /* : FlatString */;
val* var79 /* : MVisibility */;
val* var81 /* : MVisibility */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
long var85 /* : Int */;
val* var86 /* : FlatString */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : NativeString */;
long var90 /* : Int */;
val* var91 /* : FlatString */;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : NativeString */;
long var95 /* : Int */;
val* var96 /* : FlatString */;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : NativeString */;
long var100 /* : Int */;
val* var101 /* : FlatString */;
val* var102 /* : Array[Object] */;
long var103 /* : Int */;
val* var104 /* : NativeArray[Object] */;
val* var105 /* : String */;
val* var106 /* : MVisibility */;
val* var108 /* : MVisibility */;
short int var109 /* : Bool */;
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : NativeString */;
long var113 /* : Int */;
val* var114 /* : FlatString */;
val* var115 /* : MVisibility */;
val* var117 /* : MVisibility */;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : NativeString */;
long var121 /* : Int */;
val* var122 /* : FlatString */;
static val* varonce123;
val* var124 /* : String */;
char* var125 /* : NativeString */;
long var126 /* : Int */;
val* var127 /* : FlatString */;
static val* varonce128;
val* var129 /* : String */;
char* var130 /* : NativeString */;
long var131 /* : Int */;
val* var132 /* : FlatString */;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : NativeString */;
long var136 /* : Int */;
val* var137 /* : FlatString */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : NativeString */;
long var141 /* : Int */;
val* var142 /* : FlatString */;
val* var143 /* : Array[Object] */;
long var144 /* : Int */;
val* var145 /* : NativeArray[Object] */;
val* var146 /* : String */;
short int var147 /* : Bool */;
int cltype148;
int idtype149;
val* var150 /* : ANodes[AType] */;
val* var152 /* : ANodes[AType] */;
val* var_ /* var : ANodes[AType] */;
val* var153 /* : Iterator[ANode] */;
val* var_154 /* var : Iterator[AType] */;
short int var155 /* : Bool */;
val* var156 /* : nullable Object */;
val* var_a /* var a: AType */;
val* var157 /* : nullable MType */;
val* var159 /* : nullable MType */;
val* var_t /* var t: nullable MType */;
val* var160 /* : null */;
short int var161 /* : Bool */;
short int var162 /* : Bool */;
val* var_other164 /* var other: nullable Object */;
short int var165 /* : Bool */;
short int var167 /* : Bool */;
short int var170 /* : Bool */;
int cltype171;
int idtype172;
val* var173 /* : Array[MType] */;
val* var175 /* : Array[MType] */;
val* var_176 /* var : Array[MType] */;
val* var177 /* : ArrayIterator[nullable Object] */;
val* var_178 /* var : ArrayIterator[MType] */;
short int var179 /* : Bool */;
val* var180 /* : nullable Object */;
val* var_t181 /* var t: MType */;
var_node = p0;
var_mtype = p1;
var_mpropdef = p2;
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MPropDef> */
var2 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MPropDef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_mproperty = var6;
var9 = NULL;
var_vis_type = var9;
var10 = NULL;
var_mmodule_type = var10;
{
var11 = ((val* (*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__as_notnullable]))(var_mtype) /* as_notnullable on <var_mtype:MType>*/;
}
var_mtype = var11;
/* <var_mtype:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var12 = 0;
} else {
var12 = var_mtype->type->type_table[cltype] == idtype;
}
if (var12){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var15 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline model#MClass#visibility (var13) on <var13:MClass> */
var18 = var13->attrs[COLOR_nit__model__MClass___visibility].val; /* _visibility on <var13:MClass> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 403);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_vis_type = var16;
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var21 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline model#MClass#intro (var19) on <var19:MClass> */
var24 = var19->attrs[COLOR_nit__model__MClass___intro].val; /* _intro on <var19:MClass> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 423);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var22) on <var22:MClassDef> */
var27 = var22->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var22:MClassDef> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
var_mmodule_type = var25;
} else {
/* <var_mtype:MType> isa MVirtualType */
cltype29 = type_nit__MVirtualType.color;
idtype30 = type_nit__MVirtualType.id;
if(cltype29 >= var_mtype->type->table_size) {
var28 = 0;
} else {
var28 = var_mtype->type->type_table[cltype29] == idtype30;
}
if (var28){
{
{ /* Inline model#MVirtualType#mproperty (var_mtype) on <var_mtype:MType(MVirtualType)> */
var33 = var_mtype->attrs[COLOR_nit__model__MVirtualType___mproperty].val; /* _mproperty on <var_mtype:MType(MVirtualType)> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1254);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline model#MProperty#visibility (var31) on <var31:MVirtualTypeProp> */
var36 = var31->attrs[COLOR_nit__model__MProperty___visibility].val; /* _visibility on <var31:MVirtualTypeProp> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1757);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
var_vis_type = var34;
{
{ /* Inline model#MVirtualType#mproperty (var_mtype) on <var_mtype:MType(MVirtualType)> */
var39 = var_mtype->attrs[COLOR_nit__model__MVirtualType___mproperty].val; /* _mproperty on <var_mtype:MType(MVirtualType)> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1254);
show_backtrace(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline model#MProperty#intro_mclassdef (var37) on <var37:MVirtualTypeProp> */
var42 = var37->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var37:MVirtualTypeProp> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1736);
show_backtrace(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var40) on <var40:MClassDef> */
var45 = var40->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var40:MClassDef> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
var_mmodule_type = var43;
} else {
/* <var_mtype:MType> isa MParameterType */
cltype47 = type_nit__MParameterType.color;
idtype48 = type_nit__MParameterType.id;
if(cltype47 >= var_mtype->type->table_size) {
var46 = 0;
} else {
var46 = var_mtype->type->type_table[cltype47] == idtype48;
}
if (var46){
} else {
if (varonce) {
var49 = varonce;
} else {
var50 = "Unexpected type ";
var51 = 16;
var52 = standard___standard__NativeString___to_s_with_length(var50, var51);
var49 = var52;
varonce = var49;
}
var53 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var53 = array_instance Array[Object] */
var54 = 2;
var55 = NEW_standard__NativeArray(var54, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var55)->values[0] = (val*) var49;
((struct instance_standard__NativeArray*)var55)->values[1] = (val*) var_mtype;
{
((void (*)(val* self, val* p0, long p1))(var53->class->vft[COLOR_standard__array__Array__with_native]))(var53, var55, var54) /* with_native on <var53:Array[Object]>*/;
}
}
{
var56 = ((val* (*)(val* self))(var53->class->vft[COLOR_standard__string__Object__to_s]))(var53) /* to_s on <var53:Array[Object]>*/;
}
{
nit___nit__ANode___debug(var_node, var56); /* Direct call parser_nodes#ANode#debug on <var_node:ANode>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 300);
show_backtrace(1);
}
}
}
var57 = NULL;
if (var_vis_type == NULL) {
var58 = 0; /* is null */
} else {
var58 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_vis_type,var57) on <var_vis_type:nullable MVisibility> */
var_other = var57;
{
var61 = ((short int (*)(val* self, val* p0))(var_vis_type->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_vis_type, var_other) /* == on <var_vis_type:nullable MVisibility(MVisibility)>*/;
}
var62 = !var61;
var59 = var62;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
var58 = var59;
}
if (var58){
var63 = NULL;
if (var_mmodule_type == NULL) {
var64 = 0; /* is null */
} else {
var64 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mmodule_type,var63) on <var_mmodule_type:nullable MModule> */
var_other = var63;
{
var67 = ((short int (*)(val* self, val* p0))(var_mmodule_type->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mmodule_type, var_other) /* == on <var_mmodule_type:nullable MModule(MModule)>*/;
}
var68 = !var67;
var65 = var68;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
var64 = var65;
}
if (unlikely(!var64)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 304);
show_backtrace(1);
}
{
var69 = nit___nit__MModule___visibility_for(var_mmodule, var_mmodule_type);
}
var_vis_module_type = var69;
{
{ /* Inline model#MProperty#visibility (var_mproperty) on <var_mproperty:MProperty> */
var72 = var_mproperty->attrs[COLOR_nit__model__MProperty___visibility].val; /* _visibility on <var_mproperty:MProperty> */
if (unlikely(var72 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1757);
show_backtrace(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
{
var73 = standard___standard__Comparable____62d(var70, var_vis_type);
}
if (var73){
if (varonce74) {
var75 = varonce74;
} else {
var76 = "Error: The ";
var77 = 11;
var78 = standard___standard__NativeString___to_s_with_length(var76, var77);
var75 = var78;
varonce74 = var75;
}
{
{ /* Inline model#MProperty#visibility (var_mproperty) on <var_mproperty:MProperty> */
var81 = var_mproperty->attrs[COLOR_nit__model__MProperty___visibility].val; /* _visibility on <var_mproperty:MProperty> */
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1757);
show_backtrace(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
if (varonce82) {
var83 = varonce82;
} else {
var84 = " property `";
var85 = 11;
var86 = standard___standard__NativeString___to_s_with_length(var84, var85);
var83 = var86;
varonce82 = var83;
}
if (varonce87) {
var88 = varonce87;
} else {
var89 = "` cannot contain the ";
var90 = 21;
var91 = standard___standard__NativeString___to_s_with_length(var89, var90);
var88 = var91;
varonce87 = var88;
}
if (varonce92) {
var93 = varonce92;
} else {
var94 = " type `";
var95 = 7;
var96 = standard___standard__NativeString___to_s_with_length(var94, var95);
var93 = var96;
varonce92 = var93;
}
if (varonce97) {
var98 = varonce97;
} else {
var99 = "`";
var100 = 1;
var101 = standard___standard__NativeString___to_s_with_length(var99, var100);
var98 = var101;
varonce97 = var98;
}
var102 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var102 = array_instance Array[Object] */
var103 = 9;
var104 = NEW_standard__NativeArray(var103, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var104)->values[0] = (val*) var75;
((struct instance_standard__NativeArray*)var104)->values[1] = (val*) var79;
((struct instance_standard__NativeArray*)var104)->values[2] = (val*) var83;
((struct instance_standard__NativeArray*)var104)->values[3] = (val*) var_mproperty;
((struct instance_standard__NativeArray*)var104)->values[4] = (val*) var88;
((struct instance_standard__NativeArray*)var104)->values[5] = (val*) var_vis_type;
((struct instance_standard__NativeArray*)var104)->values[6] = (val*) var93;
((struct instance_standard__NativeArray*)var104)->values[7] = (val*) var_mtype;
((struct instance_standard__NativeArray*)var104)->values[8] = (val*) var98;
{
((void (*)(val* self, val* p0, long p1))(var102->class->vft[COLOR_standard__array__Array__with_native]))(var102, var104, var103) /* with_native on <var102:Array[Object]>*/;
}
}
{
var105 = ((val* (*)(val* self))(var102->class->vft[COLOR_standard__string__Object__to_s]))(var102) /* to_s on <var102:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(self, var_node, var105); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
{
{ /* Inline model#MProperty#visibility (var_mproperty) on <var_mproperty:MProperty> */
var108 = var_mproperty->attrs[COLOR_nit__model__MProperty___visibility].val; /* _visibility on <var_mproperty:MProperty> */
if (unlikely(var108 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1757);
show_backtrace(1);
}
var106 = var108;
RET_LABEL107:(void)0;
}
}
{
var109 = standard___standard__Comparable____62d(var106, var_vis_module_type);
}
if (var109){
if (varonce110) {
var111 = varonce110;
} else {
var112 = "Error: The ";
var113 = 11;
var114 = standard___standard__NativeString___to_s_with_length(var112, var113);
var111 = var114;
varonce110 = var111;
}
{
{ /* Inline model#MProperty#visibility (var_mproperty) on <var_mproperty:MProperty> */
var117 = var_mproperty->attrs[COLOR_nit__model__MProperty___visibility].val; /* _visibility on <var_mproperty:MProperty> */
if (unlikely(var117 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1757);
show_backtrace(1);
}
var115 = var117;
RET_LABEL116:(void)0;
}
}
if (varonce118) {
var119 = varonce118;
} else {
var120 = " property `";
var121 = 11;
var122 = standard___standard__NativeString___to_s_with_length(var120, var121);
var119 = var122;
varonce118 = var119;
}
if (varonce123) {
var124 = varonce123;
} else {
var125 = "` cannot contain the type `";
var126 = 27;
var127 = standard___standard__NativeString___to_s_with_length(var125, var126);
var124 = var127;
varonce123 = var124;
}
if (varonce128) {
var129 = varonce128;
} else {
var130 = "` from the ";
var131 = 11;
var132 = standard___standard__NativeString___to_s_with_length(var130, var131);
var129 = var132;
varonce128 = var129;
}
if (varonce133) {
var134 = varonce133;
} else {
var135 = " module `";
var136 = 9;
var137 = standard___standard__NativeString___to_s_with_length(var135, var136);
var134 = var137;
varonce133 = var134;
}
if (varonce138) {
var139 = varonce138;
} else {
var140 = "`";
var141 = 1;
var142 = standard___standard__NativeString___to_s_with_length(var140, var141);
var139 = var142;
varonce138 = var139;
}
var143 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var143 = array_instance Array[Object] */
var144 = 11;
var145 = NEW_standard__NativeArray(var144, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var145)->values[0] = (val*) var111;
((struct instance_standard__NativeArray*)var145)->values[1] = (val*) var115;
((struct instance_standard__NativeArray*)var145)->values[2] = (val*) var119;
((struct instance_standard__NativeArray*)var145)->values[3] = (val*) var_mproperty;
((struct instance_standard__NativeArray*)var145)->values[4] = (val*) var124;
((struct instance_standard__NativeArray*)var145)->values[5] = (val*) var_mtype;
((struct instance_standard__NativeArray*)var145)->values[6] = (val*) var129;
((struct instance_standard__NativeArray*)var145)->values[7] = (val*) var_vis_module_type;
((struct instance_standard__NativeArray*)var145)->values[8] = (val*) var134;
((struct instance_standard__NativeArray*)var145)->values[9] = (val*) var_mmodule_type;
((struct instance_standard__NativeArray*)var145)->values[10] = (val*) var139;
{
((void (*)(val* self, val* p0, long p1))(var143->class->vft[COLOR_standard__array__Array__with_native]))(var143, var145, var144) /* with_native on <var143:Array[Object]>*/;
}
}
{
var146 = ((val* (*)(val* self))(var143->class->vft[COLOR_standard__string__Object__to_s]))(var143) /* to_s on <var143:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(self, var_node, var146); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
}
} else {
}
/* <var_node:ANode> isa AType */
cltype148 = type_nit__AType.color;
idtype149 = type_nit__AType.id;
if(cltype148 >= var_node->type->table_size) {
var147 = 0;
} else {
var147 = var_node->type->type_table[cltype148] == idtype149;
}
if (var147){
{
{ /* Inline parser_nodes#AType#n_types (var_node) on <var_node:ANode(AType)> */
var152 = var_node->attrs[COLOR_nit__parser_nodes__AType___n_types].val; /* _n_types on <var_node:ANode(AType)> */
if (unlikely(var152 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1539);
show_backtrace(1);
}
var150 = var152;
RET_LABEL151:(void)0;
}
}
var_ = var150;
{
var153 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_);
}
var_154 = var153;
for(;;) {
{
var155 = ((short int (*)(val* self))(var_154->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_154) /* is_ok on <var_154:Iterator[AType]>*/;
}
if (var155){
{
var156 = ((val* (*)(val* self))(var_154->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_154) /* item on <var_154:Iterator[AType]>*/;
}
var_a = var156;
{
{ /* Inline modelize_class#AType#mtype (var_a) on <var_a:AType> */
var159 = var_a->attrs[COLOR_nit__modelize_class__AType___mtype].val; /* _mtype on <var_a:AType> */
var157 = var159;
RET_LABEL158:(void)0;
}
}
var_t = var157;
var160 = NULL;
if (var_t == NULL) {
var161 = 1; /* is null */
} else {
var161 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t,var160) on <var_t:nullable MType> */
var_other164 = var160;
{
{ /* Inline kernel#Object#is_same_instance (var_t,var_other164) on <var_t:nullable MType(MType)> */
var167 = var_t == var_other164;
var165 = var167;
goto RET_LABEL166;
RET_LABEL166:(void)0;
}
}
var162 = var165;
goto RET_LABEL163;
RET_LABEL163:(void)0;
}
var161 = var162;
}
if (var161){
goto BREAK_label;
} else {
}
{
nit__modelize_property___ModelBuilder___check_visibility(self, var_a, var_t, var_mpropdef); /* Direct call modelize_property#ModelBuilder#check_visibility on <self:ModelBuilder>*/
}
BREAK_label: (void)0;
{
((void (*)(val* self))(var_154->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_154) /* next on <var_154:Iterator[AType]>*/;
}
} else {
goto BREAK_label168;
}
}
BREAK_label168: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_154) on <var_154:Iterator[AType]> */
RET_LABEL169:(void)0;
}
}
} else {
/* <var_mtype:MType> isa MGenericType */
cltype171 = type_nit__MGenericType.color;
idtype172 = type_nit__MGenericType.id;
if(cltype171 >= var_mtype->type->table_size) {
var170 = 0;
} else {
var170 = var_mtype->type->type_table[cltype171] == idtype172;
}
if (var170){
{
{ /* Inline model#MGenericType#arguments (var_mtype) on <var_mtype:MType(MGenericType)> */
var175 = var_mtype->attrs[COLOR_nit__model__MGenericType___arguments].val; /* _arguments on <var_mtype:MType(MGenericType)> */
if (unlikely(var175 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1164);
show_backtrace(1);
}
var173 = var175;
RET_LABEL174:(void)0;
}
}
var_176 = var173;
{
var177 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_176);
}
var_178 = var177;
for(;;) {
{
var179 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_178);
}
if (var179){
{
var180 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_178);
}
var_t181 = var180;
{
nit__modelize_property___ModelBuilder___check_visibility(self, var_node, var_t181, var_mpropdef); /* Direct call modelize_property#ModelBuilder#check_visibility on <self:ModelBuilder>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_178); /* Direct call array#ArrayIterator#next on <var_178:ArrayIterator[MType]>*/
}
} else {
goto BREAK_label182;
}
}
BREAK_label182: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_178) on <var_178:ArrayIterator[MType]> */
RET_LABEL183:(void)0;
}
}
} else {
}
}
RET_LABEL:;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 352);
show_backtrace(1);
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
long var4 /* : Int */;
val* var5 /* : FlatString */;
val* var_name /* var name: String */;
val* var6 /* : nullable MProperty */;
val* var_mprop /* var mprop: nullable MProperty */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
int cltype;
int idtype;
short int var15 /* : Bool */;
val* var16 /* : MPropDef */;
val* var18 /* : MPropDef */;
val* var_intro /* var intro: MVirtualTypeDef */;
val* var19 /* : MClassDef */;
val* var21 /* : MClassDef */;
val* var_intro_mclassdef /* var intro_mclassdef: MClassDef */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : HashMap[MPropDef, APropdef] */;
val* var29 /* : HashMap[MPropDef, APropdef] */;
val* var30 /* : nullable Object */;
val* var_nintro /* var nintro: APropdef */;
val* var31 /* : MClass */;
val* var33 /* : MClass */;
val* var34 /* : String */;
val* var36 /* : String */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
long var40 /* : Int */;
val* var41 /* : FlatString */;
short int var42 /* : Bool */;
val* var_other44 /* var other: nullable Object */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
long var50 /* : Int */;
val* var51 /* : FlatString */;
val* var52 /* : MVisibility */;
val* var54 /* : MVisibility */;
val* var55 /* : MVisibility */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
long var63 /* : Int */;
val* var64 /* : FlatString */;
short int var65 /* : Bool */;
short int var67 /* : Bool */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : NativeString */;
long var71 /* : Int */;
val* var72 /* : FlatString */;
val* var73 /* : MVirtualTypeDef */;
val* var74 /* : Location */;
val* var76 /* : Location */;
val* var_mpropdef /* var mpropdef: MVirtualTypeDef */;
val* var77 /* : MClass */;
val* var79 /* : MClass */;
val* var80 /* : MClassType */;
val* var82 /* : MClassType */;
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
if (varonce) {
var2 = varonce;
} else {
var3 = "SELF";
var4 = 4;
var5 = standard___standard__NativeString___to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
var_name = var2;
{
var6 = nit___nit__ModelBuilder___try_get_mproperty_by_name(var_modelbuilder, var_nclassdef, self, var_name);
}
var_mprop = var6;
var7 = NULL;
if (var_mprop == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mprop,var7) on <var_mprop:nullable MProperty> */
var_other = var7;
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
goto RET_LABEL;
} else {
}
/* <var_mprop:nullable MProperty(MProperty)> isa MVirtualTypeProp */
cltype = type_nit__MVirtualTypeProp.color;
idtype = type_nit__MVirtualTypeProp.id;
if(cltype >= var_mprop->type->table_size) {
var14 = 0;
} else {
var14 = var_mprop->type->type_table[cltype] == idtype;
}
var15 = !var14;
if (var15){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MProperty#intro (var_mprop) on <var_mprop:nullable MProperty(MVirtualTypeProp)> */
var18 = var_mprop->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var_mprop:nullable MProperty(MVirtualTypeProp)> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1773);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_intro = var16;
{
{ /* Inline model#MPropDef#mclassdef (var_intro) on <var_intro:MVirtualTypeDef> */
var21 = var_intro->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_intro:MVirtualTypeDef> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
var_intro_mclassdef = var19;
{
{ /* Inline kernel#Object#== (var_intro_mclassdef,self) on <var_intro_mclassdef:MClassDef> */
var_other = self;
{
{ /* Inline kernel#Object#is_same_instance (var_intro_mclassdef,var_other) on <var_intro_mclassdef:MClassDef> */
var26 = var_intro_mclassdef == var_other;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var29 = var_modelbuilder->attrs[COLOR_nit__modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 40);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
var30 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var27, var_intro);
}
var_nintro = var30;
{
{ /* Inline model#MClassDef#mclass (var_intro_mclassdef) on <var_intro_mclassdef:MClassDef> */
var33 = var_intro_mclassdef->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_intro_mclassdef:MClassDef> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline model#MClass#name (var31) on <var31:MClass> */
var36 = var31->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var31:MClass> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
if (varonce37) {
var38 = varonce37;
} else {
var39 = "Object";
var40 = 6;
var41 = standard___standard__NativeString___to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
{
{ /* Inline kernel#Object#!= (var34,var38) on <var34:String> */
var_other44 = var38;
{
var45 = ((short int (*)(val* self, val* p0))(var34->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var34, var_other44) /* == on <var34:String>*/;
}
var46 = !var45;
var42 = var46;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
if (var42){
if (varonce47) {
var48 = varonce47;
} else {
var49 = "Error: the virtual type SELF must be declared in Object.";
var50 = 56;
var51 = standard___standard__NativeString___to_s_with_length(var49, var50);
var48 = var51;
varonce47 = var48;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_nintro, var48); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
{
{ /* Inline model#MProperty#visibility (var_mprop) on <var_mprop:nullable MProperty(MVirtualTypeProp)> */
var54 = var_mprop->attrs[COLOR_nit__model__MProperty___visibility].val; /* _visibility on <var_mprop:nullable MProperty(MVirtualTypeProp)> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1757);
show_backtrace(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
var55 = nit__model_base___standard__Object___public_visibility(self);
}
{
{ /* Inline kernel#Object#!= (var52,var55) on <var52:MVisibility> */
var_other44 = var55;
{
var58 = ((short int (*)(val* self, val* p0))(var52->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var52, var_other44) /* == on <var52:MVisibility>*/;
}
var59 = !var58;
var56 = var59;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
if (var56){
if (varonce60) {
var61 = varonce60;
} else {
var62 = "Error: the virtual type SELF must be public.";
var63 = 44;
var64 = standard___standard__NativeString___to_s_with_length(var62, var63);
var61 = var64;
varonce60 = var61;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_nintro, var61); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
{
{ /* Inline model#MVirtualTypeDef#is_fixed (var_intro) on <var_intro:MVirtualTypeDef> */
var67 = var_intro->attrs[COLOR_nit__model__MVirtualTypeDef___is_fixed].s; /* _is_fixed on <var_intro:MVirtualTypeDef> */
var65 = var67;
RET_LABEL66:(void)0;
}
}
if (var65){
if (varonce68) {
var69 = varonce68;
} else {
var70 = "Error: the virtual type SELF cannot be fixed.";
var71 = 45;
var72 = standard___standard__NativeString___to_s_with_length(var70, var71);
var69 = var72;
varonce68 = var69;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_nintro, var69); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
goto RET_LABEL;
} else {
}
var73 = NEW_nit__MVirtualTypeDef(&type_nit__MVirtualTypeDef);
{
{ /* Inline model#MClassDef#location (self) on <self:MClassDef> */
var76 = self->attrs[COLOR_nit__model__MClassDef___location].val; /* _location on <self:MClassDef> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 507);
show_backtrace(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
((void (*)(val* self, val* p0))(var73->class->vft[COLOR_nit__model__MPropDef__mclassdef_61d]))(var73, self) /* mclassdef= on <var73:MVirtualTypeDef>*/;
}
{
((void (*)(val* self, val* p0))(var73->class->vft[COLOR_nit__model__MPropDef__mproperty_61d]))(var73, var_mprop) /* mproperty= on <var73:MVirtualTypeDef>*/;
}
{
((void (*)(val* self, val* p0))(var73->class->vft[COLOR_nit__model__MPropDef__location_61d]))(var73, var74) /* location= on <var73:MVirtualTypeDef>*/;
}
{
((void (*)(val* self))(var73->class->vft[COLOR_standard__kernel__Object__init]))(var73) /* init on <var73:MVirtualTypeDef>*/;
}
var_mpropdef = var73;
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var79 = self->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var79 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var77) on <var77:MClass> */
var82 = var77->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var77:MClass> */
if (unlikely(var82 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var80 = var82;
RET_LABEL81:(void)0;
}
}
{
{ /* Inline model#MVirtualTypeDef#bound= (var_mpropdef,var80) on <var_mpropdef:MVirtualTypeDef> */
var_mpropdef->attrs[COLOR_nit__model__MVirtualTypeDef___bound].val = var80; /* _bound on <var_mpropdef:MVirtualTypeDef> */
RET_LABEL83:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 405);
show_backtrace(1);
}
self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val = p0; /* _mpropdef on <self:APropdef> */
RET_LABEL:;
}
/* method modelize_property#APropdef#new_property_visibility for (self: APropdef, ModelBuilder, MClassDef, nullable AVisibility): MVisibility */
val* nit__modelize_property___APropdef___new_property_visibility(val* self, val* p0, val* p1, val* p2) {
val* var /* : MVisibility */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var_nvisibility /* var nvisibility: nullable AVisibility */;
val* var1 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: MVisibility */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : MVisibility */;
val* var9 /* : MVisibility */;
short int var10 /* : Bool */;
val* var_other12 /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
static val* varonce;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : FlatString */;
val* var20 /* : MVisibility */;
val* var21 /* : MClass */;
val* var23 /* : MClass */;
val* var24 /* : MVisibility */;
val* var26 /* : MVisibility */;
val* var27 /* : MVisibility */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : MVisibility */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
val* var39 /* : null */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
long var48 /* : Int */;
val* var49 /* : FlatString */;
val* var50 /* : MVisibility */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
val* var56 /* : null */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
long var65 /* : Int */;
val* var66 /* : FlatString */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
long var70 /* : Int */;
val* var71 /* : FlatString */;
val* var72 /* : MVisibility */;
var_modelbuilder = p0;
var_mclassdef = p1;
var_nvisibility = p2;
{
var1 = nit__model_base___standard__Object___public_visibility(self);
}
var_mvisibility = var1;
var2 = NULL;
if (var_nvisibility == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nvisibility,var2) on <var_nvisibility:nullable AVisibility> */
var_other = var2;
{
var6 = ((short int (*)(val* self, val* p0))(var_nvisibility->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nvisibility, var_other) /* == on <var_nvisibility:nullable AVisibility(AVisibility)>*/;
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
var8 = ((val* (*)(val* self))(var_nvisibility->class->vft[COLOR_nit__modelbuilder_base__AVisibility__mvisibility]))(var_nvisibility) /* mvisibility on <var_nvisibility:nullable AVisibility(AVisibility)>*/;
}
var_mvisibility = var8;
{
var9 = nit__model_base___standard__Object___intrude_visibility(self);
}
{
{ /* Inline kernel#Object#== (var_mvisibility,var9) on <var_mvisibility:MVisibility> */
var_other12 = var9;
{
{ /* Inline kernel#Object#is_same_instance (var_mvisibility,var_other12) on <var_mvisibility:MVisibility> */
var15 = var_mvisibility == var_other12;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
if (varonce) {
var16 = varonce;
} else {
var17 = "Error: intrude is not a legal visibility for properties.";
var18 = 56;
var19 = standard___standard__NativeString___to_s_with_length(var17, var18);
var16 = var19;
varonce = var16;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_nvisibility, var16); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
{
var20 = nit__model_base___standard__Object___public_visibility(self);
}
var_mvisibility = var20;
} else {
}
} else {
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var23 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline model#MClass#visibility (var21) on <var21:MClass> */
var26 = var21->attrs[COLOR_nit__model__MClass___visibility].val; /* _visibility on <var21:MClass> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 403);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
var27 = nit__model_base___standard__Object___private_visibility(self);
}
{
{ /* Inline kernel#Object#== (var24,var27) on <var24:MVisibility> */
var_other12 = var27;
{
{ /* Inline kernel#Object#is_same_instance (var24,var_other12) on <var24:MVisibility> */
var32 = var24 == var_other12;
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
if (var28){
{
var33 = nit__model_base___standard__Object___protected_visibility(self);
}
{
{ /* Inline kernel#Object#== (var_mvisibility,var33) on <var_mvisibility:MVisibility> */
var_other12 = var33;
{
{ /* Inline kernel#Object#is_same_instance (var_mvisibility,var_other12) on <var_mvisibility:MVisibility> */
var38 = var_mvisibility == var_other12;
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
if (var34){
var39 = NULL;
if (var_nvisibility == NULL) {
var40 = 0; /* is null */
} else {
var40 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nvisibility,var39) on <var_nvisibility:nullable AVisibility> */
var_other = var39;
{
var43 = ((short int (*)(val* self, val* p0))(var_nvisibility->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nvisibility, var_other) /* == on <var_nvisibility:nullable AVisibility(AVisibility)>*/;
}
var44 = !var43;
var41 = var44;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
var40 = var41;
}
if (unlikely(!var40)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 423);
show_backtrace(1);
}
if (varonce45) {
var46 = varonce45;
} else {
var47 = "Error: The only legal visibility for properties in a private class is private.";
var48 = 78;
var49 = standard___standard__NativeString___to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_nvisibility, var46); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
{
var50 = nit__model_base___standard__Object___private_visibility(self);
}
{
{ /* Inline kernel#Object#== (var_mvisibility,var50) on <var_mvisibility:MVisibility> */
var_other12 = var50;
{
{ /* Inline kernel#Object#is_same_instance (var_mvisibility,var_other12) on <var_mvisibility:MVisibility> */
var55 = var_mvisibility == var_other12;
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
if (var51){
var56 = NULL;
if (var_nvisibility == NULL) {
var57 = 0; /* is null */
} else {
var57 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nvisibility,var56) on <var_nvisibility:nullable AVisibility> */
var_other = var56;
{
var60 = ((short int (*)(val* self, val* p0))(var_nvisibility->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nvisibility, var_other) /* == on <var_nvisibility:nullable AVisibility(AVisibility)>*/;
}
var61 = !var60;
var58 = var61;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
var57 = var58;
}
if (unlikely(!var57)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 426);
show_backtrace(1);
}
if (varonce62) {
var63 = varonce62;
} else {
var64 = "useless-visibility";
var65 = 18;
var66 = standard___standard__NativeString___to_s_with_length(var64, var65);
var63 = var66;
varonce62 = var63;
}
if (varonce67) {
var68 = varonce67;
} else {
var69 = "Warning: private is superfluous since the only legal visibility for properties in a private class is private.";
var70 = 109;
var71 = standard___standard__NativeString___to_s_with_length(var69, var70);
var68 = var71;
varonce67 = var68;
}
{
nit___nit__ModelBuilder___advice(var_modelbuilder, var_nvisibility, var63, var68); /* Direct call modelbuilder_base#ModelBuilder#advice on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
}
{
var72 = nit__model_base___standard__Object___private_visibility(self);
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
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : MDoc */;
val* var_mdoc /* var mdoc: MDoc */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var_ /* var : Bool */;
val* var14 /* : MProperty */;
val* var16 /* : MProperty */;
val* var17 /* : MVisibility */;
val* var19 /* : MVisibility */;
val* var20 /* : MVisibility */;
short int var21 /* : Bool */;
static val* varonce;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : FlatString */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : FlatString */;
val* var31 /* : MProperty */;
val* var33 /* : MProperty */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : FlatString */;
val* var39 /* : Array[Object] */;
long var40 /* : Int */;
val* var41 /* : NativeArray[Object] */;
val* var42 /* : String */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
long var46 /* : Int */;
val* var47 /* : FlatString */;
val* var48 /* : nullable AAnnotation */;
val* var_at_deprecated /* var at_deprecated: nullable AAnnotation */;
val* var49 /* : null */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
long var60 /* : Int */;
val* var61 /* : FlatString */;
val* var62 /* : MDeprecationInfo */;
val* var_info /* var info: MDeprecationInfo */;
val* var64 /* : nullable ADoc */;
val* var66 /* : nullable ADoc */;
val* var67 /* : null */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
short int var71 /* : Bool */;
short int var72 /* : Bool */;
val* var73 /* : MDoc */;
val* var75 /* : MProperty */;
val* var77 /* : MProperty */;
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
var3 = NULL;
if (var_ndoc == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ndoc,var3) on <var_ndoc:nullable ADoc> */
var_other = var3;
{
var7 = ((short int (*)(val* self, val* p0))(var_ndoc->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ndoc, var_other) /* == on <var_ndoc:nullable ADoc(ADoc)>*/;
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
{
var9 = nit__modelbuilder_base___ADoc___to_mdoc(var_ndoc);
}
var_mdoc = var9;
{
{ /* Inline mdoc#MEntity#mdoc= (var_mpropdef,var_mdoc) on <var_mpropdef:MPropDef> */
var_mpropdef->attrs[COLOR_nit__mdoc__MEntity___mdoc].val = var_mdoc; /* _mdoc on <var_mpropdef:MPropDef> */
RET_LABEL10:(void)0;
}
}
{
{ /* Inline mdoc#MDoc#original_mentity= (var_mdoc,var_mpropdef) on <var_mdoc:MDoc> */
var_mdoc->attrs[COLOR_nit__mdoc__MDoc___original_mentity].val = var_mpropdef; /* _original_mentity on <var_mdoc:MDoc> */
RET_LABEL11:(void)0;
}
}
} else {
{
var13 = nit___nit__MPropDef___is_intro(var_mpropdef);
}
var_ = var13;
if (var13){
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MPropDef> */
var16 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MPropDef> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline model#MProperty#visibility (var14) on <var14:MProperty> */
var19 = var14->attrs[COLOR_nit__model__MProperty___visibility].val; /* _visibility on <var14:MProperty> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1757);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = nit__model_base___standard__Object___protected_visibility(self);
}
{
var21 = standard___standard__Comparable____62d_61d(var17, var20);
}
var12 = var21;
} else {
var12 = var_;
}
if (var12){
if (varonce) {
var22 = varonce;
} else {
var23 = "missing-doc";
var24 = 11;
var25 = standard___standard__NativeString___to_s_with_length(var23, var24);
var22 = var25;
varonce = var22;
}
if (varonce26) {
var27 = varonce26;
} else {
var28 = "Documentation warning: Undocumented property `";
var29 = 46;
var30 = standard___standard__NativeString___to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MPropDef> */
var33 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MPropDef> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
if (varonce34) {
var35 = varonce34;
} else {
var36 = "`";
var37 = 1;
var38 = standard___standard__NativeString___to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
var39 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var39 = array_instance Array[Object] */
var40 = 3;
var41 = NEW_standard__NativeArray(var40, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var41)->values[0] = (val*) var27;
((struct instance_standard__NativeArray*)var41)->values[1] = (val*) var31;
((struct instance_standard__NativeArray*)var41)->values[2] = (val*) var35;
{
((void (*)(val* self, val* p0, long p1))(var39->class->vft[COLOR_standard__array__Array__with_native]))(var39, var41, var40) /* with_native on <var39:Array[Object]>*/;
}
}
{
var42 = ((val* (*)(val* self))(var39->class->vft[COLOR_standard__string__Object__to_s]))(var39) /* to_s on <var39:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___advice(var_modelbuilder, self, var22, var42); /* Direct call modelbuilder_base#ModelBuilder#advice on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
}
if (varonce43) {
var44 = varonce43;
} else {
var45 = "deprecated";
var46 = 10;
var47 = standard___standard__NativeString___to_s_with_length(var45, var46);
var44 = var47;
varonce43 = var44;
}
{
var48 = nit__annotation___Prod___get_single_annotation(self, var44, var_modelbuilder);
}
var_at_deprecated = var48;
var49 = NULL;
if (var_at_deprecated == NULL) {
var50 = 0; /* is null */
} else {
var50 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_at_deprecated,var49) on <var_at_deprecated:nullable AAnnotation> */
var_other = var49;
{
var53 = ((short int (*)(val* self, val* p0))(var_at_deprecated->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_at_deprecated, var_other) /* == on <var_at_deprecated:nullable AAnnotation(AAnnotation)>*/;
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
var55 = nit___nit__MPropDef___is_intro(var_mpropdef);
}
var56 = !var55;
if (var56){
if (varonce57) {
var58 = varonce57;
} else {
var59 = "Error: method redefinition cannot be deprecated.";
var60 = 48;
var61 = standard___standard__NativeString___to_s_with_length(var59, var60);
var58 = var61;
varonce57 = var58;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, self, var58); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
var62 = NEW_nit__MDeprecationInfo(&type_nit__MDeprecationInfo);
{
{ /* Inline kernel#Object#init (var62) on <var62:MDeprecationInfo> */
RET_LABEL63:(void)0;
}
}
var_info = var62;
{
{ /* Inline parser_nodes#ADefinition#n_doc (var_at_deprecated) on <var_at_deprecated:nullable AAnnotation(AAnnotation)> */
var66 = var_at_deprecated->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <var_at_deprecated:nullable AAnnotation(AAnnotation)> */
var64 = var66;
RET_LABEL65:(void)0;
}
}
var_ndoc = var64;
var67 = NULL;
if (var_ndoc == NULL) {
var68 = 0; /* is null */
} else {
var68 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ndoc,var67) on <var_ndoc:nullable ADoc> */
var_other = var67;
{
var71 = ((short int (*)(val* self, val* p0))(var_ndoc->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ndoc, var_other) /* == on <var_ndoc:nullable ADoc(ADoc)>*/;
}
var72 = !var71;
var69 = var72;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
var68 = var69;
}
if (var68){
{
var73 = nit__modelbuilder_base___ADoc___to_mdoc(var_ndoc);
}
{
{ /* Inline mdoc#MDeprecationInfo#mdoc= (var_info,var73) on <var_info:MDeprecationInfo> */
var_info->attrs[COLOR_nit__mdoc__MDeprecationInfo___mdoc].val = var73; /* _mdoc on <var_info:MDeprecationInfo> */
RET_LABEL74:(void)0;
}
}
} else {
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MPropDef> */
var77 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MPropDef> */
if (unlikely(var77 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
{
{ /* Inline mdoc#MEntity#deprecation= (var75,var_info) on <var75:MProperty> */
var75->attrs[COLOR_nit__mdoc__MEntity___deprecation].val = var_info; /* _deprecation on <var75:MProperty> */
RET_LABEL78:(void)0;
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
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: MVisibility */;
short int var8 /* : Bool */;
val* var9 /* : MVisibility */;
val* var11 /* : MVisibility */;
short int var12 /* : Bool */;
val* var_other14 /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var_ /* var : Bool */;
val* var17 /* : MVisibility */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
static val* varonce;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : FlatString */;
val* var26 /* : MVisibility */;
val* var28 /* : MVisibility */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : FlatString */;
val* var34 /* : Array[Object] */;
long var35 /* : Int */;
val* var36 /* : NativeArray[Object] */;
val* var37 /* : String */;
var_modelbuilder = p0;
var_nvisibility = p1;
var_mprop = p2;
var = NULL;
if (var_nvisibility == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nvisibility,var) on <var_nvisibility:nullable AVisibility> */
var_other = var;
{
{ /* Inline kernel#Object#is_same_instance (var_nvisibility,var_other) on <var_nvisibility:nullable AVisibility(AVisibility)> */
var6 = var_nvisibility == var_other;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
goto RET_LABEL;
} else {
}
{
var7 = ((val* (*)(val* self))(var_nvisibility->class->vft[COLOR_nit__modelbuilder_base__AVisibility__mvisibility]))(var_nvisibility) /* mvisibility on <var_nvisibility:nullable AVisibility(AVisibility)>*/;
}
var_mvisibility = var7;
{
{ /* Inline model#MProperty#visibility (var_mprop) on <var_mprop:MProperty> */
var11 = var_mprop->attrs[COLOR_nit__model__MProperty___visibility].val; /* _visibility on <var_mprop:MProperty> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1757);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var_mvisibility,var9) on <var_mvisibility:MVisibility> */
var_other14 = var9;
{
var15 = ((short int (*)(val* self, val* p0))(var_mvisibility->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mvisibility, var_other14) /* == on <var_mvisibility:MVisibility>*/;
}
var16 = !var15;
var12 = var16;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_ = var12;
if (var12){
{
var17 = nit__model_base___standard__Object___public_visibility(self);
}
{
{ /* Inline kernel#Object#!= (var_mvisibility,var17) on <var_mvisibility:MVisibility> */
var_other14 = var17;
{
var20 = ((short int (*)(val* self, val* p0))(var_mvisibility->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mvisibility, var_other14) /* == on <var_mvisibility:MVisibility>*/;
}
var21 = !var20;
var18 = var21;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var8 = var18;
} else {
var8 = var_;
}
if (var8){
if (varonce) {
var22 = varonce;
} else {
var23 = "Error: redefinition changed the visibility from a ";
var24 = 50;
var25 = standard___standard__NativeString___to_s_with_length(var23, var24);
var22 = var25;
varonce = var22;
}
{
{ /* Inline model#MProperty#visibility (var_mprop) on <var_mprop:MProperty> */
var28 = var_mprop->attrs[COLOR_nit__model__MProperty___visibility].val; /* _visibility on <var_mprop:MProperty> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1757);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
if (varonce29) {
var30 = varonce29;
} else {
var31 = " to a ";
var32 = 6;
var33 = standard___standard__NativeString___to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
var34 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var34 = array_instance Array[Object] */
var35 = 4;
var36 = NEW_standard__NativeArray(var35, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var36)->values[0] = (val*) var22;
((struct instance_standard__NativeArray*)var36)->values[1] = (val*) var26;
((struct instance_standard__NativeArray*)var36)->values[2] = (val*) var30;
((struct instance_standard__NativeArray*)var36)->values[3] = (val*) var_mvisibility;
{
((void (*)(val* self, val* p0, long p1))(var34->class->vft[COLOR_standard__array__Array__with_native]))(var34, var36, var35) /* with_native on <var34:Array[Object]>*/;
}
}
{
var37 = ((val* (*)(val* self))(var34->class->vft[COLOR_standard__string__Object__to_s]))(var34) /* to_s on <var34:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_nvisibility, var37); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
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
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : FlatString */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : FlatString */;
val* var14 /* : MClass */;
val* var16 /* : MClass */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : FlatString */;
val* var22 /* : Map[MProperty, APropdef] */;
val* var24 /* : Map[MProperty, APropdef] */;
val* var25 /* : nullable Object */;
val* var26 /* : Location */;
val* var28 /* : Location */;
long var29 /* : Int */;
long var31 /* : Int */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
long var35 /* : Int */;
val* var36 /* : FlatString */;
val* var37 /* : Array[Object] */;
long var38 /* : Int */;
val* var39 /* : NativeArray[Object] */;
val* var40 /* : Object */;
val* var41 /* : String */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
val* var48 /* : nullable ANode */;
val* var50 /* : nullable ANode */;
short int var51 /* : Bool */;
int cltype52;
int idtype53;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
short int var60 /* : Bool */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
long var64 /* : Int */;
val* var65 /* : FlatString */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
long var69 /* : Int */;
val* var70 /* : FlatString */;
val* var71 /* : Array[Object] */;
long var72 /* : Int */;
val* var73 /* : NativeArray[Object] */;
val* var74 /* : String */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : NativeString */;
long var78 /* : Int */;
val* var79 /* : FlatString */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
long var83 /* : Int */;
val* var84 /* : FlatString */;
val* var85 /* : Array[Object] */;
long var86 /* : Int */;
val* var87 /* : NativeArray[Object] */;
val* var88 /* : String */;
short int var89 /* : Bool */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
int cltype92;
int idtype93;
short int var_94 /* var : Bool */;
short int var95 /* : Bool */;
short int var97 /* : Bool */;
short int var98 /* : Bool */;
val* var99 /* : null */;
short int var100 /* : Bool */;
short int var101 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var103 /* : Bool */;
short int var105 /* : Bool */;
static val* varonce106;
val* var107 /* : String */;
char* var108 /* : NativeString */;
long var109 /* : Int */;
val* var110 /* : FlatString */;
val* var111 /* : MClass */;
val* var113 /* : MClass */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : NativeString */;
long var117 /* : Int */;
val* var118 /* : FlatString */;
val* var119 /* : String */;
val* var121 /* : String */;
static val* varonce122;
val* var123 /* : String */;
char* var124 /* : NativeString */;
long var125 /* : Int */;
val* var126 /* : FlatString */;
val* var127 /* : Array[Object] */;
long var128 /* : Int */;
val* var129 /* : NativeArray[Object] */;
val* var130 /* : String */;
short int var131 /* : Bool */;
short int var132 /* : Bool */;
val* var133 /* : MClassDef */;
val* var135 /* : MClassDef */;
val* var136 /* : MModule */;
val* var138 /* : MModule */;
val* var139 /* : nullable MGroup */;
val* var141 /* : nullable MGroup */;
val* var142 /* : null */;
short int var143 /* : Bool */;
short int var144 /* : Bool */;
val* var_other146 /* var other: nullable Object */;
short int var147 /* : Bool */;
short int var148 /* : Bool */;
short int var_149 /* var : Bool */;
val* var150 /* : MVisibility */;
val* var152 /* : MVisibility */;
val* var153 /* : MVisibility */;
short int var154 /* : Bool */;
val* var155 /* : Model */;
val* var157 /* : Model */;
val* var158 /* : String */;
val* var160 /* : String */;
val* var161 /* : nullable Array[MProperty] */;
val* var_others /* var others: nullable Array[MProperty] */;
val* var162 /* : null */;
short int var163 /* : Bool */;
short int var164 /* : Bool */;
short int var166 /* : Bool */;
short int var167 /* : Bool */;
val* var_168 /* var : Array[MProperty] */;
val* var169 /* : ArrayIterator[nullable Object] */;
val* var_170 /* var : ArrayIterator[MProperty] */;
short int var171 /* : Bool */;
val* var172 /* : nullable Object */;
val* var_other173 /* var other: MProperty */;
short int var174 /* : Bool */;
short int var175 /* : Bool */;
short int var176 /* : Bool */;
short int var177 /* : Bool */;
short int var178 /* : Bool */;
short int var180 /* : Bool */;
short int var181 /* : Bool */;
short int var_182 /* var : Bool */;
val* var183 /* : MClassDef */;
val* var185 /* : MClassDef */;
val* var186 /* : MModule */;
val* var188 /* : MModule */;
val* var189 /* : nullable MGroup */;
val* var191 /* : nullable MGroup */;
val* var192 /* : null */;
short int var193 /* : Bool */;
short int var194 /* : Bool */;
short int var196 /* : Bool */;
short int var197 /* : Bool */;
short int var_198 /* var : Bool */;
val* var199 /* : MClassDef */;
val* var201 /* : MClassDef */;
val* var202 /* : MModule */;
val* var204 /* : MModule */;
val* var205 /* : nullable MGroup */;
val* var207 /* : nullable MGroup */;
val* var208 /* : MProject */;
val* var210 /* : MProject */;
val* var211 /* : MClassDef */;
val* var213 /* : MClassDef */;
val* var214 /* : MModule */;
val* var216 /* : MModule */;
val* var217 /* : nullable MGroup */;
val* var219 /* : nullable MGroup */;
val* var220 /* : MProject */;
val* var222 /* : MProject */;
short int var223 /* : Bool */;
short int var225 /* : Bool */;
short int var227 /* : Bool */;
short int var_228 /* var : Bool */;
val* var229 /* : MClassDef */;
val* var231 /* : MClassDef */;
val* var232 /* : MClass */;
val* var234 /* : MClass */;
val* var235 /* : String */;
val* var237 /* : String */;
val* var238 /* : MClassDef */;
val* var240 /* : MClassDef */;
val* var241 /* : MClass */;
val* var243 /* : MClass */;
val* var244 /* : String */;
val* var246 /* : String */;
short int var247 /* : Bool */;
short int var_248 /* var : Bool */;
val* var249 /* : MVisibility */;
val* var251 /* : MVisibility */;
val* var252 /* : MVisibility */;
short int var253 /* : Bool */;
static val* varonce254;
val* var255 /* : String */;
char* var256 /* : NativeString */;
long var257 /* : Int */;
val* var258 /* : FlatString */;
static val* varonce259;
val* var260 /* : String */;
char* var261 /* : NativeString */;
long var262 /* : Int */;
val* var263 /* : FlatString */;
val* var264 /* : String */;
static val* varonce265;
val* var266 /* : String */;
char* var267 /* : NativeString */;
long var268 /* : Int */;
val* var269 /* : FlatString */;
val* var270 /* : MClassDef */;
val* var272 /* : MClassDef */;
val* var273 /* : MModule */;
val* var275 /* : MModule */;
static val* varonce276;
val* var277 /* : String */;
char* var278 /* : NativeString */;
long var279 /* : Int */;
val* var280 /* : FlatString */;
val* var281 /* : MClassDef */;
val* var283 /* : MClassDef */;
val* var284 /* : MClass */;
val* var286 /* : MClass */;
val* var287 /* : String */;
val* var289 /* : String */;
static val* varonce290;
val* var291 /* : String */;
char* var292 /* : NativeString */;
long var293 /* : Int */;
val* var294 /* : FlatString */;
val* var295 /* : Array[Object] */;
long var296 /* : Int */;
val* var297 /* : NativeArray[Object] */;
val* var298 /* : String */;
short int var300 /* : Bool */;
static val* varonce301;
val* var302 /* : String */;
char* var303 /* : NativeString */;
long var304 /* : Int */;
val* var305 /* : FlatString */;
val* var306 /* : MClass */;
val* var308 /* : MClass */;
static val* varonce309;
val* var310 /* : String */;
char* var311 /* : NativeString */;
long var312 /* : Int */;
val* var313 /* : FlatString */;
val* var314 /* : String */;
val* var316 /* : String */;
static val* varonce317;
val* var318 /* : String */;
char* var319 /* : NativeString */;
long var320 /* : Int */;
val* var321 /* : FlatString */;
val* var322 /* : Array[Object] */;
long var323 /* : Int */;
val* var324 /* : NativeArray[Object] */;
val* var325 /* : String */;
short int var326 /* : Bool */;
short int var327 /* : Bool */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 352);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = standard___standard__MapRead___has_key(var1, var_mprop);
}
if (var4){
if (varonce) {
var5 = varonce;
} else {
var6 = "Error: A property ";
var7 = 18;
var8 = standard___standard__NativeString___to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
if (varonce9) {
var10 = varonce9;
} else {
var11 = " is already defined in class ";
var12 = 29;
var13 = standard___standard__NativeString___to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var16 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
if (varonce17) {
var18 = varonce17;
} else {
var19 = " at line ";
var20 = 9;
var21 = standard___standard__NativeString___to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
{
{ /* Inline modelize_property#MClassDef#mprop2npropdef (var_mclassdef) on <var_mclassdef:MClassDef> */
var24 = var_mclassdef->attrs[COLOR_nit__modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <var_mclassdef:MClassDef> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 352);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
var25 = ((val* (*)(val* self, val* p0))(var22->class->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var22, var_mprop) /* [] on <var22:Map[MProperty, APropdef]>*/;
}
{
{ /* Inline parser_nodes#ANode#location (var25) on <var25:nullable Object(APropdef)> */
var28 = var25->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var25:nullable Object(APropdef)> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 23);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline location#Location#line_start (var26) on <var26:Location> */
var31 = var26->attrs[COLOR_nit__location__Location___line_start].l; /* _line_start on <var26:Location> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
if (varonce32) {
var33 = varonce32;
} else {
var34 = ".";
var35 = 1;
var36 = standard___standard__NativeString___to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
var37 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var37 = array_instance Array[Object] */
var38 = 7;
var39 = NEW_standard__NativeArray(var38, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var39)->values[0] = (val*) var5;
((struct instance_standard__NativeArray*)var39)->values[1] = (val*) var_mprop;
((struct instance_standard__NativeArray*)var39)->values[2] = (val*) var10;
((struct instance_standard__NativeArray*)var39)->values[3] = (val*) var14;
((struct instance_standard__NativeArray*)var39)->values[4] = (val*) var18;
var40 = BOX_standard__Int(var29); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var39)->values[5] = (val*) var40;
((struct instance_standard__NativeArray*)var39)->values[6] = (val*) var33;
{
((void (*)(val* self, val* p0, long p1))(var37->class->vft[COLOR_standard__array__Array__with_native]))(var37, var39, var38) /* with_native on <var37:Array[Object]>*/;
}
}
{
var41 = ((val* (*)(val* self))(var37->class->vft[COLOR_standard__string__Object__to_s]))(var37) /* to_s on <var37:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, self, var41); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
var42 = 0;
var = var42;
goto RET_LABEL;
} else {
}
/* <var_mprop:MProperty> isa MMethod */
cltype = type_nit__MMethod.color;
idtype = type_nit__MMethod.id;
if(cltype >= var_mprop->type->table_size) {
var44 = 0;
} else {
var44 = var_mprop->type->type_table[cltype] == idtype;
}
var_ = var44;
if (var44){
{
{ /* Inline model#MMethod#is_toplevel (var_mprop) on <var_mprop:MProperty(MMethod)> */
var47 = var_mprop->attrs[COLOR_nit__model__MMethod___is_toplevel].s; /* _is_toplevel on <var_mprop:MProperty(MMethod)> */
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#parent (self) on <self:APropdef> */
var50 = self->attrs[COLOR_nit__parser_nodes__ANode___parent].val; /* _parent on <self:APropdef> */
var48 = var50;
RET_LABEL49:(void)0;
}
}
/* <var48:nullable ANode> isa ATopClassdef */
cltype52 = type_nit__ATopClassdef.color;
idtype53 = type_nit__ATopClassdef.id;
if(var48 == NULL) {
var51 = 0;
} else {
if(cltype52 >= var48->type->table_size) {
var51 = 0;
} else {
var51 = var48->type->type_table[cltype52] == idtype53;
}
}
{
{ /* Inline kernel#Bool#!= (var45,var51) on <var45:Bool> */
var56 = var45 == var51;
var57 = !var56;
var54 = var57;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
var43 = var54;
} else {
var43 = var_;
}
if (var43){
{
{ /* Inline model#MMethod#is_toplevel (var_mprop) on <var_mprop:MProperty(MMethod)> */
var60 = var_mprop->attrs[COLOR_nit__model__MMethod___is_toplevel].s; /* _is_toplevel on <var_mprop:MProperty(MMethod)> */
var58 = var60;
RET_LABEL59:(void)0;
}
}
if (var58){
if (varonce61) {
var62 = varonce61;
} else {
var63 = "Error: ";
var64 = 7;
var65 = standard___standard__NativeString___to_s_with_length(var63, var64);
var62 = var65;
varonce61 = var62;
}
if (varonce66) {
var67 = varonce66;
} else {
var68 = " is a top level method.";
var69 = 23;
var70 = standard___standard__NativeString___to_s_with_length(var68, var69);
var67 = var70;
varonce66 = var67;
}
var71 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var71 = array_instance Array[Object] */
var72 = 3;
var73 = NEW_standard__NativeArray(var72, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var73)->values[0] = (val*) var62;
((struct instance_standard__NativeArray*)var73)->values[1] = (val*) var_mprop;
((struct instance_standard__NativeArray*)var73)->values[2] = (val*) var67;
{
((void (*)(val* self, val* p0, long p1))(var71->class->vft[COLOR_standard__array__Array__with_native]))(var71, var73, var72) /* with_native on <var71:Array[Object]>*/;
}
}
{
var74 = ((val* (*)(val* self))(var71->class->vft[COLOR_standard__string__Object__to_s]))(var71) /* to_s on <var71:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, self, var74); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
if (varonce75) {
var76 = varonce75;
} else {
var77 = "Error: ";
var78 = 7;
var79 = standard___standard__NativeString___to_s_with_length(var77, var78);
var76 = var79;
varonce75 = var76;
}
if (varonce80) {
var81 = varonce80;
} else {
var82 = " is not a top level method.";
var83 = 27;
var84 = standard___standard__NativeString___to_s_with_length(var82, var83);
var81 = var84;
varonce80 = var81;
}
var85 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var85 = array_instance Array[Object] */
var86 = 3;
var87 = NEW_standard__NativeArray(var86, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var87)->values[0] = (val*) var76;
((struct instance_standard__NativeArray*)var87)->values[1] = (val*) var_mprop;
((struct instance_standard__NativeArray*)var87)->values[2] = (val*) var81;
{
((void (*)(val* self, val* p0, long p1))(var85->class->vft[COLOR_standard__array__Array__with_native]))(var85, var87, var86) /* with_native on <var85:Array[Object]>*/;
}
}
{
var88 = ((val* (*)(val* self))(var85->class->vft[COLOR_standard__string__Object__to_s]))(var85) /* to_s on <var85:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, self, var88); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
}
var89 = 0;
var = var89;
goto RET_LABEL;
} else {
}
/* <var_mprop:MProperty> isa MMethod */
cltype92 = type_nit__MMethod.color;
idtype93 = type_nit__MMethod.id;
if(cltype92 >= var_mprop->type->table_size) {
var91 = 0;
} else {
var91 = var_mprop->type->type_table[cltype92] == idtype93;
}
var_94 = var91;
if (var91){
{
{ /* Inline model#MMethod#is_root_init (var_mprop) on <var_mprop:MProperty(MMethod)> */
var97 = var_mprop->attrs[COLOR_nit__model__MMethod___is_root_init].s; /* _is_root_init on <var_mprop:MProperty(MMethod)> */
var95 = var97;
RET_LABEL96:(void)0;
}
}
var90 = var95;
} else {
var90 = var_94;
}
if (var90){
var98 = 1;
var = var98;
goto RET_LABEL;
} else {
}
var99 = NULL;
if (var_kwredef == NULL) {
var100 = 1; /* is null */
} else {
var100 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_kwredef,var99) on <var_kwredef:nullable Token> */
var_other = var99;
{
{ /* Inline kernel#Object#is_same_instance (var_kwredef,var_other) on <var_kwredef:nullable Token(Token)> */
var105 = var_kwredef == var_other;
var103 = var105;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
}
var101 = var103;
goto RET_LABEL102;
RET_LABEL102:(void)0;
}
var100 = var101;
}
if (var100){
if (var_need_redef){
if (varonce106) {
var107 = varonce106;
} else {
var108 = "Redef error: ";
var109 = 13;
var110 = standard___standard__NativeString___to_s_with_length(var108, var109);
var107 = var110;
varonce106 = var107;
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var113 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var113 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var111 = var113;
RET_LABEL112:(void)0;
}
}
if (varonce114) {
var115 = varonce114;
} else {
var116 = "::";
var117 = 2;
var118 = standard___standard__NativeString___to_s_with_length(var116, var117);
var115 = var118;
varonce114 = var115;
}
{
{ /* Inline model#MProperty#name (var_mprop) on <var_mprop:MProperty> */
var121 = var_mprop->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var_mprop:MProperty> */
if (unlikely(var121 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1741);
show_backtrace(1);
}
var119 = var121;
RET_LABEL120:(void)0;
}
}
if (varonce122) {
var123 = varonce122;
} else {
var124 = " is an inherited property. To redefine it, add the redef keyword.";
var125 = 65;
var126 = standard___standard__NativeString___to_s_with_length(var124, var125);
var123 = var126;
varonce122 = var123;
}
var127 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var127 = array_instance Array[Object] */
var128 = 5;
var129 = NEW_standard__NativeArray(var128, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var129)->values[0] = (val*) var107;
((struct instance_standard__NativeArray*)var129)->values[1] = (val*) var111;
((struct instance_standard__NativeArray*)var129)->values[2] = (val*) var115;
((struct instance_standard__NativeArray*)var129)->values[3] = (val*) var119;
((struct instance_standard__NativeArray*)var129)->values[4] = (val*) var123;
{
((void (*)(val* self, val* p0, long p1))(var127->class->vft[COLOR_standard__array__Array__with_native]))(var127, var129, var128) /* with_native on <var127:Array[Object]>*/;
}
}
{
var130 = ((val* (*)(val* self))(var127->class->vft[COLOR_standard__string__Object__to_s]))(var127) /* to_s on <var127:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, self, var130); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
var131 = 0;
var = var131;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MProperty#intro_mclassdef (var_mprop) on <var_mprop:MProperty> */
var135 = var_mprop->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mprop:MProperty> */
if (unlikely(var135 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1736);
show_backtrace(1);
}
var133 = var135;
RET_LABEL134:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var133) on <var133:MClassDef> */
var138 = var133->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var133:MClassDef> */
if (unlikely(var138 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var136 = var138;
RET_LABEL137:(void)0;
}
}
{
{ /* Inline mmodule#MModule#mgroup (var136) on <var136:MModule> */
var141 = var136->attrs[COLOR_nit__mmodule__MModule___mgroup].val; /* _mgroup on <var136:MModule> */
var139 = var141;
RET_LABEL140:(void)0;
}
}
var142 = NULL;
if (var139 == NULL) {
var143 = 0; /* is null */
} else {
var143 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var139,var142) on <var139:nullable MGroup> */
var_other146 = var142;
{
var147 = ((short int (*)(val* self, val* p0))(var139->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var139, var_other146) /* == on <var139:nullable MGroup(MGroup)>*/;
}
var148 = !var147;
var144 = var148;
goto RET_LABEL145;
RET_LABEL145:(void)0;
}
var143 = var144;
}
var_149 = var143;
if (var143){
{
{ /* Inline model#MProperty#visibility (var_mprop) on <var_mprop:MProperty> */
var152 = var_mprop->attrs[COLOR_nit__model__MProperty___visibility].val; /* _visibility on <var_mprop:MProperty> */
if (unlikely(var152 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1757);
show_backtrace(1);
}
var150 = var152;
RET_LABEL151:(void)0;
}
}
{
var153 = nit__model_base___standard__Object___protected_visibility(self);
}
{
var154 = standard___standard__Comparable____62d_61d(var150, var153);
}
var132 = var154;
} else {
var132 = var_149;
}
if (var132){
{
{ /* Inline modelbuilder_base#ModelBuilder#model (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var157 = var_modelbuilder->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___model].val; /* _model on <var_modelbuilder:ModelBuilder> */
if (unlikely(var157 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 44);
show_backtrace(1);
}
var155 = var157;
RET_LABEL156:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var_mprop) on <var_mprop:MProperty> */
var160 = var_mprop->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var_mprop:MProperty> */
if (unlikely(var160 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1741);
show_backtrace(1);
}
var158 = var160;
RET_LABEL159:(void)0;
}
}
{
var161 = nit__model___Model___get_mproperties_by_name(var155, var158);
}
var_others = var161;
var162 = NULL;
if (var_others == NULL) {
var163 = 0; /* is null */
} else {
var163 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_others,var162) on <var_others:nullable Array[MProperty]> */
var_other146 = var162;
{
var166 = ((short int (*)(val* self, val* p0))(var_others->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_others, var_other146) /* == on <var_others:nullable Array[MProperty](Array[MProperty])>*/;
}
var167 = !var166;
var164 = var167;
goto RET_LABEL165;
RET_LABEL165:(void)0;
}
var163 = var164;
}
if (var163){
var_168 = var_others;
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
var_other173 = var172;
{
{ /* Inline kernel#Object#!= (var_other173,var_mprop) on <var_other173:MProperty> */
var_other146 = var_mprop;
{
var180 = ((short int (*)(val* self, val* p0))(var_other173->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_other173, var_other146) /* == on <var_other173:MProperty>*/;
}
var181 = !var180;
var178 = var181;
goto RET_LABEL179;
RET_LABEL179:(void)0;
}
}
var_182 = var178;
if (var178){
{
{ /* Inline model#MProperty#intro_mclassdef (var_other173) on <var_other173:MProperty> */
var185 = var_other173->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_other173:MProperty> */
if (unlikely(var185 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1736);
show_backtrace(1);
}
var183 = var185;
RET_LABEL184:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var183) on <var183:MClassDef> */
var188 = var183->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var183:MClassDef> */
if (unlikely(var188 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var186 = var188;
RET_LABEL187:(void)0;
}
}
{
{ /* Inline mmodule#MModule#mgroup (var186) on <var186:MModule> */
var191 = var186->attrs[COLOR_nit__mmodule__MModule___mgroup].val; /* _mgroup on <var186:MModule> */
var189 = var191;
RET_LABEL190:(void)0;
}
}
var192 = NULL;
if (var189 == NULL) {
var193 = 0; /* is null */
} else {
var193 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var189,var192) on <var189:nullable MGroup> */
var_other146 = var192;
{
var196 = ((short int (*)(val* self, val* p0))(var189->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var189, var_other146) /* == on <var189:nullable MGroup(MGroup)>*/;
}
var197 = !var196;
var194 = var197;
goto RET_LABEL195;
RET_LABEL195:(void)0;
}
var193 = var194;
}
var177 = var193;
} else {
var177 = var_182;
}
var_198 = var177;
if (var177){
{
{ /* Inline model#MProperty#intro_mclassdef (var_other173) on <var_other173:MProperty> */
var201 = var_other173->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_other173:MProperty> */
if (unlikely(var201 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1736);
show_backtrace(1);
}
var199 = var201;
RET_LABEL200:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var199) on <var199:MClassDef> */
var204 = var199->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var199:MClassDef> */
if (unlikely(var204 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var202 = var204;
RET_LABEL203:(void)0;
}
}
{
{ /* Inline mmodule#MModule#mgroup (var202) on <var202:MModule> */
var207 = var202->attrs[COLOR_nit__mmodule__MModule___mgroup].val; /* _mgroup on <var202:MModule> */
var205 = var207;
RET_LABEL206:(void)0;
}
}
if (var205 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 494);
show_backtrace(1);
} else {
{ /* Inline mproject#MGroup#mproject (var205) on <var205:nullable MGroup> */
if (unlikely(var205 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 69);
show_backtrace(1);
}
var210 = var205->attrs[COLOR_nit__mproject__MGroup___mproject].val; /* _mproject on <var205:nullable MGroup> */
if (unlikely(var210 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproject");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 69);
show_backtrace(1);
}
var208 = var210;
RET_LABEL209:(void)0;
}
}
{
{ /* Inline model#MProperty#intro_mclassdef (var_mprop) on <var_mprop:MProperty> */
var213 = var_mprop->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mprop:MProperty> */
if (unlikely(var213 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1736);
show_backtrace(1);
}
var211 = var213;
RET_LABEL212:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var211) on <var211:MClassDef> */
var216 = var211->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var211:MClassDef> */
if (unlikely(var216 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var214 = var216;
RET_LABEL215:(void)0;
}
}
{
{ /* Inline mmodule#MModule#mgroup (var214) on <var214:MModule> */
var219 = var214->attrs[COLOR_nit__mmodule__MModule___mgroup].val; /* _mgroup on <var214:MModule> */
var217 = var219;
RET_LABEL218:(void)0;
}
}
if (var217 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 494);
show_backtrace(1);
} else {
{ /* Inline mproject#MGroup#mproject (var217) on <var217:nullable MGroup> */
if (unlikely(var217 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 69);
show_backtrace(1);
}
var222 = var217->attrs[COLOR_nit__mproject__MGroup___mproject].val; /* _mproject on <var217:nullable MGroup> */
if (unlikely(var222 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproject");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mproject, 69);
show_backtrace(1);
}
var220 = var222;
RET_LABEL221:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var208,var220) on <var208:MProject> */
var_other = var220;
{
{ /* Inline kernel#Object#is_same_instance (var208,var_other) on <var208:MProject> */
var227 = var208 == var_other;
var225 = var227;
goto RET_LABEL226;
RET_LABEL226:(void)0;
}
}
var223 = var225;
goto RET_LABEL224;
RET_LABEL224:(void)0;
}
}
var176 = var223;
} else {
var176 = var_198;
}
var_228 = var176;
if (var176){
{
{ /* Inline model#MProperty#intro_mclassdef (var_other173) on <var_other173:MProperty> */
var231 = var_other173->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_other173:MProperty> */
if (unlikely(var231 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1736);
show_backtrace(1);
}
var229 = var231;
RET_LABEL230:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var229) on <var229:MClassDef> */
var234 = var229->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var229:MClassDef> */
if (unlikely(var234 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var232 = var234;
RET_LABEL233:(void)0;
}
}
{
{ /* Inline model#MClass#name (var232) on <var232:MClass> */
var237 = var232->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var232:MClass> */
if (unlikely(var237 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var235 = var237;
RET_LABEL236:(void)0;
}
}
{
{ /* Inline model#MProperty#intro_mclassdef (var_mprop) on <var_mprop:MProperty> */
var240 = var_mprop->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mprop:MProperty> */
if (unlikely(var240 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1736);
show_backtrace(1);
}
var238 = var240;
RET_LABEL239:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var238) on <var238:MClassDef> */
var243 = var238->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var238:MClassDef> */
if (unlikely(var243 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var241 = var243;
RET_LABEL242:(void)0;
}
}
{
{ /* Inline model#MClass#name (var241) on <var241:MClass> */
var246 = var241->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var241:MClass> */
if (unlikely(var246 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var244 = var246;
RET_LABEL245:(void)0;
}
}
{
var247 = ((short int (*)(val* self, val* p0))(var235->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var235, var244) /* == on <var235:String>*/;
}
var175 = var247;
} else {
var175 = var_228;
}
var_248 = var175;
if (var175){
{
{ /* Inline model#MProperty#visibility (var_other173) on <var_other173:MProperty> */
var251 = var_other173->attrs[COLOR_nit__model__MProperty___visibility].val; /* _visibility on <var_other173:MProperty> */
if (unlikely(var251 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1757);
show_backtrace(1);
}
var249 = var251;
RET_LABEL250:(void)0;
}
}
{
var252 = nit__model_base___standard__Object___protected_visibility(self);
}
{
var253 = standard___standard__Comparable____62d_61d(var249, var252);
}
var174 = var253;
} else {
var174 = var_248;
}
if (var174){
if (varonce254) {
var255 = varonce254;
} else {
var256 = "full-name-conflict";
var257 = 18;
var258 = standard___standard__NativeString___to_s_with_length(var256, var257);
var255 = var258;
varonce254 = var255;
}
if (varonce259) {
var260 = varonce259;
} else {
var261 = "Warning: A property named `";
var262 = 27;
var263 = standard___standard__NativeString___to_s_with_length(var261, var262);
var260 = var263;
varonce259 = var260;
}
{
var264 = nit___nit__MProperty___nit__model_base__MEntity__full_name(var_other173);
}
if (varonce265) {
var266 = varonce265;
} else {
var267 = "` is already defined in module `";
var268 = 32;
var269 = standard___standard__NativeString___to_s_with_length(var267, var268);
var266 = var269;
varonce265 = var266;
}
{
{ /* Inline model#MProperty#intro_mclassdef (var_other173) on <var_other173:MProperty> */
var272 = var_other173->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_other173:MProperty> */
if (unlikely(var272 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1736);
show_backtrace(1);
}
var270 = var272;
RET_LABEL271:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var270) on <var270:MClassDef> */
var275 = var270->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var270:MClassDef> */
if (unlikely(var275 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var273 = var275;
RET_LABEL274:(void)0;
}
}
if (varonce276) {
var277 = varonce276;
} else {
var278 = "` for the class `";
var279 = 17;
var280 = standard___standard__NativeString___to_s_with_length(var278, var279);
var277 = var280;
varonce276 = var277;
}
{
{ /* Inline model#MProperty#intro_mclassdef (var_other173) on <var_other173:MProperty> */
var283 = var_other173->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_other173:MProperty> */
if (unlikely(var283 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1736);
show_backtrace(1);
}
var281 = var283;
RET_LABEL282:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var281) on <var281:MClassDef> */
var286 = var281->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var281:MClassDef> */
if (unlikely(var286 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var284 = var286;
RET_LABEL285:(void)0;
}
}
{
{ /* Inline model#MClass#name (var284) on <var284:MClass> */
var289 = var284->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var284:MClass> */
if (unlikely(var289 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var287 = var289;
RET_LABEL288:(void)0;
}
}
if (varonce290) {
var291 = varonce290;
} else {
var292 = "`.";
var293 = 2;
var294 = standard___standard__NativeString___to_s_with_length(var292, var293);
var291 = var294;
varonce290 = var291;
}
var295 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var295 = array_instance Array[Object] */
var296 = 7;
var297 = NEW_standard__NativeArray(var296, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var297)->values[0] = (val*) var260;
((struct instance_standard__NativeArray*)var297)->values[1] = (val*) var264;
((struct instance_standard__NativeArray*)var297)->values[2] = (val*) var266;
((struct instance_standard__NativeArray*)var297)->values[3] = (val*) var273;
((struct instance_standard__NativeArray*)var297)->values[4] = (val*) var277;
((struct instance_standard__NativeArray*)var297)->values[5] = (val*) var287;
((struct instance_standard__NativeArray*)var297)->values[6] = (val*) var291;
{
((void (*)(val* self, val* p0, long p1))(var295->class->vft[COLOR_standard__array__Array__with_native]))(var295, var297, var296) /* with_native on <var295:Array[Object]>*/;
}
}
{
var298 = ((val* (*)(val* self))(var295->class->vft[COLOR_standard__string__Object__to_s]))(var295) /* to_s on <var295:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___advice(var_modelbuilder, self, var255, var298); /* Direct call modelbuilder_base#ModelBuilder#advice on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label;
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_170); /* Direct call array#ArrayIterator#next on <var_170:ArrayIterator[MProperty]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_170) on <var_170:ArrayIterator[MProperty]> */
RET_LABEL299:(void)0;
}
}
} else {
}
} else {
}
} else {
var300 = !var_need_redef;
if (var300){
if (varonce301) {
var302 = varonce301;
} else {
var303 = "Error: No property ";
var304 = 19;
var305 = standard___standard__NativeString___to_s_with_length(var303, var304);
var302 = var305;
varonce301 = var302;
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var308 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var308 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var306 = var308;
RET_LABEL307:(void)0;
}
}
if (varonce309) {
var310 = varonce309;
} else {
var311 = "::";
var312 = 2;
var313 = standard___standard__NativeString___to_s_with_length(var311, var312);
var310 = var313;
varonce309 = var310;
}
{
{ /* Inline model#MProperty#name (var_mprop) on <var_mprop:MProperty> */
var316 = var_mprop->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var_mprop:MProperty> */
if (unlikely(var316 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1741);
show_backtrace(1);
}
var314 = var316;
RET_LABEL315:(void)0;
}
}
if (varonce317) {
var318 = varonce317;
} else {
var319 = " is inherited. Remove the redef keyword to define a new property.";
var320 = 65;
var321 = standard___standard__NativeString___to_s_with_length(var319, var320);
var318 = var321;
varonce317 = var318;
}
var322 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var322 = array_instance Array[Object] */
var323 = 5;
var324 = NEW_standard__NativeArray(var323, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var324)->values[0] = (val*) var302;
((struct instance_standard__NativeArray*)var324)->values[1] = (val*) var306;
((struct instance_standard__NativeArray*)var324)->values[2] = (val*) var310;
((struct instance_standard__NativeArray*)var324)->values[3] = (val*) var314;
((struct instance_standard__NativeArray*)var324)->values[4] = (val*) var318;
{
((void (*)(val* self, val* p0, long p1))(var322->class->vft[COLOR_standard__array__Array__with_native]))(var322, var324, var323) /* with_native on <var322:Array[Object]>*/;
}
}
{
var325 = ((val* (*)(val* self))(var322->class->vft[COLOR_standard__string__Object__to_s]))(var322) /* to_s on <var322:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, self, var325); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
var326 = 0;
var = var326;
goto RET_LABEL;
} else {
}
}
var327 = 1;
var = var327;
goto RET_LABEL;
RET_LABEL:;
return var;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 514);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 517);
show_backtrace(1);
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
val* var24 /* : null */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var31 /* : null */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
val* var_other35 /* var other: nullable Object */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
long var40 /* : Int */;
long var_i /* var i: Int */;
long var41 /* : Int */;
long var43 /* : Int */;
long var44 /* : Int */;
long var46 /* : Int */;
long var47 /* : Int */;
short int var49 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var50 /* : Int */;
long var_51 /* var : Int */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
int cltype55;
int idtype56;
const char* var_class_name57;
short int var58 /* : Bool */;
long var59 /* : Int */;
long var60 /* : Int */;
val* var61 /* : nullable TDotdotdot */;
val* var63 /* : nullable TDotdotdot */;
val* var64 /* : null */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
long var70 /* : Int */;
long var72 /* : Int */;
long var73 /* : Int */;
long var74 /* : Int */;
long var76 /* : Int */;
short int var77 /* : Bool */;
short int var79 /* : Bool */;
short int var80 /* : Bool */;
static val* varonce;
val* var81 /* : String */;
char* var82 /* : NativeString */;
long var83 /* : Int */;
val* var84 /* : FlatString */;
long var85 /* : Int */;
long var87 /* : Int */;
val* var88 /* : nullable Object */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
long var92 /* : Int */;
val* var93 /* : FlatString */;
val* var94 /* : Array[Object] */;
long var95 /* : Int */;
val* var96 /* : NativeArray[Object] */;
val* var97 /* : String */;
short int var98 /* : Bool */;
long var99 /* : Int */;
long var101 /* : Int */;
long var102 /* : Int */;
long var103 /* : Int */;
short int var105 /* : Bool */;
int cltype106;
int idtype107;
const char* var_class_name108;
long var109 /* : Int */;
val* var113 /* : nullable AType */;
val* var115 /* : nullable AType */;
val* var_ntype116 /* var ntype: nullable AType */;
val* var117 /* : null */;
short int var118 /* : Bool */;
short int var119 /* : Bool */;
short int var121 /* : Bool */;
short int var122 /* : Bool */;
val* var123 /* : nullable MType */;
val* var125 /* : nullable MType */;
val* var127 /* : nullable MType */;
val* var128 /* : null */;
short int var129 /* : Bool */;
short int var130 /* : Bool */;
short int var132 /* : Bool */;
short int var134 /* : Bool */;
short int var135 /* : Bool */;
short int var136 /* : Bool */;
short int var138 /* : Bool */;
var_modelbuilder = p0;
var_mclassdef = p1;
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var3 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 514);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 517);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1506);
show_backtrace(1);
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
var15 = ((short int (*)(val* self))(var_14->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_14) /* is_ok on <var_14:Iterator[AParam]>*/;
}
if (var15){
{
var16 = ((val* (*)(val* self))(var_14->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_14) /* item on <var_14:Iterator[AParam]>*/;
}
var_np = var16;
{
{ /* Inline parser_nodes#AParam#n_id (var_np) on <var_np:AParam> */
var19 = var_np->attrs[COLOR_nit__parser_nodes__AParam___n_id].val; /* _n_id on <var_np:AParam> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1520);
show_backtrace(1);
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
var24 = NULL;
if (var_ntype == NULL) {
var25 = 0; /* is null */
} else {
var25 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ntype,var24) on <var_ntype:nullable AType> */
var_other = var24;
{
var28 = ((short int (*)(val* self, val* p0))(var_ntype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ntype, var_other) /* == on <var_ntype:nullable AType(AType)>*/;
}
var29 = !var28;
var26 = var29;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
var25 = var26;
}
if (var25){
{
var30 = nit__modelize_class___ModelBuilder___resolve_mtype(var_modelbuilder, var_mmodule, var_mclassdef, var_ntype);
}
var_mtype = var30;
var31 = NULL;
if (var_mtype == NULL) {
var32 = 1; /* is null */
} else {
var32 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var31) on <var_mtype:nullable MType> */
var_other35 = var31;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other35) on <var_mtype:nullable MType(MType)> */
var38 = var_mtype == var_other35;
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var33 = var36;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
var32 = var33;
}
if (var32){
var39 = 0;
var = var39;
goto RET_LABEL;
} else {
}
var40 = 0;
var_i = var40;
{
{ /* Inline array#AbstractArrayRead#length (var_param_names) on <var_param_names:Array[String]> */
var43 = var_param_names->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_param_names:Array[String]> */
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var_param_types) on <var_param_types:Array[MType]> */
var46 = var_param_types->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_param_types:Array[MType]> */
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var41,var44) on <var41:Int> */
/* Covariant cast for argument 0 (i) <var44:Int> isa OTHER */
/* <var44:Int> isa OTHER */
var49 = 1; /* easy <var44:Int> isa OTHER*/
if (unlikely(!var49)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var50 = var41 - var44;
var47 = var50;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
var_51 = var47;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_51) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_51:Int> isa OTHER */
/* <var_51:Int> isa OTHER */
var54 = 1; /* easy <var_51:Int> isa OTHER*/
if (unlikely(!var54)) {
var_class_name57 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name57);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var58 = var_i < var_51;
var52 = var58;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
if (var52){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_param_types, var_mtype); /* Direct call array#Array#add on <var_param_types:Array[MType]>*/
}
var59 = 1;
{
var60 = standard___standard__Int___Discrete__successor(var_i, var59);
}
var_i = var60;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline parser_nodes#AParam#n_dotdotdot (var_np) on <var_np:AParam> */
var63 = var_np->attrs[COLOR_nit__parser_nodes__AParam___n_dotdotdot].val; /* _n_dotdotdot on <var_np:AParam> */
var61 = var63;
RET_LABEL62:(void)0;
}
}
var64 = NULL;
if (var61 == NULL) {
var65 = 0; /* is null */
} else {
var65 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var61,var64) on <var61:nullable TDotdotdot> */
var_other = var64;
{
var68 = ((short int (*)(val* self, val* p0))(var61->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var61, var_other) /* == on <var61:nullable TDotdotdot(TDotdotdot)>*/;
}
var69 = !var68;
var66 = var69;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
var65 = var66;
}
if (var65){
{
{ /* Inline modelize_property#ASignature#vararg_rank (self) on <self:ASignature> */
var72 = self->attrs[COLOR_nit__modelize_property__ASignature___vararg_rank].l; /* _vararg_rank on <self:ASignature> */
var70 = var72;
RET_LABEL71:(void)0;
}
}
var73 = 1;
{
{ /* Inline kernel#Int#unary - (var73) on <var73:Int> */
var76 = -var73;
var74 = var76;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var70,var74) on <var70:Int> */
var79 = var70 == var74;
var80 = !var79;
var77 = var80;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
}
if (var77){
if (varonce) {
var81 = varonce;
} else {
var82 = "Error: ";
var83 = 7;
var84 = standard___standard__NativeString___to_s_with_length(var82, var83);
var81 = var84;
varonce = var81;
}
{
{ /* Inline modelize_property#ASignature#vararg_rank (self) on <self:ASignature> */
var87 = self->attrs[COLOR_nit__modelize_property__ASignature___vararg_rank].l; /* _vararg_rank on <self:ASignature> */
var85 = var87;
RET_LABEL86:(void)0;
}
}
{
var88 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_param_names, var85);
}
if (varonce89) {
var90 = varonce89;
} else {
var91 = " is already a vararg";
var92 = 20;
var93 = standard___standard__NativeString___to_s_with_length(var91, var92);
var90 = var93;
varonce89 = var90;
}
var94 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var94 = array_instance Array[Object] */
var95 = 3;
var96 = NEW_standard__NativeArray(var95, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var96)->values[0] = (val*) var81;
((struct instance_standard__NativeArray*)var96)->values[1] = (val*) var88;
((struct instance_standard__NativeArray*)var96)->values[2] = (val*) var90;
{
((void (*)(val* self, val* p0, long p1))(var94->class->vft[COLOR_standard__array__Array__with_native]))(var94, var96, var95) /* with_native on <var94:Array[Object]>*/;
}
}
{
var97 = ((val* (*)(val* self))(var94->class->vft[COLOR_standard__string__Object__to_s]))(var94) /* to_s on <var94:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, var_np, var97); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
var98 = 0;
var = var98;
goto RET_LABEL;
} else {
{
{ /* Inline array#AbstractArrayRead#length (var_param_names) on <var_param_names:Array[String]> */
var101 = var_param_names->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_param_names:Array[String]> */
var99 = var101;
RET_LABEL100:(void)0;
}
}
var102 = 1;
{
{ /* Inline kernel#Int#- (var99,var102) on <var99:Int> */
/* Covariant cast for argument 0 (i) <var102:Int> isa OTHER */
/* <var102:Int> isa OTHER */
var105 = 1; /* easy <var102:Int> isa OTHER*/
if (unlikely(!var105)) {
var_class_name108 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name108);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var109 = var99 - var102;
var103 = var109;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
}
{
{ /* Inline modelize_property#ASignature#vararg_rank= (self,var103) on <self:ASignature> */
self->attrs[COLOR_nit__modelize_property__ASignature___vararg_rank].l = var103; /* _vararg_rank on <self:ASignature> */
RET_LABEL110:(void)0;
}
}
}
} else {
}
} else {
}
{
((void (*)(val* self))(var_14->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_14) /* next on <var_14:Iterator[AParam]>*/;
}
} else {
goto BREAK_label111;
}
}
BREAK_label111: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_14) on <var_14:Iterator[AParam]> */
RET_LABEL112:(void)0;
}
}
{
{ /* Inline parser_nodes#ASignature#n_type (self) on <self:ASignature> */
var115 = self->attrs[COLOR_nit__parser_nodes__ASignature___n_type].val; /* _n_type on <self:ASignature> */
var113 = var115;
RET_LABEL114:(void)0;
}
}
var_ntype116 = var113;
var117 = NULL;
if (var_ntype116 == NULL) {
var118 = 0; /* is null */
} else {
var118 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ntype116,var117) on <var_ntype116:nullable AType> */
var_other = var117;
{
var121 = ((short int (*)(val* self, val* p0))(var_ntype116->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ntype116, var_other) /* == on <var_ntype116:nullable AType(AType)>*/;
}
var122 = !var121;
var119 = var122;
goto RET_LABEL120;
RET_LABEL120:(void)0;
}
var118 = var119;
}
if (var118){
{
var123 = nit__modelize_class___ModelBuilder___resolve_mtype(var_modelbuilder, var_mmodule, var_mclassdef, var_ntype116);
}
{
{ /* Inline modelize_property#ASignature#ret_type= (self,var123) on <self:ASignature> */
self->attrs[COLOR_nit__modelize_property__ASignature___ret_type].val = var123; /* _ret_type on <self:ASignature> */
RET_LABEL124:(void)0;
}
}
{
{ /* Inline modelize_property#ASignature#ret_type (self) on <self:ASignature> */
var127 = self->attrs[COLOR_nit__modelize_property__ASignature___ret_type].val; /* _ret_type on <self:ASignature> */
var125 = var127;
RET_LABEL126:(void)0;
}
}
var128 = NULL;
if (var125 == NULL) {
var129 = 1; /* is null */
} else {
var129 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var125,var128) on <var125:nullable MType> */
var_other35 = var128;
{
{ /* Inline kernel#Object#is_same_instance (var125,var_other35) on <var125:nullable MType(MType)> */
var134 = var125 == var_other35;
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
var135 = 0;
var = var135;
goto RET_LABEL;
} else {
}
} else {
}
var136 = 1;
{
{ /* Inline modelize_property#ASignature#is_visited= (self,var136) on <self:ASignature> */
self->attrs[COLOR_nit__modelize_property__ASignature___is_visited].s = var136; /* _is_visited on <self:ASignature> */
RET_LABEL137:(void)0;
}
}
var138 = 1;
var = var138;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#AParam#mparameter= for (self: AParam, nullable MParameter) */
void nit__modelize_property___AParam___mparameter_61d(val* self, val* p0) {
self->attrs[COLOR_nit__modelize_property__AParam___mparameter].val = p0; /* _mparameter on <self:AParam> */
RET_LABEL:;
}
/* method modelize_property#AMethPropdef#look_like_a_root_init for (self: AMethPropdef, ModelBuilder, MClassDef): Bool */
short int nit__modelize_property___AMethPropdef___look_like_a_root_init(val* self, val* p0, val* p1) {
short int var /* : Bool */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var1 /* : nullable TKwinit */;
val* var3 /* : nullable TKwinit */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : nullable AMethid */;
val* var14 /* : nullable AMethid */;
val* var15 /* : null */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var_other19 /* var other: nullable Object */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
static val* varonce;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : FlatString */;
val* var27 /* : nullable AAnnotation */;
val* var28 /* : null */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
val* var35 /* : nullable ANode */;
val* var37 /* : nullable ANode */;
val* var38 /* : nullable ANode */;
val* var40 /* : nullable ANode */;
short int var41 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_amod /* var amod: AModule */;
val* var42 /* : nullable AModuledecl */;
val* var44 /* : nullable AModuledecl */;
val* var_amoddecl /* var amoddecl: nullable AModuledecl */;
val* var45 /* : null */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : FlatString */;
val* var56 /* : nullable AAnnotation */;
val* var_old /* var old: nullable AAnnotation */;
val* var57 /* : null */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
val* var64 /* : nullable ASignature */;
val* var66 /* : nullable ASignature */;
val* var67 /* : ANodes[AParam] */;
val* var69 /* : ANodes[AParam] */;
long var70 /* : Int */;
long var71 /* : Int */;
short int var72 /* : Bool */;
short int var74 /* : Bool */;
int cltype75;
int idtype76;
const char* var_class_name77;
short int var78 /* : Bool */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
long var82 /* : Int */;
val* var83 /* : FlatString */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : NativeString */;
long var87 /* : Int */;
val* var88 /* : FlatString */;
val* var89 /* : Array[Object] */;
long var90 /* : Int */;
val* var91 /* : NativeArray[Object] */;
val* var92 /* : String */;
short int var93 /* : Bool */;
val* var94 /* : nullable AVisibility */;
val* var96 /* : nullable AVisibility */;
short int var97 /* : Bool */;
int cltype98;
int idtype99;
short int var100 /* : Bool */;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : NativeString */;
long var104 /* : Int */;
val* var105 /* : FlatString */;
static val* varonce106;
val* var107 /* : String */;
char* var108 /* : NativeString */;
long var109 /* : Int */;
val* var110 /* : FlatString */;
val* var111 /* : Array[Object] */;
long var112 /* : Int */;
val* var113 /* : NativeArray[Object] */;
val* var114 /* : String */;
short int var115 /* : Bool */;
short int var116 /* : Bool */;
var_modelbuilder = p0;
var_mclassdef = p1;
{
{ /* Inline parser_nodes#AMethPropdef#n_kwinit (self) on <self:AMethPropdef> */
var3 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwinit].val; /* _n_kwinit on <self:AMethPropdef> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = NULL;
if (var1 == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var1,var4) on <var1:nullable TKwinit> */
var_other = var4;
{
{ /* Inline kernel#Object#is_same_instance (var1,var_other) on <var1:nullable TKwinit(TKwinit)> */
var10 = var1 == var_other;
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
var11 = 0;
var = var11;
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AMethPropdef#n_methid (self) on <self:AMethPropdef> */
var14 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
var15 = NULL;
if (var12 == NULL) {
var16 = 0; /* is null */
} else {
var16 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var12,var15) on <var12:nullable AMethid> */
var_other19 = var15;
{
var20 = ((short int (*)(val* self, val* p0))(var12->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var12, var_other19) /* == on <var12:nullable AMethid(AMethid)>*/;
}
var21 = !var20;
var17 = var21;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var16 = var17;
}
if (var16){
var22 = 0;
var = var22;
goto RET_LABEL;
} else {
}
if (varonce) {
var23 = varonce;
} else {
var24 = "old_style_init";
var25 = 14;
var26 = standard___standard__NativeString___to_s_with_length(var24, var25);
var23 = var26;
varonce = var23;
}
{
var27 = nit__annotation___Prod___get_single_annotation(self, var23, var_modelbuilder);
}
var28 = NULL;
if (var27 == NULL) {
var29 = 0; /* is null */
} else {
var29 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var27,var28) on <var27:nullable AAnnotation> */
var_other19 = var28;
{
var32 = ((short int (*)(val* self, val* p0))(var27->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var27, var_other19) /* == on <var27:nullable AAnnotation(AAnnotation)>*/;
}
var33 = !var32;
var30 = var33;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
var29 = var30;
}
if (var29){
var34 = 0;
var = var34;
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ANode#parent (self) on <self:AMethPropdef> */
var37 = self->attrs[COLOR_nit__parser_nodes__ANode___parent].val; /* _parent on <self:AMethPropdef> */
var35 = var37;
RET_LABEL36:(void)0;
}
}
if (var35 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 601);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent (var35) on <var35:nullable ANode> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 36);
show_backtrace(1);
}
var40 = var35->attrs[COLOR_nit__parser_nodes__ANode___parent].val; /* _parent on <var35:nullable ANode> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
/* <var38:nullable ANode> isa AModule */
cltype = type_nit__AModule.color;
idtype = type_nit__AModule.id;
if(var38 == NULL) {
var41 = 0;
} else {
if(cltype >= var38->type->table_size) {
var41 = 0;
} else {
var41 = var38->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var41)) {
var_class_name = var38 == NULL ? "null" : var38->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AModule", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 601);
show_backtrace(1);
}
var_amod = var38;
{
{ /* Inline parser_nodes#AModule#n_moduledecl (var_amod) on <var_amod:AModule> */
var44 = var_amod->attrs[COLOR_nit__parser_nodes__AModule___n_moduledecl].val; /* _n_moduledecl on <var_amod:AModule> */
var42 = var44;
RET_LABEL43:(void)0;
}
}
var_amoddecl = var42;
var45 = NULL;
if (var_amoddecl == NULL) {
var46 = 0; /* is null */
} else {
var46 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_amoddecl,var45) on <var_amoddecl:nullable AModuledecl> */
var_other19 = var45;
{
var49 = ((short int (*)(val* self, val* p0))(var_amoddecl->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_amoddecl, var_other19) /* == on <var_amoddecl:nullable AModuledecl(AModuledecl)>*/;
}
var50 = !var49;
var47 = var50;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
var46 = var47;
}
if (var46){
if (varonce51) {
var52 = varonce51;
} else {
var53 = "old_style_init";
var54 = 14;
var55 = standard___standard__NativeString___to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
{
var56 = nit__annotation___Prod___get_single_annotation(var_amoddecl, var52, var_modelbuilder);
}
var_old = var56;
var57 = NULL;
if (var_old == NULL) {
var58 = 0; /* is null */
} else {
var58 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_old,var57) on <var_old:nullable AAnnotation> */
var_other19 = var57;
{
var61 = ((short int (*)(val* self, val* p0))(var_old->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_old, var_other19) /* == on <var_old:nullable AAnnotation(AAnnotation)>*/;
}
var62 = !var61;
var59 = var62;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
var58 = var59;
}
if (var58){
var63 = 0;
var = var63;
goto RET_LABEL;
} else {
}
} else {
}
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (self) on <self:AMethPropdef> */
var66 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var64 = var66;
RET_LABEL65:(void)0;
}
}
if (var64 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 608);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var64) on <var64:nullable ASignature> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1506);
show_backtrace(1);
}
var69 = var64->attrs[COLOR_nit__parser_nodes__ASignature___n_params].val; /* _n_params on <var64:nullable ASignature> */
if (unlikely(var69 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1506);
show_backtrace(1);
}
var67 = var69;
RET_LABEL68:(void)0;
}
}
{
var70 = nit___nit__ANodes___standard__abstract_collection__Collection__length(var67);
}
var71 = 0;
{
{ /* Inline kernel#Int#> (var70,var71) on <var70:Int> */
/* Covariant cast for argument 0 (i) <var71:Int> isa OTHER */
/* <var71:Int> isa OTHER */
var74 = 1; /* easy <var71:Int> isa OTHER*/
if (unlikely(!var74)) {
var_class_name77 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name77);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var78 = var70 > var71;
var72 = var78;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
}
if (var72){
if (varonce79) {
var80 = varonce79;
} else {
var81 = "old-init";
var82 = 8;
var83 = standard___standard__NativeString___to_s_with_length(var81, var82);
var80 = var83;
varonce79 = var80;
}
if (varonce84) {
var85 = varonce84;
} else {
var86 = "Warning: init with signature in ";
var87 = 32;
var88 = standard___standard__NativeString___to_s_with_length(var86, var87);
var85 = var88;
varonce84 = var85;
}
var89 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var89 = array_instance Array[Object] */
var90 = 2;
var91 = NEW_standard__NativeArray(var90, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var91)->values[0] = (val*) var85;
((struct instance_standard__NativeArray*)var91)->values[1] = (val*) var_mclassdef;
{
((void (*)(val* self, val* p0, long p1))(var89->class->vft[COLOR_standard__array__Array__with_native]))(var89, var91, var90) /* with_native on <var89:Array[Object]>*/;
}
}
{
var92 = ((val* (*)(val* self))(var89->class->vft[COLOR_standard__string__Object__to_s]))(var89) /* to_s on <var89:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___advice(var_modelbuilder, self, var80, var92); /* Direct call modelbuilder_base#ModelBuilder#advice on <var_modelbuilder:ModelBuilder>*/
}
var93 = 0;
var = var93;
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ADefinition#n_visibility (self) on <self:AMethPropdef> */
var96 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AMethPropdef> */
var94 = var96;
RET_LABEL95:(void)0;
}
}
/* <var94:nullable AVisibility> isa APublicVisibility */
cltype98 = type_nit__APublicVisibility.color;
idtype99 = type_nit__APublicVisibility.id;
if(var94 == NULL) {
var97 = 0;
} else {
if(cltype98 >= var94->type->table_size) {
var97 = 0;
} else {
var97 = var94->type->type_table[cltype98] == idtype99;
}
}
var100 = !var97;
if (var100){
if (varonce101) {
var102 = varonce101;
} else {
var103 = "old-init";
var104 = 8;
var105 = standard___standard__NativeString___to_s_with_length(var103, var104);
var102 = var105;
varonce101 = var102;
}
if (varonce106) {
var107 = varonce106;
} else {
var108 = "Warning: non-public init in ";
var109 = 28;
var110 = standard___standard__NativeString___to_s_with_length(var108, var109);
var107 = var110;
varonce106 = var107;
}
var111 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var111 = array_instance Array[Object] */
var112 = 2;
var113 = NEW_standard__NativeArray(var112, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var113)->values[0] = (val*) var107;
((struct instance_standard__NativeArray*)var113)->values[1] = (val*) var_mclassdef;
{
((void (*)(val* self, val* p0, long p1))(var111->class->vft[COLOR_standard__array__Array__with_native]))(var111, var113, var112) /* with_native on <var111:Array[Object]>*/;
}
}
{
var114 = ((val* (*)(val* self))(var111->class->vft[COLOR_standard__string__Object__to_s]))(var111) /* to_s on <var111:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___advice(var_modelbuilder, self, var102, var114); /* Direct call modelbuilder_base#ModelBuilder#advice on <var_modelbuilder:ModelBuilder>*/
}
var115 = 0;
var = var115;
goto RET_LABEL;
} else {
}
var116 = 1;
var = var116;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#AMethPropdef#build_property for (self: AMethPropdef, ModelBuilder, MClassDef) */
void nit__modelize_property___AMethPropdef___APropdef__build_property(val* self, val* p0, val* p1) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var /* : nullable TKwinit */;
val* var2 /* : nullable TKwinit */;
val* var_n_kwinit /* var n_kwinit: nullable TKwinit */;
val* var3 /* : nullable TKwnew */;
val* var5 /* : nullable TKwnew */;
val* var_n_kwnew /* var n_kwnew: nullable TKwnew */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var_ /* var : Bool */;
val* var13 /* : null */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var_is_init /* var is_init: Bool */;
val* var19 /* : nullable AMethid */;
val* var21 /* : nullable AMethid */;
val* var_amethodid /* var amethodid: nullable AMethid */;
val* var22 /* : null */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var_other26 /* var other: nullable Object */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
static val* varonce;
val* var31 /* : String */;
char* var32 /* : NativeString */;
long var33 /* : Int */;
val* var34 /* : FlatString */;
val* var_name /* var name: String */;
val* var_name_node /* var name_node: ANode */;
val* var35 /* : null */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
long var44 /* : Int */;
val* var45 /* : FlatString */;
val* var46 /* : null */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
long var55 /* : Int */;
val* var56 /* : FlatString */;
short int var57 /* : Bool */;
int cltype;
int idtype;
val* var58 /* : TId */;
val* var60 /* : TId */;
val* var61 /* : String */;
val* var62 /* : String */;
short int var63 /* : Bool */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
long var67 /* : Int */;
val* var68 /* : FlatString */;
short int var69 /* : Bool */;
short int var_70 /* var : Bool */;
val* var71 /* : nullable ASignature */;
val* var73 /* : nullable ASignature */;
val* var74 /* : ANodes[AParam] */;
val* var76 /* : ANodes[AParam] */;
long var77 /* : Int */;
long var78 /* : Int */;
short int var79 /* : Bool */;
short int var81 /* : Bool */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
long var85 /* : Int */;
val* var86 /* : FlatString */;
short int var87 /* : Bool */;
short int var_look_like_a_root_init /* var look_like_a_root_init: Bool */;
val* var88 /* : null */;
val* var_mprop /* var mprop: nullable MMethod */;
short int var89 /* : Bool */;
short int var90 /* : Bool */;
short int var_91 /* var : Bool */;
val* var92 /* : nullable TKwredef */;
val* var94 /* : nullable TKwredef */;
val* var95 /* : null */;
short int var96 /* : Bool */;
short int var97 /* : Bool */;
short int var99 /* : Bool */;
short int var100 /* : Bool */;
val* var101 /* : nullable MProperty */;
short int var102 /* : Bool */;
int cltype103;
int idtype104;
const char* var_class_name;
short int var105 /* : Bool */;
val* var106 /* : null */;
short int var107 /* : Bool */;
short int var108 /* : Bool */;
short int var110 /* : Bool */;
short int var112 /* : Bool */;
short int var_113 /* var : Bool */;
val* var114 /* : nullable MMethod */;
val* var116 /* : nullable MMethod */;
val* var117 /* : nullable AExpr */;
val* var119 /* : nullable AExpr */;
val* var_nb /* var nb: nullable AExpr */;
short int var120 /* : Bool */;
short int var121 /* : Bool */;
short int var122 /* : Bool */;
int cltype123;
int idtype124;
short int var_125 /* var : Bool */;
val* var126 /* : ANodes[AExpr] */;
val* var128 /* : ANodes[AExpr] */;
short int var129 /* : Bool */;
short int var_130 /* var : Bool */;
val* var131 /* : nullable ADoc */;
val* var133 /* : nullable ADoc */;
val* var134 /* : null */;
short int var135 /* : Bool */;
short int var136 /* : Bool */;
short int var138 /* : Bool */;
short int var140 /* : Bool */;
static val* varonce141;
val* var142 /* : String */;
char* var143 /* : NativeString */;
long var144 /* : Int */;
val* var145 /* : FlatString */;
static val* varonce146;
val* var147 /* : String */;
char* var148 /* : NativeString */;
long var149 /* : Int */;
val* var150 /* : FlatString */;
val* var151 /* : Array[Object] */;
long var152 /* : Int */;
val* var153 /* : NativeArray[Object] */;
val* var154 /* : String */;
val* var155 /* : null */;
short int var156 /* : Bool */;
short int var157 /* : Bool */;
short int var159 /* : Bool */;
short int var161 /* : Bool */;
val* var162 /* : nullable AVisibility */;
val* var164 /* : nullable AVisibility */;
val* var165 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: MVisibility */;
val* var166 /* : MMethod */;
short int var167 /* : Bool */;
short int var_168 /* var : Bool */;
val* var169 /* : nullable MMethod */;
val* var171 /* : nullable MMethod */;
val* var172 /* : null */;
short int var173 /* : Bool */;
short int var174 /* : Bool */;
short int var176 /* : Bool */;
short int var178 /* : Bool */;
short int var180 /* : Bool */;
val* var183 /* : null */;
short int var184 /* : Bool */;
short int var185 /* : Bool */;
short int var187 /* : Bool */;
short int var188 /* : Bool */;
val* var190 /* : nullable ANode */;
val* var192 /* : nullable ANode */;
short int var193 /* : Bool */;
int cltype194;
int idtype195;
short int var196 /* : Bool */;
val* var198 /* : nullable TKwredef */;
val* var200 /* : nullable TKwredef */;
short int var201 /* : Bool */;
short int var202 /* : Bool */;
val* var203 /* : nullable TKwredef */;
val* var205 /* : nullable TKwredef */;
short int var206 /* : Bool */;
int cltype207;
int idtype208;
short int var209 /* : Bool */;
short int var210 /* : Bool */;
short int var211 /* : Bool */;
val* var212 /* : nullable AVisibility */;
val* var214 /* : nullable AVisibility */;
val* var215 /* : Map[MProperty, APropdef] */;
val* var217 /* : Map[MProperty, APropdef] */;
val* var_218 /* var : Map[MProperty, APropdef] */;
val* var219 /* : MapIterator[nullable Object, nullable Object] */;
val* var_220 /* var : MapIterator[MProperty, APropdef] */;
short int var221 /* : Bool */;
val* var222 /* : nullable Object */;
val* var_p /* var p: MProperty */;
val* var223 /* : nullable Object */;
val* var_n /* var n: APropdef */;
short int var224 /* : Bool */;
short int var225 /* : Bool */;
short int var226 /* : Bool */;
short int var228 /* : Bool */;
short int var229 /* : Bool */;
short int var_230 /* var : Bool */;
short int var231 /* : Bool */;
int cltype232;
int idtype233;
short int var_234 /* var : Bool */;
val* var235 /* : String */;
val* var237 /* : String */;
short int var238 /* : Bool */;
val* var239 /* : nullable TKwredef */;
val* var241 /* : nullable TKwredef */;
short int var242 /* : Bool */;
short int var243 /* : Bool */;
val* var245 /* : Map[MProperty, APropdef] */;
val* var247 /* : Map[MProperty, APropdef] */;
val* var248 /* : MMethodDef */;
val* var249 /* : Location */;
val* var251 /* : Location */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
short int var252 /* : Bool */;
int cltype253;
int idtype254;
const struct type* type_struct;
const char* var_class_name255;
short int var257 /* : Bool */;
int cltype258;
int idtype259;
const struct type* type_struct260;
const char* var_class_name261;
val* var262 /* : HashMap[MPropDef, APropdef] */;
val* var264 /* : HashMap[MPropDef, APropdef] */;
short int var265 /* : Bool */;
val* var266 /* : ToolContext */;
val* var268 /* : ToolContext */;
static val* varonce269;
val* var270 /* : String */;
char* var271 /* : NativeString */;
long var272 /* : Int */;
val* var273 /* : FlatString */;
val* var274 /* : String */;
val* var275 /* : Array[Object] */;
long var276 /* : Int */;
val* var277 /* : NativeArray[Object] */;
val* var278 /* : String */;
long var279 /* : Int */;
val* var280 /* : ToolContext */;
val* var282 /* : ToolContext */;
static val* varonce283;
val* var284 /* : String */;
char* var285 /* : NativeString */;
long var286 /* : Int */;
val* var287 /* : FlatString */;
val* var288 /* : String */;
val* var289 /* : Array[Object] */;
long var290 /* : Int */;
val* var291 /* : NativeArray[Object] */;
val* var292 /* : String */;
long var293 /* : Int */;
var_modelbuilder = p0;
var_mclassdef = p1;
{
{ /* Inline parser_nodes#AMethPropdef#n_kwinit (self) on <self:AMethPropdef> */
var2 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwinit].val; /* _n_kwinit on <self:AMethPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_n_kwinit = var;
{
{ /* Inline parser_nodes#AMethPropdef#n_kwnew (self) on <self:AMethPropdef> */
var5 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_kwnew].val; /* _n_kwnew on <self:AMethPropdef> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_n_kwnew = var3;
var7 = NULL;
if (var_n_kwinit == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwinit,var7) on <var_n_kwinit:nullable TKwinit> */
var_other = var7;
{
var11 = ((short int (*)(val* self, val* p0))(var_n_kwinit->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_kwinit, var_other) /* == on <var_n_kwinit:nullable TKwinit(TKwinit)>*/;
}
var12 = !var11;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
var_ = var8;
if (var8){
var6 = var_;
} else {
var13 = NULL;
if (var_n_kwnew == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwnew,var13) on <var_n_kwnew:nullable TKwnew> */
var_other = var13;
{
var17 = ((short int (*)(val* self, val* p0))(var_n_kwnew->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_kwnew, var_other) /* == on <var_n_kwnew:nullable TKwnew(TKwnew)>*/;
}
var18 = !var17;
var15 = var18;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
var6 = var14;
}
var_is_init = var6;
{
{ /* Inline parser_nodes#AMethPropdef#n_methid (self) on <self:AMethPropdef> */
var21 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
var_amethodid = var19;
var22 = NULL;
if (var_amethodid == NULL) {
var23 = 1; /* is null */
} else {
var23 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_amethodid,var22) on <var_amethodid:nullable AMethid> */
var_other26 = var22;
{
{ /* Inline kernel#Object#is_same_instance (var_amethodid,var_other26) on <var_amethodid:nullable AMethid(AMethid)> */
var29 = var_amethodid == var_other26;
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
if (var23){
var30 = !var_is_init;
if (var30){
if (varonce) {
var31 = varonce;
} else {
var32 = "main";
var33 = 4;
var34 = standard___standard__NativeString___to_s_with_length(var32, var33);
var31 = var34;
varonce = var31;
}
var_name = var31;
var_name_node = self;
} else {
var35 = NULL;
if (var_n_kwinit == NULL) {
var36 = 0; /* is null */
} else {
var36 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwinit,var35) on <var_n_kwinit:nullable TKwinit> */
var_other = var35;
{
var39 = ((short int (*)(val* self, val* p0))(var_n_kwinit->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_kwinit, var_other) /* == on <var_n_kwinit:nullable TKwinit(TKwinit)>*/;
}
var40 = !var39;
var37 = var40;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
var36 = var37;
}
if (var36){
if (varonce41) {
var42 = varonce41;
} else {
var43 = "init";
var44 = 4;
var45 = standard___standard__NativeString___to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
var_name = var42;
var_name_node = var_n_kwinit;
} else {
var46 = NULL;
if (var_n_kwnew == NULL) {
var47 = 0; /* is null */
} else {
var47 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwnew,var46) on <var_n_kwnew:nullable TKwnew> */
var_other = var46;
{
var50 = ((short int (*)(val* self, val* p0))(var_n_kwnew->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_kwnew, var_other) /* == on <var_n_kwnew:nullable TKwnew(TKwnew)>*/;
}
var51 = !var50;
var48 = var51;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
var47 = var48;
}
if (var47){
if (varonce52) {
var53 = varonce52;
} else {
var54 = "new";
var55 = 3;
var56 = standard___standard__NativeString___to_s_with_length(var54, var55);
var53 = var56;
varonce52 = var53;
}
var_name = var53;
var_name_node = var_n_kwnew;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 640);
show_backtrace(1);
}
}
}
} else {
/* <var_amethodid:nullable AMethid(AMethid)> isa AIdMethid */
cltype = type_nit__AIdMethid.color;
idtype = type_nit__AIdMethid.id;
if(cltype >= var_amethodid->type->table_size) {
var57 = 0;
} else {
var57 = var_amethodid->type->type_table[cltype] == idtype;
}
if (var57){
{
{ /* Inline parser_nodes#AIdMethid#n_id (var_amethodid) on <var_amethodid:nullable AMethid(AIdMethid)> */
var60 = var_amethodid->attrs[COLOR_nit__parser_nodes__AIdMethid___n_id].val; /* _n_id on <var_amethodid:nullable AMethid(AIdMethid)> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1339);
show_backtrace(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
var61 = nit__lexer_work___Token___text(var58);
}
var_name = var61;
var_name_node = var_amethodid;
} else {
{
var62 = nit__parser_work___Prod___collect_text(var_amethodid);
}
var_name = var62;
var_name_node = var_amethodid;
if (varonce64) {
var65 = varonce64;
} else {
var66 = "-";
var67 = 1;
var68 = standard___standard__NativeString___to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
{
var69 = ((short int (*)(val* self, val* p0))(var_name->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_name, var65) /* == on <var_name:String>*/;
}
var_70 = var69;
if (var69){
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (self) on <self:AMethPropdef> */
var73 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var71 = var73;
RET_LABEL72:(void)0;
}
}
if (var71 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 650);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var71) on <var71:nullable ASignature> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1506);
show_backtrace(1);
}
var76 = var71->attrs[COLOR_nit__parser_nodes__ASignature___n_params].val; /* _n_params on <var71:nullable ASignature> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1506);
show_backtrace(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
var77 = nit___nit__ANodes___standard__abstract_collection__Collection__length(var74);
}
var78 = 0;
{
{ /* Inline kernel#Int#== (var77,var78) on <var77:Int> */
var81 = var77 == var78;
var79 = var81;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
var63 = var79;
} else {
var63 = var_70;
}
if (var63){
if (varonce82) {
var83 = varonce82;
} else {
var84 = "unary -";
var85 = 7;
var86 = standard___standard__NativeString___to_s_with_length(var84, var85);
var83 = var86;
varonce82 = var83;
}
var_name = var83;
} else {
}
}
}
{
var87 = nit__modelize_property___AMethPropdef___look_like_a_root_init(self, var_modelbuilder, var_mclassdef);
}
var_look_like_a_root_init = var87;
var88 = NULL;
var_mprop = var88;
var90 = !var_is_init;
var_91 = var90;
if (var90){
var89 = var_91;
} else {
{
{ /* Inline parser_nodes#ADefinition#n_kwredef (self) on <self:AMethPropdef> */
var94 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AMethPropdef> */
var92 = var94;
RET_LABEL93:(void)0;
}
}
var95 = NULL;
if (var92 == NULL) {
var96 = 0; /* is null */
} else {
var96 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var92,var95) on <var92:nullable TKwredef> */
var_other = var95;
{
var99 = ((short int (*)(val* self, val* p0))(var92->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var92, var_other) /* == on <var92:nullable TKwredef(TKwredef)>*/;
}
var100 = !var99;
var97 = var100;
goto RET_LABEL98;
RET_LABEL98:(void)0;
}
var96 = var97;
}
var89 = var96;
}
if (var89){
{
var101 = nit___nit__ModelBuilder___try_get_mproperty_by_name(var_modelbuilder, var_name_node, var_mclassdef, var_name);
}
/* <var101:nullable MProperty> isa nullable MMethod */
cltype103 = type_nullable__nit__MMethod.color;
idtype104 = type_nullable__nit__MMethod.id;
if(var101 == NULL) {
var102 = 1;
} else {
if(cltype103 >= var101->type->table_size) {
var102 = 0;
} else {
var102 = var101->type->type_table[cltype103] == idtype104;
}
}
if (unlikely(!var102)) {
var_class_name = var101 == NULL ? "null" : var101->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MMethod", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 657);
show_backtrace(1);
}
var_mprop = var101;
} else {
}
var106 = NULL;
if (var_mprop == NULL) {
var107 = 1; /* is null */
} else {
var107 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mprop,var106) on <var_mprop:nullable MMethod> */
var_other26 = var106;
{
{ /* Inline kernel#Object#is_same_instance (var_mprop,var_other26) on <var_mprop:nullable MMethod(MMethod)> */
var112 = var_mprop == var_other26;
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
var_113 = var107;
if (var107){
var105 = var_look_like_a_root_init;
} else {
var105 = var_113;
}
if (var105){
{
{ /* Inline modelize_property#ModelBuilder#the_root_init_mmethod (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var116 = var_modelbuilder->attrs[COLOR_nit__modelize_property__ModelBuilder___the_root_init_mmethod].val; /* _the_root_init_mmethod on <var_modelbuilder:ModelBuilder> */
var114 = var116;
RET_LABEL115:(void)0;
}
}
var_mprop = var114;
{
{ /* Inline parser_nodes#AMethPropdef#n_block (self) on <self:AMethPropdef> */
var119 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:AMethPropdef> */
var117 = var119;
RET_LABEL118:(void)0;
}
}
var_nb = var117;
/* <var_nb:nullable AExpr> isa ABlockExpr */
cltype123 = type_nit__ABlockExpr.color;
idtype124 = type_nit__ABlockExpr.id;
if(var_nb == NULL) {
var122 = 0;
} else {
if(cltype123 >= var_nb->type->table_size) {
var122 = 0;
} else {
var122 = var_nb->type->type_table[cltype123] == idtype124;
}
}
var_125 = var122;
if (var122){
{
{ /* Inline parser_nodes#ABlockExpr#n_expr (var_nb) on <var_nb:nullable AExpr(ABlockExpr)> */
var128 = var_nb->attrs[COLOR_nit__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <var_nb:nullable AExpr(ABlockExpr)> */
if (unlikely(var128 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1565);
show_backtrace(1);
}
var126 = var128;
RET_LABEL127:(void)0;
}
}
{
var129 = nit___nit__ANodes___standard__abstract_collection__Collection__is_empty(var126);
}
var121 = var129;
} else {
var121 = var_125;
}
var_130 = var121;
if (var121){
{
{ /* Inline parser_nodes#ADefinition#n_doc (self) on <self:AMethPropdef> */
var133 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:AMethPropdef> */
var131 = var133;
RET_LABEL132:(void)0;
}
}
var134 = NULL;
if (var131 == NULL) {
var135 = 1; /* is null */
} else {
var135 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var131,var134) on <var131:nullable ADoc> */
var_other26 = var134;
{
{ /* Inline kernel#Object#is_same_instance (var131,var_other26) on <var131:nullable ADoc(ADoc)> */
var140 = var131 == var_other26;
var138 = var140;
goto RET_LABEL139;
RET_LABEL139:(void)0;
}
}
var136 = var138;
goto RET_LABEL137;
RET_LABEL137:(void)0;
}
var135 = var136;
}
var120 = var135;
} else {
var120 = var_130;
}
if (var120){
if (varonce141) {
var142 = varonce141;
} else {
var143 = "useless-init";
var144 = 12;
var145 = standard___standard__NativeString___to_s_with_length(var143, var144);
var142 = var145;
varonce141 = var142;
}
if (varonce146) {
var147 = varonce146;
} else {
var148 = "Warning: useless empty init in ";
var149 = 31;
var150 = standard___standard__NativeString___to_s_with_length(var148, var149);
var147 = var150;
varonce146 = var147;
}
var151 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var151 = array_instance Array[Object] */
var152 = 2;
var153 = NEW_standard__NativeArray(var152, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var153)->values[0] = (val*) var147;
((struct instance_standard__NativeArray*)var153)->values[1] = (val*) var_mclassdef;
{
((void (*)(val* self, val* p0, long p1))(var151->class->vft[COLOR_standard__array__Array__with_native]))(var151, var153, var152) /* with_native on <var151:Array[Object]>*/;
}
}
{
var154 = ((val* (*)(val* self))(var151->class->vft[COLOR_standard__string__Object__to_s]))(var151) /* to_s on <var151:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___advice(var_modelbuilder, self, var142, var154); /* Direct call modelbuilder_base#ModelBuilder#advice on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
} else {
}
var155 = NULL;
if (var_mprop == NULL) {
var156 = 1; /* is null */
} else {
var156 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mprop,var155) on <var_mprop:nullable MMethod> */
var_other26 = var155;
{
{ /* Inline kernel#Object#is_same_instance (var_mprop,var_other26) on <var_mprop:nullable MMethod(MMethod)> */
var161 = var_mprop == var_other26;
var159 = var161;
goto RET_LABEL160;
RET_LABEL160:(void)0;
}
}
var157 = var159;
goto RET_LABEL158;
RET_LABEL158:(void)0;
}
var156 = var157;
}
if (var156){
{
{ /* Inline parser_nodes#ADefinition#n_visibility (self) on <self:AMethPropdef> */
var164 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AMethPropdef> */
var162 = var164;
RET_LABEL163:(void)0;
}
}
{
var165 = nit__modelize_property___APropdef___new_property_visibility(self, var_modelbuilder, var_mclassdef, var162);
}
var_mvisibility = var165;
var166 = NEW_nit__MMethod(&type_nit__MMethod);
{
((void (*)(val* self, val* p0))(var166->class->vft[COLOR_nit__model__MProperty__intro_mclassdef_61d]))(var166, var_mclassdef) /* intro_mclassdef= on <var166:MMethod>*/;
}
{
((void (*)(val* self, val* p0))(var166->class->vft[COLOR_nit__model__MProperty__name_61d]))(var166, var_name) /* name= on <var166:MMethod>*/;
}
{
((void (*)(val* self, val* p0))(var166->class->vft[COLOR_nit__model__MProperty__visibility_61d]))(var166, var_mvisibility) /* visibility= on <var166:MMethod>*/;
}
{
((void (*)(val* self))(var166->class->vft[COLOR_standard__kernel__Object__init]))(var166) /* init on <var166:MMethod>*/;
}
var_mprop = var166;
var_168 = var_look_like_a_root_init;
if (var_look_like_a_root_init){
{
{ /* Inline modelize_property#ModelBuilder#the_root_init_mmethod (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var171 = var_modelbuilder->attrs[COLOR_nit__modelize_property__ModelBuilder___the_root_init_mmethod].val; /* _the_root_init_mmethod on <var_modelbuilder:ModelBuilder> */
var169 = var171;
RET_LABEL170:(void)0;
}
}
var172 = NULL;
if (var169 == NULL) {
var173 = 1; /* is null */
} else {
var173 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var169,var172) on <var169:nullable MMethod> */
var_other26 = var172;
{
{ /* Inline kernel#Object#is_same_instance (var169,var_other26) on <var169:nullable MMethod(MMethod)> */
var178 = var169 == var_other26;
var176 = var178;
goto RET_LABEL177;
RET_LABEL177:(void)0;
}
}
var174 = var176;
goto RET_LABEL175;
RET_LABEL175:(void)0;
}
var173 = var174;
}
var167 = var173;
} else {
var167 = var_168;
}
if (var167){
{
{ /* Inline modelize_property#ModelBuilder#the_root_init_mmethod= (var_modelbuilder,var_mprop) on <var_modelbuilder:ModelBuilder> */
var_modelbuilder->attrs[COLOR_nit__modelize_property__ModelBuilder___the_root_init_mmethod].val = var_mprop; /* _the_root_init_mmethod on <var_modelbuilder:ModelBuilder> */
RET_LABEL179:(void)0;
}
}
var180 = 1;
{
{ /* Inline model#MMethod#is_root_init= (var_mprop,var180) on <var_mprop:nullable MMethod(MMethod)> */
var_mprop->attrs[COLOR_nit__model__MMethod___is_root_init].s = var180; /* _is_root_init on <var_mprop:nullable MMethod(MMethod)> */
RET_LABEL181:(void)0;
}
}
} else {
}
{
{ /* Inline model#MMethod#is_init= (var_mprop,var_is_init) on <var_mprop:nullable MMethod(MMethod)> */
var_mprop->attrs[COLOR_nit__model__MMethod___is_init].s = var_is_init; /* _is_init on <var_mprop:nullable MMethod(MMethod)> */
RET_LABEL182:(void)0;
}
}
var183 = NULL;
if (var_n_kwnew == NULL) {
var184 = 0; /* is null */
} else {
var184 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwnew,var183) on <var_n_kwnew:nullable TKwnew> */
var_other = var183;
{
var187 = ((short int (*)(val* self, val* p0))(var_n_kwnew->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_kwnew, var_other) /* == on <var_n_kwnew:nullable TKwnew(TKwnew)>*/;
}
var188 = !var187;
var185 = var188;
goto RET_LABEL186;
RET_LABEL186:(void)0;
}
var184 = var185;
}
{
{ /* Inline model#MMethod#is_new= (var_mprop,var184) on <var_mprop:nullable MMethod(MMethod)> */
var_mprop->attrs[COLOR_nit__model__MMethod___is_new].s = var184; /* _is_new on <var_mprop:nullable MMethod(MMethod)> */
RET_LABEL189:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#parent (self) on <self:AMethPropdef> */
var192 = self->attrs[COLOR_nit__parser_nodes__ANode___parent].val; /* _parent on <self:AMethPropdef> */
var190 = var192;
RET_LABEL191:(void)0;
}
}
/* <var190:nullable ANode> isa ATopClassdef */
cltype194 = type_nit__ATopClassdef.color;
idtype195 = type_nit__ATopClassdef.id;
if(var190 == NULL) {
var193 = 0;
} else {
if(cltype194 >= var190->type->table_size) {
var193 = 0;
} else {
var193 = var190->type->type_table[cltype194] == idtype195;
}
}
if (var193){
var196 = 1;
{
{ /* Inline model#MMethod#is_toplevel= (var_mprop,var196) on <var_mprop:nullable MMethod(MMethod)> */
var_mprop->attrs[COLOR_nit__model__MMethod___is_toplevel].s = var196; /* _is_toplevel on <var_mprop:nullable MMethod(MMethod)> */
RET_LABEL197:(void)0;
}
}
} else {
}
{
{ /* Inline parser_nodes#ADefinition#n_kwredef (self) on <self:AMethPropdef> */
var200 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AMethPropdef> */
var198 = var200;
RET_LABEL199:(void)0;
}
}
var201 = 0;
{
var202 = nit__modelize_property___APropdef___check_redef_keyword(self, var_modelbuilder, var_mclassdef, var198, var201, var_mprop);
}
} else {
{
{ /* Inline parser_nodes#ADefinition#n_kwredef (self) on <self:AMethPropdef> */
var205 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AMethPropdef> */
var203 = var205;
RET_LABEL204:(void)0;
}
}
/* <self:AMethPropdef> isa AMainMethPropdef */
cltype207 = type_nit__AMainMethPropdef.color;
idtype208 = type_nit__AMainMethPropdef.id;
if(cltype207 >= self->type->table_size) {
var206 = 0;
} else {
var206 = self->type->type_table[cltype207] == idtype208;
}
var209 = !var206;
{
var210 = nit__modelize_property___APropdef___check_redef_keyword(self, var_modelbuilder, var_mclassdef, var203, var209, var_mprop);
}
var211 = !var210;
if (var211){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ADefinition#n_visibility (self) on <self:AMethPropdef> */
var214 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AMethPropdef> */
var212 = var214;
RET_LABEL213:(void)0;
}
}
{
nit__modelize_property___APropdef___check_redef_property_visibility(self, var_modelbuilder, var212, var_mprop); /* Direct call modelize_property#APropdef#check_redef_property_visibility on <self:AMethPropdef>*/
}
}
if (var_is_init){
{
{ /* Inline modelize_property#MClassDef#mprop2npropdef (var_mclassdef) on <var_mclassdef:MClassDef> */
var217 = var_mclassdef->attrs[COLOR_nit__modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <var_mclassdef:MClassDef> */
if (unlikely(var217 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 352);
show_backtrace(1);
}
var215 = var217;
RET_LABEL216:(void)0;
}
}
var_218 = var215;
{
var219 = ((val* (*)(val* self))(var_218->class->vft[COLOR_standard__abstract_collection__MapRead__iterator]))(var_218) /* iterator on <var_218:Map[MProperty, APropdef]>*/;
}
var_220 = var219;
for(;;) {
{
var221 = ((short int (*)(val* self))(var_220->class->vft[COLOR_standard__abstract_collection__MapIterator__is_ok]))(var_220) /* is_ok on <var_220:MapIterator[MProperty, APropdef]>*/;
}
if (var221){
{
var222 = ((val* (*)(val* self))(var_220->class->vft[COLOR_standard__abstract_collection__MapIterator__key]))(var_220) /* key on <var_220:MapIterator[MProperty, APropdef]>*/;
}
var_p = var222;
{
var223 = ((val* (*)(val* self))(var_220->class->vft[COLOR_standard__abstract_collection__MapIterator__item]))(var_220) /* item on <var_220:MapIterator[MProperty, APropdef]>*/;
}
var_n = var223;
{
{ /* Inline kernel#Object#!= (var_p,var_mprop) on <var_p:MProperty> */
var_other = var_mprop;
{
var228 = ((short int (*)(val* self, val* p0))(var_p->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_p, var_other) /* == on <var_p:MProperty>*/;
}
var229 = !var228;
var226 = var229;
goto RET_LABEL227;
RET_LABEL227:(void)0;
}
}
var_230 = var226;
if (var226){
/* <var_p:MProperty> isa MMethod */
cltype232 = type_nit__MMethod.color;
idtype233 = type_nit__MMethod.id;
if(cltype232 >= var_p->type->table_size) {
var231 = 0;
} else {
var231 = var_p->type->type_table[cltype232] == idtype233;
}
var225 = var231;
} else {
var225 = var_230;
}
var_234 = var225;
if (var225){
{
{ /* Inline model#MProperty#name (var_p) on <var_p:MProperty(MMethod)> */
var237 = var_p->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var_p:MProperty(MMethod)> */
if (unlikely(var237 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1741);
show_backtrace(1);
}
var235 = var237;
RET_LABEL236:(void)0;
}
}
{
var238 = ((short int (*)(val* self, val* p0))(var235->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var235, var_name) /* == on <var235:String>*/;
}
var224 = var238;
} else {
var224 = var_234;
}
if (var224){
{
{ /* Inline parser_nodes#ADefinition#n_kwredef (self) on <self:AMethPropdef> */
var241 = self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AMethPropdef> */
var239 = var241;
RET_LABEL240:(void)0;
}
}
var242 = 0;
{
var243 = nit__modelize_property___APropdef___check_redef_keyword(self, var_modelbuilder, var_mclassdef, var239, var242, var_p);
}
goto BREAK_label;
} else {
}
{
((void (*)(val* self))(var_220->class->vft[COLOR_standard__abstract_collection__MapIterator__next]))(var_220) /* next on <var_220:MapIterator[MProperty, APropdef]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#MapIterator#finish (var_220) on <var_220:MapIterator[MProperty, APropdef]> */
RET_LABEL244:(void)0;
}
}
} else {
}
{
{ /* Inline modelize_property#MClassDef#mprop2npropdef (var_mclassdef) on <var_mclassdef:MClassDef> */
var247 = var_mclassdef->attrs[COLOR_nit__modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <var_mclassdef:MClassDef> */
if (unlikely(var247 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 352);
show_backtrace(1);
}
var245 = var247;
RET_LABEL246:(void)0;
}
}
{
((void (*)(val* self, val* p0, val* p1))(var245->class->vft[COLOR_standard__abstract_collection__Map___91d_93d_61d]))(var245, var_mprop, self) /* []= on <var245:Map[MProperty, APropdef]>*/;
}
var248 = NEW_nit__MMethodDef(&type_nit__MMethodDef);
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AMethPropdef> */
var251 = self->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <self:AMethPropdef> */
if (unlikely(var251 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 23);
show_backtrace(1);
}
var249 = var251;
RET_LABEL250:(void)0;
}
}
{
((void (*)(val* self, val* p0))(var248->class->vft[COLOR_nit__model__MPropDef__mclassdef_61d]))(var248, var_mclassdef) /* mclassdef= on <var248:MMethodDef>*/;
}
{
((void (*)(val* self, val* p0))(var248->class->vft[COLOR_nit__model__MPropDef__mproperty_61d]))(var248, var_mprop) /* mproperty= on <var248:MMethodDef>*/;
}
{
((void (*)(val* self, val* p0))(var248->class->vft[COLOR_nit__model__MPropDef__location_61d]))(var248, var249) /* location= on <var248:MMethodDef>*/;
}
{
((void (*)(val* self))(var248->class->vft[COLOR_standard__kernel__Object__init]))(var248) /* init on <var248:MMethodDef>*/;
}
var_mpropdef = var248;
{
nit__modelize_property___APropdef___set_doc(self, var_mpropdef, var_modelbuilder); /* Direct call modelize_property#APropdef#set_doc on <self:AMethPropdef>*/
}
/* <var_mpropdef:MMethodDef> isa nullable MPROPDEF */
type_struct = self->type->resolution_table->types[COLOR_nullable__nit__modelize_property__APropdef__MPROPDEF];
cltype253 = type_struct->color;
idtype254 = type_struct->id;
if(cltype253 >= var_mpropdef->type->table_size) {
var252 = 0;
} else {
var252 = var_mpropdef->type->type_table[cltype253] == idtype254;
}
if (unlikely(!var252)) {
var_class_name255 = var_mpropdef == NULL ? "null" : var_mpropdef->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name255);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 697);
show_backtrace(1);
}
{
{ /* Inline modelize_property#APropdef#mpropdef= (self,var_mpropdef) on <self:AMethPropdef> */
/* Covariant cast for argument 0 (mpropdef) <var_mpropdef:MMethodDef> isa nullable MPROPDEF */
/* <var_mpropdef:MMethodDef> isa nullable MPROPDEF */
type_struct260 = self->type->resolution_table->types[COLOR_nullable__nit__modelize_property__APropdef__MPROPDEF];
cltype258 = type_struct260->color;
idtype259 = type_struct260->id;
if(cltype258 >= var_mpropdef->type->table_size) {
var257 = 0;
} else {
var257 = var_mpropdef->type->type_table[cltype258] == idtype259;
}
if (unlikely(!var257)) {
var_class_name261 = var_mpropdef == NULL ? "null" : var_mpropdef->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name261);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 405);
show_backtrace(1);
}
self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val = var_mpropdef; /* _mpropdef on <self:AMethPropdef> */
RET_LABEL256:(void)0;
}
}
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var264 = var_modelbuilder->attrs[COLOR_nit__modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var264 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelize_property, 40);
show_backtrace(1);
}
var262 = var264;
RET_LABEL263:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var262, var_mpropdef, self); /* Direct call hash_collection#HashMap#[]= on <var262:HashMap[MPropDef, APropdef]>*/
}
{
var265 = nit___nit__MPropDef___is_intro(var_mpropdef);
}
if (var265){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var268 = var_modelbuilder->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var_modelbuilder:ModelBuilder> */
if (unlikely(var268 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var266 = var268;
RET_LABEL267:(void)0;
}
}
if (varonce269) {
var270 = varonce269;
} else {
var271 = " introduces new method ";
var272 = 23;
var273 = standard___standard__NativeString___to_s_with_length(var271, var272);
var270 = var273;
varonce269 = var270;
}
{
var274 = nit___nit__MProperty___nit__model_base__MEntity__full_name(var_mprop);
}
var275 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var275 = array_instance Array[Object] */
var276 = 3;
var277 = NEW_standard__NativeArray(var276, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var277)->values[0] = (val*) var_mpropdef;
((struct instance_standard__NativeArray*)var277)->values[1] = (val*) var270;
((struct instance_standard__NativeArray*)var277)->values[2] = (val*) var274;
{
((void (*)(val* self, val* p0, long p1))(var275->class->vft[COLOR_standard__array__Array__with_native]))(var275, var277, var276) /* with_native on <var275:Array[Object]>*/;
}
}
{
var278 = ((val* (*)(val* self))(var275->class->vft[COLOR_standard__string__Object__to_s]))(var275) /* to_s on <var275:Array[Object]>*/;
}
var279 = 4;
{
nit___nit__ToolContext___info(var266, var278, var279); /* Direct call toolcontext#ToolContext#info on <var266:ToolContext>*/
}
} else {
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var282 = var_modelbuilder->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var_modelbuilder:ModelBuilder> */
if (unlikely(var282 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var280 = var282;
RET_LABEL281:(void)0;
}
}
if (varonce283) {
var284 = varonce283;
} else {
var285 = " redefines method ";
var286 = 18;
var287 = standard___standard__NativeString___to_s_with_length(var285, var286);
var284 = var287;
varonce283 = var284;
}
{
var288 = nit___nit__MProperty___nit__model_base__MEntity__full_name(var_mprop);
}
var289 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var289 = array_instance Array[Object] */
var290 = 3;
var291 = NEW_standard__NativeArray(var290, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var291)->values[0] = (val*) var_mpropdef;
((struct instance_standard__NativeArray*)var291)->values[1] = (val*) var284;
((struct instance_standard__NativeArray*)var291)->values[2] = (val*) var288;
{
((void (*)(val* self, val* p0, long p1))(var289->class->vft[COLOR_standard__array__Array__with_native]))(var289, var291, var290) /* with_native on <var289:Array[Object]>*/;
}
}
{
var292 = ((val* (*)(val* self))(var289->class->vft[COLOR_standard__string__Object__to_s]))(var289) /* to_s on <var289:Array[Object]>*/;
}
var293 = 4;
{
nit___nit__ToolContext___info(var280, var292, var293); /* Direct call toolcontext#ToolContext#info on <var280:ToolContext>*/
}
}
RET_LABEL:;
}
