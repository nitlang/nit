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
val* var19 /* : StringCharView */;
long var20 /* : Int */;
val* var21 /* : nullable Object */;
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
var19 = ((val* (*)(val*))(var_txt->class->vft[COLOR_string__AbstractString__chars]))(var_txt) /* chars on <var_txt:String>*/;
var20 = 1;
var21 = ((val* (*)(val*, long))(var19->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var19, var20) /* [] on <var19:StringCharView>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_literal__ACharExpr__value_61d]))(self, var21) /* value= on <self:ACharExpr>*/;
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
long var_behead /* var behead: Int */;
long var3 /* : Int */;
long var_betail /* var betail: Int */;
short int var4 /* : Bool */;
val* var5 /* : StringCharView */;
long var6 /* : Int */;
val* var7 /* : nullable Object */;
val* var8 /* : StringCharView */;
long var9 /* : Int */;
val* var10 /* : nullable Object */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var_ /* var : Bool */;
long var14 /* : Int */;
long var15 /* : Int */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var19 /* : Bool */;
long var20 /* : Int */;
long var21 /* : Int */;
short int var22 /* : Bool */;
val* var23 /* : StringCharView */;
long var24 /* : Int */;
val* var25 /* : nullable Object */;
char var26 /* : Char */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
char var30 /* : Char */;
short int var_31 /* var : Bool */;
val* var32 /* : StringCharView */;
long var33 /* : Int */;
val* var34 /* : nullable Object */;
char var35 /* : Char */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
char var39 /* : Char */;
long var40 /* : Int */;
long var41 /* : Int */;
long var42 /* : Int */;
long var44 /* : Int */;
long var45 /* : Int */;
long var47 /* : Int */;
val* var48 /* : String */;
val* var49 /* : String */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AStringFormExpr__n_string]))(self) /* n_string on <self:AStringFormExpr>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_parser_nodes__Token__text]))(var) /* text on <var:Token>*/;
var_txt = var1;
var2 = 1;
var_behead = var2;
var3 = 1;
var_betail = var3;
var5 = ((val* (*)(val*))(var_txt->class->vft[COLOR_string__AbstractString__chars]))(var_txt) /* chars on <var_txt:String>*/;
var6 = 0;
var7 = ((val* (*)(val*, long))(var5->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var5, var6) /* [] on <var5:StringCharView>*/;
var8 = ((val* (*)(val*))(var_txt->class->vft[COLOR_string__AbstractString__chars]))(var_txt) /* chars on <var_txt:String>*/;
var9 = 1;
var10 = ((val* (*)(val*, long))(var8->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var8, var9) /* [] on <var8:StringCharView>*/;
{ /* Inline kernel#Char#== (var7,var10) */
var13 = var7 == var10 || (((struct instance_kernel__Char*)var7)->value == ((struct instance_kernel__Char*)var10)->value);
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var_ = var11;
if (var11){
var14 = ((long (*)(val*))(var_txt->class->vft[COLOR_abstract_collection__Collection__length]))(var_txt) /* length on <var_txt:String>*/;
var15 = 6;
{ /* Inline kernel#Int#>= (var14,var15) */
/* Covariant cast for argument 0 (i) <var15:Int> isa OTHER */
/* <var15:Int> isa OTHER */
var18 = 1; /* easy <var15:Int> isa OTHER*/
if (!var18) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 266);
show_backtrace(1);
}
var19 = var14 >= var15;
var16 = var19;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var4 = var16;
} else {
var4 = var_;
}
if (var4){
var20 = 3;
var_behead = var20;
var21 = 3;
var_betail = var21;
var23 = ((val* (*)(val*))(var_txt->class->vft[COLOR_string__AbstractString__chars]))(var_txt) /* chars on <var_txt:String>*/;
var24 = 0;
var25 = ((val* (*)(val*, long))(var23->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var23, var24) /* [] on <var23:StringCharView>*/;
var26 = '\"';
{ /* Inline kernel#Char#== (var25,var26) */
var29 = (var25 != NULL) && (var25->class == &class_kernel__Char);
if (var29) {
var30 = ((struct instance_kernel__Char*)var25)->value; /* autounbox from nullable Object to Char */;
var29 = (var30 == var26);
}
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
var_31 = var27;
if (var27){
var32 = ((val* (*)(val*))(var_txt->class->vft[COLOR_string__AbstractString__chars]))(var_txt) /* chars on <var_txt:String>*/;
var33 = 3;
var34 = ((val* (*)(val*, long))(var32->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var32, var33) /* [] on <var32:StringCharView>*/;
var35 = '\n';
{ /* Inline kernel#Char#== (var34,var35) */
var38 = (var34 != NULL) && (var34->class == &class_kernel__Char);
if (var38) {
var39 = ((struct instance_kernel__Char*)var34)->value; /* autounbox from nullable Object to Char */;
var38 = (var39 == var35);
}
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
var22 = var36;
} else {
var22 = var_31;
}
if (var22){
var40 = 4;
var_behead = var40;
} else {
}
} else {
}
var41 = ((long (*)(val*))(var_txt->class->vft[COLOR_abstract_collection__Collection__length]))(var_txt) /* length on <var_txt:String>*/;
{ /* Inline kernel#Int#- (var41,var_behead) */
var44 = var41 - var_behead;
var42 = var44;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
{ /* Inline kernel#Int#- (var42,var_betail) */
var47 = var42 - var_betail;
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
var48 = ((val* (*)(val*, long, long))(var_txt->class->vft[COLOR_string__AbstractString__substring]))(var_txt, var_behead, var45) /* substring on <var_txt:String>*/;
var49 = ((val* (*)(val*))(var48->class->vft[COLOR_string__AbstractString__unescape_nit]))(var48) /* unescape_nit on <var48:String>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_literal__AStringFormExpr__value_61d]))(self, var49) /* value= on <self:AStringFormExpr>*/;
RET_LABEL:;
}
/* method literal#AStringFormExpr#accept_literal for (self: Object, LiteralVisitor) */
void VIRTUAL_literal__AStringFormExpr__accept_literal(val* self, val* p0) {
literal__AStringFormExpr__accept_literal(self, p0);
RET_LABEL:;
}
