#include "nitc__transform.sep.0.h"
/* method transform$ToolContext$opt_no_shortcut_range for (self: ToolContext): OptionBool */
val* nitc__transform___ToolContext___opt_no_shortcut_range(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__transform__ToolContext___opt_no_shortcut_range].val; /* _opt_no_shortcut_range on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_shortcut_range");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 28);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method transform$ToolContext$init for (self: ToolContext) */
void nitc__transform___ToolContext___core__kernel__Object__init(val* self) {
val* var /* : OptionContext */;
val* var2 /* : OptionContext */;
val* var3 /* : OptionBool */;
val* var5 /* : OptionBool */;
val* var6 /* : Array[Option] */;
val* var7 /* : NativeArray[Option] */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc__transform___ToolContext___core__kernel__Object__init]))(self); /* init on <self:ToolContext>*/
}
{
{ /* Inline toolcontext$ToolContext$option_context (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_nitc__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 357);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline transform$ToolContext$opt_no_shortcut_range (self) on <self:ToolContext> */
var5 = self->attrs[COLOR_nitc__transform__ToolContext___opt_no_shortcut_range].val; /* _opt_no_shortcut_range on <self:ToolContext> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_shortcut_range");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 28);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var6 = NEW_core__Array(&type_core__Array__opts__Option);
{ /* var6 = array_instance Array[Option] */
var7 = NEW_core__NativeArray((int)1l, &type_core__NativeArray__opts__Option);
((struct instance_core__NativeArray*)var7)->values[0] = (val*) var3;
{
((void(*)(val* self, val* p0, long p1))(var6->class->vft[COLOR_core__array__Array__with_native]))(var6, var7, 1l); /* with_native on <var6:Array[Option]>*/
}
}
{
opts___opts__OptionContext___add_option(var, var6); /* Direct call opts$OptionContext$add_option on <var:OptionContext>*/
}
RET_LABEL:;
}
/* method transform$TransformPhase$process_npropdef for (self: TransformPhase, APropdef) */
void nitc__transform___nitc__transform__TransformPhase___nitc__phase__Phase__process_npropdef(val* self, val* p0) {
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
{ /* Inline modelize_property$APropdef$mpropdef (var_npropdef) on <var_npropdef:APropdef> */
var2 = var_npropdef->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:APropdef> */
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
{ /* Inline kernel$Object$== (var_m,((val*)NULL)) on <var_m:nullable MPropDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_m,var_other) on <var_m:nullable MPropDef(MPropDef)> */
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
var9 = NEW_nitc__transform__TransformVisitor(&type_nitc__transform__TransformVisitor);
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_nitc__transform__TransformVisitor__phase_61d]))(var9, self); /* phase= on <var9:TransformVisitor>*/
}
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_nitc__transform__TransformVisitor__mpropdef_61d]))(var9, var_m); /* mpropdef= on <var9:TransformVisitor>*/
}
{
((void(*)(val* self))(var9->class->vft[COLOR_core__kernel__Object__init]))(var9); /* init on <var9:TransformVisitor>*/
}
var_v = var9;
{
nitc___nitc__Visitor___enter_visit(var_v, var_npropdef); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:TransformVisitor>*/
}
var10 = NEW_nitc__ASTValidationVisitor(&type_nitc__ASTValidationVisitor);
{
{ /* Inline kernel$Object$init (var10) on <var10:ASTValidationVisitor> */
RET_LABEL11:(void)0;
}
}
var_val = var10;
{
nitc___nitc__Visitor___enter_visit(var_val, var_npropdef); /* Direct call parser_nodes$Visitor$enter_visit on <var_val:nullable Object(ASTValidationVisitor)>*/
}
RET_LABEL:;
}
/* method transform$TransformVisitor$phase for (self: TransformVisitor): TransformPhase */
val* nitc__transform___nitc__transform__TransformVisitor___phase(val* self) {
val* var /* : TransformPhase */;
val* var1 /* : TransformPhase */;
var1 = self->attrs[COLOR_nitc__transform__TransformVisitor___phase].val; /* _phase on <self:TransformVisitor> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 58);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method transform$TransformVisitor$phase= for (self: TransformVisitor, TransformPhase) */
void nitc__transform___nitc__transform__TransformVisitor___phase_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__transform__TransformVisitor___phase].val = p0; /* _phase on <self:TransformVisitor> */
RET_LABEL:;
}
/* method transform$TransformVisitor$mmodule for (self: TransformVisitor): MModule */
val* nitc__transform___nitc__transform__TransformVisitor___mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_nitc__transform__TransformVisitor___mmodule].val; /* _mmodule on <self:TransformVisitor> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 59);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method transform$TransformVisitor$mmodule= for (self: TransformVisitor, MModule) */
void nitc__transform___nitc__transform__TransformVisitor___mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__transform__TransformVisitor___mmodule].val = p0; /* _mmodule on <self:TransformVisitor> */
RET_LABEL:;
}
/* method transform$TransformVisitor$mclassdef for (self: TransformVisitor): MClassDef */
val* nitc__transform___nitc__transform__TransformVisitor___mclassdef(val* self) {
val* var /* : MClassDef */;
val* var1 /* : MClassDef */;
var1 = self->attrs[COLOR_nitc__transform__TransformVisitor___mclassdef].val; /* _mclassdef on <self:TransformVisitor> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 60);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method transform$TransformVisitor$mclassdef= for (self: TransformVisitor, MClassDef) */
void nitc__transform___nitc__transform__TransformVisitor___mclassdef_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__transform__TransformVisitor___mclassdef].val = p0; /* _mclassdef on <self:TransformVisitor> */
RET_LABEL:;
}
/* method transform$TransformVisitor$mpropdef for (self: TransformVisitor): MPropDef */
val* nitc__transform___nitc__transform__TransformVisitor___mpropdef(val* self) {
val* var /* : MPropDef */;
val* var1 /* : MPropDef */;
var1 = self->attrs[COLOR_nitc__transform__TransformVisitor___mpropdef].val; /* _mpropdef on <self:TransformVisitor> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 61);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method transform$TransformVisitor$mpropdef= for (self: TransformVisitor, MPropDef) */
void nitc__transform___nitc__transform__TransformVisitor___mpropdef_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__transform__TransformVisitor___mpropdef].val = p0; /* _mpropdef on <self:TransformVisitor> */
RET_LABEL:;
}
/* method transform$TransformVisitor$builder for (self: TransformVisitor): ASTBuilder */
val* nitc__transform___nitc__transform__TransformVisitor___builder(val* self) {
val* var /* : ASTBuilder */;
val* var1 /* : ASTBuilder */;
var1 = self->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <self:TransformVisitor> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method transform$TransformVisitor$builder= for (self: TransformVisitor, ASTBuilder) */
void nitc__transform___nitc__transform__TransformVisitor___builder_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__transform__TransformVisitor___builder].val = p0; /* _builder on <self:TransformVisitor> */
RET_LABEL:;
}
/* method transform$TransformVisitor$init for (self: TransformVisitor) */
void nitc__transform___nitc__transform__TransformVisitor___core__kernel__Object__init(val* self) {
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
((void(*)(val* self))(self->class->vft[COLOR_nitc__transform___nitc__transform__TransformVisitor___core__kernel__Object__init]))(self); /* init on <self:TransformVisitor>*/
}
{
{ /* Inline transform$TransformVisitor$mpropdef (self) on <self:TransformVisitor> */
var2 = self->attrs[COLOR_nitc__transform__TransformVisitor___mpropdef].val; /* _mpropdef on <self:TransformVisitor> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 61);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var) on <var:MPropDef> */
var5 = var->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var:MPropDef> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline transform$TransformVisitor$mclassdef= (self,var3) on <self:TransformVisitor> */
self->attrs[COLOR_nitc__transform__TransformVisitor___mclassdef].val = var3; /* _mclassdef on <self:TransformVisitor> */
RET_LABEL6:(void)0;
}
}
{
{ /* Inline transform$TransformVisitor$mclassdef (self) on <self:TransformVisitor> */
var9 = self->attrs[COLOR_nitc__transform__TransformVisitor___mclassdef].val; /* _mclassdef on <self:TransformVisitor> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 60);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var7) on <var7:MClassDef> */
var12 = var7->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var7:MClassDef> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline transform$TransformVisitor$mmodule= (self,var10) on <self:TransformVisitor> */
self->attrs[COLOR_nitc__transform__TransformVisitor___mmodule].val = var10; /* _mmodule on <self:TransformVisitor> */
RET_LABEL13:(void)0;
}
}
var14 = NEW_nitc__ASTBuilder(&type_nitc__ASTBuilder);
{
{ /* Inline transform$TransformVisitor$mmodule (self) on <self:TransformVisitor> */
var17 = self->attrs[COLOR_nitc__transform__TransformVisitor___mmodule].val; /* _mmodule on <self:TransformVisitor> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 59);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline transform$TransformVisitor$mpropdef (self) on <self:TransformVisitor> */
var20 = self->attrs[COLOR_nitc__transform__TransformVisitor___mpropdef].val; /* _mpropdef on <self:TransformVisitor> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 61);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var18) on <var18:MPropDef> */
var23 = var18->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var18:MPropDef> */
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
{
{ /* Inline model$MClassDef$bound_mtype (var21) on <var21:MClassDef> */
var26 = var21->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var21:MClassDef> */
if (unlikely(var26 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var14->class->vft[COLOR_nitc__astbuilder__ASTBuilder__mmodule_61d]))(var14, var15); /* mmodule= on <var14:ASTBuilder>*/
}
{
((void(*)(val* self, val* p0))(var14->class->vft[COLOR_nitc__astbuilder__ASTBuilder__anchor_61d]))(var14, var24); /* anchor= on <var14:ASTBuilder>*/
}
{
((void(*)(val* self))(var14->class->vft[COLOR_core__kernel__Object__init]))(var14); /* init on <var14:ASTBuilder>*/
}
{
{ /* Inline transform$TransformVisitor$builder= (self,var14) on <self:TransformVisitor> */
self->attrs[COLOR_nitc__transform__TransformVisitor___builder].val = var14; /* _builder on <self:TransformVisitor> */
RET_LABEL27:(void)0;
}
}
RET_LABEL:;
}
/* method transform$TransformVisitor$visit for (self: TransformVisitor, ANode) */
void nitc__transform___nitc__transform__TransformVisitor___nitc__parser_nodes__Visitor__visit(val* self, val* p0) {
val* var_node /* var node: ANode */;
short int var /* : Bool */;
int cltype;
int idtype;
var_node = p0;
/* <var_node:ANode> isa AAnnotations */
cltype = type_nitc__AAnnotations.color;
idtype = type_nitc__AAnnotations.id;
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
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nitc__transform__ANode__full_transform_visitor]))(var_node, self); /* full_transform_visitor on <var_node:ANode>*/
}
RET_LABEL:;
}
/* method transform$ANode$full_transform_visitor for (self: ANode, TransformVisitor) */
void nitc__transform___ANode___full_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__parser_nodes__ANode__visit_all]))(self, var_v); /* visit_all on <self:ANode>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__transform__ANode__accept_transform_visitor]))(self, var_v); /* accept_transform_visitor on <self:ANode>*/
}
RET_LABEL:;
}
/* method transform$ANode$accept_transform_visitor for (self: ANode, TransformVisitor) */
void nitc__transform___ANode___accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method transform$AExpr$full_transform_visitor for (self: AExpr, TransformVisitor) */
void nitc__transform___AExpr___ANode__full_transform_visitor(val* self, val* p0) {
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
short int var23 /* : Bool */;
var_v = p0;
{
{ /* Inline typing$AExpr$comprehension (self) on <self:AExpr> */
var2 = self->attrs[COLOR_nitc__typing__AExpr___comprehension].val; /* _comprehension on <self:AExpr> */
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
{ /* Inline kernel$Object$!= (var_na,((val*)NULL)) on <var_na:nullable AArrayExpr> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_na->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_na, var_other); /* == on <var_na:nullable AArrayExpr(AArrayExpr)>*/
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
var8 = nitc__astbuilder___AExpr___detach_with_placeholder(self);
}
var_place = var8;
{
{ /* Inline transform$AArrayExpr$nnew (var_na) on <var_na:nullable AArrayExpr(AArrayExpr)> */
var11 = var_na->attrs[COLOR_nitc__transform__AArrayExpr___nnew].val; /* _nnew on <var_na:nullable AArrayExpr(AArrayExpr)> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _nnew");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 393);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = nitc__astbuilder___AExpr___make_var_read(var9);
}
var_recv = var12;
{
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var15 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline typing$AArrayExpr$push_callsite (var_na) on <var_na:nullable AArrayExpr(AArrayExpr)> */
var18 = var_na->attrs[COLOR_nitc__typing__AArrayExpr___push_callsite].val; /* _push_callsite on <var_na:nullable AArrayExpr(AArrayExpr)> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 104);
fatal_exit(1);
}
var19 = NEW_core__Array(&type_core__Array__nitc__AExpr);
{
core___core__Array___with_capacity(var19, 1l); /* Direct call array$Array$with_capacity on <var19:Array[AExpr]>*/
}
var_ = var19;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, self); /* Direct call array$AbstractArray$push on <var_:Array[AExpr]>*/
}
{
var20 = nitc___nitc__ASTBuilder___make_call(var13, var_recv, var16, var_);
}
var_nadd = var20;
{
nitc__transform___AExpr___nitc__parser_nodes__ANode__replace_with(var_place, var_nadd); /* Direct call transform$AExpr$replace_with on <var_place:AExpr>*/
}
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__parser_nodes__ANode__visit_all]))(self, var_v); /* visit_all on <self:AExpr>*/
}
{
{ /* Inline modelbuilder_base$ANode$is_broken (self) on <self:AExpr> */
var23 = self->attrs[COLOR_nitc__modelbuilder_base__ANode___is_broken].s; /* _is_broken on <self:AExpr> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (var21){
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__transform__ANode__accept_transform_visitor]))(self, var_v); /* accept_transform_visitor on <self:AExpr>*/
}
RET_LABEL:;
}
/* method transform$AExpr$replace_with for (self: AExpr, ANode) */
void nitc__transform___AExpr___nitc__parser_nodes__ANode__replace_with(val* self, val* p0) {
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
long var15 /* : Int */;
long var17 /* : Int */;
var_other = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__transform___AExpr___nitc__parser_nodes__ANode__replace_with]))(self, p0); /* replace_with on <self:AExpr>*/
}
/* <var_other:ANode> isa AExpr */
cltype = type_nitc__AExpr.color;
idtype = type_nitc__AExpr.id;
if(cltype >= var_other->type->table_size) {
var = 0;
} else {
var = var_other->type->type_table[cltype] == idtype;
}
if (var){
{
{ /* Inline typing$AExpr$implicit_cast_to (var_other) on <var_other:ANode(AExpr)> */
var3 = var_other->attrs[COLOR_nitc__typing__AExpr___implicit_cast_to].val; /* _implicit_cast_to on <var_other:ANode(AExpr)> */
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
{ /* Inline kernel$Object$== (var1,((val*)NULL)) on <var1:nullable MType> */
var_other7 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var1,var_other7) on <var1:nullable MType(MType)> */
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
{ /* Inline typing$AExpr$implicit_cast_to (self) on <self:AExpr> */
var13 = self->attrs[COLOR_nitc__typing__AExpr___implicit_cast_to].val; /* _implicit_cast_to on <self:AExpr> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline typing$AExpr$implicit_cast_to= (var_other,var11) on <var_other:ANode(AExpr)> */
var_other->attrs[COLOR_nitc__typing__AExpr___implicit_cast_to].val = var11; /* _implicit_cast_to on <var_other:ANode(AExpr)> */
RET_LABEL14:(void)0;
}
}
} else {
}
{
{ /* Inline typing$AExpr$vararg_decl (self) on <self:AExpr> */
var17 = self->attrs[COLOR_nitc__typing__AExpr___vararg_decl].l; /* _vararg_decl on <self:AExpr> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline typing$AExpr$vararg_decl= (var_other,var15) on <var_other:ANode(AExpr)> */
var_other->attrs[COLOR_nitc__typing__AExpr___vararg_decl].l = var15; /* _vararg_decl on <var_other:ANode(AExpr)> */
RET_LABEL18:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method transform$AVardeclExpr$accept_transform_visitor for (self: AVardeclExpr, TransformVisitor) */
void nitc__transform___AVardeclExpr___ANode__accept_transform_visitor(val* self, val* p0) {
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
{ /* Inline parser_nodes$AVardeclExpr$n_expr (self) on <self:AVardeclExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AVardeclExpr___n_expr].val; /* _n_expr on <self:AVardeclExpr> */
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
{ /* Inline kernel$Object$== (var_nexpr,((val*)NULL)) on <var_nexpr:nullable AExpr> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_nexpr,var_other) on <var_nexpr:nullable AExpr(AExpr)> */
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
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var11 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline scope$AVardeclExpr$variable (self) on <self:AVardeclExpr> */
var14 = self->attrs[COLOR_nitc__scope__AVardeclExpr___variable].val; /* _variable on <self:AVardeclExpr> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 139);
fatal_exit(1);
}
{
var15 = nitc___nitc__ASTBuilder___make_var_assign(var9, var12, var_nexpr);
}
var_nvar = var15;
{
nitc__transform___AExpr___nitc__parser_nodes__ANode__replace_with(self, var_nvar); /* Direct call transform$AExpr$replace_with on <self:AVardeclExpr>*/
}
}
RET_LABEL:;
}
/* method transform$AIfexprExpr$accept_transform_visitor for (self: AIfexprExpr, TransformVisitor) */
void nitc__transform___AIfexprExpr___ANode__accept_transform_visitor(val* self, val* p0) {
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
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var2 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline parser_nodes$AIfexprExpr$n_expr (self) on <self:AIfexprExpr> */
var5 = self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_expr].val; /* _n_expr on <self:AIfexprExpr> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1947);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline typing$AExpr$mtype (self) on <self:AIfexprExpr> */
var8 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:AIfexprExpr> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = nitc___nitc__ASTBuilder___make_if(var, var3, var6);
}
var_nif = var9;
{
{ /* Inline parser_nodes$AIfExpr$n_then (var_nif) on <var_nif:AIfExpr> */
var12 = var_nif->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_then].val; /* _n_then on <var_nif:AIfExpr> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline parser_nodes$AIfexprExpr$n_then (self) on <self:AIfexprExpr> */
var15 = self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_then].val; /* _n_then on <self:AIfexprExpr> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_then");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1953);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (var10 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 152);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_nitc__astbuilder__AExpr__add]))(var10, var13); /* add on <var10:nullable AExpr>*/
}
{
{ /* Inline parser_nodes$AIfExpr$n_else (var_nif) on <var_nif:AIfExpr> */
var18 = var_nif->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_else].val; /* _n_else on <var_nif:AIfExpr> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline parser_nodes$AIfexprExpr$n_else (self) on <self:AIfexprExpr> */
var21 = self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_else].val; /* _n_else on <self:AIfexprExpr> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_else");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1959);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
if (var16 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 153);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var16->class->vft[COLOR_nitc__astbuilder__AExpr__add]))(var16, var19); /* add on <var16:nullable AExpr>*/
}
{
nitc__transform___AExpr___nitc__parser_nodes__ANode__replace_with(self, var_nif); /* Direct call transform$AExpr$replace_with on <self:AIfexprExpr>*/
}
RET_LABEL:;
}
/* method transform$AOrExpr$accept_transform_visitor for (self: AOrExpr, TransformVisitor) */
void nitc__transform___AOrExpr___ANode__accept_transform_visitor(val* self, val* p0) {
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
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var2 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline parser_nodes$ABinBoolExpr$n_expr (self) on <self:AOrExpr> */
var5 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AOrExpr> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2131);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline typing$AExpr$mtype (self) on <self:AOrExpr> */
var8 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:AOrExpr> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = nitc___nitc__ASTBuilder___make_if(var, var3, var6);
}
var_nif = var9;
{
{ /* Inline parser_nodes$AIfExpr$n_then (var_nif) on <var_nif:AIfExpr> */
var12 = var_nif->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_then].val; /* _n_then on <var_nif:AIfExpr> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline parser_nodes$ABinBoolExpr$n_expr (self) on <self:AOrExpr> */
var15 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AOrExpr> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2131);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = nitc__astbuilder___AExpr___make_var_read(var13);
}
if (var10 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 164);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_nitc__astbuilder__AExpr__add]))(var10, var16); /* add on <var10:nullable AExpr>*/
}
{
{ /* Inline parser_nodes$AIfExpr$n_else (var_nif) on <var_nif:AIfExpr> */
var19 = var_nif->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_else].val; /* _n_else on <var_nif:AIfExpr> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline parser_nodes$ABinBoolExpr$n_expr2 (self) on <self:AOrExpr> */
var22 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AOrExpr> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2137);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
if (var17 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 165);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var17->class->vft[COLOR_nitc__astbuilder__AExpr__add]))(var17, var20); /* add on <var17:nullable AExpr>*/
}
{
nitc__transform___AExpr___nitc__parser_nodes__ANode__replace_with(self, var_nif); /* Direct call transform$AExpr$replace_with on <self:AOrExpr>*/
}
RET_LABEL:;
}
/* method transform$AImpliesExpr$accept_transform_visitor for (self: AImpliesExpr, TransformVisitor) */
void nitc__transform___AImpliesExpr___ANode__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method transform$AAndExpr$accept_transform_visitor for (self: AAndExpr, TransformVisitor) */
void nitc__transform___AAndExpr___ANode__accept_transform_visitor(val* self, val* p0) {
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
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var2 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline parser_nodes$ABinBoolExpr$n_expr (self) on <self:AAndExpr> */
var5 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AAndExpr> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2131);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline typing$AExpr$mtype (self) on <self:AAndExpr> */
var8 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:AAndExpr> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = nitc___nitc__ASTBuilder___make_if(var, var3, var6);
}
var_nif = var9;
{
{ /* Inline parser_nodes$AIfExpr$n_then (var_nif) on <var_nif:AIfExpr> */
var12 = var_nif->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_then].val; /* _n_then on <var_nif:AIfExpr> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline parser_nodes$ABinBoolExpr$n_expr2 (self) on <self:AAndExpr> */
var15 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AAndExpr> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2137);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (var10 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 183);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_nitc__astbuilder__AExpr__add]))(var10, var13); /* add on <var10:nullable AExpr>*/
}
{
{ /* Inline parser_nodes$AIfExpr$n_else (var_nif) on <var_nif:AIfExpr> */
var18 = var_nif->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_else].val; /* _n_else on <var_nif:AIfExpr> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline parser_nodes$ABinBoolExpr$n_expr (self) on <self:AAndExpr> */
var21 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AAndExpr> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2131);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = nitc__astbuilder___AExpr___make_var_read(var19);
}
if (var16 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 184);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var16->class->vft[COLOR_nitc__astbuilder__AExpr__add]))(var16, var22); /* add on <var16:nullable AExpr>*/
}
{
nitc__transform___AExpr___nitc__parser_nodes__ANode__replace_with(self, var_nif); /* Direct call transform$AExpr$replace_with on <self:AAndExpr>*/
}
RET_LABEL:;
}
/* method transform$AWhileExpr$accept_transform_visitor for (self: AWhileExpr, TransformVisitor) */
void nitc__transform___AWhileExpr___ANode__accept_transform_visitor(val* self, val* p0) {
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
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var2 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc___nitc__ASTBuilder___make_loop(var);
}
var_nloop = var3;
{
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var6 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline parser_nodes$AWhileExpr$n_expr (self) on <self:AWhileExpr> */
var9 = self->attrs[COLOR_nitc__parser_nodes__AWhileExpr___n_expr].val; /* _n_expr on <self:AWhileExpr> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1971);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = nitc___nitc__ASTBuilder___make_if(var4, var7, ((val*)NULL));
}
var_nif = var10;
{
nitc__astbuilder___ALoopExpr___AExpr__add(var_nloop, var_nif); /* Direct call astbuilder$ALoopExpr$add on <var_nloop:ALoopExpr>*/
}
{
{ /* Inline parser_nodes$AWhileExpr$n_block (self) on <self:AWhileExpr> */
var13 = self->attrs[COLOR_nitc__parser_nodes__AWhileExpr___n_block].val; /* _n_block on <self:AWhileExpr> */
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
{ /* Inline kernel$Object$!= (var_nblock,((val*)NULL)) on <var_nblock:nullable AExpr> */
var_other = ((val*)NULL);
{
var17 = ((short int(*)(val* self, val* p0))(var_nblock->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nblock, var_other); /* == on <var_nblock:nullable AExpr(AExpr)>*/
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
{ /* Inline parser_nodes$AIfExpr$n_then (var_nif) on <var_nif:AIfExpr> */
var21 = var_nif->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_then].val; /* _n_then on <var_nif:AIfExpr> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
if (var19 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 198);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var19->class->vft[COLOR_nitc__astbuilder__AExpr__add]))(var19, var_nblock); /* add on <var19:nullable AExpr>*/
}
} else {
}
{
{ /* Inline scope$AWhileExpr$break_mark (self) on <self:AWhileExpr> */
var24 = self->attrs[COLOR_nitc__scope__AWhileExpr___break_mark].val; /* _break_mark on <self:AWhileExpr> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 200);
fatal_exit(1);
}
var_escapemark = var22;
{
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var27 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var27 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
var28 = nitc___nitc__ASTBuilder___make_break(var25, var_escapemark);
}
var_nbreak = var28;
{
{ /* Inline parser_nodes$AIfExpr$n_else (var_nif) on <var_nif:AIfExpr> */
var31 = var_nif->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_else].val; /* _n_else on <var_nif:AIfExpr> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
if (var29 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 202);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var29->class->vft[COLOR_nitc__astbuilder__AExpr__add]))(var29, var_nbreak); /* add on <var29:nullable AExpr>*/
}
{
{ /* Inline scope$AWhileExpr$break_mark (self) on <self:AWhileExpr> */
var34 = self->attrs[COLOR_nitc__scope__AWhileExpr___break_mark].val; /* _break_mark on <self:AWhileExpr> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline scope$ALoopExpr$break_mark= (var_nloop,var32) on <var_nloop:ALoopExpr> */
var_nloop->attrs[COLOR_nitc__scope__ALoopExpr___break_mark].val = var32; /* _break_mark on <var_nloop:ALoopExpr> */
RET_LABEL35:(void)0;
}
}
{
{ /* Inline scope$AWhileExpr$continue_mark (self) on <self:AWhileExpr> */
var38 = self->attrs[COLOR_nitc__scope__AWhileExpr___continue_mark].val; /* _continue_mark on <self:AWhileExpr> */
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline scope$ALoopExpr$continue_mark= (var_nloop,var36) on <var_nloop:ALoopExpr> */
var_nloop->attrs[COLOR_nitc__scope__ALoopExpr___continue_mark].val = var36; /* _continue_mark on <var_nloop:ALoopExpr> */
RET_LABEL39:(void)0;
}
}
{
nitc__transform___AExpr___nitc__parser_nodes__ANode__replace_with(self, var_nloop); /* Direct call transform$AExpr$replace_with on <self:AWhileExpr>*/
}
RET_LABEL:;
}
/* method transform$AForExpr$accept_transform_visitor for (self: AForExpr, TransformVisitor) */
void nitc__transform___AForExpr___ANode__accept_transform_visitor(val* self, val* p0) {
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
val* var12 /* : ASTBuilder */;
val* var14 /* : ASTBuilder */;
val* var15 /* : ABlockExpr */;
val* var_before /* var before: ABlockExpr */;
val* var16 /* : ASTBuilder */;
val* var18 /* : ASTBuilder */;
val* var19 /* : ALoopExpr */;
val* var_nloop /* var nloop: ALoopExpr */;
val* var21 /* : ASTBuilder */;
val* var23 /* : ASTBuilder */;
val* var24 /* : ABlockExpr */;
val* var_begin /* var begin: ABlockExpr */;
val* var25 /* : ASTBuilder */;
val* var27 /* : ASTBuilder */;
val* var28 /* : ADoExpr */;
val* var_ndo /* var ndo: ADoExpr */;
val* var29 /* : nullable EscapeMark */;
val* var31 /* : nullable EscapeMark */;
val* var33 /* : nullable AExpr */;
val* var35 /* : nullable AExpr */;
val* var36 /* : ANodes[AForGroup] */;
val* var38 /* : ANodes[AForGroup] */;
val* var_ /* var : ANodes[AForGroup] */;
val* var39 /* : Iterator[ANode] */;
val* var_40 /* var : Iterator[AForGroup] */;
short int var41 /* : Bool */;
val* var42 /* : nullable Object */;
val* var_g /* var g: AForGroup */;
var_v = p0;
{
{ /* Inline scope$AForExpr$break_mark (self) on <self:AForExpr> */
var2 = self->attrs[COLOR_nitc__scope__AForExpr___break_mark].val; /* _break_mark on <self:AForExpr> */
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
{ /* Inline kernel$Object$!= (var_escapemark,((val*)NULL)) on <var_escapemark:nullable EscapeMark> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_escapemark->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_escapemark, var_other); /* == on <var_escapemark:nullable EscapeMark(EscapeMark)>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (unlikely(!var3)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 215);
fatal_exit(1);
}
{
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var10 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nitc___nitc__ASTBuilder___make_block(var8);
}
var_nblock = var11;
{
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var14 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = nitc___nitc__ASTBuilder___make_block(var12);
}
var_before = var15;
{
nitc__astbuilder___ABlockExpr___AExpr__add(var_nblock, var_before); /* Direct call astbuilder$ABlockExpr$add on <var_nblock:ABlockExpr>*/
}
{
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var18 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = nitc___nitc__ASTBuilder___make_loop(var16);
}
var_nloop = var19;
{
{ /* Inline scope$ALoopExpr$break_mark= (var_nloop,var_escapemark) on <var_nloop:ALoopExpr> */
var_nloop->attrs[COLOR_nitc__scope__ALoopExpr___break_mark].val = var_escapemark; /* _break_mark on <var_nloop:ALoopExpr> */
RET_LABEL20:(void)0;
}
}
{
nitc__astbuilder___ABlockExpr___AExpr__add(var_nblock, var_nloop); /* Direct call astbuilder$ABlockExpr$add on <var_nblock:ABlockExpr>*/
}
{
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var23 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = nitc___nitc__ASTBuilder___make_block(var21);
}
var_begin = var24;
{
nitc__astbuilder___ALoopExpr___AExpr__add(var_nloop, var_begin); /* Direct call astbuilder$ALoopExpr$add on <var_nloop:ALoopExpr>*/
}
{
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var27 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var27 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
var28 = nitc___nitc__ASTBuilder___make_do(var25);
}
var_ndo = var28;
{
{ /* Inline scope$EscapeMark$continue_mark (var_escapemark) on <var_escapemark:nullable EscapeMark(EscapeMark)> */
var31 = var_escapemark->attrs[COLOR_nitc__scope__EscapeMark___continue_mark].val; /* _continue_mark on <var_escapemark:nullable EscapeMark(EscapeMark)> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline scope$ADoExpr$break_mark= (var_ndo,var29) on <var_ndo:ADoExpr> */
var_ndo->attrs[COLOR_nitc__scope__ADoExpr___break_mark].val = var29; /* _break_mark on <var_ndo:ADoExpr> */
RET_LABEL32:(void)0;
}
}
{
nitc__astbuilder___ALoopExpr___AExpr__add(var_nloop, var_ndo); /* Direct call astbuilder$ALoopExpr$add on <var_nloop:ALoopExpr>*/
}
{
{ /* Inline parser_nodes$AForExpr$n_block (self) on <self:AForExpr> */
var35 = self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_block].val; /* _n_block on <self:AForExpr> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
if (unlikely(var33 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 238);
fatal_exit(1);
}
{
nitc__astbuilder___ADoExpr___AExpr__add(var_ndo, var33); /* Direct call astbuilder$ADoExpr$add on <var_ndo:ADoExpr>*/
}
{
{ /* Inline parser_nodes$AForExpr$n_groups (self) on <self:AForExpr> */
var38 = self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_groups].val; /* _n_groups on <self:AForExpr> */
if (unlikely(var38 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_groups");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2001);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
var_ = var36;
{
var39 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_);
}
var_40 = var39;
for(;;) {
{
var41 = ((short int(*)(val* self))((((long)var_40&3)?class_info[((long)var_40&3)]:var_40->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_40); /* is_ok on <var_40:Iterator[AForGroup]>*/
}
if (var41){
} else {
goto BREAK_label;
}
{
var42 = ((val*(*)(val* self))((((long)var_40&3)?class_info[((long)var_40&3)]:var_40->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_40); /* item on <var_40:Iterator[AForGroup]>*/
}
var_g = var42;
{
nitc__transform___AForGroup___transform_in(var_g, var_v, var_before, var_begin, var_nloop, var_nblock, var_escapemark); /* Direct call transform$AForGroup$transform_in on <var_g:AForGroup>*/
}
{
((void(*)(val* self))((((long)var_40&3)?class_info[((long)var_40&3)]:var_40->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_40); /* next on <var_40:Iterator[AForGroup]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_40&3)?class_info[((long)var_40&3)]:var_40->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_40); /* finish on <var_40:Iterator[AForGroup]>*/
}
{
nitc__transform___AExpr___nitc__parser_nodes__ANode__replace_with(self, var_nblock); /* Direct call transform$AExpr$replace_with on <self:AForExpr>*/
}
RET_LABEL:;
}
/* method transform$AForGroup$transform_in for (self: AForGroup, TransformVisitor, AExpr, AExpr, AExpr, AExpr, EscapeMark) */
void nitc__transform___AForGroup___transform_in(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
val* var_v /* var v: TransformVisitor */;
val* var_before /* var before: AExpr */;
val* var_begin /* var begin: AExpr */;
val* var_next /* var next: AExpr */;
val* var_finish /* var finish: AExpr */;
val* var_escapemark /* var escapemark: EscapeMark */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var_nexpr /* var nexpr: AExpr */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable Array[Variable] */;
val* var7 /* : nullable Array[Variable] */;
long var8 /* : Int */;
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var_ /* var : Bool */;
short int var14 /* : Bool */;
int cltype;
int idtype;
short int var_15 /* var : Bool */;
val* var16 /* : TransformPhase */;
val* var18 /* : TransformPhase */;
val* var19 /* : ToolContext */;
val* var21 /* : ToolContext */;
val* var22 /* : OptionBool */;
val* var24 /* : OptionBool */;
val* var25 /* : nullable Object */;
val* var27 /* : nullable Object */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : nullable Array[Variable] */;
val* var32 /* : nullable Array[Variable] */;
val* var33 /* : nullable Object */;
val* var_variable /* var variable: Variable */;
val* var34 /* : ASTBuilder */;
val* var36 /* : ASTBuilder */;
val* var37 /* : AExpr */;
val* var39 /* : AExpr */;
val* var40 /* : AVarAssignExpr */;
val* var41 /* : AExpr */;
val* var43 /* : AExpr */;
val* var_to /* var to: AExpr */;
val* var44 /* : ASTBuilder */;
val* var46 /* : ASTBuilder */;
val* var47 /* : ASTBuilder */;
val* var49 /* : ASTBuilder */;
val* var50 /* : nullable MType */;
val* var52 /* : nullable MType */;
val* var53 /* : AVarExpr */;
val* var54 /* : nullable CallSite */;
val* var56 /* : nullable CallSite */;
val* var57 /* : Array[AVarExpr] */;
val* var_58 /* var : Array[AVarExpr] */;
val* var59 /* : AVarExpr */;
val* var60 /* : ACallExpr */;
val* var_is_ok /* var is_ok: ACallExpr */;
val* var61 /* : ASTBuilder */;
val* var63 /* : ASTBuilder */;
val* var64 /* : AIfExpr */;
val* var_nif /* var nif: AIfExpr */;
val* var65 /* : nullable AExpr */;
val* var67 /* : nullable AExpr */;
val* var68 /* : ASTBuilder */;
val* var70 /* : ASTBuilder */;
val* var71 /* : ABreakExpr */;
val* var72 /* : ASTBuilder */;
val* var74 /* : ASTBuilder */;
val* var75 /* : AIntegerExpr */;
val* var_one /* var one: AIntegerExpr */;
val* var76 /* : ASTBuilder */;
val* var78 /* : ASTBuilder */;
val* var79 /* : ASTBuilder */;
val* var81 /* : ASTBuilder */;
val* var82 /* : nullable MType */;
val* var84 /* : nullable MType */;
val* var85 /* : AVarExpr */;
val* var86 /* : nullable CallSite */;
val* var88 /* : nullable CallSite */;
val* var89 /* : Array[AIntegerExpr] */;
val* var_90 /* var : Array[AIntegerExpr] */;
val* var91 /* : ACallExpr */;
val* var_succ /* var succ: ACallExpr */;
val* var92 /* : ASTBuilder */;
val* var94 /* : ASTBuilder */;
val* var95 /* : AVarAssignExpr */;
val* var96 /* : ASTBuilder */;
val* var98 /* : ASTBuilder */;
val* var99 /* : AVarExpr */;
val* var100 /* : nullable CallSite */;
val* var102 /* : nullable CallSite */;
val* var103 /* : ACallExpr */;
val* var_iter /* var iter: ACallExpr */;
val* var104 /* : ASTBuilder */;
val* var106 /* : ASTBuilder */;
val* var107 /* : AVarExpr */;
val* var108 /* : nullable CallSite */;
val* var110 /* : nullable CallSite */;
val* var111 /* : ACallExpr */;
val* var_is_ok112 /* var is_ok: ACallExpr */;
val* var113 /* : ASTBuilder */;
val* var115 /* : ASTBuilder */;
val* var116 /* : AIfExpr */;
val* var_nif117 /* var nif: AIfExpr */;
val* var118 /* : nullable AExpr */;
val* var120 /* : nullable AExpr */;
val* var121 /* : ASTBuilder */;
val* var123 /* : ASTBuilder */;
val* var124 /* : ABreakExpr */;
val* var125 /* : nullable Array[Variable] */;
val* var127 /* : nullable Array[Variable] */;
long var128 /* : Int */;
long var130 /* : Int */;
short int var131 /* : Bool */;
short int var133 /* : Bool */;
val* var134 /* : ASTBuilder */;
val* var136 /* : ASTBuilder */;
val* var137 /* : AVarExpr */;
val* var138 /* : nullable CallSite */;
val* var140 /* : nullable CallSite */;
val* var141 /* : ACallExpr */;
val* var_item /* var item: ACallExpr */;
val* var142 /* : ASTBuilder */;
val* var144 /* : ASTBuilder */;
val* var145 /* : nullable Array[Variable] */;
val* var147 /* : nullable Array[Variable] */;
val* var148 /* : nullable Object */;
val* var149 /* : AVarAssignExpr */;
val* var150 /* : nullable Array[Variable] */;
val* var152 /* : nullable Array[Variable] */;
long var153 /* : Int */;
long var155 /* : Int */;
short int var156 /* : Bool */;
short int var158 /* : Bool */;
val* var159 /* : ASTBuilder */;
val* var161 /* : ASTBuilder */;
val* var162 /* : AVarExpr */;
val* var163 /* : nullable CallSite */;
val* var165 /* : nullable CallSite */;
val* var166 /* : ACallExpr */;
val* var_key /* var key: ACallExpr */;
val* var167 /* : ASTBuilder */;
val* var169 /* : ASTBuilder */;
val* var170 /* : nullable Array[Variable] */;
val* var172 /* : nullable Array[Variable] */;
val* var173 /* : nullable Object */;
val* var174 /* : AVarAssignExpr */;
val* var175 /* : ASTBuilder */;
val* var177 /* : ASTBuilder */;
val* var178 /* : AVarExpr */;
val* var179 /* : nullable CallSite */;
val* var181 /* : nullable CallSite */;
val* var182 /* : ACallExpr */;
val* var_item183 /* var item: ACallExpr */;
val* var184 /* : ASTBuilder */;
val* var186 /* : ASTBuilder */;
val* var187 /* : nullable Array[Variable] */;
val* var189 /* : nullable Array[Variable] */;
val* var190 /* : nullable Object */;
val* var191 /* : AVarAssignExpr */;
val* var192 /* : ASTBuilder */;
val* var194 /* : ASTBuilder */;
val* var195 /* : AVarExpr */;
val* var196 /* : nullable CallSite */;
val* var198 /* : nullable CallSite */;
val* var199 /* : ACallExpr */;
val* var200 /* : nullable CallSite */;
val* var202 /* : nullable CallSite */;
val* var_method_finish /* var method_finish: nullable CallSite */;
short int var203 /* : Bool */;
short int var204 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var206 /* : Bool */;
short int var207 /* : Bool */;
val* var208 /* : ASTBuilder */;
val* var210 /* : ASTBuilder */;
val* var211 /* : AVarExpr */;
val* var212 /* : ACallExpr */;
var_v = p0;
var_before = p1;
var_begin = p2;
var_next = p3;
var_finish = p4;
var_escapemark = p5;
{
{ /* Inline parser_nodes$AForGroup$n_expr (self) on <self:AForGroup> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AForGroup___n_expr].val; /* _n_expr on <self:AForGroup> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2024);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_nexpr = var;
{
{ /* Inline scope$AForGroup$variables (self) on <self:AForGroup> */
var7 = self->attrs[COLOR_nitc__scope__AForGroup___variables].val; /* _variables on <self:AForGroup> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (var5 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 256);
fatal_exit(1);
} else {
{ /* Inline array$AbstractArrayRead$length (var5) on <var5:nullable Array[Variable]> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 26);
fatal_exit(1);
}
var10 = var5->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var5:nullable Array[Variable]> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var8,1l) on <var8:Int> */
var13 = var8 == 1l;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var_ = var11;
if (var11){
/* <var_nexpr:AExpr> isa ARangeExpr */
cltype = type_nitc__ARangeExpr.color;
idtype = type_nitc__ARangeExpr.id;
if(cltype >= var_nexpr->type->table_size) {
var14 = 0;
} else {
var14 = var_nexpr->type->type_table[cltype] == idtype;
}
var4 = var14;
} else {
var4 = var_;
}
var_15 = var4;
if (var4){
{
{ /* Inline transform$TransformVisitor$phase (var_v) on <var_v:TransformVisitor> */
var18 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___phase].val; /* _phase on <var_v:TransformVisitor> */
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 58);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline phase$Phase$toolcontext (var16) on <var16:TransformPhase> */
var21 = var16->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <var16:TransformPhase> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 210);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline transform$ToolContext$opt_no_shortcut_range (var19) on <var19:ToolContext> */
var24 = var19->attrs[COLOR_nitc__transform__ToolContext___opt_no_shortcut_range].val; /* _opt_no_shortcut_range on <var19:ToolContext> */
if (unlikely(var24 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_shortcut_range");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 28);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline opts$Option$value (var22) on <var22:OptionBool> */
var27 = var22->attrs[COLOR_opts__Option___value].val; /* _value on <var22:OptionBool> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
var28 = (short int)((long)(var25)>>2);
var29 = !var28;
var3 = var29;
} else {
var3 = var_15;
}
if (var3){
{
{ /* Inline scope$AForGroup$variables (self) on <self:AForGroup> */
var32 = self->attrs[COLOR_nitc__scope__AForGroup___variables].val; /* _variables on <self:AForGroup> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
if (var30 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 258);
fatal_exit(1);
} else {
var33 = core___core__SequenceRead___Collection__first(var30);
}
var_variable = var33;
{
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var36 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var36 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline parser_nodes$ARangeExpr$n_expr (var_nexpr) on <var_nexpr:AExpr(ARangeExpr)> */
var39 = var_nexpr->attrs[COLOR_nitc__parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <var_nexpr:AExpr(ARangeExpr)> */
if (unlikely(var39 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2502);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
var40 = nitc___nitc__ASTBuilder___make_var_assign(var34, var_variable, var37);
}
{
((void(*)(val* self, val* p0))(var_before->class->vft[COLOR_nitc__astbuilder__AExpr__add]))(var_before, var40); /* add on <var_before:AExpr>*/
}
{
{ /* Inline parser_nodes$ARangeExpr$n_expr2 (var_nexpr) on <var_nexpr:AExpr(ARangeExpr)> */
var43 = var_nexpr->attrs[COLOR_nitc__parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <var_nexpr:AExpr(ARangeExpr)> */
if (unlikely(var43 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2508);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
var_to = var41;
{
((void(*)(val* self, val* p0))(var_before->class->vft[COLOR_nitc__astbuilder__AExpr__add]))(var_before, var_to); /* add on <var_before:AExpr>*/
}
{
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var46 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var46 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var49 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var49 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline typing$Variable$declared_type (var_variable) on <var_variable:Variable> */
var52 = var_variable->attrs[COLOR_nitc__typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var50 = var52;
RET_LABEL51:(void)0;
}
}
if (unlikely(var50 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 264);
fatal_exit(1);
}
{
var53 = nitc___nitc__ASTBuilder___make_var_read(var47, var_variable, var50);
}
{
{ /* Inline typing$AForGroup$method_lt (self) on <self:AForGroup> */
var56 = self->attrs[COLOR_nitc__typing__AForGroup___method_lt].val; /* _method_lt on <self:AForGroup> */
var54 = var56;
RET_LABEL55:(void)0;
}
}
if (unlikely(var54 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 264);
fatal_exit(1);
}
var57 = NEW_core__Array(&type_core__Array__nitc__AVarExpr);
{
core___core__Array___with_capacity(var57, 1l); /* Direct call array$Array$with_capacity on <var57:Array[AVarExpr]>*/
}
var_58 = var57;
{
var59 = nitc__astbuilder___AExpr___make_var_read(var_to);
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_58, var59); /* Direct call array$AbstractArray$push on <var_58:Array[AVarExpr]>*/
}
{
var60 = nitc___nitc__ASTBuilder___make_call(var44, var53, var54, var_58);
}
var_is_ok = var60;
{
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var63 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var63 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
var64 = nitc___nitc__ASTBuilder___make_if(var61, var_is_ok, ((val*)NULL));
}
var_nif = var64;
{
((void(*)(val* self, val* p0))(var_begin->class->vft[COLOR_nitc__astbuilder__AExpr__add]))(var_begin, var_nif); /* add on <var_begin:AExpr>*/
}
{
{ /* Inline parser_nodes$AIfExpr$n_else (var_nif) on <var_nif:AIfExpr> */
var67 = var_nif->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_else].val; /* _n_else on <var_nif:AIfExpr> */
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var70 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var70 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
var71 = nitc___nitc__ASTBuilder___make_break(var68, var_escapemark);
}
if (var65 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 267);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var65->class->vft[COLOR_nitc__astbuilder__AExpr__add]))(var65, var71); /* add on <var65:nullable AExpr>*/
}
{
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var74 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var74 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
{
var75 = nitc___nitc__ASTBuilder___make_int(var72, 1l);
}
var_one = var75;
{
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var78 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var78 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
{
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var81 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var81 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
{
{ /* Inline typing$Variable$declared_type (var_variable) on <var_variable:Variable> */
var84 = var_variable->attrs[COLOR_nitc__typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var82 = var84;
RET_LABEL83:(void)0;
}
}
if (unlikely(var82 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 271);
fatal_exit(1);
}
{
var85 = nitc___nitc__ASTBuilder___make_var_read(var79, var_variable, var82);
}
{
{ /* Inline typing$AForGroup$method_successor (self) on <self:AForGroup> */
var88 = self->attrs[COLOR_nitc__typing__AForGroup___method_successor].val; /* _method_successor on <self:AForGroup> */
var86 = var88;
RET_LABEL87:(void)0;
}
}
if (unlikely(var86 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 271);
fatal_exit(1);
}
var89 = NEW_core__Array(&type_core__Array__nitc__AIntegerExpr);
{
core___core__Array___with_capacity(var89, 1l); /* Direct call array$Array$with_capacity on <var89:Array[AIntegerExpr]>*/
}
var_90 = var89;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_90, var_one); /* Direct call array$AbstractArray$push on <var_90:Array[AIntegerExpr]>*/
}
{
var91 = nitc___nitc__ASTBuilder___make_call(var76, var85, var86, var_90);
}
var_succ = var91;
{
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var94 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var94 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var92 = var94;
RET_LABEL93:(void)0;
}
}
{
var95 = nitc___nitc__ASTBuilder___make_var_assign(var92, var_variable, var_succ);
}
{
((void(*)(val* self, val* p0))(var_next->class->vft[COLOR_nitc__astbuilder__AExpr__add]))(var_next, var95); /* add on <var_next:AExpr>*/
}
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, val* p0))(var_before->class->vft[COLOR_nitc__astbuilder__AExpr__add]))(var_before, var_nexpr); /* add on <var_before:AExpr>*/
}
{
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var98 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var98 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var96 = var98;
RET_LABEL97:(void)0;
}
}
{
var99 = nitc__astbuilder___AExpr___make_var_read(var_nexpr);
}
{
{ /* Inline typing$AForGroup$method_iterator (self) on <self:AForGroup> */
var102 = self->attrs[COLOR_nitc__typing__AForGroup___method_iterator].val; /* _method_iterator on <self:AForGroup> */
var100 = var102;
RET_LABEL101:(void)0;
}
}
if (unlikely(var100 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 278);
fatal_exit(1);
}
{
var103 = nitc___nitc__ASTBuilder___make_call(var96, var99, var100, ((val*)NULL));
}
var_iter = var103;
{
((void(*)(val* self, val* p0))(var_before->class->vft[COLOR_nitc__astbuilder__AExpr__add]))(var_before, var_iter); /* add on <var_before:AExpr>*/
}
{
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var106 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var106 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var104 = var106;
RET_LABEL105:(void)0;
}
}
{
var107 = nitc__astbuilder___AExpr___make_var_read(var_iter);
}
{
{ /* Inline typing$AForGroup$method_is_ok (self) on <self:AForGroup> */
var110 = self->attrs[COLOR_nitc__typing__AForGroup___method_is_ok].val; /* _method_is_ok on <self:AForGroup> */
var108 = var110;
RET_LABEL109:(void)0;
}
}
if (unlikely(var108 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 282);
fatal_exit(1);
}
{
var111 = nitc___nitc__ASTBuilder___make_call(var104, var107, var108, ((val*)NULL));
}
var_is_ok112 = var111;
{
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var115 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var115 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var113 = var115;
RET_LABEL114:(void)0;
}
}
{
var116 = nitc___nitc__ASTBuilder___make_if(var113, var_is_ok112, ((val*)NULL));
}
var_nif117 = var116;
{
((void(*)(val* self, val* p0))(var_begin->class->vft[COLOR_nitc__astbuilder__AExpr__add]))(var_begin, var_nif117); /* add on <var_begin:AExpr>*/
}
{
{ /* Inline parser_nodes$AIfExpr$n_else (var_nif117) on <var_nif117:AIfExpr> */
var120 = var_nif117->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_else].val; /* _n_else on <var_nif117:AIfExpr> */
var118 = var120;
RET_LABEL119:(void)0;
}
}
{
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var123 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var123 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var121 = var123;
RET_LABEL122:(void)0;
}
}
{
var124 = nitc___nitc__ASTBuilder___make_break(var121, var_escapemark);
}
if (var118 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 285);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var118->class->vft[COLOR_nitc__astbuilder__AExpr__add]))(var118, var124); /* add on <var118:nullable AExpr>*/
}
{
{ /* Inline scope$AForGroup$variables (self) on <self:AForGroup> */
var127 = self->attrs[COLOR_nitc__scope__AForGroup___variables].val; /* _variables on <self:AForGroup> */
var125 = var127;
RET_LABEL126:(void)0;
}
}
if (var125 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 288);
fatal_exit(1);
} else {
{ /* Inline array$AbstractArrayRead$length (var125) on <var125:nullable Array[Variable]> */
if (unlikely(var125 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 26);
fatal_exit(1);
}
var130 = var125->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var125:nullable Array[Variable]> */
var128 = var130;
RET_LABEL129:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var128,1l) on <var128:Int> */
var133 = var128 == 1l;
var131 = var133;
goto RET_LABEL132;
RET_LABEL132:(void)0;
}
}
if (var131){
{
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var136 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var136 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var134 = var136;
RET_LABEL135:(void)0;
}
}
{
var137 = nitc__astbuilder___AExpr___make_var_read(var_iter);
}
{
{ /* Inline typing$AForGroup$method_item (self) on <self:AForGroup> */
var140 = self->attrs[COLOR_nitc__typing__AForGroup___method_item].val; /* _method_item on <self:AForGroup> */
var138 = var140;
RET_LABEL139:(void)0;
}
}
if (unlikely(var138 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 289);
fatal_exit(1);
}
{
var141 = nitc___nitc__ASTBuilder___make_call(var134, var137, var138, ((val*)NULL));
}
var_item = var141;
{
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var144 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var144 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var142 = var144;
RET_LABEL143:(void)0;
}
}
{
{ /* Inline scope$AForGroup$variables (self) on <self:AForGroup> */
var147 = self->attrs[COLOR_nitc__scope__AForGroup___variables].val; /* _variables on <self:AForGroup> */
var145 = var147;
RET_LABEL146:(void)0;
}
}
if (var145 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 290);
fatal_exit(1);
} else {
var148 = core___core__SequenceRead___Collection__first(var145);
}
{
var149 = nitc___nitc__ASTBuilder___make_var_assign(var142, var148, var_item);
}
{
((void(*)(val* self, val* p0))(var_begin->class->vft[COLOR_nitc__astbuilder__AExpr__add]))(var_begin, var149); /* add on <var_begin:AExpr>*/
}
} else {
{
{ /* Inline scope$AForGroup$variables (self) on <self:AForGroup> */
var152 = self->attrs[COLOR_nitc__scope__AForGroup___variables].val; /* _variables on <self:AForGroup> */
var150 = var152;
RET_LABEL151:(void)0;
}
}
if (var150 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 291);
fatal_exit(1);
} else {
{ /* Inline array$AbstractArrayRead$length (var150) on <var150:nullable Array[Variable]> */
if (unlikely(var150 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 26);
fatal_exit(1);
}
var155 = var150->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var150:nullable Array[Variable]> */
var153 = var155;
RET_LABEL154:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var153,2l) on <var153:Int> */
var158 = var153 == 2l;
var156 = var158;
goto RET_LABEL157;
RET_LABEL157:(void)0;
}
}
if (var156){
{
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var161 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var161 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var159 = var161;
RET_LABEL160:(void)0;
}
}
{
var162 = nitc__astbuilder___AExpr___make_var_read(var_iter);
}
{
{ /* Inline typing$AForGroup$method_key (self) on <self:AForGroup> */
var165 = self->attrs[COLOR_nitc__typing__AForGroup___method_key].val; /* _method_key on <self:AForGroup> */
var163 = var165;
RET_LABEL164:(void)0;
}
}
if (unlikely(var163 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 292);
fatal_exit(1);
}
{
var166 = nitc___nitc__ASTBuilder___make_call(var159, var162, var163, ((val*)NULL));
}
var_key = var166;
{
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var169 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var169 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var167 = var169;
RET_LABEL168:(void)0;
}
}
{
{ /* Inline scope$AForGroup$variables (self) on <self:AForGroup> */
var172 = self->attrs[COLOR_nitc__scope__AForGroup___variables].val; /* _variables on <self:AForGroup> */
var170 = var172;
RET_LABEL171:(void)0;
}
}
if (var170 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 293);
fatal_exit(1);
} else {
var173 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var170, 0l);
}
{
var174 = nitc___nitc__ASTBuilder___make_var_assign(var167, var173, var_key);
}
{
((void(*)(val* self, val* p0))(var_begin->class->vft[COLOR_nitc__astbuilder__AExpr__add]))(var_begin, var174); /* add on <var_begin:AExpr>*/
}
{
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var177 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var177 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var175 = var177;
RET_LABEL176:(void)0;
}
}
{
var178 = nitc__astbuilder___AExpr___make_var_read(var_iter);
}
{
{ /* Inline typing$AForGroup$method_item (self) on <self:AForGroup> */
var181 = self->attrs[COLOR_nitc__typing__AForGroup___method_item].val; /* _method_item on <self:AForGroup> */
var179 = var181;
RET_LABEL180:(void)0;
}
}
if (unlikely(var179 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 294);
fatal_exit(1);
}
{
var182 = nitc___nitc__ASTBuilder___make_call(var175, var178, var179, ((val*)NULL));
}
var_item183 = var182;
{
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var186 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var186 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var184 = var186;
RET_LABEL185:(void)0;
}
}
{
{ /* Inline scope$AForGroup$variables (self) on <self:AForGroup> */
var189 = self->attrs[COLOR_nitc__scope__AForGroup___variables].val; /* _variables on <self:AForGroup> */
var187 = var189;
RET_LABEL188:(void)0;
}
}
if (var187 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 295);
fatal_exit(1);
} else {
var190 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var187, 1l);
}
{
var191 = nitc___nitc__ASTBuilder___make_var_assign(var184, var190, var_item183);
}
{
((void(*)(val* self, val* p0))(var_begin->class->vft[COLOR_nitc__astbuilder__AExpr__add]))(var_begin, var191); /* add on <var_begin:AExpr>*/
}
} else {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 297);
fatal_exit(1);
}
}
{
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var194 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var194 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var192 = var194;
RET_LABEL193:(void)0;
}
}
{
var195 = nitc__astbuilder___AExpr___make_var_read(var_iter);
}
{
{ /* Inline typing$AForGroup$method_next (self) on <self:AForGroup> */
var198 = self->attrs[COLOR_nitc__typing__AForGroup___method_next].val; /* _method_next on <self:AForGroup> */
var196 = var198;
RET_LABEL197:(void)0;
}
}
if (unlikely(var196 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 301);
fatal_exit(1);
}
{
var199 = nitc___nitc__ASTBuilder___make_call(var192, var195, var196, ((val*)NULL));
}
{
((void(*)(val* self, val* p0))(var_next->class->vft[COLOR_nitc__astbuilder__AExpr__add]))(var_next, var199); /* add on <var_next:AExpr>*/
}
{
{ /* Inline typing$AForGroup$method_finish (self) on <self:AForGroup> */
var202 = self->attrs[COLOR_nitc__typing__AForGroup___method_finish].val; /* _method_finish on <self:AForGroup> */
var200 = var202;
RET_LABEL201:(void)0;
}
}
var_method_finish = var200;
if (var_method_finish == NULL) {
var203 = 0; /* is null */
} else {
var203 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_method_finish,((val*)NULL)) on <var_method_finish:nullable CallSite> */
var_other = ((val*)NULL);
{
var206 = ((short int(*)(val* self, val* p0))(var_method_finish->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_method_finish, var_other); /* == on <var_method_finish:nullable CallSite(CallSite)>*/
}
var207 = !var206;
var204 = var207;
goto RET_LABEL205;
RET_LABEL205:(void)0;
}
var203 = var204;
}
if (var203){
{
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var210 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var210 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var208 = var210;
RET_LABEL209:(void)0;
}
}
{
var211 = nitc__astbuilder___AExpr___make_var_read(var_iter);
}
{
var212 = nitc___nitc__ASTBuilder___make_call(var208, var211, var_method_finish, ((val*)NULL));
}
{
((void(*)(val* self, val* p0))(var_finish->class->vft[COLOR_nitc__astbuilder__AExpr__add]))(var_finish, var212); /* add on <var_finish:AExpr>*/
}
} else {
}
RET_LABEL:;
}
/* method transform$AWithExpr$accept_transform_visitor for (self: AWithExpr, TransformVisitor) */
void nitc__transform___AWithExpr___ANode__accept_transform_visitor(val* self, val* p0) {
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
{ /* Inline scope$AWithExpr$break_mark (self) on <self:AWithExpr> */
var2 = self->attrs[COLOR_nitc__scope__AWithExpr___break_mark].val; /* _break_mark on <self:AWithExpr> */
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
{ /* Inline kernel$Object$!= (var_escapemark,((val*)NULL)) on <var_escapemark:nullable EscapeMark> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_escapemark->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_escapemark, var_other); /* == on <var_escapemark:nullable EscapeMark(EscapeMark)>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (unlikely(!var3)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 337);
fatal_exit(1);
}
{
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var10 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nitc___nitc__ASTBuilder___make_block(var8);
}
var_nblock = var11;
{
{ /* Inline parser_nodes$AWithExpr$n_expr (self) on <self:AWithExpr> */
var14 = self->attrs[COLOR_nitc__parser_nodes__AWithExpr___n_expr].val; /* _n_expr on <self:AWithExpr> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2036);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_nexpr = var12;
{
nitc__astbuilder___ABlockExpr___AExpr__add(var_nblock, var_nexpr); /* Direct call astbuilder$ABlockExpr$add on <var_nblock:ABlockExpr>*/
}
{
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var17 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = nitc___nitc__ASTBuilder___make_do(var15);
}
var_ndo = var18;
{
{ /* Inline scope$ADoExpr$break_mark= (var_ndo,var_escapemark) on <var_ndo:ADoExpr> */
var_ndo->attrs[COLOR_nitc__scope__ADoExpr___break_mark].val = var_escapemark; /* _break_mark on <var_ndo:ADoExpr> */
RET_LABEL19:(void)0;
}
}
{
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var22 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = nitc__astbuilder___AExpr___make_var_read(var_nexpr);
}
{
{ /* Inline typing$AWithExpr$method_start (self) on <self:AWithExpr> */
var26 = self->attrs[COLOR_nitc__typing__AWithExpr___method_start].val; /* _method_start on <self:AWithExpr> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
if (unlikely(var24 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 348);
fatal_exit(1);
}
{
var27 = nitc___nitc__ASTBuilder___make_call(var20, var23, var24, ((val*)NULL));
}
var_start = var27;
{
nitc__astbuilder___ADoExpr___AExpr__add(var_ndo, var_start); /* Direct call astbuilder$ADoExpr$add on <var_ndo:ADoExpr>*/
}
{
{ /* Inline parser_nodes$AWithExpr$n_block (self) on <self:AWithExpr> */
var30 = self->attrs[COLOR_nitc__parser_nodes__AWithExpr___n_block].val; /* _n_block on <self:AWithExpr> */
var28 = var30;
RET_LABEL29:(void)0;
}
}
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 352);
fatal_exit(1);
}
{
nitc__astbuilder___ADoExpr___AExpr__add(var_ndo, var28); /* Direct call astbuilder$ADoExpr$add on <var_ndo:ADoExpr>*/
}
{
nitc__astbuilder___ABlockExpr___AExpr__add(var_nblock, var_ndo); /* Direct call astbuilder$ABlockExpr$add on <var_nblock:ABlockExpr>*/
}
{
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var33 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var33 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
var34 = nitc__astbuilder___AExpr___make_var_read(var_nexpr);
}
{
{ /* Inline typing$AWithExpr$method_finish (self) on <self:AWithExpr> */
var37 = self->attrs[COLOR_nitc__typing__AWithExpr___method_finish].val; /* _method_finish on <self:AWithExpr> */
var35 = var37;
RET_LABEL36:(void)0;
}
}
if (unlikely(var35 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 356);
fatal_exit(1);
}
{
var38 = nitc___nitc__ASTBuilder___make_call(var31, var34, var35, ((val*)NULL));
}
{
nitc__astbuilder___ABlockExpr___AExpr__add(var_nblock, var38); /* Direct call astbuilder$ABlockExpr$add on <var_nblock:ABlockExpr>*/
}
{
nitc__transform___AExpr___nitc__parser_nodes__ANode__replace_with(self, var_nblock); /* Direct call transform$AExpr$replace_with on <self:AWithExpr>*/
}
RET_LABEL:;
}
/* method transform$AArrayExpr$full_transform_visitor for (self: AArrayExpr, TransformVisitor) */
void nitc__transform___AArrayExpr___ANode__full_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
short int var /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : ASTBuilder */;
val* var5 /* : ASTBuilder */;
val* var6 /* : ABlockExpr */;
val* var_nblock /* var nblock: ABlockExpr */;
val* var7 /* : ASTBuilder */;
val* var9 /* : ASTBuilder */;
val* var10 /* : nullable CallSite */;
val* var12 /* : nullable CallSite */;
val* var13 /* : Array[AIntegerExpr] */;
val* var_ /* var : Array[AIntegerExpr] */;
val* var14 /* : ASTBuilder */;
val* var16 /* : ASTBuilder */;
val* var17 /* : ANodes[AExpr] */;
val* var19 /* : ANodes[AExpr] */;
long var20 /* : Int */;
val* var21 /* : AIntegerExpr */;
val* var22 /* : ANewExpr */;
val* var_nnew /* var nnew: ANewExpr */;
val* var24 /* : ANodes[AExpr] */;
val* var26 /* : ANodes[AExpr] */;
val* var_27 /* var : ANodes[AExpr] */;
val* var28 /* : Iterator[ANode] */;
val* var_29 /* var : Iterator[AExpr] */;
short int var30 /* : Bool */;
val* var31 /* : nullable Object */;
val* var_nexpr /* var nexpr: AExpr */;
val* var32 /* : AVarExpr */;
val* var_nres /* var nres: AVarExpr */;
var_v = p0;
{
{ /* Inline modelbuilder_base$ANode$is_broken (self) on <self:AArrayExpr> */
var2 = self->attrs[COLOR_nitc__modelbuilder_base__ANode___is_broken].s; /* _is_broken on <self:AArrayExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var){
goto RET_LABEL;
} else {
}
{
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var5 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = nitc___nitc__ASTBuilder___make_block(var3);
}
var_nblock = var6;
{
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var9 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline typing$AArrayExpr$with_capacity_callsite (self) on <self:AArrayExpr> */
var12 = self->attrs[COLOR_nitc__typing__AArrayExpr___with_capacity_callsite].val; /* _with_capacity_callsite on <self:AArrayExpr> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 377);
fatal_exit(1);
}
var13 = NEW_core__Array(&type_core__Array__nitc__AIntegerExpr);
{
core___core__Array___with_capacity(var13, 1l); /* Direct call array$Array$with_capacity on <var13:Array[AIntegerExpr]>*/
}
var_ = var13;
{
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var16 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline parser_nodes$AArrayExpr$n_exprs (self) on <self:AArrayExpr> */
var19 = self->attrs[COLOR_nitc__parser_nodes__AArrayExpr___n_exprs].val; /* _n_exprs on <self:AArrayExpr> */
if (unlikely(var19 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2541);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = nitc___nitc__ANodes___core__abstract_collection__Collection__length(var17);
}
{
var21 = nitc___nitc__ASTBuilder___make_int(var14, var20);
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var21); /* Direct call array$AbstractArray$push on <var_:Array[AIntegerExpr]>*/
}
{
var22 = nitc___nitc__ASTBuilder___make_new(var7, var10, var_);
}
var_nnew = var22;
{
{ /* Inline transform$AArrayExpr$nnew= (self,var_nnew) on <self:AArrayExpr> */
self->attrs[COLOR_nitc__transform__AArrayExpr___nnew].val = var_nnew; /* _nnew on <self:AArrayExpr> */
RET_LABEL23:(void)0;
}
}
{
nitc__astbuilder___ABlockExpr___AExpr__add(var_nblock, var_nnew); /* Direct call astbuilder$ABlockExpr$add on <var_nblock:ABlockExpr>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__transform___AArrayExpr___ANode__full_transform_visitor]))(self, p0); /* full_transform_visitor on <self:AArrayExpr>*/
}
{
{ /* Inline parser_nodes$AArrayExpr$n_exprs (self) on <self:AArrayExpr> */
var26 = self->attrs[COLOR_nitc__parser_nodes__AArrayExpr___n_exprs].val; /* _n_exprs on <self:AArrayExpr> */
if (unlikely(var26 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2541);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
var_27 = var24;
{
var28 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_27);
}
var_29 = var28;
for(;;) {
{
var30 = ((short int(*)(val* self))((((long)var_29&3)?class_info[((long)var_29&3)]:var_29->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_29); /* is_ok on <var_29:Iterator[AExpr]>*/
}
if (var30){
} else {
goto BREAK_label;
}
{
var31 = ((val*(*)(val* self))((((long)var_29&3)?class_info[((long)var_29&3)]:var_29->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_29); /* item on <var_29:Iterator[AExpr]>*/
}
var_nexpr = var31;
{
nitc__astbuilder___ABlockExpr___AExpr__add(var_nblock, var_nexpr); /* Direct call astbuilder$ABlockExpr$add on <var_nblock:ABlockExpr>*/
}
{
((void(*)(val* self))((((long)var_29&3)?class_info[((long)var_29&3)]:var_29->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_29); /* next on <var_29:Iterator[AExpr]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_29&3)?class_info[((long)var_29&3)]:var_29->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_29); /* finish on <var_29:Iterator[AExpr]>*/
}
{
var32 = nitc__astbuilder___AExpr___make_var_read(var_nnew);
}
var_nres = var32;
{
nitc__astbuilder___ABlockExpr___AExpr__add(var_nblock, var_nres); /* Direct call astbuilder$ABlockExpr$add on <var_nblock:ABlockExpr>*/
}
{
nitc__transform___AExpr___nitc__parser_nodes__ANode__replace_with(self, var_nblock); /* Direct call transform$AExpr$replace_with on <self:AArrayExpr>*/
}
RET_LABEL:;
}
/* method transform$AArrayExpr$nnew for (self: AArrayExpr): ANewExpr */
val* nitc__transform___AArrayExpr___nnew(val* self) {
val* var /* : ANewExpr */;
val* var1 /* : ANewExpr */;
var1 = self->attrs[COLOR_nitc__transform__AArrayExpr___nnew].val; /* _nnew on <self:AArrayExpr> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _nnew");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 393);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method transform$AArrayExpr$nnew= for (self: AArrayExpr, ANewExpr) */
void nitc__transform___AArrayExpr___nnew_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__transform__AArrayExpr___nnew].val = p0; /* _nnew on <self:AArrayExpr> */
RET_LABEL:;
}
/* method transform$ACrangeExpr$accept_transform_visitor for (self: ACrangeExpr, TransformVisitor) */
void nitc__transform___ACrangeExpr___ANode__accept_transform_visitor(val* self, val* p0) {
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
{ /* Inline parser_nodes$ANode$parent (self) on <self:ACrangeExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ANode___parent].val; /* _parent on <self:ACrangeExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
/* <var:nullable ANode> isa AForGroup */
cltype = type_nitc__AForGroup.color;
idtype = type_nitc__AForGroup.id;
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
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var6 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline typing$ARangeExpr$init_callsite (self) on <self:ACrangeExpr> */
var9 = self->attrs[COLOR_nitc__typing__ARangeExpr___init_callsite].val; /* _init_callsite on <self:ACrangeExpr> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 401);
fatal_exit(1);
}
var10 = NEW_core__Array(&type_core__Array__nitc__AExpr);
{
core___core__Array___with_capacity(var10, 2l); /* Direct call array$Array$with_capacity on <var10:Array[AExpr]>*/
}
var_ = var10;
{
{ /* Inline parser_nodes$ARangeExpr$n_expr (self) on <self:ACrangeExpr> */
var13 = self->attrs[COLOR_nitc__parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:ACrangeExpr> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2502);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var11); /* Direct call array$AbstractArray$push on <var_:Array[AExpr]>*/
}
{
{ /* Inline parser_nodes$ARangeExpr$n_expr2 (self) on <self:ACrangeExpr> */
var16 = self->attrs[COLOR_nitc__parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:ACrangeExpr> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2508);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var14); /* Direct call array$AbstractArray$push on <var_:Array[AExpr]>*/
}
{
var17 = nitc___nitc__ASTBuilder___make_new(var4, var7, var_);
}
{
nitc__transform___AExpr___nitc__parser_nodes__ANode__replace_with(self, var17); /* Direct call transform$AExpr$replace_with on <self:ACrangeExpr>*/
}
RET_LABEL:;
}
/* method transform$AOrangeExpr$accept_transform_visitor for (self: AOrangeExpr, TransformVisitor) */
void nitc__transform___AOrangeExpr___ANode__accept_transform_visitor(val* self, val* p0) {
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
{ /* Inline parser_nodes$ANode$parent (self) on <self:AOrangeExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ANode___parent].val; /* _parent on <self:AOrangeExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
/* <var:nullable ANode> isa AForGroup */
cltype = type_nitc__AForGroup.color;
idtype = type_nitc__AForGroup.id;
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
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var6 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline typing$ARangeExpr$init_callsite (self) on <self:AOrangeExpr> */
var9 = self->attrs[COLOR_nitc__typing__ARangeExpr___init_callsite].val; /* _init_callsite on <self:AOrangeExpr> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 410);
fatal_exit(1);
}
var10 = NEW_core__Array(&type_core__Array__nitc__AExpr);
{
core___core__Array___with_capacity(var10, 2l); /* Direct call array$Array$with_capacity on <var10:Array[AExpr]>*/
}
var_ = var10;
{
{ /* Inline parser_nodes$ARangeExpr$n_expr (self) on <self:AOrangeExpr> */
var13 = self->attrs[COLOR_nitc__parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:AOrangeExpr> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2502);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var11); /* Direct call array$AbstractArray$push on <var_:Array[AExpr]>*/
}
{
{ /* Inline parser_nodes$ARangeExpr$n_expr2 (self) on <self:AOrangeExpr> */
var16 = self->attrs[COLOR_nitc__parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:AOrangeExpr> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2508);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var14); /* Direct call array$AbstractArray$push on <var_:Array[AExpr]>*/
}
{
var17 = nitc___nitc__ASTBuilder___make_new(var4, var7, var_);
}
{
nitc__transform___AExpr___nitc__parser_nodes__ANode__replace_with(self, var17); /* Direct call transform$AExpr$replace_with on <self:AOrangeExpr>*/
}
RET_LABEL:;
}
/* method transform$AParExpr$accept_transform_visitor for (self: AParExpr, TransformVisitor) */
void nitc__transform___AParExpr___ANode__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
var_v = p0;
{
{ /* Inline parser_nodes$AParExpr$n_expr (self) on <self:AParExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AParExpr___n_expr].val; /* _n_expr on <self:AParExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2656);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc__transform___AExpr___nitc__parser_nodes__ANode__replace_with(self, var); /* Direct call transform$AExpr$replace_with on <self:AParExpr>*/
}
RET_LABEL:;
}
/* method transform$ASendReassignFormExpr$accept_transform_visitor for (self: ASendReassignFormExpr, TransformVisitor) */
void nitc__transform___ASendReassignFormExpr___ANode__accept_transform_visitor(val* self, val* p0) {
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
val* var10 /* : IndexedIterator[nullable Object] */;
val* var_11 /* var : IndexedIterator[AExpr] */;
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
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var2 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc___nitc__ASTBuilder___make_block(var);
}
var_nblock = var3;
{
{ /* Inline parser_nodes$ASendExpr$n_expr (self) on <self:ASendReassignFormExpr> */
var6 = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASendReassignFormExpr> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2103);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
nitc__astbuilder___ABlockExpr___AExpr__add(var_nblock, var4); /* Direct call astbuilder$ABlockExpr$add on <var_nblock:ABlockExpr>*/
}
var7 = NEW_core__Array(&type_core__Array__nitc__AExpr);
{
core___core__Array___core__kernel__Object__init(var7); /* Direct call array$Array$init on <var7:Array[AExpr]>*/
}
var_read_args = var7;
var8 = NEW_core__Array(&type_core__Array__nitc__AExpr);
{
core___core__Array___core__kernel__Object__init(var8); /* Direct call array$Array$init on <var8:Array[AExpr]>*/
}
var_write_args = var8;
{
var9 = nitc__typing___ASendExpr___raw_arguments(self);
}
var_ = var9;
{
var10 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_11 = var10;
for(;;) {
{
var12 = ((short int(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_11); /* is_ok on <var_11:IndexedIterator[AExpr]>*/
}
if (var12){
} else {
goto BREAK_label;
}
{
var13 = ((val*(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_11); /* item on <var_11:IndexedIterator[AExpr]>*/
}
var_a = var13;
{
nitc__astbuilder___ABlockExpr___AExpr__add(var_nblock, var_a); /* Direct call astbuilder$ABlockExpr$add on <var_nblock:ABlockExpr>*/
}
{
var14 = nitc__astbuilder___AExpr___make_var_read(var_a);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_read_args, var14); /* Direct call array$Array$add on <var_read_args:Array[AExpr]>*/
}
{
var15 = nitc__astbuilder___AExpr___make_var_read(var_a);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_write_args, var15); /* Direct call array$Array$add on <var_write_args:Array[AExpr]>*/
}
{
((void(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_11); /* next on <var_11:IndexedIterator[AExpr]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_11); /* finish on <var_11:IndexedIterator[AExpr]>*/
}
{
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var18 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline parser_nodes$ASendExpr$n_expr (self) on <self:ASendReassignFormExpr> */
var21 = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASendReassignFormExpr> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2103);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = nitc__astbuilder___AExpr___make_var_read(var19);
}
{
{ /* Inline typing$ASendExpr$callsite (self) on <self:ASendReassignFormExpr> */
var25 = self->attrs[COLOR_nitc__typing__ASendExpr___callsite].val; /* _callsite on <self:ASendReassignFormExpr> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 447);
fatal_exit(1);
}
{
var26 = nitc___nitc__ASTBuilder___make_call(var16, var22, var23, var_read_args);
}
var_nread = var26;
{
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var29 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline typing$AReassignFormExpr$reassign_callsite (self) on <self:ASendReassignFormExpr> */
var32 = self->attrs[COLOR_nitc__typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:ASendReassignFormExpr> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
if (unlikely(var30 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 449);
fatal_exit(1);
}
var33 = NEW_core__Array(&type_core__Array__nitc__AExpr);
{
core___core__Array___with_capacity(var33, 1l); /* Direct call array$Array$with_capacity on <var33:Array[AExpr]>*/
}
var_34 = var33;
{
{ /* Inline parser_nodes$AReassignFormExpr$n_value (self) on <self:ASendReassignFormExpr> */
var37 = self->attrs[COLOR_nitc__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:ASendReassignFormExpr> */
if (unlikely(var37 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2084);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_34, var35); /* Direct call array$AbstractArray$push on <var_34:Array[AExpr]>*/
}
{
var38 = nitc___nitc__ASTBuilder___make_call(var27, var_nread, var30, var_34);
}
var_nnewvalue = var38;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_write_args, var_nnewvalue); /* Direct call array$Array$add on <var_write_args:Array[AExpr]>*/
}
{
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var41 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var41 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline parser_nodes$ASendExpr$n_expr (self) on <self:ASendReassignFormExpr> */
var44 = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASendReassignFormExpr> */
if (unlikely(var44 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2103);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
var45 = nitc__astbuilder___AExpr___make_var_read(var42);
}
{
{ /* Inline typing$ASendReassignFormExpr$write_callsite (self) on <self:ASendReassignFormExpr> */
var48 = self->attrs[COLOR_nitc__typing__ASendReassignFormExpr___write_callsite].val; /* _write_callsite on <self:ASendReassignFormExpr> */
var46 = var48;
RET_LABEL47:(void)0;
}
}
if (unlikely(var46 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 452);
fatal_exit(1);
}
{
var49 = nitc___nitc__ASTBuilder___make_call(var39, var45, var46, var_write_args);
}
var_nwrite = var49;
{
nitc__astbuilder___ABlockExpr___AExpr__add(var_nblock, var_nwrite); /* Direct call astbuilder$ABlockExpr$add on <var_nblock:ABlockExpr>*/
}
{
nitc__transform___AExpr___nitc__parser_nodes__ANode__replace_with(self, var_nblock); /* Direct call transform$AExpr$replace_with on <self:ASendReassignFormExpr>*/
}
RET_LABEL:;
}
/* method transform$AVarReassignExpr$accept_transform_visitor for (self: AVarReassignExpr, TransformVisitor) */
void nitc__transform___AVarReassignExpr___ANode__accept_transform_visitor(val* self, val* p0) {
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
{ /* Inline scope$AVarFormExpr$variable (self) on <self:AVarReassignExpr> */
var2 = self->attrs[COLOR_nitc__scope__AVarFormExpr___variable].val; /* _variable on <self:AVarReassignExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 463);
fatal_exit(1);
}
var_variable = var;
{
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var5 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline typing$AReassignFormExpr$read_type (self) on <self:AVarReassignExpr> */
var8 = self->attrs[COLOR_nitc__typing__AReassignFormExpr___read_type].val; /* _read_type on <self:AVarReassignExpr> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 465);
fatal_exit(1);
}
{
var9 = nitc___nitc__ASTBuilder___make_var_read(var3, var_variable, var6);
}
var_nread = var9;
{
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var12 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline typing$AReassignFormExpr$reassign_callsite (self) on <self:AVarReassignExpr> */
var15 = self->attrs[COLOR_nitc__typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:AVarReassignExpr> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 467);
fatal_exit(1);
}
var16 = NEW_core__Array(&type_core__Array__nitc__AExpr);
{
core___core__Array___with_capacity(var16, 1l); /* Direct call array$Array$with_capacity on <var16:Array[AExpr]>*/
}
var_ = var16;
{
{ /* Inline parser_nodes$AReassignFormExpr$n_value (self) on <self:AVarReassignExpr> */
var19 = self->attrs[COLOR_nitc__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AVarReassignExpr> */
if (unlikely(var19 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2084);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var17); /* Direct call array$AbstractArray$push on <var_:Array[AExpr]>*/
}
{
var20 = nitc___nitc__ASTBuilder___make_call(var10, var_nread, var13, var_);
}
var_nnewvalue = var20;
{
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var23 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = nitc___nitc__ASTBuilder___make_var_assign(var21, var_variable, var_nnewvalue);
}
var_nwrite = var24;
{
nitc__transform___AExpr___nitc__parser_nodes__ANode__replace_with(self, var_nwrite); /* Direct call transform$AExpr$replace_with on <self:AVarReassignExpr>*/
}
RET_LABEL:;
}
/* method transform$AAttrReassignExpr$accept_transform_visitor for (self: AAttrReassignExpr, TransformVisitor) */
void nitc__transform___AAttrReassignExpr___ANode__accept_transform_visitor(val* self, val* p0) {
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
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var2 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc___nitc__ASTBuilder___make_block(var);
}
var_nblock = var3;
{
{ /* Inline parser_nodes$AAttrFormExpr$n_expr (self) on <self:AAttrReassignExpr> */
var6 = self->attrs[COLOR_nitc__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrReassignExpr> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2354);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
nitc__astbuilder___ABlockExpr___AExpr__add(var_nblock, var4); /* Direct call astbuilder$ABlockExpr$add on <var_nblock:ABlockExpr>*/
}
{
{ /* Inline typing$AAttrFormExpr$mproperty (self) on <self:AAttrReassignExpr> */
var9 = self->attrs[COLOR_nitc__typing__AAttrFormExpr___mproperty].val; /* _mproperty on <self:AAttrReassignExpr> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 480);
fatal_exit(1);
}
var_attribute = var7;
{
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var12 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline parser_nodes$AAttrFormExpr$n_expr (self) on <self:AAttrReassignExpr> */
var15 = self->attrs[COLOR_nitc__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrReassignExpr> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2354);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = nitc__astbuilder___AExpr___make_var_read(var13);
}
{
var17 = nitc___nitc__ASTBuilder___make_attr_read(var10, var16, var_attribute);
}
var_nread = var17;
{
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var20 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline typing$AReassignFormExpr$reassign_callsite (self) on <self:AAttrReassignExpr> */
var23 = self->attrs[COLOR_nitc__typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:AAttrReassignExpr> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 483);
fatal_exit(1);
}
var24 = NEW_core__Array(&type_core__Array__nitc__AExpr);
{
core___core__Array___with_capacity(var24, 1l); /* Direct call array$Array$with_capacity on <var24:Array[AExpr]>*/
}
var_ = var24;
{
{ /* Inline parser_nodes$AReassignFormExpr$n_value (self) on <self:AAttrReassignExpr> */
var27 = self->attrs[COLOR_nitc__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AAttrReassignExpr> */
if (unlikely(var27 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2084);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var25); /* Direct call array$AbstractArray$push on <var_:Array[AExpr]>*/
}
{
var28 = nitc___nitc__ASTBuilder___make_call(var18, var_nread, var21, var_);
}
var_nnewvalue = var28;
{
{ /* Inline transform$TransformVisitor$builder (var_v) on <var_v:TransformVisitor> */
var31 = var_v->attrs[COLOR_nitc__transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var31 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__transform, 62);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline parser_nodes$AAttrFormExpr$n_expr (self) on <self:AAttrReassignExpr> */
var34 = self->attrs[COLOR_nitc__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrReassignExpr> */
if (unlikely(var34 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2354);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
var35 = nitc__astbuilder___AExpr___make_var_read(var32);
}
{
var36 = nitc___nitc__ASTBuilder___make_attr_assign(var29, var35, var_attribute, var_nnewvalue);
}
var_nwrite = var36;
{
nitc__astbuilder___ABlockExpr___AExpr__add(var_nblock, var_nwrite); /* Direct call astbuilder$ABlockExpr$add on <var_nblock:ABlockExpr>*/
}
{
nitc__transform___AExpr___nitc__parser_nodes__ANode__replace_with(self, var_nblock); /* Direct call transform$AExpr$replace_with on <self:AAttrReassignExpr>*/
}
RET_LABEL:;
}
