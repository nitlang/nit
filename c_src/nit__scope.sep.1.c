#include "nit__scope.sep.0.h"
/* method scope#ToolContext#scope_phase for (self: ToolContext): Phase */
val* nit__scope___ToolContext___scope_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nit__scope__ToolContext___scope_phase].val; /* _scope_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scope_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 23);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ScopePhase#process_npropdef for (self: ScopePhase, APropdef) */
void nit__scope___nit__scope__ScopePhase___nit__phase__Phase__process_npropdef(val* self, val* p0) {
val* var_npropdef /* var npropdef: APropdef */;
val* var /* : ToolContext */;
val* var2 /* : ToolContext */;
var_npropdef = p0;
{
{ /* Inline phase#Phase#toolcontext (self) on <self:ScopePhase> */
var2 = self->attrs[COLOR_nit__phase__Phase___toolcontext].val; /* _toolcontext on <self:ScopePhase> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 200);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nit__scope___APropdef___do_scope(var_npropdef, var); /* Direct call scope#APropdef#do_scope on <var_npropdef:APropdef>*/
}
RET_LABEL:;
}
/* method scope#Variable#name for (self: Variable): String */
val* nit___nit__Variable___name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__scope__Variable___name].val; /* _name on <self:Variable> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 35);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#Variable#name= for (self: Variable, String) */
void nit___nit__Variable___name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__scope__Variable___name].val = p0; /* _name on <self:Variable> */
RET_LABEL:;
}
/* method scope#Variable#to_s for (self: Variable): String */
val* nit___nit__Variable___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{
{ /* Inline scope#Variable#name (self) on <self:Variable> */
var3 = self->attrs[COLOR_nit__scope__Variable___name].val; /* _name on <self:Variable> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 35);
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
/* method scope#Variable#location for (self: Variable): nullable Location */
val* nit___nit__Variable___location(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable Location */;
var1 = self->attrs[COLOR_nit__scope__Variable___location].val; /* _location on <self:Variable> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#Variable#location= for (self: Variable, nullable Location) */
void nit___nit__Variable___location_61d(val* self, val* p0) {
self->attrs[COLOR_nit__scope__Variable___location].val = p0; /* _location on <self:Variable> */
RET_LABEL:;
}
/* method scope#Variable#warn_unread for (self: Variable): Bool */
short int nit___nit__Variable___warn_unread(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__scope__Variable___warn_unread].s; /* _warn_unread on <self:Variable> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#Variable#warn_unread= for (self: Variable, Bool) */
void nit___nit__Variable___warn_unread_61d(val* self, short int p0) {
self->attrs[COLOR_nit__scope__Variable___warn_unread].s = p0; /* _warn_unread on <self:Variable> */
RET_LABEL:;
}
/* method scope#Variable#init for (self: Variable) */
void nit___nit__Variable___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__Variable___standard__kernel__Object__init]))(self); /* init on <self:Variable>*/
}
RET_LABEL:;
}
/* method scope#EscapeMark#name for (self: EscapeMark): nullable String */
val* nit___nit__EscapeMark___name(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_nit__scope__EscapeMark___name].val; /* _name on <self:EscapeMark> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#EscapeMark#name= for (self: EscapeMark, nullable String) */
void nit___nit__EscapeMark___name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__scope__EscapeMark___name].val = p0; /* _name on <self:EscapeMark> */
RET_LABEL:;
}
/* method scope#EscapeMark#continue_mark for (self: EscapeMark): nullable EscapeMark */
val* nit___nit__EscapeMark___continue_mark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_nit__scope__EscapeMark___continue_mark].val; /* _continue_mark on <self:EscapeMark> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#EscapeMark#continue_mark= for (self: EscapeMark, nullable EscapeMark) */
void nit___nit__EscapeMark___continue_mark_61d(val* self, val* p0) {
self->attrs[COLOR_nit__scope__EscapeMark___continue_mark].val = p0; /* _continue_mark on <self:EscapeMark> */
RET_LABEL:;
}
/* method scope#EscapeMark#escapes for (self: EscapeMark): Array[AEscapeExpr] */
val* nit___nit__EscapeMark___escapes(val* self) {
val* var /* : Array[AEscapeExpr] */;
val* var1 /* : Array[AEscapeExpr] */;
var1 = self->attrs[COLOR_nit__scope__EscapeMark___escapes].val; /* _escapes on <self:EscapeMark> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 58);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#EscapeMark#init for (self: EscapeMark) */
void nit___nit__EscapeMark___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__EscapeMark___standard__kernel__Object__init]))(self); /* init on <self:EscapeMark>*/
}
RET_LABEL:;
}
/* method scope#ScopeVisitor#toolcontext for (self: ScopeVisitor): ToolContext */
val* nit__scope___nit__scope__ScopeVisitor___toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_nit__scope__ScopeVisitor___toolcontext].val; /* _toolcontext on <self:ScopeVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 70);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ScopeVisitor#toolcontext= for (self: ScopeVisitor, ToolContext) */
void nit__scope___nit__scope__ScopeVisitor___toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_nit__scope__ScopeVisitor___toolcontext].val = p0; /* _toolcontext on <self:ScopeVisitor> */
RET_LABEL:;
}
/* method scope#ScopeVisitor#selfvariable for (self: ScopeVisitor): Variable */
val* nit__scope___nit__scope__ScopeVisitor___selfvariable(val* self) {
val* var /* : Variable */;
val* var1 /* : Variable */;
var1 = self->attrs[COLOR_nit__scope__ScopeVisitor___selfvariable].val; /* _selfvariable on <self:ScopeVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _selfvariable");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 73);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ScopeVisitor#init for (self: ScopeVisitor) */
void nit__scope___nit__scope__ScopeVisitor___standard__kernel__Object__init(val* self) {
val* var /* : List[Scope] */;
val* var2 /* : List[Scope] */;
val* var3 /* : Scope */;
{
((void(*)(val* self))(self->class->vft[COLOR_nit__scope___nit__scope__ScopeVisitor___standard__kernel__Object__init]))(self); /* init on <self:ScopeVisitor>*/
}
{
{ /* Inline scope#ScopeVisitor#scopes (self) on <self:ScopeVisitor> */
var2 = self->attrs[COLOR_nit__scope__ScopeVisitor___scopes].val; /* _scopes on <self:ScopeVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 80);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = NEW_nit__scope__Scope(&type_nit__scope__Scope);
{
{ /* Inline kernel#Object#init (var3) on <var3:Scope> */
RET_LABEL4:(void)0;
}
}
{
standard___standard__Sequence___SimpleCollection__add(var, var3); /* Direct call abstract_collection#Sequence#add on <var:List[Scope]>*/
}
RET_LABEL:;
}
/* method scope#ScopeVisitor#scopes for (self: ScopeVisitor): List[Scope] */
val* nit__scope___nit__scope__ScopeVisitor___scopes(val* self) {
val* var /* : List[Scope] */;
val* var1 /* : List[Scope] */;
var1 = self->attrs[COLOR_nit__scope__ScopeVisitor___scopes].val; /* _scopes on <self:ScopeVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 80);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ScopeVisitor#shift_scope for (self: ScopeVisitor) */
void nit__scope___nit__scope__ScopeVisitor___shift_scope(val* self) {
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
char* var27 /* : NativeString */;
val* var28 /* : FlatString */;
val* var30 /* : NativeArray[String] */;
static val* varonce29;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
val* var34 /* : FlatString */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
val* var38 /* : FlatString */;
val* var39 /* : String */;
val* var41 /* : String */;
val* var42 /* : String */;
val* var43 /* : nullable Message */;
{
{ /* Inline scope#ScopeVisitor#scopes (self) on <self:ScopeVisitor> */
var2 = self->attrs[COLOR_nit__scope__ScopeVisitor___scopes].val; /* _scopes on <self:ScopeVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 80);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = standard___standard__List___standard__abstract_collection__Collection__is_empty(var);
}
var4 = !var3;
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 86);
fatal_exit(1);
}
{
{ /* Inline scope#ScopeVisitor#scopes (self) on <self:ScopeVisitor> */
var7 = self->attrs[COLOR_nit__scope__ScopeVisitor___scopes].val; /* _scopes on <self:ScopeVisitor> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 80);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = standard___standard__List___standard__abstract_collection__Sequence__shift(var5);
}
var_scope = var8;
{
{ /* Inline scope#Scope#variables (var_scope) on <var_scope:Scope> */
var11 = var_scope->attrs[COLOR_nit__scope__Scope___variables].val; /* _variables on <var_scope:Scope> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _variables");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 225);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = standard___standard__HashMap___standard__abstract_collection__MapRead__values(var9);
}
var_ = var12;
{
var13 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:RemovableCollection[Variable]>*/
}
var_14 = var13;
for(;;) {
{
var15 = ((short int(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_14); /* is_ok on <var_14:Iterator[Variable]>*/
}
if (var15){
{
var16 = ((val*(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_14); /* item on <var_14:Iterator[Variable]>*/
}
var_v = var16;
{
{ /* Inline scope#Variable#warn_unread (var_v) on <var_v:Variable> */
var19 = var_v->attrs[COLOR_nit__scope__Variable___warn_unread].s; /* _warn_unread on <var_v:Variable> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
if (var17){
{
{ /* Inline scope#ScopeVisitor#toolcontext (self) on <self:ScopeVisitor> */
var22 = self->attrs[COLOR_nit__scope__ScopeVisitor___toolcontext].val; /* _toolcontext on <self:ScopeVisitor> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 70);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline scope#Variable#location (var_v) on <var_v:Variable> */
var25 = var_v->attrs[COLOR_nit__scope__Variable___location].val; /* _location on <var_v:Variable> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
if (likely(varonce!=NULL)) {
var26 = varonce;
} else {
var27 = "unread-variable";
var28 = standard___standard__NativeString___to_s_with_length(var27, 15l);
var26 = var28;
varonce = var26;
}
if (unlikely(varonce29==NULL)) {
var30 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "Warning: local variable ";
var34 = standard___standard__NativeString___to_s_with_length(var33, 24l);
var32 = var34;
varonce31 = var32;
}
((struct instance_standard__NativeArray*)var30)->values[0]=var32;
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = " is never read.";
var38 = standard___standard__NativeString___to_s_with_length(var37, 15l);
var36 = var38;
varonce35 = var36;
}
((struct instance_standard__NativeArray*)var30)->values[2]=var36;
} else {
var30 = varonce29;
varonce29 = NULL;
}
{
{ /* Inline scope#Variable#name (var_v) on <var_v:Variable> */
var41 = var_v->attrs[COLOR_nit__scope__Variable___name].val; /* _name on <var_v:Variable> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 35);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
((struct instance_standard__NativeArray*)var30)->values[1]=var39;
{
var42 = ((val*(*)(val* self))(var30->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var30); /* native_to_s on <var30:NativeArray[String]>*/
}
varonce29 = var30;
{
var43 = nit___nit__ToolContext___advice(var20, var23, var26, var42);
}
} else {
}
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_14); /* next on <var_14:Iterator[Variable]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_14); /* finish on <var_14:Iterator[Variable]>*/
}
RET_LABEL:;
}
/* method scope#ScopeVisitor#register_variable for (self: ScopeVisitor, ANode, Variable): Bool */
short int nit__scope___nit__scope__ScopeVisitor___register_variable(val* self, val* p0, val* p1) {
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
char* var13 /* : NativeString */;
val* var14 /* : FlatString */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : FlatString */;
val* var19 /* : String */;
val* var20 /* : List[Scope] */;
val* var22 /* : List[Scope] */;
val* var23 /* : nullable Object */;
val* var24 /* : HashMap[String, Variable] */;
val* var26 /* : HashMap[String, Variable] */;
val* var27 /* : Location */;
val* var29 /* : Location */;
var_node = p0;
var_variable = p1;
{
{ /* Inline scope#Variable#name (var_variable) on <var_variable:Variable> */
var3 = var_variable->attrs[COLOR_nit__scope__Variable___name].val; /* _name on <var_variable:Variable> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 35);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_name = var1;
{
var4 = nit__scope___nit__scope__ScopeVisitor___search_variable(self, var_name);
}
var_found = var4;
if (var_found == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_found,((val*)NULL)) on <var_found:nullable Variable> */
var_other = ((val*)NULL);
{
var8 = ((short int(*)(val* self, val* p0))(var_found->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_found, var_other); /* == on <var_found:nullable Variable(Variable)>*/
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
var10 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "Error: a variable named `";
var14 = standard___standard__NativeString___to_s_with_length(var13, 25l);
var12 = var14;
varonce11 = var12;
}
((struct instance_standard__NativeArray*)var10)->values[0]=var12;
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "` already exists.";
var18 = standard___standard__NativeString___to_s_with_length(var17, 17l);
var16 = var18;
varonce15 = var16;
}
((struct instance_standard__NativeArray*)var10)->values[2]=var16;
} else {
var10 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var10)->values[1]=var_name;
{
var19 = ((val*(*)(val* self))(var10->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var10); /* native_to_s on <var10:NativeArray[String]>*/
}
varonce = var10;
{
nit__scope___nit__scope__ScopeVisitor___error(self, var_node, var19); /* Direct call scope#ScopeVisitor#error on <self:ScopeVisitor>*/
}
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline scope#ScopeVisitor#scopes (self) on <self:ScopeVisitor> */
var22 = self->attrs[COLOR_nit__scope__ScopeVisitor___scopes].val; /* _scopes on <self:ScopeVisitor> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 80);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = standard___standard__List___standard__abstract_collection__Collection__first(var20);
}
{
{ /* Inline scope#Scope#variables (var23) on <var23:nullable Object(Scope)> */
var26 = var23->attrs[COLOR_nit__scope__Scope___variables].val; /* _variables on <var23:nullable Object(Scope)> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _variables");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 225);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var24, var_name, var_variable); /* Direct call hash_collection#HashMap#[]= on <var24:HashMap[String, Variable]>*/
}
{
{ /* Inline parser_nodes#ANode#location (var_node) on <var_node:ANode> */
var29 = var_node->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var_node:ANode> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline scope#Variable#location= (var_variable,var27) on <var_variable:Variable> */
var_variable->attrs[COLOR_nit__scope__Variable___location].val = var27; /* _location on <var_variable:Variable> */
RET_LABEL30:(void)0;
}
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method scope#ScopeVisitor#search_variable for (self: ScopeVisitor, String): nullable Variable */
val* nit__scope___nit__scope__ScopeVisitor___search_variable(val* self, val* p0) {
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
{ /* Inline scope#ScopeVisitor#scopes (self) on <self:ScopeVisitor> */
var3 = self->attrs[COLOR_nit__scope__ScopeVisitor___scopes].val; /* _scopes on <self:ScopeVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 80);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_ = var1;
{
var4 = standard___standard__List___standard__abstract_collection__Collection__iterator(var_);
}
var_5 = var4;
for(;;) {
{
var6 = standard___standard__ListIterator___standard__abstract_collection__Iterator__is_ok(var_5);
}
if (var6){
{
var7 = standard___standard__ListIterator___standard__abstract_collection__Iterator__item(var_5);
}
var_scope = var7;
{
var8 = nit__scope___nit__scope__Scope___get_variable(var_scope, var_name);
}
var_res = var8;
if (var_res == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,((val*)NULL)) on <var_res:nullable Variable> */
var_other = ((val*)NULL);
{
var12 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable Variable(Variable)>*/
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
standard___standard__ListIterator___standard__abstract_collection__Iterator__next(var_5); /* Direct call list#ListIterator#next on <var_5:ListIterator[Scope]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_5) on <var_5:ListIterator[Scope]> */
RET_LABEL14:(void)0;
}
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method scope#ScopeVisitor#visit for (self: ScopeVisitor, ANode) */
void nit__scope___nit__scope__ScopeVisitor___nit__parser_nodes__Visitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
var_n = p0;
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nit__scope__ANode__accept_scope_visitor]))(var_n, self); /* accept_scope_visitor on <var_n:ANode>*/
}
RET_LABEL:;
}
/* method scope#ScopeVisitor#enter_visit_block for (self: ScopeVisitor, nullable AExpr, nullable EscapeMark) */
void nit__scope___nit__scope__ScopeVisitor___enter_visit_block(val* self, val* p0, val* p1) {
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
{ /* Inline kernel#Object#== (var_node,((val*)NULL)) on <var_node:nullable AExpr> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_node,var_other) on <var_node:nullable AExpr(AExpr)> */
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
var6 = NEW_nit__scope__Scope(&type_nit__scope__Scope);
{
{ /* Inline kernel#Object#init (var6) on <var6:Scope> */
RET_LABEL7:(void)0;
}
}
var_scope = var6;
{
{ /* Inline scope#Scope#escapemark= (var_scope,var_escapemark) on <var_scope:Scope> */
var_scope->attrs[COLOR_nit__scope__Scope___escapemark].val = var_escapemark; /* _escapemark on <var_scope:Scope> */
RET_LABEL8:(void)0;
}
}
{
{ /* Inline scope#ScopeVisitor#scopes (self) on <self:ScopeVisitor> */
var11 = self->attrs[COLOR_nit__scope__ScopeVisitor___scopes].val; /* _scopes on <self:ScopeVisitor> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 80);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
standard___standard__List___standard__abstract_collection__Sequence__unshift(var9, var_scope); /* Direct call list#List#unshift on <var9:List[Scope]>*/
}
{
nit___nit__Visitor___enter_visit(self, var_node); /* Direct call parser_nodes#Visitor#enter_visit on <self:ScopeVisitor>*/
}
{
nit__scope___nit__scope__ScopeVisitor___shift_scope(self); /* Direct call scope#ScopeVisitor#shift_scope on <self:ScopeVisitor>*/
}
RET_LABEL:;
}
/* method scope#ScopeVisitor#search_label for (self: ScopeVisitor, String): nullable EscapeMark */
val* nit__scope___nit__scope__ScopeVisitor___search_label(val* self, val* p0) {
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
{ /* Inline scope#ScopeVisitor#scopes (self) on <self:ScopeVisitor> */
var3 = self->attrs[COLOR_nit__scope__ScopeVisitor___scopes].val; /* _scopes on <self:ScopeVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 80);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_ = var1;
{
var4 = standard___standard__List___standard__abstract_collection__Collection__iterator(var_);
}
var_5 = var4;
for(;;) {
{
var6 = standard___standard__ListIterator___standard__abstract_collection__Iterator__is_ok(var_5);
}
if (var6){
{
var7 = standard___standard__ListIterator___standard__abstract_collection__Iterator__item(var_5);
}
var_scope = var7;
{
{ /* Inline scope#Scope#escapemark (var_scope) on <var_scope:Scope> */
var10 = var_scope->attrs[COLOR_nit__scope__Scope___escapemark].val; /* _escapemark on <var_scope:Scope> */
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
{ /* Inline kernel#Object#!= (var_res,((val*)NULL)) on <var_res:nullable EscapeMark> */
var_other = ((val*)NULL);
{
var15 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable EscapeMark(EscapeMark)>*/
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
{ /* Inline scope#EscapeMark#name (var_res) on <var_res:nullable EscapeMark(EscapeMark)> */
var20 = var_res->attrs[COLOR_nit__scope__EscapeMark___name].val; /* _name on <var_res:nullable EscapeMark(EscapeMark)> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (var18 == NULL) {
var21 = 0; /* <var_name:String> cannot be null */
} else {
var22 = ((short int(*)(val* self, val* p0))(var18->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var18, var_name); /* == on <var18:nullable String>*/
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
standard___standard__ListIterator___standard__abstract_collection__Iterator__next(var_5); /* Direct call list#ListIterator#next on <var_5:ListIterator[Scope]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_5) on <var_5:ListIterator[Scope]> */
RET_LABEL23:(void)0;
}
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method scope#ScopeVisitor#make_escape_mark for (self: ScopeVisitor, nullable ALabel, Bool): EscapeMark */
val* nit__scope___nit__scope__ScopeVisitor___make_escape_mark(val* self, val* p0, short int p1) {
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
char* var17 /* : NativeString */;
val* var18 /* : FlatString */;
val* var19 /* : nullable EscapeMark */;
val* var_res /* var res: nullable EscapeMark */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
val* var28 /* : FlatString */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
val* var32 /* : FlatString */;
val* var_name /* var name: nullable String */;
val* var33 /* : String */;
val* var34 /* : nullable EscapeMark */;
val* var_found /* var found: nullable EscapeMark */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
val* var41 /* : NativeArray[String] */;
static val* varonce40;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : FlatString */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
val* var49 /* : FlatString */;
val* var50 /* : String */;
val* var51 /* : EscapeMark */;
val* var_res52 /* var res: EscapeMark */;
val* var53 /* : EscapeMark */;
var_nlabel = p0;
var_for_loop = p1;
if (var_nlabel == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nlabel,((val*)NULL)) on <var_nlabel:nullable ALabel> */
var_other = ((val*)NULL);
{
var4 = ((short int(*)(val* self, val* p0))(var_nlabel->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nlabel, var_other); /* == on <var_nlabel:nullable ALabel(ALabel)>*/
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
{ /* Inline parser_nodes#ALabel#n_id (var_nlabel) on <var_nlabel:nullable ALabel(ALabel)> */
var8 = var_nlabel->attrs[COLOR_nit__parser_nodes__ALabel___n_id].val; /* _n_id on <var_nlabel:nullable ALabel(ALabel)> */
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
{ /* Inline kernel#Object#== (var_nid,((val*)NULL)) on <var_nid:nullable TId> */
var_other12 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_nid,var_other12) on <var_nid:nullable TId(TId)> */
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
var18 = standard___standard__NativeString___to_s_with_length(var17, 0l);
var16 = var18;
varonce = var16;
}
{
var19 = nit__scope___nit__scope__ScopeVisitor___search_label(self, var16);
}
var_res = var19;
if (var_res == NULL) {
var20 = 0; /* is null */
} else {
var20 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,((val*)NULL)) on <var_res:nullable EscapeMark> */
var_other = ((val*)NULL);
{
var23 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable EscapeMark(EscapeMark)>*/
}
var24 = !var23;
var21 = var24;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (var20){
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "Syntax Error: anonymous label already defined.";
var28 = standard___standard__NativeString___to_s_with_length(var27, 46l);
var26 = var28;
varonce25 = var26;
}
{
nit__scope___nit__scope__ScopeVisitor___error(self, var_nlabel, var26); /* Direct call scope#ScopeVisitor#error on <self:ScopeVisitor>*/
}
} else {
}
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = "";
var32 = standard___standard__NativeString___to_s_with_length(var31, 0l);
var30 = var32;
varonce29 = var30;
}
var_name = var30;
} else {
{
var33 = nit__lexer_work___Token___text(var_nid);
}
var_name = var33;
{
var34 = nit__scope___nit__scope__ScopeVisitor___search_label(self, var_name);
}
var_found = var34;
if (var_found == NULL) {
var35 = 0; /* is null */
} else {
var35 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_found,((val*)NULL)) on <var_found:nullable EscapeMark> */
var_other = ((val*)NULL);
{
var38 = ((short int(*)(val* self, val* p0))(var_found->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_found, var_other); /* == on <var_found:nullable EscapeMark(EscapeMark)>*/
}
var39 = !var38;
var36 = var39;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
var35 = var36;
}
if (var35){
if (unlikely(varonce40==NULL)) {
var41 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "Syntax Error: label `";
var45 = standard___standard__NativeString___to_s_with_length(var44, 21l);
var43 = var45;
varonce42 = var43;
}
((struct instance_standard__NativeArray*)var41)->values[0]=var43;
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = "` already defined.";
var49 = standard___standard__NativeString___to_s_with_length(var48, 18l);
var47 = var49;
varonce46 = var47;
}
((struct instance_standard__NativeArray*)var41)->values[2]=var47;
} else {
var41 = varonce40;
varonce40 = NULL;
}
((struct instance_standard__NativeArray*)var41)->values[1]=var_name;
{
var50 = ((val*(*)(val* self))(var41->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var41); /* native_to_s on <var41:NativeArray[String]>*/
}
varonce40 = var41;
{
nit__scope___nit__scope__ScopeVisitor___error(self, var_nlabel, var50); /* Direct call scope#ScopeVisitor#error on <self:ScopeVisitor>*/
}
} else {
}
}
} else {
var_name = ((val*)NULL);
}
var51 = NEW_nit__EscapeMark(&type_nit__EscapeMark);
{
((void(*)(val* self, val* p0))(var51->class->vft[COLOR_nit__scope__EscapeMark__name_61d]))(var51, var_name); /* name= on <var51:EscapeMark>*/
}
{
((void(*)(val* self))(var51->class->vft[COLOR_standard__kernel__Object__init]))(var51); /* init on <var51:EscapeMark>*/
}
var_res52 = var51;
if (var_for_loop){
var53 = NEW_nit__EscapeMark(&type_nit__EscapeMark);
{
((void(*)(val* self, val* p0))(var53->class->vft[COLOR_nit__scope__EscapeMark__name_61d]))(var53, var_name); /* name= on <var53:EscapeMark>*/
}
{
((void(*)(val* self))(var53->class->vft[COLOR_standard__kernel__Object__init]))(var53); /* init on <var53:EscapeMark>*/
}
{
{ /* Inline scope#EscapeMark#continue_mark= (var_res52,var53) on <var_res52:EscapeMark> */
var_res52->attrs[COLOR_nit__scope__EscapeMark___continue_mark].val = var53; /* _continue_mark on <var_res52:EscapeMark> */
RET_LABEL54:(void)0;
}
}
} else {
}
var = var_res52;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method scope#ScopeVisitor#get_escapemark for (self: ScopeVisitor, ANode, nullable ALabel): nullable EscapeMark */
val* nit__scope___nit__scope__ScopeVisitor___get_escapemark(val* self, val* p0, val* p1) {
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
char* var17 /* : NativeString */;
val* var18 /* : FlatString */;
val* var19 /* : nullable EscapeMark */;
val* var_res /* var res: nullable EscapeMark */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
val* var29 /* : FlatString */;
val* var30 /* : String */;
val* var_name /* var name: String */;
val* var31 /* : nullable EscapeMark */;
val* var_res32 /* var res: nullable EscapeMark */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
val* var40 /* : NativeArray[String] */;
static val* varonce39;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
val* var44 /* : FlatString */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
val* var48 /* : FlatString */;
val* var49 /* : String */;
val* var50 /* : List[Scope] */;
val* var52 /* : List[Scope] */;
val* var_ /* var : List[Scope] */;
val* var53 /* : ListIterator[nullable Object] */;
val* var_54 /* var : ListIterator[Scope] */;
short int var55 /* : Bool */;
val* var56 /* : nullable Object */;
val* var_scope /* var scope: Scope */;
val* var57 /* : nullable EscapeMark */;
val* var59 /* : nullable EscapeMark */;
val* var_res60 /* var res: nullable EscapeMark */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
val* var70 /* : FlatString */;
var_node = p0;
var_nlabel = p1;
if (var_nlabel == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nlabel,((val*)NULL)) on <var_nlabel:nullable ALabel> */
var_other = ((val*)NULL);
{
var4 = ((short int(*)(val* self, val* p0))(var_nlabel->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nlabel, var_other); /* == on <var_nlabel:nullable ALabel(ALabel)>*/
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
{ /* Inline parser_nodes#ALabel#n_id (var_nlabel) on <var_nlabel:nullable ALabel(ALabel)> */
var8 = var_nlabel->attrs[COLOR_nit__parser_nodes__ALabel___n_id].val; /* _n_id on <var_nlabel:nullable ALabel(ALabel)> */
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
{ /* Inline kernel#Object#== (var_nid,((val*)NULL)) on <var_nid:nullable TId> */
var_other12 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_nid,var_other12) on <var_nid:nullable TId(TId)> */
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
var18 = standard___standard__NativeString___to_s_with_length(var17, 0l);
var16 = var18;
varonce = var16;
}
{
var19 = nit__scope___nit__scope__ScopeVisitor___search_label(self, var16);
}
var_res = var19;
if (var_res == NULL) {
var20 = 1; /* is null */
} else {
var20 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res,((val*)NULL)) on <var_res:nullable EscapeMark> */
var_other12 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other12) on <var_res:nullable EscapeMark(EscapeMark)> */
var25 = var_res == var_other12;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (var20){
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "Syntax Error: invalid anonymous label.";
var29 = standard___standard__NativeString___to_s_with_length(var28, 38l);
var27 = var29;
varonce26 = var27;
}
{
nit__scope___nit__scope__ScopeVisitor___error(self, var_nlabel, var27); /* Direct call scope#ScopeVisitor#error on <self:ScopeVisitor>*/
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
var30 = nit__lexer_work___Token___text(var_nid);
}
var_name = var30;
{
var31 = nit__scope___nit__scope__ScopeVisitor___search_label(self, var_name);
}
var_res32 = var31;
if (var_res32 == NULL) {
var33 = 1; /* is null */
} else {
var33 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res32,((val*)NULL)) on <var_res32:nullable EscapeMark> */
var_other12 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_res32,var_other12) on <var_res32:nullable EscapeMark(EscapeMark)> */
var38 = var_res32 == var_other12;
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
var33 = var34;
}
if (var33){
if (unlikely(varonce39==NULL)) {
var40 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "Syntax Error: invalid label `";
var44 = standard___standard__NativeString___to_s_with_length(var43, 29l);
var42 = var44;
varonce41 = var42;
}
((struct instance_standard__NativeArray*)var40)->values[0]=var42;
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = "`.";
var48 = standard___standard__NativeString___to_s_with_length(var47, 2l);
var46 = var48;
varonce45 = var46;
}
((struct instance_standard__NativeArray*)var40)->values[2]=var46;
} else {
var40 = varonce39;
varonce39 = NULL;
}
((struct instance_standard__NativeArray*)var40)->values[1]=var_name;
{
var49 = ((val*(*)(val* self))(var40->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var40); /* native_to_s on <var40:NativeArray[String]>*/
}
varonce39 = var40;
{
nit__scope___nit__scope__ScopeVisitor___error(self, var_nlabel, var49); /* Direct call scope#ScopeVisitor#error on <self:ScopeVisitor>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var = var_res32;
goto RET_LABEL;
} else {
{
{ /* Inline scope#ScopeVisitor#scopes (self) on <self:ScopeVisitor> */
var52 = self->attrs[COLOR_nit__scope__ScopeVisitor___scopes].val; /* _scopes on <self:ScopeVisitor> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 80);
fatal_exit(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
var_ = var50;
{
var53 = standard___standard__List___standard__abstract_collection__Collection__iterator(var_);
}
var_54 = var53;
for(;;) {
{
var55 = standard___standard__ListIterator___standard__abstract_collection__Iterator__is_ok(var_54);
}
if (var55){
{
var56 = standard___standard__ListIterator___standard__abstract_collection__Iterator__item(var_54);
}
var_scope = var56;
{
{ /* Inline scope#Scope#escapemark (var_scope) on <var_scope:Scope> */
var59 = var_scope->attrs[COLOR_nit__scope__Scope___escapemark].val; /* _escapemark on <var_scope:Scope> */
var57 = var59;
RET_LABEL58:(void)0;
}
}
var_res60 = var57;
if (var_res60 == NULL) {
var61 = 0; /* is null */
} else {
var61 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res60,((val*)NULL)) on <var_res60:nullable EscapeMark> */
var_other = ((val*)NULL);
{
var64 = ((short int(*)(val* self, val* p0))(var_res60->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res60, var_other); /* == on <var_res60:nullable EscapeMark(EscapeMark)>*/
}
var65 = !var64;
var62 = var65;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
var61 = var62;
}
if (var61){
var = var_res60;
goto RET_LABEL;
} else {
}
{
standard___standard__ListIterator___standard__abstract_collection__Iterator__next(var_54); /* Direct call list#ListIterator#next on <var_54:ListIterator[Scope]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_54) on <var_54:ListIterator[Scope]> */
RET_LABEL66:(void)0;
}
}
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = "Syntax Error: `break` statement outside block.";
var70 = standard___standard__NativeString___to_s_with_length(var69, 46l);
var68 = var70;
varonce67 = var68;
}
{
nit__scope___nit__scope__ScopeVisitor___error(self, var_node, var68); /* Direct call scope#ScopeVisitor#error on <self:ScopeVisitor>*/
}
var = ((val*)NULL);
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method scope#ScopeVisitor#error for (self: ScopeVisitor, ANode, String) */
void nit__scope___nit__scope__ScopeVisitor___error(val* self, val* p0, val* p1) {
val* var_node /* var node: ANode */;
val* var_message /* var message: String */;
val* var /* : ToolContext */;
val* var2 /* : ToolContext */;
val* var3 /* : Location */;
val* var4 /* : Message */;
var_node = p0;
var_message = p1;
{
{ /* Inline scope#ScopeVisitor#toolcontext (self) on <self:ScopeVisitor> */
var2 = self->attrs[COLOR_nit__scope__ScopeVisitor___toolcontext].val; /* _toolcontext on <self:ScopeVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 70);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = ((val*(*)(val* self))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__hot_location]))(var_node); /* hot_location on <var_node:ANode>*/
}
{
var4 = nit___nit__ToolContext___error(var, var3, var_message);
}
RET_LABEL:;
}
/* method scope#Scope#variables for (self: Scope): HashMap[String, Variable] */
val* nit__scope___nit__scope__Scope___variables(val* self) {
val* var /* : HashMap[String, Variable] */;
val* var1 /* : HashMap[String, Variable] */;
var1 = self->attrs[COLOR_nit__scope__Scope___variables].val; /* _variables on <self:Scope> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _variables");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 225);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#Scope#escapemark for (self: Scope): nullable EscapeMark */
val* nit__scope___nit__scope__Scope___escapemark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_nit__scope__Scope___escapemark].val; /* _escapemark on <self:Scope> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#Scope#escapemark= for (self: Scope, nullable EscapeMark) */
void nit__scope___nit__scope__Scope___escapemark_61d(val* self, val* p0) {
self->attrs[COLOR_nit__scope__Scope___escapemark].val = p0; /* _escapemark on <self:Scope> */
RET_LABEL:;
}
/* method scope#Scope#get_variable for (self: Scope, String): nullable Variable */
val* nit__scope___nit__scope__Scope___get_variable(val* self, val* p0) {
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
{ /* Inline scope#Scope#variables (self) on <self:Scope> */
var3 = self->attrs[COLOR_nit__scope__Scope___variables].val; /* _variables on <self:Scope> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _variables");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 225);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = standard___standard__HashMap___standard__abstract_collection__MapRead__has_key(var1, var_name);
}
if (var4){
{
{ /* Inline scope#Scope#variables (self) on <self:Scope> */
var7 = self->attrs[COLOR_nit__scope__Scope___variables].val; /* _variables on <self:Scope> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _variables");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 225);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var5, var_name);
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
/* method scope#ANode#accept_scope_visitor for (self: ANode, ScopeVisitor) */
void nit__scope___ANode___accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ANode__visit_all]))(self, var_v); /* visit_all on <self:ANode>*/
}
RET_LABEL:;
}
/* method scope#APropdef#do_scope for (self: APropdef, ToolContext) */
void nit__scope___APropdef___do_scope(val* self, val* p0) {
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var /* : ScopeVisitor */;
val* var_v /* var v: ScopeVisitor */;
var_toolcontext = p0;
var = NEW_nit__scope__ScopeVisitor(&type_nit__scope__ScopeVisitor);
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nit__scope__ScopeVisitor__toolcontext_61d]))(var, var_toolcontext); /* toolcontext= on <var:ScopeVisitor>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:ScopeVisitor>*/
}
var_v = var;
{
nit___nit__Visitor___enter_visit(var_v, self); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:ScopeVisitor>*/
}
{
nit__scope___nit__scope__ScopeVisitor___shift_scope(var_v); /* Direct call scope#ScopeVisitor#shift_scope on <var_v:ScopeVisitor>*/
}
RET_LABEL:;
}
/* method scope#AParam#variable for (self: AParam): nullable Variable */
val* nit__scope___AParam___variable(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
var1 = self->attrs[COLOR_nit__scope__AParam___variable].val; /* _variable on <self:AParam> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AParam#variable= for (self: AParam, nullable Variable) */
void nit__scope___AParam___variable_61d(val* self, val* p0) {
self->attrs[COLOR_nit__scope__AParam___variable].val = p0; /* _variable on <self:AParam> */
RET_LABEL:;
}
/* method scope#AParam#accept_scope_visitor for (self: AParam, ScopeVisitor) */
void nit__scope___AParam___ANode__accept_scope_visitor(val* self, val* p0) {
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
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__scope___AParam___ANode__accept_scope_visitor]))(self, p0); /* accept_scope_visitor on <self:AParam>*/
}
{
{ /* Inline parser_nodes#AParam#n_id (self) on <self:AParam> */
var2 = self->attrs[COLOR_nit__parser_nodes__AParam___n_id].val; /* _n_id on <self:AParam> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1707);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_nid = var;
var3 = NEW_nit__Variable(&type_nit__Variable);
{
var4 = nit__lexer_work___Token___text(var_nid);
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nit__scope__Variable__name_61d]))(var3, var4); /* name= on <var3:Variable>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:Variable>*/
}
var_variable = var3;
{
var5 = nit__scope___nit__scope__ScopeVisitor___register_variable(var_v, var_nid, var_variable);
}
{
{ /* Inline scope#AParam#variable= (self,var_variable) on <self:AParam> */
self->attrs[COLOR_nit__scope__AParam___variable].val = var_variable; /* _variable on <self:AParam> */
RET_LABEL6:(void)0;
}
}
RET_LABEL:;
}
/* method scope#AVardeclExpr#variable for (self: AVardeclExpr): nullable Variable */
val* nit__scope___AVardeclExpr___variable(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
var1 = self->attrs[COLOR_nit__scope__AVardeclExpr___variable].val; /* _variable on <self:AVardeclExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AVardeclExpr#variable= for (self: AVardeclExpr, nullable Variable) */
void nit__scope___AVardeclExpr___variable_61d(val* self, val* p0) {
self->attrs[COLOR_nit__scope__AVardeclExpr___variable].val = p0; /* _variable on <self:AVardeclExpr> */
RET_LABEL:;
}
/* method scope#AVardeclExpr#accept_scope_visitor for (self: AVardeclExpr, ScopeVisitor) */
void nit__scope___AVardeclExpr___ANode__accept_scope_visitor(val* self, val* p0) {
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
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__scope___AVardeclExpr___ANode__accept_scope_visitor]))(self, p0); /* accept_scope_visitor on <self:AVardeclExpr>*/
}
{
{ /* Inline parser_nodes#AVardeclExpr#n_id (self) on <self:AVardeclExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_id].val; /* _n_id on <self:AVardeclExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1773);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_nid = var;
var3 = NEW_nit__Variable(&type_nit__Variable);
{
var4 = nit__lexer_work___Token___text(var_nid);
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nit__scope__Variable__name_61d]))(var3, var4); /* name= on <var3:Variable>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:Variable>*/
}
var_variable = var3;
{
var5 = nit__scope___nit__scope__ScopeVisitor___register_variable(var_v, var_nid, var_variable);
}
{
{ /* Inline scope#Variable#warn_unread= (var_variable,1) on <var_variable:Variable> */
var_variable->attrs[COLOR_nit__scope__Variable___warn_unread].s = 1; /* _warn_unread on <var_variable:Variable> */
RET_LABEL6:(void)0;
}
}
{
{ /* Inline scope#AVardeclExpr#variable= (self,var_variable) on <self:AVardeclExpr> */
self->attrs[COLOR_nit__scope__AVardeclExpr___variable].val = var_variable; /* _variable on <self:AVardeclExpr> */
RET_LABEL7:(void)0;
}
}
RET_LABEL:;
}
/* method scope#ASelfExpr#variable= for (self: ASelfExpr, nullable Variable) */
void nit__scope___ASelfExpr___variable_61d(val* self, val* p0) {
self->attrs[COLOR_nit__scope__ASelfExpr___variable].val = p0; /* _variable on <self:ASelfExpr> */
RET_LABEL:;
}
/* method scope#ASelfExpr#accept_scope_visitor for (self: ASelfExpr, ScopeVisitor) */
void nit__scope___ASelfExpr___ANode__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : Variable */;
val* var2 /* : Variable */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__scope___ASelfExpr___ANode__accept_scope_visitor]))(self, p0); /* accept_scope_visitor on <self:ASelfExpr>*/
}
{
{ /* Inline scope#ScopeVisitor#selfvariable (var_v) on <var_v:ScopeVisitor> */
var2 = var_v->attrs[COLOR_nit__scope__ScopeVisitor___selfvariable].val; /* _selfvariable on <var_v:ScopeVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _selfvariable");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 73);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline scope#ASelfExpr#variable= (self,var) on <self:ASelfExpr> */
self->attrs[COLOR_nit__scope__ASelfExpr___variable].val = var; /* _variable on <self:ASelfExpr> */
RET_LABEL3:(void)0;
}
}
RET_LABEL:;
}
/* method scope#AEscapeExpr#escapemark for (self: AEscapeExpr): nullable EscapeMark */
val* nit__scope___AEscapeExpr___escapemark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_nit__scope__AEscapeExpr___escapemark].val; /* _escapemark on <self:AEscapeExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AEscapeExpr#escapemark= for (self: AEscapeExpr, nullable EscapeMark) */
void nit__scope___AEscapeExpr___escapemark_61d(val* self, val* p0) {
self->attrs[COLOR_nit__scope__AEscapeExpr___escapemark].val = p0; /* _escapemark on <self:AEscapeExpr> */
RET_LABEL:;
}
/* method scope#AContinueExpr#accept_scope_visitor for (self: AContinueExpr, ScopeVisitor) */
void nit__scope___AContinueExpr___ANode__accept_scope_visitor(val* self, val* p0) {
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
char* var20 /* : NativeString */;
val* var21 /* : FlatString */;
val* var22 /* : Array[AEscapeExpr] */;
val* var24 /* : Array[AEscapeExpr] */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__scope___AContinueExpr___ANode__accept_scope_visitor]))(self, p0); /* accept_scope_visitor on <self:AContinueExpr>*/
}
{
{ /* Inline parser_nodes#ALabelable#n_label (self) on <self:AContinueExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AContinueExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit__scope___nit__scope__ScopeVisitor___get_escapemark(var_v, self, var);
}
var_escapemark = var3;
if (var_escapemark == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_escapemark,((val*)NULL)) on <var_escapemark:nullable EscapeMark> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_escapemark,var_other) on <var_escapemark:nullable EscapeMark(EscapeMark)> */
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
{ /* Inline scope#EscapeMark#continue_mark (var_escapemark) on <var_escapemark:nullable EscapeMark(EscapeMark)> */
var12 = var_escapemark->attrs[COLOR_nit__scope__EscapeMark___continue_mark].val; /* _continue_mark on <var_escapemark:nullable EscapeMark(EscapeMark)> */
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
{ /* Inline kernel#Object#== (var_escapemark,((val*)NULL)) on <var_escapemark:nullable EscapeMark> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_escapemark,var_other) on <var_escapemark:nullable EscapeMark(EscapeMark)> */
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
var21 = standard___standard__NativeString___to_s_with_length(var20, 39l);
var19 = var21;
varonce = var19;
}
{
nit__scope___nit__scope__ScopeVisitor___error(var_v, self, var19); /* Direct call scope#ScopeVisitor#error on <var_v:ScopeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline scope#EscapeMark#escapes (var_escapemark) on <var_escapemark:nullable EscapeMark(EscapeMark)> */
var24 = var_escapemark->attrs[COLOR_nit__scope__EscapeMark___escapes].val; /* _escapes on <var_escapemark:nullable EscapeMark(EscapeMark)> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 58);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var22, self); /* Direct call array#Array#add on <var22:Array[AEscapeExpr]>*/
}
{
{ /* Inline scope#AEscapeExpr#escapemark= (self,var_escapemark) on <self:AContinueExpr> */
self->attrs[COLOR_nit__scope__AEscapeExpr___escapemark].val = var_escapemark; /* _escapemark on <self:AContinueExpr> */
RET_LABEL25:(void)0;
}
}
RET_LABEL:;
}
/* method scope#ABreakExpr#accept_scope_visitor for (self: ABreakExpr, ScopeVisitor) */
void nit__scope___ABreakExpr___ANode__accept_scope_visitor(val* self, val* p0) {
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
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__scope___ABreakExpr___ANode__accept_scope_visitor]))(self, p0); /* accept_scope_visitor on <self:ABreakExpr>*/
}
{
{ /* Inline parser_nodes#ALabelable#n_label (self) on <self:ABreakExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ABreakExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit__scope___nit__scope__ScopeVisitor___get_escapemark(var_v, self, var);
}
var_escapemark = var3;
if (var_escapemark == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_escapemark,((val*)NULL)) on <var_escapemark:nullable EscapeMark> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_escapemark,var_other) on <var_escapemark:nullable EscapeMark(EscapeMark)> */
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
{ /* Inline scope#EscapeMark#escapes (var_escapemark) on <var_escapemark:nullable EscapeMark(EscapeMark)> */
var12 = var_escapemark->attrs[COLOR_nit__scope__EscapeMark___escapes].val; /* _escapes on <var_escapemark:nullable EscapeMark(EscapeMark)> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 58);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var10, self); /* Direct call array#Array#add on <var10:Array[AEscapeExpr]>*/
}
{
{ /* Inline scope#AEscapeExpr#escapemark= (self,var_escapemark) on <self:ABreakExpr> */
self->attrs[COLOR_nit__scope__AEscapeExpr___escapemark].val = var_escapemark; /* _escapemark on <self:ABreakExpr> */
RET_LABEL13:(void)0;
}
}
RET_LABEL:;
}
/* method scope#ADoExpr#break_mark for (self: ADoExpr): nullable EscapeMark */
val* nit__scope___ADoExpr___break_mark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_nit__scope__ADoExpr___break_mark].val; /* _break_mark on <self:ADoExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ADoExpr#break_mark= for (self: ADoExpr, nullable EscapeMark) */
void nit__scope___ADoExpr___break_mark_61d(val* self, val* p0) {
self->attrs[COLOR_nit__scope__ADoExpr___break_mark].val = p0; /* _break_mark on <self:ADoExpr> */
RET_LABEL:;
}
/* method scope#ADoExpr#accept_scope_visitor for (self: ADoExpr, ScopeVisitor) */
void nit__scope___ADoExpr___ANode__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : nullable ALabel */;
val* var2 /* : nullable ALabel */;
val* var3 /* : EscapeMark */;
val* var5 /* : nullable AExpr */;
val* var7 /* : nullable AExpr */;
val* var8 /* : nullable EscapeMark */;
val* var10 /* : nullable EscapeMark */;
var_v = p0;
{
{ /* Inline parser_nodes#ALabelable#n_label (self) on <self:ADoExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ADoExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit__scope___nit__scope__ScopeVisitor___make_escape_mark(var_v, var, 0);
}
{
{ /* Inline scope#ADoExpr#break_mark= (self,var3) on <self:ADoExpr> */
self->attrs[COLOR_nit__scope__ADoExpr___break_mark].val = var3; /* _break_mark on <self:ADoExpr> */
RET_LABEL4:(void)0;
}
}
{
{ /* Inline parser_nodes#ADoExpr#n_block (self) on <self:ADoExpr> */
var7 = self->attrs[COLOR_nit__parser_nodes__ADoExpr___n_block].val; /* _n_block on <self:ADoExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline scope#ADoExpr#break_mark (self) on <self:ADoExpr> */
var10 = self->attrs[COLOR_nit__scope__ADoExpr___break_mark].val; /* _break_mark on <self:ADoExpr> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
nit__scope___nit__scope__ScopeVisitor___enter_visit_block(var_v, var5, var8); /* Direct call scope#ScopeVisitor#enter_visit_block on <var_v:ScopeVisitor>*/
}
RET_LABEL:;
}
/* method scope#AIfExpr#accept_scope_visitor for (self: AIfExpr, ScopeVisitor) */
void nit__scope___AIfExpr___ANode__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable AExpr */;
val* var5 /* : nullable AExpr */;
val* var6 /* : nullable AExpr */;
val* var8 /* : nullable AExpr */;
var_v = p0;
{
{ /* Inline parser_nodes#AIfExpr#n_expr (self) on <self:AIfExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_expr].val; /* _n_expr on <self:AIfExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1857);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:ScopeVisitor>*/
}
{
{ /* Inline parser_nodes#AIfExpr#n_then (self) on <self:AIfExpr> */
var5 = self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_then].val; /* _n_then on <self:AIfExpr> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
nit__scope___nit__scope__ScopeVisitor___enter_visit_block(var_v, var3, ((val*)NULL)); /* Direct call scope#ScopeVisitor#enter_visit_block on <var_v:ScopeVisitor>*/
}
{
{ /* Inline parser_nodes#AIfExpr#n_else (self) on <self:AIfExpr> */
var8 = self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_else].val; /* _n_else on <self:AIfExpr> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
nit__scope___nit__scope__ScopeVisitor___enter_visit_block(var_v, var6, ((val*)NULL)); /* Direct call scope#ScopeVisitor#enter_visit_block on <var_v:ScopeVisitor>*/
}
RET_LABEL:;
}
/* method scope#AWhileExpr#break_mark for (self: AWhileExpr): nullable EscapeMark */
val* nit__scope___AWhileExpr___break_mark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_nit__scope__AWhileExpr___break_mark].val; /* _break_mark on <self:AWhileExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AWhileExpr#break_mark= for (self: AWhileExpr, nullable EscapeMark) */
void nit__scope___AWhileExpr___break_mark_61d(val* self, val* p0) {
self->attrs[COLOR_nit__scope__AWhileExpr___break_mark].val = p0; /* _break_mark on <self:AWhileExpr> */
RET_LABEL:;
}
/* method scope#AWhileExpr#continue_mark for (self: AWhileExpr): nullable EscapeMark */
val* nit__scope___AWhileExpr___continue_mark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_nit__scope__AWhileExpr___continue_mark].val; /* _continue_mark on <self:AWhileExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AWhileExpr#continue_mark= for (self: AWhileExpr, nullable EscapeMark) */
void nit__scope___AWhileExpr___continue_mark_61d(val* self, val* p0) {
self->attrs[COLOR_nit__scope__AWhileExpr___continue_mark].val = p0; /* _continue_mark on <self:AWhileExpr> */
RET_LABEL:;
}
/* method scope#AWhileExpr#accept_scope_visitor for (self: AWhileExpr, ScopeVisitor) */
void nit__scope___AWhileExpr___ANode__accept_scope_visitor(val* self, val* p0) {
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
{ /* Inline parser_nodes#ALabelable#n_label (self) on <self:AWhileExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AWhileExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit__scope___nit__scope__ScopeVisitor___make_escape_mark(var_v, var, 1);
}
var_escapemark = var3;
{
{ /* Inline scope#AWhileExpr#break_mark= (self,var_escapemark) on <self:AWhileExpr> */
self->attrs[COLOR_nit__scope__AWhileExpr___break_mark].val = var_escapemark; /* _break_mark on <self:AWhileExpr> */
RET_LABEL4:(void)0;
}
}
{
{ /* Inline scope#EscapeMark#continue_mark (var_escapemark) on <var_escapemark:EscapeMark> */
var7 = var_escapemark->attrs[COLOR_nit__scope__EscapeMark___continue_mark].val; /* _continue_mark on <var_escapemark:EscapeMark> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline scope#AWhileExpr#continue_mark= (self,var5) on <self:AWhileExpr> */
self->attrs[COLOR_nit__scope__AWhileExpr___continue_mark].val = var5; /* _continue_mark on <self:AWhileExpr> */
RET_LABEL8:(void)0;
}
}
{
{ /* Inline parser_nodes#AWhileExpr#n_expr (self) on <self:AWhileExpr> */
var11 = self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_expr].val; /* _n_expr on <self:AWhileExpr> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1904);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
nit___nit__Visitor___enter_visit(var_v, var9); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:ScopeVisitor>*/
}
{
{ /* Inline parser_nodes#AWhileExpr#n_block (self) on <self:AWhileExpr> */
var14 = self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_block].val; /* _n_block on <self:AWhileExpr> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
nit__scope___nit__scope__ScopeVisitor___enter_visit_block(var_v, var12, var_escapemark); /* Direct call scope#ScopeVisitor#enter_visit_block on <var_v:ScopeVisitor>*/
}
RET_LABEL:;
}
/* method scope#ALoopExpr#break_mark for (self: ALoopExpr): nullable EscapeMark */
val* nit__scope___ALoopExpr___break_mark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_nit__scope__ALoopExpr___break_mark].val; /* _break_mark on <self:ALoopExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ALoopExpr#break_mark= for (self: ALoopExpr, nullable EscapeMark) */
void nit__scope___ALoopExpr___break_mark_61d(val* self, val* p0) {
self->attrs[COLOR_nit__scope__ALoopExpr___break_mark].val = p0; /* _break_mark on <self:ALoopExpr> */
RET_LABEL:;
}
/* method scope#ALoopExpr#continue_mark for (self: ALoopExpr): nullable EscapeMark */
val* nit__scope___ALoopExpr___continue_mark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_nit__scope__ALoopExpr___continue_mark].val; /* _continue_mark on <self:ALoopExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ALoopExpr#continue_mark= for (self: ALoopExpr, nullable EscapeMark) */
void nit__scope___ALoopExpr___continue_mark_61d(val* self, val* p0) {
self->attrs[COLOR_nit__scope__ALoopExpr___continue_mark].val = p0; /* _continue_mark on <self:ALoopExpr> */
RET_LABEL:;
}
/* method scope#ALoopExpr#accept_scope_visitor for (self: ALoopExpr, ScopeVisitor) */
void nit__scope___ALoopExpr___ANode__accept_scope_visitor(val* self, val* p0) {
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
{ /* Inline parser_nodes#ALabelable#n_label (self) on <self:ALoopExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ALoopExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit__scope___nit__scope__ScopeVisitor___make_escape_mark(var_v, var, 1);
}
var_escapemark = var3;
{
{ /* Inline scope#ALoopExpr#break_mark= (self,var_escapemark) on <self:ALoopExpr> */
self->attrs[COLOR_nit__scope__ALoopExpr___break_mark].val = var_escapemark; /* _break_mark on <self:ALoopExpr> */
RET_LABEL4:(void)0;
}
}
{
{ /* Inline scope#EscapeMark#continue_mark (var_escapemark) on <var_escapemark:EscapeMark> */
var7 = var_escapemark->attrs[COLOR_nit__scope__EscapeMark___continue_mark].val; /* _continue_mark on <var_escapemark:EscapeMark> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline scope#ALoopExpr#continue_mark= (self,var5) on <self:ALoopExpr> */
self->attrs[COLOR_nit__scope__ALoopExpr___continue_mark].val = var5; /* _continue_mark on <self:ALoopExpr> */
RET_LABEL8:(void)0;
}
}
{
{ /* Inline parser_nodes#ALoopExpr#n_block (self) on <self:ALoopExpr> */
var11 = self->attrs[COLOR_nit__parser_nodes__ALoopExpr___n_block].val; /* _n_block on <self:ALoopExpr> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
nit__scope___nit__scope__ScopeVisitor___enter_visit_block(var_v, var9, var_escapemark); /* Direct call scope#ScopeVisitor#enter_visit_block on <var_v:ScopeVisitor>*/
}
RET_LABEL:;
}
/* method scope#AForExpr#variables for (self: AForExpr): nullable Array[Variable] */
val* nit__scope___AForExpr___variables(val* self) {
val* var /* : nullable Array[Variable] */;
val* var1 /* : nullable Array[Variable] */;
var1 = self->attrs[COLOR_nit__scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AForExpr#variables= for (self: AForExpr, nullable Array[Variable]) */
void nit__scope___AForExpr___variables_61d(val* self, val* p0) {
self->attrs[COLOR_nit__scope__AForExpr___variables].val = p0; /* _variables on <self:AForExpr> */
RET_LABEL:;
}
/* method scope#AForExpr#break_mark for (self: AForExpr): nullable EscapeMark */
val* nit__scope___AForExpr___break_mark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_nit__scope__AForExpr___break_mark].val; /* _break_mark on <self:AForExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AForExpr#break_mark= for (self: AForExpr, nullable EscapeMark) */
void nit__scope___AForExpr___break_mark_61d(val* self, val* p0) {
self->attrs[COLOR_nit__scope__AForExpr___break_mark].val = p0; /* _break_mark on <self:AForExpr> */
RET_LABEL:;
}
/* method scope#AForExpr#continue_mark for (self: AForExpr): nullable EscapeMark */
val* nit__scope___AForExpr___continue_mark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_nit__scope__AForExpr___continue_mark].val; /* _continue_mark on <self:AForExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AForExpr#continue_mark= for (self: AForExpr, nullable EscapeMark) */
void nit__scope___AForExpr___continue_mark_61d(val* self, val* p0) {
self->attrs[COLOR_nit__scope__AForExpr___continue_mark].val = p0; /* _continue_mark on <self:AForExpr> */
RET_LABEL:;
}
/* method scope#AForExpr#accept_scope_visitor for (self: AForExpr, ScopeVisitor) */
void nit__scope___AForExpr___ANode__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : List[Scope] */;
val* var5 /* : List[Scope] */;
val* var6 /* : Scope */;
val* var8 /* : Array[Variable] */;
val* var_variables /* var variables: Array[Variable] */;
val* var10 /* : ANodes[TId] */;
val* var12 /* : ANodes[TId] */;
val* var_ /* var : ANodes[TId] */;
val* var13 /* : Iterator[ANode] */;
val* var_14 /* var : Iterator[TId] */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
val* var_nid /* var nid: TId */;
val* var17 /* : Variable */;
val* var18 /* : String */;
val* var_va /* var va: Variable */;
short int var19 /* : Bool */;
val* var20 /* : nullable ALabel */;
val* var22 /* : nullable ALabel */;
val* var23 /* : EscapeMark */;
val* var_escapemark /* var escapemark: EscapeMark */;
val* var25 /* : nullable EscapeMark */;
val* var27 /* : nullable EscapeMark */;
val* var29 /* : nullable AExpr */;
val* var31 /* : nullable AExpr */;
var_v = p0;
{
{ /* Inline parser_nodes#AForExpr#n_expr (self) on <self:AForExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__AForExpr___n_expr].val; /* _n_expr on <self:AForExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1940);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:ScopeVisitor>*/
}
{
{ /* Inline scope#ScopeVisitor#scopes (var_v) on <var_v:ScopeVisitor> */
var5 = var_v->attrs[COLOR_nit__scope__ScopeVisitor___scopes].val; /* _scopes on <var_v:ScopeVisitor> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 80);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var6 = NEW_nit__scope__Scope(&type_nit__scope__Scope);
{
{ /* Inline kernel#Object#init (var6) on <var6:Scope> */
RET_LABEL7:(void)0;
}
}
{
standard___standard__List___standard__abstract_collection__Sequence__unshift(var3, var6); /* Direct call list#List#unshift on <var3:List[Scope]>*/
}
var8 = NEW_standard__Array(&type_standard__Array__nit__Variable);
{
standard___standard__Array___standard__kernel__Object__init(var8); /* Direct call array#Array#init on <var8:Array[Variable]>*/
}
var_variables = var8;
{
{ /* Inline scope#AForExpr#variables= (self,var_variables) on <self:AForExpr> */
self->attrs[COLOR_nit__scope__AForExpr___variables].val = var_variables; /* _variables on <self:AForExpr> */
RET_LABEL9:(void)0;
}
}
{
{ /* Inline parser_nodes#AForExpr#n_ids (self) on <self:AForExpr> */
var12 = self->attrs[COLOR_nit__parser_nodes__AForExpr___n_ids].val; /* _n_ids on <self:AForExpr> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_ids");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1934);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_ = var10;
{
var13 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_);
}
var_14 = var13;
for(;;) {
{
var15 = ((short int(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_14); /* is_ok on <var_14:Iterator[TId]>*/
}
if (var15){
{
var16 = ((val*(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_14); /* item on <var_14:Iterator[TId]>*/
}
var_nid = var16;
var17 = NEW_nit__Variable(&type_nit__Variable);
{
var18 = nit__lexer_work___Token___text(var_nid);
}
{
((void(*)(val* self, val* p0))(var17->class->vft[COLOR_nit__scope__Variable__name_61d]))(var17, var18); /* name= on <var17:Variable>*/
}
{
((void(*)(val* self))(var17->class->vft[COLOR_standard__kernel__Object__init]))(var17); /* init on <var17:Variable>*/
}
var_va = var17;
{
var19 = nit__scope___nit__scope__ScopeVisitor___register_variable(var_v, var_nid, var_va);
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_variables, var_va); /* Direct call array#Array#add on <var_variables:Array[Variable]>*/
}
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_14); /* next on <var_14:Iterator[TId]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_14); /* finish on <var_14:Iterator[TId]>*/
}
{
{ /* Inline parser_nodes#ALabelable#n_label (self) on <self:AForExpr> */
var22 = self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AForExpr> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = nit__scope___nit__scope__ScopeVisitor___make_escape_mark(var_v, var20, 1);
}
var_escapemark = var23;
{
{ /* Inline scope#AForExpr#break_mark= (self,var_escapemark) on <self:AForExpr> */
self->attrs[COLOR_nit__scope__AForExpr___break_mark].val = var_escapemark; /* _break_mark on <self:AForExpr> */
RET_LABEL24:(void)0;
}
}
{
{ /* Inline scope#EscapeMark#continue_mark (var_escapemark) on <var_escapemark:EscapeMark> */
var27 = var_escapemark->attrs[COLOR_nit__scope__EscapeMark___continue_mark].val; /* _continue_mark on <var_escapemark:EscapeMark> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline scope#AForExpr#continue_mark= (self,var25) on <self:AForExpr> */
self->attrs[COLOR_nit__scope__AForExpr___continue_mark].val = var25; /* _continue_mark on <self:AForExpr> */
RET_LABEL28:(void)0;
}
}
{
{ /* Inline parser_nodes#AForExpr#n_block (self) on <self:AForExpr> */
var31 = self->attrs[COLOR_nit__parser_nodes__AForExpr___n_block].val; /* _n_block on <self:AForExpr> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
nit__scope___nit__scope__ScopeVisitor___enter_visit_block(var_v, var29, var_escapemark); /* Direct call scope#ScopeVisitor#enter_visit_block on <var_v:ScopeVisitor>*/
}
{
nit__scope___nit__scope__ScopeVisitor___shift_scope(var_v); /* Direct call scope#ScopeVisitor#shift_scope on <var_v:ScopeVisitor>*/
}
RET_LABEL:;
}
/* method scope#AWithExpr#break_mark for (self: AWithExpr): nullable EscapeMark */
val* nit__scope___AWithExpr___break_mark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_nit__scope__AWithExpr___break_mark].val; /* _break_mark on <self:AWithExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AWithExpr#break_mark= for (self: AWithExpr, nullable EscapeMark) */
void nit__scope___AWithExpr___break_mark_61d(val* self, val* p0) {
self->attrs[COLOR_nit__scope__AWithExpr___break_mark].val = p0; /* _break_mark on <self:AWithExpr> */
RET_LABEL:;
}
/* method scope#AWithExpr#accept_scope_visitor for (self: AWithExpr, ScopeVisitor) */
void nit__scope___AWithExpr___ANode__accept_scope_visitor(val* self, val* p0) {
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
{ /* Inline scope#ScopeVisitor#scopes (var_v) on <var_v:ScopeVisitor> */
var2 = var_v->attrs[COLOR_nit__scope__ScopeVisitor___scopes].val; /* _scopes on <var_v:ScopeVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 80);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = NEW_nit__scope__Scope(&type_nit__scope__Scope);
{
{ /* Inline kernel#Object#init (var3) on <var3:Scope> */
RET_LABEL4:(void)0;
}
}
{
standard___standard__List___standard__abstract_collection__Sequence__unshift(var, var3); /* Direct call list#List#unshift on <var:List[Scope]>*/
}
{
{ /* Inline parser_nodes#ALabelable#n_label (self) on <self:AWithExpr> */
var7 = self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AWithExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nit__scope___nit__scope__ScopeVisitor___make_escape_mark(var_v, var5, 1);
}
var_escapemark = var8;
{
{ /* Inline scope#AWithExpr#break_mark= (self,var_escapemark) on <self:AWithExpr> */
self->attrs[COLOR_nit__scope__AWithExpr___break_mark].val = var_escapemark; /* _break_mark on <self:AWithExpr> */
RET_LABEL9:(void)0;
}
}
{
{ /* Inline parser_nodes#AWithExpr#n_expr (self) on <self:AWithExpr> */
var12 = self->attrs[COLOR_nit__parser_nodes__AWithExpr___n_expr].val; /* _n_expr on <self:AWithExpr> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1958);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
nit___nit__Visitor___enter_visit(var_v, var10); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:ScopeVisitor>*/
}
{
{ /* Inline parser_nodes#AWithExpr#n_block (self) on <self:AWithExpr> */
var15 = self->attrs[COLOR_nit__parser_nodes__AWithExpr___n_block].val; /* _n_block on <self:AWithExpr> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
nit__scope___nit__scope__ScopeVisitor___enter_visit_block(var_v, var13, var_escapemark); /* Direct call scope#ScopeVisitor#enter_visit_block on <var_v:ScopeVisitor>*/
}
{
nit__scope___nit__scope__ScopeVisitor___shift_scope(var_v); /* Direct call scope#ScopeVisitor#shift_scope on <var_v:ScopeVisitor>*/
}
RET_LABEL:;
}
/* method scope#AAssertExpr#accept_scope_visitor for (self: AAssertExpr, ScopeVisitor) */
void nit__scope___AAssertExpr___ANode__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable AExpr */;
val* var5 /* : nullable AExpr */;
var_v = p0;
{
{ /* Inline parser_nodes#AAssertExpr#n_expr (self) on <self:AAssertExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_expr].val; /* _n_expr on <self:AAssertExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1978);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nit___nit__Visitor___enter_visit(var_v, var); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:ScopeVisitor>*/
}
{
{ /* Inline parser_nodes#AAssertExpr#n_else (self) on <self:AAssertExpr> */
var5 = self->attrs[COLOR_nit__parser_nodes__AAssertExpr___n_else].val; /* _n_else on <self:AAssertExpr> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
nit__scope___nit__scope__ScopeVisitor___enter_visit_block(var_v, var3, ((val*)NULL)); /* Direct call scope#ScopeVisitor#enter_visit_block on <var_v:ScopeVisitor>*/
}
RET_LABEL:;
}
/* method scope#AVarFormExpr#variable for (self: AVarFormExpr): nullable Variable */
val* nit__scope___AVarFormExpr___variable(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
var1 = self->attrs[COLOR_nit__scope__AVarFormExpr___variable].val; /* _variable on <self:AVarFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AVarFormExpr#variable= for (self: AVarFormExpr, nullable Variable) */
void nit__scope___AVarFormExpr___variable_61d(val* self, val* p0) {
self->attrs[COLOR_nit__scope__AVarFormExpr___variable].val = p0; /* _variable on <self:AVarFormExpr> */
RET_LABEL:;
}
/* method scope#ACallFormExpr#accept_scope_visitor for (self: ACallFormExpr, ScopeVisitor) */
void nit__scope___ACallFormExpr___ANode__accept_scope_visitor(val* self, val* p0) {
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
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : AExprs */;
val* var17 /* : AExprs */;
val* var18 /* : ANodes[AExpr] */;
val* var20 /* : ANodes[AExpr] */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var_ /* var : Bool */;
val* var23 /* : AExprs */;
val* var25 /* : AExprs */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : NativeArray[String] */;
static val* varonce;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : FlatString */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : FlatString */;
val* var38 /* : String */;
val* var39 /* : AVarFormExpr */;
val* var_n /* var n: AExpr */;
var_v = p0;
{
{ /* Inline parser_nodes#ASendExpr#n_expr (self) on <self:ACallFormExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ACallFormExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2025);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
/* <var:AExpr> isa AImplicitSelfExpr */
cltype = type_nit__AImplicitSelfExpr.color;
idtype = type_nit__AImplicitSelfExpr.id;
if(cltype >= var->type->table_size) {
var3 = 0;
} else {
var3 = var->type->type_table[cltype] == idtype;
}
if (var3){
{
{ /* Inline parser_nodes#ACallFormExpr#n_id (self) on <self:ACallFormExpr> */
var6 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:ACallFormExpr> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2292);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nit__lexer_work___Token___text(var4);
}
var_name = var7;
{
var8 = nit__scope___nit__scope__ScopeVisitor___search_variable(var_v, var_name);
}
var_variable = var8;
if (var_variable == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_variable,((val*)NULL)) on <var_variable:nullable Variable> */
var_other = ((val*)NULL);
{
var12 = ((short int(*)(val* self, val* p0))(var_variable->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_variable, var_other); /* == on <var_variable:nullable Variable(Variable)>*/
}
var13 = !var12;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
{
{ /* Inline parser_nodes#ACallFormExpr#n_args (self) on <self:ACallFormExpr> */
var17 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallFormExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2295);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var15) on <var15:AExprs> */
var20 = var15->attrs[COLOR_nit__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var15:AExprs> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2771);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = nit___nit__ANodes___standard__abstract_collection__Collection__is_empty(var18);
}
var22 = !var21;
var_ = var22;
if (var22){
var14 = var_;
} else {
{
{ /* Inline parser_nodes#ACallFormExpr#n_args (self) on <self:ACallFormExpr> */
var25 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallFormExpr> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2295);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
/* <var23:AExprs> isa AParExprs */
cltype27 = type_nit__AParExprs.color;
idtype28 = type_nit__AParExprs.id;
if(cltype27 >= var23->type->table_size) {
var26 = 0;
} else {
var26 = var23->type->type_table[cltype27] == idtype28;
}
var14 = var26;
}
if (var14){
if (unlikely(varonce==NULL)) {
var29 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "Error: `";
var33 = standard___standard__NativeString___to_s_with_length(var32, 8l);
var31 = var33;
varonce30 = var31;
}
((struct instance_standard__NativeArray*)var29)->values[0]=var31;
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "` is a variable, not a method.";
var37 = standard___standard__NativeString___to_s_with_length(var36, 30l);
var35 = var37;
varonce34 = var35;
}
((struct instance_standard__NativeArray*)var29)->values[2]=var35;
} else {
var29 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var29)->values[1]=var_name;
{
var38 = ((val*(*)(val* self))(var29->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var29); /* native_to_s on <var29:NativeArray[String]>*/
}
varonce = var29;
{
nit__scope___nit__scope__ScopeVisitor___error(var_v, self, var38); /* Direct call scope#ScopeVisitor#error on <var_v:ScopeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
var39 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__scope__ACallFormExpr__variable_create]))(self, var_variable); /* variable_create on <self:ACallFormExpr>*/
}
var_n = var39;
{
{ /* Inline scope#AVarFormExpr#variable= (var_n,var_variable) on <var_n:AExpr(AVarFormExpr)> */
var_n->attrs[COLOR_nit__scope__AVarFormExpr___variable].val = var_variable; /* _variable on <var_n:AExpr(AVarFormExpr)> */
RET_LABEL40:(void)0;
}
}
{
nit__transform___AExpr___nit__parser_nodes__ANode__replace_with(self, var_n); /* Direct call transform#AExpr#replace_with on <self:ACallFormExpr>*/
}
{
nit__scope___ANode___accept_scope_visitor(var_n, var_v); /* Direct call scope#ANode#accept_scope_visitor on <var_n:AExpr(AVarFormExpr)>*/
}
goto RET_LABEL;
} else {
}
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit__scope___ACallFormExpr___ANode__accept_scope_visitor]))(self, p0); /* accept_scope_visitor on <self:ACallFormExpr>*/
}
RET_LABEL:;
}
/* method scope#ACallExpr#variable_create for (self: ACallExpr, Variable): AVarFormExpr */
val* nit__scope___ACallExpr___ACallFormExpr__variable_create(val* self, val* p0) {
val* var /* : AVarFormExpr */;
val* var_variable /* var variable: Variable */;
val* var2 /* : AVarExpr */;
val* var3 /* : TId */;
val* var5 /* : TId */;
var_variable = p0;
{
{ /* Inline scope#Variable#warn_unread= (var_variable,0) on <var_variable:Variable> */
var_variable->attrs[COLOR_nit__scope__Variable___warn_unread].s = 0; /* _warn_unread on <var_variable:Variable> */
RET_LABEL1:(void)0;
}
}
var2 = NEW_nit__AVarExpr(&type_nit__AVarExpr);
{
{ /* Inline parser_nodes#ACallFormExpr#n_id (self) on <self:ACallExpr> */
var5 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:ACallExpr> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2292);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
nit__parser_prod___AVarExpr___init_avarexpr(var2, var3); /* Direct call parser_prod#AVarExpr#init_avarexpr on <var2:AVarExpr>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method scope#ACallAssignExpr#variable_create for (self: ACallAssignExpr, Variable): AVarFormExpr */
val* nit__scope___ACallAssignExpr___ACallFormExpr__variable_create(val* self, val* p0) {
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
var1 = NEW_nit__AVarAssignExpr(&type_nit__AVarAssignExpr);
{
{ /* Inline parser_nodes#ACallFormExpr#n_id (self) on <self:ACallAssignExpr> */
var4 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:ACallAssignExpr> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2292);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline parser_nodes#AAssignFormExpr#n_assign (self) on <self:ACallAssignExpr> */
var7 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:ACallAssignExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1992);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline parser_nodes#AAssignFormExpr#n_value (self) on <self:ACallAssignExpr> */
var10 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:ACallAssignExpr> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1995);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
nit__parser_prod___AVarAssignExpr___init_avarassignexpr(var1, var2, var5, var8); /* Direct call parser_prod#AVarAssignExpr#init_avarassignexpr on <var1:AVarAssignExpr>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method scope#ACallReassignExpr#variable_create for (self: ACallReassignExpr, Variable): AVarFormExpr */
val* nit__scope___ACallReassignExpr___ACallFormExpr__variable_create(val* self, val* p0) {
val* var /* : AVarFormExpr */;
val* var_variable /* var variable: Variable */;
val* var2 /* : AVarReassignExpr */;
val* var3 /* : TId */;
val* var5 /* : TId */;
val* var6 /* : AAssignOp */;
val* var8 /* : AAssignOp */;
val* var9 /* : AExpr */;
val* var11 /* : AExpr */;
var_variable = p0;
{
{ /* Inline scope#Variable#warn_unread= (var_variable,0) on <var_variable:Variable> */
var_variable->attrs[COLOR_nit__scope__Variable___warn_unread].s = 0; /* _warn_unread on <var_variable:Variable> */
RET_LABEL1:(void)0;
}
}
var2 = NEW_nit__AVarReassignExpr(&type_nit__AVarReassignExpr);
{
{ /* Inline parser_nodes#ACallFormExpr#n_id (self) on <self:ACallReassignExpr> */
var5 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:ACallReassignExpr> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2292);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline parser_nodes#AReassignFormExpr#n_assign_op (self) on <self:ACallReassignExpr> */
var8 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:ACallReassignExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2003);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline parser_nodes#AReassignFormExpr#n_value (self) on <self:ACallReassignExpr> */
var11 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:ACallReassignExpr> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2006);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
nit__parser_prod___AVarReassignExpr___init_avarreassignexpr(var2, var3, var6, var9); /* Direct call parser_prod#AVarReassignExpr#init_avarreassignexpr on <var2:AVarReassignExpr>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
