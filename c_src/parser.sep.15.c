#include "parser.sep.0.h"
/* method parser#ReduceAction745#action for (self: ReduceAction745, Parser) */
void parser__ReduceAction745__action(val* self, val* p0) {
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
CHECK_NEW_array__Array(var16);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 27655);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 27657);
exit(1);
}
var21 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction745>*/;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 27660);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 27662);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 27664);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 27666);
exit(1);
}
var34 = NEW_parser_nodes__AForExpr(&type_parser_nodes__AForExpr);
((void (*)(val*, val*, val*, val*, val*, val*, val*))(var34->class->vft[COLOR_parser_prod__AForExpr__init_aforexpr]))(var34, var_tkwfornode2, var_listnode4, var_pexprnode5, var_tkwdonode6, var_pexprnode7, var_plabelnode8) /* init_aforexpr on <var34:AForExpr>*/;
CHECK_NEW_parser_nodes__AForExpr(var34);
var_pexprnode1 = var34;
var_node_list = var_pexprnode1;
var35 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction745> */
var36 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var35) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var36, var_node_list) /* push on <var_p:Parser>*/;
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
CHECK_NEW_array__Array(var12);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 27697);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 27699);
exit(1);
}
var17 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction746>*/;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 27702);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 27704);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 27706);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 27708);
exit(1);
}
var30 = NEW_parser_nodes__AForExpr(&type_parser_nodes__AForExpr);
((void (*)(val*, val*, val*, val*, val*, val*, val*))(var30->class->vft[COLOR_parser_prod__AForExpr__init_aforexpr]))(var30, var_tkwfornode2, var_listnode4, var_pexprnode5, var_tkwdonode6, var_pexprnode7, var_plabelnode8) /* init_aforexpr on <var30:AForExpr>*/;
CHECK_NEW_parser_nodes__AForExpr(var30);
var_pexprnode1 = var30;
var_node_list = var_pexprnode1;
var31 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction746> */
var32 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var31) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var32, var_node_list) /* push on <var_p:Parser>*/;
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
CHECK_NEW_array__Array(var15);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 27742);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 27744);
exit(1);
}
var20 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction747>*/;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 27747);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 27749);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 27751);
exit(1);
}
var30 = NEW_parser_nodes__AForExpr(&type_parser_nodes__AForExpr);
var31 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*))(var30->class->vft[COLOR_parser_prod__AForExpr__init_aforexpr]))(var30, var_tkwfornode2, var_listnode4, var_pexprnode5, var_tkwdonode6, var_pexprnode7, var31) /* init_aforexpr on <var30:AForExpr>*/;
CHECK_NEW_parser_nodes__AForExpr(var30);
var_pexprnode1 = var30;
var_node_list = var_pexprnode1;
var32 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction747> */
var33 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var32) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var33, var_node_list) /* push on <var_p:Parser>*/;
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
CHECK_NEW_array__Array(var11);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 27781);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 27783);
exit(1);
}
var16 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction748>*/;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 27786);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 27788);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 27790);
exit(1);
}
var26 = NEW_parser_nodes__AForExpr(&type_parser_nodes__AForExpr);
var27 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*))(var26->class->vft[COLOR_parser_prod__AForExpr__init_aforexpr]))(var26, var_tkwfornode2, var_listnode4, var_pexprnode5, var_tkwdonode6, var_pexprnode7, var27) /* init_aforexpr on <var26:AForExpr>*/;
CHECK_NEW_parser_nodes__AForExpr(var26);
var_pexprnode1 = var26;
var_node_list = var_pexprnode1;
var28 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction748> */
var29 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var28) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var29, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction748#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction748__action(val* self, val* p0) {
parser__ReduceAction748__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction749#action for (self: ReduceAction749, Parser) */
void parser__ReduceAction749__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 27813);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 27815);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 27817);
exit(1);
}
var12 = NEW_parser_nodes__AAssertExpr(&type_parser_nodes__AAssertExpr);
var13 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var12->class->vft[COLOR_parser_prod__AAssertExpr__init_aassertexpr]))(var12, var_tkwassertnode2, var13, var_pexprnode4, var_pexprnode5) /* init_aassertexpr on <var12:AAssertExpr>*/;
CHECK_NEW_parser_nodes__AAssertExpr(var12);
var_pexprnode1 = var12;
var_node_list = var_pexprnode1;
var14 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction749> */
var15 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var14) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var15, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction749#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction749__action(val* self, val* p0) {
parser__ReduceAction749__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction750#action for (self: ReduceAction750, Parser) */
void parser__ReduceAction750__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 27839);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 27841);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 27843);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 27845);
exit(1);
}
var16 = NEW_parser_nodes__AAssertExpr(&type_parser_nodes__AAssertExpr);
((void (*)(val*, val*, val*, val*, val*))(var16->class->vft[COLOR_parser_prod__AAssertExpr__init_aassertexpr]))(var16, var_tkwassertnode2, var_tidnode3, var_pexprnode4, var_pexprnode5) /* init_aassertexpr on <var16:AAssertExpr>*/;
CHECK_NEW_parser_nodes__AAssertExpr(var16);
var_pexprnode1 = var16;
var_node_list = var_pexprnode1;
var17 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction750> */
var18 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var17) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var18, var_node_list) /* push on <var_p:Parser>*/;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 27864);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 27866);
exit(1);
}
var7 = NEW_parser_nodes__AAssertExpr(&type_parser_nodes__AAssertExpr);
var8 = NULL;
var9 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var7->class->vft[COLOR_parser_prod__AAssertExpr__init_aassertexpr]))(var7, var_tkwassertnode2, var8, var_pexprnode4, var9) /* init_aassertexpr on <var7:AAssertExpr>*/;
CHECK_NEW_parser_nodes__AAssertExpr(var7);
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction751> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction751#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction751__action(val* self, val* p0) {
parser__ReduceAction751__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction752#action for (self: ReduceAction752, Parser) */
void parser__ReduceAction752__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 27886);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 27888);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 27890);
exit(1);
}
var11 = NEW_parser_nodes__AAssertExpr(&type_parser_nodes__AAssertExpr);
var12 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var11->class->vft[COLOR_parser_prod__AAssertExpr__init_aassertexpr]))(var11, var_tkwassertnode2, var_tidnode3, var_pexprnode4, var12) /* init_aassertexpr on <var11:AAssertExpr>*/;
CHECK_NEW_parser_nodes__AAssertExpr(var11);
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var13 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction752> */
var14 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var13) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var14, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction752#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction752__action(val* self, val* p0) {
parser__ReduceAction752__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction753#action for (self: ReduceAction753, Parser) */
void parser__ReduceAction753__action(val* self, val* p0) {
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
var3 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction753> */
var4 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var3) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var4, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction753#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction753__action(val* self, val* p0) {
parser__ReduceAction753__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction763#action for (self: ReduceAction763, Parser) */
void parser__ReduceAction763__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var4 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_pexprsnode3 /* var pexprsnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : Array[Object] */;
val* var13 /* : ABraExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ABraExpr */;
long var14 /* : Int */;
long var15 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var3;
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
CHECK_NEW_array__Array(var4);
var_listnode5 = var4;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 27923);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 27925);
exit(1);
}
var_listnode4 = var_nodearraylist3;
/* <var_listnode4:nullable Object> isa Array[Object] */
cltype10 = type_array__Arraykernel__Object.color;
idtype11 = type_array__Arraykernel__Object.id;
if(var_listnode4 == NULL) {
var9 = 0;
} else {
if(cltype10 >= var_listnode4->type->table_size) {
var9 = 0;
} else {
var9 = var_listnode4->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 27927);
exit(1);
}
var12 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode4) /* concat on <self:ReduceAction763>*/;
var_listnode5 = var12;
var13 = NEW_parser_nodes__ABraExpr(&type_parser_nodes__ABraExpr);
((void (*)(val*, val*, val*, val*))(var13->class->vft[COLOR_parser_prod__ABraExpr__init_abraexpr]))(var13, var_pexprnode2, var_pexprsnode3, var_listnode5) /* init_abraexpr on <var13:ABraExpr>*/;
CHECK_NEW_parser_nodes__ABraExpr(var13);
var_pexprnode1 = var13;
var_node_list = var_pexprnode1;
var14 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction763> */
var15 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var14) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var15, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction763#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction763__action(val* self, val* p0) {
parser__ReduceAction763__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction765#action for (self: ReduceAction765, Parser) */
void parser__ReduceAction765__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 27955);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 27957);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 27959);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 27961);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 27963);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 27965);
exit(1);
}
var28 = NEW_parser_nodes__AIfexprExpr(&type_parser_nodes__AIfexprExpr);
((void (*)(val*, val*, val*, val*, val*, val*, val*))(var28->class->vft[COLOR_parser_prod__AIfexprExpr__init_aifexprexpr]))(var28, var_tkwifnode2, var_pexprnode3, var_tkwthennode4, var_pexprnode5, var_tkwelsenode6, var_pexprnode7) /* init_aifexprexpr on <var28:AIfexprExpr>*/;
CHECK_NEW_parser_nodes__AIfexprExpr(var28);
var_pexprnode1 = var28;
var_node_list = var_pexprnode1;
var29 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction765> */
var30 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var29) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var30, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction765#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction765__action(val* self, val* p0) {
parser__ReduceAction765__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction767#action for (self: ReduceAction767, Parser) */
void parser__ReduceAction767__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 27988);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 27990);
exit(1);
}
var9 = NEW_parser_nodes__AOrExpr(&type_parser_nodes__AOrExpr);
((void (*)(val*, val*, val*))(var9->class->vft[COLOR_parser_prod__AOrExpr__init_aorexpr]))(var9, var_pexprnode2, var_pexprnode3) /* init_aorexpr on <var9:AOrExpr>*/;
CHECK_NEW_parser_nodes__AOrExpr(var9);
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction767> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction767#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction767__action(val* self, val* p0) {
parser__ReduceAction767__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction768#action for (self: ReduceAction768, Parser) */
void parser__ReduceAction768__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28009);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28011);
exit(1);
}
var9 = NEW_parser_nodes__AAndExpr(&type_parser_nodes__AAndExpr);
((void (*)(val*, val*, val*))(var9->class->vft[COLOR_parser_prod__AAndExpr__init_aandexpr]))(var9, var_pexprnode2, var_pexprnode3) /* init_aandexpr on <var9:AAndExpr>*/;
CHECK_NEW_parser_nodes__AAndExpr(var9);
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction768> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction768#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction768__action(val* self, val* p0) {
parser__ReduceAction768__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction769#action for (self: ReduceAction769, Parser) */
void parser__ReduceAction769__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28031);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28033);
exit(1);
}
var10 = NEW_parser_nodes__AOrElseExpr(&type_parser_nodes__AOrElseExpr);
((void (*)(val*, val*, val*))(var10->class->vft[COLOR_parser_prod__AOrElseExpr__init_aorelseexpr]))(var10, var_pexprnode2, var_pexprnode3) /* init_aorelseexpr on <var10:AOrElseExpr>*/;
CHECK_NEW_parser_nodes__AOrElseExpr(var10);
var_pexprnode1 = var10;
var_node_list = var_pexprnode1;
var11 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction769> */
var12 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var11) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var12, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction769#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction769__action(val* self, val* p0) {
parser__ReduceAction769__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction770#action for (self: ReduceAction770, Parser) */
void parser__ReduceAction770__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28052);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28054);
exit(1);
}
var9 = NEW_parser_nodes__AImpliesExpr(&type_parser_nodes__AImpliesExpr);
((void (*)(val*, val*, val*))(var9->class->vft[COLOR_parser_prod__AImpliesExpr__init_aimpliesexpr]))(var9, var_pexprnode2, var_pexprnode3) /* init_aimpliesexpr on <var9:AImpliesExpr>*/;
CHECK_NEW_parser_nodes__AImpliesExpr(var9);
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction770> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction770#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction770__action(val* self, val* p0) {
parser__ReduceAction770__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction772#action for (self: ReduceAction772, Parser) */
void parser__ReduceAction772__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28072);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28074);
exit(1);
}
var8 = NEW_parser_nodes__ANotExpr(&type_parser_nodes__ANotExpr);
((void (*)(val*, val*, val*))(var8->class->vft[COLOR_parser_prod__ANotExpr__init_anotexpr]))(var8, var_tkwnotnode2, var_pexprnode3) /* init_anotexpr on <var8:ANotExpr>*/;
CHECK_NEW_parser_nodes__ANotExpr(var8);
var_pexprnode1 = var8;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction772> */
var10 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var9) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var10, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction772#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction772__action(val* self, val* p0) {
parser__ReduceAction772__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction774#action for (self: ReduceAction774, Parser) */
void parser__ReduceAction774__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28093);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28095);
exit(1);
}
var9 = NEW_parser_nodes__AEqExpr(&type_parser_nodes__AEqExpr);
((void (*)(val*, val*, val*))(var9->class->vft[COLOR_parser_prod__AEqExpr__init_aeqexpr]))(var9, var_pexprnode2, var_pexprnode3) /* init_aeqexpr on <var9:AEqExpr>*/;
CHECK_NEW_parser_nodes__AEqExpr(var9);
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction774> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction774#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction774__action(val* self, val* p0) {
parser__ReduceAction774__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction775#action for (self: ReduceAction775, Parser) */
void parser__ReduceAction775__action(val* self, val* p0) {
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
val* var9 /* : AEeExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AEeExpr */;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28114);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28116);
exit(1);
}
var9 = NEW_parser_nodes__AEeExpr(&type_parser_nodes__AEeExpr);
((void (*)(val*, val*, val*))(var9->class->vft[COLOR_parser_prod__AEeExpr__init_aeeexpr]))(var9, var_pexprnode2, var_pexprnode3) /* init_aeeexpr on <var9:AEeExpr>*/;
CHECK_NEW_parser_nodes__AEeExpr(var9);
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction775> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction775#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction775__action(val* self, val* p0) {
parser__ReduceAction775__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction776#action for (self: ReduceAction776, Parser) */
void parser__ReduceAction776__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28135);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28137);
exit(1);
}
var9 = NEW_parser_nodes__ANeExpr(&type_parser_nodes__ANeExpr);
((void (*)(val*, val*, val*))(var9->class->vft[COLOR_parser_prod__ANeExpr__init_aneexpr]))(var9, var_pexprnode2, var_pexprnode3) /* init_aneexpr on <var9:ANeExpr>*/;
CHECK_NEW_parser_nodes__ANeExpr(var9);
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction776> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction776#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction776__action(val* self, val* p0) {
parser__ReduceAction776__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction777#action for (self: ReduceAction777, Parser) */
void parser__ReduceAction777__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28156);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28158);
exit(1);
}
var9 = NEW_parser_nodes__ALtExpr(&type_parser_nodes__ALtExpr);
((void (*)(val*, val*, val*))(var9->class->vft[COLOR_parser_prod__ALtExpr__init_altexpr]))(var9, var_pexprnode2, var_pexprnode3) /* init_altexpr on <var9:ALtExpr>*/;
CHECK_NEW_parser_nodes__ALtExpr(var9);
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction777> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction777#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction777__action(val* self, val* p0) {
parser__ReduceAction777__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction778#action for (self: ReduceAction778, Parser) */
void parser__ReduceAction778__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28177);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28179);
exit(1);
}
var9 = NEW_parser_nodes__ALeExpr(&type_parser_nodes__ALeExpr);
((void (*)(val*, val*, val*))(var9->class->vft[COLOR_parser_prod__ALeExpr__init_aleexpr]))(var9, var_pexprnode2, var_pexprnode3) /* init_aleexpr on <var9:ALeExpr>*/;
CHECK_NEW_parser_nodes__ALeExpr(var9);
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction778> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction778#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction778__action(val* self, val* p0) {
parser__ReduceAction778__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction779#action for (self: ReduceAction779, Parser) */
void parser__ReduceAction779__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28198);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28200);
exit(1);
}
var9 = NEW_parser_nodes__ALlExpr(&type_parser_nodes__ALlExpr);
((void (*)(val*, val*, val*))(var9->class->vft[COLOR_parser_prod__ALlExpr__init_allexpr]))(var9, var_pexprnode2, var_pexprnode3) /* init_allexpr on <var9:ALlExpr>*/;
CHECK_NEW_parser_nodes__ALlExpr(var9);
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction779> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction779#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction779__action(val* self, val* p0) {
parser__ReduceAction779__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction780#action for (self: ReduceAction780, Parser) */
void parser__ReduceAction780__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28219);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28221);
exit(1);
}
var9 = NEW_parser_nodes__AGtExpr(&type_parser_nodes__AGtExpr);
((void (*)(val*, val*, val*))(var9->class->vft[COLOR_parser_prod__AGtExpr__init_agtexpr]))(var9, var_pexprnode2, var_pexprnode3) /* init_agtexpr on <var9:AGtExpr>*/;
CHECK_NEW_parser_nodes__AGtExpr(var9);
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction780> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction780#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction780__action(val* self, val* p0) {
parser__ReduceAction780__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction781#action for (self: ReduceAction781, Parser) */
void parser__ReduceAction781__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28240);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28242);
exit(1);
}
var9 = NEW_parser_nodes__AGeExpr(&type_parser_nodes__AGeExpr);
((void (*)(val*, val*, val*))(var9->class->vft[COLOR_parser_prod__AGeExpr__init_ageexpr]))(var9, var_pexprnode2, var_pexprnode3) /* init_ageexpr on <var9:AGeExpr>*/;
CHECK_NEW_parser_nodes__AGeExpr(var9);
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction781> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction781#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction781__action(val* self, val* p0) {
parser__ReduceAction781__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction782#action for (self: ReduceAction782, Parser) */
void parser__ReduceAction782__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28261);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28263);
exit(1);
}
var9 = NEW_parser_nodes__AGgExpr(&type_parser_nodes__AGgExpr);
((void (*)(val*, val*, val*))(var9->class->vft[COLOR_parser_prod__AGgExpr__init_aggexpr]))(var9, var_pexprnode2, var_pexprnode3) /* init_aggexpr on <var9:AGgExpr>*/;
CHECK_NEW_parser_nodes__AGgExpr(var9);
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction782> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction782#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction782__action(val* self, val* p0) {
parser__ReduceAction782__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction783#action for (self: ReduceAction783, Parser) */
void parser__ReduceAction783__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28282);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28284);
exit(1);
}
var9 = NEW_parser_nodes__AStarshipExpr(&type_parser_nodes__AStarshipExpr);
((void (*)(val*, val*, val*))(var9->class->vft[COLOR_parser_prod__AStarshipExpr__init_astarshipexpr]))(var9, var_pexprnode2, var_pexprnode3) /* init_astarshipexpr on <var9:AStarshipExpr>*/;
CHECK_NEW_parser_nodes__AStarshipExpr(var9);
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction783> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction783#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction783__action(val* self, val* p0) {
parser__ReduceAction783__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction784#action for (self: ReduceAction784, Parser) */
void parser__ReduceAction784__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28303);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28305);
exit(1);
}
var9 = NEW_parser_nodes__AIsaExpr(&type_parser_nodes__AIsaExpr);
((void (*)(val*, val*, val*))(var9->class->vft[COLOR_parser_prod__AIsaExpr__init_aisaexpr]))(var9, var_pexprnode2, var_ptypenode3) /* init_aisaexpr on <var9:AIsaExpr>*/;
CHECK_NEW_parser_nodes__AIsaExpr(var9);
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction784> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction784#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction784__action(val* self, val* p0) {
parser__ReduceAction784__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction786#action for (self: ReduceAction786, Parser) */
void parser__ReduceAction786__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28324);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28326);
exit(1);
}
var9 = NEW_parser_nodes__APlusExpr(&type_parser_nodes__APlusExpr);
((void (*)(val*, val*, val*))(var9->class->vft[COLOR_parser_prod__APlusExpr__init_aplusexpr]))(var9, var_pexprnode2, var_pexprnode3) /* init_aplusexpr on <var9:APlusExpr>*/;
CHECK_NEW_parser_nodes__APlusExpr(var9);
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction786> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction786#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction786__action(val* self, val* p0) {
parser__ReduceAction786__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction787#action for (self: ReduceAction787, Parser) */
void parser__ReduceAction787__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28345);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28347);
exit(1);
}
var9 = NEW_parser_nodes__AMinusExpr(&type_parser_nodes__AMinusExpr);
((void (*)(val*, val*, val*))(var9->class->vft[COLOR_parser_prod__AMinusExpr__init_aminusexpr]))(var9, var_pexprnode2, var_pexprnode3) /* init_aminusexpr on <var9:AMinusExpr>*/;
CHECK_NEW_parser_nodes__AMinusExpr(var9);
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction787> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction787#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction787__action(val* self, val* p0) {
parser__ReduceAction787__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction789#action for (self: ReduceAction789, Parser) */
void parser__ReduceAction789__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28366);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28368);
exit(1);
}
var9 = NEW_parser_nodes__AStarExpr(&type_parser_nodes__AStarExpr);
((void (*)(val*, val*, val*))(var9->class->vft[COLOR_parser_prod__AStarExpr__init_astarexpr]))(var9, var_pexprnode2, var_pexprnode3) /* init_astarexpr on <var9:AStarExpr>*/;
CHECK_NEW_parser_nodes__AStarExpr(var9);
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction789> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction789#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction789__action(val* self, val* p0) {
parser__ReduceAction789__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction790#action for (self: ReduceAction790, Parser) */
void parser__ReduceAction790__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28387);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28389);
exit(1);
}
var9 = NEW_parser_nodes__ASlashExpr(&type_parser_nodes__ASlashExpr);
((void (*)(val*, val*, val*))(var9->class->vft[COLOR_parser_prod__ASlashExpr__init_aslashexpr]))(var9, var_pexprnode2, var_pexprnode3) /* init_aslashexpr on <var9:ASlashExpr>*/;
CHECK_NEW_parser_nodes__ASlashExpr(var9);
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction790> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction790#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction790__action(val* self, val* p0) {
parser__ReduceAction790__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction791#action for (self: ReduceAction791, Parser) */
void parser__ReduceAction791__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28408);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28410);
exit(1);
}
var9 = NEW_parser_nodes__APercentExpr(&type_parser_nodes__APercentExpr);
((void (*)(val*, val*, val*))(var9->class->vft[COLOR_parser_prod__APercentExpr__init_apercentexpr]))(var9, var_pexprnode2, var_pexprnode3) /* init_apercentexpr on <var9:APercentExpr>*/;
CHECK_NEW_parser_nodes__APercentExpr(var9);
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction791> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction791#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction791__action(val* self, val* p0) {
parser__ReduceAction791__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction793#action for (self: ReduceAction793, Parser) */
void parser__ReduceAction793__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28428);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28430);
exit(1);
}
var8 = NEW_parser_nodes__AUminusExpr(&type_parser_nodes__AUminusExpr);
((void (*)(val*, val*, val*))(var8->class->vft[COLOR_parser_prod__AUminusExpr__init_auminusexpr]))(var8, var_tminusnode2, var_pexprnode3) /* init_auminusexpr on <var8:AUminusExpr>*/;
CHECK_NEW_parser_nodes__AUminusExpr(var8);
var_pexprnode1 = var8;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction793> */
var10 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var9) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var10, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction793#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction793__action(val* self, val* p0) {
parser__ReduceAction793__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction794#action for (self: ReduceAction794, Parser) */
void parser__ReduceAction794__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28448);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28450);
exit(1);
}
var8 = NEW_parser_nodes__AOnceExpr(&type_parser_nodes__AOnceExpr);
((void (*)(val*, val*, val*))(var8->class->vft[COLOR_parser_prod__AOnceExpr__init_aonceexpr]))(var8, var_tkwoncenode2, var_pexprnode3) /* init_aonceexpr on <var8:AOnceExpr>*/;
CHECK_NEW_parser_nodes__AOnceExpr(var8);
var_pexprnode1 = var8;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction794> */
var10 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var9) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var10, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction794#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction794__action(val* self, val* p0) {
parser__ReduceAction794__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction796#action for (self: ReduceAction796, Parser) */
void parser__ReduceAction796__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28469);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28471);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28473);
exit(1);
}
var12 = NEW_parser_nodes__ANewExpr(&type_parser_nodes__ANewExpr);
var13 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var12->class->vft[COLOR_parser_prod__ANewExpr__init_anewexpr]))(var12, var_tkwnewnode2, var_ptypenode3, var13, var_pexprsnode5) /* init_anewexpr on <var12:ANewExpr>*/;
CHECK_NEW_parser_nodes__ANewExpr(var12);
var_pexprnode1 = var12;
var_node_list = var_pexprnode1;
var14 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction796> */
var15 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var14) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var15, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction796#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction796__action(val* self, val* p0) {
parser__ReduceAction796__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction797#action for (self: ReduceAction797, Parser) */
void parser__ReduceAction797__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28495);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28497);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28499);
exit(1);
}
var13 = NEW_parser_nodes__AIssetAttrExpr(&type_parser_nodes__AIssetAttrExpr);
((void (*)(val*, val*, val*, val*))(var13->class->vft[COLOR_parser_prod__AIssetAttrExpr__init_aissetattrexpr]))(var13, var_tkwissetnode2, var_pexprnode3, var_tattridnode4) /* init_aissetattrexpr on <var13:AIssetAttrExpr>*/;
CHECK_NEW_parser_nodes__AIssetAttrExpr(var13);
var_pexprnode1 = var13;
var_node_list = var_pexprnode1;
var14 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction797> */
var15 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var14) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var15, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction797#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction797__action(val* self, val* p0) {
parser__ReduceAction797__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction798#action for (self: ReduceAction798, Parser) */
void parser__ReduceAction798__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28517);
exit(1);
}
var4 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
((void (*)(val*))(var4->class->vft[COLOR_parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr]))(var4) /* init_aimplicitselfexpr on <var4:AImplicitSelfExpr>*/;
CHECK_NEW_parser_nodes__AImplicitSelfExpr(var4);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28520);
exit(1);
}
var8 = NEW_parser_nodes__AIssetAttrExpr(&type_parser_nodes__AIssetAttrExpr);
((void (*)(val*, val*, val*, val*))(var8->class->vft[COLOR_parser_prod__AIssetAttrExpr__init_aissetattrexpr]))(var8, var_tkwissetnode2, var_pexprnode3, var_tattridnode4) /* init_aissetattrexpr on <var8:AIssetAttrExpr>*/;
CHECK_NEW_parser_nodes__AIssetAttrExpr(var8);
var_pexprnode1 = var8;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction798> */
var10 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var9) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var10, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction798#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction798__action(val* self, val* p0) {
parser__ReduceAction798__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction799#action for (self: ReduceAction799, Parser) */
void parser__ReduceAction799__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28542);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28544);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28546);
exit(1);
}
var14 = NEW_parser_nodes__AIssetAttrExpr(&type_parser_nodes__AIssetAttrExpr);
((void (*)(val*, val*, val*, val*))(var14->class->vft[COLOR_parser_prod__AIssetAttrExpr__init_aissetattrexpr]))(var14, var_tkwissetnode2, var_pexprnode3, var_tattridnode4) /* init_aissetattrexpr on <var14:AIssetAttrExpr>*/;
CHECK_NEW_parser_nodes__AIssetAttrExpr(var14);
var_pexprnode1 = var14;
var_node_list = var_pexprnode1;
var15 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction799> */
var16 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var15) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var16, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction799#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction799__action(val* self, val* p0) {
parser__ReduceAction799__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction800#action for (self: ReduceAction800, Parser) */
void parser__ReduceAction800__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28569);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28571);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28573);
exit(1);
}
var15 = NEW_parser_nodes__AIssetAttrExpr(&type_parser_nodes__AIssetAttrExpr);
((void (*)(val*, val*, val*, val*))(var15->class->vft[COLOR_parser_prod__AIssetAttrExpr__init_aissetattrexpr]))(var15, var_tkwissetnode2, var_pexprnode3, var_tattridnode4) /* init_aissetattrexpr on <var15:AIssetAttrExpr>*/;
CHECK_NEW_parser_nodes__AIssetAttrExpr(var15);
var_pexprnode1 = var15;
var_node_list = var_pexprnode1;
var16 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction800> */
var17 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var16) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var17, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction800#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction800__action(val* self, val* p0) {
parser__ReduceAction800__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction802#action for (self: ReduceAction802, Parser) */
void parser__ReduceAction802__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28592);
exit(1);
}
var5 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
((void (*)(val*))(var5->class->vft[COLOR_parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr]))(var5) /* init_aimplicitselfexpr on <var5:AImplicitSelfExpr>*/;
CHECK_NEW_parser_nodes__AImplicitSelfExpr(var5);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28595);
exit(1);
}
var9 = NEW_parser_nodes__AIssetAttrExpr(&type_parser_nodes__AIssetAttrExpr);
((void (*)(val*, val*, val*, val*))(var9->class->vft[COLOR_parser_prod__AIssetAttrExpr__init_aissetattrexpr]))(var9, var_tkwissetnode2, var_pexprnode3, var_tattridnode4) /* init_aissetattrexpr on <var9:AIssetAttrExpr>*/;
CHECK_NEW_parser_nodes__AIssetAttrExpr(var9);
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction802> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction802#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction802__action(val* self, val* p0) {
parser__ReduceAction802__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction803#action for (self: ReduceAction803, Parser) */
void parser__ReduceAction803__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28615);
exit(1);
}
var6 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
((void (*)(val*))(var6->class->vft[COLOR_parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr]))(var6) /* init_aimplicitselfexpr on <var6:AImplicitSelfExpr>*/;
CHECK_NEW_parser_nodes__AImplicitSelfExpr(var6);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28618);
exit(1);
}
var10 = NEW_parser_nodes__AIssetAttrExpr(&type_parser_nodes__AIssetAttrExpr);
((void (*)(val*, val*, val*, val*))(var10->class->vft[COLOR_parser_prod__AIssetAttrExpr__init_aissetattrexpr]))(var10, var_tkwissetnode2, var_pexprnode3, var_tattridnode4) /* init_aissetattrexpr on <var10:AIssetAttrExpr>*/;
CHECK_NEW_parser_nodes__AIssetAttrExpr(var10);
var_pexprnode1 = var10;
var_node_list = var_pexprnode1;
var11 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction803> */
var12 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var11) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var12, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction803#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction803__action(val* self, val* p0) {
parser__ReduceAction803__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction805#action for (self: ReduceAction805, Parser) */
void parser__ReduceAction805__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28638);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28640);
exit(1);
}
var9 = NEW_parser_nodes__AAttrExpr(&type_parser_nodes__AAttrExpr);
((void (*)(val*, val*, val*))(var9->class->vft[COLOR_parser_prod__AAttrExpr__init_aattrexpr]))(var9, var_pexprnode2, var_tattridnode3) /* init_aattrexpr on <var9:AAttrExpr>*/;
CHECK_NEW_parser_nodes__AAttrExpr(var9);
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction805> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction805#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction805__action(val* self, val* p0) {
parser__ReduceAction805__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction806#action for (self: ReduceAction806, Parser) */
void parser__ReduceAction806__action(val* self, val* p0) {
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
CHECK_NEW_parser_nodes__AImplicitSelfExpr(var2);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28657);
exit(1);
}
var4 = NEW_parser_nodes__AAttrExpr(&type_parser_nodes__AAttrExpr);
((void (*)(val*, val*, val*))(var4->class->vft[COLOR_parser_prod__AAttrExpr__init_aattrexpr]))(var4, var_pexprnode2, var_tattridnode3) /* init_aattrexpr on <var4:AAttrExpr>*/;
CHECK_NEW_parser_nodes__AAttrExpr(var4);
var_pexprnode1 = var4;
var_node_list = var_pexprnode1;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction806> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction806#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction806__action(val* self, val* p0) {
parser__ReduceAction806__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction807#action for (self: ReduceAction807, Parser) */
void parser__ReduceAction807__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28677);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28679);
exit(1);
}
var10 = NEW_parser_nodes__AAttrExpr(&type_parser_nodes__AAttrExpr);
((void (*)(val*, val*, val*))(var10->class->vft[COLOR_parser_prod__AAttrExpr__init_aattrexpr]))(var10, var_pexprnode2, var_tattridnode3) /* init_aattrexpr on <var10:AAttrExpr>*/;
CHECK_NEW_parser_nodes__AAttrExpr(var10);
var_pexprnode1 = var10;
var_node_list = var_pexprnode1;
var11 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction807> */
var12 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var11) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var12, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction807#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction807__action(val* self, val* p0) {
parser__ReduceAction807__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction808#action for (self: ReduceAction808, Parser) */
void parser__ReduceAction808__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28700);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28702);
exit(1);
}
var11 = NEW_parser_nodes__AAttrExpr(&type_parser_nodes__AAttrExpr);
((void (*)(val*, val*, val*))(var11->class->vft[COLOR_parser_prod__AAttrExpr__init_aattrexpr]))(var11, var_pexprnode2, var_tattridnode3) /* init_aattrexpr on <var11:AAttrExpr>*/;
CHECK_NEW_parser_nodes__AAttrExpr(var11);
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction808> */
var13 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var12) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var13, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction808#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction808__action(val* self, val* p0) {
parser__ReduceAction808__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction810#action for (self: ReduceAction810, Parser) */
void parser__ReduceAction810__action(val* self, val* p0) {
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
CHECK_NEW_parser_nodes__AImplicitSelfExpr(var3);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28720);
exit(1);
}
var5 = NEW_parser_nodes__AAttrExpr(&type_parser_nodes__AAttrExpr);
((void (*)(val*, val*, val*))(var5->class->vft[COLOR_parser_prod__AAttrExpr__init_aattrexpr]))(var5, var_pexprnode2, var_tattridnode3) /* init_aattrexpr on <var5:AAttrExpr>*/;
CHECK_NEW_parser_nodes__AAttrExpr(var5);
var_pexprnode1 = var5;
var_node_list = var_pexprnode1;
var6 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction810> */
var7 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var6) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var7, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction810#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction810__action(val* self, val* p0) {
parser__ReduceAction810__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction811#action for (self: ReduceAction811, Parser) */
void parser__ReduceAction811__action(val* self, val* p0) {
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
CHECK_NEW_parser_nodes__AImplicitSelfExpr(var4);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28739);
exit(1);
}
var6 = NEW_parser_nodes__AAttrExpr(&type_parser_nodes__AAttrExpr);
((void (*)(val*, val*, val*))(var6->class->vft[COLOR_parser_prod__AAttrExpr__init_aattrexpr]))(var6, var_pexprnode2, var_tattridnode3) /* init_aattrexpr on <var6:AAttrExpr>*/;
CHECK_NEW_parser_nodes__AAttrExpr(var6);
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var7 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction811> */
var8 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var7) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var8, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction811#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction811__action(val* self, val* p0) {
parser__ReduceAction811__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction827#action for (self: ReduceAction827, Parser) */
void parser__ReduceAction827__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_pexprsnode3 /* var pexprsnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : ABraExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ABraExpr */;
long var9 /* : Int */;
long var10 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var3->class->vft[COLOR_array__Array__init]))(var3) /* init on <var3:Array[Object]>*/;
CHECK_NEW_array__Array(var3);
var_listnode4 = var3;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var4 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var4 = 0;
} else {
var4 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28757);
exit(1);
}
var_pexprsnode3 = var_nodearraylist2;
/* <var_pexprsnode3:nullable Object> isa nullable AExprs */
cltype6 = type_nullable_parser_nodes__AExprs.color;
idtype7 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= var_pexprsnode3->type->table_size) {
var5 = 0;
} else {
var5 = var_pexprsnode3->type->type_table[cltype6] == idtype7;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28759);
exit(1);
}
var8 = NEW_parser_nodes__ABraExpr(&type_parser_nodes__ABraExpr);
((void (*)(val*, val*, val*, val*))(var8->class->vft[COLOR_parser_prod__ABraExpr__init_abraexpr]))(var8, var_pexprnode2, var_pexprsnode3, var_listnode4) /* init_abraexpr on <var8:ABraExpr>*/;
CHECK_NEW_parser_nodes__ABraExpr(var8);
var_pexprnode1 = var8;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction827> */
var10 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var9) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var10, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction827#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction827__action(val* self, val* p0) {
parser__ReduceAction827__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction828#action for (self: ReduceAction828, Parser) */
void parser__ReduceAction828__action(val* self, val* p0) {
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
val* var_tkwnewnode2 /* var tkwnewnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_ptypenode3 /* var ptypenode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_tidnode4 /* var tidnode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_pexprsnode5 /* var pexprsnode5: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : ANewExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ANewExpr */;
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
var_tkwnewnode2 = var_nodearraylist1;
/* <var_tkwnewnode2:nullable Object> isa nullable TKwnew */
cltype = type_nullable_parser_nodes__TKwnew.color;
idtype = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_tkwnewnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_tkwnewnode2->type->type_table[cltype] == idtype;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28782);
exit(1);
}
var_ptypenode3 = var_nodearraylist3;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype10 = type_nullable_parser_nodes__AType.color;
idtype11 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_ptypenode3->type->table_size) {
var9 = 0;
} else {
var9 = var_ptypenode3->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28784);
exit(1);
}
var_tidnode4 = var_nodearraylist6;
/* <var_tidnode4:nullable Object> isa nullable TId */
cltype13 = type_nullable_parser_nodes__TId.color;
idtype14 = type_nullable_parser_nodes__TId.id;
if(var_tidnode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_tidnode4->type->table_size) {
var12 = 0;
} else {
var12 = var_tidnode4->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28786);
exit(1);
}
var_pexprsnode5 = var_nodearraylist7;
/* <var_pexprsnode5:nullable Object> isa nullable AExprs */
cltype16 = type_nullable_parser_nodes__AExprs.color;
idtype17 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_pexprsnode5->type->table_size) {
var15 = 0;
} else {
var15 = var_pexprsnode5->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28788);
exit(1);
}
var18 = NEW_parser_nodes__ANewExpr(&type_parser_nodes__ANewExpr);
((void (*)(val*, val*, val*, val*, val*))(var18->class->vft[COLOR_parser_prod__ANewExpr__init_anewexpr]))(var18, var_tkwnewnode2, var_ptypenode3, var_tidnode4, var_pexprsnode5) /* init_anewexpr on <var18:ANewExpr>*/;
CHECK_NEW_parser_nodes__ANewExpr(var18);
var_pexprnode1 = var18;
var_node_list = var_pexprnode1;
var19 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction828> */
var20 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var19) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var20, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction828#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction828__action(val* self, val* p0) {
parser__ReduceAction828__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction829#action for (self: ReduceAction829, Parser) */
void parser__ReduceAction829__action(val* self, val* p0) {
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
val* var_tkwnewnode2 /* var tkwnewnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_ptypenode3 /* var ptypenode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_tidnode4 /* var tidnode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_pexprsnode5 /* var pexprsnode5: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : ANewExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ANewExpr */;
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
var_tkwnewnode2 = var_nodearraylist1;
/* <var_tkwnewnode2:nullable Object> isa nullable TKwnew */
cltype = type_nullable_parser_nodes__TKwnew.color;
idtype = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= var_tkwnewnode2->type->table_size) {
var9 = 0;
} else {
var9 = var_tkwnewnode2->type->type_table[cltype] == idtype;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28813);
exit(1);
}
var_ptypenode3 = var_nodearraylist3;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype11 = type_nullable_parser_nodes__AType.color;
idtype12 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_ptypenode3->type->table_size) {
var10 = 0;
} else {
var10 = var_ptypenode3->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28815);
exit(1);
}
var_tidnode4 = var_nodearraylist7;
/* <var_tidnode4:nullable Object> isa nullable TId */
cltype14 = type_nullable_parser_nodes__TId.color;
idtype15 = type_nullable_parser_nodes__TId.id;
if(var_tidnode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_tidnode4->type->table_size) {
var13 = 0;
} else {
var13 = var_tidnode4->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28817);
exit(1);
}
var_pexprsnode5 = var_nodearraylist8;
/* <var_pexprsnode5:nullable Object> isa nullable AExprs */
cltype17 = type_nullable_parser_nodes__AExprs.color;
idtype18 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode5 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_pexprsnode5->type->table_size) {
var16 = 0;
} else {
var16 = var_pexprsnode5->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28819);
exit(1);
}
var19 = NEW_parser_nodes__ANewExpr(&type_parser_nodes__ANewExpr);
((void (*)(val*, val*, val*, val*, val*))(var19->class->vft[COLOR_parser_prod__ANewExpr__init_anewexpr]))(var19, var_tkwnewnode2, var_ptypenode3, var_tidnode4, var_pexprsnode5) /* init_anewexpr on <var19:ANewExpr>*/;
CHECK_NEW_parser_nodes__ANewExpr(var19);
var_pexprnode1 = var19;
var_node_list = var_pexprnode1;
var20 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction829> */
var21 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var20) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var21, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction829#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction829__action(val* self, val* p0) {
parser__ReduceAction829__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction830#action for (self: ReduceAction830, Parser) */
void parser__ReduceAction830__action(val* self, val* p0) {
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
val* var_tkwnewnode2 /* var tkwnewnode2: nullable Object */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var_ptypenode3 /* var ptypenode3: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_tidnode4 /* var tidnode4: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_pexprsnode5 /* var pexprsnode5: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var20 /* : ANewExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ANewExpr */;
long var21 /* : Int */;
long var22 /* : Int */;
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
var_tkwnewnode2 = var_nodearraylist1;
/* <var_tkwnewnode2:nullable Object> isa nullable TKwnew */
cltype = type_nullable_parser_nodes__TKwnew.color;
idtype = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode2 == NULL) {
var10 = 1;
} else {
if(cltype >= var_tkwnewnode2->type->table_size) {
var10 = 0;
} else {
var10 = var_tkwnewnode2->type->type_table[cltype] == idtype;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28845);
exit(1);
}
var_ptypenode3 = var_nodearraylist3;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype12 = type_nullable_parser_nodes__AType.color;
idtype13 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode3 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_ptypenode3->type->table_size) {
var11 = 0;
} else {
var11 = var_ptypenode3->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28847);
exit(1);
}
var_tidnode4 = var_nodearraylist8;
/* <var_tidnode4:nullable Object> isa nullable TId */
cltype15 = type_nullable_parser_nodes__TId.color;
idtype16 = type_nullable_parser_nodes__TId.id;
if(var_tidnode4 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_tidnode4->type->table_size) {
var14 = 0;
} else {
var14 = var_tidnode4->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28849);
exit(1);
}
var_pexprsnode5 = var_nodearraylist9;
/* <var_pexprsnode5:nullable Object> isa nullable AExprs */
cltype18 = type_nullable_parser_nodes__AExprs.color;
idtype19 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode5 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_pexprsnode5->type->table_size) {
var17 = 0;
} else {
var17 = var_pexprsnode5->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28851);
exit(1);
}
var20 = NEW_parser_nodes__ANewExpr(&type_parser_nodes__ANewExpr);
((void (*)(val*, val*, val*, val*, val*))(var20->class->vft[COLOR_parser_prod__ANewExpr__init_anewexpr]))(var20, var_tkwnewnode2, var_ptypenode3, var_tidnode4, var_pexprsnode5) /* init_anewexpr on <var20:ANewExpr>*/;
CHECK_NEW_parser_nodes__ANewExpr(var20);
var_pexprnode1 = var20;
var_node_list = var_pexprnode1;
var21 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction830> */
var22 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var21) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var22, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction830#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction830__action(val* self, val* p0) {
parser__ReduceAction830__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction832#action for (self: ReduceAction832, Parser) */
void parser__ReduceAction832__action(val* self, val* p0) {
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
val* var_tobranode2 /* var tobranode2: nullable Object */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_tcbranode5 /* var tcbranode5: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var20 /* : ACrangeExpr */;
val* var21 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable ACrangeExpr */;
long var22 /* : Int */;
long var23 /* : Int */;
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
var_tobranode2 = var_nodearraylist1;
/* <var_tobranode2:nullable Object> isa nullable TObra */
cltype = type_nullable_parser_nodes__TObra.color;
idtype = type_nullable_parser_nodes__TObra.id;
if(var_tobranode2 == NULL) {
var10 = 1;
} else {
if(cltype >= var_tobranode2->type->table_size) {
var10 = 0;
} else {
var10 = var_tobranode2->type->type_table[cltype] == idtype;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28877);
exit(1);
}
var_pexprnode3 = var_nodearraylist3;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype12 = type_nullable_parser_nodes__AExpr.color;
idtype13 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode3 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_pexprnode3->type->table_size) {
var11 = 0;
} else {
var11 = var_pexprnode3->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28879);
exit(1);
}
var_pexprnode4 = var_nodearraylist7;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype15 = type_nullable_parser_nodes__AExpr.color;
idtype16 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode4 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_pexprnode4->type->table_size) {
var14 = 0;
} else {
var14 = var_pexprnode4->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28881);
exit(1);
}
var_tcbranode5 = var_nodearraylist9;
/* <var_tcbranode5:nullable Object> isa nullable TCbra */
cltype18 = type_nullable_parser_nodes__TCbra.color;
idtype19 = type_nullable_parser_nodes__TCbra.id;
if(var_tcbranode5 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tcbranode5->type->table_size) {
var17 = 0;
} else {
var17 = var_tcbranode5->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28883);
exit(1);
}
var20 = NEW_parser_nodes__ACrangeExpr(&type_parser_nodes__ACrangeExpr);
var21 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*))(var20->class->vft[COLOR_parser_prod__ACrangeExpr__init_acrangeexpr]))(var20, var_tobranode2, var_pexprnode3, var_pexprnode4, var_tcbranode5, var21) /* init_acrangeexpr on <var20:ACrangeExpr>*/;
CHECK_NEW_parser_nodes__ACrangeExpr(var20);
var_pexprnode1 = var20;
var_node_list = var_pexprnode1;
var22 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction832> */
var23 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var22) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var23, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction832#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction832__action(val* self, val* p0) {
parser__ReduceAction832__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction833#action for (self: ReduceAction833, Parser) */
void parser__ReduceAction833__action(val* self, val* p0) {
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
val* var_tobranode2 /* var tobranode2: nullable Object */;
short int var11 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_tcbranode5 /* var tcbranode5: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_pannotationsnode6 /* var pannotationsnode6: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var24 /* : ACrangeExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACrangeExpr */;
long var25 /* : Int */;
long var26 /* : Int */;
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
var_tobranode2 = var_nodearraylist1;
/* <var_tobranode2:nullable Object> isa nullable TObra */
cltype = type_nullable_parser_nodes__TObra.color;
idtype = type_nullable_parser_nodes__TObra.id;
if(var_tobranode2 == NULL) {
var11 = 1;
} else {
if(cltype >= var_tobranode2->type->table_size) {
var11 = 0;
} else {
var11 = var_tobranode2->type->type_table[cltype] == idtype;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28911);
exit(1);
}
var_pexprnode3 = var_nodearraylist3;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype13 = type_nullable_parser_nodes__AExpr.color;
idtype14 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode3 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_pexprnode3->type->table_size) {
var12 = 0;
} else {
var12 = var_pexprnode3->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28913);
exit(1);
}
var_pexprnode4 = var_nodearraylist7;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype16 = type_nullable_parser_nodes__AExpr.color;
idtype17 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode4 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_pexprnode4->type->table_size) {
var15 = 0;
} else {
var15 = var_pexprnode4->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28915);
exit(1);
}
var_tcbranode5 = var_nodearraylist9;
/* <var_tcbranode5:nullable Object> isa nullable TCbra */
cltype19 = type_nullable_parser_nodes__TCbra.color;
idtype20 = type_nullable_parser_nodes__TCbra.id;
if(var_tcbranode5 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_tcbranode5->type->table_size) {
var18 = 0;
} else {
var18 = var_tcbranode5->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28917);
exit(1);
}
var_pannotationsnode6 = var_nodearraylist10;
/* <var_pannotationsnode6:nullable Object> isa nullable AAnnotations */
cltype22 = type_nullable_parser_nodes__AAnnotations.color;
idtype23 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode6 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_pannotationsnode6->type->table_size) {
var21 = 0;
} else {
var21 = var_pannotationsnode6->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28919);
exit(1);
}
var24 = NEW_parser_nodes__ACrangeExpr(&type_parser_nodes__ACrangeExpr);
((void (*)(val*, val*, val*, val*, val*, val*))(var24->class->vft[COLOR_parser_prod__ACrangeExpr__init_acrangeexpr]))(var24, var_tobranode2, var_pexprnode3, var_pexprnode4, var_tcbranode5, var_pannotationsnode6) /* init_acrangeexpr on <var24:ACrangeExpr>*/;
CHECK_NEW_parser_nodes__ACrangeExpr(var24);
var_pexprnode1 = var24;
var_node_list = var_pexprnode1;
var25 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction833> */
var26 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var25) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var26, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction833#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction833__action(val* self, val* p0) {
parser__ReduceAction833__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction834#action for (self: ReduceAction834, Parser) */
void parser__ReduceAction834__action(val* self, val* p0) {
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
val* var_tobranode2 /* var tobranode2: nullable Object */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_tobranode5 /* var tobranode5: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var20 /* : AOrangeExpr */;
val* var21 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable AOrangeExpr */;
long var22 /* : Int */;
long var23 /* : Int */;
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
var_tobranode2 = var_nodearraylist1;
/* <var_tobranode2:nullable Object> isa nullable TObra */
cltype = type_nullable_parser_nodes__TObra.color;
idtype = type_nullable_parser_nodes__TObra.id;
if(var_tobranode2 == NULL) {
var10 = 1;
} else {
if(cltype >= var_tobranode2->type->table_size) {
var10 = 0;
} else {
var10 = var_tobranode2->type->type_table[cltype] == idtype;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28946);
exit(1);
}
var_pexprnode3 = var_nodearraylist3;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype12 = type_nullable_parser_nodes__AExpr.color;
idtype13 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode3 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_pexprnode3->type->table_size) {
var11 = 0;
} else {
var11 = var_pexprnode3->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28948);
exit(1);
}
var_pexprnode4 = var_nodearraylist7;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype15 = type_nullable_parser_nodes__AExpr.color;
idtype16 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode4 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_pexprnode4->type->table_size) {
var14 = 0;
} else {
var14 = var_pexprnode4->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28950);
exit(1);
}
var_tobranode5 = var_nodearraylist9;
/* <var_tobranode5:nullable Object> isa nullable TObra */
cltype18 = type_nullable_parser_nodes__TObra.color;
idtype19 = type_nullable_parser_nodes__TObra.id;
if(var_tobranode5 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tobranode5->type->table_size) {
var17 = 0;
} else {
var17 = var_tobranode5->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28952);
exit(1);
}
var20 = NEW_parser_nodes__AOrangeExpr(&type_parser_nodes__AOrangeExpr);
var21 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*))(var20->class->vft[COLOR_parser_prod__AOrangeExpr__init_aorangeexpr]))(var20, var_tobranode2, var_pexprnode3, var_pexprnode4, var_tobranode5, var21) /* init_aorangeexpr on <var20:AOrangeExpr>*/;
CHECK_NEW_parser_nodes__AOrangeExpr(var20);
var_pexprnode1 = var20;
var_node_list = var_pexprnode1;
var22 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction834> */
var23 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var22) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var23, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction834#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction834__action(val* self, val* p0) {
parser__ReduceAction834__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction835#action for (self: ReduceAction835, Parser) */
void parser__ReduceAction835__action(val* self, val* p0) {
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
val* var_tobranode2 /* var tobranode2: nullable Object */;
short int var11 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_tobranode5 /* var tobranode5: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_pannotationsnode6 /* var pannotationsnode6: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var24 /* : AOrangeExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AOrangeExpr */;
long var25 /* : Int */;
long var26 /* : Int */;
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
var_tobranode2 = var_nodearraylist1;
/* <var_tobranode2:nullable Object> isa nullable TObra */
cltype = type_nullable_parser_nodes__TObra.color;
idtype = type_nullable_parser_nodes__TObra.id;
if(var_tobranode2 == NULL) {
var11 = 1;
} else {
if(cltype >= var_tobranode2->type->table_size) {
var11 = 0;
} else {
var11 = var_tobranode2->type->type_table[cltype] == idtype;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28980);
exit(1);
}
var_pexprnode3 = var_nodearraylist3;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype13 = type_nullable_parser_nodes__AExpr.color;
idtype14 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode3 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_pexprnode3->type->table_size) {
var12 = 0;
} else {
var12 = var_pexprnode3->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28982);
exit(1);
}
var_pexprnode4 = var_nodearraylist7;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype16 = type_nullable_parser_nodes__AExpr.color;
idtype17 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode4 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_pexprnode4->type->table_size) {
var15 = 0;
} else {
var15 = var_pexprnode4->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28984);
exit(1);
}
var_tobranode5 = var_nodearraylist9;
/* <var_tobranode5:nullable Object> isa nullable TObra */
cltype19 = type_nullable_parser_nodes__TObra.color;
idtype20 = type_nullable_parser_nodes__TObra.id;
if(var_tobranode5 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_tobranode5->type->table_size) {
var18 = 0;
} else {
var18 = var_tobranode5->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28986);
exit(1);
}
var_pannotationsnode6 = var_nodearraylist10;
/* <var_pannotationsnode6:nullable Object> isa nullable AAnnotations */
cltype22 = type_nullable_parser_nodes__AAnnotations.color;
idtype23 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode6 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_pannotationsnode6->type->table_size) {
var21 = 0;
} else {
var21 = var_pannotationsnode6->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 28988);
exit(1);
}
var24 = NEW_parser_nodes__AOrangeExpr(&type_parser_nodes__AOrangeExpr);
((void (*)(val*, val*, val*, val*, val*, val*))(var24->class->vft[COLOR_parser_prod__AOrangeExpr__init_aorangeexpr]))(var24, var_tobranode2, var_pexprnode3, var_pexprnode4, var_tobranode5, var_pannotationsnode6) /* init_aorangeexpr on <var24:AOrangeExpr>*/;
CHECK_NEW_parser_nodes__AOrangeExpr(var24);
var_pexprnode1 = var24;
var_node_list = var_pexprnode1;
var25 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction835> */
var26 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var25) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var26, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction835#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction835__action(val* self, val* p0) {
parser__ReduceAction835__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction836#action for (self: ReduceAction836, Parser) */
void parser__ReduceAction836__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprsnode2 /* var pexprsnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AArrayExpr */;
val* var4 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable AArrayExpr */;
long var5 /* : Int */;
long var6 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var_pexprsnode2 = var_nodearraylist1;
/* <var_pexprsnode2:nullable Object> isa nullable AExprs */
cltype = type_nullable_parser_nodes__AExprs.color;
idtype = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_pexprsnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_pexprsnode2->type->type_table[cltype] == idtype;
}
}
if (!var2) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29007);
exit(1);
}
var3 = NEW_parser_nodes__AArrayExpr(&type_parser_nodes__AArrayExpr);
var4 = NULL;
((void (*)(val*, val*, val*))(var3->class->vft[COLOR_parser_prod__AArrayExpr__init_aarrayexpr]))(var3, var_pexprsnode2, var4) /* init_aarrayexpr on <var3:AArrayExpr>*/;
CHECK_NEW_parser_nodes__AArrayExpr(var3);
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction836> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction836#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction836__action(val* self, val* p0) {
parser__ReduceAction836__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction837#action for (self: ReduceAction837, Parser) */
void parser__ReduceAction837__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprsnode2 /* var pexprsnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode3 /* var pannotationsnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : AArrayExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AArrayExpr */;
long var8 /* : Int */;
long var9 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var_pexprsnode2 = var_nodearraylist1;
/* <var_pexprsnode2:nullable Object> isa nullable AExprs */
cltype = type_nullable_parser_nodes__AExprs.color;
idtype = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_pexprsnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_pexprsnode2->type->type_table[cltype] == idtype;
}
}
if (!var3) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29024);
exit(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype5 = type_nullable_parser_nodes__AAnnotations.color;
idtype6 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_pannotationsnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_pannotationsnode3->type->type_table[cltype5] == idtype6;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29026);
exit(1);
}
var7 = NEW_parser_nodes__AArrayExpr(&type_parser_nodes__AArrayExpr);
((void (*)(val*, val*, val*))(var7->class->vft[COLOR_parser_prod__AArrayExpr__init_aarrayexpr]))(var7, var_pexprsnode2, var_pannotationsnode3) /* init_aarrayexpr on <var7:AArrayExpr>*/;
CHECK_NEW_parser_nodes__AArrayExpr(var7);
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction837> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction837#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction837__action(val* self, val* p0) {
parser__ReduceAction837__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction838#action for (self: ReduceAction838, Parser) */
void parser__ReduceAction838__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwselfnode2 /* var tkwselfnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : ASelfExpr */;
val* var4 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable ASelfExpr */;
long var5 /* : Int */;
long var6 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var_tkwselfnode2 = var_nodearraylist1;
/* <var_tkwselfnode2:nullable Object> isa nullable TKwself */
cltype = type_nullable_parser_nodes__TKwself.color;
idtype = type_nullable_parser_nodes__TKwself.id;
if(var_tkwselfnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tkwselfnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tkwselfnode2->type->type_table[cltype] == idtype;
}
}
if (!var2) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29042);
exit(1);
}
var3 = NEW_parser_nodes__ASelfExpr(&type_parser_nodes__ASelfExpr);
var4 = NULL;
((void (*)(val*, val*, val*))(var3->class->vft[COLOR_parser_prod__ASelfExpr__init_aselfexpr]))(var3, var_tkwselfnode2, var4) /* init_aselfexpr on <var3:ASelfExpr>*/;
CHECK_NEW_parser_nodes__ASelfExpr(var3);
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction838> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction838#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction838__action(val* self, val* p0) {
parser__ReduceAction838__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction839#action for (self: ReduceAction839, Parser) */
void parser__ReduceAction839__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwselfnode2 /* var tkwselfnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode3 /* var pannotationsnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : ASelfExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ASelfExpr */;
long var8 /* : Int */;
long var9 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var_tkwselfnode2 = var_nodearraylist1;
/* <var_tkwselfnode2:nullable Object> isa nullable TKwself */
cltype = type_nullable_parser_nodes__TKwself.color;
idtype = type_nullable_parser_nodes__TKwself.id;
if(var_tkwselfnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tkwselfnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tkwselfnode2->type->type_table[cltype] == idtype;
}
}
if (!var3) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29059);
exit(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype5 = type_nullable_parser_nodes__AAnnotations.color;
idtype6 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_pannotationsnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_pannotationsnode3->type->type_table[cltype5] == idtype6;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29061);
exit(1);
}
var7 = NEW_parser_nodes__ASelfExpr(&type_parser_nodes__ASelfExpr);
((void (*)(val*, val*, val*))(var7->class->vft[COLOR_parser_prod__ASelfExpr__init_aselfexpr]))(var7, var_tkwselfnode2, var_pannotationsnode3) /* init_aselfexpr on <var7:ASelfExpr>*/;
CHECK_NEW_parser_nodes__ASelfExpr(var7);
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction839> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction839#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction839__action(val* self, val* p0) {
parser__ReduceAction839__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction840#action for (self: ReduceAction840, Parser) */
void parser__ReduceAction840__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwtruenode2 /* var tkwtruenode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : ATrueExpr */;
val* var4 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable ATrueExpr */;
long var5 /* : Int */;
long var6 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var_tkwtruenode2 = var_nodearraylist1;
/* <var_tkwtruenode2:nullable Object> isa nullable TKwtrue */
cltype = type_nullable_parser_nodes__TKwtrue.color;
idtype = type_nullable_parser_nodes__TKwtrue.id;
if(var_tkwtruenode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tkwtruenode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tkwtruenode2->type->type_table[cltype] == idtype;
}
}
if (!var2) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29077);
exit(1);
}
var3 = NEW_parser_nodes__ATrueExpr(&type_parser_nodes__ATrueExpr);
var4 = NULL;
((void (*)(val*, val*, val*))(var3->class->vft[COLOR_parser_prod__ATrueExpr__init_atrueexpr]))(var3, var_tkwtruenode2, var4) /* init_atrueexpr on <var3:ATrueExpr>*/;
CHECK_NEW_parser_nodes__ATrueExpr(var3);
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction840> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction840#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction840__action(val* self, val* p0) {
parser__ReduceAction840__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction841#action for (self: ReduceAction841, Parser) */
void parser__ReduceAction841__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwtruenode2 /* var tkwtruenode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode3 /* var pannotationsnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : ATrueExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ATrueExpr */;
long var8 /* : Int */;
long var9 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var_tkwtruenode2 = var_nodearraylist1;
/* <var_tkwtruenode2:nullable Object> isa nullable TKwtrue */
cltype = type_nullable_parser_nodes__TKwtrue.color;
idtype = type_nullable_parser_nodes__TKwtrue.id;
if(var_tkwtruenode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tkwtruenode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tkwtruenode2->type->type_table[cltype] == idtype;
}
}
if (!var3) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29094);
exit(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype5 = type_nullable_parser_nodes__AAnnotations.color;
idtype6 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_pannotationsnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_pannotationsnode3->type->type_table[cltype5] == idtype6;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29096);
exit(1);
}
var7 = NEW_parser_nodes__ATrueExpr(&type_parser_nodes__ATrueExpr);
((void (*)(val*, val*, val*))(var7->class->vft[COLOR_parser_prod__ATrueExpr__init_atrueexpr]))(var7, var_tkwtruenode2, var_pannotationsnode3) /* init_atrueexpr on <var7:ATrueExpr>*/;
CHECK_NEW_parser_nodes__ATrueExpr(var7);
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction841> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction841#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction841__action(val* self, val* p0) {
parser__ReduceAction841__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction842#action for (self: ReduceAction842, Parser) */
void parser__ReduceAction842__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwfalsenode2 /* var tkwfalsenode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AFalseExpr */;
val* var4 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable AFalseExpr */;
long var5 /* : Int */;
long var6 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var_tkwfalsenode2 = var_nodearraylist1;
/* <var_tkwfalsenode2:nullable Object> isa nullable TKwfalse */
cltype = type_nullable_parser_nodes__TKwfalse.color;
idtype = type_nullable_parser_nodes__TKwfalse.id;
if(var_tkwfalsenode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tkwfalsenode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tkwfalsenode2->type->type_table[cltype] == idtype;
}
}
if (!var2) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29112);
exit(1);
}
var3 = NEW_parser_nodes__AFalseExpr(&type_parser_nodes__AFalseExpr);
var4 = NULL;
((void (*)(val*, val*, val*))(var3->class->vft[COLOR_parser_prod__AFalseExpr__init_afalseexpr]))(var3, var_tkwfalsenode2, var4) /* init_afalseexpr on <var3:AFalseExpr>*/;
CHECK_NEW_parser_nodes__AFalseExpr(var3);
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction842> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction842#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction842__action(val* self, val* p0) {
parser__ReduceAction842__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction843#action for (self: ReduceAction843, Parser) */
void parser__ReduceAction843__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwfalsenode2 /* var tkwfalsenode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode3 /* var pannotationsnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : AFalseExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AFalseExpr */;
long var8 /* : Int */;
long var9 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var_tkwfalsenode2 = var_nodearraylist1;
/* <var_tkwfalsenode2:nullable Object> isa nullable TKwfalse */
cltype = type_nullable_parser_nodes__TKwfalse.color;
idtype = type_nullable_parser_nodes__TKwfalse.id;
if(var_tkwfalsenode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tkwfalsenode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tkwfalsenode2->type->type_table[cltype] == idtype;
}
}
if (!var3) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29129);
exit(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype5 = type_nullable_parser_nodes__AAnnotations.color;
idtype6 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_pannotationsnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_pannotationsnode3->type->type_table[cltype5] == idtype6;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29131);
exit(1);
}
var7 = NEW_parser_nodes__AFalseExpr(&type_parser_nodes__AFalseExpr);
((void (*)(val*, val*, val*))(var7->class->vft[COLOR_parser_prod__AFalseExpr__init_afalseexpr]))(var7, var_tkwfalsenode2, var_pannotationsnode3) /* init_afalseexpr on <var7:AFalseExpr>*/;
CHECK_NEW_parser_nodes__AFalseExpr(var7);
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction843> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction843#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction843__action(val* self, val* p0) {
parser__ReduceAction843__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction844#action for (self: ReduceAction844, Parser) */
void parser__ReduceAction844__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwnullnode2 /* var tkwnullnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : ANullExpr */;
val* var4 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable ANullExpr */;
long var5 /* : Int */;
long var6 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var_tkwnullnode2 = var_nodearraylist1;
/* <var_tkwnullnode2:nullable Object> isa nullable TKwnull */
cltype = type_nullable_parser_nodes__TKwnull.color;
idtype = type_nullable_parser_nodes__TKwnull.id;
if(var_tkwnullnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tkwnullnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tkwnullnode2->type->type_table[cltype] == idtype;
}
}
if (!var2) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29147);
exit(1);
}
var3 = NEW_parser_nodes__ANullExpr(&type_parser_nodes__ANullExpr);
var4 = NULL;
((void (*)(val*, val*, val*))(var3->class->vft[COLOR_parser_prod__ANullExpr__init_anullexpr]))(var3, var_tkwnullnode2, var4) /* init_anullexpr on <var3:ANullExpr>*/;
CHECK_NEW_parser_nodes__ANullExpr(var3);
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction844> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction844#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction844__action(val* self, val* p0) {
parser__ReduceAction844__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction845#action for (self: ReduceAction845, Parser) */
void parser__ReduceAction845__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwnullnode2 /* var tkwnullnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode3 /* var pannotationsnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : ANullExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ANullExpr */;
long var8 /* : Int */;
long var9 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var_tkwnullnode2 = var_nodearraylist1;
/* <var_tkwnullnode2:nullable Object> isa nullable TKwnull */
cltype = type_nullable_parser_nodes__TKwnull.color;
idtype = type_nullable_parser_nodes__TKwnull.id;
if(var_tkwnullnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tkwnullnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tkwnullnode2->type->type_table[cltype] == idtype;
}
}
if (!var3) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29164);
exit(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype5 = type_nullable_parser_nodes__AAnnotations.color;
idtype6 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_pannotationsnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_pannotationsnode3->type->type_table[cltype5] == idtype6;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29166);
exit(1);
}
var7 = NEW_parser_nodes__ANullExpr(&type_parser_nodes__ANullExpr);
((void (*)(val*, val*, val*))(var7->class->vft[COLOR_parser_prod__ANullExpr__init_anullexpr]))(var7, var_tkwnullnode2, var_pannotationsnode3) /* init_anullexpr on <var7:ANullExpr>*/;
CHECK_NEW_parser_nodes__ANullExpr(var7);
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction845> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction845#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction845__action(val* self, val* p0) {
parser__ReduceAction845__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction846#action for (self: ReduceAction846, Parser) */
void parser__ReduceAction846__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tnumbernode2 /* var tnumbernode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AIntExpr */;
val* var4 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable AIntExpr */;
long var5 /* : Int */;
long var6 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var_tnumbernode2 = var_nodearraylist1;
/* <var_tnumbernode2:nullable Object> isa nullable TNumber */
cltype = type_nullable_parser_nodes__TNumber.color;
idtype = type_nullable_parser_nodes__TNumber.id;
if(var_tnumbernode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tnumbernode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tnumbernode2->type->type_table[cltype] == idtype;
}
}
if (!var2) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29182);
exit(1);
}
var3 = NEW_parser_nodes__AIntExpr(&type_parser_nodes__AIntExpr);
var4 = NULL;
((void (*)(val*, val*, val*))(var3->class->vft[COLOR_parser_prod__AIntExpr__init_aintexpr]))(var3, var_tnumbernode2, var4) /* init_aintexpr on <var3:AIntExpr>*/;
CHECK_NEW_parser_nodes__AIntExpr(var3);
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction846> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction846#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction846__action(val* self, val* p0) {
parser__ReduceAction846__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction847#action for (self: ReduceAction847, Parser) */
void parser__ReduceAction847__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tnumbernode2 /* var tnumbernode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode3 /* var pannotationsnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : AIntExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AIntExpr */;
long var8 /* : Int */;
long var9 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var_tnumbernode2 = var_nodearraylist1;
/* <var_tnumbernode2:nullable Object> isa nullable TNumber */
cltype = type_nullable_parser_nodes__TNumber.color;
idtype = type_nullable_parser_nodes__TNumber.id;
if(var_tnumbernode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tnumbernode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tnumbernode2->type->type_table[cltype] == idtype;
}
}
if (!var3) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29199);
exit(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype5 = type_nullable_parser_nodes__AAnnotations.color;
idtype6 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_pannotationsnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_pannotationsnode3->type->type_table[cltype5] == idtype6;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29201);
exit(1);
}
var7 = NEW_parser_nodes__AIntExpr(&type_parser_nodes__AIntExpr);
((void (*)(val*, val*, val*))(var7->class->vft[COLOR_parser_prod__AIntExpr__init_aintexpr]))(var7, var_tnumbernode2, var_pannotationsnode3) /* init_aintexpr on <var7:AIntExpr>*/;
CHECK_NEW_parser_nodes__AIntExpr(var7);
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction847> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction847#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction847__action(val* self, val* p0) {
parser__ReduceAction847__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction848#action for (self: ReduceAction848, Parser) */
void parser__ReduceAction848__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tfloatnode2 /* var tfloatnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AFloatExpr */;
val* var4 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable AFloatExpr */;
long var5 /* : Int */;
long var6 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var_tfloatnode2 = var_nodearraylist1;
/* <var_tfloatnode2:nullable Object> isa nullable TFloat */
cltype = type_nullable_parser_nodes__TFloat.color;
idtype = type_nullable_parser_nodes__TFloat.id;
if(var_tfloatnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tfloatnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tfloatnode2->type->type_table[cltype] == idtype;
}
}
if (!var2) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29217);
exit(1);
}
var3 = NEW_parser_nodes__AFloatExpr(&type_parser_nodes__AFloatExpr);
var4 = NULL;
((void (*)(val*, val*, val*))(var3->class->vft[COLOR_parser_prod__AFloatExpr__init_afloatexpr]))(var3, var_tfloatnode2, var4) /* init_afloatexpr on <var3:AFloatExpr>*/;
CHECK_NEW_parser_nodes__AFloatExpr(var3);
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction848> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction848#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction848__action(val* self, val* p0) {
parser__ReduceAction848__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction849#action for (self: ReduceAction849, Parser) */
void parser__ReduceAction849__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tfloatnode2 /* var tfloatnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode3 /* var pannotationsnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : AFloatExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AFloatExpr */;
long var8 /* : Int */;
long var9 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var_tfloatnode2 = var_nodearraylist1;
/* <var_tfloatnode2:nullable Object> isa nullable TFloat */
cltype = type_nullable_parser_nodes__TFloat.color;
idtype = type_nullable_parser_nodes__TFloat.id;
if(var_tfloatnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tfloatnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tfloatnode2->type->type_table[cltype] == idtype;
}
}
if (!var3) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29234);
exit(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype5 = type_nullable_parser_nodes__AAnnotations.color;
idtype6 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_pannotationsnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_pannotationsnode3->type->type_table[cltype5] == idtype6;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29236);
exit(1);
}
var7 = NEW_parser_nodes__AFloatExpr(&type_parser_nodes__AFloatExpr);
((void (*)(val*, val*, val*))(var7->class->vft[COLOR_parser_prod__AFloatExpr__init_afloatexpr]))(var7, var_tfloatnode2, var_pannotationsnode3) /* init_afloatexpr on <var7:AFloatExpr>*/;
CHECK_NEW_parser_nodes__AFloatExpr(var7);
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction849> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction849#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction849__action(val* self, val* p0) {
parser__ReduceAction849__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction850#action for (self: ReduceAction850, Parser) */
void parser__ReduceAction850__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tcharnode2 /* var tcharnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : ACharExpr */;
val* var4 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable ACharExpr */;
long var5 /* : Int */;
long var6 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var_tcharnode2 = var_nodearraylist1;
/* <var_tcharnode2:nullable Object> isa nullable TChar */
cltype = type_nullable_parser_nodes__TChar.color;
idtype = type_nullable_parser_nodes__TChar.id;
if(var_tcharnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tcharnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tcharnode2->type->type_table[cltype] == idtype;
}
}
if (!var2) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29252);
exit(1);
}
var3 = NEW_parser_nodes__ACharExpr(&type_parser_nodes__ACharExpr);
var4 = NULL;
((void (*)(val*, val*, val*))(var3->class->vft[COLOR_parser_prod__ACharExpr__init_acharexpr]))(var3, var_tcharnode2, var4) /* init_acharexpr on <var3:ACharExpr>*/;
CHECK_NEW_parser_nodes__ACharExpr(var3);
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction850> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction850#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction850__action(val* self, val* p0) {
parser__ReduceAction850__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction851#action for (self: ReduceAction851, Parser) */
void parser__ReduceAction851__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tcharnode2 /* var tcharnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode3 /* var pannotationsnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : ACharExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACharExpr */;
long var8 /* : Int */;
long var9 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var_tcharnode2 = var_nodearraylist1;
/* <var_tcharnode2:nullable Object> isa nullable TChar */
cltype = type_nullable_parser_nodes__TChar.color;
idtype = type_nullable_parser_nodes__TChar.id;
if(var_tcharnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tcharnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tcharnode2->type->type_table[cltype] == idtype;
}
}
if (!var3) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29269);
exit(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype5 = type_nullable_parser_nodes__AAnnotations.color;
idtype6 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_pannotationsnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_pannotationsnode3->type->type_table[cltype5] == idtype6;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29271);
exit(1);
}
var7 = NEW_parser_nodes__ACharExpr(&type_parser_nodes__ACharExpr);
((void (*)(val*, val*, val*))(var7->class->vft[COLOR_parser_prod__ACharExpr__init_acharexpr]))(var7, var_tcharnode2, var_pannotationsnode3) /* init_acharexpr on <var7:ACharExpr>*/;
CHECK_NEW_parser_nodes__ACharExpr(var7);
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction851> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction851#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction851__action(val* self, val* p0) {
parser__ReduceAction851__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction852#action for (self: ReduceAction852, Parser) */
void parser__ReduceAction852__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tstringnode2 /* var tstringnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AStringExpr */;
val* var4 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable AStringExpr */;
long var5 /* : Int */;
long var6 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var_tstringnode2 = var_nodearraylist1;
/* <var_tstringnode2:nullable Object> isa nullable TString */
cltype = type_nullable_parser_nodes__TString.color;
idtype = type_nullable_parser_nodes__TString.id;
if(var_tstringnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tstringnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tstringnode2->type->type_table[cltype] == idtype;
}
}
if (!var2) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29287);
exit(1);
}
var3 = NEW_parser_nodes__AStringExpr(&type_parser_nodes__AStringExpr);
var4 = NULL;
((void (*)(val*, val*, val*))(var3->class->vft[COLOR_parser_prod__AStringExpr__init_astringexpr]))(var3, var_tstringnode2, var4) /* init_astringexpr on <var3:AStringExpr>*/;
CHECK_NEW_parser_nodes__AStringExpr(var3);
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction852> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction852#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction852__action(val* self, val* p0) {
parser__ReduceAction852__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction853#action for (self: ReduceAction853, Parser) */
void parser__ReduceAction853__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tstringnode2 /* var tstringnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode3 /* var pannotationsnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : AStringExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AStringExpr */;
long var8 /* : Int */;
long var9 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var_tstringnode2 = var_nodearraylist1;
/* <var_tstringnode2:nullable Object> isa nullable TString */
cltype = type_nullable_parser_nodes__TString.color;
idtype = type_nullable_parser_nodes__TString.id;
if(var_tstringnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tstringnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tstringnode2->type->type_table[cltype] == idtype;
}
}
if (!var3) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29304);
exit(1);
}
var_pannotationsnode3 = var_nodearraylist2;
/* <var_pannotationsnode3:nullable Object> isa nullable AAnnotations */
cltype5 = type_nullable_parser_nodes__AAnnotations.color;
idtype6 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_pannotationsnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_pannotationsnode3->type->type_table[cltype5] == idtype6;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29306);
exit(1);
}
var7 = NEW_parser_nodes__AStringExpr(&type_parser_nodes__AStringExpr);
((void (*)(val*, val*, val*))(var7->class->vft[COLOR_parser_prod__AStringExpr__init_astringexpr]))(var7, var_tstringnode2, var_pannotationsnode3) /* init_astringexpr on <var7:AStringExpr>*/;
CHECK_NEW_parser_nodes__AStringExpr(var7);
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction853> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction853#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction853__action(val* self, val* p0) {
parser__ReduceAction853__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction855#action for (self: ReduceAction855, Parser) */
void parser__ReduceAction855__action(val* self, val* p0) {
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
val* var_toparnode2 /* var toparnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_tcparnode4 /* var tcparnode4: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : AParExpr */;
val* var14 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable AParExpr */;
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
var_toparnode2 = var_nodearraylist1;
/* <var_toparnode2:nullable Object> isa nullable TOpar */
cltype = type_nullable_parser_nodes__TOpar.color;
idtype = type_nullable_parser_nodes__TOpar.id;
if(var_toparnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= var_toparnode2->type->table_size) {
var6 = 0;
} else {
var6 = var_toparnode2->type->type_table[cltype] == idtype;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29326);
exit(1);
}
var_pexprnode3 = var_nodearraylist3;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29328);
exit(1);
}
var_tcparnode4 = var_nodearraylist5;
/* <var_tcparnode4:nullable Object> isa nullable TCpar */
cltype11 = type_nullable_parser_nodes__TCpar.color;
idtype12 = type_nullable_parser_nodes__TCpar.id;
if(var_tcparnode4 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_tcparnode4->type->table_size) {
var10 = 0;
} else {
var10 = var_tcparnode4->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29330);
exit(1);
}
var13 = NEW_parser_nodes__AParExpr(&type_parser_nodes__AParExpr);
var14 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var13->class->vft[COLOR_parser_prod__AParExpr__init_aparexpr]))(var13, var_toparnode2, var_pexprnode3, var_tcparnode4, var14) /* init_aparexpr on <var13:AParExpr>*/;
CHECK_NEW_parser_nodes__AParExpr(var13);
var_pexprnode1 = var13;
var_node_list = var_pexprnode1;
var15 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction855> */
var16 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var15) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var16, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction855#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction855__action(val* self, val* p0) {
parser__ReduceAction855__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction856#action for (self: ReduceAction856, Parser) */
void parser__ReduceAction856__action(val* self, val* p0) {
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
val* var_toparnode2 /* var toparnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_tcparnode4 /* var tcparnode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_pannotationsnode5 /* var pannotationsnode5: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : AParExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AParExpr */;
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
var_toparnode2 = var_nodearraylist1;
/* <var_toparnode2:nullable Object> isa nullable TOpar */
cltype = type_nullable_parser_nodes__TOpar.color;
idtype = type_nullable_parser_nodes__TOpar.id;
if(var_toparnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= var_toparnode2->type->table_size) {
var7 = 0;
} else {
var7 = var_toparnode2->type->type_table[cltype] == idtype;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29353);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29355);
exit(1);
}
var_tcparnode4 = var_nodearraylist5;
/* <var_tcparnode4:nullable Object> isa nullable TCpar */
cltype12 = type_nullable_parser_nodes__TCpar.color;
idtype13 = type_nullable_parser_nodes__TCpar.id;
if(var_tcparnode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_tcparnode4->type->table_size) {
var11 = 0;
} else {
var11 = var_tcparnode4->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29357);
exit(1);
}
var_pannotationsnode5 = var_nodearraylist6;
/* <var_pannotationsnode5:nullable Object> isa nullable AAnnotations */
cltype15 = type_nullable_parser_nodes__AAnnotations.color;
idtype16 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode5 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_pannotationsnode5->type->table_size) {
var14 = 0;
} else {
var14 = var_pannotationsnode5->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29359);
exit(1);
}
var17 = NEW_parser_nodes__AParExpr(&type_parser_nodes__AParExpr);
((void (*)(val*, val*, val*, val*, val*))(var17->class->vft[COLOR_parser_prod__AParExpr__init_aparexpr]))(var17, var_toparnode2, var_pexprnode3, var_tcparnode4, var_pannotationsnode5) /* init_aparexpr on <var17:AParExpr>*/;
CHECK_NEW_parser_nodes__AParExpr(var17);
var_pexprnode1 = var17;
var_node_list = var_pexprnode1;
var18 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction856> */
var19 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var18) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var19, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction856#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction856__action(val* self, val* p0) {
parser__ReduceAction856__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction857#action for (self: ReduceAction857, Parser) */
void parser__ReduceAction857__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var11 /* : Bool */;
int cltype;
int idtype;
val* var_tkwasnode3 /* var tkwasnode3: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_toparnode4 /* var toparnode4: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_ptypenode5 /* var ptypenode5: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_tcparnode6 /* var tcparnode6: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var24 /* : AAsCastExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAsCastExpr */;
long var25 /* : Int */;
long var26 /* : Int */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var11 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var11 = 0;
} else {
var11 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29386);
exit(1);
}
var_tkwasnode3 = var_nodearraylist4;
/* <var_tkwasnode3:nullable Object> isa nullable TKwas */
cltype13 = type_nullable_parser_nodes__TKwas.color;
idtype14 = type_nullable_parser_nodes__TKwas.id;
if(var_tkwasnode3 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_tkwasnode3->type->table_size) {
var12 = 0;
} else {
var12 = var_tkwasnode3->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29388);
exit(1);
}
var_toparnode4 = var_nodearraylist6;
/* <var_toparnode4:nullable Object> isa nullable TOpar */
cltype16 = type_nullable_parser_nodes__TOpar.color;
idtype17 = type_nullable_parser_nodes__TOpar.id;
if(var_toparnode4 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_toparnode4->type->table_size) {
var15 = 0;
} else {
var15 = var_toparnode4->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29390);
exit(1);
}
var_ptypenode5 = var_nodearraylist8;
/* <var_ptypenode5:nullable Object> isa nullable AType */
cltype19 = type_nullable_parser_nodes__AType.color;
idtype20 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode5 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_ptypenode5->type->table_size) {
var18 = 0;
} else {
var18 = var_ptypenode5->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29392);
exit(1);
}
var_tcparnode6 = var_nodearraylist10;
/* <var_tcparnode6:nullable Object> isa nullable TCpar */
cltype22 = type_nullable_parser_nodes__TCpar.color;
idtype23 = type_nullable_parser_nodes__TCpar.id;
if(var_tcparnode6 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_tcparnode6->type->table_size) {
var21 = 0;
} else {
var21 = var_tcparnode6->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29394);
exit(1);
}
var24 = NEW_parser_nodes__AAsCastExpr(&type_parser_nodes__AAsCastExpr);
((void (*)(val*, val*, val*, val*, val*, val*))(var24->class->vft[COLOR_parser_prod__AAsCastExpr__init_aascastexpr]))(var24, var_pexprnode2, var_tkwasnode3, var_toparnode4, var_ptypenode5, var_tcparnode6) /* init_aascastexpr on <var24:AAsCastExpr>*/;
CHECK_NEW_parser_nodes__AAsCastExpr(var24);
var_pexprnode1 = var24;
var_node_list = var_pexprnode1;
var25 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction857> */
var26 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var25) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var26, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction857#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction857__action(val* self, val* p0) {
parser__ReduceAction857__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction858#action for (self: ReduceAction858, Parser) */
void parser__ReduceAction858__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist12 /* var nodearraylist12: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist11 /* var nodearraylist11: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var11 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var12 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var13 /* : Bool */;
int cltype;
int idtype;
val* var_tkwasnode3 /* var tkwasnode3: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_toparnode4 /* var toparnode4: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_tkwnotnode5 /* var tkwnotnode5: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_tkwnullnode6 /* var tkwnullnode6: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_tcparnode7 /* var tcparnode7: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : AAsNotnullExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAsNotnullExpr */;
long var30 /* : Int */;
long var31 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist12 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist11 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist10 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist9 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var8;
var9 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var9;
var10 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var10;
var11 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var11;
var12 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var12;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var13 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var13 = 0;
} else {
var13 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29424);
exit(1);
}
var_tkwasnode3 = var_nodearraylist4;
/* <var_tkwasnode3:nullable Object> isa nullable TKwas */
cltype15 = type_nullable_parser_nodes__TKwas.color;
idtype16 = type_nullable_parser_nodes__TKwas.id;
if(var_tkwasnode3 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_tkwasnode3->type->table_size) {
var14 = 0;
} else {
var14 = var_tkwasnode3->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29426);
exit(1);
}
var_toparnode4 = var_nodearraylist6;
/* <var_toparnode4:nullable Object> isa nullable TOpar */
cltype18 = type_nullable_parser_nodes__TOpar.color;
idtype19 = type_nullable_parser_nodes__TOpar.id;
if(var_toparnode4 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_toparnode4->type->table_size) {
var17 = 0;
} else {
var17 = var_toparnode4->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29428);
exit(1);
}
var_tkwnotnode5 = var_nodearraylist8;
/* <var_tkwnotnode5:nullable Object> isa nullable TKwnot */
cltype21 = type_nullable_parser_nodes__TKwnot.color;
idtype22 = type_nullable_parser_nodes__TKwnot.id;
if(var_tkwnotnode5 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_tkwnotnode5->type->table_size) {
var20 = 0;
} else {
var20 = var_tkwnotnode5->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29430);
exit(1);
}
var_tkwnullnode6 = var_nodearraylist10;
/* <var_tkwnullnode6:nullable Object> isa nullable TKwnull */
cltype24 = type_nullable_parser_nodes__TKwnull.color;
idtype25 = type_nullable_parser_nodes__TKwnull.id;
if(var_tkwnullnode6 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_tkwnullnode6->type->table_size) {
var23 = 0;
} else {
var23 = var_tkwnullnode6->type->type_table[cltype24] == idtype25;
}
}
if (!var23) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29432);
exit(1);
}
var_tcparnode7 = var_nodearraylist12;
/* <var_tcparnode7:nullable Object> isa nullable TCpar */
cltype27 = type_nullable_parser_nodes__TCpar.color;
idtype28 = type_nullable_parser_nodes__TCpar.id;
if(var_tcparnode7 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_tcparnode7->type->table_size) {
var26 = 0;
} else {
var26 = var_tcparnode7->type->type_table[cltype27] == idtype28;
}
}
if (!var26) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29434);
exit(1);
}
var29 = NEW_parser_nodes__AAsNotnullExpr(&type_parser_nodes__AAsNotnullExpr);
((void (*)(val*, val*, val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AAsNotnullExpr__init_aasnotnullexpr]))(var29, var_pexprnode2, var_tkwasnode3, var_toparnode4, var_tkwnotnode5, var_tkwnullnode6, var_tcparnode7) /* init_aasnotnullexpr on <var29:AAsNotnullExpr>*/;
CHECK_NEW_parser_nodes__AAsNotnullExpr(var29);
var_pexprnode1 = var29;
var_node_list = var_pexprnode1;
var30 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction858> */
var31 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var30) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var31, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction858#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction858__action(val* self, val* p0) {
parser__ReduceAction858__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction859#action for (self: ReduceAction859, Parser) */
void parser__ReduceAction859__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var_listnode2 /* var listnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : Array[Object] */;
val* var9 /* : null */;
short int var10 /* : Bool */;
val* var11 /* : ASuperstringExpr */;
val* var12 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable ASuperstringExpr */;
long var13 /* : Int */;
long var14 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var3->class->vft[COLOR_array__Array__init]))(var3) /* init on <var3:Array[Object]>*/;
CHECK_NEW_array__Array(var3);
var_listnode4 = var3;
var_listnode2 = var_nodearraylist1;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode2 == NULL) {
var4 = 0;
} else {
if(cltype >= var_listnode2->type->table_size) {
var4 = 0;
} else {
var4 = var_listnode2->type->type_table[cltype] == idtype;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29456);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29458);
exit(1);
}
var8 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode2) /* concat on <self:ReduceAction859>*/;
var_listnode4 = var8;
var9 = NULL;
if (var_pexprnode3 == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (var10){
((void (*)(val*, val*))(var_listnode4->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode4, var_pexprnode3) /* add on <var_listnode4:Array[Object]>*/;
} else {
}
var11 = NEW_parser_nodes__ASuperstringExpr(&type_parser_nodes__ASuperstringExpr);
var12 = NULL;
((void (*)(val*, val*, val*))(var11->class->vft[COLOR_parser_prod__ASuperstringExpr__init_asuperstringexpr]))(var11, var_listnode4, var12) /* init_asuperstringexpr on <var11:ASuperstringExpr>*/;
CHECK_NEW_parser_nodes__ASuperstringExpr(var11);
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var13 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction859> */
var14 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var13) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var14, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction859#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction859__action(val* self, val* p0) {
parser__ReduceAction859__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction860#action for (self: ReduceAction860, Parser) */
void parser__ReduceAction860__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var4 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var_listnode2 /* var listnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : Array[Object] */;
val* var13 /* : Array[Object] */;
val* var14 /* : null */;
short int var15 /* : Bool */;
val* var16 /* : ASuperstringExpr */;
val* var17 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable ASuperstringExpr */;
long var18 /* : Int */;
long var19 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var3;
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
CHECK_NEW_array__Array(var4);
var_listnode5 = var4;
var_listnode2 = var_nodearraylist1;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode2 == NULL) {
var5 = 0;
} else {
if(cltype >= var_listnode2->type->table_size) {
var5 = 0;
} else {
var5 = var_listnode2->type->type_table[cltype] == idtype;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29481);
exit(1);
}
var_listnode3 = var_nodearraylist2;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype7 = type_array__Arraykernel__Object.color;
idtype8 = type_array__Arraykernel__Object.id;
if(var_listnode3 == NULL) {
var6 = 0;
} else {
if(cltype7 >= var_listnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_listnode3->type->type_table[cltype7] == idtype8;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29483);
exit(1);
}
var_pexprnode4 = var_nodearraylist3;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype10 = type_nullable_parser_nodes__AExpr.color;
idtype11 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode4 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_pexprnode4->type->table_size) {
var9 = 0;
} else {
var9 = var_pexprnode4->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29485);
exit(1);
}
var12 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode2) /* concat on <self:ReduceAction860>*/;
var_listnode5 = var12;
var13 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode3) /* concat on <self:ReduceAction860>*/;
var_listnode5 = var13;
var14 = NULL;
if (var_pexprnode4 == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (var15){
((void (*)(val*, val*))(var_listnode5->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode5, var_pexprnode4) /* add on <var_listnode5:Array[Object]>*/;
} else {
}
var16 = NEW_parser_nodes__ASuperstringExpr(&type_parser_nodes__ASuperstringExpr);
var17 = NULL;
((void (*)(val*, val*, val*))(var16->class->vft[COLOR_parser_prod__ASuperstringExpr__init_asuperstringexpr]))(var16, var_listnode5, var17) /* init_asuperstringexpr on <var16:ASuperstringExpr>*/;
CHECK_NEW_parser_nodes__ASuperstringExpr(var16);
var_pexprnode1 = var16;
var_node_list = var_pexprnode1;
var18 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction860> */
var19 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var18) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var19, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction860#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction860__action(val* self, val* p0) {
parser__ReduceAction860__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction861#action for (self: ReduceAction861, Parser) */
void parser__ReduceAction861__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var4 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var_listnode2 /* var listnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : Array[Object] */;
val* var10 /* : null */;
short int var11 /* : Bool */;
val* var_pannotationsnode5 /* var pannotationsnode5: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : ASuperstringExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ASuperstringExpr */;
long var16 /* : Int */;
long var17 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var3;
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
CHECK_NEW_array__Array(var4);
var_listnode4 = var4;
var_listnode2 = var_nodearraylist1;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode2 == NULL) {
var5 = 0;
} else {
if(cltype >= var_listnode2->type->table_size) {
var5 = 0;
} else {
var5 = var_listnode2->type->type_table[cltype] == idtype;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29509);
exit(1);
}
var_pexprnode3 = var_nodearraylist2;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29511);
exit(1);
}
var9 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode2) /* concat on <self:ReduceAction861>*/;
var_listnode4 = var9;
var10 = NULL;
if (var_pexprnode3 == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (var11){
((void (*)(val*, val*))(var_listnode4->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode4, var_pexprnode3) /* add on <var_listnode4:Array[Object]>*/;
} else {
}
var_pannotationsnode5 = var_nodearraylist3;
/* <var_pannotationsnode5:nullable Object> isa nullable AAnnotations */
cltype13 = type_nullable_parser_nodes__AAnnotations.color;
idtype14 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode5 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_pannotationsnode5->type->table_size) {
var12 = 0;
} else {
var12 = var_pannotationsnode5->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29517);
exit(1);
}
var15 = NEW_parser_nodes__ASuperstringExpr(&type_parser_nodes__ASuperstringExpr);
((void (*)(val*, val*, val*))(var15->class->vft[COLOR_parser_prod__ASuperstringExpr__init_asuperstringexpr]))(var15, var_listnode4, var_pannotationsnode5) /* init_asuperstringexpr on <var15:ASuperstringExpr>*/;
CHECK_NEW_parser_nodes__ASuperstringExpr(var15);
var_pexprnode1 = var15;
var_node_list = var_pexprnode1;
var16 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction861> */
var17 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var16) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var17, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction861#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction861__action(val* self, val* p0) {
parser__ReduceAction861__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction862#action for (self: ReduceAction862, Parser) */
void parser__ReduceAction862__action(val* self, val* p0) {
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
val* var5 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var_listnode2 /* var listnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : Array[Object] */;
val* var14 /* : Array[Object] */;
val* var15 /* : null */;
short int var16 /* : Bool */;
val* var_pannotationsnode6 /* var pannotationsnode6: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var20 /* : ASuperstringExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ASuperstringExpr */;
long var21 /* : Int */;
long var22 /* : Int */;
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
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
var_listnode5 = var5;
var_listnode2 = var_nodearraylist1;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode2 == NULL) {
var6 = 0;
} else {
if(cltype >= var_listnode2->type->table_size) {
var6 = 0;
} else {
var6 = var_listnode2->type->type_table[cltype] == idtype;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29537);
exit(1);
}
var_listnode3 = var_nodearraylist2;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype8 = type_array__Arraykernel__Object.color;
idtype9 = type_array__Arraykernel__Object.id;
if(var_listnode3 == NULL) {
var7 = 0;
} else {
if(cltype8 >= var_listnode3->type->table_size) {
var7 = 0;
} else {
var7 = var_listnode3->type->type_table[cltype8] == idtype9;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29539);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29541);
exit(1);
}
var13 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode2) /* concat on <self:ReduceAction862>*/;
var_listnode5 = var13;
var14 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode3) /* concat on <self:ReduceAction862>*/;
var_listnode5 = var14;
var15 = NULL;
if (var_pexprnode4 == NULL) {
var16 = 0; /* is null */
} else {
var16 = 1; /* arg is null and recv is not */
}
if (var16){
((void (*)(val*, val*))(var_listnode5->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode5, var_pexprnode4) /* add on <var_listnode5:Array[Object]>*/;
} else {
}
var_pannotationsnode6 = var_nodearraylist4;
/* <var_pannotationsnode6:nullable Object> isa nullable AAnnotations */
cltype18 = type_nullable_parser_nodes__AAnnotations.color;
idtype19 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode6 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_pannotationsnode6->type->table_size) {
var17 = 0;
} else {
var17 = var_pannotationsnode6->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29548);
exit(1);
}
var20 = NEW_parser_nodes__ASuperstringExpr(&type_parser_nodes__ASuperstringExpr);
((void (*)(val*, val*, val*))(var20->class->vft[COLOR_parser_prod__ASuperstringExpr__init_asuperstringexpr]))(var20, var_listnode5, var_pannotationsnode6) /* init_asuperstringexpr on <var20:ASuperstringExpr>*/;
CHECK_NEW_parser_nodes__ASuperstringExpr(var20);
var_pexprnode1 = var20;
var_node_list = var_pexprnode1;
var21 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction862> */
var22 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var21) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var22, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction862#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction862__action(val* self, val* p0) {
parser__ReduceAction862__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction863#action for (self: ReduceAction863, Parser) */
void parser__ReduceAction863__action(val* self, val* p0) {
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
val* var5 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_pexprnode1 /* var pexprnode1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
val* var6 /* : null */;
short int var7 /* : Bool */;
val* var8 /* : null */;
short int var9 /* : Bool */;
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
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
var_listnode3 = var5;
var_pexprnode1 = var_nodearraylist1;
var_pexprnode2 = var_nodearraylist3;
var6 = NULL;
if (var_pexprnode1 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (var7){
((void (*)(val*, val*))(var_listnode3->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode3, var_pexprnode1) /* add on <var_listnode3:Array[Object]>*/;
} else {
}
var8 = NULL;
if (var_pexprnode2 == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (var9){
((void (*)(val*, val*))(var_listnode3->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode3, var_pexprnode2) /* add on <var_listnode3:Array[Object]>*/;
} else {
}
var_node_list = var_listnode3;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction863> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction863#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction863__action(val* self, val* p0) {
parser__ReduceAction863__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction864#action for (self: ReduceAction864, Parser) */
void parser__ReduceAction864__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tstartstringnode2 /* var tstartstringnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AStartStringExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AStartStringExpr */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var_tstartstringnode2 = var_nodearraylist1;
/* <var_tstartstringnode2:nullable Object> isa nullable TStartString */
cltype = type_nullable_parser_nodes__TStartString.color;
idtype = type_nullable_parser_nodes__TStartString.id;
if(var_tstartstringnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tstartstringnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tstartstringnode2->type->type_table[cltype] == idtype;
}
}
if (!var2) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29586);
exit(1);
}
var3 = NEW_parser_nodes__AStartStringExpr(&type_parser_nodes__AStartStringExpr);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__AStartStringExpr__init_astartstringexpr]))(var3, var_tstartstringnode2) /* init_astartstringexpr on <var3:AStartStringExpr>*/;
CHECK_NEW_parser_nodes__AStartStringExpr(var3);
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction864> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction864#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction864__action(val* self, val* p0) {
parser__ReduceAction864__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction866#action for (self: ReduceAction866, Parser) */
void parser__ReduceAction866__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tmidstringnode2 /* var tmidstringnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AMidStringExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AMidStringExpr */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var_tmidstringnode2 = var_nodearraylist1;
/* <var_tmidstringnode2:nullable Object> isa nullable TMidString */
cltype = type_nullable_parser_nodes__TMidString.color;
idtype = type_nullable_parser_nodes__TMidString.id;
if(var_tmidstringnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tmidstringnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tmidstringnode2->type->type_table[cltype] == idtype;
}
}
if (!var2) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29601);
exit(1);
}
var3 = NEW_parser_nodes__AMidStringExpr(&type_parser_nodes__AMidStringExpr);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__AMidStringExpr__init_amidstringexpr]))(var3, var_tmidstringnode2) /* init_amidstringexpr on <var3:AMidStringExpr>*/;
CHECK_NEW_parser_nodes__AMidStringExpr(var3);
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction866> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction866#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction866__action(val* self, val* p0) {
parser__ReduceAction866__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction867#action for (self: ReduceAction867, Parser) */
void parser__ReduceAction867__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tendstringnode2 /* var tendstringnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AEndStringExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AEndStringExpr */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var_tendstringnode2 = var_nodearraylist1;
/* <var_tendstringnode2:nullable Object> isa nullable TEndString */
cltype = type_nullable_parser_nodes__TEndString.color;
idtype = type_nullable_parser_nodes__TEndString.id;
if(var_tendstringnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tendstringnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tendstringnode2->type->type_table[cltype] == idtype;
}
}
if (!var2) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29616);
exit(1);
}
var3 = NEW_parser_nodes__AEndStringExpr(&type_parser_nodes__AEndStringExpr);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__AEndStringExpr__init_aendstringexpr]))(var3, var_tendstringnode2) /* init_aendstringexpr on <var3:AEndStringExpr>*/;
CHECK_NEW_parser_nodes__AEndStringExpr(var3);
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction867> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction867#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction867__action(val* self, val* p0) {
parser__ReduceAction867__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction868#action for (self: ReduceAction868, Parser) */
void parser__ReduceAction868__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var_tatnode2 /* var tatnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationnode4 /* var pannotationnode4: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : null */;
short int var9 /* : Bool */;
val* var10 /* : AAnnotations */;
val* var11 /* : null */;
val* var12 /* : null */;
val* var_pannotationsnode1 /* var pannotationsnode1: nullable AAnnotations */;
long var13 /* : Int */;
long var14 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var3->class->vft[COLOR_array__Array__init]))(var3) /* init on <var3:Array[Object]>*/;
CHECK_NEW_array__Array(var3);
var_listnode5 = var3;
var_tatnode2 = var_nodearraylist1;
/* <var_tatnode2:nullable Object> isa nullable TAt */
cltype = type_nullable_parser_nodes__TAt.color;
idtype = type_nullable_parser_nodes__TAt.id;
if(var_tatnode2 == NULL) {
var4 = 1;
} else {
if(cltype >= var_tatnode2->type->table_size) {
var4 = 0;
} else {
var4 = var_tatnode2->type->type_table[cltype] == idtype;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29633);
exit(1);
}
var_pannotationnode4 = var_nodearraylist2;
/* <var_pannotationnode4:nullable Object> isa nullable AAnnotation */
cltype6 = type_nullable_parser_nodes__AAnnotation.color;
idtype7 = type_nullable_parser_nodes__AAnnotation.id;
if(var_pannotationnode4 == NULL) {
var5 = 1;
} else {
if(cltype6 >= var_pannotationnode4->type->table_size) {
var5 = 0;
} else {
var5 = var_pannotationnode4->type->type_table[cltype6] == idtype7;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29635);
exit(1);
}
var8 = NULL;
if (var_pannotationnode4 == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (var9){
((void (*)(val*, val*))(var_listnode5->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode5, var_pannotationnode4) /* add on <var_listnode5:Array[Object]>*/;
} else {
}
var10 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var11 = NULL;
var12 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var10->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var10, var_tatnode2, var11, var_listnode5, var12) /* init_aannotations on <var10:AAnnotations>*/;
CHECK_NEW_parser_nodes__AAnnotations(var10);
var_pannotationsnode1 = var10;
var_node_list = var_pannotationsnode1;
var13 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction868> */
var14 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var13) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var14, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction868#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction868__action(val* self, val* p0) {
parser__ReduceAction868__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction869#action for (self: ReduceAction869, Parser) */
void parser__ReduceAction869__action(val* self, val* p0) {
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
val* var7 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var_tatnode2 /* var tatnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_toparnode3 /* var toparnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : Array[Object] */;
val* var_tcparnode6 /* var tcparnode6: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : AAnnotations */;
val* var_pannotationsnode1 /* var pannotationsnode1: nullable AAnnotations */;
long var20 /* : Int */;
long var21 /* : Int */;
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
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
CHECK_NEW_array__Array(var7);
var_listnode5 = var7;
var_tatnode2 = var_nodearraylist1;
/* <var_tatnode2:nullable Object> isa nullable TAt */
cltype = type_nullable_parser_nodes__TAt.color;
idtype = type_nullable_parser_nodes__TAt.id;
if(var_tatnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_tatnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_tatnode2->type->type_table[cltype] == idtype;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29662);
exit(1);
}
var_toparnode3 = var_nodearraylist2;
/* <var_toparnode3:nullable Object> isa nullable TOpar */
cltype10 = type_nullable_parser_nodes__TOpar.color;
idtype11 = type_nullable_parser_nodes__TOpar.id;
if(var_toparnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_toparnode3->type->table_size) {
var9 = 0;
} else {
var9 = var_toparnode3->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29664);
exit(1);
}
var_listnode4 = var_nodearraylist4;
/* <var_listnode4:nullable Object> isa Array[Object] */
cltype13 = type_array__Arraykernel__Object.color;
idtype14 = type_array__Arraykernel__Object.id;
if(var_listnode4 == NULL) {
var12 = 0;
} else {
if(cltype13 >= var_listnode4->type->table_size) {
var12 = 0;
} else {
var12 = var_listnode4->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29666);
exit(1);
}
var15 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode4) /* concat on <self:ReduceAction869>*/;
var_listnode5 = var15;
var_tcparnode6 = var_nodearraylist6;
/* <var_tcparnode6:nullable Object> isa nullable TCpar */
cltype17 = type_nullable_parser_nodes__TCpar.color;
idtype18 = type_nullable_parser_nodes__TCpar.id;
if(var_tcparnode6 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tcparnode6->type->table_size) {
var16 = 0;
} else {
var16 = var_tcparnode6->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29669);
exit(1);
}
var19 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
((void (*)(val*, val*, val*, val*, val*))(var19->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var19, var_tatnode2, var_toparnode3, var_listnode5, var_tcparnode6) /* init_aannotations on <var19:AAnnotations>*/;
CHECK_NEW_parser_nodes__AAnnotations(var19);
var_pannotationsnode1 = var19;
var_node_list = var_pannotationsnode1;
var20 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction869> */
var21 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var20) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var21, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction869#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction869__action(val* self, val* p0) {
parser__ReduceAction869__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction870#action for (self: ReduceAction870, Parser) */
void parser__ReduceAction870__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var_patidnode2 /* var patidnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : AAnnotation */;
val* var5 /* : null */;
val* var6 /* : null */;
val* var7 /* : null */;
val* var_pannotationnode1 /* var pannotationnode1: nullable AAnnotation */;
long var8 /* : Int */;
long var9 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var2 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var2->class->vft[COLOR_array__Array__init]))(var2) /* init on <var2:Array[Object]>*/;
CHECK_NEW_array__Array(var2);
var_listnode4 = var2;
var_patidnode2 = var_nodearraylist1;
/* <var_patidnode2:nullable Object> isa nullable AAtid */
cltype = type_nullable_parser_nodes__AAtid.color;
idtype = type_nullable_parser_nodes__AAtid.id;
if(var_patidnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_patidnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_patidnode2->type->type_table[cltype] == idtype;
}
}
if (!var3) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29688);
exit(1);
}
var4 = NEW_parser_nodes__AAnnotation(&type_parser_nodes__AAnnotation);
var5 = NULL;
var6 = NULL;
var7 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*))(var4->class->vft[COLOR_parser_prod__AAnnotation__init_aannotation]))(var4, var_patidnode2, var5, var_listnode4, var6, var7) /* init_aannotation on <var4:AAnnotation>*/;
CHECK_NEW_parser_nodes__AAnnotation(var4);
var_pannotationnode1 = var4;
var_node_list = var_pannotationnode1;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction870> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction870#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction870__action(val* self, val* p0) {
parser__ReduceAction870__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction871#action for (self: ReduceAction871, Parser) */
void parser__ReduceAction871__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var_patidnode2 /* var patidnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode6 /* var pannotationsnode6: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : AAnnotation */;
val* var9 /* : null */;
val* var10 /* : null */;
val* var_pannotationnode1 /* var pannotationnode1: nullable AAnnotation */;
long var11 /* : Int */;
long var12 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var3->class->vft[COLOR_array__Array__init]))(var3) /* init on <var3:Array[Object]>*/;
CHECK_NEW_array__Array(var3);
var_listnode4 = var3;
var_patidnode2 = var_nodearraylist1;
/* <var_patidnode2:nullable Object> isa nullable AAtid */
cltype = type_nullable_parser_nodes__AAtid.color;
idtype = type_nullable_parser_nodes__AAtid.id;
if(var_patidnode2 == NULL) {
var4 = 1;
} else {
if(cltype >= var_patidnode2->type->table_size) {
var4 = 0;
} else {
var4 = var_patidnode2->type->type_table[cltype] == idtype;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29709);
exit(1);
}
var_pannotationsnode6 = var_nodearraylist2;
/* <var_pannotationsnode6:nullable Object> isa nullable AAnnotations */
cltype6 = type_nullable_parser_nodes__AAnnotations.color;
idtype7 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode6 == NULL) {
var5 = 1;
} else {
if(cltype6 >= var_pannotationsnode6->type->table_size) {
var5 = 0;
} else {
var5 = var_pannotationsnode6->type->type_table[cltype6] == idtype7;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29711);
exit(1);
}
var8 = NEW_parser_nodes__AAnnotation(&type_parser_nodes__AAnnotation);
var9 = NULL;
var10 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*))(var8->class->vft[COLOR_parser_prod__AAnnotation__init_aannotation]))(var8, var_patidnode2, var9, var_listnode4, var10, var_pannotationsnode6) /* init_aannotation on <var8:AAnnotation>*/;
CHECK_NEW_parser_nodes__AAnnotation(var8);
var_pannotationnode1 = var8;
var_node_list = var_pannotationnode1;
var11 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction871> */
var12 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var11) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var12, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction871#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction871__action(val* self, val* p0) {
parser__ReduceAction871__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction872#action for (self: ReduceAction872, Parser) */
void parser__ReduceAction872__action(val* self, val* p0) {
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
val* var7 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var_patidnode2 /* var patidnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_toparnode3 /* var toparnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : Array[Object] */;
val* var_tcparnode6 /* var tcparnode6: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : AAnnotation */;
val* var20 /* : null */;
val* var_pannotationnode1 /* var pannotationnode1: nullable AAnnotation */;
long var21 /* : Int */;
long var22 /* : Int */;
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
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
CHECK_NEW_array__Array(var7);
var_listnode5 = var7;
var_patidnode2 = var_nodearraylist1;
/* <var_patidnode2:nullable Object> isa nullable AAtid */
cltype = type_nullable_parser_nodes__AAtid.color;
idtype = type_nullable_parser_nodes__AAtid.id;
if(var_patidnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_patidnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_patidnode2->type->type_table[cltype] == idtype;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29736);
exit(1);
}
var_toparnode3 = var_nodearraylist2;
/* <var_toparnode3:nullable Object> isa nullable TOpar */
cltype10 = type_nullable_parser_nodes__TOpar.color;
idtype11 = type_nullable_parser_nodes__TOpar.id;
if(var_toparnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_toparnode3->type->table_size) {
var9 = 0;
} else {
var9 = var_toparnode3->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29738);
exit(1);
}
var_listnode4 = var_nodearraylist4;
/* <var_listnode4:nullable Object> isa Array[Object] */
cltype13 = type_array__Arraykernel__Object.color;
idtype14 = type_array__Arraykernel__Object.id;
if(var_listnode4 == NULL) {
var12 = 0;
} else {
if(cltype13 >= var_listnode4->type->table_size) {
var12 = 0;
} else {
var12 = var_listnode4->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29740);
exit(1);
}
var15 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode4) /* concat on <self:ReduceAction872>*/;
var_listnode5 = var15;
var_tcparnode6 = var_nodearraylist6;
/* <var_tcparnode6:nullable Object> isa nullable TCpar */
cltype17 = type_nullable_parser_nodes__TCpar.color;
idtype18 = type_nullable_parser_nodes__TCpar.id;
if(var_tcparnode6 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tcparnode6->type->table_size) {
var16 = 0;
} else {
var16 = var_tcparnode6->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29743);
exit(1);
}
var19 = NEW_parser_nodes__AAnnotation(&type_parser_nodes__AAnnotation);
var20 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*))(var19->class->vft[COLOR_parser_prod__AAnnotation__init_aannotation]))(var19, var_patidnode2, var_toparnode3, var_listnode5, var_tcparnode6, var20) /* init_aannotation on <var19:AAnnotation>*/;
CHECK_NEW_parser_nodes__AAnnotation(var19);
var_pannotationnode1 = var19;
var_node_list = var_pannotationnode1;
var21 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction872> */
var22 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var21) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var22, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction872#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction872__action(val* self, val* p0) {
parser__ReduceAction872__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction873#action for (self: ReduceAction873, Parser) */
void parser__ReduceAction873__action(val* self, val* p0) {
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
val* var8 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var_patidnode2 /* var patidnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_toparnode3 /* var toparnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : Array[Object] */;
val* var_tcparnode6 /* var tcparnode6: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pannotationsnode7 /* var pannotationsnode7: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var23 /* : AAnnotation */;
val* var_pannotationnode1 /* var pannotationnode1: nullable AAnnotation */;
long var24 /* : Int */;
long var25 /* : Int */;
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
var8 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var8->class->vft[COLOR_array__Array__init]))(var8) /* init on <var8:Array[Object]>*/;
CHECK_NEW_array__Array(var8);
var_listnode5 = var8;
var_patidnode2 = var_nodearraylist1;
/* <var_patidnode2:nullable Object> isa nullable AAtid */
cltype = type_nullable_parser_nodes__AAtid.color;
idtype = type_nullable_parser_nodes__AAtid.id;
if(var_patidnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= var_patidnode2->type->table_size) {
var9 = 0;
} else {
var9 = var_patidnode2->type->type_table[cltype] == idtype;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29769);
exit(1);
}
var_toparnode3 = var_nodearraylist2;
/* <var_toparnode3:nullable Object> isa nullable TOpar */
cltype11 = type_nullable_parser_nodes__TOpar.color;
idtype12 = type_nullable_parser_nodes__TOpar.id;
if(var_toparnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_toparnode3->type->table_size) {
var10 = 0;
} else {
var10 = var_toparnode3->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29771);
exit(1);
}
var_listnode4 = var_nodearraylist4;
/* <var_listnode4:nullable Object> isa Array[Object] */
cltype14 = type_array__Arraykernel__Object.color;
idtype15 = type_array__Arraykernel__Object.id;
if(var_listnode4 == NULL) {
var13 = 0;
} else {
if(cltype14 >= var_listnode4->type->table_size) {
var13 = 0;
} else {
var13 = var_listnode4->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29773);
exit(1);
}
var16 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode4) /* concat on <self:ReduceAction873>*/;
var_listnode5 = var16;
var_tcparnode6 = var_nodearraylist6;
/* <var_tcparnode6:nullable Object> isa nullable TCpar */
cltype18 = type_nullable_parser_nodes__TCpar.color;
idtype19 = type_nullable_parser_nodes__TCpar.id;
if(var_tcparnode6 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tcparnode6->type->table_size) {
var17 = 0;
} else {
var17 = var_tcparnode6->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29776);
exit(1);
}
var_pannotationsnode7 = var_nodearraylist7;
/* <var_pannotationsnode7:nullable Object> isa nullable AAnnotations */
cltype21 = type_nullable_parser_nodes__AAnnotations.color;
idtype22 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode7 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_pannotationsnode7->type->table_size) {
var20 = 0;
} else {
var20 = var_pannotationsnode7->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29778);
exit(1);
}
var23 = NEW_parser_nodes__AAnnotation(&type_parser_nodes__AAnnotation);
((void (*)(val*, val*, val*, val*, val*, val*))(var23->class->vft[COLOR_parser_prod__AAnnotation__init_aannotation]))(var23, var_patidnode2, var_toparnode3, var_listnode5, var_tcparnode6, var_pannotationsnode7) /* init_aannotation on <var23:AAnnotation>*/;
CHECK_NEW_parser_nodes__AAnnotation(var23);
var_pannotationnode1 = var23;
var_node_list = var_pannotationnode1;
var24 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction873> */
var25 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var24) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var25, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction873#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction873__action(val* self, val* p0) {
parser__ReduceAction873__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction874#action for (self: ReduceAction874, Parser) */
void parser__ReduceAction874__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : Array[Object] */;
val* var5 /* : AAnnotations */;
val* var6 /* : null */;
val* var7 /* : null */;
val* var8 /* : null */;
val* var_pannotationsnode1 /* var pannotationsnode1: nullable AAnnotations */;
long var9 /* : Int */;
long var10 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var2 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var2->class->vft[COLOR_array__Array__init]))(var2) /* init on <var2:Array[Object]>*/;
CHECK_NEW_array__Array(var2);
var_listnode5 = var2;
var_listnode4 = var_nodearraylist1;
/* <var_listnode4:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode4 == NULL) {
var3 = 0;
} else {
if(cltype >= var_listnode4->type->table_size) {
var3 = 0;
} else {
var3 = var_listnode4->type->type_table[cltype] == idtype;
}
}
if (!var3) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29798);
exit(1);
}
var4 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode4) /* concat on <self:ReduceAction874>*/;
var_listnode5 = var4;
var5 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var6 = NULL;
var7 = NULL;
var8 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var5->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var5, var6, var7, var_listnode5, var8) /* init_aannotations on <var5:AAnnotations>*/;
CHECK_NEW_parser_nodes__AAnnotations(var5);
var_pannotationsnode1 = var5;
var_node_list = var_pannotationsnode1;
var9 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction874> */
var10 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var9) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var10, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction874#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction874__action(val* self, val* p0) {
parser__ReduceAction874__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction875#action for (self: ReduceAction875, Parser) */
void parser__ReduceAction875__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_pannotationnode1 /* var pannotationnode1: nullable Object */;
val* var3 /* : null */;
short int var4 /* : Bool */;
long var5 /* : Int */;
long var6 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var2 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var2->class->vft[COLOR_array__Array__init]))(var2) /* init on <var2:Array[Object]>*/;
CHECK_NEW_array__Array(var2);
var_listnode2 = var2;
var_pannotationnode1 = var_nodearraylist1;
var3 = NULL;
if (var_pannotationnode1 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (var4){
((void (*)(val*, val*))(var_listnode2->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode2, var_pannotationnode1) /* add on <var_listnode2:Array[Object]>*/;
} else {
}
var_node_list = var_listnode2;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction875> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction875#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction875__action(val* self, val* p0) {
parser__ReduceAction875__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction876#action for (self: ReduceAction876, Parser) */
void parser__ReduceAction876__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_pannotationnode1 /* var pannotationnode1: nullable Object */;
val* var_listnode2 /* var listnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : null */;
short int var6 /* : Bool */;
val* var7 /* : Array[Object] */;
long var8 /* : Int */;
long var9 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var3->class->vft[COLOR_array__Array__init]))(var3) /* init on <var3:Array[Object]>*/;
CHECK_NEW_array__Array(var3);
var_listnode3 = var3;
var_pannotationnode1 = var_nodearraylist1;
var_listnode2 = var_nodearraylist2;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode2 == NULL) {
var4 = 0;
} else {
if(cltype >= var_listnode2->type->table_size) {
var4 = 0;
} else {
var4 = var_listnode2->type->type_table[cltype] == idtype;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29835);
exit(1);
}
var5 = NULL;
if (var_pannotationnode1 == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (var6){
((void (*)(val*, val*))(var_listnode3->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode3, var_pannotationnode1) /* add on <var_listnode3:Array[Object]>*/;
} else {
}
var7 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode3, var_listnode2) /* concat on <self:ReduceAction876>*/;
var_listnode3 = var7;
var_node_list = var_listnode3;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction876> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction876#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction876__action(val* self, val* p0) {
parser__ReduceAction876__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction878#action for (self: ReduceAction878, Parser) */
void parser__ReduceAction878__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var4 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var_patidnode2 /* var patidnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var6 /* : AAnnotation */;
val* var7 /* : null */;
val* var8 /* : null */;
val* var9 /* : null */;
val* var_pannotationnode1 /* var pannotationnode1: nullable AAnnotation */;
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
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
CHECK_NEW_array__Array(var4);
var_listnode4 = var4;
var_patidnode2 = var_nodearraylist2;
/* <var_patidnode2:nullable Object> isa nullable AAtid */
cltype = type_nullable_parser_nodes__AAtid.color;
idtype = type_nullable_parser_nodes__AAtid.id;
if(var_patidnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= var_patidnode2->type->table_size) {
var5 = 0;
} else {
var5 = var_patidnode2->type->type_table[cltype] == idtype;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29854);
exit(1);
}
var6 = NEW_parser_nodes__AAnnotation(&type_parser_nodes__AAnnotation);
var7 = NULL;
var8 = NULL;
var9 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*))(var6->class->vft[COLOR_parser_prod__AAnnotation__init_aannotation]))(var6, var_patidnode2, var7, var_listnode4, var8, var9) /* init_aannotation on <var6:AAnnotation>*/;
CHECK_NEW_parser_nodes__AAnnotation(var6);
var_pannotationnode1 = var6;
var_node_list = var_pannotationnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction878> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction878#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction878__action(val* self, val* p0) {
parser__ReduceAction878__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction879#action for (self: ReduceAction879, Parser) */
void parser__ReduceAction879__action(val* self, val* p0) {
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
val* var5 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var_patidnode2 /* var patidnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode6 /* var pannotationsnode6: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : AAnnotation */;
val* var11 /* : null */;
val* var12 /* : null */;
val* var_pannotationnode1 /* var pannotationnode1: nullable AAnnotation */;
long var13 /* : Int */;
long var14 /* : Int */;
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
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
var_listnode4 = var5;
var_patidnode2 = var_nodearraylist2;
/* <var_patidnode2:nullable Object> isa nullable AAtid */
cltype = type_nullable_parser_nodes__AAtid.color;
idtype = type_nullable_parser_nodes__AAtid.id;
if(var_patidnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= var_patidnode2->type->table_size) {
var6 = 0;
} else {
var6 = var_patidnode2->type->type_table[cltype] == idtype;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29877);
exit(1);
}
var_pannotationsnode6 = var_nodearraylist3;
/* <var_pannotationsnode6:nullable Object> isa nullable AAnnotations */
cltype8 = type_nullable_parser_nodes__AAnnotations.color;
idtype9 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode6 == NULL) {
var7 = 1;
} else {
if(cltype8 >= var_pannotationsnode6->type->table_size) {
var7 = 0;
} else {
var7 = var_pannotationsnode6->type->type_table[cltype8] == idtype9;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29879);
exit(1);
}
var10 = NEW_parser_nodes__AAnnotation(&type_parser_nodes__AAnnotation);
var11 = NULL;
var12 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*))(var10->class->vft[COLOR_parser_prod__AAnnotation__init_aannotation]))(var10, var_patidnode2, var11, var_listnode4, var12, var_pannotationsnode6) /* init_aannotation on <var10:AAnnotation>*/;
CHECK_NEW_parser_nodes__AAnnotation(var10);
var_pannotationnode1 = var10;
var_node_list = var_pannotationnode1;
var13 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction879> */
var14 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var13) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var14, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction879#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction879__action(val* self, val* p0) {
parser__ReduceAction879__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction880#action for (self: ReduceAction880, Parser) */
void parser__ReduceAction880__action(val* self, val* p0) {
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
val* var8 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var_patidnode2 /* var patidnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_toparnode3 /* var toparnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : Array[Object] */;
val* var_tcparnode6 /* var tcparnode6: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var20 /* : AAnnotation */;
val* var21 /* : null */;
val* var_pannotationnode1 /* var pannotationnode1: nullable AAnnotation */;
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
var8 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var8->class->vft[COLOR_array__Array__init]))(var8) /* init on <var8:Array[Object]>*/;
CHECK_NEW_array__Array(var8);
var_listnode5 = var8;
var_patidnode2 = var_nodearraylist2;
/* <var_patidnode2:nullable Object> isa nullable AAtid */
cltype = type_nullable_parser_nodes__AAtid.color;
idtype = type_nullable_parser_nodes__AAtid.id;
if(var_patidnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= var_patidnode2->type->table_size) {
var9 = 0;
} else {
var9 = var_patidnode2->type->type_table[cltype] == idtype;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29905);
exit(1);
}
var_toparnode3 = var_nodearraylist3;
/* <var_toparnode3:nullable Object> isa nullable TOpar */
cltype11 = type_nullable_parser_nodes__TOpar.color;
idtype12 = type_nullable_parser_nodes__TOpar.id;
if(var_toparnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_toparnode3->type->table_size) {
var10 = 0;
} else {
var10 = var_toparnode3->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29907);
exit(1);
}
var_listnode4 = var_nodearraylist5;
/* <var_listnode4:nullable Object> isa Array[Object] */
cltype14 = type_array__Arraykernel__Object.color;
idtype15 = type_array__Arraykernel__Object.id;
if(var_listnode4 == NULL) {
var13 = 0;
} else {
if(cltype14 >= var_listnode4->type->table_size) {
var13 = 0;
} else {
var13 = var_listnode4->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29909);
exit(1);
}
var16 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode4) /* concat on <self:ReduceAction880>*/;
var_listnode5 = var16;
var_tcparnode6 = var_nodearraylist6;
/* <var_tcparnode6:nullable Object> isa nullable TCpar */
cltype18 = type_nullable_parser_nodes__TCpar.color;
idtype19 = type_nullable_parser_nodes__TCpar.id;
if(var_tcparnode6 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tcparnode6->type->table_size) {
var17 = 0;
} else {
var17 = var_tcparnode6->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29912);
exit(1);
}
var20 = NEW_parser_nodes__AAnnotation(&type_parser_nodes__AAnnotation);
var21 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*))(var20->class->vft[COLOR_parser_prod__AAnnotation__init_aannotation]))(var20, var_patidnode2, var_toparnode3, var_listnode5, var_tcparnode6, var21) /* init_aannotation on <var20:AAnnotation>*/;
CHECK_NEW_parser_nodes__AAnnotation(var20);
var_pannotationnode1 = var20;
var_node_list = var_pannotationnode1;
var22 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction880> */
var23 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var22) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var23, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction880#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction880__action(val* self, val* p0) {
parser__ReduceAction880__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction881#action for (self: ReduceAction881, Parser) */
void parser__ReduceAction881__action(val* self, val* p0) {
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
val* var9 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var_patidnode2 /* var patidnode2: nullable Object */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var_toparnode3 /* var toparnode3: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : Array[Object] */;
val* var_tcparnode6 /* var tcparnode6: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_pannotationsnode7 /* var pannotationsnode7: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var24 /* : AAnnotation */;
val* var_pannotationnode1 /* var pannotationnode1: nullable AAnnotation */;
long var25 /* : Int */;
long var26 /* : Int */;
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
var9 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var9->class->vft[COLOR_array__Array__init]))(var9) /* init on <var9:Array[Object]>*/;
CHECK_NEW_array__Array(var9);
var_listnode5 = var9;
var_patidnode2 = var_nodearraylist2;
/* <var_patidnode2:nullable Object> isa nullable AAtid */
cltype = type_nullable_parser_nodes__AAtid.color;
idtype = type_nullable_parser_nodes__AAtid.id;
if(var_patidnode2 == NULL) {
var10 = 1;
} else {
if(cltype >= var_patidnode2->type->table_size) {
var10 = 0;
} else {
var10 = var_patidnode2->type->type_table[cltype] == idtype;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29939);
exit(1);
}
var_toparnode3 = var_nodearraylist3;
/* <var_toparnode3:nullable Object> isa nullable TOpar */
cltype12 = type_nullable_parser_nodes__TOpar.color;
idtype13 = type_nullable_parser_nodes__TOpar.id;
if(var_toparnode3 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_toparnode3->type->table_size) {
var11 = 0;
} else {
var11 = var_toparnode3->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29941);
exit(1);
}
var_listnode4 = var_nodearraylist5;
/* <var_listnode4:nullable Object> isa Array[Object] */
cltype15 = type_array__Arraykernel__Object.color;
idtype16 = type_array__Arraykernel__Object.id;
if(var_listnode4 == NULL) {
var14 = 0;
} else {
if(cltype15 >= var_listnode4->type->table_size) {
var14 = 0;
} else {
var14 = var_listnode4->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29943);
exit(1);
}
var17 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode4) /* concat on <self:ReduceAction881>*/;
var_listnode5 = var17;
var_tcparnode6 = var_nodearraylist6;
/* <var_tcparnode6:nullable Object> isa nullable TCpar */
cltype19 = type_nullable_parser_nodes__TCpar.color;
idtype20 = type_nullable_parser_nodes__TCpar.id;
if(var_tcparnode6 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_tcparnode6->type->table_size) {
var18 = 0;
} else {
var18 = var_tcparnode6->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29946);
exit(1);
}
var_pannotationsnode7 = var_nodearraylist7;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29948);
exit(1);
}
var24 = NEW_parser_nodes__AAnnotation(&type_parser_nodes__AAnnotation);
((void (*)(val*, val*, val*, val*, val*, val*))(var24->class->vft[COLOR_parser_prod__AAnnotation__init_aannotation]))(var24, var_patidnode2, var_toparnode3, var_listnode5, var_tcparnode6, var_pannotationsnode7) /* init_aannotation on <var24:AAnnotation>*/;
CHECK_NEW_parser_nodes__AAnnotation(var24);
var_pannotationnode1 = var24;
var_node_list = var_pannotationnode1;
var25 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction881> */
var26 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var25) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var26, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction881#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction881__action(val* self, val* p0) {
parser__ReduceAction881__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction882#action for (self: ReduceAction882, Parser) */
void parser__ReduceAction882__action(val* self, val* p0) {
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
val* var5 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var_patidnode2 /* var patidnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : Array[Object] */;
val* var11 /* : AAnnotation */;
val* var12 /* : null */;
val* var13 /* : null */;
val* var14 /* : null */;
val* var_pannotationnode1 /* var pannotationnode1: nullable AAnnotation */;
long var15 /* : Int */;
long var16 /* : Int */;
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
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
var_listnode5 = var5;
var_patidnode2 = var_nodearraylist2;
/* <var_patidnode2:nullable Object> isa nullable AAtid */
cltype = type_nullable_parser_nodes__AAtid.color;
idtype = type_nullable_parser_nodes__AAtid.id;
if(var_patidnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= var_patidnode2->type->table_size) {
var6 = 0;
} else {
var6 = var_patidnode2->type->type_table[cltype] == idtype;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29971);
exit(1);
}
var_listnode4 = var_nodearraylist3;
/* <var_listnode4:nullable Object> isa Array[Object] */
cltype8 = type_array__Arraykernel__Object.color;
idtype9 = type_array__Arraykernel__Object.id;
if(var_listnode4 == NULL) {
var7 = 0;
} else {
if(cltype8 >= var_listnode4->type->table_size) {
var7 = 0;
} else {
var7 = var_listnode4->type->type_table[cltype8] == idtype9;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 29973);
exit(1);
}
var10 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode4) /* concat on <self:ReduceAction882>*/;
var_listnode5 = var10;
var11 = NEW_parser_nodes__AAnnotation(&type_parser_nodes__AAnnotation);
var12 = NULL;
var13 = NULL;
var14 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*))(var11->class->vft[COLOR_parser_prod__AAnnotation__init_aannotation]))(var11, var_patidnode2, var12, var_listnode5, var13, var14) /* init_aannotation on <var11:AAnnotation>*/;
CHECK_NEW_parser_nodes__AAnnotation(var11);
var_pannotationnode1 = var11;
var_node_list = var_pannotationnode1;
var15 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction882> */
var16 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var15) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var16, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction882#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction882__action(val* self, val* p0) {
parser__ReduceAction882__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction883#action for (self: ReduceAction883, Parser) */
void parser__ReduceAction883__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pannotationnode1 /* var pannotationnode1: nullable Object */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var3;
var_pannotationnode1 = var_nodearraylist3;
var_node_list = var_pannotationnode1;
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction883> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction883#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction883__action(val* self, val* p0) {
parser__ReduceAction883__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction884#action for (self: ReduceAction884, Parser) */
void parser__ReduceAction884__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_patargnode1 /* var patargnode1: nullable Object */;
val* var3 /* : null */;
short int var4 /* : Bool */;
long var5 /* : Int */;
long var6 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var2 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var2->class->vft[COLOR_array__Array__init]))(var2) /* init on <var2:Array[Object]>*/;
CHECK_NEW_array__Array(var2);
var_listnode2 = var2;
var_patargnode1 = var_nodearraylist1;
var3 = NULL;
if (var_patargnode1 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (var4){
((void (*)(val*, val*))(var_listnode2->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode2, var_patargnode1) /* add on <var_listnode2:Array[Object]>*/;
} else {
}
var_node_list = var_listnode2;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction884> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction884#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction884__action(val* self, val* p0) {
parser__ReduceAction884__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction885#action for (self: ReduceAction885, Parser) */
void parser__ReduceAction885__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_patargnode1 /* var patargnode1: nullable Object */;
val* var_listnode2 /* var listnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : null */;
short int var6 /* : Bool */;
val* var7 /* : Array[Object] */;
long var8 /* : Int */;
long var9 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var3->class->vft[COLOR_array__Array__init]))(var3) /* init on <var3:Array[Object]>*/;
CHECK_NEW_array__Array(var3);
var_listnode3 = var3;
var_patargnode1 = var_nodearraylist1;
var_listnode2 = var_nodearraylist2;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode2 == NULL) {
var4 = 0;
} else {
if(cltype >= var_listnode2->type->table_size) {
var4 = 0;
} else {
var4 = var_listnode2->type->type_table[cltype] == idtype;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 30024);
exit(1);
}
var5 = NULL;
if (var_patargnode1 == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (var6){
((void (*)(val*, val*))(var_listnode3->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode3, var_patargnode1) /* add on <var_listnode3:Array[Object]>*/;
} else {
}
var7 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode3, var_listnode2) /* concat on <self:ReduceAction885>*/;
var_listnode3 = var7;
var_node_list = var_listnode3;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction885> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
