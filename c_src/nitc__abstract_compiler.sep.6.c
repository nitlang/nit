#include "nitc__abstract_compiler.sep.0.h"
/* method abstract_compiler#AAttrReassignExpr#stmt for (self: AAttrReassignExpr, AbstractCompilerVisitor) */
void nitc__abstract_compiler___AAttrReassignExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : RuntimeVariable */;
val* var_recv /* var recv: RuntimeVariable */;
val* var4 /* : AExpr */;
val* var6 /* : AExpr */;
val* var7 /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var8 /* : nullable MAttribute */;
val* var10 /* : nullable MAttribute */;
val* var_mproperty /* var mproperty: MAttribute */;
val* var11 /* : RuntimeVariable */;
val* var_attr /* var attr: RuntimeVariable */;
val* var12 /* : nullable CallSite */;
val* var14 /* : nullable CallSite */;
val* var15 /* : Array[RuntimeVariable] */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var16 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
var_v = p0;
{
{ /* Inline parser_nodes#AAttrFormExpr#n_expr (self) on <self:AAttrReassignExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrReassignExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2273);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var, ((val*)NULL));
}
var_recv = var3;
{
{ /* Inline parser_nodes#AReassignFormExpr#n_value (self) on <self:AAttrReassignExpr> */
var6 = self->attrs[COLOR_nitc__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AAttrReassignExpr> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2003);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var4, ((val*)NULL));
}
var_value = var7;
{
{ /* Inline typing#AAttrFormExpr#mproperty (self) on <self:AAttrReassignExpr> */
var10 = self->attrs[COLOR_nitc__typing__AAttrFormExpr___mproperty].val; /* _mproperty on <self:AAttrReassignExpr> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3852);
fatal_exit(1);
}
var_mproperty = var8;
{
var11 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__read_attribute(var_v, var_mproperty, var_recv);
}
var_attr = var11;
{
{ /* Inline typing#AReassignFormExpr#reassign_callsite (self) on <self:AAttrReassignExpr> */
var14 = self->attrs[COLOR_nitc__typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:AAttrReassignExpr> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3854);
fatal_exit(1);
}
var15 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var15, 2l); /* Direct call array#Array#with_capacity on <var15:Array[RuntimeVariable]>*/
}
var_ = var15;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_attr); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_value); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
var16 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var12, var_); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var_res = var16;
if (var_res == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,((val*)NULL)) on <var_res:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var20 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
var21 = !var20;
var18 = var21;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
var17 = var18;
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3855);
fatal_exit(1);
}
{
nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__write_attribute(var_v, var_mproperty, var_recv, var_res); /* Direct call separate_compiler#SeparateCompilerVisitor#write_attribute on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AIssetAttrExpr#expr for (self: AIssetAttrExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AIssetAttrExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : RuntimeVariable */;
val* var_recv /* var recv: RuntimeVariable */;
val* var5 /* : nullable MAttribute */;
val* var7 /* : nullable MAttribute */;
val* var_mproperty /* var mproperty: MAttribute */;
val* var8 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#AAttrFormExpr#n_expr (self) on <self:AIssetAttrExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AIssetAttrExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2273);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var1, ((val*)NULL));
}
var_recv = var4;
{
{ /* Inline typing#AAttrFormExpr#mproperty (self) on <self:AIssetAttrExpr> */
var7 = self->attrs[COLOR_nitc__typing__AAttrFormExpr___mproperty].val; /* _mproperty on <self:AIssetAttrExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3864);
fatal_exit(1);
}
var_mproperty = var5;
{
var8 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__isset_attribute(var_v, var_mproperty, var_recv);
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AVarargExpr#expr for (self: AVarargExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AVarargExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#AVarargExpr#n_expr (self) on <self:AVarargExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AVarargExpr___n_expr].val; /* _n_expr on <self:AVarargExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2630);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var1, ((val*)NULL));
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ANamedargExpr#expr for (self: ANamedargExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___ANamedargExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#ANamedargExpr#n_expr (self) on <self:ANamedargExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ANamedargExpr___n_expr].val; /* _n_expr on <self:ANamedargExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2647);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var1, ((val*)NULL));
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ADebugTypeExpr#stmt for (self: ADebugTypeExpr, AbstractCompilerVisitor) */
void nitc__abstract_compiler___ADebugTypeExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method abstract_compiler#MModule#properties for (self: MModule, MClass): Set[MProperty] */
val* nitc__abstract_compiler___MModule___properties(val* self, val* p0) {
val* var /* : Set[MProperty] */;
val* var_mclass /* var mclass: MClass */;
val* var1 /* : Map[MClass, Set[MProperty]] */;
val* var3 /* : Map[MClass, Set[MProperty]] */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : HashSet[MProperty] */;
val* var_properties /* var properties: HashSet[MProperty] */;
val* var7 /* : Array[MClass] */;
val* var_parents /* var parents: Array[MClass] */;
val* var8 /* : POSet[MClass] */;
short int var9 /* : Bool */;
val* var10 /* : POSetElement[MClass] */;
val* var11 /* : Collection[nullable Object] */;
val* var_ /* var : Array[MClass] */;
val* var12 /* : IndexedIterator[nullable Object] */;
val* var_13 /* var : IndexedIterator[MClass] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_parent /* var parent: MClass */;
val* var16 /* : Set[MProperty] */;
val* var17 /* : Array[MClassDef] */;
val* var19 /* : Array[MClassDef] */;
val* var_20 /* var : Array[MClassDef] */;
val* var21 /* : IndexedIterator[nullable Object] */;
val* var_22 /* var : IndexedIterator[MClassDef] */;
short int var23 /* : Bool */;
val* var25 /* : nullable Object */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var26 /* : POSetElement[MModule] */;
val* var28 /* : POSetElement[MModule] */;
val* var29 /* : MModule */;
val* var31 /* : MModule */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
val* var35 /* : Array[MProperty] */;
val* var37 /* : Array[MProperty] */;
val* var_38 /* var : Array[MProperty] */;
val* var39 /* : IndexedIterator[nullable Object] */;
val* var_40 /* var : IndexedIterator[MProperty] */;
short int var41 /* : Bool */;
val* var43 /* : nullable Object */;
val* var_mprop /* var mprop: MProperty */;
val* var44 /* : Map[MClass, Set[MProperty]] */;
val* var46 /* : Map[MClass, Set[MProperty]] */;
val* var47 /* : Map[MClass, Set[MProperty]] */;
val* var49 /* : Map[MClass, Set[MProperty]] */;
val* var50 /* : nullable Object */;
var_mclass = p0;
{
{ /* Inline abstract_compiler#MModule#properties_cache (self) on <self:MModule> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__MModule___properties_cache].val; /* _properties_cache on <self:MModule> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _properties_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3923);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((short int(*)(val* self, val* p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__MapRead__has_key]))(var1, var_mclass); /* has_key on <var1:Map[MClass, Set[MProperty]]>*/
}
var5 = !var4;
if (var5){
var6 = NEW_core__HashSet(&type_core__HashSet__nitc__MProperty);
{
core___core__HashSet___core__kernel__Object__init(var6); /* Direct call hash_collection#HashSet#init on <var6:HashSet[MProperty]>*/
}
var_properties = var6;
var7 = NEW_core__Array(&type_core__Array__nitc__MClass);
{
core___core__Array___core__kernel__Object__init(var7); /* Direct call array#Array#init on <var7:Array[MClass]>*/
}
var_parents = var7;
{
var8 = nitc__model___MModule___flatten_mclass_hierarchy(self);
}
{
var9 = poset___poset__POSet___core__abstract_collection__Collection__has(var8, var_mclass);
}
if (var9){
{
var10 = nitc___nitc__MClass___in_hierarchy(var_mclass, self);
}
{
var11 = poset___poset__POSetElement___direct_greaters(var10);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var_parents, var11); /* Direct call array#Array#add_all on <var_parents:Array[MClass]>*/
}
} else {
}
var_ = var_parents;
{
var12 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_13 = var12;
for(;;) {
{
var14 = ((short int(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_13); /* is_ok on <var_13:IndexedIterator[MClass]>*/
}
if (var14){
} else {
goto BREAK_label;
}
{
var15 = ((val*(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_13); /* item on <var_13:IndexedIterator[MClass]>*/
}
var_parent = var15;
{
var16 = nitc__abstract_compiler___MModule___properties(self, var_parent);
}
{
core___core__SimpleCollection___add_all(var_properties, var16); /* Direct call abstract_collection#SimpleCollection#add_all on <var_properties:HashSet[MProperty]>*/
}
{
((void(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_13); /* next on <var_13:IndexedIterator[MClass]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_13); /* finish on <var_13:IndexedIterator[MClass]>*/
}
{
{ /* Inline model#MClass#mclassdefs (var_mclass) on <var_mclass:MClass> */
var19 = var_mclass->attrs[COLOR_nitc__model__MClass___mclassdefs].val; /* _mclassdefs on <var_mclass:MClass> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 477);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_20 = var17;
{
var21 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_20);
}
var_22 = var21;
for(;;) {
{
var23 = ((short int(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_22); /* is_ok on <var_22:IndexedIterator[MClassDef]>*/
}
if (var23){
} else {
goto BREAK_label24;
}
{
var25 = ((val*(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_22); /* item on <var_22:IndexedIterator[MClassDef]>*/
}
var_mclassdef = var25;
{
{ /* Inline mmodule#MModule#in_importation (self) on <self:MModule> */
var28 = self->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <self:MModule> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 104);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var31 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 573);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
var32 = poset___poset__POSetElement____60d_61d(var26, var29);
}
var33 = !var32;
if (var33){
goto BREAK_label34;
} else {
}
{
{ /* Inline model#MClassDef#intro_mproperties (var_mclassdef) on <var_mclassdef:MClassDef> */
var37 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___intro_mproperties].val; /* _intro_mproperties on <var_mclassdef:MClassDef> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mproperties");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 704);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
var_38 = var35;
{
var39 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_38);
}
var_40 = var39;
for(;;) {
{
var41 = ((short int(*)(val* self))((((long)var_40&3)?class_info[((long)var_40&3)]:var_40->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_40); /* is_ok on <var_40:IndexedIterator[MProperty]>*/
}
if (var41){
} else {
goto BREAK_label42;
}
{
var43 = ((val*(*)(val* self))((((long)var_40&3)?class_info[((long)var_40&3)]:var_40->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_40); /* item on <var_40:IndexedIterator[MProperty]>*/
}
var_mprop = var43;
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var_properties, var_mprop); /* Direct call hash_collection#HashSet#add on <var_properties:HashSet[MProperty]>*/
}
{
((void(*)(val* self))((((long)var_40&3)?class_info[((long)var_40&3)]:var_40->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_40); /* next on <var_40:IndexedIterator[MProperty]>*/
}
}
BREAK_label42: (void)0;
{
((void(*)(val* self))((((long)var_40&3)?class_info[((long)var_40&3)]:var_40->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_40); /* finish on <var_40:IndexedIterator[MProperty]>*/
}
BREAK_label34: (void)0;
{
((void(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_22); /* next on <var_22:IndexedIterator[MClassDef]>*/
}
}
BREAK_label24: (void)0;
{
((void(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_22); /* finish on <var_22:IndexedIterator[MClassDef]>*/
}
{
{ /* Inline abstract_compiler#MModule#properties_cache (self) on <self:MModule> */
var46 = self->attrs[COLOR_nitc__abstract_compiler__MModule___properties_cache].val; /* _properties_cache on <self:MModule> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _properties_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3923);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
((void(*)(val* self, val* p0, val* p1))((((long)var44&3)?class_info[((long)var44&3)]:var44->class)->vft[COLOR_core__abstract_collection__Map___91d_93d_61d]))(var44, var_mclass, var_properties); /* []= on <var44:Map[MClass, Set[MProperty]]>*/
}
} else {
}
{
{ /* Inline abstract_compiler#MModule#properties_cache (self) on <self:MModule> */
var49 = self->attrs[COLOR_nitc__abstract_compiler__MModule___properties_cache].val; /* _properties_cache on <self:MModule> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _properties_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3923);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
var50 = ((val*(*)(val* self, val* p0))((((long)var47&3)?class_info[((long)var47&3)]:var47->class)->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var47, var_mclass); /* [] on <var47:Map[MClass, Set[MProperty]]>*/
}
var = var50;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MModule#properties_cache for (self: MModule): Map[MClass, Set[MProperty]] */
val* nitc__abstract_compiler___MModule___properties_cache(val* self) {
val* var /* : Map[MClass, Set[MProperty]] */;
val* var1 /* : Map[MClass, Set[MProperty]] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__MModule___properties_cache].val; /* _properties_cache on <self:MModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _properties_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3923);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Sys#main for (self: Sys) */
void nitc__abstract_compiler___core__Sys___main(val* self) {
val* var /* : ToolContext */;
val* var_toolcontext /* var toolcontext: ToolContext */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : String */;
val* var5 /* : Sequence[String] */;
val* var6 /* : Model */;
val* var_model /* var model: Model */;
val* var8 /* : ModelBuilder */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var9 /* : OptionContext */;
val* var11 /* : OptionContext */;
val* var12 /* : Array[String] */;
val* var14 /* : Array[String] */;
val* var_arguments /* var arguments: Array[String] */;
short int var15 /* : Bool */;
long var16 /* : Int */;
long var18 /* : Int */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var22 /* : Bool */;
short int var_ /* var : Bool */;
val* var23 /* : OptionString */;
val* var25 /* : OptionString */;
val* var26 /* : nullable Object */;
val* var28 /* : nullable Object */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : String */;
val* var39 /* : Array[MModule] */;
val* var_mmodules /* var mmodules: Array[MModule] */;
short int var40 /* : Bool */;
val* var_41 /* var : Array[MModule] */;
val* var42 /* : IndexedIterator[nullable Object] */;
val* var_43 /* var : IndexedIterator[MModule] */;
short int var44 /* : Bool */;
val* var45 /* : nullable Object */;
val* var_mmodule /* var mmodule: MModule */;
val* var47 /* : NativeArray[String] */;
static val* varonce46;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
val* var51 /* : String */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
val* var55 /* : String */;
val* var56 /* : String */;
val* var57 /* : String */;
val* var58 /* : Array[MModule] */;
val* var_59 /* var : Array[MModule] */;
val* var_ms /* var ms: Array[MModule] */;
var = NEW_nitc__ToolContext(&type_nitc__ToolContext);
{
nitc__separate_erasure_compiler___ToolContext___core__kernel__Object__init(var); /* Direct call separate_erasure_compiler#ToolContext#init on <var:ToolContext>*/
}
var_toolcontext = var;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "Usage: nitc [OPTION]... file.nit...\nCompiles Nit programs.";
var3 = core__flat___NativeString___to_s_full(var2, 58l, 58l);
var1 = var3;
varonce = var1;
}
{
{ /* Inline toolcontext#ToolContext#tooldescription= (var_toolcontext,var1) on <var_toolcontext:ToolContext> */
var_toolcontext->attrs[COLOR_nitc__toolcontext__ToolContext___tooldescription].val = var1; /* _tooldescription on <var_toolcontext:ToolContext> */
RET_LABEL4:(void)0;
}
}
{
var5 = core__abstract_text___Sys___args(self);
}
{
nitc__nith___ToolContext___process_options(var_toolcontext, var5); /* Direct call nith#ToolContext#process_options on <var_toolcontext:ToolContext>*/
}
var6 = NEW_nitc__Model(&type_nitc__Model);
{
{ /* Inline kernel#Object#init (var6) on <var6:Model> */
RET_LABEL7:(void)0;
}
}
var_model = var6;
var8 = NEW_nitc__ModelBuilder(&type_nitc__ModelBuilder);
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_nitc__modelbuilder_base__ModelBuilder__model_61d]))(var8, var_model); /* model= on <var8:ModelBuilder>*/
}
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_nitc__modelbuilder_base__ModelBuilder__toolcontext_61d]))(var8, var_toolcontext); /* toolcontext= on <var8:ModelBuilder>*/
}
{
((void(*)(val* self))(var8->class->vft[COLOR_core__kernel__Object__init]))(var8); /* init on <var8:ModelBuilder>*/
}
var_modelbuilder = var8;
{
{ /* Inline toolcontext#ToolContext#option_context (var_toolcontext) on <var_toolcontext:ToolContext> */
var11 = var_toolcontext->attrs[COLOR_nitc__toolcontext__ToolContext___option_context].val; /* _option_context on <var_toolcontext:ToolContext> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 342);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline opts#OptionContext#rest (var9) on <var9:OptionContext> */
var14 = var9->attrs[COLOR_opts__OptionContext___rest].val; /* _rest on <var9:OptionContext> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _rest");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 280);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_arguments = var12;
{
{ /* Inline array#AbstractArrayRead#length (var_arguments) on <var_arguments:Array[String]> */
var18 = var_arguments->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[String]> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var16,1l) on <var16:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var21 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
fatal_exit(1);
}
var22 = var16 > 1l;
var19 = var22;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var_ = var19;
if (var19){
{
{ /* Inline abstract_compiler#ToolContext#opt_output (var_toolcontext) on <var_toolcontext:ToolContext> */
var25 = var_toolcontext->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_output].val; /* _opt_output on <var_toolcontext:ToolContext> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_output");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 30);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline opts#Option#value (var23) on <var23:OptionString> */
var28 = var23->attrs[COLOR_opts__Option___value].val; /* _value on <var23:OptionString> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
if (var26 == NULL) {
var29 = 0; /* is null */
} else {
var29 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var26,((val*)NULL)) on <var26:nullable Object(nullable String)> */
var_other = ((val*)NULL);
{
var32 = ((short int(*)(val* self, val* p0))(var26->class->vft[COLOR_core__kernel__Object___61d_61d]))(var26, var_other); /* == on <var26:nullable String(String)>*/
}
var33 = !var32;
var30 = var33;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
var29 = var30;
}
var15 = var29;
} else {
var15 = var_;
}
if (var15){
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "Option Error: --output needs a single source file. Do you prefer --dir?";
var37 = core__flat___NativeString___to_s_full(var36, 71l, 71l);
var35 = var37;
varonce34 = var35;
}
{
core__file___Sys___print(self, var35); /* Direct call file#Sys#print on <self:Sys>*/
}
{
{ /* Inline kernel#Sys#exit (self,1l) on <self:Sys> */
exit(1l);
RET_LABEL38:(void)0;
}
}
} else {
}
{
var39 = nitc__loader___ModelBuilder___parse(var_modelbuilder, var_arguments);
}
var_mmodules = var39;
{
var40 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_mmodules);
}
if (var40){
{
nitc___nitc__ToolContext___quit(var_toolcontext); /* Direct call toolcontext#ToolContext#quit on <var_toolcontext:ToolContext>*/
}
} else {
}
{
nitc__modelbuilder___ModelBuilder___run_phases(var_modelbuilder); /* Direct call modelbuilder#ModelBuilder#run_phases on <var_modelbuilder:ModelBuilder>*/
}
var_41 = var_mmodules;
{
var42 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_41);
}
var_43 = var42;
for(;;) {
{
var44 = ((short int(*)(val* self))((((long)var_43&3)?class_info[((long)var_43&3)]:var_43->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_43); /* is_ok on <var_43:IndexedIterator[MModule]>*/
}
if (var44){
} else {
goto BREAK_label;
}
{
var45 = ((val*(*)(val* self))((((long)var_43&3)?class_info[((long)var_43&3)]:var_43->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_43); /* item on <var_43:IndexedIterator[MModule]>*/
}
var_mmodule = var45;
if (unlikely(varonce46==NULL)) {
var47 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = "*** PROCESS ";
var51 = core__flat___NativeString___to_s_full(var50, 12l, 12l);
var49 = var51;
varonce48 = var49;
}
((struct instance_core__NativeArray*)var47)->values[0]=var49;
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = " ***";
var55 = core__flat___NativeString___to_s_full(var54, 4l, 4l);
var53 = var55;
varonce52 = var53;
}
((struct instance_core__NativeArray*)var47)->values[2]=var53;
} else {
var47 = varonce46;
varonce46 = NULL;
}
{
var56 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmodule); /* to_s on <var_mmodule:MModule>*/
}
((struct instance_core__NativeArray*)var47)->values[1]=var56;
{
var57 = ((val*(*)(val* self))(var47->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var47); /* native_to_s on <var47:NativeArray[String]>*/
}
varonce46 = var47;
{
nitc___nitc__ToolContext___info(var_toolcontext, var57, 1l); /* Direct call toolcontext#ToolContext#info on <var_toolcontext:ToolContext>*/
}
var58 = NEW_core__Array(&type_core__Array__nitc__MModule);
{
core___core__Array___with_capacity(var58, 1l); /* Direct call array#Array#with_capacity on <var58:Array[MModule]>*/
}
var_59 = var58;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_59, var_mmodule); /* Direct call array#AbstractArray#push on <var_59:Array[MModule]>*/
}
var_ms = var_59;
{
nitc__modelbuilder___ToolContext___run_global_phases(var_toolcontext, var_ms); /* Direct call modelbuilder#ToolContext#run_global_phases on <var_toolcontext:ToolContext>*/
}
{
((void(*)(val* self))((((long)var_43&3)?class_info[((long)var_43&3)]:var_43->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_43); /* next on <var_43:IndexedIterator[MModule]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_43&3)?class_info[((long)var_43&3)]:var_43->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_43); /* finish on <var_43:IndexedIterator[MModule]>*/
}
RET_LABEL:;
}
