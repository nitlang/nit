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
CHECK_NEW_array__Array(var);
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
short int var34 /* : Bool */;
long var35 /* : Int */;
long var36 /* : Int */;
long var38 /* : Int */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
short int var44 /* : Bool */;
long var45 /* : Int */;
long var46 /* : Int */;
long var48 /* : Int */;
long var49 /* : Int */;
long var50 /* : Int */;
long var52 /* : Int */;
long var53 /* : Int */;
long var54 /* : Int */;
long var55 /* : Int */;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 256);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var34 = var_state < var_goal;
var29 = var34;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
if (var29){
var35 = 1;
{ /* Inline kernel#Int#- (var_middle,var35) */
var38 = var_middle - var35;
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
var_high = var36;
} else {
{ /* Inline kernel#Int#> (var_state,var_goal) */
/* Covariant cast for argument 0 (i) <var_goal:Int> isa OTHER */
/* <var_goal:Int> isa OTHER */
var41 = 1; /* easy <var_goal:Int> isa OTHER*/
if (!var41) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 259);
exit(1);
}
var44 = var_state > var_goal;
var39 = var44;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
if (var39){
var45 = 1;
{ /* Inline kernel#Int#+ (var_middle,var45) */
var48 = var_middle + var45;
var46 = var48;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
var_low = var46;
} else {
var49 = 1;
{ /* Inline kernel#Int#+ (var_subindex,var49) */
var52 = var_subindex + var49;
var50 = var52;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
var53 = ((long (*)(val*, long, long))(self->class->vft[COLOR_tables__TablesCapable__parser_goto]))(self, var_index, var50) /* parser_goto on <self:Parser>*/;
var = var53;
goto RET_LABEL;
}
}
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var54 = 2;
var55 = ((long (*)(val*, long, long))(self->class->vft[COLOR_tables__TablesCapable__parser_goto]))(self, var_index, var54) /* parser_goto on <self:Parser>*/;
var = var55;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _stack", "src/parser/parser.nit", 72);
exit(1);
}
var6 = ((long (*)(val*))(var5->class->vft[COLOR_abstract_collection__Collection__length]))(var5) /* length on <var5:Array[State]>*/;
{ /* Inline kernel#Int#< (var_pos,var6) */
/* Covariant cast for argument 0 (i) <var6:Int> isa OTHER */
/* <var6:Int> isa OTHER */
var9 = 1; /* easy <var6:Int> isa OTHER*/
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var10 = var_pos < var6;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
if (var7){
var11 = self->attrs[COLOR_parser__Parser___stack].val; /* _stack on <self:Parser> */
if (var11 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _stack", "src/parser/parser.nit", 73);
exit(1);
}
var12 = ((val* (*)(val*, long))(var11->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var11, var_pos) /* [] on <var11:Array[State]>*/;
var_state = var12;
((void (*)(val*, long))(var_state->class->vft[COLOR_parser__State__state_61d]))(var_state, var_numstate) /* state= on <var_state:State>*/;
((void (*)(val*, val*))(var_state->class->vft[COLOR_parser__State__nodes_61d]))(var_state, var_list_node) /* nodes= on <var_state:State>*/;
} else {
var13 = self->attrs[COLOR_parser__Parser___stack].val; /* _stack on <self:Parser> */
if (var13 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _stack", "src/parser/parser.nit", 77);
exit(1);
}
var14 = NEW_parser__State(&type_parser__State);
((void (*)(val*, long, val*))(var14->class->vft[COLOR_parser__State__init]))(var14, var_numstate, var_list_node) /* init on <var14:State>*/;
CHECK_NEW_parser__State(var14);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _stack", "src/parser/parser.nit", 84);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _stack", "src/parser/parser.nit", 90);
exit(1);
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
short int var48 /* : Bool */;
long var49 /* : Int */;
long var50 /* : Int */;
long var52 /* : Int */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
int cltype56;
int idtype57;
short int var58 /* : Bool */;
long var59 /* : Int */;
long var60 /* : Int */;
long var62 /* : Int */;
long var63 /* : Int */;
long var64 /* : Int */;
long var66 /* : Int */;
long var67 /* : Int */;
long var68 /* : Int */;
long var69 /* : Int */;
long var71 /* : Int */;
long var72 /* : Int */;
long var73 /* : Int */;
short int var74 /* : Bool */;
short int var76 /* : Bool */;
val* var77 /* : Token */;
long var78 /* : Int */;
short int var79 /* : Bool */;
short int var81 /* : Bool */;
val* var82 /* : Array[ReduceAction] */;
val* var83 /* : nullable Object */;
long var84 /* : Int */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
val* var88 /* : Token */;
val* var_node2 /* var node2: Token */;
short int var89 /* : Bool */;
int cltype90;
int idtype91;
val* var92 /* : nullable Object */;
val* var_node1 /* var node1: nullable Object */;
short int var93 /* : Bool */;
int cltype94;
int idtype95;
val* var96 /* : Start */;
val* var_node /* var node: Start */;
val* var97 /* : ComputeProdLocationVisitor */;
long var98 /* : Int */;
short int var99 /* : Bool */;
short int var101 /* : Bool */;
val* var102 /* : AParserError */;
val* var103 /* : Array[Object] */;
long var104 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var105 /* : String */;
char* var106 /* : NativeString */;
long var107 /* : Int */;
val* var108 /* : String */;
static val* varonce109;
val* var110 /* : String */;
char* var111 /* : NativeString */;
long var112 /* : Int */;
val* var113 /* : String */;
val* var114 /* : String */;
val* var115 /* : Location */;
val* var_node2116 /* var node2: AParserError */;
val* var117 /* : Start */;
val* var118 /* : null */;
val* var_node119 /* var node: Start */;
var1 = 0;
var2 = NULL;
((void (*)(val*, long, val*))(self->class->vft[COLOR_parser__Parser__push]))(self, var1, var2) /* push on <self:Parser>*/;
var3 = self->attrs[COLOR_parser__Parser___lexer].val; /* _lexer on <self:Parser> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _lexer", "src/parser/parser.nit", 100);
exit(1);
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
CHECK_NEW_parser_nodes__Start(var6);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 256);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var48 = var_index < var_goal;
var43 = var48;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
if (var43){
var49 = 1;
{ /* Inline kernel#Int#- (var_middle,var49) */
var52 = var_middle - var49;
var50 = var52;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
var_high = var50;
} else {
{ /* Inline kernel#Int#> (var_index,var_goal) */
/* Covariant cast for argument 0 (i) <var_goal:Int> isa OTHER */
/* <var_goal:Int> isa OTHER */
var55 = 1; /* easy <var_goal:Int> isa OTHER*/
if (!var55) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 259);
exit(1);
}
var58 = var_index > var_goal;
var53 = var58;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
if (var53){
var59 = 1;
{ /* Inline kernel#Int#+ (var_middle,var59) */
var62 = var_middle + var59;
var60 = var62;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
var_low = var60;
} else {
var63 = 1;
{ /* Inline kernel#Int#+ (var_subindex,var63) */
var66 = var_subindex + var63;
var64 = var66;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
var67 = ((long (*)(val*, long, long))(self->class->vft[COLOR_tables__TablesCapable__parser_action]))(self, var_state, var64) /* parser_action on <self:Parser>*/;
var_action_type = var67;
var68 = 2;
{ /* Inline kernel#Int#+ (var_subindex,var68) */
var71 = var_subindex + var68;
var69 = var71;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
var72 = ((long (*)(val*, long, long))(self->class->vft[COLOR_tables__TablesCapable__parser_action]))(self, var_state, var69) /* parser_action on <self:Parser>*/;
var_action_value = var72;
goto BREAK_label;
}
}
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var73 = 0;
{ /* Inline kernel#Int#== (var_action_type,var73) */
var76 = var_action_type == var73;
var74 = var76;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
if (var74){
var77 = ((val* (*)(val*))(var_lexer->class->vft[COLOR_lexer__Lexer__next]))(var_lexer) /* next on <var_lexer:Lexer>*/;
((void (*)(val*, long, val*))(self->class->vft[COLOR_parser__Parser__push]))(self, var_action_value, var77) /* push on <self:Parser>*/;
} else {
var78 = 1;
{ /* Inline kernel#Int#== (var_action_type,var78) */
var81 = var_action_type == var78;
var79 = var81;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
if (var79){
var82 = self->attrs[COLOR_parser__Parser___reduce_table].val; /* _reduce_table on <self:Parser> */
if (var82 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _reduce_table", "src/parser/parser.nit", 134);
exit(1);
}
var83 = ((val* (*)(val*, long))(var82->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var82, var_action_value) /* [] on <var82:Array[ReduceAction]>*/;
((void (*)(val*, val*))(var83->class->vft[COLOR_parser__ReduceAction__action]))(var83, self) /* action on <var83:nullable Object(ReduceAction)>*/;
} else {
var84 = 2;
{ /* Inline kernel#Int#== (var_action_type,var84) */
var87 = var_action_type == var84;
var85 = var87;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
if (var85){
var88 = ((val* (*)(val*))(var_lexer->class->vft[COLOR_lexer__Lexer__next]))(var_lexer) /* next on <var_lexer:Lexer>*/;
var_node2 = var88;
/* <var_node2:Token> isa EOF */
cltype90 = type_parser_nodes__EOF.color;
idtype91 = type_parser_nodes__EOF.id;
if(cltype90 >= var_node2->type->table_size) {
var89 = 0;
} else {
var89 = var_node2->type->type_table[cltype90] == idtype91;
}
if (!var89) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 137);
exit(1);
}
var92 = ((val* (*)(val*))(self->class->vft[COLOR_parser__Parser__pop]))(self) /* pop on <self:Parser>*/;
var_node1 = var92;
/* <var_node1:nullable Object> isa AModule */
cltype94 = type_parser_nodes__AModule.color;
idtype95 = type_parser_nodes__AModule.id;
if(var_node1 == NULL) {
var93 = 0;
} else {
if(cltype94 >= var_node1->type->table_size) {
var93 = 0;
} else {
var93 = var_node1->type->type_table[cltype94] == idtype95;
}
}
if (!var93) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 139);
exit(1);
}
var96 = NEW_parser_nodes__Start(&type_parser_nodes__Start);
((void (*)(val*, val*, val*))(var96->class->vft[COLOR_parser_nodes__Start__init]))(var96, var_node1, var_node2) /* init on <var96:Start>*/;
CHECK_NEW_parser_nodes__Start(var96);
var_node = var96;
var97 = NEW_parser__ComputeProdLocationVisitor(&type_parser__ComputeProdLocationVisitor);
((void (*)(val*))(var97->class->vft[COLOR_parser__ComputeProdLocationVisitor__init]))(var97) /* init on <var97:ComputeProdLocationVisitor>*/;
CHECK_NEW_parser__ComputeProdLocationVisitor(var97);
((void (*)(val*, val*))(var97->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var97, var_node) /* enter_visit on <var97:ComputeProdLocationVisitor>*/;
var = var_node;
goto RET_LABEL;
} else {
var98 = 3;
{ /* Inline kernel#Int#== (var_action_type,var98) */
var101 = var_action_type == var98;
var99 = var101;
goto RET_LABEL100;
RET_LABEL100:(void)0;
}
if (var99){
var102 = NEW_parser_nodes__AParserError(&type_parser_nodes__AParserError);
var103 = NEW_array__Array(&type_array__Arraykernel__Object);
var104 = 3;
((void (*)(val*, long))(var103->class->vft[COLOR_array__Array__with_capacity]))(var103, var104) /* with_capacity on <var103:Array[Object]>*/;
CHECK_NEW_array__Array(var103);
var_ = var103;
if (varonce) {
var105 = varonce;
} else {
var106 = "Syntax error: unexpected ";
var107 = 25;
var108 = string__NativeString__to_s_with_length(var106, var107);
var105 = var108;
varonce = var105;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var105) /* add on <var_:Array[Object]>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var_token) /* add on <var_:Array[Object]>*/;
if (varonce109) {
var110 = varonce109;
} else {
var111 = ".";
var112 = 1;
var113 = string__NativeString__to_s_with_length(var111, var112);
var110 = var113;
varonce109 = var110;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var110) /* add on <var_:Array[Object]>*/;
var114 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var115 = ((val* (*)(val*))(var_token->class->vft[COLOR_parser_nodes__ANode__location]))(var_token) /* location on <var_token:Token>*/;
((void (*)(val*, val*, val*, val*))(var102->class->vft[COLOR_lexer__AParserError__init_parser_error]))(var102, var114, var115, var_token) /* init_parser_error on <var102:AParserError>*/;
CHECK_NEW_parser_nodes__AParserError(var102);
var_node2116 = var102;
var117 = NEW_parser_nodes__Start(&type_parser_nodes__Start);
var118 = NULL;
((void (*)(val*, val*, val*))(var117->class->vft[COLOR_parser_nodes__Start__init]))(var117, var118, var_node2116) /* init on <var117:Start>*/;
CHECK_NEW_parser_nodes__Start(var117);
var_node119 = var117;
var = var_node119;
goto RET_LABEL;
} else {
}
}
}
}
CONTINUE_label120: (void)0;
}
BREAK_label120: (void)0;
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
