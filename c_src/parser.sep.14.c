#include "parser.sep.0.h"
/* method parser#ReduceAction652#action for (self: ReduceAction652, Parser) */
void parser__ReduceAction652__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwvarnode2 /* var tkwvarnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_ptypenode4 /* var ptypenode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_tassignnode5 /* var tassignnode5: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_pexprnode6 /* var pexprnode6: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var20 /* : AVardeclExpr */;
val* var21 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable AVardeclExpr */;
long var22 /* : Int */;
long var23 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var6;
var_tkwvarnode2 = var_nodearraylist1;
/* <var_tkwvarnode2:nullable Object> isa nullable TKwvar */
cltype = type_nullable_parser_nodes__TKwvar.color;
idtype = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= var_tkwvarnode2->type->table_size) {
var7 = 0;
} else {
var7 = var_tkwvarnode2->type->type_table[cltype] == idtype;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25024);
show_backtrace(1);
}
var_tidnode3 = var_nodearraylist2;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype9 = type_nullable_parser_nodes__TId.color;
idtype10 = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_tidnode3->type->table_size) {
var8 = 0;
} else {
var8 = var_tidnode3->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25026);
show_backtrace(1);
}
var_ptypenode4 = var_nodearraylist3;
/* <var_ptypenode4:nullable Object> isa nullable AType */
cltype12 = type_nullable_parser_nodes__AType.color;
idtype13 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_ptypenode4->type->table_size) {
var11 = 0;
} else {
var11 = var_ptypenode4->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25028);
show_backtrace(1);
}
var_tassignnode5 = var_nodearraylist4;
/* <var_tassignnode5:nullable Object> isa nullable TAssign */
cltype15 = type_nullable_parser_nodes__TAssign.color;
idtype16 = type_nullable_parser_nodes__TAssign.id;
if(var_tassignnode5 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_tassignnode5->type->table_size) {
var14 = 0;
} else {
var14 = var_tassignnode5->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25030);
show_backtrace(1);
}
var_pexprnode6 = var_nodearraylist6;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype18 = type_nullable_parser_nodes__AExpr.color;
idtype19 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode6 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_pexprnode6->type->table_size) {
var17 = 0;
} else {
var17 = var_pexprnode6->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25032);
show_backtrace(1);
}
var20 = NEW_parser_nodes__AVardeclExpr(&type_parser_nodes__AVardeclExpr);
var21 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*))(var20->class->vft[COLOR_parser_prod__AVardeclExpr__init_avardeclexpr]))(var20, var_tkwvarnode2, var_tidnode3, var_ptypenode4, var_tassignnode5, var_pexprnode6, var21) /* init_avardeclexpr on <var20:AVardeclExpr>*/;
var_pexprnode1 = var20;
var_node_list = var_pexprnode1;
var22 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction652> */
var23 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var22) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var23, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction652#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction652__action(val* self, val* p0) {
parser__ReduceAction652__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction653#action for (self: ReduceAction653, Parser) */
void parser__ReduceAction653__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwvarnode2 /* var tkwvarnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_ptypenode4 /* var ptypenode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_tassignnode5 /* var tassignnode5: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pexprnode6 /* var pexprnode6: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_pannotationsnode7 /* var pannotationsnode7: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var24 /* : AVardeclExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AVardeclExpr */;
long var25 /* : Int */;
long var26 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var7;
var_tkwvarnode2 = var_nodearraylist1;
/* <var_tkwvarnode2:nullable Object> isa nullable TKwvar */
cltype = type_nullable_parser_nodes__TKwvar.color;
idtype = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_tkwvarnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_tkwvarnode2->type->type_table[cltype] == idtype;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25058);
show_backtrace(1);
}
var_tidnode3 = var_nodearraylist2;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype10 = type_nullable_parser_nodes__TId.color;
idtype11 = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_tidnode3->type->table_size) {
var9 = 0;
} else {
var9 = var_tidnode3->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25060);
show_backtrace(1);
}
var_ptypenode4 = var_nodearraylist4;
/* <var_ptypenode4:nullable Object> isa nullable AType */
cltype13 = type_nullable_parser_nodes__AType.color;
idtype14 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_ptypenode4->type->table_size) {
var12 = 0;
} else {
var12 = var_ptypenode4->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25062);
show_backtrace(1);
}
var_tassignnode5 = var_nodearraylist5;
/* <var_tassignnode5:nullable Object> isa nullable TAssign */
cltype16 = type_nullable_parser_nodes__TAssign.color;
idtype17 = type_nullable_parser_nodes__TAssign.id;
if(var_tassignnode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_tassignnode5->type->table_size) {
var15 = 0;
} else {
var15 = var_tassignnode5->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25064);
show_backtrace(1);
}
var_pexprnode6 = var_nodearraylist7;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype19 = type_nullable_parser_nodes__AExpr.color;
idtype20 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode6 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pexprnode6->type->table_size) {
var18 = 0;
} else {
var18 = var_pexprnode6->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25066);
show_backtrace(1);
}
var_pannotationsnode7 = var_nodearraylist3;
/* <var_pannotationsnode7:nullable Object> isa nullable AAnnotations */
cltype22 = type_nullable_parser_nodes__AAnnotations.color;
idtype23 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode7 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_pannotationsnode7->type->table_size) {
var21 = 0;
} else {
var21 = var_pannotationsnode7->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25068);
show_backtrace(1);
}
var24 = NEW_parser_nodes__AVardeclExpr(&type_parser_nodes__AVardeclExpr);
((void (*)(val*, val*, val*, val*, val*, val*, val*))(var24->class->vft[COLOR_parser_prod__AVardeclExpr__init_avardeclexpr]))(var24, var_tkwvarnode2, var_tidnode3, var_ptypenode4, var_tassignnode5, var_pexprnode6, var_pannotationsnode7) /* init_avardeclexpr on <var24:AVardeclExpr>*/;
var_pexprnode1 = var24;
var_node_list = var_pexprnode1;
var25 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction653> */
var26 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var25) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var26, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction653#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction653__action(val* self, val* p0) {
parser__ReduceAction653__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction654#action for (self: ReduceAction654, Parser) */
void parser__ReduceAction654__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_tattridnode3 /* var tattridnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_tassignnode4 /* var tassignnode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : AAttrAssignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAttrAssignExpr */;
long var18 /* : Int */;
long var19 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var6;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var7 = 0;
} else {
var7 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25093);
show_backtrace(1);
}
var_tattridnode3 = var_nodearraylist4;
/* <var_tattridnode3:nullable Object> isa nullable TAttrid */
cltype9 = type_nullable_parser_nodes__TAttrid.color;
idtype10 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_tattridnode3->type->table_size) {
var8 = 0;
} else {
var8 = var_tattridnode3->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25095);
show_backtrace(1);
}
var_tassignnode4 = var_nodearraylist5;
/* <var_tassignnode4:nullable Object> isa nullable TAssign */
cltype12 = type_nullable_parser_nodes__TAssign.color;
idtype13 = type_nullable_parser_nodes__TAssign.id;
if(var_tassignnode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_tassignnode4->type->table_size) {
var11 = 0;
} else {
var11 = var_tassignnode4->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25097);
show_backtrace(1);
}
var_pexprnode5 = var_nodearraylist6;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype15 = type_nullable_parser_nodes__AExpr.color;
idtype16 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode5 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_pexprnode5->type->table_size) {
var14 = 0;
} else {
var14 = var_pexprnode5->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25099);
show_backtrace(1);
}
var17 = NEW_parser_nodes__AAttrAssignExpr(&type_parser_nodes__AAttrAssignExpr);
((void (*)(val*, val*, val*, val*, val*))(var17->class->vft[COLOR_parser_prod__AAttrAssignExpr__init_aattrassignexpr]))(var17, var_pexprnode2, var_tattridnode3, var_tassignnode4, var_pexprnode5) /* init_aattrassignexpr on <var17:AAttrAssignExpr>*/;
var_pexprnode1 = var17;
var_node_list = var_pexprnode1;
var18 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction654> */
var19 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var18) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var19, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction654#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction654__action(val* self, val* p0) {
parser__ReduceAction654__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction655#action for (self: ReduceAction655, Parser) */
void parser__ReduceAction655__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var4 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tattridnode3 /* var tattridnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_tassignnode4 /* var tassignnode4: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : AAttrAssignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAttrAssignExpr */;
long var13 /* : Int */;
long var14 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var3;
var4 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
((void (*)(val*))(var4->class->vft[COLOR_parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr]))(var4) /* init_aimplicitselfexpr on <var4:AImplicitSelfExpr>*/;
var_pexprnode2 = var4;
var_tattridnode3 = var_nodearraylist1;
/* <var_tattridnode3:nullable Object> isa nullable TAttrid */
cltype = type_nullable_parser_nodes__TAttrid.color;
idtype = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode3 == NULL) {
var5 = 1;
} else {
if(cltype >= var_tattridnode3->type->table_size) {
var5 = 0;
} else {
var5 = var_tattridnode3->type->type_table[cltype] == idtype;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25120);
show_backtrace(1);
}
var_tassignnode4 = var_nodearraylist2;
/* <var_tassignnode4:nullable Object> isa nullable TAssign */
cltype7 = type_nullable_parser_nodes__TAssign.color;
idtype8 = type_nullable_parser_nodes__TAssign.id;
if(var_tassignnode4 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_tassignnode4->type->table_size) {
var6 = 0;
} else {
var6 = var_tassignnode4->type->type_table[cltype7] == idtype8;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25122);
show_backtrace(1);
}
var_pexprnode5 = var_nodearraylist3;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype10 = type_nullable_parser_nodes__AExpr.color;
idtype11 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode5 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_pexprnode5->type->table_size) {
var9 = 0;
} else {
var9 = var_pexprnode5->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25124);
show_backtrace(1);
}
var12 = NEW_parser_nodes__AAttrAssignExpr(&type_parser_nodes__AAttrAssignExpr);
((void (*)(val*, val*, val*, val*, val*))(var12->class->vft[COLOR_parser_prod__AAttrAssignExpr__init_aattrassignexpr]))(var12, var_pexprnode2, var_tattridnode3, var_tassignnode4, var_pexprnode5) /* init_aattrassignexpr on <var12:AAttrAssignExpr>*/;
var_pexprnode1 = var12;
var_node_list = var_pexprnode1;
var13 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction655> */
var14 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var13) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var14, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction655#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction655__action(val* self, val* p0) {
parser__ReduceAction655__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction656#action for (self: ReduceAction656, Parser) */
void parser__ReduceAction656__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_tattridnode3 /* var tattridnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_tassignnode4 /* var tassignnode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : AAttrAssignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAttrAssignExpr */;
long var19 /* : Int */;
long var20 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var7;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25148);
show_backtrace(1);
}
var_tattridnode3 = var_nodearraylist5;
/* <var_tattridnode3:nullable Object> isa nullable TAttrid */
cltype10 = type_nullable_parser_nodes__TAttrid.color;
idtype11 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_tattridnode3->type->table_size) {
var9 = 0;
} else {
var9 = var_tattridnode3->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25150);
show_backtrace(1);
}
var_tassignnode4 = var_nodearraylist6;
/* <var_tassignnode4:nullable Object> isa nullable TAssign */
cltype13 = type_nullable_parser_nodes__TAssign.color;
idtype14 = type_nullable_parser_nodes__TAssign.id;
if(var_tassignnode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_tassignnode4->type->table_size) {
var12 = 0;
} else {
var12 = var_tassignnode4->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25152);
show_backtrace(1);
}
var_pexprnode5 = var_nodearraylist7;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype16 = type_nullable_parser_nodes__AExpr.color;
idtype17 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_pexprnode5->type->table_size) {
var15 = 0;
} else {
var15 = var_pexprnode5->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25154);
show_backtrace(1);
}
var18 = NEW_parser_nodes__AAttrAssignExpr(&type_parser_nodes__AAttrAssignExpr);
((void (*)(val*, val*, val*, val*, val*))(var18->class->vft[COLOR_parser_prod__AAttrAssignExpr__init_aattrassignexpr]))(var18, var_pexprnode2, var_tattridnode3, var_tassignnode4, var_pexprnode5) /* init_aattrassignexpr on <var18:AAttrAssignExpr>*/;
var_pexprnode1 = var18;
var_node_list = var_pexprnode1;
var19 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction656> */
var20 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var19) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var20, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction656#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction656__action(val* self, val* p0) {
parser__ReduceAction656__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction657#action for (self: ReduceAction657, Parser) */
void parser__ReduceAction657__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_tattridnode3 /* var tattridnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_tassignnode4 /* var tassignnode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : AAttrAssignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAttrAssignExpr */;
long var20 /* : Int */;
long var21 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var8;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var9 = 0;
} else {
var9 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25179);
show_backtrace(1);
}
var_tattridnode3 = var_nodearraylist6;
/* <var_tattridnode3:nullable Object> isa nullable TAttrid */
cltype11 = type_nullable_parser_nodes__TAttrid.color;
idtype12 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_tattridnode3->type->table_size) {
var10 = 0;
} else {
var10 = var_tattridnode3->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25181);
show_backtrace(1);
}
var_tassignnode4 = var_nodearraylist7;
/* <var_tassignnode4:nullable Object> isa nullable TAssign */
cltype14 = type_nullable_parser_nodes__TAssign.color;
idtype15 = type_nullable_parser_nodes__TAssign.id;
if(var_tassignnode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_tassignnode4->type->table_size) {
var13 = 0;
} else {
var13 = var_tassignnode4->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25183);
show_backtrace(1);
}
var_pexprnode5 = var_nodearraylist8;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype17 = type_nullable_parser_nodes__AExpr.color;
idtype18 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode5 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_pexprnode5->type->table_size) {
var16 = 0;
} else {
var16 = var_pexprnode5->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25185);
show_backtrace(1);
}
var19 = NEW_parser_nodes__AAttrAssignExpr(&type_parser_nodes__AAttrAssignExpr);
((void (*)(val*, val*, val*, val*, val*))(var19->class->vft[COLOR_parser_prod__AAttrAssignExpr__init_aattrassignexpr]))(var19, var_pexprnode2, var_tattridnode3, var_tassignnode4, var_pexprnode5) /* init_aattrassignexpr on <var19:AAttrAssignExpr>*/;
var_pexprnode1 = var19;
var_node_list = var_pexprnode1;
var20 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction657> */
var21 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var20) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var21, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction657#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction657__action(val* self, val* p0) {
parser__ReduceAction657__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction659#action for (self: ReduceAction659, Parser) */
void parser__ReduceAction659__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var5 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tattridnode3 /* var tattridnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_tassignnode4 /* var tassignnode4: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : AAttrAssignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAttrAssignExpr */;
long var14 /* : Int */;
long var15 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var4;
var5 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
((void (*)(val*))(var5->class->vft[COLOR_parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr]))(var5) /* init_aimplicitselfexpr on <var5:AImplicitSelfExpr>*/;
var_pexprnode2 = var5;
var_tattridnode3 = var_nodearraylist2;
/* <var_tattridnode3:nullable Object> isa nullable TAttrid */
cltype = type_nullable_parser_nodes__TAttrid.color;
idtype = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode3 == NULL) {
var6 = 1;
} else {
if(cltype >= var_tattridnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_tattridnode3->type->type_table[cltype] == idtype;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25207);
show_backtrace(1);
}
var_tassignnode4 = var_nodearraylist3;
/* <var_tassignnode4:nullable Object> isa nullable TAssign */
cltype8 = type_nullable_parser_nodes__TAssign.color;
idtype9 = type_nullable_parser_nodes__TAssign.id;
if(var_tassignnode4 == NULL) {
var7 = 1;
} else {
if(cltype8 >= var_tassignnode4->type->table_size) {
var7 = 0;
} else {
var7 = var_tassignnode4->type->type_table[cltype8] == idtype9;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25209);
show_backtrace(1);
}
var_pexprnode5 = var_nodearraylist4;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype11 = type_nullable_parser_nodes__AExpr.color;
idtype12 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode5 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_pexprnode5->type->table_size) {
var10 = 0;
} else {
var10 = var_pexprnode5->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25211);
show_backtrace(1);
}
var13 = NEW_parser_nodes__AAttrAssignExpr(&type_parser_nodes__AAttrAssignExpr);
((void (*)(val*, val*, val*, val*, val*))(var13->class->vft[COLOR_parser_prod__AAttrAssignExpr__init_aattrassignexpr]))(var13, var_pexprnode2, var_tattridnode3, var_tassignnode4, var_pexprnode5) /* init_aattrassignexpr on <var13:AAttrAssignExpr>*/;
var_pexprnode1 = var13;
var_node_list = var_pexprnode1;
var14 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction659> */
var15 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var14) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var15, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction659#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction659__action(val* self, val* p0) {
parser__ReduceAction659__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction660#action for (self: ReduceAction660, Parser) */
void parser__ReduceAction660__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var6 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tattridnode3 /* var tattridnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_tassignnode4 /* var tassignnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : AAttrAssignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAttrAssignExpr */;
long var15 /* : Int */;
long var16 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var5;
var6 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
((void (*)(val*))(var6->class->vft[COLOR_parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr]))(var6) /* init_aimplicitselfexpr on <var6:AImplicitSelfExpr>*/;
var_pexprnode2 = var6;
var_tattridnode3 = var_nodearraylist3;
/* <var_tattridnode3:nullable Object> isa nullable TAttrid */
cltype = type_nullable_parser_nodes__TAttrid.color;
idtype = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode3 == NULL) {
var7 = 1;
} else {
if(cltype >= var_tattridnode3->type->table_size) {
var7 = 0;
} else {
var7 = var_tattridnode3->type->type_table[cltype] == idtype;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25234);
show_backtrace(1);
}
var_tassignnode4 = var_nodearraylist4;
/* <var_tassignnode4:nullable Object> isa nullable TAssign */
cltype9 = type_nullable_parser_nodes__TAssign.color;
idtype10 = type_nullable_parser_nodes__TAssign.id;
if(var_tassignnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_tassignnode4->type->table_size) {
var8 = 0;
} else {
var8 = var_tassignnode4->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25236);
show_backtrace(1);
}
var_pexprnode5 = var_nodearraylist5;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype12 = type_nullable_parser_nodes__AExpr.color;
idtype13 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode5 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_pexprnode5->type->table_size) {
var11 = 0;
} else {
var11 = var_pexprnode5->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25238);
show_backtrace(1);
}
var14 = NEW_parser_nodes__AAttrAssignExpr(&type_parser_nodes__AAttrAssignExpr);
((void (*)(val*, val*, val*, val*, val*))(var14->class->vft[COLOR_parser_prod__AAttrAssignExpr__init_aattrassignexpr]))(var14, var_pexprnode2, var_tattridnode3, var_tassignnode4, var_pexprnode5) /* init_aattrassignexpr on <var14:AAttrAssignExpr>*/;
var_pexprnode1 = var14;
var_node_list = var_pexprnode1;
var15 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction660> */
var16 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var15) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var16, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction660#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction660__action(val* self, val* p0) {
parser__ReduceAction660__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction662#action for (self: ReduceAction662, Parser) */
void parser__ReduceAction662__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_tassignnode5 /* var tassignnode5: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pexprnode6 /* var pexprnode6: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : ACallAssignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallAssignExpr */;
long var22 /* : Int */;
long var23 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var7;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25262);
show_backtrace(1);
}
var_tidnode3 = var_nodearraylist4;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype10 = type_nullable_parser_nodes__TId.color;
idtype11 = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_tidnode3->type->table_size) {
var9 = 0;
} else {
var9 = var_tidnode3->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25264);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist5;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype13 = type_nullable_parser_nodes__AExprs.color;
idtype14 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_pexprsnode4->type->table_size) {
var12 = 0;
} else {
var12 = var_pexprsnode4->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25266);
show_backtrace(1);
}
var_tassignnode5 = var_nodearraylist6;
/* <var_tassignnode5:nullable Object> isa nullable TAssign */
cltype16 = type_nullable_parser_nodes__TAssign.color;
idtype17 = type_nullable_parser_nodes__TAssign.id;
if(var_tassignnode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_tassignnode5->type->table_size) {
var15 = 0;
} else {
var15 = var_tassignnode5->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25268);
show_backtrace(1);
}
var_pexprnode6 = var_nodearraylist7;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype19 = type_nullable_parser_nodes__AExpr.color;
idtype20 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode6 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pexprnode6->type->table_size) {
var18 = 0;
} else {
var18 = var_pexprnode6->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25270);
show_backtrace(1);
}
var21 = NEW_parser_nodes__ACallAssignExpr(&type_parser_nodes__ACallAssignExpr);
((void (*)(val*, val*, val*, val*, val*, val*))(var21->class->vft[COLOR_parser_prod__ACallAssignExpr__init_acallassignexpr]))(var21, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_tassignnode5, var_pexprnode6) /* init_acallassignexpr on <var21:ACallAssignExpr>*/;
var_pexprnode1 = var21;
var_node_list = var_pexprnode1;
var22 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction662> */
var23 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var22) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var23, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction662#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction662__action(val* self, val* p0) {
parser__ReduceAction662__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction663#action for (self: ReduceAction663, Parser) */
void parser__ReduceAction663__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var5 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_tassignnode5 /* var tassignnode5: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_pexprnode6 /* var pexprnode6: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : ACallAssignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallAssignExpr */;
long var17 /* : Int */;
long var18 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var4;
var5 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
((void (*)(val*))(var5->class->vft[COLOR_parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr]))(var5) /* init_aimplicitselfexpr on <var5:AImplicitSelfExpr>*/;
var_pexprnode2 = var5;
var_tidnode3 = var_nodearraylist1;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype = type_nullable_parser_nodes__TId.color;
idtype = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var6 = 1;
} else {
if(cltype >= var_tidnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_tidnode3->type->type_table[cltype] == idtype;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25293);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist2;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype8 = type_nullable_parser_nodes__AExprs.color;
idtype9 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode4 == NULL) {
var7 = 1;
} else {
if(cltype8 >= var_pexprsnode4->type->table_size) {
var7 = 0;
} else {
var7 = var_pexprsnode4->type->type_table[cltype8] == idtype9;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25295);
show_backtrace(1);
}
var_tassignnode5 = var_nodearraylist3;
/* <var_tassignnode5:nullable Object> isa nullable TAssign */
cltype11 = type_nullable_parser_nodes__TAssign.color;
idtype12 = type_nullable_parser_nodes__TAssign.id;
if(var_tassignnode5 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_tassignnode5->type->table_size) {
var10 = 0;
} else {
var10 = var_tassignnode5->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25297);
show_backtrace(1);
}
var_pexprnode6 = var_nodearraylist4;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype14 = type_nullable_parser_nodes__AExpr.color;
idtype15 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode6 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_pexprnode6->type->table_size) {
var13 = 0;
} else {
var13 = var_pexprnode6->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25299);
show_backtrace(1);
}
var16 = NEW_parser_nodes__ACallAssignExpr(&type_parser_nodes__ACallAssignExpr);
((void (*)(val*, val*, val*, val*, val*, val*))(var16->class->vft[COLOR_parser_prod__ACallAssignExpr__init_acallassignexpr]))(var16, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_tassignnode5, var_pexprnode6) /* init_acallassignexpr on <var16:ACallAssignExpr>*/;
var_pexprnode1 = var16;
var_node_list = var_pexprnode1;
var17 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction663> */
var18 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var17) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var18, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction663#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction663__action(val* self, val* p0) {
parser__ReduceAction663__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction664#action for (self: ReduceAction664, Parser) */
void parser__ReduceAction664__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_tassignnode5 /* var tassignnode5: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pexprnode6 /* var pexprnode6: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var22 /* : ACallAssignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallAssignExpr */;
long var23 /* : Int */;
long var24 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var8;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var9 = 0;
} else {
var9 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25325);
show_backtrace(1);
}
var_tidnode3 = var_nodearraylist5;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype11 = type_nullable_parser_nodes__TId.color;
idtype12 = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_tidnode3->type->table_size) {
var10 = 0;
} else {
var10 = var_tidnode3->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25327);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist6;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype14 = type_nullable_parser_nodes__AExprs.color;
idtype15 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_pexprsnode4->type->table_size) {
var13 = 0;
} else {
var13 = var_pexprsnode4->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25329);
show_backtrace(1);
}
var_tassignnode5 = var_nodearraylist7;
/* <var_tassignnode5:nullable Object> isa nullable TAssign */
cltype17 = type_nullable_parser_nodes__TAssign.color;
idtype18 = type_nullable_parser_nodes__TAssign.id;
if(var_tassignnode5 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tassignnode5->type->table_size) {
var16 = 0;
} else {
var16 = var_tassignnode5->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25331);
show_backtrace(1);
}
var_pexprnode6 = var_nodearraylist8;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype20 = type_nullable_parser_nodes__AExpr.color;
idtype21 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode6 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_pexprnode6->type->table_size) {
var19 = 0;
} else {
var19 = var_pexprnode6->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25333);
show_backtrace(1);
}
var22 = NEW_parser_nodes__ACallAssignExpr(&type_parser_nodes__ACallAssignExpr);
((void (*)(val*, val*, val*, val*, val*, val*))(var22->class->vft[COLOR_parser_prod__ACallAssignExpr__init_acallassignexpr]))(var22, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_tassignnode5, var_pexprnode6) /* init_acallassignexpr on <var22:ACallAssignExpr>*/;
var_pexprnode1 = var22;
var_node_list = var_pexprnode1;
var23 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction664> */
var24 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var23) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var24, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction664#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction664__action(val* self, val* p0) {
parser__ReduceAction664__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction665#action for (self: ReduceAction665, Parser) */
void parser__ReduceAction665__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_tassignnode5 /* var tassignnode5: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pexprnode6 /* var pexprnode6: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var23 /* : ACallAssignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallAssignExpr */;
long var24 /* : Int */;
long var25 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist9 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var8;
var9 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var9;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var10 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var10 = 0;
} else {
var10 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25360);
show_backtrace(1);
}
var_tidnode3 = var_nodearraylist6;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype12 = type_nullable_parser_nodes__TId.color;
idtype13 = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_tidnode3->type->table_size) {
var11 = 0;
} else {
var11 = var_tidnode3->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25362);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist7;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype15 = type_nullable_parser_nodes__AExprs.color;
idtype16 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode4 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_pexprsnode4->type->table_size) {
var14 = 0;
} else {
var14 = var_pexprsnode4->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25364);
show_backtrace(1);
}
var_tassignnode5 = var_nodearraylist8;
/* <var_tassignnode5:nullable Object> isa nullable TAssign */
cltype18 = type_nullable_parser_nodes__TAssign.color;
idtype19 = type_nullable_parser_nodes__TAssign.id;
if(var_tassignnode5 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tassignnode5->type->table_size) {
var17 = 0;
} else {
var17 = var_tassignnode5->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25366);
show_backtrace(1);
}
var_pexprnode6 = var_nodearraylist9;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype21 = type_nullable_parser_nodes__AExpr.color;
idtype22 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode6 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_pexprnode6->type->table_size) {
var20 = 0;
} else {
var20 = var_pexprnode6->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25368);
show_backtrace(1);
}
var23 = NEW_parser_nodes__ACallAssignExpr(&type_parser_nodes__ACallAssignExpr);
((void (*)(val*, val*, val*, val*, val*, val*))(var23->class->vft[COLOR_parser_prod__ACallAssignExpr__init_acallassignexpr]))(var23, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_tassignnode5, var_pexprnode6) /* init_acallassignexpr on <var23:ACallAssignExpr>*/;
var_pexprnode1 = var23;
var_node_list = var_pexprnode1;
var24 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction665> */
var25 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var24) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var25, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction665#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction665__action(val* self, val* p0) {
parser__ReduceAction665__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction667#action for (self: ReduceAction667, Parser) */
void parser__ReduceAction667__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var6 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_tassignnode5 /* var tassignnode5: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_pexprnode6 /* var pexprnode6: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : ACallAssignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallAssignExpr */;
long var18 /* : Int */;
long var19 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var5;
var6 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
((void (*)(val*))(var6->class->vft[COLOR_parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr]))(var6) /* init_aimplicitselfexpr on <var6:AImplicitSelfExpr>*/;
var_pexprnode2 = var6;
var_tidnode3 = var_nodearraylist2;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype = type_nullable_parser_nodes__TId.color;
idtype = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var7 = 1;
} else {
if(cltype >= var_tidnode3->type->table_size) {
var7 = 0;
} else {
var7 = var_tidnode3->type->type_table[cltype] == idtype;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25392);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist3;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype9 = type_nullable_parser_nodes__AExprs.color;
idtype10 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_pexprsnode4->type->table_size) {
var8 = 0;
} else {
var8 = var_pexprsnode4->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25394);
show_backtrace(1);
}
var_tassignnode5 = var_nodearraylist4;
/* <var_tassignnode5:nullable Object> isa nullable TAssign */
cltype12 = type_nullable_parser_nodes__TAssign.color;
idtype13 = type_nullable_parser_nodes__TAssign.id;
if(var_tassignnode5 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_tassignnode5->type->table_size) {
var11 = 0;
} else {
var11 = var_tassignnode5->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25396);
show_backtrace(1);
}
var_pexprnode6 = var_nodearraylist5;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype15 = type_nullable_parser_nodes__AExpr.color;
idtype16 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode6 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_pexprnode6->type->table_size) {
var14 = 0;
} else {
var14 = var_pexprnode6->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25398);
show_backtrace(1);
}
var17 = NEW_parser_nodes__ACallAssignExpr(&type_parser_nodes__ACallAssignExpr);
((void (*)(val*, val*, val*, val*, val*, val*))(var17->class->vft[COLOR_parser_prod__ACallAssignExpr__init_acallassignexpr]))(var17, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_tassignnode5, var_pexprnode6) /* init_acallassignexpr on <var17:ACallAssignExpr>*/;
var_pexprnode1 = var17;
var_node_list = var_pexprnode1;
var18 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction667> */
var19 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var18) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var19, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction667#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction667__action(val* self, val* p0) {
parser__ReduceAction667__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction668#action for (self: ReduceAction668, Parser) */
void parser__ReduceAction668__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var7 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_tassignnode5 /* var tassignnode5: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_pexprnode6 /* var pexprnode6: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : ACallAssignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallAssignExpr */;
long var19 /* : Int */;
long var20 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var6;
var7 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
((void (*)(val*))(var7->class->vft[COLOR_parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr]))(var7) /* init_aimplicitselfexpr on <var7:AImplicitSelfExpr>*/;
var_pexprnode2 = var7;
var_tidnode3 = var_nodearraylist3;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype = type_nullable_parser_nodes__TId.color;
idtype = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var8 = 1;
} else {
if(cltype >= var_tidnode3->type->table_size) {
var8 = 0;
} else {
var8 = var_tidnode3->type->type_table[cltype] == idtype;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25423);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist4;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype10 = type_nullable_parser_nodes__AExprs.color;
idtype11 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode4 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_pexprsnode4->type->table_size) {
var9 = 0;
} else {
var9 = var_pexprsnode4->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25425);
show_backtrace(1);
}
var_tassignnode5 = var_nodearraylist5;
/* <var_tassignnode5:nullable Object> isa nullable TAssign */
cltype13 = type_nullable_parser_nodes__TAssign.color;
idtype14 = type_nullable_parser_nodes__TAssign.id;
if(var_tassignnode5 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_tassignnode5->type->table_size) {
var12 = 0;
} else {
var12 = var_tassignnode5->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25427);
show_backtrace(1);
}
var_pexprnode6 = var_nodearraylist6;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype16 = type_nullable_parser_nodes__AExpr.color;
idtype17 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode6 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_pexprnode6->type->table_size) {
var15 = 0;
} else {
var15 = var_pexprnode6->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25429);
show_backtrace(1);
}
var18 = NEW_parser_nodes__ACallAssignExpr(&type_parser_nodes__ACallAssignExpr);
((void (*)(val*, val*, val*, val*, val*, val*))(var18->class->vft[COLOR_parser_prod__ACallAssignExpr__init_acallassignexpr]))(var18, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_tassignnode5, var_pexprnode6) /* init_acallassignexpr on <var18:ACallAssignExpr>*/;
var_pexprnode1 = var18;
var_node_list = var_pexprnode1;
var19 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction668> */
var20 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var19) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var20, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction668#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction668__action(val* self, val* p0) {
parser__ReduceAction668__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction670#action for (self: ReduceAction670, Parser) */
void parser__ReduceAction670__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_pexprsnode3 /* var pexprsnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var_tassignnode4 /* var tassignnode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : ABraAssignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ABraAssignExpr */;
long var16 /* : Int */;
long var17 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var4;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var5 = 0;
} else {
var5 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25451);
show_backtrace(1);
}
var_pexprsnode3 = var_nodearraylist2;
/* <var_pexprsnode3:nullable Object> isa nullable AExprs */
cltype7 = type_nullable_parser_nodes__AExprs.color;
idtype8 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_pexprsnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_pexprsnode3->type->type_table[cltype7] == idtype8;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25453);
show_backtrace(1);
}
var_tassignnode4 = var_nodearraylist3;
/* <var_tassignnode4:nullable Object> isa nullable TAssign */
cltype10 = type_nullable_parser_nodes__TAssign.color;
idtype11 = type_nullable_parser_nodes__TAssign.id;
if(var_tassignnode4 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_tassignnode4->type->table_size) {
var9 = 0;
} else {
var9 = var_tassignnode4->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25455);
show_backtrace(1);
}
var_pexprnode5 = var_nodearraylist4;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype13 = type_nullable_parser_nodes__AExpr.color;
idtype14 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode5 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_pexprnode5->type->table_size) {
var12 = 0;
} else {
var12 = var_pexprnode5->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25457);
show_backtrace(1);
}
var15 = NEW_parser_nodes__ABraAssignExpr(&type_parser_nodes__ABraAssignExpr);
((void (*)(val*, val*, val*, val*, val*))(var15->class->vft[COLOR_parser_prod__ABraAssignExpr__init_abraassignexpr]))(var15, var_pexprnode2, var_pexprsnode3, var_tassignnode4, var_pexprnode5) /* init_abraassignexpr on <var15:ABraAssignExpr>*/;
var_pexprnode1 = var15;
var_node_list = var_pexprnode1;
var16 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction670> */
var17 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var16) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var17, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction670#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction670__action(val* self, val* p0) {
parser__ReduceAction670__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction671#action for (self: ReduceAction671, Parser) */
void parser__ReduceAction671__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_tattridnode3 /* var tattridnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_passignopnode4 /* var passignopnode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : AAttrReassignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAttrReassignExpr */;
long var18 /* : Int */;
long var19 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var6;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var7 = 0;
} else {
var7 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25480);
show_backtrace(1);
}
var_tattridnode3 = var_nodearraylist4;
/* <var_tattridnode3:nullable Object> isa nullable TAttrid */
cltype9 = type_nullable_parser_nodes__TAttrid.color;
idtype10 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_tattridnode3->type->table_size) {
var8 = 0;
} else {
var8 = var_tattridnode3->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25482);
show_backtrace(1);
}
var_passignopnode4 = var_nodearraylist5;
/* <var_passignopnode4:nullable Object> isa nullable AAssignOp */
cltype12 = type_nullable_parser_nodes__AAssignOp.color;
idtype13 = type_nullable_parser_nodes__AAssignOp.id;
if(var_passignopnode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_passignopnode4->type->table_size) {
var11 = 0;
} else {
var11 = var_passignopnode4->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25484);
show_backtrace(1);
}
var_pexprnode5 = var_nodearraylist6;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype15 = type_nullable_parser_nodes__AExpr.color;
idtype16 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode5 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_pexprnode5->type->table_size) {
var14 = 0;
} else {
var14 = var_pexprnode5->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25486);
show_backtrace(1);
}
var17 = NEW_parser_nodes__AAttrReassignExpr(&type_parser_nodes__AAttrReassignExpr);
((void (*)(val*, val*, val*, val*, val*))(var17->class->vft[COLOR_parser_prod__AAttrReassignExpr__init_aattrreassignexpr]))(var17, var_pexprnode2, var_tattridnode3, var_passignopnode4, var_pexprnode5) /* init_aattrreassignexpr on <var17:AAttrReassignExpr>*/;
var_pexprnode1 = var17;
var_node_list = var_pexprnode1;
var18 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction671> */
var19 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var18) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var19, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction671#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction671__action(val* self, val* p0) {
parser__ReduceAction671__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction672#action for (self: ReduceAction672, Parser) */
void parser__ReduceAction672__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var4 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tattridnode3 /* var tattridnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_passignopnode4 /* var passignopnode4: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : AAttrReassignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAttrReassignExpr */;
long var13 /* : Int */;
long var14 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var3;
var4 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
((void (*)(val*))(var4->class->vft[COLOR_parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr]))(var4) /* init_aimplicitselfexpr on <var4:AImplicitSelfExpr>*/;
var_pexprnode2 = var4;
var_tattridnode3 = var_nodearraylist1;
/* <var_tattridnode3:nullable Object> isa nullable TAttrid */
cltype = type_nullable_parser_nodes__TAttrid.color;
idtype = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode3 == NULL) {
var5 = 1;
} else {
if(cltype >= var_tattridnode3->type->table_size) {
var5 = 0;
} else {
var5 = var_tattridnode3->type->type_table[cltype] == idtype;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25507);
show_backtrace(1);
}
var_passignopnode4 = var_nodearraylist2;
/* <var_passignopnode4:nullable Object> isa nullable AAssignOp */
cltype7 = type_nullable_parser_nodes__AAssignOp.color;
idtype8 = type_nullable_parser_nodes__AAssignOp.id;
if(var_passignopnode4 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_passignopnode4->type->table_size) {
var6 = 0;
} else {
var6 = var_passignopnode4->type->type_table[cltype7] == idtype8;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25509);
show_backtrace(1);
}
var_pexprnode5 = var_nodearraylist3;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype10 = type_nullable_parser_nodes__AExpr.color;
idtype11 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode5 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_pexprnode5->type->table_size) {
var9 = 0;
} else {
var9 = var_pexprnode5->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25511);
show_backtrace(1);
}
var12 = NEW_parser_nodes__AAttrReassignExpr(&type_parser_nodes__AAttrReassignExpr);
((void (*)(val*, val*, val*, val*, val*))(var12->class->vft[COLOR_parser_prod__AAttrReassignExpr__init_aattrreassignexpr]))(var12, var_pexprnode2, var_tattridnode3, var_passignopnode4, var_pexprnode5) /* init_aattrreassignexpr on <var12:AAttrReassignExpr>*/;
var_pexprnode1 = var12;
var_node_list = var_pexprnode1;
var13 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction672> */
var14 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var13) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var14, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction672#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction672__action(val* self, val* p0) {
parser__ReduceAction672__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction673#action for (self: ReduceAction673, Parser) */
void parser__ReduceAction673__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_tattridnode3 /* var tattridnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_passignopnode4 /* var passignopnode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : AAttrReassignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAttrReassignExpr */;
long var19 /* : Int */;
long var20 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var7;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25535);
show_backtrace(1);
}
var_tattridnode3 = var_nodearraylist5;
/* <var_tattridnode3:nullable Object> isa nullable TAttrid */
cltype10 = type_nullable_parser_nodes__TAttrid.color;
idtype11 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_tattridnode3->type->table_size) {
var9 = 0;
} else {
var9 = var_tattridnode3->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25537);
show_backtrace(1);
}
var_passignopnode4 = var_nodearraylist6;
/* <var_passignopnode4:nullable Object> isa nullable AAssignOp */
cltype13 = type_nullable_parser_nodes__AAssignOp.color;
idtype14 = type_nullable_parser_nodes__AAssignOp.id;
if(var_passignopnode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_passignopnode4->type->table_size) {
var12 = 0;
} else {
var12 = var_passignopnode4->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25539);
show_backtrace(1);
}
var_pexprnode5 = var_nodearraylist7;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype16 = type_nullable_parser_nodes__AExpr.color;
idtype17 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_pexprnode5->type->table_size) {
var15 = 0;
} else {
var15 = var_pexprnode5->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25541);
show_backtrace(1);
}
var18 = NEW_parser_nodes__AAttrReassignExpr(&type_parser_nodes__AAttrReassignExpr);
((void (*)(val*, val*, val*, val*, val*))(var18->class->vft[COLOR_parser_prod__AAttrReassignExpr__init_aattrreassignexpr]))(var18, var_pexprnode2, var_tattridnode3, var_passignopnode4, var_pexprnode5) /* init_aattrreassignexpr on <var18:AAttrReassignExpr>*/;
var_pexprnode1 = var18;
var_node_list = var_pexprnode1;
var19 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction673> */
var20 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var19) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var20, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction673#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction673__action(val* self, val* p0) {
parser__ReduceAction673__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction674#action for (self: ReduceAction674, Parser) */
void parser__ReduceAction674__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_tattridnode3 /* var tattridnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_passignopnode4 /* var passignopnode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : AAttrReassignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAttrReassignExpr */;
long var20 /* : Int */;
long var21 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var8;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var9 = 0;
} else {
var9 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25566);
show_backtrace(1);
}
var_tattridnode3 = var_nodearraylist6;
/* <var_tattridnode3:nullable Object> isa nullable TAttrid */
cltype11 = type_nullable_parser_nodes__TAttrid.color;
idtype12 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_tattridnode3->type->table_size) {
var10 = 0;
} else {
var10 = var_tattridnode3->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25568);
show_backtrace(1);
}
var_passignopnode4 = var_nodearraylist7;
/* <var_passignopnode4:nullable Object> isa nullable AAssignOp */
cltype14 = type_nullable_parser_nodes__AAssignOp.color;
idtype15 = type_nullable_parser_nodes__AAssignOp.id;
if(var_passignopnode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_passignopnode4->type->table_size) {
var13 = 0;
} else {
var13 = var_passignopnode4->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25570);
show_backtrace(1);
}
var_pexprnode5 = var_nodearraylist8;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype17 = type_nullable_parser_nodes__AExpr.color;
idtype18 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode5 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_pexprnode5->type->table_size) {
var16 = 0;
} else {
var16 = var_pexprnode5->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25572);
show_backtrace(1);
}
var19 = NEW_parser_nodes__AAttrReassignExpr(&type_parser_nodes__AAttrReassignExpr);
((void (*)(val*, val*, val*, val*, val*))(var19->class->vft[COLOR_parser_prod__AAttrReassignExpr__init_aattrreassignexpr]))(var19, var_pexprnode2, var_tattridnode3, var_passignopnode4, var_pexprnode5) /* init_aattrreassignexpr on <var19:AAttrReassignExpr>*/;
var_pexprnode1 = var19;
var_node_list = var_pexprnode1;
var20 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction674> */
var21 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var20) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var21, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction674#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction674__action(val* self, val* p0) {
parser__ReduceAction674__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction676#action for (self: ReduceAction676, Parser) */
void parser__ReduceAction676__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var5 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tattridnode3 /* var tattridnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_passignopnode4 /* var passignopnode4: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : AAttrReassignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAttrReassignExpr */;
long var14 /* : Int */;
long var15 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var4;
var5 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
((void (*)(val*))(var5->class->vft[COLOR_parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr]))(var5) /* init_aimplicitselfexpr on <var5:AImplicitSelfExpr>*/;
var_pexprnode2 = var5;
var_tattridnode3 = var_nodearraylist2;
/* <var_tattridnode3:nullable Object> isa nullable TAttrid */
cltype = type_nullable_parser_nodes__TAttrid.color;
idtype = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode3 == NULL) {
var6 = 1;
} else {
if(cltype >= var_tattridnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_tattridnode3->type->type_table[cltype] == idtype;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25594);
show_backtrace(1);
}
var_passignopnode4 = var_nodearraylist3;
/* <var_passignopnode4:nullable Object> isa nullable AAssignOp */
cltype8 = type_nullable_parser_nodes__AAssignOp.color;
idtype9 = type_nullable_parser_nodes__AAssignOp.id;
if(var_passignopnode4 == NULL) {
var7 = 1;
} else {
if(cltype8 >= var_passignopnode4->type->table_size) {
var7 = 0;
} else {
var7 = var_passignopnode4->type->type_table[cltype8] == idtype9;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25596);
show_backtrace(1);
}
var_pexprnode5 = var_nodearraylist4;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype11 = type_nullable_parser_nodes__AExpr.color;
idtype12 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode5 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_pexprnode5->type->table_size) {
var10 = 0;
} else {
var10 = var_pexprnode5->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25598);
show_backtrace(1);
}
var13 = NEW_parser_nodes__AAttrReassignExpr(&type_parser_nodes__AAttrReassignExpr);
((void (*)(val*, val*, val*, val*, val*))(var13->class->vft[COLOR_parser_prod__AAttrReassignExpr__init_aattrreassignexpr]))(var13, var_pexprnode2, var_tattridnode3, var_passignopnode4, var_pexprnode5) /* init_aattrreassignexpr on <var13:AAttrReassignExpr>*/;
var_pexprnode1 = var13;
var_node_list = var_pexprnode1;
var14 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction676> */
var15 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var14) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var15, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction676#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction676__action(val* self, val* p0) {
parser__ReduceAction676__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction677#action for (self: ReduceAction677, Parser) */
void parser__ReduceAction677__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var6 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tattridnode3 /* var tattridnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_passignopnode4 /* var passignopnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : AAttrReassignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAttrReassignExpr */;
long var15 /* : Int */;
long var16 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var5;
var6 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
((void (*)(val*))(var6->class->vft[COLOR_parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr]))(var6) /* init_aimplicitselfexpr on <var6:AImplicitSelfExpr>*/;
var_pexprnode2 = var6;
var_tattridnode3 = var_nodearraylist3;
/* <var_tattridnode3:nullable Object> isa nullable TAttrid */
cltype = type_nullable_parser_nodes__TAttrid.color;
idtype = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode3 == NULL) {
var7 = 1;
} else {
if(cltype >= var_tattridnode3->type->table_size) {
var7 = 0;
} else {
var7 = var_tattridnode3->type->type_table[cltype] == idtype;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25621);
show_backtrace(1);
}
var_passignopnode4 = var_nodearraylist4;
/* <var_passignopnode4:nullable Object> isa nullable AAssignOp */
cltype9 = type_nullable_parser_nodes__AAssignOp.color;
idtype10 = type_nullable_parser_nodes__AAssignOp.id;
if(var_passignopnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_passignopnode4->type->table_size) {
var8 = 0;
} else {
var8 = var_passignopnode4->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25623);
show_backtrace(1);
}
var_pexprnode5 = var_nodearraylist5;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype12 = type_nullable_parser_nodes__AExpr.color;
idtype13 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode5 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_pexprnode5->type->table_size) {
var11 = 0;
} else {
var11 = var_pexprnode5->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25625);
show_backtrace(1);
}
var14 = NEW_parser_nodes__AAttrReassignExpr(&type_parser_nodes__AAttrReassignExpr);
((void (*)(val*, val*, val*, val*, val*))(var14->class->vft[COLOR_parser_prod__AAttrReassignExpr__init_aattrreassignexpr]))(var14, var_pexprnode2, var_tattridnode3, var_passignopnode4, var_pexprnode5) /* init_aattrreassignexpr on <var14:AAttrReassignExpr>*/;
var_pexprnode1 = var14;
var_node_list = var_pexprnode1;
var15 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction677> */
var16 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var15) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var16, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction677#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction677__action(val* self, val* p0) {
parser__ReduceAction677__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction679#action for (self: ReduceAction679, Parser) */
void parser__ReduceAction679__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_passignopnode5 /* var passignopnode5: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pexprnode6 /* var pexprnode6: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : ACallReassignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallReassignExpr */;
long var22 /* : Int */;
long var23 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var7;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25649);
show_backtrace(1);
}
var_tidnode3 = var_nodearraylist4;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype10 = type_nullable_parser_nodes__TId.color;
idtype11 = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_tidnode3->type->table_size) {
var9 = 0;
} else {
var9 = var_tidnode3->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25651);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist5;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype13 = type_nullable_parser_nodes__AExprs.color;
idtype14 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_pexprsnode4->type->table_size) {
var12 = 0;
} else {
var12 = var_pexprsnode4->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25653);
show_backtrace(1);
}
var_passignopnode5 = var_nodearraylist6;
/* <var_passignopnode5:nullable Object> isa nullable AAssignOp */
cltype16 = type_nullable_parser_nodes__AAssignOp.color;
idtype17 = type_nullable_parser_nodes__AAssignOp.id;
if(var_passignopnode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_passignopnode5->type->table_size) {
var15 = 0;
} else {
var15 = var_passignopnode5->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25655);
show_backtrace(1);
}
var_pexprnode6 = var_nodearraylist7;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype19 = type_nullable_parser_nodes__AExpr.color;
idtype20 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode6 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pexprnode6->type->table_size) {
var18 = 0;
} else {
var18 = var_pexprnode6->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25657);
show_backtrace(1);
}
var21 = NEW_parser_nodes__ACallReassignExpr(&type_parser_nodes__ACallReassignExpr);
((void (*)(val*, val*, val*, val*, val*, val*))(var21->class->vft[COLOR_parser_prod__ACallReassignExpr__init_acallreassignexpr]))(var21, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_passignopnode5, var_pexprnode6) /* init_acallreassignexpr on <var21:ACallReassignExpr>*/;
var_pexprnode1 = var21;
var_node_list = var_pexprnode1;
var22 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction679> */
var23 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var22) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var23, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction679#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction679__action(val* self, val* p0) {
parser__ReduceAction679__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction680#action for (self: ReduceAction680, Parser) */
void parser__ReduceAction680__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var5 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_passignopnode5 /* var passignopnode5: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_pexprnode6 /* var pexprnode6: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : ACallReassignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallReassignExpr */;
long var17 /* : Int */;
long var18 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var4;
var5 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
((void (*)(val*))(var5->class->vft[COLOR_parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr]))(var5) /* init_aimplicitselfexpr on <var5:AImplicitSelfExpr>*/;
var_pexprnode2 = var5;
var_tidnode3 = var_nodearraylist1;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype = type_nullable_parser_nodes__TId.color;
idtype = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var6 = 1;
} else {
if(cltype >= var_tidnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_tidnode3->type->type_table[cltype] == idtype;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25680);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist2;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype8 = type_nullable_parser_nodes__AExprs.color;
idtype9 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode4 == NULL) {
var7 = 1;
} else {
if(cltype8 >= var_pexprsnode4->type->table_size) {
var7 = 0;
} else {
var7 = var_pexprsnode4->type->type_table[cltype8] == idtype9;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25682);
show_backtrace(1);
}
var_passignopnode5 = var_nodearraylist3;
/* <var_passignopnode5:nullable Object> isa nullable AAssignOp */
cltype11 = type_nullable_parser_nodes__AAssignOp.color;
idtype12 = type_nullable_parser_nodes__AAssignOp.id;
if(var_passignopnode5 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_passignopnode5->type->table_size) {
var10 = 0;
} else {
var10 = var_passignopnode5->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25684);
show_backtrace(1);
}
var_pexprnode6 = var_nodearraylist4;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype14 = type_nullable_parser_nodes__AExpr.color;
idtype15 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode6 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_pexprnode6->type->table_size) {
var13 = 0;
} else {
var13 = var_pexprnode6->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25686);
show_backtrace(1);
}
var16 = NEW_parser_nodes__ACallReassignExpr(&type_parser_nodes__ACallReassignExpr);
((void (*)(val*, val*, val*, val*, val*, val*))(var16->class->vft[COLOR_parser_prod__ACallReassignExpr__init_acallreassignexpr]))(var16, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_passignopnode5, var_pexprnode6) /* init_acallreassignexpr on <var16:ACallReassignExpr>*/;
var_pexprnode1 = var16;
var_node_list = var_pexprnode1;
var17 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction680> */
var18 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var17) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var18, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction680#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction680__action(val* self, val* p0) {
parser__ReduceAction680__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction681#action for (self: ReduceAction681, Parser) */
void parser__ReduceAction681__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_passignopnode5 /* var passignopnode5: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pexprnode6 /* var pexprnode6: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var22 /* : ACallReassignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallReassignExpr */;
long var23 /* : Int */;
long var24 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var8;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var9 = 0;
} else {
var9 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25712);
show_backtrace(1);
}
var_tidnode3 = var_nodearraylist5;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype11 = type_nullable_parser_nodes__TId.color;
idtype12 = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_tidnode3->type->table_size) {
var10 = 0;
} else {
var10 = var_tidnode3->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25714);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist6;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype14 = type_nullable_parser_nodes__AExprs.color;
idtype15 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_pexprsnode4->type->table_size) {
var13 = 0;
} else {
var13 = var_pexprsnode4->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25716);
show_backtrace(1);
}
var_passignopnode5 = var_nodearraylist7;
/* <var_passignopnode5:nullable Object> isa nullable AAssignOp */
cltype17 = type_nullable_parser_nodes__AAssignOp.color;
idtype18 = type_nullable_parser_nodes__AAssignOp.id;
if(var_passignopnode5 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_passignopnode5->type->table_size) {
var16 = 0;
} else {
var16 = var_passignopnode5->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25718);
show_backtrace(1);
}
var_pexprnode6 = var_nodearraylist8;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype20 = type_nullable_parser_nodes__AExpr.color;
idtype21 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode6 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_pexprnode6->type->table_size) {
var19 = 0;
} else {
var19 = var_pexprnode6->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25720);
show_backtrace(1);
}
var22 = NEW_parser_nodes__ACallReassignExpr(&type_parser_nodes__ACallReassignExpr);
((void (*)(val*, val*, val*, val*, val*, val*))(var22->class->vft[COLOR_parser_prod__ACallReassignExpr__init_acallreassignexpr]))(var22, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_passignopnode5, var_pexprnode6) /* init_acallreassignexpr on <var22:ACallReassignExpr>*/;
var_pexprnode1 = var22;
var_node_list = var_pexprnode1;
var23 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction681> */
var24 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var23) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var24, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction681#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction681__action(val* self, val* p0) {
parser__ReduceAction681__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction682#action for (self: ReduceAction682, Parser) */
void parser__ReduceAction682__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_passignopnode5 /* var passignopnode5: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pexprnode6 /* var pexprnode6: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var23 /* : ACallReassignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallReassignExpr */;
long var24 /* : Int */;
long var25 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist9 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var8;
var9 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var9;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var10 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var10 = 0;
} else {
var10 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25747);
show_backtrace(1);
}
var_tidnode3 = var_nodearraylist6;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype12 = type_nullable_parser_nodes__TId.color;
idtype13 = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_tidnode3->type->table_size) {
var11 = 0;
} else {
var11 = var_tidnode3->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25749);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist7;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype15 = type_nullable_parser_nodes__AExprs.color;
idtype16 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode4 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_pexprsnode4->type->table_size) {
var14 = 0;
} else {
var14 = var_pexprsnode4->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25751);
show_backtrace(1);
}
var_passignopnode5 = var_nodearraylist8;
/* <var_passignopnode5:nullable Object> isa nullable AAssignOp */
cltype18 = type_nullable_parser_nodes__AAssignOp.color;
idtype19 = type_nullable_parser_nodes__AAssignOp.id;
if(var_passignopnode5 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_passignopnode5->type->table_size) {
var17 = 0;
} else {
var17 = var_passignopnode5->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25753);
show_backtrace(1);
}
var_pexprnode6 = var_nodearraylist9;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype21 = type_nullable_parser_nodes__AExpr.color;
idtype22 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode6 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_pexprnode6->type->table_size) {
var20 = 0;
} else {
var20 = var_pexprnode6->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25755);
show_backtrace(1);
}
var23 = NEW_parser_nodes__ACallReassignExpr(&type_parser_nodes__ACallReassignExpr);
((void (*)(val*, val*, val*, val*, val*, val*))(var23->class->vft[COLOR_parser_prod__ACallReassignExpr__init_acallreassignexpr]))(var23, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_passignopnode5, var_pexprnode6) /* init_acallreassignexpr on <var23:ACallReassignExpr>*/;
var_pexprnode1 = var23;
var_node_list = var_pexprnode1;
var24 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction682> */
var25 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var24) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var25, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction682#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction682__action(val* self, val* p0) {
parser__ReduceAction682__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction684#action for (self: ReduceAction684, Parser) */
void parser__ReduceAction684__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var6 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_passignopnode5 /* var passignopnode5: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_pexprnode6 /* var pexprnode6: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : ACallReassignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallReassignExpr */;
long var18 /* : Int */;
long var19 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var5;
var6 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
((void (*)(val*))(var6->class->vft[COLOR_parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr]))(var6) /* init_aimplicitselfexpr on <var6:AImplicitSelfExpr>*/;
var_pexprnode2 = var6;
var_tidnode3 = var_nodearraylist2;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype = type_nullable_parser_nodes__TId.color;
idtype = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var7 = 1;
} else {
if(cltype >= var_tidnode3->type->table_size) {
var7 = 0;
} else {
var7 = var_tidnode3->type->type_table[cltype] == idtype;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25779);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist3;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype9 = type_nullable_parser_nodes__AExprs.color;
idtype10 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_pexprsnode4->type->table_size) {
var8 = 0;
} else {
var8 = var_pexprsnode4->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25781);
show_backtrace(1);
}
var_passignopnode5 = var_nodearraylist4;
/* <var_passignopnode5:nullable Object> isa nullable AAssignOp */
cltype12 = type_nullable_parser_nodes__AAssignOp.color;
idtype13 = type_nullable_parser_nodes__AAssignOp.id;
if(var_passignopnode5 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_passignopnode5->type->table_size) {
var11 = 0;
} else {
var11 = var_passignopnode5->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25783);
show_backtrace(1);
}
var_pexprnode6 = var_nodearraylist5;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype15 = type_nullable_parser_nodes__AExpr.color;
idtype16 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode6 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_pexprnode6->type->table_size) {
var14 = 0;
} else {
var14 = var_pexprnode6->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25785);
show_backtrace(1);
}
var17 = NEW_parser_nodes__ACallReassignExpr(&type_parser_nodes__ACallReassignExpr);
((void (*)(val*, val*, val*, val*, val*, val*))(var17->class->vft[COLOR_parser_prod__ACallReassignExpr__init_acallreassignexpr]))(var17, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_passignopnode5, var_pexprnode6) /* init_acallreassignexpr on <var17:ACallReassignExpr>*/;
var_pexprnode1 = var17;
var_node_list = var_pexprnode1;
var18 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction684> */
var19 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var18) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var19, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction684#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction684__action(val* self, val* p0) {
parser__ReduceAction684__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction685#action for (self: ReduceAction685, Parser) */
void parser__ReduceAction685__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var7 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_passignopnode5 /* var passignopnode5: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_pexprnode6 /* var pexprnode6: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : ACallReassignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallReassignExpr */;
long var19 /* : Int */;
long var20 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var6;
var7 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
((void (*)(val*))(var7->class->vft[COLOR_parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr]))(var7) /* init_aimplicitselfexpr on <var7:AImplicitSelfExpr>*/;
var_pexprnode2 = var7;
var_tidnode3 = var_nodearraylist3;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype = type_nullable_parser_nodes__TId.color;
idtype = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var8 = 1;
} else {
if(cltype >= var_tidnode3->type->table_size) {
var8 = 0;
} else {
var8 = var_tidnode3->type->type_table[cltype] == idtype;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25810);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist4;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype10 = type_nullable_parser_nodes__AExprs.color;
idtype11 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode4 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_pexprsnode4->type->table_size) {
var9 = 0;
} else {
var9 = var_pexprsnode4->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25812);
show_backtrace(1);
}
var_passignopnode5 = var_nodearraylist5;
/* <var_passignopnode5:nullable Object> isa nullable AAssignOp */
cltype13 = type_nullable_parser_nodes__AAssignOp.color;
idtype14 = type_nullable_parser_nodes__AAssignOp.id;
if(var_passignopnode5 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_passignopnode5->type->table_size) {
var12 = 0;
} else {
var12 = var_passignopnode5->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25814);
show_backtrace(1);
}
var_pexprnode6 = var_nodearraylist6;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype16 = type_nullable_parser_nodes__AExpr.color;
idtype17 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode6 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_pexprnode6->type->table_size) {
var15 = 0;
} else {
var15 = var_pexprnode6->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25816);
show_backtrace(1);
}
var18 = NEW_parser_nodes__ACallReassignExpr(&type_parser_nodes__ACallReassignExpr);
((void (*)(val*, val*, val*, val*, val*, val*))(var18->class->vft[COLOR_parser_prod__ACallReassignExpr__init_acallreassignexpr]))(var18, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_passignopnode5, var_pexprnode6) /* init_acallreassignexpr on <var18:ACallReassignExpr>*/;
var_pexprnode1 = var18;
var_node_list = var_pexprnode1;
var19 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction685> */
var20 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var19) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var20, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction685#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction685__action(val* self, val* p0) {
parser__ReduceAction685__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction687#action for (self: ReduceAction687, Parser) */
void parser__ReduceAction687__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_pexprsnode3 /* var pexprsnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var_passignopnode4 /* var passignopnode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : ABraReassignExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ABraReassignExpr */;
long var16 /* : Int */;
long var17 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var4;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var5 = 0;
} else {
var5 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25838);
show_backtrace(1);
}
var_pexprsnode3 = var_nodearraylist2;
/* <var_pexprsnode3:nullable Object> isa nullable AExprs */
cltype7 = type_nullable_parser_nodes__AExprs.color;
idtype8 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_pexprsnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_pexprsnode3->type->type_table[cltype7] == idtype8;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25840);
show_backtrace(1);
}
var_passignopnode4 = var_nodearraylist3;
/* <var_passignopnode4:nullable Object> isa nullable AAssignOp */
cltype10 = type_nullable_parser_nodes__AAssignOp.color;
idtype11 = type_nullable_parser_nodes__AAssignOp.id;
if(var_passignopnode4 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_passignopnode4->type->table_size) {
var9 = 0;
} else {
var9 = var_passignopnode4->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25842);
show_backtrace(1);
}
var_pexprnode5 = var_nodearraylist4;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype13 = type_nullable_parser_nodes__AExpr.color;
idtype14 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode5 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_pexprnode5->type->table_size) {
var12 = 0;
} else {
var12 = var_pexprnode5->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25844);
show_backtrace(1);
}
var15 = NEW_parser_nodes__ABraReassignExpr(&type_parser_nodes__ABraReassignExpr);
((void (*)(val*, val*, val*, val*, val*))(var15->class->vft[COLOR_parser_prod__ABraReassignExpr__init_abrareassignexpr]))(var15, var_pexprnode2, var_pexprsnode3, var_passignopnode4, var_pexprnode5) /* init_abrareassignexpr on <var15:ABraReassignExpr>*/;
var_pexprnode1 = var15;
var_node_list = var_pexprnode1;
var16 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction687> */
var17 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var16) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var17, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction687#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction687__action(val* self, val* p0) {
parser__ReduceAction687__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction688#action for (self: ReduceAction688, Parser) */
void parser__ReduceAction688__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tpluseqnode2 /* var tpluseqnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : APlusAssignOp */;
val* var_passignopnode1 /* var passignopnode1: nullable APlusAssignOp */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var_tpluseqnode2 = var_nodearraylist1;
/* <var_tpluseqnode2:nullable Object> isa nullable TPluseq */
cltype = type_nullable_parser_nodes__TPluseq.color;
idtype = type_nullable_parser_nodes__TPluseq.id;
if(var_tpluseqnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tpluseqnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tpluseqnode2->type->type_table[cltype] == idtype;
}
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25862);
show_backtrace(1);
}
var3 = NEW_parser_nodes__APlusAssignOp(&type_parser_nodes__APlusAssignOp);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__APlusAssignOp__init_aplusassignop]))(var3, var_tpluseqnode2) /* init_aplusassignop on <var3:APlusAssignOp>*/;
var_passignopnode1 = var3;
var_node_list = var_passignopnode1;
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction688> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction688#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction688__action(val* self, val* p0) {
parser__ReduceAction688__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction689#action for (self: ReduceAction689, Parser) */
void parser__ReduceAction689__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tminuseqnode2 /* var tminuseqnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AMinusAssignOp */;
val* var_passignopnode1 /* var passignopnode1: nullable AMinusAssignOp */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var_tminuseqnode2 = var_nodearraylist1;
/* <var_tminuseqnode2:nullable Object> isa nullable TMinuseq */
cltype = type_nullable_parser_nodes__TMinuseq.color;
idtype = type_nullable_parser_nodes__TMinuseq.id;
if(var_tminuseqnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tminuseqnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tminuseqnode2->type->type_table[cltype] == idtype;
}
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25877);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AMinusAssignOp(&type_parser_nodes__AMinusAssignOp);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__AMinusAssignOp__init_aminusassignop]))(var3, var_tminuseqnode2) /* init_aminusassignop on <var3:AMinusAssignOp>*/;
var_passignopnode1 = var3;
var_node_list = var_passignopnode1;
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction689> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction689#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction689__action(val* self, val* p0) {
parser__ReduceAction689__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction690#action for (self: ReduceAction690, Parser) */
void parser__ReduceAction690__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwdonode2 /* var tkwdonode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_plabelnode4 /* var plabelnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : ADoExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ADoExpr */;
long var12 /* : Int */;
long var13 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var3;
var_tkwdonode2 = var_nodearraylist1;
/* <var_tkwdonode2:nullable Object> isa nullable TKwdo */
cltype = type_nullable_parser_nodes__TKwdo.color;
idtype = type_nullable_parser_nodes__TKwdo.id;
if(var_tkwdonode2 == NULL) {
var4 = 1;
} else {
if(cltype >= var_tkwdonode2->type->table_size) {
var4 = 0;
} else {
var4 = var_tkwdonode2->type->type_table[cltype] == idtype;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25894);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist2;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype6 = type_nullable_parser_nodes__AExpr.color;
idtype7 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= var_pexprnode3->type->table_size) {
var5 = 0;
} else {
var5 = var_pexprnode3->type->type_table[cltype6] == idtype7;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25896);
show_backtrace(1);
}
var_plabelnode4 = var_nodearraylist3;
/* <var_plabelnode4:nullable Object> isa nullable ALabel */
cltype9 = type_nullable_parser_nodes__ALabel.color;
idtype10 = type_nullable_parser_nodes__ALabel.id;
if(var_plabelnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_plabelnode4->type->table_size) {
var8 = 0;
} else {
var8 = var_plabelnode4->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25898);
show_backtrace(1);
}
var11 = NEW_parser_nodes__ADoExpr(&type_parser_nodes__ADoExpr);
((void (*)(val*, val*, val*, val*))(var11->class->vft[COLOR_parser_prod__ADoExpr__init_adoexpr]))(var11, var_tkwdonode2, var_pexprnode3, var_plabelnode4) /* init_adoexpr on <var11:ADoExpr>*/;
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction690> */
var13 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var12) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var13, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction690#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction690__action(val* self, val* p0) {
parser__ReduceAction690__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction691#action for (self: ReduceAction691, Parser) */
void parser__ReduceAction691__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwdonode2 /* var tkwdonode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : ADoExpr */;
val* var8 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable ADoExpr */;
long var9 /* : Int */;
long var10 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var_tkwdonode2 = var_nodearraylist1;
/* <var_tkwdonode2:nullable Object> isa nullable TKwdo */
cltype = type_nullable_parser_nodes__TKwdo.color;
idtype = type_nullable_parser_nodes__TKwdo.id;
if(var_tkwdonode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tkwdonode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tkwdonode2->type->type_table[cltype] == idtype;
}
}
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25916);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist2;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype5 = type_nullable_parser_nodes__AExpr.color;
idtype6 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_pexprnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_pexprnode3->type->type_table[cltype5] == idtype6;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25918);
show_backtrace(1);
}
var7 = NEW_parser_nodes__ADoExpr(&type_parser_nodes__ADoExpr);
var8 = NULL;
((void (*)(val*, val*, val*, val*))(var7->class->vft[COLOR_parser_prod__ADoExpr__init_adoexpr]))(var7, var_tkwdonode2, var_pexprnode3, var8) /* init_adoexpr on <var7:ADoExpr>*/;
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction691> */
var10 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var9) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var10, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction691#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction691__action(val* self, val* p0) {
parser__ReduceAction691__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction692#action for (self: ReduceAction692, Parser) */
void parser__ReduceAction692__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwifnode2 /* var tkwifnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : AIfExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AIfExpr */;
long var20 /* : Int */;
long var21 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var8;
var_tkwifnode2 = var_nodearraylist1;
/* <var_tkwifnode2:nullable Object> isa nullable TKwif */
cltype = type_nullable_parser_nodes__TKwif.color;
idtype = type_nullable_parser_nodes__TKwif.id;
if(var_tkwifnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= var_tkwifnode2->type->table_size) {
var9 = 0;
} else {
var9 = var_tkwifnode2->type->type_table[cltype] == idtype;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25942);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist3;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype11 = type_nullable_parser_nodes__AExpr.color;
idtype12 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_pexprnode3->type->table_size) {
var10 = 0;
} else {
var10 = var_pexprnode3->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25944);
show_backtrace(1);
}
var_pexprnode4 = var_nodearraylist6;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype14 = type_nullable_parser_nodes__AExpr.color;
idtype15 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_pexprnode4->type->table_size) {
var13 = 0;
} else {
var13 = var_pexprnode4->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25946);
show_backtrace(1);
}
var_pexprnode5 = var_nodearraylist8;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype17 = type_nullable_parser_nodes__AExpr.color;
idtype18 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode5 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_pexprnode5->type->table_size) {
var16 = 0;
} else {
var16 = var_pexprnode5->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25948);
show_backtrace(1);
}
var19 = NEW_parser_nodes__AIfExpr(&type_parser_nodes__AIfExpr);
((void (*)(val*, val*, val*, val*, val*))(var19->class->vft[COLOR_parser_prod__AIfExpr__init_aifexpr]))(var19, var_tkwifnode2, var_pexprnode3, var_pexprnode4, var_pexprnode5) /* init_aifexpr on <var19:AIfExpr>*/;
var_pexprnode1 = var19;
var_node_list = var_pexprnode1;
var20 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction692> */
var21 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var20) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var21, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction692#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction692__action(val* self, val* p0) {
parser__ReduceAction692__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction693#action for (self: ReduceAction693, Parser) */
void parser__ReduceAction693__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwifnode2 /* var tkwifnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : AIfExpr */;
val* var15 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable AIfExpr */;
long var16 /* : Int */;
long var17 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var6;
var_tkwifnode2 = var_nodearraylist1;
/* <var_tkwifnode2:nullable Object> isa nullable TKwif */
cltype = type_nullable_parser_nodes__TKwif.color;
idtype = type_nullable_parser_nodes__TKwif.id;
if(var_tkwifnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= var_tkwifnode2->type->table_size) {
var7 = 0;
} else {
var7 = var_tkwifnode2->type->type_table[cltype] == idtype;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25971);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist3;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype9 = type_nullable_parser_nodes__AExpr.color;
idtype10 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_pexprnode3->type->table_size) {
var8 = 0;
} else {
var8 = var_pexprnode3->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25973);
show_backtrace(1);
}
var_pexprnode4 = var_nodearraylist6;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype12 = type_nullable_parser_nodes__AExpr.color;
idtype13 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_pexprnode4->type->table_size) {
var11 = 0;
} else {
var11 = var_pexprnode4->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 25975);
show_backtrace(1);
}
var14 = NEW_parser_nodes__AIfExpr(&type_parser_nodes__AIfExpr);
var15 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var14->class->vft[COLOR_parser_prod__AIfExpr__init_aifexpr]))(var14, var_tkwifnode2, var_pexprnode3, var_pexprnode4, var15) /* init_aifexpr on <var14:AIfExpr>*/;
var_pexprnode1 = var14;
var_node_list = var_pexprnode1;
var16 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction693> */
var17 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var16) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var17, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction693#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction693__action(val* self, val* p0) {
parser__ReduceAction693__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction694#action for (self: ReduceAction694, Parser) */
void parser__ReduceAction694__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwifnode2 /* var tkwifnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : AIfExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AIfExpr */;
long var20 /* : Int */;
long var21 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var8;
var_tkwifnode2 = var_nodearraylist1;
/* <var_tkwifnode2:nullable Object> isa nullable TKwif */
cltype = type_nullable_parser_nodes__TKwif.color;
idtype = type_nullable_parser_nodes__TKwif.id;
if(var_tkwifnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= var_tkwifnode2->type->table_size) {
var9 = 0;
} else {
var9 = var_tkwifnode2->type->type_table[cltype] == idtype;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26000);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist3;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype11 = type_nullable_parser_nodes__AExpr.color;
idtype12 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_pexprnode3->type->table_size) {
var10 = 0;
} else {
var10 = var_pexprnode3->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26002);
show_backtrace(1);
}
var_pexprnode4 = var_nodearraylist7;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype14 = type_nullable_parser_nodes__AExpr.color;
idtype15 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_pexprnode4->type->table_size) {
var13 = 0;
} else {
var13 = var_pexprnode4->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26004);
show_backtrace(1);
}
var_pexprnode5 = var_nodearraylist8;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype17 = type_nullable_parser_nodes__AExpr.color;
idtype18 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode5 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_pexprnode5->type->table_size) {
var16 = 0;
} else {
var16 = var_pexprnode5->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26006);
show_backtrace(1);
}
var19 = NEW_parser_nodes__AIfExpr(&type_parser_nodes__AIfExpr);
((void (*)(val*, val*, val*, val*, val*))(var19->class->vft[COLOR_parser_prod__AIfExpr__init_aifexpr]))(var19, var_tkwifnode2, var_pexprnode3, var_pexprnode4, var_pexprnode5) /* init_aifexpr on <var19:AIfExpr>*/;
var_pexprnode1 = var19;
var_node_list = var_pexprnode1;
var20 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction694> */
var21 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var20) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var21, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction694#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction694__action(val* self, val* p0) {
parser__ReduceAction694__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction695#action for (self: ReduceAction695, Parser) */
void parser__ReduceAction695__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwifnode2 /* var tkwifnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : AIfExpr */;
val* var15 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable AIfExpr */;
long var16 /* : Int */;
long var17 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var6;
var_tkwifnode2 = var_nodearraylist1;
/* <var_tkwifnode2:nullable Object> isa nullable TKwif */
cltype = type_nullable_parser_nodes__TKwif.color;
idtype = type_nullable_parser_nodes__TKwif.id;
if(var_tkwifnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= var_tkwifnode2->type->table_size) {
var7 = 0;
} else {
var7 = var_tkwifnode2->type->type_table[cltype] == idtype;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26029);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist3;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype9 = type_nullable_parser_nodes__AExpr.color;
idtype10 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_pexprnode3->type->table_size) {
var8 = 0;
} else {
var8 = var_pexprnode3->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26031);
show_backtrace(1);
}
var_pexprnode5 = var_nodearraylist6;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype12 = type_nullable_parser_nodes__AExpr.color;
idtype13 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode5 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_pexprnode5->type->table_size) {
var11 = 0;
} else {
var11 = var_pexprnode5->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26033);
show_backtrace(1);
}
var14 = NEW_parser_nodes__AIfExpr(&type_parser_nodes__AIfExpr);
var15 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var14->class->vft[COLOR_parser_prod__AIfExpr__init_aifexpr]))(var14, var_tkwifnode2, var_pexprnode3, var15, var_pexprnode5) /* init_aifexpr on <var14:AIfExpr>*/;
var_pexprnode1 = var14;
var_node_list = var_pexprnode1;
var16 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction695> */
var17 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var16) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var17, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction695#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction695__action(val* self, val* p0) {
parser__ReduceAction695__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction696#action for (self: ReduceAction696, Parser) */
void parser__ReduceAction696__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwifnode2 /* var tkwifnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : AIfExpr */;
val* var16 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable AIfExpr */;
long var17 /* : Int */;
long var18 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var7;
var_tkwifnode2 = var_nodearraylist1;
/* <var_tkwifnode2:nullable Object> isa nullable TKwif */
cltype = type_nullable_parser_nodes__TKwif.color;
idtype = type_nullable_parser_nodes__TKwif.id;
if(var_tkwifnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_tkwifnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_tkwifnode2->type->type_table[cltype] == idtype;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26057);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist3;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype10 = type_nullable_parser_nodes__AExpr.color;
idtype11 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_pexprnode3->type->table_size) {
var9 = 0;
} else {
var9 = var_pexprnode3->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26059);
show_backtrace(1);
}
var_pexprnode5 = var_nodearraylist7;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype13 = type_nullable_parser_nodes__AExpr.color;
idtype14 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode5 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_pexprnode5->type->table_size) {
var12 = 0;
} else {
var12 = var_pexprnode5->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26061);
show_backtrace(1);
}
var15 = NEW_parser_nodes__AIfExpr(&type_parser_nodes__AIfExpr);
var16 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var15->class->vft[COLOR_parser_prod__AIfExpr__init_aifexpr]))(var15, var_tkwifnode2, var_pexprnode3, var16, var_pexprnode5) /* init_aifexpr on <var15:AIfExpr>*/;
var_pexprnode1 = var15;
var_node_list = var_pexprnode1;
var17 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction696> */
var18 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var17) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var18, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction696#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction696__action(val* self, val* p0) {
parser__ReduceAction696__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction699#action for (self: ReduceAction699, Parser) */
void parser__ReduceAction699__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwloopnode2 /* var tkwloopnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_plabelnode4 /* var plabelnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : ALoopExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ALoopExpr */;
long var12 /* : Int */;
long var13 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var3;
var_tkwloopnode2 = var_nodearraylist1;
/* <var_tkwloopnode2:nullable Object> isa nullable TKwloop */
cltype = type_nullable_parser_nodes__TKwloop.color;
idtype = type_nullable_parser_nodes__TKwloop.id;
if(var_tkwloopnode2 == NULL) {
var4 = 1;
} else {
if(cltype >= var_tkwloopnode2->type->table_size) {
var4 = 0;
} else {
var4 = var_tkwloopnode2->type->type_table[cltype] == idtype;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26081);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist2;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype6 = type_nullable_parser_nodes__AExpr.color;
idtype7 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= var_pexprnode3->type->table_size) {
var5 = 0;
} else {
var5 = var_pexprnode3->type->type_table[cltype6] == idtype7;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26083);
show_backtrace(1);
}
var_plabelnode4 = var_nodearraylist3;
/* <var_plabelnode4:nullable Object> isa nullable ALabel */
cltype9 = type_nullable_parser_nodes__ALabel.color;
idtype10 = type_nullable_parser_nodes__ALabel.id;
if(var_plabelnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_plabelnode4->type->table_size) {
var8 = 0;
} else {
var8 = var_plabelnode4->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26085);
show_backtrace(1);
}
var11 = NEW_parser_nodes__ALoopExpr(&type_parser_nodes__ALoopExpr);
((void (*)(val*, val*, val*, val*))(var11->class->vft[COLOR_parser_prod__ALoopExpr__init_aloopexpr]))(var11, var_tkwloopnode2, var_pexprnode3, var_plabelnode4) /* init_aloopexpr on <var11:ALoopExpr>*/;
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction699> */
var13 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var12) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var13, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction699#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction699__action(val* self, val* p0) {
parser__ReduceAction699__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction700#action for (self: ReduceAction700, Parser) */
void parser__ReduceAction700__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwloopnode2 /* var tkwloopnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : ALoopExpr */;
val* var8 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable ALoopExpr */;
long var9 /* : Int */;
long var10 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var_tkwloopnode2 = var_nodearraylist1;
/* <var_tkwloopnode2:nullable Object> isa nullable TKwloop */
cltype = type_nullable_parser_nodes__TKwloop.color;
idtype = type_nullable_parser_nodes__TKwloop.id;
if(var_tkwloopnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tkwloopnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tkwloopnode2->type->type_table[cltype] == idtype;
}
}
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26103);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist2;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype5 = type_nullable_parser_nodes__AExpr.color;
idtype6 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_pexprnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_pexprnode3->type->type_table[cltype5] == idtype6;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26105);
show_backtrace(1);
}
var7 = NEW_parser_nodes__ALoopExpr(&type_parser_nodes__ALoopExpr);
var8 = NULL;
((void (*)(val*, val*, val*, val*))(var7->class->vft[COLOR_parser_prod__ALoopExpr__init_aloopexpr]))(var7, var_tkwloopnode2, var_pexprnode3, var8) /* init_aloopexpr on <var7:ALoopExpr>*/;
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction700> */
var10 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var9) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var10, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction700#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction700__action(val* self, val* p0) {
parser__ReduceAction700__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction701#action for (self: ReduceAction701, Parser) */
void parser__ReduceAction701__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwwhilenode2 /* var tkwwhilenode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_tkwdonode4 /* var tkwdonode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_plabelnode6 /* var plabelnode6: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : AWhileExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AWhileExpr */;
long var22 /* : Int */;
long var23 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var7;
var_tkwwhilenode2 = var_nodearraylist1;
/* <var_tkwwhilenode2:nullable Object> isa nullable TKwwhile */
cltype = type_nullable_parser_nodes__TKwwhile.color;
idtype = type_nullable_parser_nodes__TKwwhile.id;
if(var_tkwwhilenode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_tkwwhilenode2->type->table_size) {
var8 = 0;
} else {
var8 = var_tkwwhilenode2->type->type_table[cltype] == idtype;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26128);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist3;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype10 = type_nullable_parser_nodes__AExpr.color;
idtype11 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_pexprnode3->type->table_size) {
var9 = 0;
} else {
var9 = var_pexprnode3->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26130);
show_backtrace(1);
}
var_tkwdonode4 = var_nodearraylist5;
/* <var_tkwdonode4:nullable Object> isa nullable TKwdo */
cltype13 = type_nullable_parser_nodes__TKwdo.color;
idtype14 = type_nullable_parser_nodes__TKwdo.id;
if(var_tkwdonode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_tkwdonode4->type->table_size) {
var12 = 0;
} else {
var12 = var_tkwdonode4->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26132);
show_backtrace(1);
}
var_pexprnode5 = var_nodearraylist6;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype16 = type_nullable_parser_nodes__AExpr.color;
idtype17 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_pexprnode5->type->table_size) {
var15 = 0;
} else {
var15 = var_pexprnode5->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26134);
show_backtrace(1);
}
var_plabelnode6 = var_nodearraylist7;
/* <var_plabelnode6:nullable Object> isa nullable ALabel */
cltype19 = type_nullable_parser_nodes__ALabel.color;
idtype20 = type_nullable_parser_nodes__ALabel.id;
if(var_plabelnode6 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_plabelnode6->type->table_size) {
var18 = 0;
} else {
var18 = var_plabelnode6->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26136);
show_backtrace(1);
}
var21 = NEW_parser_nodes__AWhileExpr(&type_parser_nodes__AWhileExpr);
((void (*)(val*, val*, val*, val*, val*, val*))(var21->class->vft[COLOR_parser_prod__AWhileExpr__init_awhileexpr]))(var21, var_tkwwhilenode2, var_pexprnode3, var_tkwdonode4, var_pexprnode5, var_plabelnode6) /* init_awhileexpr on <var21:AWhileExpr>*/;
var_pexprnode1 = var21;
var_node_list = var_pexprnode1;
var22 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction701> */
var23 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var22) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var23, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction701#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction701__action(val* self, val* p0) {
parser__ReduceAction701__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction702#action for (self: ReduceAction702, Parser) */
void parser__ReduceAction702__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwwhilenode2 /* var tkwwhilenode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_tkwdonode4 /* var tkwdonode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : AWhileExpr */;
val* var18 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable AWhileExpr */;
long var19 /* : Int */;
long var20 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var6;
var_tkwwhilenode2 = var_nodearraylist1;
/* <var_tkwwhilenode2:nullable Object> isa nullable TKwwhile */
cltype = type_nullable_parser_nodes__TKwwhile.color;
idtype = type_nullable_parser_nodes__TKwwhile.id;
if(var_tkwwhilenode2 == NULL) {
var7 = 1;
} else {
if(cltype >= var_tkwwhilenode2->type->table_size) {
var7 = 0;
} else {
var7 = var_tkwwhilenode2->type->type_table[cltype] == idtype;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26160);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist3;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype9 = type_nullable_parser_nodes__AExpr.color;
idtype10 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_pexprnode3->type->table_size) {
var8 = 0;
} else {
var8 = var_pexprnode3->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26162);
show_backtrace(1);
}
var_tkwdonode4 = var_nodearraylist5;
/* <var_tkwdonode4:nullable Object> isa nullable TKwdo */
cltype12 = type_nullable_parser_nodes__TKwdo.color;
idtype13 = type_nullable_parser_nodes__TKwdo.id;
if(var_tkwdonode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_tkwdonode4->type->table_size) {
var11 = 0;
} else {
var11 = var_tkwdonode4->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26164);
show_backtrace(1);
}
var_pexprnode5 = var_nodearraylist6;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype15 = type_nullable_parser_nodes__AExpr.color;
idtype16 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode5 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_pexprnode5->type->table_size) {
var14 = 0;
} else {
var14 = var_pexprnode5->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26166);
show_backtrace(1);
}
var17 = NEW_parser_nodes__AWhileExpr(&type_parser_nodes__AWhileExpr);
var18 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*))(var17->class->vft[COLOR_parser_prod__AWhileExpr__init_awhileexpr]))(var17, var_tkwwhilenode2, var_pexprnode3, var_tkwdonode4, var_pexprnode5, var18) /* init_awhileexpr on <var17:AWhileExpr>*/;
var_pexprnode1 = var17;
var_node_list = var_pexprnode1;
var19 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction702> */
var20 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var19) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var20, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction702#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction702__action(val* self, val* p0) {
parser__ReduceAction702__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction703#action for (self: ReduceAction703, Parser) */
void parser__ReduceAction703__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist15 /* var nodearraylist15: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist14 /* var nodearraylist14: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist13 /* var nodearraylist13: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist12 /* var nodearraylist12: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist11 /* var nodearraylist11: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var11 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var12 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var13 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var14 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var15 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var16 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var_tkwfornode2 /* var tkwfornode2: nullable Object */;
short int var17 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : Array[Object] */;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_tkwdonode6 /* var tkwdonode6: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_pexprnode7 /* var pexprnode7: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var_plabelnode8 /* var plabelnode8: nullable Object */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var34 /* : AForExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AForExpr */;
long var35 /* : Int */;
long var36 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist15 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist14 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist13 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist12 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist11 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist10 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist9 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var8;
var9 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var9;
var10 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var10;
var11 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var11;
var12 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var12;
var13 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var13;
var14 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var14;
var15 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var15;
var16 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var16->class->vft[COLOR_array__Array__init]))(var16) /* init on <var16:Array[Object]>*/;
var_listnode4 = var16;
var_tkwfornode2 = var_nodearraylist1;
/* <var_tkwfornode2:nullable Object> isa nullable TKwfor */
cltype = type_nullable_parser_nodes__TKwfor.color;
idtype = type_nullable_parser_nodes__TKwfor.id;
if(var_tkwfornode2 == NULL) {
var17 = 1;
} else {
if(cltype >= var_tkwfornode2->type->table_size) {
var17 = 0;
} else {
var17 = var_tkwfornode2->type->type_table[cltype] == idtype;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26200);
show_backtrace(1);
}
var_listnode3 = var_nodearraylist5;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype19 = type_array__Arraykernel__Object.color;
idtype20 = type_array__Arraykernel__Object.id;
if(var_listnode3 == NULL) {
var18 = 0;
} else {
if(cltype19 >= var_listnode3->type->table_size) {
var18 = 0;
} else {
var18 = var_listnode3->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26202);
show_backtrace(1);
}
var21 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction703>*/;
var_listnode4 = var21;
var_pexprnode5 = var_nodearraylist11;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype23 = type_nullable_parser_nodes__AExpr.color;
idtype24 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode5 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_pexprnode5->type->table_size) {
var22 = 0;
} else {
var22 = var_pexprnode5->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26205);
show_backtrace(1);
}
var_tkwdonode6 = var_nodearraylist13;
/* <var_tkwdonode6:nullable Object> isa nullable TKwdo */
cltype26 = type_nullable_parser_nodes__TKwdo.color;
idtype27 = type_nullable_parser_nodes__TKwdo.id;
if(var_tkwdonode6 == NULL) {
var25 = 1;
} else {
if(cltype26 >= var_tkwdonode6->type->table_size) {
var25 = 0;
} else {
var25 = var_tkwdonode6->type->type_table[cltype26] == idtype27;
}
}
if (!var25) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26207);
show_backtrace(1);
}
var_pexprnode7 = var_nodearraylist14;
/* <var_pexprnode7:nullable Object> isa nullable AExpr */
cltype29 = type_nullable_parser_nodes__AExpr.color;
idtype30 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode7 == NULL) {
var28 = 1;
} else {
if(cltype29 >= var_pexprnode7->type->table_size) {
var28 = 0;
} else {
var28 = var_pexprnode7->type->type_table[cltype29] == idtype30;
}
}
if (!var28) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26209);
show_backtrace(1);
}
var_plabelnode8 = var_nodearraylist15;
/* <var_plabelnode8:nullable Object> isa nullable ALabel */
cltype32 = type_nullable_parser_nodes__ALabel.color;
idtype33 = type_nullable_parser_nodes__ALabel.id;
if(var_plabelnode8 == NULL) {
var31 = 1;
} else {
if(cltype32 >= var_plabelnode8->type->table_size) {
var31 = 0;
} else {
var31 = var_plabelnode8->type->type_table[cltype32] == idtype33;
}
}
if (!var31) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26211);
show_backtrace(1);
}
var34 = NEW_parser_nodes__AForExpr(&type_parser_nodes__AForExpr);
((void (*)(val*, val*, val*, val*, val*, val*, val*))(var34->class->vft[COLOR_parser_prod__AForExpr__init_aforexpr]))(var34, var_tkwfornode2, var_listnode4, var_pexprnode5, var_tkwdonode6, var_pexprnode7, var_plabelnode8) /* init_aforexpr on <var34:AForExpr>*/;
var_pexprnode1 = var34;
var_node_list = var_pexprnode1;
var35 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction703> */
var36 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var35) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var36, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction703#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction703__action(val* self, val* p0) {
parser__ReduceAction703__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction704#action for (self: ReduceAction704, Parser) */
void parser__ReduceAction704__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist11 /* var nodearraylist11: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var11 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var12 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var_tkwfornode2 /* var tkwfornode2: nullable Object */;
short int var13 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : Array[Object] */;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_tkwdonode6 /* var tkwdonode6: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_pexprnode7 /* var pexprnode7: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var_plabelnode8 /* var plabelnode8: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var30 /* : AForExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AForExpr */;
long var31 /* : Int */;
long var32 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist11 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist10 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist9 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var8;
var9 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var9;
var10 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var10;
var11 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
var_listnode4 = var12;
var_tkwfornode2 = var_nodearraylist1;
/* <var_tkwfornode2:nullable Object> isa nullable TKwfor */
cltype = type_nullable_parser_nodes__TKwfor.color;
idtype = type_nullable_parser_nodes__TKwfor.id;
if(var_tkwfornode2 == NULL) {
var13 = 1;
} else {
if(cltype >= var_tkwfornode2->type->table_size) {
var13 = 0;
} else {
var13 = var_tkwfornode2->type->type_table[cltype] == idtype;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26242);
show_backtrace(1);
}
var_listnode3 = var_nodearraylist3;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype15 = type_array__Arraykernel__Object.color;
idtype16 = type_array__Arraykernel__Object.id;
if(var_listnode3 == NULL) {
var14 = 0;
} else {
if(cltype15 >= var_listnode3->type->table_size) {
var14 = 0;
} else {
var14 = var_listnode3->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26244);
show_backtrace(1);
}
var17 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction704>*/;
var_listnode4 = var17;
var_pexprnode5 = var_nodearraylist7;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype19 = type_nullable_parser_nodes__AExpr.color;
idtype20 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode5 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pexprnode5->type->table_size) {
var18 = 0;
} else {
var18 = var_pexprnode5->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26247);
show_backtrace(1);
}
var_tkwdonode6 = var_nodearraylist9;
/* <var_tkwdonode6:nullable Object> isa nullable TKwdo */
cltype22 = type_nullable_parser_nodes__TKwdo.color;
idtype23 = type_nullable_parser_nodes__TKwdo.id;
if(var_tkwdonode6 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_tkwdonode6->type->table_size) {
var21 = 0;
} else {
var21 = var_tkwdonode6->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26249);
show_backtrace(1);
}
var_pexprnode7 = var_nodearraylist10;
/* <var_pexprnode7:nullable Object> isa nullable AExpr */
cltype25 = type_nullable_parser_nodes__AExpr.color;
idtype26 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode7 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_pexprnode7->type->table_size) {
var24 = 0;
} else {
var24 = var_pexprnode7->type->type_table[cltype25] == idtype26;
}
}
if (!var24) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26251);
show_backtrace(1);
}
var_plabelnode8 = var_nodearraylist11;
/* <var_plabelnode8:nullable Object> isa nullable ALabel */
cltype28 = type_nullable_parser_nodes__ALabel.color;
idtype29 = type_nullable_parser_nodes__ALabel.id;
if(var_plabelnode8 == NULL) {
var27 = 1;
} else {
if(cltype28 >= var_plabelnode8->type->table_size) {
var27 = 0;
} else {
var27 = var_plabelnode8->type->type_table[cltype28] == idtype29;
}
}
if (!var27) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26253);
show_backtrace(1);
}
var30 = NEW_parser_nodes__AForExpr(&type_parser_nodes__AForExpr);
((void (*)(val*, val*, val*, val*, val*, val*, val*))(var30->class->vft[COLOR_parser_prod__AForExpr__init_aforexpr]))(var30, var_tkwfornode2, var_listnode4, var_pexprnode5, var_tkwdonode6, var_pexprnode7, var_plabelnode8) /* init_aforexpr on <var30:AForExpr>*/;
var_pexprnode1 = var30;
var_node_list = var_pexprnode1;
var31 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction704> */
var32 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var31) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var32, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction704#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction704__action(val* self, val* p0) {
parser__ReduceAction704__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction705#action for (self: ReduceAction705, Parser) */
void parser__ReduceAction705__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist14 /* var nodearraylist14: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist13 /* var nodearraylist13: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist12 /* var nodearraylist12: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist11 /* var nodearraylist11: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var11 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var12 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var13 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var14 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var15 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var_tkwfornode2 /* var tkwfornode2: nullable Object */;
short int var16 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var20 /* : Array[Object] */;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_tkwdonode6 /* var tkwdonode6: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var_pexprnode7 /* var pexprnode7: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var30 /* : AForExpr */;
val* var31 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable AForExpr */;
long var32 /* : Int */;
long var33 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist14 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist13 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist12 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist11 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist10 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist9 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var8;
var9 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var9;
var10 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var10;
var11 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var11;
var12 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var12;
var13 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var13;
var14 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var14;
var15 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var15->class->vft[COLOR_array__Array__init]))(var15) /* init on <var15:Array[Object]>*/;
var_listnode4 = var15;
var_tkwfornode2 = var_nodearraylist1;
/* <var_tkwfornode2:nullable Object> isa nullable TKwfor */
cltype = type_nullable_parser_nodes__TKwfor.color;
idtype = type_nullable_parser_nodes__TKwfor.id;
if(var_tkwfornode2 == NULL) {
var16 = 1;
} else {
if(cltype >= var_tkwfornode2->type->table_size) {
var16 = 0;
} else {
var16 = var_tkwfornode2->type->type_table[cltype] == idtype;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26287);
show_backtrace(1);
}
var_listnode3 = var_nodearraylist5;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype18 = type_array__Arraykernel__Object.color;
idtype19 = type_array__Arraykernel__Object.id;
if(var_listnode3 == NULL) {
var17 = 0;
} else {
if(cltype18 >= var_listnode3->type->table_size) {
var17 = 0;
} else {
var17 = var_listnode3->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26289);
show_backtrace(1);
}
var20 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction705>*/;
var_listnode4 = var20;
var_pexprnode5 = var_nodearraylist11;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype22 = type_nullable_parser_nodes__AExpr.color;
idtype23 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode5 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_pexprnode5->type->table_size) {
var21 = 0;
} else {
var21 = var_pexprnode5->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26292);
show_backtrace(1);
}
var_tkwdonode6 = var_nodearraylist13;
/* <var_tkwdonode6:nullable Object> isa nullable TKwdo */
cltype25 = type_nullable_parser_nodes__TKwdo.color;
idtype26 = type_nullable_parser_nodes__TKwdo.id;
if(var_tkwdonode6 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_tkwdonode6->type->table_size) {
var24 = 0;
} else {
var24 = var_tkwdonode6->type->type_table[cltype25] == idtype26;
}
}
if (!var24) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26294);
show_backtrace(1);
}
var_pexprnode7 = var_nodearraylist14;
/* <var_pexprnode7:nullable Object> isa nullable AExpr */
cltype28 = type_nullable_parser_nodes__AExpr.color;
idtype29 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode7 == NULL) {
var27 = 1;
} else {
if(cltype28 >= var_pexprnode7->type->table_size) {
var27 = 0;
} else {
var27 = var_pexprnode7->type->type_table[cltype28] == idtype29;
}
}
if (!var27) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26296);
show_backtrace(1);
}
var30 = NEW_parser_nodes__AForExpr(&type_parser_nodes__AForExpr);
var31 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*))(var30->class->vft[COLOR_parser_prod__AForExpr__init_aforexpr]))(var30, var_tkwfornode2, var_listnode4, var_pexprnode5, var_tkwdonode6, var_pexprnode7, var31) /* init_aforexpr on <var30:AForExpr>*/;
var_pexprnode1 = var30;
var_node_list = var_pexprnode1;
var32 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction705> */
var33 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var32) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var33, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction705#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction705__action(val* self, val* p0) {
parser__ReduceAction705__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction706#action for (self: ReduceAction706, Parser) */
void parser__ReduceAction706__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var11 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var_tkwfornode2 /* var tkwfornode2: nullable Object */;
short int var12 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : Array[Object] */;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_tkwdonode6 /* var tkwdonode6: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_pexprnode7 /* var pexprnode7: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var26 /* : AForExpr */;
val* var27 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable AForExpr */;
long var28 /* : Int */;
long var29 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist10 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist9 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var8;
var9 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var9;
var10 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var10;
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var11->class->vft[COLOR_array__Array__init]))(var11) /* init on <var11:Array[Object]>*/;
var_listnode4 = var11;
var_tkwfornode2 = var_nodearraylist1;
/* <var_tkwfornode2:nullable Object> isa nullable TKwfor */
cltype = type_nullable_parser_nodes__TKwfor.color;
idtype = type_nullable_parser_nodes__TKwfor.id;
if(var_tkwfornode2 == NULL) {
var12 = 1;
} else {
if(cltype >= var_tkwfornode2->type->table_size) {
var12 = 0;
} else {
var12 = var_tkwfornode2->type->type_table[cltype] == idtype;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26326);
show_backtrace(1);
}
var_listnode3 = var_nodearraylist3;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype14 = type_array__Arraykernel__Object.color;
idtype15 = type_array__Arraykernel__Object.id;
if(var_listnode3 == NULL) {
var13 = 0;
} else {
if(cltype14 >= var_listnode3->type->table_size) {
var13 = 0;
} else {
var13 = var_listnode3->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26328);
show_backtrace(1);
}
var16 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction706>*/;
var_listnode4 = var16;
var_pexprnode5 = var_nodearraylist7;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype18 = type_nullable_parser_nodes__AExpr.color;
idtype19 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode5 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_pexprnode5->type->table_size) {
var17 = 0;
} else {
var17 = var_pexprnode5->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26331);
show_backtrace(1);
}
var_tkwdonode6 = var_nodearraylist9;
/* <var_tkwdonode6:nullable Object> isa nullable TKwdo */
cltype21 = type_nullable_parser_nodes__TKwdo.color;
idtype22 = type_nullable_parser_nodes__TKwdo.id;
if(var_tkwdonode6 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_tkwdonode6->type->table_size) {
var20 = 0;
} else {
var20 = var_tkwdonode6->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26333);
show_backtrace(1);
}
var_pexprnode7 = var_nodearraylist10;
/* <var_pexprnode7:nullable Object> isa nullable AExpr */
cltype24 = type_nullable_parser_nodes__AExpr.color;
idtype25 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode7 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_pexprnode7->type->table_size) {
var23 = 0;
} else {
var23 = var_pexprnode7->type->type_table[cltype24] == idtype25;
}
}
if (!var23) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26335);
show_backtrace(1);
}
var26 = NEW_parser_nodes__AForExpr(&type_parser_nodes__AForExpr);
var27 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*))(var26->class->vft[COLOR_parser_prod__AForExpr__init_aforexpr]))(var26, var_tkwfornode2, var_listnode4, var_pexprnode5, var_tkwdonode6, var_pexprnode7, var27) /* init_aforexpr on <var26:AForExpr>*/;
var_pexprnode1 = var26;
var_node_list = var_pexprnode1;
var28 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction706> */
var29 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var28) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var29, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction706#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction706__action(val* self, val* p0) {
parser__ReduceAction706__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction707#action for (self: ReduceAction707, Parser) */
void parser__ReduceAction707__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwassertnode2 /* var tkwassertnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : AAssertExpr */;
val* var13 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable AAssertExpr */;
long var14 /* : Int */;
long var15 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var4;
var_tkwassertnode2 = var_nodearraylist1;
/* <var_tkwassertnode2:nullable Object> isa nullable TKwassert */
cltype = type_nullable_parser_nodes__TKwassert.color;
idtype = type_nullable_parser_nodes__TKwassert.id;
if(var_tkwassertnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= var_tkwassertnode2->type->table_size) {
var5 = 0;
} else {
var5 = var_tkwassertnode2->type->type_table[cltype] == idtype;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26358);
show_backtrace(1);
}
var_pexprnode4 = var_nodearraylist2;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype7 = type_nullable_parser_nodes__AExpr.color;
idtype8 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode4 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_pexprnode4->type->table_size) {
var6 = 0;
} else {
var6 = var_pexprnode4->type->type_table[cltype7] == idtype8;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26360);
show_backtrace(1);
}
var_pexprnode5 = var_nodearraylist4;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype10 = type_nullable_parser_nodes__AExpr.color;
idtype11 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode5 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_pexprnode5->type->table_size) {
var9 = 0;
} else {
var9 = var_pexprnode5->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26362);
show_backtrace(1);
}
var12 = NEW_parser_nodes__AAssertExpr(&type_parser_nodes__AAssertExpr);
var13 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var12->class->vft[COLOR_parser_prod__AAssertExpr__init_aassertexpr]))(var12, var_tkwassertnode2, var13, var_pexprnode4, var_pexprnode5) /* init_aassertexpr on <var12:AAssertExpr>*/;
var_pexprnode1 = var12;
var_node_list = var_pexprnode1;
var14 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction707> */
var15 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var14) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var15, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction707#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction707__action(val* self, val* p0) {
parser__ReduceAction707__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction708#action for (self: ReduceAction708, Parser) */
void parser__ReduceAction708__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwassertnode2 /* var tkwassertnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : AAssertExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAssertExpr */;
long var17 /* : Int */;
long var18 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var5;
var_tkwassertnode2 = var_nodearraylist1;
/* <var_tkwassertnode2:nullable Object> isa nullable TKwassert */
cltype = type_nullable_parser_nodes__TKwassert.color;
idtype = type_nullable_parser_nodes__TKwassert.id;
if(var_tkwassertnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= var_tkwassertnode2->type->table_size) {
var6 = 0;
} else {
var6 = var_tkwassertnode2->type->type_table[cltype] == idtype;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26384);
show_backtrace(1);
}
var_tidnode3 = var_nodearraylist2;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype8 = type_nullable_parser_nodes__TId.color;
idtype9 = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var7 = 1;
} else {
if(cltype8 >= var_tidnode3->type->table_size) {
var7 = 0;
} else {
var7 = var_tidnode3->type->type_table[cltype8] == idtype9;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26386);
show_backtrace(1);
}
var_pexprnode4 = var_nodearraylist3;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype11 = type_nullable_parser_nodes__AExpr.color;
idtype12 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode4 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_pexprnode4->type->table_size) {
var10 = 0;
} else {
var10 = var_pexprnode4->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26388);
show_backtrace(1);
}
var_pexprnode5 = var_nodearraylist5;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype14 = type_nullable_parser_nodes__AExpr.color;
idtype15 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode5 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_pexprnode5->type->table_size) {
var13 = 0;
} else {
var13 = var_pexprnode5->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26390);
show_backtrace(1);
}
var16 = NEW_parser_nodes__AAssertExpr(&type_parser_nodes__AAssertExpr);
((void (*)(val*, val*, val*, val*, val*))(var16->class->vft[COLOR_parser_prod__AAssertExpr__init_aassertexpr]))(var16, var_tkwassertnode2, var_tidnode3, var_pexprnode4, var_pexprnode5) /* init_aassertexpr on <var16:AAssertExpr>*/;
var_pexprnode1 = var16;
var_node_list = var_pexprnode1;
var17 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction708> */
var18 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var17) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var18, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction708#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction708__action(val* self, val* p0) {
parser__ReduceAction708__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction709#action for (self: ReduceAction709, Parser) */
void parser__ReduceAction709__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwassertnode2 /* var tkwassertnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : AAssertExpr */;
val* var8 /* : null */;
val* var9 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable AAssertExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var_tkwassertnode2 = var_nodearraylist1;
/* <var_tkwassertnode2:nullable Object> isa nullable TKwassert */
cltype = type_nullable_parser_nodes__TKwassert.color;
idtype = type_nullable_parser_nodes__TKwassert.id;
if(var_tkwassertnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tkwassertnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tkwassertnode2->type->type_table[cltype] == idtype;
}
}
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26409);
show_backtrace(1);
}
var_pexprnode4 = var_nodearraylist2;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype5 = type_nullable_parser_nodes__AExpr.color;
idtype6 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode4 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_pexprnode4->type->table_size) {
var4 = 0;
} else {
var4 = var_pexprnode4->type->type_table[cltype5] == idtype6;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26411);
show_backtrace(1);
}
var7 = NEW_parser_nodes__AAssertExpr(&type_parser_nodes__AAssertExpr);
var8 = NULL;
var9 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var7->class->vft[COLOR_parser_prod__AAssertExpr__init_aassertexpr]))(var7, var_tkwassertnode2, var8, var_pexprnode4, var9) /* init_aassertexpr on <var7:AAssertExpr>*/;
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction709> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction709#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction709__action(val* self, val* p0) {
parser__ReduceAction709__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction710#action for (self: ReduceAction710, Parser) */
void parser__ReduceAction710__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwassertnode2 /* var tkwassertnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : AAssertExpr */;
val* var12 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable AAssertExpr */;
long var13 /* : Int */;
long var14 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var3;
var_tkwassertnode2 = var_nodearraylist1;
/* <var_tkwassertnode2:nullable Object> isa nullable TKwassert */
cltype = type_nullable_parser_nodes__TKwassert.color;
idtype = type_nullable_parser_nodes__TKwassert.id;
if(var_tkwassertnode2 == NULL) {
var4 = 1;
} else {
if(cltype >= var_tkwassertnode2->type->table_size) {
var4 = 0;
} else {
var4 = var_tkwassertnode2->type->type_table[cltype] == idtype;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26431);
show_backtrace(1);
}
var_tidnode3 = var_nodearraylist2;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype6 = type_nullable_parser_nodes__TId.color;
idtype7 = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= var_tidnode3->type->table_size) {
var5 = 0;
} else {
var5 = var_tidnode3->type->type_table[cltype6] == idtype7;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26433);
show_backtrace(1);
}
var_pexprnode4 = var_nodearraylist3;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype9 = type_nullable_parser_nodes__AExpr.color;
idtype10 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_pexprnode4->type->table_size) {
var8 = 0;
} else {
var8 = var_pexprnode4->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26435);
show_backtrace(1);
}
var11 = NEW_parser_nodes__AAssertExpr(&type_parser_nodes__AAssertExpr);
var12 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var11->class->vft[COLOR_parser_prod__AAssertExpr__init_aassertexpr]))(var11, var_tkwassertnode2, var_tidnode3, var_pexprnode4, var12) /* init_aassertexpr on <var11:AAssertExpr>*/;
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var13 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction710> */
var14 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var13) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var14, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction710#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction710__action(val* self, val* p0) {
parser__ReduceAction710__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction711#action for (self: ReduceAction711, Parser) */
void parser__ReduceAction711__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tidnode1 /* var tidnode1: nullable Object */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var_tidnode1 = var_nodearraylist1;
var_node_list = var_tidnode1;
var3 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction711> */
var4 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var3) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var4, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction711#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction711__action(val* self, val* p0) {
parser__ReduceAction711__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction714#action for (self: ReduceAction714, Parser) */
void parser__ReduceAction714__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist11 /* var nodearraylist11: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var11 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwifnode2 /* var tkwifnode2: nullable Object */;
short int var12 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_tkwthennode4 /* var tkwthennode4: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pexprnode5 /* var pexprnode5: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_tkwelsenode6 /* var tkwelsenode6: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_pexprnode7 /* var pexprnode7: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : AIfexprExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AIfexprExpr */;
long var29 /* : Int */;
long var30 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist11 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist10 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist9 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var8;
var9 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var9;
var10 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var10;
var11 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var11;
var_tkwifnode2 = var_nodearraylist1;
/* <var_tkwifnode2:nullable Object> isa nullable TKwif */
cltype = type_nullable_parser_nodes__TKwif.color;
idtype = type_nullable_parser_nodes__TKwif.id;
if(var_tkwifnode2 == NULL) {
var12 = 1;
} else {
if(cltype >= var_tkwifnode2->type->table_size) {
var12 = 0;
} else {
var12 = var_tkwifnode2->type->type_table[cltype] == idtype;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26475);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist3;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype14 = type_nullable_parser_nodes__AExpr.color;
idtype15 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode3 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_pexprnode3->type->table_size) {
var13 = 0;
} else {
var13 = var_pexprnode3->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26477);
show_backtrace(1);
}
var_tkwthennode4 = var_nodearraylist5;
/* <var_tkwthennode4:nullable Object> isa nullable TKwthen */
cltype17 = type_nullable_parser_nodes__TKwthen.color;
idtype18 = type_nullable_parser_nodes__TKwthen.id;
if(var_tkwthennode4 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tkwthennode4->type->table_size) {
var16 = 0;
} else {
var16 = var_tkwthennode4->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26479);
show_backtrace(1);
}
var_pexprnode5 = var_nodearraylist7;
/* <var_pexprnode5:nullable Object> isa nullable AExpr */
cltype20 = type_nullable_parser_nodes__AExpr.color;
idtype21 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode5 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_pexprnode5->type->table_size) {
var19 = 0;
} else {
var19 = var_pexprnode5->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26481);
show_backtrace(1);
}
var_tkwelsenode6 = var_nodearraylist9;
/* <var_tkwelsenode6:nullable Object> isa nullable TKwelse */
cltype23 = type_nullable_parser_nodes__TKwelse.color;
idtype24 = type_nullable_parser_nodes__TKwelse.id;
if(var_tkwelsenode6 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_tkwelsenode6->type->table_size) {
var22 = 0;
} else {
var22 = var_tkwelsenode6->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26483);
show_backtrace(1);
}
var_pexprnode7 = var_nodearraylist11;
/* <var_pexprnode7:nullable Object> isa nullable AExpr */
cltype26 = type_nullable_parser_nodes__AExpr.color;
idtype27 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode7 == NULL) {
var25 = 1;
} else {
if(cltype26 >= var_pexprnode7->type->table_size) {
var25 = 0;
} else {
var25 = var_pexprnode7->type->type_table[cltype26] == idtype27;
}
}
if (!var25) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26485);
show_backtrace(1);
}
var28 = NEW_parser_nodes__AIfexprExpr(&type_parser_nodes__AIfexprExpr);
((void (*)(val*, val*, val*, val*, val*, val*, val*))(var28->class->vft[COLOR_parser_prod__AIfexprExpr__init_aifexprexpr]))(var28, var_tkwifnode2, var_pexprnode3, var_tkwthennode4, var_pexprnode5, var_tkwelsenode6, var_pexprnode7) /* init_aifexprexpr on <var28:AIfexprExpr>*/;
var_pexprnode1 = var28;
var_node_list = var_pexprnode1;
var29 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction714> */
var30 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var29) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var30, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction714#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction714__action(val* self, val* p0) {
parser__ReduceAction714__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction716#action for (self: ReduceAction716, Parser) */
void parser__ReduceAction716__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : AOrExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AOrExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var4;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var5 = 0;
} else {
var5 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26508);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist4;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype7 = type_nullable_parser_nodes__AExpr.color;
idtype8 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_pexprnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_pexprnode3->type->type_table[cltype7] == idtype8;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26510);
show_backtrace(1);
}
var9 = NEW_parser_nodes__AOrExpr(&type_parser_nodes__AOrExpr);
((void (*)(val*, val*, val*))(var9->class->vft[COLOR_parser_prod__AOrExpr__init_aorexpr]))(var9, var_pexprnode2, var_pexprnode3) /* init_aorexpr on <var9:AOrExpr>*/;
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction716> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction716#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction716__action(val* self, val* p0) {
parser__ReduceAction716__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction717#action for (self: ReduceAction717, Parser) */
void parser__ReduceAction717__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : AAndExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAndExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var4;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var5 = 0;
} else {
var5 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26529);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist4;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype7 = type_nullable_parser_nodes__AExpr.color;
idtype8 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_pexprnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_pexprnode3->type->type_table[cltype7] == idtype8;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26531);
show_backtrace(1);
}
var9 = NEW_parser_nodes__AAndExpr(&type_parser_nodes__AAndExpr);
((void (*)(val*, val*, val*))(var9->class->vft[COLOR_parser_prod__AAndExpr__init_aandexpr]))(var9, var_pexprnode2, var_pexprnode3) /* init_aandexpr on <var9:AAndExpr>*/;
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction717> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction717#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction717__action(val* self, val* p0) {
parser__ReduceAction717__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction718#action for (self: ReduceAction718, Parser) */
void parser__ReduceAction718__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : AOrElseExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AOrElseExpr */;
long var11 /* : Int */;
long var12 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var5;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var6 = 0;
} else {
var6 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26551);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist5;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype8 = type_nullable_parser_nodes__AExpr.color;
idtype9 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode3 == NULL) {
var7 = 1;
} else {
if(cltype8 >= var_pexprnode3->type->table_size) {
var7 = 0;
} else {
var7 = var_pexprnode3->type->type_table[cltype8] == idtype9;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26553);
show_backtrace(1);
}
var10 = NEW_parser_nodes__AOrElseExpr(&type_parser_nodes__AOrElseExpr);
((void (*)(val*, val*, val*))(var10->class->vft[COLOR_parser_prod__AOrElseExpr__init_aorelseexpr]))(var10, var_pexprnode2, var_pexprnode3) /* init_aorelseexpr on <var10:AOrElseExpr>*/;
var_pexprnode1 = var10;
var_node_list = var_pexprnode1;
var11 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction718> */
var12 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var11) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var12, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction718#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction718__action(val* self, val* p0) {
parser__ReduceAction718__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction719#action for (self: ReduceAction719, Parser) */
void parser__ReduceAction719__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : AImpliesExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AImpliesExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var4;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var5 = 0;
} else {
var5 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26572);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist4;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype7 = type_nullable_parser_nodes__AExpr.color;
idtype8 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_pexprnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_pexprnode3->type->type_table[cltype7] == idtype8;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26574);
show_backtrace(1);
}
var9 = NEW_parser_nodes__AImpliesExpr(&type_parser_nodes__AImpliesExpr);
((void (*)(val*, val*, val*))(var9->class->vft[COLOR_parser_prod__AImpliesExpr__init_aimpliesexpr]))(var9, var_pexprnode2, var_pexprnode3) /* init_aimpliesexpr on <var9:AImpliesExpr>*/;
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction719> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction719#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction719__action(val* self, val* p0) {
parser__ReduceAction719__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction721#action for (self: ReduceAction721, Parser) */
void parser__ReduceAction721__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwnotnode2 /* var tkwnotnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : ANotExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ANotExpr */;
long var9 /* : Int */;
long var10 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var3;
var_tkwnotnode2 = var_nodearraylist1;
/* <var_tkwnotnode2:nullable Object> isa nullable TKwnot */
cltype = type_nullable_parser_nodes__TKwnot.color;
idtype = type_nullable_parser_nodes__TKwnot.id;
if(var_tkwnotnode2 == NULL) {
var4 = 1;
} else {
if(cltype >= var_tkwnotnode2->type->table_size) {
var4 = 0;
} else {
var4 = var_tkwnotnode2->type->type_table[cltype] == idtype;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26592);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist3;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype6 = type_nullable_parser_nodes__AExpr.color;
idtype7 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= var_pexprnode3->type->table_size) {
var5 = 0;
} else {
var5 = var_pexprnode3->type->type_table[cltype6] == idtype7;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26594);
show_backtrace(1);
}
var8 = NEW_parser_nodes__ANotExpr(&type_parser_nodes__ANotExpr);
((void (*)(val*, val*, val*))(var8->class->vft[COLOR_parser_prod__ANotExpr__init_anotexpr]))(var8, var_tkwnotnode2, var_pexprnode3) /* init_anotexpr on <var8:ANotExpr>*/;
var_pexprnode1 = var8;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction721> */
var10 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var9) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var10, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction721#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction721__action(val* self, val* p0) {
parser__ReduceAction721__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction723#action for (self: ReduceAction723, Parser) */
void parser__ReduceAction723__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : AEqExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AEqExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var4;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var5 = 0;
} else {
var5 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26613);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist4;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype7 = type_nullable_parser_nodes__AExpr.color;
idtype8 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_pexprnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_pexprnode3->type->type_table[cltype7] == idtype8;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26615);
show_backtrace(1);
}
var9 = NEW_parser_nodes__AEqExpr(&type_parser_nodes__AEqExpr);
((void (*)(val*, val*, val*))(var9->class->vft[COLOR_parser_prod__AEqExpr__init_aeqexpr]))(var9, var_pexprnode2, var_pexprnode3) /* init_aeqexpr on <var9:AEqExpr>*/;
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction723> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction723#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction723__action(val* self, val* p0) {
parser__ReduceAction723__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction724#action for (self: ReduceAction724, Parser) */
void parser__ReduceAction724__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : ANeExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ANeExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var4;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var5 = 0;
} else {
var5 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26634);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist4;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype7 = type_nullable_parser_nodes__AExpr.color;
idtype8 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_pexprnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_pexprnode3->type->type_table[cltype7] == idtype8;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26636);
show_backtrace(1);
}
var9 = NEW_parser_nodes__ANeExpr(&type_parser_nodes__ANeExpr);
((void (*)(val*, val*, val*))(var9->class->vft[COLOR_parser_prod__ANeExpr__init_aneexpr]))(var9, var_pexprnode2, var_pexprnode3) /* init_aneexpr on <var9:ANeExpr>*/;
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction724> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction724#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction724__action(val* self, val* p0) {
parser__ReduceAction724__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction725#action for (self: ReduceAction725, Parser) */
void parser__ReduceAction725__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : ALtExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ALtExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var4;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var5 = 0;
} else {
var5 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26655);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist4;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype7 = type_nullable_parser_nodes__AExpr.color;
idtype8 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_pexprnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_pexprnode3->type->type_table[cltype7] == idtype8;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26657);
show_backtrace(1);
}
var9 = NEW_parser_nodes__ALtExpr(&type_parser_nodes__ALtExpr);
((void (*)(val*, val*, val*))(var9->class->vft[COLOR_parser_prod__ALtExpr__init_altexpr]))(var9, var_pexprnode2, var_pexprnode3) /* init_altexpr on <var9:ALtExpr>*/;
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction725> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction725#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction725__action(val* self, val* p0) {
parser__ReduceAction725__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction726#action for (self: ReduceAction726, Parser) */
void parser__ReduceAction726__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : ALeExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ALeExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var4;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var5 = 0;
} else {
var5 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26676);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist4;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype7 = type_nullable_parser_nodes__AExpr.color;
idtype8 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_pexprnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_pexprnode3->type->type_table[cltype7] == idtype8;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26678);
show_backtrace(1);
}
var9 = NEW_parser_nodes__ALeExpr(&type_parser_nodes__ALeExpr);
((void (*)(val*, val*, val*))(var9->class->vft[COLOR_parser_prod__ALeExpr__init_aleexpr]))(var9, var_pexprnode2, var_pexprnode3) /* init_aleexpr on <var9:ALeExpr>*/;
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction726> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction726#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction726__action(val* self, val* p0) {
parser__ReduceAction726__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction727#action for (self: ReduceAction727, Parser) */
void parser__ReduceAction727__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : ALlExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ALlExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var4;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var5 = 0;
} else {
var5 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26697);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist4;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype7 = type_nullable_parser_nodes__AExpr.color;
idtype8 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_pexprnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_pexprnode3->type->type_table[cltype7] == idtype8;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26699);
show_backtrace(1);
}
var9 = NEW_parser_nodes__ALlExpr(&type_parser_nodes__ALlExpr);
((void (*)(val*, val*, val*))(var9->class->vft[COLOR_parser_prod__ALlExpr__init_allexpr]))(var9, var_pexprnode2, var_pexprnode3) /* init_allexpr on <var9:ALlExpr>*/;
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction727> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction727#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction727__action(val* self, val* p0) {
parser__ReduceAction727__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction728#action for (self: ReduceAction728, Parser) */
void parser__ReduceAction728__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : AGtExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AGtExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var4;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var5 = 0;
} else {
var5 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26718);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist4;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype7 = type_nullable_parser_nodes__AExpr.color;
idtype8 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_pexprnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_pexprnode3->type->type_table[cltype7] == idtype8;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26720);
show_backtrace(1);
}
var9 = NEW_parser_nodes__AGtExpr(&type_parser_nodes__AGtExpr);
((void (*)(val*, val*, val*))(var9->class->vft[COLOR_parser_prod__AGtExpr__init_agtexpr]))(var9, var_pexprnode2, var_pexprnode3) /* init_agtexpr on <var9:AGtExpr>*/;
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction728> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction728#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction728__action(val* self, val* p0) {
parser__ReduceAction728__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction729#action for (self: ReduceAction729, Parser) */
void parser__ReduceAction729__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : AGeExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AGeExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var4;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var5 = 0;
} else {
var5 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26739);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist4;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype7 = type_nullable_parser_nodes__AExpr.color;
idtype8 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_pexprnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_pexprnode3->type->type_table[cltype7] == idtype8;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26741);
show_backtrace(1);
}
var9 = NEW_parser_nodes__AGeExpr(&type_parser_nodes__AGeExpr);
((void (*)(val*, val*, val*))(var9->class->vft[COLOR_parser_prod__AGeExpr__init_ageexpr]))(var9, var_pexprnode2, var_pexprnode3) /* init_ageexpr on <var9:AGeExpr>*/;
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction729> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction729#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction729__action(val* self, val* p0) {
parser__ReduceAction729__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction730#action for (self: ReduceAction730, Parser) */
void parser__ReduceAction730__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : AGgExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AGgExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var4;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var5 = 0;
} else {
var5 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26760);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist4;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype7 = type_nullable_parser_nodes__AExpr.color;
idtype8 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_pexprnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_pexprnode3->type->type_table[cltype7] == idtype8;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26762);
show_backtrace(1);
}
var9 = NEW_parser_nodes__AGgExpr(&type_parser_nodes__AGgExpr);
((void (*)(val*, val*, val*))(var9->class->vft[COLOR_parser_prod__AGgExpr__init_aggexpr]))(var9, var_pexprnode2, var_pexprnode3) /* init_aggexpr on <var9:AGgExpr>*/;
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction730> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction730#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction730__action(val* self, val* p0) {
parser__ReduceAction730__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction731#action for (self: ReduceAction731, Parser) */
void parser__ReduceAction731__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : AStarshipExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AStarshipExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var4;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var5 = 0;
} else {
var5 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26781);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist4;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype7 = type_nullable_parser_nodes__AExpr.color;
idtype8 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_pexprnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_pexprnode3->type->type_table[cltype7] == idtype8;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26783);
show_backtrace(1);
}
var9 = NEW_parser_nodes__AStarshipExpr(&type_parser_nodes__AStarshipExpr);
((void (*)(val*, val*, val*))(var9->class->vft[COLOR_parser_prod__AStarshipExpr__init_astarshipexpr]))(var9, var_pexprnode2, var_pexprnode3) /* init_astarshipexpr on <var9:AStarshipExpr>*/;
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction731> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction731#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction731__action(val* self, val* p0) {
parser__ReduceAction731__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction732#action for (self: ReduceAction732, Parser) */
void parser__ReduceAction732__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_ptypenode3 /* var ptypenode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : AIsaExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AIsaExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var4;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var5 = 0;
} else {
var5 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26802);
show_backtrace(1);
}
var_ptypenode3 = var_nodearraylist4;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype7 = type_nullable_parser_nodes__AType.color;
idtype8 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_ptypenode3->type->table_size) {
var6 = 0;
} else {
var6 = var_ptypenode3->type->type_table[cltype7] == idtype8;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26804);
show_backtrace(1);
}
var9 = NEW_parser_nodes__AIsaExpr(&type_parser_nodes__AIsaExpr);
((void (*)(val*, val*, val*))(var9->class->vft[COLOR_parser_prod__AIsaExpr__init_aisaexpr]))(var9, var_pexprnode2, var_ptypenode3) /* init_aisaexpr on <var9:AIsaExpr>*/;
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction732> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction732#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction732__action(val* self, val* p0) {
parser__ReduceAction732__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction734#action for (self: ReduceAction734, Parser) */
void parser__ReduceAction734__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : APlusExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable APlusExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var4;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var5 = 0;
} else {
var5 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26823);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist4;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype7 = type_nullable_parser_nodes__AExpr.color;
idtype8 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_pexprnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_pexprnode3->type->type_table[cltype7] == idtype8;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26825);
show_backtrace(1);
}
var9 = NEW_parser_nodes__APlusExpr(&type_parser_nodes__APlusExpr);
((void (*)(val*, val*, val*))(var9->class->vft[COLOR_parser_prod__APlusExpr__init_aplusexpr]))(var9, var_pexprnode2, var_pexprnode3) /* init_aplusexpr on <var9:APlusExpr>*/;
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction734> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction734#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction734__action(val* self, val* p0) {
parser__ReduceAction734__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction735#action for (self: ReduceAction735, Parser) */
void parser__ReduceAction735__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : AMinusExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AMinusExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var4;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var5 = 0;
} else {
var5 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26844);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist4;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype7 = type_nullable_parser_nodes__AExpr.color;
idtype8 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_pexprnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_pexprnode3->type->type_table[cltype7] == idtype8;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26846);
show_backtrace(1);
}
var9 = NEW_parser_nodes__AMinusExpr(&type_parser_nodes__AMinusExpr);
((void (*)(val*, val*, val*))(var9->class->vft[COLOR_parser_prod__AMinusExpr__init_aminusexpr]))(var9, var_pexprnode2, var_pexprnode3) /* init_aminusexpr on <var9:AMinusExpr>*/;
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction735> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction735#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction735__action(val* self, val* p0) {
parser__ReduceAction735__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction737#action for (self: ReduceAction737, Parser) */
void parser__ReduceAction737__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : AStarExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AStarExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var4;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var5 = 0;
} else {
var5 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26865);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist4;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype7 = type_nullable_parser_nodes__AExpr.color;
idtype8 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_pexprnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_pexprnode3->type->type_table[cltype7] == idtype8;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26867);
show_backtrace(1);
}
var9 = NEW_parser_nodes__AStarExpr(&type_parser_nodes__AStarExpr);
((void (*)(val*, val*, val*))(var9->class->vft[COLOR_parser_prod__AStarExpr__init_astarexpr]))(var9, var_pexprnode2, var_pexprnode3) /* init_astarexpr on <var9:AStarExpr>*/;
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction737> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction737#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction737__action(val* self, val* p0) {
parser__ReduceAction737__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction738#action for (self: ReduceAction738, Parser) */
void parser__ReduceAction738__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : ASlashExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ASlashExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var4;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var5 = 0;
} else {
var5 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26886);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist4;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype7 = type_nullable_parser_nodes__AExpr.color;
idtype8 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_pexprnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_pexprnode3->type->type_table[cltype7] == idtype8;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26888);
show_backtrace(1);
}
var9 = NEW_parser_nodes__ASlashExpr(&type_parser_nodes__ASlashExpr);
((void (*)(val*, val*, val*))(var9->class->vft[COLOR_parser_prod__ASlashExpr__init_aslashexpr]))(var9, var_pexprnode2, var_pexprnode3) /* init_aslashexpr on <var9:ASlashExpr>*/;
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction738> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction738#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction738__action(val* self, val* p0) {
parser__ReduceAction738__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction739#action for (self: ReduceAction739, Parser) */
void parser__ReduceAction739__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : APercentExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable APercentExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var4;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var5 = 0;
} else {
var5 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26907);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist4;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype7 = type_nullable_parser_nodes__AExpr.color;
idtype8 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_pexprnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_pexprnode3->type->type_table[cltype7] == idtype8;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26909);
show_backtrace(1);
}
var9 = NEW_parser_nodes__APercentExpr(&type_parser_nodes__APercentExpr);
((void (*)(val*, val*, val*))(var9->class->vft[COLOR_parser_prod__APercentExpr__init_apercentexpr]))(var9, var_pexprnode2, var_pexprnode3) /* init_apercentexpr on <var9:APercentExpr>*/;
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction739> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction739#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction739__action(val* self, val* p0) {
parser__ReduceAction739__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction741#action for (self: ReduceAction741, Parser) */
void parser__ReduceAction741__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tminusnode2 /* var tminusnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : AUminusExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AUminusExpr */;
long var9 /* : Int */;
long var10 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var3;
var_tminusnode2 = var_nodearraylist1;
/* <var_tminusnode2:nullable Object> isa nullable TMinus */
cltype = type_nullable_parser_nodes__TMinus.color;
idtype = type_nullable_parser_nodes__TMinus.id;
if(var_tminusnode2 == NULL) {
var4 = 1;
} else {
if(cltype >= var_tminusnode2->type->table_size) {
var4 = 0;
} else {
var4 = var_tminusnode2->type->type_table[cltype] == idtype;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26927);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist3;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype6 = type_nullable_parser_nodes__AExpr.color;
idtype7 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= var_pexprnode3->type->table_size) {
var5 = 0;
} else {
var5 = var_pexprnode3->type->type_table[cltype6] == idtype7;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26929);
show_backtrace(1);
}
var8 = NEW_parser_nodes__AUminusExpr(&type_parser_nodes__AUminusExpr);
((void (*)(val*, val*, val*))(var8->class->vft[COLOR_parser_prod__AUminusExpr__init_auminusexpr]))(var8, var_tminusnode2, var_pexprnode3) /* init_auminusexpr on <var8:AUminusExpr>*/;
var_pexprnode1 = var8;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction741> */
var10 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var9) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var10, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction741#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction741__action(val* self, val* p0) {
parser__ReduceAction741__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction742#action for (self: ReduceAction742, Parser) */
void parser__ReduceAction742__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwoncenode2 /* var tkwoncenode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : AOnceExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AOnceExpr */;
long var9 /* : Int */;
long var10 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var3;
var_tkwoncenode2 = var_nodearraylist1;
/* <var_tkwoncenode2:nullable Object> isa nullable TKwonce */
cltype = type_nullable_parser_nodes__TKwonce.color;
idtype = type_nullable_parser_nodes__TKwonce.id;
if(var_tkwoncenode2 == NULL) {
var4 = 1;
} else {
if(cltype >= var_tkwoncenode2->type->table_size) {
var4 = 0;
} else {
var4 = var_tkwoncenode2->type->type_table[cltype] == idtype;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26947);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist3;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype6 = type_nullable_parser_nodes__AExpr.color;
idtype7 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= var_pexprnode3->type->table_size) {
var5 = 0;
} else {
var5 = var_pexprnode3->type->type_table[cltype6] == idtype7;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26949);
show_backtrace(1);
}
var8 = NEW_parser_nodes__AOnceExpr(&type_parser_nodes__AOnceExpr);
((void (*)(val*, val*, val*))(var8->class->vft[COLOR_parser_prod__AOnceExpr__init_aonceexpr]))(var8, var_tkwoncenode2, var_pexprnode3) /* init_aonceexpr on <var8:AOnceExpr>*/;
var_pexprnode1 = var8;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction742> */
var10 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var9) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var10, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction742#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction742__action(val* self, val* p0) {
parser__ReduceAction742__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction744#action for (self: ReduceAction744, Parser) */
void parser__ReduceAction744__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwnewnode2 /* var tkwnewnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_ptypenode3 /* var ptypenode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var_pexprsnode5 /* var pexprsnode5: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : ANewExpr */;
val* var13 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable ANewExpr */;
long var14 /* : Int */;
long var15 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var4;
var_tkwnewnode2 = var_nodearraylist1;
/* <var_tkwnewnode2:nullable Object> isa nullable TKwnew */
cltype = type_nullable_parser_nodes__TKwnew.color;
idtype = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= var_tkwnewnode2->type->table_size) {
var5 = 0;
} else {
var5 = var_tkwnewnode2->type->type_table[cltype] == idtype;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26968);
show_backtrace(1);
}
var_ptypenode3 = var_nodearraylist3;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype7 = type_nullable_parser_nodes__AType.color;
idtype8 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_ptypenode3->type->table_size) {
var6 = 0;
} else {
var6 = var_ptypenode3->type->type_table[cltype7] == idtype8;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26970);
show_backtrace(1);
}
var_pexprsnode5 = var_nodearraylist4;
/* <var_pexprsnode5:nullable Object> isa nullable AExprs */
cltype10 = type_nullable_parser_nodes__AExprs.color;
idtype11 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode5 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_pexprsnode5->type->table_size) {
var9 = 0;
} else {
var9 = var_pexprsnode5->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26972);
show_backtrace(1);
}
var12 = NEW_parser_nodes__ANewExpr(&type_parser_nodes__ANewExpr);
var13 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var12->class->vft[COLOR_parser_prod__ANewExpr__init_anewexpr]))(var12, var_tkwnewnode2, var_ptypenode3, var13, var_pexprsnode5) /* init_anewexpr on <var12:ANewExpr>*/;
var_pexprnode1 = var12;
var_node_list = var_pexprnode1;
var14 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction744> */
var15 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var14) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var15, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction744#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction744__action(val* self, val* p0) {
parser__ReduceAction744__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction745#action for (self: ReduceAction745, Parser) */
void parser__ReduceAction745__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwissetnode2 /* var tkwissetnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_tattridnode4 /* var tattridnode4: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : AIssetAttrExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AIssetAttrExpr */;
long var14 /* : Int */;
long var15 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var5;
var_tkwissetnode2 = var_nodearraylist1;
/* <var_tkwissetnode2:nullable Object> isa nullable TKwisset */
cltype = type_nullable_parser_nodes__TKwisset.color;
idtype = type_nullable_parser_nodes__TKwisset.id;
if(var_tkwissetnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= var_tkwissetnode2->type->table_size) {
var6 = 0;
} else {
var6 = var_tkwissetnode2->type->type_table[cltype] == idtype;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26994);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist2;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype8 = type_nullable_parser_nodes__AExpr.color;
idtype9 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode3 == NULL) {
var7 = 1;
} else {
if(cltype8 >= var_pexprnode3->type->table_size) {
var7 = 0;
} else {
var7 = var_pexprnode3->type->type_table[cltype8] == idtype9;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26996);
show_backtrace(1);
}
var_tattridnode4 = var_nodearraylist5;
/* <var_tattridnode4:nullable Object> isa nullable TAttrid */
cltype11 = type_nullable_parser_nodes__TAttrid.color;
idtype12 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode4 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_tattridnode4->type->table_size) {
var10 = 0;
} else {
var10 = var_tattridnode4->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 26998);
show_backtrace(1);
}
var13 = NEW_parser_nodes__AIssetAttrExpr(&type_parser_nodes__AIssetAttrExpr);
((void (*)(val*, val*, val*, val*))(var13->class->vft[COLOR_parser_prod__AIssetAttrExpr__init_aissetattrexpr]))(var13, var_tkwissetnode2, var_pexprnode3, var_tattridnode4) /* init_aissetattrexpr on <var13:AIssetAttrExpr>*/;
var_pexprnode1 = var13;
var_node_list = var_pexprnode1;
var14 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction745> */
var15 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var14) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var15, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction745#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction745__action(val* self, val* p0) {
parser__ReduceAction745__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction746#action for (self: ReduceAction746, Parser) */
void parser__ReduceAction746__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwissetnode2 /* var tkwissetnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : AImplicitSelfExpr */;
val* var_pexprnode3 /* var pexprnode3: nullable AImplicitSelfExpr */;
val* var_tattridnode4 /* var tattridnode4: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : AIssetAttrExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AIssetAttrExpr */;
long var9 /* : Int */;
long var10 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var_tkwissetnode2 = var_nodearraylist1;
/* <var_tkwissetnode2:nullable Object> isa nullable TKwisset */
cltype = type_nullable_parser_nodes__TKwisset.color;
idtype = type_nullable_parser_nodes__TKwisset.id;
if(var_tkwissetnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tkwissetnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tkwissetnode2->type->type_table[cltype] == idtype;
}
}
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27016);
show_backtrace(1);
}
var4 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
((void (*)(val*))(var4->class->vft[COLOR_parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr]))(var4) /* init_aimplicitselfexpr on <var4:AImplicitSelfExpr>*/;
var_pexprnode3 = var4;
var_tattridnode4 = var_nodearraylist2;
/* <var_tattridnode4:nullable Object> isa nullable TAttrid */
cltype6 = type_nullable_parser_nodes__TAttrid.color;
idtype7 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode4 == NULL) {
var5 = 1;
} else {
if(cltype6 >= var_tattridnode4->type->table_size) {
var5 = 0;
} else {
var5 = var_tattridnode4->type->type_table[cltype6] == idtype7;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27019);
show_backtrace(1);
}
var8 = NEW_parser_nodes__AIssetAttrExpr(&type_parser_nodes__AIssetAttrExpr);
((void (*)(val*, val*, val*, val*))(var8->class->vft[COLOR_parser_prod__AIssetAttrExpr__init_aissetattrexpr]))(var8, var_tkwissetnode2, var_pexprnode3, var_tattridnode4) /* init_aissetattrexpr on <var8:AIssetAttrExpr>*/;
var_pexprnode1 = var8;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction746> */
var10 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var9) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var10, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction746#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction746__action(val* self, val* p0) {
parser__ReduceAction746__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction747#action for (self: ReduceAction747, Parser) */
void parser__ReduceAction747__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwissetnode2 /* var tkwissetnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_tattridnode4 /* var tattridnode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : AIssetAttrExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AIssetAttrExpr */;
long var15 /* : Int */;
long var16 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var6;
var_tkwissetnode2 = var_nodearraylist1;
/* <var_tkwissetnode2:nullable Object> isa nullable TKwisset */
cltype = type_nullable_parser_nodes__TKwisset.color;
idtype = type_nullable_parser_nodes__TKwisset.id;
if(var_tkwissetnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= var_tkwissetnode2->type->table_size) {
var7 = 0;
} else {
var7 = var_tkwissetnode2->type->type_table[cltype] == idtype;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27041);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist2;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype9 = type_nullable_parser_nodes__AExpr.color;
idtype10 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_pexprnode3->type->table_size) {
var8 = 0;
} else {
var8 = var_pexprnode3->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27043);
show_backtrace(1);
}
var_tattridnode4 = var_nodearraylist6;
/* <var_tattridnode4:nullable Object> isa nullable TAttrid */
cltype12 = type_nullable_parser_nodes__TAttrid.color;
idtype13 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_tattridnode4->type->table_size) {
var11 = 0;
} else {
var11 = var_tattridnode4->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27045);
show_backtrace(1);
}
var14 = NEW_parser_nodes__AIssetAttrExpr(&type_parser_nodes__AIssetAttrExpr);
((void (*)(val*, val*, val*, val*))(var14->class->vft[COLOR_parser_prod__AIssetAttrExpr__init_aissetattrexpr]))(var14, var_tkwissetnode2, var_pexprnode3, var_tattridnode4) /* init_aissetattrexpr on <var14:AIssetAttrExpr>*/;
var_pexprnode1 = var14;
var_node_list = var_pexprnode1;
var15 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction747> */
var16 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var15) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var16, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction747#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction747__action(val* self, val* p0) {
parser__ReduceAction747__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction748#action for (self: ReduceAction748, Parser) */
void parser__ReduceAction748__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwissetnode2 /* var tkwissetnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_tattridnode4 /* var tattridnode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : AIssetAttrExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AIssetAttrExpr */;
long var16 /* : Int */;
long var17 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var7;
var_tkwissetnode2 = var_nodearraylist1;
/* <var_tkwissetnode2:nullable Object> isa nullable TKwisset */
cltype = type_nullable_parser_nodes__TKwisset.color;
idtype = type_nullable_parser_nodes__TKwisset.id;
if(var_tkwissetnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_tkwissetnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_tkwissetnode2->type->type_table[cltype] == idtype;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27068);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist2;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype10 = type_nullable_parser_nodes__AExpr.color;
idtype11 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_pexprnode3->type->table_size) {
var9 = 0;
} else {
var9 = var_pexprnode3->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27070);
show_backtrace(1);
}
var_tattridnode4 = var_nodearraylist7;
/* <var_tattridnode4:nullable Object> isa nullable TAttrid */
cltype13 = type_nullable_parser_nodes__TAttrid.color;
idtype14 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_tattridnode4->type->table_size) {
var12 = 0;
} else {
var12 = var_tattridnode4->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27072);
show_backtrace(1);
}
var15 = NEW_parser_nodes__AIssetAttrExpr(&type_parser_nodes__AIssetAttrExpr);
((void (*)(val*, val*, val*, val*))(var15->class->vft[COLOR_parser_prod__AIssetAttrExpr__init_aissetattrexpr]))(var15, var_tkwissetnode2, var_pexprnode3, var_tattridnode4) /* init_aissetattrexpr on <var15:AIssetAttrExpr>*/;
var_pexprnode1 = var15;
var_node_list = var_pexprnode1;
var16 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction748> */
var17 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var16) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var17, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction748#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction748__action(val* self, val* p0) {
parser__ReduceAction748__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction750#action for (self: ReduceAction750, Parser) */
void parser__ReduceAction750__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwissetnode2 /* var tkwissetnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : AImplicitSelfExpr */;
val* var_pexprnode3 /* var pexprnode3: nullable AImplicitSelfExpr */;
val* var_tattridnode4 /* var tattridnode4: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : AIssetAttrExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AIssetAttrExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var3;
var_tkwissetnode2 = var_nodearraylist1;
/* <var_tkwissetnode2:nullable Object> isa nullable TKwisset */
cltype = type_nullable_parser_nodes__TKwisset.color;
idtype = type_nullable_parser_nodes__TKwisset.id;
if(var_tkwissetnode2 == NULL) {
var4 = 1;
} else {
if(cltype >= var_tkwissetnode2->type->table_size) {
var4 = 0;
} else {
var4 = var_tkwissetnode2->type->type_table[cltype] == idtype;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27091);
show_backtrace(1);
}
var5 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
((void (*)(val*))(var5->class->vft[COLOR_parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr]))(var5) /* init_aimplicitselfexpr on <var5:AImplicitSelfExpr>*/;
var_pexprnode3 = var5;
var_tattridnode4 = var_nodearraylist3;
/* <var_tattridnode4:nullable Object> isa nullable TAttrid */
cltype7 = type_nullable_parser_nodes__TAttrid.color;
idtype8 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode4 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_tattridnode4->type->table_size) {
var6 = 0;
} else {
var6 = var_tattridnode4->type->type_table[cltype7] == idtype8;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27094);
show_backtrace(1);
}
var9 = NEW_parser_nodes__AIssetAttrExpr(&type_parser_nodes__AIssetAttrExpr);
((void (*)(val*, val*, val*, val*))(var9->class->vft[COLOR_parser_prod__AIssetAttrExpr__init_aissetattrexpr]))(var9, var_tkwissetnode2, var_pexprnode3, var_tattridnode4) /* init_aissetattrexpr on <var9:AIssetAttrExpr>*/;
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction750> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction750#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction750__action(val* self, val* p0) {
parser__ReduceAction750__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction751#action for (self: ReduceAction751, Parser) */
void parser__ReduceAction751__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwissetnode2 /* var tkwissetnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var6 /* : AImplicitSelfExpr */;
val* var_pexprnode3 /* var pexprnode3: nullable AImplicitSelfExpr */;
val* var_tattridnode4 /* var tattridnode4: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : AIssetAttrExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AIssetAttrExpr */;
long var11 /* : Int */;
long var12 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var4;
var_tkwissetnode2 = var_nodearraylist1;
/* <var_tkwissetnode2:nullable Object> isa nullable TKwisset */
cltype = type_nullable_parser_nodes__TKwisset.color;
idtype = type_nullable_parser_nodes__TKwisset.id;
if(var_tkwissetnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= var_tkwissetnode2->type->table_size) {
var5 = 0;
} else {
var5 = var_tkwissetnode2->type->type_table[cltype] == idtype;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27114);
show_backtrace(1);
}
var6 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
((void (*)(val*))(var6->class->vft[COLOR_parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr]))(var6) /* init_aimplicitselfexpr on <var6:AImplicitSelfExpr>*/;
var_pexprnode3 = var6;
var_tattridnode4 = var_nodearraylist4;
/* <var_tattridnode4:nullable Object> isa nullable TAttrid */
cltype8 = type_nullable_parser_nodes__TAttrid.color;
idtype9 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode4 == NULL) {
var7 = 1;
} else {
if(cltype8 >= var_tattridnode4->type->table_size) {
var7 = 0;
} else {
var7 = var_tattridnode4->type->type_table[cltype8] == idtype9;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27117);
show_backtrace(1);
}
var10 = NEW_parser_nodes__AIssetAttrExpr(&type_parser_nodes__AIssetAttrExpr);
((void (*)(val*, val*, val*, val*))(var10->class->vft[COLOR_parser_prod__AIssetAttrExpr__init_aissetattrexpr]))(var10, var_tkwissetnode2, var_pexprnode3, var_tattridnode4) /* init_aissetattrexpr on <var10:AIssetAttrExpr>*/;
var_pexprnode1 = var10;
var_node_list = var_pexprnode1;
var11 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction751> */
var12 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var11) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var12, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction751#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction751__action(val* self, val* p0) {
parser__ReduceAction751__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction753#action for (self: ReduceAction753, Parser) */
void parser__ReduceAction753__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_tattridnode3 /* var tattridnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : AAttrExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAttrExpr */;
long var10 /* : Int */;
long var11 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var4;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var5 = 0;
} else {
var5 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27137);
show_backtrace(1);
}
var_tattridnode3 = var_nodearraylist4;
/* <var_tattridnode3:nullable Object> isa nullable TAttrid */
cltype7 = type_nullable_parser_nodes__TAttrid.color;
idtype8 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_tattridnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_tattridnode3->type->type_table[cltype7] == idtype8;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27139);
show_backtrace(1);
}
var9 = NEW_parser_nodes__AAttrExpr(&type_parser_nodes__AAttrExpr);
((void (*)(val*, val*, val*))(var9->class->vft[COLOR_parser_prod__AAttrExpr__init_aattrexpr]))(var9, var_pexprnode2, var_tattridnode3) /* init_aattrexpr on <var9:AAttrExpr>*/;
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction753> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction753#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction753__action(val* self, val* p0) {
parser__ReduceAction753__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction754#action for (self: ReduceAction754, Parser) */
void parser__ReduceAction754__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tattridnode3 /* var tattridnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : AAttrExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAttrExpr */;
long var5 /* : Int */;
long var6 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var2 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
((void (*)(val*))(var2->class->vft[COLOR_parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr]))(var2) /* init_aimplicitselfexpr on <var2:AImplicitSelfExpr>*/;
var_pexprnode2 = var2;
var_tattridnode3 = var_nodearraylist1;
/* <var_tattridnode3:nullable Object> isa nullable TAttrid */
cltype = type_nullable_parser_nodes__TAttrid.color;
idtype = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode3 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tattridnode3->type->table_size) {
var3 = 0;
} else {
var3 = var_tattridnode3->type->type_table[cltype] == idtype;
}
}
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27156);
show_backtrace(1);
}
var4 = NEW_parser_nodes__AAttrExpr(&type_parser_nodes__AAttrExpr);
((void (*)(val*, val*, val*))(var4->class->vft[COLOR_parser_prod__AAttrExpr__init_aattrexpr]))(var4, var_pexprnode2, var_tattridnode3) /* init_aattrexpr on <var4:AAttrExpr>*/;
var_pexprnode1 = var4;
var_node_list = var_pexprnode1;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction754> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction754#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction754__action(val* self, val* p0) {
parser__ReduceAction754__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction755#action for (self: ReduceAction755, Parser) */
void parser__ReduceAction755__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_tattridnode3 /* var tattridnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : AAttrExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAttrExpr */;
long var11 /* : Int */;
long var12 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var5;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var6 = 0;
} else {
var6 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27176);
show_backtrace(1);
}
var_tattridnode3 = var_nodearraylist5;
/* <var_tattridnode3:nullable Object> isa nullable TAttrid */
cltype8 = type_nullable_parser_nodes__TAttrid.color;
idtype9 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode3 == NULL) {
var7 = 1;
} else {
if(cltype8 >= var_tattridnode3->type->table_size) {
var7 = 0;
} else {
var7 = var_tattridnode3->type->type_table[cltype8] == idtype9;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27178);
show_backtrace(1);
}
var10 = NEW_parser_nodes__AAttrExpr(&type_parser_nodes__AAttrExpr);
((void (*)(val*, val*, val*))(var10->class->vft[COLOR_parser_prod__AAttrExpr__init_aattrexpr]))(var10, var_pexprnode2, var_tattridnode3) /* init_aattrexpr on <var10:AAttrExpr>*/;
var_pexprnode1 = var10;
var_node_list = var_pexprnode1;
var11 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction755> */
var12 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var11) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var12, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction755#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction755__action(val* self, val* p0) {
parser__ReduceAction755__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction756#action for (self: ReduceAction756, Parser) */
void parser__ReduceAction756__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_tattridnode3 /* var tattridnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : AAttrExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAttrExpr */;
long var12 /* : Int */;
long var13 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var6;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var7 = 0;
} else {
var7 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27199);
show_backtrace(1);
}
var_tattridnode3 = var_nodearraylist6;
/* <var_tattridnode3:nullable Object> isa nullable TAttrid */
cltype9 = type_nullable_parser_nodes__TAttrid.color;
idtype10 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_tattridnode3->type->table_size) {
var8 = 0;
} else {
var8 = var_tattridnode3->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27201);
show_backtrace(1);
}
var11 = NEW_parser_nodes__AAttrExpr(&type_parser_nodes__AAttrExpr);
((void (*)(val*, val*, val*))(var11->class->vft[COLOR_parser_prod__AAttrExpr__init_aattrexpr]))(var11, var_pexprnode2, var_tattridnode3) /* init_aattrexpr on <var11:AAttrExpr>*/;
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction756> */
var13 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var12) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var13, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction756#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction756__action(val* self, val* p0) {
parser__ReduceAction756__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction758#action for (self: ReduceAction758, Parser) */
void parser__ReduceAction758__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tattridnode3 /* var tattridnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : AAttrExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAttrExpr */;
long var6 /* : Int */;
long var7 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var3 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
((void (*)(val*))(var3->class->vft[COLOR_parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr]))(var3) /* init_aimplicitselfexpr on <var3:AImplicitSelfExpr>*/;
var_pexprnode2 = var3;
var_tattridnode3 = var_nodearraylist2;
/* <var_tattridnode3:nullable Object> isa nullable TAttrid */
cltype = type_nullable_parser_nodes__TAttrid.color;
idtype = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode3 == NULL) {
var4 = 1;
} else {
if(cltype >= var_tattridnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_tattridnode3->type->type_table[cltype] == idtype;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27219);
show_backtrace(1);
}
var5 = NEW_parser_nodes__AAttrExpr(&type_parser_nodes__AAttrExpr);
((void (*)(val*, val*, val*))(var5->class->vft[COLOR_parser_prod__AAttrExpr__init_aattrexpr]))(var5, var_pexprnode2, var_tattridnode3) /* init_aattrexpr on <var5:AAttrExpr>*/;
var_pexprnode1 = var5;
var_node_list = var_pexprnode1;
var6 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction758> */
var7 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var6) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var7, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction758#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction758__action(val* self, val* p0) {
parser__ReduceAction758__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction759#action for (self: ReduceAction759, Parser) */
void parser__ReduceAction759__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var4 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tattridnode3 /* var tattridnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var6 /* : AAttrExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAttrExpr */;
long var7 /* : Int */;
long var8 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var3;
var4 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
((void (*)(val*))(var4->class->vft[COLOR_parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr]))(var4) /* init_aimplicitselfexpr on <var4:AImplicitSelfExpr>*/;
var_pexprnode2 = var4;
var_tattridnode3 = var_nodearraylist3;
/* <var_tattridnode3:nullable Object> isa nullable TAttrid */
cltype = type_nullable_parser_nodes__TAttrid.color;
idtype = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode3 == NULL) {
var5 = 1;
} else {
if(cltype >= var_tattridnode3->type->table_size) {
var5 = 0;
} else {
var5 = var_tattridnode3->type->type_table[cltype] == idtype;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27238);
show_backtrace(1);
}
var6 = NEW_parser_nodes__AAttrExpr(&type_parser_nodes__AAttrExpr);
((void (*)(val*, val*, val*))(var6->class->vft[COLOR_parser_prod__AAttrExpr__init_aattrexpr]))(var6, var_pexprnode2, var_tattridnode3) /* init_aattrexpr on <var6:AAttrExpr>*/;
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction759> */
var8 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var7) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var8, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction759#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction759__action(val* self, val* p0) {
parser__ReduceAction759__action(self, p0);
RET_LABEL:;
}
