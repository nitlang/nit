#include "scope.sep.0.h"
/* method scope#ToolContext#scope_phase for (self: ToolContext): Phase */
val* scope__ToolContext__scope_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_scope__ToolContext___scope_phase].val; /* _scope_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scope_phase");
PRINT_ERROR(" (%s:%d)\n", "semantize/scope.nit", 23);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ToolContext#scope_phase for (self: Object): Phase */
val* VIRTUAL_scope__ToolContext__scope_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
val* var3 /* : Phase */;
{ /* Inline scope#ToolContext#scope_phase (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_scope__ToolContext___scope_phase].val; /* _scope_phase on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scope_phase");
PRINT_ERROR(" (%s:%d)\n", "semantize/scope.nit", 23);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ScopePhase#process_npropdef for (self: ScopePhase, APropdef) */
void scope__ScopePhase__process_npropdef(val* self, val* p0) {
val* var_npropdef /* var npropdef: APropdef */;
val* var /* : ToolContext */;
val* var2 /* : ToolContext */;
var_npropdef = p0;
{
{ /* Inline phase#Phase#toolcontext (self) on <self:ScopePhase> */
var2 = self->attrs[COLOR_phase__Phase___toolcontext].val; /* _toolcontext on <self:ScopePhase> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "phase.nit", 162);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
scope__APropdef__do_scope(var_npropdef, var); /* Direct call scope#APropdef#do_scope on <var_npropdef:APropdef>*/
}
RET_LABEL:;
}
/* method scope#ScopePhase#process_npropdef for (self: Object, APropdef) */
void VIRTUAL_scope__ScopePhase__process_npropdef(val* self, val* p0) {
scope__ScopePhase__process_npropdef(self, p0); /* Direct call scope#ScopePhase#process_npropdef on <self:Object(ScopePhase)>*/
RET_LABEL:;
}
/* method scope#Variable#name for (self: Variable): String */
val* scope__Variable__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_scope__Variable___name].val; /* _name on <self:Variable> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "semantize/scope.nit", 34);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#Variable#name for (self: Object): String */
val* VIRTUAL_scope__Variable__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{ /* Inline scope#Variable#name (self) on <self:Object(Variable)> */
var3 = self->attrs[COLOR_scope__Variable___name].val; /* _name on <self:Object(Variable)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "semantize/scope.nit", 34);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#Variable#name= for (self: Variable, String) */
void scope__Variable__name_61d(val* self, val* p0) {
self->attrs[COLOR_scope__Variable___name].val = p0; /* _name on <self:Variable> */
RET_LABEL:;
}
/* method scope#Variable#name= for (self: Object, String) */
void VIRTUAL_scope__Variable__name_61d(val* self, val* p0) {
{ /* Inline scope#Variable#name= (self,p0) on <self:Object(Variable)> */
self->attrs[COLOR_scope__Variable___name].val = p0; /* _name on <self:Object(Variable)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method scope#Variable#to_s for (self: Variable): String */
val* scope__Variable__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{
{ /* Inline scope#Variable#name (self) on <self:Variable> */
var3 = self->attrs[COLOR_scope__Variable___name].val; /* _name on <self:Variable> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "semantize/scope.nit", 34);
show_backtrace(1);
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
/* method scope#Variable#to_s for (self: Object): String */
val* VIRTUAL_scope__Variable__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = scope__Variable__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method scope#Variable#location for (self: Variable): nullable Location */
val* scope__Variable__location(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable Location */;
var1 = self->attrs[COLOR_scope__Variable___location].val; /* _location on <self:Variable> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#Variable#location for (self: Object): nullable Location */
val* VIRTUAL_scope__Variable__location(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable Location */;
val* var3 /* : nullable Location */;
{ /* Inline scope#Variable#location (self) on <self:Object(Variable)> */
var3 = self->attrs[COLOR_scope__Variable___location].val; /* _location on <self:Object(Variable)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#Variable#location= for (self: Variable, nullable Location) */
void scope__Variable__location_61d(val* self, val* p0) {
self->attrs[COLOR_scope__Variable___location].val = p0; /* _location on <self:Variable> */
RET_LABEL:;
}
/* method scope#Variable#location= for (self: Object, nullable Location) */
void VIRTUAL_scope__Variable__location_61d(val* self, val* p0) {
{ /* Inline scope#Variable#location= (self,p0) on <self:Object(Variable)> */
self->attrs[COLOR_scope__Variable___location].val = p0; /* _location on <self:Object(Variable)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method scope#Variable#warn_unread for (self: Variable): Bool */
short int scope__Variable__warn_unread(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_scope__Variable___warn_unread].s; /* _warn_unread on <self:Variable> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#Variable#warn_unread for (self: Object): Bool */
short int VIRTUAL_scope__Variable__warn_unread(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline scope#Variable#warn_unread (self) on <self:Object(Variable)> */
var3 = self->attrs[COLOR_scope__Variable___warn_unread].s; /* _warn_unread on <self:Object(Variable)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#Variable#warn_unread= for (self: Variable, Bool) */
void scope__Variable__warn_unread_61d(val* self, short int p0) {
self->attrs[COLOR_scope__Variable___warn_unread].s = p0; /* _warn_unread on <self:Variable> */
RET_LABEL:;
}
/* method scope#Variable#warn_unread= for (self: Object, Bool) */
void VIRTUAL_scope__Variable__warn_unread_61d(val* self, short int p0) {
{ /* Inline scope#Variable#warn_unread= (self,p0) on <self:Object(Variable)> */
self->attrs[COLOR_scope__Variable___warn_unread].s = p0; /* _warn_unread on <self:Object(Variable)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method scope#Variable#init for (self: Variable) */
void scope__Variable__init(val* self) {
{
((void (*)(val*))(self->class->vft[COLOR_scope__Variable__init]))(self) /* init on <self:Variable>*/;
}
RET_LABEL:;
}
/* method scope#Variable#init for (self: Object) */
void VIRTUAL_scope__Variable__init(val* self) {
{ /* Inline scope#Variable#init (self) on <self:Object(Variable)> */
{
((void (*)(val*))(self->class->vft[COLOR_scope__Variable__init]))(self) /* init on <self:Object(Variable)>*/;
}
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method scope#EscapeMark#name for (self: EscapeMark): nullable String */
val* scope__EscapeMark__name(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_scope__EscapeMark___name].val; /* _name on <self:EscapeMark> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#EscapeMark#name for (self: Object): nullable String */
val* VIRTUAL_scope__EscapeMark__name(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
val* var3 /* : nullable String */;
{ /* Inline scope#EscapeMark#name (self) on <self:Object(EscapeMark)> */
var3 = self->attrs[COLOR_scope__EscapeMark___name].val; /* _name on <self:Object(EscapeMark)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#EscapeMark#name= for (self: EscapeMark, nullable String) */
void scope__EscapeMark__name_61d(val* self, val* p0) {
self->attrs[COLOR_scope__EscapeMark___name].val = p0; /* _name on <self:EscapeMark> */
RET_LABEL:;
}
/* method scope#EscapeMark#name= for (self: Object, nullable String) */
void VIRTUAL_scope__EscapeMark__name_61d(val* self, val* p0) {
{ /* Inline scope#EscapeMark#name= (self,p0) on <self:Object(EscapeMark)> */
self->attrs[COLOR_scope__EscapeMark___name].val = p0; /* _name on <self:Object(EscapeMark)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method scope#EscapeMark#continue_mark for (self: EscapeMark): nullable EscapeMark */
val* scope__EscapeMark__continue_mark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_scope__EscapeMark___continue_mark].val; /* _continue_mark on <self:EscapeMark> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#EscapeMark#continue_mark for (self: Object): nullable EscapeMark */
val* VIRTUAL_scope__EscapeMark__continue_mark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
val* var3 /* : nullable EscapeMark */;
{ /* Inline scope#EscapeMark#continue_mark (self) on <self:Object(EscapeMark)> */
var3 = self->attrs[COLOR_scope__EscapeMark___continue_mark].val; /* _continue_mark on <self:Object(EscapeMark)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#EscapeMark#continue_mark= for (self: EscapeMark, nullable EscapeMark) */
void scope__EscapeMark__continue_mark_61d(val* self, val* p0) {
self->attrs[COLOR_scope__EscapeMark___continue_mark].val = p0; /* _continue_mark on <self:EscapeMark> */
RET_LABEL:;
}
/* method scope#EscapeMark#continue_mark= for (self: Object, nullable EscapeMark) */
void VIRTUAL_scope__EscapeMark__continue_mark_61d(val* self, val* p0) {
{ /* Inline scope#EscapeMark#continue_mark= (self,p0) on <self:Object(EscapeMark)> */
self->attrs[COLOR_scope__EscapeMark___continue_mark].val = p0; /* _continue_mark on <self:Object(EscapeMark)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method scope#EscapeMark#escapes for (self: EscapeMark): Array[AEscapeExpr] */
val* scope__EscapeMark__escapes(val* self) {
val* var /* : Array[AEscapeExpr] */;
val* var1 /* : Array[AEscapeExpr] */;
var1 = self->attrs[COLOR_scope__EscapeMark___escapes].val; /* _escapes on <self:EscapeMark> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapes");
PRINT_ERROR(" (%s:%d)\n", "semantize/scope.nit", 57);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#EscapeMark#escapes for (self: Object): Array[AEscapeExpr] */
val* VIRTUAL_scope__EscapeMark__escapes(val* self) {
val* var /* : Array[AEscapeExpr] */;
val* var1 /* : Array[AEscapeExpr] */;
val* var3 /* : Array[AEscapeExpr] */;
{ /* Inline scope#EscapeMark#escapes (self) on <self:Object(EscapeMark)> */
var3 = self->attrs[COLOR_scope__EscapeMark___escapes].val; /* _escapes on <self:Object(EscapeMark)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapes");
PRINT_ERROR(" (%s:%d)\n", "semantize/scope.nit", 57);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#EscapeMark#init for (self: EscapeMark) */
void scope__EscapeMark__init(val* self) {
{
((void (*)(val*))(self->class->vft[COLOR_scope__EscapeMark__init]))(self) /* init on <self:EscapeMark>*/;
}
RET_LABEL:;
}
/* method scope#EscapeMark#init for (self: Object) */
void VIRTUAL_scope__EscapeMark__init(val* self) {
{ /* Inline scope#EscapeMark#init (self) on <self:Object(EscapeMark)> */
{
((void (*)(val*))(self->class->vft[COLOR_scope__EscapeMark__init]))(self) /* init on <self:Object(EscapeMark)>*/;
}
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method scope#ScopeVisitor#toolcontext for (self: ScopeVisitor): ToolContext */
val* scope__ScopeVisitor__toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_scope__ScopeVisitor___toolcontext].val; /* _toolcontext on <self:ScopeVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "semantize/scope.nit", 69);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ScopeVisitor#toolcontext for (self: Object): ToolContext */
val* VIRTUAL_scope__ScopeVisitor__toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
val* var3 /* : ToolContext */;
{ /* Inline scope#ScopeVisitor#toolcontext (self) on <self:Object(ScopeVisitor)> */
var3 = self->attrs[COLOR_scope__ScopeVisitor___toolcontext].val; /* _toolcontext on <self:Object(ScopeVisitor)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "semantize/scope.nit", 69);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ScopeVisitor#toolcontext= for (self: ScopeVisitor, ToolContext) */
void scope__ScopeVisitor__toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_scope__ScopeVisitor___toolcontext].val = p0; /* _toolcontext on <self:ScopeVisitor> */
RET_LABEL:;
}
/* method scope#ScopeVisitor#toolcontext= for (self: Object, ToolContext) */
void VIRTUAL_scope__ScopeVisitor__toolcontext_61d(val* self, val* p0) {
{ /* Inline scope#ScopeVisitor#toolcontext= (self,p0) on <self:Object(ScopeVisitor)> */
self->attrs[COLOR_scope__ScopeVisitor___toolcontext].val = p0; /* _toolcontext on <self:Object(ScopeVisitor)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method scope#ScopeVisitor#selfvariable for (self: ScopeVisitor): Variable */
val* scope__ScopeVisitor__selfvariable(val* self) {
val* var /* : Variable */;
val* var1 /* : Variable */;
var1 = self->attrs[COLOR_scope__ScopeVisitor___selfvariable].val; /* _selfvariable on <self:ScopeVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _selfvariable");
PRINT_ERROR(" (%s:%d)\n", "semantize/scope.nit", 72);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ScopeVisitor#selfvariable for (self: Object): Variable */
val* VIRTUAL_scope__ScopeVisitor__selfvariable(val* self) {
val* var /* : Variable */;
val* var1 /* : Variable */;
val* var3 /* : Variable */;
{ /* Inline scope#ScopeVisitor#selfvariable (self) on <self:Object(ScopeVisitor)> */
var3 = self->attrs[COLOR_scope__ScopeVisitor___selfvariable].val; /* _selfvariable on <self:Object(ScopeVisitor)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _selfvariable");
PRINT_ERROR(" (%s:%d)\n", "semantize/scope.nit", 72);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ScopeVisitor#init for (self: ScopeVisitor, ToolContext) */
void scope__ScopeVisitor__init(val* self, val* p0) {
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var /* : List[Scope] */;
val* var3 /* : List[Scope] */;
val* var4 /* : Scope */;
{
((void (*)(val*))(self->class->vft[COLOR_kernel__Object__init]))(self) /* init on <self:ScopeVisitor>*/;
}
var_toolcontext = p0;
{
{ /* Inline scope#ScopeVisitor#toolcontext= (self,var_toolcontext) on <self:ScopeVisitor> */
self->attrs[COLOR_scope__ScopeVisitor___toolcontext].val = var_toolcontext; /* _toolcontext on <self:ScopeVisitor> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline scope#ScopeVisitor#scopes (self) on <self:ScopeVisitor> */
var3 = self->attrs[COLOR_scope__ScopeVisitor___scopes].val; /* _scopes on <self:ScopeVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", "semantize/scope.nit", 80);
show_backtrace(1);
}
var = var3;
RET_LABEL2:(void)0;
}
}
var4 = NEW_scope__Scope(&type_scope__Scope);
{
((void (*)(val*))(var4->class->vft[COLOR_kernel__Object__init]))(var4) /* init on <var4:Scope>*/;
}
{
abstract_collection__Sequence__add(var, var4); /* Direct call abstract_collection#Sequence#add on <var:List[Scope]>*/
}
RET_LABEL:;
}
/* method scope#ScopeVisitor#init for (self: Object, ToolContext) */
void VIRTUAL_scope__ScopeVisitor__init(val* self, val* p0) {
scope__ScopeVisitor__init(self, p0); /* Direct call scope#ScopeVisitor#init on <self:Object(ScopeVisitor)>*/
RET_LABEL:;
}
/* method scope#ScopeVisitor#scopes for (self: ScopeVisitor): List[Scope] */
val* scope__ScopeVisitor__scopes(val* self) {
val* var /* : List[Scope] */;
val* var1 /* : List[Scope] */;
var1 = self->attrs[COLOR_scope__ScopeVisitor___scopes].val; /* _scopes on <self:ScopeVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", "semantize/scope.nit", 80);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ScopeVisitor#scopes for (self: Object): List[Scope] */
val* VIRTUAL_scope__ScopeVisitor__scopes(val* self) {
val* var /* : List[Scope] */;
val* var1 /* : List[Scope] */;
val* var3 /* : List[Scope] */;
{ /* Inline scope#ScopeVisitor#scopes (self) on <self:Object(ScopeVisitor)> */
var3 = self->attrs[COLOR_scope__ScopeVisitor___scopes].val; /* _scopes on <self:Object(ScopeVisitor)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", "semantize/scope.nit", 80);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ScopeVisitor#shift_scope for (self: ScopeVisitor) */
void scope__ScopeVisitor__shift_scope(val* self) {
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
val* var14 /* : RemovableCollection[nullable Object] */;
val* var_ /* var : RemovableCollection[Variable] */;
val* var15 /* : Iterator[nullable Object] */;
val* var_16 /* var : Iterator[Variable] */;
short int var17 /* : Bool */;
val* var18 /* : nullable Object */;
val* var_v /* var v: Variable */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : ToolContext */;
val* var24 /* : ToolContext */;
val* var25 /* : nullable Location */;
val* var27 /* : nullable Location */;
static val* varonce;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : FlatString */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
long var35 /* : Int */;
val* var36 /* : FlatString */;
val* var37 /* : String */;
val* var39 /* : String */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : FlatString */;
val* var45 /* : Array[Object] */;
long var46 /* : Int */;
val* var47 /* : NativeArray[Object] */;
val* var48 /* : String */;
{
{ /* Inline scope#ScopeVisitor#scopes (self) on <self:ScopeVisitor> */
var2 = self->attrs[COLOR_scope__ScopeVisitor___scopes].val; /* _scopes on <self:ScopeVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", "semantize/scope.nit", 80);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = list__List__is_empty(var);
}
var4 = !var3;
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "semantize/scope.nit", 86);
show_backtrace(1);
}
{
{ /* Inline scope#ScopeVisitor#scopes (self) on <self:ScopeVisitor> */
var7 = self->attrs[COLOR_scope__ScopeVisitor___scopes].val; /* _scopes on <self:ScopeVisitor> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", "semantize/scope.nit", 80);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = list__List__shift(var5);
}
var_scope = var8;
{
{ /* Inline scope#Scope#variables (var_scope) on <var_scope:Scope> */
var11 = var_scope->attrs[COLOR_scope__Scope___variables].val; /* _variables on <var_scope:Scope> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _variables");
PRINT_ERROR(" (%s:%d)\n", "semantize/scope.nit", 225);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline hash_collection#HashMap#values (var9) on <var9:HashMap[String, Variable]> */
var14 = var9->attrs[COLOR_hash_collection__HashMap___values].val; /* _values on <var9:HashMap[String, Variable]> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _values");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/hash_collection.nit", 250);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_ = var12;
{
var15 = ((val* (*)(val*))(var_->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:RemovableCollection[Variable]>*/;
}
var_16 = var15;
for(;;) {
{
var17 = ((short int (*)(val*))(var_16->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_16) /* is_ok on <var_16:Iterator[Variable]>*/;
}
if (var17){
{
var18 = ((val* (*)(val*))(var_16->class->vft[COLOR_abstract_collection__Iterator__item]))(var_16) /* item on <var_16:Iterator[Variable]>*/;
}
var_v = var18;
{
{ /* Inline scope#Variable#warn_unread (var_v) on <var_v:Variable> */
var21 = var_v->attrs[COLOR_scope__Variable___warn_unread].s; /* _warn_unread on <var_v:Variable> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
if (var19){
{
{ /* Inline scope#ScopeVisitor#toolcontext (self) on <self:ScopeVisitor> */
var24 = self->attrs[COLOR_scope__ScopeVisitor___toolcontext].val; /* _toolcontext on <self:ScopeVisitor> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "semantize/scope.nit", 69);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline scope#Variable#location (var_v) on <var_v:Variable> */
var27 = var_v->attrs[COLOR_scope__Variable___location].val; /* _location on <var_v:Variable> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
if (varonce) {
var28 = varonce;
} else {
var29 = "unread-variable";
var30 = 15;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce = var28;
}
if (varonce32) {
var33 = varonce32;
} else {
var34 = "Warning: local variable ";
var35 = 24;
var36 = string__NativeString__to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
{
{ /* Inline scope#Variable#name (var_v) on <var_v:Variable> */
var39 = var_v->attrs[COLOR_scope__Variable___name].val; /* _name on <var_v:Variable> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "semantize/scope.nit", 34);
show_backtrace(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
if (varonce40) {
var41 = varonce40;
} else {
var42 = " is never read.";
var43 = 15;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
var45 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var45 = array_instance Array[Object] */
var46 = 3;
var47 = NEW_array__NativeArray(var46, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var47)->values[0] = (val*) var33;
((struct instance_array__NativeArray*)var47)->values[1] = (val*) var37;
((struct instance_array__NativeArray*)var47)->values[2] = (val*) var41;
{
((void (*)(val*, val*, long))(var45->class->vft[COLOR_array__Array__with_native]))(var45, var47, var46) /* with_native on <var45:Array[Object]>*/;
}
}
{
var48 = ((val* (*)(val*))(var45->class->vft[COLOR_string__Object__to_s]))(var45) /* to_s on <var45:Array[Object]>*/;
}
{
toolcontext__ToolContext__advice(var22, var25, var28, var48); /* Direct call toolcontext#ToolContext#advice on <var22:ToolContext>*/
}
} else {
}
{
((void (*)(val*))(var_16->class->vft[COLOR_abstract_collection__Iterator__next]))(var_16) /* next on <var_16:Iterator[Variable]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_16) on <var_16:Iterator[Variable]> */
RET_LABEL49:(void)0;
}
}
RET_LABEL:;
}
/* method scope#ScopeVisitor#shift_scope for (self: Object) */
void VIRTUAL_scope__ScopeVisitor__shift_scope(val* self) {
scope__ScopeVisitor__shift_scope(self); /* Direct call scope#ScopeVisitor#shift_scope on <self:Object(ScopeVisitor)>*/
RET_LABEL:;
}
/* method scope#ScopeVisitor#register_variable for (self: ScopeVisitor, ANode, Variable): Bool */
short int scope__ScopeVisitor__register_variable(val* self, val* p0, val* p1) {
short int var /* : Bool */;
val* var_node /* var node: ANode */;
val* var_variable /* var variable: Variable */;
val* var1 /* : String */;
val* var3 /* : String */;
val* var_name /* var name: String */;
val* var4 /* : nullable Variable */;
val* var_found /* var found: nullable Variable */;
val* var5 /* : null */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
static val* varonce;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : FlatString */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : FlatString */;
val* var21 /* : Array[Object] */;
long var22 /* : Int */;
val* var23 /* : NativeArray[Object] */;
val* var24 /* : String */;
short int var25 /* : Bool */;
val* var26 /* : List[Scope] */;
val* var28 /* : List[Scope] */;
val* var29 /* : nullable Object */;
val* var30 /* : HashMap[String, Variable] */;
val* var32 /* : HashMap[String, Variable] */;
val* var33 /* : Location */;
val* var35 /* : Location */;
short int var37 /* : Bool */;
var_node = p0;
var_variable = p1;
{
{ /* Inline scope#Variable#name (var_variable) on <var_variable:Variable> */
var3 = var_variable->attrs[COLOR_scope__Variable___name].val; /* _name on <var_variable:Variable> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "semantize/scope.nit", 34);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_name = var1;
{
var4 = scope__ScopeVisitor__search_variable(self, var_name);
}
var_found = var4;
var5 = NULL;
if (var_found == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_found,var5) on <var_found:nullable Variable> */
var_other = var5;
{
var10 = ((short int (*)(val*, val*))(var_found->class->vft[COLOR_kernel__Object___61d_61d]))(var_found, var_other) /* == on <var_found:nullable Variable(Variable)>*/;
var9 = var10;
}
var11 = !var9;
var7 = var11;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (var6){
if (varonce) {
var12 = varonce;
} else {
var13 = "Error: A variable named `";
var14 = 25;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce = var12;
}
if (varonce16) {
var17 = varonce16;
} else {
var18 = "\' already exists";
var19 = 16;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
var21 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var21 = array_instance Array[Object] */
var22 = 3;
var23 = NEW_array__NativeArray(var22, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var23)->values[0] = (val*) var12;
((struct instance_array__NativeArray*)var23)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var23)->values[2] = (val*) var17;
{
((void (*)(val*, val*, long))(var21->class->vft[COLOR_array__Array__with_native]))(var21, var23, var22) /* with_native on <var21:Array[Object]>*/;
}
}
{
var24 = ((val* (*)(val*))(var21->class->vft[COLOR_string__Object__to_s]))(var21) /* to_s on <var21:Array[Object]>*/;
}
{
scope__ScopeVisitor__error(self, var_node, var24); /* Direct call scope#ScopeVisitor#error on <self:ScopeVisitor>*/
}
var25 = 0;
var = var25;
goto RET_LABEL;
} else {
}
{
{ /* Inline scope#ScopeVisitor#scopes (self) on <self:ScopeVisitor> */
var28 = self->attrs[COLOR_scope__ScopeVisitor___scopes].val; /* _scopes on <self:ScopeVisitor> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", "semantize/scope.nit", 80);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
var29 = list__List__first(var26);
}
{
{ /* Inline scope#Scope#variables (var29) on <var29:nullable Object(Scope)> */
var32 = var29->attrs[COLOR_scope__Scope___variables].val; /* _variables on <var29:nullable Object(Scope)> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _variables");
PRINT_ERROR(" (%s:%d)\n", "semantize/scope.nit", 225);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
hash_collection__HashMap___91d_93d_61d(var30, var_name, var_variable); /* Direct call hash_collection#HashMap#[]= on <var30:HashMap[String, Variable]>*/
}
{
{ /* Inline parser_nodes#ANode#location (var_node) on <var_node:ANode> */
var35 = var_node->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <var_node:ANode> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 23);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline scope#Variable#location= (var_variable,var33) on <var_variable:Variable> */
var_variable->attrs[COLOR_scope__Variable___location].val = var33; /* _location on <var_variable:Variable> */
RET_LABEL36:(void)0;
}
}
var37 = 1;
var = var37;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method scope#ScopeVisitor#register_variable for (self: Object, ANode, Variable): Bool */
short int VIRTUAL_scope__ScopeVisitor__register_variable(val* self, val* p0, val* p1) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = scope__ScopeVisitor__register_variable(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ScopeVisitor#search_variable for (self: ScopeVisitor, String): nullable Variable */
val* scope__ScopeVisitor__search_variable(val* self, val* p0) {
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
val* var9 /* : null */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var17 /* : null */;
var_name = p0;
{
{ /* Inline scope#ScopeVisitor#scopes (self) on <self:ScopeVisitor> */
var3 = self->attrs[COLOR_scope__ScopeVisitor___scopes].val; /* _scopes on <self:ScopeVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", "semantize/scope.nit", 80);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_ = var1;
{
var4 = list__List__iterator(var_);
}
var_5 = var4;
for(;;) {
{
var6 = list__ListIterator__is_ok(var_5);
}
if (var6){
{
var7 = list__ListIterator__item(var_5);
}
var_scope = var7;
{
var8 = scope__Scope__get_variable(var_scope, var_name);
}
var_res = var8;
var9 = NULL;
if (var_res == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var9) on <var_res:nullable Variable> */
var_other = var9;
{
var14 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable Variable(Variable)>*/;
var13 = var14;
}
var15 = !var13;
var11 = var15;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
if (var10){
var = var_res;
goto RET_LABEL;
} else {
}
{
list__ListIterator__next(var_5); /* Direct call list#ListIterator#next on <var_5:ListIterator[Scope]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_5) on <var_5:ListIterator[Scope]> */
RET_LABEL16:(void)0;
}
}
var17 = NULL;
var = var17;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method scope#ScopeVisitor#search_variable for (self: Object, String): nullable Variable */
val* VIRTUAL_scope__ScopeVisitor__search_variable(val* self, val* p0) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
var1 = scope__ScopeVisitor__search_variable(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ScopeVisitor#visit for (self: ScopeVisitor, ANode) */
void scope__ScopeVisitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
var_n = p0;
{
((void (*)(val*, val*))(var_n->class->vft[COLOR_scope__ANode__accept_scope_visitor]))(var_n, self) /* accept_scope_visitor on <var_n:ANode>*/;
}
RET_LABEL:;
}
/* method scope#ScopeVisitor#visit for (self: Object, ANode) */
void VIRTUAL_scope__ScopeVisitor__visit(val* self, val* p0) {
scope__ScopeVisitor__visit(self, p0); /* Direct call scope#ScopeVisitor#visit on <self:Object(ScopeVisitor)>*/
RET_LABEL:;
}
/* method scope#ScopeVisitor#enter_visit_block for (self: ScopeVisitor, nullable AExpr, nullable EscapeMark) */
void scope__ScopeVisitor__enter_visit_block(val* self, val* p0, val* p1) {
val* var_node /* var node: nullable AExpr */;
val* var_escapemark /* var escapemark: nullable EscapeMark */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : Scope */;
val* var_scope /* var scope: Scope */;
val* var9 /* : List[Scope] */;
val* var11 /* : List[Scope] */;
var_node = p0;
var_escapemark = p1;
var = NULL;
if (var_node == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_node,var) on <var_node:nullable AExpr> */
var_other = var;
{
{ /* Inline kernel#Object#is_same_instance (var_node,var_other) on <var_node:nullable AExpr(AExpr)> */
var6 = var_node == var_other;
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
var7 = NEW_scope__Scope(&type_scope__Scope);
{
((void (*)(val*))(var7->class->vft[COLOR_kernel__Object__init]))(var7) /* init on <var7:Scope>*/;
}
var_scope = var7;
{
{ /* Inline scope#Scope#escapemark= (var_scope,var_escapemark) on <var_scope:Scope> */
var_scope->attrs[COLOR_scope__Scope___escapemark].val = var_escapemark; /* _escapemark on <var_scope:Scope> */
RET_LABEL8:(void)0;
}
}
{
{ /* Inline scope#ScopeVisitor#scopes (self) on <self:ScopeVisitor> */
var11 = self->attrs[COLOR_scope__ScopeVisitor___scopes].val; /* _scopes on <self:ScopeVisitor> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", "semantize/scope.nit", 80);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
list__List__unshift(var9, var_scope); /* Direct call list#List#unshift on <var9:List[Scope]>*/
}
{
parser_nodes__Visitor__enter_visit(self, var_node); /* Direct call parser_nodes#Visitor#enter_visit on <self:ScopeVisitor>*/
}
{
scope__ScopeVisitor__shift_scope(self); /* Direct call scope#ScopeVisitor#shift_scope on <self:ScopeVisitor>*/
}
RET_LABEL:;
}
/* method scope#ScopeVisitor#enter_visit_block for (self: Object, nullable AExpr, nullable EscapeMark) */
void VIRTUAL_scope__ScopeVisitor__enter_visit_block(val* self, val* p0, val* p1) {
scope__ScopeVisitor__enter_visit_block(self, p0, p1); /* Direct call scope#ScopeVisitor#enter_visit_block on <self:Object(ScopeVisitor)>*/
RET_LABEL:;
}
/* method scope#ScopeVisitor#search_label for (self: ScopeVisitor, String): nullable EscapeMark */
val* scope__ScopeVisitor__search_label(val* self, val* p0) {
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
val* var12 /* : null */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var_19 /* var : Bool */;
val* var20 /* : nullable String */;
val* var22 /* : nullable String */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var26 /* : null */;
var_name = p0;
{
{ /* Inline scope#ScopeVisitor#scopes (self) on <self:ScopeVisitor> */
var3 = self->attrs[COLOR_scope__ScopeVisitor___scopes].val; /* _scopes on <self:ScopeVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", "semantize/scope.nit", 80);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_ = var1;
{
var4 = list__List__iterator(var_);
}
var_5 = var4;
for(;;) {
{
var6 = list__ListIterator__is_ok(var_5);
}
if (var6){
{
var7 = list__ListIterator__item(var_5);
}
var_scope = var7;
{
{ /* Inline scope#Scope#escapemark (var_scope) on <var_scope:Scope> */
var10 = var_scope->attrs[COLOR_scope__Scope___escapemark].val; /* _escapemark on <var_scope:Scope> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_res = var8;
var12 = NULL;
if (var_res == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var12) on <var_res:nullable EscapeMark> */
var_other = var12;
{
var17 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable EscapeMark(EscapeMark)>*/;
var16 = var17;
}
var18 = !var16;
var14 = var18;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
var_19 = var13;
if (var13){
{
{ /* Inline scope#EscapeMark#name (var_res) on <var_res:nullable EscapeMark(EscapeMark)> */
var22 = var_res->attrs[COLOR_scope__EscapeMark___name].val; /* _name on <var_res:nullable EscapeMark(EscapeMark)> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
if (var20 == NULL) {
var23 = 0; /* <var_name:String> cannot be null */
} else {
var24 = string__FlatString___61d_61d(var20, var_name);
var23 = var24;
}
var11 = var23;
} else {
var11 = var_19;
}
if (var11){
var = var_res;
goto RET_LABEL;
} else {
}
{
list__ListIterator__next(var_5); /* Direct call list#ListIterator#next on <var_5:ListIterator[Scope]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_5) on <var_5:ListIterator[Scope]> */
RET_LABEL25:(void)0;
}
}
var26 = NULL;
var = var26;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method scope#ScopeVisitor#search_label for (self: Object, String): nullable EscapeMark */
val* VIRTUAL_scope__ScopeVisitor__search_label(val* self, val* p0) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = scope__ScopeVisitor__search_label(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ScopeVisitor#make_escape_mark for (self: ScopeVisitor, nullable ALabel, Bool): EscapeMark */
val* scope__ScopeVisitor__make_escape_mark(val* self, val* p0, short int p1) {
val* var /* : EscapeMark */;
val* var_nlabel /* var nlabel: nullable ALabel */;
short int var_for_loop /* var for_loop: Bool */;
val* var1 /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable TId */;
val* var10 /* : nullable TId */;
val* var_nid /* var nid: nullable TId */;
val* var11 /* : null */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other15 /* var other: nullable Object */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
static val* varonce;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : FlatString */;
val* var23 /* : nullable EscapeMark */;
val* var_res /* var res: nullable EscapeMark */;
val* var24 /* : null */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : FlatString */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
long var39 /* : Int */;
val* var40 /* : FlatString */;
val* var_name /* var name: nullable String */;
val* var41 /* : String */;
val* var42 /* : nullable EscapeMark */;
val* var_found /* var found: nullable EscapeMark */;
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
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
long var58 /* : Int */;
val* var59 /* : FlatString */;
val* var60 /* : Array[Object] */;
long var61 /* : Int */;
val* var62 /* : NativeArray[Object] */;
val* var63 /* : String */;
val* var64 /* : null */;
val* var65 /* : EscapeMark */;
val* var_res66 /* var res: EscapeMark */;
val* var67 /* : EscapeMark */;
var_nlabel = p0;
var_for_loop = p1;
var1 = NULL;
if (var_nlabel == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nlabel,var1) on <var_nlabel:nullable ALabel> */
var_other = var1;
{
var6 = ((short int (*)(val*, val*))(var_nlabel->class->vft[COLOR_kernel__Object___61d_61d]))(var_nlabel, var_other) /* == on <var_nlabel:nullable ALabel(ALabel)>*/;
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
{ /* Inline parser_nodes#ALabel#n_id (var_nlabel) on <var_nlabel:nullable ALabel(ALabel)> */
var10 = var_nlabel->attrs[COLOR_parser_nodes__ALabel___n_id].val; /* _n_id on <var_nlabel:nullable ALabel(ALabel)> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_nid = var8;
var11 = NULL;
if (var_nid == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nid,var11) on <var_nid:nullable TId> */
var_other15 = var11;
{
{ /* Inline kernel#Object#is_same_instance (var_nid,var_other15) on <var_nid:nullable TId(TId)> */
var18 = var_nid == var_other15;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (var12){
if (varonce) {
var19 = varonce;
} else {
var20 = "";
var21 = 0;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce = var19;
}
{
var23 = scope__ScopeVisitor__search_label(self, var19);
}
var_res = var23;
var24 = NULL;
if (var_res == NULL) {
var25 = 0; /* is null */
} else {
var25 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var24) on <var_res:nullable EscapeMark> */
var_other = var24;
{
var29 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable EscapeMark(EscapeMark)>*/;
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
if (varonce31) {
var32 = varonce31;
} else {
var33 = "Syntax error: anonymous label already defined.";
var34 = 46;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
{
scope__ScopeVisitor__error(self, var_nlabel, var32); /* Direct call scope#ScopeVisitor#error on <self:ScopeVisitor>*/
}
} else {
}
if (varonce36) {
var37 = varonce36;
} else {
var38 = "";
var39 = 0;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
var_name = var37;
} else {
{
var41 = lexer_work__Token__text(var_nid);
}
var_name = var41;
{
var42 = scope__ScopeVisitor__search_label(self, var_name);
}
var_found = var42;
var43 = NULL;
if (var_found == NULL) {
var44 = 0; /* is null */
} else {
var44 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_found,var43) on <var_found:nullable EscapeMark> */
var_other = var43;
{
var48 = ((short int (*)(val*, val*))(var_found->class->vft[COLOR_kernel__Object___61d_61d]))(var_found, var_other) /* == on <var_found:nullable EscapeMark(EscapeMark)>*/;
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
var52 = "Syntax error: label ";
var53 = 20;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
if (varonce55) {
var56 = varonce55;
} else {
var57 = " already defined.";
var58 = 17;
var59 = string__NativeString__to_s_with_length(var57, var58);
var56 = var59;
varonce55 = var56;
}
var60 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var60 = array_instance Array[Object] */
var61 = 3;
var62 = NEW_array__NativeArray(var61, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var62)->values[0] = (val*) var51;
((struct instance_array__NativeArray*)var62)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var62)->values[2] = (val*) var56;
{
((void (*)(val*, val*, long))(var60->class->vft[COLOR_array__Array__with_native]))(var60, var62, var61) /* with_native on <var60:Array[Object]>*/;
}
}
{
var63 = ((val* (*)(val*))(var60->class->vft[COLOR_string__Object__to_s]))(var60) /* to_s on <var60:Array[Object]>*/;
}
{
scope__ScopeVisitor__error(self, var_nlabel, var63); /* Direct call scope#ScopeVisitor#error on <self:ScopeVisitor>*/
}
} else {
}
}
} else {
var64 = NULL;
var_name = var64;
}
var65 = NEW_scope__EscapeMark(&type_scope__EscapeMark);
{
((void (*)(val*, val*))(var65->class->vft[COLOR_scope__EscapeMark__name_61d]))(var65, var_name) /* name= on <var65:EscapeMark>*/;
}
{
((void (*)(val*))(var65->class->vft[COLOR_kernel__Object__init]))(var65) /* init on <var65:EscapeMark>*/;
}
var_res66 = var65;
if (var_for_loop){
var67 = NEW_scope__EscapeMark(&type_scope__EscapeMark);
{
((void (*)(val*, val*))(var67->class->vft[COLOR_scope__EscapeMark__name_61d]))(var67, var_name) /* name= on <var67:EscapeMark>*/;
}
{
((void (*)(val*))(var67->class->vft[COLOR_kernel__Object__init]))(var67) /* init on <var67:EscapeMark>*/;
}
{
{ /* Inline scope#EscapeMark#continue_mark= (var_res66,var67) on <var_res66:EscapeMark> */
var_res66->attrs[COLOR_scope__EscapeMark___continue_mark].val = var67; /* _continue_mark on <var_res66:EscapeMark> */
RET_LABEL68:(void)0;
}
}
} else {
}
var = var_res66;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method scope#ScopeVisitor#make_escape_mark for (self: Object, nullable ALabel, Bool): EscapeMark */
val* VIRTUAL_scope__ScopeVisitor__make_escape_mark(val* self, val* p0, short int p1) {
val* var /* : EscapeMark */;
val* var1 /* : EscapeMark */;
var1 = scope__ScopeVisitor__make_escape_mark(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ScopeVisitor#get_escapemark for (self: ScopeVisitor, ANode, nullable ALabel): nullable EscapeMark */
val* scope__ScopeVisitor__get_escapemark(val* self, val* p0, val* p1) {
val* var /* : nullable EscapeMark */;
val* var_node /* var node: ANode */;
val* var_nlabel /* var nlabel: nullable ALabel */;
val* var1 /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable TId */;
val* var10 /* : nullable TId */;
val* var_nid /* var nid: nullable TId */;
val* var11 /* : null */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other15 /* var other: nullable Object */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
static val* varonce;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : FlatString */;
val* var23 /* : nullable EscapeMark */;
val* var_res /* var res: nullable EscapeMark */;
val* var24 /* : null */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : FlatString */;
val* var36 /* : null */;
val* var37 /* : String */;
val* var_name /* var name: String */;
val* var38 /* : nullable EscapeMark */;
val* var_res39 /* var res: nullable EscapeMark */;
val* var40 /* : null */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
long var50 /* : Int */;
val* var51 /* : FlatString */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
long var55 /* : Int */;
val* var56 /* : FlatString */;
val* var57 /* : Array[Object] */;
long var58 /* : Int */;
val* var59 /* : NativeArray[Object] */;
val* var60 /* : String */;
val* var61 /* : null */;
val* var62 /* : List[Scope] */;
val* var64 /* : List[Scope] */;
val* var_ /* var : List[Scope] */;
val* var65 /* : ListIterator[nullable Object] */;
val* var_66 /* var : ListIterator[Scope] */;
short int var67 /* : Bool */;
val* var68 /* : nullable Object */;
val* var_scope /* var scope: Scope */;
val* var69 /* : nullable EscapeMark */;
val* var71 /* : nullable EscapeMark */;
val* var_res72 /* var res: nullable EscapeMark */;
val* var73 /* : null */;
short int var74 /* : Bool */;
short int var75 /* : Bool */;
short int var77 /* : Bool */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
long var84 /* : Int */;
val* var85 /* : FlatString */;
val* var86 /* : null */;
var_node = p0;
var_nlabel = p1;
var1 = NULL;
if (var_nlabel == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nlabel,var1) on <var_nlabel:nullable ALabel> */
var_other = var1;
{
var6 = ((short int (*)(val*, val*))(var_nlabel->class->vft[COLOR_kernel__Object___61d_61d]))(var_nlabel, var_other) /* == on <var_nlabel:nullable ALabel(ALabel)>*/;
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
{ /* Inline parser_nodes#ALabel#n_id (var_nlabel) on <var_nlabel:nullable ALabel(ALabel)> */
var10 = var_nlabel->attrs[COLOR_parser_nodes__ALabel___n_id].val; /* _n_id on <var_nlabel:nullable ALabel(ALabel)> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_nid = var8;
var11 = NULL;
if (var_nid == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nid,var11) on <var_nid:nullable TId> */
var_other15 = var11;
{
{ /* Inline kernel#Object#is_same_instance (var_nid,var_other15) on <var_nid:nullable TId(TId)> */
var18 = var_nid == var_other15;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (var12){
if (varonce) {
var19 = varonce;
} else {
var20 = "";
var21 = 0;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce = var19;
}
{
var23 = scope__ScopeVisitor__search_label(self, var19);
}
var_res = var23;
var24 = NULL;
if (var_res == NULL) {
var25 = 1; /* is null */
} else {
var25 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res,var24) on <var_res:nullable EscapeMark> */
var_other15 = var24;
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other15) on <var_res:nullable EscapeMark(EscapeMark)> */
var30 = var_res == var_other15;
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
var25 = var26;
}
if (var25){
if (varonce31) {
var32 = varonce31;
} else {
var33 = "Syntax error: invalid anonymous label.";
var34 = 38;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
{
scope__ScopeVisitor__error(self, var_nlabel, var32); /* Direct call scope#ScopeVisitor#error on <self:ScopeVisitor>*/
}
var36 = NULL;
var = var36;
goto RET_LABEL;
} else {
}
var = var_res;
goto RET_LABEL;
} else {
}
{
var37 = lexer_work__Token__text(var_nid);
}
var_name = var37;
{
var38 = scope__ScopeVisitor__search_label(self, var_name);
}
var_res39 = var38;
var40 = NULL;
if (var_res39 == NULL) {
var41 = 1; /* is null */
} else {
var41 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res39,var40) on <var_res39:nullable EscapeMark> */
var_other15 = var40;
{
{ /* Inline kernel#Object#is_same_instance (var_res39,var_other15) on <var_res39:nullable EscapeMark(EscapeMark)> */
var46 = var_res39 == var_other15;
var44 = var46;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
var42 = var44;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
var41 = var42;
}
if (var41){
if (varonce47) {
var48 = varonce47;
} else {
var49 = "Syntax error: invalid label ";
var50 = 28;
var51 = string__NativeString__to_s_with_length(var49, var50);
var48 = var51;
varonce47 = var48;
}
if (varonce52) {
var53 = varonce52;
} else {
var54 = ".";
var55 = 1;
var56 = string__NativeString__to_s_with_length(var54, var55);
var53 = var56;
varonce52 = var53;
}
var57 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var57 = array_instance Array[Object] */
var58 = 3;
var59 = NEW_array__NativeArray(var58, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var59)->values[0] = (val*) var48;
((struct instance_array__NativeArray*)var59)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var59)->values[2] = (val*) var53;
{
((void (*)(val*, val*, long))(var57->class->vft[COLOR_array__Array__with_native]))(var57, var59, var58) /* with_native on <var57:Array[Object]>*/;
}
}
{
var60 = ((val* (*)(val*))(var57->class->vft[COLOR_string__Object__to_s]))(var57) /* to_s on <var57:Array[Object]>*/;
}
{
scope__ScopeVisitor__error(self, var_nlabel, var60); /* Direct call scope#ScopeVisitor#error on <self:ScopeVisitor>*/
}
var61 = NULL;
var = var61;
goto RET_LABEL;
} else {
}
var = var_res39;
goto RET_LABEL;
} else {
{
{ /* Inline scope#ScopeVisitor#scopes (self) on <self:ScopeVisitor> */
var64 = self->attrs[COLOR_scope__ScopeVisitor___scopes].val; /* _scopes on <self:ScopeVisitor> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", "semantize/scope.nit", 80);
show_backtrace(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
var_ = var62;
{
var65 = list__List__iterator(var_);
}
var_66 = var65;
for(;;) {
{
var67 = list__ListIterator__is_ok(var_66);
}
if (var67){
{
var68 = list__ListIterator__item(var_66);
}
var_scope = var68;
{
{ /* Inline scope#Scope#escapemark (var_scope) on <var_scope:Scope> */
var71 = var_scope->attrs[COLOR_scope__Scope___escapemark].val; /* _escapemark on <var_scope:Scope> */
var69 = var71;
RET_LABEL70:(void)0;
}
}
var_res72 = var69;
var73 = NULL;
if (var_res72 == NULL) {
var74 = 0; /* is null */
} else {
var74 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res72,var73) on <var_res72:nullable EscapeMark> */
var_other = var73;
{
var78 = ((short int (*)(val*, val*))(var_res72->class->vft[COLOR_kernel__Object___61d_61d]))(var_res72, var_other) /* == on <var_res72:nullable EscapeMark(EscapeMark)>*/;
var77 = var78;
}
var79 = !var77;
var75 = var79;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
var74 = var75;
}
if (var74){
var = var_res72;
goto RET_LABEL;
} else {
}
{
list__ListIterator__next(var_66); /* Direct call list#ListIterator#next on <var_66:ListIterator[Scope]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_66) on <var_66:ListIterator[Scope]> */
RET_LABEL80:(void)0;
}
}
if (varonce81) {
var82 = varonce81;
} else {
var83 = "Syntax Error: \'break\' statement outside block.";
var84 = 46;
var85 = string__NativeString__to_s_with_length(var83, var84);
var82 = var85;
varonce81 = var82;
}
{
scope__ScopeVisitor__error(self, var_node, var82); /* Direct call scope#ScopeVisitor#error on <self:ScopeVisitor>*/
}
var86 = NULL;
var = var86;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method scope#ScopeVisitor#get_escapemark for (self: Object, ANode, nullable ALabel): nullable EscapeMark */
val* VIRTUAL_scope__ScopeVisitor__get_escapemark(val* self, val* p0, val* p1) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = scope__ScopeVisitor__get_escapemark(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ScopeVisitor#error for (self: ScopeVisitor, ANode, String) */
void scope__ScopeVisitor__error(val* self, val* p0, val* p1) {
val* var_node /* var node: ANode */;
val* var_message /* var message: String */;
val* var /* : ToolContext */;
val* var2 /* : ToolContext */;
val* var3 /* : Location */;
var_node = p0;
var_message = p1;
{
{ /* Inline scope#ScopeVisitor#toolcontext (self) on <self:ScopeVisitor> */
var2 = self->attrs[COLOR_scope__ScopeVisitor___toolcontext].val; /* _toolcontext on <self:ScopeVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "semantize/scope.nit", 69);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = ((val* (*)(val*))(var_node->class->vft[COLOR_parser_nodes__ANode__hot_location]))(var_node) /* hot_location on <var_node:ANode>*/;
}
{
toolcontext__ToolContext__error(var, var3, var_message); /* Direct call toolcontext#ToolContext#error on <var:ToolContext>*/
}
RET_LABEL:;
}
/* method scope#ScopeVisitor#error for (self: Object, ANode, String) */
void VIRTUAL_scope__ScopeVisitor__error(val* self, val* p0, val* p1) {
scope__ScopeVisitor__error(self, p0, p1); /* Direct call scope#ScopeVisitor#error on <self:Object(ScopeVisitor)>*/
RET_LABEL:;
}
/* method scope#Scope#variables for (self: Scope): HashMap[String, Variable] */
val* scope__Scope__variables(val* self) {
val* var /* : HashMap[String, Variable] */;
val* var1 /* : HashMap[String, Variable] */;
var1 = self->attrs[COLOR_scope__Scope___variables].val; /* _variables on <self:Scope> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _variables");
PRINT_ERROR(" (%s:%d)\n", "semantize/scope.nit", 225);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#Scope#variables for (self: Object): HashMap[String, Variable] */
val* VIRTUAL_scope__Scope__variables(val* self) {
val* var /* : HashMap[String, Variable] */;
val* var1 /* : HashMap[String, Variable] */;
val* var3 /* : HashMap[String, Variable] */;
{ /* Inline scope#Scope#variables (self) on <self:Object(Scope)> */
var3 = self->attrs[COLOR_scope__Scope___variables].val; /* _variables on <self:Object(Scope)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _variables");
PRINT_ERROR(" (%s:%d)\n", "semantize/scope.nit", 225);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#Scope#escapemark for (self: Scope): nullable EscapeMark */
val* scope__Scope__escapemark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_scope__Scope___escapemark].val; /* _escapemark on <self:Scope> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#Scope#escapemark for (self: Object): nullable EscapeMark */
val* VIRTUAL_scope__Scope__escapemark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
val* var3 /* : nullable EscapeMark */;
{ /* Inline scope#Scope#escapemark (self) on <self:Object(Scope)> */
var3 = self->attrs[COLOR_scope__Scope___escapemark].val; /* _escapemark on <self:Object(Scope)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#Scope#escapemark= for (self: Scope, nullable EscapeMark) */
void scope__Scope__escapemark_61d(val* self, val* p0) {
self->attrs[COLOR_scope__Scope___escapemark].val = p0; /* _escapemark on <self:Scope> */
RET_LABEL:;
}
/* method scope#Scope#escapemark= for (self: Object, nullable EscapeMark) */
void VIRTUAL_scope__Scope__escapemark_61d(val* self, val* p0) {
{ /* Inline scope#Scope#escapemark= (self,p0) on <self:Object(Scope)> */
self->attrs[COLOR_scope__Scope___escapemark].val = p0; /* _escapemark on <self:Object(Scope)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method scope#Scope#get_variable for (self: Scope, String): nullable Variable */
val* scope__Scope__get_variable(val* self, val* p0) {
val* var /* : nullable Variable */;
val* var_name /* var name: String */;
val* var1 /* : HashMap[String, Variable] */;
val* var3 /* : HashMap[String, Variable] */;
short int var4 /* : Bool */;
val* var5 /* : HashMap[String, Variable] */;
val* var7 /* : HashMap[String, Variable] */;
val* var8 /* : nullable Object */;
val* var9 /* : null */;
var_name = p0;
{
{ /* Inline scope#Scope#variables (self) on <self:Scope> */
var3 = self->attrs[COLOR_scope__Scope___variables].val; /* _variables on <self:Scope> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _variables");
PRINT_ERROR(" (%s:%d)\n", "semantize/scope.nit", 225);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = abstract_collection__MapRead__has_key(var1, var_name);
}
if (var4){
{
{ /* Inline scope#Scope#variables (self) on <self:Scope> */
var7 = self->attrs[COLOR_scope__Scope___variables].val; /* _variables on <self:Scope> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _variables");
PRINT_ERROR(" (%s:%d)\n", "semantize/scope.nit", 225);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = hash_collection__HashMap___91d_93d(var5, var_name);
}
var = var8;
goto RET_LABEL;
} else {
var9 = NULL;
var = var9;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method scope#Scope#get_variable for (self: Object, String): nullable Variable */
val* VIRTUAL_scope__Scope__get_variable(val* self, val* p0) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
var1 = scope__Scope__get_variable(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ANode#accept_scope_visitor for (self: ANode, ScopeVisitor) */
void scope__ANode__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
var_v = p0;
{
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__ANode__visit_all]))(self, var_v) /* visit_all on <self:ANode>*/;
}
RET_LABEL:;
}
/* method scope#ANode#accept_scope_visitor for (self: Object, ScopeVisitor) */
void VIRTUAL_scope__ANode__accept_scope_visitor(val* self, val* p0) {
scope__ANode__accept_scope_visitor(self, p0); /* Direct call scope#ANode#accept_scope_visitor on <self:Object(ANode)>*/
RET_LABEL:;
}
/* method scope#APropdef#do_scope for (self: APropdef, ToolContext) */
void scope__APropdef__do_scope(val* self, val* p0) {
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var /* : ScopeVisitor */;
val* var_v /* var v: ScopeVisitor */;
var_toolcontext = p0;
var = NEW_scope__ScopeVisitor(&type_scope__ScopeVisitor);
{
scope__ScopeVisitor__init(var, var_toolcontext); /* Direct call scope#ScopeVisitor#init on <var:ScopeVisitor>*/
}
var_v = var;
{
parser_nodes__Visitor__enter_visit(var_v, self); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:ScopeVisitor>*/
}
{
scope__ScopeVisitor__shift_scope(var_v); /* Direct call scope#ScopeVisitor#shift_scope on <var_v:ScopeVisitor>*/
}
RET_LABEL:;
}
/* method scope#APropdef#do_scope for (self: Object, ToolContext) */
void VIRTUAL_scope__APropdef__do_scope(val* self, val* p0) {
scope__APropdef__do_scope(self, p0); /* Direct call scope#APropdef#do_scope on <self:Object(APropdef)>*/
RET_LABEL:;
}
/* method scope#AParam#variable for (self: AParam): nullable Variable */
val* scope__AParam__variable(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
var1 = self->attrs[COLOR_scope__AParam___variable].val; /* _variable on <self:AParam> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AParam#variable for (self: Object): nullable Variable */
val* VIRTUAL_scope__AParam__variable(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
val* var3 /* : nullable Variable */;
{ /* Inline scope#AParam#variable (self) on <self:Object(AParam)> */
var3 = self->attrs[COLOR_scope__AParam___variable].val; /* _variable on <self:Object(AParam)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AParam#variable= for (self: AParam, nullable Variable) */
void scope__AParam__variable_61d(val* self, val* p0) {
self->attrs[COLOR_scope__AParam___variable].val = p0; /* _variable on <self:AParam> */
RET_LABEL:;
}
/* method scope#AParam#variable= for (self: Object, nullable Variable) */
void VIRTUAL_scope__AParam__variable_61d(val* self, val* p0) {
{ /* Inline scope#AParam#variable= (self,p0) on <self:Object(AParam)> */
self->attrs[COLOR_scope__AParam___variable].val = p0; /* _variable on <self:Object(AParam)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method scope#AParam#accept_scope_visitor for (self: AParam, ScopeVisitor) */
void scope__AParam__accept_scope_visitor(val* self, val* p0) {
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
((void (*)(val*, val*))(self->class->vft[COLOR_scope__AParam__accept_scope_visitor]))(self, p0) /* accept_scope_visitor on <self:AParam>*/;
}
{
{ /* Inline parser_nodes#AParam#n_id (self) on <self:AParam> */
var2 = self->attrs[COLOR_parser_nodes__AParam___n_id].val; /* _n_id on <self:AParam> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1287);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_nid = var;
var3 = NEW_scope__Variable(&type_scope__Variable);
{
var4 = lexer_work__Token__text(var_nid);
}
{
((void (*)(val*, val*))(var3->class->vft[COLOR_scope__Variable__name_61d]))(var3, var4) /* name= on <var3:Variable>*/;
}
{
((void (*)(val*))(var3->class->vft[COLOR_kernel__Object__init]))(var3) /* init on <var3:Variable>*/;
}
var_variable = var3;
{
var5 = scope__ScopeVisitor__register_variable(var_v, var_nid, var_variable);
}
{
{ /* Inline scope#AParam#variable= (self,var_variable) on <self:AParam> */
self->attrs[COLOR_scope__AParam___variable].val = var_variable; /* _variable on <self:AParam> */
RET_LABEL6:(void)0;
}
}
RET_LABEL:;
}
/* method scope#AParam#accept_scope_visitor for (self: Object, ScopeVisitor) */
void VIRTUAL_scope__AParam__accept_scope_visitor(val* self, val* p0) {
scope__AParam__accept_scope_visitor(self, p0); /* Direct call scope#AParam#accept_scope_visitor on <self:Object(AParam)>*/
RET_LABEL:;
}
/* method scope#AVardeclExpr#variable for (self: AVardeclExpr): nullable Variable */
val* scope__AVardeclExpr__variable(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
var1 = self->attrs[COLOR_scope__AVardeclExpr___variable].val; /* _variable on <self:AVardeclExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AVardeclExpr#variable for (self: Object): nullable Variable */
val* VIRTUAL_scope__AVardeclExpr__variable(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
val* var3 /* : nullable Variable */;
{ /* Inline scope#AVardeclExpr#variable (self) on <self:Object(AVardeclExpr)> */
var3 = self->attrs[COLOR_scope__AVardeclExpr___variable].val; /* _variable on <self:Object(AVardeclExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AVardeclExpr#variable= for (self: AVardeclExpr, nullable Variable) */
void scope__AVardeclExpr__variable_61d(val* self, val* p0) {
self->attrs[COLOR_scope__AVardeclExpr___variable].val = p0; /* _variable on <self:AVardeclExpr> */
RET_LABEL:;
}
/* method scope#AVardeclExpr#variable= for (self: Object, nullable Variable) */
void VIRTUAL_scope__AVardeclExpr__variable_61d(val* self, val* p0) {
{ /* Inline scope#AVardeclExpr#variable= (self,p0) on <self:Object(AVardeclExpr)> */
self->attrs[COLOR_scope__AVardeclExpr___variable].val = p0; /* _variable on <self:Object(AVardeclExpr)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method scope#AVardeclExpr#accept_scope_visitor for (self: AVardeclExpr, ScopeVisitor) */
void scope__AVardeclExpr__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : TId */;
val* var2 /* : TId */;
val* var_nid /* var nid: TId */;
val* var3 /* : Variable */;
val* var4 /* : String */;
val* var_variable /* var variable: Variable */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_v = p0;
{
((void (*)(val*, val*))(self->class->vft[COLOR_scope__AVardeclExpr__accept_scope_visitor]))(self, p0) /* accept_scope_visitor on <self:AVardeclExpr>*/;
}
{
{ /* Inline parser_nodes#AVardeclExpr#n_id (self) on <self:AVardeclExpr> */
var2 = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_id].val; /* _n_id on <self:AVardeclExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1329);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_nid = var;
var3 = NEW_scope__Variable(&type_scope__Variable);
{
var4 = lexer_work__Token__text(var_nid);
}
{
((void (*)(val*, val*))(var3->class->vft[COLOR_scope__Variable__name_61d]))(var3, var4) /* name= on <var3:Variable>*/;
}
{
((void (*)(val*))(var3->class->vft[COLOR_kernel__Object__init]))(var3) /* init on <var3:Variable>*/;
}
var_variable = var3;
{
var5 = scope__ScopeVisitor__register_variable(var_v, var_nid, var_variable);
}
var6 = 1;
{
{ /* Inline scope#Variable#warn_unread= (var_variable,var6) on <var_variable:Variable> */
var_variable->attrs[COLOR_scope__Variable___warn_unread].s = var6; /* _warn_unread on <var_variable:Variable> */
RET_LABEL7:(void)0;
}
}
{
{ /* Inline scope#AVardeclExpr#variable= (self,var_variable) on <self:AVardeclExpr> */
self->attrs[COLOR_scope__AVardeclExpr___variable].val = var_variable; /* _variable on <self:AVardeclExpr> */
RET_LABEL8:(void)0;
}
}
RET_LABEL:;
}
/* method scope#AVardeclExpr#accept_scope_visitor for (self: Object, ScopeVisitor) */
void VIRTUAL_scope__AVardeclExpr__accept_scope_visitor(val* self, val* p0) {
scope__AVardeclExpr__accept_scope_visitor(self, p0); /* Direct call scope#AVardeclExpr#accept_scope_visitor on <self:Object(AVardeclExpr)>*/
RET_LABEL:;
}
/* method scope#ASelfExpr#variable= for (self: ASelfExpr, nullable Variable) */
void scope__ASelfExpr__variable_61d(val* self, val* p0) {
self->attrs[COLOR_scope__ASelfExpr___variable].val = p0; /* _variable on <self:ASelfExpr> */
RET_LABEL:;
}
/* method scope#ASelfExpr#variable= for (self: Object, nullable Variable) */
void VIRTUAL_scope__ASelfExpr__variable_61d(val* self, val* p0) {
{ /* Inline scope#ASelfExpr#variable= (self,p0) on <self:Object(ASelfExpr)> */
self->attrs[COLOR_scope__ASelfExpr___variable].val = p0; /* _variable on <self:Object(ASelfExpr)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method scope#ASelfExpr#accept_scope_visitor for (self: ASelfExpr, ScopeVisitor) */
void scope__ASelfExpr__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : Variable */;
val* var2 /* : Variable */;
var_v = p0;
{
((void (*)(val*, val*))(self->class->vft[COLOR_scope__ASelfExpr__accept_scope_visitor]))(self, p0) /* accept_scope_visitor on <self:ASelfExpr>*/;
}
{
{ /* Inline scope#ScopeVisitor#selfvariable (var_v) on <var_v:ScopeVisitor> */
var2 = var_v->attrs[COLOR_scope__ScopeVisitor___selfvariable].val; /* _selfvariable on <var_v:ScopeVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _selfvariable");
PRINT_ERROR(" (%s:%d)\n", "semantize/scope.nit", 72);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline scope#ASelfExpr#variable= (self,var) on <self:ASelfExpr> */
self->attrs[COLOR_scope__ASelfExpr___variable].val = var; /* _variable on <self:ASelfExpr> */
RET_LABEL3:(void)0;
}
}
RET_LABEL:;
}
/* method scope#ASelfExpr#accept_scope_visitor for (self: Object, ScopeVisitor) */
void VIRTUAL_scope__ASelfExpr__accept_scope_visitor(val* self, val* p0) {
scope__ASelfExpr__accept_scope_visitor(self, p0); /* Direct call scope#ASelfExpr#accept_scope_visitor on <self:Object(ASelfExpr)>*/
RET_LABEL:;
}
/* method scope#AEscapeExpr#escapemark for (self: AEscapeExpr): nullable EscapeMark */
val* scope__AEscapeExpr__escapemark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_scope__AEscapeExpr___escapemark].val; /* _escapemark on <self:AEscapeExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AEscapeExpr#escapemark for (self: Object): nullable EscapeMark */
val* VIRTUAL_scope__AEscapeExpr__escapemark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
val* var3 /* : nullable EscapeMark */;
{ /* Inline scope#AEscapeExpr#escapemark (self) on <self:Object(AEscapeExpr)> */
var3 = self->attrs[COLOR_scope__AEscapeExpr___escapemark].val; /* _escapemark on <self:Object(AEscapeExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AEscapeExpr#escapemark= for (self: AEscapeExpr, nullable EscapeMark) */
void scope__AEscapeExpr__escapemark_61d(val* self, val* p0) {
self->attrs[COLOR_scope__AEscapeExpr___escapemark].val = p0; /* _escapemark on <self:AEscapeExpr> */
RET_LABEL:;
}
/* method scope#AEscapeExpr#escapemark= for (self: Object, nullable EscapeMark) */
void VIRTUAL_scope__AEscapeExpr__escapemark_61d(val* self, val* p0) {
{ /* Inline scope#AEscapeExpr#escapemark= (self,p0) on <self:Object(AEscapeExpr)> */
self->attrs[COLOR_scope__AEscapeExpr___escapemark].val = p0; /* _escapemark on <self:Object(AEscapeExpr)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method scope#AContinueExpr#accept_scope_visitor for (self: AContinueExpr, ScopeVisitor) */
void scope__AContinueExpr__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : nullable ALabel */;
val* var2 /* : nullable ALabel */;
val* var3 /* : nullable EscapeMark */;
val* var_escapemark /* var escapemark: nullable EscapeMark */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : nullable EscapeMark */;
val* var13 /* : nullable EscapeMark */;
val* var14 /* : null */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
static val* varonce;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : FlatString */;
val* var25 /* : Array[AEscapeExpr] */;
val* var27 /* : Array[AEscapeExpr] */;
var_v = p0;
{
((void (*)(val*, val*))(self->class->vft[COLOR_scope__AContinueExpr__accept_scope_visitor]))(self, p0) /* accept_scope_visitor on <self:AContinueExpr>*/;
}
{
{ /* Inline parser_nodes#ALabelable#n_label (self) on <self:AContinueExpr> */
var2 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AContinueExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = scope__ScopeVisitor__get_escapemark(var_v, self, var);
}
var_escapemark = var3;
var4 = NULL;
if (var_escapemark == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_escapemark,var4) on <var_escapemark:nullable EscapeMark> */
var_other = var4;
{
{ /* Inline kernel#Object#is_same_instance (var_escapemark,var_other) on <var_escapemark:nullable EscapeMark(EscapeMark)> */
var10 = var_escapemark == var_other;
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
goto RET_LABEL;
} else {
}
{
{ /* Inline scope#EscapeMark#continue_mark (var_escapemark) on <var_escapemark:nullable EscapeMark(EscapeMark)> */
var13 = var_escapemark->attrs[COLOR_scope__EscapeMark___continue_mark].val; /* _continue_mark on <var_escapemark:nullable EscapeMark(EscapeMark)> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
var_escapemark = var11;
var14 = NULL;
if (var_escapemark == NULL) {
var15 = 1; /* is null */
} else {
var15 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_escapemark,var14) on <var_escapemark:nullable EscapeMark> */
var_other = var14;
{
{ /* Inline kernel#Object#is_same_instance (var_escapemark,var_other) on <var_escapemark:nullable EscapeMark(EscapeMark)> */
var20 = var_escapemark == var_other;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var15 = var16;
}
if (var15){
if (varonce) {
var21 = varonce;
} else {
var22 = "Error: cannot \'continue\', only \'break\'.";
var23 = 39;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce = var21;
}
{
scope__ScopeVisitor__error(var_v, self, var21); /* Direct call scope#ScopeVisitor#error on <var_v:ScopeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline scope#EscapeMark#escapes (var_escapemark) on <var_escapemark:nullable EscapeMark(EscapeMark)> */
var27 = var_escapemark->attrs[COLOR_scope__EscapeMark___escapes].val; /* _escapes on <var_escapemark:nullable EscapeMark(EscapeMark)> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapes");
PRINT_ERROR(" (%s:%d)\n", "semantize/scope.nit", 57);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
array__Array__add(var25, self); /* Direct call array#Array#add on <var25:Array[AEscapeExpr]>*/
}
{
{ /* Inline scope#AEscapeExpr#escapemark= (self,var_escapemark) on <self:AContinueExpr> */
self->attrs[COLOR_scope__AEscapeExpr___escapemark].val = var_escapemark; /* _escapemark on <self:AContinueExpr> */
RET_LABEL28:(void)0;
}
}
RET_LABEL:;
}
/* method scope#AContinueExpr#accept_scope_visitor for (self: Object, ScopeVisitor) */
void VIRTUAL_scope__AContinueExpr__accept_scope_visitor(val* self, val* p0) {
scope__AContinueExpr__accept_scope_visitor(self, p0); /* Direct call scope#AContinueExpr#accept_scope_visitor on <self:Object(AContinueExpr)>*/
RET_LABEL:;
}
/* method scope#ABreakExpr#accept_scope_visitor for (self: ABreakExpr, ScopeVisitor) */
void scope__ABreakExpr__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : nullable ALabel */;
val* var2 /* : nullable ALabel */;
val* var3 /* : nullable EscapeMark */;
val* var_escapemark /* var escapemark: nullable EscapeMark */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : Array[AEscapeExpr] */;
val* var13 /* : Array[AEscapeExpr] */;
var_v = p0;
{
((void (*)(val*, val*))(self->class->vft[COLOR_scope__ABreakExpr__accept_scope_visitor]))(self, p0) /* accept_scope_visitor on <self:ABreakExpr>*/;
}
{
{ /* Inline parser_nodes#ALabelable#n_label (self) on <self:ABreakExpr> */
var2 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ABreakExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = scope__ScopeVisitor__get_escapemark(var_v, self, var);
}
var_escapemark = var3;
var4 = NULL;
if (var_escapemark == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_escapemark,var4) on <var_escapemark:nullable EscapeMark> */
var_other = var4;
{
{ /* Inline kernel#Object#is_same_instance (var_escapemark,var_other) on <var_escapemark:nullable EscapeMark(EscapeMark)> */
var10 = var_escapemark == var_other;
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
goto RET_LABEL;
} else {
}
{
{ /* Inline scope#EscapeMark#escapes (var_escapemark) on <var_escapemark:nullable EscapeMark(EscapeMark)> */
var13 = var_escapemark->attrs[COLOR_scope__EscapeMark___escapes].val; /* _escapes on <var_escapemark:nullable EscapeMark(EscapeMark)> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapes");
PRINT_ERROR(" (%s:%d)\n", "semantize/scope.nit", 57);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
array__Array__add(var11, self); /* Direct call array#Array#add on <var11:Array[AEscapeExpr]>*/
}
{
{ /* Inline scope#AEscapeExpr#escapemark= (self,var_escapemark) on <self:ABreakExpr> */
self->attrs[COLOR_scope__AEscapeExpr___escapemark].val = var_escapemark; /* _escapemark on <self:ABreakExpr> */
RET_LABEL14:(void)0;
}
}
RET_LABEL:;
}
/* method scope#ABreakExpr#accept_scope_visitor for (self: Object, ScopeVisitor) */
void VIRTUAL_scope__ABreakExpr__accept_scope_visitor(val* self, val* p0) {
scope__ABreakExpr__accept_scope_visitor(self, p0); /* Direct call scope#ABreakExpr#accept_scope_visitor on <self:Object(ABreakExpr)>*/
RET_LABEL:;
}
/* method scope#ADoExpr#break_mark for (self: ADoExpr): nullable EscapeMark */
val* scope__ADoExpr__break_mark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_scope__ADoExpr___break_mark].val; /* _break_mark on <self:ADoExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ADoExpr#break_mark for (self: Object): nullable EscapeMark */
val* VIRTUAL_scope__ADoExpr__break_mark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
val* var3 /* : nullable EscapeMark */;
{ /* Inline scope#ADoExpr#break_mark (self) on <self:Object(ADoExpr)> */
var3 = self->attrs[COLOR_scope__ADoExpr___break_mark].val; /* _break_mark on <self:Object(ADoExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ADoExpr#break_mark= for (self: ADoExpr, nullable EscapeMark) */
void scope__ADoExpr__break_mark_61d(val* self, val* p0) {
self->attrs[COLOR_scope__ADoExpr___break_mark].val = p0; /* _break_mark on <self:ADoExpr> */
RET_LABEL:;
}
/* method scope#ADoExpr#break_mark= for (self: Object, nullable EscapeMark) */
void VIRTUAL_scope__ADoExpr__break_mark_61d(val* self, val* p0) {
{ /* Inline scope#ADoExpr#break_mark= (self,p0) on <self:Object(ADoExpr)> */
self->attrs[COLOR_scope__ADoExpr___break_mark].val = p0; /* _break_mark on <self:Object(ADoExpr)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method scope#ADoExpr#accept_scope_visitor for (self: ADoExpr, ScopeVisitor) */
void scope__ADoExpr__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : nullable ALabel */;
val* var2 /* : nullable ALabel */;
short int var3 /* : Bool */;
val* var4 /* : EscapeMark */;
val* var6 /* : nullable AExpr */;
val* var8 /* : nullable AExpr */;
val* var9 /* : nullable EscapeMark */;
val* var11 /* : nullable EscapeMark */;
var_v = p0;
{
{ /* Inline parser_nodes#ALabelable#n_label (self) on <self:ADoExpr> */
var2 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ADoExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = 0;
{
var4 = scope__ScopeVisitor__make_escape_mark(var_v, var, var3);
}
{
{ /* Inline scope#ADoExpr#break_mark= (self,var4) on <self:ADoExpr> */
self->attrs[COLOR_scope__ADoExpr___break_mark].val = var4; /* _break_mark on <self:ADoExpr> */
RET_LABEL5:(void)0;
}
}
{
{ /* Inline parser_nodes#ADoExpr#n_block (self) on <self:ADoExpr> */
var8 = self->attrs[COLOR_parser_nodes__ADoExpr___n_block].val; /* _n_block on <self:ADoExpr> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline scope#ADoExpr#break_mark (self) on <self:ADoExpr> */
var11 = self->attrs[COLOR_scope__ADoExpr___break_mark].val; /* _break_mark on <self:ADoExpr> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
scope__ScopeVisitor__enter_visit_block(var_v, var6, var9); /* Direct call scope#ScopeVisitor#enter_visit_block on <var_v:ScopeVisitor>*/
}
RET_LABEL:;
}
/* method scope#ADoExpr#accept_scope_visitor for (self: Object, ScopeVisitor) */
void VIRTUAL_scope__ADoExpr__accept_scope_visitor(val* self, val* p0) {
scope__ADoExpr__accept_scope_visitor(self, p0); /* Direct call scope#ADoExpr#accept_scope_visitor on <self:Object(ADoExpr)>*/
RET_LABEL:;
}
/* method scope#AIfExpr#accept_scope_visitor for (self: AIfExpr, ScopeVisitor) */
void scope__AIfExpr__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable AExpr */;
val* var5 /* : nullable AExpr */;
val* var6 /* : null */;
val* var7 /* : nullable AExpr */;
val* var9 /* : nullable AExpr */;
val* var10 /* : null */;
var_v = p0;
{
{ /* Inline parser_nodes#AIfExpr#n_expr (self) on <self:AIfExpr> */
var2 = self->attrs[COLOR_parser_nodes__AIfExpr___n_expr].val; /* _n_expr on <self:AIfExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1387);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:ScopeVisitor>*/
}
{
{ /* Inline parser_nodes#AIfExpr#n_then (self) on <self:AIfExpr> */
var5 = self->attrs[COLOR_parser_nodes__AIfExpr___n_then].val; /* _n_then on <self:AIfExpr> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var6 = NULL;
{
scope__ScopeVisitor__enter_visit_block(var_v, var3, var6); /* Direct call scope#ScopeVisitor#enter_visit_block on <var_v:ScopeVisitor>*/
}
{
{ /* Inline parser_nodes#AIfExpr#n_else (self) on <self:AIfExpr> */
var9 = self->attrs[COLOR_parser_nodes__AIfExpr___n_else].val; /* _n_else on <self:AIfExpr> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
var10 = NULL;
{
scope__ScopeVisitor__enter_visit_block(var_v, var7, var10); /* Direct call scope#ScopeVisitor#enter_visit_block on <var_v:ScopeVisitor>*/
}
RET_LABEL:;
}
/* method scope#AIfExpr#accept_scope_visitor for (self: Object, ScopeVisitor) */
void VIRTUAL_scope__AIfExpr__accept_scope_visitor(val* self, val* p0) {
scope__AIfExpr__accept_scope_visitor(self, p0); /* Direct call scope#AIfExpr#accept_scope_visitor on <self:Object(AIfExpr)>*/
RET_LABEL:;
}
/* method scope#AWhileExpr#break_mark for (self: AWhileExpr): nullable EscapeMark */
val* scope__AWhileExpr__break_mark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_scope__AWhileExpr___break_mark].val; /* _break_mark on <self:AWhileExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AWhileExpr#break_mark for (self: Object): nullable EscapeMark */
val* VIRTUAL_scope__AWhileExpr__break_mark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
val* var3 /* : nullable EscapeMark */;
{ /* Inline scope#AWhileExpr#break_mark (self) on <self:Object(AWhileExpr)> */
var3 = self->attrs[COLOR_scope__AWhileExpr___break_mark].val; /* _break_mark on <self:Object(AWhileExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AWhileExpr#break_mark= for (self: AWhileExpr, nullable EscapeMark) */
void scope__AWhileExpr__break_mark_61d(val* self, val* p0) {
self->attrs[COLOR_scope__AWhileExpr___break_mark].val = p0; /* _break_mark on <self:AWhileExpr> */
RET_LABEL:;
}
/* method scope#AWhileExpr#break_mark= for (self: Object, nullable EscapeMark) */
void VIRTUAL_scope__AWhileExpr__break_mark_61d(val* self, val* p0) {
{ /* Inline scope#AWhileExpr#break_mark= (self,p0) on <self:Object(AWhileExpr)> */
self->attrs[COLOR_scope__AWhileExpr___break_mark].val = p0; /* _break_mark on <self:Object(AWhileExpr)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method scope#AWhileExpr#continue_mark for (self: AWhileExpr): nullable EscapeMark */
val* scope__AWhileExpr__continue_mark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_scope__AWhileExpr___continue_mark].val; /* _continue_mark on <self:AWhileExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AWhileExpr#continue_mark for (self: Object): nullable EscapeMark */
val* VIRTUAL_scope__AWhileExpr__continue_mark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
val* var3 /* : nullable EscapeMark */;
{ /* Inline scope#AWhileExpr#continue_mark (self) on <self:Object(AWhileExpr)> */
var3 = self->attrs[COLOR_scope__AWhileExpr___continue_mark].val; /* _continue_mark on <self:Object(AWhileExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AWhileExpr#continue_mark= for (self: AWhileExpr, nullable EscapeMark) */
void scope__AWhileExpr__continue_mark_61d(val* self, val* p0) {
self->attrs[COLOR_scope__AWhileExpr___continue_mark].val = p0; /* _continue_mark on <self:AWhileExpr> */
RET_LABEL:;
}
/* method scope#AWhileExpr#continue_mark= for (self: Object, nullable EscapeMark) */
void VIRTUAL_scope__AWhileExpr__continue_mark_61d(val* self, val* p0) {
{ /* Inline scope#AWhileExpr#continue_mark= (self,p0) on <self:Object(AWhileExpr)> */
self->attrs[COLOR_scope__AWhileExpr___continue_mark].val = p0; /* _continue_mark on <self:Object(AWhileExpr)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method scope#AWhileExpr#accept_scope_visitor for (self: AWhileExpr, ScopeVisitor) */
void scope__AWhileExpr__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : nullable ALabel */;
val* var2 /* : nullable ALabel */;
short int var3 /* : Bool */;
val* var4 /* : EscapeMark */;
val* var_escapemark /* var escapemark: EscapeMark */;
val* var6 /* : nullable EscapeMark */;
val* var8 /* : nullable EscapeMark */;
val* var10 /* : AExpr */;
val* var12 /* : AExpr */;
val* var13 /* : nullable AExpr */;
val* var15 /* : nullable AExpr */;
var_v = p0;
{
{ /* Inline parser_nodes#ALabelable#n_label (self) on <self:AWhileExpr> */
var2 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AWhileExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = 1;
{
var4 = scope__ScopeVisitor__make_escape_mark(var_v, var, var3);
}
var_escapemark = var4;
{
{ /* Inline scope#AWhileExpr#break_mark= (self,var_escapemark) on <self:AWhileExpr> */
self->attrs[COLOR_scope__AWhileExpr___break_mark].val = var_escapemark; /* _break_mark on <self:AWhileExpr> */
RET_LABEL5:(void)0;
}
}
{
{ /* Inline scope#EscapeMark#continue_mark (var_escapemark) on <var_escapemark:EscapeMark> */
var8 = var_escapemark->attrs[COLOR_scope__EscapeMark___continue_mark].val; /* _continue_mark on <var_escapemark:EscapeMark> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline scope#AWhileExpr#continue_mark= (self,var6) on <self:AWhileExpr> */
self->attrs[COLOR_scope__AWhileExpr___continue_mark].val = var6; /* _continue_mark on <self:AWhileExpr> */
RET_LABEL9:(void)0;
}
}
{
{ /* Inline parser_nodes#AWhileExpr#n_expr (self) on <self:AWhileExpr> */
var12 = self->attrs[COLOR_parser_nodes__AWhileExpr___n_expr].val; /* _n_expr on <self:AWhileExpr> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1408);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
parser_nodes__Visitor__enter_visit(var_v, var10); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:ScopeVisitor>*/
}
{
{ /* Inline parser_nodes#AWhileExpr#n_block (self) on <self:AWhileExpr> */
var15 = self->attrs[COLOR_parser_nodes__AWhileExpr___n_block].val; /* _n_block on <self:AWhileExpr> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
scope__ScopeVisitor__enter_visit_block(var_v, var13, var_escapemark); /* Direct call scope#ScopeVisitor#enter_visit_block on <var_v:ScopeVisitor>*/
}
RET_LABEL:;
}
/* method scope#AWhileExpr#accept_scope_visitor for (self: Object, ScopeVisitor) */
void VIRTUAL_scope__AWhileExpr__accept_scope_visitor(val* self, val* p0) {
scope__AWhileExpr__accept_scope_visitor(self, p0); /* Direct call scope#AWhileExpr#accept_scope_visitor on <self:Object(AWhileExpr)>*/
RET_LABEL:;
}
/* method scope#ALoopExpr#break_mark for (self: ALoopExpr): nullable EscapeMark */
val* scope__ALoopExpr__break_mark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_scope__ALoopExpr___break_mark].val; /* _break_mark on <self:ALoopExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ALoopExpr#break_mark for (self: Object): nullable EscapeMark */
val* VIRTUAL_scope__ALoopExpr__break_mark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
val* var3 /* : nullable EscapeMark */;
{ /* Inline scope#ALoopExpr#break_mark (self) on <self:Object(ALoopExpr)> */
var3 = self->attrs[COLOR_scope__ALoopExpr___break_mark].val; /* _break_mark on <self:Object(ALoopExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ALoopExpr#break_mark= for (self: ALoopExpr, nullable EscapeMark) */
void scope__ALoopExpr__break_mark_61d(val* self, val* p0) {
self->attrs[COLOR_scope__ALoopExpr___break_mark].val = p0; /* _break_mark on <self:ALoopExpr> */
RET_LABEL:;
}
/* method scope#ALoopExpr#break_mark= for (self: Object, nullable EscapeMark) */
void VIRTUAL_scope__ALoopExpr__break_mark_61d(val* self, val* p0) {
{ /* Inline scope#ALoopExpr#break_mark= (self,p0) on <self:Object(ALoopExpr)> */
self->attrs[COLOR_scope__ALoopExpr___break_mark].val = p0; /* _break_mark on <self:Object(ALoopExpr)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method scope#ALoopExpr#continue_mark for (self: ALoopExpr): nullable EscapeMark */
val* scope__ALoopExpr__continue_mark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_scope__ALoopExpr___continue_mark].val; /* _continue_mark on <self:ALoopExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ALoopExpr#continue_mark for (self: Object): nullable EscapeMark */
val* VIRTUAL_scope__ALoopExpr__continue_mark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
val* var3 /* : nullable EscapeMark */;
{ /* Inline scope#ALoopExpr#continue_mark (self) on <self:Object(ALoopExpr)> */
var3 = self->attrs[COLOR_scope__ALoopExpr___continue_mark].val; /* _continue_mark on <self:Object(ALoopExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ALoopExpr#continue_mark= for (self: ALoopExpr, nullable EscapeMark) */
void scope__ALoopExpr__continue_mark_61d(val* self, val* p0) {
self->attrs[COLOR_scope__ALoopExpr___continue_mark].val = p0; /* _continue_mark on <self:ALoopExpr> */
RET_LABEL:;
}
/* method scope#ALoopExpr#continue_mark= for (self: Object, nullable EscapeMark) */
void VIRTUAL_scope__ALoopExpr__continue_mark_61d(val* self, val* p0) {
{ /* Inline scope#ALoopExpr#continue_mark= (self,p0) on <self:Object(ALoopExpr)> */
self->attrs[COLOR_scope__ALoopExpr___continue_mark].val = p0; /* _continue_mark on <self:Object(ALoopExpr)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method scope#ALoopExpr#accept_scope_visitor for (self: ALoopExpr, ScopeVisitor) */
void scope__ALoopExpr__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : nullable ALabel */;
val* var2 /* : nullable ALabel */;
short int var3 /* : Bool */;
val* var4 /* : EscapeMark */;
val* var_escapemark /* var escapemark: EscapeMark */;
val* var6 /* : nullable EscapeMark */;
val* var8 /* : nullable EscapeMark */;
val* var10 /* : nullable AExpr */;
val* var12 /* : nullable AExpr */;
var_v = p0;
{
{ /* Inline parser_nodes#ALabelable#n_label (self) on <self:ALoopExpr> */
var2 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ALoopExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = 1;
{
var4 = scope__ScopeVisitor__make_escape_mark(var_v, var, var3);
}
var_escapemark = var4;
{
{ /* Inline scope#ALoopExpr#break_mark= (self,var_escapemark) on <self:ALoopExpr> */
self->attrs[COLOR_scope__ALoopExpr___break_mark].val = var_escapemark; /* _break_mark on <self:ALoopExpr> */
RET_LABEL5:(void)0;
}
}
{
{ /* Inline scope#EscapeMark#continue_mark (var_escapemark) on <var_escapemark:EscapeMark> */
var8 = var_escapemark->attrs[COLOR_scope__EscapeMark___continue_mark].val; /* _continue_mark on <var_escapemark:EscapeMark> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline scope#ALoopExpr#continue_mark= (self,var6) on <self:ALoopExpr> */
self->attrs[COLOR_scope__ALoopExpr___continue_mark].val = var6; /* _continue_mark on <self:ALoopExpr> */
RET_LABEL9:(void)0;
}
}
{
{ /* Inline parser_nodes#ALoopExpr#n_block (self) on <self:ALoopExpr> */
var12 = self->attrs[COLOR_parser_nodes__ALoopExpr___n_block].val; /* _n_block on <self:ALoopExpr> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
scope__ScopeVisitor__enter_visit_block(var_v, var10, var_escapemark); /* Direct call scope#ScopeVisitor#enter_visit_block on <var_v:ScopeVisitor>*/
}
RET_LABEL:;
}
/* method scope#ALoopExpr#accept_scope_visitor for (self: Object, ScopeVisitor) */
void VIRTUAL_scope__ALoopExpr__accept_scope_visitor(val* self, val* p0) {
scope__ALoopExpr__accept_scope_visitor(self, p0); /* Direct call scope#ALoopExpr#accept_scope_visitor on <self:Object(ALoopExpr)>*/
RET_LABEL:;
}
/* method scope#AForExpr#variables for (self: AForExpr): nullable Array[Variable] */
val* scope__AForExpr__variables(val* self) {
val* var /* : nullable Array[Variable] */;
val* var1 /* : nullable Array[Variable] */;
var1 = self->attrs[COLOR_scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AForExpr#variables for (self: Object): nullable Array[Variable] */
val* VIRTUAL_scope__AForExpr__variables(val* self) {
val* var /* : nullable Array[Variable] */;
val* var1 /* : nullable Array[Variable] */;
val* var3 /* : nullable Array[Variable] */;
{ /* Inline scope#AForExpr#variables (self) on <self:Object(AForExpr)> */
var3 = self->attrs[COLOR_scope__AForExpr___variables].val; /* _variables on <self:Object(AForExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AForExpr#variables= for (self: AForExpr, nullable Array[Variable]) */
void scope__AForExpr__variables_61d(val* self, val* p0) {
self->attrs[COLOR_scope__AForExpr___variables].val = p0; /* _variables on <self:AForExpr> */
RET_LABEL:;
}
/* method scope#AForExpr#variables= for (self: Object, nullable Array[Variable]) */
void VIRTUAL_scope__AForExpr__variables_61d(val* self, val* p0) {
{ /* Inline scope#AForExpr#variables= (self,p0) on <self:Object(AForExpr)> */
self->attrs[COLOR_scope__AForExpr___variables].val = p0; /* _variables on <self:Object(AForExpr)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method scope#AForExpr#break_mark for (self: AForExpr): nullable EscapeMark */
val* scope__AForExpr__break_mark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_scope__AForExpr___break_mark].val; /* _break_mark on <self:AForExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AForExpr#break_mark for (self: Object): nullable EscapeMark */
val* VIRTUAL_scope__AForExpr__break_mark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
val* var3 /* : nullable EscapeMark */;
{ /* Inline scope#AForExpr#break_mark (self) on <self:Object(AForExpr)> */
var3 = self->attrs[COLOR_scope__AForExpr___break_mark].val; /* _break_mark on <self:Object(AForExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AForExpr#break_mark= for (self: AForExpr, nullable EscapeMark) */
void scope__AForExpr__break_mark_61d(val* self, val* p0) {
self->attrs[COLOR_scope__AForExpr___break_mark].val = p0; /* _break_mark on <self:AForExpr> */
RET_LABEL:;
}
/* method scope#AForExpr#break_mark= for (self: Object, nullable EscapeMark) */
void VIRTUAL_scope__AForExpr__break_mark_61d(val* self, val* p0) {
{ /* Inline scope#AForExpr#break_mark= (self,p0) on <self:Object(AForExpr)> */
self->attrs[COLOR_scope__AForExpr___break_mark].val = p0; /* _break_mark on <self:Object(AForExpr)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method scope#AForExpr#continue_mark for (self: AForExpr): nullable EscapeMark */
val* scope__AForExpr__continue_mark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_scope__AForExpr___continue_mark].val; /* _continue_mark on <self:AForExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AForExpr#continue_mark for (self: Object): nullable EscapeMark */
val* VIRTUAL_scope__AForExpr__continue_mark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
val* var3 /* : nullable EscapeMark */;
{ /* Inline scope#AForExpr#continue_mark (self) on <self:Object(AForExpr)> */
var3 = self->attrs[COLOR_scope__AForExpr___continue_mark].val; /* _continue_mark on <self:Object(AForExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AForExpr#continue_mark= for (self: AForExpr, nullable EscapeMark) */
void scope__AForExpr__continue_mark_61d(val* self, val* p0) {
self->attrs[COLOR_scope__AForExpr___continue_mark].val = p0; /* _continue_mark on <self:AForExpr> */
RET_LABEL:;
}
/* method scope#AForExpr#continue_mark= for (self: Object, nullable EscapeMark) */
void VIRTUAL_scope__AForExpr__continue_mark_61d(val* self, val* p0) {
{ /* Inline scope#AForExpr#continue_mark= (self,p0) on <self:Object(AForExpr)> */
self->attrs[COLOR_scope__AForExpr___continue_mark].val = p0; /* _continue_mark on <self:Object(AForExpr)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method scope#AForExpr#accept_scope_visitor for (self: AForExpr, ScopeVisitor) */
void scope__AForExpr__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : List[Scope] */;
val* var5 /* : List[Scope] */;
val* var6 /* : Scope */;
val* var7 /* : Array[Variable] */;
val* var_variables /* var variables: Array[Variable] */;
val* var9 /* : ANodes[TId] */;
val* var11 /* : ANodes[TId] */;
val* var_ /* var : ANodes[TId] */;
val* var12 /* : Iterator[ANode] */;
val* var_13 /* var : Iterator[TId] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_nid /* var nid: TId */;
val* var16 /* : Variable */;
val* var17 /* : String */;
val* var_va /* var va: Variable */;
short int var18 /* : Bool */;
val* var20 /* : nullable ALabel */;
val* var22 /* : nullable ALabel */;
short int var23 /* : Bool */;
val* var24 /* : EscapeMark */;
val* var_escapemark /* var escapemark: EscapeMark */;
val* var26 /* : nullable EscapeMark */;
val* var28 /* : nullable EscapeMark */;
val* var30 /* : nullable AExpr */;
val* var32 /* : nullable AExpr */;
var_v = p0;
{
{ /* Inline parser_nodes#AForExpr#n_expr (self) on <self:AForExpr> */
var2 = self->attrs[COLOR_parser_nodes__AForExpr___n_expr].val; /* _n_expr on <self:AForExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1427);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:ScopeVisitor>*/
}
{
{ /* Inline scope#ScopeVisitor#scopes (var_v) on <var_v:ScopeVisitor> */
var5 = var_v->attrs[COLOR_scope__ScopeVisitor___scopes].val; /* _scopes on <var_v:ScopeVisitor> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", "semantize/scope.nit", 80);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var6 = NEW_scope__Scope(&type_scope__Scope);
{
((void (*)(val*))(var6->class->vft[COLOR_kernel__Object__init]))(var6) /* init on <var6:Scope>*/;
}
{
list__List__unshift(var3, var6); /* Direct call list#List#unshift on <var3:List[Scope]>*/
}
var7 = NEW_array__Array(&type_array__Arrayscope__Variable);
{
((void (*)(val*))(var7->class->vft[COLOR_kernel__Object__init]))(var7) /* init on <var7:Array[Variable]>*/;
}
var_variables = var7;
{
{ /* Inline scope#AForExpr#variables= (self,var_variables) on <self:AForExpr> */
self->attrs[COLOR_scope__AForExpr___variables].val = var_variables; /* _variables on <self:AForExpr> */
RET_LABEL8:(void)0;
}
}
{
{ /* Inline parser_nodes#AForExpr#n_ids (self) on <self:AForExpr> */
var11 = self->attrs[COLOR_parser_nodes__AForExpr___n_ids].val; /* _n_ids on <self:AForExpr> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_ids");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1426);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_ = var9;
{
var12 = parser_nodes__ANodes__iterator(var_);
}
var_13 = var12;
for(;;) {
{
var14 = ((short int (*)(val*))(var_13->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_13) /* is_ok on <var_13:Iterator[TId]>*/;
}
if (var14){
{
var15 = ((val* (*)(val*))(var_13->class->vft[COLOR_abstract_collection__Iterator__item]))(var_13) /* item on <var_13:Iterator[TId]>*/;
}
var_nid = var15;
var16 = NEW_scope__Variable(&type_scope__Variable);
{
var17 = lexer_work__Token__text(var_nid);
}
{
((void (*)(val*, val*))(var16->class->vft[COLOR_scope__Variable__name_61d]))(var16, var17) /* name= on <var16:Variable>*/;
}
{
((void (*)(val*))(var16->class->vft[COLOR_kernel__Object__init]))(var16) /* init on <var16:Variable>*/;
}
var_va = var16;
{
var18 = scope__ScopeVisitor__register_variable(var_v, var_nid, var_va);
}
{
array__Array__add(var_variables, var_va); /* Direct call array#Array#add on <var_variables:Array[Variable]>*/
}
{
((void (*)(val*))(var_13->class->vft[COLOR_abstract_collection__Iterator__next]))(var_13) /* next on <var_13:Iterator[TId]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_13) on <var_13:Iterator[TId]> */
RET_LABEL19:(void)0;
}
}
{
{ /* Inline parser_nodes#ALabelable#n_label (self) on <self:AForExpr> */
var22 = self->attrs[COLOR_parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AForExpr> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
var23 = 1;
{
var24 = scope__ScopeVisitor__make_escape_mark(var_v, var20, var23);
}
var_escapemark = var24;
{
{ /* Inline scope#AForExpr#break_mark= (self,var_escapemark) on <self:AForExpr> */
self->attrs[COLOR_scope__AForExpr___break_mark].val = var_escapemark; /* _break_mark on <self:AForExpr> */
RET_LABEL25:(void)0;
}
}
{
{ /* Inline scope#EscapeMark#continue_mark (var_escapemark) on <var_escapemark:EscapeMark> */
var28 = var_escapemark->attrs[COLOR_scope__EscapeMark___continue_mark].val; /* _continue_mark on <var_escapemark:EscapeMark> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline scope#AForExpr#continue_mark= (self,var26) on <self:AForExpr> */
self->attrs[COLOR_scope__AForExpr___continue_mark].val = var26; /* _continue_mark on <self:AForExpr> */
RET_LABEL29:(void)0;
}
}
{
{ /* Inline parser_nodes#AForExpr#n_block (self) on <self:AForExpr> */
var32 = self->attrs[COLOR_parser_nodes__AForExpr___n_block].val; /* _n_block on <self:AForExpr> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
scope__ScopeVisitor__enter_visit_block(var_v, var30, var_escapemark); /* Direct call scope#ScopeVisitor#enter_visit_block on <var_v:ScopeVisitor>*/
}
{
scope__ScopeVisitor__shift_scope(var_v); /* Direct call scope#ScopeVisitor#shift_scope on <var_v:ScopeVisitor>*/
}
RET_LABEL:;
}
/* method scope#AForExpr#accept_scope_visitor for (self: Object, ScopeVisitor) */
void VIRTUAL_scope__AForExpr__accept_scope_visitor(val* self, val* p0) {
scope__AForExpr__accept_scope_visitor(self, p0); /* Direct call scope#AForExpr#accept_scope_visitor on <self:Object(AForExpr)>*/
RET_LABEL:;
}
/* method scope#AVarFormExpr#variable for (self: AVarFormExpr): nullable Variable */
val* scope__AVarFormExpr__variable(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
var1 = self->attrs[COLOR_scope__AVarFormExpr___variable].val; /* _variable on <self:AVarFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AVarFormExpr#variable for (self: Object): nullable Variable */
val* VIRTUAL_scope__AVarFormExpr__variable(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
val* var3 /* : nullable Variable */;
{ /* Inline scope#AVarFormExpr#variable (self) on <self:Object(AVarFormExpr)> */
var3 = self->attrs[COLOR_scope__AVarFormExpr___variable].val; /* _variable on <self:Object(AVarFormExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AVarFormExpr#variable= for (self: AVarFormExpr, nullable Variable) */
void scope__AVarFormExpr__variable_61d(val* self, val* p0) {
self->attrs[COLOR_scope__AVarFormExpr___variable].val = p0; /* _variable on <self:AVarFormExpr> */
RET_LABEL:;
}
/* method scope#AVarFormExpr#variable= for (self: Object, nullable Variable) */
void VIRTUAL_scope__AVarFormExpr__variable_61d(val* self, val* p0) {
{ /* Inline scope#AVarFormExpr#variable= (self,p0) on <self:Object(AVarFormExpr)> */
self->attrs[COLOR_scope__AVarFormExpr___variable].val = p0; /* _variable on <self:Object(AVarFormExpr)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method scope#ACallFormExpr#accept_scope_visitor for (self: ACallFormExpr, ScopeVisitor) */
void scope__ACallFormExpr__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : TId */;
val* var6 /* : TId */;
val* var7 /* : String */;
val* var_name /* var name: String */;
val* var8 /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
val* var9 /* : null */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : AExprs */;
val* var19 /* : AExprs */;
val* var20 /* : ANodes[AExpr] */;
val* var22 /* : ANodes[AExpr] */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var_ /* var : Bool */;
val* var25 /* : AExprs */;
val* var27 /* : AExprs */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
static val* varonce;
val* var31 /* : String */;
char* var32 /* : NativeString */;
long var33 /* : Int */;
val* var34 /* : FlatString */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
long var38 /* : Int */;
val* var39 /* : FlatString */;
val* var40 /* : Array[Object] */;
long var41 /* : Int */;
val* var42 /* : NativeArray[Object] */;
val* var43 /* : String */;
val* var44 /* : AVarFormExpr */;
val* var_n /* var n: AExpr */;
var_v = p0;
{
{ /* Inline parser_nodes#ASendExpr#n_expr (self) on <self:ACallFormExpr> */
var2 = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ACallFormExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1466);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
/* <var:AExpr> isa AImplicitSelfExpr */
cltype = type_parser_nodes__AImplicitSelfExpr.color;
idtype = type_parser_nodes__AImplicitSelfExpr.id;
if(cltype >= var->type->table_size) {
var3 = 0;
} else {
var3 = var->type->type_table[cltype] == idtype;
}
if (var3){
{
{ /* Inline parser_nodes#ACallFormExpr#n_id (self) on <self:ACallFormExpr> */
var6 = self->attrs[COLOR_parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:ACallFormExpr> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1644);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = lexer_work__Token__text(var4);
}
var_name = var7;
{
var8 = scope__ScopeVisitor__search_variable(var_v, var_name);
}
var_variable = var8;
var9 = NULL;
if (var_variable == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_variable,var9) on <var_variable:nullable Variable> */
var_other = var9;
{
var14 = ((short int (*)(val*, val*))(var_variable->class->vft[COLOR_kernel__Object___61d_61d]))(var_variable, var_other) /* == on <var_variable:nullable Variable(Variable)>*/;
var13 = var14;
}
var15 = !var13;
var11 = var15;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
if (var10){
{
{ /* Inline parser_nodes#ACallFormExpr#n_args (self) on <self:ACallFormExpr> */
var19 = self->attrs[COLOR_parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallFormExpr> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1647);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var17) on <var17:AExprs> */
var22 = var17->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var17:AExprs> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1946);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = parser_nodes__ANodes__is_empty(var20);
}
var24 = !var23;
var_ = var24;
if (var24){
var16 = var_;
} else {
{
{ /* Inline parser_nodes#ACallFormExpr#n_args (self) on <self:ACallFormExpr> */
var27 = self->attrs[COLOR_parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallFormExpr> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1647);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
/* <var25:AExprs> isa AParExprs */
cltype29 = type_parser_nodes__AParExprs.color;
idtype30 = type_parser_nodes__AParExprs.id;
if(cltype29 >= var25->type->table_size) {
var28 = 0;
} else {
var28 = var25->type->type_table[cltype29] == idtype30;
}
var16 = var28;
}
if (var16){
if (varonce) {
var31 = varonce;
} else {
var32 = "Error: ";
var33 = 7;
var34 = string__NativeString__to_s_with_length(var32, var33);
var31 = var34;
varonce = var31;
}
if (varonce35) {
var36 = varonce35;
} else {
var37 = " is variable, not a function.";
var38 = 29;
var39 = string__NativeString__to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
var40 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var40 = array_instance Array[Object] */
var41 = 3;
var42 = NEW_array__NativeArray(var41, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var42)->values[0] = (val*) var31;
((struct instance_array__NativeArray*)var42)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var42)->values[2] = (val*) var36;
{
((void (*)(val*, val*, long))(var40->class->vft[COLOR_array__Array__with_native]))(var40, var42, var41) /* with_native on <var40:Array[Object]>*/;
}
}
{
var43 = ((val* (*)(val*))(var40->class->vft[COLOR_string__Object__to_s]))(var40) /* to_s on <var40:Array[Object]>*/;
}
{
scope__ScopeVisitor__error(var_v, self, var43); /* Direct call scope#ScopeVisitor#error on <var_v:ScopeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
var44 = ((val* (*)(val*, val*))(self->class->vft[COLOR_scope__ACallFormExpr__variable_create]))(self, var_variable) /* variable_create on <self:ACallFormExpr>*/;
}
var_n = var44;
{
{ /* Inline scope#AVarFormExpr#variable= (var_n,var_variable) on <var_n:AExpr(AVarFormExpr)> */
var_n->attrs[COLOR_scope__AVarFormExpr___variable].val = var_variable; /* _variable on <var_n:AExpr(AVarFormExpr)> */
RET_LABEL45:(void)0;
}
}
{
parser_nodes__Prod__replace_with(self, var_n); /* Direct call parser_nodes#Prod#replace_with on <self:ACallFormExpr>*/
}
{
scope__ANode__accept_scope_visitor(var_n, var_v); /* Direct call scope#ANode#accept_scope_visitor on <var_n:AExpr(AVarFormExpr)>*/
}
goto RET_LABEL;
} else {
}
} else {
}
{
((void (*)(val*, val*))(self->class->vft[COLOR_scope__ACallFormExpr__accept_scope_visitor]))(self, p0) /* accept_scope_visitor on <self:ACallFormExpr>*/;
}
RET_LABEL:;
}
/* method scope#ACallFormExpr#accept_scope_visitor for (self: Object, ScopeVisitor) */
void VIRTUAL_scope__ACallFormExpr__accept_scope_visitor(val* self, val* p0) {
scope__ACallFormExpr__accept_scope_visitor(self, p0); /* Direct call scope#ACallFormExpr#accept_scope_visitor on <self:Object(ACallFormExpr)>*/
RET_LABEL:;
}
/* method scope#ACallExpr#variable_create for (self: ACallExpr, Variable): AVarFormExpr */
val* scope__ACallExpr__variable_create(val* self, val* p0) {
val* var /* : AVarFormExpr */;
val* var_variable /* var variable: Variable */;
short int var1 /* : Bool */;
val* var3 /* : AVarExpr */;
val* var4 /* : TId */;
val* var6 /* : TId */;
var_variable = p0;
var1 = 0;
{
{ /* Inline scope#Variable#warn_unread= (var_variable,var1) on <var_variable:Variable> */
var_variable->attrs[COLOR_scope__Variable___warn_unread].s = var1; /* _warn_unread on <var_variable:Variable> */
RET_LABEL2:(void)0;
}
}
var3 = NEW_parser_nodes__AVarExpr(&type_parser_nodes__AVarExpr);
{
{ /* Inline parser_nodes#ACallFormExpr#n_id (self) on <self:ACallExpr> */
var6 = self->attrs[COLOR_parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:ACallExpr> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1644);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
parser_prod__AVarExpr__init_avarexpr(var3, var4); /* Direct call parser_prod#AVarExpr#init_avarexpr on <var3:AVarExpr>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method scope#ACallExpr#variable_create for (self: Object, Variable): AVarFormExpr */
val* VIRTUAL_scope__ACallExpr__variable_create(val* self, val* p0) {
val* var /* : AVarFormExpr */;
val* var1 /* : AVarFormExpr */;
var1 = scope__ACallExpr__variable_create(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ACallAssignExpr#variable_create for (self: ACallAssignExpr, Variable): AVarFormExpr */
val* scope__ACallAssignExpr__variable_create(val* self, val* p0) {
val* var /* : AVarFormExpr */;
val* var_variable /* var variable: Variable */;
val* var1 /* : AVarAssignExpr */;
val* var2 /* : TId */;
val* var4 /* : TId */;
val* var5 /* : TAssign */;
val* var7 /* : TAssign */;
val* var8 /* : AExpr */;
val* var10 /* : AExpr */;
var_variable = p0;
var1 = NEW_parser_nodes__AVarAssignExpr(&type_parser_nodes__AVarAssignExpr);
{
{ /* Inline parser_nodes#ACallFormExpr#n_id (self) on <self:ACallAssignExpr> */
var4 = self->attrs[COLOR_parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:ACallAssignExpr> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1644);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline parser_nodes#AAssignFormExpr#n_assign (self) on <self:ACallAssignExpr> */
var7 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:ACallAssignExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1444);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline parser_nodes#AAssignFormExpr#n_value (self) on <self:ACallAssignExpr> */
var10 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:ACallAssignExpr> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1445);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
parser_prod__AVarAssignExpr__init_avarassignexpr(var1, var2, var5, var8); /* Direct call parser_prod#AVarAssignExpr#init_avarassignexpr on <var1:AVarAssignExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method scope#ACallAssignExpr#variable_create for (self: Object, Variable): AVarFormExpr */
val* VIRTUAL_scope__ACallAssignExpr__variable_create(val* self, val* p0) {
val* var /* : AVarFormExpr */;
val* var1 /* : AVarFormExpr */;
var1 = scope__ACallAssignExpr__variable_create(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ACallReassignExpr#variable_create for (self: ACallReassignExpr, Variable): AVarFormExpr */
val* scope__ACallReassignExpr__variable_create(val* self, val* p0) {
val* var /* : AVarFormExpr */;
val* var_variable /* var variable: Variable */;
short int var1 /* : Bool */;
val* var3 /* : AVarReassignExpr */;
val* var4 /* : TId */;
val* var6 /* : TId */;
val* var7 /* : AAssignOp */;
val* var9 /* : AAssignOp */;
val* var10 /* : AExpr */;
val* var12 /* : AExpr */;
var_variable = p0;
var1 = 0;
{
{ /* Inline scope#Variable#warn_unread= (var_variable,var1) on <var_variable:Variable> */
var_variable->attrs[COLOR_scope__Variable___warn_unread].s = var1; /* _warn_unread on <var_variable:Variable> */
RET_LABEL2:(void)0;
}
}
var3 = NEW_parser_nodes__AVarReassignExpr(&type_parser_nodes__AVarReassignExpr);
{
{ /* Inline parser_nodes#ACallFormExpr#n_id (self) on <self:ACallReassignExpr> */
var6 = self->attrs[COLOR_parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:ACallReassignExpr> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1644);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline parser_nodes#AReassignFormExpr#n_assign_op (self) on <self:ACallReassignExpr> */
var9 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:ACallReassignExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1451);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline parser_nodes#AReassignFormExpr#n_value (self) on <self:ACallReassignExpr> */
var12 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:ACallReassignExpr> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1452);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
parser_prod__AVarReassignExpr__init_avarreassignexpr(var3, var4, var7, var10); /* Direct call parser_prod#AVarReassignExpr#init_avarreassignexpr on <var3:AVarReassignExpr>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method scope#ACallReassignExpr#variable_create for (self: Object, Variable): AVarFormExpr */
val* VIRTUAL_scope__ACallReassignExpr__variable_create(val* self, val* p0) {
val* var /* : AVarFormExpr */;
val* var1 /* : AVarFormExpr */;
var1 = scope__ACallReassignExpr__variable_create(self, p0);
var = var1;
RET_LABEL:;
return var;
}
