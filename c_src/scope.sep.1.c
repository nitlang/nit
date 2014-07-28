#include "scope.sep.0.h"
/* method scope#ToolContext#scope_phase for (self: ToolContext): Phase */
val* scope__ToolContext__scope_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_scope__ToolContext___scope_phase].val; /* _scope_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scope_phase");
PRINT_ERROR(" (%s:%d)\n", "src/scope.nit", 25);
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
PRINT_ERROR(" (%s:%d)\n", "src/scope.nit", 25);
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
PRINT_ERROR(" (%s:%d)\n", "src/phase.nit", 145);
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
PRINT_ERROR(" (%s:%d)\n", "src/scope.nit", 36);
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
PRINT_ERROR(" (%s:%d)\n", "src/scope.nit", 36);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
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
PRINT_ERROR(" (%s:%d)\n", "src/scope.nit", 36);
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
/* method scope#Variable#init for (self: Variable, String) */
void scope__Variable__init(val* self, val* p0) {
self->attrs[COLOR_scope__Variable___name].val = p0; /* _name on <self:Variable> */
RET_LABEL:;
}
/* method scope#Variable#init for (self: Object, String) */
void VIRTUAL_scope__Variable__init(val* self, val* p0) {
{ /* Inline scope#Variable#init (self,p0) on <self:Object(Variable)> */
self->attrs[COLOR_scope__Variable___name].val = p0; /* _name on <self:Object(Variable)> */
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
/* method scope#EscapeMark#for_loop for (self: EscapeMark): Bool */
short int scope__EscapeMark__for_loop(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_scope__EscapeMark___for_loop].s; /* _for_loop on <self:EscapeMark> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#EscapeMark#for_loop for (self: Object): Bool */
short int VIRTUAL_scope__EscapeMark__for_loop(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline scope#EscapeMark#for_loop (self) on <self:Object(EscapeMark)> */
var3 = self->attrs[COLOR_scope__EscapeMark___for_loop].s; /* _for_loop on <self:Object(EscapeMark)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#EscapeMark#continues for (self: EscapeMark): Array[AContinueExpr] */
val* scope__EscapeMark__continues(val* self) {
val* var /* : Array[AContinueExpr] */;
val* var1 /* : Array[AContinueExpr] */;
var1 = self->attrs[COLOR_scope__EscapeMark___continues].val; /* _continues on <self:EscapeMark> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _continues");
PRINT_ERROR(" (%s:%d)\n", "src/scope.nit", 53);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#EscapeMark#continues for (self: Object): Array[AContinueExpr] */
val* VIRTUAL_scope__EscapeMark__continues(val* self) {
val* var /* : Array[AContinueExpr] */;
val* var1 /* : Array[AContinueExpr] */;
val* var3 /* : Array[AContinueExpr] */;
{ /* Inline scope#EscapeMark#continues (self) on <self:Object(EscapeMark)> */
var3 = self->attrs[COLOR_scope__EscapeMark___continues].val; /* _continues on <self:Object(EscapeMark)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _continues");
PRINT_ERROR(" (%s:%d)\n", "src/scope.nit", 53);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#EscapeMark#breaks for (self: EscapeMark): Array[ABreakExpr] */
val* scope__EscapeMark__breaks(val* self) {
val* var /* : Array[ABreakExpr] */;
val* var1 /* : Array[ABreakExpr] */;
var1 = self->attrs[COLOR_scope__EscapeMark___breaks].val; /* _breaks on <self:EscapeMark> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _breaks");
PRINT_ERROR(" (%s:%d)\n", "src/scope.nit", 56);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#EscapeMark#breaks for (self: Object): Array[ABreakExpr] */
val* VIRTUAL_scope__EscapeMark__breaks(val* self) {
val* var /* : Array[ABreakExpr] */;
val* var1 /* : Array[ABreakExpr] */;
val* var3 /* : Array[ABreakExpr] */;
{ /* Inline scope#EscapeMark#breaks (self) on <self:Object(EscapeMark)> */
var3 = self->attrs[COLOR_scope__EscapeMark___breaks].val; /* _breaks on <self:Object(EscapeMark)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _breaks");
PRINT_ERROR(" (%s:%d)\n", "src/scope.nit", 56);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#EscapeMark#init for (self: EscapeMark, nullable String, Bool) */
void scope__EscapeMark__init(val* self, val* p0, short int p1) {
self->attrs[COLOR_scope__EscapeMark___name].val = p0; /* _name on <self:EscapeMark> */
self->attrs[COLOR_scope__EscapeMark___for_loop].s = p1; /* _for_loop on <self:EscapeMark> */
RET_LABEL:;
}
/* method scope#EscapeMark#init for (self: Object, nullable String, Bool) */
void VIRTUAL_scope__EscapeMark__init(val* self, val* p0, short int p1) {
{ /* Inline scope#EscapeMark#init (self,p0,p1) on <self:Object(EscapeMark)> */
self->attrs[COLOR_scope__EscapeMark___name].val = p0; /* _name on <self:Object(EscapeMark)> */
self->attrs[COLOR_scope__EscapeMark___for_loop].s = p1; /* _for_loop on <self:Object(EscapeMark)> */
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
PRINT_ERROR(" (%s:%d)\n", "src/scope.nit", 68);
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
PRINT_ERROR(" (%s:%d)\n", "src/scope.nit", 68);
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
PRINT_ERROR(" (%s:%d)\n", "src/scope.nit", 71);
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
PRINT_ERROR(" (%s:%d)\n", "src/scope.nit", 71);
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
val* var4 /* : List[Scope] */;
val* var5 /* : Scope */;
{
{ /* Inline parser_nodes#Visitor#init (self) on <self:ScopeVisitor> */
RET_LABEL1:(void)0;
}
}
var_toolcontext = p0;
{
{ /* Inline scope#ScopeVisitor#toolcontext= (self,var_toolcontext) on <self:ScopeVisitor> */
self->attrs[COLOR_scope__ScopeVisitor___toolcontext].val = var_toolcontext; /* _toolcontext on <self:ScopeVisitor> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline scope#ScopeVisitor#scopes (self) on <self:ScopeVisitor> */
var4 = self->attrs[COLOR_scope__ScopeVisitor___scopes].val; /* _scopes on <self:ScopeVisitor> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", "src/scope.nit", 79);
show_backtrace(1);
}
var = var4;
RET_LABEL3:(void)0;
}
}
var5 = NEW_scope__Scope(&type_scope__Scope);
{
{ /* Inline scope#Scope#init (var5) on <var5:Scope> */
RET_LABEL6:(void)0;
}
}
{
abstract_collection__Sequence__add(var, var5); /* Direct call abstract_collection#Sequence#add on <var:List[Scope]>*/
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
PRINT_ERROR(" (%s:%d)\n", "src/scope.nit", 79);
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
PRINT_ERROR(" (%s:%d)\n", "src/scope.nit", 79);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
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
short int var33 /* : Bool */;
var_node = p0;
var_variable = p1;
{
{ /* Inline scope#Variable#name (var_variable) on <var_variable:Variable> */
var3 = var_variable->attrs[COLOR_scope__Variable___name].val; /* _name on <var_variable:Variable> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/scope.nit", 36);
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
PRINT_ERROR(" (%s:%d)\n", "src/scope.nit", 79);
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
PRINT_ERROR(" (%s:%d)\n", "src/scope.nit", 210);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
hash_collection__HashMap___91d_93d_61d(var30, var_name, var_variable); /* Direct call hash_collection#HashMap#[]= on <var30:HashMap[String, Variable]>*/
}
var33 = 1;
var = var33;
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
val* var4 /* : ListIterator[nullable Object] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_scope /* var scope: Scope */;
val* var7 /* : nullable Variable */;
val* var_res /* var res: nullable Variable */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : null */;
var_name = p0;
{
{ /* Inline scope#ScopeVisitor#scopes (self) on <self:ScopeVisitor> */
var3 = self->attrs[COLOR_scope__ScopeVisitor___scopes].val; /* _scopes on <self:ScopeVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", "src/scope.nit", 79);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = list__List__iterator(var1);
}
for(;;) {
{
var5 = list__ListIterator__is_ok(var4);
}
if(!var5) break;
{
var6 = list__ListIterator__item(var4);
}
var_scope = var6;
{
var7 = scope__Scope__get_variable(var_scope, var_name);
}
var_res = var7;
var8 = NULL;
if (var_res == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var8) on <var_res:nullable Variable> */
var_other = var8;
{
var13 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable Variable(Variable)>*/;
var12 = var13;
}
var14 = !var12;
var10 = var14;
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
CONTINUE_label: (void)0;
{
list__ListIterator__next(var4); /* Direct call list#ListIterator#next on <var4:ListIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
var15 = NULL;
var = var15;
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
val* var10 /* : List[Scope] */;
val* var12 /* : List[Scope] */;
val* var13 /* : List[Scope] */;
val* var15 /* : List[Scope] */;
val* var16 /* : nullable Object */;
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
{ /* Inline scope#Scope#init (var7) on <var7:Scope> */
RET_LABEL8:(void)0;
}
}
var_scope = var7;
{
{ /* Inline scope#Scope#escapemark= (var_scope,var_escapemark) on <var_scope:Scope> */
var_scope->attrs[COLOR_scope__Scope___escapemark].val = var_escapemark; /* _escapemark on <var_scope:Scope> */
RET_LABEL9:(void)0;
}
}
{
{ /* Inline scope#ScopeVisitor#scopes (self) on <self:ScopeVisitor> */
var12 = self->attrs[COLOR_scope__ScopeVisitor___scopes].val; /* _scopes on <self:ScopeVisitor> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", "src/scope.nit", 79);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
list__List__unshift(var10, var_scope); /* Direct call list#List#unshift on <var10:List[Scope]>*/
}
{
parser_nodes__Visitor__enter_visit(self, var_node); /* Direct call parser_nodes#Visitor#enter_visit on <self:ScopeVisitor>*/
}
{
{ /* Inline scope#ScopeVisitor#scopes (self) on <self:ScopeVisitor> */
var15 = self->attrs[COLOR_scope__ScopeVisitor___scopes].val; /* _scopes on <self:ScopeVisitor> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", "src/scope.nit", 79);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = list__List__shift(var13);
}
var16;
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
val* var4 /* : ListIterator[nullable Object] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_scope /* var scope: Scope */;
val* var7 /* : nullable EscapeMark */;
val* var9 /* : nullable EscapeMark */;
val* var_res /* var res: nullable EscapeMark */;
short int var10 /* : Bool */;
val* var11 /* : null */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var_ /* var : Bool */;
val* var18 /* : nullable String */;
val* var20 /* : nullable String */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var23 /* : null */;
var_name = p0;
{
{ /* Inline scope#ScopeVisitor#scopes (self) on <self:ScopeVisitor> */
var3 = self->attrs[COLOR_scope__ScopeVisitor___scopes].val; /* _scopes on <self:ScopeVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", "src/scope.nit", 79);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = list__List__iterator(var1);
}
for(;;) {
{
var5 = list__ListIterator__is_ok(var4);
}
if(!var5) break;
{
var6 = list__ListIterator__item(var4);
}
var_scope = var6;
{
{ /* Inline scope#Scope#escapemark (var_scope) on <var_scope:Scope> */
var9 = var_scope->attrs[COLOR_scope__Scope___escapemark].val; /* _escapemark on <var_scope:Scope> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_res = var7;
var11 = NULL;
if (var_res == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var11) on <var_res:nullable EscapeMark> */
var_other = var11;
{
var16 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable EscapeMark(EscapeMark)>*/;
var15 = var16;
}
var17 = !var15;
var13 = var17;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
var_ = var12;
if (var12){
{
{ /* Inline scope#EscapeMark#name (var_res) on <var_res:nullable EscapeMark(EscapeMark)> */
var20 = var_res->attrs[COLOR_scope__EscapeMark___name].val; /* _name on <var_res:nullable EscapeMark(EscapeMark)> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (var18 == NULL) {
var21 = 0; /* <var_name:String> cannot be null */
} else {
var22 = string__FlatString___61d_61d(var18, var_name);
var21 = var22;
}
var10 = var21;
} else {
var10 = var_;
}
if (var10){
var = var_res;
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
{
list__ListIterator__next(var4); /* Direct call list#ListIterator#next on <var4:ListIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
var23 = NULL;
var = var23;
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
val* var_nid /* var nid: nullable TId */;
val* var9 /* : null */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_other13 /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
static val* varonce;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : FlatString */;
val* var21 /* : nullable EscapeMark */;
val* var_res /* var res: nullable EscapeMark */;
val* var22 /* : null */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : FlatString */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : FlatString */;
val* var_name /* var name: nullable String */;
val* var39 /* : String */;
val* var40 /* : nullable EscapeMark */;
val* var_found /* var found: nullable EscapeMark */;
val* var41 /* : null */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
long var51 /* : Int */;
val* var52 /* : FlatString */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
long var56 /* : Int */;
val* var57 /* : FlatString */;
val* var58 /* : Array[Object] */;
long var59 /* : Int */;
val* var60 /* : NativeArray[Object] */;
val* var61 /* : String */;
val* var62 /* : null */;
val* var63 /* : EscapeMark */;
val* var_res65 /* var res: EscapeMark */;
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
var8 = parser_nodes__ALabel__n_id(var_nlabel);
}
var_nid = var8;
var9 = NULL;
if (var_nid == NULL) {
var10 = 1; /* is null */
} else {
var10 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nid,var9) on <var_nid:nullable TId> */
var_other13 = var9;
{
{ /* Inline kernel#Object#is_same_instance (var_nid,var_other13) on <var_nid:nullable TId(TId)> */
var16 = var_nid == var_other13;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
if (var10){
if (varonce) {
var17 = varonce;
} else {
var18 = "";
var19 = 0;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce = var17;
}
{
var21 = scope__ScopeVisitor__search_label(self, var17);
}
var_res = var21;
var22 = NULL;
if (var_res == NULL) {
var23 = 0; /* is null */
} else {
var23 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var22) on <var_res:nullable EscapeMark> */
var_other = var22;
{
var27 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable EscapeMark(EscapeMark)>*/;
var26 = var27;
}
var28 = !var26;
var24 = var28;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
var23 = var24;
}
if (var23){
if (varonce29) {
var30 = varonce29;
} else {
var31 = "Syntax error: anonymous label already defined.";
var32 = 46;
var33 = string__NativeString__to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
{
scope__ScopeVisitor__error(self, var_nlabel, var30); /* Direct call scope#ScopeVisitor#error on <self:ScopeVisitor>*/
}
} else {
}
if (varonce34) {
var35 = varonce34;
} else {
var36 = "";
var37 = 0;
var38 = string__NativeString__to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
var_name = var35;
} else {
{
var39 = lexer_work__Token__text(var_nid);
}
var_name = var39;
{
var40 = scope__ScopeVisitor__search_label(self, var_name);
}
var_found = var40;
var41 = NULL;
if (var_found == NULL) {
var42 = 0; /* is null */
} else {
var42 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_found,var41) on <var_found:nullable EscapeMark> */
var_other = var41;
{
var46 = ((short int (*)(val*, val*))(var_found->class->vft[COLOR_kernel__Object___61d_61d]))(var_found, var_other) /* == on <var_found:nullable EscapeMark(EscapeMark)>*/;
var45 = var46;
}
var47 = !var45;
var43 = var47;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
var42 = var43;
}
if (var42){
if (varonce48) {
var49 = varonce48;
} else {
var50 = "Syntax error: label ";
var51 = 20;
var52 = string__NativeString__to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
if (varonce53) {
var54 = varonce53;
} else {
var55 = " already defined.";
var56 = 17;
var57 = string__NativeString__to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
var58 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var58 = array_instance Array[Object] */
var59 = 3;
var60 = NEW_array__NativeArray(var59, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var60)->values[0] = (val*) var49;
((struct instance_array__NativeArray*)var60)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var60)->values[2] = (val*) var54;
{
((void (*)(val*, val*, long))(var58->class->vft[COLOR_array__Array__with_native]))(var58, var60, var59) /* with_native on <var58:Array[Object]>*/;
}
}
{
var61 = ((val* (*)(val*))(var58->class->vft[COLOR_string__Object__to_s]))(var58) /* to_s on <var58:Array[Object]>*/;
}
{
scope__ScopeVisitor__error(self, var_nlabel, var61); /* Direct call scope#ScopeVisitor#error on <self:ScopeVisitor>*/
}
} else {
}
}
} else {
var62 = NULL;
var_name = var62;
}
var63 = NEW_scope__EscapeMark(&type_scope__EscapeMark);
{
{ /* Inline scope#EscapeMark#init (var63,var_name,var_for_loop) on <var63:EscapeMark> */
var63->attrs[COLOR_scope__EscapeMark___name].val = var_name; /* _name on <var63:EscapeMark> */
var63->attrs[COLOR_scope__EscapeMark___for_loop].s = var_for_loop; /* _for_loop on <var63:EscapeMark> */
RET_LABEL64:(void)0;
}
}
var_res65 = var63;
var = var_res65;
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
val* var_nid /* var nid: nullable TId */;
val* var9 /* : null */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_other13 /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
static val* varonce;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : FlatString */;
val* var21 /* : nullable EscapeMark */;
val* var_res /* var res: nullable EscapeMark */;
val* var22 /* : null */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : FlatString */;
val* var34 /* : null */;
val* var35 /* : String */;
val* var_name /* var name: String */;
val* var36 /* : nullable EscapeMark */;
val* var_res37 /* var res: nullable EscapeMark */;
val* var38 /* : null */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
long var48 /* : Int */;
val* var49 /* : FlatString */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : FlatString */;
val* var55 /* : Array[Object] */;
long var56 /* : Int */;
val* var57 /* : NativeArray[Object] */;
val* var58 /* : String */;
val* var59 /* : null */;
val* var60 /* : List[Scope] */;
val* var62 /* : List[Scope] */;
val* var63 /* : ListIterator[nullable Object] */;
short int var64 /* : Bool */;
val* var65 /* : nullable Object */;
val* var_scope /* var scope: Scope */;
val* var66 /* : nullable EscapeMark */;
val* var68 /* : nullable EscapeMark */;
val* var_res69 /* var res: nullable EscapeMark */;
val* var70 /* : null */;
short int var71 /* : Bool */;
short int var72 /* : Bool */;
short int var74 /* : Bool */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
long var80 /* : Int */;
val* var81 /* : FlatString */;
val* var82 /* : null */;
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
var8 = parser_nodes__ALabel__n_id(var_nlabel);
}
var_nid = var8;
var9 = NULL;
if (var_nid == NULL) {
var10 = 1; /* is null */
} else {
var10 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nid,var9) on <var_nid:nullable TId> */
var_other13 = var9;
{
{ /* Inline kernel#Object#is_same_instance (var_nid,var_other13) on <var_nid:nullable TId(TId)> */
var16 = var_nid == var_other13;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
if (var10){
if (varonce) {
var17 = varonce;
} else {
var18 = "";
var19 = 0;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce = var17;
}
{
var21 = scope__ScopeVisitor__search_label(self, var17);
}
var_res = var21;
var22 = NULL;
if (var_res == NULL) {
var23 = 1; /* is null */
} else {
var23 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res,var22) on <var_res:nullable EscapeMark> */
var_other13 = var22;
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other13) on <var_res:nullable EscapeMark(EscapeMark)> */
var28 = var_res == var_other13;
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
if (var23){
if (varonce29) {
var30 = varonce29;
} else {
var31 = "Syntax error: invalid anonymous label.";
var32 = 38;
var33 = string__NativeString__to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
{
scope__ScopeVisitor__error(self, var_nlabel, var30); /* Direct call scope#ScopeVisitor#error on <self:ScopeVisitor>*/
}
var34 = NULL;
var = var34;
goto RET_LABEL;
} else {
}
var = var_res;
goto RET_LABEL;
} else {
}
{
var35 = lexer_work__Token__text(var_nid);
}
var_name = var35;
{
var36 = scope__ScopeVisitor__search_label(self, var_name);
}
var_res37 = var36;
var38 = NULL;
if (var_res37 == NULL) {
var39 = 1; /* is null */
} else {
var39 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res37,var38) on <var_res37:nullable EscapeMark> */
var_other13 = var38;
{
{ /* Inline kernel#Object#is_same_instance (var_res37,var_other13) on <var_res37:nullable EscapeMark(EscapeMark)> */
var44 = var_res37 == var_other13;
var42 = var44;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
var40 = var42;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
var39 = var40;
}
if (var39){
if (varonce45) {
var46 = varonce45;
} else {
var47 = "Syntax error: invalid label ";
var48 = 28;
var49 = string__NativeString__to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
if (varonce50) {
var51 = varonce50;
} else {
var52 = ".";
var53 = 1;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
var55 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var55 = array_instance Array[Object] */
var56 = 3;
var57 = NEW_array__NativeArray(var56, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var57)->values[0] = (val*) var46;
((struct instance_array__NativeArray*)var57)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var57)->values[2] = (val*) var51;
{
((void (*)(val*, val*, long))(var55->class->vft[COLOR_array__Array__with_native]))(var55, var57, var56) /* with_native on <var55:Array[Object]>*/;
}
}
{
var58 = ((val* (*)(val*))(var55->class->vft[COLOR_string__Object__to_s]))(var55) /* to_s on <var55:Array[Object]>*/;
}
{
scope__ScopeVisitor__error(self, var_nlabel, var58); /* Direct call scope#ScopeVisitor#error on <self:ScopeVisitor>*/
}
var59 = NULL;
var = var59;
goto RET_LABEL;
} else {
}
var = var_res37;
goto RET_LABEL;
} else {
{
{ /* Inline scope#ScopeVisitor#scopes (self) on <self:ScopeVisitor> */
var62 = self->attrs[COLOR_scope__ScopeVisitor___scopes].val; /* _scopes on <self:ScopeVisitor> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", "src/scope.nit", 79);
show_backtrace(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
var63 = list__List__iterator(var60);
}
for(;;) {
{
var64 = list__ListIterator__is_ok(var63);
}
if(!var64) break;
{
var65 = list__ListIterator__item(var63);
}
var_scope = var65;
{
{ /* Inline scope#Scope#escapemark (var_scope) on <var_scope:Scope> */
var68 = var_scope->attrs[COLOR_scope__Scope___escapemark].val; /* _escapemark on <var_scope:Scope> */
var66 = var68;
RET_LABEL67:(void)0;
}
}
var_res69 = var66;
var70 = NULL;
if (var_res69 == NULL) {
var71 = 0; /* is null */
} else {
var71 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res69,var70) on <var_res69:nullable EscapeMark> */
var_other = var70;
{
var75 = ((short int (*)(val*, val*))(var_res69->class->vft[COLOR_kernel__Object___61d_61d]))(var_res69, var_other) /* == on <var_res69:nullable EscapeMark(EscapeMark)>*/;
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
var = var_res69;
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
{
list__ListIterator__next(var63); /* Direct call list#ListIterator#next on <var63:ListIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
if (varonce77) {
var78 = varonce77;
} else {
var79 = "Syntax Error: \'break\' statment outside block.";
var80 = 45;
var81 = string__NativeString__to_s_with_length(var79, var80);
var78 = var81;
varonce77 = var78;
}
{
scope__ScopeVisitor__error(self, var_node, var78); /* Direct call scope#ScopeVisitor#error on <self:ScopeVisitor>*/
}
var82 = NULL;
var = var82;
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
PRINT_ERROR(" (%s:%d)\n", "src/scope.nit", 68);
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
PRINT_ERROR(" (%s:%d)\n", "src/scope.nit", 210);
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
PRINT_ERROR(" (%s:%d)\n", "src/scope.nit", 210);
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
PRINT_ERROR(" (%s:%d)\n", "src/scope.nit", 210);
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
PRINT_ERROR(" (%s:%d)\n", "src/scope.nit", 210);
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
/* method scope#Scope#init for (self: Scope) */
void scope__Scope__init(val* self) {
RET_LABEL:;
}
/* method scope#Scope#init for (self: Object) */
void VIRTUAL_scope__Scope__init(val* self) {
{ /* Inline scope#Scope#init (self) on <self:Object(Scope)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
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
val* var_nid /* var nid: TId */;
val* var1 /* : Variable */;
val* var2 /* : String */;
val* var_variable /* var variable: Variable */;
short int var4 /* : Bool */;
var_v = p0;
{
((void (*)(val*, val*))(self->class->vft[COLOR_scope__AParam__accept_scope_visitor]))(self, p0) /* accept_scope_visitor on <self:AParam>*/;
}
{
var = parser_nodes__AParam__n_id(self);
}
var_nid = var;
var1 = NEW_scope__Variable(&type_scope__Variable);
{
var2 = lexer_work__Token__text(var_nid);
}
{
{ /* Inline scope#Variable#init (var1,var2) on <var1:Variable> */
var1->attrs[COLOR_scope__Variable___name].val = var2; /* _name on <var1:Variable> */
RET_LABEL3:(void)0;
}
}
var_variable = var1;
{
var4 = scope__ScopeVisitor__register_variable(var_v, var_nid, var_variable);
}
var4;
{
{ /* Inline scope#AParam#variable= (self,var_variable) on <self:AParam> */
self->attrs[COLOR_scope__AParam___variable].val = var_variable; /* _variable on <self:AParam> */
RET_LABEL5:(void)0;
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
val* var_nid /* var nid: TId */;
val* var1 /* : Variable */;
val* var2 /* : String */;
val* var_variable /* var variable: Variable */;
short int var4 /* : Bool */;
var_v = p0;
{
((void (*)(val*, val*))(self->class->vft[COLOR_scope__AVardeclExpr__accept_scope_visitor]))(self, p0) /* accept_scope_visitor on <self:AVardeclExpr>*/;
}
{
var = parser_nodes__AVardeclExpr__n_id(self);
}
var_nid = var;
var1 = NEW_scope__Variable(&type_scope__Variable);
{
var2 = lexer_work__Token__text(var_nid);
}
{
{ /* Inline scope#Variable#init (var1,var2) on <var1:Variable> */
var1->attrs[COLOR_scope__Variable___name].val = var2; /* _name on <var1:Variable> */
RET_LABEL3:(void)0;
}
}
var_variable = var1;
{
var4 = scope__ScopeVisitor__register_variable(var_v, var_nid, var_variable);
}
var4;
{
{ /* Inline scope#AVardeclExpr#variable= (self,var_variable) on <self:AVardeclExpr> */
self->attrs[COLOR_scope__AVardeclExpr___variable].val = var_variable; /* _variable on <self:AVardeclExpr> */
RET_LABEL5:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", "src/scope.nit", 71);
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
/* method scope#AContinueExpr#escapemark for (self: AContinueExpr): nullable EscapeMark */
val* scope__AContinueExpr__escapemark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_scope__AContinueExpr___escapemark].val; /* _escapemark on <self:AContinueExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AContinueExpr#escapemark for (self: Object): nullable EscapeMark */
val* VIRTUAL_scope__AContinueExpr__escapemark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
val* var3 /* : nullable EscapeMark */;
{ /* Inline scope#AContinueExpr#escapemark (self) on <self:Object(AContinueExpr)> */
var3 = self->attrs[COLOR_scope__AContinueExpr___escapemark].val; /* _escapemark on <self:Object(AContinueExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AContinueExpr#escapemark= for (self: AContinueExpr, nullable EscapeMark) */
void scope__AContinueExpr__escapemark_61d(val* self, val* p0) {
self->attrs[COLOR_scope__AContinueExpr___escapemark].val = p0; /* _escapemark on <self:AContinueExpr> */
RET_LABEL:;
}
/* method scope#AContinueExpr#escapemark= for (self: Object, nullable EscapeMark) */
void VIRTUAL_scope__AContinueExpr__escapemark_61d(val* self, val* p0) {
{ /* Inline scope#AContinueExpr#escapemark= (self,p0) on <self:Object(AContinueExpr)> */
self->attrs[COLOR_scope__AContinueExpr___escapemark].val = p0; /* _escapemark on <self:Object(AContinueExpr)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method scope#AContinueExpr#accept_scope_visitor for (self: AContinueExpr, ScopeVisitor) */
void scope__AContinueExpr__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : nullable ALabel */;
val* var1 /* : nullable EscapeMark */;
val* var_escapemark /* var escapemark: nullable EscapeMark */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
static val* varonce;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : FlatString */;
val* var17 /* : Array[AContinueExpr] */;
val* var19 /* : Array[AContinueExpr] */;
var_v = p0;
{
((void (*)(val*, val*))(self->class->vft[COLOR_scope__AContinueExpr__accept_scope_visitor]))(self, p0) /* accept_scope_visitor on <self:AContinueExpr>*/;
}
{
var = parser_nodes__ALabelable__n_label(self);
}
{
var1 = scope__ScopeVisitor__get_escapemark(var_v, self, var);
}
var_escapemark = var1;
var2 = NULL;
if (var_escapemark == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_escapemark,var2) on <var_escapemark:nullable EscapeMark> */
var_other = var2;
{
{ /* Inline kernel#Object#is_same_instance (var_escapemark,var_other) on <var_escapemark:nullable EscapeMark(EscapeMark)> */
var8 = var_escapemark == var_other;
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
{
{ /* Inline scope#EscapeMark#for_loop (var_escapemark) on <var_escapemark:nullable EscapeMark(EscapeMark)> */
var11 = var_escapemark->attrs[COLOR_scope__EscapeMark___for_loop].s; /* _for_loop on <var_escapemark:nullable EscapeMark(EscapeMark)> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var12 = !var9;
if (var12){
if (varonce) {
var13 = varonce;
} else {
var14 = "Error: cannot \'continue\', only \'break\'.";
var15 = 39;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce = var13;
}
{
scope__ScopeVisitor__error(var_v, self, var13); /* Direct call scope#ScopeVisitor#error on <var_v:ScopeVisitor>*/
}
} else {
}
{
{ /* Inline scope#EscapeMark#continues (var_escapemark) on <var_escapemark:nullable EscapeMark(EscapeMark)> */
var19 = var_escapemark->attrs[COLOR_scope__EscapeMark___continues].val; /* _continues on <var_escapemark:nullable EscapeMark(EscapeMark)> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _continues");
PRINT_ERROR(" (%s:%d)\n", "src/scope.nit", 53);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
array__Array__add(var17, self); /* Direct call array#Array#add on <var17:Array[AContinueExpr]>*/
}
{
{ /* Inline scope#AContinueExpr#escapemark= (self,var_escapemark) on <self:AContinueExpr> */
self->attrs[COLOR_scope__AContinueExpr___escapemark].val = var_escapemark; /* _escapemark on <self:AContinueExpr> */
RET_LABEL20:(void)0;
}
}
RET_LABEL:;
}
/* method scope#AContinueExpr#accept_scope_visitor for (self: Object, ScopeVisitor) */
void VIRTUAL_scope__AContinueExpr__accept_scope_visitor(val* self, val* p0) {
scope__AContinueExpr__accept_scope_visitor(self, p0); /* Direct call scope#AContinueExpr#accept_scope_visitor on <self:Object(AContinueExpr)>*/
RET_LABEL:;
}
/* method scope#ABreakExpr#escapemark for (self: ABreakExpr): nullable EscapeMark */
val* scope__ABreakExpr__escapemark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_scope__ABreakExpr___escapemark].val; /* _escapemark on <self:ABreakExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ABreakExpr#escapemark for (self: Object): nullable EscapeMark */
val* VIRTUAL_scope__ABreakExpr__escapemark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
val* var3 /* : nullable EscapeMark */;
{ /* Inline scope#ABreakExpr#escapemark (self) on <self:Object(ABreakExpr)> */
var3 = self->attrs[COLOR_scope__ABreakExpr___escapemark].val; /* _escapemark on <self:Object(ABreakExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ABreakExpr#escapemark= for (self: ABreakExpr, nullable EscapeMark) */
void scope__ABreakExpr__escapemark_61d(val* self, val* p0) {
self->attrs[COLOR_scope__ABreakExpr___escapemark].val = p0; /* _escapemark on <self:ABreakExpr> */
RET_LABEL:;
}
/* method scope#ABreakExpr#escapemark= for (self: Object, nullable EscapeMark) */
void VIRTUAL_scope__ABreakExpr__escapemark_61d(val* self, val* p0) {
{ /* Inline scope#ABreakExpr#escapemark= (self,p0) on <self:Object(ABreakExpr)> */
self->attrs[COLOR_scope__ABreakExpr___escapemark].val = p0; /* _escapemark on <self:Object(ABreakExpr)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method scope#ABreakExpr#accept_scope_visitor for (self: ABreakExpr, ScopeVisitor) */
void scope__ABreakExpr__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : nullable ALabel */;
val* var1 /* : nullable EscapeMark */;
val* var_escapemark /* var escapemark: nullable EscapeMark */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : Array[ABreakExpr] */;
val* var11 /* : Array[ABreakExpr] */;
var_v = p0;
{
((void (*)(val*, val*))(self->class->vft[COLOR_scope__ABreakExpr__accept_scope_visitor]))(self, p0) /* accept_scope_visitor on <self:ABreakExpr>*/;
}
{
var = parser_nodes__ALabelable__n_label(self);
}
{
var1 = scope__ScopeVisitor__get_escapemark(var_v, self, var);
}
var_escapemark = var1;
var2 = NULL;
if (var_escapemark == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_escapemark,var2) on <var_escapemark:nullable EscapeMark> */
var_other = var2;
{
{ /* Inline kernel#Object#is_same_instance (var_escapemark,var_other) on <var_escapemark:nullable EscapeMark(EscapeMark)> */
var8 = var_escapemark == var_other;
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
{
{ /* Inline scope#EscapeMark#breaks (var_escapemark) on <var_escapemark:nullable EscapeMark(EscapeMark)> */
var11 = var_escapemark->attrs[COLOR_scope__EscapeMark___breaks].val; /* _breaks on <var_escapemark:nullable EscapeMark(EscapeMark)> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _breaks");
PRINT_ERROR(" (%s:%d)\n", "src/scope.nit", 56);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
array__Array__add(var9, self); /* Direct call array#Array#add on <var9:Array[ABreakExpr]>*/
}
{
{ /* Inline scope#ABreakExpr#escapemark= (self,var_escapemark) on <self:ABreakExpr> */
self->attrs[COLOR_scope__ABreakExpr___escapemark].val = var_escapemark; /* _escapemark on <self:ABreakExpr> */
RET_LABEL12:(void)0;
}
}
RET_LABEL:;
}
/* method scope#ABreakExpr#accept_scope_visitor for (self: Object, ScopeVisitor) */
void VIRTUAL_scope__ABreakExpr__accept_scope_visitor(val* self, val* p0) {
scope__ABreakExpr__accept_scope_visitor(self, p0); /* Direct call scope#ABreakExpr#accept_scope_visitor on <self:Object(ABreakExpr)>*/
RET_LABEL:;
}
/* method scope#ADoExpr#escapemark for (self: ADoExpr): nullable EscapeMark */
val* scope__ADoExpr__escapemark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_scope__ADoExpr___escapemark].val; /* _escapemark on <self:ADoExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ADoExpr#escapemark for (self: Object): nullable EscapeMark */
val* VIRTUAL_scope__ADoExpr__escapemark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
val* var3 /* : nullable EscapeMark */;
{ /* Inline scope#ADoExpr#escapemark (self) on <self:Object(ADoExpr)> */
var3 = self->attrs[COLOR_scope__ADoExpr___escapemark].val; /* _escapemark on <self:Object(ADoExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ADoExpr#escapemark= for (self: ADoExpr, nullable EscapeMark) */
void scope__ADoExpr__escapemark_61d(val* self, val* p0) {
self->attrs[COLOR_scope__ADoExpr___escapemark].val = p0; /* _escapemark on <self:ADoExpr> */
RET_LABEL:;
}
/* method scope#ADoExpr#escapemark= for (self: Object, nullable EscapeMark) */
void VIRTUAL_scope__ADoExpr__escapemark_61d(val* self, val* p0) {
{ /* Inline scope#ADoExpr#escapemark= (self,p0) on <self:Object(ADoExpr)> */
self->attrs[COLOR_scope__ADoExpr___escapemark].val = p0; /* _escapemark on <self:Object(ADoExpr)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method scope#ADoExpr#accept_scope_visitor for (self: ADoExpr, ScopeVisitor) */
void scope__ADoExpr__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : nullable ALabel */;
short int var1 /* : Bool */;
val* var2 /* : EscapeMark */;
val* var4 /* : nullable AExpr */;
val* var5 /* : nullable EscapeMark */;
val* var7 /* : nullable EscapeMark */;
var_v = p0;
{
var = parser_nodes__ALabelable__n_label(self);
}
var1 = 0;
{
var2 = scope__ScopeVisitor__make_escape_mark(var_v, var, var1);
}
{
{ /* Inline scope#ADoExpr#escapemark= (self,var2) on <self:ADoExpr> */
self->attrs[COLOR_scope__ADoExpr___escapemark].val = var2; /* _escapemark on <self:ADoExpr> */
RET_LABEL3:(void)0;
}
}
{
var4 = parser_nodes__ADoExpr__n_block(self);
}
{
{ /* Inline scope#ADoExpr#escapemark (self) on <self:ADoExpr> */
var7 = self->attrs[COLOR_scope__ADoExpr___escapemark].val; /* _escapemark on <self:ADoExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
scope__ScopeVisitor__enter_visit_block(var_v, var4, var5); /* Direct call scope#ScopeVisitor#enter_visit_block on <var_v:ScopeVisitor>*/
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
val* var1 /* : nullable AExpr */;
val* var2 /* : null */;
val* var3 /* : nullable AExpr */;
val* var4 /* : null */;
var_v = p0;
{
var = parser_nodes__AIfExpr__n_expr(self);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:ScopeVisitor>*/
}
{
var1 = parser_nodes__AIfExpr__n_then(self);
}
var2 = NULL;
{
scope__ScopeVisitor__enter_visit_block(var_v, var1, var2); /* Direct call scope#ScopeVisitor#enter_visit_block on <var_v:ScopeVisitor>*/
}
{
var3 = parser_nodes__AIfExpr__n_else(self);
}
var4 = NULL;
{
scope__ScopeVisitor__enter_visit_block(var_v, var3, var4); /* Direct call scope#ScopeVisitor#enter_visit_block on <var_v:ScopeVisitor>*/
}
RET_LABEL:;
}
/* method scope#AIfExpr#accept_scope_visitor for (self: Object, ScopeVisitor) */
void VIRTUAL_scope__AIfExpr__accept_scope_visitor(val* self, val* p0) {
scope__AIfExpr__accept_scope_visitor(self, p0); /* Direct call scope#AIfExpr#accept_scope_visitor on <self:Object(AIfExpr)>*/
RET_LABEL:;
}
/* method scope#AWhileExpr#escapemark for (self: AWhileExpr): nullable EscapeMark */
val* scope__AWhileExpr__escapemark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_scope__AWhileExpr___escapemark].val; /* _escapemark on <self:AWhileExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AWhileExpr#escapemark for (self: Object): nullable EscapeMark */
val* VIRTUAL_scope__AWhileExpr__escapemark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
val* var3 /* : nullable EscapeMark */;
{ /* Inline scope#AWhileExpr#escapemark (self) on <self:Object(AWhileExpr)> */
var3 = self->attrs[COLOR_scope__AWhileExpr___escapemark].val; /* _escapemark on <self:Object(AWhileExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AWhileExpr#escapemark= for (self: AWhileExpr, nullable EscapeMark) */
void scope__AWhileExpr__escapemark_61d(val* self, val* p0) {
self->attrs[COLOR_scope__AWhileExpr___escapemark].val = p0; /* _escapemark on <self:AWhileExpr> */
RET_LABEL:;
}
/* method scope#AWhileExpr#escapemark= for (self: Object, nullable EscapeMark) */
void VIRTUAL_scope__AWhileExpr__escapemark_61d(val* self, val* p0) {
{ /* Inline scope#AWhileExpr#escapemark= (self,p0) on <self:Object(AWhileExpr)> */
self->attrs[COLOR_scope__AWhileExpr___escapemark].val = p0; /* _escapemark on <self:Object(AWhileExpr)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method scope#AWhileExpr#accept_scope_visitor for (self: AWhileExpr, ScopeVisitor) */
void scope__AWhileExpr__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : nullable ALabel */;
short int var1 /* : Bool */;
val* var2 /* : EscapeMark */;
val* var_escapemark /* var escapemark: EscapeMark */;
val* var4 /* : AExpr */;
val* var5 /* : nullable AExpr */;
var_v = p0;
{
var = parser_nodes__ALabelable__n_label(self);
}
var1 = 1;
{
var2 = scope__ScopeVisitor__make_escape_mark(var_v, var, var1);
}
var_escapemark = var2;
{
{ /* Inline scope#AWhileExpr#escapemark= (self,var_escapemark) on <self:AWhileExpr> */
self->attrs[COLOR_scope__AWhileExpr___escapemark].val = var_escapemark; /* _escapemark on <self:AWhileExpr> */
RET_LABEL3:(void)0;
}
}
{
var4 = parser_nodes__AWhileExpr__n_expr(self);
}
{
parser_nodes__Visitor__enter_visit(var_v, var4); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:ScopeVisitor>*/
}
{
var5 = parser_nodes__AWhileExpr__n_block(self);
}
{
scope__ScopeVisitor__enter_visit_block(var_v, var5, var_escapemark); /* Direct call scope#ScopeVisitor#enter_visit_block on <var_v:ScopeVisitor>*/
}
RET_LABEL:;
}
/* method scope#AWhileExpr#accept_scope_visitor for (self: Object, ScopeVisitor) */
void VIRTUAL_scope__AWhileExpr__accept_scope_visitor(val* self, val* p0) {
scope__AWhileExpr__accept_scope_visitor(self, p0); /* Direct call scope#AWhileExpr#accept_scope_visitor on <self:Object(AWhileExpr)>*/
RET_LABEL:;
}
/* method scope#ALoopExpr#escapemark for (self: ALoopExpr): nullable EscapeMark */
val* scope__ALoopExpr__escapemark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_scope__ALoopExpr___escapemark].val; /* _escapemark on <self:ALoopExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ALoopExpr#escapemark for (self: Object): nullable EscapeMark */
val* VIRTUAL_scope__ALoopExpr__escapemark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
val* var3 /* : nullable EscapeMark */;
{ /* Inline scope#ALoopExpr#escapemark (self) on <self:Object(ALoopExpr)> */
var3 = self->attrs[COLOR_scope__ALoopExpr___escapemark].val; /* _escapemark on <self:Object(ALoopExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ALoopExpr#escapemark= for (self: ALoopExpr, nullable EscapeMark) */
void scope__ALoopExpr__escapemark_61d(val* self, val* p0) {
self->attrs[COLOR_scope__ALoopExpr___escapemark].val = p0; /* _escapemark on <self:ALoopExpr> */
RET_LABEL:;
}
/* method scope#ALoopExpr#escapemark= for (self: Object, nullable EscapeMark) */
void VIRTUAL_scope__ALoopExpr__escapemark_61d(val* self, val* p0) {
{ /* Inline scope#ALoopExpr#escapemark= (self,p0) on <self:Object(ALoopExpr)> */
self->attrs[COLOR_scope__ALoopExpr___escapemark].val = p0; /* _escapemark on <self:Object(ALoopExpr)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method scope#ALoopExpr#accept_scope_visitor for (self: ALoopExpr, ScopeVisitor) */
void scope__ALoopExpr__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : nullable ALabel */;
short int var1 /* : Bool */;
val* var2 /* : EscapeMark */;
val* var_escapemark /* var escapemark: EscapeMark */;
val* var4 /* : nullable AExpr */;
var_v = p0;
{
var = parser_nodes__ALabelable__n_label(self);
}
var1 = 1;
{
var2 = scope__ScopeVisitor__make_escape_mark(var_v, var, var1);
}
var_escapemark = var2;
{
{ /* Inline scope#ALoopExpr#escapemark= (self,var_escapemark) on <self:ALoopExpr> */
self->attrs[COLOR_scope__ALoopExpr___escapemark].val = var_escapemark; /* _escapemark on <self:ALoopExpr> */
RET_LABEL3:(void)0;
}
}
{
var4 = parser_nodes__ALoopExpr__n_block(self);
}
{
scope__ScopeVisitor__enter_visit_block(var_v, var4, var_escapemark); /* Direct call scope#ScopeVisitor#enter_visit_block on <var_v:ScopeVisitor>*/
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
/* method scope#AForExpr#escapemark for (self: AForExpr): nullable EscapeMark */
val* scope__AForExpr__escapemark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_scope__AForExpr___escapemark].val; /* _escapemark on <self:AForExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AForExpr#escapemark for (self: Object): nullable EscapeMark */
val* VIRTUAL_scope__AForExpr__escapemark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
val* var3 /* : nullable EscapeMark */;
{ /* Inline scope#AForExpr#escapemark (self) on <self:Object(AForExpr)> */
var3 = self->attrs[COLOR_scope__AForExpr___escapemark].val; /* _escapemark on <self:Object(AForExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AForExpr#escapemark= for (self: AForExpr, nullable EscapeMark) */
void scope__AForExpr__escapemark_61d(val* self, val* p0) {
self->attrs[COLOR_scope__AForExpr___escapemark].val = p0; /* _escapemark on <self:AForExpr> */
RET_LABEL:;
}
/* method scope#AForExpr#escapemark= for (self: Object, nullable EscapeMark) */
void VIRTUAL_scope__AForExpr__escapemark_61d(val* self, val* p0) {
{ /* Inline scope#AForExpr#escapemark= (self,p0) on <self:Object(AForExpr)> */
self->attrs[COLOR_scope__AForExpr___escapemark].val = p0; /* _escapemark on <self:Object(AForExpr)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method scope#AForExpr#accept_scope_visitor for (self: AForExpr, ScopeVisitor) */
void scope__AForExpr__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : AExpr */;
val* var1 /* : List[Scope] */;
val* var3 /* : List[Scope] */;
val* var4 /* : Scope */;
val* var6 /* : Array[Variable] */;
val* var_variables /* var variables: Array[Variable] */;
val* var8 /* : ANodes[TId] */;
val* var10 /* : ANodes[TId] */;
val* var11 /* : Iterator[ANode] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_nid /* var nid: TId */;
val* var14 /* : Variable */;
val* var15 /* : String */;
val* var_va /* var va: Variable */;
short int var17 /* : Bool */;
val* var18 /* : nullable ALabel */;
short int var19 /* : Bool */;
val* var20 /* : EscapeMark */;
val* var_escapemark /* var escapemark: EscapeMark */;
val* var22 /* : nullable AExpr */;
val* var23 /* : List[Scope] */;
val* var25 /* : List[Scope] */;
val* var26 /* : nullable Object */;
var_v = p0;
{
var = parser_nodes__AForExpr__n_expr(self);
}
{
parser_nodes__Visitor__enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:ScopeVisitor>*/
}
{
{ /* Inline scope#ScopeVisitor#scopes (var_v) on <var_v:ScopeVisitor> */
var3 = var_v->attrs[COLOR_scope__ScopeVisitor___scopes].val; /* _scopes on <var_v:ScopeVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", "src/scope.nit", 79);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = NEW_scope__Scope(&type_scope__Scope);
{
{ /* Inline scope#Scope#init (var4) on <var4:Scope> */
RET_LABEL5:(void)0;
}
}
{
list__List__unshift(var1, var4); /* Direct call list#List#unshift on <var1:List[Scope]>*/
}
var6 = NEW_array__Array(&type_array__Arrayscope__Variable);
{
array__Array__init(var6); /* Direct call array#Array#init on <var6:Array[Variable]>*/
}
var_variables = var6;
{
{ /* Inline scope#AForExpr#variables= (self,var_variables) on <self:AForExpr> */
self->attrs[COLOR_scope__AForExpr___variables].val = var_variables; /* _variables on <self:AForExpr> */
RET_LABEL7:(void)0;
}
}
{
{ /* Inline parser_nodes#AForExpr#n_ids (self) on <self:AForExpr> */
var10 = self->attrs[COLOR_parser_nodes__AForExpr___n_ids].val; /* _n_ids on <self:AForExpr> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_ids");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1604);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = parser_nodes__ANodes__iterator(var8);
}
for(;;) {
{
var12 = ((short int (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var11) /* is_ok on <var11:Iterator[ANode]>*/;
}
if(!var12) break;
{
var13 = ((val* (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__item]))(var11) /* item on <var11:Iterator[ANode]>*/;
}
var_nid = var13;
var14 = NEW_scope__Variable(&type_scope__Variable);
{
var15 = lexer_work__Token__text(var_nid);
}
{
{ /* Inline scope#Variable#init (var14,var15) on <var14:Variable> */
var14->attrs[COLOR_scope__Variable___name].val = var15; /* _name on <var14:Variable> */
RET_LABEL16:(void)0;
}
}
var_va = var14;
{
var17 = scope__ScopeVisitor__register_variable(var_v, var_nid, var_va);
}
var17;
{
array__Array__add(var_variables, var_va); /* Direct call array#Array#add on <var_variables:Array[Variable]>*/
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__next]))(var11) /* next on <var11:Iterator[ANode]>*/;
}
}
BREAK_label: (void)0;
{
var18 = parser_nodes__ALabelable__n_label(self);
}
var19 = 1;
{
var20 = scope__ScopeVisitor__make_escape_mark(var_v, var18, var19);
}
var_escapemark = var20;
{
{ /* Inline scope#AForExpr#escapemark= (self,var_escapemark) on <self:AForExpr> */
self->attrs[COLOR_scope__AForExpr___escapemark].val = var_escapemark; /* _escapemark on <self:AForExpr> */
RET_LABEL21:(void)0;
}
}
{
var22 = parser_nodes__AForExpr__n_block(self);
}
{
scope__ScopeVisitor__enter_visit_block(var_v, var22, var_escapemark); /* Direct call scope#ScopeVisitor#enter_visit_block on <var_v:ScopeVisitor>*/
}
{
{ /* Inline scope#ScopeVisitor#scopes (var_v) on <var_v:ScopeVisitor> */
var25 = var_v->attrs[COLOR_scope__ScopeVisitor___scopes].val; /* _scopes on <var_v:ScopeVisitor> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", "src/scope.nit", 79);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = list__List__shift(var23);
}
var26;
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
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : TId */;
val* var3 /* : String */;
val* var_name /* var name: String */;
val* var4 /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
val* var5 /* : null */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : AExprs */;
val* var14 /* : ANodes[AExpr] */;
val* var16 /* : ANodes[AExpr] */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var_ /* var : Bool */;
val* var19 /* : AExprs */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
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
val* var32 /* : Array[Object] */;
long var33 /* : Int */;
val* var34 /* : NativeArray[Object] */;
val* var35 /* : String */;
val* var36 /* : AVarFormExpr */;
val* var_n /* var n: AExpr */;
var_v = p0;
{
var = parser_nodes__ASendExpr__n_expr(self);
}
/* <var:AExpr> isa AImplicitSelfExpr */
cltype = type_parser_nodes__AImplicitSelfExpr.color;
idtype = type_parser_nodes__AImplicitSelfExpr.id;
if(cltype >= var->type->table_size) {
var1 = 0;
} else {
var1 = var->type->type_table[cltype] == idtype;
}
if (var1){
{
var2 = parser_nodes__ACallFormExpr__n_id(self);
}
{
var3 = lexer_work__Token__text(var2);
}
var_name = var3;
{
var4 = scope__ScopeVisitor__search_variable(var_v, var_name);
}
var_variable = var4;
var5 = NULL;
if (var_variable == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_variable,var5) on <var_variable:nullable Variable> */
var_other = var5;
{
var10 = ((short int (*)(val*, val*))(var_variable->class->vft[COLOR_kernel__Object___61d_61d]))(var_variable, var_other) /* == on <var_variable:nullable Variable(Variable)>*/;
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
{
var13 = parser_nodes__ACallFormExpr__n_args(self);
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var13) on <var13:AExprs> */
var16 = var13->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var13:AExprs> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2274);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = parser_nodes__ANodes__is_empty(var14);
}
var18 = !var17;
var_ = var18;
if (var18){
var12 = var_;
} else {
{
var19 = parser_nodes__ACallFormExpr__n_args(self);
}
/* <var19:AExprs> isa AParExprs */
cltype21 = type_parser_nodes__AParExprs.color;
idtype22 = type_parser_nodes__AParExprs.id;
if(cltype21 >= var19->type->table_size) {
var20 = 0;
} else {
var20 = var19->type->type_table[cltype21] == idtype22;
}
var12 = var20;
}
if (var12){
if (varonce) {
var23 = varonce;
} else {
var24 = "Error: ";
var25 = 7;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce = var23;
}
if (varonce27) {
var28 = varonce27;
} else {
var29 = " is variable, not a function.";
var30 = 29;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
var32 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var32 = array_instance Array[Object] */
var33 = 3;
var34 = NEW_array__NativeArray(var33, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var34)->values[0] = (val*) var23;
((struct instance_array__NativeArray*)var34)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var34)->values[2] = (val*) var28;
{
((void (*)(val*, val*, long))(var32->class->vft[COLOR_array__Array__with_native]))(var32, var34, var33) /* with_native on <var32:Array[Object]>*/;
}
}
{
var35 = ((val* (*)(val*))(var32->class->vft[COLOR_string__Object__to_s]))(var32) /* to_s on <var32:Array[Object]>*/;
}
{
scope__ScopeVisitor__error(var_v, self, var35); /* Direct call scope#ScopeVisitor#error on <var_v:ScopeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
var36 = ((val* (*)(val*, val*))(self->class->vft[COLOR_scope__ACallFormExpr__variable_create]))(self, var_variable) /* variable_create on <self:ACallFormExpr>*/;
}
var_n = var36;
{
{ /* Inline scope#AVarFormExpr#variable= (var_n,var_variable) on <var_n:AExpr(AVarFormExpr)> */
var_n->attrs[COLOR_scope__AVarFormExpr___variable].val = var_variable; /* _variable on <var_n:AExpr(AVarFormExpr)> */
RET_LABEL37:(void)0;
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
val* var1 /* : AVarExpr */;
val* var2 /* : TId */;
var_variable = p0;
var1 = NEW_parser_nodes__AVarExpr(&type_parser_nodes__AVarExpr);
{
var2 = parser_nodes__ACallFormExpr__n_id(self);
}
{
parser_prod__AVarExpr__init_avarexpr(var1, var2); /* Direct call parser_prod#AVarExpr#init_avarexpr on <var1:AVarExpr>*/
}
var = var1;
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
val* var3 /* : TAssign */;
val* var4 /* : AExpr */;
var_variable = p0;
var1 = NEW_parser_nodes__AVarAssignExpr(&type_parser_nodes__AVarAssignExpr);
{
var2 = parser_nodes__ACallFormExpr__n_id(self);
}
{
var3 = parser_nodes__AAssignFormExpr__n_assign(self);
}
{
var4 = parser_nodes__AAssignFormExpr__n_value(self);
}
{
parser_prod__AVarAssignExpr__init_avarassignexpr(var1, var2, var3, var4); /* Direct call parser_prod#AVarAssignExpr#init_avarassignexpr on <var1:AVarAssignExpr>*/
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
val* var1 /* : AVarReassignExpr */;
val* var2 /* : TId */;
val* var3 /* : AAssignOp */;
val* var4 /* : AExpr */;
var_variable = p0;
var1 = NEW_parser_nodes__AVarReassignExpr(&type_parser_nodes__AVarReassignExpr);
{
var2 = parser_nodes__ACallFormExpr__n_id(self);
}
{
var3 = parser_nodes__AReassignFormExpr__n_assign_op(self);
}
{
var4 = parser_nodes__AReassignFormExpr__n_value(self);
}
{
parser_prod__AVarReassignExpr__init_avarreassignexpr(var1, var2, var3, var4); /* Direct call parser_prod#AVarReassignExpr#init_avarreassignexpr on <var1:AVarReassignExpr>*/
}
var = var1;
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
