#include "nit__transform.sep.0.h"
/* method transform#ToolContext#opt_no_shortcut_range for (self: ToolContext): OptionBool */
val* nit__transform___ToolContext___opt_no_shortcut_range(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__transform__ToolContext___opt_no_shortcut_range].val; /* _opt_no_shortcut_range on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_shortcut_range");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 27);
show_backtrace(1);
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
long var7 /* : Int */;
val* var8 /* : NativeArray[Option] */;
{
((void (*)(val* self))(self->class->vft[COLOR_nit__transform___ToolContext___standard__kernel__Object__init]))(self) /* init on <self:ToolContext>*/;
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_nit__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 270);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 27);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var6 = NEW_standard__Array(&type_standard__Array__opts__Option);
{ /* var6 = array_instance Array[Option] */
var7 = 1;
var8 = NEW_standard__NativeArray(var7, &type_standard__NativeArray__opts__Option);
((struct instance_standard__NativeArray*)var8)->values[0] = (val*) var3;
{
((void (*)(val* self, val* p0, long p1))(var6->class->vft[COLOR_standard__array__Array__with_native]))(var6, var8, var7) /* with_native on <var6:Array[Option]>*/;
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
val* var /* : TransformVisitor */;
val* var1 /* : nullable MPropDef */;
val* var3 /* : nullable MPropDef */;
val* var_v /* var v: TransformVisitor */;
val* var4 /* : ASTValidationVisitor */;
val* var_val /* var val: nullable Object */;
var_npropdef = p0;
var = NEW_nit__transform__TransformVisitor(&type_nit__transform__TransformVisitor);
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:APropdef> */
var3 = var_npropdef->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:APropdef> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 44);
show_backtrace(1);
}
{
((void (*)(val* self, val* p0))(var->class->vft[COLOR_nit__transform__TransformVisitor__phase_61d]))(var, self) /* phase= on <var:TransformVisitor>*/;
}
{
((void (*)(val* self, val* p0))(var->class->vft[COLOR_nit__transform__TransformVisitor__mpropdef_61d]))(var, var1) /* mpropdef= on <var:TransformVisitor>*/;
}
{
((void (*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var) /* init on <var:TransformVisitor>*/;
}
var_v = var;
{
nit___nit__Visitor___enter_visit(var_v, var_npropdef); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:TransformVisitor>*/
}
var4 = NEW_nit__ASTValidationVisitor(&type_nit__ASTValidationVisitor);
{
{ /* Inline kernel#Object#init (var4) on <var4:ASTValidationVisitor> */
RET_LABEL5:(void)0;
}
}
var_val = var4;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 55);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 56);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 57);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 58);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
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
((void (*)(val* self))(self->class->vft[COLOR_nit__transform___nit__transform__TransformVisitor___standard__kernel__Object__init]))(self) /* init on <self:TransformVisitor>*/;
}
{
{ /* Inline transform#TransformVisitor#mpropdef (self) on <self:TransformVisitor> */
var2 = self->attrs[COLOR_nit__transform__TransformVisitor___mpropdef].val; /* _mpropdef on <self:TransformVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 58);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 57);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 56);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 58);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
((void (*)(val* self, val* p0))(var14->class->vft[COLOR_nit__astbuilder__ASTBuilder__mmodule_61d]))(var14, var15) /* mmodule= on <var14:ASTBuilder>*/;
}
{
((void (*)(val* self, val* p0))(var14->class->vft[COLOR_nit__astbuilder__ASTBuilder__anchor_61d]))(var14, var24) /* anchor= on <var14:ASTBuilder>*/;
}
{
((void (*)(val* self))(var14->class->vft[COLOR_standard__kernel__Object__init]))(var14) /* init on <var14:ASTBuilder>*/;
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
((void (*)(val* self, val* p0))(var_node->class->vft[COLOR_nit__transform__ANode__full_transform_visitor]))(var_node, self) /* full_transform_visitor on <var_node:ANode>*/;
}
RET_LABEL:;
}
/* method transform#ANode#full_transform_visitor for (self: ANode, TransformVisitor) */
void nit__transform___ANode___full_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
var_v = p0;
{
((void (*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ANode__visit_all]))(self, var_v) /* visit_all on <self:ANode>*/;
}
{
((void (*)(val* self, val* p0))(self->class->vft[COLOR_nit__transform__ANode__accept_transform_visitor]))(self, var_v) /* accept_transform_visitor on <self:ANode>*/;
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
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : AExpr */;
val* var_place /* var place: AExpr */;
val* var10 /* : ANewExpr */;
val* var12 /* : ANewExpr */;
val* var13 /* : AVarExpr */;
val* var_recv /* var recv: AVarExpr */;
val* var14 /* : ASTBuilder */;
val* var16 /* : ASTBuilder */;
val* var17 /* : nullable CallSite */;
val* var19 /* : nullable CallSite */;
val* var20 /* : Array[AExpr] */;
long var21 /* : Int */;
val* var_ /* var : Array[AExpr] */;
val* var22 /* : ACallExpr */;
val* var_nadd /* var nadd: ACallExpr */;
var_v = p0;
{
{ /* Inline typing#AExpr#comprehension (self) on <self:AExpr> */
var2 = self->attrs[COLOR_nit__typing__AExpr___comprehension].val; /* _comprehension on <self:AExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_na = var;
var3 = NULL;
if (var_na == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_na,var3) on <var_na:nullable AArrayExpr> */
var_other = var3;
{
var7 = ((short int (*)(val* self, val* p0))(var_na->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_na, var_other) /* == on <var_na:nullable AArrayExpr(AArrayExpr)>*/;
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
var9 = nit__astbuilder___AExpr___detach_with_placeholder(self);
}
var_place = var9;
{
{ /* Inline transform#AArrayExpr#nnew (var_na) on <var_na:nullable AArrayExpr(AArrayExpr)> */
var12 = var_na->attrs[COLOR_nit__transform__AArrayExpr___nnew].val; /* _nnew on <var_na:nullable AArrayExpr(AArrayExpr)> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _nnew");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 321);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = nit__astbuilder___AExpr___make_var_read(var10);
}
var_recv = var13;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var16 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline typing#AArrayExpr#push_callsite (var_na) on <var_na:nullable AArrayExpr(AArrayExpr)> */
var19 = var_na->attrs[COLOR_nit__typing__AArrayExpr___push_callsite].val; /* _push_callsite on <var_na:nullable AArrayExpr(AArrayExpr)> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 107);
show_backtrace(1);
}
var20 = NEW_standard__Array(&type_standard__Array__nit__AExpr);
var21 = 1;
{
standard___standard__Array___with_capacity(var20, var21); /* Direct call array#Array#with_capacity on <var20:Array[AExpr]>*/
}
var_ = var20;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, self); /* Direct call array#AbstractArray#push on <var_:Array[AExpr]>*/
}
{
var22 = nit___nit__ASTBuilder___make_call(var14, var_recv, var17, var_);
}
var_nadd = var22;
{
nit___nit__Prod___ANode__replace_with(var_place, var_nadd); /* Direct call parser_nodes#Prod#replace_with on <var_place:AExpr>*/
}
} else {
}
{
((void (*)(val* self, val* p0))(self->class->vft[COLOR_nit__transform___AExpr___ANode__full_transform_visitor]))(self, p0) /* full_transform_visitor on <self:AExpr>*/;
}
RET_LABEL:;
}
/* method transform#AVardeclExpr#accept_transform_visitor for (self: AVardeclExpr, TransformVisitor) */
void nit__transform___AVardeclExpr___ANode__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
val* var /* : nullable AExpr */;
val* var2 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : ASTBuilder */;
val* var12 /* : ASTBuilder */;
val* var13 /* : nullable Variable */;
val* var15 /* : nullable Variable */;
val* var16 /* : AVarAssignExpr */;
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
var3 = NULL;
if (var_nexpr == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nexpr,var3) on <var_nexpr:nullable AExpr> */
var_other = var3;
{
{ /* Inline kernel#Object#is_same_instance (var_nexpr,var_other) on <var_nexpr:nullable AExpr(AExpr)> */
var9 = var_nexpr == var_other;
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
} else {
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var12 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline scope#AVardeclExpr#variable (self) on <self:AVardeclExpr> */
var15 = self->attrs[COLOR_nit__scope__AVardeclExpr___variable].val; /* _variable on <self:AVardeclExpr> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 128);
show_backtrace(1);
}
{
var16 = nit___nit__ASTBuilder___make_var_assign(var10, var13, var_nexpr);
}
var_nvar = var16;
{
nit___nit__Prod___ANode__replace_with(self, var_nvar); /* Direct call parser_nodes#Prod#replace_with on <self:AVardeclExpr>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1681);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1687);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (var10 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 141);
show_backtrace(1);
} else {
((void (*)(val* self, val* p0))(var10->class->vft[COLOR_nit__astbuilder__AExpr__add]))(var10, var13) /* add on <var10:nullable AExpr>*/;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1693);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
if (var16 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 142);
show_backtrace(1);
} else {
((void (*)(val* self, val* p0))(var16->class->vft[COLOR_nit__astbuilder__AExpr__add]))(var16, var19) /* add on <var16:nullable AExpr>*/;
}
{
nit___nit__Prod___ANode__replace_with(self, var_nif); /* Direct call parser_nodes#Prod#replace_with on <self:AIfexprExpr>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1823);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1823);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 153);
show_backtrace(1);
} else {
((void (*)(val* self, val* p0))(var10->class->vft[COLOR_nit__astbuilder__AExpr__add]))(var10, var16) /* add on <var10:nullable AExpr>*/;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1826);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
if (var17 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 154);
show_backtrace(1);
} else {
((void (*)(val* self, val* p0))(var17->class->vft[COLOR_nit__astbuilder__AExpr__add]))(var17, var20) /* add on <var17:nullable AExpr>*/;
}
{
nit___nit__Prod___ANode__replace_with(self, var_nif); /* Direct call parser_nodes#Prod#replace_with on <self:AOrExpr>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1823);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1826);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (var10 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 172);
show_backtrace(1);
} else {
((void (*)(val* self, val* p0))(var10->class->vft[COLOR_nit__astbuilder__AExpr__add]))(var10, var13) /* add on <var10:nullable AExpr>*/;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1823);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 173);
show_backtrace(1);
} else {
((void (*)(val* self, val* p0))(var16->class->vft[COLOR_nit__astbuilder__AExpr__add]))(var16, var22) /* add on <var16:nullable AExpr>*/;
}
{
nit___nit__Prod___ANode__replace_with(self, var_nif); /* Direct call parser_nodes#Prod#replace_with on <self:AAndExpr>*/
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
val* var10 /* : null */;
val* var11 /* : AIfExpr */;
val* var_nif /* var nif: AIfExpr */;
val* var12 /* : nullable AExpr */;
val* var14 /* : nullable AExpr */;
val* var_nblock /* var nblock: nullable AExpr */;
val* var15 /* : null */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : nullable AExpr */;
val* var23 /* : nullable AExpr */;
val* var24 /* : nullable EscapeMark */;
val* var26 /* : nullable EscapeMark */;
val* var_escapemark /* var escapemark: EscapeMark */;
val* var27 /* : ASTBuilder */;
val* var29 /* : ASTBuilder */;
val* var30 /* : ABreakExpr */;
val* var_nbreak /* var nbreak: ABreakExpr */;
val* var31 /* : nullable AExpr */;
val* var33 /* : nullable AExpr */;
val* var34 /* : nullable EscapeMark */;
val* var36 /* : nullable EscapeMark */;
val* var38 /* : nullable EscapeMark */;
val* var40 /* : nullable EscapeMark */;
var_v = p0;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var2 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1705);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var10 = NULL;
{
var11 = nit___nit__ASTBuilder___make_if(var4, var7, var10);
}
var_nif = var11;
{
nit__astbuilder___ALoopExpr___AExpr__add(var_nloop, var_nif); /* Direct call astbuilder#ALoopExpr#add on <var_nloop:ALoopExpr>*/
}
{
{ /* Inline parser_nodes#AWhileExpr#n_block (self) on <self:AWhileExpr> */
var14 = self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_block].val; /* _n_block on <self:AWhileExpr> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_nblock = var12;
var15 = NULL;
if (var_nblock == NULL) {
var16 = 0; /* is null */
} else {
var16 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nblock,var15) on <var_nblock:nullable AExpr> */
var_other = var15;
{
var19 = ((short int (*)(val* self, val* p0))(var_nblock->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nblock, var_other) /* == on <var_nblock:nullable AExpr(AExpr)>*/;
}
var20 = !var19;
var17 = var20;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var16 = var17;
}
if (var16){
{
{ /* Inline parser_nodes#AIfExpr#n_then (var_nif) on <var_nif:AIfExpr> */
var23 = var_nif->attrs[COLOR_nit__parser_nodes__AIfExpr___n_then].val; /* _n_then on <var_nif:AIfExpr> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (var21 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 187);
show_backtrace(1);
} else {
((void (*)(val* self, val* p0))(var21->class->vft[COLOR_nit__astbuilder__AExpr__add]))(var21, var_nblock) /* add on <var21:nullable AExpr>*/;
}
} else {
}
{
{ /* Inline scope#AWhileExpr#break_mark (self) on <self:AWhileExpr> */
var26 = self->attrs[COLOR_nit__scope__AWhileExpr___break_mark].val; /* _break_mark on <self:AWhileExpr> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 189);
show_backtrace(1);
}
var_escapemark = var24;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var29 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
var30 = nit___nit__ASTBuilder___make_break(var27, var_escapemark);
}
var_nbreak = var30;
{
{ /* Inline parser_nodes#AIfExpr#n_else (var_nif) on <var_nif:AIfExpr> */
var33 = var_nif->attrs[COLOR_nit__parser_nodes__AIfExpr___n_else].val; /* _n_else on <var_nif:AIfExpr> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
if (var31 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 191);
show_backtrace(1);
} else {
((void (*)(val* self, val* p0))(var31->class->vft[COLOR_nit__astbuilder__AExpr__add]))(var31, var_nbreak) /* add on <var31:nullable AExpr>*/;
}
{
{ /* Inline scope#AWhileExpr#break_mark (self) on <self:AWhileExpr> */
var36 = self->attrs[COLOR_nit__scope__AWhileExpr___break_mark].val; /* _break_mark on <self:AWhileExpr> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline scope#ALoopExpr#break_mark= (var_nloop,var34) on <var_nloop:ALoopExpr> */
var_nloop->attrs[COLOR_nit__scope__ALoopExpr___break_mark].val = var34; /* _break_mark on <var_nloop:ALoopExpr> */
RET_LABEL37:(void)0;
}
}
{
{ /* Inline scope#AWhileExpr#continue_mark (self) on <self:AWhileExpr> */
var40 = self->attrs[COLOR_nit__scope__AWhileExpr___continue_mark].val; /* _continue_mark on <self:AWhileExpr> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline scope#ALoopExpr#continue_mark= (var_nloop,var38) on <var_nloop:ALoopExpr> */
var_nloop->attrs[COLOR_nit__scope__ALoopExpr___continue_mark].val = var38; /* _continue_mark on <var_nloop:ALoopExpr> */
RET_LABEL41:(void)0;
}
}
{
nit___nit__Prod___ANode__replace_with(self, var_nloop); /* Direct call parser_nodes#Prod#replace_with on <self:AWhileExpr>*/
}
RET_LABEL:;
}
/* method transform#AForExpr#accept_transform_visitor for (self: AForExpr, TransformVisitor) */
void nit__transform___AForExpr___ANode__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
val* var /* : nullable EscapeMark */;
val* var2 /* : nullable EscapeMark */;
val* var_escapemark /* var escapemark: nullable EscapeMark */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : ASTBuilder */;
val* var11 /* : ASTBuilder */;
val* var12 /* : ABlockExpr */;
val* var_nblock /* var nblock: ABlockExpr */;
val* var13 /* : AExpr */;
val* var15 /* : AExpr */;
val* var_nexpr /* var nexpr: AExpr */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : nullable Array[Variable] */;
val* var20 /* : nullable Array[Variable] */;
long var21 /* : Int */;
long var23 /* : Int */;
long var24 /* : Int */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
short int var_ /* var : Bool */;
short int var28 /* : Bool */;
int cltype;
int idtype;
short int var_29 /* var : Bool */;
val* var30 /* : TransformPhase */;
val* var32 /* : TransformPhase */;
val* var33 /* : ToolContext */;
val* var35 /* : ToolContext */;
val* var36 /* : OptionBool */;
val* var38 /* : OptionBool */;
val* var39 /* : nullable Object */;
val* var41 /* : nullable Object */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
val* var44 /* : nullable Array[Variable] */;
val* var46 /* : nullable Array[Variable] */;
val* var47 /* : nullable Object */;
val* var_variable /* var variable: Variable */;
val* var48 /* : ASTBuilder */;
val* var50 /* : ASTBuilder */;
val* var51 /* : AExpr */;
val* var53 /* : AExpr */;
val* var54 /* : AVarAssignExpr */;
val* var55 /* : AExpr */;
val* var57 /* : AExpr */;
val* var_to /* var to: AExpr */;
val* var58 /* : ASTBuilder */;
val* var60 /* : ASTBuilder */;
val* var61 /* : ALoopExpr */;
val* var_nloop /* var nloop: ALoopExpr */;
val* var63 /* : ASTBuilder */;
val* var65 /* : ASTBuilder */;
val* var66 /* : ASTBuilder */;
val* var68 /* : ASTBuilder */;
val* var69 /* : nullable MType */;
val* var71 /* : nullable MType */;
val* var72 /* : AVarExpr */;
val* var73 /* : nullable CallSite */;
val* var75 /* : nullable CallSite */;
val* var76 /* : Array[AVarExpr] */;
long var77 /* : Int */;
val* var_78 /* var : Array[AVarExpr] */;
val* var79 /* : AVarExpr */;
val* var80 /* : ACallExpr */;
val* var_is_ok /* var is_ok: ACallExpr */;
val* var81 /* : ASTBuilder */;
val* var83 /* : ASTBuilder */;
val* var84 /* : null */;
val* var85 /* : AIfExpr */;
val* var_nif /* var nif: AIfExpr */;
val* var86 /* : nullable AExpr */;
val* var88 /* : nullable AExpr */;
val* var_nthen /* var nthen: nullable AExpr */;
val* var89 /* : ASTBuilder */;
val* var91 /* : ASTBuilder */;
val* var92 /* : ADoExpr */;
val* var_ndo /* var ndo: ADoExpr */;
val* var93 /* : nullable EscapeMark */;
val* var95 /* : nullable EscapeMark */;
val* var97 /* : nullable AExpr */;
val* var99 /* : nullable AExpr */;
val* var100 /* : ASTBuilder */;
val* var102 /* : ASTBuilder */;
long var103 /* : Int */;
val* var104 /* : AIntExpr */;
val* var_one /* var one: AIntExpr */;
val* var105 /* : ASTBuilder */;
val* var107 /* : ASTBuilder */;
val* var108 /* : ASTBuilder */;
val* var110 /* : ASTBuilder */;
val* var111 /* : nullable MType */;
val* var113 /* : nullable MType */;
val* var114 /* : AVarExpr */;
val* var115 /* : nullable CallSite */;
val* var117 /* : nullable CallSite */;
val* var118 /* : Array[AIntExpr] */;
long var119 /* : Int */;
val* var_120 /* var : Array[AIntExpr] */;
val* var121 /* : ACallExpr */;
val* var_succ /* var succ: ACallExpr */;
val* var122 /* : ASTBuilder */;
val* var124 /* : ASTBuilder */;
val* var125 /* : AVarAssignExpr */;
val* var126 /* : ASTBuilder */;
val* var128 /* : ASTBuilder */;
val* var129 /* : ABreakExpr */;
val* var_nbreak /* var nbreak: ABreakExpr */;
val* var130 /* : nullable AExpr */;
val* var132 /* : nullable AExpr */;
val* var133 /* : ASTBuilder */;
val* var135 /* : ASTBuilder */;
val* var136 /* : AVarExpr */;
val* var137 /* : nullable CallSite */;
val* var139 /* : nullable CallSite */;
val* var140 /* : null */;
val* var141 /* : ACallExpr */;
val* var_iter /* var iter: ACallExpr */;
val* var142 /* : ASTBuilder */;
val* var144 /* : ASTBuilder */;
val* var145 /* : ALoopExpr */;
val* var_nloop146 /* var nloop: ALoopExpr */;
val* var148 /* : ASTBuilder */;
val* var150 /* : ASTBuilder */;
val* var151 /* : AVarExpr */;
val* var152 /* : nullable CallSite */;
val* var154 /* : nullable CallSite */;
val* var155 /* : null */;
val* var156 /* : ACallExpr */;
val* var_is_ok157 /* var is_ok: ACallExpr */;
val* var158 /* : ASTBuilder */;
val* var160 /* : ASTBuilder */;
val* var161 /* : null */;
val* var162 /* : AIfExpr */;
val* var_nif163 /* var nif: AIfExpr */;
val* var164 /* : nullable AExpr */;
val* var166 /* : nullable AExpr */;
val* var_nthen167 /* var nthen: nullable AExpr */;
val* var168 /* : ASTBuilder */;
val* var170 /* : ASTBuilder */;
val* var171 /* : ADoExpr */;
val* var_ndo172 /* var ndo: ADoExpr */;
val* var173 /* : nullable EscapeMark */;
val* var175 /* : nullable EscapeMark */;
val* var177 /* : nullable Array[Variable] */;
val* var179 /* : nullable Array[Variable] */;
long var180 /* : Int */;
long var182 /* : Int */;
long var183 /* : Int */;
short int var184 /* : Bool */;
short int var186 /* : Bool */;
val* var187 /* : ASTBuilder */;
val* var189 /* : ASTBuilder */;
val* var190 /* : AVarExpr */;
val* var191 /* : nullable CallSite */;
val* var193 /* : nullable CallSite */;
val* var194 /* : null */;
val* var195 /* : ACallExpr */;
val* var_item /* var item: ACallExpr */;
val* var196 /* : ASTBuilder */;
val* var198 /* : ASTBuilder */;
val* var199 /* : nullable Array[Variable] */;
val* var201 /* : nullable Array[Variable] */;
val* var202 /* : nullable Object */;
val* var203 /* : AVarAssignExpr */;
val* var204 /* : nullable Array[Variable] */;
val* var206 /* : nullable Array[Variable] */;
long var207 /* : Int */;
long var209 /* : Int */;
long var210 /* : Int */;
short int var211 /* : Bool */;
short int var213 /* : Bool */;
val* var214 /* : ASTBuilder */;
val* var216 /* : ASTBuilder */;
val* var217 /* : AVarExpr */;
val* var218 /* : nullable CallSite */;
val* var220 /* : nullable CallSite */;
val* var221 /* : null */;
val* var222 /* : ACallExpr */;
val* var_key /* var key: ACallExpr */;
val* var223 /* : ASTBuilder */;
val* var225 /* : ASTBuilder */;
val* var226 /* : nullable Array[Variable] */;
val* var228 /* : nullable Array[Variable] */;
long var229 /* : Int */;
val* var230 /* : nullable Object */;
val* var231 /* : AVarAssignExpr */;
val* var232 /* : ASTBuilder */;
val* var234 /* : ASTBuilder */;
val* var235 /* : AVarExpr */;
val* var236 /* : nullable CallSite */;
val* var238 /* : nullable CallSite */;
val* var239 /* : null */;
val* var240 /* : ACallExpr */;
val* var_item241 /* var item: ACallExpr */;
val* var242 /* : ASTBuilder */;
val* var244 /* : ASTBuilder */;
val* var245 /* : nullable Array[Variable] */;
val* var247 /* : nullable Array[Variable] */;
long var248 /* : Int */;
val* var249 /* : nullable Object */;
val* var250 /* : AVarAssignExpr */;
val* var251 /* : nullable AExpr */;
val* var253 /* : nullable AExpr */;
val* var254 /* : ASTBuilder */;
val* var256 /* : ASTBuilder */;
val* var257 /* : AVarExpr */;
val* var258 /* : nullable CallSite */;
val* var260 /* : nullable CallSite */;
val* var261 /* : null */;
val* var262 /* : ACallExpr */;
val* var263 /* : ASTBuilder */;
val* var265 /* : ASTBuilder */;
val* var266 /* : ABreakExpr */;
val* var_nbreak267 /* var nbreak: ABreakExpr */;
val* var268 /* : nullable AExpr */;
val* var270 /* : nullable AExpr */;
val* var271 /* : nullable CallSite */;
val* var273 /* : nullable CallSite */;
val* var_method_finish /* var method_finish: nullable CallSite */;
val* var274 /* : null */;
short int var275 /* : Bool */;
short int var276 /* : Bool */;
short int var278 /* : Bool */;
short int var279 /* : Bool */;
val* var280 /* : ASTBuilder */;
val* var282 /* : ASTBuilder */;
val* var283 /* : AVarExpr */;
val* var284 /* : null */;
val* var285 /* : ACallExpr */;
var_v = p0;
{
{ /* Inline scope#AForExpr#break_mark (self) on <self:AForExpr> */
var2 = self->attrs[COLOR_nit__scope__AForExpr___break_mark].val; /* _break_mark on <self:AForExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_escapemark = var;
var3 = NULL;
if (var_escapemark == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_escapemark,var3) on <var_escapemark:nullable EscapeMark> */
var_other = var3;
{
var7 = ((short int (*)(val* self, val* p0))(var_escapemark->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_escapemark, var_other) /* == on <var_escapemark:nullable EscapeMark(EscapeMark)>*/;
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 204);
show_backtrace(1);
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var11 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = nit___nit__ASTBuilder___make_block(var9);
}
var_nblock = var12;
{
{ /* Inline parser_nodes#AForExpr#n_expr (self) on <self:AForExpr> */
var15 = self->attrs[COLOR_nit__parser_nodes__AForExpr___n_expr].val; /* _n_expr on <self:AForExpr> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1738);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_nexpr = var13;
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var20 = self->attrs[COLOR_nit__scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (var18 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 212);
show_backtrace(1);
} else {
{ /* Inline array#AbstractArrayRead#length (var18) on <var18:nullable Array[Variable]> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__array, 24);
show_backtrace(1);
}
var23 = var18->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var18:nullable Array[Variable]> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
var24 = 1;
{
{ /* Inline kernel#Int#== (var21,var24) on <var21:Int> */
var27 = var21 == var24;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var_ = var25;
if (var25){
/* <var_nexpr:AExpr> isa ARangeExpr */
cltype = type_nit__ARangeExpr.color;
idtype = type_nit__ARangeExpr.id;
if(cltype >= var_nexpr->type->table_size) {
var28 = 0;
} else {
var28 = var_nexpr->type->type_table[cltype] == idtype;
}
var17 = var28;
} else {
var17 = var_;
}
var_29 = var17;
if (var17){
{
{ /* Inline transform#TransformVisitor#phase (var_v) on <var_v:TransformVisitor> */
var32 = var_v->attrs[COLOR_nit__transform__TransformVisitor___phase].val; /* _phase on <var_v:TransformVisitor> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 55);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline phase#Phase#toolcontext (var30) on <var30:TransformPhase> */
var35 = var30->attrs[COLOR_nit__phase__Phase___toolcontext].val; /* _toolcontext on <var30:TransformPhase> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 201);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline transform#ToolContext#opt_no_shortcut_range (var33) on <var33:ToolContext> */
var38 = var33->attrs[COLOR_nit__transform__ToolContext___opt_no_shortcut_range].val; /* _opt_no_shortcut_range on <var33:ToolContext> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_shortcut_range");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 27);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline opts#Option#value (var36) on <var36:OptionBool> */
var41 = var36->attrs[COLOR_opts__Option___value].val; /* _value on <var36:OptionBool> */
var39 = var41;
RET_LABEL40:(void)0;
}
}
var42 = ((struct instance_standard__Bool*)var39)->value; /* autounbox from nullable Object to Bool */;
var43 = !var42;
var16 = var43;
} else {
var16 = var_29;
}
if (var16){
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var46 = self->attrs[COLOR_nit__scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var44 = var46;
RET_LABEL45:(void)0;
}
}
if (var44 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 213);
show_backtrace(1);
} else {
var47 = standard___standard__SequenceRead___Collection__first(var44);
}
var_variable = var47;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var50 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
{ /* Inline parser_nodes#ARangeExpr#n_expr (var_nexpr) on <var_nexpr:AExpr(ARangeExpr)> */
var53 = var_nexpr->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <var_nexpr:AExpr(ARangeExpr)> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2124);
show_backtrace(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
var54 = nit___nit__ASTBuilder___make_var_assign(var48, var_variable, var51);
}
{
nit__astbuilder___ABlockExpr___AExpr__add(var_nblock, var54); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
{
{ /* Inline parser_nodes#ARangeExpr#n_expr2 (var_nexpr) on <var_nexpr:AExpr(ARangeExpr)> */
var57 = var_nexpr->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <var_nexpr:AExpr(ARangeExpr)> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2127);
show_backtrace(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
var_to = var55;
{
nit__astbuilder___ABlockExpr___AExpr__add(var_nblock, var_to); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var60 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
var61 = nit___nit__ASTBuilder___make_loop(var58);
}
var_nloop = var61;
{
{ /* Inline scope#ALoopExpr#break_mark= (var_nloop,var_escapemark) on <var_nloop:ALoopExpr> */
var_nloop->attrs[COLOR_nit__scope__ALoopExpr___break_mark].val = var_escapemark; /* _break_mark on <var_nloop:ALoopExpr> */
RET_LABEL62:(void)0;
}
}
{
nit__astbuilder___ABlockExpr___AExpr__add(var_nblock, var_nloop); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var65 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var68 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:Variable> */
var71 = var_variable->attrs[COLOR_nit__typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var69 = var71;
RET_LABEL70:(void)0;
}
}
if (unlikely(var69 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 222);
show_backtrace(1);
}
{
var72 = nit___nit__ASTBuilder___make_var_read(var66, var_variable, var69);
}
{
{ /* Inline typing#AForExpr#method_lt (self) on <self:AForExpr> */
var75 = self->attrs[COLOR_nit__typing__AForExpr___method_lt].val; /* _method_lt on <self:AForExpr> */
var73 = var75;
RET_LABEL74:(void)0;
}
}
if (unlikely(var73 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 222);
show_backtrace(1);
}
var76 = NEW_standard__Array(&type_standard__Array__nit__AVarExpr);
var77 = 1;
{
standard___standard__Array___with_capacity(var76, var77); /* Direct call array#Array#with_capacity on <var76:Array[AVarExpr]>*/
}
var_78 = var76;
{
var79 = nit__astbuilder___AExpr___make_var_read(var_to);
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_78, var79); /* Direct call array#AbstractArray#push on <var_78:Array[AVarExpr]>*/
}
{
var80 = nit___nit__ASTBuilder___make_call(var63, var72, var73, var_78);
}
var_is_ok = var80;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var83 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var83 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
var84 = NULL;
{
var85 = nit___nit__ASTBuilder___make_if(var81, var_is_ok, var84);
}
var_nif = var85;
{
nit__astbuilder___ALoopExpr___AExpr__add(var_nloop, var_nif); /* Direct call astbuilder#ALoopExpr#add on <var_nloop:ALoopExpr>*/
}
{
{ /* Inline parser_nodes#AIfExpr#n_then (var_nif) on <var_nif:AIfExpr> */
var88 = var_nif->attrs[COLOR_nit__parser_nodes__AIfExpr___n_then].val; /* _n_then on <var_nif:AIfExpr> */
var86 = var88;
RET_LABEL87:(void)0;
}
}
var_nthen = var86;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var91 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var91 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
}
var89 = var91;
RET_LABEL90:(void)0;
}
}
{
var92 = nit___nit__ASTBuilder___make_do(var89);
}
var_ndo = var92;
{
{ /* Inline scope#EscapeMark#continue_mark (var_escapemark) on <var_escapemark:nullable EscapeMark(EscapeMark)> */
var95 = var_escapemark->attrs[COLOR_nit__scope__EscapeMark___continue_mark].val; /* _continue_mark on <var_escapemark:nullable EscapeMark(EscapeMark)> */
var93 = var95;
RET_LABEL94:(void)0;
}
}
{
{ /* Inline scope#ADoExpr#break_mark= (var_ndo,var93) on <var_ndo:ADoExpr> */
var_ndo->attrs[COLOR_nit__scope__ADoExpr___break_mark].val = var93; /* _break_mark on <var_ndo:ADoExpr> */
RET_LABEL96:(void)0;
}
}
if (var_nthen == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 230);
show_backtrace(1);
} else {
((void (*)(val* self, val* p0))(var_nthen->class->vft[COLOR_nit__astbuilder__AExpr__add]))(var_nthen, var_ndo) /* add on <var_nthen:nullable AExpr>*/;
}
{
{ /* Inline parser_nodes#AForExpr#n_block (self) on <self:AForExpr> */
var99 = self->attrs[COLOR_nit__parser_nodes__AForExpr___n_block].val; /* _n_block on <self:AForExpr> */
var97 = var99;
RET_LABEL98:(void)0;
}
}
if (unlikely(var97 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 232);
show_backtrace(1);
}
{
nit__astbuilder___ADoExpr___AExpr__add(var_ndo, var97); /* Direct call astbuilder#ADoExpr#add on <var_ndo:ADoExpr>*/
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var102 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var102 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
}
var100 = var102;
RET_LABEL101:(void)0;
}
}
var103 = 1;
{
var104 = nit___nit__ASTBuilder___make_int(var100, var103);
}
var_one = var104;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var107 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var107 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
}
var105 = var107;
RET_LABEL106:(void)0;
}
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var110 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var110 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
}
var108 = var110;
RET_LABEL109:(void)0;
}
}
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:Variable> */
var113 = var_variable->attrs[COLOR_nit__typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var111 = var113;
RET_LABEL112:(void)0;
}
}
if (unlikely(var111 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 235);
show_backtrace(1);
}
{
var114 = nit___nit__ASTBuilder___make_var_read(var108, var_variable, var111);
}
{
{ /* Inline typing#AForExpr#method_successor (self) on <self:AForExpr> */
var117 = self->attrs[COLOR_nit__typing__AForExpr___method_successor].val; /* _method_successor on <self:AForExpr> */
var115 = var117;
RET_LABEL116:(void)0;
}
}
if (unlikely(var115 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 235);
show_backtrace(1);
}
var118 = NEW_standard__Array(&type_standard__Array__nit__AIntExpr);
var119 = 1;
{
standard___standard__Array___with_capacity(var118, var119); /* Direct call array#Array#with_capacity on <var118:Array[AIntExpr]>*/
}
var_120 = var118;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_120, var_one); /* Direct call array#AbstractArray#push on <var_120:Array[AIntExpr]>*/
}
{
var121 = nit___nit__ASTBuilder___make_call(var105, var114, var115, var_120);
}
var_succ = var121;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var124 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var124 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
}
var122 = var124;
RET_LABEL123:(void)0;
}
}
{
var125 = nit___nit__ASTBuilder___make_var_assign(var122, var_variable, var_succ);
}
if (var_nthen == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 236);
show_backtrace(1);
} else {
((void (*)(val* self, val* p0))(var_nthen->class->vft[COLOR_nit__astbuilder__AExpr__add]))(var_nthen, var125) /* add on <var_nthen:nullable AExpr>*/;
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var128 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var128 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
}
var126 = var128;
RET_LABEL127:(void)0;
}
}
{
var129 = nit___nit__ASTBuilder___make_break(var126, var_escapemark);
}
var_nbreak = var129;
{
{ /* Inline parser_nodes#AIfExpr#n_else (var_nif) on <var_nif:AIfExpr> */
var132 = var_nif->attrs[COLOR_nit__parser_nodes__AIfExpr___n_else].val; /* _n_else on <var_nif:AIfExpr> */
var130 = var132;
RET_LABEL131:(void)0;
}
}
if (var130 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 239);
show_backtrace(1);
} else {
((void (*)(val* self, val* p0))(var130->class->vft[COLOR_nit__astbuilder__AExpr__add]))(var130, var_nbreak) /* add on <var130:nullable AExpr>*/;
}
{
nit___nit__Prod___ANode__replace_with(self, var_nblock); /* Direct call parser_nodes#Prod#replace_with on <self:AForExpr>*/
}
goto RET_LABEL;
} else {
}
{
nit__astbuilder___ABlockExpr___AExpr__add(var_nblock, var_nexpr); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var135 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var135 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
}
var133 = var135;
RET_LABEL134:(void)0;
}
}
{
var136 = nit__astbuilder___AExpr___make_var_read(var_nexpr);
}
{
{ /* Inline typing#AForExpr#method_iterator (self) on <self:AForExpr> */
var139 = self->attrs[COLOR_nit__typing__AForExpr___method_iterator].val; /* _method_iterator on <self:AForExpr> */
var137 = var139;
RET_LABEL138:(void)0;
}
}
if (unlikely(var137 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 247);
show_backtrace(1);
}
var140 = NULL;
{
var141 = nit___nit__ASTBuilder___make_call(var133, var136, var137, var140);
}
var_iter = var141;
{
nit__astbuilder___ABlockExpr___AExpr__add(var_nblock, var_iter); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var144 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var144 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
}
var142 = var144;
RET_LABEL143:(void)0;
}
}
{
var145 = nit___nit__ASTBuilder___make_loop(var142);
}
var_nloop146 = var145;
{
{ /* Inline scope#ALoopExpr#break_mark= (var_nloop146,var_escapemark) on <var_nloop146:ALoopExpr> */
var_nloop146->attrs[COLOR_nit__scope__ALoopExpr___break_mark].val = var_escapemark; /* _break_mark on <var_nloop146:ALoopExpr> */
RET_LABEL147:(void)0;
}
}
{
nit__astbuilder___ABlockExpr___AExpr__add(var_nblock, var_nloop146); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var150 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var150 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
}
var148 = var150;
RET_LABEL149:(void)0;
}
}
{
var151 = nit__astbuilder___AExpr___make_var_read(var_iter);
}
{
{ /* Inline typing#AForExpr#method_is_ok (self) on <self:AForExpr> */
var154 = self->attrs[COLOR_nit__typing__AForExpr___method_is_ok].val; /* _method_is_ok on <self:AForExpr> */
var152 = var154;
RET_LABEL153:(void)0;
}
}
if (unlikely(var152 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 254);
show_backtrace(1);
}
var155 = NULL;
{
var156 = nit___nit__ASTBuilder___make_call(var148, var151, var152, var155);
}
var_is_ok157 = var156;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var160 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var160 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
}
var158 = var160;
RET_LABEL159:(void)0;
}
}
var161 = NULL;
{
var162 = nit___nit__ASTBuilder___make_if(var158, var_is_ok157, var161);
}
var_nif163 = var162;
{
nit__astbuilder___ALoopExpr___AExpr__add(var_nloop146, var_nif163); /* Direct call astbuilder#ALoopExpr#add on <var_nloop146:ALoopExpr>*/
}
{
{ /* Inline parser_nodes#AIfExpr#n_then (var_nif163) on <var_nif163:AIfExpr> */
var166 = var_nif163->attrs[COLOR_nit__parser_nodes__AIfExpr___n_then].val; /* _n_then on <var_nif163:AIfExpr> */
var164 = var166;
RET_LABEL165:(void)0;
}
}
var_nthen167 = var164;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var170 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var170 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
}
var168 = var170;
RET_LABEL169:(void)0;
}
}
{
var171 = nit___nit__ASTBuilder___make_do(var168);
}
var_ndo172 = var171;
{
{ /* Inline scope#EscapeMark#continue_mark (var_escapemark) on <var_escapemark:nullable EscapeMark(EscapeMark)> */
var175 = var_escapemark->attrs[COLOR_nit__scope__EscapeMark___continue_mark].val; /* _continue_mark on <var_escapemark:nullable EscapeMark(EscapeMark)> */
var173 = var175;
RET_LABEL174:(void)0;
}
}
{
{ /* Inline scope#ADoExpr#break_mark= (var_ndo172,var173) on <var_ndo172:ADoExpr> */
var_ndo172->attrs[COLOR_nit__scope__ADoExpr___break_mark].val = var173; /* _break_mark on <var_ndo172:ADoExpr> */
RET_LABEL176:(void)0;
}
}
if (var_nthen167 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 262);
show_backtrace(1);
} else {
((void (*)(val* self, val* p0))(var_nthen167->class->vft[COLOR_nit__astbuilder__AExpr__add]))(var_nthen167, var_ndo172) /* add on <var_nthen167:nullable AExpr>*/;
}
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var179 = self->attrs[COLOR_nit__scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var177 = var179;
RET_LABEL178:(void)0;
}
}
if (var177 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 264);
show_backtrace(1);
} else {
{ /* Inline array#AbstractArrayRead#length (var177) on <var177:nullable Array[Variable]> */
if (unlikely(var177 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__array, 24);
show_backtrace(1);
}
var182 = var177->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var177:nullable Array[Variable]> */
var180 = var182;
RET_LABEL181:(void)0;
}
}
var183 = 1;
{
{ /* Inline kernel#Int#== (var180,var183) on <var180:Int> */
var186 = var180 == var183;
var184 = var186;
goto RET_LABEL185;
RET_LABEL185:(void)0;
}
}
if (var184){
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var189 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var189 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
}
var187 = var189;
RET_LABEL188:(void)0;
}
}
{
var190 = nit__astbuilder___AExpr___make_var_read(var_iter);
}
{
{ /* Inline typing#AForExpr#method_item (self) on <self:AForExpr> */
var193 = self->attrs[COLOR_nit__typing__AForExpr___method_item].val; /* _method_item on <self:AForExpr> */
var191 = var193;
RET_LABEL192:(void)0;
}
}
if (unlikely(var191 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 265);
show_backtrace(1);
}
var194 = NULL;
{
var195 = nit___nit__ASTBuilder___make_call(var187, var190, var191, var194);
}
var_item = var195;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var198 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var198 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
}
var196 = var198;
RET_LABEL197:(void)0;
}
}
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var201 = self->attrs[COLOR_nit__scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var199 = var201;
RET_LABEL200:(void)0;
}
}
if (var199 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 266);
show_backtrace(1);
} else {
var202 = standard___standard__SequenceRead___Collection__first(var199);
}
{
var203 = nit___nit__ASTBuilder___make_var_assign(var196, var202, var_item);
}
{
nit__astbuilder___ADoExpr___AExpr__add(var_ndo172, var203); /* Direct call astbuilder#ADoExpr#add on <var_ndo172:ADoExpr>*/
}
} else {
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var206 = self->attrs[COLOR_nit__scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var204 = var206;
RET_LABEL205:(void)0;
}
}
if (var204 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 267);
show_backtrace(1);
} else {
{ /* Inline array#AbstractArrayRead#length (var204) on <var204:nullable Array[Variable]> */
if (unlikely(var204 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__array, 24);
show_backtrace(1);
}
var209 = var204->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var204:nullable Array[Variable]> */
var207 = var209;
RET_LABEL208:(void)0;
}
}
var210 = 2;
{
{ /* Inline kernel#Int#== (var207,var210) on <var207:Int> */
var213 = var207 == var210;
var211 = var213;
goto RET_LABEL212;
RET_LABEL212:(void)0;
}
}
if (var211){
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var216 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var216 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
}
var214 = var216;
RET_LABEL215:(void)0;
}
}
{
var217 = nit__astbuilder___AExpr___make_var_read(var_iter);
}
{
{ /* Inline typing#AForExpr#method_key (self) on <self:AForExpr> */
var220 = self->attrs[COLOR_nit__typing__AForExpr___method_key].val; /* _method_key on <self:AForExpr> */
var218 = var220;
RET_LABEL219:(void)0;
}
}
if (unlikely(var218 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 268);
show_backtrace(1);
}
var221 = NULL;
{
var222 = nit___nit__ASTBuilder___make_call(var214, var217, var218, var221);
}
var_key = var222;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var225 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var225 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
}
var223 = var225;
RET_LABEL224:(void)0;
}
}
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var228 = self->attrs[COLOR_nit__scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var226 = var228;
RET_LABEL227:(void)0;
}
}
var229 = 0;
if (var226 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 269);
show_backtrace(1);
} else {
var230 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var226, var229);
}
{
var231 = nit___nit__ASTBuilder___make_var_assign(var223, var230, var_key);
}
{
nit__astbuilder___ADoExpr___AExpr__add(var_ndo172, var231); /* Direct call astbuilder#ADoExpr#add on <var_ndo172:ADoExpr>*/
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var234 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var234 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
}
var232 = var234;
RET_LABEL233:(void)0;
}
}
{
var235 = nit__astbuilder___AExpr___make_var_read(var_iter);
}
{
{ /* Inline typing#AForExpr#method_item (self) on <self:AForExpr> */
var238 = self->attrs[COLOR_nit__typing__AForExpr___method_item].val; /* _method_item on <self:AForExpr> */
var236 = var238;
RET_LABEL237:(void)0;
}
}
if (unlikely(var236 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 270);
show_backtrace(1);
}
var239 = NULL;
{
var240 = nit___nit__ASTBuilder___make_call(var232, var235, var236, var239);
}
var_item241 = var240;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var244 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var244 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
}
var242 = var244;
RET_LABEL243:(void)0;
}
}
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var247 = self->attrs[COLOR_nit__scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var245 = var247;
RET_LABEL246:(void)0;
}
}
var248 = 1;
if (var245 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 271);
show_backtrace(1);
} else {
var249 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var245, var248);
}
{
var250 = nit___nit__ASTBuilder___make_var_assign(var242, var249, var_item241);
}
{
nit__astbuilder___ADoExpr___AExpr__add(var_ndo172, var250); /* Direct call astbuilder#ADoExpr#add on <var_ndo172:ADoExpr>*/
}
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 273);
show_backtrace(1);
}
}
{
{ /* Inline parser_nodes#AForExpr#n_block (self) on <self:AForExpr> */
var253 = self->attrs[COLOR_nit__parser_nodes__AForExpr___n_block].val; /* _n_block on <self:AForExpr> */
var251 = var253;
RET_LABEL252:(void)0;
}
}
if (unlikely(var251 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 276);
show_backtrace(1);
}
{
nit__astbuilder___ADoExpr___AExpr__add(var_ndo172, var251); /* Direct call astbuilder#ADoExpr#add on <var_ndo172:ADoExpr>*/
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var256 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var256 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
}
var254 = var256;
RET_LABEL255:(void)0;
}
}
{
var257 = nit__astbuilder___AExpr___make_var_read(var_iter);
}
{
{ /* Inline typing#AForExpr#method_next (self) on <self:AForExpr> */
var260 = self->attrs[COLOR_nit__typing__AForExpr___method_next].val; /* _method_next on <self:AForExpr> */
var258 = var260;
RET_LABEL259:(void)0;
}
}
if (unlikely(var258 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 278);
show_backtrace(1);
}
var261 = NULL;
{
var262 = nit___nit__ASTBuilder___make_call(var254, var257, var258, var261);
}
if (var_nthen167 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 278);
show_backtrace(1);
} else {
((void (*)(val* self, val* p0))(var_nthen167->class->vft[COLOR_nit__astbuilder__AExpr__add]))(var_nthen167, var262) /* add on <var_nthen167:nullable AExpr>*/;
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var265 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var265 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
}
var263 = var265;
RET_LABEL264:(void)0;
}
}
{
var266 = nit___nit__ASTBuilder___make_break(var263, var_escapemark);
}
var_nbreak267 = var266;
{
{ /* Inline parser_nodes#AIfExpr#n_else (var_nif163) on <var_nif163:AIfExpr> */
var270 = var_nif163->attrs[COLOR_nit__parser_nodes__AIfExpr___n_else].val; /* _n_else on <var_nif163:AIfExpr> */
var268 = var270;
RET_LABEL269:(void)0;
}
}
if (var268 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 281);
show_backtrace(1);
} else {
((void (*)(val* self, val* p0))(var268->class->vft[COLOR_nit__astbuilder__AExpr__add]))(var268, var_nbreak267) /* add on <var268:nullable AExpr>*/;
}
{
{ /* Inline typing#AForExpr#method_finish (self) on <self:AForExpr> */
var273 = self->attrs[COLOR_nit__typing__AForExpr___method_finish].val; /* _method_finish on <self:AForExpr> */
var271 = var273;
RET_LABEL272:(void)0;
}
}
var_method_finish = var271;
var274 = NULL;
if (var_method_finish == NULL) {
var275 = 0; /* is null */
} else {
var275 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_method_finish,var274) on <var_method_finish:nullable CallSite> */
var_other = var274;
{
var278 = ((short int (*)(val* self, val* p0))(var_method_finish->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_method_finish, var_other) /* == on <var_method_finish:nullable CallSite(CallSite)>*/;
}
var279 = !var278;
var276 = var279;
goto RET_LABEL277;
RET_LABEL277:(void)0;
}
var275 = var276;
}
if (var275){
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var282 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var282 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
}
var280 = var282;
RET_LABEL281:(void)0;
}
}
{
var283 = nit__astbuilder___AExpr___make_var_read(var_iter);
}
var284 = NULL;
{
var285 = nit___nit__ASTBuilder___make_call(var280, var283, var_method_finish, var284);
}
{
nit__astbuilder___ABlockExpr___AExpr__add(var_nblock, var285); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
} else {
}
{
nit___nit__Prod___ANode__replace_with(self, var_nblock); /* Direct call parser_nodes#Prod#replace_with on <self:AForExpr>*/
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
long var11 /* : Int */;
val* var_ /* var : Array[AIntExpr] */;
val* var12 /* : ASTBuilder */;
val* var14 /* : ASTBuilder */;
val* var15 /* : ANodes[AExpr] */;
val* var17 /* : ANodes[AExpr] */;
long var18 /* : Int */;
val* var19 /* : AIntExpr */;
val* var20 /* : ANewExpr */;
val* var_nnew /* var nnew: ANewExpr */;
val* var22 /* : ANodes[AExpr] */;
val* var24 /* : ANodes[AExpr] */;
val* var_25 /* var : ANodes[AExpr] */;
val* var26 /* : Iterator[ANode] */;
val* var_27 /* var : Iterator[AExpr] */;
short int var28 /* : Bool */;
val* var29 /* : nullable Object */;
val* var_nexpr /* var nexpr: AExpr */;
val* var31 /* : AVarExpr */;
val* var_nres /* var nres: AVarExpr */;
var_v = p0;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var2 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 305);
show_backtrace(1);
}
var10 = NEW_standard__Array(&type_standard__Array__nit__AIntExpr);
var11 = 1;
{
standard___standard__Array___with_capacity(var10, var11); /* Direct call array#Array#with_capacity on <var10:Array[AIntExpr]>*/
}
var_ = var10;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var14 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline parser_nodes#AArrayExpr#n_exprs (self) on <self:AArrayExpr> */
var17 = self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_exprs].val; /* _n_exprs on <self:AArrayExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2160);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = nit___nit__ANodes___standard__abstract_collection__Collection__length(var15);
}
{
var19 = nit___nit__ASTBuilder___make_int(var12, var18);
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var19); /* Direct call array#AbstractArray#push on <var_:Array[AIntExpr]>*/
}
{
var20 = nit___nit__ASTBuilder___make_new(var4, var7, var_);
}
var_nnew = var20;
{
{ /* Inline transform#AArrayExpr#nnew= (self,var_nnew) on <self:AArrayExpr> */
self->attrs[COLOR_nit__transform__AArrayExpr___nnew].val = var_nnew; /* _nnew on <self:AArrayExpr> */
RET_LABEL21:(void)0;
}
}
{
nit__astbuilder___ABlockExpr___AExpr__add(var_nblock, var_nnew); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
{
((void (*)(val* self, val* p0))(self->class->vft[COLOR_nit__transform___AArrayExpr___ANode__full_transform_visitor]))(self, p0) /* full_transform_visitor on <self:AArrayExpr>*/;
}
{
{ /* Inline parser_nodes#AArrayExpr#n_exprs (self) on <self:AArrayExpr> */
var24 = self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_exprs].val; /* _n_exprs on <self:AArrayExpr> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2160);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
var_25 = var22;
{
var26 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_25);
}
var_27 = var26;
for(;;) {
{
var28 = ((short int (*)(val* self))(var_27->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_27) /* is_ok on <var_27:Iterator[AExpr]>*/;
}
if (var28){
{
var29 = ((val* (*)(val* self))(var_27->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_27) /* item on <var_27:Iterator[AExpr]>*/;
}
var_nexpr = var29;
{
nit__astbuilder___ABlockExpr___AExpr__add(var_nblock, var_nexpr); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
{
((void (*)(val* self))(var_27->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_27) /* next on <var_27:Iterator[AExpr]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_27) on <var_27:Iterator[AExpr]> */
RET_LABEL30:(void)0;
}
}
{
var31 = nit__astbuilder___AExpr___make_var_read(var_nnew);
}
var_nres = var31;
{
nit__astbuilder___ABlockExpr___AExpr__add(var_nblock, var_nres); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
{
nit___nit__Prod___ANode__replace_with(self, var_nblock); /* Direct call parser_nodes#Prod#replace_with on <self:AArrayExpr>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 321);
show_backtrace(1);
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
long var11 /* : Int */;
val* var_ /* var : Array[AExpr] */;
val* var12 /* : AExpr */;
val* var14 /* : AExpr */;
val* var15 /* : AExpr */;
val* var17 /* : AExpr */;
val* var18 /* : ANewExpr */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 329);
show_backtrace(1);
}
var10 = NEW_standard__Array(&type_standard__Array__nit__AExpr);
var11 = 2;
{
standard___standard__Array___with_capacity(var10, var11); /* Direct call array#Array#with_capacity on <var10:Array[AExpr]>*/
}
var_ = var10;
{
{ /* Inline parser_nodes#ARangeExpr#n_expr (self) on <self:ACrangeExpr> */
var14 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:ACrangeExpr> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2124);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var12); /* Direct call array#AbstractArray#push on <var_:Array[AExpr]>*/
}
{
{ /* Inline parser_nodes#ARangeExpr#n_expr2 (self) on <self:ACrangeExpr> */
var17 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:ACrangeExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2127);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var15); /* Direct call array#AbstractArray#push on <var_:Array[AExpr]>*/
}
{
var18 = nit___nit__ASTBuilder___make_new(var4, var7, var_);
}
{
nit___nit__Prod___ANode__replace_with(self, var18); /* Direct call parser_nodes#Prod#replace_with on <self:ACrangeExpr>*/
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
long var11 /* : Int */;
val* var_ /* var : Array[AExpr] */;
val* var12 /* : AExpr */;
val* var14 /* : AExpr */;
val* var15 /* : AExpr */;
val* var17 /* : AExpr */;
val* var18 /* : ANewExpr */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 338);
show_backtrace(1);
}
var10 = NEW_standard__Array(&type_standard__Array__nit__AExpr);
var11 = 2;
{
standard___standard__Array___with_capacity(var10, var11); /* Direct call array#Array#with_capacity on <var10:Array[AExpr]>*/
}
var_ = var10;
{
{ /* Inline parser_nodes#ARangeExpr#n_expr (self) on <self:AOrangeExpr> */
var14 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:AOrangeExpr> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2124);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var12); /* Direct call array#AbstractArray#push on <var_:Array[AExpr]>*/
}
{
{ /* Inline parser_nodes#ARangeExpr#n_expr2 (self) on <self:AOrangeExpr> */
var17 = self->attrs[COLOR_nit__parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:AOrangeExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2127);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var15); /* Direct call array#AbstractArray#push on <var_:Array[AExpr]>*/
}
{
var18 = nit___nit__ASTBuilder___make_new(var4, var7, var_);
}
{
nit___nit__Prod___ANode__replace_with(self, var18); /* Direct call parser_nodes#Prod#replace_with on <self:AOrangeExpr>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2288);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nit___nit__Prod___ANode__replace_with(self, var); /* Direct call parser_nodes#Prod#replace_with on <self:AParExpr>*/
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
val* var17 /* : ASTBuilder */;
val* var19 /* : ASTBuilder */;
val* var20 /* : AExpr */;
val* var22 /* : AExpr */;
val* var23 /* : AVarExpr */;
val* var24 /* : nullable CallSite */;
val* var26 /* : nullable CallSite */;
val* var27 /* : ACallExpr */;
val* var_nread /* var nread: ACallExpr */;
val* var28 /* : ASTBuilder */;
val* var30 /* : ASTBuilder */;
val* var31 /* : nullable CallSite */;
val* var33 /* : nullable CallSite */;
val* var34 /* : Array[AExpr] */;
long var35 /* : Int */;
val* var_36 /* var : Array[AExpr] */;
val* var37 /* : AExpr */;
val* var39 /* : AExpr */;
val* var40 /* : ACallExpr */;
val* var_nnewvalue /* var nnewvalue: ACallExpr */;
val* var41 /* : ASTBuilder */;
val* var43 /* : ASTBuilder */;
val* var44 /* : AExpr */;
val* var46 /* : AExpr */;
val* var47 /* : AVarExpr */;
val* var48 /* : nullable CallSite */;
val* var50 /* : nullable CallSite */;
val* var51 /* : ACallExpr */;
val* var_nwrite /* var nwrite: ACallExpr */;
var_v = p0;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var2 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1802);
show_backtrace(1);
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
{ /* Inline abstract_collection#Iterator#finish (var_11) on <var_11:ArrayIterator[AExpr]> */
RET_LABEL16:(void)0;
}
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var19 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline parser_nodes#ASendExpr#n_expr (self) on <self:ASendReassignFormExpr> */
var22 = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASendReassignFormExpr> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1802);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = nit__astbuilder___AExpr___make_var_read(var20);
}
{
{ /* Inline typing#ASendExpr#callsite (self) on <self:ASendReassignFormExpr> */
var26 = self->attrs[COLOR_nit__typing__ASendExpr___callsite].val; /* _callsite on <self:ASendReassignFormExpr> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 375);
show_backtrace(1);
}
{
var27 = nit___nit__ASTBuilder___make_call(var17, var23, var24, var_read_args);
}
var_nread = var27;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var30 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline typing#AReassignFormExpr#reassign_callsite (self) on <self:ASendReassignFormExpr> */
var33 = self->attrs[COLOR_nit__typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:ASendReassignFormExpr> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 377);
show_backtrace(1);
}
var34 = NEW_standard__Array(&type_standard__Array__nit__AExpr);
var35 = 1;
{
standard___standard__Array___with_capacity(var34, var35); /* Direct call array#Array#with_capacity on <var34:Array[AExpr]>*/
}
var_36 = var34;
{
{ /* Inline parser_nodes#AReassignFormExpr#n_value (self) on <self:ASendReassignFormExpr> */
var39 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:ASendReassignFormExpr> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1783);
show_backtrace(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_36, var37); /* Direct call array#AbstractArray#push on <var_36:Array[AExpr]>*/
}
{
var40 = nit___nit__ASTBuilder___make_call(var28, var_nread, var31, var_36);
}
var_nnewvalue = var40;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_write_args, var_nnewvalue); /* Direct call array#Array#add on <var_write_args:Array[AExpr]>*/
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var43 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline parser_nodes#ASendExpr#n_expr (self) on <self:ASendReassignFormExpr> */
var46 = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASendReassignFormExpr> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1802);
show_backtrace(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
var47 = nit__astbuilder___AExpr___make_var_read(var44);
}
{
{ /* Inline typing#ASendReassignFormExpr#write_callsite (self) on <self:ASendReassignFormExpr> */
var50 = self->attrs[COLOR_nit__typing__ASendReassignFormExpr___write_callsite].val; /* _write_callsite on <self:ASendReassignFormExpr> */
var48 = var50;
RET_LABEL49:(void)0;
}
}
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 380);
show_backtrace(1);
}
{
var51 = nit___nit__ASTBuilder___make_call(var41, var47, var48, var_write_args);
}
var_nwrite = var51;
{
nit__astbuilder___ABlockExpr___AExpr__add(var_nblock, var_nwrite); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
{
nit___nit__Prod___ANode__replace_with(self, var_nblock); /* Direct call parser_nodes#Prod#replace_with on <self:ASendReassignFormExpr>*/
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
long var17 /* : Int */;
val* var_ /* var : Array[AExpr] */;
val* var18 /* : AExpr */;
val* var20 /* : AExpr */;
val* var21 /* : ACallExpr */;
val* var_nnewvalue /* var nnewvalue: ACallExpr */;
val* var22 /* : ASTBuilder */;
val* var24 /* : ASTBuilder */;
val* var25 /* : AVarAssignExpr */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 391);
show_backtrace(1);
}
var_variable = var;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var5 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 393);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 395);
show_backtrace(1);
}
var16 = NEW_standard__Array(&type_standard__Array__nit__AExpr);
var17 = 1;
{
standard___standard__Array___with_capacity(var16, var17); /* Direct call array#Array#with_capacity on <var16:Array[AExpr]>*/
}
var_ = var16;
{
{ /* Inline parser_nodes#AReassignFormExpr#n_value (self) on <self:AVarReassignExpr> */
var20 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AVarReassignExpr> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1783);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var18); /* Direct call array#AbstractArray#push on <var_:Array[AExpr]>*/
}
{
var21 = nit___nit__ASTBuilder___make_call(var10, var_nread, var13, var_);
}
var_nnewvalue = var21;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var24 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
var25 = nit___nit__ASTBuilder___make_var_assign(var22, var_variable, var_nnewvalue);
}
var_nwrite = var25;
{
nit___nit__Prod___ANode__replace_with(self, var_nwrite); /* Direct call parser_nodes#Prod#replace_with on <self:AVarReassignExpr>*/
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
long var25 /* : Int */;
val* var_ /* var : Array[AExpr] */;
val* var26 /* : AExpr */;
val* var28 /* : AExpr */;
val* var29 /* : ACallExpr */;
val* var_nnewvalue /* var nnewvalue: ACallExpr */;
val* var30 /* : ASTBuilder */;
val* var32 /* : ASTBuilder */;
val* var33 /* : AExpr */;
val* var35 /* : AExpr */;
val* var36 /* : AVarExpr */;
val* var37 /* : AAttrAssignExpr */;
val* var_nwrite /* var nwrite: AAttrAssignExpr */;
var_v = p0;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var2 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1976);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 408);
show_backtrace(1);
}
var_attribute = var7;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var12 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1976);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 411);
show_backtrace(1);
}
var24 = NEW_standard__Array(&type_standard__Array__nit__AExpr);
var25 = 1;
{
standard___standard__Array___with_capacity(var24, var25); /* Direct call array#Array#with_capacity on <var24:Array[AExpr]>*/
}
var_ = var24;
{
{ /* Inline parser_nodes#AReassignFormExpr#n_value (self) on <self:AAttrReassignExpr> */
var28 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AAttrReassignExpr> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1783);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var26); /* Direct call array#AbstractArray#push on <var_:Array[AExpr]>*/
}
{
var29 = nit___nit__ASTBuilder___make_call(var18, var_nread, var21, var_);
}
var_nnewvalue = var29;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var32 = var_v->attrs[COLOR_nit__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__transform, 59);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline parser_nodes#AAttrFormExpr#n_expr (self) on <self:AAttrReassignExpr> */
var35 = self->attrs[COLOR_nit__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrReassignExpr> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1976);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
var36 = nit__astbuilder___AExpr___make_var_read(var33);
}
{
var37 = nit___nit__ASTBuilder___make_attr_assign(var30, var36, var_attribute, var_nnewvalue);
}
var_nwrite = var37;
{
nit__astbuilder___ABlockExpr___AExpr__add(var_nblock, var_nwrite); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
{
nit___nit__Prod___ANode__replace_with(self, var_nblock); /* Direct call parser_nodes#Prod#replace_with on <self:AAttrReassignExpr>*/
}
RET_LABEL:;
}
