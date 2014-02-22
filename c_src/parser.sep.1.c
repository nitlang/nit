#include "parser.sep.0.h"
/* method parser#State#state for (self: State): Int */
long parser__State__state(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_parser__State___state].l; /* _state on <self:State> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser#State#state for (self: Object): Int */
long VIRTUAL_parser__State__state(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = parser__State__state(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser#State#state= for (self: State, Int) */
void parser__State__state_61d(val* self, long p0) {
self->attrs[COLOR_parser__State___state].l = p0; /* _state on <self:State> */
RET_LABEL:;
}
/* method parser#State#state= for (self: Object, Int) */
void VIRTUAL_parser__State__state_61d(val* self, long p0) {
parser__State__state_61d(self, p0);
RET_LABEL:;
}
/* method parser#State#nodes for (self: State): nullable Object */
val* parser__State__nodes(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = self->attrs[COLOR_parser__State___nodes].val; /* _nodes on <self:State> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser#State#nodes for (self: Object): nullable Object */
val* VIRTUAL_parser__State__nodes(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = parser__State__nodes(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser#State#nodes= for (self: State, nullable Object) */
void parser__State__nodes_61d(val* self, val* p0) {
self->attrs[COLOR_parser__State___nodes].val = p0; /* _nodes on <self:State> */
RET_LABEL:;
}
/* method parser#State#nodes= for (self: Object, nullable Object) */
void VIRTUAL_parser__State__nodes_61d(val* self, val* p0) {
parser__State__nodes_61d(self, p0);
RET_LABEL:;
}
/* method parser#State#init for (self: State, Int, nullable Object) */
void parser__State__init(val* self, long p0, val* p1) {
long var_state /* var state: Int */;
val* var_nodes /* var nodes: nullable Object */;
var_state = p0;
var_nodes = p1;
self->attrs[COLOR_parser__State___state].l = var_state; /* _state on <self:State> */
self->attrs[COLOR_parser__State___nodes].val = var_nodes; /* _nodes on <self:State> */
RET_LABEL:;
}
/* method parser#State#init for (self: Object, Int, nullable Object) */
void VIRTUAL_parser__State__init(val* self, long p0, val* p1) {
parser__State__init(self, p0, p1);
RET_LABEL:;
}
/* method parser#Parser#init for (self: Parser, Lexer) */
void parser__Parser__init(val* self, val* p0) {
val* var_lexer /* var lexer: Lexer */;
val* var /* : Array[State] */;
long var1 /* : Int */;
long var2 /* : Int */;
long var4 /* : Int */;
var_lexer = p0;
self->attrs[COLOR_parser__Parser___lexer].val = var_lexer; /* _lexer on <self:Parser> */
var = NEW_array__Array(&type_array__Arrayparser__State);
((void (*)(val*))(var->class->vft[COLOR_array__Array__init]))(var) /* init on <var:Array[State]>*/;
self->attrs[COLOR_parser__Parser___stack].val = var; /* _stack on <self:Parser> */
var1 = 1;
{ /* Inline kernel#Int#unary - (var1) */
var4 = -var1;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
self->attrs[COLOR_parser__Parser___stack_pos].l = var2; /* _stack_pos on <self:Parser> */
((void (*)(val*))(self->class->vft[COLOR_parser__Parser__build_reduce_table]))(self) /* build_reduce_table on <self:Parser>*/;
RET_LABEL:;
}
/* method parser#Parser#init for (self: Object, Lexer) */
void VIRTUAL_parser__Parser__init(val* self, val* p0) {
parser__Parser__init(self, p0);
RET_LABEL:;
}
/* method parser#Parser#go_to for (self: Parser, Int): Int */
long parser__Parser__go_to(val* self, long p0) {
long var /* : Int */;
long var_index /* var index: Int */;
long var1 /* : Int */;
long var_state /* var state: Int */;
long var2 /* : Int */;
long var_low /* var low: Int */;
long var3 /* : Int */;
long var4 /* : Int */;
long var5 /* : Int */;
long var6 /* : Int */;
long var8 /* : Int */;
long var_high /* var high: Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var12 /* : Bool */;
long var13 /* : Int */;
long var15 /* : Int */;
long var16 /* : Int */;
long var17 /* : Int */;
long var19 /* : Int */;
long var_middle /* var middle: Int */;
long var20 /* : Int */;
long var21 /* : Int */;
long var23 /* : Int */;
long var24 /* : Int */;
long var25 /* : Int */;
long var27 /* : Int */;
long var_subindex /* var subindex: Int */;
long var28 /* : Int */;
long var_goal /* var goal: Int */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
short int var35 /* : Bool */;
long var36 /* : Int */;
long var37 /* : Int */;
long var39 /* : Int */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
const char* var_class_name45;
short int var46 /* : Bool */;
long var47 /* : Int */;
long var48 /* : Int */;
long var50 /* : Int */;
long var51 /* : Int */;
long var52 /* : Int */;
long var54 /* : Int */;
long var55 /* : Int */;
long var56 /* : Int */;
long var57 /* : Int */;
var_index = p0;
var1 = ((long (*)(val*))(self->class->vft[COLOR_parser__Parser__state]))(self) /* state on <self:Parser>*/;
var_state = var1;
var2 = 1;
var_low = var2;
var3 = 0;
var4 = ((long (*)(val*, long, long))(self->class->vft[COLOR_tables__TablesCapable__parser_goto]))(self, var_index, var3) /* parser_goto on <self:Parser>*/;
var5 = 1;
{ /* Inline kernel#Int#- (var4,var5) */
var8 = var4 - var5;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var_high = var6;
for(;;) {
{ /* Inline kernel#Int#<= (var_low,var_high) */
/* Covariant cast for argument 0 (i) <var_high:Int> isa OTHER */
/* <var_high:Int> isa OTHER */
var11 = 1; /* easy <var_high:Int> isa OTHER*/
if (!var11) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 260);
show_backtrace(1);
}
var12 = var_low <= var_high;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
if (!var9) break;
{ /* Inline kernel#Int#+ (var_low,var_high) */
var15 = var_low + var_high;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var16 = 2;
{ /* Inline kernel#Int#/ (var13,var16) */
var19 = var13 / var16;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var_middle = var17;
var20 = 2;
{ /* Inline kernel#Int#* (var_middle,var20) */
var23 = var_middle * var20;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var24 = 1;
{ /* Inline kernel#Int#+ (var21,var24) */
var27 = var21 + var24;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var_subindex = var25;
var28 = ((long (*)(val*, long, long))(self->class->vft[COLOR_tables__TablesCapable__parser_goto]))(self, var_index, var_subindex) /* parser_goto on <self:Parser>*/;
var_goal = var28;
{ /* Inline kernel#Int#< (var_state,var_goal) */
/* Covariant cast for argument 0 (i) <var_goal:Int> isa OTHER */
/* <var_goal:Int> isa OTHER */
var31 = 1; /* easy <var_goal:Int> isa OTHER*/
if (!var31) {
var_class_name34 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
show_backtrace(1);
}
var35 = var_state < var_goal;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
if (var29){
var36 = 1;
{ /* Inline kernel#Int#- (var_middle,var36) */
var39 = var_middle - var36;
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
var_high = var37;
} else {
{ /* Inline kernel#Int#> (var_state,var_goal) */
/* Covariant cast for argument 0 (i) <var_goal:Int> isa OTHER */
/* <var_goal:Int> isa OTHER */
var42 = 1; /* easy <var_goal:Int> isa OTHER*/
if (!var42) {
var_class_name45 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name45);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 263);
show_backtrace(1);
}
var46 = var_state > var_goal;
var40 = var46;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
if (var40){
var47 = 1;
{ /* Inline kernel#Int#+ (var_middle,var47) */
var50 = var_middle + var47;
var48 = var50;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
var_low = var48;
} else {
var51 = 1;
{ /* Inline kernel#Int#+ (var_subindex,var51) */
var54 = var_subindex + var51;
var52 = var54;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
var55 = ((long (*)(val*, long, long))(self->class->vft[COLOR_tables__TablesCapable__parser_goto]))(self, var_index, var52) /* parser_goto on <self:Parser>*/;
var = var55;
goto RET_LABEL;
}
}
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var56 = 2;
var57 = ((long (*)(val*, long, long))(self->class->vft[COLOR_tables__TablesCapable__parser_goto]))(self, var_index, var56) /* parser_goto on <self:Parser>*/;
var = var57;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser#Parser#go_to for (self: Object, Int): Int */
long VIRTUAL_parser__Parser__go_to(val* self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = parser__Parser__go_to(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method parser#Parser#push for (self: Parser, Int, nullable Object) */
void parser__Parser__push(val* self, long p0, val* p1) {
long var_numstate /* var numstate: Int */;
val* var_list_node /* var list_node: nullable Object */;
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
long var4 /* : Int */;
long var_pos /* var pos: Int */;
val* var5 /* : Array[State] */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var10 /* : Bool */;
val* var11 /* : Array[State] */;
val* var12 /* : nullable Object */;
val* var_state /* var state: State */;
val* var13 /* : Array[State] */;
val* var14 /* : State */;
var_numstate = p0;
var_list_node = p1;
var = self->attrs[COLOR_parser__Parser___stack_pos].l; /* _stack_pos on <self:Parser> */
var1 = 1;
{ /* Inline kernel#Int#+ (var,var1) */
var4 = var + var1;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var_pos = var2;
self->attrs[COLOR_parser__Parser___stack_pos].l = var_pos; /* _stack_pos on <self:Parser> */
var5 = self->attrs[COLOR_parser__Parser___stack].val; /* _stack on <self:Parser> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _stack");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 72);
show_backtrace(1);
}
var6 = ((long (*)(val*))(var5->class->vft[COLOR_abstract_collection__Collection__length]))(var5) /* length on <var5:Array[State]>*/;
{ /* Inline kernel#Int#< (var_pos,var6) */
/* Covariant cast for argument 0 (i) <var6:Int> isa OTHER */
/* <var6:Int> isa OTHER */
var9 = 1; /* easy <var6:Int> isa OTHER*/
if (!var9) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
show_backtrace(1);
}
var10 = var_pos < var6;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
if (var7){
var11 = self->attrs[COLOR_parser__Parser___stack].val; /* _stack on <self:Parser> */
if (var11 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _stack");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 73);
show_backtrace(1);
}
var12 = ((val* (*)(val*, long))(var11->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var11, var_pos) /* [] on <var11:Array[State]>*/;
var_state = var12;
((void (*)(val*, long))(var_state->class->vft[COLOR_parser__State__state_61d]))(var_state, var_numstate) /* state= on <var_state:State>*/;
((void (*)(val*, val*))(var_state->class->vft[COLOR_parser__State__nodes_61d]))(var_state, var_list_node) /* nodes= on <var_state:State>*/;
} else {
var13 = self->attrs[COLOR_parser__Parser___stack].val; /* _stack on <self:Parser> */
if (var13 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _stack");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 77);
show_backtrace(1);
}
var14 = NEW_parser__State(&type_parser__State);
((void (*)(val*, long, val*))(var14->class->vft[COLOR_parser__State__init]))(var14, var_numstate, var_list_node) /* init on <var14:State>*/;
((void (*)(val*, val*))(var13->class->vft[COLOR_abstract_collection__Sequence__push]))(var13, var14) /* push on <var13:Array[State]>*/;
}
RET_LABEL:;
}
/* method parser#Parser#push for (self: Object, Int, nullable Object) */
void VIRTUAL_parser__Parser__push(val* self, long p0, val* p1) {
parser__Parser__push(self, p0, p1);
RET_LABEL:;
}
/* method parser#Parser#state for (self: Parser): Int */
long parser__Parser__state(val* self) {
long var /* : Int */;
val* var1 /* : Array[State] */;
long var2 /* : Int */;
val* var3 /* : nullable Object */;
long var4 /* : Int */;
var1 = self->attrs[COLOR_parser__Parser___stack].val; /* _stack on <self:Parser> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _stack");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 84);
show_backtrace(1);
}
var2 = self->attrs[COLOR_parser__Parser___stack_pos].l; /* _stack_pos on <self:Parser> */
var3 = ((val* (*)(val*, long))(var1->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var1, var2) /* [] on <var1:Array[State]>*/;
var4 = ((long (*)(val*))(var3->class->vft[COLOR_parser__State__state]))(var3) /* state on <var3:nullable Object(State)>*/;
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser#Parser#state for (self: Object): Int */
long VIRTUAL_parser__Parser__state(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = parser__Parser__state(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser#Parser#pop for (self: Parser): nullable Object */
val* parser__Parser__pop(val* self) {
val* var /* : nullable Object */;
val* var1 /* : Array[State] */;
long var2 /* : Int */;
val* var3 /* : nullable Object */;
val* var4 /* : nullable Object */;
val* var_res /* var res: nullable Object */;
long var5 /* : Int */;
long var6 /* : Int */;
long var7 /* : Int */;
long var9 /* : Int */;
var1 = self->attrs[COLOR_parser__Parser___stack].val; /* _stack on <self:Parser> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _stack");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 90);
show_backtrace(1);
}
var2 = self->attrs[COLOR_parser__Parser___stack_pos].l; /* _stack_pos on <self:Parser> */
var3 = ((val* (*)(val*, long))(var1->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var1, var2) /* [] on <var1:Array[State]>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_parser__State__nodes]))(var3) /* nodes on <var3:nullable Object(State)>*/;
var_res = var4;
var5 = self->attrs[COLOR_parser__Parser___stack_pos].l; /* _stack_pos on <self:Parser> */
var6 = 1;
{ /* Inline kernel#Int#- (var5,var6) */
var9 = var5 - var6;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
self->attrs[COLOR_parser__Parser___stack_pos].l = var7; /* _stack_pos on <self:Parser> */
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser#Parser#pop for (self: Object): nullable Object */
val* VIRTUAL_parser__Parser__pop(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = parser__Parser__pop(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser#Parser#parse for (self: Parser): Start */
val* parser__Parser__parse(val* self) {
val* var /* : Start */;
long var1 /* : Int */;
val* var2 /* : null */;
val* var3 /* : Lexer */;
val* var_lexer /* var lexer: Lexer */;
val* var4 /* : Token */;
val* var_token /* var token: Token */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var6 /* : Start */;
val* var7 /* : null */;
long var8 /* : Int */;
long var_state /* var state: Int */;
long var9 /* : Int */;
long var_index /* var index: Int */;
long var10 /* : Int */;
long var11 /* : Int */;
long var_action_type /* var action_type: Int */;
long var12 /* : Int */;
long var13 /* : Int */;
long var_action_value /* var action_value: Int */;
long var14 /* : Int */;
long var_low /* var low: Int */;
long var15 /* : Int */;
long var16 /* : Int */;
long var17 /* : Int */;
long var18 /* : Int */;
long var20 /* : Int */;
long var_high /* var high: Int */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name;
short int var26 /* : Bool */;
long var27 /* : Int */;
long var29 /* : Int */;
long var30 /* : Int */;
long var31 /* : Int */;
long var33 /* : Int */;
long var_middle /* var middle: Int */;
long var34 /* : Int */;
long var35 /* : Int */;
long var37 /* : Int */;
long var38 /* : Int */;
long var39 /* : Int */;
long var41 /* : Int */;
long var_subindex /* var subindex: Int */;
long var42 /* : Int */;
long var_goal /* var goal: Int */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
short int var49 /* : Bool */;
long var50 /* : Int */;
long var51 /* : Int */;
long var53 /* : Int */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
const char* var_class_name59;
short int var60 /* : Bool */;
long var61 /* : Int */;
long var62 /* : Int */;
long var64 /* : Int */;
long var65 /* : Int */;
long var66 /* : Int */;
long var68 /* : Int */;
long var69 /* : Int */;
long var70 /* : Int */;
long var71 /* : Int */;
long var73 /* : Int */;
long var74 /* : Int */;
long var75 /* : Int */;
short int var76 /* : Bool */;
short int var78 /* : Bool */;
val* var79 /* : Token */;
long var80 /* : Int */;
short int var81 /* : Bool */;
short int var83 /* : Bool */;
val* var84 /* : Array[ReduceAction] */;
val* var85 /* : nullable Object */;
long var86 /* : Int */;
short int var87 /* : Bool */;
short int var89 /* : Bool */;
val* var90 /* : Token */;
val* var_node2 /* var node2: Token */;
short int var91 /* : Bool */;
int cltype92;
int idtype93;
val* var94 /* : nullable Object */;
val* var_node1 /* var node1: nullable Object */;
short int var95 /* : Bool */;
int cltype96;
int idtype97;
val* var98 /* : Start */;
val* var_node /* var node: Start */;
val* var99 /* : ComputeProdLocationVisitor */;
long var100 /* : Int */;
short int var101 /* : Bool */;
short int var103 /* : Bool */;
val* var104 /* : AParserError */;
val* var105 /* : Array[Object] */;
long var106 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var107 /* : String */;
char* var108 /* : NativeString */;
long var109 /* : Int */;
val* var110 /* : String */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : NativeString */;
long var114 /* : Int */;
val* var115 /* : String */;
val* var116 /* : String */;
val* var117 /* : Location */;
val* var_node2118 /* var node2: AParserError */;
val* var119 /* : Start */;
val* var120 /* : null */;
val* var_node121 /* var node: Start */;
var1 = 0;
var2 = NULL;
((void (*)(val*, long, val*))(self->class->vft[COLOR_parser__Parser__push]))(self, var1, var2) /* push on <self:Parser>*/;
var3 = self->attrs[COLOR_parser__Parser___lexer].val; /* _lexer on <self:Parser> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _lexer");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 100);
show_backtrace(1);
}
var_lexer = var3;
for(;;) {
var4 = ((val* (*)(val*))(var_lexer->class->vft[COLOR_lexer__Lexer__peek]))(var_lexer) /* peek on <var_lexer:Lexer>*/;
var_token = var4;
/* <var_token:Token> isa AError */
cltype = type_parser_nodes__AError.color;
idtype = type_parser_nodes__AError.id;
if(cltype >= var_token->type->table_size) {
var5 = 0;
} else {
var5 = var_token->type->type_table[cltype] == idtype;
}
if (var5){
var6 = NEW_parser_nodes__Start(&type_parser_nodes__Start);
var7 = NULL;
((void (*)(val*, val*, val*))(var6->class->vft[COLOR_parser_nodes__Start__init]))(var6, var7, var_token) /* init on <var6:Start>*/;
var = var6;
goto RET_LABEL;
} else {
}
var8 = ((long (*)(val*))(self->class->vft[COLOR_parser__Parser__state]))(self) /* state on <self:Parser>*/;
var_state = var8;
var9 = ((long (*)(val*))(var_token->class->vft[COLOR_lexer__Token__parser_index]))(var_token) /* parser_index on <var_token:Token>*/;
var_index = var9;
var10 = 2;
var11 = ((long (*)(val*, long, long))(self->class->vft[COLOR_tables__TablesCapable__parser_action]))(self, var_state, var10) /* parser_action on <self:Parser>*/;
var_action_type = var11;
var12 = 3;
var13 = ((long (*)(val*, long, long))(self->class->vft[COLOR_tables__TablesCapable__parser_action]))(self, var_state, var12) /* parser_action on <self:Parser>*/;
var_action_value = var13;
var14 = 1;
var_low = var14;
var15 = 0;
var16 = ((long (*)(val*, long, long))(self->class->vft[COLOR_tables__TablesCapable__parser_action]))(self, var_state, var15) /* parser_action on <self:Parser>*/;
var17 = 1;
{ /* Inline kernel#Int#- (var16,var17) */
var20 = var16 - var17;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
var_high = var18;
for(;;) {
{ /* Inline kernel#Int#<= (var_low,var_high) */
/* Covariant cast for argument 0 (i) <var_high:Int> isa OTHER */
/* <var_high:Int> isa OTHER */
var23 = 1; /* easy <var_high:Int> isa OTHER*/
if (!var23) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 260);
show_backtrace(1);
}
var26 = var_low <= var_high;
var21 = var26;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
if (!var21) break;
{ /* Inline kernel#Int#+ (var_low,var_high) */
var29 = var_low + var_high;
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
var30 = 2;
{ /* Inline kernel#Int#/ (var27,var30) */
var33 = var27 / var30;
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
var_middle = var31;
var34 = 3;
{ /* Inline kernel#Int#* (var_middle,var34) */
var37 = var_middle * var34;
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
var38 = 1;
{ /* Inline kernel#Int#+ (var35,var38) */
var41 = var35 + var38;
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
var_subindex = var39;
var42 = ((long (*)(val*, long, long))(self->class->vft[COLOR_tables__TablesCapable__parser_action]))(self, var_state, var_subindex) /* parser_action on <self:Parser>*/;
var_goal = var42;
{ /* Inline kernel#Int#< (var_index,var_goal) */
/* Covariant cast for argument 0 (i) <var_goal:Int> isa OTHER */
/* <var_goal:Int> isa OTHER */
var45 = 1; /* easy <var_goal:Int> isa OTHER*/
if (!var45) {
var_class_name48 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
show_backtrace(1);
}
var49 = var_index < var_goal;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
if (var43){
var50 = 1;
{ /* Inline kernel#Int#- (var_middle,var50) */
var53 = var_middle - var50;
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
var_high = var51;
} else {
{ /* Inline kernel#Int#> (var_index,var_goal) */
/* Covariant cast for argument 0 (i) <var_goal:Int> isa OTHER */
/* <var_goal:Int> isa OTHER */
var56 = 1; /* easy <var_goal:Int> isa OTHER*/
if (!var56) {
var_class_name59 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name59);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 263);
show_backtrace(1);
}
var60 = var_index > var_goal;
var54 = var60;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
if (var54){
var61 = 1;
{ /* Inline kernel#Int#+ (var_middle,var61) */
var64 = var_middle + var61;
var62 = var64;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
var_low = var62;
} else {
var65 = 1;
{ /* Inline kernel#Int#+ (var_subindex,var65) */
var68 = var_subindex + var65;
var66 = var68;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
var69 = ((long (*)(val*, long, long))(self->class->vft[COLOR_tables__TablesCapable__parser_action]))(self, var_state, var66) /* parser_action on <self:Parser>*/;
var_action_type = var69;
var70 = 2;
{ /* Inline kernel#Int#+ (var_subindex,var70) */
var73 = var_subindex + var70;
var71 = var73;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
var74 = ((long (*)(val*, long, long))(self->class->vft[COLOR_tables__TablesCapable__parser_action]))(self, var_state, var71) /* parser_action on <self:Parser>*/;
var_action_value = var74;
goto BREAK_label;
}
}
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var75 = 0;
{ /* Inline kernel#Int#== (var_action_type,var75) */
var78 = var_action_type == var75;
var76 = var78;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
if (var76){
var79 = ((val* (*)(val*))(var_lexer->class->vft[COLOR_lexer__Lexer__next]))(var_lexer) /* next on <var_lexer:Lexer>*/;
((void (*)(val*, long, val*))(self->class->vft[COLOR_parser__Parser__push]))(self, var_action_value, var79) /* push on <self:Parser>*/;
} else {
var80 = 1;
{ /* Inline kernel#Int#== (var_action_type,var80) */
var83 = var_action_type == var80;
var81 = var83;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
if (var81){
var84 = self->attrs[COLOR_parser__Parser___reduce_table].val; /* _reduce_table on <self:Parser> */
if (var84 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _reduce_table");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 134);
show_backtrace(1);
}
var85 = ((val* (*)(val*, long))(var84->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var84, var_action_value) /* [] on <var84:Array[ReduceAction]>*/;
((void (*)(val*, val*))(var85->class->vft[COLOR_parser__ReduceAction__action]))(var85, self) /* action on <var85:nullable Object(ReduceAction)>*/;
} else {
var86 = 2;
{ /* Inline kernel#Int#== (var_action_type,var86) */
var89 = var_action_type == var86;
var87 = var89;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
if (var87){
var90 = ((val* (*)(val*))(var_lexer->class->vft[COLOR_lexer__Lexer__next]))(var_lexer) /* next on <var_lexer:Lexer>*/;
var_node2 = var90;
/* <var_node2:Token> isa EOF */
cltype92 = type_parser_nodes__EOF.color;
idtype93 = type_parser_nodes__EOF.id;
if(cltype92 >= var_node2->type->table_size) {
var91 = 0;
} else {
var91 = var_node2->type->type_table[cltype92] == idtype93;
}
if (!var91) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 137);
show_backtrace(1);
}
var94 = ((val* (*)(val*))(self->class->vft[COLOR_parser__Parser__pop]))(self) /* pop on <self:Parser>*/;
var_node1 = var94;
/* <var_node1:nullable Object> isa AModule */
cltype96 = type_parser_nodes__AModule.color;
idtype97 = type_parser_nodes__AModule.id;
if(var_node1 == NULL) {
var95 = 0;
} else {
if(cltype96 >= var_node1->type->table_size) {
var95 = 0;
} else {
var95 = var_node1->type->type_table[cltype96] == idtype97;
}
}
if (!var95) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 139);
show_backtrace(1);
}
var98 = NEW_parser_nodes__Start(&type_parser_nodes__Start);
((void (*)(val*, val*, val*))(var98->class->vft[COLOR_parser_nodes__Start__init]))(var98, var_node1, var_node2) /* init on <var98:Start>*/;
var_node = var98;
var99 = NEW_parser__ComputeProdLocationVisitor(&type_parser__ComputeProdLocationVisitor);
((void (*)(val*))(var99->class->vft[COLOR_parser__ComputeProdLocationVisitor__init]))(var99) /* init on <var99:ComputeProdLocationVisitor>*/;
((void (*)(val*, val*))(var99->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var99, var_node) /* enter_visit on <var99:ComputeProdLocationVisitor>*/;
var = var_node;
goto RET_LABEL;
} else {
var100 = 3;
{ /* Inline kernel#Int#== (var_action_type,var100) */
var103 = var_action_type == var100;
var101 = var103;
goto RET_LABEL102;
RET_LABEL102:(void)0;
}
if (var101){
var104 = NEW_parser_nodes__AParserError(&type_parser_nodes__AParserError);
var105 = NEW_array__Array(&type_array__Arraykernel__Object);
var106 = 3;
((void (*)(val*, long))(var105->class->vft[COLOR_array__Array__with_capacity]))(var105, var106) /* with_capacity on <var105:Array[Object]>*/;
var_ = var105;
if (varonce) {
var107 = varonce;
} else {
var108 = "Syntax error: unexpected ";
var109 = 25;
var110 = string__NativeString__to_s_with_length(var108, var109);
var107 = var110;
varonce = var107;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var107) /* add on <var_:Array[Object]>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var_token) /* add on <var_:Array[Object]>*/;
if (varonce111) {
var112 = varonce111;
} else {
var113 = ".";
var114 = 1;
var115 = string__NativeString__to_s_with_length(var113, var114);
var112 = var115;
varonce111 = var112;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var112) /* add on <var_:Array[Object]>*/;
var116 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var117 = ((val* (*)(val*))(var_token->class->vft[COLOR_parser_nodes__ANode__location]))(var_token) /* location on <var_token:Token>*/;
((void (*)(val*, val*, val*, val*))(var104->class->vft[COLOR_lexer__AParserError__init_parser_error]))(var104, var116, var117, var_token) /* init_parser_error on <var104:AParserError>*/;
var_node2118 = var104;
var119 = NEW_parser_nodes__Start(&type_parser_nodes__Start);
var120 = NULL;
((void (*)(val*, val*, val*))(var119->class->vft[COLOR_parser_nodes__Start__init]))(var119, var120, var_node2118) /* init on <var119:Start>*/;
var_node121 = var119;
var = var_node121;
goto RET_LABEL;
} else {
}
}
}
}
CONTINUE_label122: (void)0;
}
BREAK_label122: (void)0;
RET_LABEL:;
return var;
}
/* method parser#Parser#parse for (self: Object): Start */
val* VIRTUAL_parser__Parser__parse(val* self) {
val* var /* : Start */;
val* var1 /* : Start */;
var1 = parser__Parser__parse(self);
var = var1;
RET_LABEL:;
return var;
}
