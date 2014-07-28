#include "modelize_property.sep.0.h"
/* method modelize_property#ToolContext#modelize_property_phase for (self: ToolContext): Phase */
val* modelize_property__ToolContext__modelize_property_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_modelize_property__ToolContext___modelize_property_phase].val; /* _modelize_property_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelize_property_phase");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 24);
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
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 24);
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
val* var3 /* : Iterator[ANode] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var6 /* : nullable Array[AClassdef] */;
val* var8 /* : nullable Array[AClassdef] */;
val* var9 /* : null */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : ToolContext */;
val* var14 /* : ToolContext */;
val* var15 /* : ModelBuilder */;
var_nmodule = p0;
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var2 = var_nmodule->attrs[COLOR_parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 699);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = parser_nodes__ANodes__iterator(var);
}
for(;;) {
{
var4 = ((short int (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var3) /* is_ok on <var3:Iterator[ANode]>*/;
}
if(!var4) break;
{
var5 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__item]))(var3) /* item on <var3:Iterator[ANode]>*/;
}
var_nclassdef = var5;
{
{ /* Inline modelize_class#AClassdef#all_defs (var_nclassdef) on <var_nclassdef:AClassdef> */
var8 = var_nclassdef->attrs[COLOR_modelize_class__AClassdef___all_defs].val; /* _all_defs on <var_nclassdef:AClassdef> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
var9 = NULL;
if (var6 == NULL) {
var10 = 1; /* is null */
} else {
var10 = 0; /* arg is null but recv is not */
}
if (0) {
var11 = abstract_collection__SequenceRead___61d_61d(var6, var9);
var10 = var11;
}
if (var10){
goto CONTINUE_label;
} else {
}
{
{ /* Inline phase#Phase#toolcontext (self) on <self:ModelizePropertyPhase> */
var14 = self->attrs[COLOR_phase__Phase___toolcontext].val; /* _toolcontext on <self:ModelizePropertyPhase> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/phase.nit", 145);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = modelbuilder__ToolContext__modelbuilder(var12);
}
{
modelize_property__ModelBuilder__build_properties(var15, var_nclassdef); /* Direct call modelize_property#ModelBuilder#build_properties on <var15:ModelBuilder>*/
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__next]))(var3) /* next on <var3:Iterator[ANode]>*/;
}
}
BREAK_label: (void)0;
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
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 39);
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
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 39);
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
val* var22 /* : Iterator[nullable Object] */;
short int var23 /* : Bool */;
val* var24 /* : nullable Object */;
val* var_superclassdef /* var superclassdef: MClassDef */;
val* var25 /* : HashMap[MClassDef, AClassdef] */;
val* var27 /* : HashMap[MClassDef, AClassdef] */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : HashMap[MClassDef, AClassdef] */;
val* var32 /* : HashMap[MClassDef, AClassdef] */;
val* var33 /* : nullable Object */;
val* var34 /* : nullable Array[AClassdef] */;
val* var36 /* : nullable Array[AClassdef] */;
val* var37 /* : ArrayIterator[nullable Object] */;
short int var38 /* : Bool */;
val* var39 /* : nullable Object */;
val* var_nclassdef2 /* var nclassdef2: AClassdef */;
val* var40 /* : ANodes[APropdef] */;
val* var42 /* : ANodes[APropdef] */;
val* var43 /* : Iterator[ANode] */;
short int var44 /* : Bool */;
val* var45 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
val* var47 /* : ANodes[APropdef] */;
val* var49 /* : ANodes[APropdef] */;
val* var50 /* : Iterator[ANode] */;
short int var51 /* : Bool */;
val* var52 /* : nullable Object */;
val* var_npropdef53 /* var npropdef: APropdef */;
val* var55 /* : ANodes[APropdef] */;
val* var57 /* : ANodes[APropdef] */;
val* var58 /* : Iterator[ANode] */;
short int var59 /* : Bool */;
val* var60 /* : nullable Object */;
val* var_npropdef61 /* var npropdef: APropdef */;
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
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 50);
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
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 52);
show_backtrace(1);
} else {
var21 = poset__POSetElement__direct_greaters(var18);
}
{
var22 = ((val* (*)(val*))(var21->class->vft[COLOR_abstract_collection__Collection__iterator]))(var21) /* iterator on <var21:Collection[Object](Collection[MClassDef])>*/;
}
for(;;) {
{
var23 = ((short int (*)(val*))(var22->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var22) /* is_ok on <var22:Iterator[nullable Object]>*/;
}
if(!var23) break;
{
var24 = ((val* (*)(val*))(var22->class->vft[COLOR_abstract_collection__Iterator__item]))(var22) /* item on <var22:Iterator[nullable Object]>*/;
}
var_superclassdef = var24;
{
{ /* Inline modelize_class#ModelBuilder#mclassdef2nclassdef (self) on <self:ModelBuilder> */
var27 = self->attrs[COLOR_modelize_class__ModelBuilder___mclassdef2nclassdef].val; /* _mclassdef2nclassdef on <self:ModelBuilder> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef2nclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_class.nit", 399);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
var28 = abstract_collection__MapRead__has_key(var25, var_superclassdef);
}
var29 = !var28;
if (var29){
goto CONTINUE_label;
} else {
}
{
{ /* Inline modelize_class#ModelBuilder#mclassdef2nclassdef (self) on <self:ModelBuilder> */
var32 = self->attrs[COLOR_modelize_class__ModelBuilder___mclassdef2nclassdef].val; /* _mclassdef2nclassdef on <self:ModelBuilder> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef2nclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_class.nit", 399);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
var33 = hash_collection__HashMap___91d_93d(var30, var_superclassdef);
}
{
modelize_property__ModelBuilder__build_properties(self, var33); /* Direct call modelize_property#ModelBuilder#build_properties on <self:ModelBuilder>*/
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var22->class->vft[COLOR_abstract_collection__Iterator__next]))(var22) /* next on <var22:Iterator[nullable Object]>*/;
}
}
BREAK_label: (void)0;
{
{ /* Inline modelize_class#AClassdef#all_defs (var_nclassdef) on <var_nclassdef:AClassdef> */
var36 = var_nclassdef->attrs[COLOR_modelize_class__AClassdef___all_defs].val; /* _all_defs on <var_nclassdef:AClassdef> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
if (var34 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 57);
show_backtrace(1);
} else {
var37 = array__AbstractArrayRead__iterator(var34);
}
for(;;) {
{
var38 = array__ArrayIterator__is_ok(var37);
}
if(!var38) break;
{
var39 = array__ArrayIterator__item(var37);
}
var_nclassdef2 = var39;
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_nclassdef2) on <var_nclassdef2:AClassdef> */
var42 = var_nclassdef2->attrs[COLOR_parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef2:AClassdef> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 802);
show_backtrace(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
var43 = parser_nodes__ANodes__iterator(var40);
}
for(;;) {
{
var44 = ((short int (*)(val*))(var43->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var43) /* is_ok on <var43:Iterator[ANode]>*/;
}
if(!var44) break;
{
var45 = ((val* (*)(val*))(var43->class->vft[COLOR_abstract_collection__Iterator__item]))(var43) /* item on <var43:Iterator[ANode]>*/;
}
var_npropdef = var45;
{
((void (*)(val*, val*, val*))(var_npropdef->class->vft[COLOR_modelize_property__APropdef__build_property]))(var_npropdef, self, var_mclassdef) /* build_property on <var_npropdef:APropdef>*/;
}
CONTINUE_label46: (void)0;
{
((void (*)(val*))(var43->class->vft[COLOR_abstract_collection__Iterator__next]))(var43) /* next on <var43:Iterator[ANode]>*/;
}
}
BREAK_label46: (void)0;
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_nclassdef2) on <var_nclassdef2:AClassdef> */
var49 = var_nclassdef2->attrs[COLOR_parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef2:AClassdef> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 802);
show_backtrace(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
var50 = parser_nodes__ANodes__iterator(var47);
}
for(;;) {
{
var51 = ((short int (*)(val*))(var50->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var50) /* is_ok on <var50:Iterator[ANode]>*/;
}
if(!var51) break;
{
var52 = ((val* (*)(val*))(var50->class->vft[COLOR_abstract_collection__Iterator__item]))(var50) /* item on <var50:Iterator[ANode]>*/;
}
var_npropdef53 = var52;
{
((void (*)(val*, val*))(var_npropdef53->class->vft[COLOR_modelize_property__APropdef__build_signature]))(var_npropdef53, self) /* build_signature on <var_npropdef53:APropdef>*/;
}
CONTINUE_label54: (void)0;
{
((void (*)(val*))(var50->class->vft[COLOR_abstract_collection__Iterator__next]))(var50) /* next on <var50:Iterator[ANode]>*/;
}
}
BREAK_label54: (void)0;
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_nclassdef2) on <var_nclassdef2:AClassdef> */
var57 = var_nclassdef2->attrs[COLOR_parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef2:AClassdef> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 802);
show_backtrace(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
var58 = parser_nodes__ANodes__iterator(var55);
}
for(;;) {
{
var59 = ((short int (*)(val*))(var58->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var58) /* is_ok on <var58:Iterator[ANode]>*/;
}
if(!var59) break;
{
var60 = ((val* (*)(val*))(var58->class->vft[COLOR_abstract_collection__Iterator__item]))(var58) /* item on <var58:Iterator[ANode]>*/;
}
var_npropdef61 = var60;
{
((void (*)(val*, val*))(var_npropdef61->class->vft[COLOR_modelize_property__APropdef__check_signature]))(var_npropdef61, self) /* check_signature on <var_npropdef61:APropdef>*/;
}
CONTINUE_label62: (void)0;
{
((void (*)(val*))(var58->class->vft[COLOR_abstract_collection__Iterator__next]))(var58) /* next on <var58:Iterator[ANode]>*/;
}
}
BREAK_label62: (void)0;
CONTINUE_label63: (void)0;
{
array__ArrayIterator__next(var37); /* Direct call array#ArrayIterator#next on <var37:ArrayIterator[nullable Object]>*/
}
}
BREAK_label63: (void)0;
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
/* method modelize_property#ModelBuilder#process_default_constructors for (self: ModelBuilder, AClassdef) */
void modelize_property__ModelBuilder__process_default_constructors(val* self, val* p0) {
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var /* : nullable MClassDef */;
val* var2 /* : nullable MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : MClass */;
val* var7 /* : MClass */;
val* var8 /* : MClassKind */;
val* var10 /* : MClassKind */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : Array[MPropDef] */;
val* var17 /* : Array[MPropDef] */;
val* var18 /* : ArrayIterator[nullable Object] */;
short int var19 /* : Bool */;
val* var20 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: MPropDef */;
short int var21 /* : Bool */;
int cltype;
int idtype;
short int var22 /* : Bool */;
val* var23 /* : MProperty */;
val* var25 /* : MProperty */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
short int var32 /* : Bool */;
val* var33 /* : MModule */;
val* var35 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var36 /* : Array[MMethod] */;
val* var_combine /* var combine: Array[MMethod] */;
val* var37 /* : null */;
val* var_inhc /* var inhc: nullable MClass */;
val* var38 /* : Array[MClassType] */;
val* var40 /* : Array[MClassType] */;
val* var41 /* : ArrayIterator[nullable Object] */;
short int var42 /* : Bool */;
val* var43 /* : nullable Object */;
val* var_st /* var st: MClassType */;
val* var44 /* : MClass */;
val* var46 /* : MClass */;
val* var_c /* var c: MClass */;
val* var47 /* : MClassKind */;
val* var49 /* : MClassKind */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
val* var55 /* : MClassType */;
val* var57 /* : MClassType */;
val* var58 /* : MClassType */;
static val* varonce;
val* var59 /* : String */;
char* var60 /* : NativeString */;
long var61 /* : Int */;
val* var62 /* : FlatString */;
val* var63 /* : nullable MProperty */;
short int var64 /* : Bool */;
int cltype65;
int idtype66;
const char* var_class_name;
val* var_candidate /* var candidate: nullable MMethod */;
val* var67 /* : null */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var71 /* : Bool */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
val* var74 /* : MPropDef */;
val* var75 /* : nullable MSignature */;
val* var77 /* : nullable MSignature */;
val* var78 /* : null */;
short int var79 /* : Bool */;
short int var80 /* : Bool */;
short int var82 /* : Bool */;
short int var83 /* : Bool */;
short int var84 /* : Bool */;
val* var85 /* : MPropDef */;
val* var86 /* : nullable MSignature */;
val* var88 /* : nullable MSignature */;
long var89 /* : Int */;
long var90 /* : Int */;
short int var91 /* : Bool */;
short int var92 /* : Bool */;
short int var94 /* : Bool */;
val* var95 /* : nullable MClass */;
val* var97 /* : nullable MClass */;
val* var_inhc2 /* var inhc2: nullable MClass */;
val* var98 /* : null */;
short int var99 /* : Bool */;
short int var100 /* : Bool */;
val* var_other102 /* var other: nullable Object */;
short int var103 /* : Bool */;
short int var105 /* : Bool */;
short int var106 /* : Bool */;
short int var107 /* : Bool */;
short int var109 /* : Bool */;
short int var111 /* : Bool */;
val* var112 /* : null */;
short int var113 /* : Bool */;
short int var114 /* : Bool */;
short int var116 /* : Bool */;
short int var117 /* : Bool */;
short int var118 /* : Bool */;
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : NativeString */;
long var122 /* : Int */;
val* var123 /* : FlatString */;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : NativeString */;
long var127 /* : Int */;
val* var128 /* : FlatString */;
val* var129 /* : Array[Object] */;
long var130 /* : Int */;
val* var131 /* : NativeArray[Object] */;
val* var132 /* : String */;
val* var133 /* : Array[MParameter] */;
val* var_mparameters /* var mparameters: Array[MParameter] */;
val* var134 /* : null */;
val* var_anode /* var anode: nullable ANode */;
val* var135 /* : ANodes[APropdef] */;
val* var137 /* : ANodes[APropdef] */;
val* var138 /* : Iterator[ANode] */;
short int var139 /* : Bool */;
val* var140 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
short int var141 /* : Bool */;
int cltype142;
int idtype143;
val* var144 /* : nullable MPropDef */;
val* var146 /* : nullable MPropDef */;
val* var147 /* : null */;
short int var148 /* : Bool */;
short int var149 /* : Bool */;
short int var151 /* : Bool */;
short int var153 /* : Bool */;
static val* varonce154;
val* var155 /* : String */;
char* var156 /* : NativeString */;
long var157 /* : Int */;
val* var158 /* : FlatString */;
val* var159 /* : nullable AAnnotation */;
val* var_at /* var at: nullable AAnnotation */;
val* var160 /* : null */;
short int var161 /* : Bool */;
short int var162 /* : Bool */;
short int var164 /* : Bool */;
short int var165 /* : Bool */;
short int var166 /* : Bool */;
short int var167 /* : Bool */;
val* var169 /* : nullable AExpr */;
val* var170 /* : null */;
short int var171 /* : Bool */;
short int var172 /* : Bool */;
short int var174 /* : Bool */;
short int var175 /* : Bool */;
short int var176 /* : Bool */;
static val* varonce177;
val* var178 /* : String */;
char* var179 /* : NativeString */;
long var180 /* : Int */;
val* var181 /* : FlatString */;
val* var183 /* : nullable AExpr */;
val* var184 /* : null */;
short int var185 /* : Bool */;
short int var186 /* : Bool */;
short int var188 /* : Bool */;
short int var189 /* : Bool */;
short int var190 /* : Bool */;
val* var191 /* : nullable MPropDef */;
val* var193 /* : nullable MPropDef */;
val* var194 /* : MProperty */;
val* var196 /* : MProperty */;
val* var197 /* : String */;
val* var199 /* : String */;
long var200 /* : Int */;
val* var201 /* : Text */;
val* var_paramname /* var paramname: String */;
val* var202 /* : nullable MPropDef */;
val* var204 /* : nullable MPropDef */;
val* var205 /* : nullable MType */;
val* var207 /* : nullable MType */;
val* var_ret_type /* var ret_type: nullable MType */;
val* var208 /* : null */;
short int var209 /* : Bool */;
short int var210 /* : Bool */;
short int var212 /* : Bool */;
short int var214 /* : Bool */;
val* var215 /* : MParameter */;
short int var216 /* : Bool */;
val* var_mparameter /* var mparameter: MParameter */;
val* var217 /* : null */;
short int var218 /* : Bool */;
short int var219 /* : Bool */;
short int var221 /* : Bool */;
short int var223 /* : Bool */;
val* var224 /* : null */;
short int var225 /* : Bool */;
short int var226 /* : Bool */;
short int var228 /* : Bool */;
short int var230 /* : Bool */;
short int var231 /* : Bool */;
short int var232 /* : Bool */;
short int var_ /* var : Bool */;
val* var233 /* : null */;
short int var234 /* : Bool */;
short int var235 /* : Bool */;
short int var237 /* : Bool */;
short int var238 /* : Bool */;
short int var239 /* : Bool */;
short int var240 /* : Bool */;
short int var241 /* : Bool */;
static val* varonce242;
val* var243 /* : String */;
char* var244 /* : NativeString */;
long var245 /* : Int */;
val* var246 /* : FlatString */;
static val* varonce247;
val* var248 /* : String */;
char* var249 /* : NativeString */;
long var250 /* : Int */;
val* var251 /* : FlatString */;
static val* varonce252;
val* var253 /* : String */;
char* var254 /* : NativeString */;
long var255 /* : Int */;
val* var256 /* : FlatString */;
static val* varonce257;
val* var258 /* : String */;
char* var259 /* : NativeString */;
long var260 /* : Int */;
val* var261 /* : FlatString */;
val* var262 /* : String */;
val* var263 /* : Array[Object] */;
long var264 /* : Int */;
val* var265 /* : NativeArray[Object] */;
val* var266 /* : String */;
val* var267 /* : ToolContext */;
val* var269 /* : ToolContext */;
static val* varonce270;
val* var271 /* : String */;
char* var272 /* : NativeString */;
long var273 /* : Int */;
val* var274 /* : FlatString */;
val* var275 /* : Array[Object] */;
long var276 /* : Int */;
val* var277 /* : NativeArray[Object] */;
val* var278 /* : String */;
long var279 /* : Int */;
val* var280 /* : MClass */;
val* var282 /* : MClass */;
short int var284 /* : Bool */;
short int var285 /* : Bool */;
short int var286 /* : Bool */;
short int var_287 /* var : Bool */;
val* var288 /* : null */;
short int var289 /* : Bool */;
short int var290 /* : Bool */;
short int var292 /* : Bool */;
short int var293 /* : Bool */;
short int var294 /* : Bool */;
static val* varonce295;
val* var296 /* : String */;
char* var297 /* : NativeString */;
long var298 /* : Int */;
val* var299 /* : FlatString */;
static val* varonce300;
val* var301 /* : String */;
char* var302 /* : NativeString */;
long var303 /* : Int */;
val* var304 /* : FlatString */;
val* var305 /* : String */;
static val* varonce306;
val* var307 /* : String */;
char* var308 /* : NativeString */;
long var309 /* : Int */;
val* var310 /* : FlatString */;
val* var311 /* : Array[Object] */;
long var312 /* : Int */;
val* var313 /* : NativeArray[Object] */;
val* var314 /* : String */;
short int var315 /* : Bool */;
short int var316 /* : Bool */;
short int var317 /* : Bool */;
short int var318 /* : Bool */;
short int var_319 /* var : Bool */;
long var320 /* : Int */;
long var321 /* : Int */;
short int var322 /* : Bool */;
short int var323 /* : Bool */;
short int var325 /* : Bool */;
val* var326 /* : nullable Object */;
val* var327 /* : MClassDef */;
val* var329 /* : MClassDef */;
val* var330 /* : MClass */;
val* var332 /* : MClass */;
val* var333 /* : MClass */;
val* var335 /* : MClass */;
val* var337 /* : ToolContext */;
val* var339 /* : ToolContext */;
static val* varonce340;
val* var341 /* : String */;
char* var342 /* : NativeString */;
long var343 /* : Int */;
val* var344 /* : FlatString */;
val* var345 /* : Array[Object] */;
long var346 /* : Int */;
val* var347 /* : NativeArray[Object] */;
val* var348 /* : String */;
long var349 /* : Int */;
val* var351 /* : MMethod */;
static val* varonce352;
val* var353 /* : String */;
char* var354 /* : NativeString */;
long var355 /* : Int */;
val* var356 /* : FlatString */;
val* var357 /* : MClass */;
val* var359 /* : MClass */;
val* var360 /* : MVisibility */;
val* var362 /* : MVisibility */;
val* var_mprop /* var mprop: MMethod */;
val* var363 /* : MMethodDef */;
val* var364 /* : Location */;
val* var_mpropdef365 /* var mpropdef: MMethodDef */;
val* var366 /* : MSignature */;
val* var367 /* : null */;
val* var_msignature /* var msignature: MSignature */;
short int var369 /* : Bool */;
val* var372 /* : ToolContext */;
val* var374 /* : ToolContext */;
static val* varonce375;
val* var376 /* : String */;
char* var377 /* : NativeString */;
long var378 /* : Int */;
val* var379 /* : FlatString */;
val* var380 /* : Array[Object] */;
long var381 /* : Int */;
val* var382 /* : NativeArray[Object] */;
val* var383 /* : String */;
long var384 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 75);
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
var7 = var_mclassdef->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 474);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var5) on <var5:MClass> */
var10 = var5->attrs[COLOR_model__MClass___kind].val; /* _kind on <var5:MClass> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 355);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline model#MClassKind#need_init (var8) on <var8:MClassKind> */
var13 = var8->attrs[COLOR_model__MClassKind___need_init].s; /* _need_init on <var8:MClassKind> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
var14 = !var11;
if (var14){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassDef#mpropdefs (var_mclassdef) on <var_mclassdef:MClassDef> */
var17 = var_mclassdef->attrs[COLOR_model__MClassDef___mpropdefs].val; /* _mpropdefs on <var_mclassdef:MClassDef> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 574);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = array__AbstractArrayRead__iterator(var15);
}
for(;;) {
{
var19 = array__ArrayIterator__is_ok(var18);
}
if(!var19) break;
{
var20 = array__ArrayIterator__item(var18);
}
var_mpropdef = var20;
/* <var_mpropdef:MPropDef> isa MMethodDef */
cltype = type_model__MMethodDef.color;
idtype = type_model__MMethodDef.id;
if(cltype >= var_mpropdef->type->table_size) {
var21 = 0;
} else {
var21 = var_mpropdef->type->type_table[cltype] == idtype;
}
var22 = !var21;
if (var22){
goto CONTINUE_label;
} else {
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MPropDef(MMethodDef)> */
var25 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MPropDef(MMethodDef)> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline model#MMethod#is_init (var23) on <var23:MProperty(MMethod)> */
var28 = var23->attrs[COLOR_model__MMethod___is_init].s; /* _is_init on <var23:MProperty(MMethod)> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
if (var26){
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var18); /* Direct call array#ArrayIterator#next on <var18:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype30 = type_parser_nodes__AStdClassdef.color;
idtype31 = type_parser_nodes__AStdClassdef.id;
if(cltype30 >= var_nclassdef->type->table_size) {
var29 = 0;
} else {
var29 = var_nclassdef->type->type_table[cltype30] == idtype31;
}
var32 = !var29;
if (var32){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var35 = var_mclassdef->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 471);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
var_mmodule = var33;
var36 = NEW_array__Array(&type_array__Arraymodel__MMethod);
{
array__Array__init(var36); /* Direct call array#Array#init on <var36:Array[MMethod]>*/
}
var_combine = var36;
var37 = NULL;
var_inhc = var37;
{
{ /* Inline model#MClassDef#supertypes (var_mclassdef) on <var_mclassdef:MClassDef> */
var40 = var_mclassdef->attrs[COLOR_model__MClassDef___supertypes].val; /* _supertypes on <var_mclassdef:MClassDef> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supertypes");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 517);
show_backtrace(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
var41 = array__AbstractArrayRead__iterator(var38);
}
for(;;) {
{
var42 = array__ArrayIterator__is_ok(var41);
}
if(!var42) break;
{
var43 = array__ArrayIterator__item(var41);
}
var_st = var43;
{
{ /* Inline model#MClassType#mclass (var_st) on <var_st:MClassType> */
var46 = var_st->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_st:MClassType> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
var_c = var44;
{
{ /* Inline model#MClass#kind (var_c) on <var_c:MClass> */
var49 = var_c->attrs[COLOR_model__MClass___kind].val; /* _kind on <var_c:MClass> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 355);
show_backtrace(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline model#MClassKind#need_init (var47) on <var47:MClassKind> */
var52 = var47->attrs[COLOR_model__MClassKind___need_init].s; /* _need_init on <var47:MClassKind> */
var50 = var52;
RET_LABEL51:(void)0;
}
}
var53 = !var50;
if (var53){
goto CONTINUE_label54;
} else {
}
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var57 = var_mclassdef->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
var58 = model__MClassType__anchor_to(var_st, var_mmodule, var55);
}
var_st = var58;
if (varonce) {
var59 = varonce;
} else {
var60 = "init";
var61 = 4;
var62 = string__NativeString__to_s_with_length(var60, var61);
var59 = var62;
varonce = var59;
}
{
var63 = modelbuilder__ModelBuilder__try_get_mproperty_by_name2(self, var_nclassdef, var_mmodule, var_st, var59);
}
/* <var63:nullable MProperty> isa nullable MMethod */
cltype65 = type_nullable_model__MMethod.color;
idtype66 = type_nullable_model__MMethod.id;
if(var63 == NULL) {
var64 = 1;
} else {
if(cltype65 >= var63->type->table_size) {
var64 = 0;
} else {
var64 = var63->type->type_table[cltype65] == idtype66;
}
}
if (unlikely(!var64)) {
var_class_name = var63 == NULL ? "null" : var63->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MMethod", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 99);
show_backtrace(1);
}
var_candidate = var63;
var67 = NULL;
if (var_candidate == NULL) {
var68 = 0; /* is null */
} else {
var68 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_candidate,var67) on <var_candidate:nullable MMethod> */
var_other = var67;
{
var72 = ((short int (*)(val*, val*))(var_candidate->class->vft[COLOR_kernel__Object___61d_61d]))(var_candidate, var_other) /* == on <var_candidate:nullable MMethod(MMethod)>*/;
var71 = var72;
}
var73 = !var71;
var69 = var73;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
var68 = var69;
}
if (var68){
{
var74 = model__MProperty__intro(var_candidate);
}
{
{ /* Inline model#MMethodDef#msignature (var74) on <var74:MPropDef(MMethodDef)> */
var77 = var74->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var74:MPropDef(MMethodDef)> */
var75 = var77;
RET_LABEL76:(void)0;
}
}
var78 = NULL;
if (var75 == NULL) {
var79 = 0; /* is null */
} else {
var79 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var75,var78) on <var75:nullable MSignature> */
var_other = var78;
{
var83 = ((short int (*)(val*, val*))(var75->class->vft[COLOR_kernel__Object___61d_61d]))(var75, var_other) /* == on <var75:nullable MSignature(MSignature)>*/;
var82 = var83;
}
var84 = !var82;
var80 = var84;
goto RET_LABEL81;
RET_LABEL81:(void)0;
}
var79 = var80;
}
if (var79){
{
var85 = model__MProperty__intro(var_candidate);
}
{
{ /* Inline model#MMethodDef#msignature (var85) on <var85:MPropDef(MMethodDef)> */
var88 = var85->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var85:MPropDef(MMethodDef)> */
var86 = var88;
RET_LABEL87:(void)0;
}
}
if (var86 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 102);
show_backtrace(1);
} else {
var89 = model__MSignature__arity(var86);
}
var90 = 0;
{
{ /* Inline kernel#Int#== (var89,var90) on <var89:Int> */
var94 = var89 == var90;
var92 = var94;
goto RET_LABEL93;
RET_LABEL93:(void)0;
}
var91 = var92;
}
if (var91){
{
array__Array__add(var_combine, var_candidate); /* Direct call array#Array#add on <var_combine:Array[MMethod]>*/
}
goto CONTINUE_label54;
} else {
}
} else {
}
} else {
}
{
{ /* Inline modelize_property#MClass#inherit_init_from (var_c) on <var_c:MClass> */
var97 = var_c->attrs[COLOR_modelize_property__MClass___inherit_init_from].val; /* _inherit_init_from on <var_c:MClass> */
var95 = var97;
RET_LABEL96:(void)0;
}
}
var_inhc2 = var95;
var98 = NULL;
if (var_inhc2 == NULL) {
var99 = 1; /* is null */
} else {
var99 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_inhc2,var98) on <var_inhc2:nullable MClass> */
var_other102 = var98;
{
{ /* Inline kernel#Object#is_same_instance (var_inhc2,var_other102) on <var_inhc2:nullable MClass(MClass)> */
var105 = var_inhc2 == var_other102;
var103 = var105;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
}
var100 = var103;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
var99 = var100;
}
if (var99){
var_inhc2 = var_c;
} else {
}
{
{ /* Inline kernel#Object#== (var_inhc2,var_inhc) on <var_inhc2:nullable MClass(MClass)> */
var_other102 = var_inhc;
{
{ /* Inline kernel#Object#is_same_instance (var_inhc2,var_other102) on <var_inhc2:nullable MClass(MClass)> */
var111 = var_inhc2 == var_other102;
var109 = var111;
goto RET_LABEL110;
RET_LABEL110:(void)0;
}
}
var107 = var109;
goto RET_LABEL108;
RET_LABEL108:(void)0;
}
var106 = var107;
}
if (var106){
goto CONTINUE_label54;
} else {
}
var112 = NULL;
if (var_inhc == NULL) {
var113 = 0; /* is null */
} else {
var113 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_inhc,var112) on <var_inhc:nullable MClass> */
var_other = var112;
{
var117 = ((short int (*)(val*, val*))(var_inhc->class->vft[COLOR_kernel__Object___61d_61d]))(var_inhc, var_other) /* == on <var_inhc:nullable MClass(MClass)>*/;
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
if (varonce119) {
var120 = varonce119;
} else {
var121 = "Error: Cannot provide a defaut constructor: conflict for ";
var122 = 57;
var123 = string__NativeString__to_s_with_length(var121, var122);
var120 = var123;
varonce119 = var120;
}
if (varonce124) {
var125 = varonce124;
} else {
var126 = " and ";
var127 = 5;
var128 = string__NativeString__to_s_with_length(var126, var127);
var125 = var128;
varonce124 = var125;
}
var129 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var129 = array_instance Array[Object] */
var130 = 4;
var131 = NEW_array__NativeArray(var130, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var131)->values[0] = (val*) var120;
((struct instance_array__NativeArray*)var131)->values[1] = (val*) var_inhc;
((struct instance_array__NativeArray*)var131)->values[2] = (val*) var125;
((struct instance_array__NativeArray*)var131)->values[3] = (val*) var_c;
{
((void (*)(val*, val*, long))(var129->class->vft[COLOR_array__Array__with_native]))(var129, var131, var130) /* with_native on <var129:Array[Object]>*/;
}
}
{
var132 = ((val* (*)(val*))(var129->class->vft[COLOR_string__Object__to_s]))(var129) /* to_s on <var129:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_nclassdef, var132); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
var_inhc = var_inhc2;
}
CONTINUE_label54: (void)0;
{
array__ArrayIterator__next(var41); /* Direct call array#ArrayIterator#next on <var41:ArrayIterator[nullable Object]>*/
}
}
BREAK_label54: (void)0;
var133 = NEW_array__Array(&type_array__Arraymodel__MParameter);
{
array__Array__init(var133); /* Direct call array#Array#init on <var133:Array[MParameter]>*/
}
var_mparameters = var133;
var134 = NULL;
var_anode = var134;
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var137 = var_nclassdef->attrs[COLOR_parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var137 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 802);
show_backtrace(1);
}
var135 = var137;
RET_LABEL136:(void)0;
}
}
{
var138 = parser_nodes__ANodes__iterator(var135);
}
for(;;) {
{
var139 = ((short int (*)(val*))(var138->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var138) /* is_ok on <var138:Iterator[ANode]>*/;
}
if(!var139) break;
{
var140 = ((val* (*)(val*))(var138->class->vft[COLOR_abstract_collection__Iterator__item]))(var138) /* item on <var138:Iterator[ANode]>*/;
}
var_npropdef = var140;
/* <var_npropdef:APropdef> isa AAttrPropdef */
cltype142 = type_parser_nodes__AAttrPropdef.color;
idtype143 = type_parser_nodes__AAttrPropdef.id;
if(cltype142 >= var_npropdef->type->table_size) {
var141 = 0;
} else {
var141 = var_npropdef->type->type_table[cltype142] == idtype143;
}
if (var141){
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var146 = var_npropdef->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:APropdef(AAttrPropdef)> */
var144 = var146;
RET_LABEL145:(void)0;
}
}
var147 = NULL;
if (var144 == NULL) {
var148 = 1; /* is null */
} else {
var148 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var144,var147) on <var144:nullable MPropDef(nullable MAttributeDef)> */
var_other102 = var147;
{
{ /* Inline kernel#Object#is_same_instance (var144,var_other102) on <var144:nullable MAttributeDef(MAttributeDef)> */
var153 = var144 == var_other102;
var151 = var153;
goto RET_LABEL152;
RET_LABEL152:(void)0;
}
}
var149 = var151;
goto RET_LABEL150;
RET_LABEL150:(void)0;
}
var148 = var149;
}
if (var148){
goto RET_LABEL;
} else {
}
if (varonce154) {
var155 = varonce154;
} else {
var156 = "noinit";
var157 = 6;
var158 = string__NativeString__to_s_with_length(var156, var157);
var155 = var158;
varonce154 = var155;
}
{
var159 = annotation__Prod__get_single_annotation(var_npropdef, var155, self);
}
var_at = var159;
var160 = NULL;
if (var_at == NULL) {
var161 = 0; /* is null */
} else {
var161 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_at,var160) on <var_at:nullable AAnnotation> */
var_other = var160;
{
var165 = ((short int (*)(val*, val*))(var_at->class->vft[COLOR_kernel__Object___61d_61d]))(var_at, var_other) /* == on <var_at:nullable AAnnotation(AAnnotation)>*/;
var164 = var165;
}
var166 = !var164;
var162 = var166;
goto RET_LABEL163;
RET_LABEL163:(void)0;
}
var161 = var162;
}
if (var161){
var167 = 1;
{
{ /* Inline modelize_property#AAttrPropdef#noinit= (var_npropdef,var167) on <var_npropdef:APropdef(AAttrPropdef)> */
var_npropdef->attrs[COLOR_modelize_property__AAttrPropdef___noinit].s = var167; /* _noinit on <var_npropdef:APropdef(AAttrPropdef)> */
RET_LABEL168:(void)0;
}
}
{
var169 = parser_nodes__AAttrPropdef__n_expr(var_npropdef);
}
var170 = NULL;
if (var169 == NULL) {
var171 = 0; /* is null */
} else {
var171 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var169,var170) on <var169:nullable AExpr> */
var_other = var170;
{
var175 = ((short int (*)(val*, val*))(var169->class->vft[COLOR_kernel__Object___61d_61d]))(var169, var_other) /* == on <var169:nullable AExpr(AExpr)>*/;
var174 = var175;
}
var176 = !var174;
var172 = var176;
goto RET_LABEL173;
RET_LABEL173:(void)0;
}
var171 = var172;
}
if (var171){
if (varonce177) {
var178 = varonce177;
} else {
var179 = "Error: `noinit` attributes cannot have an initial value";
var180 = 55;
var181 = string__NativeString__to_s_with_length(var179, var180);
var178 = var181;
varonce177 = var178;
}
{
modelbuilder__ModelBuilder__error(self, var_at, var178); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
goto CONTINUE_label182;
} else {
}
{
var183 = parser_nodes__AAttrPropdef__n_expr(var_npropdef);
}
var184 = NULL;
if (var183 == NULL) {
var185 = 0; /* is null */
} else {
var185 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var183,var184) on <var183:nullable AExpr> */
var_other = var184;
{
var189 = ((short int (*)(val*, val*))(var183->class->vft[COLOR_kernel__Object___61d_61d]))(var183, var_other) /* == on <var183:nullable AExpr(AExpr)>*/;
var188 = var189;
}
var190 = !var188;
var186 = var190;
goto RET_LABEL187;
RET_LABEL187:(void)0;
}
var185 = var186;
}
if (var185){
goto CONTINUE_label182;
} else {
}
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var193 = var_npropdef->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:APropdef(AAttrPropdef)> */
var191 = var193;
RET_LABEL192:(void)0;
}
}
if (var191 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 133);
show_backtrace(1);
} else {
{ /* Inline model#MPropDef#mproperty (var191) on <var191:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var191 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var196 = var191->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var191:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var196 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var194 = var196;
RET_LABEL195:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var194) on <var194:MProperty(MAttribute)> */
var199 = var194->attrs[COLOR_model__MProperty___name].val; /* _name on <var194:MProperty(MAttribute)> */
if (unlikely(var199 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1607);
show_backtrace(1);
}
var197 = var199;
RET_LABEL198:(void)0;
}
}
var200 = 1;
{
var201 = string__Text__substring_from(var197, var200);
}
var_paramname = var201;
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var204 = var_npropdef->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:APropdef(AAttrPropdef)> */
var202 = var204;
RET_LABEL203:(void)0;
}
}
if (var202 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 134);
show_backtrace(1);
} else {
{ /* Inline model#MAttributeDef#static_mtype (var202) on <var202:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var202 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1963);
show_backtrace(1);
}
var207 = var202->attrs[COLOR_model__MAttributeDef___static_mtype].val; /* _static_mtype on <var202:nullable MPropDef(nullable MAttributeDef)> */
var205 = var207;
RET_LABEL206:(void)0;
}
}
var_ret_type = var205;
var208 = NULL;
if (var_ret_type == NULL) {
var209 = 1; /* is null */
} else {
var209 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ret_type,var208) on <var_ret_type:nullable MType> */
var_other102 = var208;
{
{ /* Inline kernel#Object#is_same_instance (var_ret_type,var_other102) on <var_ret_type:nullable MType(MType)> */
var214 = var_ret_type == var_other102;
var212 = var214;
goto RET_LABEL213;
RET_LABEL213:(void)0;
}
}
var210 = var212;
goto RET_LABEL211;
RET_LABEL211:(void)0;
}
var209 = var210;
}
if (var209){
goto RET_LABEL;
} else {
}
var215 = NEW_model__MParameter(&type_model__MParameter);
var216 = 0;
{
model__MParameter__init(var215, var_paramname, var_ret_type, var216); /* Direct call model#MParameter#init on <var215:MParameter>*/
}
var_mparameter = var215;
{
array__Array__add(var_mparameters, var_mparameter); /* Direct call array#Array#add on <var_mparameters:Array[MParameter]>*/
}
var217 = NULL;
if (var_anode == NULL) {
var218 = 1; /* is null */
} else {
var218 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_anode,var217) on <var_anode:nullable ANode> */
var_other102 = var217;
{
{ /* Inline kernel#Object#is_same_instance (var_anode,var_other102) on <var_anode:nullable ANode(ANode)> */
var223 = var_anode == var_other102;
var221 = var223;
goto RET_LABEL222;
RET_LABEL222:(void)0;
}
}
var219 = var221;
goto RET_LABEL220;
RET_LABEL220:(void)0;
}
var218 = var219;
}
if (var218){
var_anode = var_npropdef;
} else {
}
} else {
}
CONTINUE_label182: (void)0;
{
((void (*)(val*))(var138->class->vft[COLOR_abstract_collection__Iterator__next]))(var138) /* next on <var138:Iterator[ANode]>*/;
}
}
BREAK_label182: (void)0;
var224 = NULL;
if (var_anode == NULL) {
var225 = 1; /* is null */
} else {
var225 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_anode,var224) on <var_anode:nullable ANode> */
var_other102 = var224;
{
{ /* Inline kernel#Object#is_same_instance (var_anode,var_other102) on <var_anode:nullable ANode(ANode)> */
var230 = var_anode == var_other102;
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
var_anode = var_nclassdef;
} else {
}
{
var232 = array__AbstractArrayRead__is_empty(var_combine);
}
var_ = var232;
if (var232){
var233 = NULL;
if (var_inhc == NULL) {
var234 = 0; /* is null */
} else {
var234 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_inhc,var233) on <var_inhc:nullable MClass> */
var_other = var233;
{
var238 = ((short int (*)(val*, val*))(var_inhc->class->vft[COLOR_kernel__Object___61d_61d]))(var_inhc, var_other) /* == on <var_inhc:nullable MClass(MClass)>*/;
var237 = var238;
}
var239 = !var237;
var235 = var239;
goto RET_LABEL236;
RET_LABEL236:(void)0;
}
var234 = var235;
}
var231 = var234;
} else {
var231 = var_;
}
if (var231){
{
var240 = array__AbstractArrayRead__is_empty(var_mparameters);
}
var241 = !var240;
if (var241){
if (varonce242) {
var243 = varonce242;
} else {
var244 = "Error: ";
var245 = 7;
var246 = string__NativeString__to_s_with_length(var244, var245);
var243 = var246;
varonce242 = var243;
}
if (varonce247) {
var248 = varonce247;
} else {
var249 = " cannot inherit constructors from ";
var250 = 34;
var251 = string__NativeString__to_s_with_length(var249, var250);
var248 = var251;
varonce247 = var248;
}
if (varonce252) {
var253 = varonce252;
} else {
var254 = " because there is attributes without initial values: ";
var255 = 53;
var256 = string__NativeString__to_s_with_length(var254, var255);
var253 = var256;
varonce252 = var253;
}
if (varonce257) {
var258 = varonce257;
} else {
var259 = ", ";
var260 = 2;
var261 = string__NativeString__to_s_with_length(var259, var260);
var258 = var261;
varonce257 = var258;
}
{
var262 = string__Collection__join(var_mparameters, var258);
}
var263 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var263 = array_instance Array[Object] */
var264 = 6;
var265 = NEW_array__NativeArray(var264, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var265)->values[0] = (val*) var243;
((struct instance_array__NativeArray*)var265)->values[1] = (val*) var_mclassdef;
((struct instance_array__NativeArray*)var265)->values[2] = (val*) var248;
((struct instance_array__NativeArray*)var265)->values[3] = (val*) var_inhc;
((struct instance_array__NativeArray*)var265)->values[4] = (val*) var253;
((struct instance_array__NativeArray*)var265)->values[5] = (val*) var262;
{
((void (*)(val*, val*, long))(var263->class->vft[COLOR_array__Array__with_native]))(var263, var265, var264) /* with_native on <var263:Array[Object]>*/;
}
}
{
var266 = ((val* (*)(val*))(var263->class->vft[COLOR_string__Object__to_s]))(var263) /* to_s on <var263:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_anode, var266); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var269 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var269 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var267 = var269;
RET_LABEL268:(void)0;
}
}
if (varonce270) {
var271 = varonce270;
} else {
var272 = " inherits all constructors from ";
var273 = 32;
var274 = string__NativeString__to_s_with_length(var272, var273);
var271 = var274;
varonce270 = var271;
}
var275 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var275 = array_instance Array[Object] */
var276 = 3;
var277 = NEW_array__NativeArray(var276, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var277)->values[0] = (val*) var_mclassdef;
((struct instance_array__NativeArray*)var277)->values[1] = (val*) var271;
((struct instance_array__NativeArray*)var277)->values[2] = (val*) var_inhc;
{
((void (*)(val*, val*, long))(var275->class->vft[COLOR_array__Array__with_native]))(var275, var277, var276) /* with_native on <var275:Array[Object]>*/;
}
}
{
var278 = ((val* (*)(val*))(var275->class->vft[COLOR_string__Object__to_s]))(var275) /* to_s on <var275:Array[Object]>*/;
}
var279 = 3;
{
toolcontext__ToolContext__info(var267, var278, var279); /* Direct call toolcontext#ToolContext#info on <var267:ToolContext>*/
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var282 = var_mclassdef->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var282 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 474);
show_backtrace(1);
}
var280 = var282;
RET_LABEL281:(void)0;
}
}
{
{ /* Inline modelize_property#MClass#inherit_init_from= (var280,var_inhc) on <var280:MClass> */
var280->attrs[COLOR_modelize_property__MClass___inherit_init_from].val = var_inhc; /* _inherit_init_from on <var280:MClass> */
RET_LABEL283:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
var285 = array__AbstractArrayRead__is_empty(var_combine);
}
var286 = !var285;
var_287 = var286;
if (var286){
var288 = NULL;
if (var_inhc == NULL) {
var289 = 0; /* is null */
} else {
var289 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_inhc,var288) on <var_inhc:nullable MClass> */
var_other = var288;
{
var293 = ((short int (*)(val*, val*))(var_inhc->class->vft[COLOR_kernel__Object___61d_61d]))(var_inhc, var_other) /* == on <var_inhc:nullable MClass(MClass)>*/;
var292 = var293;
}
var294 = !var292;
var290 = var294;
goto RET_LABEL291;
RET_LABEL291:(void)0;
}
var289 = var290;
}
var284 = var289;
} else {
var284 = var_287;
}
if (var284){
if (varonce295) {
var296 = varonce295;
} else {
var297 = "Error: Cannot provide a defaut constructor: conflict for ";
var298 = 57;
var299 = string__NativeString__to_s_with_length(var297, var298);
var296 = var299;
varonce295 = var296;
}
if (varonce300) {
var301 = varonce300;
} else {
var302 = ", ";
var303 = 2;
var304 = string__NativeString__to_s_with_length(var302, var303);
var301 = var304;
varonce300 = var301;
}
{
var305 = string__Collection__join(var_combine, var301);
}
if (varonce306) {
var307 = varonce306;
} else {
var308 = " and ";
var309 = 5;
var310 = string__NativeString__to_s_with_length(var308, var309);
var307 = var310;
varonce306 = var307;
}
var311 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var311 = array_instance Array[Object] */
var312 = 4;
var313 = NEW_array__NativeArray(var312, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var313)->values[0] = (val*) var296;
((struct instance_array__NativeArray*)var313)->values[1] = (val*) var305;
((struct instance_array__NativeArray*)var313)->values[2] = (val*) var307;
((struct instance_array__NativeArray*)var313)->values[3] = (val*) var_inhc;
{
((void (*)(val*, val*, long))(var311->class->vft[COLOR_array__Array__with_native]))(var311, var313, var312) /* with_native on <var311:Array[Object]>*/;
}
}
{
var314 = ((val* (*)(val*))(var311->class->vft[COLOR_string__Object__to_s]))(var311) /* to_s on <var311:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_nclassdef, var314); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
var315 = array__AbstractArrayRead__is_empty(var_combine);
}
var316 = !var315;
if (var316){
{
var318 = array__AbstractArrayRead__is_empty(var_mparameters);
}
var_319 = var318;
if (var318){
{
var320 = array__AbstractArrayRead__length(var_combine);
}
var321 = 1;
{
{ /* Inline kernel#Int#== (var320,var321) on <var320:Int> */
var325 = var320 == var321;
var323 = var325;
goto RET_LABEL324;
RET_LABEL324:(void)0;
}
var322 = var323;
}
var317 = var322;
} else {
var317 = var_319;
}
if (var317){
{
var326 = abstract_collection__SequenceRead__first(var_combine);
}
{
{ /* Inline model#MProperty#intro_mclassdef (var326) on <var326:nullable Object(MMethod)> */
var329 = var326->attrs[COLOR_model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var326:nullable Object(MMethod)> */
if (unlikely(var329 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1602);
show_backtrace(1);
}
var327 = var329;
RET_LABEL328:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var327) on <var327:MClassDef> */
var332 = var327->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var327:MClassDef> */
if (unlikely(var332 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 474);
show_backtrace(1);
}
var330 = var332;
RET_LABEL331:(void)0;
}
}
var_inhc = var330;
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var335 = var_mclassdef->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var335 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 474);
show_backtrace(1);
}
var333 = var335;
RET_LABEL334:(void)0;
}
}
{
{ /* Inline modelize_property#MClass#inherit_init_from= (var333,var_inhc) on <var333:MClass> */
var333->attrs[COLOR_modelize_property__MClass___inherit_init_from].val = var_inhc; /* _inherit_init_from on <var333:MClass> */
RET_LABEL336:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var339 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var339 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var337 = var339;
RET_LABEL338:(void)0;
}
}
if (varonce340) {
var341 = varonce340;
} else {
var342 = " inherits all constructors from ";
var343 = 32;
var344 = string__NativeString__to_s_with_length(var342, var343);
var341 = var344;
varonce340 = var341;
}
var345 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var345 = array_instance Array[Object] */
var346 = 3;
var347 = NEW_array__NativeArray(var346, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var347)->values[0] = (val*) var_mclassdef;
((struct instance_array__NativeArray*)var347)->values[1] = (val*) var341;
((struct instance_array__NativeArray*)var347)->values[2] = (val*) var_inhc;
{
((void (*)(val*, val*, long))(var345->class->vft[COLOR_array__Array__with_native]))(var345, var347, var346) /* with_native on <var345:Array[Object]>*/;
}
}
{
var348 = ((val* (*)(val*))(var345->class->vft[COLOR_string__Object__to_s]))(var345) /* to_s on <var345:Array[Object]>*/;
}
var349 = 3;
{
toolcontext__ToolContext__info(var337, var348, var349); /* Direct call toolcontext#ToolContext#info on <var337:ToolContext>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property#AClassdef#super_inits= (var_nclassdef,var_combine) on <var_nclassdef:AClassdef(AStdClassdef)> */
var_nclassdef->attrs[COLOR_modelize_property__AClassdef___super_inits].val = var_combine; /* _super_inits on <var_nclassdef:AClassdef(AStdClassdef)> */
RET_LABEL350:(void)0;
}
}
} else {
}
var351 = NEW_model__MMethod(&type_model__MMethod);
if (varonce352) {
var353 = varonce352;
} else {
var354 = "init";
var355 = 4;
var356 = string__NativeString__to_s_with_length(var354, var355);
var353 = var356;
varonce352 = var353;
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var359 = var_mclassdef->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var359 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 474);
show_backtrace(1);
}
var357 = var359;
RET_LABEL358:(void)0;
}
}
{
{ /* Inline model#MClass#visibility (var357) on <var357:MClass> */
var362 = var357->attrs[COLOR_model__MClass___visibility].val; /* _visibility on <var357:MClass> */
if (unlikely(var362 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 359);
show_backtrace(1);
}
var360 = var362;
RET_LABEL361:(void)0;
}
}
{
model__MMethod__init(var351, var_mclassdef, var353, var360); /* Direct call model#MMethod#init on <var351:MMethod>*/
}
var_mprop = var351;
var363 = NEW_model__MMethodDef(&type_model__MMethodDef);
{
var364 = parser_nodes__ANode__location(var_nclassdef);
}
{
model__MMethodDef__init(var363, var_mclassdef, var_mprop, var364); /* Direct call model#MMethodDef#init on <var363:MMethodDef>*/
}
var_mpropdef365 = var363;
var366 = NEW_model__MSignature(&type_model__MSignature);
var367 = NULL;
{
model__MSignature__init(var366, var_mparameters, var367); /* Direct call model#MSignature#init on <var366:MSignature>*/
}
var_msignature = var366;
{
{ /* Inline model#MMethodDef#msignature= (var_mpropdef365,var_msignature) on <var_mpropdef365:MMethodDef> */
var_mpropdef365->attrs[COLOR_model__MMethodDef___msignature].val = var_msignature; /* _msignature on <var_mpropdef365:MMethodDef> */
RET_LABEL368:(void)0;
}
}
var369 = 1;
{
{ /* Inline model#MMethod#is_init= (var_mprop,var369) on <var_mprop:MMethod> */
var_mprop->attrs[COLOR_model__MMethod___is_init].s = var369; /* _is_init on <var_mprop:MMethod> */
RET_LABEL370:(void)0;
}
}
{
{ /* Inline modelize_property#AClassdef#mfree_init= (var_nclassdef,var_mpropdef365) on <var_nclassdef:AClassdef(AStdClassdef)> */
var_nclassdef->attrs[COLOR_modelize_property__AClassdef___mfree_init].val = var_mpropdef365; /* _mfree_init on <var_nclassdef:AClassdef(AStdClassdef)> */
RET_LABEL371:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var374 = self->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var374 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var372 = var374;
RET_LABEL373:(void)0;
}
}
if (varonce375) {
var376 = varonce375;
} else {
var377 = " gets a free constructor for attributes ";
var378 = 40;
var379 = string__NativeString__to_s_with_length(var377, var378);
var376 = var379;
varonce375 = var376;
}
var380 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var380 = array_instance Array[Object] */
var381 = 4;
var382 = NEW_array__NativeArray(var381, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var382)->values[0] = (val*) var_mclassdef;
((struct instance_array__NativeArray*)var382)->values[1] = (val*) var376;
((struct instance_array__NativeArray*)var382)->values[2] = (val*) var_mpropdef365;
((struct instance_array__NativeArray*)var382)->values[3] = (val*) var_msignature;
{
((void (*)(val*, val*, long))(var380->class->vft[COLOR_array__Array__with_native]))(var380, var382, var381) /* with_native on <var380:Array[Object]>*/;
}
}
{
var383 = ((val* (*)(val*))(var380->class->vft[COLOR_string__Object__to_s]))(var380) /* to_s on <var380:Array[Object]>*/;
}
var384 = 3;
{
toolcontext__ToolContext__info(var372, var383, var384); /* Direct call toolcontext#ToolContext#info on <var372:ToolContext>*/
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
val* var23 /* : MModule */;
val* var25 /* : MModule */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : MProperty */;
val* var31 /* : MProperty */;
val* var32 /* : MVisibility */;
val* var34 /* : MVisibility */;
val* var35 /* : MProperty */;
val* var37 /* : MProperty */;
val* var38 /* : MClassDef */;
val* var40 /* : MClassDef */;
val* var41 /* : MModule */;
val* var43 /* : MModule */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
static val* varonce;
val* var47 /* : String */;
char* var48 /* : NativeString */;
long var49 /* : Int */;
val* var50 /* : FlatString */;
val* var51 /* : Array[Object] */;
long var52 /* : Int */;
val* var53 /* : NativeArray[Object] */;
val* var54 /* : String */;
val* var55 /* : null */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
val* var62 /* : null */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
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
val* var153 /* : Iterator[ANode] */;
short int var154 /* : Bool */;
val* var155 /* : nullable Object */;
val* var_a /* var a: AType */;
val* var156 /* : nullable MType */;
val* var158 /* : nullable MType */;
val* var_t /* var t: nullable MType */;
val* var159 /* : null */;
short int var160 /* : Bool */;
short int var161 /* : Bool */;
val* var_other163 /* var other: nullable Object */;
short int var164 /* : Bool */;
short int var166 /* : Bool */;
short int var167 /* : Bool */;
int cltype168;
int idtype169;
val* var170 /* : Array[MType] */;
val* var172 /* : Array[MType] */;
val* var173 /* : ArrayIterator[nullable Object] */;
short int var174 /* : Bool */;
val* var175 /* : nullable Object */;
val* var_t176 /* var t: MType */;
var_node = p0;
var_mtype = p1;
var_mpropdef = p2;
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MPropDef> */
var2 = var_mpropdef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MPropDef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
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
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 471);
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
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
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
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
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
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 359);
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
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = model__MClass__intro(var19);
}
{
{ /* Inline model#MClassDef#mmodule (var22) on <var22:MClassDef> */
var25 = var22->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var22:MClassDef> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 471);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
var_mmodule_type = var23;
} else {
/* <var_mtype:MType> isa MVirtualType */
cltype27 = type_model__MVirtualType.color;
idtype28 = type_model__MVirtualType.id;
if(cltype27 >= var_mtype->type->table_size) {
var26 = 0;
} else {
var26 = var_mtype->type->type_table[cltype27] == idtype28;
}
if (var26){
{
{ /* Inline model#MVirtualType#mproperty (var_mtype) on <var_mtype:MType(MVirtualType)> */
var31 = var_mtype->attrs[COLOR_model__MVirtualType___mproperty].val; /* _mproperty on <var_mtype:MType(MVirtualType)> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1135);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline model#MProperty#visibility (var29) on <var29:MProperty> */
var34 = var29->attrs[COLOR_model__MProperty___visibility].val; /* _visibility on <var29:MProperty> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1617);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
var_vis_type = var32;
{
{ /* Inline model#MVirtualType#mproperty (var_mtype) on <var_mtype:MType(MVirtualType)> */
var37 = var_mtype->attrs[COLOR_model__MVirtualType___mproperty].val; /* _mproperty on <var_mtype:MType(MVirtualType)> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1135);
show_backtrace(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline model#MProperty#intro_mclassdef (var35) on <var35:MProperty> */
var40 = var35->attrs[COLOR_model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var35:MProperty> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1602);
show_backtrace(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var38) on <var38:MClassDef> */
var43 = var38->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var38:MClassDef> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 471);
show_backtrace(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
var_mmodule_type = var41;
} else {
/* <var_mtype:MType> isa MParameterType */
cltype45 = type_model__MParameterType.color;
idtype46 = type_model__MParameterType.id;
if(cltype45 >= var_mtype->type->table_size) {
var44 = 0;
} else {
var44 = var_mtype->type->type_table[cltype45] == idtype46;
}
if (var44){
} else {
if (varonce) {
var47 = varonce;
} else {
var48 = "Unexpected type ";
var49 = 16;
var50 = string__NativeString__to_s_with_length(var48, var49);
var47 = var50;
varonce = var47;
}
var51 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var51 = array_instance Array[Object] */
var52 = 2;
var53 = NEW_array__NativeArray(var52, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var53)->values[0] = (val*) var47;
((struct instance_array__NativeArray*)var53)->values[1] = (val*) var_mtype;
{
((void (*)(val*, val*, long))(var51->class->vft[COLOR_array__Array__with_native]))(var51, var53, var52) /* with_native on <var51:Array[Object]>*/;
}
}
{
var54 = ((val* (*)(val*))(var51->class->vft[COLOR_string__Object__to_s]))(var51) /* to_s on <var51:Array[Object]>*/;
}
{
parser_nodes__ANode__debug(var_node, var54); /* Direct call parser_nodes#ANode#debug on <var_node:ANode>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 201);
show_backtrace(1);
}
}
}
var55 = NULL;
if (var_vis_type == NULL) {
var56 = 0; /* is null */
} else {
var56 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_vis_type,var55) on <var_vis_type:nullable MVisibility> */
var_other = var55;
{
var60 = ((short int (*)(val*, val*))(var_vis_type->class->vft[COLOR_kernel__Object___61d_61d]))(var_vis_type, var_other) /* == on <var_vis_type:nullable MVisibility(MVisibility)>*/;
var59 = var60;
}
var61 = !var59;
var57 = var61;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
var56 = var57;
}
if (var56){
var62 = NULL;
if (var_mmodule_type == NULL) {
var63 = 0; /* is null */
} else {
var63 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mmodule_type,var62) on <var_mmodule_type:nullable MModule> */
var_other = var62;
{
var67 = ((short int (*)(val*, val*))(var_mmodule_type->class->vft[COLOR_kernel__Object___61d_61d]))(var_mmodule_type, var_other) /* == on <var_mmodule_type:nullable MModule(MModule)>*/;
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
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 205);
show_backtrace(1);
}
{
var69 = mmodule__MModule__visibility_for(var_mmodule, var_mmodule_type);
}
var_vis_module_type = var69;
{
{ /* Inline model#MProperty#visibility (var_mproperty) on <var_mproperty:MProperty> */
var72 = var_mproperty->attrs[COLOR_model__MProperty___visibility].val; /* _visibility on <var_mproperty:MProperty> */
if (unlikely(var72 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1617);
show_backtrace(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
{
var73 = kernel__Comparable___62d(var70, var_vis_type);
}
if (var73){
if (varonce74) {
var75 = varonce74;
} else {
var76 = "Error: The ";
var77 = 11;
var78 = string__NativeString__to_s_with_length(var76, var77);
var75 = var78;
varonce74 = var75;
}
{
{ /* Inline model#MProperty#visibility (var_mproperty) on <var_mproperty:MProperty> */
var81 = var_mproperty->attrs[COLOR_model__MProperty___visibility].val; /* _visibility on <var_mproperty:MProperty> */
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1617);
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
var86 = string__NativeString__to_s_with_length(var84, var85);
var83 = var86;
varonce82 = var83;
}
if (varonce87) {
var88 = varonce87;
} else {
var89 = "` cannot contain the ";
var90 = 21;
var91 = string__NativeString__to_s_with_length(var89, var90);
var88 = var91;
varonce87 = var88;
}
if (varonce92) {
var93 = varonce92;
} else {
var94 = " type `";
var95 = 7;
var96 = string__NativeString__to_s_with_length(var94, var95);
var93 = var96;
varonce92 = var93;
}
if (varonce97) {
var98 = varonce97;
} else {
var99 = "`";
var100 = 1;
var101 = string__NativeString__to_s_with_length(var99, var100);
var98 = var101;
varonce97 = var98;
}
var102 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var102 = array_instance Array[Object] */
var103 = 9;
var104 = NEW_array__NativeArray(var103, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var104)->values[0] = (val*) var75;
((struct instance_array__NativeArray*)var104)->values[1] = (val*) var79;
((struct instance_array__NativeArray*)var104)->values[2] = (val*) var83;
((struct instance_array__NativeArray*)var104)->values[3] = (val*) var_mproperty;
((struct instance_array__NativeArray*)var104)->values[4] = (val*) var88;
((struct instance_array__NativeArray*)var104)->values[5] = (val*) var_vis_type;
((struct instance_array__NativeArray*)var104)->values[6] = (val*) var93;
((struct instance_array__NativeArray*)var104)->values[7] = (val*) var_mtype;
((struct instance_array__NativeArray*)var104)->values[8] = (val*) var98;
{
((void (*)(val*, val*, long))(var102->class->vft[COLOR_array__Array__with_native]))(var102, var104, var103) /* with_native on <var102:Array[Object]>*/;
}
}
{
var105 = ((val* (*)(val*))(var102->class->vft[COLOR_string__Object__to_s]))(var102) /* to_s on <var102:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_node, var105); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
{
{ /* Inline model#MProperty#visibility (var_mproperty) on <var_mproperty:MProperty> */
var108 = var_mproperty->attrs[COLOR_model__MProperty___visibility].val; /* _visibility on <var_mproperty:MProperty> */
if (unlikely(var108 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1617);
show_backtrace(1);
}
var106 = var108;
RET_LABEL107:(void)0;
}
}
{
var109 = kernel__Comparable___62d(var106, var_vis_module_type);
}
if (var109){
if (varonce110) {
var111 = varonce110;
} else {
var112 = "Error: The ";
var113 = 11;
var114 = string__NativeString__to_s_with_length(var112, var113);
var111 = var114;
varonce110 = var111;
}
{
{ /* Inline model#MProperty#visibility (var_mproperty) on <var_mproperty:MProperty> */
var117 = var_mproperty->attrs[COLOR_model__MProperty___visibility].val; /* _visibility on <var_mproperty:MProperty> */
if (unlikely(var117 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1617);
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
var122 = string__NativeString__to_s_with_length(var120, var121);
var119 = var122;
varonce118 = var119;
}
if (varonce123) {
var124 = varonce123;
} else {
var125 = "` cannot contain the type `";
var126 = 27;
var127 = string__NativeString__to_s_with_length(var125, var126);
var124 = var127;
varonce123 = var124;
}
if (varonce128) {
var129 = varonce128;
} else {
var130 = "` from the ";
var131 = 11;
var132 = string__NativeString__to_s_with_length(var130, var131);
var129 = var132;
varonce128 = var129;
}
if (varonce133) {
var134 = varonce133;
} else {
var135 = " module `";
var136 = 9;
var137 = string__NativeString__to_s_with_length(var135, var136);
var134 = var137;
varonce133 = var134;
}
if (varonce138) {
var139 = varonce138;
} else {
var140 = "`";
var141 = 1;
var142 = string__NativeString__to_s_with_length(var140, var141);
var139 = var142;
varonce138 = var139;
}
var143 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var143 = array_instance Array[Object] */
var144 = 11;
var145 = NEW_array__NativeArray(var144, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var145)->values[0] = (val*) var111;
((struct instance_array__NativeArray*)var145)->values[1] = (val*) var115;
((struct instance_array__NativeArray*)var145)->values[2] = (val*) var119;
((struct instance_array__NativeArray*)var145)->values[3] = (val*) var_mproperty;
((struct instance_array__NativeArray*)var145)->values[4] = (val*) var124;
((struct instance_array__NativeArray*)var145)->values[5] = (val*) var_mtype;
((struct instance_array__NativeArray*)var145)->values[6] = (val*) var129;
((struct instance_array__NativeArray*)var145)->values[7] = (val*) var_vis_module_type;
((struct instance_array__NativeArray*)var145)->values[8] = (val*) var134;
((struct instance_array__NativeArray*)var145)->values[9] = (val*) var_mmodule_type;
((struct instance_array__NativeArray*)var145)->values[10] = (val*) var139;
{
((void (*)(val*, val*, long))(var143->class->vft[COLOR_array__Array__with_native]))(var143, var145, var144) /* with_native on <var143:Array[Object]>*/;
}
}
{
var146 = ((val* (*)(val*))(var143->class->vft[COLOR_string__Object__to_s]))(var143) /* to_s on <var143:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(self, var_node, var146); /* Direct call modelbuilder#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
}
} else {
}
/* <var_node:ANode> isa AType */
cltype148 = type_parser_nodes__AType.color;
idtype149 = type_parser_nodes__AType.id;
if(cltype148 >= var_node->type->table_size) {
var147 = 0;
} else {
var147 = var_node->type->type_table[cltype148] == idtype149;
}
if (var147){
{
{ /* Inline parser_nodes#AType#n_types (var_node) on <var_node:ANode(AType)> */
var152 = var_node->attrs[COLOR_parser_nodes__AType___n_types].val; /* _n_types on <var_node:ANode(AType)> */
if (unlikely(var152 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1397);
show_backtrace(1);
}
var150 = var152;
RET_LABEL151:(void)0;
}
}
{
var153 = parser_nodes__ANodes__iterator(var150);
}
for(;;) {
{
var154 = ((short int (*)(val*))(var153->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var153) /* is_ok on <var153:Iterator[ANode]>*/;
}
if(!var154) break;
{
var155 = ((val* (*)(val*))(var153->class->vft[COLOR_abstract_collection__Iterator__item]))(var153) /* item on <var153:Iterator[ANode]>*/;
}
var_a = var155;
{
{ /* Inline modelize_class#AType#mtype (var_a) on <var_a:AType> */
var158 = var_a->attrs[COLOR_modelize_class__AType___mtype].val; /* _mtype on <var_a:AType> */
var156 = var158;
RET_LABEL157:(void)0;
}
}
var_t = var156;
var159 = NULL;
if (var_t == NULL) {
var160 = 1; /* is null */
} else {
var160 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t,var159) on <var_t:nullable MType> */
var_other163 = var159;
{
{ /* Inline kernel#Object#is_same_instance (var_t,var_other163) on <var_t:nullable MType(MType)> */
var166 = var_t == var_other163;
var164 = var166;
goto RET_LABEL165;
RET_LABEL165:(void)0;
}
}
var161 = var164;
goto RET_LABEL162;
RET_LABEL162:(void)0;
}
var160 = var161;
}
if (var160){
goto CONTINUE_label;
} else {
}
{
modelize_property__ModelBuilder__check_visibility(self, var_a, var_t, var_mpropdef); /* Direct call modelize_property#ModelBuilder#check_visibility on <self:ModelBuilder>*/
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var153->class->vft[COLOR_abstract_collection__Iterator__next]))(var153) /* next on <var153:Iterator[ANode]>*/;
}
}
BREAK_label: (void)0;
} else {
/* <var_mtype:MType> isa MGenericType */
cltype168 = type_model__MGenericType.color;
idtype169 = type_model__MGenericType.id;
if(cltype168 >= var_mtype->type->table_size) {
var167 = 0;
} else {
var167 = var_mtype->type->type_table[cltype168] == idtype169;
}
if (var167){
{
{ /* Inline model#MClassType#arguments (var_mtype) on <var_mtype:MType(MGenericType)> */
var172 = var_mtype->attrs[COLOR_model__MClassType___arguments].val; /* _arguments on <var_mtype:MType(MGenericType)> */
if (unlikely(var172 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 979);
show_backtrace(1);
}
var170 = var172;
RET_LABEL171:(void)0;
}
}
{
var173 = array__AbstractArrayRead__iterator(var170);
}
for(;;) {
{
var174 = array__ArrayIterator__is_ok(var173);
}
if(!var174) break;
{
var175 = array__ArrayIterator__item(var173);
}
var_t176 = var175;
{
modelize_property__ModelBuilder__check_visibility(self, var_node, var_t176, var_mpropdef); /* Direct call modelize_property#ModelBuilder#check_visibility on <self:ModelBuilder>*/
}
CONTINUE_label177: (void)0;
{
array__ArrayIterator__next(var173); /* Direct call array#ArrayIterator#next on <var173:ArrayIterator[nullable Object]>*/
}
}
BREAK_label177: (void)0;
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
/* method modelize_property#MClass#inherit_init_from for (self: MClass): nullable MClass */
val* modelize_property__MClass__inherit_init_from(val* self) {
val* var /* : nullable MClass */;
val* var1 /* : nullable MClass */;
var1 = self->attrs[COLOR_modelize_property__MClass___inherit_init_from].val; /* _inherit_init_from on <self:MClass> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#MClass#inherit_init_from for (self: Object): nullable MClass */
val* VIRTUAL_modelize_property__MClass__inherit_init_from(val* self) {
val* var /* : nullable MClass */;
val* var1 /* : nullable MClass */;
val* var3 /* : nullable MClass */;
{ /* Inline modelize_property#MClass#inherit_init_from (self) on <self:Object(MClass)> */
var3 = self->attrs[COLOR_modelize_property__MClass___inherit_init_from].val; /* _inherit_init_from on <self:Object(MClass)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#MClass#inherit_init_from= for (self: MClass, nullable MClass) */
void modelize_property__MClass__inherit_init_from_61d(val* self, val* p0) {
self->attrs[COLOR_modelize_property__MClass___inherit_init_from].val = p0; /* _inherit_init_from on <self:MClass> */
RET_LABEL:;
}
/* method modelize_property#MClass#inherit_init_from= for (self: Object, nullable MClass) */
void VIRTUAL_modelize_property__MClass__inherit_init_from_61d(val* self, val* p0) {
{ /* Inline modelize_property#MClass#inherit_init_from= (self,p0) on <self:Object(MClass)> */
self->attrs[COLOR_modelize_property__MClass___inherit_init_from].val = p0; /* _inherit_init_from on <self:Object(MClass)> */
RET_LABEL1:(void)0;
}
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
/* method modelize_property#AClassdef#super_inits for (self: AClassdef): nullable Collection[MMethod] */
val* modelize_property__AClassdef__super_inits(val* self) {
val* var /* : nullable Collection[MMethod] */;
val* var1 /* : nullable Collection[MMethod] */;
var1 = self->attrs[COLOR_modelize_property__AClassdef___super_inits].val; /* _super_inits on <self:AClassdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AClassdef#super_inits for (self: Object): nullable Collection[MMethod] */
val* VIRTUAL_modelize_property__AClassdef__super_inits(val* self) {
val* var /* : nullable Collection[MMethod] */;
val* var1 /* : nullable Collection[MMethod] */;
val* var3 /* : nullable Collection[MMethod] */;
{ /* Inline modelize_property#AClassdef#super_inits (self) on <self:Object(AClassdef)> */
var3 = self->attrs[COLOR_modelize_property__AClassdef___super_inits].val; /* _super_inits on <self:Object(AClassdef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AClassdef#super_inits= for (self: AClassdef, nullable Collection[MMethod]) */
void modelize_property__AClassdef__super_inits_61d(val* self, val* p0) {
self->attrs[COLOR_modelize_property__AClassdef___super_inits].val = p0; /* _super_inits on <self:AClassdef> */
RET_LABEL:;
}
/* method modelize_property#AClassdef#super_inits= for (self: Object, nullable Collection[MMethod]) */
void VIRTUAL_modelize_property__AClassdef__super_inits_61d(val* self, val* p0) {
{ /* Inline modelize_property#AClassdef#super_inits= (self,p0) on <self:Object(AClassdef)> */
self->attrs[COLOR_modelize_property__AClassdef___super_inits].val = p0; /* _super_inits on <self:Object(AClassdef)> */
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
/* method modelize_property#MClassDef#mprop2npropdef for (self: MClassDef): Map[MProperty, APropdef] */
val* modelize_property__MClassDef__mprop2npropdef(val* self) {
val* var /* : Map[MProperty, APropdef] */;
val* var1 /* : Map[MProperty, APropdef] */;
var1 = self->attrs[COLOR_modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <self:MClassDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 252);
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
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 252);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#Prod#collect_text for (self: Prod): String */
val* modelize_property__Prod__collect_text(val* self) {
val* var /* : String */;
val* var1 /* : TextCollectorVisitor */;
val* var_v /* var v: TextCollectorVisitor */;
val* var3 /* : String */;
val* var5 /* : String */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : FlatString */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : String */;
val* var18 /* : String */;
var1 = NEW_modelize_property__TextCollectorVisitor(&type_modelize_property__TextCollectorVisitor);
{
{ /* Inline parser_nodes#Visitor#init (var1) on <var1:TextCollectorVisitor> */
RET_LABEL2:(void)0;
}
}
var_v = var1;
{
parser_nodes__Visitor__enter_visit(var_v, self); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:TextCollectorVisitor>*/
}
{
{ /* Inline modelize_property#TextCollectorVisitor#text (var_v) on <var_v:TextCollectorVisitor> */
var5 = var_v->attrs[COLOR_modelize_property__TextCollectorVisitor___text].val; /* _text on <var_v:TextCollectorVisitor> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _text");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 271);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
if (varonce) {
var6 = varonce;
} else {
var7 = "";
var8 = 0;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
{
{ /* Inline kernel#Object#!= (var3,var6) on <var3:String> */
var_other = var6;
{
var14 = ((short int (*)(val*, val*))(var3->class->vft[COLOR_kernel__Object___61d_61d]))(var3, var_other) /* == on <var3:String>*/;
var13 = var14;
}
var15 = !var13;
var11 = var15;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 264);
show_backtrace(1);
}
{
{ /* Inline modelize_property#TextCollectorVisitor#text (var_v) on <var_v:TextCollectorVisitor> */
var18 = var_v->attrs[COLOR_modelize_property__TextCollectorVisitor___text].val; /* _text on <var_v:TextCollectorVisitor> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _text");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 271);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var = var16;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#Prod#collect_text for (self: Object): String */
val* VIRTUAL_modelize_property__Prod__collect_text(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = modelize_property__Prod__collect_text(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#TextCollectorVisitor#text for (self: TextCollectorVisitor): String */
val* modelize_property__TextCollectorVisitor__text(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_modelize_property__TextCollectorVisitor___text].val; /* _text on <self:TextCollectorVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _text");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 271);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#TextCollectorVisitor#text for (self: Object): String */
val* VIRTUAL_modelize_property__TextCollectorVisitor__text(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{ /* Inline modelize_property#TextCollectorVisitor#text (self) on <self:Object(TextCollectorVisitor)> */
var3 = self->attrs[COLOR_modelize_property__TextCollectorVisitor___text].val; /* _text on <self:Object(TextCollectorVisitor)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _text");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 271);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#TextCollectorVisitor#text= for (self: TextCollectorVisitor, String) */
void modelize_property__TextCollectorVisitor__text_61d(val* self, val* p0) {
self->attrs[COLOR_modelize_property__TextCollectorVisitor___text].val = p0; /* _text on <self:TextCollectorVisitor> */
RET_LABEL:;
}
/* method modelize_property#TextCollectorVisitor#text= for (self: Object, String) */
void VIRTUAL_modelize_property__TextCollectorVisitor__text_61d(val* self, val* p0) {
{ /* Inline modelize_property#TextCollectorVisitor#text= (self,p0) on <self:Object(TextCollectorVisitor)> */
self->attrs[COLOR_modelize_property__TextCollectorVisitor___text].val = p0; /* _text on <self:Object(TextCollectorVisitor)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method modelize_property#TextCollectorVisitor#visit for (self: TextCollectorVisitor, ANode) */
void modelize_property__TextCollectorVisitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
short int var /* : Bool */;
int cltype;
int idtype;
val* var_ /* var : TextCollectorVisitor */;
val* var1 /* : String */;
val* var3 /* : String */;
val* var4 /* : String */;
val* var5 /* : String */;
var_n = p0;
/* <var_n:ANode> isa Token */
cltype = type_parser_nodes__Token.color;
idtype = type_parser_nodes__Token.id;
if(cltype >= var_n->type->table_size) {
var = 0;
} else {
var = var_n->type->type_table[cltype] == idtype;
}
if (var){
var_ = self;
{
{ /* Inline modelize_property#TextCollectorVisitor#text (var_) on <var_:TextCollectorVisitor> */
var3 = var_->attrs[COLOR_modelize_property__TextCollectorVisitor___text].val; /* _text on <var_:TextCollectorVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _text");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 271);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = lexer_work__Token__text(var_n);
}
{
var5 = string__FlatString___43d(var1, var4);
}
{
{ /* Inline modelize_property#TextCollectorVisitor#text= (var_,var5) on <var_:TextCollectorVisitor> */
var_->attrs[COLOR_modelize_property__TextCollectorVisitor___text].val = var5; /* _text on <var_:TextCollectorVisitor> */
RET_LABEL6:(void)0;
}
}
} else {
}
{
((void (*)(val*, val*))(var_n->class->vft[COLOR_parser_nodes__ANode__visit_all]))(var_n, self) /* visit_all on <var_n:ANode>*/;
}
RET_LABEL:;
}
/* method modelize_property#TextCollectorVisitor#visit for (self: Object, ANode) */
void VIRTUAL_modelize_property__TextCollectorVisitor__visit(val* self, val* p0) {
modelize_property__TextCollectorVisitor__visit(self, p0); /* Direct call modelize_property#TextCollectorVisitor#visit on <self:Object(TextCollectorVisitor)>*/
RET_LABEL:;
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
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 283);
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
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 283);
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
val* var69 /* : MVisibility */;
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
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 474);
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
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 359);
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
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 301);
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
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 304);
show_backtrace(1);
}
} else {
}
}
{
var69 = model_base__Object__private_visibility(self);
}
var_mvisibility = var69;
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
/* method modelize_property#APropdef#set_doc for (self: APropdef, MPropDef) */
void modelize_property__APropdef__set_doc(val* self, val* p0) {
val* var_mpropdef /* var mpropdef: MPropDef */;
val* var /* : nullable ADoc */;
val* var_ndoc /* var ndoc: nullable ADoc */;
val* var1 /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : MDoc */;
val* var_mdoc /* var mdoc: MDoc */;
var_mpropdef = p0;
{
var = parser_nodes__APropdef__n_doc(self);
}
var_ndoc = var;
var1 = NULL;
if (var_ndoc == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ndoc,var1) on <var_ndoc:nullable ADoc> */
var_other = var1;
{
var6 = ((short int (*)(val*, val*))(var_ndoc->class->vft[COLOR_kernel__Object___61d_61d]))(var_ndoc, var_other) /* == on <var_ndoc:nullable ADoc(ADoc)>*/;
var5 = var6;
}
var7 = !var5;
var3 = var7;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
{
var8 = modelbuilder__ADoc__to_mdoc(var_ndoc);
}
var_mdoc = var8;
{
{ /* Inline mdoc#MEntity#mdoc= (var_mpropdef,var_mdoc) on <var_mpropdef:MPropDef> */
var_mpropdef->attrs[COLOR_mdoc__MEntity___mdoc].val = var_mdoc; /* _mdoc on <var_mpropdef:MPropDef> */
RET_LABEL9:(void)0;
}
}
{
{ /* Inline mdoc#MDoc#original_mentity= (var_mdoc,var_mpropdef) on <var_mdoc:MDoc> */
var_mdoc->attrs[COLOR_mdoc__MDoc___original_mentity].val = var_mpropdef; /* _original_mentity on <var_mdoc:MDoc> */
RET_LABEL10:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method modelize_property#APropdef#set_doc for (self: Object, MPropDef) */
void VIRTUAL_modelize_property__APropdef__set_doc(val* self, val* p0) {
modelize_property__APropdef__set_doc(self, p0); /* Direct call modelize_property#APropdef#set_doc on <self:Object(APropdef)>*/
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
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1617);
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
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1617);
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
long var27 /* : Int */;
long var29 /* : Int */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
long var33 /* : Int */;
val* var34 /* : FlatString */;
val* var35 /* : Array[Object] */;
long var36 /* : Int */;
val* var37 /* : NativeArray[Object] */;
val* var38 /* : Object */;
val* var39 /* : String */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
val* var46 /* : nullable ANode */;
val* var48 /* : nullable ANode */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
long var63 /* : Int */;
val* var64 /* : FlatString */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
long var68 /* : Int */;
val* var69 /* : FlatString */;
val* var70 /* : Array[Object] */;
long var71 /* : Int */;
val* var72 /* : NativeArray[Object] */;
val* var73 /* : String */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
long var77 /* : Int */;
val* var78 /* : FlatString */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
long var82 /* : Int */;
val* var83 /* : FlatString */;
val* var84 /* : Array[Object] */;
long var85 /* : Int */;
val* var86 /* : NativeArray[Object] */;
val* var87 /* : String */;
short int var88 /* : Bool */;
val* var89 /* : null */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var93 /* : Bool */;
short int var95 /* : Bool */;
static val* varonce96;
val* var97 /* : String */;
char* var98 /* : NativeString */;
long var99 /* : Int */;
val* var100 /* : FlatString */;
val* var101 /* : MClass */;
val* var103 /* : MClass */;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : NativeString */;
long var107 /* : Int */;
val* var108 /* : FlatString */;
val* var109 /* : String */;
val* var111 /* : String */;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : NativeString */;
long var115 /* : Int */;
val* var116 /* : FlatString */;
val* var117 /* : Array[Object] */;
long var118 /* : Int */;
val* var119 /* : NativeArray[Object] */;
val* var120 /* : String */;
short int var121 /* : Bool */;
short int var122 /* : Bool */;
static val* varonce123;
val* var124 /* : String */;
char* var125 /* : NativeString */;
long var126 /* : Int */;
val* var127 /* : FlatString */;
val* var128 /* : MClass */;
val* var130 /* : MClass */;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : NativeString */;
long var134 /* : Int */;
val* var135 /* : FlatString */;
val* var136 /* : String */;
val* var138 /* : String */;
static val* varonce139;
val* var140 /* : String */;
char* var141 /* : NativeString */;
long var142 /* : Int */;
val* var143 /* : FlatString */;
val* var144 /* : Array[Object] */;
long var145 /* : Int */;
val* var146 /* : NativeArray[Object] */;
val* var147 /* : String */;
short int var148 /* : Bool */;
short int var149 /* : Bool */;
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
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 252);
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
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 474);
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
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 252);
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
var26 = parser_nodes__ANode__location(var25);
}
{
{ /* Inline location#Location#line_start (var26) on <var26:Location> */
var29 = var26->attrs[COLOR_location__Location___line_start].l; /* _line_start on <var26:Location> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
if (varonce30) {
var31 = varonce30;
} else {
var32 = ".";
var33 = 1;
var34 = string__NativeString__to_s_with_length(var32, var33);
var31 = var34;
varonce30 = var31;
}
var35 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var35 = array_instance Array[Object] */
var36 = 7;
var37 = NEW_array__NativeArray(var36, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var37)->values[0] = (val*) var5;
((struct instance_array__NativeArray*)var37)->values[1] = (val*) var_mprop;
((struct instance_array__NativeArray*)var37)->values[2] = (val*) var10;
((struct instance_array__NativeArray*)var37)->values[3] = (val*) var14;
((struct instance_array__NativeArray*)var37)->values[4] = (val*) var18;
var38 = BOX_kernel__Int(var27); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var37)->values[5] = (val*) var38;
((struct instance_array__NativeArray*)var37)->values[6] = (val*) var31;
{
((void (*)(val*, val*, long))(var35->class->vft[COLOR_array__Array__with_native]))(var35, var37, var36) /* with_native on <var35:Array[Object]>*/;
}
}
{
var39 = ((val* (*)(val*))(var35->class->vft[COLOR_string__Object__to_s]))(var35) /* to_s on <var35:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, self, var39); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
var40 = 0;
var = var40;
goto RET_LABEL;
} else {
}
/* <var_mprop:MProperty> isa MMethod */
cltype = type_model__MMethod.color;
idtype = type_model__MMethod.id;
if(cltype >= var_mprop->type->table_size) {
var42 = 0;
} else {
var42 = var_mprop->type->type_table[cltype] == idtype;
}
var_ = var42;
if (var42){
{
{ /* Inline model#MMethod#is_toplevel (var_mprop) on <var_mprop:MProperty(MMethod)> */
var45 = var_mprop->attrs[COLOR_model__MMethod___is_toplevel].s; /* _is_toplevel on <var_mprop:MProperty(MMethod)> */
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#parent (self) on <self:APropdef> */
var48 = self->attrs[COLOR_parser_nodes__ANode___parent].val; /* _parent on <self:APropdef> */
var46 = var48;
RET_LABEL47:(void)0;
}
}
/* <var46:nullable ANode> isa ATopClassdef */
cltype50 = type_parser_nodes__ATopClassdef.color;
idtype51 = type_parser_nodes__ATopClassdef.id;
if(var46 == NULL) {
var49 = 0;
} else {
if(cltype50 >= var46->type->table_size) {
var49 = 0;
} else {
var49 = var46->type->type_table[cltype50] == idtype51;
}
}
{
{ /* Inline kernel#Bool#!= (var43,var49) on <var43:Bool> */
var55 = var43 == var49;
var56 = !var55;
var53 = var56;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
var52 = var53;
}
var41 = var52;
} else {
var41 = var_;
}
if (var41){
{
{ /* Inline model#MMethod#is_toplevel (var_mprop) on <var_mprop:MProperty(MMethod)> */
var59 = var_mprop->attrs[COLOR_model__MMethod___is_toplevel].s; /* _is_toplevel on <var_mprop:MProperty(MMethod)> */
var57 = var59;
RET_LABEL58:(void)0;
}
}
if (var57){
if (varonce60) {
var61 = varonce60;
} else {
var62 = "Error: ";
var63 = 7;
var64 = string__NativeString__to_s_with_length(var62, var63);
var61 = var64;
varonce60 = var61;
}
if (varonce65) {
var66 = varonce65;
} else {
var67 = " is a top level method.";
var68 = 23;
var69 = string__NativeString__to_s_with_length(var67, var68);
var66 = var69;
varonce65 = var66;
}
var70 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var70 = array_instance Array[Object] */
var71 = 3;
var72 = NEW_array__NativeArray(var71, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var72)->values[0] = (val*) var61;
((struct instance_array__NativeArray*)var72)->values[1] = (val*) var_mprop;
((struct instance_array__NativeArray*)var72)->values[2] = (val*) var66;
{
((void (*)(val*, val*, long))(var70->class->vft[COLOR_array__Array__with_native]))(var70, var72, var71) /* with_native on <var70:Array[Object]>*/;
}
}
{
var73 = ((val* (*)(val*))(var70->class->vft[COLOR_string__Object__to_s]))(var70) /* to_s on <var70:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, self, var73); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
if (varonce74) {
var75 = varonce74;
} else {
var76 = "Error: ";
var77 = 7;
var78 = string__NativeString__to_s_with_length(var76, var77);
var75 = var78;
varonce74 = var75;
}
if (varonce79) {
var80 = varonce79;
} else {
var81 = " is not a top level method.";
var82 = 27;
var83 = string__NativeString__to_s_with_length(var81, var82);
var80 = var83;
varonce79 = var80;
}
var84 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var84 = array_instance Array[Object] */
var85 = 3;
var86 = NEW_array__NativeArray(var85, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var86)->values[0] = (val*) var75;
((struct instance_array__NativeArray*)var86)->values[1] = (val*) var_mprop;
((struct instance_array__NativeArray*)var86)->values[2] = (val*) var80;
{
((void (*)(val*, val*, long))(var84->class->vft[COLOR_array__Array__with_native]))(var84, var86, var85) /* with_native on <var84:Array[Object]>*/;
}
}
{
var87 = ((val* (*)(val*))(var84->class->vft[COLOR_string__Object__to_s]))(var84) /* to_s on <var84:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, self, var87); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
}
var88 = 0;
var = var88;
goto RET_LABEL;
} else {
}
var89 = NULL;
if (var_kwredef == NULL) {
var90 = 1; /* is null */
} else {
var90 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_kwredef,var89) on <var_kwredef:nullable Token> */
var_other = var89;
{
{ /* Inline kernel#Object#is_same_instance (var_kwredef,var_other) on <var_kwredef:nullable Token(Token)> */
var95 = var_kwredef == var_other;
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
if (var_need_redef){
if (varonce96) {
var97 = varonce96;
} else {
var98 = "Redef error: ";
var99 = 13;
var100 = string__NativeString__to_s_with_length(var98, var99);
var97 = var100;
varonce96 = var97;
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var103 = var_mclassdef->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var103 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 474);
show_backtrace(1);
}
var101 = var103;
RET_LABEL102:(void)0;
}
}
if (varonce104) {
var105 = varonce104;
} else {
var106 = "::";
var107 = 2;
var108 = string__NativeString__to_s_with_length(var106, var107);
var105 = var108;
varonce104 = var105;
}
{
{ /* Inline model#MProperty#name (var_mprop) on <var_mprop:MProperty> */
var111 = var_mprop->attrs[COLOR_model__MProperty___name].val; /* _name on <var_mprop:MProperty> */
if (unlikely(var111 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1607);
show_backtrace(1);
}
var109 = var111;
RET_LABEL110:(void)0;
}
}
if (varonce112) {
var113 = varonce112;
} else {
var114 = " is an inherited property. To redefine it, add the redef keyword.";
var115 = 65;
var116 = string__NativeString__to_s_with_length(var114, var115);
var113 = var116;
varonce112 = var113;
}
var117 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var117 = array_instance Array[Object] */
var118 = 5;
var119 = NEW_array__NativeArray(var118, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var119)->values[0] = (val*) var97;
((struct instance_array__NativeArray*)var119)->values[1] = (val*) var101;
((struct instance_array__NativeArray*)var119)->values[2] = (val*) var105;
((struct instance_array__NativeArray*)var119)->values[3] = (val*) var109;
((struct instance_array__NativeArray*)var119)->values[4] = (val*) var113;
{
((void (*)(val*, val*, long))(var117->class->vft[COLOR_array__Array__with_native]))(var117, var119, var118) /* with_native on <var117:Array[Object]>*/;
}
}
{
var120 = ((val* (*)(val*))(var117->class->vft[COLOR_string__Object__to_s]))(var117) /* to_s on <var117:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, self, var120); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
var121 = 0;
var = var121;
goto RET_LABEL;
} else {
}
} else {
var122 = !var_need_redef;
if (var122){
if (varonce123) {
var124 = varonce123;
} else {
var125 = "Error: No property ";
var126 = 19;
var127 = string__NativeString__to_s_with_length(var125, var126);
var124 = var127;
varonce123 = var124;
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var130 = var_mclassdef->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var130 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 474);
show_backtrace(1);
}
var128 = var130;
RET_LABEL129:(void)0;
}
}
if (varonce131) {
var132 = varonce131;
} else {
var133 = "::";
var134 = 2;
var135 = string__NativeString__to_s_with_length(var133, var134);
var132 = var135;
varonce131 = var132;
}
{
{ /* Inline model#MProperty#name (var_mprop) on <var_mprop:MProperty> */
var138 = var_mprop->attrs[COLOR_model__MProperty___name].val; /* _name on <var_mprop:MProperty> */
if (unlikely(var138 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1607);
show_backtrace(1);
}
var136 = var138;
RET_LABEL137:(void)0;
}
}
if (varonce139) {
var140 = varonce139;
} else {
var141 = " is inherited. Remove the redef keyword to define a new property.";
var142 = 65;
var143 = string__NativeString__to_s_with_length(var141, var142);
var140 = var143;
varonce139 = var140;
}
var144 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var144 = array_instance Array[Object] */
var145 = 5;
var146 = NEW_array__NativeArray(var145, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var146)->values[0] = (val*) var124;
((struct instance_array__NativeArray*)var146)->values[1] = (val*) var128;
((struct instance_array__NativeArray*)var146)->values[2] = (val*) var132;
((struct instance_array__NativeArray*)var146)->values[3] = (val*) var136;
((struct instance_array__NativeArray*)var146)->values[4] = (val*) var140;
{
((void (*)(val*, val*, long))(var144->class->vft[COLOR_array__Array__with_native]))(var144, var146, var145) /* with_native on <var144:Array[Object]>*/;
}
}
{
var147 = ((val* (*)(val*))(var144->class->vft[COLOR_string__Object__to_s]))(var144) /* to_s on <var144:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, self, var147); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
var148 = 0;
var = var148;
goto RET_LABEL;
} else {
}
}
var149 = 1;
var = var149;
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
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 366);
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
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 366);
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
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 369);
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
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 369);
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
val* var13 /* : Iterator[ANode] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_np /* var np: AParam */;
val* var16 /* : TId */;
val* var17 /* : String */;
val* var18 /* : nullable AType */;
val* var_ntype /* var ntype: nullable AType */;
val* var19 /* : null */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var26 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var27 /* : null */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var_other31 /* var other: nullable Object */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
val* var36 /* : Range[Int] */;
long var37 /* : Int */;
long var38 /* : Int */;
long var39 /* : Int */;
long var40 /* : Int */;
short int var42 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var43 /* : Int */;
val* var44 /* : Discrete */;
val* var45 /* : Discrete */;
val* var46 /* : Iterator[Discrete] */;
short int var47 /* : Bool */;
val* var48 /* : nullable Object */;
long var_i /* var i: Int */;
long var49 /* : Int */;
val* var50 /* : nullable TDotdotdot */;
val* var51 /* : null */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
long var58 /* : Int */;
long var60 /* : Int */;
long var61 /* : Int */;
long var62 /* : Int */;
long var64 /* : Int */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
static val* varonce;
val* var70 /* : String */;
char* var71 /* : NativeString */;
long var72 /* : Int */;
val* var73 /* : FlatString */;
long var74 /* : Int */;
long var76 /* : Int */;
val* var77 /* : nullable Object */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
long var81 /* : Int */;
val* var82 /* : FlatString */;
val* var83 /* : Array[Object] */;
long var84 /* : Int */;
val* var85 /* : NativeArray[Object] */;
val* var86 /* : String */;
short int var87 /* : Bool */;
long var88 /* : Int */;
long var89 /* : Int */;
long var90 /* : Int */;
short int var92 /* : Bool */;
int cltype93;
int idtype94;
const char* var_class_name95;
long var96 /* : Int */;
val* var99 /* : nullable AType */;
val* var_ntype100 /* var ntype: nullable AType */;
val* var101 /* : null */;
short int var102 /* : Bool */;
short int var103 /* : Bool */;
short int var105 /* : Bool */;
short int var106 /* : Bool */;
short int var107 /* : Bool */;
val* var108 /* : nullable MType */;
val* var110 /* : nullable MType */;
val* var112 /* : nullable MType */;
val* var113 /* : null */;
short int var114 /* : Bool */;
short int var115 /* : Bool */;
short int var117 /* : Bool */;
short int var119 /* : Bool */;
short int var120 /* : Bool */;
short int var121 /* : Bool */;
short int var123 /* : Bool */;
var_modelbuilder = p0;
var_mclassdef = p1;
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var3 = var_mclassdef->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 471);
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
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 366);
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
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 369);
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
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1360);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = parser_nodes__ANodes__iterator(var10);
}
for(;;) {
{
var14 = ((short int (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var13) /* is_ok on <var13:Iterator[ANode]>*/;
}
if(!var14) break;
{
var15 = ((val* (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__item]))(var13) /* item on <var13:Iterator[ANode]>*/;
}
var_np = var15;
{
var16 = parser_nodes__AParam__n_id(var_np);
}
{
var17 = lexer_work__Token__text(var16);
}
{
array__Array__add(var_param_names, var17); /* Direct call array#Array#add on <var_param_names:Array[String]>*/
}
{
var18 = parser_nodes__AParam__n_type(var_np);
}
var_ntype = var18;
var19 = NULL;
if (var_ntype == NULL) {
var20 = 0; /* is null */
} else {
var20 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ntype,var19) on <var_ntype:nullable AType> */
var_other = var19;
{
var24 = ((short int (*)(val*, val*))(var_ntype->class->vft[COLOR_kernel__Object___61d_61d]))(var_ntype, var_other) /* == on <var_ntype:nullable AType(AType)>*/;
var23 = var24;
}
var25 = !var23;
var21 = var25;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (var20){
{
var26 = modelize_class__ModelBuilder__resolve_mtype(var_modelbuilder, var_mmodule, var_mclassdef, var_ntype);
}
var_mtype = var26;
var27 = NULL;
if (var_mtype == NULL) {
var28 = 1; /* is null */
} else {
var28 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var27) on <var_mtype:nullable MType> */
var_other31 = var27;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other31) on <var_mtype:nullable MType(MType)> */
var34 = var_mtype == var_other31;
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var29 = var32;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
var28 = var29;
}
if (var28){
var35 = 0;
var = var35;
goto RET_LABEL;
} else {
}
var36 = NEW_range__Range(&type_range__Rangekernel__Int);
var37 = 0;
{
var38 = array__AbstractArrayRead__length(var_param_names);
}
{
var39 = array__AbstractArrayRead__length(var_param_types);
}
{
{ /* Inline kernel#Int#- (var38,var39) on <var38:Int> */
/* Covariant cast for argument 0 (i) <var39:Int> isa OTHER */
/* <var39:Int> isa OTHER */
var42 = 1; /* easy <var39:Int> isa OTHER*/
if (unlikely(!var42)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var43 = var38 - var39;
var40 = var43;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
{
var44 = BOX_kernel__Int(var37); /* autobox from Int to Discrete */
var45 = BOX_kernel__Int(var40); /* autobox from Int to Discrete */
range__Range__without_last(var36, var44, var45); /* Direct call range#Range#without_last on <var36:Range[Int]>*/
}
{
var46 = range__Range__iterator(var36);
}
for(;;) {
{
var47 = ((short int (*)(val*))(var46->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var46) /* is_ok on <var46:Iterator[Discrete]>*/;
}
if(!var47) break;
{
var48 = ((val* (*)(val*))(var46->class->vft[COLOR_abstract_collection__Iterator__item]))(var46) /* item on <var46:Iterator[Discrete]>*/;
}
var49 = ((struct instance_kernel__Int*)var48)->value; /* autounbox from nullable Object to Int */;
var_i = var49;
{
array__Array__add(var_param_types, var_mtype); /* Direct call array#Array#add on <var_param_types:Array[MType]>*/
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var46->class->vft[COLOR_abstract_collection__Iterator__next]))(var46) /* next on <var46:Iterator[Discrete]>*/;
}
}
BREAK_label: (void)0;
{
var50 = parser_nodes__AParam__n_dotdotdot(var_np);
}
var51 = NULL;
if (var50 == NULL) {
var52 = 0; /* is null */
} else {
var52 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var50,var51) on <var50:nullable TDotdotdot> */
var_other = var51;
{
var56 = ((short int (*)(val*, val*))(var50->class->vft[COLOR_kernel__Object___61d_61d]))(var50, var_other) /* == on <var50:nullable TDotdotdot(TDotdotdot)>*/;
var55 = var56;
}
var57 = !var55;
var53 = var57;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
var52 = var53;
}
if (var52){
{
{ /* Inline modelize_property#ASignature#vararg_rank (self) on <self:ASignature> */
var60 = self->attrs[COLOR_modelize_property__ASignature___vararg_rank].l; /* _vararg_rank on <self:ASignature> */
var58 = var60;
RET_LABEL59:(void)0;
}
}
var61 = 1;
{
{ /* Inline kernel#Int#unary - (var61) on <var61:Int> */
var64 = -var61;
var62 = var64;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var58,var62) on <var58:Int> */
var68 = var58 == var62;
var69 = !var68;
var66 = var69;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
var65 = var66;
}
if (var65){
if (varonce) {
var70 = varonce;
} else {
var71 = "Error: ";
var72 = 7;
var73 = string__NativeString__to_s_with_length(var71, var72);
var70 = var73;
varonce = var70;
}
{
{ /* Inline modelize_property#ASignature#vararg_rank (self) on <self:ASignature> */
var76 = self->attrs[COLOR_modelize_property__ASignature___vararg_rank].l; /* _vararg_rank on <self:ASignature> */
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
var77 = array__Array___91d_93d(var_param_names, var74);
}
if (varonce78) {
var79 = varonce78;
} else {
var80 = " is already a vararg";
var81 = 20;
var82 = string__NativeString__to_s_with_length(var80, var81);
var79 = var82;
varonce78 = var79;
}
var83 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var83 = array_instance Array[Object] */
var84 = 3;
var85 = NEW_array__NativeArray(var84, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var85)->values[0] = (val*) var70;
((struct instance_array__NativeArray*)var85)->values[1] = (val*) var77;
((struct instance_array__NativeArray*)var85)->values[2] = (val*) var79;
{
((void (*)(val*, val*, long))(var83->class->vft[COLOR_array__Array__with_native]))(var83, var85, var84) /* with_native on <var83:Array[Object]>*/;
}
}
{
var86 = ((val* (*)(val*))(var83->class->vft[COLOR_string__Object__to_s]))(var83) /* to_s on <var83:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, var_np, var86); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
var87 = 0;
var = var87;
goto RET_LABEL;
} else {
{
var88 = array__AbstractArrayRead__length(var_param_names);
}
var89 = 1;
{
{ /* Inline kernel#Int#- (var88,var89) on <var88:Int> */
/* Covariant cast for argument 0 (i) <var89:Int> isa OTHER */
/* <var89:Int> isa OTHER */
var92 = 1; /* easy <var89:Int> isa OTHER*/
if (unlikely(!var92)) {
var_class_name95 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name95);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var96 = var88 - var89;
var90 = var96;
goto RET_LABEL91;
RET_LABEL91:(void)0;
}
}
{
{ /* Inline modelize_property#ASignature#vararg_rank= (self,var90) on <self:ASignature> */
self->attrs[COLOR_modelize_property__ASignature___vararg_rank].l = var90; /* _vararg_rank on <self:ASignature> */
RET_LABEL97:(void)0;
}
}
}
} else {
}
} else {
}
CONTINUE_label98: (void)0;
{
((void (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__next]))(var13) /* next on <var13:Iterator[ANode]>*/;
}
}
BREAK_label98: (void)0;
{
var99 = parser_nodes__ASignature__n_type(self);
}
var_ntype100 = var99;
var101 = NULL;
if (var_ntype100 == NULL) {
var102 = 0; /* is null */
} else {
var102 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ntype100,var101) on <var_ntype100:nullable AType> */
var_other = var101;
{
var106 = ((short int (*)(val*, val*))(var_ntype100->class->vft[COLOR_kernel__Object___61d_61d]))(var_ntype100, var_other) /* == on <var_ntype100:nullable AType(AType)>*/;
var105 = var106;
}
var107 = !var105;
var103 = var107;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
var102 = var103;
}
if (var102){
{
var108 = modelize_class__ModelBuilder__resolve_mtype(var_modelbuilder, var_mmodule, var_mclassdef, var_ntype100);
}
{
{ /* Inline modelize_property#ASignature#ret_type= (self,var108) on <self:ASignature> */
self->attrs[COLOR_modelize_property__ASignature___ret_type].val = var108; /* _ret_type on <self:ASignature> */
RET_LABEL109:(void)0;
}
}
{
{ /* Inline modelize_property#ASignature#ret_type (self) on <self:ASignature> */
var112 = self->attrs[COLOR_modelize_property__ASignature___ret_type].val; /* _ret_type on <self:ASignature> */
var110 = var112;
RET_LABEL111:(void)0;
}
}
var113 = NULL;
if (var110 == NULL) {
var114 = 1; /* is null */
} else {
var114 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var110,var113) on <var110:nullable MType> */
var_other31 = var113;
{
{ /* Inline kernel#Object#is_same_instance (var110,var_other31) on <var110:nullable MType(MType)> */
var119 = var110 == var_other31;
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
var120 = 0;
var = var120;
goto RET_LABEL;
} else {
}
} else {
}
var121 = 1;
{
{ /* Inline modelize_property#ASignature#is_visited= (self,var121) on <self:ASignature> */
self->attrs[COLOR_modelize_property__ASignature___is_visited].s = var121; /* _is_visited on <self:ASignature> */
RET_LABEL122:(void)0;
}
}
var123 = 1;
var = var123;
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
/* method modelize_property#AMethPropdef#build_property for (self: AMethPropdef, ModelBuilder, MClassDef) */
void modelize_property__AMethPropdef__build_property(val* self, val* p0, val* p1) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var /* : nullable TKwinit */;
val* var_n_kwinit /* var n_kwinit: nullable TKwinit */;
val* var1 /* : nullable TKwnew */;
val* var_n_kwnew /* var n_kwnew: nullable TKwnew */;
short int var2 /* : Bool */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var_ /* var : Bool */;
val* var10 /* : null */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var_is_init /* var is_init: Bool */;
val* var17 /* : nullable AMethid */;
val* var_amethodid /* var amethodid: nullable AMethid */;
val* var18 /* : null */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var_other22 /* var other: nullable Object */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
static val* varonce;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : FlatString */;
val* var_name /* var name: String */;
val* var_name_node /* var name_node: ANode */;
val* var31 /* : null */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
long var41 /* : Int */;
val* var42 /* : FlatString */;
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
short int var55 /* : Bool */;
int cltype;
int idtype;
val* var56 /* : TId */;
val* var57 /* : String */;
val* var58 /* : String */;
short int var59 /* : Bool */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
long var63 /* : Int */;
val* var64 /* : FlatString */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
short int var_67 /* var : Bool */;
val* var68 /* : nullable ASignature */;
val* var69 /* : ANodes[AParam] */;
val* var71 /* : ANodes[AParam] */;
long var72 /* : Int */;
long var73 /* : Int */;
short int var74 /* : Bool */;
short int var75 /* : Bool */;
short int var77 /* : Bool */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
long var81 /* : Int */;
val* var82 /* : FlatString */;
val* var83 /* : null */;
val* var_mprop /* var mprop: nullable MMethod */;
short int var84 /* : Bool */;
short int var85 /* : Bool */;
short int var_86 /* var : Bool */;
val* var87 /* : nullable TKwredef */;
val* var88 /* : null */;
short int var89 /* : Bool */;
short int var90 /* : Bool */;
short int var92 /* : Bool */;
short int var93 /* : Bool */;
short int var94 /* : Bool */;
val* var95 /* : nullable MProperty */;
short int var96 /* : Bool */;
int cltype97;
int idtype98;
const char* var_class_name;
val* var99 /* : null */;
short int var100 /* : Bool */;
short int var101 /* : Bool */;
short int var103 /* : Bool */;
short int var105 /* : Bool */;
val* var106 /* : nullable AVisibility */;
val* var107 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: MVisibility */;
val* var108 /* : MMethod */;
val* var110 /* : null */;
short int var111 /* : Bool */;
short int var112 /* : Bool */;
short int var114 /* : Bool */;
short int var115 /* : Bool */;
short int var116 /* : Bool */;
val* var118 /* : nullable ANode */;
val* var120 /* : nullable ANode */;
short int var121 /* : Bool */;
int cltype122;
int idtype123;
short int var124 /* : Bool */;
val* var126 /* : nullable TKwredef */;
short int var127 /* : Bool */;
short int var128 /* : Bool */;
short int var129 /* : Bool */;
val* var130 /* : nullable TKwredef */;
short int var131 /* : Bool */;
int cltype132;
int idtype133;
short int var134 /* : Bool */;
short int var135 /* : Bool */;
short int var136 /* : Bool */;
val* var137 /* : nullable AVisibility */;
val* var138 /* : Map[MProperty, APropdef] */;
val* var140 /* : Map[MProperty, APropdef] */;
val* var141 /* : MMethodDef */;
val* var142 /* : Location */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
short int var143 /* : Bool */;
int cltype144;
int idtype145;
const struct type* type_struct;
const char* var_class_name146;
short int var148 /* : Bool */;
int cltype149;
int idtype150;
const struct type* type_struct151;
const char* var_class_name152;
val* var153 /* : HashMap[MPropDef, APropdef] */;
val* var155 /* : HashMap[MPropDef, APropdef] */;
short int var156 /* : Bool */;
val* var157 /* : ToolContext */;
val* var159 /* : ToolContext */;
static val* varonce160;
val* var161 /* : String */;
char* var162 /* : NativeString */;
long var163 /* : Int */;
val* var164 /* : FlatString */;
val* var165 /* : String */;
val* var166 /* : Array[Object] */;
long var167 /* : Int */;
val* var168 /* : NativeArray[Object] */;
val* var169 /* : String */;
long var170 /* : Int */;
val* var171 /* : ToolContext */;
val* var173 /* : ToolContext */;
static val* varonce174;
val* var175 /* : String */;
char* var176 /* : NativeString */;
long var177 /* : Int */;
val* var178 /* : FlatString */;
val* var179 /* : String */;
val* var180 /* : Array[Object] */;
long var181 /* : Int */;
val* var182 /* : NativeArray[Object] */;
val* var183 /* : String */;
long var184 /* : Int */;
var_modelbuilder = p0;
var_mclassdef = p1;
{
var = parser_nodes__AMethPropdef__n_kwinit(self);
}
var_n_kwinit = var;
{
var1 = parser_nodes__AMethPropdef__n_kwnew(self);
}
var_n_kwnew = var1;
var3 = NULL;
if (var_n_kwinit == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwinit,var3) on <var_n_kwinit:nullable TKwinit> */
var_other = var3;
{
var8 = ((short int (*)(val*, val*))(var_n_kwinit->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_kwinit, var_other) /* == on <var_n_kwinit:nullable TKwinit(TKwinit)>*/;
var7 = var8;
}
var9 = !var7;
var5 = var9;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
var_ = var4;
if (var4){
var2 = var_;
} else {
var10 = NULL;
if (var_n_kwnew == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwnew,var10) on <var_n_kwnew:nullable TKwnew> */
var_other = var10;
{
var15 = ((short int (*)(val*, val*))(var_n_kwnew->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_kwnew, var_other) /* == on <var_n_kwnew:nullable TKwnew(TKwnew)>*/;
var14 = var15;
}
var16 = !var14;
var12 = var16;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
var2 = var11;
}
var_is_init = var2;
{
var17 = parser_nodes__AMethPropdef__n_methid(self);
}
var_amethodid = var17;
var18 = NULL;
if (var_amethodid == NULL) {
var19 = 1; /* is null */
} else {
var19 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_amethodid,var18) on <var_amethodid:nullable AMethid> */
var_other22 = var18;
{
{ /* Inline kernel#Object#is_same_instance (var_amethodid,var_other22) on <var_amethodid:nullable AMethid(AMethid)> */
var25 = var_amethodid == var_other22;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var20 = var23;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var19 = var20;
}
if (var19){
var26 = !var_is_init;
if (var26){
if (varonce) {
var27 = varonce;
} else {
var28 = "main";
var29 = 4;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce = var27;
}
var_name = var27;
var_name_node = self;
} else {
var31 = NULL;
if (var_n_kwinit == NULL) {
var32 = 0; /* is null */
} else {
var32 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwinit,var31) on <var_n_kwinit:nullable TKwinit> */
var_other = var31;
{
var36 = ((short int (*)(val*, val*))(var_n_kwinit->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_kwinit, var_other) /* == on <var_n_kwinit:nullable TKwinit(TKwinit)>*/;
var35 = var36;
}
var37 = !var35;
var33 = var37;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
var32 = var33;
}
if (var32){
if (varonce38) {
var39 = varonce38;
} else {
var40 = "init";
var41 = 4;
var42 = string__NativeString__to_s_with_length(var40, var41);
var39 = var42;
varonce38 = var39;
}
var_name = var39;
var_name_node = var_n_kwinit;
} else {
var43 = NULL;
if (var_n_kwnew == NULL) {
var44 = 0; /* is null */
} else {
var44 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwnew,var43) on <var_n_kwnew:nullable TKwnew> */
var_other = var43;
{
var48 = ((short int (*)(val*, val*))(var_n_kwnew->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_kwnew, var_other) /* == on <var_n_kwnew:nullable TKwnew(TKwnew)>*/;
var47 = var48;
}
var49 = !var47;
var45 = var49;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
var44 = var45;
}
if (var44){
if (varonce50) {
var51 = varonce50;
} else {
var52 = "init";
var53 = 4;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
var_name = var51;
var_name_node = var_n_kwnew;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 461);
show_backtrace(1);
}
}
}
} else {
/* <var_amethodid:nullable AMethid(AMethid)> isa AIdMethid */
cltype = type_parser_nodes__AIdMethid.color;
idtype = type_parser_nodes__AIdMethid.id;
if(cltype >= var_amethodid->type->table_size) {
var55 = 0;
} else {
var55 = var_amethodid->type->type_table[cltype] == idtype;
}
if (var55){
{
var56 = parser_nodes__AIdMethid__n_id(var_amethodid);
}
{
var57 = lexer_work__Token__text(var56);
}
var_name = var57;
var_name_node = var_amethodid;
} else {
{
var58 = modelize_property__Prod__collect_text(var_amethodid);
}
var_name = var58;
var_name_node = var_amethodid;
if (varonce60) {
var61 = varonce60;
} else {
var62 = "-";
var63 = 1;
var64 = string__NativeString__to_s_with_length(var62, var63);
var61 = var64;
varonce60 = var61;
}
{
var66 = string__FlatString___61d_61d(var_name, var61);
var65 = var66;
}
var_67 = var65;
if (var65){
{
var68 = parser_nodes__AMethPropdef__n_signature(self);
}
if (var68 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 471);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var68) on <var68:nullable ASignature> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1360);
show_backtrace(1);
}
var71 = var68->attrs[COLOR_parser_nodes__ASignature___n_params].val; /* _n_params on <var68:nullable ASignature> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1360);
show_backtrace(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
{
var72 = parser_nodes__ANodes__length(var69);
}
var73 = 0;
{
{ /* Inline kernel#Int#== (var72,var73) on <var72:Int> */
var77 = var72 == var73;
var75 = var77;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
var74 = var75;
}
var59 = var74;
} else {
var59 = var_67;
}
if (var59){
if (varonce78) {
var79 = varonce78;
} else {
var80 = "unary -";
var81 = 7;
var82 = string__NativeString__to_s_with_length(var80, var81);
var79 = var82;
varonce78 = var79;
}
var_name = var79;
} else {
}
}
}
var83 = NULL;
var_mprop = var83;
var85 = !var_is_init;
var_86 = var85;
if (var85){
var84 = var_86;
} else {
{
var87 = parser_nodes__APropdef__n_kwredef(self);
}
var88 = NULL;
if (var87 == NULL) {
var89 = 0; /* is null */
} else {
var89 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var87,var88) on <var87:nullable TKwredef> */
var_other = var88;
{
var93 = ((short int (*)(val*, val*))(var87->class->vft[COLOR_kernel__Object___61d_61d]))(var87, var_other) /* == on <var87:nullable TKwredef(TKwredef)>*/;
var92 = var93;
}
var94 = !var92;
var90 = var94;
goto RET_LABEL91;
RET_LABEL91:(void)0;
}
var89 = var90;
}
var84 = var89;
}
if (var84){
{
var95 = modelbuilder__ModelBuilder__try_get_mproperty_by_name(var_modelbuilder, var_name_node, var_mclassdef, var_name);
}
/* <var95:nullable MProperty> isa nullable MMethod */
cltype97 = type_nullable_model__MMethod.color;
idtype98 = type_nullable_model__MMethod.id;
if(var95 == NULL) {
var96 = 1;
} else {
if(cltype97 >= var95->type->table_size) {
var96 = 0;
} else {
var96 = var95->type->type_table[cltype97] == idtype98;
}
}
if (unlikely(!var96)) {
var_class_name = var95 == NULL ? "null" : var95->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MMethod", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 477);
show_backtrace(1);
}
var_mprop = var95;
} else {
}
var99 = NULL;
if (var_mprop == NULL) {
var100 = 1; /* is null */
} else {
var100 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mprop,var99) on <var_mprop:nullable MMethod> */
var_other22 = var99;
{
{ /* Inline kernel#Object#is_same_instance (var_mprop,var_other22) on <var_mprop:nullable MMethod(MMethod)> */
var105 = var_mprop == var_other22;
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
{
var106 = parser_nodes__APropdef__n_visibility(self);
}
{
var107 = modelize_property__APropdef__new_property_visibility(self, var_modelbuilder, var_mclassdef, var106);
}
var_mvisibility = var107;
var108 = NEW_model__MMethod(&type_model__MMethod);
{
model__MMethod__init(var108, var_mclassdef, var_name, var_mvisibility); /* Direct call model#MMethod#init on <var108:MMethod>*/
}
var_mprop = var108;
{
{ /* Inline model#MMethod#is_init= (var_mprop,var_is_init) on <var_mprop:nullable MMethod(MMethod)> */
var_mprop->attrs[COLOR_model__MMethod___is_init].s = var_is_init; /* _is_init on <var_mprop:nullable MMethod(MMethod)> */
RET_LABEL109:(void)0;
}
}
var110 = NULL;
if (var_n_kwnew == NULL) {
var111 = 0; /* is null */
} else {
var111 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwnew,var110) on <var_n_kwnew:nullable TKwnew> */
var_other = var110;
{
var115 = ((short int (*)(val*, val*))(var_n_kwnew->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_kwnew, var_other) /* == on <var_n_kwnew:nullable TKwnew(TKwnew)>*/;
var114 = var115;
}
var116 = !var114;
var112 = var116;
goto RET_LABEL113;
RET_LABEL113:(void)0;
}
var111 = var112;
}
{
{ /* Inline model#MMethod#is_new= (var_mprop,var111) on <var_mprop:nullable MMethod(MMethod)> */
var_mprop->attrs[COLOR_model__MMethod___is_new].s = var111; /* _is_new on <var_mprop:nullable MMethod(MMethod)> */
RET_LABEL117:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#parent (self) on <self:AMethPropdef> */
var120 = self->attrs[COLOR_parser_nodes__ANode___parent].val; /* _parent on <self:AMethPropdef> */
var118 = var120;
RET_LABEL119:(void)0;
}
}
/* <var118:nullable ANode> isa ATopClassdef */
cltype122 = type_parser_nodes__ATopClassdef.color;
idtype123 = type_parser_nodes__ATopClassdef.id;
if(var118 == NULL) {
var121 = 0;
} else {
if(cltype122 >= var118->type->table_size) {
var121 = 0;
} else {
var121 = var118->type->type_table[cltype122] == idtype123;
}
}
if (var121){
var124 = 1;
{
{ /* Inline model#MMethod#is_toplevel= (var_mprop,var124) on <var_mprop:nullable MMethod(MMethod)> */
var_mprop->attrs[COLOR_model__MMethod___is_toplevel].s = var124; /* _is_toplevel on <var_mprop:nullable MMethod(MMethod)> */
RET_LABEL125:(void)0;
}
}
} else {
}
{
var126 = parser_nodes__APropdef__n_kwredef(self);
}
var127 = 0;
{
var128 = modelize_property__APropdef__check_redef_keyword(self, var_modelbuilder, var_mclassdef, var126, var127, var_mprop);
}
var129 = !var128;
if (var129){
goto RET_LABEL;
} else {
}
} else {
{
var130 = parser_nodes__APropdef__n_kwredef(self);
}
/* <self:AMethPropdef> isa AMainMethPropdef */
cltype132 = type_parser_nodes__AMainMethPropdef.color;
idtype133 = type_parser_nodes__AMainMethPropdef.id;
if(cltype132 >= self->type->table_size) {
var131 = 0;
} else {
var131 = self->type->type_table[cltype132] == idtype133;
}
var134 = !var131;
{
var135 = modelize_property__APropdef__check_redef_keyword(self, var_modelbuilder, var_mclassdef, var130, var134, var_mprop);
}
var136 = !var135;
if (var136){
goto RET_LABEL;
} else {
}
{
var137 = parser_nodes__APropdef__n_visibility(self);
}
{
modelize_property__APropdef__check_redef_property_visibility(self, var_modelbuilder, var137, var_mprop); /* Direct call modelize_property#APropdef#check_redef_property_visibility on <self:AMethPropdef>*/
}
}
{
{ /* Inline modelize_property#MClassDef#mprop2npropdef (var_mclassdef) on <var_mclassdef:MClassDef> */
var140 = var_mclassdef->attrs[COLOR_modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <var_mclassdef:MClassDef> */
if (unlikely(var140 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 252);
show_backtrace(1);
}
var138 = var140;
RET_LABEL139:(void)0;
}
}
{
((void (*)(val*, val*, val*))(var138->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var138, var_mprop, self) /* []= on <var138:Map[MProperty, APropdef]>*/;
}
var141 = NEW_model__MMethodDef(&type_model__MMethodDef);
{
var142 = parser_nodes__ANode__location(self);
}
{
model__MMethodDef__init(var141, var_mclassdef, var_mprop, var142); /* Direct call model#MMethodDef#init on <var141:MMethodDef>*/
}
var_mpropdef = var141;
{
modelize_property__APropdef__set_doc(self, var_mpropdef); /* Direct call modelize_property#APropdef#set_doc on <self:AMethPropdef>*/
}
/* <var_mpropdef:MMethodDef> isa nullable MPROPDEF */
type_struct = self->type->resolution_table->types[COLOR_nullable_parser_nodes__APropdef_VTMPROPDEF];
cltype144 = type_struct->color;
idtype145 = type_struct->id;
if(cltype144 >= var_mpropdef->type->table_size) {
var143 = 0;
} else {
var143 = var_mpropdef->type->type_table[cltype144] == idtype145;
}
if (unlikely(!var143)) {
var_class_name146 = var_mpropdef == NULL ? "null" : var_mpropdef->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name146);
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 495);
show_backtrace(1);
}
{
{ /* Inline modelize_property#APropdef#mpropdef= (self,var_mpropdef) on <self:AMethPropdef> */
/* Covariant cast for argument 0 (mpropdef) <var_mpropdef:MMethodDef> isa nullable MPROPDEF */
/* <var_mpropdef:MMethodDef> isa nullable MPROPDEF */
type_struct151 = self->type->resolution_table->types[COLOR_nullable_parser_nodes__APropdef_VTMPROPDEF];
cltype149 = type_struct151->color;
idtype150 = type_struct151->id;
if(cltype149 >= var_mpropdef->type->table_size) {
var148 = 0;
} else {
var148 = var_mpropdef->type->type_table[cltype149] == idtype150;
}
if (unlikely(!var148)) {
var_class_name152 = var_mpropdef == NULL ? "null" : var_mpropdef->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name152);
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 283);
show_backtrace(1);
}
self->attrs[COLOR_modelize_property__APropdef___mpropdef].val = var_mpropdef; /* _mpropdef on <self:AMethPropdef> */
RET_LABEL147:(void)0;
}
}
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var155 = var_modelbuilder->attrs[COLOR_modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var155 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 39);
show_backtrace(1);
}
var153 = var155;
RET_LABEL154:(void)0;
}
}
{
hash_collection__HashMap___91d_93d_61d(var153, var_mpropdef, self); /* Direct call hash_collection#HashMap#[]= on <var153:HashMap[MPropDef, APropdef]>*/
}
{
var156 = model__MPropDef__is_intro(var_mpropdef);
}
if (var156){
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var159 = var_modelbuilder->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var_modelbuilder:ModelBuilder> */
if (unlikely(var159 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var157 = var159;
RET_LABEL158:(void)0;
}
}
if (varonce160) {
var161 = varonce160;
} else {
var162 = " introduces new method ";
var163 = 23;
var164 = string__NativeString__to_s_with_length(var162, var163);
var161 = var164;
varonce160 = var161;
}
{
var165 = model__MProperty__full_name(var_mprop);
}
var166 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var166 = array_instance Array[Object] */
var167 = 3;
var168 = NEW_array__NativeArray(var167, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var168)->values[0] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var168)->values[1] = (val*) var161;
((struct instance_array__NativeArray*)var168)->values[2] = (val*) var165;
{
((void (*)(val*, val*, long))(var166->class->vft[COLOR_array__Array__with_native]))(var166, var168, var167) /* with_native on <var166:Array[Object]>*/;
}
}
{
var169 = ((val* (*)(val*))(var166->class->vft[COLOR_string__Object__to_s]))(var166) /* to_s on <var166:Array[Object]>*/;
}
var170 = 3;
{
toolcontext__ToolContext__info(var157, var169, var170); /* Direct call toolcontext#ToolContext#info on <var157:ToolContext>*/
}
} else {
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var173 = var_modelbuilder->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var_modelbuilder:ModelBuilder> */
if (unlikely(var173 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var171 = var173;
RET_LABEL172:(void)0;
}
}
if (varonce174) {
var175 = varonce174;
} else {
var176 = " redefines method ";
var177 = 18;
var178 = string__NativeString__to_s_with_length(var176, var177);
var175 = var178;
varonce174 = var175;
}
{
var179 = model__MProperty__full_name(var_mprop);
}
var180 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var180 = array_instance Array[Object] */
var181 = 3;
var182 = NEW_array__NativeArray(var181, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var182)->values[0] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var182)->values[1] = (val*) var175;
((struct instance_array__NativeArray*)var182)->values[2] = (val*) var179;
{
((void (*)(val*, val*, long))(var180->class->vft[COLOR_array__Array__with_native]))(var180, var182, var181) /* with_native on <var180:Array[Object]>*/;
}
}
{
var183 = ((val* (*)(val*))(var180->class->vft[COLOR_string__Object__to_s]))(var180) /* to_s on <var180:Array[Object]>*/;
}
var184 = 3;
{
toolcontext__ToolContext__info(var171, var183, var184); /* Direct call toolcontext#ToolContext#info on <var171:ToolContext>*/
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
val* var_nsig /* var nsig: nullable ASignature */;
val* var17 /* : Array[String] */;
val* var_param_names /* var param_names: Array[String] */;
val* var18 /* : Array[MType] */;
val* var_param_types /* var param_types: Array[MType] */;
long var19 /* : Int */;
long var20 /* : Int */;
long var22 /* : Int */;
long var_vararg_rank /* var vararg_rank: Int */;
val* var23 /* : null */;
val* var_ret_type /* var ret_type: nullable MType */;
val* var24 /* : null */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var_other28 /* var other: nullable Object */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
val* var34 /* : Array[String] */;
val* var36 /* : Array[String] */;
val* var37 /* : Array[MType] */;
val* var39 /* : Array[MType] */;
long var40 /* : Int */;
long var42 /* : Int */;
val* var43 /* : nullable MType */;
val* var45 /* : nullable MType */;
val* var46 /* : null */;
val* var_msignature /* var msignature: nullable MSignature */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
val* var49 /* : MProperty */;
val* var51 /* : MProperty */;
val* var52 /* : MPropDef */;
val* var53 /* : nullable MSignature */;
val* var55 /* : nullable MSignature */;
val* var56 /* : null */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
short int var60 /* : Bool */;
short int var62 /* : Bool */;
long var63 /* : Int */;
long var64 /* : Int */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
val* var70 /* : null */;
short int var71 /* : Bool */;
short int var72 /* : Bool */;
short int var74 /* : Bool */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
val* var_node /* var node: ANode */;
static val* varonce;
val* var77 /* : String */;
char* var78 /* : NativeString */;
long var79 /* : Int */;
val* var80 /* : FlatString */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
long var84 /* : Int */;
val* var85 /* : FlatString */;
val* var86 /* : MProperty */;
val* var88 /* : MProperty */;
val* var89 /* : MPropDef */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : NativeString */;
long var93 /* : Int */;
val* var94 /* : FlatString */;
long var95 /* : Int */;
static val* varonce96;
val* var97 /* : String */;
char* var98 /* : NativeString */;
long var99 /* : Int */;
val* var100 /* : FlatString */;
long var101 /* : Int */;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : NativeString */;
long var105 /* : Int */;
val* var106 /* : FlatString */;
val* var107 /* : Array[Object] */;
long var108 /* : Int */;
val* var109 /* : NativeArray[Object] */;
val* var110 /* : Object */;
val* var111 /* : Object */;
val* var112 /* : String */;
val* var113 /* : MProperty */;
val* var115 /* : MProperty */;
short int var116 /* : Bool */;
short int var118 /* : Bool */;
val* var119 /* : Array[MClassType] */;
val* var121 /* : Array[MClassType] */;
val* var122 /* : ArrayIterator[nullable Object] */;
short int var123 /* : Bool */;
val* var124 /* : nullable Object */;
val* var_msupertype /* var msupertype: MClassType */;
val* var125 /* : MClassType */;
val* var127 /* : MClassType */;
val* var128 /* : MClassType */;
val* var129 /* : MProperty */;
val* var131 /* : MProperty */;
val* var132 /* : String */;
val* var134 /* : String */;
val* var135 /* : nullable MProperty */;
val* var_candidate /* var candidate: nullable MProperty */;
val* var136 /* : null */;
short int var137 /* : Bool */;
short int var138 /* : Bool */;
short int var140 /* : Bool */;
short int var141 /* : Bool */;
short int var142 /* : Bool */;
val* var143 /* : null */;
short int var144 /* : Bool */;
short int var145 /* : Bool */;
short int var147 /* : Bool */;
short int var149 /* : Bool */;
val* var150 /* : MPropDef */;
short int var151 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var152 /* : nullable MSignature */;
val* var154 /* : nullable MSignature */;
short int var155 /* : Bool */;
short int var156 /* : Bool */;
short int var157 /* : Bool */;
val* var158 /* : null */;
short int var159 /* : Bool */;
short int var160 /* : Bool */;
short int var162 /* : Bool */;
short int var163 /* : Bool */;
short int var164 /* : Bool */;
short int var_ /* var : Bool */;
long var165 /* : Int */;
long var166 /* : Int */;
short int var167 /* : Bool */;
short int var168 /* : Bool */;
short int var170 /* : Bool */;
short int var171 /* : Bool */;
short int var_172 /* var : Bool */;
long var173 /* : Int */;
long var174 /* : Int */;
short int var175 /* : Bool */;
short int var176 /* : Bool */;
short int var178 /* : Bool */;
short int var_179 /* var : Bool */;
long var180 /* : Int */;
long var181 /* : Int */;
short int var182 /* : Bool */;
short int var183 /* : Bool */;
short int var185 /* : Bool */;
val* var186 /* : Array[MType] */;
val* var187 /* : Array[MParameter] */;
val* var189 /* : Array[MParameter] */;
val* var190 /* : ArrayIterator[nullable Object] */;
short int var191 /* : Bool */;
val* var192 /* : nullable Object */;
val* var_mparameter /* var mparameter: MParameter */;
val* var193 /* : MType */;
val* var195 /* : MType */;
long var197 /* : Int */;
long var199 /* : Int */;
short int var200 /* : Bool */;
val* var201 /* : null */;
short int var202 /* : Bool */;
short int var203 /* : Bool */;
short int var205 /* : Bool */;
short int var206 /* : Bool */;
short int var207 /* : Bool */;
short int var_208 /* var : Bool */;
val* var209 /* : null */;
short int var210 /* : Bool */;
short int var211 /* : Bool */;
short int var213 /* : Bool */;
short int var215 /* : Bool */;
val* var216 /* : nullable MType */;
val* var218 /* : nullable MType */;
long var219 /* : Int */;
long var220 /* : Int */;
short int var221 /* : Bool */;
short int var222 /* : Bool */;
short int var224 /* : Bool */;
short int var225 /* : Bool */;
val* var226 /* : ANodes[AParam] */;
val* var228 /* : ANodes[AParam] */;
long var229 /* : Int */;
val* var230 /* : ANode */;
static val* varonce231;
val* var232 /* : String */;
char* var233 /* : NativeString */;
long var234 /* : Int */;
val* var235 /* : FlatString */;
long var236 /* : Int */;
val* var237 /* : nullable Object */;
static val* varonce238;
val* var239 /* : String */;
char* var240 /* : NativeString */;
long var241 /* : Int */;
val* var242 /* : FlatString */;
val* var243 /* : Array[Object] */;
long var244 /* : Int */;
val* var245 /* : NativeArray[Object] */;
val* var246 /* : String */;
val* var247 /* : Array[MParameter] */;
val* var_mparameters /* var mparameters: Array[MParameter] */;
val* var248 /* : Range[Int] */;
long var249 /* : Int */;
long var250 /* : Int */;
val* var251 /* : Discrete */;
val* var252 /* : Discrete */;
val* var253 /* : Iterator[Discrete] */;
short int var254 /* : Bool */;
val* var255 /* : nullable Object */;
long var_i /* var i: Int */;
long var256 /* : Int */;
val* var257 /* : MParameter */;
val* var258 /* : nullable Object */;
val* var259 /* : nullable Object */;
short int var260 /* : Bool */;
short int var261 /* : Bool */;
short int var263 /* : Bool */;
val* var_mparameter264 /* var mparameter: MParameter */;
val* var265 /* : null */;
short int var266 /* : Bool */;
short int var267 /* : Bool */;
short int var269 /* : Bool */;
short int var270 /* : Bool */;
short int var271 /* : Bool */;
val* var272 /* : ANodes[AParam] */;
val* var274 /* : ANodes[AParam] */;
val* var275 /* : ANode */;
val* var278 /* : MSignature */;
short int var280 /* : Bool */;
int cltype281;
int idtype282;
short int var284 /* : Bool */;
int cltype285;
int idtype286;
short int var288 /* : Bool */;
int cltype289;
int idtype290;
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
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
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
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 471);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_mmodule = var13;
{
var16 = parser_nodes__AMethPropdef__n_signature(self);
}
var_nsig = var16;
var17 = NEW_array__Array(&type_array__Arraystring__String);
{
array__Array__init(var17); /* Direct call array#Array#init on <var17:Array[String]>*/
}
var_param_names = var17;
var18 = NEW_array__Array(&type_array__Arraymodel__MType);
{
array__Array__init(var18); /* Direct call array#Array#init on <var18:Array[MType]>*/
}
var_param_types = var18;
var19 = 1;
{
{ /* Inline kernel#Int#unary - (var19) on <var19:Int> */
var22 = -var19;
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var_vararg_rank = var20;
var23 = NULL;
var_ret_type = var23;
var24 = NULL;
if (var_nsig == NULL) {
var25 = 0; /* is null */
} else {
var25 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nsig,var24) on <var_nsig:nullable ASignature> */
var_other28 = var24;
{
var30 = ((short int (*)(val*, val*))(var_nsig->class->vft[COLOR_kernel__Object___61d_61d]))(var_nsig, var_other28) /* == on <var_nsig:nullable ASignature(ASignature)>*/;
var29 = var30;
}
var31 = !var29;
var26 = var31;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
var25 = var26;
}
if (var25){
{
var32 = modelize_property__ASignature__visit_signature(var_nsig, var_modelbuilder, var_mclassdef);
}
var33 = !var32;
if (var33){
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property#ASignature#param_names (var_nsig) on <var_nsig:nullable ASignature(ASignature)> */
var36 = var_nsig->attrs[COLOR_modelize_property__ASignature___param_names].val; /* _param_names on <var_nsig:nullable ASignature(ASignature)> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _param_names");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 366);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
var_param_names = var34;
{
{ /* Inline modelize_property#ASignature#param_types (var_nsig) on <var_nsig:nullable ASignature(ASignature)> */
var39 = var_nsig->attrs[COLOR_modelize_property__ASignature___param_types].val; /* _param_types on <var_nsig:nullable ASignature(ASignature)> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _param_types");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 369);
show_backtrace(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
var_param_types = var37;
{
{ /* Inline modelize_property#ASignature#vararg_rank (var_nsig) on <var_nsig:nullable ASignature(ASignature)> */
var42 = var_nsig->attrs[COLOR_modelize_property__ASignature___vararg_rank].l; /* _vararg_rank on <var_nsig:nullable ASignature(ASignature)> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
var_vararg_rank = var40;
{
{ /* Inline modelize_property#ASignature#ret_type (var_nsig) on <var_nsig:nullable ASignature(ASignature)> */
var45 = var_nsig->attrs[COLOR_modelize_property__ASignature___ret_type].val; /* _ret_type on <var_nsig:nullable ASignature(ASignature)> */
var43 = var45;
RET_LABEL44:(void)0;
}
}
var_ret_type = var43;
} else {
}
var46 = NULL;
var_msignature = var46;
{
var47 = model__MPropDef__is_intro(var_mpropdef);
}
var48 = !var47;
if (var48){
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var51 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
var52 = model__MProperty__intro(var49);
}
{
{ /* Inline model#MMethodDef#msignature (var52) on <var52:MPropDef(MMethodDef)> */
var55 = var52->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var52:MPropDef(MMethodDef)> */
var53 = var55;
RET_LABEL54:(void)0;
}
}
var_msignature = var53;
var56 = NULL;
if (var_msignature == NULL) {
var57 = 1; /* is null */
} else {
var57 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_msignature,var56) on <var_msignature:nullable MSignature> */
var_other = var56;
{
{ /* Inline kernel#Object#is_same_instance (var_msignature,var_other) on <var_msignature:nullable MSignature(MSignature)> */
var62 = var_msignature == var_other;
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
if (var57){
goto RET_LABEL;
} else {
}
{
var63 = array__AbstractArrayRead__length(var_param_names);
}
{
var64 = model__MSignature__arity(var_msignature);
}
{
{ /* Inline kernel#Int#!= (var63,var64) on <var63:Int> */
var68 = var63 == var64;
var69 = !var68;
var66 = var69;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
var65 = var66;
}
if (var65){
var70 = NULL;
if (var_nsig == NULL) {
var71 = 0; /* is null */
} else {
var71 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nsig,var70) on <var_nsig:nullable ASignature> */
var_other28 = var70;
{
var75 = ((short int (*)(val*, val*))(var_nsig->class->vft[COLOR_kernel__Object___61d_61d]))(var_nsig, var_other28) /* == on <var_nsig:nullable ASignature(ASignature)>*/;
var74 = var75;
}
var76 = !var74;
var72 = var76;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
var71 = var72;
}
if (var71){
var_node = var_nsig;
} else {
var_node = self;
}
if (varonce) {
var77 = varonce;
} else {
var78 = "Redef error: ";
var79 = 13;
var80 = string__NativeString__to_s_with_length(var78, var79);
var77 = var80;
varonce = var77;
}
if (varonce81) {
var82 = varonce81;
} else {
var83 = " redefines ";
var84 = 11;
var85 = string__NativeString__to_s_with_length(var83, var84);
var82 = var85;
varonce81 = var82;
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var88 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var88 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var86 = var88;
RET_LABEL87:(void)0;
}
}
{
var89 = model__MProperty__intro(var86);
}
if (varonce90) {
var91 = varonce90;
} else {
var92 = " with ";
var93 = 6;
var94 = string__NativeString__to_s_with_length(var92, var93);
var91 = var94;
varonce90 = var91;
}
{
var95 = array__AbstractArrayRead__length(var_param_names);
}
if (varonce96) {
var97 = varonce96;
} else {
var98 = " parameter(s), ";
var99 = 15;
var100 = string__NativeString__to_s_with_length(var98, var99);
var97 = var100;
varonce96 = var97;
}
{
var101 = model__MSignature__arity(var_msignature);
}
if (varonce102) {
var103 = varonce102;
} else {
var104 = " expected. Signature is ";
var105 = 24;
var106 = string__NativeString__to_s_with_length(var104, var105);
var103 = var106;
varonce102 = var103;
}
var107 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var107 = array_instance Array[Object] */
var108 = 11;
var109 = NEW_array__NativeArray(var108, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var109)->values[0] = (val*) var77;
((struct instance_array__NativeArray*)var109)->values[1] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var109)->values[2] = (val*) var82;
((struct instance_array__NativeArray*)var109)->values[3] = (val*) var89;
((struct instance_array__NativeArray*)var109)->values[4] = (val*) var91;
var110 = BOX_kernel__Int(var95); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var109)->values[5] = (val*) var110;
((struct instance_array__NativeArray*)var109)->values[6] = (val*) var97;
var111 = BOX_kernel__Int(var101); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var109)->values[7] = (val*) var111;
((struct instance_array__NativeArray*)var109)->values[8] = (val*) var103;
((struct instance_array__NativeArray*)var109)->values[9] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var109)->values[10] = (val*) var_msignature;
{
((void (*)(val*, val*, long))(var107->class->vft[COLOR_array__Array__with_native]))(var107, var109, var108) /* with_native on <var107:Array[Object]>*/;
}
}
{
var112 = ((val* (*)(val*))(var107->class->vft[COLOR_string__Object__to_s]))(var107) /* to_s on <var107:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, var_node, var112); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
} else {
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var115 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var115 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var113 = var115;
RET_LABEL114:(void)0;
}
}
{
{ /* Inline model#MMethod#is_init (var113) on <var113:MProperty(MMethod)> */
var118 = var113->attrs[COLOR_model__MMethod___is_init].s; /* _is_init on <var113:MProperty(MMethod)> */
var116 = var118;
RET_LABEL117:(void)0;
}
}
if (var116){
{
{ /* Inline model#MClassDef#supertypes (var_mclassdef) on <var_mclassdef:MClassDef> */
var121 = var_mclassdef->attrs[COLOR_model__MClassDef___supertypes].val; /* _supertypes on <var_mclassdef:MClassDef> */
if (unlikely(var121 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supertypes");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 517);
show_backtrace(1);
}
var119 = var121;
RET_LABEL120:(void)0;
}
}
{
var122 = array__AbstractArrayRead__iterator(var119);
}
for(;;) {
{
var123 = array__ArrayIterator__is_ok(var122);
}
if(!var123) break;
{
var124 = array__ArrayIterator__item(var122);
}
var_msupertype = var124;
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var127 = var_mclassdef->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var127 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var125 = var127;
RET_LABEL126:(void)0;
}
}
{
var128 = model__MClassType__anchor_to(var_msupertype, var_mmodule, var125);
}
var_msupertype = var128;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var131 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var131 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var129 = var131;
RET_LABEL130:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var129) on <var129:MProperty(MMethod)> */
var134 = var129->attrs[COLOR_model__MProperty___name].val; /* _name on <var129:MProperty(MMethod)> */
if (unlikely(var134 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1607);
show_backtrace(1);
}
var132 = var134;
RET_LABEL133:(void)0;
}
}
{
var135 = modelbuilder__ModelBuilder__try_get_mproperty_by_name2(var_modelbuilder, self, var_mmodule, var_msupertype, var132);
}
var_candidate = var135;
var136 = NULL;
if (var_candidate == NULL) {
var137 = 0; /* is null */
} else {
var137 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_candidate,var136) on <var_candidate:nullable MProperty> */
var_other28 = var136;
{
var141 = ((short int (*)(val*, val*))(var_candidate->class->vft[COLOR_kernel__Object___61d_61d]))(var_candidate, var_other28) /* == on <var_candidate:nullable MProperty(MProperty)>*/;
var140 = var141;
}
var142 = !var140;
var138 = var142;
goto RET_LABEL139;
RET_LABEL139:(void)0;
}
var137 = var138;
}
if (var137){
var143 = NULL;
if (var_msignature == NULL) {
var144 = 1; /* is null */
} else {
var144 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_msignature,var143) on <var_msignature:nullable MSignature> */
var_other = var143;
{
{ /* Inline kernel#Object#is_same_instance (var_msignature,var_other) on <var_msignature:nullable MSignature(MSignature)> */
var149 = var_msignature == var_other;
var147 = var149;
goto RET_LABEL148;
RET_LABEL148:(void)0;
}
}
var145 = var147;
goto RET_LABEL146;
RET_LABEL146:(void)0;
}
var144 = var145;
}
if (var144){
{
var150 = model__MProperty__intro(var_candidate);
}
/* <var150:MPropDef> isa MMethodDef */
cltype = type_model__MMethodDef.color;
idtype = type_model__MMethodDef.id;
if(cltype >= var150->type->table_size) {
var151 = 0;
} else {
var151 = var150->type->type_table[cltype] == idtype;
}
if (unlikely(!var151)) {
var_class_name = var150 == NULL ? "null" : var150->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MMethodDef", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 546);
show_backtrace(1);
}
{
{ /* Inline model#MMethodDef#msignature (var150) on <var150:MPropDef(MMethodDef)> */
var154 = var150->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var150:MPropDef(MMethodDef)> */
var152 = var154;
RET_LABEL153:(void)0;
}
}
var_msignature = var152;
} else {
}
} else {
}
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var122); /* Direct call array#ArrayIterator#next on <var122:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
} else {
}
}
var158 = NULL;
if (var_msignature == NULL) {
var159 = 0; /* is null */
} else {
var159 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_msignature,var158) on <var_msignature:nullable MSignature> */
var_other28 = var158;
{
var163 = ((short int (*)(val*, val*))(var_msignature->class->vft[COLOR_kernel__Object___61d_61d]))(var_msignature, var_other28) /* == on <var_msignature:nullable MSignature(MSignature)>*/;
var162 = var163;
}
var164 = !var162;
var160 = var164;
goto RET_LABEL161;
RET_LABEL161:(void)0;
}
var159 = var160;
}
var_ = var159;
if (var159){
{
var165 = array__AbstractArrayRead__length(var_param_names);
}
{
var166 = array__AbstractArrayRead__length(var_param_types);
}
{
{ /* Inline kernel#Int#!= (var165,var166) on <var165:Int> */
var170 = var165 == var166;
var171 = !var170;
var168 = var171;
goto RET_LABEL169;
RET_LABEL169:(void)0;
}
var167 = var168;
}
var157 = var167;
} else {
var157 = var_;
}
var_172 = var157;
if (var157){
{
var173 = array__AbstractArrayRead__length(var_param_names);
}
{
var174 = model__MSignature__arity(var_msignature);
}
{
{ /* Inline kernel#Int#== (var173,var174) on <var173:Int> */
var178 = var173 == var174;
var176 = var178;
goto RET_LABEL177;
RET_LABEL177:(void)0;
}
var175 = var176;
}
var156 = var175;
} else {
var156 = var_172;
}
var_179 = var156;
if (var156){
{
var180 = array__AbstractArrayRead__length(var_param_types);
}
var181 = 0;
{
{ /* Inline kernel#Int#== (var180,var181) on <var180:Int> */
var185 = var180 == var181;
var183 = var185;
goto RET_LABEL184;
RET_LABEL184:(void)0;
}
var182 = var183;
}
var155 = var182;
} else {
var155 = var_179;
}
if (var155){
var186 = NEW_array__Array(&type_array__Arraymodel__MType);
{
array__Array__init(var186); /* Direct call array#Array#init on <var186:Array[MType]>*/
}
var_param_types = var186;
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var189 = var_msignature->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var_msignature:nullable MSignature(MSignature)> */
if (unlikely(var189 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1452);
show_backtrace(1);
}
var187 = var189;
RET_LABEL188:(void)0;
}
}
{
var190 = array__AbstractArrayRead__iterator(var187);
}
for(;;) {
{
var191 = array__ArrayIterator__is_ok(var190);
}
if(!var191) break;
{
var192 = array__ArrayIterator__item(var190);
}
var_mparameter = var192;
{
{ /* Inline model#MParameter#mtype (var_mparameter) on <var_mparameter:MParameter> */
var195 = var_mparameter->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var_mparameter:MParameter> */
if (unlikely(var195 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1552);
show_backtrace(1);
}
var193 = var195;
RET_LABEL194:(void)0;
}
}
{
array__Array__add(var_param_types, var193); /* Direct call array#Array#add on <var_param_types:Array[MType]>*/
}
CONTINUE_label196: (void)0;
{
array__ArrayIterator__next(var190); /* Direct call array#ArrayIterator#next on <var190:ArrayIterator[nullable Object]>*/
}
}
BREAK_label196: (void)0;
{
{ /* Inline model#MSignature#vararg_rank (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var199 = var_msignature->attrs[COLOR_model__MSignature___vararg_rank].l; /* _vararg_rank on <var_msignature:nullable MSignature(MSignature)> */
var197 = var199;
RET_LABEL198:(void)0;
}
}
var_vararg_rank = var197;
} else {
}
var201 = NULL;
if (var_msignature == NULL) {
var202 = 0; /* is null */
} else {
var202 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_msignature,var201) on <var_msignature:nullable MSignature> */
var_other28 = var201;
{
var206 = ((short int (*)(val*, val*))(var_msignature->class->vft[COLOR_kernel__Object___61d_61d]))(var_msignature, var_other28) /* == on <var_msignature:nullable MSignature(MSignature)>*/;
var205 = var206;
}
var207 = !var205;
var203 = var207;
goto RET_LABEL204;
RET_LABEL204:(void)0;
}
var202 = var203;
}
var_208 = var202;
if (var202){
var209 = NULL;
if (var_ret_type == NULL) {
var210 = 1; /* is null */
} else {
var210 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ret_type,var209) on <var_ret_type:nullable MType> */
var_other = var209;
{
{ /* Inline kernel#Object#is_same_instance (var_ret_type,var_other) on <var_ret_type:nullable MType(MType)> */
var215 = var_ret_type == var_other;
var213 = var215;
goto RET_LABEL214;
RET_LABEL214:(void)0;
}
}
var211 = var213;
goto RET_LABEL212;
RET_LABEL212:(void)0;
}
var210 = var211;
}
var200 = var210;
} else {
var200 = var_208;
}
if (var200){
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var218 = var_msignature->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:nullable MSignature(MSignature)> */
var216 = var218;
RET_LABEL217:(void)0;
}
}
var_ret_type = var216;
} else {
}
{
var219 = array__AbstractArrayRead__length(var_param_names);
}
{
var220 = array__AbstractArrayRead__length(var_param_types);
}
{
{ /* Inline kernel#Int#!= (var219,var220) on <var219:Int> */
var224 = var219 == var220;
var225 = !var224;
var222 = var225;
goto RET_LABEL223;
RET_LABEL223:(void)0;
}
var221 = var222;
}
if (var221){
if (var_nsig == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 568);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var_nsig) on <var_nsig:nullable ASignature> */
if (unlikely(var_nsig == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1360);
show_backtrace(1);
}
var228 = var_nsig->attrs[COLOR_parser_nodes__ASignature___n_params].val; /* _n_params on <var_nsig:nullable ASignature> */
if (unlikely(var228 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1360);
show_backtrace(1);
}
var226 = var228;
RET_LABEL227:(void)0;
}
}
{
var229 = array__AbstractArrayRead__length(var_param_types);
}
{
var230 = parser_nodes__ANodes___91d_93d(var226, var229);
}
if (varonce231) {
var232 = varonce231;
} else {
var233 = "Error: Untyped parameter `";
var234 = 26;
var235 = string__NativeString__to_s_with_length(var233, var234);
var232 = var235;
varonce231 = var232;
}
{
var236 = array__AbstractArrayRead__length(var_param_types);
}
{
var237 = array__Array___91d_93d(var_param_names, var236);
}
if (varonce238) {
var239 = varonce238;
} else {
var240 = "\'.";
var241 = 2;
var242 = string__NativeString__to_s_with_length(var240, var241);
var239 = var242;
varonce238 = var239;
}
var243 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var243 = array_instance Array[Object] */
var244 = 3;
var245 = NEW_array__NativeArray(var244, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var245)->values[0] = (val*) var232;
((struct instance_array__NativeArray*)var245)->values[1] = (val*) var237;
((struct instance_array__NativeArray*)var245)->values[2] = (val*) var239;
{
((void (*)(val*, val*, long))(var243->class->vft[COLOR_array__Array__with_native]))(var243, var245, var244) /* with_native on <var243:Array[Object]>*/;
}
}
{
var246 = ((val* (*)(val*))(var243->class->vft[COLOR_string__Object__to_s]))(var243) /* to_s on <var243:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, var230, var246); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
var247 = NEW_array__Array(&type_array__Arraymodel__MParameter);
{
array__Array__init(var247); /* Direct call array#Array#init on <var247:Array[MParameter]>*/
}
var_mparameters = var247;
var248 = NEW_range__Range(&type_range__Rangekernel__Int);
var249 = 0;
{
var250 = array__AbstractArrayRead__length(var_param_names);
}
{
var251 = BOX_kernel__Int(var249); /* autobox from Int to Discrete */
var252 = BOX_kernel__Int(var250); /* autobox from Int to Discrete */
range__Range__without_last(var248, var251, var252); /* Direct call range#Range#without_last on <var248:Range[Int]>*/
}
{
var253 = range__Range__iterator(var248);
}
for(;;) {
{
var254 = ((short int (*)(val*))(var253->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var253) /* is_ok on <var253:Iterator[Discrete]>*/;
}
if(!var254) break;
{
var255 = ((val* (*)(val*))(var253->class->vft[COLOR_abstract_collection__Iterator__item]))(var253) /* item on <var253:Iterator[Discrete]>*/;
}
var256 = ((struct instance_kernel__Int*)var255)->value; /* autounbox from nullable Object to Int */;
var_i = var256;
var257 = NEW_model__MParameter(&type_model__MParameter);
{
var258 = array__Array___91d_93d(var_param_names, var_i);
}
{
var259 = array__Array___91d_93d(var_param_types, var_i);
}
{
{ /* Inline kernel#Int#== (var_i,var_vararg_rank) on <var_i:Int> */
var263 = var_i == var_vararg_rank;
var261 = var263;
goto RET_LABEL262;
RET_LABEL262:(void)0;
}
var260 = var261;
}
{
model__MParameter__init(var257, var258, var259, var260); /* Direct call model#MParameter#init on <var257:MParameter>*/
}
var_mparameter264 = var257;
var265 = NULL;
if (var_nsig == NULL) {
var266 = 0; /* is null */
} else {
var266 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nsig,var265) on <var_nsig:nullable ASignature> */
var_other28 = var265;
{
var270 = ((short int (*)(val*, val*))(var_nsig->class->vft[COLOR_kernel__Object___61d_61d]))(var_nsig, var_other28) /* == on <var_nsig:nullable ASignature(ASignature)>*/;
var269 = var270;
}
var271 = !var269;
var267 = var271;
goto RET_LABEL268;
RET_LABEL268:(void)0;
}
var266 = var267;
}
if (var266){
{
{ /* Inline parser_nodes#ASignature#n_params (var_nsig) on <var_nsig:nullable ASignature(ASignature)> */
var274 = var_nsig->attrs[COLOR_parser_nodes__ASignature___n_params].val; /* _n_params on <var_nsig:nullable ASignature(ASignature)> */
if (unlikely(var274 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1360);
show_backtrace(1);
}
var272 = var274;
RET_LABEL273:(void)0;
}
}
{
var275 = parser_nodes__ANodes___91d_93d(var272, var_i);
}
{
{ /* Inline modelize_property#AParam#mparameter= (var275,var_mparameter264) on <var275:ANode(AParam)> */
var275->attrs[COLOR_modelize_property__AParam___mparameter].val = var_mparameter264; /* _mparameter on <var275:ANode(AParam)> */
RET_LABEL276:(void)0;
}
}
} else {
}
{
array__Array__add(var_mparameters, var_mparameter264); /* Direct call array#Array#add on <var_mparameters:Array[MParameter]>*/
}
CONTINUE_label277: (void)0;
{
((void (*)(val*))(var253->class->vft[COLOR_abstract_collection__Iterator__next]))(var253) /* next on <var253:Iterator[Discrete]>*/;
}
}
BREAK_label277: (void)0;
var278 = NEW_model__MSignature(&type_model__MSignature);
{
model__MSignature__init(var278, var_mparameters, var_ret_type); /* Direct call model#MSignature#init on <var278:MSignature>*/
}
var_msignature = var278;
{
{ /* Inline model#MMethodDef#msignature= (var_mpropdef,var_msignature) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_model__MMethodDef___msignature].val = var_msignature; /* _msignature on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL279:(void)0;
}
}
/* <self:AMethPropdef> isa ADeferredMethPropdef */
cltype281 = type_parser_nodes__ADeferredMethPropdef.color;
idtype282 = type_parser_nodes__ADeferredMethPropdef.id;
if(cltype281 >= self->type->table_size) {
var280 = 0;
} else {
var280 = self->type->type_table[cltype281] == idtype282;
}
{
{ /* Inline model#MMethodDef#is_abstract= (var_mpropdef,var280) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_model__MMethodDef___is_abstract].s = var280; /* _is_abstract on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL283:(void)0;
}
}
/* <self:AMethPropdef> isa AInternMethPropdef */
cltype285 = type_parser_nodes__AInternMethPropdef.color;
idtype286 = type_parser_nodes__AInternMethPropdef.id;
if(cltype285 >= self->type->table_size) {
var284 = 0;
} else {
var284 = self->type->type_table[cltype285] == idtype286;
}
{
{ /* Inline model#MMethodDef#is_intern= (var_mpropdef,var284) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_model__MMethodDef___is_intern].s = var284; /* _is_intern on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL287:(void)0;
}
}
/* <self:AMethPropdef> isa AExternPropdef */
cltype289 = type_parser_nodes__AExternPropdef.color;
idtype290 = type_parser_nodes__AExternPropdef.id;
if(cltype289 >= self->type->table_size) {
var288 = 0;
} else {
var288 = self->type->type_table[cltype289] == idtype290;
}
{
{ /* Inline model#MMethodDef#is_extern= (var_mpropdef,var288) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_model__MMethodDef___is_extern].s = var288; /* _is_extern on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL291:(void)0;
}
}
RET_LABEL:;
}
/* method modelize_property#AMethPropdef#build_signature for (self: Object, ModelBuilder) */
void VIRTUAL_modelize_property__AMethPropdef__build_signature(val* self, val* p0) {
modelize_property__AMethPropdef__build_signature(self, p0); /* Direct call modelize_property#AMethPropdef#build_signature on <self:Object(AMethPropdef)>*/
RET_LABEL:;
}
/* method modelize_property#AMethPropdef#check_signature for (self: AMethPropdef, ModelBuilder) */
void modelize_property__AMethPropdef__check_signature(val* self, val* p0) {
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
val* var_nsig /* var nsig: nullable ASignature */;
val* var17 /* : nullable MPropDef */;
val* var19 /* : nullable MPropDef */;
val* var20 /* : nullable MSignature */;
val* var22 /* : nullable MSignature */;
val* var_mysignature /* var mysignature: nullable MSignature */;
val* var23 /* : null */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var32 /* : MProperty */;
val* var34 /* : MProperty */;
val* var35 /* : MPropDef */;
val* var36 /* : nullable MSignature */;
val* var38 /* : nullable MSignature */;
val* var_msignature /* var msignature: nullable MSignature */;
val* var39 /* : null */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
val* var46 /* : nullable MType */;
val* var48 /* : nullable MType */;
val* var_precursor_ret_type /* var precursor_ret_type: nullable MType */;
val* var49 /* : nullable MType */;
val* var51 /* : nullable MType */;
val* var_ret_type /* var ret_type: nullable MType */;
short int var52 /* : Bool */;
val* var53 /* : null */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
val* var_other57 /* var other: nullable Object */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
short int var_ /* var : Bool */;
val* var61 /* : null */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
short int var65 /* : Bool */;
short int var67 /* : Bool */;
val* var68 /* : nullable AType */;
static val* varonce;
val* var69 /* : String */;
char* var70 /* : NativeString */;
long var71 /* : Int */;
val* var72 /* : FlatString */;
val* var73 /* : MProperty */;
val* var75 /* : MProperty */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
long var79 /* : Int */;
val* var80 /* : FlatString */;
val* var81 /* : Array[Object] */;
long var82 /* : Int */;
val* var83 /* : NativeArray[Object] */;
val* var84 /* : String */;
long var85 /* : Int */;
long var86 /* : Int */;
short int var87 /* : Bool */;
short int var89 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var90 /* : Bool */;
val* var91 /* : Range[Int] */;
long var92 /* : Int */;
long var93 /* : Int */;
val* var94 /* : Discrete */;
val* var95 /* : Discrete */;
val* var96 /* : Iterator[Discrete] */;
short int var97 /* : Bool */;
val* var98 /* : nullable Object */;
long var_i /* var i: Int */;
long var99 /* : Int */;
val* var100 /* : Array[MParameter] */;
val* var102 /* : Array[MParameter] */;
val* var103 /* : nullable Object */;
val* var104 /* : MType */;
val* var106 /* : MType */;
val* var_myt /* var myt: MType */;
val* var107 /* : Array[MParameter] */;
val* var109 /* : Array[MParameter] */;
val* var110 /* : nullable Object */;
val* var111 /* : MType */;
val* var113 /* : MType */;
val* var_prt /* var prt: MType */;
short int var114 /* : Bool */;
val* var115 /* : MClassType */;
val* var117 /* : MClassType */;
short int var118 /* : Bool */;
short int var119 /* : Bool */;
short int var_120 /* var : Bool */;
val* var121 /* : MClassType */;
val* var123 /* : MClassType */;
short int var124 /* : Bool */;
short int var125 /* : Bool */;
val* var126 /* : ANodes[AParam] */;
val* var128 /* : ANodes[AParam] */;
val* var129 /* : ANode */;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : NativeString */;
long var133 /* : Int */;
val* var134 /* : FlatString */;
val* var135 /* : Array[MParameter] */;
val* var137 /* : Array[MParameter] */;
val* var138 /* : nullable Object */;
val* var139 /* : String */;
val* var141 /* : String */;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : NativeString */;
long var145 /* : Int */;
val* var146 /* : FlatString */;
static val* varonce147;
val* var148 /* : String */;
char* var149 /* : NativeString */;
long var150 /* : Int */;
val* var151 /* : FlatString */;
static val* varonce152;
val* var153 /* : String */;
char* var154 /* : NativeString */;
long var155 /* : Int */;
val* var156 /* : FlatString */;
val* var157 /* : MProperty */;
val* var159 /* : MProperty */;
val* var160 /* : MPropDef */;
static val* varonce161;
val* var162 /* : String */;
char* var163 /* : NativeString */;
long var164 /* : Int */;
val* var165 /* : FlatString */;
val* var166 /* : Array[Object] */;
long var167 /* : Int */;
val* var168 /* : NativeArray[Object] */;
val* var169 /* : String */;
val* var170 /* : null */;
short int var171 /* : Bool */;
short int var172 /* : Bool */;
short int var174 /* : Bool */;
short int var175 /* : Bool */;
short int var176 /* : Bool */;
val* var177 /* : null */;
short int var178 /* : Bool */;
short int var179 /* : Bool */;
short int var181 /* : Bool */;
short int var183 /* : Bool */;
val* var184 /* : MClassType */;
val* var186 /* : MClassType */;
short int var187 /* : Bool */;
short int var188 /* : Bool */;
val* var189 /* : nullable AType */;
static val* varonce190;
val* var191 /* : String */;
char* var192 /* : NativeString */;
long var193 /* : Int */;
val* var194 /* : FlatString */;
static val* varonce195;
val* var196 /* : String */;
char* var197 /* : NativeString */;
long var198 /* : Int */;
val* var199 /* : FlatString */;
static val* varonce200;
val* var201 /* : String */;
char* var202 /* : NativeString */;
long var203 /* : Int */;
val* var204 /* : FlatString */;
val* var205 /* : MProperty */;
val* var207 /* : MProperty */;
val* var208 /* : MPropDef */;
static val* varonce209;
val* var210 /* : String */;
char* var211 /* : NativeString */;
long var212 /* : Int */;
val* var213 /* : FlatString */;
val* var214 /* : Array[Object] */;
long var215 /* : Int */;
val* var216 /* : NativeArray[Object] */;
val* var217 /* : String */;
long var218 /* : Int */;
long var219 /* : Int */;
short int var220 /* : Bool */;
short int var222 /* : Bool */;
int cltype223;
int idtype224;
const char* var_class_name225;
short int var226 /* : Bool */;
val* var227 /* : Range[Int] */;
long var228 /* : Int */;
long var229 /* : Int */;
val* var230 /* : Discrete */;
val* var231 /* : Discrete */;
val* var232 /* : Iterator[Discrete] */;
short int var233 /* : Bool */;
val* var234 /* : nullable Object */;
long var_i235 /* var i: Int */;
long var236 /* : Int */;
val* var237 /* : ANodes[AParam] */;
val* var239 /* : ANodes[AParam] */;
val* var240 /* : ANode */;
val* var241 /* : nullable AType */;
val* var_nt /* var nt: nullable AType */;
val* var242 /* : null */;
short int var243 /* : Bool */;
short int var244 /* : Bool */;
short int var246 /* : Bool */;
short int var247 /* : Bool */;
short int var248 /* : Bool */;
val* var249 /* : nullable MType */;
val* var251 /* : nullable MType */;
val* var253 /* : nullable AType */;
val* var_nt254 /* var nt: nullable AType */;
val* var255 /* : null */;
short int var256 /* : Bool */;
short int var257 /* : Bool */;
short int var259 /* : Bool */;
short int var260 /* : Bool */;
short int var261 /* : Bool */;
val* var262 /* : nullable MType */;
val* var264 /* : nullable MType */;
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
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
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
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 471);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_mmodule = var13;
{
var16 = parser_nodes__AMethPropdef__n_signature(self);
}
var_nsig = var16;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var19 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
if (var17 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 593);
show_backtrace(1);
} else {
{ /* Inline model#MMethodDef#msignature (var17) on <var17:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1938);
show_backtrace(1);
}
var22 = var17->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var17:nullable MPropDef(nullable MMethodDef)> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
var_mysignature = var20;
var23 = NULL;
if (var_mysignature == NULL) {
var24 = 1; /* is null */
} else {
var24 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mysignature,var23) on <var_mysignature:nullable MSignature> */
var_other = var23;
{
{ /* Inline kernel#Object#is_same_instance (var_mysignature,var_other) on <var_mysignature:nullable MSignature(MSignature)> */
var29 = var_mysignature == var_other;
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var24 = var25;
}
if (var24){
goto RET_LABEL;
} else {
}
{
var30 = model__MPropDef__is_intro(var_mpropdef);
}
var31 = !var30;
if (var31){
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var34 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
var35 = model__MProperty__intro(var32);
}
{
{ /* Inline model#MMethodDef#msignature (var35) on <var35:MPropDef(MMethodDef)> */
var38 = var35->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var35:MPropDef(MMethodDef)> */
var36 = var38;
RET_LABEL37:(void)0;
}
}
var_msignature = var36;
var39 = NULL;
if (var_msignature == NULL) {
var40 = 1; /* is null */
} else {
var40 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_msignature,var39) on <var_msignature:nullable MSignature> */
var_other = var39;
{
{ /* Inline kernel#Object#is_same_instance (var_msignature,var_other) on <var_msignature:nullable MSignature(MSignature)> */
var45 = var_msignature == var_other;
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
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var48 = var_msignature->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:nullable MSignature(MSignature)> */
var46 = var48;
RET_LABEL47:(void)0;
}
}
var_precursor_ret_type = var46;
{
{ /* Inline model#MSignature#return_mtype (var_mysignature) on <var_mysignature:nullable MSignature(MSignature)> */
var51 = var_mysignature->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <var_mysignature:nullable MSignature(MSignature)> */
var49 = var51;
RET_LABEL50:(void)0;
}
}
var_ret_type = var49;
var53 = NULL;
if (var_ret_type == NULL) {
var54 = 0; /* is null */
} else {
var54 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret_type,var53) on <var_ret_type:nullable MType> */
var_other57 = var53;
{
var59 = ((short int (*)(val*, val*))(var_ret_type->class->vft[COLOR_kernel__Object___61d_61d]))(var_ret_type, var_other57) /* == on <var_ret_type:nullable MType(MType)>*/;
var58 = var59;
}
var60 = !var58;
var55 = var60;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
var54 = var55;
}
var_ = var54;
if (var54){
var61 = NULL;
if (var_precursor_ret_type == NULL) {
var62 = 1; /* is null */
} else {
var62 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_precursor_ret_type,var61) on <var_precursor_ret_type:nullable MType> */
var_other = var61;
{
{ /* Inline kernel#Object#is_same_instance (var_precursor_ret_type,var_other) on <var_precursor_ret_type:nullable MType(MType)> */
var67 = var_precursor_ret_type == var_other;
var65 = var67;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
var63 = var65;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
var62 = var63;
}
var52 = var62;
} else {
var52 = var_;
}
if (var52){
if (var_nsig == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 605);
show_backtrace(1);
} else {
var68 = parser_nodes__ASignature__n_type(var_nsig);
}
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 605);
show_backtrace(1);
}
if (varonce) {
var69 = varonce;
} else {
var70 = "Redef Error: ";
var71 = 13;
var72 = string__NativeString__to_s_with_length(var70, var71);
var69 = var72;
varonce = var69;
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var75 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
if (varonce76) {
var77 = varonce76;
} else {
var78 = " is a procedure, not a function.";
var79 = 32;
var80 = string__NativeString__to_s_with_length(var78, var79);
var77 = var80;
varonce76 = var77;
}
var81 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var81 = array_instance Array[Object] */
var82 = 3;
var83 = NEW_array__NativeArray(var82, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var83)->values[0] = (val*) var69;
((struct instance_array__NativeArray*)var83)->values[1] = (val*) var73;
((struct instance_array__NativeArray*)var83)->values[2] = (val*) var77;
{
((void (*)(val*, val*, long))(var81->class->vft[COLOR_array__Array__with_native]))(var81, var83, var82) /* with_native on <var81:Array[Object]>*/;
}
}
{
var84 = ((val* (*)(val*))(var81->class->vft[COLOR_string__Object__to_s]))(var81) /* to_s on <var81:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, var68, var84); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
var85 = model__MSignature__arity(var_mysignature);
}
var86 = 0;
{
{ /* Inline kernel#Int#> (var85,var86) on <var85:Int> */
/* Covariant cast for argument 0 (i) <var86:Int> isa OTHER */
/* <var86:Int> isa OTHER */
var89 = 1; /* easy <var86:Int> isa OTHER*/
if (unlikely(!var89)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 327);
show_backtrace(1);
}
var90 = var85 > var86;
var87 = var90;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
}
if (var87){
var91 = NEW_range__Range(&type_range__Rangekernel__Int);
var92 = 0;
{
var93 = model__MSignature__arity(var_mysignature);
}
{
var94 = BOX_kernel__Int(var92); /* autobox from Int to Discrete */
var95 = BOX_kernel__Int(var93); /* autobox from Int to Discrete */
range__Range__without_last(var91, var94, var95); /* Direct call range#Range#without_last on <var91:Range[Int]>*/
}
{
var96 = range__Range__iterator(var91);
}
for(;;) {
{
var97 = ((short int (*)(val*))(var96->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var96) /* is_ok on <var96:Iterator[Discrete]>*/;
}
if(!var97) break;
{
var98 = ((val* (*)(val*))(var96->class->vft[COLOR_abstract_collection__Iterator__item]))(var96) /* item on <var96:Iterator[Discrete]>*/;
}
var99 = ((struct instance_kernel__Int*)var98)->value; /* autounbox from nullable Object to Int */;
var_i = var99;
{
{ /* Inline model#MSignature#mparameters (var_mysignature) on <var_mysignature:nullable MSignature(MSignature)> */
var102 = var_mysignature->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var_mysignature:nullable MSignature(MSignature)> */
if (unlikely(var102 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1452);
show_backtrace(1);
}
var100 = var102;
RET_LABEL101:(void)0;
}
}
{
var103 = array__Array___91d_93d(var100, var_i);
}
{
{ /* Inline model#MParameter#mtype (var103) on <var103:nullable Object(MParameter)> */
var106 = var103->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var103:nullable Object(MParameter)> */
if (unlikely(var106 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1552);
show_backtrace(1);
}
var104 = var106;
RET_LABEL105:(void)0;
}
}
var_myt = var104;
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var109 = var_msignature->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var_msignature:nullable MSignature(MSignature)> */
if (unlikely(var109 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1452);
show_backtrace(1);
}
var107 = var109;
RET_LABEL108:(void)0;
}
}
{
var110 = array__Array___91d_93d(var107, var_i);
}
{
{ /* Inline model#MParameter#mtype (var110) on <var110:nullable Object(MParameter)> */
var113 = var110->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var110:nullable Object(MParameter)> */
if (unlikely(var113 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1552);
show_backtrace(1);
}
var111 = var113;
RET_LABEL112:(void)0;
}
}
var_prt = var111;
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var117 = var_mclassdef->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var117 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var115 = var117;
RET_LABEL116:(void)0;
}
}
{
var118 = model__MType__is_subtype(var_myt, var_mmodule, var115, var_prt);
}
var119 = !var118;
var_120 = var119;
if (var119){
var114 = var_120;
} else {
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var123 = var_mclassdef->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var123 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var121 = var123;
RET_LABEL122:(void)0;
}
}
{
var124 = model__MType__is_subtype(var_prt, var_mmodule, var121, var_myt);
}
var125 = !var124;
var114 = var125;
}
if (var114){
if (var_nsig == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 616);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var_nsig) on <var_nsig:nullable ASignature> */
if (unlikely(var_nsig == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1360);
show_backtrace(1);
}
var128 = var_nsig->attrs[COLOR_parser_nodes__ASignature___n_params].val; /* _n_params on <var_nsig:nullable ASignature> */
if (unlikely(var128 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1360);
show_backtrace(1);
}
var126 = var128;
RET_LABEL127:(void)0;
}
}
{
var129 = parser_nodes__ANodes___91d_93d(var126, var_i);
}
if (varonce130) {
var131 = varonce130;
} else {
var132 = "Redef Error: Wrong type for parameter `";
var133 = 39;
var134 = string__NativeString__to_s_with_length(var132, var133);
var131 = var134;
varonce130 = var131;
}
{
{ /* Inline model#MSignature#mparameters (var_mysignature) on <var_mysignature:nullable MSignature(MSignature)> */
var137 = var_mysignature->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var_mysignature:nullable MSignature(MSignature)> */
if (unlikely(var137 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1452);
show_backtrace(1);
}
var135 = var137;
RET_LABEL136:(void)0;
}
}
{
var138 = array__Array___91d_93d(var135, var_i);
}
{
{ /* Inline model#MParameter#name (var138) on <var138:nullable Object(MParameter)> */
var141 = var138->attrs[COLOR_model__MParameter___name].val; /* _name on <var138:nullable Object(MParameter)> */
if (unlikely(var141 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1549);
show_backtrace(1);
}
var139 = var141;
RET_LABEL140:(void)0;
}
}
if (varonce142) {
var143 = varonce142;
} else {
var144 = "\'. found ";
var145 = 9;
var146 = string__NativeString__to_s_with_length(var144, var145);
var143 = var146;
varonce142 = var143;
}
if (varonce147) {
var148 = varonce147;
} else {
var149 = ", expected ";
var150 = 11;
var151 = string__NativeString__to_s_with_length(var149, var150);
var148 = var151;
varonce147 = var148;
}
if (varonce152) {
var153 = varonce152;
} else {
var154 = " as in ";
var155 = 7;
var156 = string__NativeString__to_s_with_length(var154, var155);
var153 = var156;
varonce152 = var153;
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var159 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var159 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var157 = var159;
RET_LABEL158:(void)0;
}
}
{
var160 = model__MProperty__intro(var157);
}
if (varonce161) {
var162 = varonce161;
} else {
var163 = ".";
var164 = 1;
var165 = string__NativeString__to_s_with_length(var163, var164);
var162 = var165;
varonce161 = var162;
}
var166 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var166 = array_instance Array[Object] */
var167 = 9;
var168 = NEW_array__NativeArray(var167, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var168)->values[0] = (val*) var131;
((struct instance_array__NativeArray*)var168)->values[1] = (val*) var139;
((struct instance_array__NativeArray*)var168)->values[2] = (val*) var143;
((struct instance_array__NativeArray*)var168)->values[3] = (val*) var_myt;
((struct instance_array__NativeArray*)var168)->values[4] = (val*) var148;
((struct instance_array__NativeArray*)var168)->values[5] = (val*) var_prt;
((struct instance_array__NativeArray*)var168)->values[6] = (val*) var153;
((struct instance_array__NativeArray*)var168)->values[7] = (val*) var160;
((struct instance_array__NativeArray*)var168)->values[8] = (val*) var162;
{
((void (*)(val*, val*, long))(var166->class->vft[COLOR_array__Array__with_native]))(var166, var168, var167) /* with_native on <var166:Array[Object]>*/;
}
}
{
var169 = ((val* (*)(val*))(var166->class->vft[COLOR_string__Object__to_s]))(var166) /* to_s on <var166:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, var129, var169); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var96->class->vft[COLOR_abstract_collection__Iterator__next]))(var96) /* next on <var96:Iterator[Discrete]>*/;
}
}
BREAK_label: (void)0;
} else {
}
var170 = NULL;
if (var_precursor_ret_type == NULL) {
var171 = 0; /* is null */
} else {
var171 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_precursor_ret_type,var170) on <var_precursor_ret_type:nullable MType> */
var_other57 = var170;
{
var175 = ((short int (*)(val*, val*))(var_precursor_ret_type->class->vft[COLOR_kernel__Object___61d_61d]))(var_precursor_ret_type, var_other57) /* == on <var_precursor_ret_type:nullable MType(MType)>*/;
var174 = var175;
}
var176 = !var174;
var172 = var176;
goto RET_LABEL173;
RET_LABEL173:(void)0;
}
var171 = var172;
}
if (var171){
var177 = NULL;
if (var_ret_type == NULL) {
var178 = 1; /* is null */
} else {
var178 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ret_type,var177) on <var_ret_type:nullable MType> */
var_other = var177;
{
{ /* Inline kernel#Object#is_same_instance (var_ret_type,var_other) on <var_ret_type:nullable MType(MType)> */
var183 = var_ret_type == var_other;
var181 = var183;
goto RET_LABEL182;
RET_LABEL182:(void)0;
}
}
var179 = var181;
goto RET_LABEL180;
RET_LABEL180:(void)0;
}
var178 = var179;
}
if (var178){
var_ret_type = var_precursor_ret_type;
} else {
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var186 = var_mclassdef->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var186 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var184 = var186;
RET_LABEL185:(void)0;
}
}
{
var187 = model__MType__is_subtype(var_ret_type, var_mmodule, var184, var_precursor_ret_type);
}
var188 = !var187;
if (var188){
if (var_nsig == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 625);
show_backtrace(1);
} else {
var189 = parser_nodes__ASignature__n_type(var_nsig);
}
if (unlikely(var189 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 625);
show_backtrace(1);
}
if (varonce190) {
var191 = varonce190;
} else {
var192 = "Redef Error: Wrong return type. found ";
var193 = 38;
var194 = string__NativeString__to_s_with_length(var192, var193);
var191 = var194;
varonce190 = var191;
}
if (varonce195) {
var196 = varonce195;
} else {
var197 = ", expected ";
var198 = 11;
var199 = string__NativeString__to_s_with_length(var197, var198);
var196 = var199;
varonce195 = var196;
}
if (varonce200) {
var201 = varonce200;
} else {
var202 = " as in ";
var203 = 7;
var204 = string__NativeString__to_s_with_length(var202, var203);
var201 = var204;
varonce200 = var201;
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var207 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var207 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var205 = var207;
RET_LABEL206:(void)0;
}
}
{
var208 = model__MProperty__intro(var205);
}
if (varonce209) {
var210 = varonce209;
} else {
var211 = ".";
var212 = 1;
var213 = string__NativeString__to_s_with_length(var211, var212);
var210 = var213;
varonce209 = var210;
}
var214 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var214 = array_instance Array[Object] */
var215 = 7;
var216 = NEW_array__NativeArray(var215, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var216)->values[0] = (val*) var191;
((struct instance_array__NativeArray*)var216)->values[1] = (val*) var_ret_type;
((struct instance_array__NativeArray*)var216)->values[2] = (val*) var196;
((struct instance_array__NativeArray*)var216)->values[3] = (val*) var_precursor_ret_type;
((struct instance_array__NativeArray*)var216)->values[4] = (val*) var201;
((struct instance_array__NativeArray*)var216)->values[5] = (val*) var208;
((struct instance_array__NativeArray*)var216)->values[6] = (val*) var210;
{
((void (*)(val*, val*, long))(var214->class->vft[COLOR_array__Array__with_native]))(var214, var216, var215) /* with_native on <var214:Array[Object]>*/;
}
}
{
var217 = ((val* (*)(val*))(var214->class->vft[COLOR_string__Object__to_s]))(var214) /* to_s on <var214:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, var189, var217); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
}
} else {
}
} else {
}
{
var218 = model__MSignature__arity(var_mysignature);
}
var219 = 0;
{
{ /* Inline kernel#Int#> (var218,var219) on <var218:Int> */
/* Covariant cast for argument 0 (i) <var219:Int> isa OTHER */
/* <var219:Int> isa OTHER */
var222 = 1; /* easy <var219:Int> isa OTHER*/
if (unlikely(!var222)) {
var_class_name225 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name225);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 327);
show_backtrace(1);
}
var226 = var218 > var219;
var220 = var226;
goto RET_LABEL221;
RET_LABEL221:(void)0;
}
}
if (var220){
var227 = NEW_range__Range(&type_range__Rangekernel__Int);
var228 = 0;
{
var229 = model__MSignature__arity(var_mysignature);
}
{
var230 = BOX_kernel__Int(var228); /* autobox from Int to Discrete */
var231 = BOX_kernel__Int(var229); /* autobox from Int to Discrete */
range__Range__without_last(var227, var230, var231); /* Direct call range#Range#without_last on <var227:Range[Int]>*/
}
{
var232 = range__Range__iterator(var227);
}
for(;;) {
{
var233 = ((short int (*)(val*))(var232->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var232) /* is_ok on <var232:Iterator[Discrete]>*/;
}
if(!var233) break;
{
var234 = ((val* (*)(val*))(var232->class->vft[COLOR_abstract_collection__Iterator__item]))(var232) /* item on <var232:Iterator[Discrete]>*/;
}
var236 = ((struct instance_kernel__Int*)var234)->value; /* autounbox from nullable Object to Int */;
var_i235 = var236;
if (var_nsig == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 633);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var_nsig) on <var_nsig:nullable ASignature> */
if (unlikely(var_nsig == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1360);
show_backtrace(1);
}
var239 = var_nsig->attrs[COLOR_parser_nodes__ASignature___n_params].val; /* _n_params on <var_nsig:nullable ASignature> */
if (unlikely(var239 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1360);
show_backtrace(1);
}
var237 = var239;
RET_LABEL238:(void)0;
}
}
{
var240 = parser_nodes__ANodes___91d_93d(var237, var_i235);
}
{
var241 = parser_nodes__AParam__n_type(var240);
}
var_nt = var241;
var242 = NULL;
if (var_nt == NULL) {
var243 = 0; /* is null */
} else {
var243 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nt,var242) on <var_nt:nullable AType> */
var_other57 = var242;
{
var247 = ((short int (*)(val*, val*))(var_nt->class->vft[COLOR_kernel__Object___61d_61d]))(var_nt, var_other57) /* == on <var_nt:nullable AType(AType)>*/;
var246 = var247;
}
var248 = !var246;
var244 = var248;
goto RET_LABEL245;
RET_LABEL245:(void)0;
}
var243 = var244;
}
if (var243){
{
{ /* Inline modelize_class#AType#mtype (var_nt) on <var_nt:nullable AType(AType)> */
var251 = var_nt->attrs[COLOR_modelize_class__AType___mtype].val; /* _mtype on <var_nt:nullable AType(AType)> */
var249 = var251;
RET_LABEL250:(void)0;
}
}
if (unlikely(var249 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 634);
show_backtrace(1);
}
{
modelize_property__ModelBuilder__check_visibility(var_modelbuilder, var_nt, var249, var_mpropdef); /* Direct call modelize_property#ModelBuilder#check_visibility on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
CONTINUE_label252: (void)0;
{
((void (*)(val*))(var232->class->vft[COLOR_abstract_collection__Iterator__next]))(var232) /* next on <var232:Iterator[Discrete]>*/;
}
}
BREAK_label252: (void)0;
if (var_nsig == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 636);
show_backtrace(1);
} else {
var253 = parser_nodes__ASignature__n_type(var_nsig);
}
var_nt254 = var253;
var255 = NULL;
if (var_nt254 == NULL) {
var256 = 0; /* is null */
} else {
var256 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nt254,var255) on <var_nt254:nullable AType> */
var_other57 = var255;
{
var260 = ((short int (*)(val*, val*))(var_nt254->class->vft[COLOR_kernel__Object___61d_61d]))(var_nt254, var_other57) /* == on <var_nt254:nullable AType(AType)>*/;
var259 = var260;
}
var261 = !var259;
var257 = var261;
goto RET_LABEL258;
RET_LABEL258:(void)0;
}
var256 = var257;
}
if (var256){
{
{ /* Inline modelize_class#AType#mtype (var_nt254) on <var_nt254:nullable AType(AType)> */
var264 = var_nt254->attrs[COLOR_modelize_class__AType___mtype].val; /* _mtype on <var_nt254:nullable AType(AType)> */
var262 = var264;
RET_LABEL263:(void)0;
}
}
if (unlikely(var262 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 637);
show_backtrace(1);
}
{
modelize_property__ModelBuilder__check_visibility(var_modelbuilder, var_nt254, var262, var_mpropdef); /* Direct call modelize_property#ModelBuilder#check_visibility on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
} else {
}
RET_LABEL:;
}
/* method modelize_property#AMethPropdef#check_signature for (self: Object, ModelBuilder) */
void VIRTUAL_modelize_property__AMethPropdef__check_signature(val* self, val* p0) {
modelize_property__AMethPropdef__check_signature(self, p0); /* Direct call modelize_property#AMethPropdef#check_signature on <self:Object(AMethPropdef)>*/
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#noinit for (self: AAttrPropdef): Bool */
short int modelize_property__AAttrPropdef__noinit(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_modelize_property__AAttrPropdef___noinit].s; /* _noinit on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#noinit for (self: Object): Bool */
short int VIRTUAL_modelize_property__AAttrPropdef__noinit(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline modelize_property#AAttrPropdef#noinit (self) on <self:Object(AAttrPropdef)> */
var3 = self->attrs[COLOR_modelize_property__AAttrPropdef___noinit].s; /* _noinit on <self:Object(AAttrPropdef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#noinit= for (self: AAttrPropdef, Bool) */
void modelize_property__AAttrPropdef__noinit_61d(val* self, short int p0) {
self->attrs[COLOR_modelize_property__AAttrPropdef___noinit].s = p0; /* _noinit on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#noinit= for (self: Object, Bool) */
void VIRTUAL_modelize_property__AAttrPropdef__noinit_61d(val* self, short int p0) {
{ /* Inline modelize_property#AAttrPropdef#noinit= (self,p0) on <self:Object(AAttrPropdef)> */
self->attrs[COLOR_modelize_property__AAttrPropdef___noinit].s = p0; /* _noinit on <self:Object(AAttrPropdef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#is_lazy for (self: AAttrPropdef): Bool */
short int modelize_property__AAttrPropdef__is_lazy(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_modelize_property__AAttrPropdef___is_lazy].s; /* _is_lazy on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#is_lazy for (self: Object): Bool */
short int VIRTUAL_modelize_property__AAttrPropdef__is_lazy(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline modelize_property#AAttrPropdef#is_lazy (self) on <self:Object(AAttrPropdef)> */
var3 = self->attrs[COLOR_modelize_property__AAttrPropdef___is_lazy].s; /* _is_lazy on <self:Object(AAttrPropdef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#is_lazy= for (self: AAttrPropdef, Bool) */
void modelize_property__AAttrPropdef__is_lazy_61d(val* self, short int p0) {
self->attrs[COLOR_modelize_property__AAttrPropdef___is_lazy].s = p0; /* _is_lazy on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#is_lazy= for (self: Object, Bool) */
void VIRTUAL_modelize_property__AAttrPropdef__is_lazy_61d(val* self, short int p0) {
{ /* Inline modelize_property#AAttrPropdef#is_lazy= (self,p0) on <self:Object(AAttrPropdef)> */
self->attrs[COLOR_modelize_property__AAttrPropdef___is_lazy].s = p0; /* _is_lazy on <self:Object(AAttrPropdef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#mlazypropdef for (self: AAttrPropdef): nullable MAttributeDef */
val* modelize_property__AAttrPropdef__mlazypropdef(val* self) {
val* var /* : nullable MAttributeDef */;
val* var1 /* : nullable MAttributeDef */;
var1 = self->attrs[COLOR_modelize_property__AAttrPropdef___mlazypropdef].val; /* _mlazypropdef on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#mlazypropdef for (self: Object): nullable MAttributeDef */
val* VIRTUAL_modelize_property__AAttrPropdef__mlazypropdef(val* self) {
val* var /* : nullable MAttributeDef */;
val* var1 /* : nullable MAttributeDef */;
val* var3 /* : nullable MAttributeDef */;
{ /* Inline modelize_property#AAttrPropdef#mlazypropdef (self) on <self:Object(AAttrPropdef)> */
var3 = self->attrs[COLOR_modelize_property__AAttrPropdef___mlazypropdef].val; /* _mlazypropdef on <self:Object(AAttrPropdef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#mlazypropdef= for (self: AAttrPropdef, nullable MAttributeDef) */
void modelize_property__AAttrPropdef__mlazypropdef_61d(val* self, val* p0) {
self->attrs[COLOR_modelize_property__AAttrPropdef___mlazypropdef].val = p0; /* _mlazypropdef on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#mlazypropdef= for (self: Object, nullable MAttributeDef) */
void VIRTUAL_modelize_property__AAttrPropdef__mlazypropdef_61d(val* self, val* p0) {
{ /* Inline modelize_property#AAttrPropdef#mlazypropdef= (self,p0) on <self:Object(AAttrPropdef)> */
self->attrs[COLOR_modelize_property__AAttrPropdef___mlazypropdef].val = p0; /* _mlazypropdef on <self:Object(AAttrPropdef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#mreadpropdef for (self: AAttrPropdef): nullable MMethodDef */
val* modelize_property__AAttrPropdef__mreadpropdef(val* self) {
val* var /* : nullable MMethodDef */;
val* var1 /* : nullable MMethodDef */;
var1 = self->attrs[COLOR_modelize_property__AAttrPropdef___mreadpropdef].val; /* _mreadpropdef on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#mreadpropdef for (self: Object): nullable MMethodDef */
val* VIRTUAL_modelize_property__AAttrPropdef__mreadpropdef(val* self) {
val* var /* : nullable MMethodDef */;
val* var1 /* : nullable MMethodDef */;
val* var3 /* : nullable MMethodDef */;
{ /* Inline modelize_property#AAttrPropdef#mreadpropdef (self) on <self:Object(AAttrPropdef)> */
var3 = self->attrs[COLOR_modelize_property__AAttrPropdef___mreadpropdef].val; /* _mreadpropdef on <self:Object(AAttrPropdef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#mreadpropdef= for (self: AAttrPropdef, nullable MMethodDef) */
void modelize_property__AAttrPropdef__mreadpropdef_61d(val* self, val* p0) {
self->attrs[COLOR_modelize_property__AAttrPropdef___mreadpropdef].val = p0; /* _mreadpropdef on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#mreadpropdef= for (self: Object, nullable MMethodDef) */
void VIRTUAL_modelize_property__AAttrPropdef__mreadpropdef_61d(val* self, val* p0) {
{ /* Inline modelize_property#AAttrPropdef#mreadpropdef= (self,p0) on <self:Object(AAttrPropdef)> */
self->attrs[COLOR_modelize_property__AAttrPropdef___mreadpropdef].val = p0; /* _mreadpropdef on <self:Object(AAttrPropdef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#mwritepropdef for (self: AAttrPropdef): nullable MMethodDef */
val* modelize_property__AAttrPropdef__mwritepropdef(val* self) {
val* var /* : nullable MMethodDef */;
val* var1 /* : nullable MMethodDef */;
var1 = self->attrs[COLOR_modelize_property__AAttrPropdef___mwritepropdef].val; /* _mwritepropdef on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#mwritepropdef for (self: Object): nullable MMethodDef */
val* VIRTUAL_modelize_property__AAttrPropdef__mwritepropdef(val* self) {
val* var /* : nullable MMethodDef */;
val* var1 /* : nullable MMethodDef */;
val* var3 /* : nullable MMethodDef */;
{ /* Inline modelize_property#AAttrPropdef#mwritepropdef (self) on <self:Object(AAttrPropdef)> */
var3 = self->attrs[COLOR_modelize_property__AAttrPropdef___mwritepropdef].val; /* _mwritepropdef on <self:Object(AAttrPropdef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#mwritepropdef= for (self: AAttrPropdef, nullable MMethodDef) */
void modelize_property__AAttrPropdef__mwritepropdef_61d(val* self, val* p0) {
self->attrs[COLOR_modelize_property__AAttrPropdef___mwritepropdef].val = p0; /* _mwritepropdef on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#mwritepropdef= for (self: Object, nullable MMethodDef) */
void VIRTUAL_modelize_property__AAttrPropdef__mwritepropdef_61d(val* self, val* p0) {
{ /* Inline modelize_property#AAttrPropdef#mwritepropdef= (self,p0) on <self:Object(AAttrPropdef)> */
self->attrs[COLOR_modelize_property__AAttrPropdef___mwritepropdef].val = p0; /* _mwritepropdef on <self:Object(AAttrPropdef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
