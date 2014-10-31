#include "transform.sep.0.h"
/* method transform#ToolContext#opt_no_shortcut_range for (self: ToolContext): OptionBool */
val* transform__ToolContext__opt_no_shortcut_range(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_transform__ToolContext___opt_no_shortcut_range].val; /* _opt_no_shortcut_range on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_shortcut_range");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 27);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method transform#ToolContext#opt_no_shortcut_range for (self: Object): OptionBool */
val* VIRTUAL_transform__ToolContext__opt_no_shortcut_range(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
val* var3 /* : OptionBool */;
{ /* Inline transform#ToolContext#opt_no_shortcut_range (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_transform__ToolContext___opt_no_shortcut_range].val; /* _opt_no_shortcut_range on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_shortcut_range");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 27);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method transform#ToolContext#init for (self: ToolContext) */
void transform__ToolContext__init(val* self) {
val* var /* : OptionContext */;
val* var2 /* : OptionContext */;
val* var3 /* : OptionBool */;
val* var5 /* : OptionBool */;
val* var6 /* : Array[Option] */;
long var7 /* : Int */;
val* var8 /* : NativeArray[Option] */;
{
((void (*)(val*))(self->class->vft[COLOR_transform__ToolContext__init]))(self) /* init on <self:ToolContext>*/;
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 231);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline transform#ToolContext#opt_no_shortcut_range (self) on <self:ToolContext> */
var5 = self->attrs[COLOR_transform__ToolContext___opt_no_shortcut_range].val; /* _opt_no_shortcut_range on <self:ToolContext> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_shortcut_range");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 27);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var6 = NEW_array__Array(&type_array__Arrayopts__Option);
{ /* var6 = array_instance Array[Option] */
var7 = 1;
var8 = NEW_array__NativeArray(var7, &type_array__NativeArrayopts__Option);
((struct instance_array__NativeArray*)var8)->values[0] = (val*) var3;
{
((void (*)(val*, val*, long))(var6->class->vft[COLOR_array__Array__with_native]))(var6, var8, var7) /* with_native on <var6:Array[Option]>*/;
}
}
{
opts__OptionContext__add_option(var, var6); /* Direct call opts#OptionContext#add_option on <var:OptionContext>*/
}
RET_LABEL:;
}
/* method transform#ToolContext#init for (self: Object) */
void VIRTUAL_transform__ToolContext__init(val* self) {
transform__ToolContext__init(self); /* Direct call transform#ToolContext#init on <self:Object(ToolContext)>*/
RET_LABEL:;
}
/* method transform#TransformPhase#process_npropdef for (self: TransformPhase, APropdef) */
void transform__TransformPhase__process_npropdef(val* self, val* p0) {
val* var_npropdef /* var npropdef: APropdef */;
val* var /* : TransformVisitor */;
val* var_v /* var v: TransformVisitor */;
val* var1 /* : ASTValidationVisitor */;
val* var_val /* var val: nullable Object */;
var_npropdef = p0;
var = NEW_transform__TransformVisitor(&type_transform__TransformVisitor);
{
transform__TransformVisitor__init(var, self, var_npropdef); /* Direct call transform#TransformVisitor#init on <var:TransformVisitor>*/
}
var_v = var;
{
parser_nodes__Visitor__enter_visit(var_v, var_npropdef); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:TransformVisitor>*/
}
var1 = NEW_astvalidation__ASTValidationVisitor(&type_astvalidation__ASTValidationVisitor);
{
((void (*)(val*))(var1->class->vft[COLOR_kernel__Object__init]))(var1) /* init on <var1:ASTValidationVisitor>*/;
}
var_val = var1;
{
parser_nodes__Visitor__enter_visit(var_val, var_npropdef); /* Direct call parser_nodes#Visitor#enter_visit on <var_val:nullable Object(ASTValidationVisitor)>*/
}
RET_LABEL:;
}
/* method transform#TransformPhase#process_npropdef for (self: Object, APropdef) */
void VIRTUAL_transform__TransformPhase__process_npropdef(val* self, val* p0) {
transform__TransformPhase__process_npropdef(self, p0); /* Direct call transform#TransformPhase#process_npropdef on <self:Object(TransformPhase)>*/
RET_LABEL:;
}
/* method transform#TransformVisitor#phase for (self: TransformVisitor): TransformPhase */
val* transform__TransformVisitor__phase(val* self) {
val* var /* : TransformPhase */;
val* var1 /* : TransformPhase */;
var1 = self->attrs[COLOR_transform__TransformVisitor___phase].val; /* _phase on <self:TransformVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phase");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 55);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method transform#TransformVisitor#phase for (self: Object): TransformPhase */
val* VIRTUAL_transform__TransformVisitor__phase(val* self) {
val* var /* : TransformPhase */;
val* var1 /* : TransformPhase */;
val* var3 /* : TransformPhase */;
{ /* Inline transform#TransformVisitor#phase (self) on <self:Object(TransformVisitor)> */
var3 = self->attrs[COLOR_transform__TransformVisitor___phase].val; /* _phase on <self:Object(TransformVisitor)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phase");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 55);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method transform#TransformVisitor#phase= for (self: TransformVisitor, TransformPhase) */
void transform__TransformVisitor__phase_61d(val* self, val* p0) {
self->attrs[COLOR_transform__TransformVisitor___phase].val = p0; /* _phase on <self:TransformVisitor> */
RET_LABEL:;
}
/* method transform#TransformVisitor#phase= for (self: Object, TransformPhase) */
void VIRTUAL_transform__TransformVisitor__phase_61d(val* self, val* p0) {
{ /* Inline transform#TransformVisitor#phase= (self,p0) on <self:Object(TransformVisitor)> */
self->attrs[COLOR_transform__TransformVisitor___phase].val = p0; /* _phase on <self:Object(TransformVisitor)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method transform#TransformVisitor#mmodule for (self: TransformVisitor): MModule */
val* transform__TransformVisitor__mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_transform__TransformVisitor___mmodule].val; /* _mmodule on <self:TransformVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 56);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method transform#TransformVisitor#mmodule for (self: Object): MModule */
val* VIRTUAL_transform__TransformVisitor__mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
val* var3 /* : MModule */;
{ /* Inline transform#TransformVisitor#mmodule (self) on <self:Object(TransformVisitor)> */
var3 = self->attrs[COLOR_transform__TransformVisitor___mmodule].val; /* _mmodule on <self:Object(TransformVisitor)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 56);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method transform#TransformVisitor#mmodule= for (self: TransformVisitor, MModule) */
void transform__TransformVisitor__mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_transform__TransformVisitor___mmodule].val = p0; /* _mmodule on <self:TransformVisitor> */
RET_LABEL:;
}
/* method transform#TransformVisitor#mmodule= for (self: Object, MModule) */
void VIRTUAL_transform__TransformVisitor__mmodule_61d(val* self, val* p0) {
{ /* Inline transform#TransformVisitor#mmodule= (self,p0) on <self:Object(TransformVisitor)> */
self->attrs[COLOR_transform__TransformVisitor___mmodule].val = p0; /* _mmodule on <self:Object(TransformVisitor)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method transform#TransformVisitor#mclassdef for (self: TransformVisitor): MClassDef */
val* transform__TransformVisitor__mclassdef(val* self) {
val* var /* : MClassDef */;
val* var1 /* : MClassDef */;
var1 = self->attrs[COLOR_transform__TransformVisitor___mclassdef].val; /* _mclassdef on <self:TransformVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 57);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method transform#TransformVisitor#mclassdef for (self: Object): MClassDef */
val* VIRTUAL_transform__TransformVisitor__mclassdef(val* self) {
val* var /* : MClassDef */;
val* var1 /* : MClassDef */;
val* var3 /* : MClassDef */;
{ /* Inline transform#TransformVisitor#mclassdef (self) on <self:Object(TransformVisitor)> */
var3 = self->attrs[COLOR_transform__TransformVisitor___mclassdef].val; /* _mclassdef on <self:Object(TransformVisitor)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 57);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method transform#TransformVisitor#mclassdef= for (self: TransformVisitor, MClassDef) */
void transform__TransformVisitor__mclassdef_61d(val* self, val* p0) {
self->attrs[COLOR_transform__TransformVisitor___mclassdef].val = p0; /* _mclassdef on <self:TransformVisitor> */
RET_LABEL:;
}
/* method transform#TransformVisitor#mclassdef= for (self: Object, MClassDef) */
void VIRTUAL_transform__TransformVisitor__mclassdef_61d(val* self, val* p0) {
{ /* Inline transform#TransformVisitor#mclassdef= (self,p0) on <self:Object(TransformVisitor)> */
self->attrs[COLOR_transform__TransformVisitor___mclassdef].val = p0; /* _mclassdef on <self:Object(TransformVisitor)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method transform#TransformVisitor#mpropdef for (self: TransformVisitor): MPropDef */
val* transform__TransformVisitor__mpropdef(val* self) {
val* var /* : MPropDef */;
val* var1 /* : MPropDef */;
var1 = self->attrs[COLOR_transform__TransformVisitor___mpropdef].val; /* _mpropdef on <self:TransformVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 58);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method transform#TransformVisitor#mpropdef for (self: Object): MPropDef */
val* VIRTUAL_transform__TransformVisitor__mpropdef(val* self) {
val* var /* : MPropDef */;
val* var1 /* : MPropDef */;
val* var3 /* : MPropDef */;
{ /* Inline transform#TransformVisitor#mpropdef (self) on <self:Object(TransformVisitor)> */
var3 = self->attrs[COLOR_transform__TransformVisitor___mpropdef].val; /* _mpropdef on <self:Object(TransformVisitor)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 58);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method transform#TransformVisitor#mpropdef= for (self: TransformVisitor, MPropDef) */
void transform__TransformVisitor__mpropdef_61d(val* self, val* p0) {
self->attrs[COLOR_transform__TransformVisitor___mpropdef].val = p0; /* _mpropdef on <self:TransformVisitor> */
RET_LABEL:;
}
/* method transform#TransformVisitor#mpropdef= for (self: Object, MPropDef) */
void VIRTUAL_transform__TransformVisitor__mpropdef_61d(val* self, val* p0) {
{ /* Inline transform#TransformVisitor#mpropdef= (self,p0) on <self:Object(TransformVisitor)> */
self->attrs[COLOR_transform__TransformVisitor___mpropdef].val = p0; /* _mpropdef on <self:Object(TransformVisitor)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method transform#TransformVisitor#builder for (self: TransformVisitor): ASTBuilder */
val* transform__TransformVisitor__builder(val* self) {
val* var /* : ASTBuilder */;
val* var1 /* : ASTBuilder */;
var1 = self->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <self:TransformVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method transform#TransformVisitor#builder for (self: Object): ASTBuilder */
val* VIRTUAL_transform__TransformVisitor__builder(val* self) {
val* var /* : ASTBuilder */;
val* var1 /* : ASTBuilder */;
val* var3 /* : ASTBuilder */;
{ /* Inline transform#TransformVisitor#builder (self) on <self:Object(TransformVisitor)> */
var3 = self->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <self:Object(TransformVisitor)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method transform#TransformVisitor#builder= for (self: TransformVisitor, ASTBuilder) */
void transform__TransformVisitor__builder_61d(val* self, val* p0) {
self->attrs[COLOR_transform__TransformVisitor___builder].val = p0; /* _builder on <self:TransformVisitor> */
RET_LABEL:;
}
/* method transform#TransformVisitor#builder= for (self: Object, ASTBuilder) */
void VIRTUAL_transform__TransformVisitor__builder_61d(val* self, val* p0) {
{ /* Inline transform#TransformVisitor#builder= (self,p0) on <self:Object(TransformVisitor)> */
self->attrs[COLOR_transform__TransformVisitor___builder].val = p0; /* _builder on <self:Object(TransformVisitor)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method transform#TransformVisitor#init for (self: TransformVisitor, TransformPhase, APropdef) */
void transform__TransformVisitor__init(val* self, val* p0, val* p1) {
val* var_phase /* var phase: TransformPhase */;
val* var_npropdef /* var npropdef: APropdef */;
val* var /* : nullable MPropDef */;
val* var3 /* : nullable MPropDef */;
val* var5 /* : MPropDef */;
val* var7 /* : MPropDef */;
val* var8 /* : MClassDef */;
val* var10 /* : MClassDef */;
val* var12 /* : MClassDef */;
val* var14 /* : MClassDef */;
val* var15 /* : MModule */;
val* var17 /* : MModule */;
val* var19 /* : ASTBuilder */;
val* var20 /* : MModule */;
val* var22 /* : MModule */;
val* var23 /* : MPropDef */;
val* var25 /* : MPropDef */;
val* var26 /* : MClassDef */;
val* var28 /* : MClassDef */;
val* var29 /* : MClassType */;
val* var31 /* : MClassType */;
{
((void (*)(val*))(self->class->vft[COLOR_kernel__Object__init]))(self) /* init on <self:TransformVisitor>*/;
}
var_phase = p0;
var_npropdef = p1;
{
{ /* Inline transform#TransformVisitor#phase= (self,var_phase) on <self:TransformVisitor> */
self->attrs[COLOR_transform__TransformVisitor___phase].val = var_phase; /* _phase on <self:TransformVisitor> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:APropdef> */
var3 = var_npropdef->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:APropdef> */
var = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 64);
show_backtrace(1);
}
{
{ /* Inline transform#TransformVisitor#mpropdef= (self,var) on <self:TransformVisitor> */
self->attrs[COLOR_transform__TransformVisitor___mpropdef].val = var; /* _mpropdef on <self:TransformVisitor> */
RET_LABEL4:(void)0;
}
}
{
{ /* Inline transform#TransformVisitor#mpropdef (self) on <self:TransformVisitor> */
var7 = self->attrs[COLOR_transform__TransformVisitor___mpropdef].val; /* _mpropdef on <self:TransformVisitor> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 58);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var5) on <var5:MPropDef> */
var10 = var5->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var5:MPropDef> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline transform#TransformVisitor#mclassdef= (self,var8) on <self:TransformVisitor> */
self->attrs[COLOR_transform__TransformVisitor___mclassdef].val = var8; /* _mclassdef on <self:TransformVisitor> */
RET_LABEL11:(void)0;
}
}
{
{ /* Inline transform#TransformVisitor#mclassdef (self) on <self:TransformVisitor> */
var14 = self->attrs[COLOR_transform__TransformVisitor___mclassdef].val; /* _mclassdef on <self:TransformVisitor> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 57);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var12) on <var12:MClassDef> */
var17 = var12->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var12:MClassDef> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline transform#TransformVisitor#mmodule= (self,var15) on <self:TransformVisitor> */
self->attrs[COLOR_transform__TransformVisitor___mmodule].val = var15; /* _mmodule on <self:TransformVisitor> */
RET_LABEL18:(void)0;
}
}
var19 = NEW_astbuilder__ASTBuilder(&type_astbuilder__ASTBuilder);
{
{ /* Inline transform#TransformVisitor#mmodule (self) on <self:TransformVisitor> */
var22 = self->attrs[COLOR_transform__TransformVisitor___mmodule].val; /* _mmodule on <self:TransformVisitor> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 56);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline transform#TransformVisitor#mpropdef (self) on <self:TransformVisitor> */
var25 = self->attrs[COLOR_transform__TransformVisitor___mpropdef].val; /* _mpropdef on <self:TransformVisitor> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 58);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var23) on <var23:MPropDef> */
var28 = var23->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var23:MPropDef> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var26) on <var26:MClassDef> */
var31 = var26->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var26:MClassDef> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
((void (*)(val*, val*))(var19->class->vft[COLOR_astbuilder__ASTBuilder__mmodule_61d]))(var19, var20) /* mmodule= on <var19:ASTBuilder>*/;
}
{
((void (*)(val*, val*))(var19->class->vft[COLOR_astbuilder__ASTBuilder__anchor_61d]))(var19, var29) /* anchor= on <var19:ASTBuilder>*/;
}
{
((void (*)(val*))(var19->class->vft[COLOR_kernel__Object__init]))(var19) /* init on <var19:ASTBuilder>*/;
}
{
{ /* Inline transform#TransformVisitor#builder= (self,var19) on <self:TransformVisitor> */
self->attrs[COLOR_transform__TransformVisitor___builder].val = var19; /* _builder on <self:TransformVisitor> */
RET_LABEL32:(void)0;
}
}
RET_LABEL:;
}
/* method transform#TransformVisitor#init for (self: Object, TransformPhase, APropdef) */
void VIRTUAL_transform__TransformVisitor__init(val* self, val* p0, val* p1) {
transform__TransformVisitor__init(self, p0, p1); /* Direct call transform#TransformVisitor#init on <self:Object(TransformVisitor)>*/
RET_LABEL:;
}
/* method transform#TransformVisitor#visit for (self: TransformVisitor, ANode) */
void transform__TransformVisitor__visit(val* self, val* p0) {
val* var_node /* var node: ANode */;
short int var /* : Bool */;
int cltype;
int idtype;
var_node = p0;
/* <var_node:ANode> isa AAnnotations */
cltype = type_parser_nodes__AAnnotations.color;
idtype = type_parser_nodes__AAnnotations.id;
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
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__visit_all]))(var_node, self) /* visit_all on <var_node:ANode>*/;
}
{
((void (*)(val*, val*))(var_node->class->vft[COLOR_transform__ANode__accept_transform_visitor]))(var_node, self) /* accept_transform_visitor on <var_node:ANode>*/;
}
RET_LABEL:;
}
/* method transform#TransformVisitor#visit for (self: Object, ANode) */
void VIRTUAL_transform__TransformVisitor__visit(val* self, val* p0) {
transform__TransformVisitor__visit(self, p0); /* Direct call transform#TransformVisitor#visit on <self:Object(TransformVisitor)>*/
RET_LABEL:;
}
/* method transform#ANode#accept_transform_visitor for (self: ANode, TransformVisitor) */
void transform__ANode__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method transform#ANode#accept_transform_visitor for (self: Object, TransformVisitor) */
void VIRTUAL_transform__ANode__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
{ /* Inline transform#ANode#accept_transform_visitor (self,p0) on <self:Object(ANode)> */
var_v = p0;
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method transform#AVardeclExpr#accept_transform_visitor for (self: AVardeclExpr, TransformVisitor) */
void transform__AVardeclExpr__accept_transform_visitor(val* self, val* p0) {
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
var2 = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_expr].val; /* _n_expr on <self:AVardeclExpr> */
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
var12 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline scope#AVardeclExpr#variable (self) on <self:AVardeclExpr> */
var15 = self->attrs[COLOR_scope__AVardeclExpr___variable].val; /* _variable on <self:AVardeclExpr> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 110);
show_backtrace(1);
}
{
var16 = astbuilder__ASTBuilder__make_var_assign(var10, var13, var_nexpr);
}
var_nvar = var16;
{
parser_nodes__Prod__replace_with(self, var_nvar); /* Direct call parser_nodes#Prod#replace_with on <self:AVardeclExpr>*/
}
}
RET_LABEL:;
}
/* method transform#AVardeclExpr#accept_transform_visitor for (self: Object, TransformVisitor) */
void VIRTUAL_transform__AVardeclExpr__accept_transform_visitor(val* self, val* p0) {
transform__AVardeclExpr__accept_transform_visitor(self, p0); /* Direct call transform#AVardeclExpr#accept_transform_visitor on <self:Object(AVardeclExpr)>*/
RET_LABEL:;
}
/* method transform#AIfexprExpr#accept_transform_visitor for (self: AIfexprExpr, TransformVisitor) */
void transform__AIfexprExpr__accept_transform_visitor(val* self, val* p0) {
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
var2 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline parser_nodes#AIfexprExpr#n_expr (self) on <self:AIfexprExpr> */
var5 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_expr].val; /* _n_expr on <self:AIfexprExpr> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1396);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype (self) on <self:AIfexprExpr> */
var8 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:AIfexprExpr> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = astbuilder__ASTBuilder__make_if(var, var3, var6);
}
var_nif = var9;
{
{ /* Inline parser_nodes#AIfExpr#n_then (var_nif) on <var_nif:AIfExpr> */
var12 = var_nif->attrs[COLOR_parser_nodes__AIfExpr___n_then].val; /* _n_then on <var_nif:AIfExpr> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline parser_nodes#AIfexprExpr#n_then (self) on <self:AIfexprExpr> */
var15 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_then].val; /* _n_then on <self:AIfexprExpr> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_then");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1398);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (var10 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 123);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var10->class->vft[COLOR_astbuilder__AExpr__add]))(var10, var13) /* add on <var10:nullable AExpr>*/;
}
{
{ /* Inline parser_nodes#AIfExpr#n_else (var_nif) on <var_nif:AIfExpr> */
var18 = var_nif->attrs[COLOR_parser_nodes__AIfExpr___n_else].val; /* _n_else on <var_nif:AIfExpr> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline parser_nodes#AIfexprExpr#n_else (self) on <self:AIfexprExpr> */
var21 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_else].val; /* _n_else on <self:AIfexprExpr> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_else");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1400);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
if (var16 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 124);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var16->class->vft[COLOR_astbuilder__AExpr__add]))(var16, var19) /* add on <var16:nullable AExpr>*/;
}
{
parser_nodes__Prod__replace_with(self, var_nif); /* Direct call parser_nodes#Prod#replace_with on <self:AIfexprExpr>*/
}
RET_LABEL:;
}
/* method transform#AIfexprExpr#accept_transform_visitor for (self: Object, TransformVisitor) */
void VIRTUAL_transform__AIfexprExpr__accept_transform_visitor(val* self, val* p0) {
transform__AIfexprExpr__accept_transform_visitor(self, p0); /* Direct call transform#AIfexprExpr#accept_transform_visitor on <self:Object(AIfexprExpr)>*/
RET_LABEL:;
}
/* method transform#AOrExpr#accept_transform_visitor for (self: AOrExpr, TransformVisitor) */
void transform__AOrExpr__accept_transform_visitor(val* self, val* p0) {
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
var2 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline parser_nodes#AOrExpr#n_expr (self) on <self:AOrExpr> */
var5 = self->attrs[COLOR_parser_nodes__AOrExpr___n_expr].val; /* _n_expr on <self:AOrExpr> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1486);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype (self) on <self:AOrExpr> */
var8 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:AOrExpr> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = astbuilder__ASTBuilder__make_if(var, var3, var6);
}
var_nif = var9;
{
{ /* Inline parser_nodes#AIfExpr#n_then (var_nif) on <var_nif:AIfExpr> */
var12 = var_nif->attrs[COLOR_parser_nodes__AIfExpr___n_then].val; /* _n_then on <var_nif:AIfExpr> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline parser_nodes#AOrExpr#n_expr (self) on <self:AOrExpr> */
var15 = self->attrs[COLOR_parser_nodes__AOrExpr___n_expr].val; /* _n_expr on <self:AOrExpr> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1486);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = astbuilder__AExpr__make_var_read(var13);
}
if (var10 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 135);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var10->class->vft[COLOR_astbuilder__AExpr__add]))(var10, var16) /* add on <var10:nullable AExpr>*/;
}
{
{ /* Inline parser_nodes#AIfExpr#n_else (var_nif) on <var_nif:AIfExpr> */
var19 = var_nif->attrs[COLOR_parser_nodes__AIfExpr___n_else].val; /* _n_else on <var_nif:AIfExpr> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline parser_nodes#AOrExpr#n_expr2 (self) on <self:AOrExpr> */
var22 = self->attrs[COLOR_parser_nodes__AOrExpr___n_expr2].val; /* _n_expr2 on <self:AOrExpr> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1487);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
if (var17 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 136);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var17->class->vft[COLOR_astbuilder__AExpr__add]))(var17, var20) /* add on <var17:nullable AExpr>*/;
}
{
parser_nodes__Prod__replace_with(self, var_nif); /* Direct call parser_nodes#Prod#replace_with on <self:AOrExpr>*/
}
RET_LABEL:;
}
/* method transform#AOrExpr#accept_transform_visitor for (self: Object, TransformVisitor) */
void VIRTUAL_transform__AOrExpr__accept_transform_visitor(val* self, val* p0) {
transform__AOrExpr__accept_transform_visitor(self, p0); /* Direct call transform#AOrExpr#accept_transform_visitor on <self:Object(AOrExpr)>*/
RET_LABEL:;
}
/* method transform#AImpliesExpr#accept_transform_visitor for (self: AImpliesExpr, TransformVisitor) */
void transform__AImpliesExpr__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method transform#AImpliesExpr#accept_transform_visitor for (self: Object, TransformVisitor) */
void VIRTUAL_transform__AImpliesExpr__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
{ /* Inline transform#AImpliesExpr#accept_transform_visitor (self,p0) on <self:Object(AImpliesExpr)> */
var_v = p0;
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method transform#AAndExpr#accept_transform_visitor for (self: AAndExpr, TransformVisitor) */
void transform__AAndExpr__accept_transform_visitor(val* self, val* p0) {
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
var2 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline parser_nodes#AAndExpr#n_expr (self) on <self:AAndExpr> */
var5 = self->attrs[COLOR_parser_nodes__AAndExpr___n_expr].val; /* _n_expr on <self:AAndExpr> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1493);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype (self) on <self:AAndExpr> */
var8 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:AAndExpr> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = astbuilder__ASTBuilder__make_if(var, var3, var6);
}
var_nif = var9;
{
{ /* Inline parser_nodes#AIfExpr#n_then (var_nif) on <var_nif:AIfExpr> */
var12 = var_nif->attrs[COLOR_parser_nodes__AIfExpr___n_then].val; /* _n_then on <var_nif:AIfExpr> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline parser_nodes#AAndExpr#n_expr2 (self) on <self:AAndExpr> */
var15 = self->attrs[COLOR_parser_nodes__AAndExpr___n_expr2].val; /* _n_expr2 on <self:AAndExpr> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1494);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (var10 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 154);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var10->class->vft[COLOR_astbuilder__AExpr__add]))(var10, var13) /* add on <var10:nullable AExpr>*/;
}
{
{ /* Inline parser_nodes#AIfExpr#n_else (var_nif) on <var_nif:AIfExpr> */
var18 = var_nif->attrs[COLOR_parser_nodes__AIfExpr___n_else].val; /* _n_else on <var_nif:AIfExpr> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline parser_nodes#AAndExpr#n_expr (self) on <self:AAndExpr> */
var21 = self->attrs[COLOR_parser_nodes__AAndExpr___n_expr].val; /* _n_expr on <self:AAndExpr> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1493);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = astbuilder__AExpr__make_var_read(var19);
}
if (var16 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 155);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var16->class->vft[COLOR_astbuilder__AExpr__add]))(var16, var22) /* add on <var16:nullable AExpr>*/;
}
{
parser_nodes__Prod__replace_with(self, var_nif); /* Direct call parser_nodes#Prod#replace_with on <self:AAndExpr>*/
}
RET_LABEL:;
}
/* method transform#AAndExpr#accept_transform_visitor for (self: Object, TransformVisitor) */
void VIRTUAL_transform__AAndExpr__accept_transform_visitor(val* self, val* p0) {
transform__AAndExpr__accept_transform_visitor(self, p0); /* Direct call transform#AAndExpr#accept_transform_visitor on <self:Object(AAndExpr)>*/
RET_LABEL:;
}
/* method transform#AWhileExpr#accept_transform_visitor for (self: AWhileExpr, TransformVisitor) */
void transform__AWhileExpr__accept_transform_visitor(val* self, val* p0) {
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
short int var21 /* : Bool */;
val* var22 /* : nullable AExpr */;
val* var24 /* : nullable AExpr */;
val* var25 /* : nullable EscapeMark */;
val* var27 /* : nullable EscapeMark */;
val* var_escapemark /* var escapemark: EscapeMark */;
val* var28 /* : ASTBuilder */;
val* var30 /* : ASTBuilder */;
val* var31 /* : ABreakExpr */;
val* var_nbreak /* var nbreak: ABreakExpr */;
val* var32 /* : nullable AExpr */;
val* var34 /* : nullable AExpr */;
val* var35 /* : nullable EscapeMark */;
val* var37 /* : nullable EscapeMark */;
val* var39 /* : nullable EscapeMark */;
val* var41 /* : nullable EscapeMark */;
var_v = p0;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var2 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = astbuilder__ASTBuilder__make_loop(var);
}
var_nloop = var3;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var6 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline parser_nodes#AWhileExpr#n_expr (self) on <self:AWhileExpr> */
var9 = self->attrs[COLOR_parser_nodes__AWhileExpr___n_expr].val; /* _n_expr on <self:AWhileExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1408);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var10 = NULL;
{
var11 = astbuilder__ASTBuilder__make_if(var4, var7, var10);
}
var_nif = var11;
{
astbuilder__ALoopExpr__add(var_nloop, var_nif); /* Direct call astbuilder#ALoopExpr#add on <var_nloop:ALoopExpr>*/
}
{
{ /* Inline parser_nodes#AWhileExpr#n_block (self) on <self:AWhileExpr> */
var14 = self->attrs[COLOR_parser_nodes__AWhileExpr___n_block].val; /* _n_block on <self:AWhileExpr> */
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
var20 = ((short int (*)(val*, val*))(var_nblock->class->vft[COLOR_kernel__Object___61d_61d]))(var_nblock, var_other) /* == on <var_nblock:nullable AExpr(AExpr)>*/;
var19 = var20;
}
var21 = !var19;
var17 = var21;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var16 = var17;
}
if (var16){
{
{ /* Inline parser_nodes#AIfExpr#n_then (var_nif) on <var_nif:AIfExpr> */
var24 = var_nif->attrs[COLOR_parser_nodes__AIfExpr___n_then].val; /* _n_then on <var_nif:AIfExpr> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
if (var22 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 169);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var22->class->vft[COLOR_astbuilder__AExpr__add]))(var22, var_nblock) /* add on <var22:nullable AExpr>*/;
}
} else {
}
{
{ /* Inline scope#AWhileExpr#break_mark (self) on <self:AWhileExpr> */
var27 = self->attrs[COLOR_scope__AWhileExpr___break_mark].val; /* _break_mark on <self:AWhileExpr> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 171);
show_backtrace(1);
}
var_escapemark = var25;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var30 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
var31 = astbuilder__ASTBuilder__make_break(var28, var_escapemark);
}
var_nbreak = var31;
{
{ /* Inline parser_nodes#AIfExpr#n_else (var_nif) on <var_nif:AIfExpr> */
var34 = var_nif->attrs[COLOR_parser_nodes__AIfExpr___n_else].val; /* _n_else on <var_nif:AIfExpr> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
if (var32 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 173);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var32->class->vft[COLOR_astbuilder__AExpr__add]))(var32, var_nbreak) /* add on <var32:nullable AExpr>*/;
}
{
{ /* Inline scope#AWhileExpr#break_mark (self) on <self:AWhileExpr> */
var37 = self->attrs[COLOR_scope__AWhileExpr___break_mark].val; /* _break_mark on <self:AWhileExpr> */
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline scope#ALoopExpr#break_mark= (var_nloop,var35) on <var_nloop:ALoopExpr> */
var_nloop->attrs[COLOR_scope__ALoopExpr___break_mark].val = var35; /* _break_mark on <var_nloop:ALoopExpr> */
RET_LABEL38:(void)0;
}
}
{
{ /* Inline scope#AWhileExpr#continue_mark (self) on <self:AWhileExpr> */
var41 = self->attrs[COLOR_scope__AWhileExpr___continue_mark].val; /* _continue_mark on <self:AWhileExpr> */
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline scope#ALoopExpr#continue_mark= (var_nloop,var39) on <var_nloop:ALoopExpr> */
var_nloop->attrs[COLOR_scope__ALoopExpr___continue_mark].val = var39; /* _continue_mark on <var_nloop:ALoopExpr> */
RET_LABEL42:(void)0;
}
}
{
parser_nodes__Prod__replace_with(self, var_nloop); /* Direct call parser_nodes#Prod#replace_with on <self:AWhileExpr>*/
}
RET_LABEL:;
}
/* method transform#AWhileExpr#accept_transform_visitor for (self: Object, TransformVisitor) */
void VIRTUAL_transform__AWhileExpr__accept_transform_visitor(val* self, val* p0) {
transform__AWhileExpr__accept_transform_visitor(self, p0); /* Direct call transform#AWhileExpr#accept_transform_visitor on <self:Object(AWhileExpr)>*/
RET_LABEL:;
}
/* method transform#AForExpr#accept_transform_visitor for (self: AForExpr, TransformVisitor) */
void transform__AForExpr__accept_transform_visitor(val* self, val* p0) {
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
short int var9 /* : Bool */;
val* var10 /* : ASTBuilder */;
val* var12 /* : ASTBuilder */;
val* var13 /* : ABlockExpr */;
val* var_nblock /* var nblock: ABlockExpr */;
val* var14 /* : AExpr */;
val* var16 /* : AExpr */;
val* var_nexpr /* var nexpr: AExpr */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : nullable Array[Variable] */;
val* var21 /* : nullable Array[Variable] */;
long var22 /* : Int */;
long var24 /* : Int */;
long var25 /* : Int */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
short int var_ /* var : Bool */;
short int var30 /* : Bool */;
int cltype;
int idtype;
short int var_31 /* var : Bool */;
val* var32 /* : TransformPhase */;
val* var34 /* : TransformPhase */;
val* var35 /* : ToolContext */;
val* var37 /* : ToolContext */;
val* var38 /* : OptionBool */;
val* var40 /* : OptionBool */;
val* var41 /* : nullable Object */;
val* var43 /* : nullable Object */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
val* var46 /* : nullable Array[Variable] */;
val* var48 /* : nullable Array[Variable] */;
val* var49 /* : nullable Object */;
val* var_variable /* var variable: Variable */;
val* var50 /* : ASTBuilder */;
val* var52 /* : ASTBuilder */;
val* var53 /* : AExpr */;
val* var55 /* : AExpr */;
val* var56 /* : AVarAssignExpr */;
val* var57 /* : AExpr */;
val* var59 /* : AExpr */;
val* var_to /* var to: AExpr */;
val* var60 /* : ASTBuilder */;
val* var62 /* : ASTBuilder */;
val* var63 /* : ALoopExpr */;
val* var_nloop /* var nloop: ALoopExpr */;
val* var65 /* : ASTBuilder */;
val* var67 /* : ASTBuilder */;
val* var68 /* : ASTBuilder */;
val* var70 /* : ASTBuilder */;
val* var71 /* : nullable MType */;
val* var73 /* : nullable MType */;
val* var74 /* : AVarExpr */;
val* var75 /* : nullable CallSite */;
val* var77 /* : nullable CallSite */;
val* var78 /* : Array[AVarExpr] */;
long var79 /* : Int */;
val* var_80 /* var : Array[AVarExpr] */;
val* var81 /* : AVarExpr */;
val* var82 /* : ACallExpr */;
val* var_is_ok /* var is_ok: ACallExpr */;
val* var83 /* : ASTBuilder */;
val* var85 /* : ASTBuilder */;
val* var86 /* : null */;
val* var87 /* : AIfExpr */;
val* var_nif /* var nif: AIfExpr */;
val* var88 /* : nullable AExpr */;
val* var90 /* : nullable AExpr */;
val* var_nthen /* var nthen: nullable AExpr */;
val* var91 /* : ASTBuilder */;
val* var93 /* : ASTBuilder */;
val* var94 /* : ADoExpr */;
val* var_ndo /* var ndo: ADoExpr */;
val* var95 /* : nullable EscapeMark */;
val* var97 /* : nullable EscapeMark */;
val* var99 /* : nullable AExpr */;
val* var101 /* : nullable AExpr */;
val* var102 /* : ASTBuilder */;
val* var104 /* : ASTBuilder */;
long var105 /* : Int */;
val* var106 /* : AIntExpr */;
val* var_one /* var one: AIntExpr */;
val* var107 /* : ASTBuilder */;
val* var109 /* : ASTBuilder */;
val* var110 /* : ASTBuilder */;
val* var112 /* : ASTBuilder */;
val* var113 /* : nullable MType */;
val* var115 /* : nullable MType */;
val* var116 /* : AVarExpr */;
val* var117 /* : nullable CallSite */;
val* var119 /* : nullable CallSite */;
val* var120 /* : Array[AIntExpr] */;
long var121 /* : Int */;
val* var_122 /* var : Array[AIntExpr] */;
val* var123 /* : ACallExpr */;
val* var_succ /* var succ: ACallExpr */;
val* var124 /* : ASTBuilder */;
val* var126 /* : ASTBuilder */;
val* var127 /* : AVarAssignExpr */;
val* var128 /* : ASTBuilder */;
val* var130 /* : ASTBuilder */;
val* var131 /* : ABreakExpr */;
val* var_nbreak /* var nbreak: ABreakExpr */;
val* var132 /* : nullable AExpr */;
val* var134 /* : nullable AExpr */;
val* var135 /* : ASTBuilder */;
val* var137 /* : ASTBuilder */;
val* var138 /* : AVarExpr */;
val* var139 /* : nullable CallSite */;
val* var141 /* : nullable CallSite */;
val* var142 /* : null */;
val* var143 /* : ACallExpr */;
val* var_iter /* var iter: ACallExpr */;
val* var144 /* : ASTBuilder */;
val* var146 /* : ASTBuilder */;
val* var147 /* : ALoopExpr */;
val* var_nloop148 /* var nloop: ALoopExpr */;
val* var150 /* : ASTBuilder */;
val* var152 /* : ASTBuilder */;
val* var153 /* : AVarExpr */;
val* var154 /* : nullable CallSite */;
val* var156 /* : nullable CallSite */;
val* var157 /* : null */;
val* var158 /* : ACallExpr */;
val* var_is_ok159 /* var is_ok: ACallExpr */;
val* var160 /* : ASTBuilder */;
val* var162 /* : ASTBuilder */;
val* var163 /* : null */;
val* var164 /* : AIfExpr */;
val* var_nif165 /* var nif: AIfExpr */;
val* var166 /* : nullable AExpr */;
val* var168 /* : nullable AExpr */;
val* var_nthen169 /* var nthen: nullable AExpr */;
val* var170 /* : ASTBuilder */;
val* var172 /* : ASTBuilder */;
val* var173 /* : ADoExpr */;
val* var_ndo174 /* var ndo: ADoExpr */;
val* var175 /* : nullable EscapeMark */;
val* var177 /* : nullable EscapeMark */;
val* var179 /* : nullable Array[Variable] */;
val* var181 /* : nullable Array[Variable] */;
long var182 /* : Int */;
long var184 /* : Int */;
long var185 /* : Int */;
short int var186 /* : Bool */;
short int var187 /* : Bool */;
short int var189 /* : Bool */;
val* var190 /* : ASTBuilder */;
val* var192 /* : ASTBuilder */;
val* var193 /* : AVarExpr */;
val* var194 /* : nullable CallSite */;
val* var196 /* : nullable CallSite */;
val* var197 /* : null */;
val* var198 /* : ACallExpr */;
val* var_item /* var item: ACallExpr */;
val* var199 /* : ASTBuilder */;
val* var201 /* : ASTBuilder */;
val* var202 /* : nullable Array[Variable] */;
val* var204 /* : nullable Array[Variable] */;
val* var205 /* : nullable Object */;
val* var206 /* : AVarAssignExpr */;
val* var207 /* : nullable Array[Variable] */;
val* var209 /* : nullable Array[Variable] */;
long var210 /* : Int */;
long var212 /* : Int */;
long var213 /* : Int */;
short int var214 /* : Bool */;
short int var215 /* : Bool */;
short int var217 /* : Bool */;
val* var218 /* : ASTBuilder */;
val* var220 /* : ASTBuilder */;
val* var221 /* : AVarExpr */;
val* var222 /* : nullable CallSite */;
val* var224 /* : nullable CallSite */;
val* var225 /* : null */;
val* var226 /* : ACallExpr */;
val* var_key /* var key: ACallExpr */;
val* var227 /* : ASTBuilder */;
val* var229 /* : ASTBuilder */;
val* var230 /* : nullable Array[Variable] */;
val* var232 /* : nullable Array[Variable] */;
long var233 /* : Int */;
val* var234 /* : nullable Object */;
val* var235 /* : AVarAssignExpr */;
val* var236 /* : ASTBuilder */;
val* var238 /* : ASTBuilder */;
val* var239 /* : AVarExpr */;
val* var240 /* : nullable CallSite */;
val* var242 /* : nullable CallSite */;
val* var243 /* : null */;
val* var244 /* : ACallExpr */;
val* var_item245 /* var item: ACallExpr */;
val* var246 /* : ASTBuilder */;
val* var248 /* : ASTBuilder */;
val* var249 /* : nullable Array[Variable] */;
val* var251 /* : nullable Array[Variable] */;
long var252 /* : Int */;
val* var253 /* : nullable Object */;
val* var254 /* : AVarAssignExpr */;
val* var255 /* : nullable AExpr */;
val* var257 /* : nullable AExpr */;
val* var258 /* : ASTBuilder */;
val* var260 /* : ASTBuilder */;
val* var261 /* : AVarExpr */;
val* var262 /* : nullable CallSite */;
val* var264 /* : nullable CallSite */;
val* var265 /* : null */;
val* var266 /* : ACallExpr */;
val* var267 /* : ASTBuilder */;
val* var269 /* : ASTBuilder */;
val* var270 /* : ABreakExpr */;
val* var_nbreak271 /* var nbreak: ABreakExpr */;
val* var272 /* : nullable AExpr */;
val* var274 /* : nullable AExpr */;
val* var275 /* : nullable CallSite */;
val* var277 /* : nullable CallSite */;
val* var_method_finish /* var method_finish: nullable CallSite */;
val* var278 /* : null */;
short int var279 /* : Bool */;
short int var280 /* : Bool */;
short int var282 /* : Bool */;
short int var283 /* : Bool */;
short int var284 /* : Bool */;
val* var285 /* : ASTBuilder */;
val* var287 /* : ASTBuilder */;
val* var288 /* : AVarExpr */;
val* var289 /* : null */;
val* var290 /* : ACallExpr */;
var_v = p0;
{
{ /* Inline scope#AForExpr#break_mark (self) on <self:AForExpr> */
var2 = self->attrs[COLOR_scope__AForExpr___break_mark].val; /* _break_mark on <self:AForExpr> */
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
var8 = ((short int (*)(val*, val*))(var_escapemark->class->vft[COLOR_kernel__Object___61d_61d]))(var_escapemark, var_other) /* == on <var_escapemark:nullable EscapeMark(EscapeMark)>*/;
var7 = var8;
}
var9 = !var7;
var5 = var9;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 186);
show_backtrace(1);
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var12 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = astbuilder__ASTBuilder__make_block(var10);
}
var_nblock = var13;
{
{ /* Inline parser_nodes#AForExpr#n_expr (self) on <self:AForExpr> */
var16 = self->attrs[COLOR_parser_nodes__AForExpr___n_expr].val; /* _n_expr on <self:AForExpr> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1427);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
var_nexpr = var14;
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var21 = self->attrs[COLOR_scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
if (var19 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 194);
show_backtrace(1);
} else {
{ /* Inline array#AbstractArrayRead#length (var19) on <var19:nullable Array[Variable]> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 24);
show_backtrace(1);
}
var24 = var19->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var19:nullable Array[Variable]> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
var25 = 1;
{
{ /* Inline kernel#Int#== (var22,var25) on <var22:Int> */
var29 = var22 == var25;
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
var26 = var27;
}
var_ = var26;
if (var26){
/* <var_nexpr:AExpr> isa ARangeExpr */
cltype = type_parser_nodes__ARangeExpr.color;
idtype = type_parser_nodes__ARangeExpr.id;
if(cltype >= var_nexpr->type->table_size) {
var30 = 0;
} else {
var30 = var_nexpr->type->type_table[cltype] == idtype;
}
var18 = var30;
} else {
var18 = var_;
}
var_31 = var18;
if (var18){
{
{ /* Inline transform#TransformVisitor#phase (var_v) on <var_v:TransformVisitor> */
var34 = var_v->attrs[COLOR_transform__TransformVisitor___phase].val; /* _phase on <var_v:TransformVisitor> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phase");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 55);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline phase#Phase#toolcontext (var32) on <var32:TransformPhase> */
var37 = var32->attrs[COLOR_phase__Phase___toolcontext].val; /* _toolcontext on <var32:TransformPhase> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "phase.nit", 162);
show_backtrace(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline transform#ToolContext#opt_no_shortcut_range (var35) on <var35:ToolContext> */
var40 = var35->attrs[COLOR_transform__ToolContext___opt_no_shortcut_range].val; /* _opt_no_shortcut_range on <var35:ToolContext> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_shortcut_range");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 27);
show_backtrace(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline opts#Option#value (var38) on <var38:OptionBool> */
var43 = var38->attrs[COLOR_opts__Option___value].val; /* _value on <var38:OptionBool> */
var41 = var43;
RET_LABEL42:(void)0;
}
}
var44 = ((struct instance_kernel__Bool*)var41)->value; /* autounbox from nullable Object to Bool */;
var45 = !var44;
var17 = var45;
} else {
var17 = var_31;
}
if (var17){
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var48 = self->attrs[COLOR_scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var46 = var48;
RET_LABEL47:(void)0;
}
}
if (var46 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 195);
show_backtrace(1);
} else {
var49 = abstract_collection__SequenceRead__first(var46);
}
var_variable = var49;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var52 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline parser_nodes#ARangeExpr#n_expr (var_nexpr) on <var_nexpr:AExpr(ARangeExpr)> */
var55 = var_nexpr->attrs[COLOR_parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <var_nexpr:AExpr(ARangeExpr)> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1754);
show_backtrace(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
var56 = astbuilder__ASTBuilder__make_var_assign(var50, var_variable, var53);
}
{
astbuilder__ABlockExpr__add(var_nblock, var56); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
{
{ /* Inline parser_nodes#ARangeExpr#n_expr2 (var_nexpr) on <var_nexpr:AExpr(ARangeExpr)> */
var59 = var_nexpr->attrs[COLOR_parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <var_nexpr:AExpr(ARangeExpr)> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1755);
show_backtrace(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
var_to = var57;
{
astbuilder__ABlockExpr__add(var_nblock, var_to); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var62 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
var63 = astbuilder__ASTBuilder__make_loop(var60);
}
var_nloop = var63;
{
{ /* Inline scope#ALoopExpr#break_mark= (var_nloop,var_escapemark) on <var_nloop:ALoopExpr> */
var_nloop->attrs[COLOR_scope__ALoopExpr___break_mark].val = var_escapemark; /* _break_mark on <var_nloop:ALoopExpr> */
RET_LABEL64:(void)0;
}
}
{
astbuilder__ABlockExpr__add(var_nblock, var_nloop); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var67 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var67 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var70 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:Variable> */
var73 = var_variable->attrs[COLOR_typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var71 = var73;
RET_LABEL72:(void)0;
}
}
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 204);
show_backtrace(1);
}
{
var74 = astbuilder__ASTBuilder__make_var_read(var68, var_variable, var71);
}
{
{ /* Inline typing#AForExpr#method_lt (self) on <self:AForExpr> */
var77 = self->attrs[COLOR_typing__AForExpr___method_lt].val; /* _method_lt on <self:AForExpr> */
var75 = var77;
RET_LABEL76:(void)0;
}
}
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 204);
show_backtrace(1);
}
var78 = NEW_array__Array(&type_array__Arrayparser_nodes__AVarExpr);
var79 = 1;
{
array__Array__with_capacity(var78, var79); /* Direct call array#Array#with_capacity on <var78:Array[AVarExpr]>*/
}
var_80 = var78;
{
var81 = astbuilder__AExpr__make_var_read(var_to);
}
{
array__AbstractArray__push(var_80, var81); /* Direct call array#AbstractArray#push on <var_80:Array[AVarExpr]>*/
}
{
var82 = astbuilder__ASTBuilder__make_call(var65, var74, var75, var_80);
}
var_is_ok = var82;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var85 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var85 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var83 = var85;
RET_LABEL84:(void)0;
}
}
var86 = NULL;
{
var87 = astbuilder__ASTBuilder__make_if(var83, var_is_ok, var86);
}
var_nif = var87;
{
astbuilder__ALoopExpr__add(var_nloop, var_nif); /* Direct call astbuilder#ALoopExpr#add on <var_nloop:ALoopExpr>*/
}
{
{ /* Inline parser_nodes#AIfExpr#n_then (var_nif) on <var_nif:AIfExpr> */
var90 = var_nif->attrs[COLOR_parser_nodes__AIfExpr___n_then].val; /* _n_then on <var_nif:AIfExpr> */
var88 = var90;
RET_LABEL89:(void)0;
}
}
var_nthen = var88;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var93 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var93 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var91 = var93;
RET_LABEL92:(void)0;
}
}
{
var94 = astbuilder__ASTBuilder__make_do(var91);
}
var_ndo = var94;
{
{ /* Inline scope#EscapeMark#continue_mark (var_escapemark) on <var_escapemark:nullable EscapeMark(EscapeMark)> */
var97 = var_escapemark->attrs[COLOR_scope__EscapeMark___continue_mark].val; /* _continue_mark on <var_escapemark:nullable EscapeMark(EscapeMark)> */
var95 = var97;
RET_LABEL96:(void)0;
}
}
{
{ /* Inline scope#ADoExpr#break_mark= (var_ndo,var95) on <var_ndo:ADoExpr> */
var_ndo->attrs[COLOR_scope__ADoExpr___break_mark].val = var95; /* _break_mark on <var_ndo:ADoExpr> */
RET_LABEL98:(void)0;
}
}
if (var_nthen == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 212);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_nthen->class->vft[COLOR_astbuilder__AExpr__add]))(var_nthen, var_ndo) /* add on <var_nthen:nullable AExpr>*/;
}
{
{ /* Inline parser_nodes#AForExpr#n_block (self) on <self:AForExpr> */
var101 = self->attrs[COLOR_parser_nodes__AForExpr___n_block].val; /* _n_block on <self:AForExpr> */
var99 = var101;
RET_LABEL100:(void)0;
}
}
if (unlikely(var99 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 214);
show_backtrace(1);
}
{
astbuilder__ADoExpr__add(var_ndo, var99); /* Direct call astbuilder#ADoExpr#add on <var_ndo:ADoExpr>*/
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var104 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var104 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var102 = var104;
RET_LABEL103:(void)0;
}
}
var105 = 1;
{
var106 = astbuilder__ASTBuilder__make_int(var102, var105);
}
var_one = var106;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var109 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var109 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var107 = var109;
RET_LABEL108:(void)0;
}
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var112 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var112 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var110 = var112;
RET_LABEL111:(void)0;
}
}
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:Variable> */
var115 = var_variable->attrs[COLOR_typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var113 = var115;
RET_LABEL114:(void)0;
}
}
if (unlikely(var113 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 217);
show_backtrace(1);
}
{
var116 = astbuilder__ASTBuilder__make_var_read(var110, var_variable, var113);
}
{
{ /* Inline typing#AForExpr#method_successor (self) on <self:AForExpr> */
var119 = self->attrs[COLOR_typing__AForExpr___method_successor].val; /* _method_successor on <self:AForExpr> */
var117 = var119;
RET_LABEL118:(void)0;
}
}
if (unlikely(var117 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 217);
show_backtrace(1);
}
var120 = NEW_array__Array(&type_array__Arrayparser_nodes__AIntExpr);
var121 = 1;
{
array__Array__with_capacity(var120, var121); /* Direct call array#Array#with_capacity on <var120:Array[AIntExpr]>*/
}
var_122 = var120;
{
array__AbstractArray__push(var_122, var_one); /* Direct call array#AbstractArray#push on <var_122:Array[AIntExpr]>*/
}
{
var123 = astbuilder__ASTBuilder__make_call(var107, var116, var117, var_122);
}
var_succ = var123;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var126 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var126 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var124 = var126;
RET_LABEL125:(void)0;
}
}
{
var127 = astbuilder__ASTBuilder__make_var_assign(var124, var_variable, var_succ);
}
if (var_nthen == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 218);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_nthen->class->vft[COLOR_astbuilder__AExpr__add]))(var_nthen, var127) /* add on <var_nthen:nullable AExpr>*/;
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var130 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var130 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var128 = var130;
RET_LABEL129:(void)0;
}
}
{
var131 = astbuilder__ASTBuilder__make_break(var128, var_escapemark);
}
var_nbreak = var131;
{
{ /* Inline parser_nodes#AIfExpr#n_else (var_nif) on <var_nif:AIfExpr> */
var134 = var_nif->attrs[COLOR_parser_nodes__AIfExpr___n_else].val; /* _n_else on <var_nif:AIfExpr> */
var132 = var134;
RET_LABEL133:(void)0;
}
}
if (var132 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 221);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var132->class->vft[COLOR_astbuilder__AExpr__add]))(var132, var_nbreak) /* add on <var132:nullable AExpr>*/;
}
{
parser_nodes__Prod__replace_with(self, var_nblock); /* Direct call parser_nodes#Prod#replace_with on <self:AForExpr>*/
}
goto RET_LABEL;
} else {
}
{
astbuilder__ABlockExpr__add(var_nblock, var_nexpr); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var137 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var137 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var135 = var137;
RET_LABEL136:(void)0;
}
}
{
var138 = astbuilder__AExpr__make_var_read(var_nexpr);
}
{
{ /* Inline typing#AForExpr#method_iterator (self) on <self:AForExpr> */
var141 = self->attrs[COLOR_typing__AForExpr___method_iterator].val; /* _method_iterator on <self:AForExpr> */
var139 = var141;
RET_LABEL140:(void)0;
}
}
if (unlikely(var139 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 229);
show_backtrace(1);
}
var142 = NULL;
{
var143 = astbuilder__ASTBuilder__make_call(var135, var138, var139, var142);
}
var_iter = var143;
{
astbuilder__ABlockExpr__add(var_nblock, var_iter); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var146 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var146 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var144 = var146;
RET_LABEL145:(void)0;
}
}
{
var147 = astbuilder__ASTBuilder__make_loop(var144);
}
var_nloop148 = var147;
{
{ /* Inline scope#ALoopExpr#break_mark= (var_nloop148,var_escapemark) on <var_nloop148:ALoopExpr> */
var_nloop148->attrs[COLOR_scope__ALoopExpr___break_mark].val = var_escapemark; /* _break_mark on <var_nloop148:ALoopExpr> */
RET_LABEL149:(void)0;
}
}
{
astbuilder__ABlockExpr__add(var_nblock, var_nloop148); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var152 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var152 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var150 = var152;
RET_LABEL151:(void)0;
}
}
{
var153 = astbuilder__AExpr__make_var_read(var_iter);
}
{
{ /* Inline typing#AForExpr#method_is_ok (self) on <self:AForExpr> */
var156 = self->attrs[COLOR_typing__AForExpr___method_is_ok].val; /* _method_is_ok on <self:AForExpr> */
var154 = var156;
RET_LABEL155:(void)0;
}
}
if (unlikely(var154 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 236);
show_backtrace(1);
}
var157 = NULL;
{
var158 = astbuilder__ASTBuilder__make_call(var150, var153, var154, var157);
}
var_is_ok159 = var158;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var162 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var162 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var160 = var162;
RET_LABEL161:(void)0;
}
}
var163 = NULL;
{
var164 = astbuilder__ASTBuilder__make_if(var160, var_is_ok159, var163);
}
var_nif165 = var164;
{
astbuilder__ALoopExpr__add(var_nloop148, var_nif165); /* Direct call astbuilder#ALoopExpr#add on <var_nloop148:ALoopExpr>*/
}
{
{ /* Inline parser_nodes#AIfExpr#n_then (var_nif165) on <var_nif165:AIfExpr> */
var168 = var_nif165->attrs[COLOR_parser_nodes__AIfExpr___n_then].val; /* _n_then on <var_nif165:AIfExpr> */
var166 = var168;
RET_LABEL167:(void)0;
}
}
var_nthen169 = var166;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var172 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var172 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var170 = var172;
RET_LABEL171:(void)0;
}
}
{
var173 = astbuilder__ASTBuilder__make_do(var170);
}
var_ndo174 = var173;
{
{ /* Inline scope#EscapeMark#continue_mark (var_escapemark) on <var_escapemark:nullable EscapeMark(EscapeMark)> */
var177 = var_escapemark->attrs[COLOR_scope__EscapeMark___continue_mark].val; /* _continue_mark on <var_escapemark:nullable EscapeMark(EscapeMark)> */
var175 = var177;
RET_LABEL176:(void)0;
}
}
{
{ /* Inline scope#ADoExpr#break_mark= (var_ndo174,var175) on <var_ndo174:ADoExpr> */
var_ndo174->attrs[COLOR_scope__ADoExpr___break_mark].val = var175; /* _break_mark on <var_ndo174:ADoExpr> */
RET_LABEL178:(void)0;
}
}
if (var_nthen169 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 244);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_nthen169->class->vft[COLOR_astbuilder__AExpr__add]))(var_nthen169, var_ndo174) /* add on <var_nthen169:nullable AExpr>*/;
}
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var181 = self->attrs[COLOR_scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var179 = var181;
RET_LABEL180:(void)0;
}
}
if (var179 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 246);
show_backtrace(1);
} else {
{ /* Inline array#AbstractArrayRead#length (var179) on <var179:nullable Array[Variable]> */
if (unlikely(var179 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 24);
show_backtrace(1);
}
var184 = var179->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var179:nullable Array[Variable]> */
var182 = var184;
RET_LABEL183:(void)0;
}
}
var185 = 1;
{
{ /* Inline kernel#Int#== (var182,var185) on <var182:Int> */
var189 = var182 == var185;
var187 = var189;
goto RET_LABEL188;
RET_LABEL188:(void)0;
}
var186 = var187;
}
if (var186){
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var192 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var192 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var190 = var192;
RET_LABEL191:(void)0;
}
}
{
var193 = astbuilder__AExpr__make_var_read(var_iter);
}
{
{ /* Inline typing#AForExpr#method_item (self) on <self:AForExpr> */
var196 = self->attrs[COLOR_typing__AForExpr___method_item].val; /* _method_item on <self:AForExpr> */
var194 = var196;
RET_LABEL195:(void)0;
}
}
if (unlikely(var194 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 247);
show_backtrace(1);
}
var197 = NULL;
{
var198 = astbuilder__ASTBuilder__make_call(var190, var193, var194, var197);
}
var_item = var198;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var201 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var201 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var199 = var201;
RET_LABEL200:(void)0;
}
}
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var204 = self->attrs[COLOR_scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var202 = var204;
RET_LABEL203:(void)0;
}
}
if (var202 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 248);
show_backtrace(1);
} else {
var205 = abstract_collection__SequenceRead__first(var202);
}
{
var206 = astbuilder__ASTBuilder__make_var_assign(var199, var205, var_item);
}
{
astbuilder__ADoExpr__add(var_ndo174, var206); /* Direct call astbuilder#ADoExpr#add on <var_ndo174:ADoExpr>*/
}
} else {
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var209 = self->attrs[COLOR_scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var207 = var209;
RET_LABEL208:(void)0;
}
}
if (var207 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 249);
show_backtrace(1);
} else {
{ /* Inline array#AbstractArrayRead#length (var207) on <var207:nullable Array[Variable]> */
if (unlikely(var207 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/array.nit", 24);
show_backtrace(1);
}
var212 = var207->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var207:nullable Array[Variable]> */
var210 = var212;
RET_LABEL211:(void)0;
}
}
var213 = 2;
{
{ /* Inline kernel#Int#== (var210,var213) on <var210:Int> */
var217 = var210 == var213;
var215 = var217;
goto RET_LABEL216;
RET_LABEL216:(void)0;
}
var214 = var215;
}
if (var214){
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var220 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var220 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var218 = var220;
RET_LABEL219:(void)0;
}
}
{
var221 = astbuilder__AExpr__make_var_read(var_iter);
}
{
{ /* Inline typing#AForExpr#method_key (self) on <self:AForExpr> */
var224 = self->attrs[COLOR_typing__AForExpr___method_key].val; /* _method_key on <self:AForExpr> */
var222 = var224;
RET_LABEL223:(void)0;
}
}
if (unlikely(var222 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 250);
show_backtrace(1);
}
var225 = NULL;
{
var226 = astbuilder__ASTBuilder__make_call(var218, var221, var222, var225);
}
var_key = var226;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var229 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var229 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var227 = var229;
RET_LABEL228:(void)0;
}
}
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var232 = self->attrs[COLOR_scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var230 = var232;
RET_LABEL231:(void)0;
}
}
var233 = 0;
if (var230 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 251);
show_backtrace(1);
} else {
var234 = array__Array___91d_93d(var230, var233);
}
{
var235 = astbuilder__ASTBuilder__make_var_assign(var227, var234, var_key);
}
{
astbuilder__ADoExpr__add(var_ndo174, var235); /* Direct call astbuilder#ADoExpr#add on <var_ndo174:ADoExpr>*/
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var238 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var238 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var236 = var238;
RET_LABEL237:(void)0;
}
}
{
var239 = astbuilder__AExpr__make_var_read(var_iter);
}
{
{ /* Inline typing#AForExpr#method_item (self) on <self:AForExpr> */
var242 = self->attrs[COLOR_typing__AForExpr___method_item].val; /* _method_item on <self:AForExpr> */
var240 = var242;
RET_LABEL241:(void)0;
}
}
if (unlikely(var240 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 252);
show_backtrace(1);
}
var243 = NULL;
{
var244 = astbuilder__ASTBuilder__make_call(var236, var239, var240, var243);
}
var_item245 = var244;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var248 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var248 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var246 = var248;
RET_LABEL247:(void)0;
}
}
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var251 = self->attrs[COLOR_scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var249 = var251;
RET_LABEL250:(void)0;
}
}
var252 = 1;
if (var249 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 253);
show_backtrace(1);
} else {
var253 = array__Array___91d_93d(var249, var252);
}
{
var254 = astbuilder__ASTBuilder__make_var_assign(var246, var253, var_item245);
}
{
astbuilder__ADoExpr__add(var_ndo174, var254); /* Direct call astbuilder#ADoExpr#add on <var_ndo174:ADoExpr>*/
}
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 255);
show_backtrace(1);
}
}
{
{ /* Inline parser_nodes#AForExpr#n_block (self) on <self:AForExpr> */
var257 = self->attrs[COLOR_parser_nodes__AForExpr___n_block].val; /* _n_block on <self:AForExpr> */
var255 = var257;
RET_LABEL256:(void)0;
}
}
if (unlikely(var255 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 258);
show_backtrace(1);
}
{
astbuilder__ADoExpr__add(var_ndo174, var255); /* Direct call astbuilder#ADoExpr#add on <var_ndo174:ADoExpr>*/
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var260 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var260 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var258 = var260;
RET_LABEL259:(void)0;
}
}
{
var261 = astbuilder__AExpr__make_var_read(var_iter);
}
{
{ /* Inline typing#AForExpr#method_next (self) on <self:AForExpr> */
var264 = self->attrs[COLOR_typing__AForExpr___method_next].val; /* _method_next on <self:AForExpr> */
var262 = var264;
RET_LABEL263:(void)0;
}
}
if (unlikely(var262 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 260);
show_backtrace(1);
}
var265 = NULL;
{
var266 = astbuilder__ASTBuilder__make_call(var258, var261, var262, var265);
}
if (var_nthen169 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 260);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_nthen169->class->vft[COLOR_astbuilder__AExpr__add]))(var_nthen169, var266) /* add on <var_nthen169:nullable AExpr>*/;
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var269 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var269 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var267 = var269;
RET_LABEL268:(void)0;
}
}
{
var270 = astbuilder__ASTBuilder__make_break(var267, var_escapemark);
}
var_nbreak271 = var270;
{
{ /* Inline parser_nodes#AIfExpr#n_else (var_nif165) on <var_nif165:AIfExpr> */
var274 = var_nif165->attrs[COLOR_parser_nodes__AIfExpr___n_else].val; /* _n_else on <var_nif165:AIfExpr> */
var272 = var274;
RET_LABEL273:(void)0;
}
}
if (var272 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 263);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var272->class->vft[COLOR_astbuilder__AExpr__add]))(var272, var_nbreak271) /* add on <var272:nullable AExpr>*/;
}
{
{ /* Inline typing#AForExpr#method_finish (self) on <self:AForExpr> */
var277 = self->attrs[COLOR_typing__AForExpr___method_finish].val; /* _method_finish on <self:AForExpr> */
var275 = var277;
RET_LABEL276:(void)0;
}
}
var_method_finish = var275;
var278 = NULL;
if (var_method_finish == NULL) {
var279 = 0; /* is null */
} else {
var279 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_method_finish,var278) on <var_method_finish:nullable CallSite> */
var_other = var278;
{
var283 = ((short int (*)(val*, val*))(var_method_finish->class->vft[COLOR_kernel__Object___61d_61d]))(var_method_finish, var_other) /* == on <var_method_finish:nullable CallSite(CallSite)>*/;
var282 = var283;
}
var284 = !var282;
var280 = var284;
goto RET_LABEL281;
RET_LABEL281:(void)0;
}
var279 = var280;
}
if (var279){
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var287 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var287 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var285 = var287;
RET_LABEL286:(void)0;
}
}
{
var288 = astbuilder__AExpr__make_var_read(var_iter);
}
var289 = NULL;
{
var290 = astbuilder__ASTBuilder__make_call(var285, var288, var_method_finish, var289);
}
{
astbuilder__ABlockExpr__add(var_nblock, var290); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
} else {
}
{
parser_nodes__Prod__replace_with(self, var_nblock); /* Direct call parser_nodes#Prod#replace_with on <self:AForExpr>*/
}
RET_LABEL:;
}
/* method transform#AForExpr#accept_transform_visitor for (self: Object, TransformVisitor) */
void VIRTUAL_transform__AForExpr__accept_transform_visitor(val* self, val* p0) {
transform__AForExpr__accept_transform_visitor(self, p0); /* Direct call transform#AForExpr#accept_transform_visitor on <self:Object(AForExpr)>*/
RET_LABEL:;
}
/* method transform#AArrayExpr#accept_transform_visitor for (self: AArrayExpr, TransformVisitor) */
void transform__AArrayExpr__accept_transform_visitor(val* self, val* p0) {
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
val* var15 /* : AExprs */;
val* var17 /* : AExprs */;
val* var18 /* : ANodes[AExpr] */;
val* var20 /* : ANodes[AExpr] */;
long var21 /* : Int */;
val* var22 /* : AIntExpr */;
val* var23 /* : ANewExpr */;
val* var_nnew /* var nnew: ANewExpr */;
val* var24 /* : AExprs */;
val* var26 /* : AExprs */;
val* var27 /* : ANodes[AExpr] */;
val* var29 /* : ANodes[AExpr] */;
val* var_30 /* var : ANodes[AExpr] */;
val* var31 /* : Iterator[ANode] */;
val* var_32 /* var : Iterator[AExpr] */;
short int var33 /* : Bool */;
val* var34 /* : nullable Object */;
val* var_nexpr /* var nexpr: AExpr */;
val* var35 /* : ASTBuilder */;
val* var37 /* : ASTBuilder */;
val* var38 /* : AVarExpr */;
val* var39 /* : nullable CallSite */;
val* var41 /* : nullable CallSite */;
val* var42 /* : Array[AExpr] */;
long var43 /* : Int */;
val* var_44 /* var : Array[AExpr] */;
val* var45 /* : ACallExpr */;
val* var_nadd /* var nadd: ACallExpr */;
val* var47 /* : AVarExpr */;
val* var_nres /* var nres: AVarExpr */;
var_v = p0;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var2 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = astbuilder__ASTBuilder__make_block(var);
}
var_nblock = var3;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var6 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline typing#AArrayExpr#with_capacity_callsite (self) on <self:AArrayExpr> */
var9 = self->attrs[COLOR_typing__AArrayExpr___with_capacity_callsite].val; /* _with_capacity_callsite on <self:AArrayExpr> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 285);
show_backtrace(1);
}
var10 = NEW_array__Array(&type_array__Arrayparser_nodes__AIntExpr);
var11 = 1;
{
array__Array__with_capacity(var10, var11); /* Direct call array#Array#with_capacity on <var10:Array[AIntExpr]>*/
}
var_ = var10;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var14 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline parser_nodes#AArrayExpr#n_exprs (self) on <self:AArrayExpr> */
var17 = self->attrs[COLOR_parser_nodes__AArrayExpr___n_exprs].val; /* _n_exprs on <self:AArrayExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1776);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var15) on <var15:AExprs> */
var20 = var15->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var15:AExprs> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1946);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = parser_nodes__ANodes__length(var18);
}
{
var22 = astbuilder__ASTBuilder__make_int(var12, var21);
}
{
array__AbstractArray__push(var_, var22); /* Direct call array#AbstractArray#push on <var_:Array[AIntExpr]>*/
}
{
var23 = astbuilder__ASTBuilder__make_new(var4, var7, var_);
}
var_nnew = var23;
{
astbuilder__ABlockExpr__add(var_nblock, var_nnew); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
{
{ /* Inline parser_nodes#AArrayExpr#n_exprs (self) on <self:AArrayExpr> */
var26 = self->attrs[COLOR_parser_nodes__AArrayExpr___n_exprs].val; /* _n_exprs on <self:AArrayExpr> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1776);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var24) on <var24:AExprs> */
var29 = var24->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var24:AExprs> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1946);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_30 = var27;
{
var31 = parser_nodes__ANodes__iterator(var_30);
}
var_32 = var31;
for(;;) {
{
var33 = ((short int (*)(val*))(var_32->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_32) /* is_ok on <var_32:Iterator[AExpr]>*/;
}
if (var33){
{
var34 = ((val* (*)(val*))(var_32->class->vft[COLOR_abstract_collection__Iterator__item]))(var_32) /* item on <var_32:Iterator[AExpr]>*/;
}
var_nexpr = var34;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var37 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
var38 = astbuilder__AExpr__make_var_read(var_nnew);
}
{
{ /* Inline typing#AArrayExpr#push_callsite (self) on <self:AArrayExpr> */
var41 = self->attrs[COLOR_typing__AArrayExpr___push_callsite].val; /* _push_callsite on <self:AArrayExpr> */
var39 = var41;
RET_LABEL40:(void)0;
}
}
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 289);
show_backtrace(1);
}
var42 = NEW_array__Array(&type_array__Arrayparser_nodes__AExpr);
var43 = 1;
{
array__Array__with_capacity(var42, var43); /* Direct call array#Array#with_capacity on <var42:Array[AExpr]>*/
}
var_44 = var42;
{
array__AbstractArray__push(var_44, var_nexpr); /* Direct call array#AbstractArray#push on <var_44:Array[AExpr]>*/
}
{
var45 = astbuilder__ASTBuilder__make_call(var35, var38, var39, var_44);
}
var_nadd = var45;
{
astbuilder__ABlockExpr__add(var_nblock, var_nadd); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
{
((void (*)(val*))(var_32->class->vft[COLOR_abstract_collection__Iterator__next]))(var_32) /* next on <var_32:Iterator[AExpr]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_32) on <var_32:Iterator[AExpr]> */
RET_LABEL46:(void)0;
}
}
{
var47 = astbuilder__AExpr__make_var_read(var_nnew);
}
var_nres = var47;
{
astbuilder__ABlockExpr__add(var_nblock, var_nres); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
{
parser_nodes__Prod__replace_with(self, var_nblock); /* Direct call parser_nodes#Prod#replace_with on <self:AArrayExpr>*/
}
RET_LABEL:;
}
/* method transform#AArrayExpr#accept_transform_visitor for (self: Object, TransformVisitor) */
void VIRTUAL_transform__AArrayExpr__accept_transform_visitor(val* self, val* p0) {
transform__AArrayExpr__accept_transform_visitor(self, p0); /* Direct call transform#AArrayExpr#accept_transform_visitor on <self:Object(AArrayExpr)>*/
RET_LABEL:;
}
/* method transform#ACrangeExpr#accept_transform_visitor for (self: ACrangeExpr, TransformVisitor) */
void transform__ACrangeExpr__accept_transform_visitor(val* self, val* p0) {
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
var2 = self->attrs[COLOR_parser_nodes__ANode___parent].val; /* _parent on <self:ACrangeExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
/* <var:nullable ANode> isa AForExpr */
cltype = type_parser_nodes__AForExpr.color;
idtype = type_parser_nodes__AForExpr.id;
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
var6 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline typing#ARangeExpr#init_callsite (self) on <self:ACrangeExpr> */
var9 = self->attrs[COLOR_typing__ARangeExpr___init_callsite].val; /* _init_callsite on <self:ACrangeExpr> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 304);
show_backtrace(1);
}
var10 = NEW_array__Array(&type_array__Arrayparser_nodes__AExpr);
var11 = 2;
{
array__Array__with_capacity(var10, var11); /* Direct call array#Array#with_capacity on <var10:Array[AExpr]>*/
}
var_ = var10;
{
{ /* Inline parser_nodes#ARangeExpr#n_expr (self) on <self:ACrangeExpr> */
var14 = self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:ACrangeExpr> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1754);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
array__AbstractArray__push(var_, var12); /* Direct call array#AbstractArray#push on <var_:Array[AExpr]>*/
}
{
{ /* Inline parser_nodes#ARangeExpr#n_expr2 (self) on <self:ACrangeExpr> */
var17 = self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:ACrangeExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1755);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
array__AbstractArray__push(var_, var15); /* Direct call array#AbstractArray#push on <var_:Array[AExpr]>*/
}
{
var18 = astbuilder__ASTBuilder__make_new(var4, var7, var_);
}
{
parser_nodes__Prod__replace_with(self, var18); /* Direct call parser_nodes#Prod#replace_with on <self:ACrangeExpr>*/
}
RET_LABEL:;
}
/* method transform#ACrangeExpr#accept_transform_visitor for (self: Object, TransformVisitor) */
void VIRTUAL_transform__ACrangeExpr__accept_transform_visitor(val* self, val* p0) {
transform__ACrangeExpr__accept_transform_visitor(self, p0); /* Direct call transform#ACrangeExpr#accept_transform_visitor on <self:Object(ACrangeExpr)>*/
RET_LABEL:;
}
/* method transform#AOrangeExpr#accept_transform_visitor for (self: AOrangeExpr, TransformVisitor) */
void transform__AOrangeExpr__accept_transform_visitor(val* self, val* p0) {
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
var2 = self->attrs[COLOR_parser_nodes__ANode___parent].val; /* _parent on <self:AOrangeExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
/* <var:nullable ANode> isa AForExpr */
cltype = type_parser_nodes__AForExpr.color;
idtype = type_parser_nodes__AForExpr.id;
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
var6 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline typing#ARangeExpr#init_callsite (self) on <self:AOrangeExpr> */
var9 = self->attrs[COLOR_typing__ARangeExpr___init_callsite].val; /* _init_callsite on <self:AOrangeExpr> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 313);
show_backtrace(1);
}
var10 = NEW_array__Array(&type_array__Arrayparser_nodes__AExpr);
var11 = 2;
{
array__Array__with_capacity(var10, var11); /* Direct call array#Array#with_capacity on <var10:Array[AExpr]>*/
}
var_ = var10;
{
{ /* Inline parser_nodes#ARangeExpr#n_expr (self) on <self:AOrangeExpr> */
var14 = self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:AOrangeExpr> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1754);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
array__AbstractArray__push(var_, var12); /* Direct call array#AbstractArray#push on <var_:Array[AExpr]>*/
}
{
{ /* Inline parser_nodes#ARangeExpr#n_expr2 (self) on <self:AOrangeExpr> */
var17 = self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:AOrangeExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1755);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
array__AbstractArray__push(var_, var15); /* Direct call array#AbstractArray#push on <var_:Array[AExpr]>*/
}
{
var18 = astbuilder__ASTBuilder__make_new(var4, var7, var_);
}
{
parser_nodes__Prod__replace_with(self, var18); /* Direct call parser_nodes#Prod#replace_with on <self:AOrangeExpr>*/
}
RET_LABEL:;
}
/* method transform#AOrangeExpr#accept_transform_visitor for (self: Object, TransformVisitor) */
void VIRTUAL_transform__AOrangeExpr__accept_transform_visitor(val* self, val* p0) {
transform__AOrangeExpr__accept_transform_visitor(self, p0); /* Direct call transform#AOrangeExpr#accept_transform_visitor on <self:Object(AOrangeExpr)>*/
RET_LABEL:;
}
/* method transform#AParExpr#accept_transform_visitor for (self: AParExpr, TransformVisitor) */
void transform__AParExpr__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
var_v = p0;
{
{ /* Inline parser_nodes#AParExpr#n_expr (self) on <self:AParExpr> */
var2 = self->attrs[COLOR_parser_nodes__AParExpr___n_expr].val; /* _n_expr on <self:AParExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1868);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
parser_nodes__Prod__replace_with(self, var); /* Direct call parser_nodes#Prod#replace_with on <self:AParExpr>*/
}
RET_LABEL:;
}
/* method transform#AParExpr#accept_transform_visitor for (self: Object, TransformVisitor) */
void VIRTUAL_transform__AParExpr__accept_transform_visitor(val* self, val* p0) {
transform__AParExpr__accept_transform_visitor(self, p0); /* Direct call transform#AParExpr#accept_transform_visitor on <self:Object(AParExpr)>*/
RET_LABEL:;
}
/* method transform#ASendReassignFormExpr#accept_transform_visitor for (self: ASendReassignFormExpr, TransformVisitor) */
void transform__ASendReassignFormExpr__accept_transform_visitor(val* self, val* p0) {
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
var2 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = astbuilder__ASTBuilder__make_block(var);
}
var_nblock = var3;
{
{ /* Inline parser_nodes#ASendExpr#n_expr (self) on <self:ASendReassignFormExpr> */
var6 = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASendReassignFormExpr> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1466);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
astbuilder__ABlockExpr__add(var_nblock, var4); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
var7 = NEW_array__Array(&type_array__Arrayparser_nodes__AExpr);
{
((void (*)(val*))(var7->class->vft[COLOR_kernel__Object__init]))(var7) /* init on <var7:Array[AExpr]>*/;
}
var_read_args = var7;
var8 = NEW_array__Array(&type_array__Arrayparser_nodes__AExpr);
{
((void (*)(val*))(var8->class->vft[COLOR_kernel__Object__init]))(var8) /* init on <var8:Array[AExpr]>*/;
}
var_write_args = var8;
{
var9 = typing__ASendExpr__raw_arguments(self);
}
var_ = var9;
{
var10 = array__AbstractArrayRead__iterator(var_);
}
var_11 = var10;
for(;;) {
{
var12 = array__ArrayIterator__is_ok(var_11);
}
if (var12){
{
var13 = array__ArrayIterator__item(var_11);
}
var_a = var13;
{
astbuilder__ABlockExpr__add(var_nblock, var_a); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
{
var14 = astbuilder__AExpr__make_var_read(var_a);
}
{
array__Array__add(var_read_args, var14); /* Direct call array#Array#add on <var_read_args:Array[AExpr]>*/
}
{
var15 = astbuilder__AExpr__make_var_read(var_a);
}
{
array__Array__add(var_write_args, var15); /* Direct call array#Array#add on <var_write_args:Array[AExpr]>*/
}
{
array__ArrayIterator__next(var_11); /* Direct call array#ArrayIterator#next on <var_11:ArrayIterator[AExpr]>*/
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
var19 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline parser_nodes#ASendExpr#n_expr (self) on <self:ASendReassignFormExpr> */
var22 = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASendReassignFormExpr> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1466);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = astbuilder__AExpr__make_var_read(var20);
}
{
{ /* Inline typing#ASendExpr#callsite (self) on <self:ASendReassignFormExpr> */
var26 = self->attrs[COLOR_typing__ASendExpr___callsite].val; /* _callsite on <self:ASendReassignFormExpr> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 346);
show_backtrace(1);
}
{
var27 = astbuilder__ASTBuilder__make_call(var17, var23, var24, var_read_args);
}
var_nread = var27;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var30 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline typing#AReassignFormExpr#reassign_callsite (self) on <self:ASendReassignFormExpr> */
var33 = self->attrs[COLOR_typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:ASendReassignFormExpr> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 348);
show_backtrace(1);
}
var34 = NEW_array__Array(&type_array__Arrayparser_nodes__AExpr);
var35 = 1;
{
array__Array__with_capacity(var34, var35); /* Direct call array#Array#with_capacity on <var34:Array[AExpr]>*/
}
var_36 = var34;
{
{ /* Inline parser_nodes#AReassignFormExpr#n_value (self) on <self:ASendReassignFormExpr> */
var39 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:ASendReassignFormExpr> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1452);
show_backtrace(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
array__AbstractArray__push(var_36, var37); /* Direct call array#AbstractArray#push on <var_36:Array[AExpr]>*/
}
{
var40 = astbuilder__ASTBuilder__make_call(var28, var_nread, var31, var_36);
}
var_nnewvalue = var40;
{
array__Array__add(var_write_args, var_nnewvalue); /* Direct call array#Array#add on <var_write_args:Array[AExpr]>*/
}
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var43 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline parser_nodes#ASendExpr#n_expr (self) on <self:ASendReassignFormExpr> */
var46 = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASendReassignFormExpr> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1466);
show_backtrace(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
var47 = astbuilder__AExpr__make_var_read(var44);
}
{
{ /* Inline typing#ASendReassignFormExpr#write_callsite (self) on <self:ASendReassignFormExpr> */
var50 = self->attrs[COLOR_typing__ASendReassignFormExpr___write_callsite].val; /* _write_callsite on <self:ASendReassignFormExpr> */
var48 = var50;
RET_LABEL49:(void)0;
}
}
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 351);
show_backtrace(1);
}
{
var51 = astbuilder__ASTBuilder__make_call(var41, var47, var48, var_write_args);
}
var_nwrite = var51;
{
astbuilder__ABlockExpr__add(var_nblock, var_nwrite); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
{
parser_nodes__Prod__replace_with(self, var_nblock); /* Direct call parser_nodes#Prod#replace_with on <self:ASendReassignFormExpr>*/
}
RET_LABEL:;
}
/* method transform#ASendReassignFormExpr#accept_transform_visitor for (self: Object, TransformVisitor) */
void VIRTUAL_transform__ASendReassignFormExpr__accept_transform_visitor(val* self, val* p0) {
transform__ASendReassignFormExpr__accept_transform_visitor(self, p0); /* Direct call transform#ASendReassignFormExpr#accept_transform_visitor on <self:Object(ASendReassignFormExpr)>*/
RET_LABEL:;
}
/* method transform#AVarReassignExpr#accept_transform_visitor for (self: AVarReassignExpr, TransformVisitor) */
void transform__AVarReassignExpr__accept_transform_visitor(val* self, val* p0) {
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
var2 = self->attrs[COLOR_scope__AVarFormExpr___variable].val; /* _variable on <self:AVarReassignExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 362);
show_backtrace(1);
}
var_variable = var;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var5 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline typing#AReassignFormExpr#read_type (self) on <self:AVarReassignExpr> */
var8 = self->attrs[COLOR_typing__AReassignFormExpr___read_type].val; /* _read_type on <self:AVarReassignExpr> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 364);
show_backtrace(1);
}
{
var9 = astbuilder__ASTBuilder__make_var_read(var3, var_variable, var6);
}
var_nread = var9;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var12 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline typing#AReassignFormExpr#reassign_callsite (self) on <self:AVarReassignExpr> */
var15 = self->attrs[COLOR_typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:AVarReassignExpr> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 366);
show_backtrace(1);
}
var16 = NEW_array__Array(&type_array__Arrayparser_nodes__AExpr);
var17 = 1;
{
array__Array__with_capacity(var16, var17); /* Direct call array#Array#with_capacity on <var16:Array[AExpr]>*/
}
var_ = var16;
{
{ /* Inline parser_nodes#AReassignFormExpr#n_value (self) on <self:AVarReassignExpr> */
var20 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AVarReassignExpr> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1452);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
array__AbstractArray__push(var_, var18); /* Direct call array#AbstractArray#push on <var_:Array[AExpr]>*/
}
{
var21 = astbuilder__ASTBuilder__make_call(var10, var_nread, var13, var_);
}
var_nnewvalue = var21;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var24 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
var25 = astbuilder__ASTBuilder__make_var_assign(var22, var_variable, var_nnewvalue);
}
var_nwrite = var25;
{
parser_nodes__Prod__replace_with(self, var_nwrite); /* Direct call parser_nodes#Prod#replace_with on <self:AVarReassignExpr>*/
}
RET_LABEL:;
}
/* method transform#AVarReassignExpr#accept_transform_visitor for (self: Object, TransformVisitor) */
void VIRTUAL_transform__AVarReassignExpr__accept_transform_visitor(val* self, val* p0) {
transform__AVarReassignExpr__accept_transform_visitor(self, p0); /* Direct call transform#AVarReassignExpr#accept_transform_visitor on <self:Object(AVarReassignExpr)>*/
RET_LABEL:;
}
/* method transform#AAttrReassignExpr#accept_transform_visitor for (self: AAttrReassignExpr, TransformVisitor) */
void transform__AAttrReassignExpr__accept_transform_visitor(val* self, val* p0) {
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
var2 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = astbuilder__ASTBuilder__make_block(var);
}
var_nblock = var3;
{
{ /* Inline parser_nodes#AAttrFormExpr#n_expr (self) on <self:AAttrReassignExpr> */
var6 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrReassignExpr> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1621);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
astbuilder__ABlockExpr__add(var_nblock, var4); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
{
{ /* Inline typing#AAttrFormExpr#mproperty (self) on <self:AAttrReassignExpr> */
var9 = self->attrs[COLOR_typing__AAttrFormExpr___mproperty].val; /* _mproperty on <self:AAttrReassignExpr> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 379);
show_backtrace(1);
}
var_attribute = var7;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var12 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline parser_nodes#AAttrFormExpr#n_expr (self) on <self:AAttrReassignExpr> */
var15 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrReassignExpr> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1621);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = astbuilder__AExpr__make_var_read(var13);
}
{
var17 = astbuilder__ASTBuilder__make_attr_read(var10, var16, var_attribute);
}
var_nread = var17;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var20 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline typing#AReassignFormExpr#reassign_callsite (self) on <self:AAttrReassignExpr> */
var23 = self->attrs[COLOR_typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:AAttrReassignExpr> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 382);
show_backtrace(1);
}
var24 = NEW_array__Array(&type_array__Arrayparser_nodes__AExpr);
var25 = 1;
{
array__Array__with_capacity(var24, var25); /* Direct call array#Array#with_capacity on <var24:Array[AExpr]>*/
}
var_ = var24;
{
{ /* Inline parser_nodes#AReassignFormExpr#n_value (self) on <self:AAttrReassignExpr> */
var28 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AAttrReassignExpr> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1452);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
array__AbstractArray__push(var_, var26); /* Direct call array#AbstractArray#push on <var_:Array[AExpr]>*/
}
{
var29 = astbuilder__ASTBuilder__make_call(var18, var_nread, var21, var_);
}
var_nnewvalue = var29;
{
{ /* Inline transform#TransformVisitor#builder (var_v) on <var_v:TransformVisitor> */
var32 = var_v->attrs[COLOR_transform__TransformVisitor___builder].val; /* _builder on <var_v:TransformVisitor> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _builder");
PRINT_ERROR(" (%s:%d)\n", "transform.nit", 59);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline parser_nodes#AAttrFormExpr#n_expr (self) on <self:AAttrReassignExpr> */
var35 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrReassignExpr> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1621);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
var36 = astbuilder__AExpr__make_var_read(var33);
}
{
var37 = astbuilder__ASTBuilder__make_attr_assign(var30, var36, var_attribute, var_nnewvalue);
}
var_nwrite = var37;
{
astbuilder__ABlockExpr__add(var_nblock, var_nwrite); /* Direct call astbuilder#ABlockExpr#add on <var_nblock:ABlockExpr>*/
}
{
parser_nodes__Prod__replace_with(self, var_nblock); /* Direct call parser_nodes#Prod#replace_with on <self:AAttrReassignExpr>*/
}
RET_LABEL:;
}
/* method transform#AAttrReassignExpr#accept_transform_visitor for (self: Object, TransformVisitor) */
void VIRTUAL_transform__AAttrReassignExpr__accept_transform_visitor(val* self, val* p0) {
transform__AAttrReassignExpr__accept_transform_visitor(self, p0); /* Direct call transform#AAttrReassignExpr#accept_transform_visitor on <self:Object(AAttrReassignExpr)>*/
RET_LABEL:;
}
