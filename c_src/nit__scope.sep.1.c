#include "nit__scope.sep.0.h"
/* method scope#ToolContext#scope_phase for (self: ToolContext): Phase */
val* nit__scope___ToolContext___scope_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nit__scope__ToolContext___scope_phase].val; /* _scope_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scope_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 23);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 201);
show_backtrace(1);
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
show_backtrace(1);
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
((void (*)(val* self))(self->class->vft[COLOR_nit___nit__Variable___standard__kernel__Object__init]))(self) /* init on <self:Variable>*/;
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
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method scope#EscapeMark#init for (self: EscapeMark) */
void nit___nit__EscapeMark___standard__kernel__Object__init(val* self) {
{
((void (*)(val* self))(self->class->vft[COLOR_nit___nit__EscapeMark___standard__kernel__Object__init]))(self) /* init on <self:EscapeMark>*/;
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
show_backtrace(1);
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
show_backtrace(1);
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
((void (*)(val* self))(self->class->vft[COLOR_nit__scope___nit__scope__ScopeVisitor___standard__kernel__Object__init]))(self) /* init on <self:ScopeVisitor>*/;
}
{
{ /* Inline scope#ScopeVisitor#scopes (self) on <self:ScopeVisitor> */
var2 = self->attrs[COLOR_nit__scope__ScopeVisitor___scopes].val; /* _scopes on <self:ScopeVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 80);
show_backtrace(1);
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
show_backtrace(1);
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
var2 = self->attrs[COLOR_nit__scope__ScopeVisitor___scopes].val; /* _scopes on <self:ScopeVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 80);
show_backtrace(1);
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
show_backtrace(1);
}
{
{ /* Inline scope#ScopeVisitor#scopes (self) on <self:ScopeVisitor> */
var7 = self->attrs[COLOR_nit__scope__ScopeVisitor___scopes].val; /* _scopes on <self:ScopeVisitor> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 80);
show_backtrace(1);
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
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline hash_collection#HashMap#values (var9) on <var9:HashMap[String, Variable]> */
var14 = var9->attrs[COLOR_standard__hash_collection__HashMap___values].val; /* _values on <var9:HashMap[String, Variable]> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _values");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 276);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_ = var12;
{
var15 = ((val* (*)(val* self))(var_->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:RemovableCollection[Variable]>*/;
}
var_16 = var15;
for(;;) {
{
var17 = ((short int (*)(val* self))(var_16->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_16) /* is_ok on <var_16:Iterator[Variable]>*/;
}
if (var17){
{
var18 = ((val* (*)(val* self))(var_16->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_16) /* item on <var_16:Iterator[Variable]>*/;
}
var_v = var18;
{
{ /* Inline scope#Variable#warn_unread (var_v) on <var_v:Variable> */
var21 = var_v->attrs[COLOR_nit__scope__Variable___warn_unread].s; /* _warn_unread on <var_v:Variable> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
if (var19){
{
{ /* Inline scope#ScopeVisitor#toolcontext (self) on <self:ScopeVisitor> */
var24 = self->attrs[COLOR_nit__scope__ScopeVisitor___toolcontext].val; /* _toolcontext on <self:ScopeVisitor> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 70);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline scope#Variable#location (var_v) on <var_v:Variable> */
var27 = var_v->attrs[COLOR_nit__scope__Variable___location].val; /* _location on <var_v:Variable> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
if (varonce) {
var28 = varonce;
} else {
var29 = "unread-variable";
var30 = 15;
var31 = standard___standard__NativeString___to_s_with_length(var29, var30);
var28 = var31;
varonce = var28;
}
if (varonce32) {
var33 = varonce32;
} else {
var34 = "Warning: local variable ";
var35 = 24;
var36 = standard___standard__NativeString___to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
{
{ /* Inline scope#Variable#name (var_v) on <var_v:Variable> */
var39 = var_v->attrs[COLOR_nit__scope__Variable___name].val; /* _name on <var_v:Variable> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 35);
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
var44 = standard___standard__NativeString___to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
var45 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var45 = array_instance Array[Object] */
var46 = 3;
var47 = NEW_standard__NativeArray(var46, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var47)->values[0] = (val*) var33;
((struct instance_standard__NativeArray*)var47)->values[1] = (val*) var37;
((struct instance_standard__NativeArray*)var47)->values[2] = (val*) var41;
{
((void (*)(val* self, val* p0, long p1))(var45->class->vft[COLOR_standard__array__Array__with_native]))(var45, var47, var46) /* with_native on <var45:Array[Object]>*/;
}
}
{
var48 = ((val* (*)(val* self))(var45->class->vft[COLOR_standard__string__Object__to_s]))(var45) /* to_s on <var45:Array[Object]>*/;
}
{
nit___nit__ToolContext___advice(var22, var25, var28, var48); /* Direct call toolcontext#ToolContext#advice on <var22:ToolContext>*/
}
} else {
}
{
((void (*)(val* self))(var_16->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_16) /* next on <var_16:Iterator[Variable]>*/;
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
val* var5 /* : null */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : FlatString */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : FlatString */;
val* var20 /* : Array[Object] */;
long var21 /* : Int */;
val* var22 /* : NativeArray[Object] */;
val* var23 /* : String */;
short int var24 /* : Bool */;
val* var25 /* : List[Scope] */;
val* var27 /* : List[Scope] */;
val* var28 /* : nullable Object */;
val* var29 /* : HashMap[String, Variable] */;
val* var31 /* : HashMap[String, Variable] */;
val* var32 /* : Location */;
val* var34 /* : Location */;
short int var36 /* : Bool */;
var_node = p0;
var_variable = p1;
{
{ /* Inline scope#Variable#name (var_variable) on <var_variable:Variable> */
var3 = var_variable->attrs[COLOR_nit__scope__Variable___name].val; /* _name on <var_variable:Variable> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 35);
show_backtrace(1);
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
var9 = ((short int (*)(val* self, val* p0))(var_found->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_found, var_other) /* == on <var_found:nullable Variable(Variable)>*/;
}
var10 = !var9;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (var6){
if (varonce) {
var11 = varonce;
} else {
var12 = "Error: A variable named `";
var13 = 25;
var14 = standard___standard__NativeString___to_s_with_length(var12, var13);
var11 = var14;
varonce = var11;
}
if (varonce15) {
var16 = varonce15;
} else {
var17 = "\' already exists";
var18 = 16;
var19 = standard___standard__NativeString___to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
var20 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var20 = array_instance Array[Object] */
var21 = 3;
var22 = NEW_standard__NativeArray(var21, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var22)->values[0] = (val*) var11;
((struct instance_standard__NativeArray*)var22)->values[1] = (val*) var_name;
((struct instance_standard__NativeArray*)var22)->values[2] = (val*) var16;
{
((void (*)(val* self, val* p0, long p1))(var20->class->vft[COLOR_standard__array__Array__with_native]))(var20, var22, var21) /* with_native on <var20:Array[Object]>*/;
}
}
{
var23 = ((val* (*)(val* self))(var20->class->vft[COLOR_standard__string__Object__to_s]))(var20) /* to_s on <var20:Array[Object]>*/;
}
{
nit__scope___nit__scope__ScopeVisitor___error(self, var_node, var23); /* Direct call scope#ScopeVisitor#error on <self:ScopeVisitor>*/
}
var24 = 0;
var = var24;
goto RET_LABEL;
} else {
}
{
{ /* Inline scope#ScopeVisitor#scopes (self) on <self:ScopeVisitor> */
var27 = self->attrs[COLOR_nit__scope__ScopeVisitor___scopes].val; /* _scopes on <self:ScopeVisitor> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 80);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
var28 = standard___standard__List___standard__abstract_collection__Collection__first(var25);
}
{
{ /* Inline scope#Scope#variables (var28) on <var28:nullable Object(Scope)> */
var31 = var28->attrs[COLOR_nit__scope__Scope___variables].val; /* _variables on <var28:nullable Object(Scope)> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _variables");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 225);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var29, var_name, var_variable); /* Direct call hash_collection#HashMap#[]= on <var29:HashMap[String, Variable]>*/
}
{
{ /* Inline parser_nodes#ANode#location (var_node) on <var_node:ANode> */
var34 = var_node->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var_node:ANode> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 23);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline scope#Variable#location= (var_variable,var32) on <var_variable:Variable> */
var_variable->attrs[COLOR_nit__scope__Variable___location].val = var32; /* _location on <var_variable:Variable> */
RET_LABEL35:(void)0;
}
}
var36 = 1;
var = var36;
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
val* var9 /* : null */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var16 /* : null */;
var_name = p0;
{
{ /* Inline scope#ScopeVisitor#scopes (self) on <self:ScopeVisitor> */
var3 = self->attrs[COLOR_nit__scope__ScopeVisitor___scopes].val; /* _scopes on <self:ScopeVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 80);
show_backtrace(1);
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
var13 = ((short int (*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable Variable(Variable)>*/;
}
var14 = !var13;
var11 = var14;
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
standard___standard__ListIterator___standard__abstract_collection__Iterator__next(var_5); /* Direct call list#ListIterator#next on <var_5:ListIterator[Scope]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_5) on <var_5:ListIterator[Scope]> */
RET_LABEL15:(void)0;
}
}
var16 = NULL;
var = var16;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method scope#ScopeVisitor#visit for (self: ScopeVisitor, ANode) */
void nit__scope___nit__scope__ScopeVisitor___nit__parser_nodes__Visitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
var_n = p0;
{
((void (*)(val* self, val* p0))(var_n->class->vft[COLOR_nit__scope__ANode__accept_scope_visitor]))(var_n, self) /* accept_scope_visitor on <var_n:ANode>*/;
}
RET_LABEL:;
}
/* method scope#ScopeVisitor#enter_visit_block for (self: ScopeVisitor, nullable AExpr, nullable EscapeMark) */
void nit__scope___nit__scope__ScopeVisitor___enter_visit_block(val* self, val* p0, val* p1) {
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
var7 = NEW_nit__scope__Scope(&type_nit__scope__Scope);
{
{ /* Inline kernel#Object#init (var7) on <var7:Scope> */
RET_LABEL8:(void)0;
}
}
var_scope = var7;
{
{ /* Inline scope#Scope#escapemark= (var_scope,var_escapemark) on <var_scope:Scope> */
var_scope->attrs[COLOR_nit__scope__Scope___escapemark].val = var_escapemark; /* _escapemark on <var_scope:Scope> */
RET_LABEL9:(void)0;
}
}
{
{ /* Inline scope#ScopeVisitor#scopes (self) on <self:ScopeVisitor> */
var12 = self->attrs[COLOR_nit__scope__ScopeVisitor___scopes].val; /* _scopes on <self:ScopeVisitor> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 80);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
standard___standard__List___standard__abstract_collection__Sequence__unshift(var10, var_scope); /* Direct call list#List#unshift on <var10:List[Scope]>*/
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
val* var12 /* : null */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var_18 /* var : Bool */;
val* var19 /* : nullable String */;
val* var21 /* : nullable String */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var25 /* : null */;
var_name = p0;
{
{ /* Inline scope#ScopeVisitor#scopes (self) on <self:ScopeVisitor> */
var3 = self->attrs[COLOR_nit__scope__ScopeVisitor___scopes].val; /* _scopes on <self:ScopeVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 80);
show_backtrace(1);
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
var16 = ((short int (*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable EscapeMark(EscapeMark)>*/;
}
var17 = !var16;
var14 = var17;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
var_18 = var13;
if (var13){
{
{ /* Inline scope#EscapeMark#name (var_res) on <var_res:nullable EscapeMark(EscapeMark)> */
var21 = var_res->attrs[COLOR_nit__scope__EscapeMark___name].val; /* _name on <var_res:nullable EscapeMark(EscapeMark)> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
if (var19 == NULL) {
var22 = 0; /* <var_name:String> cannot be null */
} else {
var23 = ((short int (*)(val* self, val* p0))(var19->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var19, var_name) /* == on <var19:nullable String>*/;
var22 = var23;
}
var11 = var22;
} else {
var11 = var_18;
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
RET_LABEL24:(void)0;
}
}
var25 = NULL;
var = var25;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method scope#ScopeVisitor#make_escape_mark for (self: ScopeVisitor, nullable ALabel, Bool): EscapeMark */
val* nit__scope___nit__scope__ScopeVisitor___make_escape_mark(val* self, val* p0, short int p1) {
val* var /* : EscapeMark */;
val* var_nlabel /* var nlabel: nullable ALabel */;
short int var_for_loop /* var for_loop: Bool */;
val* var1 /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : nullable TId */;
val* var9 /* : nullable TId */;
val* var_nid /* var nid: nullable TId */;
val* var10 /* : null */;
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
val* var22 /* : nullable EscapeMark */;
val* var_res /* var res: nullable EscapeMark */;
val* var23 /* : null */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
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
val* var62 /* : EscapeMark */;
val* var_res63 /* var res: EscapeMark */;
val* var64 /* : EscapeMark */;
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
var5 = ((short int (*)(val* self, val* p0))(var_nlabel->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nlabel, var_other) /* == on <var_nlabel:nullable ALabel(ALabel)>*/;
}
var6 = !var5;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
{
{ /* Inline parser_nodes#ALabel#n_id (var_nlabel) on <var_nlabel:nullable ALabel(ALabel)> */
var9 = var_nlabel->attrs[COLOR_nit__parser_nodes__ALabel___n_id].val; /* _n_id on <var_nlabel:nullable ALabel(ALabel)> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_nid = var7;
var10 = NULL;
if (var_nid == NULL) {
var11 = 1; /* is null */
} else {
var11 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nid,var10) on <var_nid:nullable TId> */
var_other14 = var10;
{
{ /* Inline kernel#Object#is_same_instance (var_nid,var_other14) on <var_nid:nullable TId(TId)> */
var17 = var_nid == var_other14;
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
var19 = "";
var20 = 0;
var21 = standard___standard__NativeString___to_s_with_length(var19, var20);
var18 = var21;
varonce = var18;
}
{
var22 = nit__scope___nit__scope__ScopeVisitor___search_label(self, var18);
}
var_res = var22;
var23 = NULL;
if (var_res == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var23) on <var_res:nullable EscapeMark> */
var_other = var23;
{
var27 = ((short int (*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable EscapeMark(EscapeMark)>*/;
}
var28 = !var27;
var25 = var28;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var24 = var25;
}
if (var24){
if (varonce29) {
var30 = varonce29;
} else {
var31 = "Syntax error: anonymous label already defined.";
var32 = 46;
var33 = standard___standard__NativeString___to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
{
nit__scope___nit__scope__ScopeVisitor___error(self, var_nlabel, var30); /* Direct call scope#ScopeVisitor#error on <self:ScopeVisitor>*/
}
} else {
}
if (varonce34) {
var35 = varonce34;
} else {
var36 = "";
var37 = 0;
var38 = standard___standard__NativeString___to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
var_name = var35;
} else {
{
var39 = nit__lexer_work___Token___text(var_nid);
}
var_name = var39;
{
var40 = nit__scope___nit__scope__ScopeVisitor___search_label(self, var_name);
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
var45 = ((short int (*)(val* self, val* p0))(var_found->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_found, var_other) /* == on <var_found:nullable EscapeMark(EscapeMark)>*/;
}
var46 = !var45;
var43 = var46;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
var42 = var43;
}
if (var42){
if (varonce47) {
var48 = varonce47;
} else {
var49 = "Syntax error: label ";
var50 = 20;
var51 = standard___standard__NativeString___to_s_with_length(var49, var50);
var48 = var51;
varonce47 = var48;
}
if (varonce52) {
var53 = varonce52;
} else {
var54 = " already defined.";
var55 = 17;
var56 = standard___standard__NativeString___to_s_with_length(var54, var55);
var53 = var56;
varonce52 = var53;
}
var57 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var57 = array_instance Array[Object] */
var58 = 3;
var59 = NEW_standard__NativeArray(var58, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var59)->values[0] = (val*) var48;
((struct instance_standard__NativeArray*)var59)->values[1] = (val*) var_name;
((struct instance_standard__NativeArray*)var59)->values[2] = (val*) var53;
{
((void (*)(val* self, val* p0, long p1))(var57->class->vft[COLOR_standard__array__Array__with_native]))(var57, var59, var58) /* with_native on <var57:Array[Object]>*/;
}
}
{
var60 = ((val* (*)(val* self))(var57->class->vft[COLOR_standard__string__Object__to_s]))(var57) /* to_s on <var57:Array[Object]>*/;
}
{
nit__scope___nit__scope__ScopeVisitor___error(self, var_nlabel, var60); /* Direct call scope#ScopeVisitor#error on <self:ScopeVisitor>*/
}
} else {
}
}
} else {
var61 = NULL;
var_name = var61;
}
var62 = NEW_nit__EscapeMark(&type_nit__EscapeMark);
{
((void (*)(val* self, val* p0))(var62->class->vft[COLOR_nit__scope__EscapeMark__name_61d]))(var62, var_name) /* name= on <var62:EscapeMark>*/;
}
{
((void (*)(val* self))(var62->class->vft[COLOR_standard__kernel__Object__init]))(var62) /* init on <var62:EscapeMark>*/;
}
var_res63 = var62;
if (var_for_loop){
var64 = NEW_nit__EscapeMark(&type_nit__EscapeMark);
{
((void (*)(val* self, val* p0))(var64->class->vft[COLOR_nit__scope__EscapeMark__name_61d]))(var64, var_name) /* name= on <var64:EscapeMark>*/;
}
{
((void (*)(val* self))(var64->class->vft[COLOR_standard__kernel__Object__init]))(var64) /* init on <var64:EscapeMark>*/;
}
{
{ /* Inline scope#EscapeMark#continue_mark= (var_res63,var64) on <var_res63:EscapeMark> */
var_res63->attrs[COLOR_nit__scope__EscapeMark___continue_mark].val = var64; /* _continue_mark on <var_res63:EscapeMark> */
RET_LABEL65:(void)0;
}
}
} else {
}
var = var_res63;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method scope#ScopeVisitor#get_escapemark for (self: ScopeVisitor, ANode, nullable ALabel): nullable EscapeMark */
val* nit__scope___nit__scope__ScopeVisitor___get_escapemark(val* self, val* p0, val* p1) {
val* var /* : nullable EscapeMark */;
val* var_node /* var node: ANode */;
val* var_nlabel /* var nlabel: nullable ALabel */;
val* var1 /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : nullable TId */;
val* var9 /* : nullable TId */;
val* var_nid /* var nid: nullable TId */;
val* var10 /* : null */;
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
val* var22 /* : nullable EscapeMark */;
val* var_res /* var res: nullable EscapeMark */;
val* var23 /* : null */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
long var33 /* : Int */;
val* var34 /* : FlatString */;
val* var35 /* : null */;
val* var36 /* : String */;
val* var_name /* var name: String */;
val* var37 /* : nullable EscapeMark */;
val* var_res38 /* var res: nullable EscapeMark */;
val* var39 /* : null */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
long var49 /* : Int */;
val* var50 /* : FlatString */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : FlatString */;
val* var56 /* : Array[Object] */;
long var57 /* : Int */;
val* var58 /* : NativeArray[Object] */;
val* var59 /* : String */;
val* var60 /* : null */;
val* var61 /* : List[Scope] */;
val* var63 /* : List[Scope] */;
val* var_ /* var : List[Scope] */;
val* var64 /* : ListIterator[nullable Object] */;
val* var_65 /* var : ListIterator[Scope] */;
short int var66 /* : Bool */;
val* var67 /* : nullable Object */;
val* var_scope /* var scope: Scope */;
val* var68 /* : nullable EscapeMark */;
val* var70 /* : nullable EscapeMark */;
val* var_res71 /* var res: nullable EscapeMark */;
val* var72 /* : null */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
short int var76 /* : Bool */;
short int var77 /* : Bool */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
long var82 /* : Int */;
val* var83 /* : FlatString */;
val* var84 /* : null */;
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
var5 = ((short int (*)(val* self, val* p0))(var_nlabel->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nlabel, var_other) /* == on <var_nlabel:nullable ALabel(ALabel)>*/;
}
var6 = !var5;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
{
{ /* Inline parser_nodes#ALabel#n_id (var_nlabel) on <var_nlabel:nullable ALabel(ALabel)> */
var9 = var_nlabel->attrs[COLOR_nit__parser_nodes__ALabel___n_id].val; /* _n_id on <var_nlabel:nullable ALabel(ALabel)> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_nid = var7;
var10 = NULL;
if (var_nid == NULL) {
var11 = 1; /* is null */
} else {
var11 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nid,var10) on <var_nid:nullable TId> */
var_other14 = var10;
{
{ /* Inline kernel#Object#is_same_instance (var_nid,var_other14) on <var_nid:nullable TId(TId)> */
var17 = var_nid == var_other14;
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
var19 = "";
var20 = 0;
var21 = standard___standard__NativeString___to_s_with_length(var19, var20);
var18 = var21;
varonce = var18;
}
{
var22 = nit__scope___nit__scope__ScopeVisitor___search_label(self, var18);
}
var_res = var22;
var23 = NULL;
if (var_res == NULL) {
var24 = 1; /* is null */
} else {
var24 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res,var23) on <var_res:nullable EscapeMark> */
var_other14 = var23;
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other14) on <var_res:nullable EscapeMark(EscapeMark)> */
var29 = var_res == var_other14;
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
if (varonce30) {
var31 = varonce30;
} else {
var32 = "Syntax error: invalid anonymous label.";
var33 = 38;
var34 = standard___standard__NativeString___to_s_with_length(var32, var33);
var31 = var34;
varonce30 = var31;
}
{
nit__scope___nit__scope__ScopeVisitor___error(self, var_nlabel, var31); /* Direct call scope#ScopeVisitor#error on <self:ScopeVisitor>*/
}
var35 = NULL;
var = var35;
goto RET_LABEL;
} else {
}
var = var_res;
goto RET_LABEL;
} else {
}
{
var36 = nit__lexer_work___Token___text(var_nid);
}
var_name = var36;
{
var37 = nit__scope___nit__scope__ScopeVisitor___search_label(self, var_name);
}
var_res38 = var37;
var39 = NULL;
if (var_res38 == NULL) {
var40 = 1; /* is null */
} else {
var40 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res38,var39) on <var_res38:nullable EscapeMark> */
var_other14 = var39;
{
{ /* Inline kernel#Object#is_same_instance (var_res38,var_other14) on <var_res38:nullable EscapeMark(EscapeMark)> */
var45 = var_res38 == var_other14;
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
if (varonce46) {
var47 = varonce46;
} else {
var48 = "Syntax error: invalid label ";
var49 = 28;
var50 = standard___standard__NativeString___to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
if (varonce51) {
var52 = varonce51;
} else {
var53 = ".";
var54 = 1;
var55 = standard___standard__NativeString___to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
var56 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var56 = array_instance Array[Object] */
var57 = 3;
var58 = NEW_standard__NativeArray(var57, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var58)->values[0] = (val*) var47;
((struct instance_standard__NativeArray*)var58)->values[1] = (val*) var_name;
((struct instance_standard__NativeArray*)var58)->values[2] = (val*) var52;
{
((void (*)(val* self, val* p0, long p1))(var56->class->vft[COLOR_standard__array__Array__with_native]))(var56, var58, var57) /* with_native on <var56:Array[Object]>*/;
}
}
{
var59 = ((val* (*)(val* self))(var56->class->vft[COLOR_standard__string__Object__to_s]))(var56) /* to_s on <var56:Array[Object]>*/;
}
{
nit__scope___nit__scope__ScopeVisitor___error(self, var_nlabel, var59); /* Direct call scope#ScopeVisitor#error on <self:ScopeVisitor>*/
}
var60 = NULL;
var = var60;
goto RET_LABEL;
} else {
}
var = var_res38;
goto RET_LABEL;
} else {
{
{ /* Inline scope#ScopeVisitor#scopes (self) on <self:ScopeVisitor> */
var63 = self->attrs[COLOR_nit__scope__ScopeVisitor___scopes].val; /* _scopes on <self:ScopeVisitor> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scopes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 80);
show_backtrace(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
var_ = var61;
{
var64 = standard___standard__List___standard__abstract_collection__Collection__iterator(var_);
}
var_65 = var64;
for(;;) {
{
var66 = standard___standard__ListIterator___standard__abstract_collection__Iterator__is_ok(var_65);
}
if (var66){
{
var67 = standard___standard__ListIterator___standard__abstract_collection__Iterator__item(var_65);
}
var_scope = var67;
{
{ /* Inline scope#Scope#escapemark (var_scope) on <var_scope:Scope> */
var70 = var_scope->attrs[COLOR_nit__scope__Scope___escapemark].val; /* _escapemark on <var_scope:Scope> */
var68 = var70;
RET_LABEL69:(void)0;
}
}
var_res71 = var68;
var72 = NULL;
if (var_res71 == NULL) {
var73 = 0; /* is null */
} else {
var73 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res71,var72) on <var_res71:nullable EscapeMark> */
var_other = var72;
{
var76 = ((short int (*)(val* self, val* p0))(var_res71->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res71, var_other) /* == on <var_res71:nullable EscapeMark(EscapeMark)>*/;
}
var77 = !var76;
var74 = var77;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
var73 = var74;
}
if (var73){
var = var_res71;
goto RET_LABEL;
} else {
}
{
standard___standard__ListIterator___standard__abstract_collection__Iterator__next(var_65); /* Direct call list#ListIterator#next on <var_65:ListIterator[Scope]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_65) on <var_65:ListIterator[Scope]> */
RET_LABEL78:(void)0;
}
}
if (varonce79) {
var80 = varonce79;
} else {
var81 = "Syntax Error: \'break\' statement outside block.";
var82 = 46;
var83 = standard___standard__NativeString___to_s_with_length(var81, var82);
var80 = var83;
varonce79 = var80;
}
{
nit__scope___nit__scope__ScopeVisitor___error(self, var_node, var80); /* Direct call scope#ScopeVisitor#error on <self:ScopeVisitor>*/
}
var84 = NULL;
var = var84;
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
var_node = p0;
var_message = p1;
{
{ /* Inline scope#ScopeVisitor#toolcontext (self) on <self:ScopeVisitor> */
var2 = self->attrs[COLOR_nit__scope__ScopeVisitor___toolcontext].val; /* _toolcontext on <self:ScopeVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 70);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = ((val* (*)(val* self))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__hot_location]))(var_node) /* hot_location on <var_node:ANode>*/;
}
{
nit___nit__ToolContext___error(var, var3, var_message); /* Direct call toolcontext#ToolContext#error on <var:ToolContext>*/
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
show_backtrace(1);
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
val* var9 /* : null */;
var_name = p0;
{
{ /* Inline scope#Scope#variables (self) on <self:Scope> */
var3 = self->attrs[COLOR_nit__scope__Scope___variables].val; /* _variables on <self:Scope> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _variables");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 225);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = standard___standard__MapRead___has_key(var1, var_name);
}
if (var4){
{
{ /* Inline scope#Scope#variables (self) on <self:Scope> */
var7 = self->attrs[COLOR_nit__scope__Scope___variables].val; /* _variables on <self:Scope> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _variables");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 225);
show_backtrace(1);
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
var9 = NULL;
var = var9;
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
((void (*)(val* self, val* p0))(self->class->vft[COLOR_nit__parser_nodes__ANode__visit_all]))(self, var_v) /* visit_all on <self:ANode>*/;
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
((void (*)(val* self, val* p0))(var->class->vft[COLOR_nit__scope__ScopeVisitor__toolcontext_61d]))(var, var_toolcontext) /* toolcontext= on <var:ScopeVisitor>*/;
}
{
((void (*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var) /* init on <var:ScopeVisitor>*/;
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
((void (*)(val* self, val* p0))(self->class->vft[COLOR_nit__scope___AParam___ANode__accept_scope_visitor]))(self, p0) /* accept_scope_visitor on <self:AParam>*/;
}
{
{ /* Inline parser_nodes#AParam#n_id (self) on <self:AParam> */
var2 = self->attrs[COLOR_nit__parser_nodes__AParam___n_id].val; /* _n_id on <self:AParam> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1520);
show_backtrace(1);
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
((void (*)(val* self, val* p0))(var3->class->vft[COLOR_nit__scope__Variable__name_61d]))(var3, var4) /* name= on <var3:Variable>*/;
}
{
((void (*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3) /* init on <var3:Variable>*/;
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
short int var6 /* : Bool */;
var_v = p0;
{
((void (*)(val* self, val* p0))(self->class->vft[COLOR_nit__scope___AVardeclExpr___ANode__accept_scope_visitor]))(self, p0) /* accept_scope_visitor on <self:AVardeclExpr>*/;
}
{
{ /* Inline parser_nodes#AVardeclExpr#n_id (self) on <self:AVardeclExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_id].val; /* _n_id on <self:AVardeclExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1580);
show_backtrace(1);
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
((void (*)(val* self, val* p0))(var3->class->vft[COLOR_nit__scope__Variable__name_61d]))(var3, var4) /* name= on <var3:Variable>*/;
}
{
((void (*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3) /* init on <var3:Variable>*/;
}
var_variable = var3;
{
var5 = nit__scope___nit__scope__ScopeVisitor___register_variable(var_v, var_nid, var_variable);
}
var6 = 1;
{
{ /* Inline scope#Variable#warn_unread= (var_variable,var6) on <var_variable:Variable> */
var_variable->attrs[COLOR_nit__scope__Variable___warn_unread].s = var6; /* _warn_unread on <var_variable:Variable> */
RET_LABEL7:(void)0;
}
}
{
{ /* Inline scope#AVardeclExpr#variable= (self,var_variable) on <self:AVardeclExpr> */
self->attrs[COLOR_nit__scope__AVardeclExpr___variable].val = var_variable; /* _variable on <self:AVardeclExpr> */
RET_LABEL8:(void)0;
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
((void (*)(val* self, val* p0))(self->class->vft[COLOR_nit__scope___ASelfExpr___ANode__accept_scope_visitor]))(self, p0) /* accept_scope_visitor on <self:ASelfExpr>*/;
}
{
{ /* Inline scope#ScopeVisitor#selfvariable (var_v) on <var_v:ScopeVisitor> */
var2 = var_v->attrs[COLOR_nit__scope__ScopeVisitor___selfvariable].val; /* _selfvariable on <var_v:ScopeVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _selfvariable");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 73);
show_backtrace(1);
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
((void (*)(val* self, val* p0))(self->class->vft[COLOR_nit__scope___AContinueExpr___ANode__accept_scope_visitor]))(self, p0) /* accept_scope_visitor on <self:AContinueExpr>*/;
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
var13 = var_escapemark->attrs[COLOR_nit__scope__EscapeMark___continue_mark].val; /* _continue_mark on <var_escapemark:nullable EscapeMark(EscapeMark)> */
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
var24 = standard___standard__NativeString___to_s_with_length(var22, var23);
var21 = var24;
varonce = var21;
}
{
nit__scope___nit__scope__ScopeVisitor___error(var_v, self, var21); /* Direct call scope#ScopeVisitor#error on <var_v:ScopeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline scope#EscapeMark#escapes (var_escapemark) on <var_escapemark:nullable EscapeMark(EscapeMark)> */
var27 = var_escapemark->attrs[COLOR_nit__scope__EscapeMark___escapes].val; /* _escapes on <var_escapemark:nullable EscapeMark(EscapeMark)> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 58);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var25, self); /* Direct call array#Array#add on <var25:Array[AEscapeExpr]>*/
}
{
{ /* Inline scope#AEscapeExpr#escapemark= (self,var_escapemark) on <self:AContinueExpr> */
self->attrs[COLOR_nit__scope__AEscapeExpr___escapemark].val = var_escapemark; /* _escapemark on <self:AContinueExpr> */
RET_LABEL28:(void)0;
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
((void (*)(val* self, val* p0))(self->class->vft[COLOR_nit__scope___ABreakExpr___ANode__accept_scope_visitor]))(self, p0) /* accept_scope_visitor on <self:ABreakExpr>*/;
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
var13 = var_escapemark->attrs[COLOR_nit__scope__EscapeMark___escapes].val; /* _escapes on <var_escapemark:nullable EscapeMark(EscapeMark)> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 58);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var11, self); /* Direct call array#Array#add on <var11:Array[AEscapeExpr]>*/
}
{
{ /* Inline scope#AEscapeExpr#escapemark= (self,var_escapemark) on <self:ABreakExpr> */
self->attrs[COLOR_nit__scope__AEscapeExpr___escapemark].val = var_escapemark; /* _escapemark on <self:ABreakExpr> */
RET_LABEL14:(void)0;
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
short int var3 /* : Bool */;
val* var4 /* : EscapeMark */;
val* var6 /* : nullable AExpr */;
val* var8 /* : nullable AExpr */;
val* var9 /* : nullable EscapeMark */;
val* var11 /* : nullable EscapeMark */;
var_v = p0;
{
{ /* Inline parser_nodes#ALabelable#n_label (self) on <self:ADoExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ADoExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = 0;
{
var4 = nit__scope___nit__scope__ScopeVisitor___make_escape_mark(var_v, var, var3);
}
{
{ /* Inline scope#ADoExpr#break_mark= (self,var4) on <self:ADoExpr> */
self->attrs[COLOR_nit__scope__ADoExpr___break_mark].val = var4; /* _break_mark on <self:ADoExpr> */
RET_LABEL5:(void)0;
}
}
{
{ /* Inline parser_nodes#ADoExpr#n_block (self) on <self:ADoExpr> */
var8 = self->attrs[COLOR_nit__parser_nodes__ADoExpr___n_block].val; /* _n_block on <self:ADoExpr> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline scope#ADoExpr#break_mark (self) on <self:ADoExpr> */
var11 = self->attrs[COLOR_nit__scope__ADoExpr___break_mark].val; /* _break_mark on <self:ADoExpr> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
nit__scope___nit__scope__ScopeVisitor___enter_visit_block(var_v, var6, var9); /* Direct call scope#ScopeVisitor#enter_visit_block on <var_v:ScopeVisitor>*/
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
val* var6 /* : null */;
val* var7 /* : nullable AExpr */;
val* var9 /* : nullable AExpr */;
val* var10 /* : null */;
var_v = p0;
{
{ /* Inline parser_nodes#AIfExpr#n_expr (self) on <self:AIfExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_expr].val; /* _n_expr on <self:AIfExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1664);
show_backtrace(1);
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
var6 = NULL;
{
nit__scope___nit__scope__ScopeVisitor___enter_visit_block(var_v, var3, var6); /* Direct call scope#ScopeVisitor#enter_visit_block on <var_v:ScopeVisitor>*/
}
{
{ /* Inline parser_nodes#AIfExpr#n_else (self) on <self:AIfExpr> */
var9 = self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_else].val; /* _n_else on <self:AIfExpr> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
var10 = NULL;
{
nit__scope___nit__scope__ScopeVisitor___enter_visit_block(var_v, var7, var10); /* Direct call scope#ScopeVisitor#enter_visit_block on <var_v:ScopeVisitor>*/
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
var2 = self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AWhileExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = 1;
{
var4 = nit__scope___nit__scope__ScopeVisitor___make_escape_mark(var_v, var, var3);
}
var_escapemark = var4;
{
{ /* Inline scope#AWhileExpr#break_mark= (self,var_escapemark) on <self:AWhileExpr> */
self->attrs[COLOR_nit__scope__AWhileExpr___break_mark].val = var_escapemark; /* _break_mark on <self:AWhileExpr> */
RET_LABEL5:(void)0;
}
}
{
{ /* Inline scope#EscapeMark#continue_mark (var_escapemark) on <var_escapemark:EscapeMark> */
var8 = var_escapemark->attrs[COLOR_nit__scope__EscapeMark___continue_mark].val; /* _continue_mark on <var_escapemark:EscapeMark> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline scope#AWhileExpr#continue_mark= (self,var6) on <self:AWhileExpr> */
self->attrs[COLOR_nit__scope__AWhileExpr___continue_mark].val = var6; /* _continue_mark on <self:AWhileExpr> */
RET_LABEL9:(void)0;
}
}
{
{ /* Inline parser_nodes#AWhileExpr#n_expr (self) on <self:AWhileExpr> */
var12 = self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_expr].val; /* _n_expr on <self:AWhileExpr> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1705);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
nit___nit__Visitor___enter_visit(var_v, var10); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:ScopeVisitor>*/
}
{
{ /* Inline parser_nodes#AWhileExpr#n_block (self) on <self:AWhileExpr> */
var15 = self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_block].val; /* _n_block on <self:AWhileExpr> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
nit__scope___nit__scope__ScopeVisitor___enter_visit_block(var_v, var13, var_escapemark); /* Direct call scope#ScopeVisitor#enter_visit_block on <var_v:ScopeVisitor>*/
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
var2 = self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:ALoopExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = 1;
{
var4 = nit__scope___nit__scope__ScopeVisitor___make_escape_mark(var_v, var, var3);
}
var_escapemark = var4;
{
{ /* Inline scope#ALoopExpr#break_mark= (self,var_escapemark) on <self:ALoopExpr> */
self->attrs[COLOR_nit__scope__ALoopExpr___break_mark].val = var_escapemark; /* _break_mark on <self:ALoopExpr> */
RET_LABEL5:(void)0;
}
}
{
{ /* Inline scope#EscapeMark#continue_mark (var_escapemark) on <var_escapemark:EscapeMark> */
var8 = var_escapemark->attrs[COLOR_nit__scope__EscapeMark___continue_mark].val; /* _continue_mark on <var_escapemark:EscapeMark> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline scope#ALoopExpr#continue_mark= (self,var6) on <self:ALoopExpr> */
self->attrs[COLOR_nit__scope__ALoopExpr___continue_mark].val = var6; /* _continue_mark on <self:ALoopExpr> */
RET_LABEL9:(void)0;
}
}
{
{ /* Inline parser_nodes#ALoopExpr#n_block (self) on <self:ALoopExpr> */
var12 = self->attrs[COLOR_nit__parser_nodes__ALoopExpr___n_block].val; /* _n_block on <self:ALoopExpr> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
nit__scope___nit__scope__ScopeVisitor___enter_visit_block(var_v, var10, var_escapemark); /* Direct call scope#ScopeVisitor#enter_visit_block on <var_v:ScopeVisitor>*/
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
val* var21 /* : nullable ALabel */;
val* var23 /* : nullable ALabel */;
short int var24 /* : Bool */;
val* var25 /* : EscapeMark */;
val* var_escapemark /* var escapemark: EscapeMark */;
val* var27 /* : nullable EscapeMark */;
val* var29 /* : nullable EscapeMark */;
val* var31 /* : nullable AExpr */;
val* var33 /* : nullable AExpr */;
var_v = p0;
{
{ /* Inline parser_nodes#AForExpr#n_expr (self) on <self:AForExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__AForExpr___n_expr].val; /* _n_expr on <self:AForExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1738);
show_backtrace(1);
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
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1735);
show_backtrace(1);
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
var15 = ((short int (*)(val* self))(var_14->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_14) /* is_ok on <var_14:Iterator[TId]>*/;
}
if (var15){
{
var16 = ((val* (*)(val* self))(var_14->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_14) /* item on <var_14:Iterator[TId]>*/;
}
var_nid = var16;
var17 = NEW_nit__Variable(&type_nit__Variable);
{
var18 = nit__lexer_work___Token___text(var_nid);
}
{
((void (*)(val* self, val* p0))(var17->class->vft[COLOR_nit__scope__Variable__name_61d]))(var17, var18) /* name= on <var17:Variable>*/;
}
{
((void (*)(val* self))(var17->class->vft[COLOR_standard__kernel__Object__init]))(var17) /* init on <var17:Variable>*/;
}
var_va = var17;
{
var19 = nit__scope___nit__scope__ScopeVisitor___register_variable(var_v, var_nid, var_va);
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_variables, var_va); /* Direct call array#Array#add on <var_variables:Array[Variable]>*/
}
{
((void (*)(val* self))(var_14->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_14) /* next on <var_14:Iterator[TId]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_14) on <var_14:Iterator[TId]> */
RET_LABEL20:(void)0;
}
}
{
{ /* Inline parser_nodes#ALabelable#n_label (self) on <self:AForExpr> */
var23 = self->attrs[COLOR_nit__parser_nodes__ALabelable___n_label].val; /* _n_label on <self:AForExpr> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
var24 = 1;
{
var25 = nit__scope___nit__scope__ScopeVisitor___make_escape_mark(var_v, var21, var24);
}
var_escapemark = var25;
{
{ /* Inline scope#AForExpr#break_mark= (self,var_escapemark) on <self:AForExpr> */
self->attrs[COLOR_nit__scope__AForExpr___break_mark].val = var_escapemark; /* _break_mark on <self:AForExpr> */
RET_LABEL26:(void)0;
}
}
{
{ /* Inline scope#EscapeMark#continue_mark (var_escapemark) on <var_escapemark:EscapeMark> */
var29 = var_escapemark->attrs[COLOR_nit__scope__EscapeMark___continue_mark].val; /* _continue_mark on <var_escapemark:EscapeMark> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline scope#AForExpr#continue_mark= (self,var27) on <self:AForExpr> */
self->attrs[COLOR_nit__scope__AForExpr___continue_mark].val = var27; /* _continue_mark on <self:AForExpr> */
RET_LABEL30:(void)0;
}
}
{
{ /* Inline parser_nodes#AForExpr#n_block (self) on <self:AForExpr> */
var33 = self->attrs[COLOR_nit__parser_nodes__AForExpr___n_block].val; /* _n_block on <self:AForExpr> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
nit__scope___nit__scope__ScopeVisitor___enter_visit_block(var_v, var31, var_escapemark); /* Direct call scope#ScopeVisitor#enter_visit_block on <var_v:ScopeVisitor>*/
}
{
nit__scope___nit__scope__ScopeVisitor___shift_scope(var_v); /* Direct call scope#ScopeVisitor#shift_scope on <var_v:ScopeVisitor>*/
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
val* var9 /* : null */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : AExprs */;
val* var18 /* : AExprs */;
val* var19 /* : ANodes[AExpr] */;
val* var21 /* : ANodes[AExpr] */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var_ /* var : Bool */;
val* var24 /* : AExprs */;
val* var26 /* : AExprs */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
static val* varonce;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : FlatString */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : FlatString */;
val* var39 /* : Array[Object] */;
long var40 /* : Int */;
val* var41 /* : NativeArray[Object] */;
val* var42 /* : String */;
val* var43 /* : AVarFormExpr */;
val* var_n /* var n: AExpr */;
var_v = p0;
{
{ /* Inline parser_nodes#ASendExpr#n_expr (self) on <self:ACallFormExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ACallFormExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1802);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1999);
show_backtrace(1);
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
var13 = ((short int (*)(val* self, val* p0))(var_variable->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_variable, var_other) /* == on <var_variable:nullable Variable(Variable)>*/;
}
var14 = !var13;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
if (var10){
{
{ /* Inline parser_nodes#ACallFormExpr#n_args (self) on <self:ACallFormExpr> */
var18 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallFormExpr> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2002);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var16) on <var16:AExprs> */
var21 = var16->attrs[COLOR_nit__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var16:AExprs> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2408);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = nit___nit__ANodes___standard__abstract_collection__Collection__is_empty(var19);
}
var23 = !var22;
var_ = var23;
if (var23){
var15 = var_;
} else {
{
{ /* Inline parser_nodes#ACallFormExpr#n_args (self) on <self:ACallFormExpr> */
var26 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallFormExpr> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2002);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
/* <var24:AExprs> isa AParExprs */
cltype28 = type_nit__AParExprs.color;
idtype29 = type_nit__AParExprs.id;
if(cltype28 >= var24->type->table_size) {
var27 = 0;
} else {
var27 = var24->type->type_table[cltype28] == idtype29;
}
var15 = var27;
}
if (var15){
if (varonce) {
var30 = varonce;
} else {
var31 = "Error: ";
var32 = 7;
var33 = standard___standard__NativeString___to_s_with_length(var31, var32);
var30 = var33;
varonce = var30;
}
if (varonce34) {
var35 = varonce34;
} else {
var36 = " is variable, not a function.";
var37 = 29;
var38 = standard___standard__NativeString___to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
var39 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var39 = array_instance Array[Object] */
var40 = 3;
var41 = NEW_standard__NativeArray(var40, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var41)->values[0] = (val*) var30;
((struct instance_standard__NativeArray*)var41)->values[1] = (val*) var_name;
((struct instance_standard__NativeArray*)var41)->values[2] = (val*) var35;
{
((void (*)(val* self, val* p0, long p1))(var39->class->vft[COLOR_standard__array__Array__with_native]))(var39, var41, var40) /* with_native on <var39:Array[Object]>*/;
}
}
{
var42 = ((val* (*)(val* self))(var39->class->vft[COLOR_standard__string__Object__to_s]))(var39) /* to_s on <var39:Array[Object]>*/;
}
{
nit__scope___nit__scope__ScopeVisitor___error(var_v, self, var42); /* Direct call scope#ScopeVisitor#error on <var_v:ScopeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
var43 = ((val* (*)(val* self, val* p0))(self->class->vft[COLOR_nit__scope__ACallFormExpr__variable_create]))(self, var_variable) /* variable_create on <self:ACallFormExpr>*/;
}
var_n = var43;
{
{ /* Inline scope#AVarFormExpr#variable= (var_n,var_variable) on <var_n:AExpr(AVarFormExpr)> */
var_n->attrs[COLOR_nit__scope__AVarFormExpr___variable].val = var_variable; /* _variable on <var_n:AExpr(AVarFormExpr)> */
RET_LABEL44:(void)0;
}
}
{
nit___nit__Prod___ANode__replace_with(self, var_n); /* Direct call parser_nodes#Prod#replace_with on <self:ACallFormExpr>*/
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
((void (*)(val* self, val* p0))(self->class->vft[COLOR_nit__scope___ACallFormExpr___ANode__accept_scope_visitor]))(self, p0) /* accept_scope_visitor on <self:ACallFormExpr>*/;
}
RET_LABEL:;
}
/* method scope#ACallExpr#variable_create for (self: ACallExpr, Variable): AVarFormExpr */
val* nit__scope___ACallExpr___ACallFormExpr__variable_create(val* self, val* p0) {
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
var_variable->attrs[COLOR_nit__scope__Variable___warn_unread].s = var1; /* _warn_unread on <var_variable:Variable> */
RET_LABEL2:(void)0;
}
}
var3 = NEW_nit__AVarExpr(&type_nit__AVarExpr);
{
{ /* Inline parser_nodes#ACallFormExpr#n_id (self) on <self:ACallExpr> */
var6 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:ACallExpr> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1999);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
nit__parser_prod___AVarExpr___init_avarexpr(var3, var4); /* Direct call parser_prod#AVarExpr#init_avarexpr on <var3:AVarExpr>*/
}
var = var3;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1999);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1769);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1772);
show_backtrace(1);
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
var_variable->attrs[COLOR_nit__scope__Variable___warn_unread].s = var1; /* _warn_unread on <var_variable:Variable> */
RET_LABEL2:(void)0;
}
}
var3 = NEW_nit__AVarReassignExpr(&type_nit__AVarReassignExpr);
{
{ /* Inline parser_nodes#ACallFormExpr#n_id (self) on <self:ACallReassignExpr> */
var6 = self->attrs[COLOR_nit__parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:ACallReassignExpr> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1999);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline parser_nodes#AReassignFormExpr#n_assign_op (self) on <self:ACallReassignExpr> */
var9 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:ACallReassignExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1780);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline parser_nodes#AReassignFormExpr#n_value (self) on <self:ACallReassignExpr> */
var12 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:ACallReassignExpr> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1783);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
nit__parser_prod___AVarReassignExpr___init_avarreassignexpr(var3, var4, var7, var10); /* Direct call parser_prod#AVarReassignExpr#init_avarreassignexpr on <var3:AVarReassignExpr>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
