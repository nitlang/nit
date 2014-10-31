#include "modelize_property.sep.0.h"
/* method modelize_property#ToolContext#modelize_property_phase for (self: ToolContext): Phase */
val* modelize_property__ToolContext__modelize_property_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_modelize_property__ToolContext___modelize_property_phase].val; /* _modelize_property_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelize_property_phase");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 24);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ToolContext#modelize_property_phase for (self: Object): Phase */
val* VIRTUAL_modelize_property__ToolContext__modelize_property_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
val* var3 /* : Phase */;
{ /* Inline modelize_property#ToolContext#modelize_property_phase (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_modelize_property__ToolContext___modelize_property_phase].val; /* _modelize_property_phase on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelize_property_phase");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 24);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ModelizePropertyPhase#process_nmodule for (self: ModelizePropertyPhase, AModule) */
void modelize_property__ModelizePropertyPhase__process_nmodule(val* self, val* p0) {
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
var2 = var_nmodule->attrs[COLOR_parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 859);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_ = var;
{
var3 = parser_nodes__ANodes__iterator(var_);
}
var_4 = var3;
for(;;) {
{
var5 = ((short int (*)(val*))(var_4->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_4) /* is_ok on <var_4:Iterator[AClassdef]>*/;
}
if (var5){
{
var6 = ((val* (*)(val*))(var_4->class->vft[COLOR_abstract_collection__Iterator__item]))(var_4) /* item on <var_4:Iterator[AClassdef]>*/;
}
var_nclassdef = var6;
{
{ /* Inline modelize_class#AClassdef#all_defs (var_nclassdef) on <var_nclassdef:AClassdef> */
var9 = var_nclassdef->attrs[COLOR_modelize_class__AClassdef___all_defs].val; /* _all_defs on <var_nclassdef:AClassdef> */
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
var12 = array__Array___61d_61d(var7, var10);
var11 = var12;
}
if (var11){
goto BREAK_label;
} else {
}
{
{ /* Inline phase#Phase#toolcontext (self) on <self:ModelizePropertyPhase> */
var15 = self->attrs[COLOR_phase__Phase___toolcontext].val; /* _toolcontext on <self:ModelizePropertyPhase> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "phase.nit", 162);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = modelbuilder__ToolContext__modelbuilder(var13);
}
{
modelize_property__ModelBuilder__build_properties(var16, var_nclassdef); /* Direct call modelize_property#ModelBuilder#build_properties on <var16:ModelBuilder>*/
}
BREAK_label: (void)0;
{
((void (*)(val*))(var_4->class->vft[COLOR_abstract_collection__Iterator__next]))(var_4) /* next on <var_4:Iterator[AClassdef]>*/;
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
/* method modelize_property#ModelizePropertyPhase#process_nmodule for (self: Object, AModule) */
void VIRTUAL_modelize_property__ModelizePropertyPhase__process_nmodule(val* self, val* p0) {
modelize_property__ModelizePropertyPhase__process_nmodule(self, p0); /* Direct call modelize_property#ModelizePropertyPhase#process_nmodule on <self:Object(ModelizePropertyPhase)>*/
RET_LABEL:;
}
/* method modelize_property#ModelBuilder#mpropdef2npropdef for (self: ModelBuilder): HashMap[MPropDef, APropdef] */
val* modelize_property__ModelBuilder__mpropdef2npropdef(val* self) {
val* var /* : HashMap[MPropDef, APropdef] */;
val* var1 /* : HashMap[MPropDef, APropdef] */;
var1 = self->attrs[COLOR_modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 39);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ModelBuilder#mpropdef2npropdef for (self: Object): HashMap[MPropDef, APropdef] */
val* VIRTUAL_modelize_property__ModelBuilder__mpropdef2npropdef(val* self) {
val* var /* : HashMap[MPropDef, APropdef] */;
val* var1 /* : HashMap[MPropDef, APropdef] */;
val* var3 /* : HashMap[MPropDef, APropdef] */;
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (self) on <self:Object(ModelBuilder)> */
var3 = self->attrs[COLOR_modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <self:Object(ModelBuilder)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 39);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ModelBuilder#build_properties for (self: ModelBuilder, AClassdef) */
void modelize_property__ModelBuilder__build_properties(val* self, val* p0) {
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
val* var21 /* : Collection[Object] */;
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
var2 = var_nclassdef->attrs[COLOR_modelize_property__AClassdef___build_properties_is_done].s; /* _build_properties_is_done on <var_nclassdef:AClassdef> */
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
var_nclassdef->attrs[COLOR_modelize_property__AClassdef___build_properties_is_done].s = var3; /* _build_properties_is_done on <var_nclassdef:AClassdef> */
RET_LABEL4:(void)0;
}
}
{
{ /* Inline modelize_class#AClassdef#mclassdef (var_nclassdef) on <var_nclassdef:AClassdef> */
var7 = var_nclassdef->attrs[COLOR_modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_nclassdef:AClassdef> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 50);
show_backtrace(1);
}
var_mclassdef = var5;
{
{ /* Inline model#MClassDef#in_hierarchy (var_mclassdef) on <var_mclassdef:MClassDef> */
var10 = var_mclassdef->attrs[COLOR_model__MClassDef___in_hierarchy].val; /* _in_hierarchy on <var_mclassdef:MClassDef> */
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
var20 = var_mclassdef->attrs[COLOR_model__MClassDef___in_hierarchy].val; /* _in_hierarchy on <var_mclassdef:MClassDef> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (var18 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 52);
show_backtrace(1);
} else {
var21 = poset__POSetElement__direct_greaters(var18);
}
var_ = var21;
{
var22 = ((val* (*)(val*))(var_->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Collection[MClassDef]>*/;
}
var_23 = var22;
for(;;) {
{
var24 = ((short int (*)(val*))(var_23->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_23) /* is_ok on <var_23:Iterator[MClassDef]>*/;
}
if (var24){
{
var25 = ((val* (*)(val*))(var_23->class->vft[COLOR_abstract_collection__Iterator__item]))(var_23) /* item on <var_23:Iterator[MClassDef]>*/;
}
var_superclassdef = var25;
{
{ /* Inline modelize_class#ModelBuilder#mclassdef2nclassdef (self) on <self:ModelBuilder> */
var28 = self->attrs[COLOR_modelize_class__ModelBuilder___mclassdef2nclassdef].val; /* _mclassdef2nclassdef on <self:ModelBuilder> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef2nclassdef");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_class.nit", 410);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
var29 = abstract_collection__MapRead__has_key(var26, var_superclassdef);
}
var30 = !var29;
if (var30){
goto BREAK_label;
} else {
}
{
{ /* Inline modelize_class#ModelBuilder#mclassdef2nclassdef (self) on <self:ModelBuilder> */
var33 = self->attrs[COLOR_modelize_class__ModelBuilder___mclassdef2nclassdef].val; /* _mclassdef2nclassdef on <self:ModelBuilder> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef2nclassdef");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_class.nit", 410);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
var34 = hash_collection__HashMap___91d_93d(var31, var_superclassdef);
}
{
modelize_property__ModelBuilder__build_properties(self, var34); /* Direct call modelize_property#ModelBuilder#build_properties on <self:ModelBuilder>*/
}
BREAK_label: (void)0;
{
((void (*)(val*))(var_23->class->vft[COLOR_abstract_collection__Iterator__next]))(var_23) /* next on <var_23:Iterator[MClassDef]>*/;
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
{ /* Inline modelize_class#AClassdef#all_defs (var_nclassdef) on <var_nclassdef:AClassdef> */
var39 = var_nclassdef->attrs[COLOR_modelize_class__AClassdef___all_defs].val; /* _all_defs on <var_nclassdef:AClassdef> */
var37 = var39;
RET_LABEL38:(void)0;
}
}
var_40 = var37;
if (var_40 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 57);
show_backtrace(1);
} else {
var41 = array__AbstractArrayRead__iterator(var_40);
}
var_42 = var41;
for(;;) {
{
var43 = array__ArrayIterator__is_ok(var_42);
}
if (var43){
{
var44 = array__ArrayIterator__item(var_42);
}
var_nclassdef2 = var44;
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_nclassdef2) on <var_nclassdef2:AClassdef> */
var47 = var_nclassdef2->attrs[COLOR_parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef2:AClassdef> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 929);
show_backtrace(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
var_48 = var45;
{
var49 = parser_nodes__ANodes__iterator(var_48);
}
var_50 = var49;
for(;;) {
{
var51 = ((short int (*)(val*))(var_50->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_50) /* is_ok on <var_50:Iterator[APropdef]>*/;
}
if (var51){
{
var52 = ((val* (*)(val*))(var_50->class->vft[COLOR_abstract_collection__Iterator__item]))(var_50) /* item on <var_50:Iterator[APropdef]>*/;
}
var_npropdef = var52;
{
((void (*)(val*, val*, val*))(var_npropdef->class->vft[COLOR_modelize_property__APropdef__build_property]))(var_npropdef, self, var_mclassdef) /* build_property on <var_npropdef:APropdef>*/;
}
{
((void (*)(val*))(var_50->class->vft[COLOR_abstract_collection__Iterator__next]))(var_50) /* next on <var_50:Iterator[APropdef]>*/;
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
var57 = var_nclassdef2->attrs[COLOR_parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef2:AClassdef> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 929);
show_backtrace(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
var_58 = var55;
{
var59 = parser_nodes__ANodes__iterator(var_58);
}
var_60 = var59;
for(;;) {
{
var61 = ((short int (*)(val*))(var_60->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_60) /* is_ok on <var_60:Iterator[APropdef]>*/;
}
if (var61){
{
var62 = ((val* (*)(val*))(var_60->class->vft[COLOR_abstract_collection__Iterator__item]))(var_60) /* item on <var_60:Iterator[APropdef]>*/;
}
var_npropdef63 = var62;
{
((void (*)(val*, val*))(var_npropdef63->class->vft[COLOR_modelize_property__APropdef__build_signature]))(var_npropdef63, self) /* build_signature on <var_npropdef63:APropdef>*/;
}
{
((void (*)(val*))(var_60->class->vft[COLOR_abstract_collection__Iterator__next]))(var_60) /* next on <var_60:Iterator[APropdef]>*/;
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
var68 = var_nclassdef2->attrs[COLOR_parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef2:AClassdef> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 929);
show_backtrace(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
var_69 = var66;
{
var70 = parser_nodes__ANodes__iterator(var_69);
}
var_71 = var70;
for(;;) {
{
var72 = ((short int (*)(val*))(var_71->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_71) /* is_ok on <var_71:Iterator[APropdef]>*/;
}
if (var72){
{
var73 = ((val* (*)(val*))(var_71->class->vft[COLOR_abstract_collection__Iterator__item]))(var_71) /* item on <var_71:Iterator[APropdef]>*/;
}
var_npropdef74 = var73;
{
((void (*)(val*, val*))(var_npropdef74->class->vft[COLOR_modelize_property__APropdef__check_signature]))(var_npropdef74, self) /* check_signature on <var_npropdef74:APropdef>*/;
}
{
((void (*)(val*))(var_71->class->vft[COLOR_abstract_collection__Iterator__next]))(var_71) /* next on <var_71:Iterator[APropdef]>*/;
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
array__ArrayIterator__next(var_42); /* Direct call array#ArrayIterator#next on <var_42:ArrayIterator[AClassdef]>*/
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
modelize_property__ModelBuilder__process_default_constructors(self, var_nclassdef); /* Direct call modelize_property#ModelBuilder#process_default_constructors on <self:ModelBuilder>*/
}
RET_LABEL:;
}
/* method modelize_property#ModelBuilder#build_properties for (self: Object, AClassdef) */
void VIRTUAL_modelize_property__ModelBuilder__build_properties(val* self, val* p0) {
modelize_property__ModelBuilder__build_properties(self, p0); /* Direct call modelize_property#ModelBuilder#build_properties on <self:Object(ModelBuilder)>*/
RET_LABEL:;
}
/* method modelize_property#ModelBuilder#the_root_init_mmethod for (self: ModelBuilder): nullable MMethod */
val* modelize_property__ModelBuilder__the_root_init_mmethod(val* self) {
val* var /* : nullable MMethod */;
val* var1 /* : nullable MMethod */;
var1 = self->attrs[COLOR_modelize_property__ModelBuilder___the_root_init_mmethod].val; /* _the_root_init_mmethod on <self:ModelBuilder> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ModelBuilder#the_root_init_mmethod for (self: Object): nullable MMethod */
val* VIRTUAL_modelize_property__ModelBuilder__the_root_init_mmethod(val* self) {
val* var /* : nullable MMethod */;
val* var1 /* : nullable MMethod */;
val* var3 /* : nullable MMethod */;
{ /* Inline modelize_property#ModelBuilder#the_root_init_mmethod (self) on <self:Object(ModelBuilder)> */
var3 = self->attrs[COLOR_modelize_property__ModelBuilder___the_root_init_mmethod].val; /* _the_root_init_mmethod on <self:Object(ModelBuilder)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ModelBuilder#the_root_init_mmethod= for (self: ModelBuilder, nullable MMethod) */
void modelize_property__ModelBuilder__the_root_init_mmethod_61d(val* self, val* p0) {
self->attrs[COLOR_modelize_property__ModelBuilder___the_root_init_mmethod].val = p0; /* _the_root_init_mmethod on <self:ModelBuilder> */
RET_LABEL:;
}
/* method modelize_property#ModelBuilder#the_root_init_mmethod= for (self: Object, nullable MMethod) */
void VIRTUAL_modelize_property__ModelBuilder__the_root_init_mmethod_61d(val* self, val* p0) {
{ /* Inline modelize_property#ModelBuilder#the_root_init_mmethod= (self,p0) on <self:Object(ModelBuilder)> */
self->attrs[COLOR_modelize_property__ModelBuilder___the_root_init_mmethod].val = p0; /* _the_root_init_mmethod on <self:Object(ModelBuilder)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method modelize_property#ModelBuilder#process_default_constructors for (self: ModelBuilder, AClassdef) */
void modelize_property__ModelBuilder__process_default_constructors(val* self, val* p0) {
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
short int var17 /* : Bool */;
short int var_ /* var : Bool */;
val* var18 /* : nullable MMethod */;
val* var20 /* : nullable MMethod */;
val* var21 /* : null */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : MMethod */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : FlatString */;
val* var34 /* : MClass */;
val* var36 /* : MClass */;
val* var37 /* : MVisibility */;
val* var39 /* : MVisibility */;
val* var_mprop /* var mprop: MMethod */;
short int var40 /* : Bool */;
val* var42 /* : MMethodDef */;
val* var43 /* : Location */;
val* var45 /* : Location */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var46 /* : Array[MParameter] */;
val* var_mparameters /* var mparameters: Array[MParameter] */;
val* var47 /* : MSignature */;
val* var48 /* : null */;
val* var_msignature /* var msignature: MSignature */;
short int var51 /* : Bool */;
val* var54 /* : ToolContext */;
val* var56 /* : ToolContext */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
long var60 /* : Int */;
val* var61 /* : FlatString */;
val* var62 /* : Array[Object] */;
long var63 /* : Int */;
val* var64 /* : NativeArray[Object] */;
val* var65 /* : String */;
long var66 /* : Int */;
val* var68 /* : MClass */;
val* var70 /* : MClass */;
val* var71 /* : MClassKind */;
val* var73 /* : MClassKind */;
short int var74 /* : Bool */;
short int var76 /* : Bool */;
short int var77 /* : Bool */;
val* var78 /* : null */;
val* var_defined_init /* var defined_init: nullable MMethodDef */;
val* var79 /* : Array[MPropDef] */;
val* var81 /* : Array[MPropDef] */;
val* var_82 /* var : Array[MPropDef] */;
val* var83 /* : ArrayIterator[nullable Object] */;
val* var_84 /* var : ArrayIterator[MPropDef] */;
short int var85 /* : Bool */;
val* var86 /* : nullable Object */;
val* var_mpropdef87 /* var mpropdef: MPropDef */;
short int var88 /* : Bool */;
int cltype;
int idtype;
short int var89 /* : Bool */;
val* var90 /* : MProperty */;
val* var92 /* : MProperty */;
short int var93 /* : Bool */;
short int var95 /* : Bool */;
short int var96 /* : Bool */;
val* var97 /* : MProperty */;
val* var99 /* : MProperty */;
short int var100 /* : Bool */;
short int var102 /* : Bool */;
val* var103 /* : null */;
short int var104 /* : Bool */;
short int var105 /* : Bool */;
short int var107 /* : Bool */;
short int var109 /* : Bool */;
val* var110 /* : MProperty */;
val* var112 /* : MProperty */;
val* var113 /* : String */;
val* var115 /* : String */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : NativeString */;
long var119 /* : Int */;
val* var120 /* : FlatString */;
short int var121 /* : Bool */;
short int var122 /* : Bool */;
short int var125 /* : Bool */;
int cltype126;
int idtype127;
short int var128 /* : Bool */;
val* var129 /* : Array[MParameter] */;
val* var_mparameters130 /* var mparameters: Array[MParameter] */;
val* var131 /* : Array[MProperty] */;
val* var_initializers /* var initializers: Array[MProperty] */;
val* var132 /* : ANodes[APropdef] */;
val* var134 /* : ANodes[APropdef] */;
val* var_135 /* var : ANodes[APropdef] */;
val* var136 /* : Iterator[ANode] */;
val* var_137 /* var : Iterator[APropdef] */;
short int var138 /* : Bool */;
val* var139 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
short int var140 /* : Bool */;
int cltype141;
int idtype142;
val* var143 /* : nullable MPropDef */;
val* var145 /* : nullable MPropDef */;
val* var146 /* : null */;
short int var147 /* : Bool */;
short int var148 /* : Bool */;
short int var150 /* : Bool */;
short int var152 /* : Bool */;
static val* varonce153;
val* var154 /* : String */;
char* var155 /* : NativeString */;
long var156 /* : Int */;
val* var157 /* : FlatString */;
val* var158 /* : nullable AAnnotation */;
val* var_at /* var at: nullable AAnnotation */;
val* var159 /* : null */;
short int var160 /* : Bool */;
short int var161 /* : Bool */;
short int var163 /* : Bool */;
short int var165 /* : Bool */;
val* var167 /* : nullable MPropDef */;
val* var169 /* : nullable MPropDef */;
val* var170 /* : nullable MSignature */;
val* var172 /* : nullable MSignature */;
val* var_sig /* var sig: nullable MSignature */;
val* var173 /* : null */;
short int var174 /* : Bool */;
short int var175 /* : Bool */;
short int var177 /* : Bool */;
short int var179 /* : Bool */;
val* var180 /* : nullable MPropDef */;
val* var182 /* : nullable MPropDef */;
short int var183 /* : Bool */;
short int var184 /* : Bool */;
static val* varonce185;
val* var186 /* : String */;
char* var187 /* : NativeString */;
long var188 /* : Int */;
val* var189 /* : FlatString */;
val* var190 /* : Array[MParameter] */;
val* var192 /* : Array[MParameter] */;
val* var_193 /* var : Array[MParameter] */;
val* var194 /* : ArrayIterator[nullable Object] */;
val* var_195 /* var : ArrayIterator[MParameter] */;
short int var196 /* : Bool */;
val* var197 /* : nullable Object */;
val* var_param /* var param: MParameter */;
val* var198 /* : MType */;
val* var200 /* : MType */;
val* var_ret_type /* var ret_type: MType */;
val* var201 /* : MParameter */;
val* var202 /* : String */;
val* var204 /* : String */;
short int var205 /* : Bool */;
val* var_mparameter /* var mparameter: MParameter */;
val* var208 /* : nullable MPropDef */;
val* var210 /* : nullable MPropDef */;
val* var211 /* : MProperty */;
val* var213 /* : MProperty */;
short int var214 /* : Bool */;
int cltype215;
int idtype216;
val* var217 /* : nullable MPropDef */;
val* var219 /* : nullable MPropDef */;
val* var220 /* : null */;
short int var221 /* : Bool */;
short int var222 /* : Bool */;
short int var224 /* : Bool */;
short int var226 /* : Bool */;
short int var227 /* : Bool */;
short int var229 /* : Bool */;
static val* varonce230;
val* var231 /* : String */;
char* var232 /* : NativeString */;
long var233 /* : Int */;
val* var234 /* : FlatString */;
val* var235 /* : nullable AAnnotation */;
val* var_atautoinit /* var atautoinit: nullable AAnnotation */;
val* var236 /* : null */;
short int var237 /* : Bool */;
short int var238 /* : Bool */;
val* var_other240 /* var other: nullable Object */;
short int var241 /* : Bool */;
short int var242 /* : Bool */;
short int var243 /* : Bool */;
val* var244 /* : nullable MMethodDef */;
val* var246 /* : nullable MMethodDef */;
val* var247 /* : MProperty */;
val* var249 /* : MProperty */;
short int var250 /* : Bool */;
short int var252 /* : Bool */;
val* var253 /* : nullable MPropDef */;
val* var255 /* : nullable MPropDef */;
val* var256 /* : MProperty */;
val* var258 /* : MProperty */;
val* var259 /* : String */;
val* var261 /* : String */;
long var262 /* : Int */;
val* var263 /* : Text */;
val* var_paramname /* var paramname: String */;
val* var264 /* : nullable MPropDef */;
val* var266 /* : nullable MPropDef */;
val* var267 /* : nullable MType */;
val* var269 /* : nullable MType */;
val* var_ret_type270 /* var ret_type: nullable MType */;
val* var271 /* : null */;
short int var272 /* : Bool */;
short int var273 /* : Bool */;
short int var275 /* : Bool */;
short int var277 /* : Bool */;
val* var278 /* : MParameter */;
short int var279 /* : Bool */;
val* var_mparameter280 /* var mparameter: MParameter */;
val* var281 /* : nullable MMethodDef */;
val* var283 /* : nullable MMethodDef */;
val* var_msetter /* var msetter: nullable MMethodDef */;
val* var284 /* : null */;
short int var285 /* : Bool */;
short int var286 /* : Bool */;
short int var288 /* : Bool */;
short int var290 /* : Bool */;
val* var291 /* : nullable MPropDef */;
val* var293 /* : nullable MPropDef */;
val* var294 /* : MProperty */;
val* var296 /* : MProperty */;
val* var297 /* : MProperty */;
val* var299 /* : MProperty */;
val* var302 /* : nullable MMethod */;
val* var304 /* : nullable MMethod */;
val* var305 /* : null */;
short int var306 /* : Bool */;
short int var307 /* : Bool */;
short int var309 /* : Bool */;
short int var311 /* : Bool */;
val* var312 /* : nullable MMethod */;
val* var314 /* : nullable MMethod */;
val* var315 /* : MModule */;
val* var317 /* : MModule */;
val* var318 /* : MClassType */;
val* var320 /* : MClassType */;
val* var321 /* : Array[MPropDef] */;
val* var_spropdefs /* var spropdefs: Array[MMethodDef] */;
short int var322 /* : Bool */;
val* var323 /* : ToolContext */;
val* var325 /* : ToolContext */;
val* var326 /* : Location */;
val* var328 /* : Location */;
static val* varonce329;
val* var330 /* : String */;
char* var331 /* : NativeString */;
long var332 /* : Int */;
val* var333 /* : FlatString */;
static val* varonce334;
val* var335 /* : String */;
char* var336 /* : NativeString */;
long var337 /* : Int */;
val* var338 /* : FlatString */;
val* var339 /* : nullable MMethod */;
val* var341 /* : nullable MMethod */;
val* var342 /* : MClassDef */;
val* var344 /* : MClassDef */;
static val* varonce345;
val* var346 /* : String */;
char* var347 /* : NativeString */;
long var348 /* : Int */;
val* var349 /* : FlatString */;
val* var350 /* : Array[Object] */;
long var351 /* : Int */;
val* var352 /* : NativeArray[Object] */;
val* var353 /* : String */;
val* var354 /* : nullable Object */;
val* var_longest /* var longest: MMethodDef */;
long var355 /* : Int */;
long var357 /* : Int */;
long var358 /* : Int */;
short int var359 /* : Bool */;
short int var361 /* : Bool */;
int cltype362;
int idtype363;
const char* var_class_name;
short int var364 /* : Bool */;
val* var_365 /* var : Array[MMethodDef] */;
val* var366 /* : ArrayIterator[nullable Object] */;
val* var_367 /* var : ArrayIterator[MMethodDef] */;
short int var368 /* : Bool */;
val* var369 /* : nullable Object */;
val* var_spd /* var spd: MMethodDef */;
val* var370 /* : Array[MProperty] */;
val* var372 /* : Array[MProperty] */;
long var373 /* : Int */;
long var375 /* : Int */;
val* var376 /* : Array[MProperty] */;
val* var378 /* : Array[MProperty] */;
long var379 /* : Int */;
long var381 /* : Int */;
short int var382 /* : Bool */;
short int var384 /* : Bool */;
int cltype385;
int idtype386;
const char* var_class_name387;
short int var388 /* : Bool */;
val* var_391 /* var : Array[MMethodDef] */;
val* var392 /* : ArrayIterator[nullable Object] */;
val* var_393 /* var : ArrayIterator[MMethodDef] */;
short int var394 /* : Bool */;
val* var395 /* : nullable Object */;
val* var_spd396 /* var spd: MMethodDef */;
long var397 /* : Int */;
long var_i /* var i: Int */;
val* var398 /* : Array[MProperty] */;
val* var400 /* : Array[MProperty] */;
val* var_401 /* var : Array[MProperty] */;
val* var402 /* : ArrayIterator[nullable Object] */;
val* var_403 /* var : ArrayIterator[MProperty] */;
short int var404 /* : Bool */;
val* var405 /* : nullable Object */;
val* var_p /* var p: MProperty */;
val* var406 /* : Array[MProperty] */;
val* var408 /* : Array[MProperty] */;
val* var409 /* : nullable Object */;
short int var410 /* : Bool */;
short int var411 /* : Bool */;
short int var413 /* : Bool */;
short int var414 /* : Bool */;
short int var415 /* : Bool */;
static val* varonce416;
val* var417 /* : String */;
char* var418 /* : NativeString */;
long var419 /* : Int */;
val* var420 /* : FlatString */;
static val* varonce421;
val* var422 /* : String */;
char* var423 /* : NativeString */;
long var424 /* : Int */;
val* var425 /* : FlatString */;
val* var426 /* : Array[MProperty] */;
val* var428 /* : Array[MProperty] */;
static val* varonce429;
val* var430 /* : String */;
char* var431 /* : NativeString */;
long var432 /* : Int */;
val* var433 /* : FlatString */;
val* var434 /* : String */;
static val* varonce435;
val* var436 /* : String */;
char* var437 /* : NativeString */;
long var438 /* : Int */;
val* var439 /* : FlatString */;
static val* varonce440;
val* var441 /* : String */;
char* var442 /* : NativeString */;
long var443 /* : Int */;
val* var444 /* : FlatString */;
val* var445 /* : Array[MProperty] */;
val* var447 /* : Array[MProperty] */;
static val* varonce448;
val* var449 /* : String */;
char* var450 /* : NativeString */;
long var451 /* : Int */;
val* var452 /* : FlatString */;
val* var453 /* : String */;
static val* varonce454;
val* var455 /* : String */;
char* var456 /* : NativeString */;
long var457 /* : Int */;
val* var458 /* : FlatString */;
val* var459 /* : Array[Object] */;
long var460 /* : Int */;
val* var461 /* : NativeArray[Object] */;
val* var462 /* : String */;
long var463 /* : Int */;
long var464 /* : Int */;
short int var466 /* : Bool */;
int cltype467;
int idtype468;
const char* var_class_name469;
long var470 /* : Int */;
short int var475 /* : Bool */;
short int var476 /* : Bool */;
long var477 /* : Int */;
long var479 /* : Int */;
long var480 /* : Int */;
short int var481 /* : Bool */;
short int var482 /* : Bool */;
short int var484 /* : Bool */;
short int var_485 /* var : Bool */;
short int var486 /* : Bool */;
short int var_487 /* var : Bool */;
val* var488 /* : null */;
short int var489 /* : Bool */;
short int var490 /* : Bool */;
short int var492 /* : Bool */;
short int var494 /* : Bool */;
val* var495 /* : ToolContext */;
val* var497 /* : ToolContext */;
static val* varonce498;
val* var499 /* : String */;
char* var500 /* : NativeString */;
long var501 /* : Int */;
val* var502 /* : FlatString */;
val* var503 /* : Array[Object] */;
long var504 /* : Int */;
val* var505 /* : NativeArray[Object] */;
val* var506 /* : String */;
long var507 /* : Int */;
val* var508 /* : MClass */;
val* var510 /* : MClass */;
val* var512 /* : Array[MProperty] */;
val* var514 /* : Array[MProperty] */;
long var515 /* : Int */;
long var517 /* : Int */;
long var518 /* : Int */;
short int var519 /* : Bool */;
short int var521 /* : Bool */;
int cltype522;
int idtype523;
const char* var_class_name524;
short int var525 /* : Bool */;
val* var526 /* : nullable MSignature */;
val* var528 /* : nullable MSignature */;
val* var529 /* : Array[MParameter] */;
val* var531 /* : Array[MParameter] */;
val* var532 /* : Array[MProperty] */;
val* var534 /* : Array[MProperty] */;
val* var535 /* : null */;
short int var536 /* : Bool */;
short int var537 /* : Bool */;
short int var539 /* : Bool */;
short int var540 /* : Bool */;
short int var541 /* : Bool */;
val* var542 /* : Array[MProperty] */;
val* var544 /* : Array[MProperty] */;
val* var545 /* : MSignature */;
val* var546 /* : null */;
val* var_msignature547 /* var msignature: MSignature */;
val* var549 /* : ToolContext */;
val* var551 /* : ToolContext */;
static val* varonce552;
val* var553 /* : String */;
char* var554 /* : NativeString */;
long var555 /* : Int */;
val* var556 /* : FlatString */;
val* var557 /* : Array[Object] */;
long var558 /* : Int */;
val* var559 /* : NativeArray[Object] */;
val* var560 /* : String */;
long var561 /* : Int */;
val* var562 /* : MClass */;
val* var564 /* : MClass */;
val* var566 /* : nullable MMethod */;
val* var568 /* : nullable MMethod */;
val* var_mprop569 /* var mprop: MMethod */;
val* var570 /* : MMethodDef */;
val* var571 /* : Location */;
val* var573 /* : Location */;
val* var_mpropdef574 /* var mpropdef: MMethodDef */;
short int var575 /* : Bool */;
val* var577 /* : Array[MProperty] */;
val* var579 /* : Array[MProperty] */;
val* var580 /* : MSignature */;
val* var581 /* : null */;
val* var_msignature582 /* var msignature: MSignature */;
val* var584 /* : MSignature */;
val* var585 /* : Array[MParameter] */;
val* var586 /* : null */;
val* var589 /* : ToolContext */;
val* var591 /* : ToolContext */;
static val* varonce592;
val* var593 /* : String */;
char* var594 /* : NativeString */;
long var595 /* : Int */;
val* var596 /* : FlatString */;
val* var597 /* : Array[Object] */;
long var598 /* : Int */;
val* var599 /* : NativeArray[Object] */;
val* var600 /* : String */;
long var601 /* : Int */;
val* var602 /* : MClass */;
val* var604 /* : MClass */;
var_nclassdef = p0;
{
{ /* Inline modelize_class#AClassdef#mclassdef (var_nclassdef) on <var_nclassdef:AClassdef> */
var2 = var_nclassdef->attrs[COLOR_modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_nclassdef:AClassdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 80);
show_backtrace(1);
}
var_mclassdef = var;
{
var3 = model__MClassDef__is_intro(var_mclassdef);
}
var4 = !var3;
if (var4){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var8 = var_mclassdef->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline model#MClass#name (var6) on <var6:MClass> */
var11 = var6->attrs[COLOR_model__MClass___name].val; /* _name on <var6:MClass> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 352);
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
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce = var12;
}
{
var17 = string__FlatString___61d_61d(var9, var12);
var16 = var17;
}
var_ = var16;
if (var16){
{
{ /* Inline modelize_property#ModelBuilder#the_root_init_mmethod (self) on <self:ModelBuilder> */
var20 = self->attrs[COLOR_modelize_property__ModelBuilder___the_root_init_mmethod].val; /* _the_root_init_mmethod on <self:ModelBuilder> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
var21 = NULL;
if (var18 == NULL) {
var22 = 1; /* is null */
} else {
var22 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var18,var21) on <var18:nullable MMethod> */
var_other = var21;
{
{ /* Inline kernel#Object#is_same_instance (var18,var_other) on <var18:nullable MMethod(MMethod)> */
var27 = var18 == var_other;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
var22 = var23;
}
var5 = var22;
} else {
var5 = var_;
}
if (var5){
var28 = NEW_model__MMethod(&type_model__MMethod);
if (varonce29) {
var30 = varonce29;
} else {
var31 = "init";
var32 = 4;
var33 = string__NativeString__to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var36 = var_mclassdef->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline model#MClass#visibility (var34) on <var34:MClass> */
var39 = var34->attrs[COLOR_model__MClass___visibility].val; /* _visibility on <var34:MClass> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 375);
show_backtrace(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
model__MMethod__init(var28, var_mclassdef, var30, var37); /* Direct call model#MMethod#init on <var28:MMethod>*/
}
var_mprop = var28;
var40 = 1;
{
{ /* Inline model#MMethod#is_root_init= (var_mprop,var40) on <var_mprop:MMethod> */
var_mprop->attrs[COLOR_model__MMethod___is_root_init].s = var40; /* _is_root_init on <var_mprop:MMethod> */
RET_LABEL41:(void)0;
}
}
var42 = NEW_model__MMethodDef(&type_model__MMethodDef);
{
{ /* Inline parser_nodes#ANode#location (var_nclassdef) on <var_nclassdef:AClassdef> */
var45 = var_nclassdef->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <var_nclassdef:AClassdef> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 23);
show_backtrace(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
model__MMethodDef__init(var42, var_mclassdef, var_mprop, var43); /* Direct call model#MMethodDef#init on <var42:MMethodDef>*/
}
var_mpropdef = var42;
var46 = NEW_array__Array(&type_array__Arraymodel__MParameter);
{
((void (*)(val*))(var46->class->vft[COLOR_kernel__Object__init]))(var46) /* init on <var46:Array[MParameter]>*/;
}
var_mparameters = var46;
var47 = NEW_model__MSignature(&type_model__MSignature);
var48 = NULL;
{
model__MSignature__init(var47, var_mparameters, var48); /* Direct call model#MSignature#init on <var47:MSignature>*/
}
var_msignature = var47;
{
{ /* Inline model#MMethodDef#msignature= (var_mpropdef,var_msignature) on <var_mpropdef:MMethodDef> */
var_mpropdef->attrs[COLOR_model__MMethodDef___msignature].val = var_msignature; /* _msignature on <var_mpropdef:MMethodDef> */
RET_LABEL49:(void)0;
}
}
{
{ /* Inline model#MMethodDef#new_msignature= (var_mpropdef,var_msignature) on <var_mpropdef:MMethodDef> */
var_mpropdef->attrs[COLOR_model__MMethodDef___new_msignature].val = var_msignature; /* _new_msignature on <var_mpropdef:MMethodDef> */
RET_LABEL50:(void)0;
}
}
var51 = 1;
{
{ /* Inline model#MMethod#is_init= (var_mprop,var51) on <var_mprop:MMethod> */
var_mprop->attrs[COLOR_model__MMethod___is_init].s = var51; /* _is_init on <var_mprop:MMethod> */
RET_LABEL52:(void)0;
}
}
{
{ /* Inline modelize_property#AClassdef#mfree_init= (var_nclassdef,var_mpropdef) on <var_nclassdef:AClassdef> */
var_nclassdef->attrs[COLOR_modelize_property__AClassdef___mfree_init].val = var_mpropdef; /* _mfree_init on <var_nclassdef:AClassdef> */
RET_LABEL53:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var56 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
if (varonce57) {
var58 = varonce57;
} else {
var59 = " gets a free empty constructor ";
var60 = 31;
var61 = string__NativeString__to_s_with_length(var59, var60);
var58 = var61;
varonce57 = var58;
}
var62 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var62 = array_instance Array[Object] */
var63 = 4;
var64 = NEW_array__NativeArray(var63, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var64)->values[0] = (val*) var_mclassdef;
((struct instance_array__NativeArray*)var64)->values[1] = (val*) var58;
((struct instance_array__NativeArray*)var64)->values[2] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var64)->values[3] = (val*) var_msignature;
{
((void (*)(val*, val*, long))(var62->class->vft[COLOR_array__Array__with_native]))(var62, var64, var63) /* with_native on <var62:Array[Object]>*/;
}
}
{
var65 = ((val* (*)(val*))(var62->class->vft[COLOR_string__Object__to_s]))(var62) /* to_s on <var62:Array[Object]>*/;
}
var66 = 3;
{
toolcontext__ToolContext__info(var54, var65, var66); /* Direct call toolcontext#ToolContext#info on <var54:ToolContext>*/
}
{
{ /* Inline modelize_property#ModelBuilder#the_root_init_mmethod= (self,var_mprop) on <self:ModelBuilder> */
self->attrs[COLOR_modelize_property__ModelBuilder___the_root_init_mmethod].val = var_mprop; /* _the_root_init_mmethod on <self:ModelBuilder> */
RET_LABEL67:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var70 = var_mclassdef->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var68) on <var68:MClass> */
var73 = var68->attrs[COLOR_model__MClass___kind].val; /* _kind on <var68:MClass> */
if (unlikely(var73 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 371);
show_backtrace(1);
}
var71 = var73;
RET_LABEL72:(void)0;
}
}
{
{ /* Inline model#MClassKind#need_init (var71) on <var71:MClassKind> */
var76 = var71->attrs[COLOR_model__MClassKind___need_init].s; /* _need_init on <var71:MClassKind> */
var74 = var76;
RET_LABEL75:(void)0;
}
}
var77 = !var74;
if (var77){
goto RET_LABEL;
} else {
}
var78 = NULL;
var_defined_init = var78;
{
{ /* Inline model#MClassDef#mpropdefs (var_mclassdef) on <var_mclassdef:MClassDef> */
var81 = var_mclassdef->attrs[COLOR_model__MClassDef___mpropdefs].val; /* _mpropdefs on <var_mclassdef:MClassDef> */
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 591);
show_backtrace(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
var_82 = var79;
{
var83 = array__AbstractArrayRead__iterator(var_82);
}
var_84 = var83;
for(;;) {
{
var85 = array__ArrayIterator__is_ok(var_84);
}
if (var85){
{
var86 = array__ArrayIterator__item(var_84);
}
var_mpropdef87 = var86;
/* <var_mpropdef87:MPropDef> isa MMethodDef */
cltype = type_model__MMethodDef.color;
idtype = type_model__MMethodDef.id;
if(cltype >= var_mpropdef87->type->table_size) {
var88 = 0;
} else {
var88 = var_mpropdef87->type->type_table[cltype] == idtype;
}
var89 = !var88;
if (var89){
goto BREAK_label;
} else {
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef87) on <var_mpropdef87:MPropDef(MMethodDef)> */
var92 = var_mpropdef87->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef87:MPropDef(MMethodDef)> */
if (unlikely(var92 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
{
{ /* Inline model#MMethod#is_init (var90) on <var90:MProperty(MMethod)> */
var95 = var90->attrs[COLOR_model__MMethod___is_init].s; /* _is_init on <var90:MProperty(MMethod)> */
var93 = var95;
RET_LABEL94:(void)0;
}
}
var96 = !var93;
if (var96){
goto BREAK_label;
} else {
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef87) on <var_mpropdef87:MPropDef(MMethodDef)> */
var99 = var_mpropdef87->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef87:MPropDef(MMethodDef)> */
if (unlikely(var99 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var97 = var99;
RET_LABEL98:(void)0;
}
}
{
{ /* Inline model#MMethod#is_root_init (var97) on <var97:MProperty(MMethod)> */
var102 = var97->attrs[COLOR_model__MMethod___is_root_init].s; /* _is_root_init on <var97:MProperty(MMethod)> */
var100 = var102;
RET_LABEL101:(void)0;
}
}
if (var100){
var103 = NULL;
if (var_defined_init == NULL) {
var104 = 1; /* is null */
} else {
var104 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_defined_init,var103) on <var_defined_init:nullable MMethodDef> */
var_other = var103;
{
{ /* Inline kernel#Object#is_same_instance (var_defined_init,var_other) on <var_defined_init:nullable MMethodDef(MMethodDef)> */
var109 = var_defined_init == var_other;
var107 = var109;
goto RET_LABEL108;
RET_LABEL108:(void)0;
}
}
var105 = var107;
goto RET_LABEL106;
RET_LABEL106:(void)0;
}
var104 = var105;
}
if (unlikely(!var104)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 111);
show_backtrace(1);
}
var_defined_init = var_mpropdef87;
} else {
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef87) on <var_mpropdef87:MPropDef(MMethodDef)> */
var112 = var_mpropdef87->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef87:MPropDef(MMethodDef)> */
if (unlikely(var112 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var110 = var112;
RET_LABEL111:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var110) on <var110:MProperty(MMethod)> */
var115 = var110->attrs[COLOR_model__MProperty___name].val; /* _name on <var110:MProperty(MMethod)> */
if (unlikely(var115 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1620);
show_backtrace(1);
}
var113 = var115;
RET_LABEL114:(void)0;
}
}
if (varonce116) {
var117 = varonce116;
} else {
var118 = "init";
var119 = 4;
var120 = string__NativeString__to_s_with_length(var118, var119);
var117 = var120;
varonce116 = var117;
}
{
var122 = string__FlatString___61d_61d(var113, var117);
var121 = var122;
}
if (var121){
goto RET_LABEL;
} else {
}
}
BREAK_label: (void)0;
{
array__ArrayIterator__next(var_84); /* Direct call array#ArrayIterator#next on <var_84:ArrayIterator[MPropDef]>*/
}
} else {
goto BREAK_label123;
}
}
BREAK_label123: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_84) on <var_84:ArrayIterator[MPropDef]> */
RET_LABEL124:(void)0;
}
}
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype126 = type_parser_nodes__AStdClassdef.color;
idtype127 = type_parser_nodes__AStdClassdef.id;
if(cltype126 >= var_nclassdef->type->table_size) {
var125 = 0;
} else {
var125 = var_nclassdef->type->type_table[cltype126] == idtype127;
}
var128 = !var125;
if (var128){
goto RET_LABEL;
} else {
}
var129 = NEW_array__Array(&type_array__Arraymodel__MParameter);
{
((void (*)(val*))(var129->class->vft[COLOR_kernel__Object__init]))(var129) /* init on <var129:Array[MParameter]>*/;
}
var_mparameters130 = var129;
var131 = NEW_array__Array(&type_array__Arraymodel__MProperty);
{
((void (*)(val*))(var131->class->vft[COLOR_kernel__Object__init]))(var131) /* init on <var131:Array[MProperty]>*/;
}
var_initializers = var131;
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var134 = var_nclassdef->attrs[COLOR_parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var134 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 929);
show_backtrace(1);
}
var132 = var134;
RET_LABEL133:(void)0;
}
}
var_135 = var132;
{
var136 = parser_nodes__ANodes__iterator(var_135);
}
var_137 = var136;
for(;;) {
{
var138 = ((short int (*)(val*))(var_137->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_137) /* is_ok on <var_137:Iterator[APropdef]>*/;
}
if (var138){
{
var139 = ((val* (*)(val*))(var_137->class->vft[COLOR_abstract_collection__Iterator__item]))(var_137) /* item on <var_137:Iterator[APropdef]>*/;
}
var_npropdef = var139;
/* <var_npropdef:APropdef> isa AMethPropdef */
cltype141 = type_parser_nodes__AMethPropdef.color;
idtype142 = type_parser_nodes__AMethPropdef.id;
if(cltype141 >= var_npropdef->type->table_size) {
var140 = 0;
} else {
var140 = var_npropdef->type->type_table[cltype141] == idtype142;
}
if (var140){
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:APropdef(AMethPropdef)> */
var145 = var_npropdef->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:APropdef(AMethPropdef)> */
var143 = var145;
RET_LABEL144:(void)0;
}
}
var146 = NULL;
if (var143 == NULL) {
var147 = 1; /* is null */
} else {
var147 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var143,var146) on <var143:nullable MPropDef(nullable MMethodDef)> */
var_other = var146;
{
{ /* Inline kernel#Object#is_same_instance (var143,var_other) on <var143:nullable MMethodDef(MMethodDef)> */
var152 = var143 == var_other;
var150 = var152;
goto RET_LABEL151;
RET_LABEL151:(void)0;
}
}
var148 = var150;
goto RET_LABEL149;
RET_LABEL149:(void)0;
}
var147 = var148;
}
if (var147){
goto RET_LABEL;
} else {
}
if (varonce153) {
var154 = varonce153;
} else {
var155 = "autoinit";
var156 = 8;
var157 = string__NativeString__to_s_with_length(var155, var156);
var154 = var157;
varonce153 = var154;
}
{
var158 = annotation__Prod__get_single_annotation(var_npropdef, var154, self);
}
var_at = var158;
var159 = NULL;
if (var_at == NULL) {
var160 = 1; /* is null */
} else {
var160 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_at,var159) on <var_at:nullable AAnnotation> */
var_other = var159;
{
{ /* Inline kernel#Object#is_same_instance (var_at,var_other) on <var_at:nullable AAnnotation(AAnnotation)> */
var165 = var_at == var_other;
var163 = var165;
goto RET_LABEL164;
RET_LABEL164:(void)0;
}
}
var161 = var163;
goto RET_LABEL162;
RET_LABEL162:(void)0;
}
var160 = var161;
}
if (var160){
goto BREAK_label166;
} else {
}
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:APropdef(AMethPropdef)> */
var169 = var_npropdef->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:APropdef(AMethPropdef)> */
var167 = var169;
RET_LABEL168:(void)0;
}
}
if (var167 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 130);
show_backtrace(1);
} else {
{ /* Inline model#MMethodDef#msignature (var167) on <var167:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var167 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1958);
show_backtrace(1);
}
var172 = var167->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var167:nullable MPropDef(nullable MMethodDef)> */
var170 = var172;
RET_LABEL171:(void)0;
}
}
var_sig = var170;
var173 = NULL;
if (var_sig == NULL) {
var174 = 1; /* is null */
} else {
var174 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_sig,var173) on <var_sig:nullable MSignature> */
var_other = var173;
{
{ /* Inline kernel#Object#is_same_instance (var_sig,var_other) on <var_sig:nullable MSignature(MSignature)> */
var179 = var_sig == var_other;
var177 = var179;
goto RET_LABEL178;
RET_LABEL178:(void)0;
}
}
var175 = var177;
goto RET_LABEL176;
RET_LABEL176:(void)0;
}
var174 = var175;
}
if (var174){
goto BREAK_label166;
} else {
}
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:APropdef(AMethPropdef)> */
var182 = var_npropdef->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:APropdef(AMethPropdef)> */
var180 = var182;
RET_LABEL181:(void)0;
}
}
if (var180 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 133);
show_backtrace(1);
} else {
var183 = model__MPropDef__is_intro(var180);
}
var184 = !var183;
if (var184){
if (varonce185) {
var186 = varonce185;
} else {
var187 = "Error: `autoinit` cannot be set on redefinitions";
var188 = 48;
var189 = string__NativeString__to_s_with_length(var187, var188);
var186 = var189;
varonce185 = var186;
}
{
modelbuilder__ModelBuilder__error(self, var_at, var186); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
goto BREAK_label166;
} else {
}
{
{ /* Inline model#MSignature#mparameters (var_sig) on <var_sig:nullable MSignature(MSignature)> */
var192 = var_sig->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var_sig:nullable MSignature(MSignature)> */
if (unlikely(var192 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1465);
show_backtrace(1);
}
var190 = var192;
RET_LABEL191:(void)0;
}
}
var_193 = var190;
{
var194 = array__AbstractArrayRead__iterator(var_193);
}
var_195 = var194;
for(;;) {
{
var196 = array__ArrayIterator__is_ok(var_195);
}
if (var196){
{
var197 = array__ArrayIterator__item(var_195);
}
var_param = var197;
{
{ /* Inline model#MParameter#mtype (var_param) on <var_param:MParameter> */
var200 = var_param->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var_param:MParameter> */
if (unlikely(var200 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1565);
show_backtrace(1);
}
var198 = var200;
RET_LABEL199:(void)0;
}
}
var_ret_type = var198;
var201 = NEW_model__MParameter(&type_model__MParameter);
{
{ /* Inline model#MParameter#name (var_param) on <var_param:MParameter> */
var204 = var_param->attrs[COLOR_model__MParameter___name].val; /* _name on <var_param:MParameter> */
if (unlikely(var204 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1562);
show_backtrace(1);
}
var202 = var204;
RET_LABEL203:(void)0;
}
}
var205 = 0;
{
model__MParameter__init(var201, var202, var_ret_type, var205); /* Direct call model#MParameter#init on <var201:MParameter>*/
}
var_mparameter = var201;
{
array__Array__add(var_mparameters130, var_mparameter); /* Direct call array#Array#add on <var_mparameters130:Array[MParameter]>*/
}
{
array__ArrayIterator__next(var_195); /* Direct call array#ArrayIterator#next on <var_195:ArrayIterator[MParameter]>*/
}
} else {
goto BREAK_label206;
}
}
BREAK_label206: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_195) on <var_195:ArrayIterator[MParameter]> */
RET_LABEL207:(void)0;
}
}
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:APropdef(AMethPropdef)> */
var210 = var_npropdef->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:APropdef(AMethPropdef)> */
var208 = var210;
RET_LABEL209:(void)0;
}
}
if (var208 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 143);
show_backtrace(1);
} else {
{ /* Inline model#MPropDef#mproperty (var208) on <var208:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var208 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var213 = var208->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var208:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var213 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var211 = var213;
RET_LABEL212:(void)0;
}
}
{
array__Array__add(var_initializers, var211); /* Direct call array#Array#add on <var_initializers:Array[MProperty]>*/
}
} else {
}
/* <var_npropdef:APropdef> isa AAttrPropdef */
cltype215 = type_parser_nodes__AAttrPropdef.color;
idtype216 = type_parser_nodes__AAttrPropdef.id;
if(cltype215 >= var_npropdef->type->table_size) {
var214 = 0;
} else {
var214 = var_npropdef->type->type_table[cltype215] == idtype216;
}
if (var214){
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var219 = var_npropdef->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:APropdef(AAttrPropdef)> */
var217 = var219;
RET_LABEL218:(void)0;
}
}
var220 = NULL;
if (var217 == NULL) {
var221 = 1; /* is null */
} else {
var221 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var217,var220) on <var217:nullable MPropDef(nullable MAttributeDef)> */
var_other = var220;
{
{ /* Inline kernel#Object#is_same_instance (var217,var_other) on <var217:nullable MAttributeDef(MAttributeDef)> */
var226 = var217 == var_other;
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
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property#AAttrPropdef#noinit (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var229 = var_npropdef->attrs[COLOR_modelize_property__AAttrPropdef___noinit].s; /* _noinit on <var_npropdef:APropdef(AAttrPropdef)> */
var227 = var229;
RET_LABEL228:(void)0;
}
}
if (var227){
goto BREAK_label166;
} else {
}
if (varonce230) {
var231 = varonce230;
} else {
var232 = "autoinit";
var233 = 8;
var234 = string__NativeString__to_s_with_length(var232, var233);
var231 = var234;
varonce230 = var231;
}
{
var235 = annotation__Prod__get_single_annotation(var_npropdef, var231, self);
}
var_atautoinit = var235;
var236 = NULL;
if (var_atautoinit == NULL) {
var237 = 0; /* is null */
} else {
var237 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atautoinit,var236) on <var_atautoinit:nullable AAnnotation> */
var_other240 = var236;
{
var242 = ((short int (*)(val*, val*))(var_atautoinit->class->vft[COLOR_kernel__Object___61d_61d]))(var_atautoinit, var_other240) /* == on <var_atautoinit:nullable AAnnotation(AAnnotation)>*/;
var241 = var242;
}
var243 = !var241;
var238 = var243;
goto RET_LABEL239;
RET_LABEL239:(void)0;
}
var237 = var238;
}
if (var237){
{
{ /* Inline modelize_property#AAttrPropdef#mreadpropdef (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var246 = var_npropdef->attrs[COLOR_modelize_property__AAttrPropdef___mreadpropdef].val; /* _mreadpropdef on <var_npropdef:APropdef(AAttrPropdef)> */
var244 = var246;
RET_LABEL245:(void)0;
}
}
if (var244 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 152);
show_backtrace(1);
} else {
{ /* Inline model#MPropDef#mproperty (var244) on <var244:nullable MMethodDef> */
if (unlikely(var244 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var249 = var244->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var244:nullable MMethodDef> */
if (unlikely(var249 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var247 = var249;
RET_LABEL248:(void)0;
}
}
{
array__Array__add(var_initializers, var247); /* Direct call array#Array#add on <var_initializers:Array[MProperty]>*/
}
goto BREAK_label166;
} else {
}
{
{ /* Inline modelize_property#AAttrPropdef#has_value (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var252 = var_npropdef->attrs[COLOR_modelize_property__AAttrPropdef___has_value].s; /* _has_value on <var_npropdef:APropdef(AAttrPropdef)> */
var250 = var252;
RET_LABEL251:(void)0;
}
}
if (var250){
goto BREAK_label166;
} else {
}
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var255 = var_npropdef->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:APropdef(AAttrPropdef)> */
var253 = var255;
RET_LABEL254:(void)0;
}
}
if (var253 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 156);
show_backtrace(1);
} else {
{ /* Inline model#MPropDef#mproperty (var253) on <var253:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var253 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var258 = var253->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var253:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var258 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var256 = var258;
RET_LABEL257:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var256) on <var256:MProperty(MAttribute)> */
var261 = var256->attrs[COLOR_model__MProperty___name].val; /* _name on <var256:MProperty(MAttribute)> */
if (unlikely(var261 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1620);
show_backtrace(1);
}
var259 = var261;
RET_LABEL260:(void)0;
}
}
var262 = 1;
{
var263 = string__Text__substring_from(var259, var262);
}
var_paramname = var263;
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var266 = var_npropdef->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:APropdef(AAttrPropdef)> */
var264 = var266;
RET_LABEL265:(void)0;
}
}
if (var264 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 157);
show_backtrace(1);
} else {
{ /* Inline model#MAttributeDef#static_mtype (var264) on <var264:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var264 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 2006);
show_backtrace(1);
}
var269 = var264->attrs[COLOR_model__MAttributeDef___static_mtype].val; /* _static_mtype on <var264:nullable MPropDef(nullable MAttributeDef)> */
var267 = var269;
RET_LABEL268:(void)0;
}
}
var_ret_type270 = var267;
var271 = NULL;
if (var_ret_type270 == NULL) {
var272 = 1; /* is null */
} else {
var272 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ret_type270,var271) on <var_ret_type270:nullable MType> */
var_other = var271;
{
{ /* Inline kernel#Object#is_same_instance (var_ret_type270,var_other) on <var_ret_type270:nullable MType(MType)> */
var277 = var_ret_type270 == var_other;
var275 = var277;
goto RET_LABEL276;
RET_LABEL276:(void)0;
}
}
var273 = var275;
goto RET_LABEL274;
RET_LABEL274:(void)0;
}
var272 = var273;
}
if (var272){
goto RET_LABEL;
} else {
}
var278 = NEW_model__MParameter(&type_model__MParameter);
var279 = 0;
{
model__MParameter__init(var278, var_paramname, var_ret_type270, var279); /* Direct call model#MParameter#init on <var278:MParameter>*/
}
var_mparameter280 = var278;
{
array__Array__add(var_mparameters130, var_mparameter280); /* Direct call array#Array#add on <var_mparameters130:Array[MParameter]>*/
}
{
{ /* Inline modelize_property#AAttrPropdef#mwritepropdef (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var283 = var_npropdef->attrs[COLOR_modelize_property__AAttrPropdef___mwritepropdef].val; /* _mwritepropdef on <var_npropdef:APropdef(AAttrPropdef)> */
var281 = var283;
RET_LABEL282:(void)0;
}
}
var_msetter = var281;
var284 = NULL;
if (var_msetter == NULL) {
var285 = 1; /* is null */
} else {
var285 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_msetter,var284) on <var_msetter:nullable MMethodDef> */
var_other = var284;
{
{ /* Inline kernel#Object#is_same_instance (var_msetter,var_other) on <var_msetter:nullable MMethodDef(MMethodDef)> */
var290 = var_msetter == var_other;
var288 = var290;
goto RET_LABEL289;
RET_LABEL289:(void)0;
}
}
var286 = var288;
goto RET_LABEL287;
RET_LABEL287:(void)0;
}
var285 = var286;
}
if (var285){
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var293 = var_npropdef->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:APropdef(AAttrPropdef)> */
var291 = var293;
RET_LABEL292:(void)0;
}
}
if (var291 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 164);
show_backtrace(1);
} else {
{ /* Inline model#MPropDef#mproperty (var291) on <var291:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var291 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var296 = var291->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var291:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var296 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var294 = var296;
RET_LABEL295:(void)0;
}
}
{
array__Array__add(var_initializers, var294); /* Direct call array#Array#add on <var_initializers:Array[MProperty]>*/
}
} else {
{
{ /* Inline model#MPropDef#mproperty (var_msetter) on <var_msetter:nullable MMethodDef(MMethodDef)> */
var299 = var_msetter->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_msetter:nullable MMethodDef(MMethodDef)> */
if (unlikely(var299 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var297 = var299;
RET_LABEL298:(void)0;
}
}
{
array__Array__add(var_initializers, var297); /* Direct call array#Array#add on <var_initializers:Array[MProperty]>*/
}
}
} else {
}
BREAK_label166: (void)0;
{
((void (*)(val*))(var_137->class->vft[COLOR_abstract_collection__Iterator__next]))(var_137) /* next on <var_137:Iterator[APropdef]>*/;
}
} else {
goto BREAK_label300;
}
}
BREAK_label300: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_137) on <var_137:Iterator[APropdef]> */
RET_LABEL301:(void)0;
}
}
{
{ /* Inline modelize_property#ModelBuilder#the_root_init_mmethod (self) on <self:ModelBuilder> */
var304 = self->attrs[COLOR_modelize_property__ModelBuilder___the_root_init_mmethod].val; /* _the_root_init_mmethod on <self:ModelBuilder> */
var302 = var304;
RET_LABEL303:(void)0;
}
}
var305 = NULL;
if (var302 == NULL) {
var306 = 1; /* is null */
} else {
var306 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var302,var305) on <var302:nullable MMethod> */
var_other = var305;
{
{ /* Inline kernel#Object#is_same_instance (var302,var_other) on <var302:nullable MMethod(MMethod)> */
var311 = var302 == var_other;
var309 = var311;
goto RET_LABEL310;
RET_LABEL310:(void)0;
}
}
var307 = var309;
goto RET_LABEL308;
RET_LABEL308:(void)0;
}
var306 = var307;
}
if (var306){
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property#ModelBuilder#the_root_init_mmethod (self) on <self:ModelBuilder> */
var314 = self->attrs[COLOR_modelize_property__ModelBuilder___the_root_init_mmethod].val; /* _the_root_init_mmethod on <self:ModelBuilder> */
var312 = var314;
RET_LABEL313:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var317 = var_mclassdef->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var317 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
show_backtrace(1);
}
var315 = var317;
RET_LABEL316:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var320 = var_mclassdef->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var320 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var318 = var320;
RET_LABEL319:(void)0;
}
}
if (var312 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 175);
show_backtrace(1);
} else {
var321 = model__MProperty__lookup_super_definitions(var312, var315, var318);
}
var_spropdefs = var321;
{
var322 = array__AbstractArrayRead__is_empty(var_spropdefs);
}
if (var322){
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var325 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var325 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var323 = var325;
RET_LABEL324:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var328 = var_nclassdef->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var328 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 23);
show_backtrace(1);
}
var326 = var328;
RET_LABEL327:(void)0;
}
}
if (varonce329) {
var330 = varonce329;
} else {
var331 = "Fatal error: ";
var332 = 13;
var333 = string__NativeString__to_s_with_length(var331, var332);
var330 = var333;
varonce329 = var330;
}
if (varonce334) {
var335 = varonce334;
} else {
var336 = " does not specialize ";
var337 = 21;
var338 = string__NativeString__to_s_with_length(var336, var337);
var335 = var338;
varonce334 = var335;
}
{
{ /* Inline modelize_property#ModelBuilder#the_root_init_mmethod (self) on <self:ModelBuilder> */
var341 = self->attrs[COLOR_modelize_property__ModelBuilder___the_root_init_mmethod].val; /* _the_root_init_mmethod on <self:ModelBuilder> */
var339 = var341;
RET_LABEL340:(void)0;
}
}
if (var339 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 177);
show_backtrace(1);
} else {
{ /* Inline model#MProperty#intro_mclassdef (var339) on <var339:nullable MMethod> */
if (unlikely(var339 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1615);
show_backtrace(1);
}
var344 = var339->attrs[COLOR_model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var339:nullable MMethod> */
if (unlikely(var344 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1615);
show_backtrace(1);
}
var342 = var344;
RET_LABEL343:(void)0;
}
}
if (varonce345) {
var346 = varonce345;
} else {
var347 = ". Possible duplication of the root class `Object`?";
var348 = 50;
var349 = string__NativeString__to_s_with_length(var347, var348);
var346 = var349;
varonce345 = var346;
}
var350 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var350 = array_instance Array[Object] */
var351 = 5;
var352 = NEW_array__NativeArray(var351, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var352)->values[0] = (val*) var330;
((struct instance_array__NativeArray*)var352)->values[1] = (val*) var_mclassdef;
((struct instance_array__NativeArray*)var352)->values[2] = (val*) var335;
((struct instance_array__NativeArray*)var352)->values[3] = (val*) var342;
((struct instance_array__NativeArray*)var352)->values[4] = (val*) var346;
{
((void (*)(val*, val*, long))(var350->class->vft[COLOR_array__Array__with_native]))(var350, var352, var351) /* with_native on <var350:Array[Object]>*/;
}
}
{
var353 = ((val* (*)(val*))(var350->class->vft[COLOR_string__Object__to_s]))(var350) /* to_s on <var350:Array[Object]>*/;
}
{
toolcontext__ToolContext__fatal_error(var323, var326, var353); /* Direct call toolcontext#ToolContext#fatal_error on <var323:ToolContext>*/
}
} else {
}
{
var354 = abstract_collection__SequenceRead__first(var_spropdefs);
}
var_longest = var354;
{
{ /* Inline array#AbstractArrayRead#length (var_spropdefs) on <var_spropdefs:Array[MMethodDef]> */
var357 = var_spropdefs->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_spropdefs:Array[MMethodDef]> */
var355 = var357;
RET_LABEL356:(void)0;
}
}
var358 = 1;
{
{ /* Inline kernel#Int#> (var355,var358) on <var355:Int> */
/* Covariant cast for argument 0 (i) <var358:Int> isa OTHER */
/* <var358:Int> isa OTHER */
var361 = 1; /* easy <var358:Int> isa OTHER*/
if (unlikely(!var361)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var364 = var355 > var358;
var359 = var364;
goto RET_LABEL360;
RET_LABEL360:(void)0;
}
}
if (var359){
var_365 = var_spropdefs;
{
var366 = array__AbstractArrayRead__iterator(var_365);
}
var_367 = var366;
for(;;) {
{
var368 = array__ArrayIterator__is_ok(var_367);
}
if (var368){
{
var369 = array__ArrayIterator__item(var_367);
}
var_spd = var369;
{
{ /* Inline model#MMethodDef#initializers (var_spd) on <var_spd:MMethodDef> */
var372 = var_spd->attrs[COLOR_model__MMethodDef___initializers].val; /* _initializers on <var_spd:MMethodDef> */
if (unlikely(var372 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1967);
show_backtrace(1);
}
var370 = var372;
RET_LABEL371:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var370) on <var370:Array[MProperty]> */
var375 = var370->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var370:Array[MProperty]> */
var373 = var375;
RET_LABEL374:(void)0;
}
}
{
{ /* Inline model#MMethodDef#initializers (var_longest) on <var_longest:MMethodDef> */
var378 = var_longest->attrs[COLOR_model__MMethodDef___initializers].val; /* _initializers on <var_longest:MMethodDef> */
if (unlikely(var378 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1967);
show_backtrace(1);
}
var376 = var378;
RET_LABEL377:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var376) on <var376:Array[MProperty]> */
var381 = var376->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var376:Array[MProperty]> */
var379 = var381;
RET_LABEL380:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var373,var379) on <var373:Int> */
/* Covariant cast for argument 0 (i) <var379:Int> isa OTHER */
/* <var379:Int> isa OTHER */
var384 = 1; /* easy <var379:Int> isa OTHER*/
if (unlikely(!var384)) {
var_class_name387 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name387);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var388 = var373 > var379;
var382 = var388;
goto RET_LABEL383;
RET_LABEL383:(void)0;
}
}
if (var382){
var_longest = var_spd;
} else {
}
{
array__ArrayIterator__next(var_367); /* Direct call array#ArrayIterator#next on <var_367:ArrayIterator[MMethodDef]>*/
}
} else {
goto BREAK_label389;
}
}
BREAK_label389: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_367) on <var_367:ArrayIterator[MMethodDef]> */
RET_LABEL390:(void)0;
}
}
var_391 = var_spropdefs;
{
var392 = array__AbstractArrayRead__iterator(var_391);
}
var_393 = var392;
for(;;) {
{
var394 = array__ArrayIterator__is_ok(var_393);
}
if (var394){
{
var395 = array__ArrayIterator__item(var_393);
}
var_spd396 = var395;
var397 = 0;
var_i = var397;
{
{ /* Inline model#MMethodDef#initializers (var_spd396) on <var_spd396:MMethodDef> */
var400 = var_spd396->attrs[COLOR_model__MMethodDef___initializers].val; /* _initializers on <var_spd396:MMethodDef> */
if (unlikely(var400 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1967);
show_backtrace(1);
}
var398 = var400;
RET_LABEL399:(void)0;
}
}
var_401 = var398;
{
var402 = array__AbstractArrayRead__iterator(var_401);
}
var_403 = var402;
for(;;) {
{
var404 = array__ArrayIterator__is_ok(var_403);
}
if (var404){
{
var405 = array__ArrayIterator__item(var_403);
}
var_p = var405;
{
{ /* Inline model#MMethodDef#initializers (var_longest) on <var_longest:MMethodDef> */
var408 = var_longest->attrs[COLOR_model__MMethodDef___initializers].val; /* _initializers on <var_longest:MMethodDef> */
if (unlikely(var408 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1967);
show_backtrace(1);
}
var406 = var408;
RET_LABEL407:(void)0;
}
}
{
var409 = array__Array___91d_93d(var406, var_i);
}
{
{ /* Inline kernel#Object#!= (var_p,var409) on <var_p:MProperty> */
var_other240 = var409;
{
var414 = ((short int (*)(val*, val*))(var_p->class->vft[COLOR_kernel__Object___61d_61d]))(var_p, var_other240) /* == on <var_p:MProperty>*/;
var413 = var414;
}
var415 = !var413;
var411 = var415;
goto RET_LABEL412;
RET_LABEL412:(void)0;
}
var410 = var411;
}
if (var410){
if (varonce416) {
var417 = varonce416;
} else {
var418 = "Error: conflict for inherited inits ";
var419 = 36;
var420 = string__NativeString__to_s_with_length(var418, var419);
var417 = var420;
varonce416 = var417;
}
if (varonce421) {
var422 = varonce421;
} else {
var423 = "(";
var424 = 1;
var425 = string__NativeString__to_s_with_length(var423, var424);
var422 = var425;
varonce421 = var422;
}
{
{ /* Inline model#MMethodDef#initializers (var_spd396) on <var_spd396:MMethodDef> */
var428 = var_spd396->attrs[COLOR_model__MMethodDef___initializers].val; /* _initializers on <var_spd396:MMethodDef> */
if (unlikely(var428 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1967);
show_backtrace(1);
}
var426 = var428;
RET_LABEL427:(void)0;
}
}
if (varonce429) {
var430 = varonce429;
} else {
var431 = ", ";
var432 = 2;
var433 = string__NativeString__to_s_with_length(var431, var432);
var430 = var433;
varonce429 = var430;
}
{
var434 = string__Collection__join(var426, var430);
}
if (varonce435) {
var436 = varonce435;
} else {
var437 = ") and ";
var438 = 6;
var439 = string__NativeString__to_s_with_length(var437, var438);
var436 = var439;
varonce435 = var436;
}
if (varonce440) {
var441 = varonce440;
} else {
var442 = "(";
var443 = 1;
var444 = string__NativeString__to_s_with_length(var442, var443);
var441 = var444;
varonce440 = var441;
}
{
{ /* Inline model#MMethodDef#initializers (var_longest) on <var_longest:MMethodDef> */
var447 = var_longest->attrs[COLOR_model__MMethodDef___initializers].val; /* _initializers on <var_longest:MMethodDef> */
if (unlikely(var447 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1967);
show_backtrace(1);
}
var445 = var447;
RET_LABEL446:(void)0;
}
}
if (varonce448) {
var449 = varonce448;
} else {
var450 = ", ";
var451 = 2;
var452 = string__NativeString__to_s_with_length(var450, var451);
var449 = var452;
varonce448 = var449;
}
{
var453 = string__Collection__join(var445, var449);
}
if (varonce454) {
var455 = varonce454;
} else {
var456 = ")";
var457 = 1;
var458 = string__NativeString__to_s_with_length(var456, var457);
var455 = var458;
varonce454 = var455;
}
var459 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var459 = array_instance Array[Object] */
var460 = 9;
var461 = NEW_array__NativeArray(var460, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var461)->values[0] = (val*) var417;
((struct instance_array__NativeArray*)var461)->values[1] = (val*) var_spd396;
((struct instance_array__NativeArray*)var461)->values[2] = (val*) var422;
((struct instance_array__NativeArray*)var461)->values[3] = (val*) var434;
((struct instance_array__NativeArray*)var461)->values[4] = (val*) var436;
((struct instance_array__NativeArray*)var461)->values[5] = (val*) var_longest;
((struct instance_array__NativeArray*)var461)->values[6] = (val*) var441;
((struct instance_array__NativeArray*)var461)->values[7] = (val*) var453;
((struct instance_array__NativeArray*)var461)->values[8] = (val*) var455;
{
((void (*)(val*, val*, long))(var459->class->vft[COLOR_array__Array__with_native]))(var459, var461, var460) /* with_native on <var459:Array[Object]>*/;
}
}
{
var462 = ((val* (*)(val*))(var459->class->vft[COLOR_string__Object__to_s]))(var459) /* to_s on <var459:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_nclassdef, var462); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
var463 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var463) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var463:Int> isa OTHER */
/* <var463:Int> isa OTHER */
var466 = 1; /* easy <var463:Int> isa OTHER*/
if (unlikely(!var466)) {
var_class_name469 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name469);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var470 = var_i + var463;
var464 = var470;
goto RET_LABEL465;
RET_LABEL465:(void)0;
}
}
var_i = var464;
{
array__ArrayIterator__next(var_403); /* Direct call array#ArrayIterator#next on <var_403:ArrayIterator[MProperty]>*/
}
} else {
goto BREAK_label471;
}
}
BREAK_label471: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_403) on <var_403:ArrayIterator[MProperty]> */
RET_LABEL472:(void)0;
}
}
{
array__ArrayIterator__next(var_393); /* Direct call array#ArrayIterator#next on <var_393:ArrayIterator[MMethodDef]>*/
}
} else {
goto BREAK_label473;
}
}
BREAK_label473: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_393) on <var_393:ArrayIterator[MMethodDef]> */
RET_LABEL474:(void)0;
}
}
} else {
}
{
{ /* Inline array#AbstractArrayRead#length (var_spropdefs) on <var_spropdefs:Array[MMethodDef]> */
var479 = var_spropdefs->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_spropdefs:Array[MMethodDef]> */
var477 = var479;
RET_LABEL478:(void)0;
}
}
var480 = 1;
{
{ /* Inline kernel#Int#== (var477,var480) on <var477:Int> */
var484 = var477 == var480;
var482 = var484;
goto RET_LABEL483;
RET_LABEL483:(void)0;
}
var481 = var482;
}
var_485 = var481;
if (var481){
{
var486 = array__AbstractArrayRead__is_empty(var_mparameters130);
}
var476 = var486;
} else {
var476 = var_485;
}
var_487 = var476;
if (var476){
var488 = NULL;
if (var_defined_init == NULL) {
var489 = 1; /* is null */
} else {
var489 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_defined_init,var488) on <var_defined_init:nullable MMethodDef> */
var_other = var488;
{
{ /* Inline kernel#Object#is_same_instance (var_defined_init,var_other) on <var_defined_init:nullable MMethodDef(MMethodDef)> */
var494 = var_defined_init == var_other;
var492 = var494;
goto RET_LABEL493;
RET_LABEL493:(void)0;
}
}
var490 = var492;
goto RET_LABEL491;
RET_LABEL491:(void)0;
}
var489 = var490;
}
var475 = var489;
} else {
var475 = var_487;
}
if (var475){
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var497 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var497 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var495 = var497;
RET_LABEL496:(void)0;
}
}
if (varonce498) {
var499 = varonce498;
} else {
var500 = " inherits the basic constructor ";
var501 = 32;
var502 = string__NativeString__to_s_with_length(var500, var501);
var499 = var502;
varonce498 = var499;
}
var503 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var503 = array_instance Array[Object] */
var504 = 3;
var505 = NEW_array__NativeArray(var504, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var505)->values[0] = (val*) var_mclassdef;
((struct instance_array__NativeArray*)var505)->values[1] = (val*) var499;
((struct instance_array__NativeArray*)var505)->values[2] = (val*) var_longest;
{
((void (*)(val*, val*, long))(var503->class->vft[COLOR_array__Array__with_native]))(var503, var505, var504) /* with_native on <var503:Array[Object]>*/;
}
}
{
var506 = ((val* (*)(val*))(var503->class->vft[COLOR_string__Object__to_s]))(var503) /* to_s on <var503:Array[Object]>*/;
}
var507 = 3;
{
toolcontext__ToolContext__info(var495, var506, var507); /* Direct call toolcontext#ToolContext#info on <var495:ToolContext>*/
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var510 = var_mclassdef->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var510 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var508 = var510;
RET_LABEL509:(void)0;
}
}
{
{ /* Inline modelize_property#MClass#root_init= (var508,var_longest) on <var508:MClass> */
var508->attrs[COLOR_modelize_property__MClass___root_init].val = var_longest; /* _root_init on <var508:MClass> */
RET_LABEL511:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MMethodDef#initializers (var_longest) on <var_longest:MMethodDef> */
var514 = var_longest->attrs[COLOR_model__MMethodDef___initializers].val; /* _initializers on <var_longest:MMethodDef> */
if (unlikely(var514 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1967);
show_backtrace(1);
}
var512 = var514;
RET_LABEL513:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var512) on <var512:Array[MProperty]> */
var517 = var512->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var512:Array[MProperty]> */
var515 = var517;
RET_LABEL516:(void)0;
}
}
var518 = 0;
{
{ /* Inline kernel#Int#> (var515,var518) on <var515:Int> */
/* Covariant cast for argument 0 (i) <var518:Int> isa OTHER */
/* <var518:Int> isa OTHER */
var521 = 1; /* easy <var518:Int> isa OTHER*/
if (unlikely(!var521)) {
var_class_name524 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name524);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var525 = var515 > var518;
var519 = var525;
goto RET_LABEL520;
RET_LABEL520:(void)0;
}
}
if (var519){
{
{ /* Inline model#MMethodDef#new_msignature (var_longest) on <var_longest:MMethodDef> */
var528 = var_longest->attrs[COLOR_model__MMethodDef___new_msignature].val; /* _new_msignature on <var_longest:MMethodDef> */
var526 = var528;
RET_LABEL527:(void)0;
}
}
if (var526 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 211);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#mparameters (var526) on <var526:nullable MSignature> */
if (unlikely(var526 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1465);
show_backtrace(1);
}
var531 = var526->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var526:nullable MSignature> */
if (unlikely(var531 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1465);
show_backtrace(1);
}
var529 = var531;
RET_LABEL530:(void)0;
}
}
{
abstract_collection__Sequence__prepend(var_mparameters130, var529); /* Direct call abstract_collection#Sequence#prepend on <var_mparameters130:Array[MParameter]>*/
}
{
{ /* Inline model#MMethodDef#initializers (var_longest) on <var_longest:MMethodDef> */
var534 = var_longest->attrs[COLOR_model__MMethodDef___initializers].val; /* _initializers on <var_longest:MMethodDef> */
if (unlikely(var534 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1967);
show_backtrace(1);
}
var532 = var534;
RET_LABEL533:(void)0;
}
}
{
abstract_collection__Sequence__prepend(var_initializers, var532); /* Direct call abstract_collection#Sequence#prepend on <var_initializers:Array[MProperty]>*/
}
} else {
}
var535 = NULL;
if (var_defined_init == NULL) {
var536 = 0; /* is null */
} else {
var536 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_defined_init,var535) on <var_defined_init:nullable MMethodDef> */
var_other240 = var535;
{
var540 = ((short int (*)(val*, val*))(var_defined_init->class->vft[COLOR_kernel__Object___61d_61d]))(var_defined_init, var_other240) /* == on <var_defined_init:nullable MMethodDef(MMethodDef)>*/;
var539 = var540;
}
var541 = !var539;
var537 = var541;
goto RET_LABEL538;
RET_LABEL538:(void)0;
}
var536 = var537;
}
if (var536){
{
{ /* Inline model#MMethodDef#initializers (var_defined_init) on <var_defined_init:nullable MMethodDef(MMethodDef)> */
var544 = var_defined_init->attrs[COLOR_model__MMethodDef___initializers].val; /* _initializers on <var_defined_init:nullable MMethodDef(MMethodDef)> */
if (unlikely(var544 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1967);
show_backtrace(1);
}
var542 = var544;
RET_LABEL543:(void)0;
}
}
{
abstract_collection__SimpleCollection__add_all(var542, var_initializers); /* Direct call abstract_collection#SimpleCollection#add_all on <var542:Array[MProperty]>*/
}
var545 = NEW_model__MSignature(&type_model__MSignature);
var546 = NULL;
{
model__MSignature__init(var545, var_mparameters130, var546); /* Direct call model#MSignature#init on <var545:MSignature>*/
}
var_msignature547 = var545;
{
{ /* Inline model#MMethodDef#new_msignature= (var_defined_init,var_msignature547) on <var_defined_init:nullable MMethodDef(MMethodDef)> */
var_defined_init->attrs[COLOR_model__MMethodDef___new_msignature].val = var_msignature547; /* _new_msignature on <var_defined_init:nullable MMethodDef(MMethodDef)> */
RET_LABEL548:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var551 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var551 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var549 = var551;
RET_LABEL550:(void)0;
}
}
if (varonce552) {
var553 = varonce552;
} else {
var554 = " extends its basic constructor signature to ";
var555 = 44;
var556 = string__NativeString__to_s_with_length(var554, var555);
var553 = var556;
varonce552 = var553;
}
var557 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var557 = array_instance Array[Object] */
var558 = 4;
var559 = NEW_array__NativeArray(var558, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var559)->values[0] = (val*) var_mclassdef;
((struct instance_array__NativeArray*)var559)->values[1] = (val*) var553;
((struct instance_array__NativeArray*)var559)->values[2] = (val*) var_defined_init;
((struct instance_array__NativeArray*)var559)->values[3] = (val*) var_msignature547;
{
((void (*)(val*, val*, long))(var557->class->vft[COLOR_array__Array__with_native]))(var557, var559, var558) /* with_native on <var557:Array[Object]>*/;
}
}
{
var560 = ((val* (*)(val*))(var557->class->vft[COLOR_string__Object__to_s]))(var557) /* to_s on <var557:Array[Object]>*/;
}
var561 = 3;
{
toolcontext__ToolContext__info(var549, var560, var561); /* Direct call toolcontext#ToolContext#info on <var549:ToolContext>*/
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var564 = var_mclassdef->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var564 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var562 = var564;
RET_LABEL563:(void)0;
}
}
{
{ /* Inline modelize_property#MClass#root_init= (var562,var_defined_init) on <var562:MClass> */
var562->attrs[COLOR_modelize_property__MClass___root_init].val = var_defined_init; /* _root_init on <var562:MClass> */
RET_LABEL565:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property#ModelBuilder#the_root_init_mmethod (self) on <self:ModelBuilder> */
var568 = self->attrs[COLOR_modelize_property__ModelBuilder___the_root_init_mmethod].val; /* _the_root_init_mmethod on <self:ModelBuilder> */
var566 = var568;
RET_LABEL567:(void)0;
}
}
if (unlikely(var566 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 226);
show_backtrace(1);
}
var_mprop569 = var566;
var570 = NEW_model__MMethodDef(&type_model__MMethodDef);
{
{ /* Inline parser_nodes#ANode#location (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var573 = var_nclassdef->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var573 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 23);
show_backtrace(1);
}
var571 = var573;
RET_LABEL572:(void)0;
}
}
{
model__MMethodDef__init(var570, var_mclassdef, var_mprop569, var571); /* Direct call model#MMethodDef#init on <var570:MMethodDef>*/
}
var_mpropdef574 = var570;
var575 = 1;
{
{ /* Inline modelize_property#MPropDef#has_supercall= (var_mpropdef574,var575) on <var_mpropdef574:MMethodDef> */
var_mpropdef574->attrs[COLOR_modelize_property__MPropDef___has_supercall].s = var575; /* _has_supercall on <var_mpropdef574:MMethodDef> */
RET_LABEL576:(void)0;
}
}
{
{ /* Inline model#MMethodDef#initializers (var_mpropdef574) on <var_mpropdef574:MMethodDef> */
var579 = var_mpropdef574->attrs[COLOR_model__MMethodDef___initializers].val; /* _initializers on <var_mpropdef574:MMethodDef> */
if (unlikely(var579 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1967);
show_backtrace(1);
}
var577 = var579;
RET_LABEL578:(void)0;
}
}
{
abstract_collection__SimpleCollection__add_all(var577, var_initializers); /* Direct call abstract_collection#SimpleCollection#add_all on <var577:Array[MProperty]>*/
}
var580 = NEW_model__MSignature(&type_model__MSignature);
var581 = NULL;
{
model__MSignature__init(var580, var_mparameters130, var581); /* Direct call model#MSignature#init on <var580:MSignature>*/
}
var_msignature582 = var580;
{
{ /* Inline model#MMethodDef#new_msignature= (var_mpropdef574,var_msignature582) on <var_mpropdef574:MMethodDef> */
var_mpropdef574->attrs[COLOR_model__MMethodDef___new_msignature].val = var_msignature582; /* _new_msignature on <var_mpropdef574:MMethodDef> */
RET_LABEL583:(void)0;
}
}
var584 = NEW_model__MSignature(&type_model__MSignature);
var585 = NEW_array__Array(&type_array__Arraymodel__MParameter);
{
((void (*)(val*))(var585->class->vft[COLOR_kernel__Object__init]))(var585) /* init on <var585:Array[MParameter]>*/;
}
var586 = NULL;
{
model__MSignature__init(var584, var585, var586); /* Direct call model#MSignature#init on <var584:MSignature>*/
}
{
{ /* Inline model#MMethodDef#msignature= (var_mpropdef574,var584) on <var_mpropdef574:MMethodDef> */
var_mpropdef574->attrs[COLOR_model__MMethodDef___msignature].val = var584; /* _msignature on <var_mpropdef574:MMethodDef> */
RET_LABEL587:(void)0;
}
}
{
{ /* Inline modelize_property#AClassdef#mfree_init= (var_nclassdef,var_mpropdef574) on <var_nclassdef:AClassdef(AStdClassdef)> */
var_nclassdef->attrs[COLOR_modelize_property__AClassdef___mfree_init].val = var_mpropdef574; /* _mfree_init on <var_nclassdef:AClassdef(AStdClassdef)> */
RET_LABEL588:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var591 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var591 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var589 = var591;
RET_LABEL590:(void)0;
}
}
if (varonce592) {
var593 = varonce592;
} else {
var594 = " gets a free constructor for attributes ";
var595 = 40;
var596 = string__NativeString__to_s_with_length(var594, var595);
var593 = var596;
varonce592 = var593;
}
var597 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var597 = array_instance Array[Object] */
var598 = 4;
var599 = NEW_array__NativeArray(var598, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var599)->values[0] = (val*) var_mclassdef;
((struct instance_array__NativeArray*)var599)->values[1] = (val*) var593;
((struct instance_array__NativeArray*)var599)->values[2] = (val*) var_mpropdef574;
((struct instance_array__NativeArray*)var599)->values[3] = (val*) var_msignature582;
{
((void (*)(val*, val*, long))(var597->class->vft[COLOR_array__Array__with_native]))(var597, var599, var598) /* with_native on <var597:Array[Object]>*/;
}
}
{
var600 = ((val* (*)(val*))(var597->class->vft[COLOR_string__Object__to_s]))(var597) /* to_s on <var597:Array[Object]>*/;
}
var601 = 3;
{
toolcontext__ToolContext__info(var589, var600, var601); /* Direct call toolcontext#ToolContext#info on <var589:ToolContext>*/
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var604 = var_mclassdef->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var604 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var602 = var604;
RET_LABEL603:(void)0;
}
}
{
{ /* Inline modelize_property#MClass#root_init= (var602,var_mpropdef574) on <var602:MClass> */
var602->attrs[COLOR_modelize_property__MClass___root_init].val = var_mpropdef574; /* _root_init on <var602:MClass> */
RET_LABEL605:(void)0;
}
}
RET_LABEL:;
}
/* method modelize_property#ModelBuilder#process_default_constructors for (self: Object, AClassdef) */
void VIRTUAL_modelize_property__ModelBuilder__process_default_constructors(val* self, val* p0) {
modelize_property__ModelBuilder__process_default_constructors(self, p0); /* Direct call modelize_property#ModelBuilder#process_default_constructors on <self:Object(ModelBuilder)>*/
RET_LABEL:;
}
/* method modelize_property#ModelBuilder#check_visibility for (self: ModelBuilder, ANode, MType, MPropDef) */
void modelize_property__ModelBuilder__check_visibility(val* self, val* p0, val* p1, val* p2) {
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
val* var31 /* : MProperty */;
val* var33 /* : MProperty */;
val* var34 /* : MVisibility */;
val* var36 /* : MVisibility */;
val* var37 /* : MProperty */;
val* var39 /* : MProperty */;
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
short int var63 /* : Bool */;
val* var64 /* : null */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
val* var71 /* : MVisibility */;
val* var_vis_module_type /* var vis_module_type: MVisibility */;
val* var72 /* : MVisibility */;
val* var74 /* : MVisibility */;
short int var75 /* : Bool */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
long var79 /* : Int */;
val* var80 /* : FlatString */;
val* var81 /* : MVisibility */;
val* var83 /* : MVisibility */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : NativeString */;
long var87 /* : Int */;
val* var88 /* : FlatString */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
long var92 /* : Int */;
val* var93 /* : FlatString */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : NativeString */;
long var97 /* : Int */;
val* var98 /* : FlatString */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : NativeString */;
long var102 /* : Int */;
val* var103 /* : FlatString */;
val* var104 /* : Array[Object] */;
long var105 /* : Int */;
val* var106 /* : NativeArray[Object] */;
val* var107 /* : String */;
val* var108 /* : MVisibility */;
val* var110 /* : MVisibility */;
short int var111 /* : Bool */;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : NativeString */;
long var115 /* : Int */;
val* var116 /* : FlatString */;
val* var117 /* : MVisibility */;
val* var119 /* : MVisibility */;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : NativeString */;
long var123 /* : Int */;
val* var124 /* : FlatString */;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : NativeString */;
long var128 /* : Int */;
val* var129 /* : FlatString */;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : NativeString */;
long var133 /* : Int */;
val* var134 /* : FlatString */;
static val* varonce135;
val* var136 /* : String */;
char* var137 /* : NativeString */;
long var138 /* : Int */;
val* var139 /* : FlatString */;
static val* varonce140;
val* var141 /* : String */;
char* var142 /* : NativeString */;
long var143 /* : Int */;
val* var144 /* : FlatString */;
val* var145 /* : Array[Object] */;
long var146 /* : Int */;
val* var147 /* : NativeArray[Object] */;
val* var148 /* : String */;
short int var149 /* : Bool */;
int cltype150;
int idtype151;
val* var152 /* : ANodes[AType] */;
val* var154 /* : ANodes[AType] */;
val* var_ /* var : ANodes[AType] */;
val* var155 /* : Iterator[ANode] */;
val* var_156 /* var : Iterator[AType] */;
short int var157 /* : Bool */;
val* var158 /* : nullable Object */;
val* var_a /* var a: AType */;
val* var159 /* : nullable MType */;
val* var161 /* : nullable MType */;
val* var_t /* var t: nullable MType */;
val* var162 /* : null */;
short int var163 /* : Bool */;
short int var164 /* : Bool */;
val* var_other166 /* var other: nullable Object */;
short int var167 /* : Bool */;
short int var169 /* : Bool */;
short int var172 /* : Bool */;
int cltype173;
int idtype174;
val* var175 /* : Array[MType] */;
val* var177 /* : Array[MType] */;
val* var_178 /* var : Array[MType] */;
val* var179 /* : ArrayIterator[nullable Object] */;
val* var_180 /* var : ArrayIterator[MType] */;
short int var181 /* : Bool */;
val* var182 /* : nullable Object */;
val* var_t183 /* var t: MType */;
var_node = p0;
var_mtype = p1;
var_mpropdef = p2;
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MPropDef> */
var2 = var_mpropdef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MPropDef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var) on <var:MClassDef> */
var5 = var->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var:MClassDef> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_mmodule = var3;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MPropDef> */
var8 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MPropDef> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
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
var11 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MType__as_notnullable]))(var_mtype) /* as_notnullable on <var_mtype:MType>*/;
}
var_mtype = var11;
/* <var_mtype:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var12 = 0;
} else {
var12 = var_mtype->type->type_table[cltype] == idtype;
}
if (var12){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var15 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline model#MClass#visibility (var13) on <var13:MClass> */
var18 = var13->attrs[COLOR_model__MClass___visibility].val; /* _visibility on <var13:MClass> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 375);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_vis_type = var16;
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var21 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline model#MClass#intro (var19) on <var19:MClass> */
var24 = var19->attrs[COLOR_model__MClass___intro].val; /* _intro on <var19:MClass> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 420);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var22) on <var22:MClassDef> */
var27 = var22->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var22:MClassDef> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
var_mmodule_type = var25;
} else {
/* <var_mtype:MType> isa MVirtualType */
cltype29 = type_model__MVirtualType.color;
idtype30 = type_model__MVirtualType.id;
if(cltype29 >= var_mtype->type->table_size) {
var28 = 0;
} else {
var28 = var_mtype->type->type_table[cltype29] == idtype30;
}
if (var28){
{
{ /* Inline model#MVirtualType#mproperty (var_mtype) on <var_mtype:MType(MVirtualType)> */
var33 = var_mtype->attrs[COLOR_model__MVirtualType___mproperty].val; /* _mproperty on <var_mtype:MType(MVirtualType)> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1152);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline model#MProperty#visibility (var31) on <var31:MProperty> */
var36 = var31->attrs[COLOR_model__MProperty___visibility].val; /* _visibility on <var31:MProperty> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1630);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
var_vis_type = var34;
{
{ /* Inline model#MVirtualType#mproperty (var_mtype) on <var_mtype:MType(MVirtualType)> */
var39 = var_mtype->attrs[COLOR_model__MVirtualType___mproperty].val; /* _mproperty on <var_mtype:MType(MVirtualType)> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1152);
show_backtrace(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline model#MProperty#intro_mclassdef (var37) on <var37:MProperty> */
var42 = var37->attrs[COLOR_model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var37:MProperty> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1615);
show_backtrace(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var40) on <var40:MClassDef> */
var45 = var40->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var40:MClassDef> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
show_backtrace(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
var_mmodule_type = var43;
} else {
/* <var_mtype:MType> isa MParameterType */
cltype47 = type_model__MParameterType.color;
idtype48 = type_model__MParameterType.id;
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
var52 = string__NativeString__to_s_with_length(var50, var51);
var49 = var52;
varonce = var49;
}
var53 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var53 = array_instance Array[Object] */
var54 = 2;
var55 = NEW_array__NativeArray(var54, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var55)->values[0] = (val*) var49;
((struct instance_array__NativeArray*)var55)->values[1] = (val*) var_mtype;
{
((void (*)(val*, val*, long))(var53->class->vft[COLOR_array__Array__with_native]))(var53, var55, var54) /* with_native on <var53:Array[Object]>*/;
}
}
{
var56 = ((val* (*)(val*))(var53->class->vft[COLOR_string__Object__to_s]))(var53) /* to_s on <var53:Array[Object]>*/;
}
{
parser_nodes__ANode__debug(var_node, var56); /* Direct call parser_nodes#ANode#debug on <var_node:ANode>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 259);
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
var62 = ((short int (*)(val*, val*))(var_vis_type->class->vft[COLOR_kernel__Object___61d_61d]))(var_vis_type, var_other) /* == on <var_vis_type:nullable MVisibility(MVisibility)>*/;
var61 = var62;
}
var63 = !var61;
var59 = var63;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
var58 = var59;
}
if (var58){
var64 = NULL;
if (var_mmodule_type == NULL) {
var65 = 0; /* is null */
} else {
var65 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mmodule_type,var64) on <var_mmodule_type:nullable MModule> */
var_other = var64;
{
var69 = ((short int (*)(val*, val*))(var_mmodule_type->class->vft[COLOR_kernel__Object___61d_61d]))(var_mmodule_type, var_other) /* == on <var_mmodule_type:nullable MModule(MModule)>*/;
var68 = var69;
}
var70 = !var68;
var66 = var70;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
var65 = var66;
}
if (unlikely(!var65)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 263);
show_backtrace(1);
}
{
var71 = mmodule__MModule__visibility_for(var_mmodule, var_mmodule_type);
}
var_vis_module_type = var71;
{
{ /* Inline model#MProperty#visibility (var_mproperty) on <var_mproperty:MProperty> */
var74 = var_mproperty->attrs[COLOR_model__MProperty___visibility].val; /* _visibility on <var_mproperty:MProperty> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1630);
show_backtrace(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
{
var75 = kernel__Comparable___62d(var72, var_vis_type);
}
if (var75){
if (varonce76) {
var77 = varonce76;
} else {
var78 = "Error: The ";
var79 = 11;
var80 = string__NativeString__to_s_with_length(var78, var79);
var77 = var80;
varonce76 = var77;
}
{
{ /* Inline model#MProperty#visibility (var_mproperty) on <var_mproperty:MProperty> */
var83 = var_mproperty->attrs[COLOR_model__MProperty___visibility].val; /* _visibility on <var_mproperty:MProperty> */
if (unlikely(var83 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1630);
show_backtrace(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
if (varonce84) {
var85 = varonce84;
} else {
var86 = " property `";
var87 = 11;
var88 = string__NativeString__to_s_with_length(var86, var87);
var85 = var88;
varonce84 = var85;
}
if (varonce89) {
var90 = varonce89;
} else {
var91 = "` cannot contain the ";
var92 = 21;
var93 = string__NativeString__to_s_with_length(var91, var92);
var90 = var93;
varonce89 = var90;
}
if (varonce94) {
var95 = varonce94;
} else {
var96 = " type `";
var97 = 7;
var98 = string__NativeString__to_s_with_length(var96, var97);
var95 = var98;
varonce94 = var95;
}
if (varonce99) {
var100 = varonce99;
} else {
var101 = "`";
var102 = 1;
var103 = string__NativeString__to_s_with_length(var101, var102);
var100 = var103;
varonce99 = var100;
}
var104 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var104 = array_instance Array[Object] */
var105 = 9;
var106 = NEW_array__NativeArray(var105, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var106)->values[0] = (val*) var77;
((struct instance_array__NativeArray*)var106)->values[1] = (val*) var81;
((struct instance_array__NativeArray*)var106)->values[2] = (val*) var85;
((struct instance_array__NativeArray*)var106)->values[3] = (val*) var_mproperty;
((struct instance_array__NativeArray*)var106)->values[4] = (val*) var90;
((struct instance_array__NativeArray*)var106)->values[5] = (val*) var_vis_type;
((struct instance_array__NativeArray*)var106)->values[6] = (val*) var95;
((struct instance_array__NativeArray*)var106)->values[7] = (val*) var_mtype;
((struct instance_array__NativeArray*)var106)->values[8] = (val*) var100;
{
((void (*)(val*, val*, long))(var104->class->vft[COLOR_array__Array__with_native]))(var104, var106, var105) /* with_native on <var104:Array[Object]>*/;
}
}
{
var107 = ((val* (*)(val*))(var104->class->vft[COLOR_string__Object__to_s]))(var104) /* to_s on <var104:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_node, var107); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
{
{ /* Inline model#MProperty#visibility (var_mproperty) on <var_mproperty:MProperty> */
var110 = var_mproperty->attrs[COLOR_model__MProperty___visibility].val; /* _visibility on <var_mproperty:MProperty> */
if (unlikely(var110 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1630);
show_backtrace(1);
}
var108 = var110;
RET_LABEL109:(void)0;
}
}
{
var111 = kernel__Comparable___62d(var108, var_vis_module_type);
}
if (var111){
if (varonce112) {
var113 = varonce112;
} else {
var114 = "Error: The ";
var115 = 11;
var116 = string__NativeString__to_s_with_length(var114, var115);
var113 = var116;
varonce112 = var113;
}
{
{ /* Inline model#MProperty#visibility (var_mproperty) on <var_mproperty:MProperty> */
var119 = var_mproperty->attrs[COLOR_model__MProperty___visibility].val; /* _visibility on <var_mproperty:MProperty> */
if (unlikely(var119 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1630);
show_backtrace(1);
}
var117 = var119;
RET_LABEL118:(void)0;
}
}
if (varonce120) {
var121 = varonce120;
} else {
var122 = " property `";
var123 = 11;
var124 = string__NativeString__to_s_with_length(var122, var123);
var121 = var124;
varonce120 = var121;
}
if (varonce125) {
var126 = varonce125;
} else {
var127 = "` cannot contain the type `";
var128 = 27;
var129 = string__NativeString__to_s_with_length(var127, var128);
var126 = var129;
varonce125 = var126;
}
if (varonce130) {
var131 = varonce130;
} else {
var132 = "` from the ";
var133 = 11;
var134 = string__NativeString__to_s_with_length(var132, var133);
var131 = var134;
varonce130 = var131;
}
if (varonce135) {
var136 = varonce135;
} else {
var137 = " module `";
var138 = 9;
var139 = string__NativeString__to_s_with_length(var137, var138);
var136 = var139;
varonce135 = var136;
}
if (varonce140) {
var141 = varonce140;
} else {
var142 = "`";
var143 = 1;
var144 = string__NativeString__to_s_with_length(var142, var143);
var141 = var144;
varonce140 = var141;
}
var145 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var145 = array_instance Array[Object] */
var146 = 11;
var147 = NEW_array__NativeArray(var146, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var147)->values[0] = (val*) var113;
((struct instance_array__NativeArray*)var147)->values[1] = (val*) var117;
((struct instance_array__NativeArray*)var147)->values[2] = (val*) var121;
((struct instance_array__NativeArray*)var147)->values[3] = (val*) var_mproperty;
((struct instance_array__NativeArray*)var147)->values[4] = (val*) var126;
((struct instance_array__NativeArray*)var147)->values[5] = (val*) var_mtype;
((struct instance_array__NativeArray*)var147)->values[6] = (val*) var131;
((struct instance_array__NativeArray*)var147)->values[7] = (val*) var_vis_module_type;
((struct instance_array__NativeArray*)var147)->values[8] = (val*) var136;
((struct instance_array__NativeArray*)var147)->values[9] = (val*) var_mmodule_type;
((struct instance_array__NativeArray*)var147)->values[10] = (val*) var141;
{
((void (*)(val*, val*, long))(var145->class->vft[COLOR_array__Array__with_native]))(var145, var147, var146) /* with_native on <var145:Array[Object]>*/;
}
}
{
var148 = ((val* (*)(val*))(var145->class->vft[COLOR_string__Object__to_s]))(var145) /* to_s on <var145:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_node, var148); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
}
} else {
}
/* <var_node:ANode> isa AType */
cltype150 = type_parser_nodes__AType.color;
idtype151 = type_parser_nodes__AType.id;
if(cltype150 >= var_node->type->table_size) {
var149 = 0;
} else {
var149 = var_node->type->type_table[cltype150] == idtype151;
}
if (var149){
{
{ /* Inline parser_nodes#AType#n_types (var_node) on <var_node:ANode(AType)> */
var154 = var_node->attrs[COLOR_parser_nodes__AType___n_types].val; /* _n_types on <var_node:ANode(AType)> */
if (unlikely(var154 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1300);
show_backtrace(1);
}
var152 = var154;
RET_LABEL153:(void)0;
}
}
var_ = var152;
{
var155 = parser_nodes__ANodes__iterator(var_);
}
var_156 = var155;
for(;;) {
{
var157 = ((short int (*)(val*))(var_156->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_156) /* is_ok on <var_156:Iterator[AType]>*/;
}
if (var157){
{
var158 = ((val* (*)(val*))(var_156->class->vft[COLOR_abstract_collection__Iterator__item]))(var_156) /* item on <var_156:Iterator[AType]>*/;
}
var_a = var158;
{
{ /* Inline modelize_class#AType#mtype (var_a) on <var_a:AType> */
var161 = var_a->attrs[COLOR_modelize_class__AType___mtype].val; /* _mtype on <var_a:AType> */
var159 = var161;
RET_LABEL160:(void)0;
}
}
var_t = var159;
var162 = NULL;
if (var_t == NULL) {
var163 = 1; /* is null */
} else {
var163 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t,var162) on <var_t:nullable MType> */
var_other166 = var162;
{
{ /* Inline kernel#Object#is_same_instance (var_t,var_other166) on <var_t:nullable MType(MType)> */
var169 = var_t == var_other166;
var167 = var169;
goto RET_LABEL168;
RET_LABEL168:(void)0;
}
}
var164 = var167;
goto RET_LABEL165;
RET_LABEL165:(void)0;
}
var163 = var164;
}
if (var163){
goto BREAK_label;
} else {
}
{
modelize_property__ModelBuilder__check_visibility(self, var_a, var_t, var_mpropdef); /* Direct call modelize_property#ModelBuilder#check_visibility on <self:ModelBuilder>*/
}
BREAK_label: (void)0;
{
((void (*)(val*))(var_156->class->vft[COLOR_abstract_collection__Iterator__next]))(var_156) /* next on <var_156:Iterator[AType]>*/;
}
} else {
goto BREAK_label170;
}
}
BREAK_label170: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_156) on <var_156:Iterator[AType]> */
RET_LABEL171:(void)0;
}
}
} else {
/* <var_mtype:MType> isa MGenericType */
cltype173 = type_model__MGenericType.color;
idtype174 = type_model__MGenericType.id;
if(cltype173 >= var_mtype->type->table_size) {
var172 = 0;
} else {
var172 = var_mtype->type->type_table[cltype173] == idtype174;
}
if (var172){
{
{ /* Inline model#MClassType#arguments (var_mtype) on <var_mtype:MType(MGenericType)> */
var177 = var_mtype->attrs[COLOR_model__MClassType___arguments].val; /* _arguments on <var_mtype:MType(MGenericType)> */
if (unlikely(var177 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 996);
show_backtrace(1);
}
var175 = var177;
RET_LABEL176:(void)0;
}
}
var_178 = var175;
{
var179 = array__AbstractArrayRead__iterator(var_178);
}
var_180 = var179;
for(;;) {
{
var181 = array__ArrayIterator__is_ok(var_180);
}
if (var181){
{
var182 = array__ArrayIterator__item(var_180);
}
var_t183 = var182;
{
modelize_property__ModelBuilder__check_visibility(self, var_node, var_t183, var_mpropdef); /* Direct call modelize_property#ModelBuilder#check_visibility on <self:ModelBuilder>*/
}
{
array__ArrayIterator__next(var_180); /* Direct call array#ArrayIterator#next on <var_180:ArrayIterator[MType]>*/
}
} else {
goto BREAK_label184;
}
}
BREAK_label184: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_180) on <var_180:ArrayIterator[MType]> */
RET_LABEL185:(void)0;
}
}
} else {
}
}
RET_LABEL:;
}
/* method modelize_property#ModelBuilder#check_visibility for (self: Object, ANode, MType, MPropDef) */
void VIRTUAL_modelize_property__ModelBuilder__check_visibility(val* self, val* p0, val* p1, val* p2) {
modelize_property__ModelBuilder__check_visibility(self, p0, p1, p2); /* Direct call modelize_property#ModelBuilder#check_visibility on <self:Object(ModelBuilder)>*/
RET_LABEL:;
}
/* method modelize_property#MPropDef#has_supercall for (self: MPropDef): Bool */
short int modelize_property__MPropDef__has_supercall(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_modelize_property__MPropDef___has_supercall].s; /* _has_supercall on <self:MPropDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#MPropDef#has_supercall for (self: Object): Bool */
short int VIRTUAL_modelize_property__MPropDef__has_supercall(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline modelize_property#MPropDef#has_supercall (self) on <self:Object(MPropDef)> */
var3 = self->attrs[COLOR_modelize_property__MPropDef___has_supercall].s; /* _has_supercall on <self:Object(MPropDef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#MPropDef#has_supercall= for (self: MPropDef, Bool) */
void modelize_property__MPropDef__has_supercall_61d(val* self, short int p0) {
self->attrs[COLOR_modelize_property__MPropDef___has_supercall].s = p0; /* _has_supercall on <self:MPropDef> */
RET_LABEL:;
}
/* method modelize_property#MPropDef#has_supercall= for (self: Object, Bool) */
void VIRTUAL_modelize_property__MPropDef__has_supercall_61d(val* self, short int p0) {
{ /* Inline modelize_property#MPropDef#has_supercall= (self,p0) on <self:Object(MPropDef)> */
self->attrs[COLOR_modelize_property__MPropDef___has_supercall].s = p0; /* _has_supercall on <self:Object(MPropDef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method modelize_property#AClassdef#build_properties_is_done for (self: AClassdef): Bool */
short int modelize_property__AClassdef__build_properties_is_done(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_modelize_property__AClassdef___build_properties_is_done].s; /* _build_properties_is_done on <self:AClassdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AClassdef#build_properties_is_done for (self: Object): Bool */
short int VIRTUAL_modelize_property__AClassdef__build_properties_is_done(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline modelize_property#AClassdef#build_properties_is_done (self) on <self:Object(AClassdef)> */
var3 = self->attrs[COLOR_modelize_property__AClassdef___build_properties_is_done].s; /* _build_properties_is_done on <self:Object(AClassdef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AClassdef#build_properties_is_done= for (self: AClassdef, Bool) */
void modelize_property__AClassdef__build_properties_is_done_61d(val* self, short int p0) {
self->attrs[COLOR_modelize_property__AClassdef___build_properties_is_done].s = p0; /* _build_properties_is_done on <self:AClassdef> */
RET_LABEL:;
}
/* method modelize_property#AClassdef#build_properties_is_done= for (self: Object, Bool) */
void VIRTUAL_modelize_property__AClassdef__build_properties_is_done_61d(val* self, short int p0) {
{ /* Inline modelize_property#AClassdef#build_properties_is_done= (self,p0) on <self:Object(AClassdef)> */
self->attrs[COLOR_modelize_property__AClassdef___build_properties_is_done].s = p0; /* _build_properties_is_done on <self:Object(AClassdef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method modelize_property#AClassdef#mfree_init for (self: AClassdef): nullable MMethodDef */
val* modelize_property__AClassdef__mfree_init(val* self) {
val* var /* : nullable MMethodDef */;
val* var1 /* : nullable MMethodDef */;
var1 = self->attrs[COLOR_modelize_property__AClassdef___mfree_init].val; /* _mfree_init on <self:AClassdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AClassdef#mfree_init for (self: Object): nullable MMethodDef */
val* VIRTUAL_modelize_property__AClassdef__mfree_init(val* self) {
val* var /* : nullable MMethodDef */;
val* var1 /* : nullable MMethodDef */;
val* var3 /* : nullable MMethodDef */;
{ /* Inline modelize_property#AClassdef#mfree_init (self) on <self:Object(AClassdef)> */
var3 = self->attrs[COLOR_modelize_property__AClassdef___mfree_init].val; /* _mfree_init on <self:Object(AClassdef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AClassdef#mfree_init= for (self: AClassdef, nullable MMethodDef) */
void modelize_property__AClassdef__mfree_init_61d(val* self, val* p0) {
self->attrs[COLOR_modelize_property__AClassdef___mfree_init].val = p0; /* _mfree_init on <self:AClassdef> */
RET_LABEL:;
}
/* method modelize_property#AClassdef#mfree_init= for (self: Object, nullable MMethodDef) */
void VIRTUAL_modelize_property__AClassdef__mfree_init_61d(val* self, val* p0) {
{ /* Inline modelize_property#AClassdef#mfree_init= (self,p0) on <self:Object(AClassdef)> */
self->attrs[COLOR_modelize_property__AClassdef___mfree_init].val = p0; /* _mfree_init on <self:Object(AClassdef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method modelize_property#MClass#root_init for (self: MClass): nullable MMethodDef */
val* modelize_property__MClass__root_init(val* self) {
val* var /* : nullable MMethodDef */;
val* var1 /* : nullable MMethodDef */;
var1 = self->attrs[COLOR_modelize_property__MClass___root_init].val; /* _root_init on <self:MClass> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#MClass#root_init for (self: Object): nullable MMethodDef */
val* VIRTUAL_modelize_property__MClass__root_init(val* self) {
val* var /* : nullable MMethodDef */;
val* var1 /* : nullable MMethodDef */;
val* var3 /* : nullable MMethodDef */;
{ /* Inline modelize_property#MClass#root_init (self) on <self:Object(MClass)> */
var3 = self->attrs[COLOR_modelize_property__MClass___root_init].val; /* _root_init on <self:Object(MClass)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#MClass#root_init= for (self: MClass, nullable MMethodDef) */
void modelize_property__MClass__root_init_61d(val* self, val* p0) {
self->attrs[COLOR_modelize_property__MClass___root_init].val = p0; /* _root_init on <self:MClass> */
RET_LABEL:;
}
/* method modelize_property#MClass#root_init= for (self: Object, nullable MMethodDef) */
void VIRTUAL_modelize_property__MClass__root_init_61d(val* self, val* p0) {
{ /* Inline modelize_property#MClass#root_init= (self,p0) on <self:Object(MClass)> */
self->attrs[COLOR_modelize_property__MClass___root_init].val = p0; /* _root_init on <self:Object(MClass)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method modelize_property#MClassDef#mprop2npropdef for (self: MClassDef): Map[MProperty, APropdef] */
val* modelize_property__MClassDef__mprop2npropdef(val* self) {
val* var /* : Map[MProperty, APropdef] */;
val* var1 /* : Map[MProperty, APropdef] */;
var1 = self->attrs[COLOR_modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <self:MClassDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 310);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#MClassDef#mprop2npropdef for (self: Object): Map[MProperty, APropdef] */
val* VIRTUAL_modelize_property__MClassDef__mprop2npropdef(val* self) {
val* var /* : Map[MProperty, APropdef] */;
val* var1 /* : Map[MProperty, APropdef] */;
val* var3 /* : Map[MProperty, APropdef] */;
{ /* Inline modelize_property#MClassDef#mprop2npropdef (self) on <self:Object(MClassDef)> */
var3 = self->attrs[COLOR_modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <self:Object(MClassDef)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 310);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#APropdef#mpropdef for (self: APropdef): nullable MPropDef */
val* modelize_property__APropdef__mpropdef(val* self) {
val* var /* : nullable MPropDef */;
val* var1 /* : nullable MPropDef */;
var1 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:APropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#APropdef#mpropdef for (self: Object): nullable MPropDef */
val* VIRTUAL_modelize_property__APropdef__mpropdef(val* self) {
val* var /* : nullable MPropDef */;
val* var1 /* : nullable MPropDef */;
val* var3 /* : nullable MPropDef */;
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:Object(APropdef)> */
var3 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:Object(APropdef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#APropdef#mpropdef= for (self: APropdef, nullable MPropDef) */
void modelize_property__APropdef__mpropdef_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (mpropdef) <p0:nullable MPropDef> isa nullable MPROPDEF */
/* <p0:nullable MPropDef> isa nullable MPROPDEF */
type_struct = self->type->resolution_table->types[COLOR_nullable_parser_nodes__APropdef_VTMPROPDEF];
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
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 319);
show_backtrace(1);
}
self->attrs[COLOR_modelize_property__APropdef___mpropdef].val = p0; /* _mpropdef on <self:APropdef> */
RET_LABEL:;
}
/* method modelize_property#APropdef#mpropdef= for (self: Object, nullable MPropDef) */
void VIRTUAL_modelize_property__APropdef__mpropdef_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
{ /* Inline modelize_property#APropdef#mpropdef= (self,p0) on <self:Object(APropdef)> */
/* Covariant cast for argument 0 (mpropdef) <p0:nullable MPropDef> isa nullable MPROPDEF */
/* <p0:nullable MPropDef> isa nullable MPROPDEF */
type_struct = self->type->resolution_table->types[COLOR_nullable_parser_nodes__APropdef_VTMPROPDEF];
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
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 319);
show_backtrace(1);
}
self->attrs[COLOR_modelize_property__APropdef___mpropdef].val = p0; /* _mpropdef on <self:Object(APropdef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method modelize_property#APropdef#new_property_visibility for (self: APropdef, ModelBuilder, MClassDef, nullable AVisibility): MVisibility */
val* modelize_property__APropdef__new_property_visibility(val* self, val* p0, val* p1, val* p2) {
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
short int var8 /* : Bool */;
val* var9 /* : MVisibility */;
val* var10 /* : MVisibility */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_other14 /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
static val* varonce;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : FlatString */;
val* var22 /* : MVisibility */;
val* var23 /* : MClass */;
val* var25 /* : MClass */;
val* var26 /* : MVisibility */;
val* var28 /* : MVisibility */;
val* var29 /* : MVisibility */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
val* var36 /* : MVisibility */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
val* var43 /* : null */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : FlatString */;
val* var55 /* : MVisibility */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
short int var61 /* : Bool */;
val* var62 /* : null */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
long var72 /* : Int */;
val* var73 /* : FlatString */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
long var77 /* : Int */;
val* var78 /* : FlatString */;
val* var79 /* : MVisibility */;
var_modelbuilder = p0;
var_mclassdef = p1;
var_nvisibility = p2;
{
var1 = model_base__Object__public_visibility(self);
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
var7 = ((short int (*)(val*, val*))(var_nvisibility->class->vft[COLOR_kernel__Object___61d_61d]))(var_nvisibility, var_other) /* == on <var_nvisibility:nullable AVisibility(AVisibility)>*/;
var6 = var7;
}
var8 = !var6;
var4 = var8;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
{
var9 = ((val* (*)(val*))(var_nvisibility->class->vft[COLOR_modelbuilder__AVisibility__mvisibility]))(var_nvisibility) /* mvisibility on <var_nvisibility:nullable AVisibility(AVisibility)>*/;
}
var_mvisibility = var9;
{
var10 = model_base__Object__intrude_visibility(self);
}
{
{ /* Inline kernel#Object#== (var_mvisibility,var10) on <var_mvisibility:MVisibility> */
var_other14 = var10;
{
{ /* Inline kernel#Object#is_same_instance (var_mvisibility,var_other14) on <var_mvisibility:MVisibility> */
var17 = var_mvisibility == var_other14;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
if (var11){
if (varonce) {
var18 = varonce;
} else {
var19 = "Error: intrude is not a legal visibility for properties.";
var20 = 56;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce = var18;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, var_nvisibility, var18); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
{
var22 = model_base__Object__public_visibility(self);
}
var_mvisibility = var22;
} else {
}
} else {
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var25 = var_mclassdef->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline model#MClass#visibility (var23) on <var23:MClass> */
var28 = var23->attrs[COLOR_model__MClass___visibility].val; /* _visibility on <var23:MClass> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 375);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
var29 = model_base__Object__private_visibility(self);
}
{
{ /* Inline kernel#Object#== (var26,var29) on <var26:MVisibility> */
var_other14 = var29;
{
{ /* Inline kernel#Object#is_same_instance (var26,var_other14) on <var26:MVisibility> */
var35 = var26 == var_other14;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
var30 = var31;
}
if (var30){
{
var36 = model_base__Object__protected_visibility(self);
}
{
{ /* Inline kernel#Object#== (var_mvisibility,var36) on <var_mvisibility:MVisibility> */
var_other14 = var36;
{
{ /* Inline kernel#Object#is_same_instance (var_mvisibility,var_other14) on <var_mvisibility:MVisibility> */
var42 = var_mvisibility == var_other14;
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
var43 = NULL;
if (var_nvisibility == NULL) {
var44 = 0; /* is null */
} else {
var44 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nvisibility,var43) on <var_nvisibility:nullable AVisibility> */
var_other = var43;
{
var48 = ((short int (*)(val*, val*))(var_nvisibility->class->vft[COLOR_kernel__Object___61d_61d]))(var_nvisibility, var_other) /* == on <var_nvisibility:nullable AVisibility(AVisibility)>*/;
var47 = var48;
}
var49 = !var47;
var45 = var49;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
var44 = var45;
}
if (unlikely(!var44)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 337);
show_backtrace(1);
}
if (varonce50) {
var51 = varonce50;
} else {
var52 = "Error: The only legal visibility for properties in a private class is private.";
var53 = 78;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, var_nvisibility, var51); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
{
var55 = model_base__Object__private_visibility(self);
}
{
{ /* Inline kernel#Object#== (var_mvisibility,var55) on <var_mvisibility:MVisibility> */
var_other14 = var55;
{
{ /* Inline kernel#Object#is_same_instance (var_mvisibility,var_other14) on <var_mvisibility:MVisibility> */
var61 = var_mvisibility == var_other14;
var59 = var61;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
var57 = var59;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
var56 = var57;
}
if (var56){
var62 = NULL;
if (var_nvisibility == NULL) {
var63 = 0; /* is null */
} else {
var63 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nvisibility,var62) on <var_nvisibility:nullable AVisibility> */
var_other = var62;
{
var67 = ((short int (*)(val*, val*))(var_nvisibility->class->vft[COLOR_kernel__Object___61d_61d]))(var_nvisibility, var_other) /* == on <var_nvisibility:nullable AVisibility(AVisibility)>*/;
var66 = var67;
}
var68 = !var66;
var64 = var68;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
var63 = var64;
}
if (unlikely(!var63)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 340);
show_backtrace(1);
}
if (varonce69) {
var70 = varonce69;
} else {
var71 = "useless-visibility";
var72 = 18;
var73 = string__NativeString__to_s_with_length(var71, var72);
var70 = var73;
varonce69 = var70;
}
if (varonce74) {
var75 = varonce74;
} else {
var76 = "Warning: private is superfluous since the only legal visibility for properties in a private class is private.";
var77 = 109;
var78 = string__NativeString__to_s_with_length(var76, var77);
var75 = var78;
varonce74 = var75;
}
{
modelbuilder__ModelBuilder__advice(var_modelbuilder, var_nvisibility, var70, var75); /* Direct call modelbuilder#ModelBuilder#advice on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
}
{
var79 = model_base__Object__private_visibility(self);
}
var_mvisibility = var79;
} else {
}
var = var_mvisibility;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#APropdef#new_property_visibility for (self: Object, ModelBuilder, MClassDef, nullable AVisibility): MVisibility */
val* VIRTUAL_modelize_property__APropdef__new_property_visibility(val* self, val* p0, val* p1, val* p2) {
val* var /* : MVisibility */;
val* var1 /* : MVisibility */;
var1 = modelize_property__APropdef__new_property_visibility(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#APropdef#set_doc for (self: APropdef, MPropDef, ModelBuilder) */
void modelize_property__APropdef__set_doc(val* self, val* p0, val* p1) {
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
short int var9 /* : Bool */;
val* var10 /* : MDoc */;
val* var_mdoc /* var mdoc: MDoc */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var_ /* var : Bool */;
val* var15 /* : MProperty */;
val* var17 /* : MProperty */;
val* var18 /* : MVisibility */;
val* var20 /* : MVisibility */;
val* var21 /* : MVisibility */;
short int var22 /* : Bool */;
static val* varonce;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : FlatString */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : FlatString */;
val* var32 /* : MProperty */;
val* var34 /* : MProperty */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
long var38 /* : Int */;
val* var39 /* : FlatString */;
val* var40 /* : Array[Object] */;
long var41 /* : Int */;
val* var42 /* : NativeArray[Object] */;
val* var43 /* : String */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
long var47 /* : Int */;
val* var48 /* : FlatString */;
val* var49 /* : nullable AAnnotation */;
val* var_at_deprecated /* var at_deprecated: nullable AAnnotation */;
val* var50 /* : null */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
long var62 /* : Int */;
val* var63 /* : FlatString */;
val* var64 /* : MDeprecationInfo */;
val* var_info /* var info: MDeprecationInfo */;
val* var65 /* : nullable ADoc */;
val* var67 /* : nullable ADoc */;
val* var68 /* : null */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
val* var75 /* : MDoc */;
val* var77 /* : MProperty */;
val* var79 /* : MProperty */;
var_mpropdef = p0;
var_modelbuilder = p1;
{
{ /* Inline parser_nodes#APropdef#n_doc (self) on <self:APropdef> */
var2 = self->attrs[COLOR_parser_nodes__APropdef___n_doc].val; /* _n_doc on <self:APropdef> */
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
var8 = ((short int (*)(val*, val*))(var_ndoc->class->vft[COLOR_kernel__Object___61d_61d]))(var_ndoc, var_other) /* == on <var_ndoc:nullable ADoc(ADoc)>*/;
var7 = var8;
}
var9 = !var7;
var5 = var9;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
{
var10 = modelbuilder__ADoc__to_mdoc(var_ndoc);
}
var_mdoc = var10;
{
{ /* Inline mdoc#MEntity#mdoc= (var_mpropdef,var_mdoc) on <var_mpropdef:MPropDef> */
var_mpropdef->attrs[COLOR_mdoc__MEntity___mdoc].val = var_mdoc; /* _mdoc on <var_mpropdef:MPropDef> */
RET_LABEL11:(void)0;
}
}
{
{ /* Inline mdoc#MDoc#original_mentity= (var_mdoc,var_mpropdef) on <var_mdoc:MDoc> */
var_mdoc->attrs[COLOR_mdoc__MDoc___original_mentity].val = var_mpropdef; /* _original_mentity on <var_mdoc:MDoc> */
RET_LABEL12:(void)0;
}
}
} else {
{
var14 = model__MPropDef__is_intro(var_mpropdef);
}
var_ = var14;
if (var14){
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MPropDef> */
var17 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MPropDef> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model#MProperty#visibility (var15) on <var15:MProperty> */
var20 = var15->attrs[COLOR_model__MProperty___visibility].val; /* _visibility on <var15:MProperty> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1630);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = model_base__Object__protected_visibility(self);
}
{
var22 = kernel__Comparable___62d_61d(var18, var21);
}
var13 = var22;
} else {
var13 = var_;
}
if (var13){
if (varonce) {
var23 = varonce;
} else {
var24 = "missing-doc";
var25 = 11;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce = var23;
}
if (varonce27) {
var28 = varonce27;
} else {
var29 = "Documentation warning: Undocumented property `";
var30 = 46;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MPropDef> */
var34 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MPropDef> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
if (varonce35) {
var36 = varonce35;
} else {
var37 = "`";
var38 = 1;
var39 = string__NativeString__to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
var40 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var40 = array_instance Array[Object] */
var41 = 3;
var42 = NEW_array__NativeArray(var41, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var42)->values[0] = (val*) var28;
((struct instance_array__NativeArray*)var42)->values[1] = (val*) var32;
((struct instance_array__NativeArray*)var42)->values[2] = (val*) var36;
{
((void (*)(val*, val*, long))(var40->class->vft[COLOR_array__Array__with_native]))(var40, var42, var41) /* with_native on <var40:Array[Object]>*/;
}
}
{
var43 = ((val* (*)(val*))(var40->class->vft[COLOR_string__Object__to_s]))(var40) /* to_s on <var40:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__advice(var_modelbuilder, self, var23, var43); /* Direct call modelbuilder#ModelBuilder#advice on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
}
if (varonce44) {
var45 = varonce44;
} else {
var46 = "deprecated";
var47 = 10;
var48 = string__NativeString__to_s_with_length(var46, var47);
var45 = var48;
varonce44 = var45;
}
{
var49 = annotation__Prod__get_single_annotation(self, var45, var_modelbuilder);
}
var_at_deprecated = var49;
var50 = NULL;
if (var_at_deprecated == NULL) {
var51 = 0; /* is null */
} else {
var51 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_at_deprecated,var50) on <var_at_deprecated:nullable AAnnotation> */
var_other = var50;
{
var55 = ((short int (*)(val*, val*))(var_at_deprecated->class->vft[COLOR_kernel__Object___61d_61d]))(var_at_deprecated, var_other) /* == on <var_at_deprecated:nullable AAnnotation(AAnnotation)>*/;
var54 = var55;
}
var56 = !var54;
var52 = var56;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
var51 = var52;
}
if (var51){
{
var57 = model__MPropDef__is_intro(var_mpropdef);
}
var58 = !var57;
if (var58){
if (varonce59) {
var60 = varonce59;
} else {
var61 = "Error: method redefinition cannot be deprecated.";
var62 = 48;
var63 = string__NativeString__to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, self, var60); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
var64 = NEW_mdoc__MDeprecationInfo(&type_mdoc__MDeprecationInfo);
{
((void (*)(val*))(var64->class->vft[COLOR_kernel__Object__init]))(var64) /* init on <var64:MDeprecationInfo>*/;
}
var_info = var64;
{
{ /* Inline parser_nodes#AAnnotation#n_doc (var_at_deprecated) on <var_at_deprecated:nullable AAnnotation(AAnnotation)> */
var67 = var_at_deprecated->attrs[COLOR_parser_nodes__AAnnotation___n_doc].val; /* _n_doc on <var_at_deprecated:nullable AAnnotation(AAnnotation)> */
var65 = var67;
RET_LABEL66:(void)0;
}
}
var_ndoc = var65;
var68 = NULL;
if (var_ndoc == NULL) {
var69 = 0; /* is null */
} else {
var69 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ndoc,var68) on <var_ndoc:nullable ADoc> */
var_other = var68;
{
var73 = ((short int (*)(val*, val*))(var_ndoc->class->vft[COLOR_kernel__Object___61d_61d]))(var_ndoc, var_other) /* == on <var_ndoc:nullable ADoc(ADoc)>*/;
var72 = var73;
}
var74 = !var72;
var70 = var74;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
var69 = var70;
}
if (var69){
{
var75 = modelbuilder__ADoc__to_mdoc(var_ndoc);
}
{
{ /* Inline mdoc#MDeprecationInfo#mdoc= (var_info,var75) on <var_info:MDeprecationInfo> */
var_info->attrs[COLOR_mdoc__MDeprecationInfo___mdoc].val = var75; /* _mdoc on <var_info:MDeprecationInfo> */
RET_LABEL76:(void)0;
}
}
} else {
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MPropDef> */
var79 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MPropDef> */
if (unlikely(var79 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
{
{ /* Inline mdoc#MEntity#deprecation= (var77,var_info) on <var77:MProperty> */
var77->attrs[COLOR_mdoc__MEntity___deprecation].val = var_info; /* _deprecation on <var77:MProperty> */
RET_LABEL80:(void)0;
}
}
}
} else {
}
RET_LABEL:;
}
/* method modelize_property#APropdef#set_doc for (self: Object, MPropDef, ModelBuilder) */
void VIRTUAL_modelize_property__APropdef__set_doc(val* self, val* p0, val* p1) {
modelize_property__APropdef__set_doc(self, p0, p1); /* Direct call modelize_property#APropdef#set_doc on <self:Object(APropdef)>*/
RET_LABEL:;
}
/* method modelize_property#APropdef#check_redef_property_visibility for (self: APropdef, ModelBuilder, nullable AVisibility, MProperty) */
void modelize_property__APropdef__check_redef_property_visibility(val* self, val* p0, val* p1, val* p2) {
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
short int var13 /* : Bool */;
val* var_other15 /* var other: nullable Object */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var_ /* var : Bool */;
val* var19 /* : MVisibility */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
static val* varonce;
val* var26 /* : String */;
char* var27 /* : NativeString */;
long var28 /* : Int */;
val* var29 /* : FlatString */;
val* var30 /* : MVisibility */;
val* var32 /* : MVisibility */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
val* var37 /* : FlatString */;
val* var38 /* : Array[Object] */;
long var39 /* : Int */;
val* var40 /* : NativeArray[Object] */;
val* var41 /* : String */;
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
var7 = ((val* (*)(val*))(var_nvisibility->class->vft[COLOR_modelbuilder__AVisibility__mvisibility]))(var_nvisibility) /* mvisibility on <var_nvisibility:nullable AVisibility(AVisibility)>*/;
}
var_mvisibility = var7;
{
{ /* Inline model#MProperty#visibility (var_mprop) on <var_mprop:MProperty> */
var11 = var_mprop->attrs[COLOR_model__MProperty___visibility].val; /* _visibility on <var_mprop:MProperty> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1630);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var_mvisibility,var9) on <var_mvisibility:MVisibility> */
var_other15 = var9;
{
var17 = ((short int (*)(val*, val*))(var_mvisibility->class->vft[COLOR_kernel__Object___61d_61d]))(var_mvisibility, var_other15) /* == on <var_mvisibility:MVisibility>*/;
var16 = var17;
}
var18 = !var16;
var13 = var18;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
var_ = var12;
if (var12){
{
var19 = model_base__Object__public_visibility(self);
}
{
{ /* Inline kernel#Object#!= (var_mvisibility,var19) on <var_mvisibility:MVisibility> */
var_other15 = var19;
{
var24 = ((short int (*)(val*, val*))(var_mvisibility->class->vft[COLOR_kernel__Object___61d_61d]))(var_mvisibility, var_other15) /* == on <var_mvisibility:MVisibility>*/;
var23 = var24;
}
var25 = !var23;
var21 = var25;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
var8 = var20;
} else {
var8 = var_;
}
if (var8){
if (varonce) {
var26 = varonce;
} else {
var27 = "Error: redefinition changed the visibility from a ";
var28 = 50;
var29 = string__NativeString__to_s_with_length(var27, var28);
var26 = var29;
varonce = var26;
}
{
{ /* Inline model#MProperty#visibility (var_mprop) on <var_mprop:MProperty> */
var32 = var_mprop->attrs[COLOR_model__MProperty___visibility].val; /* _visibility on <var_mprop:MProperty> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1630);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
if (varonce33) {
var34 = varonce33;
} else {
var35 = " to a ";
var36 = 6;
var37 = string__NativeString__to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
var38 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var38 = array_instance Array[Object] */
var39 = 4;
var40 = NEW_array__NativeArray(var39, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var40)->values[0] = (val*) var26;
((struct instance_array__NativeArray*)var40)->values[1] = (val*) var30;
((struct instance_array__NativeArray*)var40)->values[2] = (val*) var34;
((struct instance_array__NativeArray*)var40)->values[3] = (val*) var_mvisibility;
{
((void (*)(val*, val*, long))(var38->class->vft[COLOR_array__Array__with_native]))(var38, var40, var39) /* with_native on <var38:Array[Object]>*/;
}
}
{
var41 = ((val* (*)(val*))(var38->class->vft[COLOR_string__Object__to_s]))(var38) /* to_s on <var38:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, var_nvisibility, var41); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
RET_LABEL:;
}
/* method modelize_property#APropdef#check_redef_property_visibility for (self: Object, ModelBuilder, nullable AVisibility, MProperty) */
void VIRTUAL_modelize_property__APropdef__check_redef_property_visibility(val* self, val* p0, val* p1, val* p2) {
modelize_property__APropdef__check_redef_property_visibility(self, p0, p1, p2); /* Direct call modelize_property#APropdef#check_redef_property_visibility on <self:Object(APropdef)>*/
RET_LABEL:;
}
/* method modelize_property#APropdef#check_redef_keyword for (self: APropdef, ModelBuilder, MClassDef, nullable Token, Bool, MProperty): Bool */
short int modelize_property__APropdef__check_redef_keyword(val* self, val* p0, val* p1, val* p2, short int p3, val* p4) {
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
short int var55 /* : Bool */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
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
val* var72 /* : Array[Object] */;
long var73 /* : Int */;
val* var74 /* : NativeArray[Object] */;
val* var75 /* : String */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
long var79 /* : Int */;
val* var80 /* : FlatString */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
long var84 /* : Int */;
val* var85 /* : FlatString */;
val* var86 /* : Array[Object] */;
long var87 /* : Int */;
val* var88 /* : NativeArray[Object] */;
val* var89 /* : String */;
short int var90 /* : Bool */;
val* var91 /* : null */;
short int var92 /* : Bool */;
short int var93 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var95 /* : Bool */;
short int var97 /* : Bool */;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : NativeString */;
long var101 /* : Int */;
val* var102 /* : FlatString */;
val* var103 /* : MClass */;
val* var105 /* : MClass */;
static val* varonce106;
val* var107 /* : String */;
char* var108 /* : NativeString */;
long var109 /* : Int */;
val* var110 /* : FlatString */;
val* var111 /* : String */;
val* var113 /* : String */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : NativeString */;
long var117 /* : Int */;
val* var118 /* : FlatString */;
val* var119 /* : Array[Object] */;
long var120 /* : Int */;
val* var121 /* : NativeArray[Object] */;
val* var122 /* : String */;
short int var123 /* : Bool */;
short int var124 /* : Bool */;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : NativeString */;
long var128 /* : Int */;
val* var129 /* : FlatString */;
val* var130 /* : MClass */;
val* var132 /* : MClass */;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : NativeString */;
long var136 /* : Int */;
val* var137 /* : FlatString */;
val* var138 /* : String */;
val* var140 /* : String */;
static val* varonce141;
val* var142 /* : String */;
char* var143 /* : NativeString */;
long var144 /* : Int */;
val* var145 /* : FlatString */;
val* var146 /* : Array[Object] */;
long var147 /* : Int */;
val* var148 /* : NativeArray[Object] */;
val* var149 /* : String */;
short int var150 /* : Bool */;
short int var151 /* : Bool */;
var_modelbuilder = p0;
var_mclassdef = p1;
var_kwredef = p2;
var_need_redef = p3;
var_mprop = p4;
{
{ /* Inline modelize_property#MClassDef#mprop2npropdef (var_mclassdef) on <var_mclassdef:MClassDef> */
var3 = var_mclassdef->attrs[COLOR_modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <var_mclassdef:MClassDef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 310);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = abstract_collection__MapRead__has_key(var1, var_mprop);
}
if (var4){
if (varonce) {
var5 = varonce;
} else {
var6 = "Error: A property ";
var7 = 18;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
if (varonce9) {
var10 = varonce9;
} else {
var11 = " is already defined in class ";
var12 = 29;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var16 = var_mclassdef->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
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
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
{
{ /* Inline modelize_property#MClassDef#mprop2npropdef (var_mclassdef) on <var_mclassdef:MClassDef> */
var24 = var_mclassdef->attrs[COLOR_modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <var_mclassdef:MClassDef> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 310);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
var25 = ((val* (*)(val*, val*))(var22->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var22, var_mprop) /* [] on <var22:Map[MProperty, APropdef]>*/;
}
{
{ /* Inline parser_nodes#ANode#location (var25) on <var25:nullable Object(APropdef)> */
var28 = var25->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <var25:nullable Object(APropdef)> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 23);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline location#Location#line_start (var26) on <var26:Location> */
var31 = var26->attrs[COLOR_location__Location___line_start].l; /* _line_start on <var26:Location> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
if (varonce32) {
var33 = varonce32;
} else {
var34 = ".";
var35 = 1;
var36 = string__NativeString__to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
var37 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var37 = array_instance Array[Object] */
var38 = 7;
var39 = NEW_array__NativeArray(var38, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var39)->values[0] = (val*) var5;
((struct instance_array__NativeArray*)var39)->values[1] = (val*) var_mprop;
((struct instance_array__NativeArray*)var39)->values[2] = (val*) var10;
((struct instance_array__NativeArray*)var39)->values[3] = (val*) var14;
((struct instance_array__NativeArray*)var39)->values[4] = (val*) var18;
var40 = BOX_kernel__Int(var29); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var39)->values[5] = (val*) var40;
((struct instance_array__NativeArray*)var39)->values[6] = (val*) var33;
{
((void (*)(val*, val*, long))(var37->class->vft[COLOR_array__Array__with_native]))(var37, var39, var38) /* with_native on <var37:Array[Object]>*/;
}
}
{
var41 = ((val* (*)(val*))(var37->class->vft[COLOR_string__Object__to_s]))(var37) /* to_s on <var37:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, self, var41); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
var42 = 0;
var = var42;
goto RET_LABEL;
} else {
}
/* <var_mprop:MProperty> isa MMethod */
cltype = type_model__MMethod.color;
idtype = type_model__MMethod.id;
if(cltype >= var_mprop->type->table_size) {
var44 = 0;
} else {
var44 = var_mprop->type->type_table[cltype] == idtype;
}
var_ = var44;
if (var44){
{
{ /* Inline model#MMethod#is_toplevel (var_mprop) on <var_mprop:MProperty(MMethod)> */
var47 = var_mprop->attrs[COLOR_model__MMethod___is_toplevel].s; /* _is_toplevel on <var_mprop:MProperty(MMethod)> */
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#parent (self) on <self:APropdef> */
var50 = self->attrs[COLOR_parser_nodes__ANode___parent].val; /* _parent on <self:APropdef> */
var48 = var50;
RET_LABEL49:(void)0;
}
}
/* <var48:nullable ANode> isa ATopClassdef */
cltype52 = type_parser_nodes__ATopClassdef.color;
idtype53 = type_parser_nodes__ATopClassdef.id;
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
var57 = var45 == var51;
var58 = !var57;
var55 = var58;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
var54 = var55;
}
var43 = var54;
} else {
var43 = var_;
}
if (var43){
{
{ /* Inline model#MMethod#is_toplevel (var_mprop) on <var_mprop:MProperty(MMethod)> */
var61 = var_mprop->attrs[COLOR_model__MMethod___is_toplevel].s; /* _is_toplevel on <var_mprop:MProperty(MMethod)> */
var59 = var61;
RET_LABEL60:(void)0;
}
}
if (var59){
if (varonce62) {
var63 = varonce62;
} else {
var64 = "Error: ";
var65 = 7;
var66 = string__NativeString__to_s_with_length(var64, var65);
var63 = var66;
varonce62 = var63;
}
if (varonce67) {
var68 = varonce67;
} else {
var69 = " is a top level method.";
var70 = 23;
var71 = string__NativeString__to_s_with_length(var69, var70);
var68 = var71;
varonce67 = var68;
}
var72 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var72 = array_instance Array[Object] */
var73 = 3;
var74 = NEW_array__NativeArray(var73, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var74)->values[0] = (val*) var63;
((struct instance_array__NativeArray*)var74)->values[1] = (val*) var_mprop;
((struct instance_array__NativeArray*)var74)->values[2] = (val*) var68;
{
((void (*)(val*, val*, long))(var72->class->vft[COLOR_array__Array__with_native]))(var72, var74, var73) /* with_native on <var72:Array[Object]>*/;
}
}
{
var75 = ((val* (*)(val*))(var72->class->vft[COLOR_string__Object__to_s]))(var72) /* to_s on <var72:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, self, var75); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
if (varonce76) {
var77 = varonce76;
} else {
var78 = "Error: ";
var79 = 7;
var80 = string__NativeString__to_s_with_length(var78, var79);
var77 = var80;
varonce76 = var77;
}
if (varonce81) {
var82 = varonce81;
} else {
var83 = " is not a top level method.";
var84 = 27;
var85 = string__NativeString__to_s_with_length(var83, var84);
var82 = var85;
varonce81 = var82;
}
var86 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var86 = array_instance Array[Object] */
var87 = 3;
var88 = NEW_array__NativeArray(var87, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var88)->values[0] = (val*) var77;
((struct instance_array__NativeArray*)var88)->values[1] = (val*) var_mprop;
((struct instance_array__NativeArray*)var88)->values[2] = (val*) var82;
{
((void (*)(val*, val*, long))(var86->class->vft[COLOR_array__Array__with_native]))(var86, var88, var87) /* with_native on <var86:Array[Object]>*/;
}
}
{
var89 = ((val* (*)(val*))(var86->class->vft[COLOR_string__Object__to_s]))(var86) /* to_s on <var86:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, self, var89); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
}
var90 = 0;
var = var90;
goto RET_LABEL;
} else {
}
var91 = NULL;
if (var_kwredef == NULL) {
var92 = 1; /* is null */
} else {
var92 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_kwredef,var91) on <var_kwredef:nullable Token> */
var_other = var91;
{
{ /* Inline kernel#Object#is_same_instance (var_kwredef,var_other) on <var_kwredef:nullable Token(Token)> */
var97 = var_kwredef == var_other;
var95 = var97;
goto RET_LABEL96;
RET_LABEL96:(void)0;
}
}
var93 = var95;
goto RET_LABEL94;
RET_LABEL94:(void)0;
}
var92 = var93;
}
if (var92){
if (var_need_redef){
if (varonce98) {
var99 = varonce98;
} else {
var100 = "Redef error: ";
var101 = 13;
var102 = string__NativeString__to_s_with_length(var100, var101);
var99 = var102;
varonce98 = var99;
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var105 = var_mclassdef->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var105 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var103 = var105;
RET_LABEL104:(void)0;
}
}
if (varonce106) {
var107 = varonce106;
} else {
var108 = "::";
var109 = 2;
var110 = string__NativeString__to_s_with_length(var108, var109);
var107 = var110;
varonce106 = var107;
}
{
{ /* Inline model#MProperty#name (var_mprop) on <var_mprop:MProperty> */
var113 = var_mprop->attrs[COLOR_model__MProperty___name].val; /* _name on <var_mprop:MProperty> */
if (unlikely(var113 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1620);
show_backtrace(1);
}
var111 = var113;
RET_LABEL112:(void)0;
}
}
if (varonce114) {
var115 = varonce114;
} else {
var116 = " is an inherited property. To redefine it, add the redef keyword.";
var117 = 65;
var118 = string__NativeString__to_s_with_length(var116, var117);
var115 = var118;
varonce114 = var115;
}
var119 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var119 = array_instance Array[Object] */
var120 = 5;
var121 = NEW_array__NativeArray(var120, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var121)->values[0] = (val*) var99;
((struct instance_array__NativeArray*)var121)->values[1] = (val*) var103;
((struct instance_array__NativeArray*)var121)->values[2] = (val*) var107;
((struct instance_array__NativeArray*)var121)->values[3] = (val*) var111;
((struct instance_array__NativeArray*)var121)->values[4] = (val*) var115;
{
((void (*)(val*, val*, long))(var119->class->vft[COLOR_array__Array__with_native]))(var119, var121, var120) /* with_native on <var119:Array[Object]>*/;
}
}
{
var122 = ((val* (*)(val*))(var119->class->vft[COLOR_string__Object__to_s]))(var119) /* to_s on <var119:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, self, var122); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
var123 = 0;
var = var123;
goto RET_LABEL;
} else {
}
} else {
var124 = !var_need_redef;
if (var124){
if (varonce125) {
var126 = varonce125;
} else {
var127 = "Error: No property ";
var128 = 19;
var129 = string__NativeString__to_s_with_length(var127, var128);
var126 = var129;
varonce125 = var126;
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var132 = var_mclassdef->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var132 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var130 = var132;
RET_LABEL131:(void)0;
}
}
if (varonce133) {
var134 = varonce133;
} else {
var135 = "::";
var136 = 2;
var137 = string__NativeString__to_s_with_length(var135, var136);
var134 = var137;
varonce133 = var134;
}
{
{ /* Inline model#MProperty#name (var_mprop) on <var_mprop:MProperty> */
var140 = var_mprop->attrs[COLOR_model__MProperty___name].val; /* _name on <var_mprop:MProperty> */
if (unlikely(var140 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1620);
show_backtrace(1);
}
var138 = var140;
RET_LABEL139:(void)0;
}
}
if (varonce141) {
var142 = varonce141;
} else {
var143 = " is inherited. Remove the redef keyword to define a new property.";
var144 = 65;
var145 = string__NativeString__to_s_with_length(var143, var144);
var142 = var145;
varonce141 = var142;
}
var146 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var146 = array_instance Array[Object] */
var147 = 5;
var148 = NEW_array__NativeArray(var147, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var148)->values[0] = (val*) var126;
((struct instance_array__NativeArray*)var148)->values[1] = (val*) var130;
((struct instance_array__NativeArray*)var148)->values[2] = (val*) var134;
((struct instance_array__NativeArray*)var148)->values[3] = (val*) var138;
((struct instance_array__NativeArray*)var148)->values[4] = (val*) var142;
{
((void (*)(val*, val*, long))(var146->class->vft[COLOR_array__Array__with_native]))(var146, var148, var147) /* with_native on <var146:Array[Object]>*/;
}
}
{
var149 = ((val* (*)(val*))(var146->class->vft[COLOR_string__Object__to_s]))(var146) /* to_s on <var146:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, self, var149); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
var150 = 0;
var = var150;
goto RET_LABEL;
} else {
}
}
var151 = 1;
var = var151;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#APropdef#check_redef_keyword for (self: Object, ModelBuilder, MClassDef, nullable Token, Bool, MProperty): Bool */
short int VIRTUAL_modelize_property__APropdef__check_redef_keyword(val* self, val* p0, val* p1, val* p2, short int p3, val* p4) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = modelize_property__APropdef__check_redef_keyword(self, p0, p1, p2, p3, p4);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ASignature#is_visited= for (self: ASignature, Bool) */
void modelize_property__ASignature__is_visited_61d(val* self, short int p0) {
self->attrs[COLOR_modelize_property__ASignature___is_visited].s = p0; /* _is_visited on <self:ASignature> */
RET_LABEL:;
}
/* method modelize_property#ASignature#is_visited= for (self: Object, Bool) */
void VIRTUAL_modelize_property__ASignature__is_visited_61d(val* self, short int p0) {
{ /* Inline modelize_property#ASignature#is_visited= (self,p0) on <self:Object(ASignature)> */
self->attrs[COLOR_modelize_property__ASignature___is_visited].s = p0; /* _is_visited on <self:Object(ASignature)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method modelize_property#ASignature#param_names for (self: ASignature): Array[String] */
val* modelize_property__ASignature__param_names(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_modelize_property__ASignature___param_names].val; /* _param_names on <self:ASignature> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _param_names");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 415);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ASignature#param_names for (self: Object): Array[String] */
val* VIRTUAL_modelize_property__ASignature__param_names(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
val* var3 /* : Array[String] */;
{ /* Inline modelize_property#ASignature#param_names (self) on <self:Object(ASignature)> */
var3 = self->attrs[COLOR_modelize_property__ASignature___param_names].val; /* _param_names on <self:Object(ASignature)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _param_names");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 415);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ASignature#param_types for (self: ASignature): Array[MType] */
val* modelize_property__ASignature__param_types(val* self) {
val* var /* : Array[MType] */;
val* var1 /* : Array[MType] */;
var1 = self->attrs[COLOR_modelize_property__ASignature___param_types].val; /* _param_types on <self:ASignature> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _param_types");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 418);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ASignature#param_types for (self: Object): Array[MType] */
val* VIRTUAL_modelize_property__ASignature__param_types(val* self) {
val* var /* : Array[MType] */;
val* var1 /* : Array[MType] */;
val* var3 /* : Array[MType] */;
{ /* Inline modelize_property#ASignature#param_types (self) on <self:Object(ASignature)> */
var3 = self->attrs[COLOR_modelize_property__ASignature___param_types].val; /* _param_types on <self:Object(ASignature)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _param_types");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 418);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ASignature#vararg_rank for (self: ASignature): Int */
long modelize_property__ASignature__vararg_rank(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_modelize_property__ASignature___vararg_rank].l; /* _vararg_rank on <self:ASignature> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ASignature#vararg_rank for (self: Object): Int */
long VIRTUAL_modelize_property__ASignature__vararg_rank(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{ /* Inline modelize_property#ASignature#vararg_rank (self) on <self:Object(ASignature)> */
var3 = self->attrs[COLOR_modelize_property__ASignature___vararg_rank].l; /* _vararg_rank on <self:Object(ASignature)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ASignature#vararg_rank= for (self: ASignature, Int) */
void modelize_property__ASignature__vararg_rank_61d(val* self, long p0) {
self->attrs[COLOR_modelize_property__ASignature___vararg_rank].l = p0; /* _vararg_rank on <self:ASignature> */
RET_LABEL:;
}
/* method modelize_property#ASignature#vararg_rank= for (self: Object, Int) */
void VIRTUAL_modelize_property__ASignature__vararg_rank_61d(val* self, long p0) {
{ /* Inline modelize_property#ASignature#vararg_rank= (self,p0) on <self:Object(ASignature)> */
self->attrs[COLOR_modelize_property__ASignature___vararg_rank].l = p0; /* _vararg_rank on <self:Object(ASignature)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method modelize_property#ASignature#ret_type for (self: ASignature): nullable MType */
val* modelize_property__ASignature__ret_type(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_modelize_property__ASignature___ret_type].val; /* _ret_type on <self:ASignature> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ASignature#ret_type for (self: Object): nullable MType */
val* VIRTUAL_modelize_property__ASignature__ret_type(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
{ /* Inline modelize_property#ASignature#ret_type (self) on <self:Object(ASignature)> */
var3 = self->attrs[COLOR_modelize_property__ASignature___ret_type].val; /* _ret_type on <self:Object(ASignature)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ASignature#ret_type= for (self: ASignature, nullable MType) */
void modelize_property__ASignature__ret_type_61d(val* self, val* p0) {
self->attrs[COLOR_modelize_property__ASignature___ret_type].val = p0; /* _ret_type on <self:ASignature> */
RET_LABEL:;
}
/* method modelize_property#ASignature#ret_type= for (self: Object, nullable MType) */
void VIRTUAL_modelize_property__ASignature__ret_type_61d(val* self, val* p0) {
{ /* Inline modelize_property#ASignature#ret_type= (self,p0) on <self:Object(ASignature)> */
self->attrs[COLOR_modelize_property__ASignature___ret_type].val = p0; /* _ret_type on <self:Object(ASignature)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method modelize_property#ASignature#visit_signature for (self: ASignature, ModelBuilder, MClassDef): Bool */
short int modelize_property__ASignature__visit_signature(val* self, val* p0, val* p1) {
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
short int var30 /* : Bool */;
val* var31 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var32 /* : null */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
val* var_other36 /* var other: nullable Object */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
long var41 /* : Int */;
long var_i /* var i: Int */;
long var42 /* : Int */;
long var44 /* : Int */;
long var45 /* : Int */;
long var47 /* : Int */;
long var48 /* : Int */;
short int var50 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var51 /* : Int */;
long var_52 /* var : Int */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
int cltype56;
int idtype57;
const char* var_class_name58;
short int var59 /* : Bool */;
long var60 /* : Int */;
long var61 /* : Int */;
val* var62 /* : nullable TDotdotdot */;
val* var64 /* : nullable TDotdotdot */;
val* var65 /* : null */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
short int var71 /* : Bool */;
long var72 /* : Int */;
long var74 /* : Int */;
long var75 /* : Int */;
long var76 /* : Int */;
long var78 /* : Int */;
short int var79 /* : Bool */;
short int var80 /* : Bool */;
short int var82 /* : Bool */;
short int var83 /* : Bool */;
static val* varonce;
val* var84 /* : String */;
char* var85 /* : NativeString */;
long var86 /* : Int */;
val* var87 /* : FlatString */;
long var88 /* : Int */;
long var90 /* : Int */;
val* var91 /* : nullable Object */;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : NativeString */;
long var95 /* : Int */;
val* var96 /* : FlatString */;
val* var97 /* : Array[Object] */;
long var98 /* : Int */;
val* var99 /* : NativeArray[Object] */;
val* var100 /* : String */;
short int var101 /* : Bool */;
long var102 /* : Int */;
long var104 /* : Int */;
long var105 /* : Int */;
long var106 /* : Int */;
short int var108 /* : Bool */;
int cltype109;
int idtype110;
const char* var_class_name111;
long var112 /* : Int */;
val* var116 /* : nullable AType */;
val* var118 /* : nullable AType */;
val* var_ntype119 /* var ntype: nullable AType */;
val* var120 /* : null */;
short int var121 /* : Bool */;
short int var122 /* : Bool */;
short int var124 /* : Bool */;
short int var125 /* : Bool */;
short int var126 /* : Bool */;
val* var127 /* : nullable MType */;
val* var129 /* : nullable MType */;
val* var131 /* : nullable MType */;
val* var132 /* : null */;
short int var133 /* : Bool */;
short int var134 /* : Bool */;
short int var136 /* : Bool */;
short int var138 /* : Bool */;
short int var139 /* : Bool */;
short int var140 /* : Bool */;
short int var142 /* : Bool */;
var_modelbuilder = p0;
var_mclassdef = p1;
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var3 = var_mclassdef->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_mmodule = var1;
{
{ /* Inline modelize_property#ASignature#param_names (self) on <self:ASignature> */
var6 = self->attrs[COLOR_modelize_property__ASignature___param_names].val; /* _param_names on <self:ASignature> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _param_names");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 415);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_param_names = var4;
{
{ /* Inline modelize_property#ASignature#param_types (self) on <self:ASignature> */
var9 = self->attrs[COLOR_modelize_property__ASignature___param_types].val; /* _param_types on <self:ASignature> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _param_types");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 418);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_param_types = var7;
{
{ /* Inline parser_nodes#ASignature#n_params (self) on <self:ASignature> */
var12 = self->attrs[COLOR_parser_nodes__ASignature___n_params].val; /* _n_params on <self:ASignature> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1279);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_ = var10;
{
var13 = parser_nodes__ANodes__iterator(var_);
}
var_14 = var13;
for(;;) {
{
var15 = ((short int (*)(val*))(var_14->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_14) /* is_ok on <var_14:Iterator[AParam]>*/;
}
if (var15){
{
var16 = ((val* (*)(val*))(var_14->class->vft[COLOR_abstract_collection__Iterator__item]))(var_14) /* item on <var_14:Iterator[AParam]>*/;
}
var_np = var16;
{
{ /* Inline parser_nodes#AParam#n_id (var_np) on <var_np:AParam> */
var19 = var_np->attrs[COLOR_parser_nodes__AParam___n_id].val; /* _n_id on <var_np:AParam> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1287);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = lexer_work__Token__text(var17);
}
{
array__Array__add(var_param_names, var20); /* Direct call array#Array#add on <var_param_names:Array[String]>*/
}
{
{ /* Inline parser_nodes#AParam#n_type (var_np) on <var_np:AParam> */
var23 = var_np->attrs[COLOR_parser_nodes__AParam___n_type].val; /* _n_type on <var_np:AParam> */
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
var29 = ((short int (*)(val*, val*))(var_ntype->class->vft[COLOR_kernel__Object___61d_61d]))(var_ntype, var_other) /* == on <var_ntype:nullable AType(AType)>*/;
var28 = var29;
}
var30 = !var28;
var26 = var30;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
var25 = var26;
}
if (var25){
{
var31 = modelize_class__ModelBuilder__resolve_mtype(var_modelbuilder, var_mmodule, var_mclassdef, var_ntype);
}
var_mtype = var31;
var32 = NULL;
if (var_mtype == NULL) {
var33 = 1; /* is null */
} else {
var33 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var32) on <var_mtype:nullable MType> */
var_other36 = var32;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other36) on <var_mtype:nullable MType(MType)> */
var39 = var_mtype == var_other36;
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
var34 = var37;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
var33 = var34;
}
if (var33){
var40 = 0;
var = var40;
goto RET_LABEL;
} else {
}
var41 = 0;
var_i = var41;
{
{ /* Inline array#AbstractArrayRead#length (var_param_names) on <var_param_names:Array[String]> */
var44 = var_param_names->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_param_names:Array[String]> */
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var_param_types) on <var_param_types:Array[MType]> */
var47 = var_param_types->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_param_types:Array[MType]> */
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var42,var45) on <var42:Int> */
/* Covariant cast for argument 0 (i) <var45:Int> isa OTHER */
/* <var45:Int> isa OTHER */
var50 = 1; /* easy <var45:Int> isa OTHER*/
if (unlikely(!var50)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var51 = var42 - var45;
var48 = var51;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
var_52 = var48;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_52) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_52:Int> isa OTHER */
/* <var_52:Int> isa OTHER */
var55 = 1; /* easy <var_52:Int> isa OTHER*/
if (unlikely(!var55)) {
var_class_name58 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name58);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var59 = var_i < var_52;
var53 = var59;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
if (var53){
{
array__Array__add(var_param_types, var_mtype); /* Direct call array#Array#add on <var_param_types:Array[MType]>*/
}
var60 = 1;
{
var61 = kernel__Int__successor(var_i, var60);
}
var_i = var61;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline parser_nodes#AParam#n_dotdotdot (var_np) on <var_np:AParam> */
var64 = var_np->attrs[COLOR_parser_nodes__AParam___n_dotdotdot].val; /* _n_dotdotdot on <var_np:AParam> */
var62 = var64;
RET_LABEL63:(void)0;
}
}
var65 = NULL;
if (var62 == NULL) {
var66 = 0; /* is null */
} else {
var66 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var62,var65) on <var62:nullable TDotdotdot> */
var_other = var65;
{
var70 = ((short int (*)(val*, val*))(var62->class->vft[COLOR_kernel__Object___61d_61d]))(var62, var_other) /* == on <var62:nullable TDotdotdot(TDotdotdot)>*/;
var69 = var70;
}
var71 = !var69;
var67 = var71;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
var66 = var67;
}
if (var66){
{
{ /* Inline modelize_property#ASignature#vararg_rank (self) on <self:ASignature> */
var74 = self->attrs[COLOR_modelize_property__ASignature___vararg_rank].l; /* _vararg_rank on <self:ASignature> */
var72 = var74;
RET_LABEL73:(void)0;
}
}
var75 = 1;
{
{ /* Inline kernel#Int#unary - (var75) on <var75:Int> */
var78 = -var75;
var76 = var78;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var72,var76) on <var72:Int> */
var82 = var72 == var76;
var83 = !var82;
var80 = var83;
goto RET_LABEL81;
RET_LABEL81:(void)0;
}
var79 = var80;
}
if (var79){
if (varonce) {
var84 = varonce;
} else {
var85 = "Error: ";
var86 = 7;
var87 = string__NativeString__to_s_with_length(var85, var86);
var84 = var87;
varonce = var84;
}
{
{ /* Inline modelize_property#ASignature#vararg_rank (self) on <self:ASignature> */
var90 = self->attrs[COLOR_modelize_property__ASignature___vararg_rank].l; /* _vararg_rank on <self:ASignature> */
var88 = var90;
RET_LABEL89:(void)0;
}
}
{
var91 = array__Array___91d_93d(var_param_names, var88);
}
if (varonce92) {
var93 = varonce92;
} else {
var94 = " is already a vararg";
var95 = 20;
var96 = string__NativeString__to_s_with_length(var94, var95);
var93 = var96;
varonce92 = var93;
}
var97 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var97 = array_instance Array[Object] */
var98 = 3;
var99 = NEW_array__NativeArray(var98, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var99)->values[0] = (val*) var84;
((struct instance_array__NativeArray*)var99)->values[1] = (val*) var91;
((struct instance_array__NativeArray*)var99)->values[2] = (val*) var93;
{
((void (*)(val*, val*, long))(var97->class->vft[COLOR_array__Array__with_native]))(var97, var99, var98) /* with_native on <var97:Array[Object]>*/;
}
}
{
var100 = ((val* (*)(val*))(var97->class->vft[COLOR_string__Object__to_s]))(var97) /* to_s on <var97:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, var_np, var100); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
var101 = 0;
var = var101;
goto RET_LABEL;
} else {
{
{ /* Inline array#AbstractArrayRead#length (var_param_names) on <var_param_names:Array[String]> */
var104 = var_param_names->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_param_names:Array[String]> */
var102 = var104;
RET_LABEL103:(void)0;
}
}
var105 = 1;
{
{ /* Inline kernel#Int#- (var102,var105) on <var102:Int> */
/* Covariant cast for argument 0 (i) <var105:Int> isa OTHER */
/* <var105:Int> isa OTHER */
var108 = 1; /* easy <var105:Int> isa OTHER*/
if (unlikely(!var108)) {
var_class_name111 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name111);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var112 = var102 - var105;
var106 = var112;
goto RET_LABEL107;
RET_LABEL107:(void)0;
}
}
{
{ /* Inline modelize_property#ASignature#vararg_rank= (self,var106) on <self:ASignature> */
self->attrs[COLOR_modelize_property__ASignature___vararg_rank].l = var106; /* _vararg_rank on <self:ASignature> */
RET_LABEL113:(void)0;
}
}
}
} else {
}
} else {
}
{
((void (*)(val*))(var_14->class->vft[COLOR_abstract_collection__Iterator__next]))(var_14) /* next on <var_14:Iterator[AParam]>*/;
}
} else {
goto BREAK_label114;
}
}
BREAK_label114: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_14) on <var_14:Iterator[AParam]> */
RET_LABEL115:(void)0;
}
}
{
{ /* Inline parser_nodes#ASignature#n_type (self) on <self:ASignature> */
var118 = self->attrs[COLOR_parser_nodes__ASignature___n_type].val; /* _n_type on <self:ASignature> */
var116 = var118;
RET_LABEL117:(void)0;
}
}
var_ntype119 = var116;
var120 = NULL;
if (var_ntype119 == NULL) {
var121 = 0; /* is null */
} else {
var121 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ntype119,var120) on <var_ntype119:nullable AType> */
var_other = var120;
{
var125 = ((short int (*)(val*, val*))(var_ntype119->class->vft[COLOR_kernel__Object___61d_61d]))(var_ntype119, var_other) /* == on <var_ntype119:nullable AType(AType)>*/;
var124 = var125;
}
var126 = !var124;
var122 = var126;
goto RET_LABEL123;
RET_LABEL123:(void)0;
}
var121 = var122;
}
if (var121){
{
var127 = modelize_class__ModelBuilder__resolve_mtype(var_modelbuilder, var_mmodule, var_mclassdef, var_ntype119);
}
{
{ /* Inline modelize_property#ASignature#ret_type= (self,var127) on <self:ASignature> */
self->attrs[COLOR_modelize_property__ASignature___ret_type].val = var127; /* _ret_type on <self:ASignature> */
RET_LABEL128:(void)0;
}
}
{
{ /* Inline modelize_property#ASignature#ret_type (self) on <self:ASignature> */
var131 = self->attrs[COLOR_modelize_property__ASignature___ret_type].val; /* _ret_type on <self:ASignature> */
var129 = var131;
RET_LABEL130:(void)0;
}
}
var132 = NULL;
if (var129 == NULL) {
var133 = 1; /* is null */
} else {
var133 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var129,var132) on <var129:nullable MType> */
var_other36 = var132;
{
{ /* Inline kernel#Object#is_same_instance (var129,var_other36) on <var129:nullable MType(MType)> */
var138 = var129 == var_other36;
var136 = var138;
goto RET_LABEL137;
RET_LABEL137:(void)0;
}
}
var134 = var136;
goto RET_LABEL135;
RET_LABEL135:(void)0;
}
var133 = var134;
}
if (var133){
var139 = 0;
var = var139;
goto RET_LABEL;
} else {
}
} else {
}
var140 = 1;
{
{ /* Inline modelize_property#ASignature#is_visited= (self,var140) on <self:ASignature> */
self->attrs[COLOR_modelize_property__ASignature___is_visited].s = var140; /* _is_visited on <self:ASignature> */
RET_LABEL141:(void)0;
}
}
var142 = 1;
var = var142;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#ASignature#visit_signature for (self: Object, ModelBuilder, MClassDef): Bool */
short int VIRTUAL_modelize_property__ASignature__visit_signature(val* self, val* p0, val* p1) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = modelize_property__ASignature__visit_signature(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AParam#mparameter= for (self: AParam, nullable MParameter) */
void modelize_property__AParam__mparameter_61d(val* self, val* p0) {
self->attrs[COLOR_modelize_property__AParam___mparameter].val = p0; /* _mparameter on <self:AParam> */
RET_LABEL:;
}
/* method modelize_property#AParam#mparameter= for (self: Object, nullable MParameter) */
void VIRTUAL_modelize_property__AParam__mparameter_61d(val* self, val* p0) {
{ /* Inline modelize_property#AParam#mparameter= (self,p0) on <self:Object(AParam)> */
self->attrs[COLOR_modelize_property__AParam___mparameter].val = p0; /* _mparameter on <self:Object(AParam)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method modelize_property#AMethPropdef#look_like_a_root_init for (self: AMethPropdef, ModelBuilder): Bool */
short int modelize_property__AMethPropdef__look_like_a_root_init(val* self, val* p0) {
short int var /* : Bool */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
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
short int var23 /* : Bool */;
val* var24 /* : nullable ASignature */;
val* var26 /* : nullable ASignature */;
val* var27 /* : ANodes[AParam] */;
val* var29 /* : ANodes[AParam] */;
long var30 /* : Int */;
long var31 /* : Int */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
val* var37 /* : nullable AVisibility */;
val* var39 /* : nullable AVisibility */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
static val* varonce;
val* var45 /* : String */;
char* var46 /* : NativeString */;
long var47 /* : Int */;
val* var48 /* : FlatString */;
val* var49 /* : nullable AAnnotation */;
val* var50 /* : null */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
val* var58 /* : nullable ANode */;
val* var60 /* : nullable ANode */;
val* var61 /* : nullable ANode */;
val* var63 /* : nullable ANode */;
short int var64 /* : Bool */;
int cltype65;
int idtype66;
const char* var_class_name67;
val* var_amod /* var amod: AModule */;
val* var68 /* : nullable AModuledecl */;
val* var70 /* : nullable AModuledecl */;
val* var_amoddecl /* var amoddecl: nullable AModuledecl */;
val* var71 /* : null */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
short int var77 /* : Bool */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
long var81 /* : Int */;
val* var82 /* : FlatString */;
val* var83 /* : nullable AAnnotation */;
val* var_old /* var old: nullable AAnnotation */;
val* var84 /* : null */;
short int var85 /* : Bool */;
short int var86 /* : Bool */;
short int var88 /* : Bool */;
short int var89 /* : Bool */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
short int var92 /* : Bool */;
var_modelbuilder = p0;
{
{ /* Inline parser_nodes#AMethPropdef#n_kwinit (self) on <self:AMethPropdef> */
var3 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwinit].val; /* _n_kwinit on <self:AMethPropdef> */
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
var14 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
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
var21 = ((short int (*)(val*, val*))(var12->class->vft[COLOR_kernel__Object___61d_61d]))(var12, var_other19) /* == on <var12:nullable AMethid(AMethid)>*/;
var20 = var21;
}
var22 = !var20;
var17 = var22;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var16 = var17;
}
if (var16){
var23 = 0;
var = var23;
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (self) on <self:AMethPropdef> */
var26 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
if (var24 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 500);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var24) on <var24:nullable ASignature> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1279);
show_backtrace(1);
}
var29 = var24->attrs[COLOR_parser_nodes__ASignature___n_params].val; /* _n_params on <var24:nullable ASignature> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1279);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
var30 = parser_nodes__ANodes__length(var27);
}
var31 = 0;
{
{ /* Inline kernel#Int#> (var30,var31) on <var30:Int> */
/* Covariant cast for argument 0 (i) <var31:Int> isa OTHER */
/* <var31:Int> isa OTHER */
var34 = 1; /* easy <var31:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var35 = var30 > var31;
var32 = var35;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
if (var32){
var36 = 0;
var = var36;
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#APropdef#n_visibility (self) on <self:AMethPropdef> */
var39 = self->attrs[COLOR_parser_nodes__APropdef___n_visibility].val; /* _n_visibility on <self:AMethPropdef> */
var37 = var39;
RET_LABEL38:(void)0;
}
}
/* <var37:nullable AVisibility> isa APublicVisibility */
cltype41 = type_parser_nodes__APublicVisibility.color;
idtype42 = type_parser_nodes__APublicVisibility.id;
if(var37 == NULL) {
var40 = 0;
} else {
if(cltype41 >= var37->type->table_size) {
var40 = 0;
} else {
var40 = var37->type->type_table[cltype41] == idtype42;
}
}
var43 = !var40;
if (var43){
var44 = 0;
var = var44;
goto RET_LABEL;
} else {
}
if (varonce) {
var45 = varonce;
} else {
var46 = "old_style_init";
var47 = 14;
var48 = string__NativeString__to_s_with_length(var46, var47);
var45 = var48;
varonce = var45;
}
{
var49 = annotation__Prod__get_single_annotation(self, var45, var_modelbuilder);
}
var50 = NULL;
if (var49 == NULL) {
var51 = 0; /* is null */
} else {
var51 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var49,var50) on <var49:nullable AAnnotation> */
var_other19 = var50;
{
var55 = ((short int (*)(val*, val*))(var49->class->vft[COLOR_kernel__Object___61d_61d]))(var49, var_other19) /* == on <var49:nullable AAnnotation(AAnnotation)>*/;
var54 = var55;
}
var56 = !var54;
var52 = var56;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
var51 = var52;
}
if (var51){
var57 = 0;
var = var57;
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ANode#parent (self) on <self:AMethPropdef> */
var60 = self->attrs[COLOR_parser_nodes__ANode___parent].val; /* _parent on <self:AMethPropdef> */
var58 = var60;
RET_LABEL59:(void)0;
}
}
if (var58 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 506);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#parent (var58) on <var58:nullable ANode> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 36);
show_backtrace(1);
}
var63 = var58->attrs[COLOR_parser_nodes__ANode___parent].val; /* _parent on <var58:nullable ANode> */
var61 = var63;
RET_LABEL62:(void)0;
}
}
/* <var61:nullable ANode> isa AModule */
cltype65 = type_parser_nodes__AModule.color;
idtype66 = type_parser_nodes__AModule.id;
if(var61 == NULL) {
var64 = 0;
} else {
if(cltype65 >= var61->type->table_size) {
var64 = 0;
} else {
var64 = var61->type->type_table[cltype65] == idtype66;
}
}
if (unlikely(!var64)) {
var_class_name67 = var61 == NULL ? "null" : var61->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AModule", var_class_name67);
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 506);
show_backtrace(1);
}
var_amod = var61;
{
{ /* Inline parser_nodes#AModule#n_moduledecl (var_amod) on <var_amod:AModule> */
var70 = var_amod->attrs[COLOR_parser_nodes__AModule___n_moduledecl].val; /* _n_moduledecl on <var_amod:AModule> */
var68 = var70;
RET_LABEL69:(void)0;
}
}
var_amoddecl = var68;
var71 = NULL;
if (var_amoddecl == NULL) {
var72 = 0; /* is null */
} else {
var72 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_amoddecl,var71) on <var_amoddecl:nullable AModuledecl> */
var_other19 = var71;
{
var76 = ((short int (*)(val*, val*))(var_amoddecl->class->vft[COLOR_kernel__Object___61d_61d]))(var_amoddecl, var_other19) /* == on <var_amoddecl:nullable AModuledecl(AModuledecl)>*/;
var75 = var76;
}
var77 = !var75;
var73 = var77;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
var72 = var73;
}
if (var72){
if (varonce78) {
var79 = varonce78;
} else {
var80 = "old_style_init";
var81 = 14;
var82 = string__NativeString__to_s_with_length(var80, var81);
var79 = var82;
varonce78 = var79;
}
{
var83 = annotation__Prod__get_single_annotation(var_amoddecl, var79, var_modelbuilder);
}
var_old = var83;
var84 = NULL;
if (var_old == NULL) {
var85 = 0; /* is null */
} else {
var85 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_old,var84) on <var_old:nullable AAnnotation> */
var_other19 = var84;
{
var89 = ((short int (*)(val*, val*))(var_old->class->vft[COLOR_kernel__Object___61d_61d]))(var_old, var_other19) /* == on <var_old:nullable AAnnotation(AAnnotation)>*/;
var88 = var89;
}
var90 = !var88;
var86 = var90;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
var85 = var86;
}
if (var85){
var91 = 0;
var = var91;
goto RET_LABEL;
} else {
}
} else {
}
var92 = 1;
var = var92;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#AMethPropdef#look_like_a_root_init for (self: Object, ModelBuilder): Bool */
short int VIRTUAL_modelize_property__AMethPropdef__look_like_a_root_init(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = modelize_property__AMethPropdef__look_like_a_root_init(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AMethPropdef#build_property for (self: AMethPropdef, ModelBuilder, MClassDef) */
void modelize_property__AMethPropdef__build_property(val* self, val* p0, val* p1) {
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
short int var13 /* : Bool */;
short int var_ /* var : Bool */;
val* var14 /* : null */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var_is_init /* var is_init: Bool */;
val* var21 /* : nullable AMethid */;
val* var23 /* : nullable AMethid */;
val* var_amethodid /* var amethodid: nullable AMethid */;
val* var24 /* : null */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var_other28 /* var other: nullable Object */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
static val* varonce;
val* var33 /* : String */;
char* var34 /* : NativeString */;
long var35 /* : Int */;
val* var36 /* : FlatString */;
val* var_name /* var name: String */;
val* var_name_node /* var name_node: ANode */;
val* var37 /* : null */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
long var47 /* : Int */;
val* var48 /* : FlatString */;
val* var49 /* : null */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
long var59 /* : Int */;
val* var60 /* : FlatString */;
short int var61 /* : Bool */;
int cltype;
int idtype;
val* var62 /* : TId */;
val* var64 /* : TId */;
val* var65 /* : String */;
val* var66 /* : String */;
short int var67 /* : Bool */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : NativeString */;
long var71 /* : Int */;
val* var72 /* : FlatString */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
short int var_75 /* var : Bool */;
val* var76 /* : nullable ASignature */;
val* var78 /* : nullable ASignature */;
val* var79 /* : ANodes[AParam] */;
val* var81 /* : ANodes[AParam] */;
long var82 /* : Int */;
long var83 /* : Int */;
short int var84 /* : Bool */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : NativeString */;
long var91 /* : Int */;
val* var92 /* : FlatString */;
val* var93 /* : null */;
val* var_mprop /* var mprop: nullable MMethod */;
short int var94 /* : Bool */;
short int var95 /* : Bool */;
short int var_96 /* var : Bool */;
val* var97 /* : nullable TKwredef */;
val* var99 /* : nullable TKwredef */;
val* var100 /* : null */;
short int var101 /* : Bool */;
short int var102 /* : Bool */;
short int var104 /* : Bool */;
short int var105 /* : Bool */;
short int var106 /* : Bool */;
val* var107 /* : nullable MProperty */;
short int var108 /* : Bool */;
int cltype109;
int idtype110;
const char* var_class_name;
short int var111 /* : Bool */;
val* var112 /* : null */;
short int var113 /* : Bool */;
short int var114 /* : Bool */;
short int var116 /* : Bool */;
short int var118 /* : Bool */;
short int var_119 /* var : Bool */;
short int var120 /* : Bool */;
val* var121 /* : nullable MMethod */;
val* var123 /* : nullable MMethod */;
val* var124 /* : nullable AExpr */;
val* var126 /* : nullable AExpr */;
val* var_nb /* var nb: nullable AExpr */;
short int var127 /* : Bool */;
short int var128 /* : Bool */;
short int var129 /* : Bool */;
int cltype130;
int idtype131;
short int var_132 /* var : Bool */;
val* var133 /* : ANodes[AExpr] */;
val* var135 /* : ANodes[AExpr] */;
short int var136 /* : Bool */;
short int var_137 /* var : Bool */;
val* var138 /* : nullable ADoc */;
val* var140 /* : nullable ADoc */;
val* var141 /* : null */;
short int var142 /* : Bool */;
short int var143 /* : Bool */;
short int var145 /* : Bool */;
short int var147 /* : Bool */;
static val* varonce148;
val* var149 /* : String */;
char* var150 /* : NativeString */;
long var151 /* : Int */;
val* var152 /* : FlatString */;
static val* varonce153;
val* var154 /* : String */;
char* var155 /* : NativeString */;
long var156 /* : Int */;
val* var157 /* : FlatString */;
val* var158 /* : Array[Object] */;
long var159 /* : Int */;
val* var160 /* : NativeArray[Object] */;
val* var161 /* : String */;
val* var162 /* : null */;
short int var163 /* : Bool */;
short int var164 /* : Bool */;
short int var166 /* : Bool */;
short int var168 /* : Bool */;
val* var169 /* : nullable AVisibility */;
val* var171 /* : nullable AVisibility */;
val* var172 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: MVisibility */;
val* var173 /* : MMethod */;
short int var174 /* : Bool */;
short int var175 /* : Bool */;
short int var_176 /* var : Bool */;
val* var177 /* : nullable MMethod */;
val* var179 /* : nullable MMethod */;
val* var180 /* : null */;
short int var181 /* : Bool */;
short int var182 /* : Bool */;
short int var184 /* : Bool */;
short int var186 /* : Bool */;
short int var188 /* : Bool */;
val* var191 /* : null */;
short int var192 /* : Bool */;
short int var193 /* : Bool */;
short int var195 /* : Bool */;
short int var196 /* : Bool */;
short int var197 /* : Bool */;
val* var199 /* : nullable ANode */;
val* var201 /* : nullable ANode */;
short int var202 /* : Bool */;
int cltype203;
int idtype204;
short int var205 /* : Bool */;
val* var207 /* : nullable TKwredef */;
val* var209 /* : nullable TKwredef */;
short int var210 /* : Bool */;
short int var211 /* : Bool */;
short int var212 /* : Bool */;
short int var213 /* : Bool */;
short int var214 /* : Bool */;
short int var216 /* : Bool */;
short int var217 /* : Bool */;
short int var_218 /* var : Bool */;
val* var219 /* : nullable TKwredef */;
val* var221 /* : nullable TKwredef */;
short int var222 /* : Bool */;
int cltype223;
int idtype224;
short int var225 /* : Bool */;
short int var226 /* : Bool */;
short int var227 /* : Bool */;
val* var228 /* : nullable AVisibility */;
val* var230 /* : nullable AVisibility */;
val* var231 /* : Map[MProperty, APropdef] */;
val* var233 /* : Map[MProperty, APropdef] */;
val* var234 /* : MMethodDef */;
val* var235 /* : Location */;
val* var237 /* : Location */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
short int var238 /* : Bool */;
int cltype239;
int idtype240;
const struct type* type_struct;
const char* var_class_name241;
short int var243 /* : Bool */;
int cltype244;
int idtype245;
const struct type* type_struct246;
const char* var_class_name247;
val* var248 /* : HashMap[MPropDef, APropdef] */;
val* var250 /* : HashMap[MPropDef, APropdef] */;
short int var251 /* : Bool */;
val* var252 /* : ToolContext */;
val* var254 /* : ToolContext */;
static val* varonce255;
val* var256 /* : String */;
char* var257 /* : NativeString */;
long var258 /* : Int */;
val* var259 /* : FlatString */;
val* var260 /* : String */;
val* var261 /* : Array[Object] */;
long var262 /* : Int */;
val* var263 /* : NativeArray[Object] */;
val* var264 /* : String */;
long var265 /* : Int */;
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
var_modelbuilder = p0;
var_mclassdef = p1;
{
{ /* Inline parser_nodes#AMethPropdef#n_kwinit (self) on <self:AMethPropdef> */
var2 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwinit].val; /* _n_kwinit on <self:AMethPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_n_kwinit = var;
{
{ /* Inline parser_nodes#AMethPropdef#n_kwnew (self) on <self:AMethPropdef> */
var5 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwnew].val; /* _n_kwnew on <self:AMethPropdef> */
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
var12 = ((short int (*)(val*, val*))(var_n_kwinit->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_kwinit, var_other) /* == on <var_n_kwinit:nullable TKwinit(TKwinit)>*/;
var11 = var12;
}
var13 = !var11;
var9 = var13;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
var_ = var8;
if (var8){
var6 = var_;
} else {
var14 = NULL;
if (var_n_kwnew == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwnew,var14) on <var_n_kwnew:nullable TKwnew> */
var_other = var14;
{
var19 = ((short int (*)(val*, val*))(var_n_kwnew->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_kwnew, var_other) /* == on <var_n_kwnew:nullable TKwnew(TKwnew)>*/;
var18 = var19;
}
var20 = !var18;
var16 = var20;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var15 = var16;
}
var6 = var15;
}
var_is_init = var6;
{
{ /* Inline parser_nodes#AMethPropdef#n_methid (self) on <self:AMethPropdef> */
var23 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
var_amethodid = var21;
var24 = NULL;
if (var_amethodid == NULL) {
var25 = 1; /* is null */
} else {
var25 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_amethodid,var24) on <var_amethodid:nullable AMethid> */
var_other28 = var24;
{
{ /* Inline kernel#Object#is_same_instance (var_amethodid,var_other28) on <var_amethodid:nullable AMethid(AMethid)> */
var31 = var_amethodid == var_other28;
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var26 = var29;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
var25 = var26;
}
if (var25){
var32 = !var_is_init;
if (var32){
if (varonce) {
var33 = varonce;
} else {
var34 = "main";
var35 = 4;
var36 = string__NativeString__to_s_with_length(var34, var35);
var33 = var36;
varonce = var33;
}
var_name = var33;
var_name_node = self;
} else {
var37 = NULL;
if (var_n_kwinit == NULL) {
var38 = 0; /* is null */
} else {
var38 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwinit,var37) on <var_n_kwinit:nullable TKwinit> */
var_other = var37;
{
var42 = ((short int (*)(val*, val*))(var_n_kwinit->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_kwinit, var_other) /* == on <var_n_kwinit:nullable TKwinit(TKwinit)>*/;
var41 = var42;
}
var43 = !var41;
var39 = var43;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
var38 = var39;
}
if (var38){
if (varonce44) {
var45 = varonce44;
} else {
var46 = "init";
var47 = 4;
var48 = string__NativeString__to_s_with_length(var46, var47);
var45 = var48;
varonce44 = var45;
}
var_name = var45;
var_name_node = var_n_kwinit;
} else {
var49 = NULL;
if (var_n_kwnew == NULL) {
var50 = 0; /* is null */
} else {
var50 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwnew,var49) on <var_n_kwnew:nullable TKwnew> */
var_other = var49;
{
var54 = ((short int (*)(val*, val*))(var_n_kwnew->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_kwnew, var_other) /* == on <var_n_kwnew:nullable TKwnew(TKwnew)>*/;
var53 = var54;
}
var55 = !var53;
var51 = var55;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
var50 = var51;
}
if (var50){
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
var_name_node = var_n_kwnew;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 535);
show_backtrace(1);
}
}
}
} else {
/* <var_amethodid:nullable AMethid(AMethid)> isa AIdMethid */
cltype = type_parser_nodes__AIdMethid.color;
idtype = type_parser_nodes__AIdMethid.id;
if(cltype >= var_amethodid->type->table_size) {
var61 = 0;
} else {
var61 = var_amethodid->type->type_table[cltype] == idtype;
}
if (var61){
{
{ /* Inline parser_nodes#AIdMethid#n_id (var_amethodid) on <var_amethodid:nullable AMethid(AIdMethid)> */
var64 = var_amethodid->attrs[COLOR_parser_nodes__AIdMethid___n_id].val; /* _n_id on <var_amethodid:nullable AMethid(AIdMethid)> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1160);
show_backtrace(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
var65 = lexer_work__Token__text(var62);
}
var_name = var65;
var_name_node = var_amethodid;
} else {
{
var66 = parser_work__Prod__collect_text(var_amethodid);
}
var_name = var66;
var_name_node = var_amethodid;
if (varonce68) {
var69 = varonce68;
} else {
var70 = "-";
var71 = 1;
var72 = string__NativeString__to_s_with_length(var70, var71);
var69 = var72;
varonce68 = var69;
}
{
var74 = string__FlatString___61d_61d(var_name, var69);
var73 = var74;
}
var_75 = var73;
if (var73){
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (self) on <self:AMethPropdef> */
var78 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var76 = var78;
RET_LABEL77:(void)0;
}
}
if (var76 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 545);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var76) on <var76:nullable ASignature> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1279);
show_backtrace(1);
}
var81 = var76->attrs[COLOR_parser_nodes__ASignature___n_params].val; /* _n_params on <var76:nullable ASignature> */
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1279);
show_backtrace(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
{
var82 = parser_nodes__ANodes__length(var79);
}
var83 = 0;
{
{ /* Inline kernel#Int#== (var82,var83) on <var82:Int> */
var87 = var82 == var83;
var85 = var87;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
var84 = var85;
}
var67 = var84;
} else {
var67 = var_75;
}
if (var67){
if (varonce88) {
var89 = varonce88;
} else {
var90 = "unary -";
var91 = 7;
var92 = string__NativeString__to_s_with_length(var90, var91);
var89 = var92;
varonce88 = var89;
}
var_name = var89;
} else {
}
}
}
var93 = NULL;
var_mprop = var93;
var95 = !var_is_init;
var_96 = var95;
if (var95){
var94 = var_96;
} else {
{
{ /* Inline parser_nodes#APropdef#n_kwredef (self) on <self:AMethPropdef> */
var99 = self->attrs[COLOR_parser_nodes__APropdef___n_kwredef].val; /* _n_kwredef on <self:AMethPropdef> */
var97 = var99;
RET_LABEL98:(void)0;
}
}
var100 = NULL;
if (var97 == NULL) {
var101 = 0; /* is null */
} else {
var101 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var97,var100) on <var97:nullable TKwredef> */
var_other = var100;
{
var105 = ((short int (*)(val*, val*))(var97->class->vft[COLOR_kernel__Object___61d_61d]))(var97, var_other) /* == on <var97:nullable TKwredef(TKwredef)>*/;
var104 = var105;
}
var106 = !var104;
var102 = var106;
goto RET_LABEL103;
RET_LABEL103:(void)0;
}
var101 = var102;
}
var94 = var101;
}
if (var94){
{
var107 = modelbuilder__ModelBuilder__try_get_mproperty_by_name(var_modelbuilder, var_name_node, var_mclassdef, var_name);
}
/* <var107:nullable MProperty> isa nullable MMethod */
cltype109 = type_nullable_model__MMethod.color;
idtype110 = type_nullable_model__MMethod.id;
if(var107 == NULL) {
var108 = 1;
} else {
if(cltype109 >= var107->type->table_size) {
var108 = 0;
} else {
var108 = var107->type->type_table[cltype109] == idtype110;
}
}
if (unlikely(!var108)) {
var_class_name = var107 == NULL ? "null" : var107->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MMethod", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 551);
show_backtrace(1);
}
var_mprop = var107;
} else {
}
var112 = NULL;
if (var_mprop == NULL) {
var113 = 1; /* is null */
} else {
var113 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mprop,var112) on <var_mprop:nullable MMethod> */
var_other28 = var112;
{
{ /* Inline kernel#Object#is_same_instance (var_mprop,var_other28) on <var_mprop:nullable MMethod(MMethod)> */
var118 = var_mprop == var_other28;
var116 = var118;
goto RET_LABEL117;
RET_LABEL117:(void)0;
}
}
var114 = var116;
goto RET_LABEL115;
RET_LABEL115:(void)0;
}
var113 = var114;
}
var_119 = var113;
if (var113){
{
var120 = modelize_property__AMethPropdef__look_like_a_root_init(self, var_modelbuilder);
}
var111 = var120;
} else {
var111 = var_119;
}
if (var111){
{
{ /* Inline modelize_property#ModelBuilder#the_root_init_mmethod (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var123 = var_modelbuilder->attrs[COLOR_modelize_property__ModelBuilder___the_root_init_mmethod].val; /* _the_root_init_mmethod on <var_modelbuilder:ModelBuilder> */
var121 = var123;
RET_LABEL122:(void)0;
}
}
var_mprop = var121;
{
{ /* Inline parser_nodes#AMethPropdef#n_block (self) on <self:AMethPropdef> */
var126 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:AMethPropdef> */
var124 = var126;
RET_LABEL125:(void)0;
}
}
var_nb = var124;
/* <var_nb:nullable AExpr> isa ABlockExpr */
cltype130 = type_parser_nodes__ABlockExpr.color;
idtype131 = type_parser_nodes__ABlockExpr.id;
if(var_nb == NULL) {
var129 = 0;
} else {
if(cltype130 >= var_nb->type->table_size) {
var129 = 0;
} else {
var129 = var_nb->type->type_table[cltype130] == idtype131;
}
}
var_132 = var129;
if (var129){
{
{ /* Inline parser_nodes#ABlockExpr#n_expr (var_nb) on <var_nb:nullable AExpr(ABlockExpr)> */
var135 = var_nb->attrs[COLOR_parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <var_nb:nullable AExpr(ABlockExpr)> */
if (unlikely(var135 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1321);
show_backtrace(1);
}
var133 = var135;
RET_LABEL134:(void)0;
}
}
{
var136 = parser_nodes__ANodes__is_empty(var133);
}
var128 = var136;
} else {
var128 = var_132;
}
var_137 = var128;
if (var128){
{
{ /* Inline parser_nodes#APropdef#n_doc (self) on <self:AMethPropdef> */
var140 = self->attrs[COLOR_parser_nodes__APropdef___n_doc].val; /* _n_doc on <self:AMethPropdef> */
var138 = var140;
RET_LABEL139:(void)0;
}
}
var141 = NULL;
if (var138 == NULL) {
var142 = 1; /* is null */
} else {
var142 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var138,var141) on <var138:nullable ADoc> */
var_other28 = var141;
{
{ /* Inline kernel#Object#is_same_instance (var138,var_other28) on <var138:nullable ADoc(ADoc)> */
var147 = var138 == var_other28;
var145 = var147;
goto RET_LABEL146;
RET_LABEL146:(void)0;
}
}
var143 = var145;
goto RET_LABEL144;
RET_LABEL144:(void)0;
}
var142 = var143;
}
var127 = var142;
} else {
var127 = var_137;
}
if (var127){
if (varonce148) {
var149 = varonce148;
} else {
var150 = "useless-init";
var151 = 12;
var152 = string__NativeString__to_s_with_length(var150, var151);
var149 = var152;
varonce148 = var149;
}
if (varonce153) {
var154 = varonce153;
} else {
var155 = "Warning: useless empty init in ";
var156 = 31;
var157 = string__NativeString__to_s_with_length(var155, var156);
var154 = var157;
varonce153 = var154;
}
var158 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var158 = array_instance Array[Object] */
var159 = 2;
var160 = NEW_array__NativeArray(var159, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var160)->values[0] = (val*) var154;
((struct instance_array__NativeArray*)var160)->values[1] = (val*) var_mclassdef;
{
((void (*)(val*, val*, long))(var158->class->vft[COLOR_array__Array__with_native]))(var158, var160, var159) /* with_native on <var158:Array[Object]>*/;
}
}
{
var161 = ((val* (*)(val*))(var158->class->vft[COLOR_string__Object__to_s]))(var158) /* to_s on <var158:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__advice(var_modelbuilder, self, var149, var161); /* Direct call modelbuilder#ModelBuilder#advice on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
} else {
}
var162 = NULL;
if (var_mprop == NULL) {
var163 = 1; /* is null */
} else {
var163 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mprop,var162) on <var_mprop:nullable MMethod> */
var_other28 = var162;
{
{ /* Inline kernel#Object#is_same_instance (var_mprop,var_other28) on <var_mprop:nullable MMethod(MMethod)> */
var168 = var_mprop == var_other28;
var166 = var168;
goto RET_LABEL167;
RET_LABEL167:(void)0;
}
}
var164 = var166;
goto RET_LABEL165;
RET_LABEL165:(void)0;
}
var163 = var164;
}
if (var163){
{
{ /* Inline parser_nodes#APropdef#n_visibility (self) on <self:AMethPropdef> */
var171 = self->attrs[COLOR_parser_nodes__APropdef___n_visibility].val; /* _n_visibility on <self:AMethPropdef> */
var169 = var171;
RET_LABEL170:(void)0;
}
}
{
var172 = modelize_property__APropdef__new_property_visibility(self, var_modelbuilder, var_mclassdef, var169);
}
var_mvisibility = var172;
var173 = NEW_model__MMethod(&type_model__MMethod);
{
model__MMethod__init(var173, var_mclassdef, var_name, var_mvisibility); /* Direct call model#MMethod#init on <var173:MMethod>*/
}
var_mprop = var173;
{
var175 = modelize_property__AMethPropdef__look_like_a_root_init(self, var_modelbuilder);
}
var_176 = var175;
if (var175){
{
{ /* Inline modelize_property#ModelBuilder#the_root_init_mmethod (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var179 = var_modelbuilder->attrs[COLOR_modelize_property__ModelBuilder___the_root_init_mmethod].val; /* _the_root_init_mmethod on <var_modelbuilder:ModelBuilder> */
var177 = var179;
RET_LABEL178:(void)0;
}
}
var180 = NULL;
if (var177 == NULL) {
var181 = 1; /* is null */
} else {
var181 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var177,var180) on <var177:nullable MMethod> */
var_other28 = var180;
{
{ /* Inline kernel#Object#is_same_instance (var177,var_other28) on <var177:nullable MMethod(MMethod)> */
var186 = var177 == var_other28;
var184 = var186;
goto RET_LABEL185;
RET_LABEL185:(void)0;
}
}
var182 = var184;
goto RET_LABEL183;
RET_LABEL183:(void)0;
}
var181 = var182;
}
var174 = var181;
} else {
var174 = var_176;
}
if (var174){
{
{ /* Inline modelize_property#ModelBuilder#the_root_init_mmethod= (var_modelbuilder,var_mprop) on <var_modelbuilder:ModelBuilder> */
var_modelbuilder->attrs[COLOR_modelize_property__ModelBuilder___the_root_init_mmethod].val = var_mprop; /* _the_root_init_mmethod on <var_modelbuilder:ModelBuilder> */
RET_LABEL187:(void)0;
}
}
var188 = 1;
{
{ /* Inline model#MMethod#is_root_init= (var_mprop,var188) on <var_mprop:nullable MMethod(MMethod)> */
var_mprop->attrs[COLOR_model__MMethod___is_root_init].s = var188; /* _is_root_init on <var_mprop:nullable MMethod(MMethod)> */
RET_LABEL189:(void)0;
}
}
} else {
}
{
{ /* Inline model#MMethod#is_init= (var_mprop,var_is_init) on <var_mprop:nullable MMethod(MMethod)> */
var_mprop->attrs[COLOR_model__MMethod___is_init].s = var_is_init; /* _is_init on <var_mprop:nullable MMethod(MMethod)> */
RET_LABEL190:(void)0;
}
}
var191 = NULL;
if (var_n_kwnew == NULL) {
var192 = 0; /* is null */
} else {
var192 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwnew,var191) on <var_n_kwnew:nullable TKwnew> */
var_other = var191;
{
var196 = ((short int (*)(val*, val*))(var_n_kwnew->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_kwnew, var_other) /* == on <var_n_kwnew:nullable TKwnew(TKwnew)>*/;
var195 = var196;
}
var197 = !var195;
var193 = var197;
goto RET_LABEL194;
RET_LABEL194:(void)0;
}
var192 = var193;
}
{
{ /* Inline model#MMethod#is_new= (var_mprop,var192) on <var_mprop:nullable MMethod(MMethod)> */
var_mprop->attrs[COLOR_model__MMethod___is_new].s = var192; /* _is_new on <var_mprop:nullable MMethod(MMethod)> */
RET_LABEL198:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#parent (self) on <self:AMethPropdef> */
var201 = self->attrs[COLOR_parser_nodes__ANode___parent].val; /* _parent on <self:AMethPropdef> */
var199 = var201;
RET_LABEL200:(void)0;
}
}
/* <var199:nullable ANode> isa ATopClassdef */
cltype203 = type_parser_nodes__ATopClassdef.color;
idtype204 = type_parser_nodes__ATopClassdef.id;
if(var199 == NULL) {
var202 = 0;
} else {
if(cltype203 >= var199->type->table_size) {
var202 = 0;
} else {
var202 = var199->type->type_table[cltype203] == idtype204;
}
}
if (var202){
var205 = 1;
{
{ /* Inline model#MMethod#is_toplevel= (var_mprop,var205) on <var_mprop:nullable MMethod(MMethod)> */
var_mprop->attrs[COLOR_model__MMethod___is_toplevel].s = var205; /* _is_toplevel on <var_mprop:nullable MMethod(MMethod)> */
RET_LABEL206:(void)0;
}
}
} else {
}
{
{ /* Inline parser_nodes#APropdef#n_kwredef (self) on <self:AMethPropdef> */
var209 = self->attrs[COLOR_parser_nodes__APropdef___n_kwredef].val; /* _n_kwredef on <self:AMethPropdef> */
var207 = var209;
RET_LABEL208:(void)0;
}
}
var210 = 0;
{
var211 = modelize_property__APropdef__check_redef_keyword(self, var_modelbuilder, var_mclassdef, var207, var210, var_mprop);
}
var212 = !var211;
if (var212){
goto RET_LABEL;
} else {
}
} else {
{
{ /* Inline model#MMethod#is_root_init (var_mprop) on <var_mprop:nullable MMethod(MMethod)> */
var216 = var_mprop->attrs[COLOR_model__MMethod___is_root_init].s; /* _is_root_init on <var_mprop:nullable MMethod(MMethod)> */
var214 = var216;
RET_LABEL215:(void)0;
}
}
var217 = !var214;
var_218 = var217;
if (var217){
{
{ /* Inline parser_nodes#APropdef#n_kwredef (self) on <self:AMethPropdef> */
var221 = self->attrs[COLOR_parser_nodes__APropdef___n_kwredef].val; /* _n_kwredef on <self:AMethPropdef> */
var219 = var221;
RET_LABEL220:(void)0;
}
}
/* <self:AMethPropdef> isa AMainMethPropdef */
cltype223 = type_parser_nodes__AMainMethPropdef.color;
idtype224 = type_parser_nodes__AMainMethPropdef.id;
if(cltype223 >= self->type->table_size) {
var222 = 0;
} else {
var222 = self->type->type_table[cltype223] == idtype224;
}
var225 = !var222;
{
var226 = modelize_property__APropdef__check_redef_keyword(self, var_modelbuilder, var_mclassdef, var219, var225, var_mprop);
}
var227 = !var226;
var213 = var227;
} else {
var213 = var_218;
}
if (var213){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#APropdef#n_visibility (self) on <self:AMethPropdef> */
var230 = self->attrs[COLOR_parser_nodes__APropdef___n_visibility].val; /* _n_visibility on <self:AMethPropdef> */
var228 = var230;
RET_LABEL229:(void)0;
}
}
{
modelize_property__APropdef__check_redef_property_visibility(self, var_modelbuilder, var228, var_mprop); /* Direct call modelize_property#APropdef#check_redef_property_visibility on <self:AMethPropdef>*/
}
}
{
{ /* Inline modelize_property#MClassDef#mprop2npropdef (var_mclassdef) on <var_mclassdef:MClassDef> */
var233 = var_mclassdef->attrs[COLOR_modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <var_mclassdef:MClassDef> */
if (unlikely(var233 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 310);
show_backtrace(1);
}
var231 = var233;
RET_LABEL232:(void)0;
}
}
{
((void (*)(val*, val*, val*))(var231->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var231, var_mprop, self) /* []= on <var231:Map[MProperty, APropdef]>*/;
}
var234 = NEW_model__MMethodDef(&type_model__MMethodDef);
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AMethPropdef> */
var237 = self->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <self:AMethPropdef> */
if (unlikely(var237 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 23);
show_backtrace(1);
}
var235 = var237;
RET_LABEL236:(void)0;
}
}
{
model__MMethodDef__init(var234, var_mclassdef, var_mprop, var235); /* Direct call model#MMethodDef#init on <var234:MMethodDef>*/
}
var_mpropdef = var234;
{
modelize_property__APropdef__set_doc(self, var_mpropdef, var_modelbuilder); /* Direct call modelize_property#APropdef#set_doc on <self:AMethPropdef>*/
}
/* <var_mpropdef:MMethodDef> isa nullable MPROPDEF */
type_struct = self->type->resolution_table->types[COLOR_nullable_parser_nodes__APropdef_VTMPROPDEF];
cltype239 = type_struct->color;
idtype240 = type_struct->id;
if(cltype239 >= var_mpropdef->type->table_size) {
var238 = 0;
} else {
var238 = var_mpropdef->type->type_table[cltype239] == idtype240;
}
if (unlikely(!var238)) {
var_class_name241 = var_mpropdef == NULL ? "null" : var_mpropdef->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name241);
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 580);
show_backtrace(1);
}
{
{ /* Inline modelize_property#APropdef#mpropdef= (self,var_mpropdef) on <self:AMethPropdef> */
/* Covariant cast for argument 0 (mpropdef) <var_mpropdef:MMethodDef> isa nullable MPROPDEF */
/* <var_mpropdef:MMethodDef> isa nullable MPROPDEF */
type_struct246 = self->type->resolution_table->types[COLOR_nullable_parser_nodes__APropdef_VTMPROPDEF];
cltype244 = type_struct246->color;
idtype245 = type_struct246->id;
if(cltype244 >= var_mpropdef->type->table_size) {
var243 = 0;
} else {
var243 = var_mpropdef->type->type_table[cltype244] == idtype245;
}
if (unlikely(!var243)) {
var_class_name247 = var_mpropdef == NULL ? "null" : var_mpropdef->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name247);
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 319);
show_backtrace(1);
}
self->attrs[COLOR_modelize_property__APropdef___mpropdef].val = var_mpropdef; /* _mpropdef on <self:AMethPropdef> */
RET_LABEL242:(void)0;
}
}
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var250 = var_modelbuilder->attrs[COLOR_modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var250 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 39);
show_backtrace(1);
}
var248 = var250;
RET_LABEL249:(void)0;
}
}
{
hash_collection__HashMap___91d_93d_61d(var248, var_mpropdef, self); /* Direct call hash_collection#HashMap#[]= on <var248:HashMap[MPropDef, APropdef]>*/
}
{
var251 = model__MPropDef__is_intro(var_mpropdef);
}
if (var251){
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var254 = var_modelbuilder->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var_modelbuilder:ModelBuilder> */
if (unlikely(var254 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var252 = var254;
RET_LABEL253:(void)0;
}
}
if (varonce255) {
var256 = varonce255;
} else {
var257 = " introduces new method ";
var258 = 23;
var259 = string__NativeString__to_s_with_length(var257, var258);
var256 = var259;
varonce255 = var256;
}
{
var260 = model__MProperty__full_name(var_mprop);
}
var261 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var261 = array_instance Array[Object] */
var262 = 3;
var263 = NEW_array__NativeArray(var262, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var263)->values[0] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var263)->values[1] = (val*) var256;
((struct instance_array__NativeArray*)var263)->values[2] = (val*) var260;
{
((void (*)(val*, val*, long))(var261->class->vft[COLOR_array__Array__with_native]))(var261, var263, var262) /* with_native on <var261:Array[Object]>*/;
}
}
{
var264 = ((val* (*)(val*))(var261->class->vft[COLOR_string__Object__to_s]))(var261) /* to_s on <var261:Array[Object]>*/;
}
var265 = 3;
{
toolcontext__ToolContext__info(var252, var264, var265); /* Direct call toolcontext#ToolContext#info on <var252:ToolContext>*/
}
} else {
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var268 = var_modelbuilder->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var_modelbuilder:ModelBuilder> */
if (unlikely(var268 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var266 = var268;
RET_LABEL267:(void)0;
}
}
if (varonce269) {
var270 = varonce269;
} else {
var271 = " redefines method ";
var272 = 18;
var273 = string__NativeString__to_s_with_length(var271, var272);
var270 = var273;
varonce269 = var270;
}
{
var274 = model__MProperty__full_name(var_mprop);
}
var275 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var275 = array_instance Array[Object] */
var276 = 3;
var277 = NEW_array__NativeArray(var276, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var277)->values[0] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var277)->values[1] = (val*) var270;
((struct instance_array__NativeArray*)var277)->values[2] = (val*) var274;
{
((void (*)(val*, val*, long))(var275->class->vft[COLOR_array__Array__with_native]))(var275, var277, var276) /* with_native on <var275:Array[Object]>*/;
}
}
{
var278 = ((val* (*)(val*))(var275->class->vft[COLOR_string__Object__to_s]))(var275) /* to_s on <var275:Array[Object]>*/;
}
var279 = 3;
{
toolcontext__ToolContext__info(var266, var278, var279); /* Direct call toolcontext#ToolContext#info on <var266:ToolContext>*/
}
}
RET_LABEL:;
}
/* method modelize_property#AMethPropdef#build_property for (self: Object, ModelBuilder, MClassDef) */
void VIRTUAL_modelize_property__AMethPropdef__build_property(val* self, val* p0, val* p1) {
modelize_property__AMethPropdef__build_property(self, p0, p1); /* Direct call modelize_property#AMethPropdef#build_property on <self:Object(AMethPropdef)>*/
RET_LABEL:;
}
/* method modelize_property#AMethPropdef#build_signature for (self: AMethPropdef, ModelBuilder) */
void modelize_property__AMethPropdef__build_signature(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var /* : nullable MPropDef */;
val* var2 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MMethodDef */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : MClassDef */;
val* var12 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var13 /* : MModule */;
val* var15 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var16 /* : nullable ASignature */;
val* var18 /* : nullable ASignature */;
val* var_nsig /* var nsig: nullable ASignature */;
short int var19 /* : Bool */;
val* var20 /* : MProperty */;
val* var22 /* : MProperty */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var_ /* var : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : MClass */;
val* var30 /* : MClass */;
val* var31 /* : nullable MMethodDef */;
val* var33 /* : nullable MMethodDef */;
val* var_root_init /* var root_init: nullable MMethodDef */;
val* var34 /* : null */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
val* var_other38 /* var other: nullable Object */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
val* var42 /* : nullable MSignature */;
val* var44 /* : nullable MSignature */;
val* var46 /* : Array[MProperty] */;
val* var48 /* : Array[MProperty] */;
short int var49 /* : Bool */;
val* var50 /* : Array[MProperty] */;
val* var52 /* : Array[MProperty] */;
val* var53 /* : Array[MProperty] */;
val* var55 /* : Array[MProperty] */;
val* var56 /* : Array[String] */;
val* var_param_names /* var param_names: Array[String] */;
val* var57 /* : Array[MType] */;
val* var_param_types /* var param_types: Array[MType] */;
long var58 /* : Int */;
long var59 /* : Int */;
long var61 /* : Int */;
long var_vararg_rank /* var vararg_rank: Int */;
val* var62 /* : null */;
val* var_ret_type /* var ret_type: nullable MType */;
val* var63 /* : null */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
short int var71 /* : Bool */;
val* var72 /* : Array[String] */;
val* var74 /* : Array[String] */;
val* var75 /* : Array[MType] */;
val* var77 /* : Array[MType] */;
long var78 /* : Int */;
long var80 /* : Int */;
val* var81 /* : nullable MType */;
val* var83 /* : nullable MType */;
val* var84 /* : null */;
val* var_msignature /* var msignature: nullable MSignature */;
short int var85 /* : Bool */;
short int var86 /* : Bool */;
val* var87 /* : MProperty */;
val* var89 /* : MProperty */;
val* var90 /* : MPropDef */;
val* var92 /* : MPropDef */;
val* var93 /* : nullable MSignature */;
val* var95 /* : nullable MSignature */;
val* var96 /* : null */;
short int var97 /* : Bool */;
short int var98 /* : Bool */;
short int var100 /* : Bool */;
short int var102 /* : Bool */;
long var103 /* : Int */;
long var105 /* : Int */;
long var106 /* : Int */;
short int var107 /* : Bool */;
short int var108 /* : Bool */;
short int var110 /* : Bool */;
short int var111 /* : Bool */;
val* var112 /* : null */;
short int var113 /* : Bool */;
short int var114 /* : Bool */;
short int var116 /* : Bool */;
short int var117 /* : Bool */;
short int var118 /* : Bool */;
val* var_node /* var node: ANode */;
static val* varonce;
val* var119 /* : String */;
char* var120 /* : NativeString */;
long var121 /* : Int */;
val* var122 /* : FlatString */;
static val* varonce123;
val* var124 /* : String */;
char* var125 /* : NativeString */;
long var126 /* : Int */;
val* var127 /* : FlatString */;
val* var128 /* : MProperty */;
val* var130 /* : MProperty */;
val* var131 /* : MPropDef */;
val* var133 /* : MPropDef */;
static val* varonce134;
val* var135 /* : String */;
char* var136 /* : NativeString */;
long var137 /* : Int */;
val* var138 /* : FlatString */;
long var139 /* : Int */;
long var141 /* : Int */;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : NativeString */;
long var145 /* : Int */;
val* var146 /* : FlatString */;
long var147 /* : Int */;
static val* varonce148;
val* var149 /* : String */;
char* var150 /* : NativeString */;
long var151 /* : Int */;
val* var152 /* : FlatString */;
val* var153 /* : Array[Object] */;
long var154 /* : Int */;
val* var155 /* : NativeArray[Object] */;
val* var156 /* : Object */;
val* var157 /* : Object */;
val* var158 /* : String */;
short int var159 /* : Bool */;
val* var160 /* : MProperty */;
val* var162 /* : MProperty */;
short int var163 /* : Bool */;
short int var165 /* : Bool */;
short int var_166 /* var : Bool */;
val* var167 /* : MProperty */;
val* var169 /* : MProperty */;
short int var170 /* : Bool */;
short int var172 /* : Bool */;
short int var173 /* : Bool */;
val* var174 /* : Array[MClassType] */;
val* var176 /* : Array[MClassType] */;
val* var_177 /* var : Array[MClassType] */;
val* var178 /* : ArrayIterator[nullable Object] */;
val* var_179 /* var : ArrayIterator[MClassType] */;
short int var180 /* : Bool */;
val* var181 /* : nullable Object */;
val* var_msupertype /* var msupertype: MClassType */;
val* var182 /* : MClassType */;
val* var184 /* : MClassType */;
val* var185 /* : MClassType */;
val* var186 /* : MProperty */;
val* var188 /* : MProperty */;
val* var189 /* : String */;
val* var191 /* : String */;
val* var192 /* : nullable MProperty */;
val* var_candidate /* var candidate: nullable MProperty */;
val* var193 /* : null */;
short int var194 /* : Bool */;
short int var195 /* : Bool */;
short int var197 /* : Bool */;
short int var198 /* : Bool */;
short int var199 /* : Bool */;
val* var200 /* : null */;
short int var201 /* : Bool */;
short int var202 /* : Bool */;
short int var204 /* : Bool */;
short int var206 /* : Bool */;
val* var207 /* : MPropDef */;
val* var209 /* : MPropDef */;
short int var210 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var211 /* : nullable MSignature */;
val* var213 /* : nullable MSignature */;
short int var215 /* : Bool */;
short int var216 /* : Bool */;
short int var217 /* : Bool */;
val* var218 /* : null */;
short int var219 /* : Bool */;
short int var220 /* : Bool */;
short int var222 /* : Bool */;
short int var223 /* : Bool */;
short int var224 /* : Bool */;
short int var_225 /* var : Bool */;
long var226 /* : Int */;
long var228 /* : Int */;
long var229 /* : Int */;
long var231 /* : Int */;
short int var232 /* : Bool */;
short int var233 /* : Bool */;
short int var235 /* : Bool */;
short int var236 /* : Bool */;
short int var_237 /* var : Bool */;
long var238 /* : Int */;
long var240 /* : Int */;
long var241 /* : Int */;
short int var242 /* : Bool */;
short int var243 /* : Bool */;
short int var245 /* : Bool */;
short int var_246 /* var : Bool */;
long var247 /* : Int */;
long var249 /* : Int */;
long var250 /* : Int */;
short int var251 /* : Bool */;
short int var252 /* : Bool */;
short int var254 /* : Bool */;
val* var255 /* : Array[MType] */;
val* var256 /* : Array[MParameter] */;
val* var258 /* : Array[MParameter] */;
val* var_259 /* var : Array[MParameter] */;
val* var260 /* : ArrayIterator[nullable Object] */;
val* var_261 /* var : ArrayIterator[MParameter] */;
short int var262 /* : Bool */;
val* var263 /* : nullable Object */;
val* var_mparameter /* var mparameter: MParameter */;
val* var264 /* : MType */;
val* var266 /* : MType */;
long var269 /* : Int */;
long var271 /* : Int */;
short int var272 /* : Bool */;
val* var273 /* : null */;
short int var274 /* : Bool */;
short int var275 /* : Bool */;
short int var277 /* : Bool */;
short int var278 /* : Bool */;
short int var279 /* : Bool */;
short int var_280 /* var : Bool */;
val* var281 /* : null */;
short int var282 /* : Bool */;
short int var283 /* : Bool */;
short int var285 /* : Bool */;
short int var287 /* : Bool */;
val* var288 /* : nullable MType */;
val* var290 /* : nullable MType */;
long var291 /* : Int */;
long var293 /* : Int */;
long var294 /* : Int */;
long var296 /* : Int */;
short int var297 /* : Bool */;
short int var298 /* : Bool */;
short int var300 /* : Bool */;
short int var301 /* : Bool */;
val* var302 /* : ANodes[AParam] */;
val* var304 /* : ANodes[AParam] */;
long var305 /* : Int */;
long var307 /* : Int */;
val* var308 /* : ANode */;
static val* varonce309;
val* var310 /* : String */;
char* var311 /* : NativeString */;
long var312 /* : Int */;
val* var313 /* : FlatString */;
long var314 /* : Int */;
long var316 /* : Int */;
val* var317 /* : nullable Object */;
static val* varonce318;
val* var319 /* : String */;
char* var320 /* : NativeString */;
long var321 /* : Int */;
val* var322 /* : FlatString */;
val* var323 /* : Array[Object] */;
long var324 /* : Int */;
val* var325 /* : NativeArray[Object] */;
val* var326 /* : String */;
val* var327 /* : Array[MParameter] */;
val* var_mparameters /* var mparameters: Array[MParameter] */;
long var328 /* : Int */;
long var_i /* var i: Int */;
long var329 /* : Int */;
long var331 /* : Int */;
long var_332 /* var : Int */;
short int var333 /* : Bool */;
short int var335 /* : Bool */;
int cltype336;
int idtype337;
const char* var_class_name338;
short int var339 /* : Bool */;
val* var340 /* : MParameter */;
val* var341 /* : nullable Object */;
val* var342 /* : nullable Object */;
short int var343 /* : Bool */;
short int var344 /* : Bool */;
short int var346 /* : Bool */;
val* var_mparameter347 /* var mparameter: MParameter */;
val* var348 /* : null */;
short int var349 /* : Bool */;
short int var350 /* : Bool */;
short int var352 /* : Bool */;
short int var353 /* : Bool */;
short int var354 /* : Bool */;
val* var355 /* : ANodes[AParam] */;
val* var357 /* : ANodes[AParam] */;
val* var358 /* : ANode */;
long var360 /* : Int */;
long var361 /* : Int */;
short int var363 /* : Bool */;
val* var364 /* : null */;
short int var365 /* : Bool */;
short int var366 /* : Bool */;
short int var368 /* : Bool */;
short int var370 /* : Bool */;
short int var_371 /* var : Bool */;
val* var372 /* : MProperty */;
val* var374 /* : MProperty */;
short int var375 /* : Bool */;
short int var377 /* : Bool */;
val* var378 /* : MClass */;
val* var380 /* : MClass */;
val* var381 /* : MClassType */;
val* var383 /* : MClassType */;
val* var384 /* : MSignature */;
static val* varonce386;
val* var387 /* : String */;
char* var388 /* : NativeString */;
long var389 /* : Int */;
val* var390 /* : FlatString */;
val* var391 /* : nullable AAnnotation */;
val* var392 /* : null */;
short int var393 /* : Bool */;
short int var394 /* : Bool */;
short int var396 /* : Bool */;
short int var397 /* : Bool */;
short int var398 /* : Bool */;
static val* varonce400;
val* var401 /* : String */;
char* var402 /* : NativeString */;
long var403 /* : Int */;
val* var404 /* : FlatString */;
val* var405 /* : nullable AAnnotation */;
val* var406 /* : null */;
short int var407 /* : Bool */;
short int var408 /* : Bool */;
short int var410 /* : Bool */;
short int var411 /* : Bool */;
short int var412 /* : Bool */;
short int var414 /* : Bool */;
val* var415 /* : nullable AExternCodeBlock */;
val* var417 /* : nullable AExternCodeBlock */;
val* var418 /* : null */;
short int var419 /* : Bool */;
short int var420 /* : Bool */;
short int var422 /* : Bool */;
short int var423 /* : Bool */;
short int var424 /* : Bool */;
short int var_425 /* var : Bool */;
static val* varonce426;
val* var427 /* : String */;
char* var428 /* : NativeString */;
long var429 /* : Int */;
val* var430 /* : FlatString */;
val* var431 /* : nullable AAnnotation */;
val* var432 /* : null */;
short int var433 /* : Bool */;
short int var434 /* : Bool */;
short int var436 /* : Bool */;
short int var437 /* : Bool */;
short int var438 /* : Bool */;
var_modelbuilder = p0;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var2 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mpropdef = var;
var3 = NULL;
if (var_mpropdef == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mpropdef,var3) on <var_mpropdef:nullable MMethodDef> */
var_other = var3;
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var9 = var_mpropdef == var_other;
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
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var12 = var_mpropdef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_mclassdef = var10;
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var15 = var_mclassdef->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_mmodule = var13;
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (self) on <self:AMethPropdef> */
var18 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_nsig = var16;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var22 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline model#MMethod#is_root_init (var20) on <var20:MProperty(MMethod)> */
var25 = var20->attrs[COLOR_model__MMethod___is_root_init].s; /* _is_root_init on <var20:MProperty(MMethod)> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
var_ = var23;
if (var23){
{
var26 = model__MClassDef__is_intro(var_mclassdef);
}
var27 = !var26;
var19 = var27;
} else {
var19 = var_;
}
if (var19){
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var30 = var_mclassdef->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline modelize_property#MClass#root_init (var28) on <var28:MClass> */
var33 = var28->attrs[COLOR_modelize_property__MClass___root_init].val; /* _root_init on <var28:MClass> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
var_root_init = var31;
var34 = NULL;
if (var_root_init == NULL) {
var35 = 0; /* is null */
} else {
var35 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_root_init,var34) on <var_root_init:nullable MMethodDef> */
var_other38 = var34;
{
var40 = ((short int (*)(val*, val*))(var_root_init->class->vft[COLOR_kernel__Object___61d_61d]))(var_root_init, var_other38) /* == on <var_root_init:nullable MMethodDef(MMethodDef)>*/;
var39 = var40;
}
var41 = !var39;
var36 = var41;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
var35 = var36;
}
if (var35){
{
{ /* Inline model#MMethodDef#new_msignature (var_root_init) on <var_root_init:nullable MMethodDef(MMethodDef)> */
var44 = var_root_init->attrs[COLOR_model__MMethodDef___new_msignature].val; /* _new_msignature on <var_root_init:nullable MMethodDef(MMethodDef)> */
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline model#MMethodDef#new_msignature= (var_mpropdef,var42) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_model__MMethodDef___new_msignature].val = var42; /* _new_msignature on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL45:(void)0;
}
}
{
{ /* Inline model#MMethodDef#initializers (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var48 = var_mpropdef->attrs[COLOR_model__MMethodDef___initializers].val; /* _initializers on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1967);
show_backtrace(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
var49 = array__AbstractArrayRead__is_empty(var46);
}
if (unlikely(!var49)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 602);
show_backtrace(1);
}
{
{ /* Inline model#MMethodDef#initializers (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var52 = var_mpropdef->attrs[COLOR_model__MMethodDef___initializers].val; /* _initializers on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1967);
show_backtrace(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline model#MMethodDef#initializers (var_root_init) on <var_root_init:nullable MMethodDef(MMethodDef)> */
var55 = var_root_init->attrs[COLOR_model__MMethodDef___initializers].val; /* _initializers on <var_root_init:nullable MMethodDef(MMethodDef)> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1967);
show_backtrace(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
abstract_collection__SimpleCollection__add_all(var50, var53); /* Direct call abstract_collection#SimpleCollection#add_all on <var50:Array[MProperty]>*/
}
} else {
}
} else {
}
var56 = NEW_array__Array(&type_array__Arraystring__String);
{
((void (*)(val*))(var56->class->vft[COLOR_kernel__Object__init]))(var56) /* init on <var56:Array[String]>*/;
}
var_param_names = var56;
var57 = NEW_array__Array(&type_array__Arraymodel__MType);
{
((void (*)(val*))(var57->class->vft[COLOR_kernel__Object__init]))(var57) /* init on <var57:Array[MType]>*/;
}
var_param_types = var57;
var58 = 1;
{
{ /* Inline kernel#Int#unary - (var58) on <var58:Int> */
var61 = -var58;
var59 = var61;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
var_vararg_rank = var59;
var62 = NULL;
var_ret_type = var62;
var63 = NULL;
if (var_nsig == NULL) {
var64 = 0; /* is null */
} else {
var64 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nsig,var63) on <var_nsig:nullable ASignature> */
var_other38 = var63;
{
var68 = ((short int (*)(val*, val*))(var_nsig->class->vft[COLOR_kernel__Object___61d_61d]))(var_nsig, var_other38) /* == on <var_nsig:nullable ASignature(ASignature)>*/;
var67 = var68;
}
var69 = !var67;
var65 = var69;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
var64 = var65;
}
if (var64){
{
var70 = modelize_property__ASignature__visit_signature(var_nsig, var_modelbuilder, var_mclassdef);
}
var71 = !var70;
if (var71){
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property#ASignature#param_names (var_nsig) on <var_nsig:nullable ASignature(ASignature)> */
var74 = var_nsig->attrs[COLOR_modelize_property__ASignature___param_names].val; /* _param_names on <var_nsig:nullable ASignature(ASignature)> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _param_names");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 415);
show_backtrace(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
var_param_names = var72;
{
{ /* Inline modelize_property#ASignature#param_types (var_nsig) on <var_nsig:nullable ASignature(ASignature)> */
var77 = var_nsig->attrs[COLOR_modelize_property__ASignature___param_types].val; /* _param_types on <var_nsig:nullable ASignature(ASignature)> */
if (unlikely(var77 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _param_types");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 418);
show_backtrace(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
var_param_types = var75;
{
{ /* Inline modelize_property#ASignature#vararg_rank (var_nsig) on <var_nsig:nullable ASignature(ASignature)> */
var80 = var_nsig->attrs[COLOR_modelize_property__ASignature___vararg_rank].l; /* _vararg_rank on <var_nsig:nullable ASignature(ASignature)> */
var78 = var80;
RET_LABEL79:(void)0;
}
}
var_vararg_rank = var78;
{
{ /* Inline modelize_property#ASignature#ret_type (var_nsig) on <var_nsig:nullable ASignature(ASignature)> */
var83 = var_nsig->attrs[COLOR_modelize_property__ASignature___ret_type].val; /* _ret_type on <var_nsig:nullable ASignature(ASignature)> */
var81 = var83;
RET_LABEL82:(void)0;
}
}
var_ret_type = var81;
} else {
}
var84 = NULL;
var_msignature = var84;
{
var85 = model__MPropDef__is_intro(var_mpropdef);
}
var86 = !var85;
if (var86){
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var89 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var89 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var87 = var89;
RET_LABEL88:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var87) on <var87:MProperty(MMethod)> */
var92 = var87->attrs[COLOR_model__MProperty___intro].val; /* _intro on <var87:MProperty(MMethod)> */
if (unlikely(var92 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1649);
show_backtrace(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var90) on <var90:MPropDef(MMethodDef)> */
var95 = var90->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var90:MPropDef(MMethodDef)> */
var93 = var95;
RET_LABEL94:(void)0;
}
}
var_msignature = var93;
var96 = NULL;
if (var_msignature == NULL) {
var97 = 1; /* is null */
} else {
var97 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_msignature,var96) on <var_msignature:nullable MSignature> */
var_other = var96;
{
{ /* Inline kernel#Object#is_same_instance (var_msignature,var_other) on <var_msignature:nullable MSignature(MSignature)> */
var102 = var_msignature == var_other;
var100 = var102;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
}
var98 = var100;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
var97 = var98;
}
if (var97){
goto RET_LABEL;
} else {
}
{
{ /* Inline array#AbstractArrayRead#length (var_param_names) on <var_param_names:Array[String]> */
var105 = var_param_names->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_param_names:Array[String]> */
var103 = var105;
RET_LABEL104:(void)0;
}
}
{
var106 = model__MSignature__arity(var_msignature);
}
{
{ /* Inline kernel#Int#!= (var103,var106) on <var103:Int> */
var110 = var103 == var106;
var111 = !var110;
var108 = var111;
goto RET_LABEL109;
RET_LABEL109:(void)0;
}
var107 = var108;
}
if (var107){
var112 = NULL;
if (var_nsig == NULL) {
var113 = 0; /* is null */
} else {
var113 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nsig,var112) on <var_nsig:nullable ASignature> */
var_other38 = var112;
{
var117 = ((short int (*)(val*, val*))(var_nsig->class->vft[COLOR_kernel__Object___61d_61d]))(var_nsig, var_other38) /* == on <var_nsig:nullable ASignature(ASignature)>*/;
var116 = var117;
}
var118 = !var116;
var114 = var118;
goto RET_LABEL115;
RET_LABEL115:(void)0;
}
var113 = var114;
}
if (var113){
var_node = var_nsig;
} else {
var_node = self;
}
if (varonce) {
var119 = varonce;
} else {
var120 = "Redef error: ";
var121 = 13;
var122 = string__NativeString__to_s_with_length(var120, var121);
var119 = var122;
varonce = var119;
}
if (varonce123) {
var124 = varonce123;
} else {
var125 = " redefines ";
var126 = 11;
var127 = string__NativeString__to_s_with_length(var125, var126);
var124 = var127;
varonce123 = var124;
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var130 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var130 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var128 = var130;
RET_LABEL129:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var128) on <var128:MProperty(MMethod)> */
var133 = var128->attrs[COLOR_model__MProperty___intro].val; /* _intro on <var128:MProperty(MMethod)> */
if (unlikely(var133 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1649);
show_backtrace(1);
}
var131 = var133;
RET_LABEL132:(void)0;
}
}
if (varonce134) {
var135 = varonce134;
} else {
var136 = " with ";
var137 = 6;
var138 = string__NativeString__to_s_with_length(var136, var137);
var135 = var138;
varonce134 = var135;
}
{
{ /* Inline array#AbstractArrayRead#length (var_param_names) on <var_param_names:Array[String]> */
var141 = var_param_names->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_param_names:Array[String]> */
var139 = var141;
RET_LABEL140:(void)0;
}
}
if (varonce142) {
var143 = varonce142;
} else {
var144 = " parameter(s), ";
var145 = 15;
var146 = string__NativeString__to_s_with_length(var144, var145);
var143 = var146;
varonce142 = var143;
}
{
var147 = model__MSignature__arity(var_msignature);
}
if (varonce148) {
var149 = varonce148;
} else {
var150 = " expected. Signature is ";
var151 = 24;
var152 = string__NativeString__to_s_with_length(var150, var151);
var149 = var152;
varonce148 = var149;
}
var153 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var153 = array_instance Array[Object] */
var154 = 11;
var155 = NEW_array__NativeArray(var154, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var155)->values[0] = (val*) var119;
((struct instance_array__NativeArray*)var155)->values[1] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var155)->values[2] = (val*) var124;
((struct instance_array__NativeArray*)var155)->values[3] = (val*) var131;
((struct instance_array__NativeArray*)var155)->values[4] = (val*) var135;
var156 = BOX_kernel__Int(var139); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var155)->values[5] = (val*) var156;
((struct instance_array__NativeArray*)var155)->values[6] = (val*) var143;
var157 = BOX_kernel__Int(var147); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var155)->values[7] = (val*) var157;
((struct instance_array__NativeArray*)var155)->values[8] = (val*) var149;
((struct instance_array__NativeArray*)var155)->values[9] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var155)->values[10] = (val*) var_msignature;
{
((void (*)(val*, val*, long))(var153->class->vft[COLOR_array__Array__with_native]))(var153, var155, var154) /* with_native on <var153:Array[Object]>*/;
}
}
{
var158 = ((val* (*)(val*))(var153->class->vft[COLOR_string__Object__to_s]))(var153) /* to_s on <var153:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, var_node, var158); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
} else {
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var162 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var162 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var160 = var162;
RET_LABEL161:(void)0;
}
}
{
{ /* Inline model#MMethod#is_init (var160) on <var160:MProperty(MMethod)> */
var165 = var160->attrs[COLOR_model__MMethod___is_init].s; /* _is_init on <var160:MProperty(MMethod)> */
var163 = var165;
RET_LABEL164:(void)0;
}
}
var_166 = var163;
if (var163){
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var169 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var169 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var167 = var169;
RET_LABEL168:(void)0;
}
}
{
{ /* Inline model#MMethod#is_new (var167) on <var167:MProperty(MMethod)> */
var172 = var167->attrs[COLOR_model__MMethod___is_new].s; /* _is_new on <var167:MProperty(MMethod)> */
var170 = var172;
RET_LABEL171:(void)0;
}
}
var173 = !var170;
var159 = var173;
} else {
var159 = var_166;
}
if (var159){
{
{ /* Inline model#MClassDef#supertypes (var_mclassdef) on <var_mclassdef:MClassDef> */
var176 = var_mclassdef->attrs[COLOR_model__MClassDef___supertypes].val; /* _supertypes on <var_mclassdef:MClassDef> */
if (unlikely(var176 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supertypes");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 534);
show_backtrace(1);
}
var174 = var176;
RET_LABEL175:(void)0;
}
}
var_177 = var174;
{
var178 = array__AbstractArrayRead__iterator(var_177);
}
var_179 = var178;
for(;;) {
{
var180 = array__ArrayIterator__is_ok(var_179);
}
if (var180){
{
var181 = array__ArrayIterator__item(var_179);
}
var_msupertype = var181;
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var184 = var_mclassdef->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var184 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var182 = var184;
RET_LABEL183:(void)0;
}
}
{
var185 = model__MClassType__anchor_to(var_msupertype, var_mmodule, var182);
}
var_msupertype = var185;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var188 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var188 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var186 = var188;
RET_LABEL187:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var186) on <var186:MProperty(MMethod)> */
var191 = var186->attrs[COLOR_model__MProperty___name].val; /* _name on <var186:MProperty(MMethod)> */
if (unlikely(var191 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1620);
show_backtrace(1);
}
var189 = var191;
RET_LABEL190:(void)0;
}
}
{
var192 = modelbuilder__ModelBuilder__try_get_mproperty_by_name2(var_modelbuilder, self, var_mmodule, var_msupertype, var189);
}
var_candidate = var192;
var193 = NULL;
if (var_candidate == NULL) {
var194 = 0; /* is null */
} else {
var194 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_candidate,var193) on <var_candidate:nullable MProperty> */
var_other38 = var193;
{
var198 = ((short int (*)(val*, val*))(var_candidate->class->vft[COLOR_kernel__Object___61d_61d]))(var_candidate, var_other38) /* == on <var_candidate:nullable MProperty(MProperty)>*/;
var197 = var198;
}
var199 = !var197;
var195 = var199;
goto RET_LABEL196;
RET_LABEL196:(void)0;
}
var194 = var195;
}
if (var194){
var200 = NULL;
if (var_msignature == NULL) {
var201 = 1; /* is null */
} else {
var201 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_msignature,var200) on <var_msignature:nullable MSignature> */
var_other = var200;
{
{ /* Inline kernel#Object#is_same_instance (var_msignature,var_other) on <var_msignature:nullable MSignature(MSignature)> */
var206 = var_msignature == var_other;
var204 = var206;
goto RET_LABEL205;
RET_LABEL205:(void)0;
}
}
var202 = var204;
goto RET_LABEL203;
RET_LABEL203:(void)0;
}
var201 = var202;
}
if (var201){
{
{ /* Inline model#MProperty#intro (var_candidate) on <var_candidate:nullable MProperty(MProperty)> */
var209 = var_candidate->attrs[COLOR_model__MProperty___intro].val; /* _intro on <var_candidate:nullable MProperty(MProperty)> */
if (unlikely(var209 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1649);
show_backtrace(1);
}
var207 = var209;
RET_LABEL208:(void)0;
}
}
/* <var207:MPropDef> isa MMethodDef */
cltype = type_model__MMethodDef.color;
idtype = type_model__MMethodDef.id;
if(cltype >= var207->type->table_size) {
var210 = 0;
} else {
var210 = var207->type->type_table[cltype] == idtype;
}
if (unlikely(!var210)) {
var_class_name = var207 == NULL ? "null" : var207->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MMethodDef", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 641);
show_backtrace(1);
}
{
{ /* Inline model#MMethodDef#msignature (var207) on <var207:MPropDef(MMethodDef)> */
var213 = var207->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var207:MPropDef(MMethodDef)> */
var211 = var213;
RET_LABEL212:(void)0;
}
}
var_msignature = var211;
} else {
}
} else {
}
{
array__ArrayIterator__next(var_179); /* Direct call array#ArrayIterator#next on <var_179:ArrayIterator[MClassType]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_179) on <var_179:ArrayIterator[MClassType]> */
RET_LABEL214:(void)0;
}
}
} else {
}
}
var218 = NULL;
if (var_msignature == NULL) {
var219 = 0; /* is null */
} else {
var219 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_msignature,var218) on <var_msignature:nullable MSignature> */
var_other38 = var218;
{
var223 = ((short int (*)(val*, val*))(var_msignature->class->vft[COLOR_kernel__Object___61d_61d]))(var_msignature, var_other38) /* == on <var_msignature:nullable MSignature(MSignature)>*/;
var222 = var223;
}
var224 = !var222;
var220 = var224;
goto RET_LABEL221;
RET_LABEL221:(void)0;
}
var219 = var220;
}
var_225 = var219;
if (var219){
{
{ /* Inline array#AbstractArrayRead#length (var_param_names) on <var_param_names:Array[String]> */
var228 = var_param_names->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_param_names:Array[String]> */
var226 = var228;
RET_LABEL227:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var_param_types) on <var_param_types:Array[MType]> */
var231 = var_param_types->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_param_types:Array[MType]> */
var229 = var231;
RET_LABEL230:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var226,var229) on <var226:Int> */
var235 = var226 == var229;
var236 = !var235;
var233 = var236;
goto RET_LABEL234;
RET_LABEL234:(void)0;
}
var232 = var233;
}
var217 = var232;
} else {
var217 = var_225;
}
var_237 = var217;
if (var217){
{
{ /* Inline array#AbstractArrayRead#length (var_param_names) on <var_param_names:Array[String]> */
var240 = var_param_names->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_param_names:Array[String]> */
var238 = var240;
RET_LABEL239:(void)0;
}
}
{
var241 = model__MSignature__arity(var_msignature);
}
{
{ /* Inline kernel#Int#== (var238,var241) on <var238:Int> */
var245 = var238 == var241;
var243 = var245;
goto RET_LABEL244;
RET_LABEL244:(void)0;
}
var242 = var243;
}
var216 = var242;
} else {
var216 = var_237;
}
var_246 = var216;
if (var216){
{
{ /* Inline array#AbstractArrayRead#length (var_param_types) on <var_param_types:Array[MType]> */
var249 = var_param_types->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_param_types:Array[MType]> */
var247 = var249;
RET_LABEL248:(void)0;
}
}
var250 = 0;
{
{ /* Inline kernel#Int#== (var247,var250) on <var247:Int> */
var254 = var247 == var250;
var252 = var254;
goto RET_LABEL253;
RET_LABEL253:(void)0;
}
var251 = var252;
}
var215 = var251;
} else {
var215 = var_246;
}
if (var215){
var255 = NEW_array__Array(&type_array__Arraymodel__MType);
{
((void (*)(val*))(var255->class->vft[COLOR_kernel__Object__init]))(var255) /* init on <var255:Array[MType]>*/;
}
var_param_types = var255;
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var258 = var_msignature->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var_msignature:nullable MSignature(MSignature)> */
if (unlikely(var258 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1465);
show_backtrace(1);
}
var256 = var258;
RET_LABEL257:(void)0;
}
}
var_259 = var256;
{
var260 = array__AbstractArrayRead__iterator(var_259);
}
var_261 = var260;
for(;;) {
{
var262 = array__ArrayIterator__is_ok(var_261);
}
if (var262){
{
var263 = array__ArrayIterator__item(var_261);
}
var_mparameter = var263;
{
{ /* Inline model#MParameter#mtype (var_mparameter) on <var_mparameter:MParameter> */
var266 = var_mparameter->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var_mparameter:MParameter> */
if (unlikely(var266 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1565);
show_backtrace(1);
}
var264 = var266;
RET_LABEL265:(void)0;
}
}
{
array__Array__add(var_param_types, var264); /* Direct call array#Array#add on <var_param_types:Array[MType]>*/
}
{
array__ArrayIterator__next(var_261); /* Direct call array#ArrayIterator#next on <var_261:ArrayIterator[MParameter]>*/
}
} else {
goto BREAK_label267;
}
}
BREAK_label267: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_261) on <var_261:ArrayIterator[MParameter]> */
RET_LABEL268:(void)0;
}
}
{
{ /* Inline model#MSignature#vararg_rank (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var271 = var_msignature->attrs[COLOR_model__MSignature___vararg_rank].l; /* _vararg_rank on <var_msignature:nullable MSignature(MSignature)> */
var269 = var271;
RET_LABEL270:(void)0;
}
}
var_vararg_rank = var269;
} else {
}
var273 = NULL;
if (var_msignature == NULL) {
var274 = 0; /* is null */
} else {
var274 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_msignature,var273) on <var_msignature:nullable MSignature> */
var_other38 = var273;
{
var278 = ((short int (*)(val*, val*))(var_msignature->class->vft[COLOR_kernel__Object___61d_61d]))(var_msignature, var_other38) /* == on <var_msignature:nullable MSignature(MSignature)>*/;
var277 = var278;
}
var279 = !var277;
var275 = var279;
goto RET_LABEL276;
RET_LABEL276:(void)0;
}
var274 = var275;
}
var_280 = var274;
if (var274){
var281 = NULL;
if (var_ret_type == NULL) {
var282 = 1; /* is null */
} else {
var282 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ret_type,var281) on <var_ret_type:nullable MType> */
var_other = var281;
{
{ /* Inline kernel#Object#is_same_instance (var_ret_type,var_other) on <var_ret_type:nullable MType(MType)> */
var287 = var_ret_type == var_other;
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
var272 = var282;
} else {
var272 = var_280;
}
if (var272){
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var290 = var_msignature->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:nullable MSignature(MSignature)> */
var288 = var290;
RET_LABEL289:(void)0;
}
}
var_ret_type = var288;
} else {
}
{
{ /* Inline array#AbstractArrayRead#length (var_param_names) on <var_param_names:Array[String]> */
var293 = var_param_names->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_param_names:Array[String]> */
var291 = var293;
RET_LABEL292:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var_param_types) on <var_param_types:Array[MType]> */
var296 = var_param_types->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_param_types:Array[MType]> */
var294 = var296;
RET_LABEL295:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var291,var294) on <var291:Int> */
var300 = var291 == var294;
var301 = !var300;
var298 = var301;
goto RET_LABEL299;
RET_LABEL299:(void)0;
}
var297 = var298;
}
if (var297){
if (var_nsig == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 663);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var_nsig) on <var_nsig:nullable ASignature> */
if (unlikely(var_nsig == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1279);
show_backtrace(1);
}
var304 = var_nsig->attrs[COLOR_parser_nodes__ASignature___n_params].val; /* _n_params on <var_nsig:nullable ASignature> */
if (unlikely(var304 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1279);
show_backtrace(1);
}
var302 = var304;
RET_LABEL303:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var_param_types) on <var_param_types:Array[MType]> */
var307 = var_param_types->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_param_types:Array[MType]> */
var305 = var307;
RET_LABEL306:(void)0;
}
}
{
var308 = parser_nodes__ANodes___91d_93d(var302, var305);
}
if (varonce309) {
var310 = varonce309;
} else {
var311 = "Error: Untyped parameter `";
var312 = 26;
var313 = string__NativeString__to_s_with_length(var311, var312);
var310 = var313;
varonce309 = var310;
}
{
{ /* Inline array#AbstractArrayRead#length (var_param_types) on <var_param_types:Array[MType]> */
var316 = var_param_types->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_param_types:Array[MType]> */
var314 = var316;
RET_LABEL315:(void)0;
}
}
{
var317 = array__Array___91d_93d(var_param_names, var314);
}
if (varonce318) {
var319 = varonce318;
} else {
var320 = "\'.";
var321 = 2;
var322 = string__NativeString__to_s_with_length(var320, var321);
var319 = var322;
varonce318 = var319;
}
var323 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var323 = array_instance Array[Object] */
var324 = 3;
var325 = NEW_array__NativeArray(var324, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var325)->values[0] = (val*) var310;
((struct instance_array__NativeArray*)var325)->values[1] = (val*) var317;
((struct instance_array__NativeArray*)var325)->values[2] = (val*) var319;
{
((void (*)(val*, val*, long))(var323->class->vft[COLOR_array__Array__with_native]))(var323, var325, var324) /* with_native on <var323:Array[Object]>*/;
}
}
{
var326 = ((val* (*)(val*))(var323->class->vft[COLOR_string__Object__to_s]))(var323) /* to_s on <var323:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, var308, var326); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
var327 = NEW_array__Array(&type_array__Arraymodel__MParameter);
{
((void (*)(val*))(var327->class->vft[COLOR_kernel__Object__init]))(var327) /* init on <var327:Array[MParameter]>*/;
}
var_mparameters = var327;
var328 = 0;
var_i = var328;
{
{ /* Inline array#AbstractArrayRead#length (var_param_names) on <var_param_names:Array[String]> */
var331 = var_param_names->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_param_names:Array[String]> */
var329 = var331;
RET_LABEL330:(void)0;
}
}
var_332 = var329;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_332) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_332:Int> isa OTHER */
/* <var_332:Int> isa OTHER */
var335 = 1; /* easy <var_332:Int> isa OTHER*/
if (unlikely(!var335)) {
var_class_name338 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name338);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var339 = var_i < var_332;
var333 = var339;
goto RET_LABEL334;
RET_LABEL334:(void)0;
}
}
if (var333){
var340 = NEW_model__MParameter(&type_model__MParameter);
{
var341 = array__Array___91d_93d(var_param_names, var_i);
}
{
var342 = array__Array___91d_93d(var_param_types, var_i);
}
{
{ /* Inline kernel#Int#== (var_i,var_vararg_rank) on <var_i:Int> */
var346 = var_i == var_vararg_rank;
var344 = var346;
goto RET_LABEL345;
RET_LABEL345:(void)0;
}
var343 = var344;
}
{
model__MParameter__init(var340, var341, var342, var343); /* Direct call model#MParameter#init on <var340:MParameter>*/
}
var_mparameter347 = var340;
var348 = NULL;
if (var_nsig == NULL) {
var349 = 0; /* is null */
} else {
var349 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nsig,var348) on <var_nsig:nullable ASignature> */
var_other38 = var348;
{
var353 = ((short int (*)(val*, val*))(var_nsig->class->vft[COLOR_kernel__Object___61d_61d]))(var_nsig, var_other38) /* == on <var_nsig:nullable ASignature(ASignature)>*/;
var352 = var353;
}
var354 = !var352;
var350 = var354;
goto RET_LABEL351;
RET_LABEL351:(void)0;
}
var349 = var350;
}
if (var349){
{
{ /* Inline parser_nodes#ASignature#n_params (var_nsig) on <var_nsig:nullable ASignature(ASignature)> */
var357 = var_nsig->attrs[COLOR_parser_nodes__ASignature___n_params].val; /* _n_params on <var_nsig:nullable ASignature(ASignature)> */
if (unlikely(var357 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1279);
show_backtrace(1);
}
var355 = var357;
RET_LABEL356:(void)0;
}
}
{
var358 = parser_nodes__ANodes___91d_93d(var355, var_i);
}
{
{ /* Inline modelize_property#AParam#mparameter= (var358,var_mparameter347) on <var358:ANode(AParam)> */
var358->attrs[COLOR_modelize_property__AParam___mparameter].val = var_mparameter347; /* _mparameter on <var358:ANode(AParam)> */
RET_LABEL359:(void)0;
}
}
} else {
}
{
array__Array__add(var_mparameters, var_mparameter347); /* Direct call array#Array#add on <var_mparameters:Array[MParameter]>*/
}
var360 = 1;
{
var361 = kernel__Int__successor(var_i, var360);
}
var_i = var361;
} else {
goto BREAK_label362;
}
}
BREAK_label362: (void)0;
var364 = NULL;
if (var_ret_type == NULL) {
var365 = 1; /* is null */
} else {
var365 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ret_type,var364) on <var_ret_type:nullable MType> */
var_other = var364;
{
{ /* Inline kernel#Object#is_same_instance (var_ret_type,var_other) on <var_ret_type:nullable MType(MType)> */
var370 = var_ret_type == var_other;
var368 = var370;
goto RET_LABEL369;
RET_LABEL369:(void)0;
}
}
var366 = var368;
goto RET_LABEL367;
RET_LABEL367:(void)0;
}
var365 = var366;
}
var_371 = var365;
if (var365){
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var374 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var374 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var372 = var374;
RET_LABEL373:(void)0;
}
}
{
{ /* Inline model#MMethod#is_new (var372) on <var372:MProperty(MMethod)> */
var377 = var372->attrs[COLOR_model__MMethod___is_new].s; /* _is_new on <var372:MProperty(MMethod)> */
var375 = var377;
RET_LABEL376:(void)0;
}
}
var363 = var375;
} else {
var363 = var_371;
}
if (var363){
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var380 = var_mclassdef->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var380 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var378 = var380;
RET_LABEL379:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var378) on <var378:MClass> */
var383 = var378->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var378:MClass> */
if (unlikely(var383 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var381 = var383;
RET_LABEL382:(void)0;
}
}
var_ret_type = var381;
} else {
}
var384 = NEW_model__MSignature(&type_model__MSignature);
{
model__MSignature__init(var384, var_mparameters, var_ret_type); /* Direct call model#MSignature#init on <var384:MSignature>*/
}
var_msignature = var384;
{
{ /* Inline model#MMethodDef#msignature= (var_mpropdef,var_msignature) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_model__MMethodDef___msignature].val = var_msignature; /* _msignature on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL385:(void)0;
}
}
if (varonce386) {
var387 = varonce386;
} else {
var388 = "abstract";
var389 = 8;
var390 = string__NativeString__to_s_with_length(var388, var389);
var387 = var390;
varonce386 = var387;
}
{
var391 = annotation__Prod__get_single_annotation(self, var387, var_modelbuilder);
}
var392 = NULL;
if (var391 == NULL) {
var393 = 0; /* is null */
} else {
var393 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var391,var392) on <var391:nullable AAnnotation> */
var_other38 = var392;
{
var397 = ((short int (*)(val*, val*))(var391->class->vft[COLOR_kernel__Object___61d_61d]))(var391, var_other38) /* == on <var391:nullable AAnnotation(AAnnotation)>*/;
var396 = var397;
}
var398 = !var396;
var394 = var398;
goto RET_LABEL395;
RET_LABEL395:(void)0;
}
var393 = var394;
}
{
{ /* Inline model#MMethodDef#is_abstract= (var_mpropdef,var393) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_model__MMethodDef___is_abstract].s = var393; /* _is_abstract on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL399:(void)0;
}
}
if (varonce400) {
var401 = varonce400;
} else {
var402 = "intern";
var403 = 6;
var404 = string__NativeString__to_s_with_length(var402, var403);
var401 = var404;
varonce400 = var401;
}
{
var405 = annotation__Prod__get_single_annotation(self, var401, var_modelbuilder);
}
var406 = NULL;
if (var405 == NULL) {
var407 = 0; /* is null */
} else {
var407 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var405,var406) on <var405:nullable AAnnotation> */
var_other38 = var406;
{
var411 = ((short int (*)(val*, val*))(var405->class->vft[COLOR_kernel__Object___61d_61d]))(var405, var_other38) /* == on <var405:nullable AAnnotation(AAnnotation)>*/;
var410 = var411;
}
var412 = !var410;
var408 = var412;
goto RET_LABEL409;
RET_LABEL409:(void)0;
}
var407 = var408;
}
{
{ /* Inline model#MMethodDef#is_intern= (var_mpropdef,var407) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_model__MMethodDef___is_intern].s = var407; /* _is_intern on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL413:(void)0;
}
}
{
{ /* Inline parser_nodes#AMethPropdef#n_extern_code_block (self) on <self:AMethPropdef> */
var417 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AMethPropdef> */
var415 = var417;
RET_LABEL416:(void)0;
}
}
var418 = NULL;
if (var415 == NULL) {
var419 = 0; /* is null */
} else {
var419 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var415,var418) on <var415:nullable AExternCodeBlock> */
var_other38 = var418;
{
var423 = ((short int (*)(val*, val*))(var415->class->vft[COLOR_kernel__Object___61d_61d]))(var415, var_other38) /* == on <var415:nullable AExternCodeBlock(AExternCodeBlock)>*/;
var422 = var423;
}
var424 = !var422;
var420 = var424;
goto RET_LABEL421;
RET_LABEL421:(void)0;
}
var419 = var420;
}
var_425 = var419;
if (var419){
var414 = var_425;
} else {
if (varonce426) {
var427 = varonce426;
} else {
var428 = "extern";
var429 = 6;
var430 = string__NativeString__to_s_with_length(var428, var429);
var427 = var430;
varonce426 = var427;
}
{
var431 = annotation__Prod__get_single_annotation(self, var427, var_modelbuilder);
}
var432 = NULL;
if (var431 == NULL) {
var433 = 0; /* is null */
} else {
var433 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var431,var432) on <var431:nullable AAnnotation> */
var_other38 = var432;
{
var437 = ((short int (*)(val*, val*))(var431->class->vft[COLOR_kernel__Object___61d_61d]))(var431, var_other38) /* == on <var431:nullable AAnnotation(AAnnotation)>*/;
var436 = var437;
}
var438 = !var436;
var434 = var438;
goto RET_LABEL435;
RET_LABEL435:(void)0;
}
var433 = var434;
}
var414 = var433;
}
{
{ /* Inline model#MMethodDef#is_extern= (var_mpropdef,var414) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_model__MMethodDef___is_extern].s = var414; /* _is_extern on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL439:(void)0;
}
}
RET_LABEL:;
}
/* method modelize_property#AMethPropdef#build_signature for (self: Object, ModelBuilder) */
void VIRTUAL_modelize_property__AMethPropdef__build_signature(val* self, val* p0) {
modelize_property__AMethPropdef__build_signature(self, p0); /* Direct call modelize_property#AMethPropdef#build_signature on <self:Object(AMethPropdef)>*/
RET_LABEL:;
}
