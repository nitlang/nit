#include "literal.sep.0.h"
/* method literal#ToolContext#literal_phase for (self: ToolContext): Phase */
val* literal__ToolContext__literal_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_literal__ToolContext___64dliteral_phase].val; /* @literal_phase on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @literal_phase");
fprintf(stderr, " (%s:%d)\n", "src/literal.nit", 25);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method literal#ToolContext#literal_phase for (self: Object): Phase */
val* VIRTUAL_literal__ToolContext__literal_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = literal__ToolContext__literal_phase(self);
var = var1;
RET_LABEL:;
return var;
}
/* method literal#ToolContext#literal_phase= for (self: ToolContext, Phase) */
void literal__ToolContext__literal_phase_61d(val* self, val* p0) {
self->attrs[COLOR_literal__ToolContext___64dliteral_phase].val = p0; /* @literal_phase on <self:ToolContext> */
RET_LABEL:;
}
/* method literal#ToolContext#literal_phase= for (self: Object, Phase) */
void VIRTUAL_literal__ToolContext__literal_phase_61d(val* self, val* p0) {
literal__ToolContext__literal_phase_61d(self, p0);
RET_LABEL:;
}
/* method literal#LiteralPhase#process_nmodule for (self: LiteralPhase, AModule) */
void literal__LiteralPhase__process_nmodule(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
val* var /* : ToolContext */;
var_nmodule = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_phase__Phase__toolcontext]))(self) /* toolcontext on <self:LiteralPhase>*/;
((void (*)(val*, val*))(var_nmodule->class->vft[COLOR_literal__AModule__do_literal]))(var_nmodule, var) /* do_literal on <var_nmodule:AModule>*/;
RET_LABEL:;
}
/* method literal#LiteralPhase#process_nmodule for (self: Object, AModule) */
void VIRTUAL_literal__LiteralPhase__process_nmodule(val* self, val* p0) {
literal__LiteralPhase__process_nmodule(self, p0);
RET_LABEL:;
}
/* method literal#AModule#do_literal for (self: AModule, ToolContext) */
void literal__AModule__do_literal(val* self, val* p0) {
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var /* : LiteralVisitor */;
val* var_v /* var v: LiteralVisitor */;
var_toolcontext = p0;
var = NEW_literal__LiteralVisitor(&type_literal__LiteralVisitor);
((void (*)(val*, val*))(var->class->vft[COLOR_literal__LiteralVisitor__init]))(var, var_toolcontext) /* init on <var:LiteralVisitor>*/;
var_v = var;
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, self) /* enter_visit on <var_v:LiteralVisitor>*/;
RET_LABEL:;
}
/* method literal#AModule#do_literal for (self: Object, ToolContext) */
void VIRTUAL_literal__AModule__do_literal(val* self, val* p0) {
literal__AModule__do_literal(self, p0);
RET_LABEL:;
}
/* method literal#LiteralVisitor#toolcontext for (self: LiteralVisitor): ToolContext */
val* literal__LiteralVisitor__toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_literal__LiteralVisitor___64dtoolcontext].val; /* @toolcontext on <self:LiteralVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @toolcontext");
fprintf(stderr, " (%s:%d)\n", "src/literal.nit", 47);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method literal#LiteralVisitor#toolcontext for (self: Object): ToolContext */
val* VIRTUAL_literal__LiteralVisitor__toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = literal__LiteralVisitor__toolcontext(self);
var = var1;
RET_LABEL:;
return var;
}
/* method literal#LiteralVisitor#toolcontext= for (self: LiteralVisitor, ToolContext) */
void literal__LiteralVisitor__toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_literal__LiteralVisitor___64dtoolcontext].val = p0; /* @toolcontext on <self:LiteralVisitor> */
RET_LABEL:;
}
/* method literal#LiteralVisitor#toolcontext= for (self: Object, ToolContext) */
void VIRTUAL_literal__LiteralVisitor__toolcontext_61d(val* self, val* p0) {
literal__LiteralVisitor__toolcontext_61d(self, p0);
RET_LABEL:;
}
/* method literal#LiteralVisitor#init for (self: LiteralVisitor, ToolContext) */
void literal__LiteralVisitor__init(val* self, val* p0) {
val* var_toolcontext /* var toolcontext: ToolContext */;
var_toolcontext = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Visitor__init]))(self) /* init on <self:LiteralVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_literal__LiteralVisitor__toolcontext_61d]))(self, var_toolcontext) /* toolcontext= on <self:LiteralVisitor>*/;
RET_LABEL:;
}
/* method literal#LiteralVisitor#init for (self: Object, ToolContext) */
void VIRTUAL_literal__LiteralVisitor__init(val* self, val* p0) {
literal__LiteralVisitor__init(self, p0);
RET_LABEL:;
}
/* method literal#LiteralVisitor#visit for (self: LiteralVisitor, ANode) */
void literal__LiteralVisitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
var_n = p0;
((void (*)(val*, val*))(var_n->class->vft[COLOR_literal__ANode__accept_literal]))(var_n, self) /* accept_literal on <var_n:ANode>*/;
((void (*)(val*, val*))(var_n->class->vft[COLOR_parser_nodes__ANode__visit_all]))(var_n, self) /* visit_all on <var_n:ANode>*/;
RET_LABEL:;
}
/* method literal#LiteralVisitor#visit for (self: Object, ANode) */
void VIRTUAL_literal__LiteralVisitor__visit(val* self, val* p0) {
literal__LiteralVisitor__visit(self, p0);
RET_LABEL:;
}
/* method literal#ANode#accept_literal for (self: ANode, LiteralVisitor) */
void literal__ANode__accept_literal(val* self, val* p0) {
val* var_v /* var v: LiteralVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method literal#ANode#accept_literal for (self: Object, LiteralVisitor) */
void VIRTUAL_literal__ANode__accept_literal(val* self, val* p0) {
literal__ANode__accept_literal(self, p0);
RET_LABEL:;
}
/* method literal#AIntExpr#value for (self: AIntExpr): nullable Int */
val* literal__AIntExpr__value(val* self) {
val* var /* : nullable Int */;
val* var1 /* : nullable Int */;
var1 = self->attrs[COLOR_literal__AIntExpr___64dvalue].val; /* @value on <self:AIntExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method literal#AIntExpr#value for (self: Object): nullable Int */
val* VIRTUAL_literal__AIntExpr__value(val* self) {
val* var /* : nullable Int */;
val* var1 /* : nullable Int */;
var1 = literal__AIntExpr__value(self);
var = var1;
RET_LABEL:;
return var;
}
/* method literal#AIntExpr#value= for (self: AIntExpr, nullable Int) */
void literal__AIntExpr__value_61d(val* self, val* p0) {
self->attrs[COLOR_literal__AIntExpr___64dvalue].val = p0; /* @value on <self:AIntExpr> */
RET_LABEL:;
}
/* method literal#AIntExpr#value= for (self: Object, nullable Int) */
void VIRTUAL_literal__AIntExpr__value_61d(val* self, val* p0) {
literal__AIntExpr__value_61d(self, p0);
RET_LABEL:;
}
/* method literal#AIntExpr#accept_literal for (self: AIntExpr, LiteralVisitor) */
void literal__AIntExpr__accept_literal(val* self, val* p0) {
val* var_v /* var v: LiteralVisitor */;
val* var /* : TNumber */;
val* var1 /* : String */;
long var2 /* : Int */;
val* var3 /* : nullable Int */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AIntExpr__n_number]))(self) /* n_number on <self:AIntExpr>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_parser_nodes__Token__text]))(var) /* text on <var:TNumber>*/;
var2 = ((long (*)(val*))(var1->class->vft[COLOR_string__AbstractString__to_i]))(var1) /* to_i on <var1:String>*/;
var3 = BOX_kernel__Int(var2); /* autobox from Int to nullable Int */
((void (*)(val*, val*))(self->class->vft[COLOR_literal__AIntExpr__value_61d]))(self, var3) /* value= on <self:AIntExpr>*/;
RET_LABEL:;
}
/* method literal#AIntExpr#accept_literal for (self: Object, LiteralVisitor) */
void VIRTUAL_literal__AIntExpr__accept_literal(val* self, val* p0) {
literal__AIntExpr__accept_literal(self, p0);
RET_LABEL:;
}
/* method literal#AFloatExpr#value for (self: AFloatExpr): nullable Float */
val* literal__AFloatExpr__value(val* self) {
val* var /* : nullable Float */;
val* var1 /* : nullable Float */;
var1 = self->attrs[COLOR_literal__AFloatExpr___64dvalue].val; /* @value on <self:AFloatExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method literal#AFloatExpr#value for (self: Object): nullable Float */
val* VIRTUAL_literal__AFloatExpr__value(val* self) {
val* var /* : nullable Float */;
val* var1 /* : nullable Float */;
var1 = literal__AFloatExpr__value(self);
var = var1;
RET_LABEL:;
return var;
}
/* method literal#AFloatExpr#value= for (self: AFloatExpr, nullable Float) */
void literal__AFloatExpr__value_61d(val* self, val* p0) {
self->attrs[COLOR_literal__AFloatExpr___64dvalue].val = p0; /* @value on <self:AFloatExpr> */
RET_LABEL:;
}
/* method literal#AFloatExpr#value= for (self: Object, nullable Float) */
void VIRTUAL_literal__AFloatExpr__value_61d(val* self, val* p0) {
literal__AFloatExpr__value_61d(self, p0);
RET_LABEL:;
}
/* method literal#AFloatExpr#accept_literal for (self: AFloatExpr, LiteralVisitor) */
void literal__AFloatExpr__accept_literal(val* self, val* p0) {
val* var_v /* var v: LiteralVisitor */;
val* var /* : TFloat */;
val* var1 /* : String */;
double var2 /* : Float */;
val* var3 /* : nullable Float */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AFloatExpr__n_float]))(self) /* n_float on <self:AFloatExpr>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_parser_nodes__Token__text]))(var) /* text on <var:TFloat>*/;
var2 = ((double (*)(val*))(var1->class->vft[COLOR_string__AbstractString__to_f]))(var1) /* to_f on <var1:String>*/;
var3 = BOX_kernel__Float(var2); /* autobox from Float to nullable Float */
((void (*)(val*, val*))(self->class->vft[COLOR_literal__AFloatExpr__value_61d]))(self, var3) /* value= on <self:AFloatExpr>*/;
RET_LABEL:;
}
/* method literal#AFloatExpr#accept_literal for (self: Object, LiteralVisitor) */
void VIRTUAL_literal__AFloatExpr__accept_literal(val* self, val* p0) {
literal__AFloatExpr__accept_literal(self, p0);
RET_LABEL:;
}
/* method literal#ACharExpr#value for (self: ACharExpr): nullable Char */
val* literal__ACharExpr__value(val* self) {
val* var /* : nullable Char */;
val* var1 /* : nullable Char */;
var1 = self->attrs[COLOR_literal__ACharExpr___64dvalue].val; /* @value on <self:ACharExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method literal#ACharExpr#value for (self: Object): nullable Char */
val* VIRTUAL_literal__ACharExpr__value(val* self) {
val* var /* : nullable Char */;
val* var1 /* : nullable Char */;
var1 = literal__ACharExpr__value(self);
var = var1;
RET_LABEL:;
return var;
}
/* method literal#ACharExpr#value= for (self: ACharExpr, nullable Char) */
void literal__ACharExpr__value_61d(val* self, val* p0) {
self->attrs[COLOR_literal__ACharExpr___64dvalue].val = p0; /* @value on <self:ACharExpr> */
RET_LABEL:;
}
/* method literal#ACharExpr#value= for (self: Object, nullable Char) */
void VIRTUAL_literal__ACharExpr__value_61d(val* self, val* p0) {
literal__ACharExpr__value_61d(self, p0);
RET_LABEL:;
}
/* method literal#ACharExpr#accept_literal for (self: ACharExpr, LiteralVisitor) */
void literal__ACharExpr__accept_literal(val* self, val* p0) {
val* var_v /* var v: LiteralVisitor */;
val* var /* : TChar */;
val* var1 /* : String */;
val* var2 /* : String */;
val* var_txt /* var txt: String */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : ToolContext */;
val* var10 /* : Location */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : String */;
val* var15 /* : Array[Object] */;
long var16 /* : Int */;
val* var17 /* : NativeArray[Object] */;
val* var18 /* : String */;
long var19 /* : Int */;
val* var20 /* : nullable Object */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ACharExpr__n_char]))(self) /* n_char on <self:ACharExpr>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_parser_nodes__Token__text]))(var) /* text on <var:TChar>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_string__AbstractString__unescape_nit]))(var1) /* unescape_nit on <var1:String>*/;
var_txt = var2;
var3 = ((long (*)(val*))(var_txt->class->vft[COLOR_abstract_collection__Collection__length]))(var_txt) /* length on <var_txt:String>*/;
var4 = 3;
{ /* Inline kernel#Int#!= (var3,var4) */
var7 = var3 == var4;
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
if (var5){
var9 = ((val* (*)(val*))(var_v->class->vft[COLOR_literal__LiteralVisitor__toolcontext]))(var_v) /* toolcontext on <var_v:LiteralVisitor>*/;
var10 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__hot_location]))(self) /* hot_location on <self:ACharExpr>*/;
if (varonce) {
var11 = varonce;
} else {
var12 = "Invalid character literal ";
var13 = 26;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce = var11;
}
var15 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var15 = array_instance Array[Object] */
var16 = 2;
var17 = NEW_array__NativeArray(var16, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var17)->values[0] = (val*) var11;
((struct instance_array__NativeArray*)var17)->values[1] = (val*) var_txt;
((void (*)(val*, val*, long))(var15->class->vft[COLOR_array__Array__with_native]))(var15, var17, var16) /* with_native on <var15:Array[Object]>*/;
}
var18 = ((val* (*)(val*))(var15->class->vft[COLOR_string__Object__to_s]))(var15) /* to_s on <var15:Array[Object]>*/;
((void (*)(val*, val*, val*))(var9->class->vft[COLOR_toolcontext__ToolContext__error]))(var9, var10, var18) /* error on <var9:ToolContext>*/;
goto RET_LABEL;
} else {
}
var19 = 1;
var20 = ((val* (*)(val*, long))(var_txt->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_txt, var19) /* [] on <var_txt:String>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_literal__ACharExpr__value_61d]))(self, var20) /* value= on <self:ACharExpr>*/;
RET_LABEL:;
}
/* method literal#ACharExpr#accept_literal for (self: Object, LiteralVisitor) */
void VIRTUAL_literal__ACharExpr__accept_literal(val* self, val* p0) {
literal__ACharExpr__accept_literal(self, p0);
RET_LABEL:;
}
/* method literal#AStringFormExpr#value for (self: AStringFormExpr): nullable String */
val* literal__AStringFormExpr__value(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_literal__AStringFormExpr___64dvalue].val; /* @value on <self:AStringFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method literal#AStringFormExpr#value for (self: Object): nullable String */
val* VIRTUAL_literal__AStringFormExpr__value(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = literal__AStringFormExpr__value(self);
var = var1;
RET_LABEL:;
return var;
}
/* method literal#AStringFormExpr#value= for (self: AStringFormExpr, nullable String) */
void literal__AStringFormExpr__value_61d(val* self, val* p0) {
self->attrs[COLOR_literal__AStringFormExpr___64dvalue].val = p0; /* @value on <self:AStringFormExpr> */
RET_LABEL:;
}
/* method literal#AStringFormExpr#value= for (self: Object, nullable String) */
void VIRTUAL_literal__AStringFormExpr__value_61d(val* self, val* p0) {
literal__AStringFormExpr__value_61d(self, p0);
RET_LABEL:;
}
/* method literal#AStringFormExpr#accept_literal for (self: AStringFormExpr, LiteralVisitor) */
void literal__AStringFormExpr__accept_literal(val* self, val* p0) {
val* var_v /* var v: LiteralVisitor */;
val* var /* : Token */;
val* var1 /* : String */;
val* var_txt /* var txt: String */;
long var2 /* : Int */;
long var_skip /* var skip: Int */;
short int var3 /* : Bool */;
long var4 /* : Int */;
val* var5 /* : nullable Object */;
long var6 /* : Int */;
val* var7 /* : nullable Object */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var_ /* var : Bool */;
long var11 /* : Int */;
long var12 /* : Int */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var16 /* : Bool */;
long var17 /* : Int */;
long var18 /* : Int */;
long var19 /* : Int */;
long var20 /* : Int */;
long var22 /* : Int */;
long var23 /* : Int */;
long var25 /* : Int */;
val* var26 /* : String */;
val* var27 /* : String */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AStringFormExpr__n_string]))(self) /* n_string on <self:AStringFormExpr>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_parser_nodes__Token__text]))(var) /* text on <var:Token>*/;
var_txt = var1;
var2 = 1;
var_skip = var2;
var4 = 0;
var5 = ((val* (*)(val*, long))(var_txt->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_txt, var4) /* [] on <var_txt:String>*/;
var6 = 1;
var7 = ((val* (*)(val*, long))(var_txt->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_txt, var6) /* [] on <var_txt:String>*/;
{ /* Inline kernel#Char#== (var5,var7) */
var10 = var5 == var7 || (((struct instance_kernel__Char*)var5)->value == ((struct instance_kernel__Char*)var7)->value);
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var_ = var8;
if (var8){
var11 = ((long (*)(val*))(var_txt->class->vft[COLOR_abstract_collection__Collection__length]))(var_txt) /* length on <var_txt:String>*/;
var12 = 6;
{ /* Inline kernel#Int#>= (var11,var12) */
/* Covariant cast for argument 0 (i) <var12:Int> isa OTHER */
/* <var12:Int> isa OTHER */
var15 = 1; /* easy <var12:Int> isa OTHER*/
if (!var15) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 262);
show_backtrace(1);
}
var16 = var11 >= var12;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var3 = var13;
} else {
var3 = var_;
}
if (var3){
var17 = 3;
var_skip = var17;
} else {
}
var18 = ((long (*)(val*))(var_txt->class->vft[COLOR_abstract_collection__Collection__length]))(var_txt) /* length on <var_txt:String>*/;
var19 = 2;
{ /* Inline kernel#Int#* (var19,var_skip) */
var22 = var19 * var_skip;
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
{ /* Inline kernel#Int#- (var18,var20) */
var25 = var18 - var20;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
var26 = ((val* (*)(val*, long, long))(var_txt->class->vft[COLOR_string__AbstractString__substring]))(var_txt, var_skip, var23) /* substring on <var_txt:String>*/;
var27 = ((val* (*)(val*))(var26->class->vft[COLOR_string__AbstractString__unescape_nit]))(var26) /* unescape_nit on <var26:String>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_literal__AStringFormExpr__value_61d]))(self, var27) /* value= on <self:AStringFormExpr>*/;
RET_LABEL:;
}
/* method literal#AStringFormExpr#accept_literal for (self: Object, LiteralVisitor) */
void VIRTUAL_literal__AStringFormExpr__accept_literal(val* self, val* p0) {
literal__AStringFormExpr__accept_literal(self, p0);
RET_LABEL:;
}
