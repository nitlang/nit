#include "nitc__scope.sep.0.h"
/* method scope$ToolContext$scope_phase for (self: ToolContext): Phase */
val* nitc__scope___ToolContext___scope_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nitc__scope__ToolContext___scope_phase].val; /* _scope_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scope_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__scope, 24);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope$ScopePhase$process_npropdef for (self: ScopePhase, APropdef) */
void nitc__scope___nitc__scope__ScopePhase___nitc__phase__Phase__process_npropdef(val* self, val* p0) {
val* var_npropdef /* var npropdef: APropdef */;
val* var /* : ToolContext */;
val* var2 /* : ToolContext */;
var_npropdef = p0;
{
{ /* Inline phase$Phase$toolcontext (self) on <self:ScopePhase> */
var2 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:ScopePhase> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 210);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc__scope___APropdef___do_scope(var_npropdef, var); /* Direct call scope$APropdef$do_scope on <var_npropdef:APropdef>*/
}
RET_LABEL:;
}
/* method scope$Variable$name for (self: Variable): String */
val* nitc___nitc__Variable___name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__scope__Variable___name].val; /* _name on <self:Variable> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__scope, 36);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope$Variable$name= for (self: Variable, String) */
void nitc___nitc__Variable___name_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__scope__Variable___name].val = p0; /* _name on <self:Variable> */
RET_LABEL:;
}
/* method scope$Variable$to_s for (self: Variable): String */
val* nitc___nitc__Variable___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{
{ /* Inline scope$Variable$name (self) on <self:Variable> */
var3 = self->attrs[COLOR_nitc__scope__Variable___name].val; /* _name on <self:Variable> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__scope, 36);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method scope$Variable$location for (self: Variable): nullable Location */
val* nitc___nitc__Variable___location(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable Location */;
var1 = self->attrs[COLOR_nitc__scope__Variable___location].val; /* _location on <self:Variable> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope$Variable$location= for (self: Variable, nullable Location) */
void nitc___nitc__Variable___location_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__scope__Variable___location].val = p0; /* _location on <self:Variable> */
RET_LABEL:;
}
/* method scope$Variable$warn_unread for (self: Variable): Bool */
short int nitc___nitc__Variable___warn_unread(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__scope__Variable___warn_unread].s; /* _warn_unread on <self:Variable> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope$Variable$warn_unread= for (self: Variable, Bool) */
void nitc___nitc__Variable___warn_unread_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__scope__Variable___warn_unread].s = p0; /* _warn_unread on <self:Variable> */
RET_LABEL:;
}
/* method scope$Variable$init for (self: Variable) */
void nitc___nitc__Variable___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__Variable___core__kernel__Object__init]))(self); /* init on <self:Variable>*/
}
RET_LABEL:;
}
/* method scope$EscapeMark$name for (self: EscapeMark): nullable String */
val* nitc___nitc__EscapeMark___name(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_nitc__scope__EscapeMark___name].val; /* _name on <self:EscapeMark> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope$EscapeMark$name= for (self: EscapeMark, nullable String) */
void nitc___nitc__EscapeMark___name_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__scope__EscapeMark___name].val = p0; /* _name on <self:EscapeMark> */
RET_LABEL:;
}
/* method scope$EscapeMark$continue_mark for (self: EscapeMark): nullable EscapeMark */
val* nitc___nitc__EscapeMark___continue_mark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_nitc__scope__EscapeMark___continue_mark].val; /* _continue_mark on <self:EscapeMark> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope$EscapeMark$continue_mark= for (self: EscapeMark, nullable EscapeMark) */
void nitc___nitc__EscapeMark___continue_mark_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__scope__EscapeMark___continue_mark].val = p0; /* _continue_mark on <self:EscapeMark> */
RET_LABEL:;
}
/* method scope$EscapeMark$escapes for (self: EscapeMark): Array[AEscapeExpr] */
val* nitc___nitc__EscapeMark___escapes(val* self) {
val* var /* : Array[AEscapeExpr] */;
val* var1 /* : Array[AEscapeExpr] */;
var1 = self->attrs[COLOR_nitc__scope__EscapeMark___escapes].val; /* _escapes on <self:EscapeMark> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__scope, 59);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope$EscapeMark$init for (self: EscapeMark) */
void nitc___nitc__EscapeMark___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__EscapeMark___core__kernel__Object__init]))(self); /* init on <self:EscapeMark>*/
}
RET_LABEL:;
}
/* method scope$ScopeVisitor$toolcontext for (self: ScopeVisitor): ToolContext */
val* nitc__scope___nitc__scope__ScopeVisitor___toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_nitc__scope__ScopeVisitor___toolcontext].val; /* _toolcontext on <self:ScopeVisitor> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__scope, 71);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope$ScopeVisitor$toolcontext= for (self: ScopeVisitor, ToolContext) */
void nitc__scope___nitc__scope__ScopeVisitor___toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__scope__ScopeVisitor___toolcontext].val = p0; /* _toolcontext on <self:ScopeVisitor> */
RET_LABEL:;
}
/* method scope$ScopeVisitor$propdef for (self: ScopeVisitor): APropdef */
val* nitc__scope___nitc__scope__ScopeVisitor___propdef(val* self) {
val* var /* : APropdef */;
val* var1 /* : APropdef */;
var1 = self->attrs[COLOR_nitc__scope__ScopeVisitor___propdef].val; /* _propdef on <self:ScopeVisitor> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _propdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__scope, 74);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope$ScopeVisitor$propdef= for (self: ScopeVisitor, APropdef) */
void nitc__scope___nitc__scope__ScopeVisitor___propdef_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__scope__ScopeVisitor___propdef].val = p0; /* _propdef on <self:ScopeVisitor> */
RET_LABEL:;
}
/* method scope$ScopeVisitor$selfvariable for (self: ScopeVisitor): Variable */
val* nitc__scope___nitc__scope__ScopeVisitor___selfvariable(val* self) {
val* var /* : Variable */;
val* var1 /* : Variable */;
var1 = self->attrs[COLOR_nitc__scope__ScopeVisitor___selfvariable].val; /* _selfvariable on <self:ScopeVisitor> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _selfvariable");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__scope, 77);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope$ScopeVisitor$init for (self: ScopeVisitor) */
void nitc__scope___nitc__scope__ScopeVisitor___core__kernel__Object__init(val* self) {
val* var /* : List[Scope] */;
val* var2 /* : List[Scope] */;
val* var3 /* : Scope */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc__scope___nitc__scope__ScopeVisitor___core__kernel__Object__init]))(self); /* init on <self:ScopeVisitor>*/
}
{
{ /* Inline scope$ScopeVisitor$scopes (self) on <self:ScopeVisitor> */
var2 = self->attrs[COLOR_nitc__scope__ScopeVisitor___scopes].val; /* _scopes on <self:ScopeVisitor> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__scope, 84);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = NEW_nitc__scope__Scope(&type_nitc__scope__Scope);
{
{ /* Inline kernel$Object$init (var3) on <var3:Scope> */
RET_LABEL4:(void)0;
}
}
{
core___core__Sequence___SimpleCollection__add(var, var3); /* Direct call abstract_collection$Sequence$add on <var:List[Scope]>*/
}
RET_LABEL:;
}
/* method scope$ScopeVisitor$scopes for (self: ScopeVisitor): List[Scope] */
val* nitc__scope___nitc__scope__ScopeVisitor___scopes(val* self) {
val* var /* : List[Scope] */;
val* var1 /* : List[Scope] */;
var1 = self->attrs[COLOR_nitc__scope__ScopeVisitor___scopes].val; /* _scopes on <self:ScopeVisitor> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__scope, 84);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope$ScopeVisitor$shift_scope for (self: ScopeVisitor) */
void nitc__scope___nitc__scope__ScopeVisitor___shift_scope(val* self) {
val* var /* : List[Scope] */;
val* var2 /* : List[Scope] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : List[Scope] */;
val* var7 /* : List[Scope] */;
val* var8 /* : nullable Object */;
val* var_scope /* var scope: Scope */;
val* var9 /* : HashMap[String, Variable] */;
val* var11 /* : HashMap[String, Variable] */;
val* var12 /* : RemovableCollection[nullable Object] */;
val* var_ /* var : RemovableCollection[Variable] */;
val* var13 /* : Iterator[nullable Object] */;
val* var_14 /* var : Iterator[Variable] */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
val* var_v /* var v: Variable */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : ToolContext */;
val* var22 /* : ToolContext */;
val* var23 /* : nullable Location */;
val* var25 /* : nullable Location */;
static val* varonce;
val* var26 /* : String */;
char* var27 /* : CString */;
val* var28 /* : String */;
val* var29 /* : nullable Int */;
val* var30 /* : nullable Int */;
val* var31 /* : nullable Bool */;
val* var32 /* : nullable Bool */;
val* var34 /* : NativeArray[String] */;
static val* varonce33;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : CString */;
val* var38 /* : String */;
val* var39 /* : nullable Int */;
val* var40 /* : nullable Int */;
val* var41 /* : nullable Bool */;
val* var42 /* : nullable Bool */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : CString */;
val* var46 /* : String */;
val* var47 /* : nullable Int */;
val* var48 /* : nullable Int */;
val* var49 /* : nullable Bool */;
val* var50 /* : nullable Bool */;
val* var51 /* : String */;
val* var53 /* : String */;
val* var54 /* : String */;
val* var55 /* : nullable Message */;
{
{ /* Inline scope$ScopeVisitor$scopes (self) on <self:ScopeVisitor> */
var2 = self->attrs[COLOR_nitc__scope__ScopeVisitor___scopes].val; /* _scopes on <self:ScopeVisitor> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__scope, 84);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = core___core__List___core__abstract_collection__Collection__is_empty(var);
}
var4 = !var3;
if (unlikely(!var4)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__scope, 90);
fatal_exit(1);
}
{
{ /* Inline scope$ScopeVisitor$scopes (self) on <self:ScopeVisitor> */
var7 = self->attrs[COLOR_nitc__scope__ScopeVisitor___scopes].val; /* _scopes on <self:ScopeVisitor> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__scope, 84);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = core___core__List___core__abstract_collection__Sequence__shift(var5);
}
var_scope = var8;
{
{ /* Inline scope$Scope$variables (var_scope) on <var_scope:Scope> */
var11 = var_scope->attrs[COLOR_nitc__scope__Scope___variables].val; /* _variables on <var_scope:Scope> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _variables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__scope, 232);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = core___core__HashMap___core__abstract_collection__MapRead__values(var9);
}
var_ = var12;
{
var13 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:RemovableCollection[Variable]>*/
}
var_14 = var13;
for(;;) {
{
var15 = ((short int(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_14); /* is_ok on <var_14:Iterator[Variable]>*/
}
if (var15){
} else {
goto BREAK_label;
}
{
var16 = ((val*(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_14); /* item on <var_14:Iterator[Variable]>*/
}
var_v = var16;
{
{ /* Inline scope$Variable$warn_unread (var_v) on <var_v:Variable> */
var19 = var_v->attrs[COLOR_nitc__scope__Variable___warn_unread].s; /* _warn_unread on <var_v:Variable> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
if (var17){
{
{ /* Inline scope$ScopeVisitor$toolcontext (self) on <self:ScopeVisitor> */
var22 = self->attrs[COLOR_nitc__scope__ScopeVisitor___toolcontext].val; /* _toolcontext on <self:ScopeVisitor> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__scope, 71);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline scope$Variable$location (var_v) on <var_v:Variable> */
var25 = var_v->attrs[COLOR_nitc__scope__Variable___location].val; /* _location on <var_v:Variable> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
if (likely(varonce!=NULL)) {
var26 = varonce;
} else {
var27 = "unread-variable";
var29 = (val*)(15l<<2|1);
var30 = (val*)(15l<<2|1);
var31 = (val*)((long)(0)<<2|3);
var32 = (val*)((long)(0)<<2|3);
var28 = core__flat___CString___to_s_unsafe(var27, var29, var30, var31, var32);
var26 = var28;
varonce = var26;
}
if (unlikely(varonce33==NULL)) {
var34 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "Warning: local variable ";
var39 = (val*)(24l<<2|1);
var40 = (val*)(24l<<2|1);
var41 = (val*)((long)(0)<<2|3);
var42 = (val*)((long)(0)<<2|3);
var38 = core__flat___CString___to_s_unsafe(var37, var39, var40, var41, var42);
var36 = var38;
varonce35 = var36;
}
((struct instance_core__NativeArray*)var34)->values[0]=var36;
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = " is never read.";
var47 = (val*)(15l<<2|1);
var48 = (val*)(15l<<2|1);
var49 = (val*)((long)(0)<<2|3);
var50 = (val*)((long)(0)<<2|3);
var46 = core__flat___CString___to_s_unsafe(var45, var47, var48, var49, var50);
var44 = var46;
varonce43 = var44;
}
((struct instance_core__NativeArray*)var34)->values[2]=var44;
} else {
var34 = varonce33;
varonce33 = NULL;
}
{
{ /* Inline scope$Variable$name (var_v) on <var_v:Variable> */
var53 = var_v->attrs[COLOR_nitc__scope__Variable___name].val; /* _name on <var_v:Variable> */
if (unlikely(var53 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__scope, 36);
fatal_exit(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
((struct instance_core__NativeArray*)var34)->values[1]=var51;
{
var54 = ((val*(*)(val* self))(var34->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var34); /* native_to_s on <var34:NativeArray[String]>*/
}
varonce33 = var34;
{
var55 = nitc___nitc__ToolContext___advice(var20, var23, var26, var54);
}
} else {
}
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_14); /* next on <var_14:Iterator[Variable]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_14); /* finish on <var_14:Iterator[Variable]>*/
}
RET_LABEL:;
}
/* method scope$ScopeVisitor$register_variable for (self: ScopeVisitor, ANode, Variable): Bool */
short int nitc__scope___nitc__scope__ScopeVisitor___register_variable(val* self, val* p0, val* p1) {
short int var /* : Bool */;
val* var_node /* var node: ANode */;
val* var_variable /* var variable: Variable */;
val* var1 /* : String */;
val* var3 /* : String */;
val* var_name /* var name: String */;
val* var4 /* : nullable Variable */;
val* var_found /* var found: nullable Variable */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : NativeArray[String] */;
static val* varonce;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : CString */;
val* var14 /* : String */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Int */;
val* var17 /* : nullable Bool */;
val* var18 /* : nullable Bool */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : CString */;
val* var22 /* : String */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Int */;
val* var25 /* : nullable Bool */;
val* var26 /* : nullable Bool */;
val* var27 /* : String */;
val* var28 /* : List[Scope] */;
val* var30 /* : List[Scope] */;
val* var31 /* : nullable Object */;
val* var32 /* : HashMap[String, Variable] */;
val* var34 /* : HashMap[String, Variable] */;
val* var35 /* : Location */;
val* var37 /* : Location */;
var_node = p0;
var_variable = p1;
{
{ /* Inline scope$Variable$name (var_variable) on <var_variable:Variable> */
var3 = var_variable->attrs[COLOR_nitc__scope__Variable___name].val; /* _name on <var_variable:Variable> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__scope, 36);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_name = var1;
{
var4 = nitc__scope___nitc__scope__ScopeVisitor___search_variable(self, var_name);
}
var_found = var4;
if (var_found == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_found,((val*)NULL)) on <var_found:nullable Variable> */
var_other = ((val*)NULL);
{
var8 = ((short int(*)(val* self, val* p0))(var_found->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_found, var_other); /* == on <var_found:nullable Variable(Variable)>*/
}
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
if (unlikely(varonce==NULL)) {
var10 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "Error: a variable named `";
var15 = (val*)(25l<<2|1);
var16 = (val*)(25l<<2|1);
var17 = (val*)((long)(0)<<2|3);
var18 = (val*)((long)(0)<<2|3);
var14 = core__flat___CString___to_s_unsafe(var13, var15, var16, var17, var18);
var12 = var14;
varonce11 = var12;
}
((struct instance_core__NativeArray*)var10)->values[0]=var12;
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "` already exists.";
var23 = (val*)(17l<<2|1);
var24 = (val*)(17l<<2|1);
var25 = (val*)((long)(0)<<2|3);
var26 = (val*)((long)(0)<<2|3);
var22 = core__flat___CString___to_s_unsafe(var21, var23, var24, var25, var26);
var20 = var22;
varonce19 = var20;
}
((struct instance_core__NativeArray*)var10)->values[2]=var20;
} else {
var10 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var10)->values[1]=var_name;
{
var27 = ((val*(*)(val* self))(var10->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var10); /* native_to_s on <var10:NativeArray[String]>*/
}
varonce = var10;
{
nitc__scope___nitc__scope__ScopeVisitor___error(self, var_node, var27); /* Direct call scope$ScopeVisitor$error on <self:ScopeVisitor>*/
}
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline scope$ScopeVisitor$scopes (self) on <self:ScopeVisitor> */
var30 = self->attrs[COLOR_nitc__scope__ScopeVisitor___scopes].val; /* _scopes on <self:ScopeVisitor> */
if (unlikely(var30 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__scope, 84);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
var31 = core___core__List___core__abstract_collection__Collection__first(var28);
}
{
{ /* Inline scope$Scope$variables (var31) on <var31:nullable Object(Scope)> */
var34 = var31->attrs[COLOR_nitc__scope__Scope___variables].val; /* _variables on <var31:nullable Object(Scope)> */
if (unlikely(var34 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _variables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__scope, 232);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var32, var_name, var_variable); /* Direct call hash_collection$HashMap$[]= on <var32:HashMap[String, Variable]>*/
}
{
{ /* Inline parser_nodes$ANode$location (var_node) on <var_node:ANode> */
var37 = var_node->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_node:ANode> */
if (unlikely(var37 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline scope$Variable$location= (var_variable,var35) on <var_variable:Variable> */
var_variable->attrs[COLOR_nitc__scope__Variable___location].val = var35; /* _location on <var_variable:Variable> */
RET_LABEL38:(void)0;
}
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method scope$ScopeVisitor$search_variable for (self: ScopeVisitor, String): nullable Variable */
val* nitc__scope___nitc__scope__ScopeVisitor___search_variable(val* self, val* p0) {
val* var /* : nullable Variable */;
val* var_name /* var name: String */;
val* var1 /* : List[Scope] */;
val* var3 /* : List[Scope] */;
val* var_ /* var : List[Scope] */;
val* var4 /* : ListIterator[nullable Object] */;
val* var_5 /* var : ListIterator[Scope] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_scope /* var scope: Scope */;
val* var8 /* : nullable Variable */;
val* var_res /* var res: nullable Variable */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
var_name = p0;
{
{ /* Inline scope$ScopeVisitor$scopes (self) on <self:ScopeVisitor> */
var3 = self->attrs[COLOR_nitc__scope__ScopeVisitor___scopes].val; /* _scopes on <self:ScopeVisitor> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__scope, 84);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_ = var1;
{
var4 = core___core__List___core__abstract_collection__Collection__iterator(var_);
}
var_5 = var4;
for(;;) {
{
var6 = core___core__ListIterator___core__abstract_collection__Iterator__is_ok(var_5);
}
if (var6){
} else {
goto BREAK_label;
}
{
var7 = core___core__ListIterator___core__abstract_collection__Iterator__item(var_5);
}
var_scope = var7;
{
var8 = nitc__scope___nitc__scope__Scope___get_variable(var_scope, var_name);
}
var_res = var8;
if (var_res == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_res,((val*)NULL)) on <var_res:nullable Variable> */
var_other = ((val*)NULL);
{
var12 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable Variable(Variable)>*/
}
var13 = !var12;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
var = var_res;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))(var_5->class->vft[COLOR_core__abstract_collection__Iterator__next]))(var_5); /* next on <var_5:ListIterator[Scope]>*/
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection$Iterator$finish (var_5) on <var_5:ListIterator[Scope]> */
RET_LABEL14:(void)0;
}
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method scope$ScopeVisitor$visit for (self: ScopeVisitor, ANode) */
void nitc__scope___nitc__scope__ScopeVisitor___nitc__parser_nodes__Visitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
var_n = p0;
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nitc__scope__ANode__accept_scope_visitor]))(var_n, self); /* accept_scope_visitor on <var_n:ANode>*/
}
RET_LABEL:;
}
/* method scope$ScopeVisitor$enter_visit_block for (self: ScopeVisitor, nullable AExpr, nullable EscapeMark) */
void nitc__scope___nitc__scope__ScopeVisitor___enter_visit_block(val* self, val* p0, val* p1) {
val* var_node /* var node: nullable AExpr */;
val* var_escapemark /* var escapemark: nullable EscapeMark */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : Scope */;
val* var_scope /* var scope: Scope */;
val* var9 /* : List[Scope] */;
val* var11 /* : List[Scope] */;
var_node = p0;
var_escapemark = p1;
if (var_node == NULL) {
var = 1; /* is null */
} else {
var = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_node,((val*)NULL)) on <var_node:nullable AExpr> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_node,var_other) on <var_node:nullable AExpr(AExpr)> */
var5 = var_node == var_other;
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
var6 = NEW_nitc__scope__Scope(&type_nitc__scope__Scope);
{
{ /* Inline kernel$Object$init (var6) on <var6:Scope> */
RET_LABEL7:(void)0;
}
}
var_scope = var6;
{
{ /* Inline scope$Scope$escapemark= (var_scope,var_escapemark) on <var_scope:Scope> */
var_scope->attrs[COLOR_nitc__scope__Scope___escapemark].val = var_escapemark; /* _escapemark on <var_scope:Scope> */
RET_LABEL8:(void)0;
}
}
{
{ /* Inline scope$ScopeVisitor$scopes (self) on <self:ScopeVisitor> */
var11 = self->attrs[COLOR_nitc__scope__ScopeVisitor___scopes].val; /* _scopes on <self:ScopeVisitor> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__scope, 84);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
core___core__List___core__abstract_collection__Sequence__unshift(var9, var_scope); /* Direct call list$List$unshift on <var9:List[Scope]>*/
}
{
nitc___nitc__Visitor___enter_visit(self, var_node); /* Direct call parser_nodes$Visitor$enter_visit on <self:ScopeVisitor>*/
}
{
nitc__scope___nitc__scope__ScopeVisitor___shift_scope(self); /* Direct call scope$ScopeVisitor$shift_scope on <self:ScopeVisitor>*/
}
RET_LABEL:;
}
/* method scope$ScopeVisitor$search_label for (self: ScopeVisitor, String): nullable EscapeMark */
val* nitc__scope___nitc__scope__ScopeVisitor___search_label(val* self, val* p0) {
val* var /* : nullable EscapeMark */;
val* var_name /* var name: String */;
val* var1 /* : List[Scope] */;
val* var3 /* : List[Scope] */;
val* var_ /* var : List[Scope] */;
val* var4 /* : ListIterator[nullable Object] */;
val* var_5 /* var : ListIterator[Scope] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_scope /* var scope: Scope */;
val* var8 /* : nullable EscapeMark */;
val* var10 /* : nullable EscapeMark */;
val* var_res /* var res: nullable EscapeMark */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var_17 /* var : Bool */;
val* var18 /* : nullable String */;
val* var20 /* : nullable String */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
var_name = p0;
{
{ /* Inline scope$ScopeVisitor$scopes (self) on <self:ScopeVisitor> */
var3 = self->attrs[COLOR_nitc__scope__ScopeVisitor___scopes].val; /* _scopes on <self:ScopeVisitor> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__scope, 84);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_ = var1;
{
var4 = core___core__List___core__abstract_collection__Collection__iterator(var_);
}
var_5 = var4;
for(;;) {
{
var6 = core___core__ListIterator___core__abstract_collection__Iterator__is_ok(var_5);
}
if (var6){
} else {
goto BREAK_label;
}
{
var7 = core___core__ListIterator___core__abstract_collection__Iterator__item(var_5);
}
var_scope = var7;
{
{ /* Inline scope$Scope$escapemark (var_scope) on <var_scope:Scope> */
var10 = var_scope->attrs[COLOR_nitc__scope__Scope___escapemark].val; /* _escapemark on <var_scope:Scope> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_res = var8;
if (var_res == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_res,((val*)NULL)) on <var_res:nullable EscapeMark> */
var_other = ((val*)NULL);
{
var15 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable EscapeMark(EscapeMark)>*/
}
var16 = !var15;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
var_17 = var12;
if (var12){
{
{ /* Inline scope$EscapeMark$name (var_res) on <var_res:nullable EscapeMark(EscapeMark)> */
var20 = var_res->attrs[COLOR_nitc__scope__EscapeMark___name].val; /* _name on <var_res:nullable EscapeMark(EscapeMark)> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (var18 == NULL) {
var21 = 0; /* <var_name:String> cannot be null */
} else {
var22 = ((short int(*)(val* self, val* p0))(var18->class->vft[COLOR_core__kernel__Object___61d_61d]))(var18, var_name); /* == on <var18:nullable String>*/
var21 = var22;
}
var11 = var21;
} else {
var11 = var_17;
}
if (var11){
var = var_res;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))(var_5->class->vft[COLOR_core__abstract_collection__Iterator__next]))(var_5); /* next on <var_5:ListIterator[Scope]>*/
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection$Iterator$finish (var_5) on <var_5:ListIterator[Scope]> */
RET_LABEL23:(void)0;
}
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method scope$ScopeVisitor$make_escape_mark for (self: ScopeVisitor, nullable ALabel, Bool): EscapeMark */
val* nitc__scope___nitc__scope__ScopeVisitor___make_escape_mark(val* self, val* p0, short int p1) {
val* var /* : EscapeMark */;
val* var_nlabel /* var nlabel: nullable ALabel */;
short int var_for_loop /* var for_loop: Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : nullable TId */;
val* var8 /* : nullable TId */;
val* var_nid /* var nid: nullable TId */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var_other12 /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
static val* varonce;
val* var16 /* : String */;
char* var17 /* : CString */;
val* var18 /* : String */;
val* var19 /* : nullable Int */;
val* var20 /* : nullable Int */;
val* var21 /* : nullable Bool */;
val* var22 /* : nullable Bool */;
val* var23 /* : nullable EscapeMark */;
val* var_res /* var res: nullable EscapeMark */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : CString */;
val* var32 /* : String */;
val* var33 /* : nullable Int */;
val* var34 /* : nullable Int */;
val* var35 /* : nullable Bool */;
val* var36 /* : nullable Bool */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : CString */;
val* var40 /* : String */;
val* var41 /* : nullable Int */;
val* var42 /* : nullable Int */;
val* var43 /* : nullable Bool */;
val* var44 /* : nullable Bool */;
val* var_name /* var name: nullable String */;
val* var45 /* : String */;
val* var46 /* : nullable EscapeMark */;
val* var_found /* var found: nullable EscapeMark */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
val* var53 /* : NativeArray[String] */;
static val* varonce52;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : CString */;
val* var57 /* : String */;
val* var58 /* : nullable Int */;
val* var59 /* : nullable Int */;
val* var60 /* : nullable Bool */;
val* var61 /* : nullable Bool */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : CString */;
val* var65 /* : String */;
val* var66 /* : nullable Int */;
val* var67 /* : nullable Int */;
val* var68 /* : nullable Bool */;
val* var69 /* : nullable Bool */;
val* var70 /* : String */;
val* var71 /* : EscapeMark */;
val* var_res72 /* var res: EscapeMark */;
val* var73 /* : EscapeMark */;
var_nlabel = p0;
var_for_loop = p1;
if (var_nlabel == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_nlabel,((val*)NULL)) on <var_nlabel:nullable ALabel> */
var_other = ((val*)NULL);
{
var4 = ((short int(*)(val* self, val* p0))(var_nlabel->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nlabel, var_other); /* == on <var_nlabel:nullable ALabel(ALabel)>*/
}
var5 = !var4;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes$ALabel$n_id (var_nlabel) on <var_nlabel:nullable ALabel(ALabel)> */
var8 = var_nlabel->attrs[COLOR_nitc__parser_nodes__ALabel___n_id].val; /* _n_id on <var_nlabel:nullable ALabel(ALabel)> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_nid = var6;
if (var_nid == NULL) {
var9 = 1; /* is null */
} else {
var9 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_nid,((val*)NULL)) on <var_nid:nullable TId> */
var_other12 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_nid,var_other12) on <var_nid:nullable TId(TId)> */
var15 = var_nid == var_other12;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
if (likely(varonce!=NULL)) {
var16 = varonce;
} else {
var17 = "";
var19 = (val*)(0l<<2|1);
var20 = (val*)(0l<<2|1);
var21 = (val*)((long)(0)<<2|3);
var22 = (val*)((long)(0)<<2|3);
var18 = core__flat___CString___to_s_unsafe(var17, var19, var20, var21, var22);
var16 = var18;
varonce = var16;
}
{
var23 = nitc__scope___nitc__scope__ScopeVisitor___search_label(self, var16);
}
var_res = var23;
if (var_res == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_res,((val*)NULL)) on <var_res:nullable EscapeMark> */
var_other = ((val*)NULL);
{
var27 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable EscapeMark(EscapeMark)>*/
}
var28 = !var27;
var25 = var28;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var24 = var25;
}
if (var24){
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = "Syntax Error: anonymous label already defined.";
var33 = (val*)(46l<<2|1);
var34 = (val*)(46l<<2|1);
var35 = (val*)((long)(0)<<2|3);
var36 = (val*)((long)(0)<<2|3);
var32 = core__flat___CString___to_s_unsafe(var31, var33, var34, var35, var36);
var30 = var32;
varonce29 = var30;
}
{
nitc__scope___nitc__scope__ScopeVisitor___error(self, var_nlabel, var30); /* Direct call scope$ScopeVisitor$error on <self:ScopeVisitor>*/
}
} else {
}
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = "";
var41 = (val*)(0l<<2|1);
var42 = (val*)(0l<<2|1);
var43 = (val*)((long)(0)<<2|3);
var44 = (val*)((long)(0)<<2|3);
var40 = core__flat___CString___to_s_unsafe(var39, var41, var42, var43, var44);
var38 = var40;
varonce37 = var38;
}
var_name = var38;
} else {
{
var45 = nitc__lexer_work___Token___text(var_nid);
}
var_name = var45;
{
var46 = nitc__scope___nitc__scope__ScopeVisitor___search_label(self, var_name);
}
var_found = var46;
if (var_found == NULL) {
var47 = 0; /* is null */
} else {
var47 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_found,((val*)NULL)) on <var_found:nullable EscapeMark> */
var_other = ((val*)NULL);
{
var50 = ((short int(*)(val* self, val* p0))(var_found->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_found, var_other); /* == on <var_found:nullable EscapeMark(EscapeMark)>*/
}
var51 = !var50;
var48 = var51;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
var47 = var48;
}
if (var47){
if (unlikely(varonce52==NULL)) {
var53 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = "Syntax Error: label `";
var58 = (val*)(21l<<2|1);
var59 = (val*)(21l<<2|1);
var60 = (val*)((long)(0)<<2|3);
var61 = (val*)((long)(0)<<2|3);
var57 = core__flat___CString___to_s_unsafe(var56, var58, var59, var60, var61);
var55 = var57;
varonce54 = var55;
}
((struct instance_core__NativeArray*)var53)->values[0]=var55;
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = "` already defined.";
var66 = (val*)(18l<<2|1);
var67 = (val*)(18l<<2|1);
var68 = (val*)((long)(0)<<2|3);
var69 = (val*)((long)(0)<<2|3);
var65 = core__flat___CString___to_s_unsafe(var64, var66, var67, var68, var69);
var63 = var65;
varonce62 = var63;
}
((struct instance_core__NativeArray*)var53)->values[2]=var63;
} else {
var53 = varonce52;
varonce52 = NULL;
}
((struct instance_core__NativeArray*)var53)->values[1]=var_name;
{
var70 = ((val*(*)(val* self))(var53->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var53); /* native_to_s on <var53:NativeArray[String]>*/
}
varonce52 = var53;
{
nitc__scope___nitc__scope__ScopeVisitor___error(self, var_nlabel, var70); /* Direct call scope$ScopeVisitor$error on <self:ScopeVisitor>*/
}
} else {
}
}
} else {
var_name = ((val*)NULL);
}
var71 = NEW_nitc__EscapeMark(&type_nitc__EscapeMark);
{
((void(*)(val* self, val* p0))(var71->class->vft[COLOR_nitc__scope__EscapeMark__name_61d]))(var71, var_name); /* name= on <var71:EscapeMark>*/
}
{
((void(*)(val* self))(var71->class->vft[COLOR_core__kernel__Object__init]))(var71); /* init on <var71:EscapeMark>*/
}
var_res72 = var71;
if (var_for_loop){
var73 = NEW_nitc__EscapeMark(&type_nitc__EscapeMark);
{
((void(*)(val* self, val* p0))(var73->class->vft[COLOR_nitc__scope__EscapeMark__name_61d]))(var73, var_name); /* name= on <var73:EscapeMark>*/
}
{
((void(*)(val* self))(var73->class->vft[COLOR_core__kernel__Object__init]))(var73); /* init on <var73:EscapeMark>*/
}
{
{ /* Inline scope$EscapeMark$continue_mark= (var_res72,var73) on <var_res72:EscapeMark> */
var_res72->attrs[COLOR_nitc__scope__EscapeMark___continue_mark].val = var73; /* _continue_mark on <var_res72:EscapeMark> */
RET_LABEL74:(void)0;
}
}
} else {
}
var = var_res72;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method scope$ScopeVisitor$get_escapemark for (self: ScopeVisitor, ANode, nullable ALabel): nullable EscapeMark */
val* nitc__scope___nitc__scope__ScopeVisitor___get_escapemark(val* self, val* p0, val* p1) {
val* var /* : nullable EscapeMark */;
val* var_node /* var node: ANode */;
val* var_nlabel /* var nlabel: nullable ALabel */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : nullable TId */;
val* var8 /* : nullable TId */;
val* var_nid /* var nid: nullable TId */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var_other12 /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
static val* varonce;
val* var16 /* : String */;
char* var17 /* : CString */;
val* var18 /* : String */;
val* var19 /* : nullable Int */;
val* var20 /* : nullable Int */;
val* var21 /* : nullable Bool */;
val* var22 /* : nullable Bool */;
val* var23 /* : nullable EscapeMark */;
val* var_res /* var res: nullable EscapeMark */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : CString */;
val* var33 /* : String */;
val* var34 /* : nullable Int */;
val* var35 /* : nullable Int */;
val* var36 /* : nullable Bool */;
val* var37 /* : nullable Bool */;
val* var39 /* : String */;
val* var_name /* var name: String */;
val* var40 /* : nullable EscapeMark */;
val* var_res41 /* var res: nullable EscapeMark */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
val* var49 /* : NativeArray[String] */;
static val* varonce48;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : CString */;
val* var53 /* : String */;
val* var54 /* : nullable Int */;
val* var55 /* : nullable Int */;
val* var56 /* : nullable Bool */;
val* var57 /* : nullable Bool */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : CString */;
val* var61 /* : String */;
val* var62 /* : nullable Int */;
val* var63 /* : nullable Int */;
val* var64 /* : nullable Bool */;
val* var65 /* : nullable Bool */;
val* var66 /* : String */;
val* var68 /* : List[Scope] */;
val* var70 /* : List[Scope] */;
val* var_ /* var : List[Scope] */;
val* var71 /* : ListIterator[nullable Object] */;
val* var_72 /* var : ListIterator[Scope] */;
short int var73 /* : Bool */;
val* var74 /* : nullable Object */;
val* var_scope /* var scope: Scope */;
val* var75 /* : nullable EscapeMark */;
val* var77 /* : nullable EscapeMark */;
val* var_res78 /* var res: nullable EscapeMark */;
short int var79 /* : Bool */;
short int var80 /* : Bool */;
short int var82 /* : Bool */;
short int var83 /* : Bool */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : CString */;
val* var88 /* : String */;
val* var89 /* : nullable Int */;
val* var90 /* : nullable Int */;
val* var91 /* : nullable Bool */;
val* var92 /* : nullable Bool */;
var_node = p0;
var_nlabel = p1;
if (var_nlabel == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_nlabel,((val*)NULL)) on <var_nlabel:nullable ALabel> */
var_other = ((val*)NULL);
{
var4 = ((short int(*)(val* self, val* p0))(var_nlabel->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nlabel, var_other); /* == on <var_nlabel:nullable ALabel(ALabel)>*/
}
var5 = !var4;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline parser_nodes$ALabel$n_id (var_nlabel) on <var_nlabel:nullable ALabel(ALabel)> */
var8 = var_nlabel->attrs[COLOR_nitc__parser_nodes__ALabel___n_id].val; /* _n_id on <var_nlabel:nullable ALabel(ALabel)> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_nid = var6;
if (var_nid == NULL) {
var9 = 1; /* is null */
} else {
var9 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_nid,((val*)NULL)) on <var_nid:nullable TId> */
var_other12 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_nid,var_other12) on <var_nid:nullable TId(TId)> */
var15 = var_nid == var_other12;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
if (likely(varonce!=NULL)) {
var16 = varonce;
} else {
var17 = "";
var19 = (val*)(0l<<2|1);
var20 = (val*)(0l<<2|1);
var21 = (val*)((long)(0)<<2|3);
var22 = (val*)((long)(0)<<2|3);
var18 = core__flat___CString___to_s_unsafe(var17, var19, var20, var21, var22);
var16 = var18;
varonce = var16;
}
{
var23 = nitc__scope___nitc__scope__ScopeVisitor___search_label(self, var16);
}
var_res = var23;
if (var_res == NULL) {
var24 = 1; /* is null */
} else {
var24 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_res,((val*)NULL)) on <var_res:nullable EscapeMark> */
var_other12 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_res,var_other12) on <var_res:nullable EscapeMark(EscapeMark)> */
var29 = var_res == var_other12;
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
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "Syntax Error: invalid anonymous label.";
var34 = (val*)(38l<<2|1);
var35 = (val*)(38l<<2|1);
var36 = (val*)((long)(0)<<2|3);
var37 = (val*)((long)(0)<<2|3);
var33 = core__flat___CString___to_s_unsafe(var32, var34, var35, var36, var37);
var31 = var33;
varonce30 = var31;
}
{
nitc__scope___nitc__scope__ScopeVisitor___error(self, var_nlabel, var31); /* Direct call scope$ScopeVisitor$error on <self:ScopeVisitor>*/
}
{
{ /* Inline modelbuilder_base$ANode$is_broken= (var_node,1) on <var_node:ANode> */
var_node->attrs[COLOR_nitc__modelbuilder_base__ANode___is_broken].s = 1; /* _is_broken on <var_node:ANode> */
RET_LABEL38:(void)0;
}
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var = var_res;
goto RET_LABEL;
} else {
}
{
var39 = nitc__lexer_work___Token___text(var_nid);
}
var_name = var39;
{
var40 = nitc__scope___nitc__scope__ScopeVisitor___search_label(self, var_name);
}
var_res41 = var40;
if (var_res41 == NULL) {
var42 = 1; /* is null */
} else {
var42 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_res41,((val*)NULL)) on <var_res41:nullable EscapeMark> */
var_other12 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_res41,var_other12) on <var_res41:nullable EscapeMark(EscapeMark)> */
var47 = var_res41 == var_other12;
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
var42 = var43;
}
if (var42){
if (unlikely(varonce48==NULL)) {
var49 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = "Syntax Error: invalid label `";
var54 = (val*)(29l<<2|1);
var55 = (val*)(29l<<2|1);
var56 = (val*)((long)(0)<<2|3);
var57 = (val*)((long)(0)<<2|3);
var53 = core__flat___CString___to_s_unsafe(var52, var54, var55, var56, var57);
var51 = var53;
varonce50 = var51;
}
((struct instance_core__NativeArray*)var49)->values[0]=var51;
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "`.";
var62 = (val*)(2l<<2|1);
var63 = (val*)(2l<<2|1);
var64 = (val*)((long)(0)<<2|3);
var65 = (val*)((long)(0)<<2|3);
var61 = core__flat___CString___to_s_unsafe(var60, var62, var63, var64, var65);
var59 = var61;
varonce58 = var59;
}
((struct instance_core__NativeArray*)var49)->values[2]=var59;
} else {
var49 = varonce48;
varonce48 = NULL;
}
((struct instance_core__NativeArray*)var49)->values[1]=var_name;
{
var66 = ((val*(*)(val* self))(var49->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var49); /* native_to_s on <var49:NativeArray[String]>*/
}
varonce48 = var49;
{
nitc__scope___nitc__scope__ScopeVisitor___error(self, var_nlabel, var66); /* Direct call scope$ScopeVisitor$error on <self:ScopeVisitor>*/
}
{
{ /* Inline modelbuilder_base$ANode$is_broken= (var_node,1) on <var_node:ANode> */
var_node->attrs[COLOR_nitc__modelbuilder_base__ANode___is_broken].s = 1; /* _is_broken on <var_node:ANode> */
RET_LABEL67:(void)0;
}
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var = var_res41;
goto RET_LABEL;
} else {
{
{ /* Inline scope$ScopeVisitor$scopes (self) on <self:ScopeVisitor> */
var70 = self->attrs[COLOR_nitc__scope__ScopeVisitor___scopes].val; /* _scopes on <self:ScopeVisitor> */
if (unlikely(var70 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__scope, 84);
fatal_exit(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
var_ = var68;
{
var71 = core___core__List___core__abstract_collection__Collection__iterator(var_);
}
var_72 = var71;
for(;;) {
{
var73 = core___core__ListIterator___core__abstract_collection__Iterator__is_ok(var_72);
}
if (var73){
} else {
goto BREAK_label;
}
{
var74 = core___core__ListIterator___core__abstract_collection__Iterator__item(var_72);
}
var_scope = var74;
{
{ /* Inline scope$Scope$escapemark (var_scope) on <var_scope:Scope> */
var77 = var_scope->attrs[COLOR_nitc__scope__Scope___escapemark].val; /* _escapemark on <var_scope:Scope> */
var75 = var77;
RET_LABEL76:(void)0;
}
}
var_res78 = var75;
if (var_res78 == NULL) {
var79 = 0; /* is null */
} else {
var79 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_res78,((val*)NULL)) on <var_res78:nullable EscapeMark> */
var_other = ((val*)NULL);
{
var82 = ((short int(*)(val* self, val* p0))(var_res78->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res78, var_other); /* == on <var_res78:nullable EscapeMark(EscapeMark)>*/
}
var83 = !var82;
var80 = var83;
goto RET_LABEL81;
RET_LABEL81:(void)0;
}
var79 = var80;
}
if (var79){
var = var_res78;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))(var_72->class->vft[COLOR_core__abstract_collection__Iterator__next]))(var_72); /* next on <var_72:ListIterator[Scope]>*/
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection$Iterator$finish (var_72) on <var_72:ListIterator[Scope]> */
RET_LABEL84:(void)0;
}
}
if (likely(varonce85!=NULL)) {
var86 = varonce85;
} else {
var87 = "Syntax Error: `break` statement outside block.";
var89 = (val*)(46l<<2|1);
var90 = (val*)(46l<<2|1);
var91 = (val*)((long)(0)<<2|3);
var92 = (val*)((long)(0)<<2|3);
var88 = core__flat___CString___to_s_unsafe(var87, var89, var90, var91, var92);
var86 = var88;
varonce85 = var86;
}
{
nitc__scope___nitc__scope__ScopeVisitor___error(self, var_node, var86); /* Direct call scope$ScopeVisitor$error on <self:ScopeVisitor>*/
}
var = ((val*)NULL);
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method scope$ScopeVisitor$error for (self: ScopeVisitor, ANode, String) */
void nitc__scope___nitc__scope__ScopeVisitor___error(val* self, val* p0, val* p1) {
val* var_node /* var node: ANode */;
val* var_message /* var message: String */;
val* var /* : ToolContext */;
val* var2 /* : ToolContext */;
val* var3 /* : Location */;
val* var4 /* : Message */;
var_node = p0;
var_message = p1;
{
{ /* Inline scope$ScopeVisitor$toolcontext (self) on <self:ScopeVisitor> */
var2 = self->attrs[COLOR_nitc__scope__ScopeVisitor___toolcontext].val; /* _toolcontext on <self:ScopeVisitor> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__scope, 71);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = ((val*(*)(val* self))(var_node->class->vft[COLOR_nitc__parser_nodes__ANode__hot_location]))(var_node); /* hot_location on <var_node:ANode>*/
}
{
var4 = nitc___nitc__ToolContext___error(var, var3, var_message);
}
{
{ /* Inline modelbuilder_base$ANode$is_broken= (var_node,1) on <var_node:ANode> */
var_node->attrs[COLOR_nitc__modelbuilder_base__ANode___is_broken].s = 1; /* _is_broken on <var_node:ANode> */
RET_LABEL5:(void)0;
}
}
RET_LABEL:;
}
/* method scope$Scope$variables for (self: Scope): HashMap[String, Variable] */
val* nitc__scope___nitc__scope__Scope___variables(val* self) {
val* var /* : HashMap[String, Variable] */;
val* var1 /* : HashMap[String, Variable] */;
var1 = self->attrs[COLOR_nitc__scope__Scope___variables].val; /* _variables on <self:Scope> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _variables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__scope, 232);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope$Scope$escapemark for (self: Scope): nullable EscapeMark */
val* nitc__scope___nitc__scope__Scope___escapemark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_nitc__scope__Scope___escapemark].val; /* _escapemark on <self:Scope> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope$Scope$escapemark= for (self: Scope, nullable EscapeMark) */
void nitc__scope___nitc__scope__Scope___escapemark_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__scope__Scope___escapemark].val = p0; /* _escapemark on <self:Scope> */
RET_LABEL:;
}
/* method scope$Scope$get_variable for (self: Scope, String): nullable Variable */
val* nitc__scope___nitc__scope__Scope___get_variable(val* self, val* p0) {
val* var /* : nullable Variable */;
val* var_name /* var name: String */;
val* var1 /* : HashMap[String, Variable] */;
val* var3 /* : HashMap[String, Variable] */;
short int var4 /* : Bool */;
val* var5 /* : HashMap[String, Variable] */;
val* var7 /* : HashMap[String, Variable] */;
val* var8 /* : nullable Object */;
var_name = p0;
{
{ /* Inline scope$Scope$variables (self) on <self:Scope> */
var3 = self->attrs[COLOR_nitc__scope__Scope___variables].val; /* _variables on <self:Scope> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _variables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__scope, 232);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var1, var_name);
}
if (var4){
{
{ /* Inline scope$Scope$variables (self) on <self:Scope> */
var7 = self->attrs[COLOR_nitc__scope__Scope___variables].val; /* _variables on <self:Scope> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _variables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__scope, 232);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var5, var_name);
}
var = var8;
goto RET_LABEL;
} else {
var = ((val*)NULL);
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method scope$ANode$accept_scope_visitor for (self: ANode, ScopeVisitor) */
void nitc__scope___ANode___accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__parser_nodes__ANode__visit_all]))(self, var_v); /* visit_all on <self:ANode>*/
}
RET_LABEL:;
}
/* method scope$APropdef$return_mark for (self: APropdef): nullable EscapeMark */
val* nitc__scope___APropdef___return_mark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_nitc__scope__APropdef___return_mark].val; /* _return_mark on <self:APropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope$APropdef$return_mark= for (self: APropdef, nullable EscapeMark) */
void nitc__scope___APropdef___return_mark_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__scope__APropdef___return_mark].val = p0; /* _return_mark on <self:APropdef> */
RET_LABEL:;
}
/* method scope$APropdef$do_scope for (self: APropdef, ToolContext) */
void nitc__scope___APropdef___do_scope(val* self, val* p0) {
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var /* : ScopeVisitor */;
val* var_v /* var v: ScopeVisitor */;
var_toolcontext = p0;
var = NEW_nitc__scope__ScopeVisitor(&type_nitc__scope__ScopeVisitor);
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nitc__scope__ScopeVisitor__toolcontext_61d]))(var, var_toolcontext); /* toolcontext= on <var:ScopeVisitor>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nitc__scope__ScopeVisitor__propdef_61d]))(var, self); /* propdef= on <var:ScopeVisitor>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__init]))(var); /* init on <var:ScopeVisitor>*/
}
var_v = var;
{
nitc___nitc__Visitor___enter_visit(var_v, self); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:ScopeVisitor>*/
}
{
nitc__scope___nitc__scope__ScopeVisitor___shift_scope(var_v); /* Direct call scope$ScopeVisitor$shift_scope on <var_v:ScopeVisitor>*/
}
RET_LABEL:;
}
/* method scope$AParam$variable for (self: AParam): nullable Variable */
val* nitc__scope___AParam___variable(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
var1 = self->attrs[COLOR_nitc__scope__AParam___variable].val; /* _variable on <self:AParam> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope$AParam$variable= for (self: AParam, nullable Variable) */
void nitc__scope___AParam___variable_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__scope__AParam___variable].val = p0; /* _variable on <self:AParam> */
RET_LABEL:;
}
/* method scope$AParam$accept_scope_visitor for (self: AParam, ScopeVisitor) */
void nitc__scope___AParam___ANode__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : TId */;
val* var2 /* : TId */;
val* var_nid /* var nid: TId */;
val* var3 /* : Variable */;
val* var4 /* : String */;
val* var_variable /* var variable: Variable */;
short int var5 /* : Bool */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__scope___AParam___ANode__accept_scope_visitor]))(self, p0); /* accept_scope_visitor on <self:AParam>*/
}
{
{ /* Inline parser_nodes$AParam$n_id (self) on <self:AParam> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AParam___n_id].val; /* _n_id on <self:AParam> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1760);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_nid = var;
var3 = NEW_nitc__Variable(&type_nitc__Variable);
{
var4 = nitc__lexer_work___Token___text(var_nid);
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__scope__Variable__name_61d]))(var3, var4); /* name= on <var3:Variable>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:Variable>*/
}
var_variable = var3;
{
var5 = nitc__scope___nitc__scope__ScopeVisitor___register_variable(var_v, var_nid, var_variable);
}
{
{ /* Inline scope$AParam$variable= (self,var_variable) on <self:AParam> */
self->attrs[COLOR_nitc__scope__AParam___variable].val = var_variable; /* _variable on <self:AParam> */
RET_LABEL6:(void)0;
}
}
RET_LABEL:;
}
/* method scope$AVardeclExpr$variable for (self: AVardeclExpr): nullable Variable */
val* nitc__scope___AVardeclExpr___variable(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
var1 = self->attrs[COLOR_nitc__scope__AVardeclExpr___variable].val; /* _variable on <self:AVardeclExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope$AVardeclExpr$variable= for (self: AVardeclExpr, nullable Variable) */
void nitc__scope___AVardeclExpr___variable_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__scope__AVardeclExpr___variable].val = p0; /* _variable on <self:AVardeclExpr> */
RET_LABEL:;
}
/* method scope$AVardeclExpr$accept_scope_visitor for (self: AVardeclExpr, ScopeVisitor) */
void nitc__scope___AVardeclExpr___ANode__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : TId */;
val* var2 /* : TId */;
val* var_nid /* var nid: TId */;
val* var3 /* : Variable */;
val* var4 /* : String */;
val* var_variable /* var variable: Variable */;
short int var5 /* : Bool */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__scope___AVardeclExpr___ANode__accept_scope_visitor]))(self, p0); /* accept_scope_visitor on <self:AVardeclExpr>*/
}
{
{ /* Inline parser_nodes$AVardeclExpr$n_id (self) on <self:AVardeclExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AVardeclExpr___n_id].val; /* _n_id on <self:AVardeclExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1826);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_nid = var;
var3 = NEW_nitc__Variable(&type_nitc__Variable);
{
var4 = nitc__lexer_work___Token___text(var_nid);
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__scope__Variable__name_61d]))(var3, var4); /* name= on <var3:Variable>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:Variable>*/
}
var_variable = var3;
{
var5 = nitc__scope___nitc__scope__ScopeVisitor___register_variable(var_v, var_nid, var_variable);
}
{
{ /* Inline scope$Variable$warn_unread= (var_variable,1) on <var_variable:Variable> */
var_variable->attrs[COLOR_nitc__scope__Variable___warn_unread].s = 1; /* _warn_unread on <var_variable:Variable> */
RET_LABEL6:(void)0;
}
}
{
{ /* Inline scope$AVardeclExpr$variable= (self,var_variable) on <self:AVardeclExpr> */
self->attrs[COLOR_nitc__scope__AVardeclExpr___variable].val = var_variable; /* _variable on <self:AVardeclExpr> */
RET_LABEL7:(void)0;
}
}
RET_LABEL:;
}
/* method scope$ASelfExpr$variable= for (self: ASelfExpr, nullable Variable) */
void nitc__scope___ASelfExpr___variable_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__scope__ASelfExpr___variable].val = p0; /* _variable on <self:ASelfExpr> */
RET_LABEL:;
}
/* method scope$ASelfExpr$accept_scope_visitor for (self: ASelfExpr, ScopeVisitor) */
void nitc__scope___ASelfExpr___ANode__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : Variable */;
val* var2 /* : Variable */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__scope___ASelfExpr___ANode__accept_scope_visitor]))(self, p0); /* accept_scope_visitor on <self:ASelfExpr>*/
}
{
{ /* Inline scope$ScopeVisitor$selfvariable (var_v) on <var_v:ScopeVisitor> */
var2 = var_v->attrs[COLOR_nitc__scope__ScopeVisitor___selfvariable].val; /* _selfvariable on <var_v:ScopeVisitor> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _selfvariable");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__scope, 77);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline scope$ASelfExpr$variable= (self,var) on <self:ASelfExpr> */
self->attrs[COLOR_nitc__scope__ASelfExpr___variable].val = var; /* _variable on <self:ASelfExpr> */
RET_LABEL3:(void)0;
}
}
RET_LABEL:;
}
/* method scope$AEscapeExpr$escapemark for (self: AEscapeExpr): nullable EscapeMark */
val* nitc__scope___AEscapeExpr___escapemark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_nitc__scope__AEscapeExpr___escapemark].val; /* _escapemark on <self:AEscapeExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope$AEscapeExpr$escapemark= for (self: AEscapeExpr, nullable EscapeMark) */
void nitc__scope___AEscapeExpr___escapemark_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__scope__AEscapeExpr___escapemark].val = p0; /* _escapemark on <self:AEscapeExpr> */
RET_LABEL:;
}
/* method scope$AContinueExpr$accept_scope_visitor for (self: AContinueExpr, ScopeVisitor) */
void nitc__scope___AContinueExpr___ANode__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : nullable ALabel */;
val* var2 /* : nullable ALabel */;
val* var3 /* : nullable EscapeMark */;
val* var_escapemark /* var escapemark: nullable EscapeMark */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable EscapeMark */;
val* var12 /* : nullable EscapeMark */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
static val* varonce;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Bool */;
val* var25 /* : nullable Bool */;
val* var26 /* : Array[AEscapeExpr] */;
val* var28 /* : Array[AEscapeExpr] */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__scope___AContinueExpr___ANode__accept_scope_visitor]))(self, p0); /* accept_scope_visitor on <self:AContinueExpr>*/
}
{
{ /* Inline parser_nodes$ALabelable$n_label (self) on <self:AContinueExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AContinueExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__scope___nitc__scope__ScopeVisitor___get_escapemark(var_v, self, var);
}
var_escapemark = var3;
if (var_escapemark == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_escapemark,((val*)NULL)) on <var_escapemark:nullable EscapeMark> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_escapemark,var_other) on <var_escapemark:nullable EscapeMark(EscapeMark)> */
var9 = var_escapemark == var_other;
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
{ /* Inline scope$EscapeMark$continue_mark (var_escapemark) on <var_escapemark:nullable EscapeMark(EscapeMark)> */
var12 = var_escapemark->attrs[COLOR_nitc__scope__EscapeMark___continue_mark].val; /* _continue_mark on <var_escapemark:nullable EscapeMark(EscapeMark)> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_escapemark = var10;
if (var_escapemark == NULL) {
var13 = 1; /* is null */
} else {
var13 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_escapemark,((val*)NULL)) on <var_escapemark:nullable EscapeMark> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_escapemark,var_other) on <var_escapemark:nullable EscapeMark(EscapeMark)> */
var18 = var_escapemark == var_other;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
if (var13){
if (likely(varonce!=NULL)) {
var19 = varonce;
} else {
var20 = "Error: cannot \'continue\', only \'break\'.";
var22 = (val*)(39l<<2|1);
var23 = (val*)(39l<<2|1);
var24 = (val*)((long)(0)<<2|3);
var25 = (val*)((long)(0)<<2|3);
var21 = core__flat___CString___to_s_unsafe(var20, var22, var23, var24, var25);
var19 = var21;
varonce = var19;
}
{
nitc__scope___nitc__scope__ScopeVisitor___error(var_v, self, var19); /* Direct call scope$ScopeVisitor$error on <var_v:ScopeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline scope$EscapeMark$escapes (var_escapemark) on <var_escapemark:nullable EscapeMark(EscapeMark)> */
var28 = var_escapemark->attrs[COLOR_nitc__scope__EscapeMark___escapes].val; /* _escapes on <var_escapemark:nullable EscapeMark(EscapeMark)> */
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__scope, 59);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var26, self); /* Direct call array$Array$add on <var26:Array[AEscapeExpr]>*/
}
{
{ /* Inline scope$AEscapeExpr$escapemark= (self,var_escapemark) on <self:AContinueExpr> */
self->attrs[COLOR_nitc__scope__AEscapeExpr___escapemark].val = var_escapemark; /* _escapemark on <self:AContinueExpr> */
RET_LABEL29:(void)0;
}
}
RET_LABEL:;
}
/* method scope$ABreakExpr$accept_scope_visitor for (self: ABreakExpr, ScopeVisitor) */
void nitc__scope___ABreakExpr___ANode__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : nullable ALabel */;
val* var2 /* : nullable ALabel */;
val* var3 /* : nullable EscapeMark */;
val* var_escapemark /* var escapemark: nullable EscapeMark */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : Array[AEscapeExpr] */;
val* var12 /* : Array[AEscapeExpr] */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__scope___ABreakExpr___ANode__accept_scope_visitor]))(self, p0); /* accept_scope_visitor on <self:ABreakExpr>*/
}
{
{ /* Inline parser_nodes$ALabelable$n_label (self) on <self:ABreakExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ABreakExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__scope___nitc__scope__ScopeVisitor___get_escapemark(var_v, self, var);
}
var_escapemark = var3;
if (var_escapemark == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_escapemark,((val*)NULL)) on <var_escapemark:nullable EscapeMark> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_escapemark,var_other) on <var_escapemark:nullable EscapeMark(EscapeMark)> */
var9 = var_escapemark == var_other;
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
{ /* Inline scope$EscapeMark$escapes (var_escapemark) on <var_escapemark:nullable EscapeMark(EscapeMark)> */
var12 = var_escapemark->attrs[COLOR_nitc__scope__EscapeMark___escapes].val; /* _escapes on <var_escapemark:nullable EscapeMark(EscapeMark)> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__scope, 59);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var10, self); /* Direct call array$Array$add on <var10:Array[AEscapeExpr]>*/
}
{
{ /* Inline scope$AEscapeExpr$escapemark= (self,var_escapemark) on <self:ABreakExpr> */
self->attrs[COLOR_nitc__scope__AEscapeExpr___escapemark].val = var_escapemark; /* _escapemark on <self:ABreakExpr> */
RET_LABEL13:(void)0;
}
}
RET_LABEL:;
}
/* method scope$AReturnExpr$accept_scope_visitor for (self: AReturnExpr, ScopeVisitor) */
void nitc__scope___AReturnExpr___ANode__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : APropdef */;
val* var2 /* : APropdef */;
val* var3 /* : nullable EscapeMark */;
val* var5 /* : nullable EscapeMark */;
val* var_escapemark /* var escapemark: nullable EscapeMark */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : EscapeMark */;
val* var13 /* : APropdef */;
val* var15 /* : APropdef */;
val* var17 /* : Array[AEscapeExpr] */;
val* var19 /* : Array[AEscapeExpr] */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__scope___AReturnExpr___ANode__accept_scope_visitor]))(self, p0); /* accept_scope_visitor on <self:AReturnExpr>*/
}
{
{ /* Inline scope$ScopeVisitor$propdef (var_v) on <var_v:ScopeVisitor> */
var2 = var_v->attrs[COLOR_nitc__scope__ScopeVisitor___propdef].val; /* _propdef on <var_v:ScopeVisitor> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _propdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__scope, 74);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline scope$APropdef$return_mark (var) on <var:APropdef> */
var5 = var->attrs[COLOR_nitc__scope__APropdef___return_mark].val; /* _return_mark on <var:APropdef> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_escapemark = var3;
if (var_escapemark == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_escapemark,((val*)NULL)) on <var_escapemark:nullable EscapeMark> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_escapemark,var_other) on <var_escapemark:nullable EscapeMark(EscapeMark)> */
var11 = var_escapemark == var_other;
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
var12 = NEW_nitc__EscapeMark(&type_nitc__EscapeMark);
{
((void(*)(val* self, val* p0))(var12->class->vft[COLOR_nitc__scope__EscapeMark__name_61d]))(var12, ((val*)NULL)); /* name= on <var12:EscapeMark>*/
}
{
((void(*)(val* self))(var12->class->vft[COLOR_core__kernel__Object__init]))(var12); /* init on <var12:EscapeMark>*/
}
var_escapemark = var12;
{
{ /* Inline scope$ScopeVisitor$propdef (var_v) on <var_v:ScopeVisitor> */
var15 = var_v->attrs[COLOR_nitc__scope__ScopeVisitor___propdef].val; /* _propdef on <var_v:ScopeVisitor> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _propdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__scope, 74);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline scope$APropdef$return_mark= (var13,var_escapemark) on <var13:APropdef> */
var13->attrs[COLOR_nitc__scope__APropdef___return_mark].val = var_escapemark; /* _return_mark on <var13:APropdef> */
RET_LABEL16:(void)0;
}
}
} else {
}
{
{ /* Inline scope$EscapeMark$escapes (var_escapemark) on <var_escapemark:nullable EscapeMark(EscapeMark)> */
var19 = var_escapemark->attrs[COLOR_nitc__scope__EscapeMark___escapes].val; /* _escapes on <var_escapemark:nullable EscapeMark(EscapeMark)> */
if (unlikely(var19 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__scope, 59);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var17, self); /* Direct call array$Array$add on <var17:Array[AEscapeExpr]>*/
}
{
{ /* Inline scope$AEscapeExpr$escapemark= (self,var_escapemark) on <self:AReturnExpr> */
self->attrs[COLOR_nitc__scope__AEscapeExpr___escapemark].val = var_escapemark; /* _escapemark on <self:AReturnExpr> */
RET_LABEL20:(void)0;
}
}
RET_LABEL:;
}
/* method scope$ADoExpr$break_mark for (self: ADoExpr): nullable EscapeMark */
val* nitc__scope___ADoExpr___break_mark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_nitc__scope__ADoExpr___break_mark].val; /* _break_mark on <self:ADoExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope$ADoExpr$break_mark= for (self: ADoExpr, nullable EscapeMark) */
void nitc__scope___ADoExpr___break_mark_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__scope__ADoExpr___break_mark].val = p0; /* _break_mark on <self:ADoExpr> */
RET_LABEL:;
}
/* method scope$ADoExpr$accept_scope_visitor for (self: ADoExpr, ScopeVisitor) */
void nitc__scope___ADoExpr___ANode__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : nullable ALabel */;
val* var2 /* : nullable ALabel */;
val* var3 /* : EscapeMark */;
val* var5 /* : nullable AExpr */;
val* var7 /* : nullable AExpr */;
val* var8 /* : nullable EscapeMark */;
val* var10 /* : nullable EscapeMark */;
val* var11 /* : nullable AExpr */;
val* var13 /* : nullable AExpr */;
var_v = p0;
{
{ /* Inline parser_nodes$ALabelable$n_label (self) on <self:ADoExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ADoExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__scope___nitc__scope__ScopeVisitor___make_escape_mark(var_v, var, 0);
}
{
{ /* Inline scope$ADoExpr$break_mark= (self,var3) on <self:ADoExpr> */
self->attrs[COLOR_nitc__scope__ADoExpr___break_mark].val = var3; /* _break_mark on <self:ADoExpr> */
RET_LABEL4:(void)0;
}
}
{
{ /* Inline parser_nodes$ADoExpr$n_block (self) on <self:ADoExpr> */
var7 = self->attrs[COLOR_nitc__parser_nodes__ADoExpr___n_block].val; /* _n_block on <self:ADoExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline scope$ADoExpr$break_mark (self) on <self:ADoExpr> */
var10 = self->attrs[COLOR_nitc__scope__ADoExpr___break_mark].val; /* _break_mark on <self:ADoExpr> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
nitc__scope___nitc__scope__ScopeVisitor___enter_visit_block(var_v, var5, var8); /* Direct call scope$ScopeVisitor$enter_visit_block on <var_v:ScopeVisitor>*/
}
{
{ /* Inline parser_nodes$ADoExpr$n_catch (self) on <self:ADoExpr> */
var13 = self->attrs[COLOR_nitc__parser_nodes__ADoExpr___n_catch].val; /* _n_catch on <self:ADoExpr> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
nitc__scope___nitc__scope__ScopeVisitor___enter_visit_block(var_v, var11, ((val*)NULL)); /* Direct call scope$ScopeVisitor$enter_visit_block on <var_v:ScopeVisitor>*/
}
RET_LABEL:;
}
/* method scope$AIfExpr$accept_scope_visitor for (self: AIfExpr, ScopeVisitor) */
void nitc__scope___AIfExpr___ANode__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable AExpr */;
val* var5 /* : nullable AExpr */;
val* var6 /* : nullable AExpr */;
val* var8 /* : nullable AExpr */;
var_v = p0;
{
{ /* Inline parser_nodes$AIfExpr$n_expr (self) on <self:AIfExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_expr].val; /* _n_expr on <self:AIfExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1924);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:ScopeVisitor>*/
}
{
{ /* Inline parser_nodes$AIfExpr$n_then (self) on <self:AIfExpr> */
var5 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_then].val; /* _n_then on <self:AIfExpr> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
nitc__scope___nitc__scope__ScopeVisitor___enter_visit_block(var_v, var3, ((val*)NULL)); /* Direct call scope$ScopeVisitor$enter_visit_block on <var_v:ScopeVisitor>*/
}
{
{ /* Inline parser_nodes$AIfExpr$n_else (self) on <self:AIfExpr> */
var8 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_else].val; /* _n_else on <self:AIfExpr> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
nitc__scope___nitc__scope__ScopeVisitor___enter_visit_block(var_v, var6, ((val*)NULL)); /* Direct call scope$ScopeVisitor$enter_visit_block on <var_v:ScopeVisitor>*/
}
RET_LABEL:;
}
/* method scope$AWhileExpr$break_mark for (self: AWhileExpr): nullable EscapeMark */
val* nitc__scope___AWhileExpr___break_mark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_nitc__scope__AWhileExpr___break_mark].val; /* _break_mark on <self:AWhileExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope$AWhileExpr$break_mark= for (self: AWhileExpr, nullable EscapeMark) */
void nitc__scope___AWhileExpr___break_mark_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__scope__AWhileExpr___break_mark].val = p0; /* _break_mark on <self:AWhileExpr> */
RET_LABEL:;
}
/* method scope$AWhileExpr$continue_mark for (self: AWhileExpr): nullable EscapeMark */
val* nitc__scope___AWhileExpr___continue_mark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_nitc__scope__AWhileExpr___continue_mark].val; /* _continue_mark on <self:AWhileExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope$AWhileExpr$continue_mark= for (self: AWhileExpr, nullable EscapeMark) */
void nitc__scope___AWhileExpr___continue_mark_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__scope__AWhileExpr___continue_mark].val = p0; /* _continue_mark on <self:AWhileExpr> */
RET_LABEL:;
}
/* method scope$AWhileExpr$accept_scope_visitor for (self: AWhileExpr, ScopeVisitor) */
void nitc__scope___AWhileExpr___ANode__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : nullable ALabel */;
val* var2 /* : nullable ALabel */;
val* var3 /* : EscapeMark */;
val* var_escapemark /* var escapemark: EscapeMark */;
val* var5 /* : nullable EscapeMark */;
val* var7 /* : nullable EscapeMark */;
val* var9 /* : AExpr */;
val* var11 /* : AExpr */;
val* var12 /* : nullable AExpr */;
val* var14 /* : nullable AExpr */;
var_v = p0;
{
{ /* Inline parser_nodes$ALabelable$n_label (self) on <self:AWhileExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AWhileExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__scope___nitc__scope__ScopeVisitor___make_escape_mark(var_v, var, 1);
}
var_escapemark = var3;
{
{ /* Inline scope$AWhileExpr$break_mark= (self,var_escapemark) on <self:AWhileExpr> */
self->attrs[COLOR_nitc__scope__AWhileExpr___break_mark].val = var_escapemark; /* _break_mark on <self:AWhileExpr> */
RET_LABEL4:(void)0;
}
}
{
{ /* Inline scope$EscapeMark$continue_mark (var_escapemark) on <var_escapemark:EscapeMark> */
var7 = var_escapemark->attrs[COLOR_nitc__scope__EscapeMark___continue_mark].val; /* _continue_mark on <var_escapemark:EscapeMark> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline scope$AWhileExpr$continue_mark= (self,var5) on <self:AWhileExpr> */
self->attrs[COLOR_nitc__scope__AWhileExpr___continue_mark].val = var5; /* _continue_mark on <self:AWhileExpr> */
RET_LABEL8:(void)0;
}
}
{
{ /* Inline parser_nodes$AWhileExpr$n_expr (self) on <self:AWhileExpr> */
var11 = self->attrs[COLOR_nitc__parser_nodes__AWhileExpr___n_expr].val; /* _n_expr on <self:AWhileExpr> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1971);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
nitc___nitc__Visitor___enter_visit(var_v, var9); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:ScopeVisitor>*/
}
{
{ /* Inline parser_nodes$AWhileExpr$n_block (self) on <self:AWhileExpr> */
var14 = self->attrs[COLOR_nitc__parser_nodes__AWhileExpr___n_block].val; /* _n_block on <self:AWhileExpr> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
nitc__scope___nitc__scope__ScopeVisitor___enter_visit_block(var_v, var12, var_escapemark); /* Direct call scope$ScopeVisitor$enter_visit_block on <var_v:ScopeVisitor>*/
}
RET_LABEL:;
}
/* method scope$ALoopExpr$break_mark for (self: ALoopExpr): nullable EscapeMark */
val* nitc__scope___ALoopExpr___break_mark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_nitc__scope__ALoopExpr___break_mark].val; /* _break_mark on <self:ALoopExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope$ALoopExpr$break_mark= for (self: ALoopExpr, nullable EscapeMark) */
void nitc__scope___ALoopExpr___break_mark_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__scope__ALoopExpr___break_mark].val = p0; /* _break_mark on <self:ALoopExpr> */
RET_LABEL:;
}
/* method scope$ALoopExpr$continue_mark for (self: ALoopExpr): nullable EscapeMark */
val* nitc__scope___ALoopExpr___continue_mark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_nitc__scope__ALoopExpr___continue_mark].val; /* _continue_mark on <self:ALoopExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope$ALoopExpr$continue_mark= for (self: ALoopExpr, nullable EscapeMark) */
void nitc__scope___ALoopExpr___continue_mark_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__scope__ALoopExpr___continue_mark].val = p0; /* _continue_mark on <self:ALoopExpr> */
RET_LABEL:;
}
/* method scope$ALoopExpr$accept_scope_visitor for (self: ALoopExpr, ScopeVisitor) */
void nitc__scope___ALoopExpr___ANode__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : nullable ALabel */;
val* var2 /* : nullable ALabel */;
val* var3 /* : EscapeMark */;
val* var_escapemark /* var escapemark: EscapeMark */;
val* var5 /* : nullable EscapeMark */;
val* var7 /* : nullable EscapeMark */;
val* var9 /* : nullable AExpr */;
val* var11 /* : nullable AExpr */;
var_v = p0;
{
{ /* Inline parser_nodes$ALabelable$n_label (self) on <self:ALoopExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ALoopExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__scope___nitc__scope__ScopeVisitor___make_escape_mark(var_v, var, 1);
}
var_escapemark = var3;
{
{ /* Inline scope$ALoopExpr$break_mark= (self,var_escapemark) on <self:ALoopExpr> */
self->attrs[COLOR_nitc__scope__ALoopExpr___break_mark].val = var_escapemark; /* _break_mark on <self:ALoopExpr> */
RET_LABEL4:(void)0;
}
}
{
{ /* Inline scope$EscapeMark$continue_mark (var_escapemark) on <var_escapemark:EscapeMark> */
var7 = var_escapemark->attrs[COLOR_nitc__scope__EscapeMark___continue_mark].val; /* _continue_mark on <var_escapemark:EscapeMark> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline scope$ALoopExpr$continue_mark= (self,var5) on <self:ALoopExpr> */
self->attrs[COLOR_nitc__scope__ALoopExpr___continue_mark].val = var5; /* _continue_mark on <self:ALoopExpr> */
RET_LABEL8:(void)0;
}
}
{
{ /* Inline parser_nodes$ALoopExpr$n_block (self) on <self:ALoopExpr> */
var11 = self->attrs[COLOR_nitc__parser_nodes__ALoopExpr___n_block].val; /* _n_block on <self:ALoopExpr> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
nitc__scope___nitc__scope__ScopeVisitor___enter_visit_block(var_v, var9, var_escapemark); /* Direct call scope$ScopeVisitor$enter_visit_block on <var_v:ScopeVisitor>*/
}
RET_LABEL:;
}
/* method scope$AForExpr$break_mark for (self: AForExpr): nullable EscapeMark */
val* nitc__scope___AForExpr___break_mark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_nitc__scope__AForExpr___break_mark].val; /* _break_mark on <self:AForExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope$AForExpr$break_mark= for (self: AForExpr, nullable EscapeMark) */
void nitc__scope___AForExpr___break_mark_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__scope__AForExpr___break_mark].val = p0; /* _break_mark on <self:AForExpr> */
RET_LABEL:;
}
/* method scope$AForExpr$continue_mark for (self: AForExpr): nullable EscapeMark */
val* nitc__scope___AForExpr___continue_mark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_nitc__scope__AForExpr___continue_mark].val; /* _continue_mark on <self:AForExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope$AForExpr$continue_mark= for (self: AForExpr, nullable EscapeMark) */
void nitc__scope___AForExpr___continue_mark_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__scope__AForExpr___continue_mark].val = p0; /* _continue_mark on <self:AForExpr> */
RET_LABEL:;
}
/* method scope$AForExpr$accept_scope_visitor for (self: AForExpr, ScopeVisitor) */
void nitc__scope___AForExpr___ANode__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : ANodes[AForGroup] */;
val* var2 /* : ANodes[AForGroup] */;
val* var_ /* var : ANodes[AForGroup] */;
val* var3 /* : Iterator[ANode] */;
val* var_4 /* var : Iterator[AForGroup] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_g /* var g: AForGroup */;
val* var7 /* : AExpr */;
val* var9 /* : AExpr */;
val* var10 /* : List[Scope] */;
val* var12 /* : List[Scope] */;
val* var13 /* : Scope */;
val* var15 /* : ANodes[AForGroup] */;
val* var17 /* : ANodes[AForGroup] */;
val* var_18 /* var : ANodes[AForGroup] */;
val* var19 /* : Iterator[ANode] */;
val* var_20 /* var : Iterator[AForGroup] */;
short int var21 /* : Bool */;
val* var23 /* : nullable Object */;
val* var_g24 /* var g: AForGroup */;
val* var25 /* : Array[Variable] */;
val* var_variables /* var variables: Array[Variable] */;
val* var27 /* : ANodes[TId] */;
val* var29 /* : ANodes[TId] */;
val* var_30 /* var : ANodes[TId] */;
val* var31 /* : Iterator[ANode] */;
val* var_32 /* var : Iterator[TId] */;
short int var33 /* : Bool */;
val* var35 /* : nullable Object */;
val* var_nid /* var nid: TId */;
val* var36 /* : Variable */;
val* var37 /* : String */;
val* var_va /* var va: Variable */;
short int var38 /* : Bool */;
val* var39 /* : nullable ALabel */;
val* var41 /* : nullable ALabel */;
val* var42 /* : EscapeMark */;
val* var_escapemark /* var escapemark: EscapeMark */;
val* var44 /* : nullable EscapeMark */;
val* var46 /* : nullable EscapeMark */;
val* var48 /* : nullable AExpr */;
val* var50 /* : nullable AExpr */;
var_v = p0;
{
{ /* Inline parser_nodes$AForExpr$n_groups (self) on <self:AForExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_groups].val; /* _n_groups on <self:AForExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_groups");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2001);
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
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:Iterator[AForGroup]>*/
}
if (var5){
} else {
goto BREAK_label;
}
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:Iterator[AForGroup]>*/
}
var_g = var6;
{
{ /* Inline parser_nodes$AForGroup$n_expr (var_g) on <var_g:AForGroup> */
var9 = var_g->attrs[COLOR_nitc__parser_nodes__AForGroup___n_expr].val; /* _n_expr on <var_g:AForGroup> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2024);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
nitc___nitc__Visitor___enter_visit(var_v, var7); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:ScopeVisitor>*/
}
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:Iterator[AForGroup]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:Iterator[AForGroup]>*/
}
{
{ /* Inline scope$ScopeVisitor$scopes (var_v) on <var_v:ScopeVisitor> */
var12 = var_v->attrs[COLOR_nitc__scope__ScopeVisitor___scopes].val; /* _scopes on <var_v:ScopeVisitor> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__scope, 84);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var13 = NEW_nitc__scope__Scope(&type_nitc__scope__Scope);
{
{ /* Inline kernel$Object$init (var13) on <var13:Scope> */
RET_LABEL14:(void)0;
}
}
{
core___core__List___core__abstract_collection__Sequence__unshift(var10, var13); /* Direct call list$List$unshift on <var10:List[Scope]>*/
}
{
{ /* Inline parser_nodes$AForExpr$n_groups (self) on <self:AForExpr> */
var17 = self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_groups].val; /* _n_groups on <self:AForExpr> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_groups");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2001);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_18 = var15;
{
var19 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_18);
}
var_20 = var19;
for(;;) {
{
var21 = ((short int(*)(val* self))((((long)var_20&3)?class_info[((long)var_20&3)]:var_20->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_20); /* is_ok on <var_20:Iterator[AForGroup]>*/
}
if (var21){
} else {
goto BREAK_label22;
}
{
var23 = ((val*(*)(val* self))((((long)var_20&3)?class_info[((long)var_20&3)]:var_20->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_20); /* item on <var_20:Iterator[AForGroup]>*/
}
var_g24 = var23;
var25 = NEW_core__Array(&type_core__Array__nitc__Variable);
{
core___core__Array___core__kernel__Object__init(var25); /* Direct call array$Array$init on <var25:Array[Variable]>*/
}
var_variables = var25;
{
{ /* Inline scope$AForGroup$variables= (var_g24,var_variables) on <var_g24:AForGroup> */
var_g24->attrs[COLOR_nitc__scope__AForGroup___variables].val = var_variables; /* _variables on <var_g24:AForGroup> */
RET_LABEL26:(void)0;
}
}
{
{ /* Inline parser_nodes$AForGroup$n_ids (var_g24) on <var_g24:AForGroup> */
var29 = var_g24->attrs[COLOR_nitc__parser_nodes__AForGroup___n_ids].val; /* _n_ids on <var_g24:AForGroup> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_ids");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2018);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_30 = var27;
{
var31 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_30);
}
var_32 = var31;
for(;;) {
{
var33 = ((short int(*)(val* self))((((long)var_32&3)?class_info[((long)var_32&3)]:var_32->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_32); /* is_ok on <var_32:Iterator[TId]>*/
}
if (var33){
} else {
goto BREAK_label34;
}
{
var35 = ((val*(*)(val* self))((((long)var_32&3)?class_info[((long)var_32&3)]:var_32->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_32); /* item on <var_32:Iterator[TId]>*/
}
var_nid = var35;
var36 = NEW_nitc__Variable(&type_nitc__Variable);
{
var37 = nitc__lexer_work___Token___text(var_nid);
}
{
((void(*)(val* self, val* p0))(var36->class->vft[COLOR_nitc__scope__Variable__name_61d]))(var36, var37); /* name= on <var36:Variable>*/
}
{
((void(*)(val* self))(var36->class->vft[COLOR_core__kernel__Object__init]))(var36); /* init on <var36:Variable>*/
}
var_va = var36;
{
var38 = nitc__scope___nitc__scope__ScopeVisitor___register_variable(var_v, var_nid, var_va);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_variables, var_va); /* Direct call array$Array$add on <var_variables:Array[Variable]>*/
}
{
((void(*)(val* self))((((long)var_32&3)?class_info[((long)var_32&3)]:var_32->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_32); /* next on <var_32:Iterator[TId]>*/
}
}
BREAK_label34: (void)0;
{
((void(*)(val* self))((((long)var_32&3)?class_info[((long)var_32&3)]:var_32->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_32); /* finish on <var_32:Iterator[TId]>*/
}
{
((void(*)(val* self))((((long)var_20&3)?class_info[((long)var_20&3)]:var_20->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_20); /* next on <var_20:Iterator[AForGroup]>*/
}
}
BREAK_label22: (void)0;
{
((void(*)(val* self))((((long)var_20&3)?class_info[((long)var_20&3)]:var_20->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_20); /* finish on <var_20:Iterator[AForGroup]>*/
}
{
{ /* Inline parser_nodes$ALabelable$n_label (self) on <self:AForExpr> */
var41 = self->attrs[COLOR_nitc__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AForExpr> */
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
var42 = nitc__scope___nitc__scope__ScopeVisitor___make_escape_mark(var_v, var39, 1);
}
var_escapemark = var42;
{
{ /* Inline scope$AForExpr$break_mark= (self,var_escapemark) on <self:AForExpr> */
self->attrs[COLOR_nitc__scope__AForExpr___break_mark].val = var_escapemark; /* _break_mark on <self:AForExpr> */
RET_LABEL43:(void)0;
}
}
{
{ /* Inline scope$EscapeMark$continue_mark (var_escapemark) on <var_escapemark:EscapeMark> */
var46 = var_escapemark->attrs[COLOR_nitc__scope__EscapeMark___continue_mark].val; /* _continue_mark on <var_escapemark:EscapeMark> */
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline scope$AForExpr$continue_mark= (self,var44) on <self:AForExpr> */
self->attrs[COLOR_nitc__scope__AForExpr___continue_mark].val = var44; /* _continue_mark on <self:AForExpr> */
RET_LABEL47:(void)0;
}
}
{
{ /* Inline parser_nodes$AForExpr$n_block (self) on <self:AForExpr> */
var50 = self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_block].val; /* _n_block on <self:AForExpr> */
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
nitc__scope___nitc__scope__ScopeVisitor___enter_visit_block(var_v, var48, var_escapemark); /* Direct call scope$ScopeVisitor$enter_visit_block on <var_v:ScopeVisitor>*/
}
{
nitc__scope___nitc__scope__ScopeVisitor___shift_scope(var_v); /* Direct call scope$ScopeVisitor$shift_scope on <var_v:ScopeVisitor>*/
}
RET_LABEL:;
}
/* method scope$AForGroup$variables for (self: AForGroup): nullable Array[Variable] */
val* nitc__scope___AForGroup___variables(val* self) {
val* var /* : nullable Array[Variable] */;
val* var1 /* : nullable Array[Variable] */;
var1 = self->attrs[COLOR_nitc__scope__AForGroup___variables].val; /* _variables on <self:AForGroup> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope$AForGroup$variables= for (self: AForGroup, nullable Array[Variable]) */
void nitc__scope___AForGroup___variables_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__scope__AForGroup___variables].val = p0; /* _variables on <self:AForGroup> */
RET_LABEL:;
}
/* method scope$AWithExpr$break_mark for (self: AWithExpr): nullable EscapeMark */
val* nitc__scope___AWithExpr___break_mark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_nitc__scope__AWithExpr___break_mark].val; /* _break_mark on <self:AWithExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope$AWithExpr$break_mark= for (self: AWithExpr, nullable EscapeMark) */
void nitc__scope___AWithExpr___break_mark_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__scope__AWithExpr___break_mark].val = p0; /* _break_mark on <self:AWithExpr> */
RET_LABEL:;
}
/* method scope$AWithExpr$accept_scope_visitor for (self: AWithExpr, ScopeVisitor) */
void nitc__scope___AWithExpr___ANode__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : List[Scope] */;
val* var2 /* : List[Scope] */;
val* var3 /* : Scope */;
val* var5 /* : nullable ALabel */;
val* var7 /* : nullable ALabel */;
val* var8 /* : EscapeMark */;
val* var_escapemark /* var escapemark: EscapeMark */;
val* var10 /* : AExpr */;
val* var12 /* : AExpr */;
val* var13 /* : nullable AExpr */;
val* var15 /* : nullable AExpr */;
var_v = p0;
{
{ /* Inline scope$ScopeVisitor$scopes (var_v) on <var_v:ScopeVisitor> */
var2 = var_v->attrs[COLOR_nitc__scope__ScopeVisitor___scopes].val; /* _scopes on <var_v:ScopeVisitor> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__scope, 84);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = NEW_nitc__scope__Scope(&type_nitc__scope__Scope);
{
{ /* Inline kernel$Object$init (var3) on <var3:Scope> */
RET_LABEL4:(void)0;
}
}
{
core___core__List___core__abstract_collection__Sequence__unshift(var, var3); /* Direct call list$List$unshift on <var:List[Scope]>*/
}
{
{ /* Inline parser_nodes$ALabelable$n_label (self) on <self:AWithExpr> */
var7 = self->attrs[COLOR_nitc__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AWithExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nitc__scope___nitc__scope__ScopeVisitor___make_escape_mark(var_v, var5, 1);
}
var_escapemark = var8;
{
{ /* Inline scope$AWithExpr$break_mark= (self,var_escapemark) on <self:AWithExpr> */
self->attrs[COLOR_nitc__scope__AWithExpr___break_mark].val = var_escapemark; /* _break_mark on <self:AWithExpr> */
RET_LABEL9:(void)0;
}
}
{
{ /* Inline parser_nodes$AWithExpr$n_expr (self) on <self:AWithExpr> */
var12 = self->attrs[COLOR_nitc__parser_nodes__AWithExpr___n_expr].val; /* _n_expr on <self:AWithExpr> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2036);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
nitc___nitc__Visitor___enter_visit(var_v, var10); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:ScopeVisitor>*/
}
{
{ /* Inline parser_nodes$AWithExpr$n_block (self) on <self:AWithExpr> */
var15 = self->attrs[COLOR_nitc__parser_nodes__AWithExpr___n_block].val; /* _n_block on <self:AWithExpr> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
nitc__scope___nitc__scope__ScopeVisitor___enter_visit_block(var_v, var13, var_escapemark); /* Direct call scope$ScopeVisitor$enter_visit_block on <var_v:ScopeVisitor>*/
}
{
nitc__scope___nitc__scope__ScopeVisitor___shift_scope(var_v); /* Direct call scope$ScopeVisitor$shift_scope on <var_v:ScopeVisitor>*/
}
RET_LABEL:;
}
/* method scope$AAssertExpr$accept_scope_visitor for (self: AAssertExpr, ScopeVisitor) */
void nitc__scope___AAssertExpr___ANode__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable AExpr */;
val* var5 /* : nullable AExpr */;
var_v = p0;
{
{ /* Inline parser_nodes$AAssertExpr$n_expr (self) on <self:AAssertExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AAssertExpr___n_expr].val; /* _n_expr on <self:AAssertExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2056);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc___nitc__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes$Visitor$enter_visit on <var_v:ScopeVisitor>*/
}
{
{ /* Inline parser_nodes$AAssertExpr$n_else (self) on <self:AAssertExpr> */
var5 = self->attrs[COLOR_nitc__parser_nodes__AAssertExpr___n_else].val; /* _n_else on <self:AAssertExpr> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
nitc__scope___nitc__scope__ScopeVisitor___enter_visit_block(var_v, var3, ((val*)NULL)); /* Direct call scope$ScopeVisitor$enter_visit_block on <var_v:ScopeVisitor>*/
}
RET_LABEL:;
}
/* method scope$AVarFormExpr$variable for (self: AVarFormExpr): nullable Variable */
val* nitc__scope___AVarFormExpr___variable(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
var1 = self->attrs[COLOR_nitc__scope__AVarFormExpr___variable].val; /* _variable on <self:AVarFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope$AVarFormExpr$variable= for (self: AVarFormExpr, nullable Variable) */
void nitc__scope___AVarFormExpr___variable_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__scope__AVarFormExpr___variable].val = p0; /* _variable on <self:AVarFormExpr> */
RET_LABEL:;
}
/* method scope$ACallFormExpr$accept_scope_visitor for (self: ACallFormExpr, ScopeVisitor) */
void nitc__scope___ACallFormExpr___ANode__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : AQid */;
val* var6 /* : AQid */;
val* var7 /* : TId */;
val* var9 /* : TId */;
val* var10 /* : String */;
val* var_name /* var name: String */;
val* var11 /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : AExprs */;
val* var20 /* : AExprs */;
val* var21 /* : ANodes[AExpr] */;
val* var23 /* : ANodes[AExpr] */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var_ /* var : Bool */;
val* var26 /* : AExprs */;
val* var28 /* : AExprs */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var32 /* : NativeArray[String] */;
static val* varonce;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : CString */;
val* var36 /* : String */;
val* var37 /* : nullable Int */;
val* var38 /* : nullable Int */;
val* var39 /* : nullable Bool */;
val* var40 /* : nullable Bool */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : CString */;
val* var44 /* : String */;
val* var45 /* : nullable Int */;
val* var46 /* : nullable Int */;
val* var47 /* : nullable Bool */;
val* var48 /* : nullable Bool */;
val* var49 /* : String */;
val* var50 /* : AVarFormExpr */;
val* var_n /* var n: AExpr */;
var_v = p0;
{
{ /* Inline parser_nodes$ASendExpr$n_expr (self) on <self:ACallFormExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ACallFormExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2103);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
/* <var:AExpr> isa AImplicitSelfExpr */
cltype = type_nitc__AImplicitSelfExpr.color;
idtype = type_nitc__AImplicitSelfExpr.id;
if(cltype >= var->type->table_size) {
var3 = 0;
} else {
var3 = var->type->type_table[cltype] == idtype;
}
if (var3){
{
{ /* Inline parser_nodes$ACallFormExpr$n_qid (self) on <self:ACallFormExpr> */
var6 = self->attrs[COLOR_nitc__parser_nodes__ACallFormExpr___n_qid].val; /* _n_qid on <self:ACallFormExpr> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_qid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2377);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline parser_nodes$AQid$n_id (var4) on <var4:AQid> */
var9 = var4->attrs[COLOR_nitc__parser_nodes__AQid___n_id].val; /* _n_id on <var4:AQid> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1721);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = nitc__lexer_work___Token___text(var7);
}
var_name = var10;
{
var11 = nitc__scope___nitc__scope__ScopeVisitor___search_variable(var_v, var_name);
}
var_variable = var11;
if (var_variable == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_variable,((val*)NULL)) on <var_variable:nullable Variable> */
var_other = ((val*)NULL);
{
var15 = ((short int(*)(val* self, val* p0))(var_variable->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_variable, var_other); /* == on <var_variable:nullable Variable(Variable)>*/
}
var16 = !var15;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (var12){
{
{ /* Inline parser_nodes$ACallFormExpr$n_args (self) on <self:ACallFormExpr> */
var20 = self->attrs[COLOR_nitc__parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallFormExpr> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2380);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline parser_nodes$AExprs$n_exprs (var18) on <var18:AExprs> */
var23 = var18->attrs[COLOR_nitc__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var18:AExprs> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2790);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = nitc___nitc__ANodes___core__abstract_collection__Collection__is_empty(var21);
}
var25 = !var24;
var_ = var25;
if (var25){
var17 = var_;
} else {
{
{ /* Inline parser_nodes$ACallFormExpr$n_args (self) on <self:ACallFormExpr> */
var28 = self->attrs[COLOR_nitc__parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallFormExpr> */
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2380);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
/* <var26:AExprs> isa AParExprs */
cltype30 = type_nitc__AParExprs.color;
idtype31 = type_nitc__AParExprs.id;
if(cltype30 >= var26->type->table_size) {
var29 = 0;
} else {
var29 = var26->type->type_table[cltype30] == idtype31;
}
var17 = var29;
}
if (var17){
if (unlikely(varonce==NULL)) {
var32 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce33!=NULL)) {
var34 = varonce33;
} else {
var35 = "Error: `";
var37 = (val*)(8l<<2|1);
var38 = (val*)(8l<<2|1);
var39 = (val*)((long)(0)<<2|3);
var40 = (val*)((long)(0)<<2|3);
var36 = core__flat___CString___to_s_unsafe(var35, var37, var38, var39, var40);
var34 = var36;
varonce33 = var34;
}
((struct instance_core__NativeArray*)var32)->values[0]=var34;
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "` is a variable, not a method.";
var45 = (val*)(30l<<2|1);
var46 = (val*)(30l<<2|1);
var47 = (val*)((long)(0)<<2|3);
var48 = (val*)((long)(0)<<2|3);
var44 = core__flat___CString___to_s_unsafe(var43, var45, var46, var47, var48);
var42 = var44;
varonce41 = var42;
}
((struct instance_core__NativeArray*)var32)->values[2]=var42;
} else {
var32 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var32)->values[1]=var_name;
{
var49 = ((val*(*)(val* self))(var32->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var32); /* native_to_s on <var32:NativeArray[String]>*/
}
varonce = var32;
{
nitc__scope___nitc__scope__ScopeVisitor___error(var_v, self, var49); /* Direct call scope$ScopeVisitor$error on <var_v:ScopeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
var50 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__scope__ACallFormExpr__variable_create]))(self, var_variable); /* variable_create on <self:ACallFormExpr>*/
}
var_n = var50;
{
{ /* Inline scope$AVarFormExpr$variable= (var_n,var_variable) on <var_n:AExpr(AVarFormExpr)> */
var_n->attrs[COLOR_nitc__scope__AVarFormExpr___variable].val = var_variable; /* _variable on <var_n:AExpr(AVarFormExpr)> */
RET_LABEL51:(void)0;
}
}
{
nitc__transform___AExpr___nitc__parser_nodes__ANode__replace_with(self, var_n); /* Direct call transform$AExpr$replace_with on <self:ACallFormExpr>*/
}
{
nitc__scope___ANode___accept_scope_visitor(var_n, var_v); /* Direct call scope$ANode$accept_scope_visitor on <var_n:AExpr(AVarFormExpr)>*/
}
goto RET_LABEL;
} else {
}
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__scope___ACallFormExpr___ANode__accept_scope_visitor]))(self, p0); /* accept_scope_visitor on <self:ACallFormExpr>*/
}
RET_LABEL:;
}
/* method scope$ACallExpr$variable_create for (self: ACallExpr, Variable): AVarFormExpr */
val* nitc__scope___ACallExpr___ACallFormExpr__variable_create(val* self, val* p0) {
val* var /* : AVarFormExpr */;
val* var_variable /* var variable: Variable */;
val* var2 /* : AVarExpr */;
val* var3 /* : AQid */;
val* var5 /* : AQid */;
val* var6 /* : TId */;
val* var8 /* : TId */;
var_variable = p0;
{
{ /* Inline scope$Variable$warn_unread= (var_variable,0) on <var_variable:Variable> */
var_variable->attrs[COLOR_nitc__scope__Variable___warn_unread].s = 0; /* _warn_unread on <var_variable:Variable> */
RET_LABEL1:(void)0;
}
}
var2 = NEW_nitc__AVarExpr(&type_nitc__AVarExpr);
{
{ /* Inline parser_nodes$ACallFormExpr$n_qid (self) on <self:ACallExpr> */
var5 = self->attrs[COLOR_nitc__parser_nodes__ACallFormExpr___n_qid].val; /* _n_qid on <self:ACallExpr> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_qid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2377);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline parser_nodes$AQid$n_id (var3) on <var3:AQid> */
var8 = var3->attrs[COLOR_nitc__parser_nodes__AQid___n_id].val; /* _n_id on <var3:AQid> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1721);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
nitc__parser_prod___AVarExpr___init_avarexpr(var2, var6); /* Direct call parser_prod$AVarExpr$init_avarexpr on <var2:AVarExpr>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method scope$ACallAssignExpr$variable_create for (self: ACallAssignExpr, Variable): AVarFormExpr */
val* nitc__scope___ACallAssignExpr___ACallFormExpr__variable_create(val* self, val* p0) {
val* var /* : AVarFormExpr */;
val* var_variable /* var variable: Variable */;
val* var1 /* : AVarAssignExpr */;
val* var2 /* : AQid */;
val* var4 /* : AQid */;
val* var5 /* : TId */;
val* var7 /* : TId */;
val* var8 /* : TAssign */;
val* var10 /* : TAssign */;
val* var11 /* : AExpr */;
val* var13 /* : AExpr */;
var_variable = p0;
var1 = NEW_nitc__AVarAssignExpr(&type_nitc__AVarAssignExpr);
{
{ /* Inline parser_nodes$ACallFormExpr$n_qid (self) on <self:ACallAssignExpr> */
var4 = self->attrs[COLOR_nitc__parser_nodes__ACallFormExpr___n_qid].val; /* _n_qid on <self:ACallAssignExpr> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_qid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2377);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline parser_nodes$AQid$n_id (var2) on <var2:AQid> */
var7 = var2->attrs[COLOR_nitc__parser_nodes__AQid___n_id].val; /* _n_id on <var2:AQid> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1721);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline parser_nodes$AAssignFormExpr$n_assign (self) on <self:ACallAssignExpr> */
var10 = self->attrs[COLOR_nitc__parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:ACallAssignExpr> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2070);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline parser_nodes$AAssignFormExpr$n_value (self) on <self:ACallAssignExpr> */
var13 = self->attrs[COLOR_nitc__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:ACallAssignExpr> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2073);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
nitc__parser_prod___AVarAssignExpr___init_avarassignexpr(var1, var5, var8, var11); /* Direct call parser_prod$AVarAssignExpr$init_avarassignexpr on <var1:AVarAssignExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method scope$ACallReassignExpr$variable_create for (self: ACallReassignExpr, Variable): AVarFormExpr */
val* nitc__scope___ACallReassignExpr___ACallFormExpr__variable_create(val* self, val* p0) {
val* var /* : AVarFormExpr */;
val* var_variable /* var variable: Variable */;
val* var2 /* : AVarReassignExpr */;
val* var3 /* : AQid */;
val* var5 /* : AQid */;
val* var6 /* : TId */;
val* var8 /* : TId */;
val* var9 /* : AAssignOp */;
val* var11 /* : AAssignOp */;
val* var12 /* : AExpr */;
val* var14 /* : AExpr */;
var_variable = p0;
{
{ /* Inline scope$Variable$warn_unread= (var_variable,0) on <var_variable:Variable> */
var_variable->attrs[COLOR_nitc__scope__Variable___warn_unread].s = 0; /* _warn_unread on <var_variable:Variable> */
RET_LABEL1:(void)0;
}
}
var2 = NEW_nitc__AVarReassignExpr(&type_nitc__AVarReassignExpr);
{
{ /* Inline parser_nodes$ACallFormExpr$n_qid (self) on <self:ACallReassignExpr> */
var5 = self->attrs[COLOR_nitc__parser_nodes__ACallFormExpr___n_qid].val; /* _n_qid on <self:ACallReassignExpr> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_qid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2377);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline parser_nodes$AQid$n_id (var3) on <var3:AQid> */
var8 = var3->attrs[COLOR_nitc__parser_nodes__AQid___n_id].val; /* _n_id on <var3:AQid> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1721);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline parser_nodes$AReassignFormExpr$n_assign_op (self) on <self:ACallReassignExpr> */
var11 = self->attrs[COLOR_nitc__parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:ACallReassignExpr> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2081);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline parser_nodes$AReassignFormExpr$n_value (self) on <self:ACallReassignExpr> */
var14 = self->attrs[COLOR_nitc__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:ACallReassignExpr> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2084);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
nitc__parser_prod___AVarReassignExpr___init_avarreassignexpr(var2, var6, var9, var12); /* Direct call parser_prod$AVarReassignExpr$init_avarreassignexpr on <var2:AVarReassignExpr>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
