#include "scope.sep.0.h"
/* method scope#ToolContext#scope_phase for (self: ToolContext): Phase */
val* scope__ToolContext__scope_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_scope__ToolContext___64dscope_phase].val; /* @scope_phase on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @scope_phase");
fprintf(stderr, " (%s:%d)\n", "src/scope.nit", 25);
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
var1 = scope__ToolContext__scope_phase(self);
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ToolContext#scope_phase= for (self: ToolContext, Phase) */
void scope__ToolContext__scope_phase_61d(val* self, val* p0) {
self->attrs[COLOR_scope__ToolContext___64dscope_phase].val = p0; /* @scope_phase on <self:ToolContext> */
RET_LABEL:;
}
/* method scope#ToolContext#scope_phase= for (self: Object, Phase) */
void VIRTUAL_scope__ToolContext__scope_phase_61d(val* self, val* p0) {
scope__ToolContext__scope_phase_61d(self, p0);
RET_LABEL:;
}
/* method scope#ScopePhase#process_npropdef for (self: ScopePhase, APropdef) */
void scope__ScopePhase__process_npropdef(val* self, val* p0) {
val* var_npropdef /* var npropdef: APropdef */;
val* var /* : ToolContext */;
var_npropdef = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_phase__Phase__toolcontext]))(self) /* toolcontext on <self:ScopePhase>*/;
((void (*)(val*, val*))(var_npropdef->class->vft[COLOR_scope__APropdef__do_scope]))(var_npropdef, var) /* do_scope on <var_npropdef:APropdef>*/;
RET_LABEL:;
}
/* method scope#ScopePhase#process_npropdef for (self: Object, APropdef) */
void VIRTUAL_scope__ScopePhase__process_npropdef(val* self, val* p0) {
scope__ScopePhase__process_npropdef(self, p0);
RET_LABEL:;
}
/* method scope#Variable#name for (self: Variable): String */
val* scope__Variable__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_scope__Variable___64dname].val; /* @name on <self:Variable> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @name");
fprintf(stderr, " (%s:%d)\n", "src/scope.nit", 36);
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
var1 = scope__Variable__name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method scope#Variable#name= for (self: Variable, String) */
void scope__Variable__name_61d(val* self, val* p0) {
self->attrs[COLOR_scope__Variable___64dname].val = p0; /* @name on <self:Variable> */
RET_LABEL:;
}
/* method scope#Variable#name= for (self: Object, String) */
void VIRTUAL_scope__Variable__name_61d(val* self, val* p0) {
scope__Variable__name_61d(self, p0);
RET_LABEL:;
}
/* method scope#Variable#to_s for (self: Variable): String */
val* scope__Variable__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_scope__Variable__name]))(self) /* name on <self:Variable>*/;
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
self->attrs[COLOR_scope__Variable___64dname].val = p0; /* @name on <self:Variable> */
RET_LABEL:;
}
/* method scope#Variable#init for (self: Object, String) */
void VIRTUAL_scope__Variable__init(val* self, val* p0) {
scope__Variable__init(self, p0);
RET_LABEL:;
}
/* method scope#EscapeMark#name for (self: EscapeMark): nullable String */
val* scope__EscapeMark__name(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_scope__EscapeMark___64dname].val; /* @name on <self:EscapeMark> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#EscapeMark#name for (self: Object): nullable String */
val* VIRTUAL_scope__EscapeMark__name(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = scope__EscapeMark__name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method scope#EscapeMark#name= for (self: EscapeMark, nullable String) */
void scope__EscapeMark__name_61d(val* self, val* p0) {
self->attrs[COLOR_scope__EscapeMark___64dname].val = p0; /* @name on <self:EscapeMark> */
RET_LABEL:;
}
/* method scope#EscapeMark#name= for (self: Object, nullable String) */
void VIRTUAL_scope__EscapeMark__name_61d(val* self, val* p0) {
scope__EscapeMark__name_61d(self, p0);
RET_LABEL:;
}
/* method scope#EscapeMark#for_loop for (self: EscapeMark): Bool */
short int scope__EscapeMark__for_loop(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_scope__EscapeMark___64dfor_loop].s; /* @for_loop on <self:EscapeMark> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#EscapeMark#for_loop for (self: Object): Bool */
short int VIRTUAL_scope__EscapeMark__for_loop(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = scope__EscapeMark__for_loop(self);
var = var1;
RET_LABEL:;
return var;
}
/* method scope#EscapeMark#for_loop= for (self: EscapeMark, Bool) */
void scope__EscapeMark__for_loop_61d(val* self, short int p0) {
self->attrs[COLOR_scope__EscapeMark___64dfor_loop].s = p0; /* @for_loop on <self:EscapeMark> */
RET_LABEL:;
}
/* method scope#EscapeMark#for_loop= for (self: Object, Bool) */
void VIRTUAL_scope__EscapeMark__for_loop_61d(val* self, short int p0) {
scope__EscapeMark__for_loop_61d(self, p0);
RET_LABEL:;
}
/* method scope#EscapeMark#continues for (self: EscapeMark): Array[AContinueExpr] */
val* scope__EscapeMark__continues(val* self) {
val* var /* : Array[AContinueExpr] */;
val* var1 /* : Array[AContinueExpr] */;
var1 = self->attrs[COLOR_scope__EscapeMark___64dcontinues].val; /* @continues on <self:EscapeMark> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @continues");
fprintf(stderr, " (%s:%d)\n", "src/scope.nit", 53);
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
var1 = scope__EscapeMark__continues(self);
var = var1;
RET_LABEL:;
return var;
}
/* method scope#EscapeMark#continues= for (self: EscapeMark, Array[AContinueExpr]) */
void scope__EscapeMark__continues_61d(val* self, val* p0) {
self->attrs[COLOR_scope__EscapeMark___64dcontinues].val = p0; /* @continues on <self:EscapeMark> */
RET_LABEL:;
}
/* method scope#EscapeMark#continues= for (self: Object, Array[AContinueExpr]) */
void VIRTUAL_scope__EscapeMark__continues_61d(val* self, val* p0) {
scope__EscapeMark__continues_61d(self, p0);
RET_LABEL:;
}
/* method scope#EscapeMark#breaks for (self: EscapeMark): Array[ABreakExpr] */
val* scope__EscapeMark__breaks(val* self) {
val* var /* : Array[ABreakExpr] */;
val* var1 /* : Array[ABreakExpr] */;
var1 = self->attrs[COLOR_scope__EscapeMark___64dbreaks].val; /* @breaks on <self:EscapeMark> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @breaks");
fprintf(stderr, " (%s:%d)\n", "src/scope.nit", 56);
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
var1 = scope__EscapeMark__breaks(self);
var = var1;
RET_LABEL:;
return var;
}
/* method scope#EscapeMark#breaks= for (self: EscapeMark, Array[ABreakExpr]) */
void scope__EscapeMark__breaks_61d(val* self, val* p0) {
self->attrs[COLOR_scope__EscapeMark___64dbreaks].val = p0; /* @breaks on <self:EscapeMark> */
RET_LABEL:;
}
/* method scope#EscapeMark#breaks= for (self: Object, Array[ABreakExpr]) */
void VIRTUAL_scope__EscapeMark__breaks_61d(val* self, val* p0) {
scope__EscapeMark__breaks_61d(self, p0);
RET_LABEL:;
}
/* method scope#EscapeMark#init for (self: EscapeMark, nullable String, Bool) */
void scope__EscapeMark__init(val* self, val* p0, short int p1) {
self->attrs[COLOR_scope__EscapeMark___64dname].val = p0; /* @name on <self:EscapeMark> */
self->attrs[COLOR_scope__EscapeMark___64dfor_loop].s = p1; /* @for_loop on <self:EscapeMark> */
RET_LABEL:;
}
/* method scope#EscapeMark#init for (self: Object, nullable String, Bool) */
void VIRTUAL_scope__EscapeMark__init(val* self, val* p0, short int p1) {
scope__EscapeMark__init(self, p0, p1);
RET_LABEL:;
}
/* method scope#ScopeVisitor#toolcontext for (self: ScopeVisitor): ToolContext */
val* scope__ScopeVisitor__toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_scope__ScopeVisitor___64dtoolcontext].val; /* @toolcontext on <self:ScopeVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @toolcontext");
fprintf(stderr, " (%s:%d)\n", "src/scope.nit", 68);
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
var1 = scope__ScopeVisitor__toolcontext(self);
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ScopeVisitor#toolcontext= for (self: ScopeVisitor, ToolContext) */
void scope__ScopeVisitor__toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_scope__ScopeVisitor___64dtoolcontext].val = p0; /* @toolcontext on <self:ScopeVisitor> */
RET_LABEL:;
}
/* method scope#ScopeVisitor#toolcontext= for (self: Object, ToolContext) */
void VIRTUAL_scope__ScopeVisitor__toolcontext_61d(val* self, val* p0) {
scope__ScopeVisitor__toolcontext_61d(self, p0);
RET_LABEL:;
}
/* method scope#ScopeVisitor#selfvariable for (self: ScopeVisitor): Variable */
val* scope__ScopeVisitor__selfvariable(val* self) {
val* var /* : Variable */;
val* var1 /* : Variable */;
var1 = self->attrs[COLOR_scope__ScopeVisitor___64dselfvariable].val; /* @selfvariable on <self:ScopeVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @selfvariable");
fprintf(stderr, " (%s:%d)\n", "src/scope.nit", 71);
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
var1 = scope__ScopeVisitor__selfvariable(self);
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ScopeVisitor#selfvariable= for (self: ScopeVisitor, Variable) */
void scope__ScopeVisitor__selfvariable_61d(val* self, val* p0) {
self->attrs[COLOR_scope__ScopeVisitor___64dselfvariable].val = p0; /* @selfvariable on <self:ScopeVisitor> */
RET_LABEL:;
}
/* method scope#ScopeVisitor#selfvariable= for (self: Object, Variable) */
void VIRTUAL_scope__ScopeVisitor__selfvariable_61d(val* self, val* p0) {
scope__ScopeVisitor__selfvariable_61d(self, p0);
RET_LABEL:;
}
/* method scope#ScopeVisitor#init for (self: ScopeVisitor, ToolContext) */
void scope__ScopeVisitor__init(val* self, val* p0) {
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var /* : List[Scope] */;
val* var1 /* : Scope */;
var_toolcontext = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Visitor__init]))(self) /* init on <self:ScopeVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_scope__ScopeVisitor__toolcontext_61d]))(self, var_toolcontext) /* toolcontext= on <self:ScopeVisitor>*/;
var = ((val* (*)(val*))(self->class->vft[COLOR_scope__ScopeVisitor__scopes]))(self) /* scopes on <self:ScopeVisitor>*/;
var1 = NEW_scope__Scope(&type_scope__Scope);
((void (*)(val*))(var1->class->vft[COLOR_scope__Scope__init]))(var1) /* init on <var1:Scope>*/;
((void (*)(val*, val*))(var->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var, var1) /* add on <var:List[Scope]>*/;
RET_LABEL:;
}
/* method scope#ScopeVisitor#init for (self: Object, ToolContext) */
void VIRTUAL_scope__ScopeVisitor__init(val* self, val* p0) {
scope__ScopeVisitor__init(self, p0);
RET_LABEL:;
}
/* method scope#ScopeVisitor#scopes for (self: ScopeVisitor): List[Scope] */
val* scope__ScopeVisitor__scopes(val* self) {
val* var /* : List[Scope] */;
val* var1 /* : List[Scope] */;
var1 = self->attrs[COLOR_scope__ScopeVisitor___64dscopes].val; /* @scopes on <self:ScopeVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @scopes");
fprintf(stderr, " (%s:%d)\n", "src/scope.nit", 79);
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
var1 = scope__ScopeVisitor__scopes(self);
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ScopeVisitor#scopes= for (self: ScopeVisitor, List[Scope]) */
void scope__ScopeVisitor__scopes_61d(val* self, val* p0) {
self->attrs[COLOR_scope__ScopeVisitor___64dscopes].val = p0; /* @scopes on <self:ScopeVisitor> */
RET_LABEL:;
}
/* method scope#ScopeVisitor#scopes= for (self: Object, List[Scope]) */
void VIRTUAL_scope__ScopeVisitor__scopes_61d(val* self, val* p0) {
scope__ScopeVisitor__scopes_61d(self, p0);
RET_LABEL:;
}
/* method scope#ScopeVisitor#register_variable for (self: ScopeVisitor, ANode, Variable): Bool */
short int scope__ScopeVisitor__register_variable(val* self, val* p0, val* p1) {
short int var /* : Bool */;
val* var_node /* var node: ANode */;
val* var_variable /* var variable: Variable */;
val* var1 /* : String */;
val* var_name /* var name: String */;
val* var2 /* : nullable Variable */;
val* var_found /* var found: nullable Variable */;
val* var3 /* : null */;
short int var4 /* : Bool */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
val* var14 /* : Array[Object] */;
long var15 /* : Int */;
val* var16 /* : NativeArray[Object] */;
val* var17 /* : String */;
short int var18 /* : Bool */;
val* var19 /* : List[Scope] */;
val* var20 /* : nullable Object */;
val* var21 /* : HashMap[String, Variable] */;
short int var22 /* : Bool */;
var_node = p0;
var_variable = p1;
var1 = ((val* (*)(val*))(var_variable->class->vft[COLOR_scope__Variable__name]))(var_variable) /* name on <var_variable:Variable>*/;
var_name = var1;
var2 = ((val* (*)(val*, val*))(self->class->vft[COLOR_scope__ScopeVisitor__search_variable]))(self, var_name) /* search_variable on <self:ScopeVisitor>*/;
var_found = var2;
var3 = NULL;
if (var_found == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (var4){
if (varonce) {
var5 = varonce;
} else {
var6 = "Error: A variable named `";
var7 = 25;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
if (varonce9) {
var10 = varonce9;
} else {
var11 = "\' already exists";
var12 = 16;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var14 = array_instance Array[Object] */
var15 = 3;
var16 = NEW_array__NativeArray(var15, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var16)->values[0] = (val*) var5;
((struct instance_array__NativeArray*)var16)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var16)->values[2] = (val*) var10;
((void (*)(val*, val*, long))(var14->class->vft[COLOR_array__Array__with_native]))(var14, var16, var15) /* with_native on <var14:Array[Object]>*/;
}
var17 = ((val* (*)(val*))(var14->class->vft[COLOR_string__Object__to_s]))(var14) /* to_s on <var14:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_scope__ScopeVisitor__error]))(self, var_node, var17) /* error on <self:ScopeVisitor>*/;
var18 = 0;
var = var18;
goto RET_LABEL;
} else {
}
var19 = ((val* (*)(val*))(self->class->vft[COLOR_scope__ScopeVisitor__scopes]))(self) /* scopes on <self:ScopeVisitor>*/;
var20 = ((val* (*)(val*))(var19->class->vft[COLOR_abstract_collection__Collection__first]))(var19) /* first on <var19:List[Scope]>*/;
var21 = ((val* (*)(val*))(var20->class->vft[COLOR_scope__Scope__variables]))(var20) /* variables on <var20:nullable Object(Scope)>*/;
((void (*)(val*, val*, val*))(var21->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var21, var_name, var_variable) /* []= on <var21:HashMap[String, Variable]>*/;
var22 = 1;
var = var22;
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
val* var2 /* : Iterator[nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_scope /* var scope: Scope */;
val* var5 /* : nullable Variable */;
val* var_res /* var res: nullable Variable */;
val* var6 /* : null */;
short int var7 /* : Bool */;
val* var8 /* : null */;
var_name = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_scope__ScopeVisitor__scopes]))(self) /* scopes on <self:ScopeVisitor>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Collection__iterator]))(var1) /* iterator on <var1:List[Scope]>*/;
for(;;) {
var3 = ((short int (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var2) /* is_ok on <var2:Iterator[nullable Object]>*/;
if(!var3) break;
var4 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__item]))(var2) /* item on <var2:Iterator[nullable Object]>*/;
var_scope = var4;
var5 = ((val* (*)(val*, val*))(var_scope->class->vft[COLOR_scope__Scope__get_variable]))(var_scope, var_name) /* get_variable on <var_scope:Scope>*/;
var_res = var5;
var6 = NULL;
if (var_res == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (var7){
var = var_res;
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__next]))(var2) /* next on <var2:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var8 = NULL;
var = var8;
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
((void (*)(val*, val*))(var_n->class->vft[COLOR_scope__ANode__accept_scope_visitor]))(var_n, self) /* accept_scope_visitor on <var_n:ANode>*/;
RET_LABEL:;
}
/* method scope#ScopeVisitor#visit for (self: Object, ANode) */
void VIRTUAL_scope__ScopeVisitor__visit(val* self, val* p0) {
scope__ScopeVisitor__visit(self, p0);
RET_LABEL:;
}
/* method scope#ScopeVisitor#enter_visit_block for (self: ScopeVisitor, nullable AExpr, nullable EscapeMark) */
void scope__ScopeVisitor__enter_visit_block(val* self, val* p0, val* p1) {
val* var_node /* var node: nullable AExpr */;
val* var_escapemark /* var escapemark: nullable EscapeMark */;
val* var /* : null */;
short int var1 /* : Bool */;
val* var2 /* : Scope */;
val* var_scope /* var scope: Scope */;
val* var3 /* : List[Scope] */;
val* var4 /* : List[Scope] */;
val* var5 /* : nullable Object */;
var_node = p0;
var_escapemark = p1;
var = NULL;
if (var_node == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (var1){
goto RET_LABEL;
} else {
}
var2 = NEW_scope__Scope(&type_scope__Scope);
((void (*)(val*))(var2->class->vft[COLOR_scope__Scope__init]))(var2) /* init on <var2:Scope>*/;
var_scope = var2;
((void (*)(val*, val*))(var_scope->class->vft[COLOR_scope__Scope__escapemark_61d]))(var_scope, var_escapemark) /* escapemark= on <var_scope:Scope>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_scope__ScopeVisitor__scopes]))(self) /* scopes on <self:ScopeVisitor>*/;
((void (*)(val*, val*))(var3->class->vft[COLOR_abstract_collection__Sequence__unshift]))(var3, var_scope) /* unshift on <var3:List[Scope]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(self, var_node) /* enter_visit on <self:ScopeVisitor>*/;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_scope__ScopeVisitor__scopes]))(self) /* scopes on <self:ScopeVisitor>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__Sequence__shift]))(var4) /* shift on <var4:List[Scope]>*/;
var5;
RET_LABEL:;
}
/* method scope#ScopeVisitor#enter_visit_block for (self: Object, nullable AExpr, nullable EscapeMark) */
void VIRTUAL_scope__ScopeVisitor__enter_visit_block(val* self, val* p0, val* p1) {
scope__ScopeVisitor__enter_visit_block(self, p0, p1);
RET_LABEL:;
}
/* method scope#ScopeVisitor#search_label for (self: ScopeVisitor, String): nullable EscapeMark */
val* scope__ScopeVisitor__search_label(val* self, val* p0) {
val* var /* : nullable EscapeMark */;
val* var_name /* var name: String */;
val* var1 /* : List[Scope] */;
val* var2 /* : Iterator[nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_scope /* var scope: Scope */;
val* var5 /* : nullable EscapeMark */;
val* var_res /* var res: nullable EscapeMark */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
val* var9 /* : nullable String */;
short int var10 /* : Bool */;
val* var11 /* : null */;
var_name = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_scope__ScopeVisitor__scopes]))(self) /* scopes on <self:ScopeVisitor>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Collection__iterator]))(var1) /* iterator on <var1:List[Scope]>*/;
for(;;) {
var3 = ((short int (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var2) /* is_ok on <var2:Iterator[nullable Object]>*/;
if(!var3) break;
var4 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__item]))(var2) /* item on <var2:Iterator[nullable Object]>*/;
var_scope = var4;
var5 = ((val* (*)(val*))(var_scope->class->vft[COLOR_scope__Scope__escapemark]))(var_scope) /* escapemark on <var_scope:Scope>*/;
var_res = var5;
var7 = NULL;
if (var_res == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
var_ = var8;
if (var8){
var9 = ((val* (*)(val*))(var_res->class->vft[COLOR_scope__EscapeMark__name]))(var_res) /* name on <var_res:nullable EscapeMark(EscapeMark)>*/;
if (var9 == NULL) {
var10 = 0; /* <var_name:String> cannot be null */
} else {
var10 = ((short int (*)(val*, val*))(var9->class->vft[COLOR_kernel__Object___61d_61d]))(var9, var_name) /* == on <var9:nullable String>*/;
}
var6 = var10;
} else {
var6 = var_;
}
if (var6){
var = var_res;
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__next]))(var2) /* next on <var2:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var11 = NULL;
var = var11;
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
val* var3 /* : TId */;
val* var4 /* : String */;
val* var_name /* var name: nullable String */;
val* var5 /* : nullable EscapeMark */;
val* var_found /* var found: nullable EscapeMark */;
val* var6 /* : null */;
short int var7 /* : Bool */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : String */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
val* var17 /* : Array[Object] */;
long var18 /* : Int */;
val* var19 /* : NativeArray[Object] */;
val* var20 /* : String */;
val* var21 /* : null */;
val* var22 /* : EscapeMark */;
val* var_res /* var res: EscapeMark */;
var_nlabel = p0;
var_for_loop = p1;
var1 = NULL;
if (var_nlabel == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (var2){
var3 = ((val* (*)(val*))(var_nlabel->class->vft[COLOR_parser_nodes__ALabel__n_id]))(var_nlabel) /* n_id on <var_nlabel:nullable ALabel(ALabel)>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_parser_nodes__Token__text]))(var3) /* text on <var3:TId>*/;
var_name = var4;
var5 = ((val* (*)(val*, val*))(self->class->vft[COLOR_scope__ScopeVisitor__search_label]))(self, var_name) /* search_label on <self:ScopeVisitor>*/;
var_found = var5;
var6 = NULL;
if (var_found == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (var7){
if (varonce) {
var8 = varonce;
} else {
var9 = "Syntax error: label ";
var10 = 20;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce = var8;
}
if (varonce12) {
var13 = varonce12;
} else {
var14 = " already defined.";
var15 = 17;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
var17 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var17 = array_instance Array[Object] */
var18 = 3;
var19 = NEW_array__NativeArray(var18, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var19)->values[0] = (val*) var8;
((struct instance_array__NativeArray*)var19)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var19)->values[2] = (val*) var13;
((void (*)(val*, val*, long))(var17->class->vft[COLOR_array__Array__with_native]))(var17, var19, var18) /* with_native on <var17:Array[Object]>*/;
}
var20 = ((val* (*)(val*))(var17->class->vft[COLOR_string__Object__to_s]))(var17) /* to_s on <var17:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_scope__ScopeVisitor__error]))(self, var_nlabel, var20) /* error on <self:ScopeVisitor>*/;
} else {
}
} else {
var21 = NULL;
var_name = var21;
}
var22 = NEW_scope__EscapeMark(&type_scope__EscapeMark);
((void (*)(val*, val*, short int))(var22->class->vft[COLOR_scope__EscapeMark__init]))(var22, var_name, var_for_loop) /* init on <var22:EscapeMark>*/;
var_res = var22;
var = var_res;
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
val* var3 /* : TId */;
val* var4 /* : String */;
val* var_name /* var name: String */;
val* var5 /* : nullable EscapeMark */;
val* var_res /* var res: nullable EscapeMark */;
val* var6 /* : null */;
short int var7 /* : Bool */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : String */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
val* var17 /* : Array[Object] */;
long var18 /* : Int */;
val* var19 /* : NativeArray[Object] */;
val* var20 /* : String */;
val* var21 /* : null */;
val* var22 /* : List[Scope] */;
val* var23 /* : Iterator[nullable Object] */;
short int var24 /* : Bool */;
val* var25 /* : nullable Object */;
val* var_scope /* var scope: Scope */;
val* var26 /* : nullable EscapeMark */;
val* var_res27 /* var res: nullable EscapeMark */;
val* var28 /* : null */;
short int var29 /* : Bool */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
long var33 /* : Int */;
val* var34 /* : String */;
val* var35 /* : null */;
var_node = p0;
var_nlabel = p1;
var1 = NULL;
if (var_nlabel == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (var2){
var3 = ((val* (*)(val*))(var_nlabel->class->vft[COLOR_parser_nodes__ALabel__n_id]))(var_nlabel) /* n_id on <var_nlabel:nullable ALabel(ALabel)>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_parser_nodes__Token__text]))(var3) /* text on <var3:TId>*/;
var_name = var4;
var5 = ((val* (*)(val*, val*))(self->class->vft[COLOR_scope__ScopeVisitor__search_label]))(self, var_name) /* search_label on <self:ScopeVisitor>*/;
var_res = var5;
var6 = NULL;
if (var_res == NULL) {
var7 = 1; /* is null */
} else {
var7 = 0; /* arg is null but recv is not */
}
if (var7){
if (varonce) {
var8 = varonce;
} else {
var9 = "Syntax error: invalid label ";
var10 = 28;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce = var8;
}
if (varonce12) {
var13 = varonce12;
} else {
var14 = ".";
var15 = 1;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
var17 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var17 = array_instance Array[Object] */
var18 = 3;
var19 = NEW_array__NativeArray(var18, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var19)->values[0] = (val*) var8;
((struct instance_array__NativeArray*)var19)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var19)->values[2] = (val*) var13;
((void (*)(val*, val*, long))(var17->class->vft[COLOR_array__Array__with_native]))(var17, var19, var18) /* with_native on <var17:Array[Object]>*/;
}
var20 = ((val* (*)(val*))(var17->class->vft[COLOR_string__Object__to_s]))(var17) /* to_s on <var17:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_scope__ScopeVisitor__error]))(self, var_nlabel, var20) /* error on <self:ScopeVisitor>*/;
var21 = NULL;
var = var21;
goto RET_LABEL;
} else {
}
var = var_res;
goto RET_LABEL;
} else {
var22 = ((val* (*)(val*))(self->class->vft[COLOR_scope__ScopeVisitor__scopes]))(self) /* scopes on <self:ScopeVisitor>*/;
var23 = ((val* (*)(val*))(var22->class->vft[COLOR_abstract_collection__Collection__iterator]))(var22) /* iterator on <var22:List[Scope]>*/;
for(;;) {
var24 = ((short int (*)(val*))(var23->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var23) /* is_ok on <var23:Iterator[nullable Object]>*/;
if(!var24) break;
var25 = ((val* (*)(val*))(var23->class->vft[COLOR_abstract_collection__Iterator__item]))(var23) /* item on <var23:Iterator[nullable Object]>*/;
var_scope = var25;
var26 = ((val* (*)(val*))(var_scope->class->vft[COLOR_scope__Scope__escapemark]))(var_scope) /* escapemark on <var_scope:Scope>*/;
var_res27 = var26;
var28 = NULL;
if (var_res27 == NULL) {
var29 = 0; /* is null */
} else {
var29 = 1; /* arg is null and recv is not */
}
if (var29){
var = var_res27;
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var23->class->vft[COLOR_abstract_collection__Iterator__next]))(var23) /* next on <var23:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
if (varonce30) {
var31 = varonce30;
} else {
var32 = "Syntax Error: \'break\' statment outside block.";
var33 = 45;
var34 = string__NativeString__to_s_with_length(var32, var33);
var31 = var34;
varonce30 = var31;
}
((void (*)(val*, val*, val*))(self->class->vft[COLOR_scope__ScopeVisitor__error]))(self, var_node, var31) /* error on <self:ScopeVisitor>*/;
var35 = NULL;
var = var35;
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
val* var1 /* : Location */;
var_node = p0;
var_message = p1;
var = ((val* (*)(val*))(self->class->vft[COLOR_scope__ScopeVisitor__toolcontext]))(self) /* toolcontext on <self:ScopeVisitor>*/;
var1 = ((val* (*)(val*))(var_node->class->vft[COLOR_parser_nodes__ANode__hot_location]))(var_node) /* hot_location on <var_node:ANode>*/;
((void (*)(val*, val*, val*))(var->class->vft[COLOR_toolcontext__ToolContext__error]))(var, var1, var_message) /* error on <var:ToolContext>*/;
RET_LABEL:;
}
/* method scope#ScopeVisitor#error for (self: Object, ANode, String) */
void VIRTUAL_scope__ScopeVisitor__error(val* self, val* p0, val* p1) {
scope__ScopeVisitor__error(self, p0, p1);
RET_LABEL:;
}
/* method scope#Scope#variables for (self: Scope): HashMap[String, Variable] */
val* scope__Scope__variables(val* self) {
val* var /* : HashMap[String, Variable] */;
val* var1 /* : HashMap[String, Variable] */;
var1 = self->attrs[COLOR_scope__Scope___64dvariables].val; /* @variables on <self:Scope> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @variables");
fprintf(stderr, " (%s:%d)\n", "src/scope.nit", 192);
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
var1 = scope__Scope__variables(self);
var = var1;
RET_LABEL:;
return var;
}
/* method scope#Scope#variables= for (self: Scope, HashMap[String, Variable]) */
void scope__Scope__variables_61d(val* self, val* p0) {
self->attrs[COLOR_scope__Scope___64dvariables].val = p0; /* @variables on <self:Scope> */
RET_LABEL:;
}
/* method scope#Scope#variables= for (self: Object, HashMap[String, Variable]) */
void VIRTUAL_scope__Scope__variables_61d(val* self, val* p0) {
scope__Scope__variables_61d(self, p0);
RET_LABEL:;
}
/* method scope#Scope#escapemark for (self: Scope): nullable EscapeMark */
val* scope__Scope__escapemark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_scope__Scope___64descapemark].val; /* @escapemark on <self:Scope> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#Scope#escapemark for (self: Object): nullable EscapeMark */
val* VIRTUAL_scope__Scope__escapemark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = scope__Scope__escapemark(self);
var = var1;
RET_LABEL:;
return var;
}
/* method scope#Scope#escapemark= for (self: Scope, nullable EscapeMark) */
void scope__Scope__escapemark_61d(val* self, val* p0) {
self->attrs[COLOR_scope__Scope___64descapemark].val = p0; /* @escapemark on <self:Scope> */
RET_LABEL:;
}
/* method scope#Scope#escapemark= for (self: Object, nullable EscapeMark) */
void VIRTUAL_scope__Scope__escapemark_61d(val* self, val* p0) {
scope__Scope__escapemark_61d(self, p0);
RET_LABEL:;
}
/* method scope#Scope#get_variable for (self: Scope, String): nullable Variable */
val* scope__Scope__get_variable(val* self, val* p0) {
val* var /* : nullable Variable */;
val* var_name /* var name: String */;
val* var1 /* : HashMap[String, Variable] */;
short int var2 /* : Bool */;
val* var3 /* : HashMap[String, Variable] */;
val* var4 /* : nullable Object */;
val* var5 /* : null */;
var_name = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_scope__Scope__variables]))(self) /* variables on <self:Scope>*/;
var2 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var1, var_name) /* has_key on <var1:HashMap[String, Variable]>*/;
if (var2){
var3 = ((val* (*)(val*))(self->class->vft[COLOR_scope__Scope__variables]))(self) /* variables on <self:Scope>*/;
var4 = ((val* (*)(val*, val*))(var3->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var3, var_name) /* [] on <var3:HashMap[String, Variable]>*/;
var = var4;
goto RET_LABEL;
} else {
var5 = NULL;
var = var5;
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
scope__Scope__init(self);
RET_LABEL:;
}
/* method scope#ANode#accept_scope_visitor for (self: ANode, ScopeVisitor) */
void scope__ANode__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
var_v = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__ANode__visit_all]))(self, var_v) /* visit_all on <self:ANode>*/;
RET_LABEL:;
}
/* method scope#ANode#accept_scope_visitor for (self: Object, ScopeVisitor) */
void VIRTUAL_scope__ANode__accept_scope_visitor(val* self, val* p0) {
scope__ANode__accept_scope_visitor(self, p0);
RET_LABEL:;
}
/* method scope#APropdef#do_scope for (self: APropdef, ToolContext) */
void scope__APropdef__do_scope(val* self, val* p0) {
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var /* : ScopeVisitor */;
val* var_v /* var v: ScopeVisitor */;
var_toolcontext = p0;
var = NEW_scope__ScopeVisitor(&type_scope__ScopeVisitor);
((void (*)(val*, val*))(var->class->vft[COLOR_scope__ScopeVisitor__init]))(var, var_toolcontext) /* init on <var:ScopeVisitor>*/;
var_v = var;
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, self) /* enter_visit on <var_v:ScopeVisitor>*/;
RET_LABEL:;
}
/* method scope#APropdef#do_scope for (self: Object, ToolContext) */
void VIRTUAL_scope__APropdef__do_scope(val* self, val* p0) {
scope__APropdef__do_scope(self, p0);
RET_LABEL:;
}
/* method scope#AParam#variable for (self: AParam): nullable Variable */
val* scope__AParam__variable(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
var1 = self->attrs[COLOR_scope__AParam___64dvariable].val; /* @variable on <self:AParam> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AParam#variable for (self: Object): nullable Variable */
val* VIRTUAL_scope__AParam__variable(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
var1 = scope__AParam__variable(self);
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AParam#variable= for (self: AParam, nullable Variable) */
void scope__AParam__variable_61d(val* self, val* p0) {
self->attrs[COLOR_scope__AParam___64dvariable].val = p0; /* @variable on <self:AParam> */
RET_LABEL:;
}
/* method scope#AParam#variable= for (self: Object, nullable Variable) */
void VIRTUAL_scope__AParam__variable_61d(val* self, val* p0) {
scope__AParam__variable_61d(self, p0);
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
short int var3 /* : Bool */;
var_v = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_scope__AParam__accept_scope_visitor]))(self, p0) /* accept_scope_visitor on <self:AParam>*/;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AParam__n_id]))(self) /* n_id on <self:AParam>*/;
var_nid = var;
var1 = NEW_scope__Variable(&type_scope__Variable);
var2 = ((val* (*)(val*))(var_nid->class->vft[COLOR_parser_nodes__Token__text]))(var_nid) /* text on <var_nid:TId>*/;
((void (*)(val*, val*))(var1->class->vft[COLOR_scope__Variable__init]))(var1, var2) /* init on <var1:Variable>*/;
var_variable = var1;
var3 = ((short int (*)(val*, val*, val*))(var_v->class->vft[COLOR_scope__ScopeVisitor__register_variable]))(var_v, var_nid, var_variable) /* register_variable on <var_v:ScopeVisitor>*/;
var3;
((void (*)(val*, val*))(self->class->vft[COLOR_scope__AParam__variable_61d]))(self, var_variable) /* variable= on <self:AParam>*/;
RET_LABEL:;
}
/* method scope#AParam#accept_scope_visitor for (self: Object, ScopeVisitor) */
void VIRTUAL_scope__AParam__accept_scope_visitor(val* self, val* p0) {
scope__AParam__accept_scope_visitor(self, p0);
RET_LABEL:;
}
/* method scope#AVardeclExpr#variable for (self: AVardeclExpr): nullable Variable */
val* scope__AVardeclExpr__variable(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
var1 = self->attrs[COLOR_scope__AVardeclExpr___64dvariable].val; /* @variable on <self:AVardeclExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AVardeclExpr#variable for (self: Object): nullable Variable */
val* VIRTUAL_scope__AVardeclExpr__variable(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
var1 = scope__AVardeclExpr__variable(self);
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AVardeclExpr#variable= for (self: AVardeclExpr, nullable Variable) */
void scope__AVardeclExpr__variable_61d(val* self, val* p0) {
self->attrs[COLOR_scope__AVardeclExpr___64dvariable].val = p0; /* @variable on <self:AVardeclExpr> */
RET_LABEL:;
}
/* method scope#AVardeclExpr#variable= for (self: Object, nullable Variable) */
void VIRTUAL_scope__AVardeclExpr__variable_61d(val* self, val* p0) {
scope__AVardeclExpr__variable_61d(self, p0);
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
short int var3 /* : Bool */;
var_v = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_scope__AVardeclExpr__accept_scope_visitor]))(self, p0) /* accept_scope_visitor on <self:AVardeclExpr>*/;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AVardeclExpr__n_id]))(self) /* n_id on <self:AVardeclExpr>*/;
var_nid = var;
var1 = NEW_scope__Variable(&type_scope__Variable);
var2 = ((val* (*)(val*))(var_nid->class->vft[COLOR_parser_nodes__Token__text]))(var_nid) /* text on <var_nid:TId>*/;
((void (*)(val*, val*))(var1->class->vft[COLOR_scope__Variable__init]))(var1, var2) /* init on <var1:Variable>*/;
var_variable = var1;
var3 = ((short int (*)(val*, val*, val*))(var_v->class->vft[COLOR_scope__ScopeVisitor__register_variable]))(var_v, var_nid, var_variable) /* register_variable on <var_v:ScopeVisitor>*/;
var3;
((void (*)(val*, val*))(self->class->vft[COLOR_scope__AVardeclExpr__variable_61d]))(self, var_variable) /* variable= on <self:AVardeclExpr>*/;
RET_LABEL:;
}
/* method scope#AVardeclExpr#accept_scope_visitor for (self: Object, ScopeVisitor) */
void VIRTUAL_scope__AVardeclExpr__accept_scope_visitor(val* self, val* p0) {
scope__AVardeclExpr__accept_scope_visitor(self, p0);
RET_LABEL:;
}
/* method scope#ASelfExpr#variable for (self: ASelfExpr): nullable Variable */
val* scope__ASelfExpr__variable(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
var1 = self->attrs[COLOR_scope__ASelfExpr___64dvariable].val; /* @variable on <self:ASelfExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ASelfExpr#variable for (self: Object): nullable Variable */
val* VIRTUAL_scope__ASelfExpr__variable(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
var1 = scope__ASelfExpr__variable(self);
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ASelfExpr#variable= for (self: ASelfExpr, nullable Variable) */
void scope__ASelfExpr__variable_61d(val* self, val* p0) {
self->attrs[COLOR_scope__ASelfExpr___64dvariable].val = p0; /* @variable on <self:ASelfExpr> */
RET_LABEL:;
}
/* method scope#ASelfExpr#variable= for (self: Object, nullable Variable) */
void VIRTUAL_scope__ASelfExpr__variable_61d(val* self, val* p0) {
scope__ASelfExpr__variable_61d(self, p0);
RET_LABEL:;
}
/* method scope#ASelfExpr#accept_scope_visitor for (self: ASelfExpr, ScopeVisitor) */
void scope__ASelfExpr__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : Variable */;
var_v = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_scope__ASelfExpr__accept_scope_visitor]))(self, p0) /* accept_scope_visitor on <self:ASelfExpr>*/;
var = ((val* (*)(val*))(var_v->class->vft[COLOR_scope__ScopeVisitor__selfvariable]))(var_v) /* selfvariable on <var_v:ScopeVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_scope__ASelfExpr__variable_61d]))(self, var) /* variable= on <self:ASelfExpr>*/;
RET_LABEL:;
}
/* method scope#ASelfExpr#accept_scope_visitor for (self: Object, ScopeVisitor) */
void VIRTUAL_scope__ASelfExpr__accept_scope_visitor(val* self, val* p0) {
scope__ASelfExpr__accept_scope_visitor(self, p0);
RET_LABEL:;
}
/* method scope#AContinueExpr#escapemark for (self: AContinueExpr): nullable EscapeMark */
val* scope__AContinueExpr__escapemark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_scope__AContinueExpr___64descapemark].val; /* @escapemark on <self:AContinueExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AContinueExpr#escapemark for (self: Object): nullable EscapeMark */
val* VIRTUAL_scope__AContinueExpr__escapemark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = scope__AContinueExpr__escapemark(self);
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AContinueExpr#escapemark= for (self: AContinueExpr, nullable EscapeMark) */
void scope__AContinueExpr__escapemark_61d(val* self, val* p0) {
self->attrs[COLOR_scope__AContinueExpr___64descapemark].val = p0; /* @escapemark on <self:AContinueExpr> */
RET_LABEL:;
}
/* method scope#AContinueExpr#escapemark= for (self: Object, nullable EscapeMark) */
void VIRTUAL_scope__AContinueExpr__escapemark_61d(val* self, val* p0) {
scope__AContinueExpr__escapemark_61d(self, p0);
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
short int var5 /* : Bool */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
val* var10 /* : Array[AContinueExpr] */;
var_v = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_scope__AContinueExpr__accept_scope_visitor]))(self, p0) /* accept_scope_visitor on <self:AContinueExpr>*/;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ALabelable__n_label]))(self) /* n_label on <self:AContinueExpr>*/;
var1 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_scope__ScopeVisitor__get_escapemark]))(var_v, self, var) /* get_escapemark on <var_v:ScopeVisitor>*/;
var_escapemark = var1;
var2 = NULL;
if (var_escapemark == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (var3){
goto RET_LABEL;
} else {
}
var4 = ((short int (*)(val*))(var_escapemark->class->vft[COLOR_scope__EscapeMark__for_loop]))(var_escapemark) /* for_loop on <var_escapemark:nullable EscapeMark(EscapeMark)>*/;
var5 = !var4;
if (var5){
if (varonce) {
var6 = varonce;
} else {
var7 = "Error: cannot \'continue\', only \'break\'.";
var8 = 39;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_scope__ScopeVisitor__error]))(var_v, self, var6) /* error on <var_v:ScopeVisitor>*/;
} else {
}
var10 = ((val* (*)(val*))(var_escapemark->class->vft[COLOR_scope__EscapeMark__continues]))(var_escapemark) /* continues on <var_escapemark:nullable EscapeMark(EscapeMark)>*/;
((void (*)(val*, val*))(var10->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var10, self) /* add on <var10:Array[AContinueExpr]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_scope__AContinueExpr__escapemark_61d]))(self, var_escapemark) /* escapemark= on <self:AContinueExpr>*/;
RET_LABEL:;
}
/* method scope#AContinueExpr#accept_scope_visitor for (self: Object, ScopeVisitor) */
void VIRTUAL_scope__AContinueExpr__accept_scope_visitor(val* self, val* p0) {
scope__AContinueExpr__accept_scope_visitor(self, p0);
RET_LABEL:;
}
/* method scope#ABreakExpr#escapemark for (self: ABreakExpr): nullable EscapeMark */
val* scope__ABreakExpr__escapemark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_scope__ABreakExpr___64descapemark].val; /* @escapemark on <self:ABreakExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ABreakExpr#escapemark for (self: Object): nullable EscapeMark */
val* VIRTUAL_scope__ABreakExpr__escapemark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = scope__ABreakExpr__escapemark(self);
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ABreakExpr#escapemark= for (self: ABreakExpr, nullable EscapeMark) */
void scope__ABreakExpr__escapemark_61d(val* self, val* p0) {
self->attrs[COLOR_scope__ABreakExpr___64descapemark].val = p0; /* @escapemark on <self:ABreakExpr> */
RET_LABEL:;
}
/* method scope#ABreakExpr#escapemark= for (self: Object, nullable EscapeMark) */
void VIRTUAL_scope__ABreakExpr__escapemark_61d(val* self, val* p0) {
scope__ABreakExpr__escapemark_61d(self, p0);
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
val* var4 /* : Array[ABreakExpr] */;
var_v = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_scope__ABreakExpr__accept_scope_visitor]))(self, p0) /* accept_scope_visitor on <self:ABreakExpr>*/;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ALabelable__n_label]))(self) /* n_label on <self:ABreakExpr>*/;
var1 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_scope__ScopeVisitor__get_escapemark]))(var_v, self, var) /* get_escapemark on <var_v:ScopeVisitor>*/;
var_escapemark = var1;
var2 = NULL;
if (var_escapemark == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (var3){
goto RET_LABEL;
} else {
}
var4 = ((val* (*)(val*))(var_escapemark->class->vft[COLOR_scope__EscapeMark__breaks]))(var_escapemark) /* breaks on <var_escapemark:nullable EscapeMark(EscapeMark)>*/;
((void (*)(val*, val*))(var4->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var4, self) /* add on <var4:Array[ABreakExpr]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_scope__ABreakExpr__escapemark_61d]))(self, var_escapemark) /* escapemark= on <self:ABreakExpr>*/;
RET_LABEL:;
}
/* method scope#ABreakExpr#accept_scope_visitor for (self: Object, ScopeVisitor) */
void VIRTUAL_scope__ABreakExpr__accept_scope_visitor(val* self, val* p0) {
scope__ABreakExpr__accept_scope_visitor(self, p0);
RET_LABEL:;
}
/* method scope#ADoExpr#escapemark for (self: ADoExpr): nullable EscapeMark */
val* scope__ADoExpr__escapemark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_scope__ADoExpr___64descapemark].val; /* @escapemark on <self:ADoExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ADoExpr#escapemark for (self: Object): nullable EscapeMark */
val* VIRTUAL_scope__ADoExpr__escapemark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = scope__ADoExpr__escapemark(self);
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ADoExpr#escapemark= for (self: ADoExpr, nullable EscapeMark) */
void scope__ADoExpr__escapemark_61d(val* self, val* p0) {
self->attrs[COLOR_scope__ADoExpr___64descapemark].val = p0; /* @escapemark on <self:ADoExpr> */
RET_LABEL:;
}
/* method scope#ADoExpr#escapemark= for (self: Object, nullable EscapeMark) */
void VIRTUAL_scope__ADoExpr__escapemark_61d(val* self, val* p0) {
scope__ADoExpr__escapemark_61d(self, p0);
RET_LABEL:;
}
/* method scope#ADoExpr#accept_scope_visitor for (self: ADoExpr, ScopeVisitor) */
void scope__ADoExpr__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : nullable ALabel */;
short int var1 /* : Bool */;
val* var2 /* : EscapeMark */;
val* var3 /* : nullable AExpr */;
val* var4 /* : nullable EscapeMark */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ALabelable__n_label]))(self) /* n_label on <self:ADoExpr>*/;
var1 = 0;
var2 = ((val* (*)(val*, val*, short int))(var_v->class->vft[COLOR_scope__ScopeVisitor__make_escape_mark]))(var_v, var, var1) /* make_escape_mark on <var_v:ScopeVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_scope__ADoExpr__escapemark_61d]))(self, var2) /* escapemark= on <self:ADoExpr>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ADoExpr__n_block]))(self) /* n_block on <self:ADoExpr>*/;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_scope__ADoExpr__escapemark]))(self) /* escapemark on <self:ADoExpr>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_scope__ScopeVisitor__enter_visit_block]))(var_v, var3, var4) /* enter_visit_block on <var_v:ScopeVisitor>*/;
RET_LABEL:;
}
/* method scope#ADoExpr#accept_scope_visitor for (self: Object, ScopeVisitor) */
void VIRTUAL_scope__ADoExpr__accept_scope_visitor(val* self, val* p0) {
scope__ADoExpr__accept_scope_visitor(self, p0);
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
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AIfExpr__n_expr]))(self) /* n_expr on <self:AIfExpr>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:ScopeVisitor>*/;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AIfExpr__n_then]))(self) /* n_then on <self:AIfExpr>*/;
var2 = NULL;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_scope__ScopeVisitor__enter_visit_block]))(var_v, var1, var2) /* enter_visit_block on <var_v:ScopeVisitor>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AIfExpr__n_else]))(self) /* n_else on <self:AIfExpr>*/;
var4 = NULL;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_scope__ScopeVisitor__enter_visit_block]))(var_v, var3, var4) /* enter_visit_block on <var_v:ScopeVisitor>*/;
RET_LABEL:;
}
/* method scope#AIfExpr#accept_scope_visitor for (self: Object, ScopeVisitor) */
void VIRTUAL_scope__AIfExpr__accept_scope_visitor(val* self, val* p0) {
scope__AIfExpr__accept_scope_visitor(self, p0);
RET_LABEL:;
}
/* method scope#AWhileExpr#escapemark for (self: AWhileExpr): nullable EscapeMark */
val* scope__AWhileExpr__escapemark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_scope__AWhileExpr___64descapemark].val; /* @escapemark on <self:AWhileExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AWhileExpr#escapemark for (self: Object): nullable EscapeMark */
val* VIRTUAL_scope__AWhileExpr__escapemark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = scope__AWhileExpr__escapemark(self);
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AWhileExpr#escapemark= for (self: AWhileExpr, nullable EscapeMark) */
void scope__AWhileExpr__escapemark_61d(val* self, val* p0) {
self->attrs[COLOR_scope__AWhileExpr___64descapemark].val = p0; /* @escapemark on <self:AWhileExpr> */
RET_LABEL:;
}
/* method scope#AWhileExpr#escapemark= for (self: Object, nullable EscapeMark) */
void VIRTUAL_scope__AWhileExpr__escapemark_61d(val* self, val* p0) {
scope__AWhileExpr__escapemark_61d(self, p0);
RET_LABEL:;
}
/* method scope#AWhileExpr#accept_scope_visitor for (self: AWhileExpr, ScopeVisitor) */
void scope__AWhileExpr__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : nullable ALabel */;
short int var1 /* : Bool */;
val* var2 /* : EscapeMark */;
val* var_escapemark /* var escapemark: EscapeMark */;
val* var3 /* : AExpr */;
val* var4 /* : nullable AExpr */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ALabelable__n_label]))(self) /* n_label on <self:AWhileExpr>*/;
var1 = 1;
var2 = ((val* (*)(val*, val*, short int))(var_v->class->vft[COLOR_scope__ScopeVisitor__make_escape_mark]))(var_v, var, var1) /* make_escape_mark on <var_v:ScopeVisitor>*/;
var_escapemark = var2;
((void (*)(val*, val*))(self->class->vft[COLOR_scope__AWhileExpr__escapemark_61d]))(self, var_escapemark) /* escapemark= on <self:AWhileExpr>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AWhileExpr__n_expr]))(self) /* n_expr on <self:AWhileExpr>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var3) /* enter_visit on <var_v:ScopeVisitor>*/;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AWhileExpr__n_block]))(self) /* n_block on <self:AWhileExpr>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_scope__ScopeVisitor__enter_visit_block]))(var_v, var4, var_escapemark) /* enter_visit_block on <var_v:ScopeVisitor>*/;
RET_LABEL:;
}
/* method scope#AWhileExpr#accept_scope_visitor for (self: Object, ScopeVisitor) */
void VIRTUAL_scope__AWhileExpr__accept_scope_visitor(val* self, val* p0) {
scope__AWhileExpr__accept_scope_visitor(self, p0);
RET_LABEL:;
}
/* method scope#ALoopExpr#escapemark for (self: ALoopExpr): nullable EscapeMark */
val* scope__ALoopExpr__escapemark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_scope__ALoopExpr___64descapemark].val; /* @escapemark on <self:ALoopExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ALoopExpr#escapemark for (self: Object): nullable EscapeMark */
val* VIRTUAL_scope__ALoopExpr__escapemark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = scope__ALoopExpr__escapemark(self);
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ALoopExpr#escapemark= for (self: ALoopExpr, nullable EscapeMark) */
void scope__ALoopExpr__escapemark_61d(val* self, val* p0) {
self->attrs[COLOR_scope__ALoopExpr___64descapemark].val = p0; /* @escapemark on <self:ALoopExpr> */
RET_LABEL:;
}
/* method scope#ALoopExpr#escapemark= for (self: Object, nullable EscapeMark) */
void VIRTUAL_scope__ALoopExpr__escapemark_61d(val* self, val* p0) {
scope__ALoopExpr__escapemark_61d(self, p0);
RET_LABEL:;
}
/* method scope#ALoopExpr#accept_scope_visitor for (self: ALoopExpr, ScopeVisitor) */
void scope__ALoopExpr__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : nullable ALabel */;
short int var1 /* : Bool */;
val* var2 /* : EscapeMark */;
val* var_escapemark /* var escapemark: EscapeMark */;
val* var3 /* : nullable AExpr */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ALabelable__n_label]))(self) /* n_label on <self:ALoopExpr>*/;
var1 = 1;
var2 = ((val* (*)(val*, val*, short int))(var_v->class->vft[COLOR_scope__ScopeVisitor__make_escape_mark]))(var_v, var, var1) /* make_escape_mark on <var_v:ScopeVisitor>*/;
var_escapemark = var2;
((void (*)(val*, val*))(self->class->vft[COLOR_scope__ALoopExpr__escapemark_61d]))(self, var_escapemark) /* escapemark= on <self:ALoopExpr>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ALoopExpr__n_block]))(self) /* n_block on <self:ALoopExpr>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_scope__ScopeVisitor__enter_visit_block]))(var_v, var3, var_escapemark) /* enter_visit_block on <var_v:ScopeVisitor>*/;
RET_LABEL:;
}
/* method scope#ALoopExpr#accept_scope_visitor for (self: Object, ScopeVisitor) */
void VIRTUAL_scope__ALoopExpr__accept_scope_visitor(val* self, val* p0) {
scope__ALoopExpr__accept_scope_visitor(self, p0);
RET_LABEL:;
}
/* method scope#AForExpr#variables for (self: AForExpr): nullable Array[Variable] */
val* scope__AForExpr__variables(val* self) {
val* var /* : nullable Array[Variable] */;
val* var1 /* : nullable Array[Variable] */;
var1 = self->attrs[COLOR_scope__AForExpr___64dvariables].val; /* @variables on <self:AForExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AForExpr#variables for (self: Object): nullable Array[Variable] */
val* VIRTUAL_scope__AForExpr__variables(val* self) {
val* var /* : nullable Array[Variable] */;
val* var1 /* : nullable Array[Variable] */;
var1 = scope__AForExpr__variables(self);
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AForExpr#variables= for (self: AForExpr, nullable Array[Variable]) */
void scope__AForExpr__variables_61d(val* self, val* p0) {
self->attrs[COLOR_scope__AForExpr___64dvariables].val = p0; /* @variables on <self:AForExpr> */
RET_LABEL:;
}
/* method scope#AForExpr#variables= for (self: Object, nullable Array[Variable]) */
void VIRTUAL_scope__AForExpr__variables_61d(val* self, val* p0) {
scope__AForExpr__variables_61d(self, p0);
RET_LABEL:;
}
/* method scope#AForExpr#escapemark for (self: AForExpr): nullable EscapeMark */
val* scope__AForExpr__escapemark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = self->attrs[COLOR_scope__AForExpr___64descapemark].val; /* @escapemark on <self:AForExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AForExpr#escapemark for (self: Object): nullable EscapeMark */
val* VIRTUAL_scope__AForExpr__escapemark(val* self) {
val* var /* : nullable EscapeMark */;
val* var1 /* : nullable EscapeMark */;
var1 = scope__AForExpr__escapemark(self);
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AForExpr#escapemark= for (self: AForExpr, nullable EscapeMark) */
void scope__AForExpr__escapemark_61d(val* self, val* p0) {
self->attrs[COLOR_scope__AForExpr___64descapemark].val = p0; /* @escapemark on <self:AForExpr> */
RET_LABEL:;
}
/* method scope#AForExpr#escapemark= for (self: Object, nullable EscapeMark) */
void VIRTUAL_scope__AForExpr__escapemark_61d(val* self, val* p0) {
scope__AForExpr__escapemark_61d(self, p0);
RET_LABEL:;
}
/* method scope#AForExpr#accept_scope_visitor for (self: AForExpr, ScopeVisitor) */
void scope__AForExpr__accept_scope_visitor(val* self, val* p0) {
val* var_v /* var v: ScopeVisitor */;
val* var /* : AExpr */;
val* var1 /* : List[Scope] */;
val* var2 /* : Scope */;
val* var3 /* : Array[Variable] */;
val* var_variables /* var variables: Array[Variable] */;
val* var4 /* : ANodes[TId] */;
val* var5 /* : Iterator[nullable Object] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_nid /* var nid: TId */;
val* var8 /* : Variable */;
val* var9 /* : String */;
val* var_va /* var va: Variable */;
short int var10 /* : Bool */;
val* var11 /* : nullable ALabel */;
short int var12 /* : Bool */;
val* var13 /* : EscapeMark */;
val* var_escapemark /* var escapemark: EscapeMark */;
val* var14 /* : nullable AExpr */;
val* var15 /* : List[Scope] */;
val* var16 /* : nullable Object */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AForExpr__n_expr]))(self) /* n_expr on <self:AForExpr>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:ScopeVisitor>*/;
var1 = ((val* (*)(val*))(var_v->class->vft[COLOR_scope__ScopeVisitor__scopes]))(var_v) /* scopes on <var_v:ScopeVisitor>*/;
var2 = NEW_scope__Scope(&type_scope__Scope);
((void (*)(val*))(var2->class->vft[COLOR_scope__Scope__init]))(var2) /* init on <var2:Scope>*/;
((void (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__Sequence__unshift]))(var1, var2) /* unshift on <var1:List[Scope]>*/;
var3 = NEW_array__Array(&type_array__Arrayscope__Variable);
((void (*)(val*))(var3->class->vft[COLOR_array__Array__init]))(var3) /* init on <var3:Array[Variable]>*/;
var_variables = var3;
((void (*)(val*, val*))(self->class->vft[COLOR_scope__AForExpr__variables_61d]))(self, var_variables) /* variables= on <self:AForExpr>*/;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AForExpr__n_ids]))(self) /* n_ids on <self:AForExpr>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__Collection__iterator]))(var4) /* iterator on <var4:ANodes[TId]>*/;
for(;;) {
var6 = ((short int (*)(val*))(var5->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var5) /* is_ok on <var5:Iterator[nullable Object]>*/;
if(!var6) break;
var7 = ((val* (*)(val*))(var5->class->vft[COLOR_abstract_collection__Iterator__item]))(var5) /* item on <var5:Iterator[nullable Object]>*/;
var_nid = var7;
var8 = NEW_scope__Variable(&type_scope__Variable);
var9 = ((val* (*)(val*))(var_nid->class->vft[COLOR_parser_nodes__Token__text]))(var_nid) /* text on <var_nid:TId>*/;
((void (*)(val*, val*))(var8->class->vft[COLOR_scope__Variable__init]))(var8, var9) /* init on <var8:Variable>*/;
var_va = var8;
var10 = ((short int (*)(val*, val*, val*))(var_v->class->vft[COLOR_scope__ScopeVisitor__register_variable]))(var_v, var_nid, var_va) /* register_variable on <var_v:ScopeVisitor>*/;
var10;
((void (*)(val*, val*))(var_variables->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_variables, var_va) /* add on <var_variables:Array[Variable]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var5->class->vft[COLOR_abstract_collection__Iterator__next]))(var5) /* next on <var5:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var11 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ALabelable__n_label]))(self) /* n_label on <self:AForExpr>*/;
var12 = 1;
var13 = ((val* (*)(val*, val*, short int))(var_v->class->vft[COLOR_scope__ScopeVisitor__make_escape_mark]))(var_v, var11, var12) /* make_escape_mark on <var_v:ScopeVisitor>*/;
var_escapemark = var13;
((void (*)(val*, val*))(self->class->vft[COLOR_scope__AForExpr__escapemark_61d]))(self, var_escapemark) /* escapemark= on <self:AForExpr>*/;
var14 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AForExpr__n_block]))(self) /* n_block on <self:AForExpr>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_scope__ScopeVisitor__enter_visit_block]))(var_v, var14, var_escapemark) /* enter_visit_block on <var_v:ScopeVisitor>*/;
var15 = ((val* (*)(val*))(var_v->class->vft[COLOR_scope__ScopeVisitor__scopes]))(var_v) /* scopes on <var_v:ScopeVisitor>*/;
var16 = ((val* (*)(val*))(var15->class->vft[COLOR_abstract_collection__Sequence__shift]))(var15) /* shift on <var15:List[Scope]>*/;
var16;
RET_LABEL:;
}
/* method scope#AForExpr#accept_scope_visitor for (self: Object, ScopeVisitor) */
void VIRTUAL_scope__AForExpr__accept_scope_visitor(val* self, val* p0) {
scope__AForExpr__accept_scope_visitor(self, p0);
RET_LABEL:;
}
/* method scope#AVarFormExpr#variable for (self: AVarFormExpr): nullable Variable */
val* scope__AVarFormExpr__variable(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
var1 = self->attrs[COLOR_scope__AVarFormExpr___64dvariable].val; /* @variable on <self:AVarFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AVarFormExpr#variable for (self: Object): nullable Variable */
val* VIRTUAL_scope__AVarFormExpr__variable(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
var1 = scope__AVarFormExpr__variable(self);
var = var1;
RET_LABEL:;
return var;
}
/* method scope#AVarFormExpr#variable= for (self: AVarFormExpr, nullable Variable) */
void scope__AVarFormExpr__variable_61d(val* self, val* p0) {
self->attrs[COLOR_scope__AVarFormExpr___64dvariable].val = p0; /* @variable on <self:AVarFormExpr> */
RET_LABEL:;
}
/* method scope#AVarFormExpr#variable= for (self: Object, nullable Variable) */
void VIRTUAL_scope__AVarFormExpr__variable_61d(val* self, val* p0) {
scope__AVarFormExpr__variable_61d(self, p0);
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
val* var8 /* : AExprs */;
val* var9 /* : ANodes[AExpr] */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : AExprs */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
static val* varonce;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : String */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : String */;
val* var25 /* : Array[Object] */;
long var26 /* : Int */;
val* var27 /* : NativeArray[Object] */;
val* var28 /* : String */;
val* var29 /* : AVarFormExpr */;
val* var_n /* var n: AExpr */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ASendExpr__n_expr]))(self) /* n_expr on <self:ACallFormExpr>*/;
/* <var:AExpr> isa AImplicitSelfExpr */
cltype = type_parser_nodes__AImplicitSelfExpr.color;
idtype = type_parser_nodes__AImplicitSelfExpr.id;
if(cltype >= var->type->table_size) {
var1 = 0;
} else {
var1 = var->type->type_table[cltype] == idtype;
}
if (var1){
var2 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ACallFormExpr__n_id]))(self) /* n_id on <self:ACallFormExpr>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_parser_nodes__Token__text]))(var2) /* text on <var2:TId>*/;
var_name = var3;
var4 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_scope__ScopeVisitor__search_variable]))(var_v, var_name) /* search_variable on <var_v:ScopeVisitor>*/;
var_variable = var4;
var5 = NULL;
if (var_variable == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (var6){
var8 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ACallFormExpr__n_args]))(self) /* n_args on <self:ACallFormExpr>*/;
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_parser_nodes__AExprs__n_exprs]))(var8) /* n_exprs on <var8:AExprs>*/;
var10 = ((short int (*)(val*))(var9->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var9) /* is_empty on <var9:ANodes[AExpr]>*/;
var11 = !var10;
if (var11) {
var7 = 1;
} else {
var12 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ACallFormExpr__n_args]))(self) /* n_args on <self:ACallFormExpr>*/;
/* <var12:AExprs> isa AParExprs */
cltype14 = type_parser_nodes__AParExprs.color;
idtype15 = type_parser_nodes__AParExprs.id;
if(cltype14 >= var12->type->table_size) {
var13 = 0;
} else {
var13 = var12->type->type_table[cltype14] == idtype15;
}
var7 = var13;
}
if (var7){
if (varonce) {
var16 = varonce;
} else {
var17 = "Error: ";
var18 = 7;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce = var16;
}
if (varonce20) {
var21 = varonce20;
} else {
var22 = " is variable, not a function.";
var23 = 29;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
var25 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var25 = array_instance Array[Object] */
var26 = 3;
var27 = NEW_array__NativeArray(var26, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var27)->values[0] = (val*) var16;
((struct instance_array__NativeArray*)var27)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var27)->values[2] = (val*) var21;
((void (*)(val*, val*, long))(var25->class->vft[COLOR_array__Array__with_native]))(var25, var27, var26) /* with_native on <var25:Array[Object]>*/;
}
var28 = ((val* (*)(val*))(var25->class->vft[COLOR_string__Object__to_s]))(var25) /* to_s on <var25:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_scope__ScopeVisitor__error]))(var_v, self, var28) /* error on <var_v:ScopeVisitor>*/;
goto RET_LABEL;
} else {
}
var29 = ((val* (*)(val*, val*))(self->class->vft[COLOR_scope__ACallFormExpr__variable_create]))(self, var_variable) /* variable_create on <self:ACallFormExpr>*/;
var_n = var29;
((void (*)(val*, val*))(var_n->class->vft[COLOR_scope__AVarFormExpr__variable_61d]))(var_n, var_variable) /* variable= on <var_n:AExpr(AVarFormExpr)>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__ANode__replace_with]))(self, var_n) /* replace_with on <self:ACallFormExpr>*/;
((void (*)(val*, val*))(var_n->class->vft[COLOR_scope__ANode__accept_scope_visitor]))(var_n, var_v) /* accept_scope_visitor on <var_n:AExpr(AVarFormExpr)>*/;
goto RET_LABEL;
} else {
}
} else {
}
((void (*)(val*, val*))(self->class->vft[COLOR_scope__ACallFormExpr__accept_scope_visitor]))(self, p0) /* accept_scope_visitor on <self:ACallFormExpr>*/;
RET_LABEL:;
}
/* method scope#ACallFormExpr#accept_scope_visitor for (self: Object, ScopeVisitor) */
void VIRTUAL_scope__ACallFormExpr__accept_scope_visitor(val* self, val* p0) {
scope__ACallFormExpr__accept_scope_visitor(self, p0);
RET_LABEL:;
}
/* method scope#ACallFormExpr#variable_create for (self: ACallFormExpr, Variable): AVarFormExpr */
val* scope__ACallFormExpr__variable_create(val* self, val* p0) {
val* var /* : AVarFormExpr */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "variable_create", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/scope.nit", 389);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method scope#ACallFormExpr#variable_create for (self: Object, Variable): AVarFormExpr */
val* VIRTUAL_scope__ACallFormExpr__variable_create(val* self, val* p0) {
val* var /* : AVarFormExpr */;
val* var1 /* : AVarFormExpr */;
var1 = scope__ACallFormExpr__variable_create(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method scope#ACallExpr#variable_create for (self: ACallExpr, Variable): AVarFormExpr */
val* scope__ACallExpr__variable_create(val* self, val* p0) {
val* var /* : AVarFormExpr */;
val* var_variable /* var variable: Variable */;
val* var1 /* : AVarExpr */;
val* var2 /* : TId */;
var_variable = p0;
var1 = NEW_parser_nodes__AVarExpr(&type_parser_nodes__AVarExpr);
var2 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ACallFormExpr__n_id]))(self) /* n_id on <self:ACallExpr>*/;
((void (*)(val*, val*))(var1->class->vft[COLOR_parser_prod__AVarExpr__init_avarexpr]))(var1, var2) /* init_avarexpr on <var1:AVarExpr>*/;
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
var2 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ACallFormExpr__n_id]))(self) /* n_id on <self:ACallAssignExpr>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAssignFormExpr__n_assign]))(self) /* n_assign on <self:ACallAssignExpr>*/;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAssignFormExpr__n_value]))(self) /* n_value on <self:ACallAssignExpr>*/;
((void (*)(val*, val*, val*, val*))(var1->class->vft[COLOR_parser_prod__AVarAssignExpr__init_avarassignexpr]))(var1, var2, var3, var4) /* init_avarassignexpr on <var1:AVarAssignExpr>*/;
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
var2 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ACallFormExpr__n_id]))(self) /* n_id on <self:ACallReassignExpr>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AReassignFormExpr__n_assign_op]))(self) /* n_assign_op on <self:ACallReassignExpr>*/;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AReassignFormExpr__n_value]))(self) /* n_value on <self:ACallReassignExpr>*/;
((void (*)(val*, val*, val*, val*))(var1->class->vft[COLOR_parser_prod__AVarReassignExpr__init_avarreassignexpr]))(var1, var2, var3, var4) /* init_avarreassignexpr on <var1:AVarReassignExpr>*/;
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
