#include "nit__transform.sep.0.h"
/* method transform#ToolContext#opt_no_shortcut_range for (self: ToolContext): OptionBool */
val* nit__transform___ToolContext___opt_no_shortcut_range(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__transform__ToolContext___opt_no_shortcut_range].val; /* _opt_no_shortcut_range on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_shortcut_range");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 28);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method transform#ToolContext#init for (self: ToolContext) */
void nit__transform___ToolContext___standard__kernel__Object__init(val* self) {
val* var /* : OptionContext */;
val* var2 /* : OptionContext */;
val* var3 /* : OptionBool */;
val* var5 /* : OptionBool */;
val* var6 /* : Array[Option] */;
val* var7 /* : NativeArray[Option] */;
{
((void(*)(val* self))(self->class->vft[COLOR_nit__transform___ToolContext___standard__kernel__Object__init]))(self); /* init on <self:ToolContext>*/
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_nit__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 332);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline transform#ToolContext#opt_no_shortcut_range (self) on <self:ToolContext> */
var5 = self->attrs[COLOR_nit__transform__ToolContext___opt_no_shortcut_range].val; /* _opt_no_shortcut_range on <self:ToolContext> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_shortcut_range");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 28);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var6 = NEW_standard__Array(&type_standard__Array__opts__Option);
{ /* var6 = array_instance Array[Option] */
var7 = NEW_standard__NativeArray(1l, &type_standard__NativeArray__opts__Option);
((struct instance_standard__NativeArray*)var7)->values[0] = (val*) var3;
{
((void(*)(val* self, val* p0, long p1))(var6->class->vft[COLOR_standard__array__Array__with_native]))(var6, var7, 1l); /* with_native on <var6:Array[Option]>*/
}
}
{
opts___opts__OptionContext___add_option(var, var6); /* Direct call opts#OptionContext#add_option on <var:OptionContext>*/
}
RET_LABEL:;
}
/* method transform#TransformPhase#process_npropdef for (self: TransformPhase, APropdef) */
void nit__transform___nit__transform__TransformPhase___nit__phase__Phase__process_npropdef(val* self, val* p0) {
val* var_npropdef /* var npropdef: APropdef */;
val* var /* : nullable MPropDef */;
val* var2 /* : nullable MPropDef */;
val* var_m /* var m: nullable MPropDef */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : TransformVisitor */;
val* var_v /* var v: TransformVisitor */;
val* var10 /* : ASTValidationVisitor */;
val* var_val /* var val: nullable Object */;
var_npropdef = p0;
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:APropdef> */
var2 = var_npropdef->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:APropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_m = var;
if (var_m == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_m,((val*)NULL)) on <var_m:nullable MPropDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_m,var_other) on <var_m:nullable MPropDef(MPropDef)> */
var8 = var_m == var_other;
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
var9 = NEW_nit__transform__TransformVisitor(&type_nit__transform__TransformVisitor);
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_nit__transform__TransformVisitor__phase_61d]))(var9, self); /* phase= on <var9:TransformVisitor>*/
}
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_nit__transform__TransformVisitor__mpropdef_61d]))(var9, var_m); /* mpropdef= on <var9:TransformVisitor>*/
}
{
((void(*)(val* self))(var9->class->vft[COLOR_standard__kernel__Object__init]))(var9); /* init on <var9:TransformVisitor>*/
}
var_v = var9;
{
nit___nit__Visitor___enter_visit(var_v, var_npropdef); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:TransformVisitor>*/
}
var10 = NEW_nit__ASTValidationVisitor(&type_nit__ASTValidationVisitor);
{
{ /* Inline kernel#Object#init (var10) on <var10:ASTValidationVisitor> */
RET_LABEL11:(void)0;
}
}
var_val = var10;
{
nit___nit__Visitor___enter_visit(var_val, var_npropdef); /* Direct call parser_nodes#Visitor#enter_visit on <var_val:nullable Object(ASTValidationVisitor)>*/
}
RET_LABEL:;
}
/* method transform#TransformVisitor#phase for (self: TransformVisitor): TransformPhase */
val* nit__transform___nit__transform__TransformVisitor___phase(val* self) {
val* var /* : TransformPhase */;
val* var1 /* : TransformPhase */;
var1 = self->attrs[COLOR_nit__transform__TransformVisitor___phase].val; /* _phase on <self:TransformVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 58);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method transform#TransformVisitor#phase= for (self: TransformVisitor, TransformPhase) */
void nit__transform___nit__transform__TransformVisitor___phase_61d(val* self, val* p0) {
self->attrs[COLOR_nit__transform__TransformVisitor___phase].val = p0; /* _phase on <self:TransformVisitor> */
RET_LABEL:;
}
/* method transform#TransformVisitor#mmodule for (self: TransformVisitor): MModule */
val* nit__transform___nit__transform__TransformVisitor___mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_nit__transform__TransformVisitor___mmodule].val; /* _mmodule on <self:TransformVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method transform#TransformVisitor#mmodule= for (self: TransformVisitor, MModule) */
void nit__transform___nit__transform__TransformVisitor___mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nit__transform__TransformVisitor___mmodule].val = p0; /* _mmodule on <self:TransformVisitor> */
RET_LABEL:;
}
/* method transform#TransformVisitor#mclassdef for (self: TransformVisitor): MClassDef */
val* nit__transform___nit__transform__TransformVisitor___mclassdef(val* self) {
val* var /* : MClassDef */;
val* var1 /* : MClassDef */;
var1 = self->attrs[COLOR_nit__transform__TransformVisitor___mclassdef].val; /* _mclassdef on <self:TransformVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 60);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method transform#TransformVisitor#mclassdef= for (self: TransformVisitor, MClassDef) */
void nit__transform___nit__transform__TransformVisitor___mclassdef_61d(val* self, val* p0) {
self->attrs[COLOR_nit__transform__TransformVisitor___mclassdef].val = p0; /* _mclassdef on <self:TransformVisitor> */
RET_LABEL:;
}
/* method transform#TransformVisitor#mpropdef for (self: TransformVisitor): MPropDef */
val* nit__transform___nit__transform__TransformVisitor___mpropdef(val* self) {
val* var /* : MPropDef */;
val* var1 /* : MPropDef */;
var1 = self->attrs[COLOR_nit__transform__TransformVisitor___mpropdef].val; /* _mpropdef on <self:TransformVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 61);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method transform#TransformVisitor#mpropdef= for (self: TransformVisitor, MPropDef) */
void nit__transform___nit__transform__TransformVisitor___mpropdef_61d(val* self, val* p0) {
self->attrs[COLOR_nit__transform__TransformVisitor___mpropdef].val = p0; /* _mpropdef on <self:TransformVisitor> */
RET_LABEL:;
}
/* method transform#TransformVisitor#builder for (self: TransformVisitor): ASTBuilder */
val* nit__transform___nit__transform__TransformVisitor___builder(val* self) {
val* var /* : ASTBuilder */;
val* var1 /* : ASTBuilder */;
var1 = self->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <self:TransformVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method transform#TransformVisitor#builder= for (self: TransformVisitor, ASTBuilder) */
void nit__transform___nit__transform__TransformVisitor___builder_61d(val* self, val* p0) {
self->attrs[COLOR_nit__transform__TransformVisitor___builder].val = p0; /* _builder on <self:TransformVisitor> */
RET_LABEL:;
}
/* method transform#TransformVisitor#init for (self: TransformVisitor) */
void nit__transform___nit__transform__TransformVisitor___standard__kernel__Object__init(val* self) {
val* var /* : MPropDef */;
val* var2 /* : MPropDef */;
val* var3 /* : MClassDef */;
val* var5 /* : MClassDef */;
val* var7 /* : MClassDef */;
val* var9 /* : MClassDef */;
val* var10 /* : MModule */;
val* var12 /* : MModule */;
val* var14 /* : ASTBuilder */;
val* var15 /* : MModule */;
val* var17 /* : MModule */;
val* var18 /* : MPropDef */;
val* var20 /* : MPropDef */;
val* var21 /* : MClassDef */;
val* var23 /* : MClassDef */;
val* var24 /* : MClassType */;
val* var26 /* : MClassType */;
{
((void(*)(val* self))(self->class->vft[COLOR_nit__transform___nit__transform__TransformVisitor___standard__kernel__Object__init]))(self); /* init on <self:TransformVisitor>*/
}
{
{ /* Inline transform#TransformVisitor#mpropdef (self) on <self:TransformVisitor> */
var2 = self->attrs[COLOR_nit__transform__TransformVisitor___mpropdef].val; /* _mpropdef on <self:TransformVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 61);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var) on <var:MPropDef> */
var5 = var->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var:MPropDef> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline transform#TransformVisitor#mclassdef= (self,var3) on <self:TransformVisitor> */
self->attrs[COLOR_nit__transform__TransformVisitor___mclassdef].val = var3; /* _mclassdef on <self:TransformVisitor> */
RET_LABEL6:(void)0;
}
}
{
{ /* Inline transform#TransformVisitor#mclassdef (self) on <self:TransformVisitor> */
var9 = self->attrs[COLOR_nit__transform__TransformVisitor___mclassdef].val; /* _mclassdef on <self:TransformVisitor> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 60);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var7) on <var7:MClassDef> */
var12 = var7->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var7:MClassDef> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline transform#TransformVisitor#mmodule= (self,var10) on <self:TransformVisitor> */
self->attrs[COLOR_nit__transform__TransformVisitor___mmodule].val = var10; /* _mmodule on <self:TransformVisitor> */
RET_LABEL13:(void)0;
}
}
var14 = NEW_nit__ASTBuilder(&type_nit__ASTBuilder);
{
{ /* Inline transform#TransformVisitor#mmodule (self) on <self:TransformVisitor> */
var17 = self->attrs[COLOR_nit__transform__TransformVisitor___mmodule].val; /* _mmodule on <self:TransformVisitor> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline transform#TransformVisitor#mpropdef (self) on <self:TransformVisitor> */
var20 = self->attrs[COLOR_nit__transform__TransformVisitor___mpropdef].val; /* _mpropdef on <self:TransformVisitor> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 61);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var18) on <var18:MPropDef> */
var23 = var18->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var18:MPropDef> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var21) on <var21:MClassDef> */
var26 = var21->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var21:MClassDef> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var14->class->vft[COLOR_nit__astbuilder__ASTBuilder__mmodule_61d]))(var14, var15); /* mmodule= on <var14:ASTBuilder>*/
}
{
((void(*)(val* self, val* p0))(var14->class->vft[COLOR_nit__astbuilder__ASTBuilder__anchor_61d]))(var14, var24); /* anchor= on <var14:ASTBuilder>*/
}
{
((void(*)(val* self))(var14->class->vft[COLOR_standard__kernel__Object__init]))(var14); /* init on <var14:ASTBuilder>*/
}
{
{ /* Inline transform#TransformVisitor#builder= (self,var14) on <self:TransformVisitor> */
self->attrs[COLOR_nit__transform__TransformVisitor___builder].val = var14; /* _builder on <self:TransformVisitor> */
RET_LABEL27:(void)0;
}
}
RET_LABEL:;
}
/* method transform#TransformVisitor#visit for (self: TransformVisitor, ANode) */
void nit__transform___nit__transform__TransformVisitor___nit__parser_nodes__Visitor__visit(val* self, val* p0) {
val* var_node /* var node: ANode */;
short int var /* : Bool */;
int cltype;
int idtype;
var_node = p0;
/* <var_node:ANode> isa AAnnotations */
cltype = type_nit__AAnnotations.color;
idtype = type_nit__AAnnotations.id;
if(cltype >= var_node->type->table_size) {
var = 0;
} else {
var = var_node->type->type_table[cltype] == idtype;
}
if (var){
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__transform__ANode__full_transform_visitor]))(var_node, self); /* full_transform_visitor on <var_node:ANode>*/
}
RET_LABEL:;
}
/* method transform#ANode#full_transform_visitor for (self: ANode, TransformVisitor) */
void nit__transform___ANode___full_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ANode__visit_all]))(self, var_v); /* visit_all on <self:ANode>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__transform__ANode__accept_transform_visitor]))(self, var_v); /* accept_transform_visitor on <self:ANode>*/
}
RET_LABEL:;
}
/* method transform#ANode#accept_transform_visitor for (self: ANode, TransformVisitor) */
void nit__transform___ANode___accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method transform#AExpr#full_transform_visitor for (self: AExpr, TransformVisitor) */
void nit__transform___AExpr___ANode__full_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
val* var /* : nullable AArrayExpr */;
val* var2 /* : nullable AArrayExpr */;
val* var_na /* var na: nullable AArrayExpr */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : AExpr */;
val* var_place /* var place: AExpr */;
val* var9 /* : ANewExpr */;
val* var11 /* : ANewExpr */;
val* var12 /* : AVarExpr */;
val* var_recv /* var recv: AVarExpr */;
val* var13 /* : ASTBuilder */;
val* var15 /* : ASTBuilder */;
val* var16 /* : nullable CallSite */;
val* var18 /* : nullable CallSite */;
val* var19 /* : Array[AExpr] */;
val* var_ /* var : Array[AExpr] */;
val* var20 /* : ACallExpr */;
val* var_nadd /* var nadd: ACallExpr */;
short int var21 /* : Bool */;
val* var22 /* : nullable MType */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var_other26 /* var other: nullable Object */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
short int var_30 /* var : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
var_v = p0;
{
{ /* Inline typing#AExpr#comprehension (self) on <self:AExpr> */
var2 = self->attrs[COLOR_nit__typing__AExpr___comprehension].val; /* _comprehension on <self:AExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_na = var;
if (var_na == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_na,((val*)NULL)) on <var_na:nullable AArrayExpr> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_na->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_na, var_other); /* == on <var_na:nullable AArrayExpr(AArrayExpr)>*/
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
var8 = nit__astbuilder___AExpr___detach_with_placeholder(self);
}
var_place = var8;
{
{ /* Inline transform#AArrayExpr#nnew (var_na) on <var_na:nullable AArrayExpr(AArrayExpr)> */
var11 = var_na->attrs[COLOR_nit__transform__AArrayExpr___nnew].val; /* _nnew on <var_na:nullable AArrayExpr(AArrayExpr)> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _nnew");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 382);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = nit__astbuilder___AExpr___make_var_read(var9);
}
var_recv = var12;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var15 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline typing#AArrayExpr#push_callsite (var_na) on <var_na:nullable AArrayExpr(AArrayExpr)> */
var18 = var_na->attrs[COLOR_nit__typing__AArrayExpr___push_callsite].val; /* _push_callsite on <var_na:nullable AArrayExpr(AArrayExpr)> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 104);
fatal_exit(1);
}
var19 = NEW_standard__Array(&type_standard__Array__nit__AExpr);
{
standard___standard__Array___with_capacity(var19, 1l); /* Direct call array#Array#with_capacity on <var19:Array[AExpr]>*/
}
var_ = var19;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, self); /* Direct call array#AbstractArray#push on <var_:Array[AExpr]>*/
}
{
var20 = nit___nit__ASTBuilder___make_call(var13, var_recv, var16, var_);
}
var_nadd = var20;
{
nit__transform___AExpr___nit__parser_nodes__ANode__replace_with(var_place, var_nadd); /* Direct call transform#AExpr#replace_with on <var_place:AExpr>*/
}
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ANode__visit_all]))(self, var_v); /* visit_all on <self:AExpr>*/
}
{
var22 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__typing__AExpr__mtype]))(self); /* mtype on <self:AExpr>*/
}
if (var22 == NULL) {
var23 = 1; /* is null */
} else {
var23 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var22,((val*)NULL)) on <var22:nullable MType> */
var_other26 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var22,var_other26) on <var22:nullable MType(MType)> */
var29 = var22 == var_other26;
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
var_30 = var23;
if (var23){
{
{ /* Inline typing#AExpr#is_typed (self) on <self:AExpr> */
var33 = self->attrs[COLOR_nit__typing__AExpr___is_typed].s; /* _is_typed on <self:AExpr> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
var34 = !var31;
var21 = var34;
} else {
var21 = var_30;
}
if (var21){
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__transform__ANode__accept_transform_visitor]))(self, var_v); /* accept_transform_visitor on <self:AExpr>*/
}
RET_LABEL:;
}
/* method transform#AExpr#replace_with for (self: AExpr, ANode) */
void nit__transform___AExpr___nit__parser_nodes__ANode__replace_with(val* self, val* p0) {
val* var_other /* var other: ANode */;
short int var /* : Bool */;
int cltype;
int idtype;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other7 /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : nullable MType */;
val* var13 /* : nullable MType */;
var_other = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__transform___AExpr___nit__parser_nodes__ANode__replace_with]))(self, p0); /* replace_with on <self:AExpr>*/
}
/* <var_other:ANode> isa AExpr */
cltype = type_nit__AExpr.color;
idtype = type_nit__AExpr.id;
if(cltype >= var_other->type->table_size) {
var = 0;
} else {
var = var_other->type->type_table[cltype] == idtype;
}
if (var){
{
{ /* Inline typing#AExpr#implicit_cast_to (var_other) on <var_other:ANode(AExpr)> */
var3 = var_other->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val; /* _implicit_cast_to on <var_other:ANode(AExpr)> */
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
{ /* Inline kernel#Object#== (var1,((val*)NULL)) on <var1:nullable MType> */
var_other7 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var1,var_other7) on <var1:nullable MType(MType)> */
var10 = var1 == var_other7;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
{
{ /* Inline typing#AExpr#implicit_cast_to (self) on <self:AExpr> */
var13 = self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val; /* _implicit_cast_to on <self:AExpr> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline typing#AExpr#implicit_cast_to= (var_other,var11) on <var_other:ANode(AExpr)> */
var_other->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var11; /* _implicit_cast_to on <var_other:ANode(AExpr)> */
RET_LABEL14:(void)0;
}
}
} else {
}
} else {
}
RET_LABEL:;
}
/* method transform#AVardeclExpr#accept_transform_visitor for (self: AVardeclExpr, TransformVisitor) */
void nit__transform___AVardeclExpr___ANode__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
val* var /* : nullable AExpr */;
val* var2 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : ASTBuilder */;
val* var11 /* : ASTBuilder */;
val* var12 /* : nullable Variable */;
val* var14 /* : nullable Variable */;
val* var15 /* : AVarAssignExpr */;
val* var_nvar /* var nvar: AVarAssignExpr */;
var_v = p0;
{
{ /* Inline parser_nodes#AVardeclExpr#n_expr (self) on <self:AVardeclExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_expr].val; /* _n_expr on <self:AVardeclExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_nexpr = var;
if (var_nexpr == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nexpr,((val*)NULL)) on <var_nexpr:nullable AExpr> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_nexpr,var_other) on <var_nexpr:nullable AExpr(AExpr)> */
var8 = var_nexpr == var_other;
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
} else {
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var11 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline scope#AVardeclExpr#variable (self) on <self:AVardeclExpr> */
var14 = self->attrs[COLOR_nit__scope__AVardeclExpr___variable].val; /* _variable on <self:AVardeclExpr> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 138);
fatal_exit(1);
}
{
var15 = nit___nit__ASTBuilder___make_var_assign(var9, var12, var_nexpr);
}
var_nvar = var15;
{
nit__transform___AExpr___nit__parser_nodes__ANode__replace_with(self, var_nvar); /* Direct call transform#AExpr#replace_with on <self:AVardeclExpr>*/
}
}
RET_LABEL:;
}
/* method transform#AIfexprExpr#accept_transform_visitor for (self: AIfexprExpr, TransformVisitor) */
void nit__transform___AIfexprExpr___ANode__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
val* var /* : ASTBuilder */;
val* var2 /* : ASTBuilder */;
val* var3 /* : AExpr */;
val* var5 /* : AExpr */;
val* var6 /* : nullable MType */;
val* var8 /* : nullable MType */;
val* var9 /* : AIfExpr */;
val* var_nif /* var nif: AIfExpr */;
val* var10 /* : nullable AExpr */;
val* var12 /* : nullable AExpr */;
val* var13 /* : AExpr */;
val* var15 /* : AExpr */;
val* var16 /* : nullable AExpr */;
val* var18 /* : nullable AExpr */;
val* var19 /* : AExpr */;
val* var21 /* : AExpr */;
var_v = p0;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var2 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline parser_nodes#AIfexprExpr#n_expr (self) on <self:AIfexprExpr> */
var5 = self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_expr].val; /* _n_expr on <self:AIfexprExpr> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1880);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype (self) on <self:AIfexprExpr> */
var8 = self->attrs[COLOR_nit__typing__AExpr___mtype].val; /* _mtype on <self:AIfexprExpr> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = nit___nit__ASTBuilder___make_if(var, var3, var6);
}
var_nif = var9;
{
{ /* Inline parser_nodes#AIfExpr#n_then (var_nif) on <var_nif:AIfExpr> */
var12 = var_nif->attrs[COLOR_nit__parser_nodes__AIfExpr___n_then].val; /* _n_then on <var_nif:AIfExpr> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline parser_nodes#AIfexprExpr#n_then (self) on <self:AIfexprExpr> */
var15 = self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_then].val; /* _n_then on <self:AIfexprExpr> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_then");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1886);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (var10 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 151);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_nit__astbuilder__AExpr__add]))(var10, var13); /* add on <var10:nullable AExpr>*/
}
{
{ /* Inline parser_nodes#AIfExpr#n_else (var_nif) on <var_nif:AIfExpr> */
var18 = var_nif->attrs[COLOR_nit__parser_nodes__AIfExpr___n_else].val; /* _n_else on <var_nif:AIfExpr> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline parser_nodes#AIfexprExpr#n_else (self) on <self:AIfexprExpr> */
var21 = self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_else].val; /* _n_else on <self:AIfexprExpr> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_else");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1892);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
if (var16 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 152);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var16->class->vft[COLOR_nit__astbuilder__AExpr__add]))(var16, var19); /* add on <var16:nullable AExpr>*/
}
{
nit__transform___AExpr___nit__parser_nodes__ANode__replace_with(self, var_nif); /* Direct call transform#AExpr#replace_with on <self:AIfexprExpr>*/
}
RET_LABEL:;
}
/* method transform#AOrExpr#accept_transform_visitor for (self: AOrExpr, TransformVisitor) */
void nit__transform___AOrExpr___ANode__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
val* var /* : ASTBuilder */;
val* var2 /* : ASTBuilder */;
val* var3 /* : AExpr */;
val* var5 /* : AExpr */;
val* var6 /* : nullable MType */;
val* var8 /* : nullable MType */;
val* var9 /* : AIfExpr */;
val* var_nif /* var nif: AIfExpr */;
val* var10 /* : nullable AExpr */;
val* var12 /* : nullable AExpr */;
val* var13 /* : AExpr */;
val* var15 /* : AExpr */;
val* var16 /* : AVarExpr */;
val* var17 /* : nullable AExpr */;
val* var19 /* : nullable AExpr */;
val* var20 /* : AExpr */;
val* var22 /* : AExpr */;
var_v = p0;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var2 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr (self) on <self:AOrExpr> */
var5 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AOrExpr> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2053);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype (self) on <self:AOrExpr> */
var8 = self->attrs[COLOR_nit__typing__AExpr___mtype].val; /* _mtype on <self:AOrExpr> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = nit___nit__ASTBuilder___make_if(var, var3, var6);
}
var_nif = var9;
{
{ /* Inline parser_nodes#AIfExpr#n_then (var_nif) on <var_nif:AIfExpr> */
var12 = var_nif->attrs[COLOR_nit__parser_nodes__AIfExpr___n_then].val; /* _n_then on <var_nif:AIfExpr> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr (self) on <self:AOrExpr> */
var15 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AOrExpr> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2053);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = nit__astbuilder___AExpr___make_var_read(var13);
}
if (var10 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 163);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_nit__astbuilder__AExpr__add]))(var10, var16); /* add on <var10:nullable AExpr>*/
}
{
{ /* Inline parser_nodes#AIfExpr#n_else (var_nif) on <var_nif:AIfExpr> */
var19 = var_nif->attrs[COLOR_nit__parser_nodes__AIfExpr___n_else].val; /* _n_else on <var_nif:AIfExpr> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr2 (self) on <self:AOrExpr> */
var22 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AOrExpr> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2059);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
if (var17 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 164);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var17->class->vft[COLOR_nit__astbuilder__AExpr__add]))(var17, var20); /* add on <var17:nullable AExpr>*/
}
{
nit__transform___AExpr___nit__parser_nodes__ANode__replace_with(self, var_nif); /* Direct call transform#AExpr#replace_with on <self:AOrExpr>*/
}
RET_LABEL:;
}
/* method transform#AImpliesExpr#accept_transform_visitor for (self: AImpliesExpr, TransformVisitor) */
void nit__transform___AImpliesExpr___ANode__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method transform#AAndExpr#accept_transform_visitor for (self: AAndExpr, TransformVisitor) */
void nit__transform___AAndExpr___ANode__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
val* var /* : ASTBuilder */;
val* var2 /* : ASTBuilder */;
val* var3 /* : AExpr */;
val* var5 /* : AExpr */;
val* var6 /* : nullable MType */;
val* var8 /* : nullable MType */;
val* var9 /* : AIfExpr */;
val* var_nif /* var nif: AIfExpr */;
val* var10 /* : nullable AExpr */;
val* var12 /* : nullable AExpr */;
val* var13 /* : AExpr */;
val* var15 /* : AExpr */;
val* var16 /* : nullable AExpr */;
val* var18 /* : nullable AExpr */;
val* var19 /* : AExpr */;
val* var21 /* : AExpr */;
val* var22 /* : AVarExpr */;
var_v = p0;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var2 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr (self) on <self:AAndExpr> */
var5 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AAndExpr> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2053);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype (self) on <self:AAndExpr> */
var8 = self->attrs[COLOR_nit__typing__AExpr___mtype].val; /* _mtype on <self:AAndExpr> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = nit___nit__ASTBuilder___make_if(var, var3, var6);
}
var_nif = var9;
{
{ /* Inline parser_nodes#AIfExpr#n_then (var_nif) on <var_nif:AIfExpr> */
var12 = var_nif->attrs[COLOR_nit__parser_nodes__AIfExpr___n_then].val; /* _n_then on <var_nif:AIfExpr> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr2 (self) on <self:AAndExpr> */
var15 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AAndExpr> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2059);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (var10 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 182);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_nit__astbuilder__AExpr__add]))(var10, var13); /* add on <var10:nullable AExpr>*/
}
{
{ /* Inline parser_nodes#AIfExpr#n_else (var_nif) on <var_nif:AIfExpr> */
var18 = var_nif->attrs[COLOR_nit__parser_nodes__AIfExpr___n_else].val; /* _n_else on <var_nif:AIfExpr> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr (self) on <self:AAndExpr> */
var21 = self->attrs[COLOR_nit__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AAndExpr> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2053);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = nit__astbuilder___AExpr___make_var_read(var19);
}
if (var16 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 183);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var16->class->vft[COLOR_nit__astbuilder__AExpr__add]))(var16, var22); /* add on <var16:nullable AExpr>*/
}
{
nit__transform___AExpr___nit__parser_nodes__ANode__replace_with(self, var_nif); /* Direct call transform#AExpr#replace_with on <self:AAndExpr>*/
}
RET_LABEL:;
}
/* method transform#AWhileExpr#accept_transform_visitor for (self: AWhileExpr, TransformVisitor) */
void nit__transform___AWhileExpr___ANode__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
val* var /* : ASTBuilder */;
val* var2 /* : ASTBuilder */;
val* var3 /* : ALoopExpr */;
val* var_nloop /* var nloop: ALoopExpr */;
val* var4 /* : ASTBuilder */;
val* var6 /* : ASTBuilder */;
val* var7 /* : AExpr */;
val* var9 /* : AExpr */;
val* var10 /* : AIfExpr */;
val* var_nif /* var nif: AIfExpr */;
val* var11 /* : nullable AExpr */;
val* var13 /* : nullable AExpr */;
val* var_nblock /* var nblock: nullable AExpr */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : nullable AExpr */;
val* var21 /* : nullable AExpr */;
val* var22 /* : nullable EscapeMark */;
val* var24 /* : nullable EscapeMark */;
val* var_escapemark /* var escapemark: EscapeMark */;
val* var25 /* : ASTBuilder */;
val* var27 /* : ASTBuilder */;
val* var28 /* : ABreakExpr */;
val* var_nbreak /* var nbreak: ABreakExpr */;
val* var29 /* : nullable AExpr */;
val* var31 /* : nullable AExpr */;
val* var32 /* : nullable EscapeMark */;
val* var34 /* : nullable EscapeMark */;
val* var36 /* : nullable EscapeMark */;
val* var38 /* : nullable EscapeMark */;
var_v = p0;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var2 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit___nit__ASTBuilder___make_loop(var);
}
var_nloop = var3;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var6 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline parser_nodes#AWhileExpr#n_expr (self) on <self:AWhileExpr> */
var9 = self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_expr].val; /* _n_expr on <self:AWhileExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1904);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = nit___nit__ASTBuilder___make_if(var4, var7, ((val*)NULL));
}
var_nif = var10;
{
nit__astbuilder___ALoopExpr___AExpr__add(var_nloop, var_nif); /* Direct call astbuilder#ALoopExpr#add on <var_nloop:ALoopExpr>*/
}
{
{ /* Inline parser_nodes#AWhileExpr#n_block (self) on <self:AWhileExpr> */
var13 = self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_block].val; /* _n_block on <self:AWhileExpr> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
var_nblock = var11;
if (var_nblock == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nblock,((val*)NULL)) on <var_nblock:nullable AExpr> */
var_other = ((val*)NULL);
{
var17 = ((short int(*)(val* self, val* p0))(var_nblock->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nblock, var_other); /* == on <var_nblock:nullable AExpr(AExpr)>*/
}
var18 = !var17;
var15 = var18;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
if (var14){
{
{ /* Inline parser_nodes#AIfExpr#n_then (var_nif) on <var_nif:AIfExpr> */
var21 = var_nif->attrs[COLOR_nit__parser_nodes__AIfExpr___n_then].val; /* _n_then on <var_nif:AIfExpr> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
if (var19 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 197);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var19->class->vft[COLOR_nit__astbuilder__AExpr__add]))(var19, var_nblock); /* add on <var19:nullable AExpr>*/
}
} else {
}
{
{ /* Inline scope#AWhileExpr#break_mark (self) on <self:AWhileExpr> */
var24 = self->attrs[COLOR_nit__scope__AWhileExpr___break_mark].val; /* _break_mark on <self:AWhileExpr> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 199);
fatal_exit(1);
}
var_escapemark = var22;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var27 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
var28 = nit___nit__ASTBuilder___make_break(var25, var_escapemark);
}
var_nbreak = var28;
{
{ /* Inline parser_nodes#AIfExpr#n_else (var_nif) on <var_nif:AIfExpr> */
var31 = var_nif->attrs[COLOR_nit__parser_nodes__AIfExpr___n_else].val; /* _n_else on <var_nif:AIfExpr> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
if (var29 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 201);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var29->class->vft[COLOR_nit__astbuilder__AExpr__add]))(var29, var_nbreak); /* add on <var29:nullable AExpr>*/
}
{
{ /* Inline scope#AWhileExpr#break_mark (self) on <self:AWhileExpr> */
var34 = self->attrs[COLOR_nit__scope__AWhileExpr___break_mark].val; /* _break_mark on <self:AWhileExpr> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline scope#ALoopExpr#break_mark= (var_nloop,var32) on <var_nloop:ALoopExpr> */
var_nloop->attrs[COLOR_nit__scope__ALoopExpr___break_mark].val = var32; /* _break_mark on <var_nloop:ALoopExpr> */
RET_LABEL35:(void)0;
}
}
{
{ /* Inline scope#AWhileExpr#continue_mark (self) on <self:AWhileExpr> */
var38 = self->attrs[COLOR_nit__scope__AWhileExpr___continue_mark].val; /* _continue_mark on <self:AWhileExpr> */
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline scope#ALoopExpr#continue_mark= (var_nloop,var36) on <var_nloop:ALoopExpr> */
var_nloop->attrs[COLOR_nit__scope__ALoopExpr___continue_mark].val = var36; /* _continue_mark on <var_nloop:ALoopExpr> */
RET_LABEL39:(void)0;
}
}
{
nit__transform___AExpr___nit__parser_nodes__ANode__replace_with(self, var_nloop); /* Direct call transform#AExpr#replace_with on <self:AWhileExpr>*/
}
RET_LABEL:;
}
/* method transform#AForExpr#accept_transform_visitor for (self: AForExpr, TransformVisitor) */
void nit__transform___AForExpr___ANode__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
val* var /* : nullable EscapeMark */;
val* var2 /* : nullable EscapeMark */;
val* var_escapemark /* var escapemark: nullable EscapeMark */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : ASTBuilder */;
val* var10 /* : ASTBuilder */;
val* var11 /* : ABlockExpr */;
val* var_nblock /* var nblock: ABlockExpr */;
val* var12 /* : AExpr */;
val* var14 /* : AExpr */;
val* var_nexpr /* var nexpr: AExpr */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : nullable Array[Variable] */;
val* var19 /* : nullable Array[Variable] */;
long var20 /* : Int */;
long var22 /* : Int */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var_ /* var : Bool */;
short int var26 /* : Bool */;
int cltype;
int idtype;
short int var_27 /* var : Bool */;
val* var28 /* : TransformPhase */;
val* var30 /* : TransformPhase */;
val* var31 /* : ToolContext */;
val* var33 /* : ToolContext */;
val* var34 /* : OptionBool */;
val* var36 /* : OptionBool */;
val* var37 /* : nullable Object */;
val* var39 /* : nullable Object */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
val* var42 /* : nullable Array[Variable] */;
val* var44 /* : nullable Array[Variable] */;
val* var45 /* : nullable Object */;
val* var_variable /* var variable: Variable */;
val* var46 /* : ASTBuilder */;
val* var48 /* : ASTBuilder */;
val* var49 /* : AExpr */;
val* var51 /* : AExpr */;
val* var52 /* : AVarAssignExpr */;
val* var53 /* : AExpr */;
val* var55 /* : AExpr */;
val* var_to /* var to: AExpr */;
val* var56 /* : ASTBuilder */;
val* var58 /* : ASTBuilder */;
val* var59 /* : ALoopExpr */;
val* var_nloop /* var nloop: ALoopExpr */;
val* var61 /* : ASTBuilder */;
val* var63 /* : ASTBuilder */;
val* var64 /* : ASTBuilder */;
val* var66 /* : ASTBuilder */;
val* var67 /* : nullable MType */;
val* var69 /* : nullable MType */;
val* var70 /* : AVarExpr */;
val* var71 /* : nullable CallSite */;
val* var73 /* : nullable CallSite */;
val* var74 /* : Array[AVarExpr] */;
val* var_75 /* var : Array[AVarExpr] */;
val* var76 /* : AVarExpr */;
val* var77 /* : ACallExpr */;
val* var_is_ok /* var is_ok: ACallExpr */;
val* var78 /* : ASTBuilder */;
val* var80 /* : ASTBuilder */;
val* var81 /* : AIfExpr */;
val* var_nif /* var nif: AIfExpr */;
val* var82 /* : nullable AExpr */;
val* var84 /* : nullable AExpr */;
val* var_nthen /* var nthen: nullable AExpr */;
val* var85 /* : ASTBuilder */;
val* var87 /* : ASTBuilder */;
val* var88 /* : ADoExpr */;
val* var_ndo /* var ndo: ADoExpr */;
val* var89 /* : nullable EscapeMark */;
val* var91 /* : nullable EscapeMark */;
val* var93 /* : nullable AExpr */;
val* var95 /* : nullable AExpr */;
val* var96 /* : ASTBuilder */;
val* var98 /* : ASTBuilder */;
val* var99 /* : AIntExpr */;
val* var_one /* var one: AIntExpr */;
val* var100 /* : ASTBuilder */;
val* var102 /* : ASTBuilder */;
val* var103 /* : ASTBuilder */;
val* var105 /* : ASTBuilder */;
val* var106 /* : nullable MType */;
val* var108 /* : nullable MType */;
val* var109 /* : AVarExpr */;
val* var110 /* : nullable CallSite */;
val* var112 /* : nullable CallSite */;
val* var113 /* : Array[AIntExpr] */;
val* var_114 /* var : Array[AIntExpr] */;
val* var115 /* : ACallExpr */;
val* var_succ /* var succ: ACallExpr */;
val* var116 /* : ASTBuilder */;
val* var118 /* : ASTBuilder */;
val* var119 /* : AVarAssignExpr */;
val* var120 /* : ASTBuilder */;
val* var122 /* : ASTBuilder */;
val* var123 /* : ABreakExpr */;
val* var_nbreak /* var nbreak: ABreakExpr */;
val* var124 /* : nullable AExpr */;
val* var126 /* : nullable AExpr */;
val* var127 /* : ASTBuilder */;
val* var129 /* : ASTBuilder */;
val* var130 /* : AVarExpr */;
val* var131 /* : nullable CallSite */;
val* var133 /* : nullable CallSite */;
val* var134 /* : ACallExpr */;
val* var_iter /* var iter: ACallExpr */;
val* var135 /* : ASTBuilder */;
val* var137 /* : ASTBuilder */;
val* var138 /* : ALoopExpr */;
val* var_nloop139 /* var nloop: ALoopExpr */;
val* var141 /* : ASTBuilder */;
val* var143 /* : ASTBuilder */;
val* var144 /* : AVarExpr */;
val* var145 /* : nullable CallSite */;
val* var147 /* : nullable CallSite */;
val* var148 /* : ACallExpr */;
val* var_is_ok149 /* var is_ok: ACallExpr */;
val* var150 /* : ASTBuilder */;
val* var152 /* : ASTBuilder */;
val* var153 /* : AIfExpr */;
val* var_nif154 /* var nif: AIfExpr */;
val* var155 /* : nullable AExpr */;
val* var157 /* : nullable AExpr */;
val* var_nthen158 /* var nthen: nullable AExpr */;
val* var159 /* : ASTBuilder */;
val* var161 /* : ASTBuilder */;
val* var162 /* : ADoExpr */;
val* var_ndo163 /* var ndo: ADoExpr */;
val* var164 /* : nullable EscapeMark */;
val* var166 /* : nullable EscapeMark */;
val* var168 /* : nullable Array[Variable] */;
val* var170 /* : nullable Array[Variable] */;
long var171 /* : Int */;
long var173 /* : Int */;
short int var174 /* : Bool */;
short int var176 /* : Bool */;
val* var177 /* : ASTBuilder */;
val* var179 /* : ASTBuilder */;
val* var180 /* : AVarExpr */;
val* var181 /* : nullable CallSite */;
val* var183 /* : nullable CallSite */;
val* var184 /* : ACallExpr */;
val* var_item /* var item: ACallExpr */;
val* var185 /* : ASTBuilder */;
val* var187 /* : ASTBuilder */;
val* var188 /* : nullable Array[Variable] */;
val* var190 /* : nullable Array[Variable] */;
val* var191 /* : nullable Object */;
val* var192 /* : AVarAssignExpr */;
val* var193 /* : nullable Array[Variable] */;
val* var195 /* : nullable Array[Variable] */;
long var196 /* : Int */;
long var198 /* : Int */;
short int var199 /* : Bool */;
short int var201 /* : Bool */;
val* var202 /* : ASTBuilder */;
val* var204 /* : ASTBuilder */;
val* var205 /* : AVarExpr */;
val* var206 /* : nullable CallSite */;
val* var208 /* : nullable CallSite */;
val* var209 /* : ACallExpr */;
val* var_key /* var key: ACallExpr */;
val* var210 /* : ASTBuilder */;
val* var212 /* : ASTBuilder */;
val* var213 /* : nullable Array[Variable] */;
val* var215 /* : nullable Array[Variable] */;
val* var216 /* : nullable Object */;
val* var217 /* : AVarAssignExpr */;
val* var218 /* : ASTBuilder */;
val* var220 /* : ASTBuilder */;
val* var221 /* : AVarExpr */;
val* var222 /* : nullable CallSite */;
val* var224 /* : nullable CallSite */;
val* var225 /* : ACallExpr */;
val* var_item226 /* var item: ACallExpr */;
val* var227 /* : ASTBuilder */;
val* var229 /* : ASTBuilder */;
val* var230 /* : nullable Array[Variable] */;
val* var232 /* : nullable Array[Variable] */;
val* var233 /* : nullable Object */;
val* var234 /* : AVarAssignExpr */;
val* var235 /* : nullable AExpr */;
val* var237 /* : nullable AExpr */;
val* var238 /* : ASTBuilder */;
val* var240 /* : ASTBuilder */;
val* var241 /* : AVarExpr */;
val* var242 /* : nullable CallSite */;
val* var244 /* : nullable CallSite */;
val* var245 /* : ACallExpr */;
val* var246 /* : ASTBuilder */;
val* var248 /* : ASTBuilder */;
val* var249 /* : ABreakExpr */;
val* var_nbreak250 /* var nbreak: ABreakExpr */;
val* var251 /* : nullable AExpr */;
val* var253 /* : nullable AExpr */;
val* var254 /* : nullable CallSite */;
val* var256 /* : nullable CallSite */;
val* var_method_finish /* var method_finish: nullable CallSite */;
short int var257 /* : Bool */;
short int var258 /* : Bool */;
short int var260 /* : Bool */;
short int var261 /* : Bool */;
val* var262 /* : ASTBuilder */;
val* var264 /* : ASTBuilder */;
val* var265 /* : AVarExpr */;
val* var266 /* : ACallExpr */;
var_v = p0;
{
{ /* Inline scope#AForExpr#break_mark (self) on <self:AForExpr> */
var2 = self->attrs[COLOR_nit__scope__AForExpr___break_mark].val; /* _break_mark on <self:AForExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_escapemark = var;
if (var_escapemark == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_escapemark,((val*)NULL)) on <var_escapemark:nullable EscapeMark> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_escapemark->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_escapemark, var_other); /* == on <var_escapemark:nullable EscapeMark(EscapeMark)>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 214);
fatal_exit(1);
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var10 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nit___nit__ASTBuilder___make_block(var8);
}
var_nblock = var11;
{
{ /* Inline parser_nodes#AForExpr#n_expr (self) on <self:AForExpr> */
var14 = self->attrs[COLOR_nit__parser_nodes__AForExpr___n_expr].val; /* _n_expr on <self:AForExpr> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1940);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_nexpr = var12;
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var19 = self->attrs[COLOR_nit__scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
if (var17 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 222);
fatal_exit(1);
} else {
{ /* Inline array#AbstractArrayRead#length (var17) on <var17:nullable Array[Variable]> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__array, 26);
fatal_exit(1);
}
var22 = var17->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var17:nullable Array[Variable]> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var20,1l) on <var20:Int> */
var25 = var20 == 1l;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var_ = var23;
if (var23){
/* <var_nexpr:AExpr> isa ARangeExpr */
cltype = type_nit__ARangeExpr.color;
idtype = type_nit__ARangeExpr.id;
if(cltype >= var_nexpr->type->table_size) {
var26 = 0;
} else {
var26 = var_nexpr->type->type_table[cltype] == idtype;
}
var16 = var26;
} else {
var16 = var_;
}
var_27 = var16;
if (var16){
{
{ /* Inline transform#TransformVisitor#phase (var_v) on <var_v:TransformVisitor> */
var30 = var_v->attrs[COLOR_nit__transform__TransformVisitor___phase].val; /* _phase on <var_v:TransformVisitor> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 58);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline phase#Phase#toolcontext (var28) on <var28:TransformPhase> */
var33 = var28->attrs[COLOR_nit__phase__Phase___toolcontext].val; /* _toolcontext on <var28:TransformPhase> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 200);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline transform#ToolContext#opt_no_shortcut_range (var31) on <var31:ToolContext> */
var36 = var31->attrs[COLOR_nit__transform__ToolContext___opt_no_shortcut_range].val; /* _opt_no_shortcut_range on <var31:ToolContext> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_shortcut_range");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 28);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline opts#Option#value (var34) on <var34:OptionBool> */
var39 = var34->attrs[COLOR_opts__Option___value].val; /* _value on <var34:OptionBool> */
var37 = var39;
RET_LABEL38:(void)0;
}
}
var40 = (short int)((long)(var37)>>2);
var41 = !var40;
var15 = var41;
} else {
var15 = var_27;
}
if (var15){
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var44 = self->attrs[COLOR_nit__scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var42 = var44;
RET_LABEL43:(void)0;
}
}
if (var42 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 223);
fatal_exit(1);
} else {
var45 = standard___standard__SequenceRead___Collection__first(var42);
}
var_variable = var45;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var48 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
{ /* Inline parser_nodes#ARangeExpr#n_expr (var_nexpr) on <var_nexpr:AExpr(ARangeExpr)> */
var51 = var_nexpr->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <var_nexpr:AExpr(ARangeExpr)> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2417);
fatal_exit(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
var52 = nit___nit__ASTBuilder___make_var_assign(var46, var_variable, var49);
}
{
nit__astbuilder___ABlockExpr___AExpr__add(var_nblock, var52); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
{
{ /* Inline parser_nodes#ARangeExpr#n_expr2 (var_nexpr) on <var_nexpr:AExpr(ARangeExpr)> */
var55 = var_nexpr->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <var_nexpr:AExpr(ARangeExpr)> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2423);
fatal_exit(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
var_to = var53;
{
nit__astbuilder___ABlockExpr___AExpr__add(var_nblock, var_to); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var58 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
var59 = nit___nit__ASTBuilder___make_loop(var56);
}
var_nloop = var59;
{
{ /* Inline scope#ALoopExpr#break_mark= (var_nloop,var_escapemark) on <var_nloop:ALoopExpr> */
var_nloop->attrs[COLOR_nit__scope__ALoopExpr___break_mark].val = var_escapemark; /* _break_mark on <var_nloop:ALoopExpr> */
RET_LABEL60:(void)0;
}
}
{
nit__astbuilder___ABlockExpr___AExpr__add(var_nblock, var_nloop); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var63 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var66 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:Variable> */
var69 = var_variable->attrs[COLOR_nit__typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var67 = var69;
RET_LABEL68:(void)0;
}
}
if (unlikely(var67 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 232);
fatal_exit(1);
}
{
var70 = nit___nit__ASTBuilder___make_var_read(var64, var_variable, var67);
}
{
{ /* Inline typing#AForExpr#method_lt (self) on <self:AForExpr> */
var73 = self->attrs[COLOR_nit__typing__AForExpr___method_lt].val; /* _method_lt on <self:AForExpr> */
var71 = var73;
RET_LABEL72:(void)0;
}
}
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 232);
fatal_exit(1);
}
var74 = NEW_standard__Array(&type_standard__Array__nit__AVarExpr);
{
standard___standard__Array___with_capacity(var74, 1l); /* Direct call array#Array#with_capacity on <var74:Array[AVarExpr]>*/
}
var_75 = var74;
{
var76 = nit__astbuilder___AExpr___make_var_read(var_to);
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_75, var76); /* Direct call array#AbstractArray#push on <var_75:Array[AVarExpr]>*/
}
{
var77 = nit___nit__ASTBuilder___make_call(var61, var70, var71, var_75);
}
var_is_ok = var77;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var80 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var80 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
var81 = nit___nit__ASTBuilder___make_if(var78, var_is_ok, ((val*)NULL));
}
var_nif = var81;
{
nit__astbuilder___ALoopExpr___AExpr__add(var_nloop, var_nif); /* Direct call astbuilder#ALoopExpr#add on <var_nloop:ALoopExpr>*/
}
{
{ /* Inline parser_nodes#AIfExpr#n_then (var_nif) on <var_nif:AIfExpr> */
var84 = var_nif->attrs[COLOR_nit__parser_nodes__AIfExpr___n_then].val; /* _n_then on <var_nif:AIfExpr> */
var82 = var84;
RET_LABEL83:(void)0;
}
}
var_nthen = var82;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var87 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var87 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var85 = var87;
RET_LABEL86:(void)0;
}
}
{
var88 = nit___nit__ASTBuilder___make_do(var85);
}
var_ndo = var88;
{
{ /* Inline scope#EscapeMark#continue_mark (var_escapemark) on <var_escapemark:nullable EscapeMark(EscapeMark)> */
var91 = var_escapemark->attrs[COLOR_nit__scope__EscapeMark___continue_mark].val; /* _continue_mark on <var_escapemark:nullable EscapeMark(EscapeMark)> */
var89 = var91;
RET_LABEL90:(void)0;
}
}
{
{ /* Inline scope#ADoExpr#break_mark= (var_ndo,var89) on <var_ndo:ADoExpr> */
var_ndo->attrs[COLOR_nit__scope__ADoExpr___break_mark].val = var89; /* _break_mark on <var_ndo:ADoExpr> */
RET_LABEL92:(void)0;
}
}
if (var_nthen == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 240);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_nthen->class->vft[COLOR_nit__astbuilder__AExpr__add]))(var_nthen, var_ndo); /* add on <var_nthen:nullable AExpr>*/
}
{
{ /* Inline parser_nodes#AForExpr#n_block (self) on <self:AForExpr> */
var95 = self->attrs[COLOR_nit__parser_nodes__AForExpr___n_block].val; /* _n_block on <self:AForExpr> */
var93 = var95;
RET_LABEL94:(void)0;
}
}
if (unlikely(var93 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 242);
fatal_exit(1);
}
{
nit__astbuilder___ADoExpr___AExpr__add(var_ndo, var93); /* Direct call astbuilder#ADoExpr#add on <var_ndo:ADoExpr>*/
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var98 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var98 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var96 = var98;
RET_LABEL97:(void)0;
}
}
{
var99 = nit___nit__ASTBuilder___make_int(var96, 1l);
}
var_one = var99;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var102 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var102 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var100 = var102;
RET_LABEL101:(void)0;
}
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var105 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var105 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var103 = var105;
RET_LABEL104:(void)0;
}
}
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:Variable> */
var108 = var_variable->attrs[COLOR_nit__typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var106 = var108;
RET_LABEL107:(void)0;
}
}
if (unlikely(var106 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 245);
fatal_exit(1);
}
{
var109 = nit___nit__ASTBuilder___make_var_read(var103, var_variable, var106);
}
{
{ /* Inline typing#AForExpr#method_successor (self) on <self:AForExpr> */
var112 = self->attrs[COLOR_nit__typing__AForExpr___method_successor].val; /* _method_successor on <self:AForExpr> */
var110 = var112;
RET_LABEL111:(void)0;
}
}
if (unlikely(var110 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 245);
fatal_exit(1);
}
var113 = NEW_standard__Array(&type_standard__Array__nit__AIntExpr);
{
standard___standard__Array___with_capacity(var113, 1l); /* Direct call array#Array#with_capacity on <var113:Array[AIntExpr]>*/
}
var_114 = var113;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_114, var_one); /* Direct call array#AbstractArray#push on <var_114:Array[AIntExpr]>*/
}
{
var115 = nit___nit__ASTBuilder___make_call(var100, var109, var110, var_114);
}
var_succ = var115;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var118 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var118 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var116 = var118;
RET_LABEL117:(void)0;
}
}
{
var119 = nit___nit__ASTBuilder___make_var_assign(var116, var_variable, var_succ);
}
if (var_nthen == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 246);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_nthen->class->vft[COLOR_nit__astbuilder__AExpr__add]))(var_nthen, var119); /* add on <var_nthen:nullable AExpr>*/
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var122 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var122 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var120 = var122;
RET_LABEL121:(void)0;
}
}
{
var123 = nit___nit__ASTBuilder___make_break(var120, var_escapemark);
}
var_nbreak = var123;
{
{ /* Inline parser_nodes#AIfExpr#n_else (var_nif) on <var_nif:AIfExpr> */
var126 = var_nif->attrs[COLOR_nit__parser_nodes__AIfExpr___n_else].val; /* _n_else on <var_nif:AIfExpr> */
var124 = var126;
RET_LABEL125:(void)0;
}
}
if (var124 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 249);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var124->class->vft[COLOR_nit__astbuilder__AExpr__add]))(var124, var_nbreak); /* add on <var124:nullable AExpr>*/
}
{
nit__transform___AExpr___nit__parser_nodes__ANode__replace_with(self, var_nblock); /* Direct call transform#AExpr#replace_with on <self:AForExpr>*/
}
goto RET_LABEL;
} else {
}
{
nit__astbuilder___ABlockExpr___AExpr__add(var_nblock, var_nexpr); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var129 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var129 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var127 = var129;
RET_LABEL128:(void)0;
}
}
{
var130 = nit__astbuilder___AExpr___make_var_read(var_nexpr);
}
{
{ /* Inline typing#AForExpr#method_iterator (self) on <self:AForExpr> */
var133 = self->attrs[COLOR_nit__typing__AForExpr___method_iterator].val; /* _method_iterator on <self:AForExpr> */
var131 = var133;
RET_LABEL132:(void)0;
}
}
if (unlikely(var131 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 257);
fatal_exit(1);
}
{
var134 = nit___nit__ASTBuilder___make_call(var127, var130, var131, ((val*)NULL));
}
var_iter = var134;
{
nit__astbuilder___ABlockExpr___AExpr__add(var_nblock, var_iter); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var137 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var137 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var135 = var137;
RET_LABEL136:(void)0;
}
}
{
var138 = nit___nit__ASTBuilder___make_loop(var135);
}
var_nloop139 = var138;
{
{ /* Inline scope#ALoopExpr#break_mark= (var_nloop139,var_escapemark) on <var_nloop139:ALoopExpr> */
var_nloop139->attrs[COLOR_nit__scope__ALoopExpr___break_mark].val = var_escapemark; /* _break_mark on <var_nloop139:ALoopExpr> */
RET_LABEL140:(void)0;
}
}
{
nit__astbuilder___ABlockExpr___AExpr__add(var_nblock, var_nloop139); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var143 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var143 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var141 = var143;
RET_LABEL142:(void)0;
}
}
{
var144 = nit__astbuilder___AExpr___make_var_read(var_iter);
}
{
{ /* Inline typing#AForExpr#method_is_ok (self) on <self:AForExpr> */
var147 = self->attrs[COLOR_nit__typing__AForExpr___method_is_ok].val; /* _method_is_ok on <self:AForExpr> */
var145 = var147;
RET_LABEL146:(void)0;
}
}
if (unlikely(var145 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 264);
fatal_exit(1);
}
{
var148 = nit___nit__ASTBuilder___make_call(var141, var144, var145, ((val*)NULL));
}
var_is_ok149 = var148;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var152 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var152 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var150 = var152;
RET_LABEL151:(void)0;
}
}
{
var153 = nit___nit__ASTBuilder___make_if(var150, var_is_ok149, ((val*)NULL));
}
var_nif154 = var153;
{
nit__astbuilder___ALoopExpr___AExpr__add(var_nloop139, var_nif154); /* Direct call astbuilder#ALoopExpr#add on <var_nloop139:ALoopExpr>*/
}
{
{ /* Inline parser_nodes#AIfExpr#n_then (var_nif154) on <var_nif154:AIfExpr> */
var157 = var_nif154->attrs[COLOR_nit__parser_nodes__AIfExpr___n_then].val; /* _n_then on <var_nif154:AIfExpr> */
var155 = var157;
RET_LABEL156:(void)0;
}
}
var_nthen158 = var155;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var161 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var161 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var159 = var161;
RET_LABEL160:(void)0;
}
}
{
var162 = nit___nit__ASTBuilder___make_do(var159);
}
var_ndo163 = var162;
{
{ /* Inline scope#EscapeMark#continue_mark (var_escapemark) on <var_escapemark:nullable EscapeMark(EscapeMark)> */
var166 = var_escapemark->attrs[COLOR_nit__scope__EscapeMark___continue_mark].val; /* _continue_mark on <var_escapemark:nullable EscapeMark(EscapeMark)> */
var164 = var166;
RET_LABEL165:(void)0;
}
}
{
{ /* Inline scope#ADoExpr#break_mark= (var_ndo163,var164) on <var_ndo163:ADoExpr> */
var_ndo163->attrs[COLOR_nit__scope__ADoExpr___break_mark].val = var164; /* _break_mark on <var_ndo163:ADoExpr> */
RET_LABEL167:(void)0;
}
}
if (var_nthen158 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 272);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_nthen158->class->vft[COLOR_nit__astbuilder__AExpr__add]))(var_nthen158, var_ndo163); /* add on <var_nthen158:nullable AExpr>*/
}
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var170 = self->attrs[COLOR_nit__scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var168 = var170;
RET_LABEL169:(void)0;
}
}
if (var168 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 274);
fatal_exit(1);
} else {
{ /* Inline array#AbstractArrayRead#length (var168) on <var168:nullable Array[Variable]> */
if (unlikely(var168 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__array, 26);
fatal_exit(1);
}
var173 = var168->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var168:nullable Array[Variable]> */
var171 = var173;
RET_LABEL172:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var171,1l) on <var171:Int> */
var176 = var171 == 1l;
var174 = var176;
goto RET_LABEL175;
RET_LABEL175:(void)0;
}
}
if (var174){
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var179 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var179 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var177 = var179;
RET_LABEL178:(void)0;
}
}
{
var180 = nit__astbuilder___AExpr___make_var_read(var_iter);
}
{
{ /* Inline typing#AForExpr#method_item (self) on <self:AForExpr> */
var183 = self->attrs[COLOR_nit__typing__AForExpr___method_item].val; /* _method_item on <self:AForExpr> */
var181 = var183;
RET_LABEL182:(void)0;
}
}
if (unlikely(var181 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 275);
fatal_exit(1);
}
{
var184 = nit___nit__ASTBuilder___make_call(var177, var180, var181, ((val*)NULL));
}
var_item = var184;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var187 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var187 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var185 = var187;
RET_LABEL186:(void)0;
}
}
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var190 = self->attrs[COLOR_nit__scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var188 = var190;
RET_LABEL189:(void)0;
}
}
if (var188 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 276);
fatal_exit(1);
} else {
var191 = standard___standard__SequenceRead___Collection__first(var188);
}
{
var192 = nit___nit__ASTBuilder___make_var_assign(var185, var191, var_item);
}
{
nit__astbuilder___ADoExpr___AExpr__add(var_ndo163, var192); /* Direct call astbuilder#ADoExpr#add on <var_ndo163:ADoExpr>*/
}
} else {
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var195 = self->attrs[COLOR_nit__scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var193 = var195;
RET_LABEL194:(void)0;
}
}
if (var193 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 277);
fatal_exit(1);
} else {
{ /* Inline array#AbstractArrayRead#length (var193) on <var193:nullable Array[Variable]> */
if (unlikely(var193 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__array, 26);
fatal_exit(1);
}
var198 = var193->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var193:nullable Array[Variable]> */
var196 = var198;
RET_LABEL197:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var196,2l) on <var196:Int> */
var201 = var196 == 2l;
var199 = var201;
goto RET_LABEL200;
RET_LABEL200:(void)0;
}
}
if (var199){
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var204 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var204 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var202 = var204;
RET_LABEL203:(void)0;
}
}
{
var205 = nit__astbuilder___AExpr___make_var_read(var_iter);
}
{
{ /* Inline typing#AForExpr#method_key (self) on <self:AForExpr> */
var208 = self->attrs[COLOR_nit__typing__AForExpr___method_key].val; /* _method_key on <self:AForExpr> */
var206 = var208;
RET_LABEL207:(void)0;
}
}
if (unlikely(var206 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 278);
fatal_exit(1);
}
{
var209 = nit___nit__ASTBuilder___make_call(var202, var205, var206, ((val*)NULL));
}
var_key = var209;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var212 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var212 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var210 = var212;
RET_LABEL211:(void)0;
}
}
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var215 = self->attrs[COLOR_nit__scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var213 = var215;
RET_LABEL214:(void)0;
}
}
if (var213 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 279);
fatal_exit(1);
} else {
var216 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var213, 0l);
}
{
var217 = nit___nit__ASTBuilder___make_var_assign(var210, var216, var_key);
}
{
nit__astbuilder___ADoExpr___AExpr__add(var_ndo163, var217); /* Direct call astbuilder#ADoExpr#add on <var_ndo163:ADoExpr>*/
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var220 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var220 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var218 = var220;
RET_LABEL219:(void)0;
}
}
{
var221 = nit__astbuilder___AExpr___make_var_read(var_iter);
}
{
{ /* Inline typing#AForExpr#method_item (self) on <self:AForExpr> */
var224 = self->attrs[COLOR_nit__typing__AForExpr___method_item].val; /* _method_item on <self:AForExpr> */
var222 = var224;
RET_LABEL223:(void)0;
}
}
if (unlikely(var222 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 280);
fatal_exit(1);
}
{
var225 = nit___nit__ASTBuilder___make_call(var218, var221, var222, ((val*)NULL));
}
var_item226 = var225;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var229 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var229 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var227 = var229;
RET_LABEL228:(void)0;
}
}
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var232 = self->attrs[COLOR_nit__scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var230 = var232;
RET_LABEL231:(void)0;
}
}
if (var230 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 281);
fatal_exit(1);
} else {
var233 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var230, 1l);
}
{
var234 = nit___nit__ASTBuilder___make_var_assign(var227, var233, var_item226);
}
{
nit__astbuilder___ADoExpr___AExpr__add(var_ndo163, var234); /* Direct call astbuilder#ADoExpr#add on <var_ndo163:ADoExpr>*/
}
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 283);
fatal_exit(1);
}
}
{
{ /* Inline parser_nodes#AForExpr#n_block (self) on <self:AForExpr> */
var237 = self->attrs[COLOR_nit__parser_nodes__AForExpr___n_block].val; /* _n_block on <self:AForExpr> */
var235 = var237;
RET_LABEL236:(void)0;
}
}
if (unlikely(var235 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 286);
fatal_exit(1);
}
{
nit__astbuilder___ADoExpr___AExpr__add(var_ndo163, var235); /* Direct call astbuilder#ADoExpr#add on <var_ndo163:ADoExpr>*/
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var240 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var240 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var238 = var240;
RET_LABEL239:(void)0;
}
}
{
var241 = nit__astbuilder___AExpr___make_var_read(var_iter);
}
{
{ /* Inline typing#AForExpr#method_next (self) on <self:AForExpr> */
var244 = self->attrs[COLOR_nit__typing__AForExpr___method_next].val; /* _method_next on <self:AForExpr> */
var242 = var244;
RET_LABEL243:(void)0;
}
}
if (unlikely(var242 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 288);
fatal_exit(1);
}
{
var245 = nit___nit__ASTBuilder___make_call(var238, var241, var242, ((val*)NULL));
}
if (var_nthen158 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 288);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var_nthen158->class->vft[COLOR_nit__astbuilder__AExpr__add]))(var_nthen158, var245); /* add on <var_nthen158:nullable AExpr>*/
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var248 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var248 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var246 = var248;
RET_LABEL247:(void)0;
}
}
{
var249 = nit___nit__ASTBuilder___make_break(var246, var_escapemark);
}
var_nbreak250 = var249;
{
{ /* Inline parser_nodes#AIfExpr#n_else (var_nif154) on <var_nif154:AIfExpr> */
var253 = var_nif154->attrs[COLOR_nit__parser_nodes__AIfExpr___n_else].val; /* _n_else on <var_nif154:AIfExpr> */
var251 = var253;
RET_LABEL252:(void)0;
}
}
if (var251 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 291);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var251->class->vft[COLOR_nit__astbuilder__AExpr__add]))(var251, var_nbreak250); /* add on <var251:nullable AExpr>*/
}
{
{ /* Inline typing#AForExpr#method_finish (self) on <self:AForExpr> */
var256 = self->attrs[COLOR_nit__typing__AForExpr___method_finish].val; /* _method_finish on <self:AForExpr> */
var254 = var256;
RET_LABEL255:(void)0;
}
}
var_method_finish = var254;
if (var_method_finish == NULL) {
var257 = 0; /* is null */
} else {
var257 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_method_finish,((val*)NULL)) on <var_method_finish:nullable CallSite> */
var_other = ((val*)NULL);
{
var260 = ((short int(*)(val* self, val* p0))(var_method_finish->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_method_finish, var_other); /* == on <var_method_finish:nullable CallSite(CallSite)>*/
}
var261 = !var260;
var258 = var261;
goto RET_LABEL259;
RET_LABEL259:(void)0;
}
var257 = var258;
}
if (var257){
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var264 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var264 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var262 = var264;
RET_LABEL263:(void)0;
}
}
{
var265 = nit__astbuilder___AExpr___make_var_read(var_iter);
}
{
var266 = nit___nit__ASTBuilder___make_call(var262, var265, var_method_finish, ((val*)NULL));
}
{
nit__astbuilder___ABlockExpr___AExpr__add(var_nblock, var266); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
} else {
}
{
nit__transform___AExpr___nit__parser_nodes__ANode__replace_with(self, var_nblock); /* Direct call transform#AExpr#replace_with on <self:AForExpr>*/
}
RET_LABEL:;
}
/* method transform#AWithExpr#accept_transform_visitor for (self: AWithExpr, TransformVisitor) */
void nit__transform___AWithExpr___ANode__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
val* var /* : nullable EscapeMark */;
val* var2 /* : nullable EscapeMark */;
val* var_escapemark /* var escapemark: nullable EscapeMark */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : ASTBuilder */;
val* var10 /* : ASTBuilder */;
val* var11 /* : ABlockExpr */;
val* var_nblock /* var nblock: ABlockExpr */;
val* var12 /* : AExpr */;
val* var14 /* : AExpr */;
val* var_nexpr /* var nexpr: AExpr */;
val* var15 /* : ASTBuilder */;
val* var17 /* : ASTBuilder */;
val* var18 /* : ADoExpr */;
val* var_ndo /* var ndo: ADoExpr */;
val* var20 /* : ASTBuilder */;
val* var22 /* : ASTBuilder */;
val* var23 /* : AVarExpr */;
val* var24 /* : nullable CallSite */;
val* var26 /* : nullable CallSite */;
val* var27 /* : ACallExpr */;
val* var_start /* var start: ACallExpr */;
val* var28 /* : nullable AExpr */;
val* var30 /* : nullable AExpr */;
val* var31 /* : ASTBuilder */;
val* var33 /* : ASTBuilder */;
val* var34 /* : AVarExpr */;
val* var35 /* : nullable CallSite */;
val* var37 /* : nullable CallSite */;
val* var38 /* : ACallExpr */;
var_v = p0;
{
{ /* Inline scope#AWithExpr#break_mark (self) on <self:AWithExpr> */
var2 = self->attrs[COLOR_nit__scope__AWithExpr___break_mark].val; /* _break_mark on <self:AWithExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_escapemark = var;
if (var_escapemark == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_escapemark,((val*)NULL)) on <var_escapemark:nullable EscapeMark> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_escapemark->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_escapemark, var_other); /* == on <var_escapemark:nullable EscapeMark(EscapeMark)>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 328);
fatal_exit(1);
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var10 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nit___nit__ASTBuilder___make_block(var8);
}
var_nblock = var11;
{
{ /* Inline parser_nodes#AWithExpr#n_expr (self) on <self:AWithExpr> */
var14 = self->attrs[COLOR_nit__parser_nodes__AWithExpr___n_expr].val; /* _n_expr on <self:AWithExpr> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1958);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_nexpr = var12;
{
nit__astbuilder___ABlockExpr___AExpr__add(var_nblock, var_nexpr); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var17 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = nit___nit__ASTBuilder___make_do(var15);
}
var_ndo = var18;
{
{ /* Inline scope#ADoExpr#break_mark= (var_ndo,var_escapemark) on <var_ndo:ADoExpr> */
var_ndo->attrs[COLOR_nit__scope__ADoExpr___break_mark].val = var_escapemark; /* _break_mark on <var_ndo:ADoExpr> */
RET_LABEL19:(void)0;
}
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var22 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = nit__astbuilder___AExpr___make_var_read(var_nexpr);
}
{
{ /* Inline typing#AWithExpr#method_start (self) on <self:AWithExpr> */
var26 = self->attrs[COLOR_nit__typing__AWithExpr___method_start].val; /* _method_start on <self:AWithExpr> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 339);
fatal_exit(1);
}
{
var27 = nit___nit__ASTBuilder___make_call(var20, var23, var24, ((val*)NULL));
}
var_start = var27;
{
nit__astbuilder___ADoExpr___AExpr__add(var_ndo, var_start); /* Direct call astbuilder#ADoExpr#add on <var_ndo:ADoExpr>*/
}
{
{ /* Inline parser_nodes#AWithExpr#n_block (self) on <self:AWithExpr> */
var30 = self->attrs[COLOR_nit__parser_nodes__AWithExpr___n_block].val; /* _n_block on <self:AWithExpr> */
var28 = var30;
RET_LABEL29:(void)0;
}
}
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 343);
fatal_exit(1);
}
{
nit__astbuilder___ADoExpr___AExpr__add(var_ndo, var28); /* Direct call astbuilder#ADoExpr#add on <var_ndo:ADoExpr>*/
}
{
nit__astbuilder___ABlockExpr___AExpr__add(var_nblock, var_ndo); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var33 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
var34 = nit__astbuilder___AExpr___make_var_read(var_nexpr);
}
{
{ /* Inline typing#AWithExpr#method_finish (self) on <self:AWithExpr> */
var37 = self->attrs[COLOR_nit__typing__AWithExpr___method_finish].val; /* _method_finish on <self:AWithExpr> */
var35 = var37;
RET_LABEL36:(void)0;
}
}
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 347);
fatal_exit(1);
}
{
var38 = nit___nit__ASTBuilder___make_call(var31, var34, var35, ((val*)NULL));
}
{
nit__astbuilder___ABlockExpr___AExpr__add(var_nblock, var38); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
{
nit__transform___AExpr___nit__parser_nodes__ANode__replace_with(self, var_nblock); /* Direct call transform#AExpr#replace_with on <self:AWithExpr>*/
}
RET_LABEL:;
}
/* method transform#AArrayExpr#full_transform_visitor for (self: AArrayExpr, TransformVisitor) */
void nit__transform___AArrayExpr___ANode__full_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
val* var /* : ASTBuilder */;
val* var2 /* : ASTBuilder */;
val* var3 /* : ABlockExpr */;
val* var_nblock /* var nblock: ABlockExpr */;
val* var4 /* : ASTBuilder */;
val* var6 /* : ASTBuilder */;
val* var7 /* : nullable CallSite */;
val* var9 /* : nullable CallSite */;
val* var10 /* : Array[AIntExpr] */;
val* var_ /* var : Array[AIntExpr] */;
val* var11 /* : ASTBuilder */;
val* var13 /* : ASTBuilder */;
val* var14 /* : ANodes[AExpr] */;
val* var16 /* : ANodes[AExpr] */;
long var17 /* : Int */;
val* var18 /* : AIntExpr */;
val* var19 /* : ANewExpr */;
val* var_nnew /* var nnew: ANewExpr */;
val* var21 /* : ANodes[AExpr] */;
val* var23 /* : ANodes[AExpr] */;
val* var_24 /* var : ANodes[AExpr] */;
val* var25 /* : Iterator[ANode] */;
val* var_26 /* var : Iterator[AExpr] */;
short int var27 /* : Bool */;
val* var28 /* : nullable Object */;
val* var_nexpr /* var nexpr: AExpr */;
val* var29 /* : AVarExpr */;
val* var_nres /* var nres: AVarExpr */;
var_v = p0;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var2 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit___nit__ASTBuilder___make_block(var);
}
var_nblock = var3;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var6 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline typing#AArrayExpr#with_capacity_callsite (self) on <self:AArrayExpr> */
var9 = self->attrs[COLOR_nit__typing__AArrayExpr___with_capacity_callsite].val; /* _with_capacity_callsite on <self:AArrayExpr> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 366);
fatal_exit(1);
}
var10 = NEW_standard__Array(&type_standard__Array__nit__AIntExpr);
{
standard___standard__Array___with_capacity(var10, 1l); /* Direct call array#Array#with_capacity on <var10:Array[AIntExpr]>*/
}
var_ = var10;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var13 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline parser_nodes#AArrayExpr#n_exprs (self) on <self:AArrayExpr> */
var16 = self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_exprs].val; /* _n_exprs on <self:AArrayExpr> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2456);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = nit___nit__ANodes___standard__abstract_collection__Collection__length(var14);
}
{
var18 = nit___nit__ASTBuilder___make_int(var11, var17);
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var18); /* Direct call array#AbstractArray#push on <var_:Array[AIntExpr]>*/
}
{
var19 = nit___nit__ASTBuilder___make_new(var4, var7, var_);
}
var_nnew = var19;
{
{ /* Inline transform#AArrayExpr#nnew= (self,var_nnew) on <self:AArrayExpr> */
self->attrs[COLOR_nit__transform__AArrayExpr___nnew].val = var_nnew; /* _nnew on <self:AArrayExpr> */
RET_LABEL20:(void)0;
}
}
{
nit__astbuilder___ABlockExpr___AExpr__add(var_nblock, var_nnew); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__transform___AArrayExpr___ANode__full_transform_visitor]))(self, p0); /* full_transform_visitor on <self:AArrayExpr>*/
}
{
{ /* Inline parser_nodes#AArrayExpr#n_exprs (self) on <self:AArrayExpr> */
var23 = self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_exprs].val; /* _n_exprs on <self:AArrayExpr> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2456);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
var_24 = var21;
{
var25 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_24);
}
var_26 = var25;
for(;;) {
{
var27 = ((short int(*)(val* self))((((long)var_26&3)?class_info[((long)var_26&3)]:var_26->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_26); /* is_ok on <var_26:Iterator[AExpr]>*/
}
if (var27){
{
var28 = ((val*(*)(val* self))((((long)var_26&3)?class_info[((long)var_26&3)]:var_26->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_26); /* item on <var_26:Iterator[AExpr]>*/
}
var_nexpr = var28;
{
nit__astbuilder___ABlockExpr___AExpr__add(var_nblock, var_nexpr); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
{
((void(*)(val* self))((((long)var_26&3)?class_info[((long)var_26&3)]:var_26->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_26); /* next on <var_26:Iterator[AExpr]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_26&3)?class_info[((long)var_26&3)]:var_26->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_26); /* finish on <var_26:Iterator[AExpr]>*/
}
{
var29 = nit__astbuilder___AExpr___make_var_read(var_nnew);
}
var_nres = var29;
{
nit__astbuilder___ABlockExpr___AExpr__add(var_nblock, var_nres); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
{
nit__transform___AExpr___nit__parser_nodes__ANode__replace_with(self, var_nblock); /* Direct call transform#AExpr#replace_with on <self:AArrayExpr>*/
}
RET_LABEL:;
}
/* method transform#AArrayExpr#nnew for (self: AArrayExpr): ANewExpr */
val* nit__transform___AArrayExpr___nnew(val* self) {
val* var /* : ANewExpr */;
val* var1 /* : ANewExpr */;
var1 = self->attrs[COLOR_nit__transform__AArrayExpr___nnew].val; /* _nnew on <self:AArrayExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _nnew");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 382);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method transform#AArrayExpr#nnew= for (self: AArrayExpr, ANewExpr) */
void nit__transform___AArrayExpr___nnew_61d(val* self, val* p0) {
self->attrs[COLOR_nit__transform__AArrayExpr___nnew].val = p0; /* _nnew on <self:AArrayExpr> */
RET_LABEL:;
}
/* method transform#ACrangeExpr#accept_transform_visitor for (self: ACrangeExpr, TransformVisitor) */
void nit__transform___ACrangeExpr___ANode__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
val* var /* : nullable ANode */;
val* var2 /* : nullable ANode */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : ASTBuilder */;
val* var6 /* : ASTBuilder */;
val* var7 /* : nullable CallSite */;
val* var9 /* : nullable CallSite */;
val* var10 /* : Array[AExpr] */;
val* var_ /* var : Array[AExpr] */;
val* var11 /* : AExpr */;
val* var13 /* : AExpr */;
val* var14 /* : AExpr */;
val* var16 /* : AExpr */;
val* var17 /* : ANewExpr */;
var_v = p0;
{
{ /* Inline parser_nodes#ANode#parent (self) on <self:ACrangeExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__ANode___parent].val; /* _parent on <self:ACrangeExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
/* <var:nullable ANode> isa AForExpr */
cltype = type_nit__AForExpr.color;
idtype = type_nit__AForExpr.id;
if(var == NULL) {
var3 = 0;
} else {
if(cltype >= var->type->table_size) {
var3 = 0;
} else {
var3 = var->type->type_table[cltype] == idtype;
}
}
if (var3){
goto RET_LABEL;
} else {
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var6 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline typing#ARangeExpr#init_callsite (self) on <self:ACrangeExpr> */
var9 = self->attrs[COLOR_nit__typing__ARangeExpr___init_callsite].val; /* _init_callsite on <self:ACrangeExpr> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 390);
fatal_exit(1);
}
var10 = NEW_standard__Array(&type_standard__Array__nit__AExpr);
{
standard___standard__Array___with_capacity(var10, 2l); /* Direct call array#Array#with_capacity on <var10:Array[AExpr]>*/
}
var_ = var10;
{
{ /* Inline parser_nodes#ARangeExpr#n_expr (self) on <self:ACrangeExpr> */
var13 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:ACrangeExpr> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2417);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var11); /* Direct call array#AbstractArray#push on <var_:Array[AExpr]>*/
}
{
{ /* Inline parser_nodes#ARangeExpr#n_expr2 (self) on <self:ACrangeExpr> */
var16 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:ACrangeExpr> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2423);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var14); /* Direct call array#AbstractArray#push on <var_:Array[AExpr]>*/
}
{
var17 = nit___nit__ASTBuilder___make_new(var4, var7, var_);
}
{
nit__transform___AExpr___nit__parser_nodes__ANode__replace_with(self, var17); /* Direct call transform#AExpr#replace_with on <self:ACrangeExpr>*/
}
RET_LABEL:;
}
/* method transform#AOrangeExpr#accept_transform_visitor for (self: AOrangeExpr, TransformVisitor) */
void nit__transform___AOrangeExpr___ANode__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
val* var /* : nullable ANode */;
val* var2 /* : nullable ANode */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : ASTBuilder */;
val* var6 /* : ASTBuilder */;
val* var7 /* : nullable CallSite */;
val* var9 /* : nullable CallSite */;
val* var10 /* : Array[AExpr] */;
val* var_ /* var : Array[AExpr] */;
val* var11 /* : AExpr */;
val* var13 /* : AExpr */;
val* var14 /* : AExpr */;
val* var16 /* : AExpr */;
val* var17 /* : ANewExpr */;
var_v = p0;
{
{ /* Inline parser_nodes#ANode#parent (self) on <self:AOrangeExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__ANode___parent].val; /* _parent on <self:AOrangeExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
/* <var:nullable ANode> isa AForExpr */
cltype = type_nit__AForExpr.color;
idtype = type_nit__AForExpr.id;
if(var == NULL) {
var3 = 0;
} else {
if(cltype >= var->type->table_size) {
var3 = 0;
} else {
var3 = var->type->type_table[cltype] == idtype;
}
}
if (var3){
goto RET_LABEL;
} else {
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var6 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline typing#ARangeExpr#init_callsite (self) on <self:AOrangeExpr> */
var9 = self->attrs[COLOR_nit__typing__ARangeExpr___init_callsite].val; /* _init_callsite on <self:AOrangeExpr> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 399);
fatal_exit(1);
}
var10 = NEW_standard__Array(&type_standard__Array__nit__AExpr);
{
standard___standard__Array___with_capacity(var10, 2l); /* Direct call array#Array#with_capacity on <var10:Array[AExpr]>*/
}
var_ = var10;
{
{ /* Inline parser_nodes#ARangeExpr#n_expr (self) on <self:AOrangeExpr> */
var13 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:AOrangeExpr> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2417);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var11); /* Direct call array#AbstractArray#push on <var_:Array[AExpr]>*/
}
{
{ /* Inline parser_nodes#ARangeExpr#n_expr2 (self) on <self:AOrangeExpr> */
var16 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:AOrangeExpr> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2423);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var14); /* Direct call array#AbstractArray#push on <var_:Array[AExpr]>*/
}
{
var17 = nit___nit__ASTBuilder___make_new(var4, var7, var_);
}
{
nit__transform___AExpr___nit__parser_nodes__ANode__replace_with(self, var17); /* Direct call transform#AExpr#replace_with on <self:AOrangeExpr>*/
}
RET_LABEL:;
}
/* method transform#AParExpr#accept_transform_visitor for (self: AParExpr, TransformVisitor) */
void nit__transform___AParExpr___ANode__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
var_v = p0;
{
{ /* Inline parser_nodes#AParExpr#n_expr (self) on <self:AParExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__AParExpr___n_expr].val; /* _n_expr on <self:AParExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2637);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nit__transform___AExpr___nit__parser_nodes__ANode__replace_with(self, var); /* Direct call transform#AExpr#replace_with on <self:AParExpr>*/
}
RET_LABEL:;
}
/* method transform#ASendReassignFormExpr#accept_transform_visitor for (self: ASendReassignFormExpr, TransformVisitor) */
void nit__transform___ASendReassignFormExpr___ANode__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
val* var /* : ASTBuilder */;
val* var2 /* : ASTBuilder */;
val* var3 /* : ABlockExpr */;
val* var_nblock /* var nblock: ABlockExpr */;
val* var4 /* : AExpr */;
val* var6 /* : AExpr */;
val* var7 /* : Array[AExpr] */;
val* var_read_args /* var read_args: Array[AExpr] */;
val* var8 /* : Array[AExpr] */;
val* var_write_args /* var write_args: Array[AExpr] */;
val* var9 /* : Array[AExpr] */;
val* var_ /* var : Array[AExpr] */;
val* var10 /* : ArrayIterator[nullable Object] */;
val* var_11 /* var : ArrayIterator[AExpr] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_a /* var a: AExpr */;
val* var14 /* : AVarExpr */;
val* var15 /* : AVarExpr */;
val* var16 /* : ASTBuilder */;
val* var18 /* : ASTBuilder */;
val* var19 /* : AExpr */;
val* var21 /* : AExpr */;
val* var22 /* : AVarExpr */;
val* var23 /* : nullable CallSite */;
val* var25 /* : nullable CallSite */;
val* var26 /* : ACallExpr */;
val* var_nread /* var nread: ACallExpr */;
val* var27 /* : ASTBuilder */;
val* var29 /* : ASTBuilder */;
val* var30 /* : nullable CallSite */;
val* var32 /* : nullable CallSite */;
val* var33 /* : Array[AExpr] */;
val* var_34 /* var : Array[AExpr] */;
val* var35 /* : AExpr */;
val* var37 /* : AExpr */;
val* var38 /* : ACallExpr */;
val* var_nnewvalue /* var nnewvalue: ACallExpr */;
val* var39 /* : ASTBuilder */;
val* var41 /* : ASTBuilder */;
val* var42 /* : AExpr */;
val* var44 /* : AExpr */;
val* var45 /* : AVarExpr */;
val* var46 /* : nullable CallSite */;
val* var48 /* : nullable CallSite */;
val* var49 /* : ACallExpr */;
val* var_nwrite /* var nwrite: ACallExpr */;
var_v = p0;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var2 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit___nit__ASTBuilder___make_block(var);
}
var_nblock = var3;
{
{ /* Inline parser_nodes#ASendExpr#n_expr (self) on <self:ASendReassignFormExpr> */
var6 = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASendReassignFormExpr> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2025);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
nit__astbuilder___ABlockExpr___AExpr__add(var_nblock, var4); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
var7 = NEW_standard__Array(&type_standard__Array__nit__AExpr);
{
standard___standard__Array___standard__kernel__Object__init(var7); /* Direct call array#Array#init on <var7:Array[AExpr]>*/
}
var_read_args = var7;
var8 = NEW_standard__Array(&type_standard__Array__nit__AExpr);
{
standard___standard__Array___standard__kernel__Object__init(var8); /* Direct call array#Array#init on <var8:Array[AExpr]>*/
}
var_write_args = var8;
{
var9 = nit__typing___ASendExpr___raw_arguments(self);
}
var_ = var9;
{
var10 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_11 = var10;
for(;;) {
{
var12 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_11);
}
if (var12){
{
var13 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_11);
}
var_a = var13;
{
nit__astbuilder___ABlockExpr___AExpr__add(var_nblock, var_a); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
{
var14 = nit__astbuilder___AExpr___make_var_read(var_a);
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_read_args, var14); /* Direct call array#Array#add on <var_read_args:Array[AExpr]>*/
}
{
var15 = nit__astbuilder___AExpr___make_var_read(var_a);
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_write_args, var15); /* Direct call array#Array#add on <var_write_args:Array[AExpr]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_11); /* Direct call array#ArrayIterator#next on <var_11:ArrayIterator[AExpr]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_11); /* Direct call array#ArrayIterator#finish on <var_11:ArrayIterator[AExpr]>*/
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var18 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline parser_nodes#ASendExpr#n_expr (self) on <self:ASendReassignFormExpr> */
var21 = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASendReassignFormExpr> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2025);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = nit__astbuilder___AExpr___make_var_read(var19);
}
{
{ /* Inline typing#ASendExpr#callsite (self) on <self:ASendReassignFormExpr> */
var25 = self->attrs[COLOR_nit__typing__ASendExpr___callsite].val; /* _callsite on <self:ASendReassignFormExpr> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 436);
fatal_exit(1);
}
{
var26 = nit___nit__ASTBuilder___make_call(var16, var22, var23, var_read_args);
}
var_nread = var26;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var29 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline typing#AReassignFormExpr#reassign_callsite (self) on <self:ASendReassignFormExpr> */
var32 = self->attrs[COLOR_nit__typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:ASendReassignFormExpr> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 438);
fatal_exit(1);
}
var33 = NEW_standard__Array(&type_standard__Array__nit__AExpr);
{
standard___standard__Array___with_capacity(var33, 1l); /* Direct call array#Array#with_capacity on <var33:Array[AExpr]>*/
}
var_34 = var33;
{
{ /* Inline parser_nodes#AReassignFormExpr#n_value (self) on <self:ASendReassignFormExpr> */
var37 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:ASendReassignFormExpr> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2006);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_34, var35); /* Direct call array#AbstractArray#push on <var_34:Array[AExpr]>*/
}
{
var38 = nit___nit__ASTBuilder___make_call(var27, var_nread, var30, var_34);
}
var_nnewvalue = var38;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_write_args, var_nnewvalue); /* Direct call array#Array#add on <var_write_args:Array[AExpr]>*/
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var41 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline parser_nodes#ASendExpr#n_expr (self) on <self:ASendReassignFormExpr> */
var44 = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASendReassignFormExpr> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2025);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
var45 = nit__astbuilder___AExpr___make_var_read(var42);
}
{
{ /* Inline typing#ASendReassignFormExpr#write_callsite (self) on <self:ASendReassignFormExpr> */
var48 = self->attrs[COLOR_nit__typing__ASendReassignFormExpr___write_callsite].val; /* _write_callsite on <self:ASendReassignFormExpr> */
var46 = var48;
RET_LABEL47:(void)0;
}
}
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 441);
fatal_exit(1);
}
{
var49 = nit___nit__ASTBuilder___make_call(var39, var45, var46, var_write_args);
}
var_nwrite = var49;
{
nit__astbuilder___ABlockExpr___AExpr__add(var_nblock, var_nwrite); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
{
nit__transform___AExpr___nit__parser_nodes__ANode__replace_with(self, var_nblock); /* Direct call transform#AExpr#replace_with on <self:ASendReassignFormExpr>*/
}
RET_LABEL:;
}
/* method transform#AVarReassignExpr#accept_transform_visitor for (self: AVarReassignExpr, TransformVisitor) */
void nit__transform___AVarReassignExpr___ANode__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
val* var /* : nullable Variable */;
val* var2 /* : nullable Variable */;
val* var_variable /* var variable: Variable */;
val* var3 /* : ASTBuilder */;
val* var5 /* : ASTBuilder */;
val* var6 /* : nullable MType */;
val* var8 /* : nullable MType */;
val* var9 /* : AVarExpr */;
val* var_nread /* var nread: AVarExpr */;
val* var10 /* : ASTBuilder */;
val* var12 /* : ASTBuilder */;
val* var13 /* : nullable CallSite */;
val* var15 /* : nullable CallSite */;
val* var16 /* : Array[AExpr] */;
val* var_ /* var : Array[AExpr] */;
val* var17 /* : AExpr */;
val* var19 /* : AExpr */;
val* var20 /* : ACallExpr */;
val* var_nnewvalue /* var nnewvalue: ACallExpr */;
val* var21 /* : ASTBuilder */;
val* var23 /* : ASTBuilder */;
val* var24 /* : AVarAssignExpr */;
val* var_nwrite /* var nwrite: AVarAssignExpr */;
var_v = p0;
{
{ /* Inline scope#AVarFormExpr#variable (self) on <self:AVarReassignExpr> */
var2 = self->attrs[COLOR_nit__scope__AVarFormExpr___variable].val; /* _variable on <self:AVarReassignExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 452);
fatal_exit(1);
}
var_variable = var;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var5 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline typing#AReassignFormExpr#read_type (self) on <self:AVarReassignExpr> */
var8 = self->attrs[COLOR_nit__typing__AReassignFormExpr___read_type].val; /* _read_type on <self:AVarReassignExpr> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 454);
fatal_exit(1);
}
{
var9 = nit___nit__ASTBuilder___make_var_read(var3, var_variable, var6);
}
var_nread = var9;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var12 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline typing#AReassignFormExpr#reassign_callsite (self) on <self:AVarReassignExpr> */
var15 = self->attrs[COLOR_nit__typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:AVarReassignExpr> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 456);
fatal_exit(1);
}
var16 = NEW_standard__Array(&type_standard__Array__nit__AExpr);
{
standard___standard__Array___with_capacity(var16, 1l); /* Direct call array#Array#with_capacity on <var16:Array[AExpr]>*/
}
var_ = var16;
{
{ /* Inline parser_nodes#AReassignFormExpr#n_value (self) on <self:AVarReassignExpr> */
var19 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AVarReassignExpr> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2006);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var17); /* Direct call array#AbstractArray#push on <var_:Array[AExpr]>*/
}
{
var20 = nit___nit__ASTBuilder___make_call(var10, var_nread, var13, var_);
}
var_nnewvalue = var20;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var23 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = nit___nit__ASTBuilder___make_var_assign(var21, var_variable, var_nnewvalue);
}
var_nwrite = var24;
{
nit__transform___AExpr___nit__parser_nodes__ANode__replace_with(self, var_nwrite); /* Direct call transform#AExpr#replace_with on <self:AVarReassignExpr>*/
}
RET_LABEL:;
}
/* method transform#AAttrReassignExpr#accept_transform_visitor for (self: AAttrReassignExpr, TransformVisitor) */
void nit__transform___AAttrReassignExpr___ANode__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
val* var /* : ASTBuilder */;
val* var2 /* : ASTBuilder */;
val* var3 /* : ABlockExpr */;
val* var_nblock /* var nblock: ABlockExpr */;
val* var4 /* : AExpr */;
val* var6 /* : AExpr */;
val* var7 /* : nullable MAttribute */;
val* var9 /* : nullable MAttribute */;
val* var_attribute /* var attribute: MAttribute */;
val* var10 /* : ASTBuilder */;
val* var12 /* : ASTBuilder */;
val* var13 /* : AExpr */;
val* var15 /* : AExpr */;
val* var16 /* : AVarExpr */;
val* var17 /* : AAttrExpr */;
val* var_nread /* var nread: AAttrExpr */;
val* var18 /* : ASTBuilder */;
val* var20 /* : ASTBuilder */;
val* var21 /* : nullable CallSite */;
val* var23 /* : nullable CallSite */;
val* var24 /* : Array[AExpr] */;
val* var_ /* var : Array[AExpr] */;
val* var25 /* : AExpr */;
val* var27 /* : AExpr */;
val* var28 /* : ACallExpr */;
val* var_nnewvalue /* var nnewvalue: ACallExpr */;
val* var29 /* : ASTBuilder */;
val* var31 /* : ASTBuilder */;
val* var32 /* : AExpr */;
val* var34 /* : AExpr */;
val* var35 /* : AVarExpr */;
val* var36 /* : AAttrAssignExpr */;
val* var_nwrite /* var nwrite: AAttrAssignExpr */;
var_v = p0;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var2 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit___nit__ASTBuilder___make_block(var);
}
var_nblock = var3;
{
{ /* Inline parser_nodes#AAttrFormExpr#n_expr (self) on <self:AAttrReassignExpr> */
var6 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrReassignExpr> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2269);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
nit__astbuilder___ABlockExpr___AExpr__add(var_nblock, var4); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
{
{ /* Inline typing#AAttrFormExpr#mproperty (self) on <self:AAttrReassignExpr> */
var9 = self->attrs[COLOR_nit__typing__AAttrFormExpr___mproperty].val; /* _mproperty on <self:AAttrReassignExpr> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 469);
fatal_exit(1);
}
var_attribute = var7;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var12 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline parser_nodes#AAttrFormExpr#n_expr (self) on <self:AAttrReassignExpr> */
var15 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrReassignExpr> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2269);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = nit__astbuilder___AExpr___make_var_read(var13);
}
{
var17 = nit___nit__ASTBuilder___make_attr_read(var10, var16, var_attribute);
}
var_nread = var17;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var20 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline typing#AReassignFormExpr#reassign_callsite (self) on <self:AAttrReassignExpr> */
var23 = self->attrs[COLOR_nit__typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:AAttrReassignExpr> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 472);
fatal_exit(1);
}
var24 = NEW_standard__Array(&type_standard__Array__nit__AExpr);
{
standard___standard__Array___with_capacity(var24, 1l); /* Direct call array#Array#with_capacity on <var24:Array[AExpr]>*/
}
var_ = var24;
{
{ /* Inline parser_nodes#AReassignFormExpr#n_value (self) on <self:AAttrReassignExpr> */
var27 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AAttrReassignExpr> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2006);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var25); /* Direct call array#AbstractArray#push on <var_:Array[AExpr]>*/
}
{
var28 = nit___nit__ASTBuilder___make_call(var18, var_nread, var21, var_);
}
var_nnewvalue = var28;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var31 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 62);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline parser_nodes#AAttrFormExpr#n_expr (self) on <self:AAttrReassignExpr> */
var34 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrReassignExpr> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2269);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
var35 = nit__astbuilder___AExpr___make_var_read(var32);
}
{
var36 = nit___nit__ASTBuilder___make_attr_assign(var29, var35, var_attribute, var_nnewvalue);
}
var_nwrite = var36;
{
nit__astbuilder___ABlockExpr___AExpr__add(var_nblock, var_nwrite); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
{
nit__transform___AExpr___nit__parser_nodes__ANode__replace_with(self, var_nblock); /* Direct call transform#AExpr#replace_with on <self:AAttrReassignExpr>*/
}
RET_LABEL:;
}
