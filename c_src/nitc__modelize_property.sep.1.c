#include "nitc__modelize_property.sep.0.h"
/* method modelize_property$ToolContext$modelize_property_phase for (self: ToolContext): Phase */
val* nitc__modelize_property___ToolContext___modelize_property_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nitc__modelize_property__ToolContext___modelize_property_phase].val; /* _modelize_property_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelize_property_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 24);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property$ModelizePropertyPhase$process_nmodule for (self: ModelizePropertyPhase, AModule) */
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
{ /* Inline parser_nodes$AModule$n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var2 = var_nmodule->attrs[COLOR_nitc__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1125);
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
{ /* Inline modelize_class$AClassdef$all_defs (var_nclassdef) on <var_nclassdef:AClassdef> */
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
{ /* Inline phase$Phase$toolcontext (self) on <self:ModelizePropertyPhase> */
var15 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:ModelizePropertyPhase> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 210);
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
nitc__modelize_property___ModelBuilder___build_properties(var16, var_nclassdef); /* Direct call modelize_property$ModelBuilder$build_properties on <var16:ModelBuilder>*/
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
/* method modelize_property$ModelBuilder$mpropdef2npropdef for (self: ModelBuilder): HashMap[MPropDef, APropdef] */
val* nitc__modelize_property___ModelBuilder___mpropdef2npropdef(val* self) {
val* var /* : HashMap[MPropDef, APropdef] */;
val* var1 /* : HashMap[MPropDef, APropdef] */;
var1 = self->attrs[COLOR_nitc__modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 40);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property$ModelBuilder$mpropdef2node for (self: ModelBuilder, MPropDef): nullable ANode */
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
{ /* Inline modelize_property$ModelBuilder$mpropdef2npropdef (self) on <self:ModelBuilder> */
var3 = self->attrs[COLOR_nitc__modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <self:ModelBuilder> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
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
{ /* Inline kernel$Object$!= (var_res,((val*)NULL)) on <var_res:nullable Object(nullable APropdef)> */
var_other = ((val*)NULL);
{
var8 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable Object(APropdef)>*/
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
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var12 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
nitc__phase___ToolContext___run_phases_on_npropdef(var10, var_res); /* Direct call phase$ToolContext$run_phases_on_npropdef on <var10:ToolContext>*/
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
{ /* Inline model$MPropDef$mproperty (var_mpropdef) on <var_mpropdef:MPropDef(MMethodDef)> */
var17 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MPropDef(MMethodDef)> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model$MMethod$is_root_init (var15) on <var15:MProperty(MMethod)> */
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
{ /* Inline modelize_class$ModelBuilder$mclassdef2nclassdef (self) on <self:ModelBuilder> */
var23 = self->attrs[COLOR_nitc__modelize_class__ModelBuilder___mclassdef2nclassdef].val; /* _mclassdef2nclassdef on <self:ModelBuilder> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 448);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var_mpropdef) on <var_mpropdef:MPropDef(MMethodDef)> */
var26 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MPropDef(MMethodDef)> */
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
var27 = core___core__HashMap___core__abstract_collection__MapRead__get_or_null(var21, var24);
}
var_res = var27;
if (var_res == NULL) {
var28 = 0; /* is null */
} else {
var28 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_res,((val*)NULL)) on <var_res:nullable Object(nullable AClassdef)> */
var_other = ((val*)NULL);
{
var31 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable Object(AClassdef)>*/
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
/* method modelize_property$ModelBuilder$collect_attr_propdef for (self: ModelBuilder, MClassDef): Array[AAttrPropdef] */
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
core___core__Array___core__kernel__Object__init(var1); /* Direct call array$Array$init on <var1:Array[AAttrPropdef]>*/
}
var_res = var1;
{
{ /* Inline modelize_class$ModelBuilder$mclassdef2nclassdef (self) on <self:ModelBuilder> */
var4 = self->attrs[COLOR_nitc__modelize_class__ModelBuilder___mclassdef2nclassdef].val; /* _mclassdef2nclassdef on <self:ModelBuilder> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 448);
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
{ /* Inline kernel$Object$== (var_n,((val*)NULL)) on <var_n:nullable AClassdef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_n,var_other) on <var_n:nullable AClassdef(AClassdef)> */
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
{ /* Inline parser_nodes$AClassdef$n_propdefs (var_n) on <var_n:nullable AClassdef(AClassdef)> */
var14 = var_n->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_n:nullable AClassdef(AClassdef)> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1218);
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
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var22 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
nitc__phase___ToolContext___run_phases_on_npropdef(var20, var_npropdef); /* Direct call phase$ToolContext$run_phases_on_npropdef on <var20:ToolContext>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var_npropdef); /* Direct call array$Array$add on <var_res:Array[AAttrPropdef]>*/
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
/* method modelize_property$ModelBuilder$build_properties for (self: ModelBuilder, AClassdef) */
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
val* var111 /* : MErrorType */;
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
{ /* Inline modelize_property$AClassdef$build_properties_is_done (var_nclassdef) on <var_nclassdef:AClassdef> */
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
{ /* Inline modelize_property$AClassdef$build_properties_is_done= (var_nclassdef,1) on <var_nclassdef:AClassdef> */
var_nclassdef->attrs[COLOR_nitc__modelize_property__AClassdef___build_properties_is_done].s = 1; /* _build_properties_is_done on <var_nclassdef:AClassdef> */
RET_LABEL3:(void)0;
}
}
{
{ /* Inline modelize_class$AClassdef$mclassdef (var_nclassdef) on <var_nclassdef:AClassdef> */
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
{ /* Inline kernel$Object$== (var_mclassdef,((val*)NULL)) on <var_mclassdef:nullable MClassDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mclassdef,var_other) on <var_mclassdef:nullable MClassDef(MClassDef)> */
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
{ /* Inline model$MClassDef$in_hierarchy (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
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
{ /* Inline kernel$Object$== (var13,((val*)NULL)) on <var13:nullable POSetElement[MClassDef]> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var13,var_other) on <var13:nullable POSetElement[MClassDef](POSetElement[MClassDef])> */
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
{ /* Inline model$MClassDef$in_hierarchy (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var24 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___in_hierarchy].val; /* _in_hierarchy on <var_mclassdef:nullable MClassDef(MClassDef)> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
if (var22 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 91);
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
{ /* Inline modelize_class$ModelBuilder$mclassdef2nclassdef (self) on <self:ModelBuilder> */
var32 = self->attrs[COLOR_nitc__modelize_class__ModelBuilder___mclassdef2nclassdef].val; /* _mclassdef2nclassdef on <self:ModelBuilder> */
if (unlikely(var32 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 448);
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
{ /* Inline modelize_class$ModelBuilder$mclassdef2nclassdef (self) on <self:ModelBuilder> */
var38 = self->attrs[COLOR_nitc__modelize_class__ModelBuilder___mclassdef2nclassdef].val; /* _mclassdef2nclassdef on <self:ModelBuilder> */
if (unlikely(var38 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 448);
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
nitc__modelize_property___ModelBuilder___build_properties(self, var39); /* Direct call modelize_property$ModelBuilder$build_properties on <self:ModelBuilder>*/
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
nitc__modelize_property___MClassDef___build_self_type(var_mclassdef, self, var_nclassdef); /* Direct call modelize_property$MClassDef$build_self_type on <var_mclassdef:nullable MClassDef(MClassDef)>*/
}
{
{ /* Inline modelize_class$AClassdef$all_defs (var_nclassdef) on <var_nclassdef:AClassdef> */
var42 = var_nclassdef->attrs[COLOR_nitc__modelize_class__AClassdef___all_defs].val; /* _all_defs on <var_nclassdef:AClassdef> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
var_43 = var40;
if (var_43 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 97);
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
{ /* Inline parser_nodes$AClassdef$n_propdefs (var_nclassdef2) on <var_nclassdef2:AClassdef> */
var51 = var_nclassdef2->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef2:AClassdef> */
if (unlikely(var51 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1218);
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
{ /* Inline parser_nodes$AClassdef$n_propdefs (var_nclassdef2) on <var_nclassdef2:AClassdef> */
var60 = var_nclassdef2->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef2:AClassdef> */
if (unlikely(var60 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1218);
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
{ /* Inline parser_nodes$AClassdef$n_propdefs (var_nclassdef2) on <var_nclassdef2:AClassdef> */
var70 = var_nclassdef2->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef2:AClassdef> */
if (unlikely(var70 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1218);
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
{ /* Inline modelize_property$APropdef$mpropdef (var_npropdef77) on <var_npropdef77:APropdef(ATypePropdef)> */
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
{ /* Inline kernel$Object$== (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MVirtualTypeDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mpropdef,var_other) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
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
{ /* Inline model$MVirtualTypeDef$bound (var_mpropdef) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
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
{ /* Inline kernel$Object$== (var90,((val*)NULL)) on <var90:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var90,var_other) on <var90:nullable MType(MType)> */
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
{ /* Inline model$MPropDef$mproperty (var_mpropdef) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var101 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
if (unlikely(var101 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var99 = var101;
RET_LABEL100:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var104 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:nullable MClassDef(MClassDef)> */
if (unlikely(var104 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var102 = var104;
RET_LABEL103:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var107 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:nullable MClassDef(MClassDef)> */
if (unlikely(var107 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
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
{ /* Inline model_base$MEntity$is_broken= (var_mpropdef,1) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var_mpropdef->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
RET_LABEL110:(void)0;
}
}
var111 = NEW_nitc__MErrorType(&type_nitc__MErrorType);
{
{ /* Inline model$MClassDef$mmodule (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var114 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:nullable MClassDef(MClassDef)> */
if (unlikely(var114 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var112 = var114;
RET_LABEL113:(void)0;
}
}
{
{ /* Inline mmodule$MModule$model (var112) on <var112:MModule> */
var117 = var112->attrs[COLOR_nitc__mmodule__MModule___model].val; /* _model on <var112:MModule> */
if (unlikely(var117 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 77);
fatal_exit(1);
}
var115 = var117;
RET_LABEL116:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var111->class->vft[COLOR_nitc__model__MErrorType__model_61d]))(var111, var115); /* model= on <var111:MErrorType>*/
}
{
((void(*)(val* self))(var111->class->vft[COLOR_core__kernel__Object__init]))(var111); /* init on <var111:MErrorType>*/
}
{
{ /* Inline model$MVirtualTypeDef$bound= (var_mpropdef,var111) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
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
{ /* Inline parser_nodes$AClassdef$n_propdefs (var_nclassdef2) on <var_nclassdef2:AClassdef> */
var121 = var_nclassdef2->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef2:AClassdef> */
if (unlikely(var121 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1218);
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
nitc__modelize_property___ATypePropdef___APropdef__check_signature(var_npropdef128, self); /* Direct call modelize_property$ATypePropdef$check_signature on <var_npropdef128:APropdef(ATypePropdef)>*/
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
{ /* Inline parser_nodes$AClassdef$n_propdefs (var_nclassdef2) on <var_nclassdef2:AClassdef> */
var136 = var_nclassdef2->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef2:AClassdef> */
if (unlikely(var136 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1218);
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
nitc__modelize_property___ModelBuilder___process_default_constructors(self, var_nclassdef); /* Direct call modelize_property$ModelBuilder$process_default_constructors on <self:ModelBuilder>*/
}
RET_LABEL:;
}
/* method modelize_property$ModelBuilder$the_root_init_mmethod for (self: ModelBuilder): nullable MMethod */
val* nitc__modelize_property___ModelBuilder___the_root_init_mmethod(val* self) {
val* var /* : nullable MMethod */;
val* var1 /* : nullable MMethod */;
var1 = self->attrs[COLOR_nitc__modelize_property__ModelBuilder___the_root_init_mmethod].val; /* _the_root_init_mmethod on <self:ModelBuilder> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property$ModelBuilder$the_root_init_mmethod= for (self: ModelBuilder, nullable MMethod) */
void nitc__modelize_property___ModelBuilder___the_root_init_mmethod_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__modelize_property__ModelBuilder___the_root_init_mmethod].val = p0; /* _the_root_init_mmethod on <self:ModelBuilder> */
RET_LABEL:;
}
/* method modelize_property$ModelBuilder$process_default_constructors for (self: ModelBuilder, AClassdef) */
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
char* var13 /* : CString */;
val* var14 /* : String */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Int */;
val* var17 /* : nullable Bool */;
val* var18 /* : nullable Bool */;
short int var19 /* : Bool */;
short int var_ /* var : Bool */;
val* var20 /* : nullable MMethod */;
val* var22 /* : nullable MMethod */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : MMethod */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : CString */;
val* var33 /* : String */;
val* var34 /* : nullable Int */;
val* var35 /* : nullable Int */;
val* var36 /* : nullable Bool */;
val* var37 /* : nullable Bool */;
val* var38 /* : Location */;
val* var40 /* : Location */;
val* var41 /* : MClass */;
val* var43 /* : MClass */;
val* var44 /* : MVisibility */;
val* var46 /* : MVisibility */;
val* var_mprop /* var mprop: MMethod */;
val* var48 /* : MMethodDef */;
val* var49 /* : Location */;
val* var51 /* : Location */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var52 /* : Array[MParameter] */;
val* var_mparameters /* var mparameters: Array[MParameter] */;
val* var53 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var57 /* : ToolContext */;
val* var59 /* : ToolContext */;
val* var61 /* : NativeArray[String] */;
static val* varonce60;
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
val* var72 /* : String */;
val* var73 /* : String */;
val* var_defined_init /* var defined_init: nullable MMethodDef */;
val* var75 /* : Array[MPropDef] */;
val* var77 /* : Array[MPropDef] */;
val* var_78 /* var : Array[MPropDef] */;
val* var79 /* : IndexedIterator[nullable Object] */;
val* var_80 /* var : IndexedIterator[MPropDef] */;
short int var81 /* : Bool */;
val* var82 /* : nullable Object */;
val* var_mpropdef83 /* var mpropdef: MPropDef */;
short int var84 /* : Bool */;
int cltype;
int idtype;
short int var85 /* : Bool */;
val* var87 /* : MProperty */;
val* var89 /* : MProperty */;
short int var90 /* : Bool */;
short int var92 /* : Bool */;
short int var93 /* : Bool */;
val* var94 /* : MProperty */;
val* var96 /* : MProperty */;
short int var97 /* : Bool */;
short int var99 /* : Bool */;
short int var100 /* : Bool */;
short int var101 /* : Bool */;
short int var103 /* : Bool */;
short int var105 /* : Bool */;
val* var106 /* : MProperty */;
val* var108 /* : MProperty */;
val* var109 /* : String */;
val* var111 /* : String */;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : CString */;
val* var115 /* : String */;
val* var116 /* : nullable Int */;
val* var117 /* : nullable Int */;
val* var118 /* : nullable Bool */;
val* var119 /* : nullable Bool */;
short int var120 /* : Bool */;
short int var121 /* : Bool */;
int cltype122;
int idtype123;
short int var124 /* : Bool */;
val* var125 /* : Array[MParameter] */;
val* var_mparameters126 /* var mparameters: Array[MParameter] */;
val* var127 /* : Array[MProperty] */;
val* var_initializers /* var initializers: Array[MProperty] */;
val* var128 /* : ANodes[APropdef] */;
val* var130 /* : ANodes[APropdef] */;
val* var_131 /* var : ANodes[APropdef] */;
val* var132 /* : Iterator[ANode] */;
val* var_133 /* var : Iterator[APropdef] */;
short int var134 /* : Bool */;
val* var136 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
short int var137 /* : Bool */;
int cltype138;
int idtype139;
short int var140 /* : Bool */;
short int var142 /* : Bool */;
short int var143 /* : Bool */;
val* var145 /* : nullable MPropDef */;
val* var147 /* : nullable MPropDef */;
val* var_mpropdef148 /* var mpropdef: nullable MMethodDef */;
short int var149 /* : Bool */;
short int var150 /* : Bool */;
short int var152 /* : Bool */;
short int var154 /* : Bool */;
val* var155 /* : nullable MSignature */;
val* var157 /* : nullable MSignature */;
val* var_sig /* var sig: nullable MSignature */;
short int var158 /* : Bool */;
short int var159 /* : Bool */;
short int var161 /* : Bool */;
short int var163 /* : Bool */;
val* var164 /* : Array[MParameter] */;
val* var166 /* : Array[MParameter] */;
val* var167 /* : MProperty */;
val* var169 /* : MProperty */;
val* var170 /* : MProperty */;
val* var172 /* : MProperty */;
short int var174 /* : Bool */;
int cltype175;
int idtype176;
val* var177 /* : nullable MMethodDef */;
val* var179 /* : nullable MMethodDef */;
val* var_mreadpropdef /* var mreadpropdef: nullable MMethodDef */;
short int var180 /* : Bool */;
short int var181 /* : Bool */;
short int var183 /* : Bool */;
short int var185 /* : Bool */;
val* var186 /* : nullable MSignature */;
val* var188 /* : nullable MSignature */;
val* var_msignature189 /* var msignature: nullable MSignature */;
short int var190 /* : Bool */;
short int var191 /* : Bool */;
short int var193 /* : Bool */;
short int var195 /* : Bool */;
short int var196 /* : Bool */;
short int var198 /* : Bool */;
static val* varonce199;
val* var200 /* : String */;
char* var201 /* : CString */;
val* var202 /* : String */;
val* var203 /* : nullable Int */;
val* var204 /* : nullable Int */;
val* var205 /* : nullable Bool */;
val* var206 /* : nullable Bool */;
val* var207 /* : nullable AAnnotation */;
val* var_atlateinit /* var atlateinit: nullable AAnnotation */;
short int var208 /* : Bool */;
short int var209 /* : Bool */;
val* var_other211 /* var other: nullable Object */;
short int var212 /* : Bool */;
short int var213 /* : Bool */;
val* var214 /* : MProperty */;
val* var216 /* : MProperty */;
val* var217 /* : MProperty */;
val* var219 /* : MProperty */;
short int var221 /* : Bool */;
short int var222 /* : Bool */;
short int var224 /* : Bool */;
short int var_225 /* var : Bool */;
short int var226 /* : Bool */;
short int var228 /* : Bool */;
short int var229 /* : Bool */;
val* var230 /* : nullable MMethodDef */;
val* var232 /* : nullable MMethodDef */;
val* var_msetter /* var msetter: nullable MMethodDef */;
short int var233 /* : Bool */;
short int var234 /* : Bool */;
short int var236 /* : Bool */;
short int var238 /* : Bool */;
val* var239 /* : MProperty */;
val* var241 /* : MProperty */;
val* var242 /* : String */;
val* var244 /* : String */;
val* var_paramname /* var paramname: String */;
val* var245 /* : nullable MType */;
val* var247 /* : nullable MType */;
val* var_ret_type /* var ret_type: nullable MType */;
short int var248 /* : Bool */;
short int var249 /* : Bool */;
short int var251 /* : Bool */;
short int var253 /* : Bool */;
val* var254 /* : MParameter */;
val* var_mparameter /* var mparameter: MParameter */;
val* var255 /* : nullable MPropDef */;
val* var257 /* : nullable MPropDef */;
val* var258 /* : MProperty */;
val* var260 /* : MProperty */;
val* var261 /* : nullable MPropDef */;
val* var263 /* : nullable MPropDef */;
val* var264 /* : MProperty */;
val* var266 /* : MProperty */;
val* var268 /* : nullable MSignature */;
val* var270 /* : nullable MSignature */;
val* var271 /* : Array[MParameter] */;
val* var273 /* : Array[MParameter] */;
val* var274 /* : MProperty */;
val* var276 /* : MProperty */;
val* var277 /* : MProperty */;
val* var279 /* : MProperty */;
val* var281 /* : nullable MMethod */;
val* var283 /* : nullable MMethod */;
val* var_the_root_init_mmethod /* var the_root_init_mmethod: nullable MMethod */;
short int var284 /* : Bool */;
short int var285 /* : Bool */;
short int var287 /* : Bool */;
short int var289 /* : Bool */;
val* var290 /* : MModule */;
val* var292 /* : MModule */;
val* var293 /* : MClassType */;
val* var295 /* : MClassType */;
val* var296 /* : Array[MPropDef] */;
val* var_spropdefs /* var spropdefs: Array[MMethodDef] */;
short int var297 /* : Bool */;
val* var298 /* : ToolContext */;
val* var300 /* : ToolContext */;
val* var301 /* : Location */;
val* var303 /* : Location */;
val* var305 /* : NativeArray[String] */;
static val* varonce304;
static val* varonce306;
val* var307 /* : String */;
char* var308 /* : CString */;
val* var309 /* : String */;
val* var310 /* : nullable Int */;
val* var311 /* : nullable Int */;
val* var312 /* : nullable Bool */;
val* var313 /* : nullable Bool */;
static val* varonce314;
val* var315 /* : String */;
char* var316 /* : CString */;
val* var317 /* : String */;
val* var318 /* : nullable Int */;
val* var319 /* : nullable Int */;
val* var320 /* : nullable Bool */;
val* var321 /* : nullable Bool */;
static val* varonce322;
val* var323 /* : String */;
char* var324 /* : CString */;
val* var325 /* : String */;
val* var326 /* : nullable Int */;
val* var327 /* : nullable Int */;
val* var328 /* : nullable Bool */;
val* var329 /* : nullable Bool */;
val* var330 /* : String */;
val* var331 /* : MClassDef */;
val* var333 /* : MClassDef */;
val* var334 /* : String */;
val* var335 /* : String */;
val* var336 /* : Message */;
static val* varonce337;
val* var338 /* : String */;
char* var339 /* : CString */;
val* var340 /* : String */;
val* var341 /* : nullable Int */;
val* var342 /* : nullable Int */;
val* var343 /* : nullable Bool */;
val* var344 /* : nullable Bool */;
val* var345 /* : nullable AAnnotation */;
val* var_autoinit /* var autoinit: nullable AAnnotation */;
static val* varonce346;
val* var347 /* : String */;
char* var348 /* : CString */;
val* var349 /* : String */;
val* var350 /* : nullable Int */;
val* var351 /* : nullable Int */;
val* var352 /* : nullable Bool */;
val* var353 /* : nullable Bool */;
val* var354 /* : nullable AAnnotation */;
val* var_noautoinit /* var noautoinit: nullable AAnnotation */;
short int var355 /* : Bool */;
short int var356 /* : Bool */;
short int var358 /* : Bool */;
short int var359 /* : Bool */;
short int var360 /* : Bool */;
short int var361 /* : Bool */;
short int var363 /* : Bool */;
short int var364 /* : Bool */;
static val* varonce365;
val* var366 /* : String */;
char* var367 /* : CString */;
val* var368 /* : String */;
val* var369 /* : nullable Int */;
val* var370 /* : nullable Int */;
val* var371 /* : nullable Bool */;
val* var372 /* : nullable Bool */;
val* var373 /* : ANodes[AExpr] */;
val* var375 /* : ANodes[AExpr] */;
short int var376 /* : Bool */;
static val* varonce377;
val* var378 /* : String */;
char* var379 /* : CString */;
val* var380 /* : String */;
val* var381 /* : nullable Int */;
val* var382 /* : nullable Int */;
val* var383 /* : nullable Bool */;
val* var384 /* : nullable Bool */;
val* var385 /* : ANodes[AExpr] */;
val* var387 /* : ANodes[AExpr] */;
val* var_388 /* var : ANodes[AExpr] */;
val* var389 /* : Iterator[ANode] */;
val* var_390 /* var : Iterator[AExpr] */;
short int var391 /* : Bool */;
val* var393 /* : nullable Object */;
val* var_narg /* var narg: AExpr */;
val* var394 /* : nullable String */;
val* var_id /* var id: nullable String */;
short int var395 /* : Bool */;
short int var396 /* : Bool */;
static val* varonce397;
val* var398 /* : String */;
char* var399 /* : CString */;
val* var400 /* : String */;
val* var401 /* : nullable Int */;
val* var402 /* : nullable Int */;
val* var403 /* : nullable Bool */;
val* var404 /* : nullable Bool */;
static val* varonce405;
val* var406 /* : String */;
char* var407 /* : CString */;
val* var408 /* : String */;
val* var409 /* : nullable Int */;
val* var410 /* : nullable Int */;
val* var411 /* : nullable Bool */;
val* var412 /* : nullable Bool */;
val* var413 /* : Text */;
val* var414 /* : nullable MProperty */;
val* var_p /* var p: nullable MProperty */;
short int var415 /* : Bool */;
short int var416 /* : Bool */;
short int var418 /* : Bool */;
short int var420 /* : Bool */;
val* var421 /* : nullable MProperty */;
short int var422 /* : Bool */;
short int var423 /* : Bool */;
short int var425 /* : Bool */;
short int var427 /* : Bool */;
val* var429 /* : NativeArray[String] */;
static val* varonce428;
static val* varonce430;
val* var431 /* : String */;
char* var432 /* : CString */;
val* var433 /* : String */;
val* var434 /* : nullable Int */;
val* var435 /* : nullable Int */;
val* var436 /* : nullable Bool */;
val* var437 /* : nullable Bool */;
static val* varonce438;
val* var439 /* : String */;
char* var440 /* : CString */;
val* var441 /* : String */;
val* var442 /* : nullable Int */;
val* var443 /* : nullable Int */;
val* var444 /* : nullable Bool */;
val* var445 /* : nullable Bool */;
val* var446 /* : String */;
short int var447 /* : Bool */;
short int var449 /* : Bool */;
short int var450 /* : Bool */;
val* var452 /* : NativeArray[String] */;
static val* varonce451;
static val* varonce453;
val* var454 /* : String */;
char* var455 /* : CString */;
val* var456 /* : String */;
val* var457 /* : nullable Int */;
val* var458 /* : nullable Int */;
val* var459 /* : nullable Bool */;
val* var460 /* : nullable Bool */;
static val* varonce461;
val* var462 /* : String */;
char* var463 /* : CString */;
val* var464 /* : String */;
val* var465 /* : nullable Int */;
val* var466 /* : nullable Int */;
val* var467 /* : nullable Bool */;
val* var468 /* : nullable Bool */;
val* var469 /* : String */;
val* var470 /* : String */;
val* var471 /* : MPropDef */;
val* var473 /* : MPropDef */;
val* var_pd /* var pd: MPropDef */;
short int var474 /* : Bool */;
int cltype475;
int idtype476;
val* var477 /* : nullable MSignature */;
val* var479 /* : nullable MSignature */;
val* var480 /* : MClass */;
val* var482 /* : MClass */;
val* var483 /* : MClassType */;
val* var485 /* : MClassType */;
val* var486 /* : MClassType */;
val* var488 /* : MClassType */;
val* var489 /* : MModule */;
val* var491 /* : MModule */;
val* var492 /* : MSignature */;
val* var_sig493 /* var sig: MSignature */;
val* var494 /* : Array[MParameter] */;
val* var496 /* : Array[MParameter] */;
val* var497 /* : nullable Object */;
val* var_longest /* var longest: MMethodDef */;
long var498 /* : Int */;
long var500 /* : Int */;
short int var501 /* : Bool */;
short int var503 /* : Bool */;
int cltype504;
int idtype505;
const char* var_class_name;
short int var506 /* : Bool */;
val* var_507 /* var : Array[MMethodDef] */;
val* var508 /* : IndexedIterator[nullable Object] */;
val* var_509 /* var : IndexedIterator[MMethodDef] */;
short int var510 /* : Bool */;
val* var512 /* : nullable Object */;
val* var_spd /* var spd: MMethodDef */;
val* var513 /* : Array[MProperty] */;
val* var515 /* : Array[MProperty] */;
long var516 /* : Int */;
long var518 /* : Int */;
val* var519 /* : Array[MProperty] */;
val* var521 /* : Array[MProperty] */;
long var522 /* : Int */;
long var524 /* : Int */;
short int var525 /* : Bool */;
short int var527 /* : Bool */;
int cltype528;
int idtype529;
const char* var_class_name530;
short int var531 /* : Bool */;
short int var532 /* : Bool */;
short int var533 /* : Bool */;
short int var535 /* : Bool */;
short int var537 /* : Bool */;
val* var_538 /* var : Array[MMethodDef] */;
val* var539 /* : IndexedIterator[nullable Object] */;
val* var_540 /* var : IndexedIterator[MMethodDef] */;
short int var541 /* : Bool */;
val* var543 /* : nullable Object */;
val* var_spd544 /* var spd: MMethodDef */;
long var_i /* var i: Int */;
val* var545 /* : Array[MProperty] */;
val* var547 /* : Array[MProperty] */;
val* var_548 /* var : Array[MProperty] */;
val* var549 /* : IndexedIterator[nullable Object] */;
val* var_550 /* var : IndexedIterator[MProperty] */;
short int var551 /* : Bool */;
val* var553 /* : nullable Object */;
val* var_p554 /* var p: MProperty */;
val* var555 /* : Array[MProperty] */;
val* var557 /* : Array[MProperty] */;
val* var558 /* : nullable Object */;
short int var559 /* : Bool */;
short int var561 /* : Bool */;
short int var562 /* : Bool */;
val* var563 /* : ArraySet[MProperty] */;
val* var_proposal /* var proposal: ArraySet[MProperty] */;
val* var_564 /* var : Array[MMethodDef] */;
val* var565 /* : IndexedIterator[nullable Object] */;
val* var_566 /* var : IndexedIterator[MMethodDef] */;
short int var567 /* : Bool */;
val* var569 /* : nullable Object */;
val* var_spd2 /* var spd2: MMethodDef */;
val* var570 /* : Array[MProperty] */;
val* var572 /* : Array[MProperty] */;
val* var574 /* : NativeArray[String] */;
static val* varonce573;
static val* varonce575;
val* var576 /* : String */;
char* var577 /* : CString */;
val* var578 /* : String */;
val* var579 /* : nullable Int */;
val* var580 /* : nullable Int */;
val* var581 /* : nullable Bool */;
val* var582 /* : nullable Bool */;
static val* varonce583;
val* var584 /* : String */;
char* var585 /* : CString */;
val* var586 /* : String */;
val* var587 /* : nullable Int */;
val* var588 /* : nullable Int */;
val* var589 /* : nullable Bool */;
val* var590 /* : nullable Bool */;
static val* varonce591;
val* var592 /* : String */;
char* var593 /* : CString */;
val* var594 /* : String */;
val* var595 /* : nullable Int */;
val* var596 /* : nullable Int */;
val* var597 /* : nullable Bool */;
val* var598 /* : nullable Bool */;
static val* varonce599;
val* var600 /* : String */;
char* var601 /* : CString */;
val* var602 /* : String */;
val* var603 /* : nullable Int */;
val* var604 /* : nullable Int */;
val* var605 /* : nullable Bool */;
val* var606 /* : nullable Bool */;
static val* varonce607;
val* var608 /* : String */;
char* var609 /* : CString */;
val* var610 /* : String */;
val* var611 /* : nullable Int */;
val* var612 /* : nullable Int */;
val* var613 /* : nullable Bool */;
val* var614 /* : nullable Bool */;
static val* varonce615;
val* var616 /* : String */;
char* var617 /* : CString */;
val* var618 /* : String */;
val* var619 /* : nullable Int */;
val* var620 /* : nullable Int */;
val* var621 /* : nullable Bool */;
val* var622 /* : nullable Bool */;
static val* varonce623;
val* var624 /* : String */;
char* var625 /* : CString */;
val* var626 /* : String */;
val* var627 /* : nullable Int */;
val* var628 /* : nullable Int */;
val* var629 /* : nullable Bool */;
val* var630 /* : nullable Bool */;
val* var631 /* : MClass */;
val* var633 /* : MClass */;
val* var634 /* : String */;
val* var635 /* : String */;
val* var636 /* : Array[MProperty] */;
val* var638 /* : Array[MProperty] */;
static val* varonce639;
val* var640 /* : String */;
char* var641 /* : CString */;
val* var642 /* : String */;
val* var643 /* : nullable Int */;
val* var644 /* : nullable Int */;
val* var645 /* : nullable Bool */;
val* var646 /* : nullable Bool */;
val* var647 /* : String */;
val* var648 /* : String */;
val* var649 /* : Array[MProperty] */;
val* var651 /* : Array[MProperty] */;
static val* varonce652;
val* var653 /* : String */;
char* var654 /* : CString */;
val* var655 /* : String */;
val* var656 /* : nullable Int */;
val* var657 /* : nullable Int */;
val* var658 /* : nullable Bool */;
val* var659 /* : nullable Bool */;
val* var660 /* : String */;
static val* varonce661;
val* var662 /* : String */;
char* var663 /* : CString */;
val* var664 /* : String */;
val* var665 /* : nullable Int */;
val* var666 /* : nullable Int */;
val* var667 /* : nullable Bool */;
val* var668 /* : nullable Bool */;
val* var669 /* : String */;
val* var670 /* : String */;
long var671 /* : Int */;
short int var673 /* : Bool */;
int cltype674;
int idtype675;
const char* var_class_name676;
long var677 /* : Int */;
short int var678 /* : Bool */;
short int var679 /* : Bool */;
short int var681 /* : Bool */;
short int var682 /* : Bool */;
short int var683 /* : Bool */;
short int var684 /* : Bool */;
short int var_685 /* var : Bool */;
val* var686 /* : Array[MProperty] */;
val* var688 /* : Array[MProperty] */;
short int var689 /* : Bool */;
static val* varonce690;
val* var691 /* : String */;
char* var692 /* : CString */;
val* var693 /* : String */;
val* var694 /* : nullable Int */;
val* var695 /* : nullable Int */;
val* var696 /* : nullable Bool */;
val* var697 /* : nullable Bool */;
static val* varonce698;
val* var699 /* : String */;
char* var700 /* : CString */;
val* var701 /* : String */;
val* var702 /* : nullable Int */;
val* var703 /* : nullable Int */;
val* var704 /* : nullable Bool */;
val* var705 /* : nullable Bool */;
short int var706 /* : Bool */;
short int var707 /* : Bool */;
long var708 /* : Int */;
long var710 /* : Int */;
short int var711 /* : Bool */;
short int var713 /* : Bool */;
short int var_714 /* var : Bool */;
short int var715 /* : Bool */;
short int var_716 /* var : Bool */;
short int var717 /* : Bool */;
short int var718 /* : Bool */;
short int var720 /* : Bool */;
short int var722 /* : Bool */;
val* var723 /* : ToolContext */;
val* var725 /* : ToolContext */;
val* var727 /* : NativeArray[String] */;
static val* varonce726;
static val* varonce728;
val* var729 /* : String */;
char* var730 /* : CString */;
val* var731 /* : String */;
val* var732 /* : nullable Int */;
val* var733 /* : nullable Int */;
val* var734 /* : nullable Bool */;
val* var735 /* : nullable Bool */;
val* var736 /* : String */;
val* var737 /* : String */;
val* var738 /* : String */;
val* var739 /* : MClass */;
val* var741 /* : MClass */;
val* var743 /* : Array[MProperty] */;
val* var745 /* : Array[MProperty] */;
long var746 /* : Int */;
long var748 /* : Int */;
short int var749 /* : Bool */;
short int var751 /* : Bool */;
int cltype752;
int idtype753;
const char* var_class_name754;
short int var755 /* : Bool */;
val* var756 /* : nullable MSignature */;
val* var758 /* : nullable MSignature */;
val* var759 /* : Array[MParameter] */;
val* var761 /* : Array[MParameter] */;
val* var762 /* : Array[MProperty] */;
val* var764 /* : Array[MProperty] */;
short int var765 /* : Bool */;
short int var766 /* : Bool */;
short int var768 /* : Bool */;
short int var769 /* : Bool */;
val* var770 /* : Array[MProperty] */;
val* var772 /* : Array[MProperty] */;
val* var773 /* : MSignature */;
val* var_msignature774 /* var msignature: MSignature */;
val* var776 /* : ToolContext */;
val* var778 /* : ToolContext */;
val* var780 /* : NativeArray[String] */;
static val* varonce779;
static val* varonce781;
val* var782 /* : String */;
char* var783 /* : CString */;
val* var784 /* : String */;
val* var785 /* : nullable Int */;
val* var786 /* : nullable Int */;
val* var787 /* : nullable Bool */;
val* var788 /* : nullable Bool */;
val* var789 /* : String */;
val* var790 /* : String */;
val* var791 /* : String */;
val* var792 /* : String */;
val* var793 /* : MClass */;
val* var795 /* : MClass */;
val* var_mprop797 /* var mprop: MMethod */;
val* var798 /* : MMethodDef */;
val* var799 /* : Location */;
val* var801 /* : Location */;
val* var_mpropdef802 /* var mpropdef: MMethodDef */;
val* var804 /* : Array[MProperty] */;
val* var806 /* : Array[MProperty] */;
val* var807 /* : MSignature */;
val* var_msignature808 /* var msignature: MSignature */;
val* var810 /* : MSignature */;
val* var811 /* : Array[MParameter] */;
val* var813 /* : ToolContext */;
val* var815 /* : ToolContext */;
val* var817 /* : NativeArray[String] */;
static val* varonce816;
static val* varonce818;
val* var819 /* : String */;
char* var820 /* : CString */;
val* var821 /* : String */;
val* var822 /* : nullable Int */;
val* var823 /* : nullable Int */;
val* var824 /* : nullable Bool */;
val* var825 /* : nullable Bool */;
val* var826 /* : String */;
val* var827 /* : String */;
val* var828 /* : String */;
val* var829 /* : String */;
val* var830 /* : MClass */;
val* var832 /* : MClass */;
var_nclassdef = p0;
{
{ /* Inline modelize_class$AClassdef$mclassdef (var_nclassdef) on <var_nclassdef:AClassdef> */
var2 = var_nclassdef->attrs[COLOR_nitc__modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_nclassdef:AClassdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 139);
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
{ /* Inline model$MClassDef$mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var8 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline model$MClass$name (var6) on <var6:MClass> */
var11 = var6->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var6:MClass> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
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
var15 = (val*)(6l<<2|1);
var16 = (val*)(6l<<2|1);
var17 = (val*)((long)(0)<<2|3);
var18 = (val*)((long)(0)<<2|3);
var14 = core__flat___CString___to_s_unsafe(var13, var15, var16, var17, var18);
var12 = var14;
varonce = var12;
}
{
var19 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_core__kernel__Object___61d_61d]))(var9, var12); /* == on <var9:String>*/
}
var_ = var19;
if (var19){
{
{ /* Inline modelize_property$ModelBuilder$the_root_init_mmethod (self) on <self:ModelBuilder> */
var22 = self->attrs[COLOR_nitc__modelize_property__ModelBuilder___the_root_init_mmethod].val; /* _the_root_init_mmethod on <self:ModelBuilder> */
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
{ /* Inline kernel$Object$== (var20,((val*)NULL)) on <var20:nullable MMethod> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var20,var_other) on <var20:nullable MMethod(MMethod)> */
var28 = var20 == var_other;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
var23 = var24;
}
var5 = var23;
} else {
var5 = var_;
}
if (var5){
var29 = NEW_nitc__MMethod(&type_nitc__MMethod);
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "init";
var34 = (val*)(4l<<2|1);
var35 = (val*)(4l<<2|1);
var36 = (val*)((long)(0)<<2|3);
var37 = (val*)((long)(0)<<2|3);
var33 = core__flat___CString___to_s_unsafe(var32, var34, var35, var36, var37);
var31 = var33;
varonce30 = var31;
}
{
{ /* Inline parser_nodes$ANode$location (var_nclassdef) on <var_nclassdef:AClassdef> */
var40 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_nclassdef:AClassdef> */
if (unlikely(var40 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline model$MClassDef$mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var43 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var43 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline model$MClass$visibility (var41) on <var41:MClass> */
var46 = var41->attrs[COLOR_nitc__model__MClass___visibility].val; /* _visibility on <var41:MClass> */
if (unlikely(var46 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 476);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var29->class->vft[COLOR_nitc__model__MProperty__intro_mclassdef_61d]))(var29, var_mclassdef); /* intro_mclassdef= on <var29:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var29->class->vft[COLOR_nitc__model__MProperty__name_61d]))(var29, var31); /* name= on <var29:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var29->class->vft[COLOR_nitc__model__MProperty__location_61d]))(var29, var38); /* location= on <var29:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var29->class->vft[COLOR_nitc__model__MProperty__visibility_61d]))(var29, var44); /* visibility= on <var29:MMethod>*/
}
{
((void(*)(val* self))(var29->class->vft[COLOR_core__kernel__Object__init]))(var29); /* init on <var29:MMethod>*/
}
var_mprop = var29;
{
{ /* Inline model$MMethod$is_root_init= (var_mprop,1) on <var_mprop:MMethod> */
var_mprop->attrs[COLOR_nitc__model__MMethod___is_root_init].s = 1; /* _is_root_init on <var_mprop:MMethod> */
RET_LABEL47:(void)0;
}
}
var48 = NEW_nitc__MMethodDef(&type_nitc__MMethodDef);
{
{ /* Inline parser_nodes$ANode$location (var_nclassdef) on <var_nclassdef:AClassdef> */
var51 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_nclassdef:AClassdef> */
if (unlikely(var51 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var48->class->vft[COLOR_nitc__model__MPropDef__mclassdef_61d]))(var48, var_mclassdef); /* mclassdef= on <var48:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var48->class->vft[COLOR_nitc__model__MPropDef__mproperty_61d]))(var48, var_mprop); /* mproperty= on <var48:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var48->class->vft[COLOR_nitc__model__MPropDef__location_61d]))(var48, var49); /* location= on <var48:MMethodDef>*/
}
{
((void(*)(val* self))(var48->class->vft[COLOR_core__kernel__Object__init]))(var48); /* init on <var48:MMethodDef>*/
}
var_mpropdef = var48;
var52 = NEW_core__Array(&type_core__Array__nitc__MParameter);
{
core___core__Array___core__kernel__Object__init(var52); /* Direct call array$Array$init on <var52:Array[MParameter]>*/
}
var_mparameters = var52;
var53 = NEW_nitc__MSignature(&type_nitc__MSignature);
{
((void(*)(val* self, val* p0))(var53->class->vft[COLOR_nitc__model__MSignature__mparameters_61d]))(var53, var_mparameters); /* mparameters= on <var53:MSignature>*/
}
{
((void(*)(val* self, val* p0))(var53->class->vft[COLOR_nitc__model__MSignature__return_mtype_61d]))(var53, ((val*)NULL)); /* return_mtype= on <var53:MSignature>*/
}
{
((void(*)(val* self))(var53->class->vft[COLOR_core__kernel__Object__init]))(var53); /* init on <var53:MSignature>*/
}
var_msignature = var53;
{
{ /* Inline model$MMethodDef$msignature= (var_mpropdef,var_msignature) on <var_mpropdef:MMethodDef> */
var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val = var_msignature; /* _msignature on <var_mpropdef:MMethodDef> */
RET_LABEL54:(void)0;
}
}
{
{ /* Inline model$MMethodDef$new_msignature= (var_mpropdef,var_msignature) on <var_mpropdef:MMethodDef> */
var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___new_msignature].val = var_msignature; /* _new_msignature on <var_mpropdef:MMethodDef> */
RET_LABEL55:(void)0;
}
}
{
{ /* Inline model$MMethod$is_init= (var_mprop,1) on <var_mprop:MMethod> */
var_mprop->attrs[COLOR_nitc__model__MMethod___is_init].s = 1; /* _is_init on <var_mprop:MMethod> */
RET_LABEL56:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var59 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var59 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
if (unlikely(varonce60==NULL)) {
var61 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = " gets a free empty constructor ";
var66 = (val*)(31l<<2|1);
var67 = (val*)(31l<<2|1);
var68 = (val*)((long)(0)<<2|3);
var69 = (val*)((long)(0)<<2|3);
var65 = core__flat___CString___to_s_unsafe(var64, var66, var67, var68, var69);
var63 = var65;
varonce62 = var63;
}
((struct instance_core__NativeArray*)var61)->values[1]=var63;
} else {
var61 = varonce60;
varonce60 = NULL;
}
{
var70 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:MClassDef>*/
}
((struct instance_core__NativeArray*)var61)->values[0]=var70;
{
var71 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:MMethodDef>*/
}
((struct instance_core__NativeArray*)var61)->values[2]=var71;
{
var72 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_msignature); /* to_s on <var_msignature:MSignature>*/
}
((struct instance_core__NativeArray*)var61)->values[3]=var72;
{
var73 = ((val*(*)(val* self))(var61->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var61); /* native_to_s on <var61:NativeArray[String]>*/
}
varonce60 = var61;
{
nitc___nitc__ToolContext___info(var57, var73, 3l); /* Direct call toolcontext$ToolContext$info on <var57:ToolContext>*/
}
{
{ /* Inline modelize_property$ModelBuilder$the_root_init_mmethod= (self,var_mprop) on <self:ModelBuilder> */
self->attrs[COLOR_nitc__modelize_property__ModelBuilder___the_root_init_mmethod].val = var_mprop; /* _the_root_init_mmethod on <self:ModelBuilder> */
RET_LABEL74:(void)0;
}
}
goto RET_LABEL;
} else {
}
var_defined_init = ((val*)NULL);
{
{ /* Inline model$MClassDef$mpropdefs (var_mclassdef) on <var_mclassdef:MClassDef> */
var77 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mpropdefs].val; /* _mpropdefs on <var_mclassdef:MClassDef> */
if (unlikely(var77 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 723);
fatal_exit(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
var_78 = var75;
{
var79 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_78);
}
var_80 = var79;
for(;;) {
{
var81 = ((short int(*)(val* self))((((long)var_80&3)?class_info[((long)var_80&3)]:var_80->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_80); /* is_ok on <var_80:IndexedIterator[MPropDef]>*/
}
if (var81){
} else {
goto BREAK_label;
}
{
var82 = ((val*(*)(val* self))((((long)var_80&3)?class_info[((long)var_80&3)]:var_80->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_80); /* item on <var_80:IndexedIterator[MPropDef]>*/
}
var_mpropdef83 = var82;
/* <var_mpropdef83:MPropDef> isa MMethodDef */
cltype = type_nitc__MMethodDef.color;
idtype = type_nitc__MMethodDef.id;
if(cltype >= var_mpropdef83->type->table_size) {
var84 = 0;
} else {
var84 = var_mpropdef83->type->type_table[cltype] == idtype;
}
var85 = !var84;
if (var85){
goto BREAK_label86;
} else {
}
{
{ /* Inline model$MPropDef$mproperty (var_mpropdef83) on <var_mpropdef83:MPropDef(MMethodDef)> */
var89 = var_mpropdef83->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef83:MPropDef(MMethodDef)> */
if (unlikely(var89 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var87 = var89;
RET_LABEL88:(void)0;
}
}
{
{ /* Inline model$MMethod$is_init (var87) on <var87:MProperty(MMethod)> */
var92 = var87->attrs[COLOR_nitc__model__MMethod___is_init].s; /* _is_init on <var87:MProperty(MMethod)> */
var90 = var92;
RET_LABEL91:(void)0;
}
}
var93 = !var90;
if (var93){
goto BREAK_label86;
} else {
}
{
{ /* Inline model$MPropDef$mproperty (var_mpropdef83) on <var_mpropdef83:MPropDef(MMethodDef)> */
var96 = var_mpropdef83->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef83:MPropDef(MMethodDef)> */
if (unlikely(var96 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
{
{ /* Inline model$MMethod$is_root_init (var94) on <var94:MProperty(MMethod)> */
var99 = var94->attrs[COLOR_nitc__model__MMethod___is_root_init].s; /* _is_root_init on <var94:MProperty(MMethod)> */
var97 = var99;
RET_LABEL98:(void)0;
}
}
if (var97){
if (var_defined_init == NULL) {
var100 = 1; /* is null */
} else {
var100 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_defined_init,((val*)NULL)) on <var_defined_init:nullable MMethodDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_defined_init,var_other) on <var_defined_init:nullable MMethodDef(MMethodDef)> */
var105 = var_defined_init == var_other;
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
if (unlikely(!var100)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 166);
fatal_exit(1);
}
var_defined_init = var_mpropdef83;
} else {
{
{ /* Inline model$MPropDef$mproperty (var_mpropdef83) on <var_mpropdef83:MPropDef(MMethodDef)> */
var108 = var_mpropdef83->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef83:MPropDef(MMethodDef)> */
if (unlikely(var108 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var106 = var108;
RET_LABEL107:(void)0;
}
}
{
{ /* Inline model$MProperty$name (var106) on <var106:MProperty(MMethod)> */
var111 = var106->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var106:MProperty(MMethod)> */
if (unlikely(var111 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var109 = var111;
RET_LABEL110:(void)0;
}
}
if (likely(varonce112!=NULL)) {
var113 = varonce112;
} else {
var114 = "init";
var116 = (val*)(4l<<2|1);
var117 = (val*)(4l<<2|1);
var118 = (val*)((long)(0)<<2|3);
var119 = (val*)((long)(0)<<2|3);
var115 = core__flat___CString___to_s_unsafe(var114, var116, var117, var118, var119);
var113 = var115;
varonce112 = var113;
}
{
var120 = ((short int(*)(val* self, val* p0))(var109->class->vft[COLOR_core__kernel__Object___61d_61d]))(var109, var113); /* == on <var109:String>*/
}
if (var120){
goto RET_LABEL;
} else {
}
}
BREAK_label86: (void)0;
{
((void(*)(val* self))((((long)var_80&3)?class_info[((long)var_80&3)]:var_80->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_80); /* next on <var_80:IndexedIterator[MPropDef]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_80&3)?class_info[((long)var_80&3)]:var_80->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_80); /* finish on <var_80:IndexedIterator[MPropDef]>*/
}
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype122 = type_nitc__AStdClassdef.color;
idtype123 = type_nitc__AStdClassdef.id;
if(cltype122 >= var_nclassdef->type->table_size) {
var121 = 0;
} else {
var121 = var_nclassdef->type->type_table[cltype122] == idtype123;
}
var124 = !var121;
if (var124){
goto RET_LABEL;
} else {
}
var125 = NEW_core__Array(&type_core__Array__nitc__MParameter);
{
core___core__Array___core__kernel__Object__init(var125); /* Direct call array$Array$init on <var125:Array[MParameter]>*/
}
var_mparameters126 = var125;
var127 = NEW_core__Array(&type_core__Array__nitc__MProperty);
{
core___core__Array___core__kernel__Object__init(var127); /* Direct call array$Array$init on <var127:Array[MProperty]>*/
}
var_initializers = var127;
{
{ /* Inline parser_nodes$AClassdef$n_propdefs (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var130 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var130 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1218);
fatal_exit(1);
}
var128 = var130;
RET_LABEL129:(void)0;
}
}
var_131 = var128;
{
var132 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_131);
}
var_133 = var132;
for(;;) {
{
var134 = ((short int(*)(val* self))((((long)var_133&3)?class_info[((long)var_133&3)]:var_133->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_133); /* is_ok on <var_133:Iterator[APropdef]>*/
}
if (var134){
} else {
goto BREAK_label135;
}
{
var136 = ((val*(*)(val* self))((((long)var_133&3)?class_info[((long)var_133&3)]:var_133->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_133); /* item on <var_133:Iterator[APropdef]>*/
}
var_npropdef = var136;
/* <var_npropdef:APropdef> isa AMethPropdef */
cltype138 = type_nitc__AMethPropdef.color;
idtype139 = type_nitc__AMethPropdef.id;
if(cltype138 >= var_npropdef->type->table_size) {
var137 = 0;
} else {
var137 = var_npropdef->type->type_table[cltype138] == idtype139;
}
if (var137){
{
{ /* Inline modelize_property$AMethPropdef$is_autoinit (var_npropdef) on <var_npropdef:APropdef(AMethPropdef)> */
var142 = var_npropdef->attrs[COLOR_nitc__modelize_property__AMethPropdef___is_autoinit].s; /* _is_autoinit on <var_npropdef:APropdef(AMethPropdef)> */
var140 = var142;
RET_LABEL141:(void)0;
}
}
var143 = !var140;
if (var143){
goto BREAK_label144;
} else {
}
{
{ /* Inline modelize_property$APropdef$mpropdef (var_npropdef) on <var_npropdef:APropdef(AMethPropdef)> */
var147 = var_npropdef->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:APropdef(AMethPropdef)> */
var145 = var147;
RET_LABEL146:(void)0;
}
}
var_mpropdef148 = var145;
if (var_mpropdef148 == NULL) {
var149 = 1; /* is null */
} else {
var149 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mpropdef148,((val*)NULL)) on <var_mpropdef148:nullable MMethodDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mpropdef148,var_other) on <var_mpropdef148:nullable MMethodDef(MMethodDef)> */
var154 = var_mpropdef148 == var_other;
var152 = var154;
goto RET_LABEL153;
RET_LABEL153:(void)0;
}
}
var150 = var152;
goto RET_LABEL151;
RET_LABEL151:(void)0;
}
var149 = var150;
}
if (var149){
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MMethodDef$msignature (var_mpropdef148) on <var_mpropdef148:nullable MMethodDef(MMethodDef)> */
var157 = var_mpropdef148->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef148:nullable MMethodDef(MMethodDef)> */
var155 = var157;
RET_LABEL156:(void)0;
}
}
var_sig = var155;
if (var_sig == NULL) {
var158 = 1; /* is null */
} else {
var158 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_sig,((val*)NULL)) on <var_sig:nullable MSignature> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_sig,var_other) on <var_sig:nullable MSignature(MSignature)> */
var163 = var_sig == var_other;
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
goto BREAK_label144;
} else {
}
{
{ /* Inline model$MSignature$mparameters (var_sig) on <var_sig:nullable MSignature(MSignature)> */
var166 = var_sig->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_sig:nullable MSignature(MSignature)> */
if (unlikely(var166 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var164 = var166;
RET_LABEL165:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var_mparameters126, var164); /* Direct call array$Array$add_all on <var_mparameters126:Array[MParameter]>*/
}
{
{ /* Inline model$MPropDef$mproperty (var_mpropdef148) on <var_mpropdef148:nullable MMethodDef(MMethodDef)> */
var169 = var_mpropdef148->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef148:nullable MMethodDef(MMethodDef)> */
if (unlikely(var169 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var167 = var169;
RET_LABEL168:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_initializers, var167); /* Direct call array$Array$add on <var_initializers:Array[MProperty]>*/
}
{
{ /* Inline model$MPropDef$mproperty (var_mpropdef148) on <var_mpropdef148:nullable MMethodDef(MMethodDef)> */
var172 = var_mpropdef148->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef148:nullable MMethodDef(MMethodDef)> */
if (unlikely(var172 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var170 = var172;
RET_LABEL171:(void)0;
}
}
{
{ /* Inline model$MProperty$is_autoinit= (var170,1) on <var170:MProperty(MMethod)> */
var170->attrs[COLOR_nitc__model__MProperty___is_autoinit].s = 1; /* _is_autoinit on <var170:MProperty(MMethod)> */
RET_LABEL173:(void)0;
}
}
} else {
}
/* <var_npropdef:APropdef> isa AAttrPropdef */
cltype175 = type_nitc__AAttrPropdef.color;
idtype176 = type_nitc__AAttrPropdef.id;
if(cltype175 >= var_npropdef->type->table_size) {
var174 = 0;
} else {
var174 = var_npropdef->type->type_table[cltype175] == idtype176;
}
if (var174){
{
{ /* Inline modelize_property$AAttrPropdef$mreadpropdef (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var179 = var_npropdef->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mreadpropdef].val; /* _mreadpropdef on <var_npropdef:APropdef(AAttrPropdef)> */
var177 = var179;
RET_LABEL178:(void)0;
}
}
var_mreadpropdef = var177;
if (var_mreadpropdef == NULL) {
var180 = 1; /* is null */
} else {
var180 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mreadpropdef,((val*)NULL)) on <var_mreadpropdef:nullable MMethodDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mreadpropdef,var_other) on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var185 = var_mreadpropdef == var_other;
var183 = var185;
goto RET_LABEL184;
RET_LABEL184:(void)0;
}
}
var181 = var183;
goto RET_LABEL182;
RET_LABEL182:(void)0;
}
var180 = var181;
}
if (var180){
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MMethodDef$msignature (var_mreadpropdef) on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var188 = var_mreadpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var186 = var188;
RET_LABEL187:(void)0;
}
}
var_msignature189 = var186;
if (var_msignature189 == NULL) {
var190 = 1; /* is null */
} else {
var190 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_msignature189,((val*)NULL)) on <var_msignature189:nullable MSignature> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_msignature189,var_other) on <var_msignature189:nullable MSignature(MSignature)> */
var195 = var_msignature189 == var_other;
var193 = var195;
goto RET_LABEL194;
RET_LABEL194:(void)0;
}
}
var191 = var193;
goto RET_LABEL192;
RET_LABEL192:(void)0;
}
var190 = var191;
}
if (var190){
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property$AAttrPropdef$noinit (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var198 = var_npropdef->attrs[COLOR_nitc__modelize_property__AAttrPropdef___noinit].s; /* _noinit on <var_npropdef:APropdef(AAttrPropdef)> */
var196 = var198;
RET_LABEL197:(void)0;
}
}
if (var196){
goto BREAK_label144;
} else {
}
if (likely(varonce199!=NULL)) {
var200 = varonce199;
} else {
var201 = "lateinit";
var203 = (val*)(8l<<2|1);
var204 = (val*)(8l<<2|1);
var205 = (val*)((long)(0)<<2|3);
var206 = (val*)((long)(0)<<2|3);
var202 = core__flat___CString___to_s_unsafe(var201, var203, var204, var205, var206);
var200 = var202;
varonce199 = var200;
}
{
var207 = nitc__annotation___Prod___get_single_annotation(var_npropdef, var200, self);
}
var_atlateinit = var207;
if (var_atlateinit == NULL) {
var208 = 0; /* is null */
} else {
var208 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_atlateinit,((val*)NULL)) on <var_atlateinit:nullable AAnnotation> */
var_other211 = ((val*)NULL);
{
var212 = ((short int(*)(val* self, val* p0))(var_atlateinit->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atlateinit, var_other211); /* == on <var_atlateinit:nullable AAnnotation(AAnnotation)>*/
}
var213 = !var212;
var209 = var213;
goto RET_LABEL210;
RET_LABEL210:(void)0;
}
var208 = var209;
}
if (var208){
{
{ /* Inline model$MPropDef$mproperty (var_mreadpropdef) on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var216 = var_mreadpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var216 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var214 = var216;
RET_LABEL215:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_initializers, var214); /* Direct call array$Array$add on <var_initializers:Array[MProperty]>*/
}
{
{ /* Inline model$MPropDef$mproperty (var_mreadpropdef) on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var219 = var_mreadpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var219 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var217 = var219;
RET_LABEL218:(void)0;
}
}
{
{ /* Inline model$MProperty$is_autoinit= (var217,1) on <var217:MProperty(MMethod)> */
var217->attrs[COLOR_nitc__model__MProperty___is_autoinit].s = 1; /* _is_autoinit on <var217:MProperty(MMethod)> */
RET_LABEL220:(void)0;
}
}
goto BREAK_label144;
} else {
}
{
{ /* Inline modelize_property$AAttrPropdef$has_value (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var224 = var_npropdef->attrs[COLOR_nitc__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <var_npropdef:APropdef(AAttrPropdef)> */
var222 = var224;
RET_LABEL223:(void)0;
}
}
var_225 = var222;
if (var222){
{
{ /* Inline modelize_property$AAttrPropdef$is_optional (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var228 = var_npropdef->attrs[COLOR_nitc__modelize_property__AAttrPropdef___is_optional].s; /* _is_optional on <var_npropdef:APropdef(AAttrPropdef)> */
var226 = var228;
RET_LABEL227:(void)0;
}
}
var229 = !var226;
var221 = var229;
} else {
var221 = var_225;
}
if (var221){
goto BREAK_label144;
} else {
}
{
{ /* Inline modelize_property$AAttrPropdef$mwritepropdef (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var232 = var_npropdef->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mwritepropdef].val; /* _mwritepropdef on <var_npropdef:APropdef(AAttrPropdef)> */
var230 = var232;
RET_LABEL231:(void)0;
}
}
var_msetter = var230;
if (var_msetter == NULL) {
var233 = 1; /* is null */
} else {
var233 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_msetter,((val*)NULL)) on <var_msetter:nullable MMethodDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_msetter,var_other) on <var_msetter:nullable MMethodDef(MMethodDef)> */
var238 = var_msetter == var_other;
var236 = var238;
goto RET_LABEL237;
RET_LABEL237:(void)0;
}
}
var234 = var236;
goto RET_LABEL235;
RET_LABEL235:(void)0;
}
var233 = var234;
}
if (var233){
{
{ /* Inline model$MPropDef$mproperty (var_mreadpropdef) on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var241 = var_mreadpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var241 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var239 = var241;
RET_LABEL240:(void)0;
}
}
{
{ /* Inline model$MProperty$name (var239) on <var239:MProperty(MMethod)> */
var244 = var239->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var239:MProperty(MMethod)> */
if (unlikely(var244 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var242 = var244;
RET_LABEL243:(void)0;
}
}
var_paramname = var242;
{
{ /* Inline model$MSignature$return_mtype (var_msignature189) on <var_msignature189:nullable MSignature(MSignature)> */
var247 = var_msignature189->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature189:nullable MSignature(MSignature)> */
var245 = var247;
RET_LABEL246:(void)0;
}
}
var_ret_type = var245;
if (var_ret_type == NULL) {
var248 = 1; /* is null */
} else {
var248 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_ret_type,((val*)NULL)) on <var_ret_type:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_ret_type,var_other) on <var_ret_type:nullable MType(MType)> */
var253 = var_ret_type == var_other;
var251 = var253;
goto RET_LABEL252;
RET_LABEL252:(void)0;
}
}
var249 = var251;
goto RET_LABEL250;
RET_LABEL250:(void)0;
}
var248 = var249;
}
if (var248){
goto RET_LABEL;
} else {
}
var254 = NEW_nitc__MParameter(&type_nitc__MParameter);
{
((void(*)(val* self, val* p0))(var254->class->vft[COLOR_nitc__model__MParameter__name_61d]))(var254, var_paramname); /* name= on <var254:MParameter>*/
}
{
((void(*)(val* self, val* p0))(var254->class->vft[COLOR_nitc__model__MParameter__mtype_61d]))(var254, var_ret_type); /* mtype= on <var254:MParameter>*/
}
{
((void(*)(val* self, short int p0))(var254->class->vft[COLOR_nitc__model__MParameter__is_vararg_61d]))(var254, 0); /* is_vararg= on <var254:MParameter>*/
}
{
((void(*)(val* self))(var254->class->vft[COLOR_core__kernel__Object__init]))(var254); /* init on <var254:MParameter>*/
}
var_mparameter = var254;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_mparameters126, var_mparameter); /* Direct call array$Array$add on <var_mparameters126:Array[MParameter]>*/
}
{
{ /* Inline modelize_property$APropdef$mpropdef (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var257 = var_npropdef->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:APropdef(AAttrPropdef)> */
var255 = var257;
RET_LABEL256:(void)0;
}
}
if (var255 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 215);
fatal_exit(1);
} else {
{ /* Inline model$MPropDef$mproperty (var255) on <var255:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var255 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var260 = var255->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var255:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var260 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var258 = var260;
RET_LABEL259:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_initializers, var258); /* Direct call array$Array$add on <var_initializers:Array[MProperty]>*/
}
{
{ /* Inline modelize_property$APropdef$mpropdef (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var263 = var_npropdef->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:APropdef(AAttrPropdef)> */
var261 = var263;
RET_LABEL262:(void)0;
}
}
if (var261 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 216);
fatal_exit(1);
} else {
{ /* Inline model$MPropDef$mproperty (var261) on <var261:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var261 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var266 = var261->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var261:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var266 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var264 = var266;
RET_LABEL265:(void)0;
}
}
{
{ /* Inline model$MProperty$is_autoinit= (var264,1) on <var264:MProperty(MAttribute)> */
var264->attrs[COLOR_nitc__model__MProperty___is_autoinit].s = 1; /* _is_autoinit on <var264:MProperty(MAttribute)> */
RET_LABEL267:(void)0;
}
}
} else {
{
{ /* Inline model$MMethodDef$msignature (var_msetter) on <var_msetter:nullable MMethodDef(MMethodDef)> */
var270 = var_msetter->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_msetter:nullable MMethodDef(MMethodDef)> */
var268 = var270;
RET_LABEL269:(void)0;
}
}
if (var268 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 219);
fatal_exit(1);
} else {
{ /* Inline model$MSignature$mparameters (var268) on <var268:nullable MSignature> */
if (unlikely(var268 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var273 = var268->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var268:nullable MSignature> */
if (unlikely(var273 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var271 = var273;
RET_LABEL272:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var_mparameters126, var271); /* Direct call array$Array$add_all on <var_mparameters126:Array[MParameter]>*/
}
{
{ /* Inline model$MPropDef$mproperty (var_msetter) on <var_msetter:nullable MMethodDef(MMethodDef)> */
var276 = var_msetter->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_msetter:nullable MMethodDef(MMethodDef)> */
if (unlikely(var276 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var274 = var276;
RET_LABEL275:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_initializers, var274); /* Direct call array$Array$add on <var_initializers:Array[MProperty]>*/
}
{
{ /* Inline model$MPropDef$mproperty (var_msetter) on <var_msetter:nullable MMethodDef(MMethodDef)> */
var279 = var_msetter->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_msetter:nullable MMethodDef(MMethodDef)> */
if (unlikely(var279 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var277 = var279;
RET_LABEL278:(void)0;
}
}
{
{ /* Inline model$MProperty$is_autoinit= (var277,1) on <var277:MProperty(MMethod)> */
var277->attrs[COLOR_nitc__model__MProperty___is_autoinit].s = 1; /* _is_autoinit on <var277:MProperty(MMethod)> */
RET_LABEL280:(void)0;
}
}
}
} else {
}
BREAK_label144: (void)0;
{
((void(*)(val* self))((((long)var_133&3)?class_info[((long)var_133&3)]:var_133->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_133); /* next on <var_133:Iterator[APropdef]>*/
}
}
BREAK_label135: (void)0;
{
((void(*)(val* self))((((long)var_133&3)?class_info[((long)var_133&3)]:var_133->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_133); /* finish on <var_133:Iterator[APropdef]>*/
}
{
{ /* Inline modelize_property$ModelBuilder$the_root_init_mmethod (self) on <self:ModelBuilder> */
var283 = self->attrs[COLOR_nitc__modelize_property__ModelBuilder___the_root_init_mmethod].val; /* _the_root_init_mmethod on <self:ModelBuilder> */
var281 = var283;
RET_LABEL282:(void)0;
}
}
var_the_root_init_mmethod = var281;
if (var_the_root_init_mmethod == NULL) {
var284 = 1; /* is null */
} else {
var284 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_the_root_init_mmethod,((val*)NULL)) on <var_the_root_init_mmethod:nullable MMethod> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_the_root_init_mmethod,var_other) on <var_the_root_init_mmethod:nullable MMethod(MMethod)> */
var289 = var_the_root_init_mmethod == var_other;
var287 = var289;
goto RET_LABEL288;
RET_LABEL288:(void)0;
}
}
var285 = var287;
goto RET_LABEL286;
RET_LABEL286:(void)0;
}
var284 = var285;
}
if (var284){
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MClassDef$mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var292 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var292 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var290 = var292;
RET_LABEL291:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var295 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var295 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var293 = var295;
RET_LABEL294:(void)0;
}
}
{
var296 = nitc___nitc__MProperty___lookup_super_definitions(var_the_root_init_mmethod, var290, var293);
}
var_spropdefs = var296;
{
var297 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_spropdefs);
}
if (var297){
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var300 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var300 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var298 = var300;
RET_LABEL299:(void)0;
}
}
{
{ /* Inline parser_nodes$ANode$location (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var303 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var303 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var301 = var303;
RET_LABEL302:(void)0;
}
}
if (unlikely(varonce304==NULL)) {
var305 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce306!=NULL)) {
var307 = varonce306;
} else {
var308 = "Error: `";
var310 = (val*)(8l<<2|1);
var311 = (val*)(8l<<2|1);
var312 = (val*)((long)(0)<<2|3);
var313 = (val*)((long)(0)<<2|3);
var309 = core__flat___CString___to_s_unsafe(var308, var310, var311, var312, var313);
var307 = var309;
varonce306 = var307;
}
((struct instance_core__NativeArray*)var305)->values[0]=var307;
if (likely(varonce314!=NULL)) {
var315 = varonce314;
} else {
var316 = "` does not specialize `";
var318 = (val*)(23l<<2|1);
var319 = (val*)(23l<<2|1);
var320 = (val*)((long)(0)<<2|3);
var321 = (val*)((long)(0)<<2|3);
var317 = core__flat___CString___to_s_unsafe(var316, var318, var319, var320, var321);
var315 = var317;
varonce314 = var315;
}
((struct instance_core__NativeArray*)var305)->values[2]=var315;
if (likely(varonce322!=NULL)) {
var323 = varonce322;
} else {
var324 = "`. Possible duplication of the root class `Object`?";
var326 = (val*)(51l<<2|1);
var327 = (val*)(51l<<2|1);
var328 = (val*)((long)(0)<<2|3);
var329 = (val*)((long)(0)<<2|3);
var325 = core__flat___CString___to_s_unsafe(var324, var326, var327, var328, var329);
var323 = var325;
varonce322 = var323;
}
((struct instance_core__NativeArray*)var305)->values[4]=var323;
} else {
var305 = varonce304;
varonce304 = NULL;
}
{
var330 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:MClassDef>*/
}
((struct instance_core__NativeArray*)var305)->values[1]=var330;
{
{ /* Inline model$MProperty$intro_mclassdef (var_the_root_init_mmethod) on <var_the_root_init_mmethod:nullable MMethod(MMethod)> */
var333 = var_the_root_init_mmethod->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_the_root_init_mmethod:nullable MMethod(MMethod)> */
if (unlikely(var333 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var331 = var333;
RET_LABEL332:(void)0;
}
}
{
var334 = ((val*(*)(val* self))(var331->class->vft[COLOR_core__abstract_text__Object__to_s]))(var331); /* to_s on <var331:MClassDef>*/
}
((struct instance_core__NativeArray*)var305)->values[3]=var334;
{
var335 = ((val*(*)(val* self))(var305->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var305); /* native_to_s on <var305:NativeArray[String]>*/
}
varonce304 = var305;
{
var336 = nitc___nitc__ToolContext___error(var298, var301, var335);
}
goto RET_LABEL;
} else {
}
if (likely(varonce337!=NULL)) {
var338 = varonce337;
} else {
var339 = "autoinit";
var341 = (val*)(8l<<2|1);
var342 = (val*)(8l<<2|1);
var343 = (val*)((long)(0)<<2|3);
var344 = (val*)((long)(0)<<2|3);
var340 = core__flat___CString___to_s_unsafe(var339, var341, var342, var343, var344);
var338 = var340;
varonce337 = var338;
}
{
var345 = nitc__annotation___Prod___get_single_annotation(var_nclassdef, var338, self);
}
var_autoinit = var345;
if (likely(varonce346!=NULL)) {
var347 = varonce346;
} else {
var348 = "noautoinit";
var350 = (val*)(10l<<2|1);
var351 = (val*)(10l<<2|1);
var352 = (val*)((long)(0)<<2|3);
var353 = (val*)((long)(0)<<2|3);
var349 = core__flat___CString___to_s_unsafe(var348, var350, var351, var352, var353);
var347 = var349;
varonce346 = var347;
}
{
var354 = nitc__annotation___Prod___get_single_annotation(var_nclassdef, var347, self);
}
var_noautoinit = var354;
if (var_autoinit == NULL) {
var355 = 0; /* is null */
} else {
var355 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_autoinit,((val*)NULL)) on <var_autoinit:nullable AAnnotation> */
var_other211 = ((val*)NULL);
{
var358 = ((short int(*)(val* self, val* p0))(var_autoinit->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_autoinit, var_other211); /* == on <var_autoinit:nullable AAnnotation(AAnnotation)>*/
}
var359 = !var358;
var356 = var359;
goto RET_LABEL357;
RET_LABEL357:(void)0;
}
var355 = var356;
}
if (var355){
{
core___core__AbstractArray___core__abstract_collection__RemovableCollection__clear(var_mparameters126); /* Direct call array$AbstractArray$clear on <var_mparameters126:Array[MParameter]>*/
}
{
core___core__AbstractArray___core__abstract_collection__RemovableCollection__clear(var_initializers); /* Direct call array$AbstractArray$clear on <var_initializers:Array[MProperty]>*/
}
if (var_noautoinit == NULL) {
var360 = 0; /* is null */
} else {
var360 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_noautoinit,((val*)NULL)) on <var_noautoinit:nullable AAnnotation> */
var_other211 = ((val*)NULL);
{
var363 = ((short int(*)(val* self, val* p0))(var_noautoinit->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_noautoinit, var_other211); /* == on <var_noautoinit:nullable AAnnotation(AAnnotation)>*/
}
var364 = !var363;
var361 = var364;
goto RET_LABEL362;
RET_LABEL362:(void)0;
}
var360 = var361;
}
if (var360){
if (likely(varonce365!=NULL)) {
var366 = varonce365;
} else {
var367 = "Error: `autoinit` and `noautoinit` are incompatible.";
var369 = (val*)(52l<<2|1);
var370 = (val*)(52l<<2|1);
var371 = (val*)((long)(0)<<2|3);
var372 = (val*)((long)(0)<<2|3);
var368 = core__flat___CString___to_s_unsafe(var367, var369, var370, var371, var372);
var366 = var368;
varonce365 = var366;
}
{
nitc___nitc__ModelBuilder___error(self, var_autoinit, var366); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
} else {
}
{
{ /* Inline parser_nodes$AAnnotation$n_args (var_autoinit) on <var_autoinit:nullable AAnnotation(AAnnotation)> */
var375 = var_autoinit->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_args].val; /* _n_args on <var_autoinit:nullable AAnnotation(AAnnotation)> */
if (unlikely(var375 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 3007);
fatal_exit(1);
}
var373 = var375;
RET_LABEL374:(void)0;
}
}
{
var376 = nitc___nitc__ANodes___core__abstract_collection__Collection__is_empty(var373);
}
if (var376){
if (likely(varonce377!=NULL)) {
var378 = varonce377;
} else {
var379 = "Syntax Error: `autoinit` expects method identifiers, use `noautoinit` to clear all autoinits.";
var381 = (val*)(93l<<2|1);
var382 = (val*)(93l<<2|1);
var383 = (val*)((long)(0)<<2|3);
var384 = (val*)((long)(0)<<2|3);
var380 = core__flat___CString___to_s_unsafe(var379, var381, var382, var383, var384);
var378 = var380;
varonce377 = var378;
}
{
nitc___nitc__ModelBuilder___error(self, var_autoinit, var378); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
} else {
}
{
{ /* Inline parser_nodes$AAnnotation$n_args (var_autoinit) on <var_autoinit:nullable AAnnotation(AAnnotation)> */
var387 = var_autoinit->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_args].val; /* _n_args on <var_autoinit:nullable AAnnotation(AAnnotation)> */
if (unlikely(var387 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 3007);
fatal_exit(1);
}
var385 = var387;
RET_LABEL386:(void)0;
}
}
var_388 = var385;
{
var389 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_388);
}
var_390 = var389;
for(;;) {
{
var391 = ((short int(*)(val* self))((((long)var_390&3)?class_info[((long)var_390&3)]:var_390->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_390); /* is_ok on <var_390:Iterator[AExpr]>*/
}
if (var391){
} else {
goto BREAK_label392;
}
{
var393 = ((val*(*)(val* self))((((long)var_390&3)?class_info[((long)var_390&3)]:var_390->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_390); /* item on <var_390:Iterator[AExpr]>*/
}
var_narg = var393;
{
var394 = nitc__parser_work___AExpr___as_id(var_narg);
}
var_id = var394;
if (var_id == NULL) {
var395 = 1; /* is null */
} else {
var395 = 0; /* arg is null but recv is not */
}
if (0) {
var396 = ((short int(*)(val* self, val* p0))(var_id->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_id, ((val*)NULL)); /* == on <var_id:nullable String>*/
var395 = var396;
}
if (var395){
if (likely(varonce397!=NULL)) {
var398 = varonce397;
} else {
var399 = "Syntax Error: `autoinit` expects method identifiers.";
var401 = (val*)(52l<<2|1);
var402 = (val*)(52l<<2|1);
var403 = (val*)((long)(0)<<2|3);
var404 = (val*)((long)(0)<<2|3);
var400 = core__flat___CString___to_s_unsafe(var399, var401, var402, var403, var404);
var398 = var400;
varonce397 = var398;
}
{
nitc___nitc__ModelBuilder___error(self, var_narg, var398); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
if (likely(varonce405!=NULL)) {
var406 = varonce405;
} else {
var407 = "=";
var409 = (val*)(1l<<2|1);
var410 = (val*)(1l<<2|1);
var411 = (val*)((long)(0)<<2|3);
var412 = (val*)((long)(0)<<2|3);
var408 = core__flat___CString___to_s_unsafe(var407, var409, var410, var411, var412);
var406 = var408;
varonce405 = var406;
}
{
var413 = ((val*(*)(val* self, val* p0))(var_id->class->vft[COLOR_core__abstract_text__Text___43d]))(var_id, var406); /* + on <var_id:nullable String(String)>*/
}
{
var414 = nitc___nitc__ModelBuilder___try_get_mproperty_by_name(self, var_narg, var_mclassdef, var413);
}
var_p = var414;
if (var_p == NULL) {
var415 = 1; /* is null */
} else {
var415 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_p,((val*)NULL)) on <var_p:nullable MProperty> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_p,var_other) on <var_p:nullable MProperty(MProperty)> */
var420 = var_p == var_other;
var418 = var420;
goto RET_LABEL419;
RET_LABEL419:(void)0;
}
}
var416 = var418;
goto RET_LABEL417;
RET_LABEL417:(void)0;
}
var415 = var416;
}
if (var415){
{
var421 = nitc___nitc__ModelBuilder___try_get_mproperty_by_name(self, var_narg, var_mclassdef, var_id);
}
var_p = var421;
} else {
}
if (var_p == NULL) {
var422 = 1; /* is null */
} else {
var422 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_p,((val*)NULL)) on <var_p:nullable MProperty> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_p,var_other) on <var_p:nullable MProperty(MProperty)> */
var427 = var_p == var_other;
var425 = var427;
goto RET_LABEL426;
RET_LABEL426:(void)0;
}
}
var423 = var425;
goto RET_LABEL424;
RET_LABEL424:(void)0;
}
var422 = var423;
}
if (var422){
if (unlikely(varonce428==NULL)) {
var429 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce430!=NULL)) {
var431 = varonce430;
} else {
var432 = "Error: unknown method `";
var434 = (val*)(23l<<2|1);
var435 = (val*)(23l<<2|1);
var436 = (val*)((long)(0)<<2|3);
var437 = (val*)((long)(0)<<2|3);
var433 = core__flat___CString___to_s_unsafe(var432, var434, var435, var436, var437);
var431 = var433;
varonce430 = var431;
}
((struct instance_core__NativeArray*)var429)->values[0]=var431;
if (likely(varonce438!=NULL)) {
var439 = varonce438;
} else {
var440 = "`";
var442 = (val*)(1l<<2|1);
var443 = (val*)(1l<<2|1);
var444 = (val*)((long)(0)<<2|3);
var445 = (val*)((long)(0)<<2|3);
var441 = core__flat___CString___to_s_unsafe(var440, var442, var443, var444, var445);
var439 = var441;
varonce438 = var439;
}
((struct instance_core__NativeArray*)var429)->values[2]=var439;
} else {
var429 = varonce428;
varonce428 = NULL;
}
((struct instance_core__NativeArray*)var429)->values[1]=var_id;
{
var446 = ((val*(*)(val* self))(var429->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var429); /* native_to_s on <var429:NativeArray[String]>*/
}
varonce428 = var429;
{
nitc___nitc__ModelBuilder___error(self, var_narg, var446); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MProperty$is_autoinit (var_p) on <var_p:nullable MProperty(MProperty)> */
var449 = var_p->attrs[COLOR_nitc__model__MProperty___is_autoinit].s; /* _is_autoinit on <var_p:nullable MProperty(MProperty)> */
var447 = var449;
RET_LABEL448:(void)0;
}
}
var450 = !var447;
if (var450){
if (unlikely(varonce451==NULL)) {
var452 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce453!=NULL)) {
var454 = varonce453;
} else {
var455 = "Error: `";
var457 = (val*)(8l<<2|1);
var458 = (val*)(8l<<2|1);
var459 = (val*)((long)(0)<<2|3);
var460 = (val*)((long)(0)<<2|3);
var456 = core__flat___CString___to_s_unsafe(var455, var457, var458, var459, var460);
var454 = var456;
varonce453 = var454;
}
((struct instance_core__NativeArray*)var452)->values[0]=var454;
if (likely(varonce461!=NULL)) {
var462 = varonce461;
} else {
var463 = "` is not an autoinit method";
var465 = (val*)(27l<<2|1);
var466 = (val*)(27l<<2|1);
var467 = (val*)((long)(0)<<2|3);
var468 = (val*)((long)(0)<<2|3);
var464 = core__flat___CString___to_s_unsafe(var463, var465, var466, var467, var468);
var462 = var464;
varonce461 = var462;
}
((struct instance_core__NativeArray*)var452)->values[2]=var462;
} else {
var452 = varonce451;
varonce451 = NULL;
}
{
var469 = ((val*(*)(val* self))(var_p->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_p); /* to_s on <var_p:nullable MProperty(MProperty)>*/
}
((struct instance_core__NativeArray*)var452)->values[1]=var469;
{
var470 = ((val*(*)(val* self))(var452->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var452); /* native_to_s on <var452:NativeArray[String]>*/
}
varonce451 = var452;
{
nitc___nitc__ModelBuilder___error(self, var_narg, var470); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_initializers, var_p); /* Direct call array$Array$add on <var_initializers:Array[MProperty]>*/
}
{
{ /* Inline model$MProperty$intro (var_p) on <var_p:nullable MProperty(MProperty)> */
var473 = var_p->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var_p:nullable MProperty(MProperty)> */
if (unlikely(var473 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var471 = var473;
RET_LABEL472:(void)0;
}
}
var_pd = var471;
/* <var_pd:MPropDef> isa MMethodDef */
cltype475 = type_nitc__MMethodDef.color;
idtype476 = type_nitc__MMethodDef.id;
if(cltype475 >= var_pd->type->table_size) {
var474 = 0;
} else {
var474 = var_pd->type->type_table[cltype475] == idtype476;
}
if (var474){
{
{ /* Inline model$MMethodDef$msignature (var_pd) on <var_pd:MPropDef(MMethodDef)> */
var479 = var_pd->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_pd:MPropDef(MMethodDef)> */
var477 = var479;
RET_LABEL478:(void)0;
}
}
{
{ /* Inline model$MClassDef$mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var482 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var482 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var480 = var482;
RET_LABEL481:(void)0;
}
}
{
{ /* Inline model$MClass$mclass_type (var480) on <var480:MClass> */
var485 = var480->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var480:MClass> */
if (unlikely(var485 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var483 = var485;
RET_LABEL484:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var488 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var488 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var486 = var488;
RET_LABEL487:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var491 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var491 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var489 = var491;
RET_LABEL490:(void)0;
}
}
if (var477 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 280);
fatal_exit(1);
} else {
var492 = nitc___nitc__MSignature___MType__resolve_for(var477, var483, var486, var489, 0);
}
var_sig493 = var492;
{
{ /* Inline model$MSignature$mparameters (var_sig493) on <var_sig493:MSignature> */
var496 = var_sig493->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_sig493:MSignature> */
if (unlikely(var496 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var494 = var496;
RET_LABEL495:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var_mparameters126, var494); /* Direct call array$Array$add_all on <var_mparameters126:Array[MParameter]>*/
}
} else {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 284);
fatal_exit(1);
}
{
((void(*)(val* self))((((long)var_390&3)?class_info[((long)var_390&3)]:var_390->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_390); /* next on <var_390:Iterator[AExpr]>*/
}
}
BREAK_label392: (void)0;
{
((void(*)(val* self))((((long)var_390&3)?class_info[((long)var_390&3)]:var_390->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_390); /* finish on <var_390:Iterator[AExpr]>*/
}
} else {
{
var497 = core___core__SequenceRead___Collection__first(var_spropdefs);
}
var_longest = var497;
{
{ /* Inline array$AbstractArrayRead$length (var_spropdefs) on <var_spropdefs:Array[MMethodDef]> */
var500 = var_spropdefs->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_spropdefs:Array[MMethodDef]> */
var498 = var500;
RET_LABEL499:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var498,1l) on <var498:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var503 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var503)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var506 = var498 > 1l;
var501 = var506;
goto RET_LABEL502;
RET_LABEL502:(void)0;
}
}
if (var501){
var_507 = var_spropdefs;
{
var508 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_507);
}
var_509 = var508;
for(;;) {
{
var510 = ((short int(*)(val* self))((((long)var_509&3)?class_info[((long)var_509&3)]:var_509->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_509); /* is_ok on <var_509:IndexedIterator[MMethodDef]>*/
}
if (var510){
} else {
goto BREAK_label511;
}
{
var512 = ((val*(*)(val* self))((((long)var_509&3)?class_info[((long)var_509&3)]:var_509->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_509); /* item on <var_509:IndexedIterator[MMethodDef]>*/
}
var_spd = var512;
{
{ /* Inline model$MMethodDef$initializers (var_spd) on <var_spd:MMethodDef> */
var515 = var_spd->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var_spd:MMethodDef> */
if (unlikely(var515 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2492);
fatal_exit(1);
}
var513 = var515;
RET_LABEL514:(void)0;
}
}
{
{ /* Inline array$AbstractArrayRead$length (var513) on <var513:Array[MProperty]> */
var518 = var513->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var513:Array[MProperty]> */
var516 = var518;
RET_LABEL517:(void)0;
}
}
{
{ /* Inline model$MMethodDef$initializers (var_longest) on <var_longest:MMethodDef> */
var521 = var_longest->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var_longest:MMethodDef> */
if (unlikely(var521 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2492);
fatal_exit(1);
}
var519 = var521;
RET_LABEL520:(void)0;
}
}
{
{ /* Inline array$AbstractArrayRead$length (var519) on <var519:Array[MProperty]> */
var524 = var519->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var519:Array[MProperty]> */
var522 = var524;
RET_LABEL523:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var516,var522) on <var516:Int> */
/* Covariant cast for argument 0 (i) <var522:Int> isa OTHER */
/* <var522:Int> isa OTHER */
var527 = 1; /* easy <var522:Int> isa OTHER*/
if (unlikely(!var527)) {
var_class_name530 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name530);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var531 = var516 > var522;
var525 = var531;
goto RET_LABEL526;
RET_LABEL526:(void)0;
}
}
if (var525){
var_longest = var_spd;
} else {
}
{
((void(*)(val* self))((((long)var_509&3)?class_info[((long)var_509&3)]:var_509->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_509); /* next on <var_509:IndexedIterator[MMethodDef]>*/
}
}
BREAK_label511: (void)0;
{
((void(*)(val* self))((((long)var_509&3)?class_info[((long)var_509&3)]:var_509->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_509); /* finish on <var_509:IndexedIterator[MMethodDef]>*/
}
if (var_noautoinit == NULL) {
var532 = 1; /* is null */
} else {
var532 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_noautoinit,((val*)NULL)) on <var_noautoinit:nullable AAnnotation> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_noautoinit,var_other) on <var_noautoinit:nullable AAnnotation(AAnnotation)> */
var537 = var_noautoinit == var_other;
var535 = var537;
goto RET_LABEL536;
RET_LABEL536:(void)0;
}
}
var533 = var535;
goto RET_LABEL534;
RET_LABEL534:(void)0;
}
var532 = var533;
}
if (var532){
var_538 = var_spropdefs;
{
var539 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_538);
}
var_540 = var539;
for(;;) {
{
var541 = ((short int(*)(val* self))((((long)var_540&3)?class_info[((long)var_540&3)]:var_540->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_540); /* is_ok on <var_540:IndexedIterator[MMethodDef]>*/
}
if (var541){
} else {
goto BREAK_label542;
}
{
var543 = ((val*(*)(val* self))((((long)var_540&3)?class_info[((long)var_540&3)]:var_540->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_540); /* item on <var_540:IndexedIterator[MMethodDef]>*/
}
var_spd544 = var543;
var_i = 0l;
{
{ /* Inline model$MMethodDef$initializers (var_spd544) on <var_spd544:MMethodDef> */
var547 = var_spd544->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var_spd544:MMethodDef> */
if (unlikely(var547 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2492);
fatal_exit(1);
}
var545 = var547;
RET_LABEL546:(void)0;
}
}
var_548 = var545;
{
var549 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_548);
}
var_550 = var549;
for(;;) {
{
var551 = ((short int(*)(val* self))((((long)var_550&3)?class_info[((long)var_550&3)]:var_550->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_550); /* is_ok on <var_550:IndexedIterator[MProperty]>*/
}
if (var551){
} else {
goto BREAK_label552;
}
{
var553 = ((val*(*)(val* self))((((long)var_550&3)?class_info[((long)var_550&3)]:var_550->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_550); /* item on <var_550:IndexedIterator[MProperty]>*/
}
var_p554 = var553;
{
{ /* Inline model$MMethodDef$initializers (var_longest) on <var_longest:MMethodDef> */
var557 = var_longest->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var_longest:MMethodDef> */
if (unlikely(var557 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2492);
fatal_exit(1);
}
var555 = var557;
RET_LABEL556:(void)0;
}
}
{
var558 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var555, var_i);
}
{
{ /* Inline kernel$Object$!= (var_p554,var558) on <var_p554:MProperty> */
var_other211 = var558;
{
var561 = ((short int(*)(val* self, val* p0))(var_p554->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_p554, var_other211); /* == on <var_p554:MProperty>*/
}
var562 = !var561;
var559 = var562;
goto RET_LABEL560;
RET_LABEL560:(void)0;
}
}
if (var559){
var563 = NEW_core__ArraySet(&type_core__ArraySet__nitc__MProperty);
{
core___core__ArraySet___core__kernel__Object__init(var563); /* Direct call array$ArraySet$init on <var563:ArraySet[MProperty]>*/
}
var_proposal = var563;
var_564 = var_spropdefs;
{
var565 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_564);
}
var_566 = var565;
for(;;) {
{
var567 = ((short int(*)(val* self))((((long)var_566&3)?class_info[((long)var_566&3)]:var_566->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_566); /* is_ok on <var_566:IndexedIterator[MMethodDef]>*/
}
if (var567){
} else {
goto BREAK_label568;
}
{
var569 = ((val*(*)(val* self))((((long)var_566&3)?class_info[((long)var_566&3)]:var_566->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_566); /* item on <var_566:IndexedIterator[MMethodDef]>*/
}
var_spd2 = var569;
{
{ /* Inline model$MMethodDef$initializers (var_spd2) on <var_spd2:MMethodDef> */
var572 = var_spd2->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var_spd2:MMethodDef> */
if (unlikely(var572 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2492);
fatal_exit(1);
}
var570 = var572;
RET_LABEL571:(void)0;
}
}
{
core___core__SimpleCollection___add_all(var_proposal, var570); /* Direct call abstract_collection$SimpleCollection$add_all on <var_proposal:ArraySet[MProperty]>*/
}
{
((void(*)(val* self))((((long)var_566&3)?class_info[((long)var_566&3)]:var_566->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_566); /* next on <var_566:IndexedIterator[MMethodDef]>*/
}
}
BREAK_label568: (void)0;
{
((void(*)(val* self))((((long)var_566&3)?class_info[((long)var_566&3)]:var_566->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_566); /* finish on <var_566:IndexedIterator[MMethodDef]>*/
}
{
core___core__SimpleCollection___add_all(var_proposal, var_initializers); /* Direct call abstract_collection$SimpleCollection$add_all on <var_proposal:ArraySet[MProperty]>*/
}
if (unlikely(varonce573==NULL)) {
var574 = NEW_core__NativeArray((int)13l, &type_core__NativeArray__core__String);
if (likely(varonce575!=NULL)) {
var576 = varonce575;
} else {
var577 = "Error: cannot generate automatic init for class ";
var579 = (val*)(48l<<2|1);
var580 = (val*)(48l<<2|1);
var581 = (val*)((long)(0)<<2|3);
var582 = (val*)((long)(0)<<2|3);
var578 = core__flat___CString___to_s_unsafe(var577, var579, var580, var581, var582);
var576 = var578;
varonce575 = var576;
}
((struct instance_core__NativeArray*)var574)->values[0]=var576;
if (likely(varonce583!=NULL)) {
var584 = varonce583;
} else {
var585 = ". Conflict in the order in inherited initializers ";
var587 = (val*)(50l<<2|1);
var588 = (val*)(50l<<2|1);
var589 = (val*)((long)(0)<<2|3);
var590 = (val*)((long)(0)<<2|3);
var586 = core__flat___CString___to_s_unsafe(var585, var587, var588, var589, var590);
var584 = var586;
varonce583 = var584;
}
((struct instance_core__NativeArray*)var574)->values[2]=var584;
if (likely(varonce591!=NULL)) {
var592 = varonce591;
} else {
var593 = "(";
var595 = (val*)(1l<<2|1);
var596 = (val*)(1l<<2|1);
var597 = (val*)((long)(0)<<2|3);
var598 = (val*)((long)(0)<<2|3);
var594 = core__flat___CString___to_s_unsafe(var593, var595, var596, var597, var598);
var592 = var594;
varonce591 = var592;
}
((struct instance_core__NativeArray*)var574)->values[4]=var592;
if (likely(varonce599!=NULL)) {
var600 = varonce599;
} else {
var601 = ") and ";
var603 = (val*)(6l<<2|1);
var604 = (val*)(6l<<2|1);
var605 = (val*)((long)(0)<<2|3);
var606 = (val*)((long)(0)<<2|3);
var602 = core__flat___CString___to_s_unsafe(var601, var603, var604, var605, var606);
var600 = var602;
varonce599 = var600;
}
((struct instance_core__NativeArray*)var574)->values[6]=var600;
if (likely(varonce607!=NULL)) {
var608 = varonce607;
} else {
var609 = "(";
var611 = (val*)(1l<<2|1);
var612 = (val*)(1l<<2|1);
var613 = (val*)((long)(0)<<2|3);
var614 = (val*)((long)(0)<<2|3);
var610 = core__flat___CString___to_s_unsafe(var609, var611, var612, var613, var614);
var608 = var610;
varonce607 = var608;
}
((struct instance_core__NativeArray*)var574)->values[8]=var608;
if (likely(varonce615!=NULL)) {
var616 = varonce615;
} else {
var617 = "). Use `autoinit` to order initializers. eg `autoinit ";
var619 = (val*)(54l<<2|1);
var620 = (val*)(54l<<2|1);
var621 = (val*)((long)(0)<<2|3);
var622 = (val*)((long)(0)<<2|3);
var618 = core__flat___CString___to_s_unsafe(var617, var619, var620, var621, var622);
var616 = var618;
varonce615 = var616;
}
((struct instance_core__NativeArray*)var574)->values[10]=var616;
if (likely(varonce623!=NULL)) {
var624 = varonce623;
} else {
var625 = "`";
var627 = (val*)(1l<<2|1);
var628 = (val*)(1l<<2|1);
var629 = (val*)((long)(0)<<2|3);
var630 = (val*)((long)(0)<<2|3);
var626 = core__flat___CString___to_s_unsafe(var625, var627, var628, var629, var630);
var624 = var626;
varonce623 = var624;
}
((struct instance_core__NativeArray*)var574)->values[12]=var624;
} else {
var574 = varonce573;
varonce573 = NULL;
}
{
{ /* Inline model$MClassDef$mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var633 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var633 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var631 = var633;
RET_LABEL632:(void)0;
}
}
{
var634 = ((val*(*)(val* self))(var631->class->vft[COLOR_core__abstract_text__Object__to_s]))(var631); /* to_s on <var631:MClass>*/
}
((struct instance_core__NativeArray*)var574)->values[1]=var634;
{
var635 = ((val*(*)(val* self))(var_spd544->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_spd544); /* to_s on <var_spd544:MMethodDef>*/
}
((struct instance_core__NativeArray*)var574)->values[3]=var635;
{
{ /* Inline model$MMethodDef$initializers (var_spd544) on <var_spd544:MMethodDef> */
var638 = var_spd544->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var_spd544:MMethodDef> */
if (unlikely(var638 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2492);
fatal_exit(1);
}
var636 = var638;
RET_LABEL637:(void)0;
}
}
if (likely(varonce639!=NULL)) {
var640 = varonce639;
} else {
var641 = ", ";
var643 = (val*)(2l<<2|1);
var644 = (val*)(2l<<2|1);
var645 = (val*)((long)(0)<<2|3);
var646 = (val*)((long)(0)<<2|3);
var642 = core__flat___CString___to_s_unsafe(var641, var643, var644, var645, var646);
var640 = var642;
varonce639 = var640;
}
{
var647 = core__abstract_text___Collection___join(var636, var640, ((val*)NULL));
}
((struct instance_core__NativeArray*)var574)->values[5]=var647;
{
var648 = ((val*(*)(val* self))(var_longest->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_longest); /* to_s on <var_longest:MMethodDef>*/
}
((struct instance_core__NativeArray*)var574)->values[7]=var648;
{
{ /* Inline model$MMethodDef$initializers (var_longest) on <var_longest:MMethodDef> */
var651 = var_longest->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var_longest:MMethodDef> */
if (unlikely(var651 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2492);
fatal_exit(1);
}
var649 = var651;
RET_LABEL650:(void)0;
}
}
if (likely(varonce652!=NULL)) {
var653 = varonce652;
} else {
var654 = ", ";
var656 = (val*)(2l<<2|1);
var657 = (val*)(2l<<2|1);
var658 = (val*)((long)(0)<<2|3);
var659 = (val*)((long)(0)<<2|3);
var655 = core__flat___CString___to_s_unsafe(var654, var656, var657, var658, var659);
var653 = var655;
varonce652 = var653;
}
{
var660 = core__abstract_text___Collection___join(var649, var653, ((val*)NULL));
}
((struct instance_core__NativeArray*)var574)->values[9]=var660;
if (likely(varonce661!=NULL)) {
var662 = varonce661;
} else {
var663 = ", ";
var665 = (val*)(2l<<2|1);
var666 = (val*)(2l<<2|1);
var667 = (val*)((long)(0)<<2|3);
var668 = (val*)((long)(0)<<2|3);
var664 = core__flat___CString___to_s_unsafe(var663, var665, var666, var667, var668);
var662 = var664;
varonce661 = var662;
}
{
var669 = core__abstract_text___Collection___join(var_proposal, var662, ((val*)NULL));
}
((struct instance_core__NativeArray*)var574)->values[11]=var669;
{
var670 = ((val*(*)(val* self))(var574->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var574); /* native_to_s on <var574:NativeArray[String]>*/
}
varonce573 = var574;
{
nitc___nitc__ModelBuilder___error(self, var_nclassdef, var670); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var673 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var673)) {
var_class_name676 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name676);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var677 = var_i + 1l;
var671 = var677;
goto RET_LABEL672;
RET_LABEL672:(void)0;
}
}
var_i = var671;
{
((void(*)(val* self))((((long)var_550&3)?class_info[((long)var_550&3)]:var_550->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_550); /* next on <var_550:IndexedIterator[MProperty]>*/
}
}
BREAK_label552: (void)0;
{
((void(*)(val* self))((((long)var_550&3)?class_info[((long)var_550&3)]:var_550->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_550); /* finish on <var_550:IndexedIterator[MProperty]>*/
}
{
((void(*)(val* self))((((long)var_540&3)?class_info[((long)var_540&3)]:var_540->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_540); /* next on <var_540:IndexedIterator[MMethodDef]>*/
}
}
BREAK_label542: (void)0;
{
((void(*)(val* self))((((long)var_540&3)?class_info[((long)var_540&3)]:var_540->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_540); /* finish on <var_540:IndexedIterator[MMethodDef]>*/
}
} else {
}
} else {
}
if (var_noautoinit == NULL) {
var678 = 0; /* is null */
} else {
var678 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_noautoinit,((val*)NULL)) on <var_noautoinit:nullable AAnnotation> */
var_other211 = ((val*)NULL);
{
var681 = ((short int(*)(val* self, val* p0))(var_noautoinit->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_noautoinit, var_other211); /* == on <var_noautoinit:nullable AAnnotation(AAnnotation)>*/
}
var682 = !var681;
var679 = var682;
goto RET_LABEL680;
RET_LABEL680:(void)0;
}
var678 = var679;
}
if (var678){
{
var684 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_initializers);
}
var_685 = var684;
if (var684){
{
{ /* Inline model$MMethodDef$initializers (var_longest) on <var_longest:MMethodDef> */
var688 = var_longest->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var_longest:MMethodDef> */
if (unlikely(var688 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2492);
fatal_exit(1);
}
var686 = var688;
RET_LABEL687:(void)0;
}
}
{
var689 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var686);
}
var683 = var689;
} else {
var683 = var_685;
}
if (var683){
if (likely(varonce690!=NULL)) {
var691 = varonce690;
} else {
var692 = "useless-noautoinit";
var694 = (val*)(18l<<2|1);
var695 = (val*)(18l<<2|1);
var696 = (val*)((long)(0)<<2|3);
var697 = (val*)((long)(0)<<2|3);
var693 = core__flat___CString___to_s_unsafe(var692, var694, var695, var696, var697);
var691 = var693;
varonce690 = var691;
}
if (likely(varonce698!=NULL)) {
var699 = varonce698;
} else {
var700 = "Warning: the list of autoinit is already empty.";
var702 = (val*)(47l<<2|1);
var703 = (val*)(47l<<2|1);
var704 = (val*)((long)(0)<<2|3);
var705 = (val*)((long)(0)<<2|3);
var701 = core__flat___CString___to_s_unsafe(var700, var702, var703, var704, var705);
var699 = var701;
varonce698 = var699;
}
{
nitc___nitc__ModelBuilder___warning(self, var_noautoinit, var691, var699); /* Direct call modelbuilder_base$ModelBuilder$warning on <self:ModelBuilder>*/
}
} else {
}
{
core___core__AbstractArray___core__abstract_collection__RemovableCollection__clear(var_mparameters126); /* Direct call array$AbstractArray$clear on <var_mparameters126:Array[MParameter]>*/
}
{
core___core__AbstractArray___core__abstract_collection__RemovableCollection__clear(var_initializers); /* Direct call array$AbstractArray$clear on <var_initializers:Array[MProperty]>*/
}
} else {
{
{ /* Inline array$AbstractArrayRead$length (var_spropdefs) on <var_spropdefs:Array[MMethodDef]> */
var710 = var_spropdefs->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_spropdefs:Array[MMethodDef]> */
var708 = var710;
RET_LABEL709:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var708,1l) on <var708:Int> */
var713 = var708 == 1l;
var711 = var713;
goto RET_LABEL712;
RET_LABEL712:(void)0;
}
}
var_714 = var711;
if (var711){
{
var715 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_mparameters126);
}
var707 = var715;
} else {
var707 = var_714;
}
var_716 = var707;
if (var707){
if (var_defined_init == NULL) {
var717 = 1; /* is null */
} else {
var717 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_defined_init,((val*)NULL)) on <var_defined_init:nullable MMethodDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_defined_init,var_other) on <var_defined_init:nullable MMethodDef(MMethodDef)> */
var722 = var_defined_init == var_other;
var720 = var722;
goto RET_LABEL721;
RET_LABEL721:(void)0;
}
}
var718 = var720;
goto RET_LABEL719;
RET_LABEL719:(void)0;
}
var717 = var718;
}
var706 = var717;
} else {
var706 = var_716;
}
if (var706){
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var725 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var725 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var723 = var725;
RET_LABEL724:(void)0;
}
}
if (unlikely(varonce726==NULL)) {
var727 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce728!=NULL)) {
var729 = varonce728;
} else {
var730 = " inherits the basic constructor ";
var732 = (val*)(32l<<2|1);
var733 = (val*)(32l<<2|1);
var734 = (val*)((long)(0)<<2|3);
var735 = (val*)((long)(0)<<2|3);
var731 = core__flat___CString___to_s_unsafe(var730, var732, var733, var734, var735);
var729 = var731;
varonce728 = var729;
}
((struct instance_core__NativeArray*)var727)->values[1]=var729;
} else {
var727 = varonce726;
varonce726 = NULL;
}
{
var736 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:MClassDef>*/
}
((struct instance_core__NativeArray*)var727)->values[0]=var736;
{
var737 = ((val*(*)(val* self))(var_longest->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_longest); /* to_s on <var_longest:MMethodDef>*/
}
((struct instance_core__NativeArray*)var727)->values[2]=var737;
{
var738 = ((val*(*)(val* self))(var727->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var727); /* native_to_s on <var727:NativeArray[String]>*/
}
varonce726 = var727;
{
nitc___nitc__ToolContext___info(var723, var738, 3l); /* Direct call toolcontext$ToolContext$info on <var723:ToolContext>*/
}
{
{ /* Inline model$MClassDef$mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var741 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var741 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var739 = var741;
RET_LABEL740:(void)0;
}
}
{
{ /* Inline modelize_property$MClass$root_init= (var739,var_longest) on <var739:MClass> */
var739->attrs[COLOR_nitc__modelize_property__MClass___root_init].val = var_longest; /* _root_init on <var739:MClass> */
RET_LABEL742:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MMethodDef$initializers (var_longest) on <var_longest:MMethodDef> */
var745 = var_longest->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var_longest:MMethodDef> */
if (unlikely(var745 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2492);
fatal_exit(1);
}
var743 = var745;
RET_LABEL744:(void)0;
}
}
{
{ /* Inline array$AbstractArrayRead$length (var743) on <var743:Array[MProperty]> */
var748 = var743->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var743:Array[MProperty]> */
var746 = var748;
RET_LABEL747:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var746,0l) on <var746:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var751 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var751)) {
var_class_name754 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name754);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var755 = var746 > 0l;
var749 = var755;
goto RET_LABEL750;
RET_LABEL750:(void)0;
}
}
if (var749){
{
{ /* Inline model$MMethodDef$new_msignature (var_longest) on <var_longest:MMethodDef> */
var758 = var_longest->attrs[COLOR_nitc__model__MMethodDef___new_msignature].val; /* _new_msignature on <var_longest:MMethodDef> */
var756 = var758;
RET_LABEL757:(void)0;
}
}
if (var756 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 335);
fatal_exit(1);
} else {
{ /* Inline model$MSignature$mparameters (var756) on <var756:nullable MSignature> */
if (unlikely(var756 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var761 = var756->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var756:nullable MSignature> */
if (unlikely(var761 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var759 = var761;
RET_LABEL760:(void)0;
}
}
{
core___core__Sequence___prepend(var_mparameters126, var759); /* Direct call abstract_collection$Sequence$prepend on <var_mparameters126:Array[MParameter]>*/
}
{
{ /* Inline model$MMethodDef$initializers (var_longest) on <var_longest:MMethodDef> */
var764 = var_longest->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var_longest:MMethodDef> */
if (unlikely(var764 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2492);
fatal_exit(1);
}
var762 = var764;
RET_LABEL763:(void)0;
}
}
{
core___core__Sequence___prepend(var_initializers, var762); /* Direct call abstract_collection$Sequence$prepend on <var_initializers:Array[MProperty]>*/
}
} else {
}
}
}
if (var_defined_init == NULL) {
var765 = 0; /* is null */
} else {
var765 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_defined_init,((val*)NULL)) on <var_defined_init:nullable MMethodDef> */
var_other211 = ((val*)NULL);
{
var768 = ((short int(*)(val* self, val* p0))(var_defined_init->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_defined_init, var_other211); /* == on <var_defined_init:nullable MMethodDef(MMethodDef)>*/
}
var769 = !var768;
var766 = var769;
goto RET_LABEL767;
RET_LABEL767:(void)0;
}
var765 = var766;
}
if (var765){
{
{ /* Inline model$MMethodDef$initializers (var_defined_init) on <var_defined_init:nullable MMethodDef(MMethodDef)> */
var772 = var_defined_init->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var_defined_init:nullable MMethodDef(MMethodDef)> */
if (unlikely(var772 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2492);
fatal_exit(1);
}
var770 = var772;
RET_LABEL771:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var770, var_initializers); /* Direct call array$Array$add_all on <var770:Array[MProperty]>*/
}
var773 = NEW_nitc__MSignature(&type_nitc__MSignature);
{
((void(*)(val* self, val* p0))(var773->class->vft[COLOR_nitc__model__MSignature__mparameters_61d]))(var773, var_mparameters126); /* mparameters= on <var773:MSignature>*/
}
{
((void(*)(val* self, val* p0))(var773->class->vft[COLOR_nitc__model__MSignature__return_mtype_61d]))(var773, ((val*)NULL)); /* return_mtype= on <var773:MSignature>*/
}
{
((void(*)(val* self))(var773->class->vft[COLOR_core__kernel__Object__init]))(var773); /* init on <var773:MSignature>*/
}
var_msignature774 = var773;
{
{ /* Inline model$MMethodDef$new_msignature= (var_defined_init,var_msignature774) on <var_defined_init:nullable MMethodDef(MMethodDef)> */
var_defined_init->attrs[COLOR_nitc__model__MMethodDef___new_msignature].val = var_msignature774; /* _new_msignature on <var_defined_init:nullable MMethodDef(MMethodDef)> */
RET_LABEL775:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var778 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var778 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var776 = var778;
RET_LABEL777:(void)0;
}
}
if (unlikely(varonce779==NULL)) {
var780 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce781!=NULL)) {
var782 = varonce781;
} else {
var783 = " extends its basic constructor signature to ";
var785 = (val*)(44l<<2|1);
var786 = (val*)(44l<<2|1);
var787 = (val*)((long)(0)<<2|3);
var788 = (val*)((long)(0)<<2|3);
var784 = core__flat___CString___to_s_unsafe(var783, var785, var786, var787, var788);
var782 = var784;
varonce781 = var782;
}
((struct instance_core__NativeArray*)var780)->values[1]=var782;
} else {
var780 = varonce779;
varonce779 = NULL;
}
{
var789 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:MClassDef>*/
}
((struct instance_core__NativeArray*)var780)->values[0]=var789;
{
var790 = ((val*(*)(val* self))(var_defined_init->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_defined_init); /* to_s on <var_defined_init:nullable MMethodDef(MMethodDef)>*/
}
((struct instance_core__NativeArray*)var780)->values[2]=var790;
{
var791 = ((val*(*)(val* self))(var_msignature774->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_msignature774); /* to_s on <var_msignature774:MSignature>*/
}
((struct instance_core__NativeArray*)var780)->values[3]=var791;
{
var792 = ((val*(*)(val* self))(var780->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var780); /* native_to_s on <var780:NativeArray[String]>*/
}
varonce779 = var780;
{
nitc___nitc__ToolContext___info(var776, var792, 3l); /* Direct call toolcontext$ToolContext$info on <var776:ToolContext>*/
}
{
{ /* Inline model$MClassDef$mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var795 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var795 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var793 = var795;
RET_LABEL794:(void)0;
}
}
{
{ /* Inline modelize_property$MClass$root_init= (var793,var_defined_init) on <var793:MClass> */
var793->attrs[COLOR_nitc__modelize_property__MClass___root_init].val = var_defined_init; /* _root_init on <var793:MClass> */
RET_LABEL796:(void)0;
}
}
goto RET_LABEL;
} else {
}
var_mprop797 = var_the_root_init_mmethod;
var798 = NEW_nitc__MMethodDef(&type_nitc__MMethodDef);
{
{ /* Inline parser_nodes$ANode$location (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var801 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var801 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var799 = var801;
RET_LABEL800:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var798->class->vft[COLOR_nitc__model__MPropDef__mclassdef_61d]))(var798, var_mclassdef); /* mclassdef= on <var798:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var798->class->vft[COLOR_nitc__model__MPropDef__mproperty_61d]))(var798, var_mprop797); /* mproperty= on <var798:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var798->class->vft[COLOR_nitc__model__MPropDef__location_61d]))(var798, var799); /* location= on <var798:MMethodDef>*/
}
{
((void(*)(val* self))(var798->class->vft[COLOR_core__kernel__Object__init]))(var798); /* init on <var798:MMethodDef>*/
}
var_mpropdef802 = var798;
{
{ /* Inline modelize_property$MPropDef$has_supercall= (var_mpropdef802,1) on <var_mpropdef802:MMethodDef> */
var_mpropdef802->attrs[COLOR_nitc__modelize_property__MPropDef___has_supercall].s = 1; /* _has_supercall on <var_mpropdef802:MMethodDef> */
RET_LABEL803:(void)0;
}
}
{
{ /* Inline model$MMethodDef$initializers (var_mpropdef802) on <var_mpropdef802:MMethodDef> */
var806 = var_mpropdef802->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var_mpropdef802:MMethodDef> */
if (unlikely(var806 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2492);
fatal_exit(1);
}
var804 = var806;
RET_LABEL805:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var804, var_initializers); /* Direct call array$Array$add_all on <var804:Array[MProperty]>*/
}
var807 = NEW_nitc__MSignature(&type_nitc__MSignature);
{
((void(*)(val* self, val* p0))(var807->class->vft[COLOR_nitc__model__MSignature__mparameters_61d]))(var807, var_mparameters126); /* mparameters= on <var807:MSignature>*/
}
{
((void(*)(val* self, val* p0))(var807->class->vft[COLOR_nitc__model__MSignature__return_mtype_61d]))(var807, ((val*)NULL)); /* return_mtype= on <var807:MSignature>*/
}
{
((void(*)(val* self))(var807->class->vft[COLOR_core__kernel__Object__init]))(var807); /* init on <var807:MSignature>*/
}
var_msignature808 = var807;
{
{ /* Inline model$MMethodDef$new_msignature= (var_mpropdef802,var_msignature808) on <var_mpropdef802:MMethodDef> */
var_mpropdef802->attrs[COLOR_nitc__model__MMethodDef___new_msignature].val = var_msignature808; /* _new_msignature on <var_mpropdef802:MMethodDef> */
RET_LABEL809:(void)0;
}
}
var810 = NEW_nitc__MSignature(&type_nitc__MSignature);
var811 = NEW_core__Array(&type_core__Array__nitc__MParameter);
{
core___core__Array___core__kernel__Object__init(var811); /* Direct call array$Array$init on <var811:Array[MParameter]>*/
}
{
((void(*)(val* self, val* p0))(var810->class->vft[COLOR_nitc__model__MSignature__mparameters_61d]))(var810, var811); /* mparameters= on <var810:MSignature>*/
}
{
((void(*)(val* self, val* p0))(var810->class->vft[COLOR_nitc__model__MSignature__return_mtype_61d]))(var810, ((val*)NULL)); /* return_mtype= on <var810:MSignature>*/
}
{
((void(*)(val* self))(var810->class->vft[COLOR_core__kernel__Object__init]))(var810); /* init on <var810:MSignature>*/
}
{
{ /* Inline model$MMethodDef$msignature= (var_mpropdef802,var810) on <var_mpropdef802:MMethodDef> */
var_mpropdef802->attrs[COLOR_nitc__model__MMethodDef___msignature].val = var810; /* _msignature on <var_mpropdef802:MMethodDef> */
RET_LABEL812:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var815 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var815 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var813 = var815;
RET_LABEL814:(void)0;
}
}
if (unlikely(varonce816==NULL)) {
var817 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce818!=NULL)) {
var819 = varonce818;
} else {
var820 = " gets a free constructor for attributes ";
var822 = (val*)(40l<<2|1);
var823 = (val*)(40l<<2|1);
var824 = (val*)((long)(0)<<2|3);
var825 = (val*)((long)(0)<<2|3);
var821 = core__flat___CString___to_s_unsafe(var820, var822, var823, var824, var825);
var819 = var821;
varonce818 = var819;
}
((struct instance_core__NativeArray*)var817)->values[1]=var819;
} else {
var817 = varonce816;
varonce816 = NULL;
}
{
var826 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:MClassDef>*/
}
((struct instance_core__NativeArray*)var817)->values[0]=var826;
{
var827 = ((val*(*)(val* self))(var_mpropdef802->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mpropdef802); /* to_s on <var_mpropdef802:MMethodDef>*/
}
((struct instance_core__NativeArray*)var817)->values[2]=var827;
{
var828 = ((val*(*)(val* self))(var_msignature808->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_msignature808); /* to_s on <var_msignature808:MSignature>*/
}
((struct instance_core__NativeArray*)var817)->values[3]=var828;
{
var829 = ((val*(*)(val* self))(var817->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var817); /* native_to_s on <var817:NativeArray[String]>*/
}
varonce816 = var817;
{
nitc___nitc__ToolContext___info(var813, var829, 3l); /* Direct call toolcontext$ToolContext$info on <var813:ToolContext>*/
}
{
{ /* Inline model$MClassDef$mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var832 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var832 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var830 = var832;
RET_LABEL831:(void)0;
}
}
{
{ /* Inline modelize_property$MClass$root_init= (var830,var_mpropdef802) on <var830:MClass> */
var830->attrs[COLOR_nitc__modelize_property__MClass___root_init].val = var_mpropdef802; /* _root_init on <var830:MClass> */
RET_LABEL833:(void)0;
}
}
RET_LABEL:;
}
/* method modelize_property$ModelBuilder$check_visibility for (self: ModelBuilder, ANode, MType, MPropDef) */
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
short int var50 /* : Bool */;
int cltype51;
int idtype52;
val* var53 /* : NativeArray[String] */;
static val* varonce;
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
short int var64 /* : Bool */;
short int var65 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
val* var74 /* : MVisibility */;
val* var_vis_module_type /* var vis_module_type: MVisibility */;
val* var75 /* : MVisibility */;
val* var77 /* : MVisibility */;
short int var78 /* : Bool */;
val* var80 /* : NativeArray[String] */;
static val* varonce79;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : CString */;
val* var84 /* : String */;
val* var85 /* : nullable Int */;
val* var86 /* : nullable Int */;
val* var87 /* : nullable Bool */;
val* var88 /* : nullable Bool */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : CString */;
val* var92 /* : String */;
val* var93 /* : nullable Int */;
val* var94 /* : nullable Int */;
val* var95 /* : nullable Bool */;
val* var96 /* : nullable Bool */;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : CString */;
val* var100 /* : String */;
val* var101 /* : nullable Int */;
val* var102 /* : nullable Int */;
val* var103 /* : nullable Bool */;
val* var104 /* : nullable Bool */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : CString */;
val* var108 /* : String */;
val* var109 /* : nullable Int */;
val* var110 /* : nullable Int */;
val* var111 /* : nullable Bool */;
val* var112 /* : nullable Bool */;
static val* varonce113;
val* var114 /* : String */;
char* var115 /* : CString */;
val* var116 /* : String */;
val* var117 /* : nullable Int */;
val* var118 /* : nullable Int */;
val* var119 /* : nullable Bool */;
val* var120 /* : nullable Bool */;
val* var121 /* : MVisibility */;
val* var123 /* : MVisibility */;
val* var124 /* : String */;
val* var125 /* : String */;
val* var126 /* : String */;
val* var127 /* : String */;
val* var128 /* : String */;
val* var129 /* : MVisibility */;
val* var131 /* : MVisibility */;
short int var132 /* : Bool */;
val* var134 /* : NativeArray[String] */;
static val* varonce133;
static val* varonce135;
val* var136 /* : String */;
char* var137 /* : CString */;
val* var138 /* : String */;
val* var139 /* : nullable Int */;
val* var140 /* : nullable Int */;
val* var141 /* : nullable Bool */;
val* var142 /* : nullable Bool */;
static val* varonce143;
val* var144 /* : String */;
char* var145 /* : CString */;
val* var146 /* : String */;
val* var147 /* : nullable Int */;
val* var148 /* : nullable Int */;
val* var149 /* : nullable Bool */;
val* var150 /* : nullable Bool */;
static val* varonce151;
val* var152 /* : String */;
char* var153 /* : CString */;
val* var154 /* : String */;
val* var155 /* : nullable Int */;
val* var156 /* : nullable Int */;
val* var157 /* : nullable Bool */;
val* var158 /* : nullable Bool */;
static val* varonce159;
val* var160 /* : String */;
char* var161 /* : CString */;
val* var162 /* : String */;
val* var163 /* : nullable Int */;
val* var164 /* : nullable Int */;
val* var165 /* : nullable Bool */;
val* var166 /* : nullable Bool */;
static val* varonce167;
val* var168 /* : String */;
char* var169 /* : CString */;
val* var170 /* : String */;
val* var171 /* : nullable Int */;
val* var172 /* : nullable Int */;
val* var173 /* : nullable Bool */;
val* var174 /* : nullable Bool */;
static val* varonce175;
val* var176 /* : String */;
char* var177 /* : CString */;
val* var178 /* : String */;
val* var179 /* : nullable Int */;
val* var180 /* : nullable Int */;
val* var181 /* : nullable Bool */;
val* var182 /* : nullable Bool */;
val* var183 /* : MVisibility */;
val* var185 /* : MVisibility */;
val* var186 /* : String */;
val* var187 /* : String */;
val* var188 /* : String */;
val* var189 /* : String */;
val* var190 /* : String */;
val* var191 /* : String */;
short int var192 /* : Bool */;
int cltype193;
int idtype194;
val* var195 /* : ANodes[AType] */;
val* var197 /* : ANodes[AType] */;
val* var_ /* var : ANodes[AType] */;
val* var198 /* : Iterator[ANode] */;
val* var_199 /* var : Iterator[AType] */;
short int var200 /* : Bool */;
val* var201 /* : nullable Object */;
val* var_a /* var a: AType */;
val* var202 /* : nullable MType */;
val* var204 /* : nullable MType */;
val* var_t /* var t: nullable MType */;
short int var205 /* : Bool */;
short int var206 /* : Bool */;
val* var_other208 /* var other: nullable Object */;
short int var209 /* : Bool */;
short int var211 /* : Bool */;
short int var213 /* : Bool */;
int cltype214;
int idtype215;
val* var216 /* : Array[MType] */;
val* var218 /* : Array[MType] */;
val* var_219 /* var : Array[MType] */;
val* var220 /* : IndexedIterator[nullable Object] */;
val* var_221 /* var : IndexedIterator[MType] */;
short int var222 /* : Bool */;
val* var224 /* : nullable Object */;
val* var_t225 /* var t: MType */;
var_node = p0;
var_mtype = p1;
var_mpropdef = p2;
{
{ /* Inline model$MPropDef$mclassdef (var_mpropdef) on <var_mpropdef:MPropDef> */
var2 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MPropDef> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var) on <var:MClassDef> */
var5 = var->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var:MClassDef> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_mmodule = var3;
{
{ /* Inline model$MPropDef$mproperty (var_mpropdef) on <var_mpropdef:MPropDef> */
var8 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MPropDef> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
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
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var13 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline model$MClass$visibility (var11) on <var11:MClass> */
var16 = var11->attrs[COLOR_nitc__model__MClass___visibility].val; /* _visibility on <var11:MClass> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 476);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
var_vis_type = var14;
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var19 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var19 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline model$MClass$intro_mmodule (var17) on <var17:MClass> */
var22 = var17->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var17:MClass> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
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
{ /* Inline model$MVirtualType$mproperty (var_mtype) on <var_mtype:MType(MVirtualType)> */
var28 = var_mtype->attrs[COLOR_nitc__model__MVirtualType___mproperty].val; /* _mproperty on <var_mtype:MType(MVirtualType)> */
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1423);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline model$MProperty$visibility (var26) on <var26:MVirtualTypeProp> */
var31 = var26->attrs[COLOR_nitc__model__MProperty___visibility].val; /* _visibility on <var26:MVirtualTypeProp> */
if (unlikely(var31 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2078);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
var_vis_type = var29;
{
{ /* Inline model$MVirtualType$mproperty (var_mtype) on <var_mtype:MType(MVirtualType)> */
var34 = var_mtype->attrs[COLOR_nitc__model__MVirtualType___mproperty].val; /* _mproperty on <var_mtype:MType(MVirtualType)> */
if (unlikely(var34 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1423);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline model$MProperty$intro_mclassdef (var32) on <var32:MVirtualTypeProp> */
var37 = var32->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var32:MVirtualTypeProp> */
if (unlikely(var37 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var35) on <var35:MClassDef> */
var40 = var35->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var35:MClassDef> */
if (unlikely(var40 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
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
/* <var_mtype:MType> isa MErrorType */
cltype51 = type_nitc__MErrorType.color;
idtype52 = type_nitc__MErrorType.id;
if(cltype51 >= var_mtype->type->table_size) {
var50 = 0;
} else {
var50 = var_mtype->type->type_table[cltype51] == idtype52;
}
if (var50){
} else {
if (unlikely(varonce==NULL)) {
var53 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = "Unexpected type ";
var58 = (val*)(16l<<2|1);
var59 = (val*)(16l<<2|1);
var60 = (val*)((long)(0)<<2|3);
var61 = (val*)((long)(0)<<2|3);
var57 = core__flat___CString___to_s_unsafe(var56, var58, var59, var60, var61);
var55 = var57;
varonce54 = var55;
}
((struct instance_core__NativeArray*)var53)->values[0]=var55;
} else {
var53 = varonce;
varonce = NULL;
}
{
var62 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var53)->values[1]=var62;
{
var63 = ((val*(*)(val* self))(var53->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var53); /* native_to_s on <var53:NativeArray[String]>*/
}
varonce = var53;
{
nitc___nitc__ANode___debug(var_node, var63); /* Direct call parser_nodes$ANode$debug on <var_node:ANode>*/
}
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 390);
fatal_exit(1);
}
}
}
}
}
}
if (var_vis_type == NULL) {
var64 = 0; /* is null */
} else {
var64 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_vis_type,((val*)NULL)) on <var_vis_type:nullable MVisibility> */
var_other = ((val*)NULL);
{
var67 = ((short int(*)(val* self, val* p0))(var_vis_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_vis_type, var_other); /* == on <var_vis_type:nullable MVisibility(MVisibility)>*/
}
var68 = !var67;
var65 = var68;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
var64 = var65;
}
if (var64){
if (var_mmodule_type == NULL) {
var69 = 0; /* is null */
} else {
var69 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_mmodule_type,((val*)NULL)) on <var_mmodule_type:nullable MModule> */
var_other = ((val*)NULL);
{
var72 = ((short int(*)(val* self, val* p0))(var_mmodule_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mmodule_type, var_other); /* == on <var_mmodule_type:nullable MModule(MModule)>*/
}
var73 = !var72;
var70 = var73;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
var69 = var70;
}
if (unlikely(!var69)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 394);
fatal_exit(1);
}
{
var74 = nitc___nitc__MModule___visibility_for(var_mmodule, var_mmodule_type);
}
var_vis_module_type = var74;
{
{ /* Inline model$MProperty$visibility (var_mproperty) on <var_mproperty:MProperty> */
var77 = var_mproperty->attrs[COLOR_nitc__model__MProperty___visibility].val; /* _visibility on <var_mproperty:MProperty> */
if (unlikely(var77 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2078);
fatal_exit(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
{
var78 = core___core__Comparable____62d(var75, var_vis_type);
}
if (var78){
if (unlikely(varonce79==NULL)) {
var80 = NEW_core__NativeArray((int)9l, &type_core__NativeArray__core__String);
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = "Error: the ";
var85 = (val*)(11l<<2|1);
var86 = (val*)(11l<<2|1);
var87 = (val*)((long)(0)<<2|3);
var88 = (val*)((long)(0)<<2|3);
var84 = core__flat___CString___to_s_unsafe(var83, var85, var86, var87, var88);
var82 = var84;
varonce81 = var82;
}
((struct instance_core__NativeArray*)var80)->values[0]=var82;
if (likely(varonce89!=NULL)) {
var90 = varonce89;
} else {
var91 = " property `";
var93 = (val*)(11l<<2|1);
var94 = (val*)(11l<<2|1);
var95 = (val*)((long)(0)<<2|3);
var96 = (val*)((long)(0)<<2|3);
var92 = core__flat___CString___to_s_unsafe(var91, var93, var94, var95, var96);
var90 = var92;
varonce89 = var90;
}
((struct instance_core__NativeArray*)var80)->values[2]=var90;
if (likely(varonce97!=NULL)) {
var98 = varonce97;
} else {
var99 = "` cannot contain the ";
var101 = (val*)(21l<<2|1);
var102 = (val*)(21l<<2|1);
var103 = (val*)((long)(0)<<2|3);
var104 = (val*)((long)(0)<<2|3);
var100 = core__flat___CString___to_s_unsafe(var99, var101, var102, var103, var104);
var98 = var100;
varonce97 = var98;
}
((struct instance_core__NativeArray*)var80)->values[4]=var98;
if (likely(varonce105!=NULL)) {
var106 = varonce105;
} else {
var107 = " type `";
var109 = (val*)(7l<<2|1);
var110 = (val*)(7l<<2|1);
var111 = (val*)((long)(0)<<2|3);
var112 = (val*)((long)(0)<<2|3);
var108 = core__flat___CString___to_s_unsafe(var107, var109, var110, var111, var112);
var106 = var108;
varonce105 = var106;
}
((struct instance_core__NativeArray*)var80)->values[6]=var106;
if (likely(varonce113!=NULL)) {
var114 = varonce113;
} else {
var115 = "`.";
var117 = (val*)(2l<<2|1);
var118 = (val*)(2l<<2|1);
var119 = (val*)((long)(0)<<2|3);
var120 = (val*)((long)(0)<<2|3);
var116 = core__flat___CString___to_s_unsafe(var115, var117, var118, var119, var120);
var114 = var116;
varonce113 = var114;
}
((struct instance_core__NativeArray*)var80)->values[8]=var114;
} else {
var80 = varonce79;
varonce79 = NULL;
}
{
{ /* Inline model$MProperty$visibility (var_mproperty) on <var_mproperty:MProperty> */
var123 = var_mproperty->attrs[COLOR_nitc__model__MProperty___visibility].val; /* _visibility on <var_mproperty:MProperty> */
if (unlikely(var123 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2078);
fatal_exit(1);
}
var121 = var123;
RET_LABEL122:(void)0;
}
}
{
var124 = ((val*(*)(val* self))(var121->class->vft[COLOR_core__abstract_text__Object__to_s]))(var121); /* to_s on <var121:MVisibility>*/
}
((struct instance_core__NativeArray*)var80)->values[1]=var124;
{
var125 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mproperty); /* to_s on <var_mproperty:MProperty>*/
}
((struct instance_core__NativeArray*)var80)->values[3]=var125;
{
var126 = ((val*(*)(val* self))(var_vis_type->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_vis_type); /* to_s on <var_vis_type:nullable MVisibility(MVisibility)>*/
}
((struct instance_core__NativeArray*)var80)->values[5]=var126;
{
var127 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var80)->values[7]=var127;
{
var128 = ((val*(*)(val* self))(var80->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var80); /* native_to_s on <var80:NativeArray[String]>*/
}
varonce79 = var80;
{
nitc___nitc__ModelBuilder___error(self, var_node, var128); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
{
{ /* Inline model$MProperty$visibility (var_mproperty) on <var_mproperty:MProperty> */
var131 = var_mproperty->attrs[COLOR_nitc__model__MProperty___visibility].val; /* _visibility on <var_mproperty:MProperty> */
if (unlikely(var131 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2078);
fatal_exit(1);
}
var129 = var131;
RET_LABEL130:(void)0;
}
}
{
var132 = core___core__Comparable____62d(var129, var_vis_module_type);
}
if (var132){
if (unlikely(varonce133==NULL)) {
var134 = NEW_core__NativeArray((int)11l, &type_core__NativeArray__core__String);
if (likely(varonce135!=NULL)) {
var136 = varonce135;
} else {
var137 = "Error: the ";
var139 = (val*)(11l<<2|1);
var140 = (val*)(11l<<2|1);
var141 = (val*)((long)(0)<<2|3);
var142 = (val*)((long)(0)<<2|3);
var138 = core__flat___CString___to_s_unsafe(var137, var139, var140, var141, var142);
var136 = var138;
varonce135 = var136;
}
((struct instance_core__NativeArray*)var134)->values[0]=var136;
if (likely(varonce143!=NULL)) {
var144 = varonce143;
} else {
var145 = " property `";
var147 = (val*)(11l<<2|1);
var148 = (val*)(11l<<2|1);
var149 = (val*)((long)(0)<<2|3);
var150 = (val*)((long)(0)<<2|3);
var146 = core__flat___CString___to_s_unsafe(var145, var147, var148, var149, var150);
var144 = var146;
varonce143 = var144;
}
((struct instance_core__NativeArray*)var134)->values[2]=var144;
if (likely(varonce151!=NULL)) {
var152 = varonce151;
} else {
var153 = "` cannot contain the type `";
var155 = (val*)(27l<<2|1);
var156 = (val*)(27l<<2|1);
var157 = (val*)((long)(0)<<2|3);
var158 = (val*)((long)(0)<<2|3);
var154 = core__flat___CString___to_s_unsafe(var153, var155, var156, var157, var158);
var152 = var154;
varonce151 = var152;
}
((struct instance_core__NativeArray*)var134)->values[4]=var152;
if (likely(varonce159!=NULL)) {
var160 = varonce159;
} else {
var161 = "` from the ";
var163 = (val*)(11l<<2|1);
var164 = (val*)(11l<<2|1);
var165 = (val*)((long)(0)<<2|3);
var166 = (val*)((long)(0)<<2|3);
var162 = core__flat___CString___to_s_unsafe(var161, var163, var164, var165, var166);
var160 = var162;
varonce159 = var160;
}
((struct instance_core__NativeArray*)var134)->values[6]=var160;
if (likely(varonce167!=NULL)) {
var168 = varonce167;
} else {
var169 = " module `";
var171 = (val*)(9l<<2|1);
var172 = (val*)(9l<<2|1);
var173 = (val*)((long)(0)<<2|3);
var174 = (val*)((long)(0)<<2|3);
var170 = core__flat___CString___to_s_unsafe(var169, var171, var172, var173, var174);
var168 = var170;
varonce167 = var168;
}
((struct instance_core__NativeArray*)var134)->values[8]=var168;
if (likely(varonce175!=NULL)) {
var176 = varonce175;
} else {
var177 = "`.";
var179 = (val*)(2l<<2|1);
var180 = (val*)(2l<<2|1);
var181 = (val*)((long)(0)<<2|3);
var182 = (val*)((long)(0)<<2|3);
var178 = core__flat___CString___to_s_unsafe(var177, var179, var180, var181, var182);
var176 = var178;
varonce175 = var176;
}
((struct instance_core__NativeArray*)var134)->values[10]=var176;
} else {
var134 = varonce133;
varonce133 = NULL;
}
{
{ /* Inline model$MProperty$visibility (var_mproperty) on <var_mproperty:MProperty> */
var185 = var_mproperty->attrs[COLOR_nitc__model__MProperty___visibility].val; /* _visibility on <var_mproperty:MProperty> */
if (unlikely(var185 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2078);
fatal_exit(1);
}
var183 = var185;
RET_LABEL184:(void)0;
}
}
{
var186 = ((val*(*)(val* self))(var183->class->vft[COLOR_core__abstract_text__Object__to_s]))(var183); /* to_s on <var183:MVisibility>*/
}
((struct instance_core__NativeArray*)var134)->values[1]=var186;
{
var187 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mproperty); /* to_s on <var_mproperty:MProperty>*/
}
((struct instance_core__NativeArray*)var134)->values[3]=var187;
{
var188 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var134)->values[5]=var188;
{
var189 = ((val*(*)(val* self))(var_vis_module_type->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_vis_module_type); /* to_s on <var_vis_module_type:MVisibility>*/
}
((struct instance_core__NativeArray*)var134)->values[7]=var189;
{
var190 = ((val*(*)(val* self))(var_mmodule_type->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmodule_type); /* to_s on <var_mmodule_type:nullable MModule(MModule)>*/
}
((struct instance_core__NativeArray*)var134)->values[9]=var190;
{
var191 = ((val*(*)(val* self))(var134->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var134); /* native_to_s on <var134:NativeArray[String]>*/
}
varonce133 = var134;
{
nitc___nitc__ModelBuilder___error(self, var_node, var191); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
}
} else {
}
/* <var_node:ANode> isa AType */
cltype193 = type_nitc__AType.color;
idtype194 = type_nitc__AType.id;
if(cltype193 >= var_node->type->table_size) {
var192 = 0;
} else {
var192 = var_node->type->type_table[cltype193] == idtype194;
}
if (var192){
{
{ /* Inline parser_nodes$AType$n_types (var_node) on <var_node:ANode(AType)> */
var197 = var_node->attrs[COLOR_nitc__parser_nodes__AType___n_types].val; /* _n_types on <var_node:ANode(AType)> */
if (unlikely(var197 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1782);
fatal_exit(1);
}
var195 = var197;
RET_LABEL196:(void)0;
}
}
var_ = var195;
{
var198 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_);
}
var_199 = var198;
for(;;) {
{
var200 = ((short int(*)(val* self))((((long)var_199&3)?class_info[((long)var_199&3)]:var_199->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_199); /* is_ok on <var_199:Iterator[AType]>*/
}
if (var200){
} else {
goto BREAK_label;
}
{
var201 = ((val*(*)(val* self))((((long)var_199&3)?class_info[((long)var_199&3)]:var_199->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_199); /* item on <var_199:Iterator[AType]>*/
}
var_a = var201;
{
{ /* Inline modelbuilder_base$AType$mtype (var_a) on <var_a:AType> */
var204 = var_a->attrs[COLOR_nitc__modelbuilder_base__AType___mtype].val; /* _mtype on <var_a:AType> */
var202 = var204;
RET_LABEL203:(void)0;
}
}
var_t = var202;
if (var_t == NULL) {
var205 = 1; /* is null */
} else {
var205 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_t,((val*)NULL)) on <var_t:nullable MType> */
var_other208 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_t,var_other208) on <var_t:nullable MType(MType)> */
var211 = var_t == var_other208;
var209 = var211;
goto RET_LABEL210;
RET_LABEL210:(void)0;
}
}
var206 = var209;
goto RET_LABEL207;
RET_LABEL207:(void)0;
}
var205 = var206;
}
if (var205){
goto BREAK_label212;
} else {
}
{
nitc__modelize_property___ModelBuilder___check_visibility(self, var_a, var_t, var_mpropdef); /* Direct call modelize_property$ModelBuilder$check_visibility on <self:ModelBuilder>*/
}
BREAK_label212: (void)0;
{
((void(*)(val* self))((((long)var_199&3)?class_info[((long)var_199&3)]:var_199->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_199); /* next on <var_199:Iterator[AType]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_199&3)?class_info[((long)var_199&3)]:var_199->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_199); /* finish on <var_199:Iterator[AType]>*/
}
} else {
/* <var_mtype:MType> isa MGenericType */
cltype214 = type_nitc__MGenericType.color;
idtype215 = type_nitc__MGenericType.id;
if(cltype214 >= var_mtype->type->table_size) {
var213 = 0;
} else {
var213 = var_mtype->type->type_table[cltype214] == idtype215;
}
if (var213){
{
{ /* Inline model$MGenericType$arguments (var_mtype) on <var_mtype:MType(MGenericType)> */
var218 = var_mtype->attrs[COLOR_nitc__model__MGenericType___arguments].val; /* _arguments on <var_mtype:MType(MGenericType)> */
if (unlikely(var218 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1305);
fatal_exit(1);
}
var216 = var218;
RET_LABEL217:(void)0;
}
}
var_219 = var216;
{
var220 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_219);
}
var_221 = var220;
for(;;) {
{
var222 = ((short int(*)(val* self))((((long)var_221&3)?class_info[((long)var_221&3)]:var_221->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_221); /* is_ok on <var_221:IndexedIterator[MType]>*/
}
if (var222){
} else {
goto BREAK_label223;
}
{
var224 = ((val*(*)(val* self))((((long)var_221&3)?class_info[((long)var_221&3)]:var_221->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_221); /* item on <var_221:IndexedIterator[MType]>*/
}
var_t225 = var224;
{
nitc__modelize_property___ModelBuilder___check_visibility(self, var_node, var_t225, var_mpropdef); /* Direct call modelize_property$ModelBuilder$check_visibility on <self:ModelBuilder>*/
}
{
((void(*)(val* self))((((long)var_221&3)?class_info[((long)var_221&3)]:var_221->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_221); /* next on <var_221:IndexedIterator[MType]>*/
}
}
BREAK_label223: (void)0;
{
((void(*)(val* self))((((long)var_221&3)?class_info[((long)var_221&3)]:var_221->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_221); /* finish on <var_221:IndexedIterator[MType]>*/
}
} else {
}
}
RET_LABEL:;
}
/* method modelize_property$ModelBuilder$check_virtual_types_circularity for (self: ModelBuilder, ANode, MVirtualTypeProp, MType, MModule): Bool */
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
char* var71 /* : CString */;
val* var72 /* : String */;
val* var73 /* : nullable Int */;
val* var74 /* : nullable Int */;
val* var75 /* : nullable Bool */;
val* var76 /* : nullable Bool */;
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
val* var93 /* : String */;
val* var94 /* : String */;
val* var95 /* : String */;
val* var97 /* : NativeArray[String] */;
static val* varonce96;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : CString */;
val* var101 /* : String */;
val* var102 /* : nullable Int */;
val* var103 /* : nullable Int */;
val* var104 /* : nullable Bool */;
val* var105 /* : nullable Bool */;
static val* varonce106;
val* var107 /* : String */;
char* var108 /* : CString */;
val* var109 /* : String */;
val* var110 /* : nullable Int */;
val* var111 /* : nullable Int */;
val* var112 /* : nullable Bool */;
val* var113 /* : nullable Bool */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : CString */;
val* var117 /* : String */;
val* var118 /* : nullable Int */;
val* var119 /* : nullable Int */;
val* var120 /* : nullable Bool */;
val* var121 /* : nullable Bool */;
static val* varonce122;
val* var123 /* : String */;
char* var124 /* : CString */;
val* var125 /* : String */;
val* var126 /* : nullable Int */;
val* var127 /* : nullable Int */;
val* var128 /* : nullable Bool */;
val* var129 /* : nullable Bool */;
val* var130 /* : String */;
val* var131 /* : String */;
val* var132 /* : String */;
val* var133 /* : String */;
var_node = p0;
var_mproperty = p1;
var_recv = p2;
var_mmodule = p3;
{
{ /* Inline model$MVirtualTypeProp$mvirtualtype (var_mproperty) on <var_mproperty:MVirtualTypeProp> */
var3 = var_mproperty->attrs[COLOR_nitc__model__MVirtualTypeProp___mvirtualtype].val; /* _mvirtualtype on <var_mproperty:MVirtualTypeProp> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mvirtualtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2333);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_mtype = var1;
var4 = NEW_poset__POSet(&type_poset__POSet__nitc__MType);
{
{ /* Inline kernel$Object$init (var4) on <var4:POSet[MType]> */
RET_LABEL5:(void)0;
}
}
var_poset = var4;
var6 = NEW_core__List(&type_core__List__nitc__MType);
{
{ /* Inline list$List$init (var6) on <var6:List[MType]> */
{
((void(*)(val* self))(var6->class->vft[COLOR_core___core__List___core__kernel__Object__init]))(var6); /* init on <var6:List[MType]>*/
}
RET_LABEL7:(void)0;
}
}
var_todo = var6;
{
core___core__Sequence___SimpleCollection__add(var_todo, var_mtype); /* Direct call abstract_collection$Sequence$add on <var_todo:List[MType]>*/
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
core___core__Array___with_capacity(var14, 1l); /* Direct call array$Array$with_capacity on <var14:Array[MType]>*/
}
var_ = var14;
{
{ /* Inline model$MProxyType$mtype (var_t) on <var_t:MType(MNullableType)> */
var17 = var_t->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <var_t:MType(MNullableType)> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1689);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var15); /* Direct call array$AbstractArray$push on <var_:Array[MType]>*/
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
{ /* Inline model$MGenericType$arguments (var_t) on <var_t:MType(MGenericType)> */
var23 = var_t->attrs[COLOR_nitc__model__MGenericType___arguments].val; /* _arguments on <var_t:MType(MGenericType)> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1305);
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
{ /* Inline model$MVirtualType$mproperty (var_t) on <var_t:MType(MVirtualType)> */
var29 = var_t->attrs[COLOR_nitc__model__MVirtualType___mproperty].val; /* _mproperty on <var_t:MType(MVirtualType)> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1423);
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
core___core__Array___core__kernel__Object__init(var32); /* Direct call array$Array$init on <var32:Array[MType]>*/
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
{ /* Inline model$MVirtualTypeDef$bound (var39) on <var39:nullable Object(MVirtualTypeDef)> */
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
{ /* Inline kernel$Object$== (var_next,((val*)NULL)) on <var_next:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_next,var_other) on <var_next:nullable MType(MType)> */
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
core___core__Array___core__abstract_collection__SimpleCollection__add(var_nexts, var_next); /* Direct call array$Array$add on <var_nexts:nullable Object(Array[MType])>*/
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 461);
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
{ /* Inline kernel$Object$== (var_mtype,var_next61) on <var_mtype:MVirtualType> */
var_other = var_next61;
{
{ /* Inline kernel$Object$is_same_instance (var_mtype,var_other) on <var_mtype:MVirtualType> */
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
var68 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce69!=NULL)) {
var70 = varonce69;
} else {
var71 = "Error: circularity of virtual type definition: ";
var73 = (val*)(47l<<2|1);
var74 = (val*)(47l<<2|1);
var75 = (val*)((long)(0)<<2|3);
var76 = (val*)((long)(0)<<2|3);
var72 = core__flat___CString___to_s_unsafe(var71, var73, var74, var75, var76);
var70 = var72;
varonce69 = var70;
}
((struct instance_core__NativeArray*)var68)->values[0]=var70;
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = " <-> ";
var81 = (val*)(5l<<2|1);
var82 = (val*)(5l<<2|1);
var83 = (val*)((long)(0)<<2|3);
var84 = (val*)((long)(0)<<2|3);
var80 = core__flat___CString___to_s_unsafe(var79, var81, var82, var83, var84);
var78 = var80;
varonce77 = var78;
}
((struct instance_core__NativeArray*)var68)->values[2]=var78;
if (likely(varonce85!=NULL)) {
var86 = varonce85;
} else {
var87 = ".";
var89 = (val*)(1l<<2|1);
var90 = (val*)(1l<<2|1);
var91 = (val*)((long)(0)<<2|3);
var92 = (val*)((long)(0)<<2|3);
var88 = core__flat___CString___to_s_unsafe(var87, var89, var90, var91, var92);
var86 = var88;
varonce85 = var86;
}
((struct instance_core__NativeArray*)var68)->values[4]=var86;
} else {
var68 = varonce;
varonce = NULL;
}
{
var93 = ((val*(*)(val* self))(var_next61->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_next61); /* to_s on <var_next61:MType>*/
}
((struct instance_core__NativeArray*)var68)->values[1]=var93;
{
var94 = ((val*(*)(val* self))(var_t->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_t); /* to_s on <var_t:MType>*/
}
((struct instance_core__NativeArray*)var68)->values[3]=var94;
{
var95 = ((val*(*)(val* self))(var68->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var68); /* native_to_s on <var68:NativeArray[String]>*/
}
varonce = var68;
{
nitc___nitc__ModelBuilder___error(self, var_node, var95); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
} else {
if (unlikely(varonce96==NULL)) {
var97 = NEW_core__NativeArray((int)7l, &type_core__NativeArray__core__String);
if (likely(varonce98!=NULL)) {
var99 = varonce98;
} else {
var100 = "Error: circularity of virtual type definition: ";
var102 = (val*)(47l<<2|1);
var103 = (val*)(47l<<2|1);
var104 = (val*)((long)(0)<<2|3);
var105 = (val*)((long)(0)<<2|3);
var101 = core__flat___CString___to_s_unsafe(var100, var102, var103, var104, var105);
var99 = var101;
varonce98 = var99;
}
((struct instance_core__NativeArray*)var97)->values[0]=var99;
if (likely(varonce106!=NULL)) {
var107 = varonce106;
} else {
var108 = " -> ";
var110 = (val*)(4l<<2|1);
var111 = (val*)(4l<<2|1);
var112 = (val*)((long)(0)<<2|3);
var113 = (val*)((long)(0)<<2|3);
var109 = core__flat___CString___to_s_unsafe(var108, var110, var111, var112, var113);
var107 = var109;
varonce106 = var107;
}
((struct instance_core__NativeArray*)var97)->values[2]=var107;
if (likely(varonce114!=NULL)) {
var115 = varonce114;
} else {
var116 = " <-> ";
var118 = (val*)(5l<<2|1);
var119 = (val*)(5l<<2|1);
var120 = (val*)((long)(0)<<2|3);
var121 = (val*)((long)(0)<<2|3);
var117 = core__flat___CString___to_s_unsafe(var116, var118, var119, var120, var121);
var115 = var117;
varonce114 = var115;
}
((struct instance_core__NativeArray*)var97)->values[4]=var115;
if (likely(varonce122!=NULL)) {
var123 = varonce122;
} else {
var124 = ".";
var126 = (val*)(1l<<2|1);
var127 = (val*)(1l<<2|1);
var128 = (val*)((long)(0)<<2|3);
var129 = (val*)((long)(0)<<2|3);
var125 = core__flat___CString___to_s_unsafe(var124, var126, var127, var128, var129);
var123 = var125;
varonce122 = var123;
}
((struct instance_core__NativeArray*)var97)->values[6]=var123;
} else {
var97 = varonce96;
varonce96 = NULL;
}
{
var130 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MVirtualType>*/
}
((struct instance_core__NativeArray*)var97)->values[1]=var130;
{
var131 = ((val*(*)(val* self))(var_next61->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_next61); /* to_s on <var_next61:MType>*/
}
((struct instance_core__NativeArray*)var97)->values[3]=var131;
{
var132 = ((val*(*)(val* self))(var_t->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_t); /* to_s on <var_t:MType>*/
}
((struct instance_core__NativeArray*)var97)->values[5]=var132;
{
var133 = ((val*(*)(val* self))(var97->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var97); /* native_to_s on <var97:NativeArray[String]>*/
}
varonce96 = var97;
{
nitc___nitc__ModelBuilder___error(self, var_node, var133); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
}
var = 0;
goto RET_LABEL;
} else {
{
poset___poset__POSet___add_edge(var_poset, var_t, var_next61); /* Direct call poset$POSet$add_edge on <var_poset:POSet[MType]>*/
}
{
core___core__Sequence___SimpleCollection__add(var_todo, var_next61); /* Direct call abstract_collection$Sequence$add on <var_todo:List[MType]>*/
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
goto BREAK_label134;
}
BREAK_label: (void)0;
}
BREAK_label134: (void)0;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property$MPropDef$has_supercall for (self: MPropDef): Bool */
short int nitc__modelize_property___MPropDef___has_supercall(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__modelize_property__MPropDef___has_supercall].s; /* _has_supercall on <self:MPropDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property$MPropDef$has_supercall= for (self: MPropDef, Bool) */
void nitc__modelize_property___MPropDef___has_supercall_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__modelize_property__MPropDef___has_supercall].s = p0; /* _has_supercall on <self:MPropDef> */
RET_LABEL:;
}
/* method modelize_property$AClassdef$build_properties_is_done for (self: AClassdef): Bool */
short int nitc__modelize_property___AClassdef___build_properties_is_done(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__modelize_property__AClassdef___build_properties_is_done].s; /* _build_properties_is_done on <self:AClassdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property$AClassdef$build_properties_is_done= for (self: AClassdef, Bool) */
void nitc__modelize_property___AClassdef___build_properties_is_done_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__modelize_property__AClassdef___build_properties_is_done].s = p0; /* _build_properties_is_done on <self:AClassdef> */
RET_LABEL:;
}
/* method modelize_property$MClass$root_init for (self: MClass): nullable MMethodDef */
val* nitc__modelize_property___MClass___root_init(val* self) {
val* var /* : nullable MMethodDef */;
val* var1 /* : nullable MMethodDef */;
var1 = self->attrs[COLOR_nitc__modelize_property__MClass___root_init].val; /* _root_init on <self:MClass> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property$MClass$root_init= for (self: MClass, nullable MMethodDef) */
void nitc__modelize_property___MClass___root_init_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__modelize_property__MClass___root_init].val = p0; /* _root_init on <self:MClass> */
RET_LABEL:;
}
/* method modelize_property$MClassDef$mprop2npropdef for (self: MClassDef): Map[MProperty, APropdef] */
val* nitc__modelize_property___MClassDef___mprop2npropdef(val* self) {
val* var /* : Map[MProperty, APropdef] */;
val* var1 /* : Map[MProperty, APropdef] */;
var1 = self->attrs[COLOR_nitc__modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <self:MClassDef> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 504);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property$MClassDef$build_self_type for (self: MClassDef, ModelBuilder, AClassdef) */
void nitc__modelize_property___MClassDef___build_self_type(val* self, val* p0, val* p1) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_nclassdef /* var nclassdef: AClassdef */;
short int var /* : Bool */;
short int var1 /* : Bool */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : CString */;
val* var4 /* : String */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Bool */;
val* var8 /* : nullable Bool */;
val* var_name /* var name: String */;
val* var9 /* : nullable MProperty */;
val* var_mprop /* var mprop: nullable MProperty */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
int cltype;
int idtype;
short int var17 /* : Bool */;
val* var18 /* : MPropDef */;
val* var20 /* : MPropDef */;
val* var_intro /* var intro: MVirtualTypeDef */;
val* var21 /* : MClassDef */;
val* var23 /* : MClassDef */;
val* var_intro_mclassdef /* var intro_mclassdef: MClassDef */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : HashMap[MPropDef, APropdef] */;
val* var31 /* : HashMap[MPropDef, APropdef] */;
val* var32 /* : nullable Object */;
val* var_nintro /* var nintro: APropdef */;
val* var33 /* : MClass */;
val* var35 /* : MClass */;
val* var36 /* : String */;
val* var38 /* : String */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : CString */;
val* var42 /* : String */;
val* var43 /* : nullable Int */;
val* var44 /* : nullable Int */;
val* var45 /* : nullable Bool */;
val* var46 /* : nullable Bool */;
short int var47 /* : Bool */;
val* var_other49 /* var other: nullable Object */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : CString */;
val* var55 /* : String */;
val* var56 /* : nullable Int */;
val* var57 /* : nullable Int */;
val* var58 /* : nullable Bool */;
val* var59 /* : nullable Bool */;
val* var60 /* : MVisibility */;
val* var62 /* : MVisibility */;
val* var63 /* : Sys */;
val* var64 /* : MVisibility */;
short int var65 /* : Bool */;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : CString */;
val* var72 /* : String */;
val* var73 /* : nullable Int */;
val* var74 /* : nullable Int */;
val* var75 /* : nullable Bool */;
val* var76 /* : nullable Bool */;
short int var77 /* : Bool */;
short int var79 /* : Bool */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : CString */;
val* var83 /* : String */;
val* var84 /* : nullable Int */;
val* var85 /* : nullable Int */;
val* var86 /* : nullable Bool */;
val* var87 /* : nullable Bool */;
val* var88 /* : MVirtualTypeDef */;
val* var89 /* : Location */;
val* var91 /* : Location */;
val* var_mpropdef /* var mpropdef: MVirtualTypeDef */;
val* var92 /* : MClass */;
val* var94 /* : MClass */;
val* var95 /* : MClassType */;
val* var97 /* : MClassType */;
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
var5 = (val*)(4l<<2|1);
var6 = (val*)(4l<<2|1);
var7 = (val*)((long)(0)<<2|3);
var8 = (val*)((long)(0)<<2|3);
var4 = core__flat___CString___to_s_unsafe(var3, var5, var6, var7, var8);
var2 = var4;
varonce = var2;
}
var_name = var2;
{
var9 = nitc___nitc__ModelBuilder___try_get_mproperty_by_name(var_modelbuilder, var_nclassdef, self, var_name);
}
var_mprop = var9;
if (var_mprop == NULL) {
var10 = 1; /* is null */
} else {
var10 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mprop,((val*)NULL)) on <var_mprop:nullable MProperty> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mprop,var_other) on <var_mprop:nullable MProperty(MProperty)> */
var15 = var_mprop == var_other;
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
goto RET_LABEL;
} else {
}
/* <var_mprop:nullable MProperty(MProperty)> isa MVirtualTypeProp */
cltype = type_nitc__MVirtualTypeProp.color;
idtype = type_nitc__MVirtualTypeProp.id;
if(cltype >= var_mprop->type->table_size) {
var16 = 0;
} else {
var16 = var_mprop->type->type_table[cltype] == idtype;
}
var17 = !var16;
if (var17){
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MProperty$intro (var_mprop) on <var_mprop:nullable MProperty(MVirtualTypeProp)> */
var20 = var_mprop->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var_mprop:nullable MProperty(MVirtualTypeProp)> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
var_intro = var18;
{
{ /* Inline model$MPropDef$mclassdef (var_intro) on <var_intro:MVirtualTypeDef> */
var23 = var_intro->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_intro:MVirtualTypeDef> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
var_intro_mclassdef = var21;
{
{ /* Inline kernel$Object$== (var_intro_mclassdef,self) on <var_intro_mclassdef:MClassDef> */
var_other = self;
{
{ /* Inline kernel$Object$is_same_instance (var_intro_mclassdef,var_other) on <var_intro_mclassdef:MClassDef> */
var28 = var_intro_mclassdef == var_other;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
if (var24){
{
{ /* Inline modelize_property$ModelBuilder$mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var31 = var_modelbuilder->attrs[COLOR_nitc__modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var31 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 40);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
var32 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var29, var_intro);
}
var_nintro = var32;
{
{ /* Inline model$MClassDef$mclass (var_intro_mclassdef) on <var_intro_mclassdef:MClassDef> */
var35 = var_intro_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_intro_mclassdef:MClassDef> */
if (unlikely(var35 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline model$MClass$name (var33) on <var33:MClass> */
var38 = var33->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var33:MClass> */
if (unlikely(var38 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = "Object";
var43 = (val*)(6l<<2|1);
var44 = (val*)(6l<<2|1);
var45 = (val*)((long)(0)<<2|3);
var46 = (val*)((long)(0)<<2|3);
var42 = core__flat___CString___to_s_unsafe(var41, var43, var44, var45, var46);
var40 = var42;
varonce39 = var40;
}
{
{ /* Inline kernel$Object$!= (var36,var40) on <var36:String> */
var_other49 = var40;
{
var50 = ((short int(*)(val* self, val* p0))(var36->class->vft[COLOR_core__kernel__Object___61d_61d]))(var36, var_other49); /* == on <var36:String>*/
}
var51 = !var50;
var47 = var51;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
if (var47){
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = "Error: the virtual type `SELF` must be declared in `Object`.";
var56 = (val*)(60l<<2|1);
var57 = (val*)(60l<<2|1);
var58 = (val*)((long)(0)<<2|3);
var59 = (val*)((long)(0)<<2|3);
var55 = core__flat___CString___to_s_unsafe(var54, var56, var57, var58, var59);
var53 = var55;
varonce52 = var53;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_nintro, var53); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
{
{ /* Inline model$MProperty$visibility (var_mprop) on <var_mprop:nullable MProperty(MVirtualTypeProp)> */
var62 = var_mprop->attrs[COLOR_nitc__model__MProperty___visibility].val; /* _visibility on <var_mprop:nullable MProperty(MVirtualTypeProp)> */
if (unlikely(var62 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2078);
fatal_exit(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
var63 = glob_sys;
{
var64 = nitc__model_base___core__Sys___public_visibility(var63);
}
{
{ /* Inline kernel$Object$!= (var60,var64) on <var60:MVisibility> */
var_other49 = var64;
{
var67 = ((short int(*)(val* self, val* p0))(var60->class->vft[COLOR_core__kernel__Object___61d_61d]))(var60, var_other49); /* == on <var60:MVisibility>*/
}
var68 = !var67;
var65 = var68;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
if (var65){
if (likely(varonce69!=NULL)) {
var70 = varonce69;
} else {
var71 = "Error: the virtual type `SELF` must be public.";
var73 = (val*)(46l<<2|1);
var74 = (val*)(46l<<2|1);
var75 = (val*)((long)(0)<<2|3);
var76 = (val*)((long)(0)<<2|3);
var72 = core__flat___CString___to_s_unsafe(var71, var73, var74, var75, var76);
var70 = var72;
varonce69 = var70;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_nintro, var70); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
{
{ /* Inline model$MVirtualTypeDef$is_fixed (var_intro) on <var_intro:MVirtualTypeDef> */
var79 = var_intro->attrs[COLOR_nitc__model__MVirtualTypeDef___is_fixed].s; /* _is_fixed on <var_intro:MVirtualTypeDef> */
var77 = var79;
RET_LABEL78:(void)0;
}
}
if (var77){
if (likely(varonce80!=NULL)) {
var81 = varonce80;
} else {
var82 = "Error: the virtual type `SELF` cannot be fixed.";
var84 = (val*)(47l<<2|1);
var85 = (val*)(47l<<2|1);
var86 = (val*)((long)(0)<<2|3);
var87 = (val*)((long)(0)<<2|3);
var83 = core__flat___CString___to_s_unsafe(var82, var84, var85, var86, var87);
var81 = var83;
varonce80 = var81;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_nintro, var81); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
goto RET_LABEL;
} else {
}
var88 = NEW_nitc__MVirtualTypeDef(&type_nitc__MVirtualTypeDef);
{
{ /* Inline model$MClassDef$location (self) on <self:MClassDef> */
var91 = self->attrs[COLOR_nitc__model__MClassDef___location].val; /* _location on <self:MClassDef> */
if (unlikely(var91 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 606);
fatal_exit(1);
}
var89 = var91;
RET_LABEL90:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var88->class->vft[COLOR_nitc__model__MPropDef__mclassdef_61d]))(var88, self); /* mclassdef= on <var88:MVirtualTypeDef>*/
}
{
((void(*)(val* self, val* p0))(var88->class->vft[COLOR_nitc__model__MPropDef__mproperty_61d]))(var88, var_mprop); /* mproperty= on <var88:MVirtualTypeDef>*/
}
{
((void(*)(val* self, val* p0))(var88->class->vft[COLOR_nitc__model__MPropDef__location_61d]))(var88, var89); /* location= on <var88:MVirtualTypeDef>*/
}
{
((void(*)(val* self))(var88->class->vft[COLOR_core__kernel__Object__init]))(var88); /* init on <var88:MVirtualTypeDef>*/
}
var_mpropdef = var88;
{
{ /* Inline model$MClassDef$mclass (self) on <self:MClassDef> */
var94 = self->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var94 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var92 = var94;
RET_LABEL93:(void)0;
}
}
{
{ /* Inline model$MClass$mclass_type (var92) on <var92:MClass> */
var97 = var92->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var92:MClass> */
if (unlikely(var97 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var95 = var97;
RET_LABEL96:(void)0;
}
}
{
{ /* Inline model$MVirtualTypeDef$bound= (var_mpropdef,var95) on <var_mpropdef:MVirtualTypeDef> */
var_mpropdef->attrs[COLOR_nitc__model__MVirtualTypeDef___bound].val = var95; /* _bound on <var_mpropdef:MVirtualTypeDef> */
RET_LABEL98:(void)0;
}
}
RET_LABEL:;
}
/* method modelize_property$APropdef$mpropdef for (self: APropdef): nullable MPropDef */
val* nitc__modelize_property___APropdef___mpropdef(val* self) {
val* var /* : nullable MPropDef */;
val* var1 /* : nullable MPropDef */;
var1 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:APropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property$APropdef$mpropdef= for (self: APropdef, nullable MPropDef) */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 557);
fatal_exit(1);
}
self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val = p0; /* _mpropdef on <self:APropdef> */
RET_LABEL:;
}
/* method modelize_property$APropdef$build_property for (self: APropdef, ModelBuilder, MClassDef) */
void nitc__modelize_property___APropdef___build_property(val* self, val* p0, val* p1) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_mclassdef /* var mclassdef: MClassDef */;
var_modelbuilder = p0;
var_mclassdef = p1;
RET_LABEL:;
}
/* method modelize_property$APropdef$build_signature for (self: APropdef, ModelBuilder) */
void nitc__modelize_property___APropdef___build_signature(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
var_modelbuilder = p0;
RET_LABEL:;
}
/* method modelize_property$APropdef$check_signature for (self: APropdef, ModelBuilder) */
void nitc__modelize_property___APropdef___check_signature(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
var_modelbuilder = p0;
RET_LABEL:;
}
/* method modelize_property$APropdef$new_property_visibility for (self: APropdef, ModelBuilder, MClassDef, nullable AVisibility): MVisibility */
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
char* var18 /* : CString */;
val* var19 /* : String */;
val* var20 /* : nullable Int */;
val* var21 /* : nullable Int */;
val* var22 /* : nullable Bool */;
val* var23 /* : nullable Bool */;
val* var24 /* : Sys */;
val* var25 /* : MVisibility */;
val* var26 /* : MClass */;
val* var28 /* : MClass */;
val* var29 /* : MVisibility */;
val* var31 /* : MVisibility */;
val* var32 /* : Sys */;
val* var33 /* : MVisibility */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
val* var39 /* : Sys */;
val* var40 /* : MVisibility */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : CString */;
val* var54 /* : String */;
val* var55 /* : nullable Int */;
val* var56 /* : nullable Int */;
val* var57 /* : nullable Bool */;
val* var58 /* : nullable Bool */;
val* var59 /* : Sys */;
val* var60 /* : MVisibility */;
short int var61 /* : Bool */;
short int var63 /* : Bool */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : CString */;
val* var74 /* : String */;
val* var75 /* : nullable Int */;
val* var76 /* : nullable Int */;
val* var77 /* : nullable Bool */;
val* var78 /* : nullable Bool */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : CString */;
val* var82 /* : String */;
val* var83 /* : nullable Int */;
val* var84 /* : nullable Int */;
val* var85 /* : nullable Bool */;
val* var86 /* : nullable Bool */;
val* var87 /* : Sys */;
val* var88 /* : MVisibility */;
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
{ /* Inline kernel$Object$!= (var_nvisibility,((val*)NULL)) on <var_nvisibility:nullable AVisibility> */
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
{ /* Inline kernel$Object$== (var_mvisibility,var10) on <var_mvisibility:MVisibility> */
var_other13 = var10;
{
{ /* Inline kernel$Object$is_same_instance (var_mvisibility,var_other13) on <var_mvisibility:MVisibility> */
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
var20 = (val*)(58l<<2|1);
var21 = (val*)(58l<<2|1);
var22 = (val*)((long)(0)<<2|3);
var23 = (val*)((long)(0)<<2|3);
var19 = core__flat___CString___to_s_unsafe(var18, var20, var21, var22, var23);
var17 = var19;
varonce = var17;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_nvisibility, var17); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
var24 = glob_sys;
{
var25 = nitc__model_base___core__Sys___public_visibility(var24);
}
var_mvisibility = var25;
} else {
}
} else {
}
{
{ /* Inline model$MClassDef$mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var28 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline model$MClass$visibility (var26) on <var26:MClass> */
var31 = var26->attrs[COLOR_nitc__model__MClass___visibility].val; /* _visibility on <var26:MClass> */
if (unlikely(var31 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 476);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
var32 = glob_sys;
{
var33 = nitc__model_base___core__Sys___private_visibility(var32);
}
{
{ /* Inline kernel$Object$== (var29,var33) on <var29:MVisibility> */
var_other13 = var33;
{
{ /* Inline kernel$Object$is_same_instance (var29,var_other13) on <var29:MVisibility> */
var38 = var29 == var_other13;
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
var39 = glob_sys;
{
var40 = nitc__model_base___core__Sys___protected_visibility(var39);
}
{
{ /* Inline kernel$Object$== (var_mvisibility,var40) on <var_mvisibility:MVisibility> */
var_other13 = var40;
{
{ /* Inline kernel$Object$is_same_instance (var_mvisibility,var_other13) on <var_mvisibility:MVisibility> */
var45 = var_mvisibility == var_other13;
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
if (var41){
if (var_nvisibility == NULL) {
var46 = 0; /* is null */
} else {
var46 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_nvisibility,((val*)NULL)) on <var_nvisibility:nullable AVisibility> */
var_other = ((val*)NULL);
{
var49 = ((short int(*)(val* self, val* p0))(var_nvisibility->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nvisibility, var_other); /* == on <var_nvisibility:nullable AVisibility(AVisibility)>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 575);
fatal_exit(1);
}
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "Error: `private` is the only legal visibility for properties in a private class.";
var55 = (val*)(80l<<2|1);
var56 = (val*)(80l<<2|1);
var57 = (val*)((long)(0)<<2|3);
var58 = (val*)((long)(0)<<2|3);
var54 = core__flat___CString___to_s_unsafe(var53, var55, var56, var57, var58);
var52 = var54;
varonce51 = var52;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_nvisibility, var52); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
} else {
var59 = glob_sys;
{
var60 = nitc__model_base___core__Sys___private_visibility(var59);
}
{
{ /* Inline kernel$Object$== (var_mvisibility,var60) on <var_mvisibility:MVisibility> */
var_other13 = var60;
{
{ /* Inline kernel$Object$is_same_instance (var_mvisibility,var_other13) on <var_mvisibility:MVisibility> */
var65 = var_mvisibility == var_other13;
var63 = var65;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
var61 = var63;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
if (var61){
if (var_nvisibility == NULL) {
var66 = 0; /* is null */
} else {
var66 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_nvisibility,((val*)NULL)) on <var_nvisibility:nullable AVisibility> */
var_other = ((val*)NULL);
{
var69 = ((short int(*)(val* self, val* p0))(var_nvisibility->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nvisibility, var_other); /* == on <var_nvisibility:nullable AVisibility(AVisibility)>*/
}
var70 = !var69;
var67 = var70;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
var66 = var67;
}
if (unlikely(!var66)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 578);
fatal_exit(1);
}
if (likely(varonce71!=NULL)) {
var72 = varonce71;
} else {
var73 = "useless-visibility";
var75 = (val*)(18l<<2|1);
var76 = (val*)(18l<<2|1);
var77 = (val*)((long)(0)<<2|3);
var78 = (val*)((long)(0)<<2|3);
var74 = core__flat___CString___to_s_unsafe(var73, var75, var76, var77, var78);
var72 = var74;
varonce71 = var72;
}
if (likely(varonce79!=NULL)) {
var80 = varonce79;
} else {
var81 = "Warning: `private` is superfluous since the only legal visibility for properties in a private class is private.";
var83 = (val*)(111l<<2|1);
var84 = (val*)(111l<<2|1);
var85 = (val*)((long)(0)<<2|3);
var86 = (val*)((long)(0)<<2|3);
var82 = core__flat___CString___to_s_unsafe(var81, var83, var84, var85, var86);
var80 = var82;
varonce79 = var80;
}
{
nitc___nitc__ModelBuilder___advice(var_modelbuilder, var_nvisibility, var72, var80); /* Direct call modelbuilder_base$ModelBuilder$advice on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
}
var87 = glob_sys;
{
var88 = nitc__model_base___core__Sys___private_visibility(var87);
}
var_mvisibility = var88;
} else {
}
var = var_mvisibility;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property$APropdef$set_doc for (self: APropdef, MPropDef, ModelBuilder) */
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
short int var13 /* : Bool */;
short int var_ /* var : Bool */;
val* var14 /* : MProperty */;
val* var16 /* : MProperty */;
val* var17 /* : MVisibility */;
val* var19 /* : MVisibility */;
val* var20 /* : Sys */;
val* var21 /* : MVisibility */;
short int var22 /* : Bool */;
short int var_23 /* var : Bool */;
val* var24 /* : String */;
static val* varonce;
val* var25 /* : String */;
char* var26 /* : CString */;
val* var27 /* : String */;
val* var28 /* : nullable Int */;
val* var29 /* : nullable Int */;
val* var30 /* : nullable Bool */;
val* var31 /* : nullable Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : CString */;
val* var39 /* : String */;
val* var40 /* : nullable Int */;
val* var41 /* : nullable Int */;
val* var42 /* : nullable Bool */;
val* var43 /* : nullable Bool */;
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
val* var62 /* : MProperty */;
val* var64 /* : MProperty */;
val* var65 /* : String */;
val* var66 /* : String */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : CString */;
val* var70 /* : String */;
val* var71 /* : nullable Int */;
val* var72 /* : nullable Int */;
val* var73 /* : nullable Bool */;
val* var74 /* : nullable Bool */;
val* var75 /* : nullable AAnnotation */;
val* var_at_deprecated /* var at_deprecated: nullable AAnnotation */;
short int var76 /* : Bool */;
short int var77 /* : Bool */;
short int var79 /* : Bool */;
short int var80 /* : Bool */;
short int var81 /* : Bool */;
short int var82 /* : Bool */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : CString */;
val* var86 /* : String */;
val* var87 /* : nullable Int */;
val* var88 /* : nullable Int */;
val* var89 /* : nullable Bool */;
val* var90 /* : nullable Bool */;
val* var91 /* : MDeprecationInfo */;
val* var_info /* var info: MDeprecationInfo */;
val* var93 /* : nullable ADoc */;
val* var95 /* : nullable ADoc */;
short int var96 /* : Bool */;
short int var97 /* : Bool */;
short int var99 /* : Bool */;
short int var100 /* : Bool */;
val* var101 /* : MDoc */;
val* var103 /* : MProperty */;
val* var105 /* : MProperty */;
var_mpropdef = p0;
var_modelbuilder = p1;
{
{ /* Inline parser_nodes$ADefinition$n_doc (self) on <self:APropdef> */
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
{ /* Inline kernel$Object$!= (var_ndoc,((val*)NULL)) on <var_ndoc:nullable ADoc> */
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
{ /* Inline mdoc$MEntity$mdoc= (var_mpropdef,var_mdoc) on <var_mpropdef:MPropDef> */
var_mpropdef->attrs[COLOR_nitc__mdoc__MEntity___mdoc].val = var_mdoc; /* _mdoc on <var_mpropdef:MPropDef> */
RET_LABEL9:(void)0;
}
}
{
{ /* Inline mdoc$MDoc$original_mentity= (var_mdoc,var_mpropdef) on <var_mdoc:MDoc> */
var_mdoc->attrs[COLOR_nitc__mdoc__MDoc___original_mentity].val = var_mpropdef; /* _original_mentity on <var_mdoc:MDoc> */
RET_LABEL10:(void)0;
}
}
} else {
{
var13 = nitc___nitc__MPropDef___is_intro(var_mpropdef);
}
var_ = var13;
if (var13){
{
{ /* Inline model$MPropDef$mproperty (var_mpropdef) on <var_mpropdef:MPropDef> */
var16 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MPropDef> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline model$MProperty$visibility (var14) on <var14:MProperty> */
var19 = var14->attrs[COLOR_nitc__model__MProperty___visibility].val; /* _visibility on <var14:MProperty> */
if (unlikely(var19 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2078);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
var20 = glob_sys;
{
var21 = nitc__model_base___core__Sys___protected_visibility(var20);
}
{
var22 = core___core__Comparable____62d_61d(var17, var21);
}
var12 = var22;
} else {
var12 = var_;
}
var_23 = var12;
if (var12){
{
var24 = nitc___nitc__MPropDef___nitc__model_base__MEntity__name(var_mpropdef);
}
if (likely(varonce!=NULL)) {
var25 = varonce;
} else {
var26 = "new";
var28 = (val*)(3l<<2|1);
var29 = (val*)(3l<<2|1);
var30 = (val*)((long)(0)<<2|3);
var31 = (val*)((long)(0)<<2|3);
var27 = core__flat___CString___to_s_unsafe(var26, var28, var29, var30, var31);
var25 = var27;
varonce = var25;
}
{
{ /* Inline kernel$Object$!= (var24,var25) on <var24:String> */
var_other = var25;
{
var34 = ((short int(*)(val* self, val* p0))(var24->class->vft[COLOR_core__kernel__Object___61d_61d]))(var24, var_other); /* == on <var24:String>*/
}
var35 = !var34;
var32 = var35;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var11 = var32;
} else {
var11 = var_23;
}
if (var11){
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "missing-doc";
var40 = (val*)(11l<<2|1);
var41 = (val*)(11l<<2|1);
var42 = (val*)((long)(0)<<2|3);
var43 = (val*)((long)(0)<<2|3);
var39 = core__flat___CString___to_s_unsafe(var38, var40, var41, var42, var43);
var37 = var39;
varonce36 = var37;
}
if (unlikely(varonce44==NULL)) {
var45 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = "Documentation warning: Undocumented property `";
var50 = (val*)(46l<<2|1);
var51 = (val*)(46l<<2|1);
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
var56 = "`";
var58 = (val*)(1l<<2|1);
var59 = (val*)(1l<<2|1);
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
{ /* Inline model$MPropDef$mproperty (var_mpropdef) on <var_mpropdef:MPropDef> */
var64 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MPropDef> */
if (unlikely(var64 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
var65 = ((val*(*)(val* self))(var62->class->vft[COLOR_core__abstract_text__Object__to_s]))(var62); /* to_s on <var62:MProperty>*/
}
((struct instance_core__NativeArray*)var45)->values[1]=var65;
{
var66 = ((val*(*)(val* self))(var45->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var45); /* native_to_s on <var45:NativeArray[String]>*/
}
varonce44 = var45;
{
nitc___nitc__ModelBuilder___advice(var_modelbuilder, self, var37, var66); /* Direct call modelbuilder_base$ModelBuilder$advice on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
}
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = "deprecated";
var71 = (val*)(10l<<2|1);
var72 = (val*)(10l<<2|1);
var73 = (val*)((long)(0)<<2|3);
var74 = (val*)((long)(0)<<2|3);
var70 = core__flat___CString___to_s_unsafe(var69, var71, var72, var73, var74);
var68 = var70;
varonce67 = var68;
}
{
var75 = nitc__annotation___Prod___get_single_annotation(self, var68, var_modelbuilder);
}
var_at_deprecated = var75;
if (var_at_deprecated == NULL) {
var76 = 0; /* is null */
} else {
var76 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_at_deprecated,((val*)NULL)) on <var_at_deprecated:nullable AAnnotation> */
var_other = ((val*)NULL);
{
var79 = ((short int(*)(val* self, val* p0))(var_at_deprecated->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_at_deprecated, var_other); /* == on <var_at_deprecated:nullable AAnnotation(AAnnotation)>*/
}
var80 = !var79;
var77 = var80;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
var76 = var77;
}
if (var76){
{
var81 = nitc___nitc__MPropDef___is_intro(var_mpropdef);
}
var82 = !var81;
if (var82){
if (likely(varonce83!=NULL)) {
var84 = varonce83;
} else {
var85 = "Error: method redefinition cannot be deprecated.";
var87 = (val*)(48l<<2|1);
var88 = (val*)(48l<<2|1);
var89 = (val*)((long)(0)<<2|3);
var90 = (val*)((long)(0)<<2|3);
var86 = core__flat___CString___to_s_unsafe(var85, var87, var88, var89, var90);
var84 = var86;
varonce83 = var84;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, self, var84); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
} else {
var91 = NEW_nitc__MDeprecationInfo(&type_nitc__MDeprecationInfo);
{
{ /* Inline kernel$Object$init (var91) on <var91:MDeprecationInfo> */
RET_LABEL92:(void)0;
}
}
var_info = var91;
{
{ /* Inline parser_nodes$ADefinition$n_doc (var_at_deprecated) on <var_at_deprecated:nullable AAnnotation(AAnnotation)> */
var95 = var_at_deprecated->attrs[COLOR_nitc__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <var_at_deprecated:nullable AAnnotation(AAnnotation)> */
var93 = var95;
RET_LABEL94:(void)0;
}
}
var_ndoc = var93;
if (var_ndoc == NULL) {
var96 = 0; /* is null */
} else {
var96 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_ndoc,((val*)NULL)) on <var_ndoc:nullable ADoc> */
var_other = ((val*)NULL);
{
var99 = ((short int(*)(val* self, val* p0))(var_ndoc->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ndoc, var_other); /* == on <var_ndoc:nullable ADoc(ADoc)>*/
}
var100 = !var99;
var97 = var100;
goto RET_LABEL98;
RET_LABEL98:(void)0;
}
var96 = var97;
}
if (var96){
{
var101 = nitc__modelbuilder_base___ADoc___to_mdoc(var_ndoc);
}
{
{ /* Inline mdoc$MDeprecationInfo$mdoc= (var_info,var101) on <var_info:MDeprecationInfo> */
var_info->attrs[COLOR_nitc__mdoc__MDeprecationInfo___mdoc].val = var101; /* _mdoc on <var_info:MDeprecationInfo> */
RET_LABEL102:(void)0;
}
}
} else {
}
{
{ /* Inline model$MPropDef$mproperty (var_mpropdef) on <var_mpropdef:MPropDef> */
var105 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MPropDef> */
if (unlikely(var105 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var103 = var105;
RET_LABEL104:(void)0;
}
}
{
{ /* Inline mdoc$MEntity$deprecation= (var103,var_info) on <var103:MProperty> */
var103->attrs[COLOR_nitc__mdoc__MEntity___deprecation].val = var_info; /* _deprecation on <var103:MProperty> */
RET_LABEL106:(void)0;
}
}
}
} else {
}
RET_LABEL:;
}
/* method modelize_property$APropdef$check_redef_property_visibility for (self: APropdef, ModelBuilder, nullable AVisibility, MProperty) */
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
char* var25 /* : CString */;
val* var26 /* : String */;
val* var27 /* : nullable Int */;
val* var28 /* : nullable Int */;
val* var29 /* : nullable Bool */;
val* var30 /* : nullable Bool */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : CString */;
val* var34 /* : String */;
val* var35 /* : nullable Int */;
val* var36 /* : nullable Int */;
val* var37 /* : nullable Bool */;
val* var38 /* : nullable Bool */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : CString */;
val* var42 /* : String */;
val* var43 /* : nullable Int */;
val* var44 /* : nullable Int */;
val* var45 /* : nullable Bool */;
val* var46 /* : nullable Bool */;
val* var47 /* : MVisibility */;
val* var49 /* : MVisibility */;
val* var50 /* : String */;
val* var51 /* : String */;
val* var52 /* : String */;
var_modelbuilder = p0;
var_nvisibility = p1;
var_mprop = p2;
if (var_nvisibility == NULL) {
var = 1; /* is null */
} else {
var = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_nvisibility,((val*)NULL)) on <var_nvisibility:nullable AVisibility> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_nvisibility,var_other) on <var_nvisibility:nullable AVisibility(AVisibility)> */
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
{ /* Inline model$MProperty$visibility (var_mprop) on <var_mprop:MProperty> */
var10 = var_mprop->attrs[COLOR_nitc__model__MProperty___visibility].val; /* _visibility on <var_mprop:MProperty> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2078);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel$Object$!= (var_mvisibility,var8) on <var_mvisibility:MVisibility> */
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
{ /* Inline kernel$Object$!= (var_mvisibility,var17) on <var_mvisibility:MVisibility> */
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
var22 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "Error: redefinition changed the visibility from `";
var27 = (val*)(49l<<2|1);
var28 = (val*)(49l<<2|1);
var29 = (val*)((long)(0)<<2|3);
var30 = (val*)((long)(0)<<2|3);
var26 = core__flat___CString___to_s_unsafe(var25, var27, var28, var29, var30);
var24 = var26;
varonce23 = var24;
}
((struct instance_core__NativeArray*)var22)->values[0]=var24;
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "` to `";
var35 = (val*)(6l<<2|1);
var36 = (val*)(6l<<2|1);
var37 = (val*)((long)(0)<<2|3);
var38 = (val*)((long)(0)<<2|3);
var34 = core__flat___CString___to_s_unsafe(var33, var35, var36, var37, var38);
var32 = var34;
varonce31 = var32;
}
((struct instance_core__NativeArray*)var22)->values[2]=var32;
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = "`.";
var43 = (val*)(2l<<2|1);
var44 = (val*)(2l<<2|1);
var45 = (val*)((long)(0)<<2|3);
var46 = (val*)((long)(0)<<2|3);
var42 = core__flat___CString___to_s_unsafe(var41, var43, var44, var45, var46);
var40 = var42;
varonce39 = var40;
}
((struct instance_core__NativeArray*)var22)->values[4]=var40;
} else {
var22 = varonce;
varonce = NULL;
}
{
{ /* Inline model$MProperty$visibility (var_mprop) on <var_mprop:MProperty> */
var49 = var_mprop->attrs[COLOR_nitc__model__MProperty___visibility].val; /* _visibility on <var_mprop:MProperty> */
if (unlikely(var49 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2078);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
var50 = ((val*(*)(val* self))(var47->class->vft[COLOR_core__abstract_text__Object__to_s]))(var47); /* to_s on <var47:MVisibility>*/
}
((struct instance_core__NativeArray*)var22)->values[1]=var50;
{
var51 = ((val*(*)(val* self))(var_mvisibility->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mvisibility); /* to_s on <var_mvisibility:MVisibility>*/
}
((struct instance_core__NativeArray*)var22)->values[3]=var51;
{
var52 = ((val*(*)(val* self))(var22->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var22); /* native_to_s on <var22:NativeArray[String]>*/
}
varonce = var22;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_nvisibility, var52); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
RET_LABEL:;
}
/* method modelize_property$APropdef$check_redef_keyword for (self: APropdef, ModelBuilder, MClassDef, nullable Token, Bool, MProperty): Bool */
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
char* var8 /* : CString */;
val* var9 /* : String */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Int */;
val* var12 /* : nullable Bool */;
val* var13 /* : nullable Bool */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : CString */;
val* var17 /* : String */;
val* var18 /* : nullable Int */;
val* var19 /* : nullable Int */;
val* var20 /* : nullable Bool */;
val* var21 /* : nullable Bool */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : CString */;
val* var25 /* : String */;
val* var26 /* : nullable Int */;
val* var27 /* : nullable Int */;
val* var28 /* : nullable Bool */;
val* var29 /* : nullable Bool */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : CString */;
val* var33 /* : String */;
val* var34 /* : nullable Int */;
val* var35 /* : nullable Int */;
val* var36 /* : nullable Bool */;
val* var37 /* : nullable Bool */;
val* var38 /* : String */;
val* var39 /* : MClass */;
val* var41 /* : MClass */;
val* var42 /* : String */;
val* var43 /* : Map[MProperty, APropdef] */;
val* var45 /* : Map[MProperty, APropdef] */;
val* var46 /* : nullable Object */;
val* var47 /* : Location */;
val* var49 /* : Location */;
long var50 /* : Int */;
long var52 /* : Int */;
val* var53 /* : String */;
val* var54 /* : String */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var63 /* : Bool */;
short int var65 /* : Bool */;
val* var67 /* : NativeArray[String] */;
static val* varonce66;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : CString */;
val* var71 /* : String */;
val* var72 /* : nullable Int */;
val* var73 /* : nullable Int */;
val* var74 /* : nullable Bool */;
val* var75 /* : nullable Bool */;
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
val* var92 /* : MClass */;
val* var94 /* : MClass */;
val* var95 /* : String */;
val* var96 /* : String */;
val* var98 /* : String */;
val* var99 /* : String */;
short int var100 /* : Bool */;
val* var101 /* : MClassDef */;
val* var103 /* : MClassDef */;
val* var104 /* : MModule */;
val* var106 /* : MModule */;
val* var107 /* : nullable MGroup */;
val* var109 /* : nullable MGroup */;
short int var110 /* : Bool */;
short int var111 /* : Bool */;
val* var_other113 /* var other: nullable Object */;
short int var114 /* : Bool */;
short int var115 /* : Bool */;
short int var_116 /* var : Bool */;
val* var117 /* : MVisibility */;
val* var119 /* : MVisibility */;
val* var120 /* : Sys */;
val* var121 /* : MVisibility */;
short int var122 /* : Bool */;
val* var123 /* : Model */;
val* var125 /* : Model */;
val* var126 /* : String */;
val* var128 /* : String */;
val* var129 /* : nullable Array[MProperty] */;
val* var_others /* var others: nullable Array[MProperty] */;
short int var130 /* : Bool */;
short int var131 /* : Bool */;
short int var133 /* : Bool */;
short int var134 /* : Bool */;
val* var_135 /* var : Array[MProperty] */;
val* var136 /* : IndexedIterator[nullable Object] */;
val* var_137 /* var : IndexedIterator[MProperty] */;
short int var138 /* : Bool */;
val* var139 /* : nullable Object */;
val* var_other140 /* var other: MProperty */;
short int var141 /* : Bool */;
short int var142 /* : Bool */;
short int var143 /* : Bool */;
short int var144 /* : Bool */;
short int var145 /* : Bool */;
short int var147 /* : Bool */;
short int var148 /* : Bool */;
short int var_149 /* var : Bool */;
val* var150 /* : MClassDef */;
val* var152 /* : MClassDef */;
val* var153 /* : MModule */;
val* var155 /* : MModule */;
val* var156 /* : nullable MGroup */;
val* var158 /* : nullable MGroup */;
short int var159 /* : Bool */;
short int var160 /* : Bool */;
short int var162 /* : Bool */;
short int var163 /* : Bool */;
short int var_164 /* var : Bool */;
val* var165 /* : MClassDef */;
val* var167 /* : MClassDef */;
val* var168 /* : MModule */;
val* var170 /* : MModule */;
val* var171 /* : nullable MGroup */;
val* var173 /* : nullable MGroup */;
val* var174 /* : MPackage */;
val* var176 /* : MPackage */;
val* var177 /* : MClassDef */;
val* var179 /* : MClassDef */;
val* var180 /* : MModule */;
val* var182 /* : MModule */;
val* var183 /* : nullable MGroup */;
val* var185 /* : nullable MGroup */;
val* var186 /* : MPackage */;
val* var188 /* : MPackage */;
short int var189 /* : Bool */;
short int var191 /* : Bool */;
short int var193 /* : Bool */;
short int var_194 /* var : Bool */;
val* var195 /* : MClassDef */;
val* var197 /* : MClassDef */;
val* var198 /* : MClass */;
val* var200 /* : MClass */;
val* var201 /* : String */;
val* var203 /* : String */;
val* var204 /* : MClassDef */;
val* var206 /* : MClassDef */;
val* var207 /* : MClass */;
val* var209 /* : MClass */;
val* var210 /* : String */;
val* var212 /* : String */;
short int var213 /* : Bool */;
short int var_214 /* var : Bool */;
val* var215 /* : MVisibility */;
val* var217 /* : MVisibility */;
val* var218 /* : Sys */;
val* var219 /* : MVisibility */;
short int var220 /* : Bool */;
static val* varonce221;
val* var222 /* : String */;
char* var223 /* : CString */;
val* var224 /* : String */;
val* var225 /* : nullable Int */;
val* var226 /* : nullable Int */;
val* var227 /* : nullable Bool */;
val* var228 /* : nullable Bool */;
val* var230 /* : NativeArray[String] */;
static val* varonce229;
static val* varonce231;
val* var232 /* : String */;
char* var233 /* : CString */;
val* var234 /* : String */;
val* var235 /* : nullable Int */;
val* var236 /* : nullable Int */;
val* var237 /* : nullable Bool */;
val* var238 /* : nullable Bool */;
static val* varonce239;
val* var240 /* : String */;
char* var241 /* : CString */;
val* var242 /* : String */;
val* var243 /* : nullable Int */;
val* var244 /* : nullable Int */;
val* var245 /* : nullable Bool */;
val* var246 /* : nullable Bool */;
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
val* var264 /* : MClassDef */;
val* var266 /* : MClassDef */;
val* var267 /* : MModule */;
val* var269 /* : MModule */;
val* var270 /* : String */;
val* var271 /* : MClassDef */;
val* var273 /* : MClassDef */;
val* var274 /* : MClass */;
val* var276 /* : MClass */;
val* var277 /* : String */;
val* var279 /* : String */;
val* var280 /* : String */;
short int var281 /* : Bool */;
val* var283 /* : NativeArray[String] */;
static val* varonce282;
static val* varonce284;
val* var285 /* : String */;
char* var286 /* : CString */;
val* var287 /* : String */;
val* var288 /* : nullable Int */;
val* var289 /* : nullable Int */;
val* var290 /* : nullable Bool */;
val* var291 /* : nullable Bool */;
static val* varonce292;
val* var293 /* : String */;
char* var294 /* : CString */;
val* var295 /* : String */;
val* var296 /* : nullable Int */;
val* var297 /* : nullable Int */;
val* var298 /* : nullable Bool */;
val* var299 /* : nullable Bool */;
static val* varonce300;
val* var301 /* : String */;
char* var302 /* : CString */;
val* var303 /* : String */;
val* var304 /* : nullable Int */;
val* var305 /* : nullable Int */;
val* var306 /* : nullable Bool */;
val* var307 /* : nullable Bool */;
val* var308 /* : MClass */;
val* var310 /* : MClass */;
val* var311 /* : String */;
val* var312 /* : String */;
val* var314 /* : String */;
val* var315 /* : String */;
var_modelbuilder = p0;
var_mclassdef = p1;
var_kwredef = p2;
var_need_redef = p3;
var_mprop = p4;
{
{ /* Inline modelize_property$MClassDef$mprop2npropdef (var_mclassdef) on <var_mclassdef:MClassDef> */
var3 = var_mclassdef->attrs[COLOR_nitc__modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <var_mclassdef:MClassDef> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 504);
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
var5 = NEW_core__NativeArray((int)7l, &type_core__NativeArray__core__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "Error: a property `";
var10 = (val*)(19l<<2|1);
var11 = (val*)(19l<<2|1);
var12 = (val*)((long)(0)<<2|3);
var13 = (val*)((long)(0)<<2|3);
var9 = core__flat___CString___to_s_unsafe(var8, var10, var11, var12, var13);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var5)->values[0]=var7;
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "` is already defined in class `";
var18 = (val*)(31l<<2|1);
var19 = (val*)(31l<<2|1);
var20 = (val*)((long)(0)<<2|3);
var21 = (val*)((long)(0)<<2|3);
var17 = core__flat___CString___to_s_unsafe(var16, var18, var19, var20, var21);
var15 = var17;
varonce14 = var15;
}
((struct instance_core__NativeArray*)var5)->values[2]=var15;
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = "` at line ";
var26 = (val*)(10l<<2|1);
var27 = (val*)(10l<<2|1);
var28 = (val*)((long)(0)<<2|3);
var29 = (val*)((long)(0)<<2|3);
var25 = core__flat___CString___to_s_unsafe(var24, var26, var27, var28, var29);
var23 = var25;
varonce22 = var23;
}
((struct instance_core__NativeArray*)var5)->values[4]=var23;
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = ".";
var34 = (val*)(1l<<2|1);
var35 = (val*)(1l<<2|1);
var36 = (val*)((long)(0)<<2|3);
var37 = (val*)((long)(0)<<2|3);
var33 = core__flat___CString___to_s_unsafe(var32, var34, var35, var36, var37);
var31 = var33;
varonce30 = var31;
}
((struct instance_core__NativeArray*)var5)->values[6]=var31;
} else {
var5 = varonce;
varonce = NULL;
}
{
var38 = ((val*(*)(val* self))(var_mprop->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mprop); /* to_s on <var_mprop:MProperty>*/
}
((struct instance_core__NativeArray*)var5)->values[1]=var38;
{
{ /* Inline model$MClassDef$mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var41 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var41 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
var42 = ((val*(*)(val* self))(var39->class->vft[COLOR_core__abstract_text__Object__to_s]))(var39); /* to_s on <var39:MClass>*/
}
((struct instance_core__NativeArray*)var5)->values[3]=var42;
{
{ /* Inline modelize_property$MClassDef$mprop2npropdef (var_mclassdef) on <var_mclassdef:MClassDef> */
var45 = var_mclassdef->attrs[COLOR_nitc__modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <var_mclassdef:MClassDef> */
if (unlikely(var45 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 504);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
var46 = ((val*(*)(val* self, val* p0))((((long)var43&3)?class_info[((long)var43&3)]:var43->class)->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var43, var_mprop); /* [] on <var43:Map[MProperty, APropdef]>*/
}
{
{ /* Inline parser_nodes$ANode$location (var46) on <var46:nullable Object(APropdef)> */
var49 = var46->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var46:nullable Object(APropdef)> */
if (unlikely(var49 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline location$Location$line_start (var47) on <var47:Location> */
var52 = var47->attrs[COLOR_nitc__location__Location___line_start].l; /* _line_start on <var47:Location> */
var50 = var52;
RET_LABEL51:(void)0;
}
}
var53 = core__flat___Int___core__abstract_text__Object__to_s(var50);
((struct instance_core__NativeArray*)var5)->values[5]=var53;
{
var54 = ((val*(*)(val* self))(var5->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, self, var54); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
var = 0;
goto RET_LABEL;
} else {
}
/* <var_mprop:MProperty> isa MMethod */
cltype = type_nitc__MMethod.color;
idtype = type_nitc__MMethod.id;
if(cltype >= var_mprop->type->table_size) {
var56 = 0;
} else {
var56 = var_mprop->type->type_table[cltype] == idtype;
}
var_ = var56;
if (var56){
{
{ /* Inline model$MMethod$is_root_init (var_mprop) on <var_mprop:MProperty(MMethod)> */
var59 = var_mprop->attrs[COLOR_nitc__model__MMethod___is_root_init].s; /* _is_root_init on <var_mprop:MProperty(MMethod)> */
var57 = var59;
RET_LABEL58:(void)0;
}
}
var55 = var57;
} else {
var55 = var_;
}
if (var55){
var = 1;
goto RET_LABEL;
} else {
}
if (var_kwredef == NULL) {
var60 = 1; /* is null */
} else {
var60 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_kwredef,((val*)NULL)) on <var_kwredef:nullable Token> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_kwredef,var_other) on <var_kwredef:nullable Token(Token)> */
var65 = var_kwredef == var_other;
var63 = var65;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
var61 = var63;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
var60 = var61;
}
if (var60){
if (var_need_redef){
if (unlikely(varonce66==NULL)) {
var67 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce68!=NULL)) {
var69 = varonce68;
} else {
var70 = "Redef Error: `";
var72 = (val*)(14l<<2|1);
var73 = (val*)(14l<<2|1);
var74 = (val*)((long)(0)<<2|3);
var75 = (val*)((long)(0)<<2|3);
var71 = core__flat___CString___to_s_unsafe(var70, var72, var73, var74, var75);
var69 = var71;
varonce68 = var69;
}
((struct instance_core__NativeArray*)var67)->values[0]=var69;
if (likely(varonce76!=NULL)) {
var77 = varonce76;
} else {
var78 = "::";
var80 = (val*)(2l<<2|1);
var81 = (val*)(2l<<2|1);
var82 = (val*)((long)(0)<<2|3);
var83 = (val*)((long)(0)<<2|3);
var79 = core__flat___CString___to_s_unsafe(var78, var80, var81, var82, var83);
var77 = var79;
varonce76 = var77;
}
((struct instance_core__NativeArray*)var67)->values[2]=var77;
if (likely(varonce84!=NULL)) {
var85 = varonce84;
} else {
var86 = "` is an inherited property. To redefine it, add the `redef` keyword.";
var88 = (val*)(68l<<2|1);
var89 = (val*)(68l<<2|1);
var90 = (val*)((long)(0)<<2|3);
var91 = (val*)((long)(0)<<2|3);
var87 = core__flat___CString___to_s_unsafe(var86, var88, var89, var90, var91);
var85 = var87;
varonce84 = var85;
}
((struct instance_core__NativeArray*)var67)->values[4]=var85;
} else {
var67 = varonce66;
varonce66 = NULL;
}
{
{ /* Inline model$MClassDef$mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var94 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var94 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var92 = var94;
RET_LABEL93:(void)0;
}
}
{
var95 = ((val*(*)(val* self))(var92->class->vft[COLOR_core__abstract_text__Object__to_s]))(var92); /* to_s on <var92:MClass>*/
}
((struct instance_core__NativeArray*)var67)->values[1]=var95;
{
{ /* Inline model$MProperty$name (var_mprop) on <var_mprop:MProperty> */
var98 = var_mprop->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var_mprop:MProperty> */
if (unlikely(var98 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var96 = var98;
RET_LABEL97:(void)0;
}
}
((struct instance_core__NativeArray*)var67)->values[3]=var96;
{
var99 = ((val*(*)(val* self))(var67->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var67); /* native_to_s on <var67:NativeArray[String]>*/
}
varonce66 = var67;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, self, var99); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MProperty$intro_mclassdef (var_mprop) on <var_mprop:MProperty> */
var103 = var_mprop->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mprop:MProperty> */
if (unlikely(var103 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var101 = var103;
RET_LABEL102:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var101) on <var101:MClassDef> */
var106 = var101->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var101:MClassDef> */
if (unlikely(var106 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var104 = var106;
RET_LABEL105:(void)0;
}
}
{
{ /* Inline mmodule$MModule$mgroup (var104) on <var104:MModule> */
var109 = var104->attrs[COLOR_nitc__mmodule__MModule___mgroup].val; /* _mgroup on <var104:MModule> */
var107 = var109;
RET_LABEL108:(void)0;
}
}
if (var107 == NULL) {
var110 = 0; /* is null */
} else {
var110 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var107,((val*)NULL)) on <var107:nullable MGroup> */
var_other113 = ((val*)NULL);
{
var114 = ((short int(*)(val* self, val* p0))(var107->class->vft[COLOR_core__kernel__Object___61d_61d]))(var107, var_other113); /* == on <var107:nullable MGroup(MGroup)>*/
}
var115 = !var114;
var111 = var115;
goto RET_LABEL112;
RET_LABEL112:(void)0;
}
var110 = var111;
}
var_116 = var110;
if (var110){
{
{ /* Inline model$MProperty$visibility (var_mprop) on <var_mprop:MProperty> */
var119 = var_mprop->attrs[COLOR_nitc__model__MProperty___visibility].val; /* _visibility on <var_mprop:MProperty> */
if (unlikely(var119 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2078);
fatal_exit(1);
}
var117 = var119;
RET_LABEL118:(void)0;
}
}
var120 = glob_sys;
{
var121 = nitc__model_base___core__Sys___protected_visibility(var120);
}
{
var122 = core___core__Comparable____62d_61d(var117, var121);
}
var100 = var122;
} else {
var100 = var_116;
}
if (var100){
{
{ /* Inline modelbuilder_base$ModelBuilder$model (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var125 = var_modelbuilder->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___model].val; /* _model on <var_modelbuilder:ModelBuilder> */
if (unlikely(var125 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 44);
fatal_exit(1);
}
var123 = var125;
RET_LABEL124:(void)0;
}
}
{
{ /* Inline model$MProperty$name (var_mprop) on <var_mprop:MProperty> */
var128 = var_mprop->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var_mprop:MProperty> */
if (unlikely(var128 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var126 = var128;
RET_LABEL127:(void)0;
}
}
{
var129 = nitc__model___Model___get_mproperties_by_name(var123, var126);
}
var_others = var129;
if (var_others == NULL) {
var130 = 0; /* is null */
} else {
var130 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_others,((val*)NULL)) on <var_others:nullable Array[MProperty]> */
var_other113 = ((val*)NULL);
{
var133 = ((short int(*)(val* self, val* p0))(var_others->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_others, var_other113); /* == on <var_others:nullable Array[MProperty](Array[MProperty])>*/
}
var134 = !var133;
var131 = var134;
goto RET_LABEL132;
RET_LABEL132:(void)0;
}
var130 = var131;
}
if (var130){
var_135 = var_others;
{
var136 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_135);
}
var_137 = var136;
for(;;) {
{
var138 = ((short int(*)(val* self))((((long)var_137&3)?class_info[((long)var_137&3)]:var_137->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_137); /* is_ok on <var_137:IndexedIterator[MProperty]>*/
}
if (var138){
} else {
goto BREAK_label;
}
{
var139 = ((val*(*)(val* self))((((long)var_137&3)?class_info[((long)var_137&3)]:var_137->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_137); /* item on <var_137:IndexedIterator[MProperty]>*/
}
var_other140 = var139;
{
{ /* Inline kernel$Object$!= (var_other140,var_mprop) on <var_other140:MProperty> */
var_other113 = var_mprop;
{
var147 = ((short int(*)(val* self, val* p0))(var_other140->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_other140, var_other113); /* == on <var_other140:MProperty>*/
}
var148 = !var147;
var145 = var148;
goto RET_LABEL146;
RET_LABEL146:(void)0;
}
}
var_149 = var145;
if (var145){
{
{ /* Inline model$MProperty$intro_mclassdef (var_other140) on <var_other140:MProperty> */
var152 = var_other140->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_other140:MProperty> */
if (unlikely(var152 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var150 = var152;
RET_LABEL151:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var150) on <var150:MClassDef> */
var155 = var150->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var150:MClassDef> */
if (unlikely(var155 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var153 = var155;
RET_LABEL154:(void)0;
}
}
{
{ /* Inline mmodule$MModule$mgroup (var153) on <var153:MModule> */
var158 = var153->attrs[COLOR_nitc__mmodule__MModule___mgroup].val; /* _mgroup on <var153:MModule> */
var156 = var158;
RET_LABEL157:(void)0;
}
}
if (var156 == NULL) {
var159 = 0; /* is null */
} else {
var159 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var156,((val*)NULL)) on <var156:nullable MGroup> */
var_other113 = ((val*)NULL);
{
var162 = ((short int(*)(val* self, val* p0))(var156->class->vft[COLOR_core__kernel__Object___61d_61d]))(var156, var_other113); /* == on <var156:nullable MGroup(MGroup)>*/
}
var163 = !var162;
var160 = var163;
goto RET_LABEL161;
RET_LABEL161:(void)0;
}
var159 = var160;
}
var144 = var159;
} else {
var144 = var_149;
}
var_164 = var144;
if (var144){
{
{ /* Inline model$MProperty$intro_mclassdef (var_other140) on <var_other140:MProperty> */
var167 = var_other140->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_other140:MProperty> */
if (unlikely(var167 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var165 = var167;
RET_LABEL166:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var165) on <var165:MClassDef> */
var170 = var165->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var165:MClassDef> */
if (unlikely(var170 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var168 = var170;
RET_LABEL169:(void)0;
}
}
{
{ /* Inline mmodule$MModule$mgroup (var168) on <var168:MModule> */
var173 = var168->attrs[COLOR_nitc__mmodule__MModule___mgroup].val; /* _mgroup on <var168:MModule> */
var171 = var173;
RET_LABEL172:(void)0;
}
}
if (var171 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 637);
fatal_exit(1);
} else {
{ /* Inline mpackage$MGroup$mpackage (var171) on <var171:nullable MGroup> */
if (unlikely(var171 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 76);
fatal_exit(1);
}
var176 = var171->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val; /* _mpackage on <var171:nullable MGroup> */
if (unlikely(var176 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 76);
fatal_exit(1);
}
var174 = var176;
RET_LABEL175:(void)0;
}
}
{
{ /* Inline model$MProperty$intro_mclassdef (var_mprop) on <var_mprop:MProperty> */
var179 = var_mprop->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mprop:MProperty> */
if (unlikely(var179 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var177 = var179;
RET_LABEL178:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var177) on <var177:MClassDef> */
var182 = var177->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var177:MClassDef> */
if (unlikely(var182 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var180 = var182;
RET_LABEL181:(void)0;
}
}
{
{ /* Inline mmodule$MModule$mgroup (var180) on <var180:MModule> */
var185 = var180->attrs[COLOR_nitc__mmodule__MModule___mgroup].val; /* _mgroup on <var180:MModule> */
var183 = var185;
RET_LABEL184:(void)0;
}
}
if (var183 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 637);
fatal_exit(1);
} else {
{ /* Inline mpackage$MGroup$mpackage (var183) on <var183:nullable MGroup> */
if (unlikely(var183 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 76);
fatal_exit(1);
}
var188 = var183->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val; /* _mpackage on <var183:nullable MGroup> */
if (unlikely(var188 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 76);
fatal_exit(1);
}
var186 = var188;
RET_LABEL187:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var174,var186) on <var174:MPackage> */
var_other = var186;
{
{ /* Inline kernel$Object$is_same_instance (var174,var_other) on <var174:MPackage> */
var193 = var174 == var_other;
var191 = var193;
goto RET_LABEL192;
RET_LABEL192:(void)0;
}
}
var189 = var191;
goto RET_LABEL190;
RET_LABEL190:(void)0;
}
}
var143 = var189;
} else {
var143 = var_164;
}
var_194 = var143;
if (var143){
{
{ /* Inline model$MProperty$intro_mclassdef (var_other140) on <var_other140:MProperty> */
var197 = var_other140->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_other140:MProperty> */
if (unlikely(var197 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var195 = var197;
RET_LABEL196:(void)0;
}
}
{
{ /* Inline model$MClassDef$mclass (var195) on <var195:MClassDef> */
var200 = var195->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var195:MClassDef> */
if (unlikely(var200 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var198 = var200;
RET_LABEL199:(void)0;
}
}
{
{ /* Inline model$MClass$name (var198) on <var198:MClass> */
var203 = var198->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var198:MClass> */
if (unlikely(var203 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var201 = var203;
RET_LABEL202:(void)0;
}
}
{
{ /* Inline model$MProperty$intro_mclassdef (var_mprop) on <var_mprop:MProperty> */
var206 = var_mprop->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mprop:MProperty> */
if (unlikely(var206 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var204 = var206;
RET_LABEL205:(void)0;
}
}
{
{ /* Inline model$MClassDef$mclass (var204) on <var204:MClassDef> */
var209 = var204->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var204:MClassDef> */
if (unlikely(var209 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var207 = var209;
RET_LABEL208:(void)0;
}
}
{
{ /* Inline model$MClass$name (var207) on <var207:MClass> */
var212 = var207->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var207:MClass> */
if (unlikely(var212 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var210 = var212;
RET_LABEL211:(void)0;
}
}
{
var213 = ((short int(*)(val* self, val* p0))(var201->class->vft[COLOR_core__kernel__Object___61d_61d]))(var201, var210); /* == on <var201:String>*/
}
var142 = var213;
} else {
var142 = var_194;
}
var_214 = var142;
if (var142){
{
{ /* Inline model$MProperty$visibility (var_other140) on <var_other140:MProperty> */
var217 = var_other140->attrs[COLOR_nitc__model__MProperty___visibility].val; /* _visibility on <var_other140:MProperty> */
if (unlikely(var217 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2078);
fatal_exit(1);
}
var215 = var217;
RET_LABEL216:(void)0;
}
}
var218 = glob_sys;
{
var219 = nitc__model_base___core__Sys___protected_visibility(var218);
}
{
var220 = core___core__Comparable____62d_61d(var215, var219);
}
var141 = var220;
} else {
var141 = var_214;
}
if (var141){
if (likely(varonce221!=NULL)) {
var222 = varonce221;
} else {
var223 = "full-name-conflict";
var225 = (val*)(18l<<2|1);
var226 = (val*)(18l<<2|1);
var227 = (val*)((long)(0)<<2|3);
var228 = (val*)((long)(0)<<2|3);
var224 = core__flat___CString___to_s_unsafe(var223, var225, var226, var227, var228);
var222 = var224;
varonce221 = var222;
}
if (unlikely(varonce229==NULL)) {
var230 = NEW_core__NativeArray((int)7l, &type_core__NativeArray__core__String);
if (likely(varonce231!=NULL)) {
var232 = varonce231;
} else {
var233 = "Warning: A property named `";
var235 = (val*)(27l<<2|1);
var236 = (val*)(27l<<2|1);
var237 = (val*)((long)(0)<<2|3);
var238 = (val*)((long)(0)<<2|3);
var234 = core__flat___CString___to_s_unsafe(var233, var235, var236, var237, var238);
var232 = var234;
varonce231 = var232;
}
((struct instance_core__NativeArray*)var230)->values[0]=var232;
if (likely(varonce239!=NULL)) {
var240 = varonce239;
} else {
var241 = "` is already defined in module `";
var243 = (val*)(32l<<2|1);
var244 = (val*)(32l<<2|1);
var245 = (val*)((long)(0)<<2|3);
var246 = (val*)((long)(0)<<2|3);
var242 = core__flat___CString___to_s_unsafe(var241, var243, var244, var245, var246);
var240 = var242;
varonce239 = var240;
}
((struct instance_core__NativeArray*)var230)->values[2]=var240;
if (likely(varonce247!=NULL)) {
var248 = varonce247;
} else {
var249 = "` for the class `";
var251 = (val*)(17l<<2|1);
var252 = (val*)(17l<<2|1);
var253 = (val*)((long)(0)<<2|3);
var254 = (val*)((long)(0)<<2|3);
var250 = core__flat___CString___to_s_unsafe(var249, var251, var252, var253, var254);
var248 = var250;
varonce247 = var248;
}
((struct instance_core__NativeArray*)var230)->values[4]=var248;
if (likely(varonce255!=NULL)) {
var256 = varonce255;
} else {
var257 = "`.";
var259 = (val*)(2l<<2|1);
var260 = (val*)(2l<<2|1);
var261 = (val*)((long)(0)<<2|3);
var262 = (val*)((long)(0)<<2|3);
var258 = core__flat___CString___to_s_unsafe(var257, var259, var260, var261, var262);
var256 = var258;
varonce255 = var256;
}
((struct instance_core__NativeArray*)var230)->values[6]=var256;
} else {
var230 = varonce229;
varonce229 = NULL;
}
{
var263 = nitc___nitc__MProperty___nitc__model_base__MEntity__full_name(var_other140);
}
((struct instance_core__NativeArray*)var230)->values[1]=var263;
{
{ /* Inline model$MProperty$intro_mclassdef (var_other140) on <var_other140:MProperty> */
var266 = var_other140->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_other140:MProperty> */
if (unlikely(var266 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var264 = var266;
RET_LABEL265:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var264) on <var264:MClassDef> */
var269 = var264->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var264:MClassDef> */
if (unlikely(var269 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var267 = var269;
RET_LABEL268:(void)0;
}
}
{
var270 = ((val*(*)(val* self))(var267->class->vft[COLOR_core__abstract_text__Object__to_s]))(var267); /* to_s on <var267:MModule>*/
}
((struct instance_core__NativeArray*)var230)->values[3]=var270;
{
{ /* Inline model$MProperty$intro_mclassdef (var_other140) on <var_other140:MProperty> */
var273 = var_other140->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_other140:MProperty> */
if (unlikely(var273 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var271 = var273;
RET_LABEL272:(void)0;
}
}
{
{ /* Inline model$MClassDef$mclass (var271) on <var271:MClassDef> */
var276 = var271->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var271:MClassDef> */
if (unlikely(var276 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var274 = var276;
RET_LABEL275:(void)0;
}
}
{
{ /* Inline model$MClass$name (var274) on <var274:MClass> */
var279 = var274->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var274:MClass> */
if (unlikely(var279 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var277 = var279;
RET_LABEL278:(void)0;
}
}
((struct instance_core__NativeArray*)var230)->values[5]=var277;
{
var280 = ((val*(*)(val* self))(var230->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var230); /* native_to_s on <var230:NativeArray[String]>*/
}
varonce229 = var230;
{
nitc___nitc__ModelBuilder___advice(var_modelbuilder, self, var222, var280); /* Direct call modelbuilder_base$ModelBuilder$advice on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label;
} else {
}
{
((void(*)(val* self))((((long)var_137&3)?class_info[((long)var_137&3)]:var_137->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_137); /* next on <var_137:IndexedIterator[MProperty]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_137&3)?class_info[((long)var_137&3)]:var_137->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_137); /* finish on <var_137:IndexedIterator[MProperty]>*/
}
} else {
}
} else {
}
} else {
var281 = !var_need_redef;
if (var281){
if (unlikely(varonce282==NULL)) {
var283 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce284!=NULL)) {
var285 = varonce284;
} else {
var286 = "Error: no property `";
var288 = (val*)(20l<<2|1);
var289 = (val*)(20l<<2|1);
var290 = (val*)((long)(0)<<2|3);
var291 = (val*)((long)(0)<<2|3);
var287 = core__flat___CString___to_s_unsafe(var286, var288, var289, var290, var291);
var285 = var287;
varonce284 = var285;
}
((struct instance_core__NativeArray*)var283)->values[0]=var285;
if (likely(varonce292!=NULL)) {
var293 = varonce292;
} else {
var294 = "::";
var296 = (val*)(2l<<2|1);
var297 = (val*)(2l<<2|1);
var298 = (val*)((long)(0)<<2|3);
var299 = (val*)((long)(0)<<2|3);
var295 = core__flat___CString___to_s_unsafe(var294, var296, var297, var298, var299);
var293 = var295;
varonce292 = var293;
}
((struct instance_core__NativeArray*)var283)->values[2]=var293;
if (likely(varonce300!=NULL)) {
var301 = varonce300;
} else {
var302 = "` is inherited. Remove the `redef` keyword to define a new property.";
var304 = (val*)(68l<<2|1);
var305 = (val*)(68l<<2|1);
var306 = (val*)((long)(0)<<2|3);
var307 = (val*)((long)(0)<<2|3);
var303 = core__flat___CString___to_s_unsafe(var302, var304, var305, var306, var307);
var301 = var303;
varonce300 = var301;
}
((struct instance_core__NativeArray*)var283)->values[4]=var301;
} else {
var283 = varonce282;
varonce282 = NULL;
}
{
{ /* Inline model$MClassDef$mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var310 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var310 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var308 = var310;
RET_LABEL309:(void)0;
}
}
{
var311 = ((val*(*)(val* self))(var308->class->vft[COLOR_core__abstract_text__Object__to_s]))(var308); /* to_s on <var308:MClass>*/
}
((struct instance_core__NativeArray*)var283)->values[1]=var311;
{
{ /* Inline model$MProperty$name (var_mprop) on <var_mprop:MProperty> */
var314 = var_mprop->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var_mprop:MProperty> */
if (unlikely(var314 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var312 = var314;
RET_LABEL313:(void)0;
}
}
((struct instance_core__NativeArray*)var283)->values[3]=var312;
{
var315 = ((val*(*)(val* self))(var283->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var283); /* native_to_s on <var283:NativeArray[String]>*/
}
varonce282 = var283;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, self, var315); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
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
/* method modelize_property$APropdef$check_repeated_types for (self: APropdef, ModelBuilder) */
void nitc__modelize_property___APropdef___check_repeated_types(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
var_modelbuilder = p0;
RET_LABEL:;
}
/* method modelize_property$ASignature$is_visited= for (self: ASignature, Bool) */
void nitc__modelize_property___ASignature___is_visited_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__modelize_property__ASignature___is_visited].s = p0; /* _is_visited on <self:ASignature> */
RET_LABEL:;
}
/* method modelize_property$ASignature$param_names for (self: ASignature): Array[String] */
val* nitc__modelize_property___ASignature___param_names(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_nitc__modelize_property__ASignature___param_names].val; /* _param_names on <self:ASignature> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _param_names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 659);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property$ASignature$param_types for (self: ASignature): Array[MType] */
val* nitc__modelize_property___ASignature___param_types(val* self) {
val* var /* : Array[MType] */;
val* var1 /* : Array[MType] */;
var1 = self->attrs[COLOR_nitc__modelize_property__ASignature___param_types].val; /* _param_types on <self:ASignature> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _param_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 662);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property$ASignature$vararg_rank for (self: ASignature): Int */
long nitc__modelize_property___ASignature___vararg_rank(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nitc__modelize_property__ASignature___vararg_rank].l; /* _vararg_rank on <self:ASignature> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property$ASignature$vararg_rank= for (self: ASignature, Int) */
void nitc__modelize_property___ASignature___vararg_rank_61d(val* self, long p0) {
self->attrs[COLOR_nitc__modelize_property__ASignature___vararg_rank].l = p0; /* _vararg_rank on <self:ASignature> */
RET_LABEL:;
}
/* method modelize_property$ASignature$ret_type for (self: ASignature): nullable MType */
val* nitc__modelize_property___ASignature___ret_type(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nitc__modelize_property__ASignature___ret_type].val; /* _ret_type on <self:ASignature> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property$ASignature$ret_type= for (self: ASignature, nullable MType) */
void nitc__modelize_property___ASignature___ret_type_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__modelize_property__ASignature___ret_type].val = p0; /* _ret_type on <self:ASignature> */
RET_LABEL:;
}
