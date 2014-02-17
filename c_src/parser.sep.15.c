#include "parser.sep.0.h"
/* method parser#ReduceAction775#action for (self: ReduceAction775, Parser) */
void parser__ReduceAction775__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pexprsnode3 /* var pexprsnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : ABraExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ABraExpr */;
long var8 /* : Int */;
long var9 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27255);
show_backtrace(1);
}
var_pexprsnode3 = var_nodearraylist2;
/* <var_pexprsnode3:nullable Object> isa nullable AExprs */
cltype5 = type_nullable_parser_nodes__AExprs.color;
idtype6 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_pexprsnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_pexprsnode3->type->type_table[cltype5] == idtype6;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27257);
show_backtrace(1);
}
var7 = NEW_parser_nodes__ABraExpr(&type_parser_nodes__ABraExpr);
((void (*)(val*, val*, val*))(var7->class->vft[COLOR_parser_prod__ABraExpr__init_abraexpr]))(var7, var_pexprnode2, var_pexprsnode3) /* init_abraexpr on <var7:ABraExpr>*/;
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction775> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27279);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27281);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27283);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27285);
show_backtrace(1);
}
var18 = NEW_parser_nodes__ANewExpr(&type_parser_nodes__ANewExpr);
((void (*)(val*, val*, val*, val*, val*))(var18->class->vft[COLOR_parser_prod__ANewExpr__init_anewexpr]))(var18, var_tkwnewnode2, var_ptypenode3, var_tidnode4, var_pexprsnode5) /* init_anewexpr on <var18:ANewExpr>*/;
var_pexprnode1 = var18;
var_node_list = var_pexprnode1;
var19 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction776> */
var20 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var19) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var20, var_node_list) /* push on <var_p:Parser>*/;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27310);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27312);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27314);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27316);
show_backtrace(1);
}
var19 = NEW_parser_nodes__ANewExpr(&type_parser_nodes__ANewExpr);
((void (*)(val*, val*, val*, val*, val*))(var19->class->vft[COLOR_parser_prod__ANewExpr__init_anewexpr]))(var19, var_tkwnewnode2, var_ptypenode3, var_tidnode4, var_pexprsnode5) /* init_anewexpr on <var19:ANewExpr>*/;
var_pexprnode1 = var19;
var_node_list = var_pexprnode1;
var20 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction777> */
var21 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var20) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var21, var_node_list) /* push on <var_p:Parser>*/;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27342);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27344);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27346);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27348);
show_backtrace(1);
}
var20 = NEW_parser_nodes__ANewExpr(&type_parser_nodes__ANewExpr);
((void (*)(val*, val*, val*, val*, val*))(var20->class->vft[COLOR_parser_prod__ANewExpr__init_anewexpr]))(var20, var_tkwnewnode2, var_ptypenode3, var_tidnode4, var_pexprsnode5) /* init_anewexpr on <var20:ANewExpr>*/;
var_pexprnode1 = var20;
var_node_list = var_pexprnode1;
var21 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction778> */
var22 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var21) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var22, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction778#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction778__action(val* self, val* p0) {
parser__ReduceAction778__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction780#action for (self: ReduceAction780, Parser) */
void parser__ReduceAction780__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27374);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27376);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27378);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27380);
show_backtrace(1);
}
var20 = NEW_parser_nodes__ACrangeExpr(&type_parser_nodes__ACrangeExpr);
var21 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*))(var20->class->vft[COLOR_parser_prod__ACrangeExpr__init_acrangeexpr]))(var20, var_tobranode2, var_pexprnode3, var_pexprnode4, var_tcbranode5, var21) /* init_acrangeexpr on <var20:ACrangeExpr>*/;
var_pexprnode1 = var20;
var_node_list = var_pexprnode1;
var22 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction780> */
var23 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var22) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var23, var_node_list) /* push on <var_p:Parser>*/;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27408);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27410);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27412);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27414);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27416);
show_backtrace(1);
}
var24 = NEW_parser_nodes__ACrangeExpr(&type_parser_nodes__ACrangeExpr);
((void (*)(val*, val*, val*, val*, val*, val*))(var24->class->vft[COLOR_parser_prod__ACrangeExpr__init_acrangeexpr]))(var24, var_tobranode2, var_pexprnode3, var_pexprnode4, var_tcbranode5, var_pannotationsnode6) /* init_acrangeexpr on <var24:ACrangeExpr>*/;
var_pexprnode1 = var24;
var_node_list = var_pexprnode1;
var25 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction781> */
var26 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var25) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var26, var_node_list) /* push on <var_p:Parser>*/;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27443);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27445);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27447);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27449);
show_backtrace(1);
}
var20 = NEW_parser_nodes__AOrangeExpr(&type_parser_nodes__AOrangeExpr);
var21 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*))(var20->class->vft[COLOR_parser_prod__AOrangeExpr__init_aorangeexpr]))(var20, var_tobranode2, var_pexprnode3, var_pexprnode4, var_tobranode5, var21) /* init_aorangeexpr on <var20:AOrangeExpr>*/;
var_pexprnode1 = var20;
var_node_list = var_pexprnode1;
var22 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction782> */
var23 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var22) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var23, var_node_list) /* push on <var_p:Parser>*/;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27477);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27479);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27481);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27483);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27485);
show_backtrace(1);
}
var24 = NEW_parser_nodes__AOrangeExpr(&type_parser_nodes__AOrangeExpr);
((void (*)(val*, val*, val*, val*, val*, val*))(var24->class->vft[COLOR_parser_prod__AOrangeExpr__init_aorangeexpr]))(var24, var_tobranode2, var_pexprnode3, var_pexprnode4, var_tobranode5, var_pannotationsnode6) /* init_aorangeexpr on <var24:AOrangeExpr>*/;
var_pexprnode1 = var24;
var_node_list = var_pexprnode1;
var25 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction783> */
var26 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var25) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var26, var_node_list) /* push on <var_p:Parser>*/;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27504);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AArrayExpr(&type_parser_nodes__AArrayExpr);
var4 = NULL;
((void (*)(val*, val*, val*))(var3->class->vft[COLOR_parser_prod__AArrayExpr__init_aarrayexpr]))(var3, var_pexprsnode2, var4) /* init_aarrayexpr on <var3:AArrayExpr>*/;
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction784> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction784#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction784__action(val* self, val* p0) {
parser__ReduceAction784__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction785#action for (self: ReduceAction785, Parser) */
void parser__ReduceAction785__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27521);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27523);
show_backtrace(1);
}
var7 = NEW_parser_nodes__AArrayExpr(&type_parser_nodes__AArrayExpr);
((void (*)(val*, val*, val*))(var7->class->vft[COLOR_parser_prod__AArrayExpr__init_aarrayexpr]))(var7, var_pexprsnode2, var_pannotationsnode3) /* init_aarrayexpr on <var7:AArrayExpr>*/;
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction785> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction785#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction785__action(val* self, val* p0) {
parser__ReduceAction785__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction786#action for (self: ReduceAction786, Parser) */
void parser__ReduceAction786__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27539);
show_backtrace(1);
}
var3 = NEW_parser_nodes__ASelfExpr(&type_parser_nodes__ASelfExpr);
var4 = NULL;
((void (*)(val*, val*, val*))(var3->class->vft[COLOR_parser_prod__ASelfExpr__init_aselfexpr]))(var3, var_tkwselfnode2, var4) /* init_aselfexpr on <var3:ASelfExpr>*/;
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction786> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27556);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27558);
show_backtrace(1);
}
var7 = NEW_parser_nodes__ASelfExpr(&type_parser_nodes__ASelfExpr);
((void (*)(val*, val*, val*))(var7->class->vft[COLOR_parser_prod__ASelfExpr__init_aselfexpr]))(var7, var_tkwselfnode2, var_pannotationsnode3) /* init_aselfexpr on <var7:ASelfExpr>*/;
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction787> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction787#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction787__action(val* self, val* p0) {
parser__ReduceAction787__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction788#action for (self: ReduceAction788, Parser) */
void parser__ReduceAction788__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27574);
show_backtrace(1);
}
var3 = NEW_parser_nodes__ATrueExpr(&type_parser_nodes__ATrueExpr);
var4 = NULL;
((void (*)(val*, val*, val*))(var3->class->vft[COLOR_parser_prod__ATrueExpr__init_atrueexpr]))(var3, var_tkwtruenode2, var4) /* init_atrueexpr on <var3:ATrueExpr>*/;
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction788> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction788#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction788__action(val* self, val* p0) {
parser__ReduceAction788__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction789#action for (self: ReduceAction789, Parser) */
void parser__ReduceAction789__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27591);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27593);
show_backtrace(1);
}
var7 = NEW_parser_nodes__ATrueExpr(&type_parser_nodes__ATrueExpr);
((void (*)(val*, val*, val*))(var7->class->vft[COLOR_parser_prod__ATrueExpr__init_atrueexpr]))(var7, var_tkwtruenode2, var_pannotationsnode3) /* init_atrueexpr on <var7:ATrueExpr>*/;
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction789> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27609);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AFalseExpr(&type_parser_nodes__AFalseExpr);
var4 = NULL;
((void (*)(val*, val*, val*))(var3->class->vft[COLOR_parser_prod__AFalseExpr__init_afalseexpr]))(var3, var_tkwfalsenode2, var4) /* init_afalseexpr on <var3:AFalseExpr>*/;
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction790> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27626);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27628);
show_backtrace(1);
}
var7 = NEW_parser_nodes__AFalseExpr(&type_parser_nodes__AFalseExpr);
((void (*)(val*, val*, val*))(var7->class->vft[COLOR_parser_prod__AFalseExpr__init_afalseexpr]))(var7, var_tkwfalsenode2, var_pannotationsnode3) /* init_afalseexpr on <var7:AFalseExpr>*/;
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction791> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction791#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction791__action(val* self, val* p0) {
parser__ReduceAction791__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction792#action for (self: ReduceAction792, Parser) */
void parser__ReduceAction792__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27644);
show_backtrace(1);
}
var3 = NEW_parser_nodes__ANullExpr(&type_parser_nodes__ANullExpr);
var4 = NULL;
((void (*)(val*, val*, val*))(var3->class->vft[COLOR_parser_prod__ANullExpr__init_anullexpr]))(var3, var_tkwnullnode2, var4) /* init_anullexpr on <var3:ANullExpr>*/;
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction792> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction792#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction792__action(val* self, val* p0) {
parser__ReduceAction792__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction793#action for (self: ReduceAction793, Parser) */
void parser__ReduceAction793__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27661);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27663);
show_backtrace(1);
}
var7 = NEW_parser_nodes__ANullExpr(&type_parser_nodes__ANullExpr);
((void (*)(val*, val*, val*))(var7->class->vft[COLOR_parser_prod__ANullExpr__init_anullexpr]))(var7, var_tkwnullnode2, var_pannotationsnode3) /* init_anullexpr on <var7:ANullExpr>*/;
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction793> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27679);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AIntExpr(&type_parser_nodes__AIntExpr);
var4 = NULL;
((void (*)(val*, val*, val*))(var3->class->vft[COLOR_parser_prod__AIntExpr__init_aintexpr]))(var3, var_tnumbernode2, var4) /* init_aintexpr on <var3:AIntExpr>*/;
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction794> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction794#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction794__action(val* self, val* p0) {
parser__ReduceAction794__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction795#action for (self: ReduceAction795, Parser) */
void parser__ReduceAction795__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27696);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27698);
show_backtrace(1);
}
var7 = NEW_parser_nodes__AIntExpr(&type_parser_nodes__AIntExpr);
((void (*)(val*, val*, val*))(var7->class->vft[COLOR_parser_prod__AIntExpr__init_aintexpr]))(var7, var_tnumbernode2, var_pannotationsnode3) /* init_aintexpr on <var7:AIntExpr>*/;
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction795> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction795#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction795__action(val* self, val* p0) {
parser__ReduceAction795__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction796#action for (self: ReduceAction796, Parser) */
void parser__ReduceAction796__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27714);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AFloatExpr(&type_parser_nodes__AFloatExpr);
var4 = NULL;
((void (*)(val*, val*, val*))(var3->class->vft[COLOR_parser_prod__AFloatExpr__init_afloatexpr]))(var3, var_tfloatnode2, var4) /* init_afloatexpr on <var3:AFloatExpr>*/;
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction796> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27731);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27733);
show_backtrace(1);
}
var7 = NEW_parser_nodes__AFloatExpr(&type_parser_nodes__AFloatExpr);
((void (*)(val*, val*, val*))(var7->class->vft[COLOR_parser_prod__AFloatExpr__init_afloatexpr]))(var7, var_tfloatnode2, var_pannotationsnode3) /* init_afloatexpr on <var7:AFloatExpr>*/;
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction797> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27749);
show_backtrace(1);
}
var3 = NEW_parser_nodes__ACharExpr(&type_parser_nodes__ACharExpr);
var4 = NULL;
((void (*)(val*, val*, val*))(var3->class->vft[COLOR_parser_prod__ACharExpr__init_acharexpr]))(var3, var_tcharnode2, var4) /* init_acharexpr on <var3:ACharExpr>*/;
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction798> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27766);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27768);
show_backtrace(1);
}
var7 = NEW_parser_nodes__ACharExpr(&type_parser_nodes__ACharExpr);
((void (*)(val*, val*, val*))(var7->class->vft[COLOR_parser_prod__ACharExpr__init_acharexpr]))(var7, var_tcharnode2, var_pannotationsnode3) /* init_acharexpr on <var7:ACharExpr>*/;
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction799> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27784);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AStringExpr(&type_parser_nodes__AStringExpr);
var4 = NULL;
((void (*)(val*, val*, val*))(var3->class->vft[COLOR_parser_prod__AStringExpr__init_astringexpr]))(var3, var_tstringnode2, var4) /* init_astringexpr on <var3:AStringExpr>*/;
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction800> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction800#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction800__action(val* self, val* p0) {
parser__ReduceAction800__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction801#action for (self: ReduceAction801, Parser) */
void parser__ReduceAction801__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27801);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27803);
show_backtrace(1);
}
var7 = NEW_parser_nodes__AStringExpr(&type_parser_nodes__AStringExpr);
((void (*)(val*, val*, val*))(var7->class->vft[COLOR_parser_prod__AStringExpr__init_astringexpr]))(var7, var_tstringnode2, var_pannotationsnode3) /* init_astringexpr on <var7:AStringExpr>*/;
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction801> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction801#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction801__action(val* self, val* p0) {
parser__ReduceAction801__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction803#action for (self: ReduceAction803, Parser) */
void parser__ReduceAction803__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27823);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27825);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27827);
show_backtrace(1);
}
var13 = NEW_parser_nodes__AParExpr(&type_parser_nodes__AParExpr);
var14 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var13->class->vft[COLOR_parser_prod__AParExpr__init_aparexpr]))(var13, var_toparnode2, var_pexprnode3, var_tcparnode4, var14) /* init_aparexpr on <var13:AParExpr>*/;
var_pexprnode1 = var13;
var_node_list = var_pexprnode1;
var15 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction803> */
var16 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var15) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var16, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction803#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction803__action(val* self, val* p0) {
parser__ReduceAction803__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction804#action for (self: ReduceAction804, Parser) */
void parser__ReduceAction804__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27850);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27852);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27854);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27856);
show_backtrace(1);
}
var17 = NEW_parser_nodes__AParExpr(&type_parser_nodes__AParExpr);
((void (*)(val*, val*, val*, val*, val*))(var17->class->vft[COLOR_parser_prod__AParExpr__init_aparexpr]))(var17, var_toparnode2, var_pexprnode3, var_tcparnode4, var_pannotationsnode5) /* init_aparexpr on <var17:AParExpr>*/;
var_pexprnode1 = var17;
var_node_list = var_pexprnode1;
var18 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction804> */
var19 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var18) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var19, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction804#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction804__action(val* self, val* p0) {
parser__ReduceAction804__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction805#action for (self: ReduceAction805, Parser) */
void parser__ReduceAction805__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27883);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27885);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27887);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27889);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27891);
show_backtrace(1);
}
var24 = NEW_parser_nodes__AAsCastExpr(&type_parser_nodes__AAsCastExpr);
((void (*)(val*, val*, val*, val*, val*, val*))(var24->class->vft[COLOR_parser_prod__AAsCastExpr__init_aascastexpr]))(var24, var_pexprnode2, var_tkwasnode3, var_toparnode4, var_ptypenode5, var_tcparnode6) /* init_aascastexpr on <var24:AAsCastExpr>*/;
var_pexprnode1 = var24;
var_node_list = var_pexprnode1;
var25 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction805> */
var26 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var25) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var26, var_node_list) /* push on <var_p:Parser>*/;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27921);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27923);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27925);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27927);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27929);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27931);
show_backtrace(1);
}
var29 = NEW_parser_nodes__AAsNotnullExpr(&type_parser_nodes__AAsNotnullExpr);
((void (*)(val*, val*, val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AAsNotnullExpr__init_aasnotnullexpr]))(var29, var_pexprnode2, var_tkwasnode3, var_toparnode4, var_tkwnotnode5, var_tkwnullnode6, var_tcparnode7) /* init_aasnotnullexpr on <var29:AAsNotnullExpr>*/;
var_pexprnode1 = var29;
var_node_list = var_pexprnode1;
var30 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction806> */
var31 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var30) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var31, var_node_list) /* push on <var_p:Parser>*/;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27953);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27955);
show_backtrace(1);
}
var8 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode2) /* concat on <self:ReduceAction807>*/;
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
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var13 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction807> */
var14 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var13) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var14, var_node_list) /* push on <var_p:Parser>*/;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27978);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27980);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 27982);
show_backtrace(1);
}
var12 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode2) /* concat on <self:ReduceAction808>*/;
var_listnode5 = var12;
var13 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode3) /* concat on <self:ReduceAction808>*/;
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
var_pexprnode1 = var16;
var_node_list = var_pexprnode1;
var18 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction808> */
var19 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var18) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var19, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction808#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction808__action(val* self, val* p0) {
parser__ReduceAction808__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction809#action for (self: ReduceAction809, Parser) */
void parser__ReduceAction809__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28006);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28008);
show_backtrace(1);
}
var9 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode2) /* concat on <self:ReduceAction809>*/;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28014);
show_backtrace(1);
}
var15 = NEW_parser_nodes__ASuperstringExpr(&type_parser_nodes__ASuperstringExpr);
((void (*)(val*, val*, val*))(var15->class->vft[COLOR_parser_prod__ASuperstringExpr__init_asuperstringexpr]))(var15, var_listnode4, var_pannotationsnode5) /* init_asuperstringexpr on <var15:ASuperstringExpr>*/;
var_pexprnode1 = var15;
var_node_list = var_pexprnode1;
var16 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction809> */
var17 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var16) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var17, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction809#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction809__action(val* self, val* p0) {
parser__ReduceAction809__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction810#action for (self: ReduceAction810, Parser) */
void parser__ReduceAction810__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28034);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28036);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28038);
show_backtrace(1);
}
var13 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode2) /* concat on <self:ReduceAction810>*/;
var_listnode5 = var13;
var14 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode3) /* concat on <self:ReduceAction810>*/;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28045);
show_backtrace(1);
}
var20 = NEW_parser_nodes__ASuperstringExpr(&type_parser_nodes__ASuperstringExpr);
((void (*)(val*, val*, val*))(var20->class->vft[COLOR_parser_prod__ASuperstringExpr__init_asuperstringexpr]))(var20, var_listnode5, var_pannotationsnode6) /* init_asuperstringexpr on <var20:ASuperstringExpr>*/;
var_pexprnode1 = var20;
var_node_list = var_pexprnode1;
var21 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction810> */
var22 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var21) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var22, var_node_list) /* push on <var_p:Parser>*/;
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
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction811> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction811#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction811__action(val* self, val* p0) {
parser__ReduceAction811__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction812#action for (self: ReduceAction812, Parser) */
void parser__ReduceAction812__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28083);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AStartStringExpr(&type_parser_nodes__AStartStringExpr);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__AStartStringExpr__init_astartstringexpr]))(var3, var_tstartstringnode2) /* init_astartstringexpr on <var3:AStartStringExpr>*/;
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction812> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction812#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction812__action(val* self, val* p0) {
parser__ReduceAction812__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction814#action for (self: ReduceAction814, Parser) */
void parser__ReduceAction814__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28098);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AMidStringExpr(&type_parser_nodes__AMidStringExpr);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__AMidStringExpr__init_amidstringexpr]))(var3, var_tmidstringnode2) /* init_amidstringexpr on <var3:AMidStringExpr>*/;
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction814> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction814#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction814__action(val* self, val* p0) {
parser__ReduceAction814__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction815#action for (self: ReduceAction815, Parser) */
void parser__ReduceAction815__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28113);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AEndStringExpr(&type_parser_nodes__AEndStringExpr);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__AEndStringExpr__init_aendstringexpr]))(var3, var_tendstringnode2) /* init_aendstringexpr on <var3:AEndStringExpr>*/;
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction815> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction815#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction815__action(val* self, val* p0) {
parser__ReduceAction815__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction816#action for (self: ReduceAction816, Parser) */
void parser__ReduceAction816__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28130);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28132);
show_backtrace(1);
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
var_pannotationsnode1 = var10;
var_node_list = var_pannotationsnode1;
var13 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction816> */
var14 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var13) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var14, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction816#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction816__action(val* self, val* p0) {
parser__ReduceAction816__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction817#action for (self: ReduceAction817, Parser) */
void parser__ReduceAction817__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28159);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28161);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28163);
show_backtrace(1);
}
var15 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode4) /* concat on <self:ReduceAction817>*/;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28166);
show_backtrace(1);
}
var19 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
((void (*)(val*, val*, val*, val*, val*))(var19->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var19, var_tatnode2, var_toparnode3, var_listnode5, var_tcparnode6) /* init_aannotations on <var19:AAnnotations>*/;
var_pannotationsnode1 = var19;
var_node_list = var_pannotationsnode1;
var20 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction817> */
var21 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var20) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var21, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction817#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction817__action(val* self, val* p0) {
parser__ReduceAction817__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction818#action for (self: ReduceAction818, Parser) */
void parser__ReduceAction818__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28185);
show_backtrace(1);
}
var4 = NEW_parser_nodes__AAnnotation(&type_parser_nodes__AAnnotation);
var5 = NULL;
var6 = NULL;
var7 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*))(var4->class->vft[COLOR_parser_prod__AAnnotation__init_aannotation]))(var4, var_patidnode2, var5, var_listnode4, var6, var7) /* init_aannotation on <var4:AAnnotation>*/;
var_pannotationnode1 = var4;
var_node_list = var_pannotationnode1;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction818> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction818#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction818__action(val* self, val* p0) {
parser__ReduceAction818__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction819#action for (self: ReduceAction819, Parser) */
void parser__ReduceAction819__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28206);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28208);
show_backtrace(1);
}
var8 = NEW_parser_nodes__AAnnotation(&type_parser_nodes__AAnnotation);
var9 = NULL;
var10 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*))(var8->class->vft[COLOR_parser_prod__AAnnotation__init_aannotation]))(var8, var_patidnode2, var9, var_listnode4, var10, var_pannotationsnode6) /* init_aannotation on <var8:AAnnotation>*/;
var_pannotationnode1 = var8;
var_node_list = var_pannotationnode1;
var11 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction819> */
var12 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var11) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var12, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction819#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction819__action(val* self, val* p0) {
parser__ReduceAction819__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction820#action for (self: ReduceAction820, Parser) */
void parser__ReduceAction820__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28233);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28235);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28237);
show_backtrace(1);
}
var15 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode4) /* concat on <self:ReduceAction820>*/;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28240);
show_backtrace(1);
}
var19 = NEW_parser_nodes__AAnnotation(&type_parser_nodes__AAnnotation);
var20 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*))(var19->class->vft[COLOR_parser_prod__AAnnotation__init_aannotation]))(var19, var_patidnode2, var_toparnode3, var_listnode5, var_tcparnode6, var20) /* init_aannotation on <var19:AAnnotation>*/;
var_pannotationnode1 = var19;
var_node_list = var_pannotationnode1;
var21 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction820> */
var22 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var21) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var22, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction820#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction820__action(val* self, val* p0) {
parser__ReduceAction820__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction821#action for (self: ReduceAction821, Parser) */
void parser__ReduceAction821__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28266);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28268);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28270);
show_backtrace(1);
}
var16 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode4) /* concat on <self:ReduceAction821>*/;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28273);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28275);
show_backtrace(1);
}
var23 = NEW_parser_nodes__AAnnotation(&type_parser_nodes__AAnnotation);
((void (*)(val*, val*, val*, val*, val*, val*))(var23->class->vft[COLOR_parser_prod__AAnnotation__init_aannotation]))(var23, var_patidnode2, var_toparnode3, var_listnode5, var_tcparnode6, var_pannotationsnode7) /* init_aannotation on <var23:AAnnotation>*/;
var_pannotationnode1 = var23;
var_node_list = var_pannotationnode1;
var24 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction821> */
var25 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var24) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var25, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction821#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction821__action(val* self, val* p0) {
parser__ReduceAction821__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction822#action for (self: ReduceAction822, Parser) */
void parser__ReduceAction822__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28295);
show_backtrace(1);
}
var4 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode4) /* concat on <self:ReduceAction822>*/;
var_listnode5 = var4;
var5 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var6 = NULL;
var7 = NULL;
var8 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var5->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var5, var6, var7, var_listnode5, var8) /* init_aannotations on <var5:AAnnotations>*/;
var_pannotationsnode1 = var5;
var_node_list = var_pannotationsnode1;
var9 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction822> */
var10 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var9) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var10, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction822#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction822__action(val* self, val* p0) {
parser__ReduceAction822__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction823#action for (self: ReduceAction823, Parser) */
void parser__ReduceAction823__action(val* self, val* p0) {
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
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction823> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction823#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction823__action(val* self, val* p0) {
parser__ReduceAction823__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction824#action for (self: ReduceAction824, Parser) */
void parser__ReduceAction824__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28332);
show_backtrace(1);
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
var7 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode3, var_listnode2) /* concat on <self:ReduceAction824>*/;
var_listnode3 = var7;
var_node_list = var_listnode3;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction824> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction824#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction824__action(val* self, val* p0) {
parser__ReduceAction824__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction826#action for (self: ReduceAction826, Parser) */
void parser__ReduceAction826__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28351);
show_backtrace(1);
}
var6 = NEW_parser_nodes__AAnnotation(&type_parser_nodes__AAnnotation);
var7 = NULL;
var8 = NULL;
var9 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*))(var6->class->vft[COLOR_parser_prod__AAnnotation__init_aannotation]))(var6, var_patidnode2, var7, var_listnode4, var8, var9) /* init_aannotation on <var6:AAnnotation>*/;
var_pannotationnode1 = var6;
var_node_list = var_pannotationnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction826> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction826#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction826__action(val* self, val* p0) {
parser__ReduceAction826__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction827#action for (self: ReduceAction827, Parser) */
void parser__ReduceAction827__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28374);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28376);
show_backtrace(1);
}
var10 = NEW_parser_nodes__AAnnotation(&type_parser_nodes__AAnnotation);
var11 = NULL;
var12 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*))(var10->class->vft[COLOR_parser_prod__AAnnotation__init_aannotation]))(var10, var_patidnode2, var11, var_listnode4, var12, var_pannotationsnode6) /* init_aannotation on <var10:AAnnotation>*/;
var_pannotationnode1 = var10;
var_node_list = var_pannotationnode1;
var13 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction827> */
var14 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var13) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var14, var_node_list) /* push on <var_p:Parser>*/;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28402);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28404);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28406);
show_backtrace(1);
}
var16 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode4) /* concat on <self:ReduceAction828>*/;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28409);
show_backtrace(1);
}
var20 = NEW_parser_nodes__AAnnotation(&type_parser_nodes__AAnnotation);
var21 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*))(var20->class->vft[COLOR_parser_prod__AAnnotation__init_aannotation]))(var20, var_patidnode2, var_toparnode3, var_listnode5, var_tcparnode6, var21) /* init_aannotation on <var20:AAnnotation>*/;
var_pannotationnode1 = var20;
var_node_list = var_pannotationnode1;
var22 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction828> */
var23 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var22) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var23, var_node_list) /* push on <var_p:Parser>*/;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28436);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28438);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28440);
show_backtrace(1);
}
var17 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode4) /* concat on <self:ReduceAction829>*/;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28443);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28445);
show_backtrace(1);
}
var24 = NEW_parser_nodes__AAnnotation(&type_parser_nodes__AAnnotation);
((void (*)(val*, val*, val*, val*, val*, val*))(var24->class->vft[COLOR_parser_prod__AAnnotation__init_aannotation]))(var24, var_patidnode2, var_toparnode3, var_listnode5, var_tcparnode6, var_pannotationsnode7) /* init_aannotation on <var24:AAnnotation>*/;
var_pannotationnode1 = var24;
var_node_list = var_pannotationnode1;
var25 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction829> */
var26 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var25) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var26, var_node_list) /* push on <var_p:Parser>*/;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28468);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28470);
show_backtrace(1);
}
var10 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode4) /* concat on <self:ReduceAction830>*/;
var_listnode5 = var10;
var11 = NEW_parser_nodes__AAnnotation(&type_parser_nodes__AAnnotation);
var12 = NULL;
var13 = NULL;
var14 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*))(var11->class->vft[COLOR_parser_prod__AAnnotation__init_aannotation]))(var11, var_patidnode2, var12, var_listnode5, var13, var14) /* init_aannotation on <var11:AAnnotation>*/;
var_pannotationnode1 = var11;
var_node_list = var_pannotationnode1;
var15 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction830> */
var16 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var15) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var16, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction830#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction830__action(val* self, val* p0) {
parser__ReduceAction830__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction831#action for (self: ReduceAction831, Parser) */
void parser__ReduceAction831__action(val* self, val* p0) {
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
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction831> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction831#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction831__action(val* self, val* p0) {
parser__ReduceAction831__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction832#action for (self: ReduceAction832, Parser) */
void parser__ReduceAction832__action(val* self, val* p0) {
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
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction832> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28521);
show_backtrace(1);
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
var7 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode3, var_listnode2) /* concat on <self:ReduceAction833>*/;
var_listnode3 = var7;
var_node_list = var_listnode3;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction833> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
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
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_patargnode1 /* var patargnode1: nullable Object */;
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
var_patargnode1 = var_nodearraylist3;
var_node_list = var_patargnode1;
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction834> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
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
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_ptypenode2 /* var ptypenode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : ATypeAtArg */;
val* var_patargnode1 /* var patargnode1: nullable ATypeAtArg */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var_ptypenode2 = var_nodearraylist1;
/* <var_ptypenode2:nullable Object> isa nullable AType */
cltype = type_nullable_parser_nodes__AType.color;
idtype = type_nullable_parser_nodes__AType.id;
if(var_ptypenode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_ptypenode2->type->table_size) {
var2 = 0;
} else {
var2 = var_ptypenode2->type->type_table[cltype] == idtype;
}
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28550);
show_backtrace(1);
}
var3 = NEW_parser_nodes__ATypeAtArg(&type_parser_nodes__ATypeAtArg);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__ATypeAtArg__init_atypeatarg]))(var3, var_ptypenode2) /* init_atypeatarg on <var3:ATypeAtArg>*/;
var_patargnode1 = var3;
var_node_list = var_patargnode1;
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction835> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AExprAtArg */;
val* var_patargnode1 /* var patargnode1: nullable AExprAtArg */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28565);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AExprAtArg(&type_parser_nodes__AExprAtArg);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__AExprAtArg__init_aexpratarg]))(var3, var_pexprnode2) /* init_aexpratarg on <var3:AExprAtArg>*/;
var_patargnode1 = var3;
var_node_list = var_patargnode1;
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction836> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction836#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction836__action(val* self, val* p0) {
parser__ReduceAction836__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction838#action for (self: ReduceAction838, Parser) */
void parser__ReduceAction838__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pannotationsnode2 /* var pannotationsnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AAtAtArg */;
val* var_patargnode1 /* var patargnode1: nullable AAtAtArg */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var_pannotationsnode2 = var_nodearraylist1;
/* <var_pannotationsnode2:nullable Object> isa nullable AAnnotations */
cltype = type_nullable_parser_nodes__AAnnotations.color;
idtype = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_pannotationsnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_pannotationsnode2->type->type_table[cltype] == idtype;
}
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28580);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AAtAtArg(&type_parser_nodes__AAtAtArg);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__AAtAtArg__init_aatatarg]))(var3, var_pannotationsnode2) /* init_aatatarg on <var3:AAtAtArg>*/;
var_patargnode1 = var3;
var_node_list = var_patargnode1;
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction838> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
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
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tidnode2 /* var tidnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AIdAtid */;
val* var_patidnode1 /* var patidnode1: nullable AIdAtid */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var_tidnode2 = var_nodearraylist1;
/* <var_tidnode2:nullable Object> isa nullable TId */
cltype = type_nullable_parser_nodes__TId.color;
idtype = type_nullable_parser_nodes__TId.id;
if(var_tidnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tidnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tidnode2->type->type_table[cltype] == idtype;
}
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28595);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AIdAtid(&type_parser_nodes__AIdAtid);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__AIdAtid__init_aidatid]))(var3, var_tidnode2) /* init_aidatid on <var3:AIdAtid>*/;
var_patidnode1 = var3;
var_node_list = var_patidnode1;
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction839> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
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
val* var_tkwreadablenode2 /* var tkwreadablenode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AKwreadableAtid */;
val* var_patidnode1 /* var patidnode1: nullable AKwreadableAtid */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var_tkwreadablenode2 = var_nodearraylist1;
/* <var_tkwreadablenode2:nullable Object> isa nullable TKwreadable */
cltype = type_nullable_parser_nodes__TKwreadable.color;
idtype = type_nullable_parser_nodes__TKwreadable.id;
if(var_tkwreadablenode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tkwreadablenode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tkwreadablenode2->type->type_table[cltype] == idtype;
}
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28610);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AKwreadableAtid(&type_parser_nodes__AKwreadableAtid);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__AKwreadableAtid__init_akwreadableatid]))(var3, var_tkwreadablenode2) /* init_akwreadableatid on <var3:AKwreadableAtid>*/;
var_patidnode1 = var3;
var_node_list = var_patidnode1;
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction840> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
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
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwwritablenode2 /* var tkwwritablenode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AKwwritableAtid */;
val* var_patidnode1 /* var patidnode1: nullable AKwwritableAtid */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var_tkwwritablenode2 = var_nodearraylist1;
/* <var_tkwwritablenode2:nullable Object> isa nullable TKwwritable */
cltype = type_nullable_parser_nodes__TKwwritable.color;
idtype = type_nullable_parser_nodes__TKwwritable.id;
if(var_tkwwritablenode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tkwwritablenode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tkwwritablenode2->type->type_table[cltype] == idtype;
}
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28625);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AKwwritableAtid(&type_parser_nodes__AKwwritableAtid);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__AKwwritableAtid__init_akwwritableatid]))(var3, var_tkwwritablenode2) /* init_akwwritableatid on <var3:AKwwritableAtid>*/;
var_patidnode1 = var3;
var_node_list = var_patidnode1;
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction841> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
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
val* var_tkwimportnode2 /* var tkwimportnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AKwimportAtid */;
val* var_patidnode1 /* var patidnode1: nullable AKwimportAtid */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var_tkwimportnode2 = var_nodearraylist1;
/* <var_tkwimportnode2:nullable Object> isa nullable TKwimport */
cltype = type_nullable_parser_nodes__TKwimport.color;
idtype = type_nullable_parser_nodes__TKwimport.id;
if(var_tkwimportnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tkwimportnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tkwimportnode2->type->type_table[cltype] == idtype;
}
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28640);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AKwimportAtid(&type_parser_nodes__AKwimportAtid);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__AKwimportAtid__init_akwimportatid]))(var3, var_tkwimportnode2) /* init_akwimportatid on <var3:AKwimportAtid>*/;
var_patidnode1 = var3;
var_node_list = var_patidnode1;
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction842> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
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
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var5 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var_toparnode2 /* var toparnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : Array[Object] */;
val* var_tcparnode5 /* var tcparnode5: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : AParExprs */;
val* var_pexprsnode1 /* var pexprsnode1: nullable AParExprs */;
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
var_listnode4 = var5;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28659);
show_backtrace(1);
}
var_listnode3 = var_nodearraylist3;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28661);
show_backtrace(1);
}
var10 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction843>*/;
var_listnode4 = var10;
var_tcparnode5 = var_nodearraylist4;
/* <var_tcparnode5:nullable Object> isa nullable TCpar */
cltype12 = type_nullable_parser_nodes__TCpar.color;
idtype13 = type_nullable_parser_nodes__TCpar.id;
if(var_tcparnode5 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_tcparnode5->type->table_size) {
var11 = 0;
} else {
var11 = var_tcparnode5->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28664);
show_backtrace(1);
}
var14 = NEW_parser_nodes__AParExprs(&type_parser_nodes__AParExprs);
((void (*)(val*, val*, val*, val*))(var14->class->vft[COLOR_parser_prod__AParExprs__init_aparexprs]))(var14, var_toparnode2, var_listnode4, var_tcparnode5) /* init_aparexprs on <var14:AParExprs>*/;
var_pexprsnode1 = var14;
var_node_list = var_pexprsnode1;
var15 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction843> */
var16 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var15) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var16, var_node_list) /* push on <var_p:Parser>*/;
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
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var4 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_toparnode2 /* var toparnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_tcparnode4 /* var tcparnode4: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : AParExprs */;
val* var_pexprsnode1 /* var pexprsnode1: nullable AParExprs */;
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
var_listnode3 = var4;
var_toparnode2 = var_nodearraylist1;
/* <var_toparnode2:nullable Object> isa nullable TOpar */
cltype = type_nullable_parser_nodes__TOpar.color;
idtype = type_nullable_parser_nodes__TOpar.id;
if(var_toparnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= var_toparnode2->type->table_size) {
var5 = 0;
} else {
var5 = var_toparnode2->type->type_table[cltype] == idtype;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28684);
show_backtrace(1);
}
var_tcparnode4 = var_nodearraylist3;
/* <var_tcparnode4:nullable Object> isa nullable TCpar */
cltype7 = type_nullable_parser_nodes__TCpar.color;
idtype8 = type_nullable_parser_nodes__TCpar.id;
if(var_tcparnode4 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_tcparnode4->type->table_size) {
var6 = 0;
} else {
var6 = var_tcparnode4->type->type_table[cltype7] == idtype8;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28686);
show_backtrace(1);
}
var9 = NEW_parser_nodes__AParExprs(&type_parser_nodes__AParExprs);
((void (*)(val*, val*, val*, val*))(var9->class->vft[COLOR_parser_prod__AParExprs__init_aparexprs]))(var9, var_toparnode2, var_listnode3, var_tcparnode4) /* init_aparexprs on <var9:AParExprs>*/;
var_pexprsnode1 = var9;
var_node_list = var_pexprsnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction844> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
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
val* var1 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var2 /* : AListExprs */;
val* var_pexprsnode1 /* var pexprsnode1: nullable AListExprs */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var1->class->vft[COLOR_array__Array__init]))(var1) /* init on <var1:Array[Object]>*/;
var_listnode2 = var1;
var2 = NEW_parser_nodes__AListExprs(&type_parser_nodes__AListExprs);
((void (*)(val*, val*))(var2->class->vft[COLOR_parser_prod__AListExprs__init_alistexprs]))(var2, var_listnode2) /* init_alistexprs on <var2:AListExprs>*/;
var_pexprsnode1 = var2;
var_node_list = var_pexprsnode1;
var3 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction845> */
var4 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var3) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var4, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction845#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction845__action(val* self, val* p0) {
parser__ReduceAction845__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction847#action for (self: ReduceAction847, Parser) */
void parser__ReduceAction847__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : null */;
short int var5 /* : Bool */;
val* var6 /* : AListExprs */;
val* var_pexprsnode1 /* var pexprsnode1: nullable AListExprs */;
long var7 /* : Int */;
long var8 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var2 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var2->class->vft[COLOR_array__Array__init]))(var2) /* init on <var2:Array[Object]>*/;
var_listnode3 = var2;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28717);
show_backtrace(1);
}
var4 = NULL;
if (var_pexprnode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (var5){
((void (*)(val*, val*))(var_listnode3->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode3, var_pexprnode2) /* add on <var_listnode3:Array[Object]>*/;
} else {
}
var6 = NEW_parser_nodes__AListExprs(&type_parser_nodes__AListExprs);
((void (*)(val*, val*))(var6->class->vft[COLOR_parser_prod__AListExprs__init_alistexprs]))(var6, var_listnode3) /* init_alistexprs on <var6:AListExprs>*/;
var_pexprsnode1 = var6;
var_node_list = var_pexprsnode1;
var7 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction847> */
var8 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var7) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var8, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction847#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction847__action(val* self, val* p0) {
parser__ReduceAction847__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction850#action for (self: ReduceAction850, Parser) */
void parser__ReduceAction850__action(val* self, val* p0) {
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
val* var_tobranode2 /* var tobranode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : Array[Object] */;
val* var_tcbranode5 /* var tcbranode5: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : ABraExprs */;
val* var_pexprsnode1 /* var pexprsnode1: nullable ABraExprs */;
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
var_listnode4 = var5;
var_tobranode2 = var_nodearraylist1;
/* <var_tobranode2:nullable Object> isa nullable TObra */
cltype = type_nullable_parser_nodes__TObra.color;
idtype = type_nullable_parser_nodes__TObra.id;
if(var_tobranode2 == NULL) {
var6 = 1;
} else {
if(cltype >= var_tobranode2->type->table_size) {
var6 = 0;
} else {
var6 = var_tobranode2->type->type_table[cltype] == idtype;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28739);
show_backtrace(1);
}
var_listnode3 = var_nodearraylist3;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28741);
show_backtrace(1);
}
var10 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction850>*/;
var_listnode4 = var10;
var_tcbranode5 = var_nodearraylist4;
/* <var_tcbranode5:nullable Object> isa nullable TCbra */
cltype12 = type_nullable_parser_nodes__TCbra.color;
idtype13 = type_nullable_parser_nodes__TCbra.id;
if(var_tcbranode5 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_tcbranode5->type->table_size) {
var11 = 0;
} else {
var11 = var_tcbranode5->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28744);
show_backtrace(1);
}
var14 = NEW_parser_nodes__ABraExprs(&type_parser_nodes__ABraExprs);
((void (*)(val*, val*, val*, val*))(var14->class->vft[COLOR_parser_prod__ABraExprs__init_abraexprs]))(var14, var_tobranode2, var_listnode4, var_tcbranode5) /* init_abraexprs on <var14:ABraExprs>*/;
var_pexprsnode1 = var14;
var_node_list = var_pexprsnode1;
var15 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction850> */
var16 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var15) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var16, var_node_list) /* push on <var_p:Parser>*/;
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
val* var3 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_pexprnode1 /* var pexprnode1: nullable Object */;
val* var4 /* : null */;
short int var5 /* : Bool */;
long var6 /* : Int */;
long var7 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var3->class->vft[COLOR_array__Array__init]))(var3) /* init on <var3:Array[Object]>*/;
var_listnode2 = var3;
var_pexprnode1 = var_nodearraylist1;
var4 = NULL;
if (var_pexprnode1 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (var5){
((void (*)(val*, val*))(var_listnode2->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode2, var_pexprnode1) /* add on <var_listnode2:Array[Object]>*/;
} else {
}
var_node_list = var_listnode2;
var6 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction851> */
var7 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var6) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var7, var_node_list) /* push on <var_p:Parser>*/;
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
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var4 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_pexprnode1 /* var pexprnode1: nullable Object */;
val* var_listnode2 /* var listnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var6 /* : null */;
short int var7 /* : Bool */;
val* var8 /* : Array[Object] */;
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
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
var_listnode3 = var4;
var_pexprnode1 = var_nodearraylist1;
var_listnode2 = var_nodearraylist3;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28781);
show_backtrace(1);
}
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
var8 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode3, var_listnode2) /* concat on <self:ReduceAction852>*/;
var_listnode3 = var8;
var_node_list = var_listnode3;
var9 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction852> */
var10 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var9) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var10, var_node_list) /* push on <var_p:Parser>*/;
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
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode1 /* var pexprnode1: nullable Object */;
long var5 /* : Int */;
long var6 /* : Int */;
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
var_pexprnode1 = var_nodearraylist3;
var_node_list = var_pexprnode1;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction853> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction853#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction853__action(val* self, val* p0) {
parser__ReduceAction853__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction854#action for (self: ReduceAction854, Parser) */
void parser__ReduceAction854__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_tidnode1 /* var tidnode1: nullable Object */;
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
var_listnode2 = var2;
var_tidnode1 = var_nodearraylist1;
var3 = NULL;
if (var_tidnode1 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (var4){
((void (*)(val*, val*))(var_listnode2->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode2, var_tidnode1) /* add on <var_listnode2:Array[Object]>*/;
} else {
}
var_node_list = var_listnode2;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction854> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction854#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction854__action(val* self, val* p0) {
parser__ReduceAction854__action(self, p0);
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
val* var6 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode2 /* var tidnode2: nullable Object */;
val* var8 /* : Array[Object] */;
val* var9 /* : null */;
short int var10 /* : Bool */;
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
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
var_listnode3 = var6;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode1 == NULL) {
var7 = 0;
} else {
if(cltype >= var_listnode1->type->table_size) {
var7 = 0;
} else {
var7 = var_listnode1->type->type_table[cltype] == idtype;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28831);
show_backtrace(1);
}
var_tidnode2 = var_nodearraylist5;
var8 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode3, var_listnode1) /* concat on <self:ReduceAction855>*/;
var_listnode3 = var8;
var9 = NULL;
if (var_tidnode2 == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (var10){
((void (*)(val*, val*))(var_listnode3->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode3, var_tidnode2) /* add on <var_listnode3:Array[Object]>*/;
} else {
}
var_node_list = var_listnode3;
var11 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction855> */
var12 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var11) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var12, var_node_list) /* push on <var_p:Parser>*/;
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
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_tidnode4 /* var tidnode4: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : AModuleName */;
val* var5 /* : null */;
val* var_pmodulenamenode1 /* var pmodulenamenode1: nullable AModuleName */;
long var6 /* : Int */;
long var7 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var2 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var2->class->vft[COLOR_array__Array__init]))(var2) /* init on <var2:Array[Object]>*/;
var_listnode3 = var2;
var_tidnode4 = var_nodearraylist1;
/* <var_tidnode4:nullable Object> isa nullable TId */
cltype = type_nullable_parser_nodes__TId.color;
idtype = type_nullable_parser_nodes__TId.id;
if(var_tidnode4 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tidnode4->type->table_size) {
var3 = 0;
} else {
var3 = var_tidnode4->type->type_table[cltype] == idtype;
}
}
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28849);
show_backtrace(1);
}
var4 = NEW_parser_nodes__AModuleName(&type_parser_nodes__AModuleName);
var5 = NULL;
((void (*)(val*, val*, val*, val*))(var4->class->vft[COLOR_parser_prod__AModuleName__init_amodulename]))(var4, var5, var_listnode3, var_tidnode4) /* init_amodulename on <var4:AModuleName>*/;
var_pmodulenamenode1 = var4;
var_node_list = var_pmodulenamenode1;
var6 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction856> */
var7 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var6) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var7, var_node_list) /* push on <var_p:Parser>*/;
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
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : Array[Object] */;
val* var_tidnode5 /* var tidnode5: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : AModuleName */;
val* var10 /* : null */;
val* var_pmodulenamenode1 /* var pmodulenamenode1: nullable AModuleName */;
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
var_listnode4 = var3;
var_listnode3 = var_nodearraylist1;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode3 == NULL) {
var4 = 0;
} else {
if(cltype >= var_listnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_listnode3->type->type_table[cltype] == idtype;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28868);
show_backtrace(1);
}
var5 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction857>*/;
var_listnode4 = var5;
var_tidnode5 = var_nodearraylist2;
/* <var_tidnode5:nullable Object> isa nullable TId */
cltype7 = type_nullable_parser_nodes__TId.color;
idtype8 = type_nullable_parser_nodes__TId.id;
if(var_tidnode5 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_tidnode5->type->table_size) {
var6 = 0;
} else {
var6 = var_tidnode5->type->type_table[cltype7] == idtype8;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28871);
show_backtrace(1);
}
var9 = NEW_parser_nodes__AModuleName(&type_parser_nodes__AModuleName);
var10 = NULL;
((void (*)(val*, val*, val*, val*))(var9->class->vft[COLOR_parser_prod__AModuleName__init_amodulename]))(var9, var10, var_listnode4, var_tidnode5) /* init_amodulename on <var9:AModuleName>*/;
var_pmodulenamenode1 = var9;
var_node_list = var_pmodulenamenode1;
var11 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction857> */
var12 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var11) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var12, var_node_list) /* push on <var_p:Parser>*/;
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
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var4 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_tquadnode2 /* var tquadnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode4 /* var tidnode4: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : AModuleName */;
val* var_pmodulenamenode1 /* var pmodulenamenode1: nullable AModuleName */;
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
var_listnode3 = var4;
var_tquadnode2 = var_nodearraylist1;
/* <var_tquadnode2:nullable Object> isa nullable TQuad */
cltype = type_nullable_parser_nodes__TQuad.color;
idtype = type_nullable_parser_nodes__TQuad.id;
if(var_tquadnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= var_tquadnode2->type->table_size) {
var5 = 0;
} else {
var5 = var_tquadnode2->type->type_table[cltype] == idtype;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28891);
show_backtrace(1);
}
var_tidnode4 = var_nodearraylist3;
/* <var_tidnode4:nullable Object> isa nullable TId */
cltype7 = type_nullable_parser_nodes__TId.color;
idtype8 = type_nullable_parser_nodes__TId.id;
if(var_tidnode4 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_tidnode4->type->table_size) {
var6 = 0;
} else {
var6 = var_tidnode4->type->type_table[cltype7] == idtype8;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28893);
show_backtrace(1);
}
var9 = NEW_parser_nodes__AModuleName(&type_parser_nodes__AModuleName);
((void (*)(val*, val*, val*, val*))(var9->class->vft[COLOR_parser_prod__AModuleName__init_amodulename]))(var9, var_tquadnode2, var_listnode3, var_tidnode4) /* init_amodulename on <var9:AModuleName>*/;
var_pmodulenamenode1 = var9;
var_node_list = var_pmodulenamenode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction858> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
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
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var5 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var_tquadnode2 /* var tquadnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : Array[Object] */;
val* var_tidnode5 /* var tidnode5: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : AModuleName */;
val* var_pmodulenamenode1 /* var pmodulenamenode1: nullable AModuleName */;
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
var_listnode4 = var5;
var_tquadnode2 = var_nodearraylist1;
/* <var_tquadnode2:nullable Object> isa nullable TQuad */
cltype = type_nullable_parser_nodes__TQuad.color;
idtype = type_nullable_parser_nodes__TQuad.id;
if(var_tquadnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= var_tquadnode2->type->table_size) {
var6 = 0;
} else {
var6 = var_tquadnode2->type->type_table[cltype] == idtype;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28914);
show_backtrace(1);
}
var_listnode3 = var_nodearraylist3;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28916);
show_backtrace(1);
}
var10 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction859>*/;
var_listnode4 = var10;
var_tidnode5 = var_nodearraylist4;
/* <var_tidnode5:nullable Object> isa nullable TId */
cltype12 = type_nullable_parser_nodes__TId.color;
idtype13 = type_nullable_parser_nodes__TId.id;
if(var_tidnode5 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_tidnode5->type->table_size) {
var11 = 0;
} else {
var11 = var_tidnode5->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28919);
show_backtrace(1);
}
var14 = NEW_parser_nodes__AModuleName(&type_parser_nodes__AModuleName);
((void (*)(val*, val*, val*, val*))(var14->class->vft[COLOR_parser_prod__AModuleName__init_amodulename]))(var14, var_tquadnode2, var_listnode4, var_tidnode5) /* init_amodulename on <var14:AModuleName>*/;
var_pmodulenamenode1 = var14;
var_node_list = var_pmodulenamenode1;
var15 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction859> */
var16 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var15) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var16, var_node_list) /* push on <var_p:Parser>*/;
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
val* var_tidnode1 /* var tidnode1: nullable Object */;
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
var_tidnode1 = var_nodearraylist1;
var_node_list = var_tidnode1;
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction860> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
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
val* var_tclassidnode1 /* var tclassidnode1: nullable Object */;
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
var_tclassidnode1 = var_nodearraylist1;
var_node_list = var_tclassidnode1;
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction861> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
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
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
long var2 /* : Int */;
long var3 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var2 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction862> */
var3 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var2) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var3, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction862#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction862__action(val* self, val* p0) {
parser__ReduceAction862__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction864#action for (self: ReduceAction864, Parser) */
void parser__ReduceAction864__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode2 /* var listnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : Array[Object] */;
val* var5 /* : ADoc */;
val* var_pdocnode1 /* var pdocnode1: nullable ADoc */;
long var6 /* : Int */;
long var7 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var2 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var2->class->vft[COLOR_array__Array__init]))(var2) /* init on <var2:Array[Object]>*/;
var_listnode3 = var2;
var_listnode2 = var_nodearraylist1;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode2 == NULL) {
var3 = 0;
} else {
if(cltype >= var_listnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_listnode2->type->type_table[cltype] == idtype;
}
}
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28972);
show_backtrace(1);
}
var4 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode3, var_listnode2) /* concat on <self:ReduceAction864>*/;
var_listnode3 = var4;
var5 = NEW_parser_nodes__ADoc(&type_parser_nodes__ADoc);
((void (*)(val*, val*))(var5->class->vft[COLOR_parser_prod__ADoc__init_adoc]))(var5, var_listnode3) /* init_adoc on <var5:ADoc>*/;
var_pdocnode1 = var5;
var_node_list = var_pdocnode1;
var6 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction864> */
var7 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var6) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var7, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction864#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction864__action(val* self, val* p0) {
parser__ReduceAction864__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction865#action for (self: ReduceAction865, Parser) */
void parser__ReduceAction865__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode2 /* var listnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : Array[Object] */;
val* var6 /* : ADoc */;
val* var_pdocnode1 /* var pdocnode1: nullable ADoc */;
long var7 /* : Int */;
long var8 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var3->class->vft[COLOR_array__Array__init]))(var3) /* init on <var3:Array[Object]>*/;
var_listnode3 = var3;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 28990);
show_backtrace(1);
}
var5 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode3, var_listnode2) /* concat on <self:ReduceAction865>*/;
var_listnode3 = var5;
var6 = NEW_parser_nodes__ADoc(&type_parser_nodes__ADoc);
((void (*)(val*, val*))(var6->class->vft[COLOR_parser_prod__ADoc__init_adoc]))(var6, var_listnode3) /* init_adoc on <var6:ADoc>*/;
var_pdocnode1 = var6;
var_node_list = var_pdocnode1;
var7 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction865> */
var8 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var7) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var8, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction865#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction865__action(val* self, val* p0) {
parser__ReduceAction865__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction867#action for (self: ReduceAction867, Parser) */
void parser__ReduceAction867__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : null */;
long var2 /* : Int */;
long var3 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = NULL;
var_node_list = var1;
var2 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction867> */
var3 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var2) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var3, var_node_list) /* push on <var_p:Parser>*/;
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
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pdocnode1 /* var pdocnode1: nullable Object */;
long var2 /* : Int */;
long var3 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var_pdocnode1 = var_nodearraylist1;
var_node_list = var_pdocnode1;
var2 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction868> */
var3 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var2) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var3, var_node_list) /* push on <var_p:Parser>*/;
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
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var3 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction869> */
var4 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var3) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var4, var_node_list) /* push on <var_p:Parser>*/;
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
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
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
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction870> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction870#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction870__action(val* self, val* p0) {
parser__ReduceAction870__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction1215#action for (self: ReduceAction1215, Parser) */
void parser__ReduceAction1215__action(val* self, val* p0) {
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
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_tattridnode4 /* var tattridnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : AIssetAttrExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AIssetAttrExpr */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 29049);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 29051);
show_backtrace(1);
}
var_tattridnode4 = var_nodearraylist3;
/* <var_tattridnode4:nullable Object> isa nullable TAttrid */
cltype9 = type_nullable_parser_nodes__TAttrid.color;
idtype10 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_tattridnode4->type->table_size) {
var8 = 0;
} else {
var8 = var_tattridnode4->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 29053);
show_backtrace(1);
}
var11 = NEW_parser_nodes__AIssetAttrExpr(&type_parser_nodes__AIssetAttrExpr);
((void (*)(val*, val*, val*, val*))(var11->class->vft[COLOR_parser_prod__AIssetAttrExpr__init_aissetattrexpr]))(var11, var_tkwissetnode2, var_pexprnode3, var_tattridnode4) /* init_aissetattrexpr on <var11:AIssetAttrExpr>*/;
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction1215> */
var13 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var12) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var13, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction1215#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction1215__action(val* self, val* p0) {
parser__ReduceAction1215__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction1216#action for (self: ReduceAction1216, Parser) */
void parser__ReduceAction1216__action(val* self, val* p0) {
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
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var_tattridnode4 /* var tattridnode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : AIssetAttrExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AIssetAttrExpr */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 29073);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 29075);
show_backtrace(1);
}
var_tattridnode4 = var_nodearraylist4;
/* <var_tattridnode4:nullable Object> isa nullable TAttrid */
cltype10 = type_nullable_parser_nodes__TAttrid.color;
idtype11 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode4 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_tattridnode4->type->table_size) {
var9 = 0;
} else {
var9 = var_tattridnode4->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 29077);
show_backtrace(1);
}
var12 = NEW_parser_nodes__AIssetAttrExpr(&type_parser_nodes__AIssetAttrExpr);
((void (*)(val*, val*, val*, val*))(var12->class->vft[COLOR_parser_prod__AIssetAttrExpr__init_aissetattrexpr]))(var12, var_tkwissetnode2, var_pexprnode3, var_tattridnode4) /* init_aissetattrexpr on <var12:AIssetAttrExpr>*/;
var_pexprnode1 = var12;
var_node_list = var_pexprnode1;
var13 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction1216> */
var14 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var13) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var14, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction1216#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction1216__action(val* self, val* p0) {
parser__ReduceAction1216__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction1219#action for (self: ReduceAction1219, Parser) */
void parser__ReduceAction1219__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_tattridnode3 /* var tattridnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : AAttrExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAttrExpr */;
long var8 /* : Int */;
long var9 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 29095);
show_backtrace(1);
}
var_tattridnode3 = var_nodearraylist2;
/* <var_tattridnode3:nullable Object> isa nullable TAttrid */
cltype5 = type_nullable_parser_nodes__TAttrid.color;
idtype6 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_tattridnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_tattridnode3->type->type_table[cltype5] == idtype6;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 29097);
show_backtrace(1);
}
var7 = NEW_parser_nodes__AAttrExpr(&type_parser_nodes__AAttrExpr);
((void (*)(val*, val*, val*))(var7->class->vft[COLOR_parser_prod__AAttrExpr__init_aattrexpr]))(var7, var_pexprnode2, var_tattridnode3) /* init_aattrexpr on <var7:AAttrExpr>*/;
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction1219> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction1219#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction1219__action(val* self, val* p0) {
parser__ReduceAction1219__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction1220#action for (self: ReduceAction1220, Parser) */
void parser__ReduceAction1220__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_tattridnode3 /* var tattridnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : AAttrExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAttrExpr */;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 29115);
show_backtrace(1);
}
var_tattridnode3 = var_nodearraylist3;
/* <var_tattridnode3:nullable Object> isa nullable TAttrid */
cltype6 = type_nullable_parser_nodes__TAttrid.color;
idtype7 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= var_tattridnode3->type->table_size) {
var5 = 0;
} else {
var5 = var_tattridnode3->type->type_table[cltype6] == idtype7;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 29117);
show_backtrace(1);
}
var8 = NEW_parser_nodes__AAttrExpr(&type_parser_nodes__AAttrExpr);
((void (*)(val*, val*, val*))(var8->class->vft[COLOR_parser_prod__AAttrExpr__init_aattrexpr]))(var8, var_pexprnode2, var_tattridnode3) /* init_aattrexpr on <var8:AAttrExpr>*/;
var_pexprnode1 = var8;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction1220> */
var10 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var9) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var10, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction1220#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction1220__action(val* self, val* p0) {
parser__ReduceAction1220__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction1223#action for (self: ReduceAction1223, Parser) */
void parser__ReduceAction1223__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 29135);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 29137);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 29139);
show_backtrace(1);
}
var11 = NEW_parser_nodes__ACallExpr(&type_parser_nodes__ACallExpr);
((void (*)(val*, val*, val*, val*))(var11->class->vft[COLOR_parser_prod__ACallExpr__init_acallexpr]))(var11, var_pexprnode2, var_tidnode3, var_pexprsnode4) /* init_acallexpr on <var11:ACallExpr>*/;
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction1223> */
var13 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var12) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var13, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction1223#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction1223__action(val* self, val* p0) {
parser__ReduceAction1223__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction1224#action for (self: ReduceAction1224, Parser) */
void parser__ReduceAction1224__action(val* self, val* p0) {
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
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 29159);
show_backtrace(1);
}
var_tidnode3 = var_nodearraylist3;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype7 = type_nullable_parser_nodes__TId.color;
idtype8 = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_tidnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_tidnode3->type->type_table[cltype7] == idtype8;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 29161);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 29163);
show_backtrace(1);
}
var12 = NEW_parser_nodes__ACallExpr(&type_parser_nodes__ACallExpr);
((void (*)(val*, val*, val*, val*))(var12->class->vft[COLOR_parser_prod__ACallExpr__init_acallexpr]))(var12, var_pexprnode2, var_tidnode3, var_pexprsnode4) /* init_acallexpr on <var12:ACallExpr>*/;
var_pexprnode1 = var12;
var_node_list = var_pexprnode1;
var13 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction1224> */
var14 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var13) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var14, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction1224#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction1224__action(val* self, val* p0) {
parser__ReduceAction1224__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction1231#action for (self: ReduceAction1231, Parser) */
void parser__ReduceAction1231__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_tkwinitnode3 /* var tkwinitnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : AInitExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AInitExpr */;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 29182);
show_backtrace(1);
}
var_tkwinitnode3 = var_nodearraylist2;
/* <var_tkwinitnode3:nullable Object> isa nullable TKwinit */
cltype6 = type_nullable_parser_nodes__TKwinit.color;
idtype7 = type_nullable_parser_nodes__TKwinit.id;
if(var_tkwinitnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= var_tkwinitnode3->type->table_size) {
var5 = 0;
} else {
var5 = var_tkwinitnode3->type->type_table[cltype6] == idtype7;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 29184);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 29186);
show_backtrace(1);
}
var11 = NEW_parser_nodes__AInitExpr(&type_parser_nodes__AInitExpr);
((void (*)(val*, val*, val*, val*))(var11->class->vft[COLOR_parser_prod__AInitExpr__init_ainitexpr]))(var11, var_pexprnode2, var_tkwinitnode3, var_pexprsnode4) /* init_ainitexpr on <var11:AInitExpr>*/;
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction1231> */
var13 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var12) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var13, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction1231#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction1231__action(val* self, val* p0) {
parser__ReduceAction1231__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction1255#action for (self: ReduceAction1255, Parser) */
void parser__ReduceAction1255__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode1 /* var pexprnode1: nullable Object */;
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
var_pexprnode1 = var_nodearraylist1;
var_node_list = var_pexprnode1;
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction1255> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction1255#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction1255__action(val* self, val* p0) {
parser__ReduceAction1255__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction1256#action for (self: ReduceAction1256, Parser) */
void parser__ReduceAction1256__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : AImplicitSelfExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AImplicitSelfExpr */;
long var2 /* : Int */;
long var3 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
((void (*)(val*))(var1->class->vft[COLOR_parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr]))(var1) /* init_aimplicitselfexpr on <var1:AImplicitSelfExpr>*/;
var_pexprnode1 = var1;
var_node_list = var_pexprnode1;
var2 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction1256> */
var3 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var2) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var3, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction1256#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction1256__action(val* self, val* p0) {
parser__ReduceAction1256__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction1524#action for (self: ReduceAction1524, Parser) */
void parser__ReduceAction1524__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_pimportnode1 /* var pimportnode1: nullable Object */;
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
var_listnode2 = var2;
var_pimportnode1 = var_nodearraylist1;
var3 = NULL;
if (var_pimportnode1 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (var4){
((void (*)(val*, val*))(var_listnode2->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode2, var_pimportnode1) /* add on <var_listnode2:Array[Object]>*/;
} else {
}
var_node_list = var_listnode2;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction1524> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction1524#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction1524__action(val* self, val* p0) {
parser__ReduceAction1524__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction1525#action for (self: ReduceAction1525, Parser) */
void parser__ReduceAction1525__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_pimportnode2 /* var pimportnode2: nullable Object */;
val* var5 /* : Array[Object] */;
val* var6 /* : null */;
short int var7 /* : Bool */;
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
var_listnode3 = var3;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode1 == NULL) {
var4 = 0;
} else {
if(cltype >= var_listnode1->type->table_size) {
var4 = 0;
} else {
var4 = var_listnode1->type->type_table[cltype] == idtype;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 29243);
show_backtrace(1);
}
var_pimportnode2 = var_nodearraylist2;
var5 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode3, var_listnode1) /* concat on <self:ReduceAction1525>*/;
var_listnode3 = var5;
var6 = NULL;
if (var_pimportnode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (var7){
((void (*)(val*, val*))(var_listnode3->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode3, var_pimportnode2) /* add on <var_listnode3:Array[Object]>*/;
} else {
}
var_node_list = var_listnode3;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction1525> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction1525#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction1525__action(val* self, val* p0) {
parser__ReduceAction1525__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction1526#action for (self: ReduceAction1526, Parser) */
void parser__ReduceAction1526__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_pexterncodeblocknode1 /* var pexterncodeblocknode1: nullable Object */;
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
var_listnode2 = var2;
var_pexterncodeblocknode1 = var_nodearraylist1;
var3 = NULL;
if (var_pexterncodeblocknode1 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (var4){
((void (*)(val*, val*))(var_listnode2->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode2, var_pexterncodeblocknode1) /* add on <var_listnode2:Array[Object]>*/;
} else {
}
var_node_list = var_listnode2;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction1526> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction1526#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction1526__action(val* self, val* p0) {
parser__ReduceAction1526__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction1527#action for (self: ReduceAction1527, Parser) */
void parser__ReduceAction1527__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_pexterncodeblocknode2 /* var pexterncodeblocknode2: nullable Object */;
val* var5 /* : Array[Object] */;
val* var6 /* : null */;
short int var7 /* : Bool */;
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
var_listnode3 = var3;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode1 == NULL) {
var4 = 0;
} else {
if(cltype >= var_listnode1->type->table_size) {
var4 = 0;
} else {
var4 = var_listnode1->type->type_table[cltype] == idtype;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 29277);
show_backtrace(1);
}
var_pexterncodeblocknode2 = var_nodearraylist2;
var5 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode3, var_listnode1) /* concat on <self:ReduceAction1527>*/;
var_listnode3 = var5;
var6 = NULL;
if (var_pexterncodeblocknode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (var7){
((void (*)(val*, val*))(var_listnode3->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode3, var_pexterncodeblocknode2) /* add on <var_listnode3:Array[Object]>*/;
} else {
}
var_node_list = var_listnode3;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction1527> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction1527#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction1527__action(val* self, val* p0) {
parser__ReduceAction1527__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction1528#action for (self: ReduceAction1528, Parser) */
void parser__ReduceAction1528__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable Object */;
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
var_listnode2 = var2;
var_pclassdefnode1 = var_nodearraylist1;
var3 = NULL;
if (var_pclassdefnode1 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (var4){
((void (*)(val*, val*))(var_listnode2->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode2, var_pclassdefnode1) /* add on <var_listnode2:Array[Object]>*/;
} else {
}
var_node_list = var_listnode2;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction1528> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction1528#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction1528__action(val* self, val* p0) {
parser__ReduceAction1528__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction1529#action for (self: ReduceAction1529, Parser) */
void parser__ReduceAction1529__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_pclassdefnode2 /* var pclassdefnode2: nullable Object */;
val* var5 /* : Array[Object] */;
val* var6 /* : null */;
short int var7 /* : Bool */;
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
var_listnode3 = var3;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode1 == NULL) {
var4 = 0;
} else {
if(cltype >= var_listnode1->type->table_size) {
var4 = 0;
} else {
var4 = var_listnode1->type->type_table[cltype] == idtype;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 29311);
show_backtrace(1);
}
var_pclassdefnode2 = var_nodearraylist2;
var5 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode3, var_listnode1) /* concat on <self:ReduceAction1529>*/;
var_listnode3 = var5;
var6 = NULL;
if (var_pclassdefnode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (var7){
((void (*)(val*, val*))(var_listnode3->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode3, var_pclassdefnode2) /* add on <var_listnode3:Array[Object]>*/;
} else {
}
var_node_list = var_listnode3;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction1529> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction1529#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction1529__action(val* self, val* p0) {
parser__ReduceAction1529__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction1530#action for (self: ReduceAction1530, Parser) */
void parser__ReduceAction1530__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable Object */;
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
var_listnode2 = var2;
var_ppropdefnode1 = var_nodearraylist1;
var3 = NULL;
if (var_ppropdefnode1 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (var4){
((void (*)(val*, val*))(var_listnode2->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode2, var_ppropdefnode1) /* add on <var_listnode2:Array[Object]>*/;
} else {
}
var_node_list = var_listnode2;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction1530> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction1530#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction1530__action(val* self, val* p0) {
parser__ReduceAction1530__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction1531#action for (self: ReduceAction1531, Parser) */
void parser__ReduceAction1531__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_ppropdefnode2 /* var ppropdefnode2: nullable Object */;
val* var5 /* : Array[Object] */;
val* var6 /* : null */;
short int var7 /* : Bool */;
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
var_listnode3 = var3;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode1 == NULL) {
var4 = 0;
} else {
if(cltype >= var_listnode1->type->table_size) {
var4 = 0;
} else {
var4 = var_listnode1->type->type_table[cltype] == idtype;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 29345);
show_backtrace(1);
}
var_ppropdefnode2 = var_nodearraylist2;
var5 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode3, var_listnode1) /* concat on <self:ReduceAction1531>*/;
var_listnode3 = var5;
var6 = NULL;
if (var_ppropdefnode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (var7){
((void (*)(val*, val*))(var_listnode3->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode3, var_ppropdefnode2) /* add on <var_listnode3:Array[Object]>*/;
} else {
}
var_node_list = var_listnode3;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction1531> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction1531#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction1531__action(val* self, val* p0) {
parser__ReduceAction1531__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction1532#action for (self: ReduceAction1532, Parser) */
void parser__ReduceAction1532__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_psuperclassnode1 /* var psuperclassnode1: nullable Object */;
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
var_listnode2 = var2;
var_psuperclassnode1 = var_nodearraylist1;
var3 = NULL;
if (var_psuperclassnode1 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (var4){
((void (*)(val*, val*))(var_listnode2->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode2, var_psuperclassnode1) /* add on <var_listnode2:Array[Object]>*/;
} else {
}
var_node_list = var_listnode2;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction1532> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction1532#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction1532__action(val* self, val* p0) {
parser__ReduceAction1532__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction1533#action for (self: ReduceAction1533, Parser) */
void parser__ReduceAction1533__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_psuperclassnode2 /* var psuperclassnode2: nullable Object */;
val* var5 /* : Array[Object] */;
val* var6 /* : null */;
short int var7 /* : Bool */;
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
var_listnode3 = var3;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode1 == NULL) {
var4 = 0;
} else {
if(cltype >= var_listnode1->type->table_size) {
var4 = 0;
} else {
var4 = var_listnode1->type->type_table[cltype] == idtype;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 29379);
show_backtrace(1);
}
var_psuperclassnode2 = var_nodearraylist2;
var5 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode3, var_listnode1) /* concat on <self:ReduceAction1533>*/;
var_listnode3 = var5;
var6 = NULL;
if (var_psuperclassnode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (var7){
((void (*)(val*, val*))(var_listnode3->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode3, var_psuperclassnode2) /* add on <var_listnode3:Array[Object]>*/;
} else {
}
var_node_list = var_listnode3;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction1533> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction1533#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction1533__action(val* self, val* p0) {
parser__ReduceAction1533__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction1536#action for (self: ReduceAction1536, Parser) */
void parser__ReduceAction1536__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_pformaldefnode1 /* var pformaldefnode1: nullable Object */;
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
var_listnode2 = var2;
var_pformaldefnode1 = var_nodearraylist1;
var3 = NULL;
if (var_pformaldefnode1 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (var4){
((void (*)(val*, val*))(var_listnode2->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode2, var_pformaldefnode1) /* add on <var_listnode2:Array[Object]>*/;
} else {
}
var_node_list = var_listnode2;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction1536> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction1536#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction1536__action(val* self, val* p0) {
parser__ReduceAction1536__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction1537#action for (self: ReduceAction1537, Parser) */
void parser__ReduceAction1537__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_pformaldefnode2 /* var pformaldefnode2: nullable Object */;
val* var5 /* : Array[Object] */;
val* var6 /* : null */;
short int var7 /* : Bool */;
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
var_listnode3 = var3;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode1 == NULL) {
var4 = 0;
} else {
if(cltype >= var_listnode1->type->table_size) {
var4 = 0;
} else {
var4 = var_listnode1->type->type_table[cltype] == idtype;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 29413);
show_backtrace(1);
}
var_pformaldefnode2 = var_nodearraylist2;
var5 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode3, var_listnode1) /* concat on <self:ReduceAction1537>*/;
var_listnode3 = var5;
var6 = NULL;
if (var_pformaldefnode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (var7){
((void (*)(val*, val*))(var_listnode3->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode3, var_pformaldefnode2) /* add on <var_listnode3:Array[Object]>*/;
} else {
}
var_node_list = var_listnode3;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction1537> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction1537#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction1537__action(val* self, val* p0) {
parser__ReduceAction1537__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction1538#action for (self: ReduceAction1538, Parser) */
void parser__ReduceAction1538__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_pparamnode1 /* var pparamnode1: nullable Object */;
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
var_listnode2 = var2;
var_pparamnode1 = var_nodearraylist1;
var3 = NULL;
if (var_pparamnode1 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (var4){
((void (*)(val*, val*))(var_listnode2->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode2, var_pparamnode1) /* add on <var_listnode2:Array[Object]>*/;
} else {
}
var_node_list = var_listnode2;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction1538> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction1538#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction1538__action(val* self, val* p0) {
parser__ReduceAction1538__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction1539#action for (self: ReduceAction1539, Parser) */
void parser__ReduceAction1539__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_pparamnode2 /* var pparamnode2: nullable Object */;
val* var5 /* : Array[Object] */;
val* var6 /* : null */;
short int var7 /* : Bool */;
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
var_listnode3 = var3;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode1 == NULL) {
var4 = 0;
} else {
if(cltype >= var_listnode1->type->table_size) {
var4 = 0;
} else {
var4 = var_listnode1->type->type_table[cltype] == idtype;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 29447);
show_backtrace(1);
}
var_pparamnode2 = var_nodearraylist2;
var5 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode3, var_listnode1) /* concat on <self:ReduceAction1539>*/;
var_listnode3 = var5;
var6 = NULL;
if (var_pparamnode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (var7){
((void (*)(val*, val*))(var_listnode3->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode3, var_pparamnode2) /* add on <var_listnode3:Array[Object]>*/;
} else {
}
var_node_list = var_listnode3;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction1539> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction1539#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction1539__action(val* self, val* p0) {
parser__ReduceAction1539__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction1540#action for (self: ReduceAction1540, Parser) */
void parser__ReduceAction1540__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable Object */;
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
var_listnode2 = var2;
var_pexterncallnode1 = var_nodearraylist1;
var3 = NULL;
if (var_pexterncallnode1 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (var4){
((void (*)(val*, val*))(var_listnode2->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode2, var_pexterncallnode1) /* add on <var_listnode2:Array[Object]>*/;
} else {
}
var_node_list = var_listnode2;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction1540> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction1540#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction1540__action(val* self, val* p0) {
parser__ReduceAction1540__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction1541#action for (self: ReduceAction1541, Parser) */
void parser__ReduceAction1541__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_pexterncallnode2 /* var pexterncallnode2: nullable Object */;
val* var5 /* : Array[Object] */;
val* var6 /* : null */;
short int var7 /* : Bool */;
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
var_listnode3 = var3;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode1 == NULL) {
var4 = 0;
} else {
if(cltype >= var_listnode1->type->table_size) {
var4 = 0;
} else {
var4 = var_listnode1->type->type_table[cltype] == idtype;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 29481);
show_backtrace(1);
}
var_pexterncallnode2 = var_nodearraylist2;
var5 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode3, var_listnode1) /* concat on <self:ReduceAction1541>*/;
var_listnode3 = var5;
var6 = NULL;
if (var_pexterncallnode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (var7){
((void (*)(val*, val*))(var_listnode3->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode3, var_pexterncallnode2) /* add on <var_listnode3:Array[Object]>*/;
} else {
}
var_node_list = var_listnode3;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction1541> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction1541#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction1541__action(val* self, val* p0) {
parser__ReduceAction1541__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction1543#action for (self: ReduceAction1543, Parser) */
void parser__ReduceAction1543__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_ptypenode2 /* var ptypenode2: nullable Object */;
val* var5 /* : Array[Object] */;
val* var6 /* : null */;
short int var7 /* : Bool */;
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
var_listnode3 = var3;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode1 == NULL) {
var4 = 0;
} else {
if(cltype >= var_listnode1->type->table_size) {
var4 = 0;
} else {
var4 = var_listnode1->type->type_table[cltype] == idtype;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 29500);
show_backtrace(1);
}
var_ptypenode2 = var_nodearraylist2;
var5 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode3, var_listnode1) /* concat on <self:ReduceAction1543>*/;
var_listnode3 = var5;
var6 = NULL;
if (var_ptypenode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (var7){
((void (*)(val*, val*))(var_listnode3->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode3, var_ptypenode2) /* add on <var_listnode3:Array[Object]>*/;
} else {
}
var_node_list = var_listnode3;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction1543> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction1543#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction1543__action(val* self, val* p0) {
parser__ReduceAction1543__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction1544#action for (self: ReduceAction1544, Parser) */
void parser__ReduceAction1544__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_pexprnode1 /* var pexprnode1: nullable Object */;
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
var_listnode2 = var2;
var_pexprnode1 = var_nodearraylist1;
var3 = NULL;
if (var_pexprnode1 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (var4){
((void (*)(val*, val*))(var_listnode2->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode2, var_pexprnode1) /* add on <var_listnode2:Array[Object]>*/;
} else {
}
var_node_list = var_listnode2;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction1544> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction1544#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction1544__action(val* self, val* p0) {
parser__ReduceAction1544__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction1545#action for (self: ReduceAction1545, Parser) */
void parser__ReduceAction1545__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
val* var5 /* : Array[Object] */;
val* var6 /* : null */;
short int var7 /* : Bool */;
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
var_listnode3 = var3;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode1 == NULL) {
var4 = 0;
} else {
if(cltype >= var_listnode1->type->table_size) {
var4 = 0;
} else {
var4 = var_listnode1->type->type_table[cltype] == idtype;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 29534);
show_backtrace(1);
}
var_pexprnode2 = var_nodearraylist2;
var5 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode3, var_listnode1) /* concat on <self:ReduceAction1545>*/;
var_listnode3 = var5;
var6 = NULL;
if (var_pexprnode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (var7){
((void (*)(val*, val*))(var_listnode3->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode3, var_pexprnode2) /* add on <var_listnode3:Array[Object]>*/;
} else {
}
var_node_list = var_listnode3;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction1545> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction1545#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction1545__action(val* self, val* p0) {
parser__ReduceAction1545__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction1546#action for (self: ReduceAction1546, Parser) */
void parser__ReduceAction1546__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : Array[Object] */;
long var5 /* : Int */;
long var6 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var2 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var2->class->vft[COLOR_array__Array__init]))(var2) /* init on <var2:Array[Object]>*/;
var_listnode2 = var2;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode1 == NULL) {
var3 = 0;
} else {
if(cltype >= var_listnode1->type->table_size) {
var3 = 0;
} else {
var3 = var_listnode1->type->type_table[cltype] == idtype;
}
}
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 29552);
show_backtrace(1);
}
var4 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode2, var_listnode1) /* concat on <self:ReduceAction1546>*/;
var_listnode2 = var4;
var_node_list = var_listnode2;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction1546> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction1546#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction1546__action(val* self, val* p0) {
parser__ReduceAction1546__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction1547#action for (self: ReduceAction1547, Parser) */
void parser__ReduceAction1547__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_listnode2 /* var listnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : Array[Object] */;
val* var9 /* : Array[Object] */;
long var10 /* : Int */;
long var11 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var3->class->vft[COLOR_array__Array__init]))(var3) /* init on <var3:Array[Object]>*/;
var_listnode3 = var3;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode1 == NULL) {
var4 = 0;
} else {
if(cltype >= var_listnode1->type->table_size) {
var4 = 0;
} else {
var4 = var_listnode1->type->type_table[cltype] == idtype;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 29567);
show_backtrace(1);
}
var_listnode2 = var_nodearraylist2;
/* <var_listnode2:nullable Object> isa Array[Object] */
cltype6 = type_array__Arraykernel__Object.color;
idtype7 = type_array__Arraykernel__Object.id;
if(var_listnode2 == NULL) {
var5 = 0;
} else {
if(cltype6 >= var_listnode2->type->table_size) {
var5 = 0;
} else {
var5 = var_listnode2->type->type_table[cltype6] == idtype7;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 29569);
show_backtrace(1);
}
var8 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode3, var_listnode1) /* concat on <self:ReduceAction1547>*/;
var_listnode3 = var8;
var9 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode3, var_listnode2) /* concat on <self:ReduceAction1547>*/;
var_listnode3 = var9;
var_node_list = var_listnode3;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction1547> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction1547#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction1547__action(val* self, val* p0) {
parser__ReduceAction1547__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction1549#action for (self: ReduceAction1549, Parser) */
void parser__ReduceAction1549__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationnode2 /* var pannotationnode2: nullable Object */;
val* var5 /* : Array[Object] */;
val* var6 /* : null */;
short int var7 /* : Bool */;
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
var_listnode3 = var3;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode1 == NULL) {
var4 = 0;
} else {
if(cltype >= var_listnode1->type->table_size) {
var4 = 0;
} else {
var4 = var_listnode1->type->type_table[cltype] == idtype;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 29585);
show_backtrace(1);
}
var_pannotationnode2 = var_nodearraylist2;
var5 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode3, var_listnode1) /* concat on <self:ReduceAction1549>*/;
var_listnode3 = var5;
var6 = NULL;
if (var_pannotationnode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (var7){
((void (*)(val*, val*))(var_listnode3->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode3, var_pannotationnode2) /* add on <var_listnode3:Array[Object]>*/;
} else {
}
var_node_list = var_listnode3;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction1549> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction1549#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction1549__action(val* self, val* p0) {
parser__ReduceAction1549__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction1553#action for (self: ReduceAction1553, Parser) */
void parser__ReduceAction1553__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_patargnode2 /* var patargnode2: nullable Object */;
val* var5 /* : Array[Object] */;
val* var6 /* : null */;
short int var7 /* : Bool */;
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
var_listnode3 = var3;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode1 == NULL) {
var4 = 0;
} else {
if(cltype >= var_listnode1->type->table_size) {
var4 = 0;
} else {
var4 = var_listnode1->type->type_table[cltype] == idtype;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 29604);
show_backtrace(1);
}
var_patargnode2 = var_nodearraylist2;
var5 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode3, var_listnode1) /* concat on <self:ReduceAction1553>*/;
var_listnode3 = var5;
var6 = NULL;
if (var_patargnode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (var7){
((void (*)(val*, val*))(var_listnode3->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode3, var_patargnode2) /* add on <var_listnode3:Array[Object]>*/;
} else {
}
var_node_list = var_listnode3;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction1553> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction1553#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction1553__action(val* self, val* p0) {
parser__ReduceAction1553__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction1557#action for (self: ReduceAction1557, Parser) */
void parser__ReduceAction1557__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode2 /* var tidnode2: nullable Object */;
val* var5 /* : Array[Object] */;
val* var6 /* : null */;
short int var7 /* : Bool */;
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
var_listnode3 = var3;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode1 == NULL) {
var4 = 0;
} else {
if(cltype >= var_listnode1->type->table_size) {
var4 = 0;
} else {
var4 = var_listnode1->type->type_table[cltype] == idtype;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 29623);
show_backtrace(1);
}
var_tidnode2 = var_nodearraylist2;
var5 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode3, var_listnode1) /* concat on <self:ReduceAction1557>*/;
var_listnode3 = var5;
var6 = NULL;
if (var_tidnode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (var7){
((void (*)(val*, val*))(var_listnode3->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode3, var_tidnode2) /* add on <var_listnode3:Array[Object]>*/;
} else {
}
var_node_list = var_listnode3;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction1557> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction1557#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction1557__action(val* self, val* p0) {
parser__ReduceAction1557__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction1558#action for (self: ReduceAction1558, Parser) */
void parser__ReduceAction1558__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_tcommentnode1 /* var tcommentnode1: nullable Object */;
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
var_listnode2 = var2;
var_tcommentnode1 = var_nodearraylist1;
var3 = NULL;
if (var_tcommentnode1 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (var4){
((void (*)(val*, val*))(var_listnode2->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode2, var_tcommentnode1) /* add on <var_listnode2:Array[Object]>*/;
} else {
}
var_node_list = var_listnode2;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction1558> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction1558#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction1558__action(val* self, val* p0) {
parser__ReduceAction1558__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction1559#action for (self: ReduceAction1559, Parser) */
void parser__ReduceAction1559__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_tcommentnode2 /* var tcommentnode2: nullable Object */;
val* var5 /* : Array[Object] */;
val* var6 /* : null */;
short int var7 /* : Bool */;
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
var_listnode3 = var3;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode1 == NULL) {
var4 = 0;
} else {
if(cltype >= var_listnode1->type->table_size) {
var4 = 0;
} else {
var4 = var_listnode1->type->type_table[cltype] == idtype;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 29657);
show_backtrace(1);
}
var_tcommentnode2 = var_nodearraylist2;
var5 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode3, var_listnode1) /* concat on <self:ReduceAction1559>*/;
var_listnode3 = var5;
var6 = NULL;
if (var_tcommentnode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (var7){
((void (*)(val*, val*))(var_listnode3->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode3, var_tcommentnode2) /* add on <var_listnode3:Array[Object]>*/;
} else {
}
var_node_list = var_listnode3;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction1559> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction1559#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction1559__action(val* self, val* p0) {
parser__ReduceAction1559__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction1560#action for (self: ReduceAction1560, Parser) */
void parser__ReduceAction1560__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_teolnode1 /* var teolnode1: nullable Object */;
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
var_listnode2 = var2;
var_teolnode1 = var_nodearraylist1;
var3 = NULL;
if (var_teolnode1 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (var4){
((void (*)(val*, val*))(var_listnode2->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode2, var_teolnode1) /* add on <var_listnode2:Array[Object]>*/;
} else {
}
var_node_list = var_listnode2;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction1560> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction1560#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction1560__action(val* self, val* p0) {
parser__ReduceAction1560__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction1561#action for (self: ReduceAction1561, Parser) */
void parser__ReduceAction1561__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_teolnode2 /* var teolnode2: nullable Object */;
val* var5 /* : Array[Object] */;
val* var6 /* : null */;
short int var7 /* : Bool */;
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
var_listnode3 = var3;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode1 == NULL) {
var4 = 0;
} else {
if(cltype >= var_listnode1->type->table_size) {
var4 = 0;
} else {
var4 = var_listnode1->type->type_table[cltype] == idtype;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 29691);
show_backtrace(1);
}
var_teolnode2 = var_nodearraylist2;
var5 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode3, var_listnode1) /* concat on <self:ReduceAction1561>*/;
var_listnode3 = var5;
var6 = NULL;
if (var_teolnode2 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (var7){
((void (*)(val*, val*))(var_listnode3->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode3, var_teolnode2) /* add on <var_listnode3:Array[Object]>*/;
} else {
}
var_node_list = var_listnode3;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction1561> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction1561#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction1561__action(val* self, val* p0) {
parser__ReduceAction1561__action(self, p0);
RET_LABEL:;
}
