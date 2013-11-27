#include "parser.sep.0.h"
/* method parser#ReduceAction409#action for (self: ReduceAction409, Parser) */
void parser__ReduceAction409__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var_pablenode4 /* var pablenode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_pvisibilitynode6 /* var pvisibilitynode6: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_tkwvarnode7 /* var tkwvarnode7: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_tattridnode8 /* var tattridnode8: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_ptypenode10 /* var ptypenode10: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_pexprnode12 /* var pexprnode12: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : AAttrPropdef */;
val* var30 /* : null */;
val* var31 /* : null */;
val* var32 /* : null */;
val* var33 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var34 /* : Int */;
long var35 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var10 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var10 = 0;
} else {
var10 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18183);
exit(1);
}
var_pablenode4 = var_nodearraylist2;
/* <var_pablenode4:nullable Object> isa nullable AAble */
cltype12 = type_nullable_parser_nodes__AAble.color;
idtype13 = type_nullable_parser_nodes__AAble.id;
if(var_pablenode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_pablenode4->type->table_size) {
var11 = 0;
} else {
var11 = var_pablenode4->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18185);
exit(1);
}
var_pvisibilitynode6 = var_nodearraylist3;
/* <var_pvisibilitynode6:nullable Object> isa nullable AVisibility */
cltype15 = type_nullable_parser_nodes__AVisibility.color;
idtype16 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode6 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_pvisibilitynode6->type->table_size) {
var14 = 0;
} else {
var14 = var_pvisibilitynode6->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18187);
exit(1);
}
var_tkwvarnode7 = var_nodearraylist4;
/* <var_tkwvarnode7:nullable Object> isa nullable TKwvar */
cltype18 = type_nullable_parser_nodes__TKwvar.color;
idtype19 = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode7 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tkwvarnode7->type->table_size) {
var17 = 0;
} else {
var17 = var_tkwvarnode7->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18189);
exit(1);
}
var_tattridnode8 = var_nodearraylist5;
/* <var_tattridnode8:nullable Object> isa nullable TAttrid */
cltype21 = type_nullable_parser_nodes__TAttrid.color;
idtype22 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode8 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_tattridnode8->type->table_size) {
var20 = 0;
} else {
var20 = var_tattridnode8->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18191);
exit(1);
}
var_ptypenode10 = var_nodearraylist6;
/* <var_ptypenode10:nullable Object> isa nullable AType */
cltype24 = type_nullable_parser_nodes__AType.color;
idtype25 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode10 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_ptypenode10->type->table_size) {
var23 = 0;
} else {
var23 = var_ptypenode10->type->type_table[cltype24] == idtype25;
}
}
if (!var23) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18193);
exit(1);
}
var_pexprnode12 = var_nodearraylist9;
/* <var_pexprnode12:nullable Object> isa nullable AExpr */
cltype27 = type_nullable_parser_nodes__AExpr.color;
idtype28 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode12 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_pexprnode12->type->table_size) {
var26 = 0;
} else {
var26 = var_pexprnode12->type->type_table[cltype27] == idtype28;
}
}
if (!var26) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18195);
exit(1);
}
var29 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var30 = NULL;
var31 = NULL;
var32 = NULL;
var33 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var29, var_pdocnode2, var30, var_pablenode4, var31, var_pvisibilitynode6, var_tkwvarnode7, var_tattridnode8, var32, var_ptypenode10, var33, var_pexprnode12) /* init_aattrpropdef on <var29:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var29);
var_ppropdefnode1 = var29;
var_node_list = var_ppropdefnode1;
var34 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction409> */
var35 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var34) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var35, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction409#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction409__action(val* self, val* p0) {
parser__ReduceAction409__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction410#action for (self: ReduceAction410, Parser) */
void parser__ReduceAction410__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var11 /* : Bool */;
int cltype;
int idtype;
val* var_pablenode4 /* var pablenode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_tkwredefnode5 /* var tkwredefnode5: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pvisibilitynode6 /* var pvisibilitynode6: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_tkwvarnode7 /* var tkwvarnode7: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_tattridnode8 /* var tattridnode8: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var_ptypenode10 /* var ptypenode10: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var_pexprnode12 /* var pexprnode12: nullable Object */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
val* var33 /* : AAttrPropdef */;
val* var34 /* : null */;
val* var35 /* : null */;
val* var36 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var37 /* : Int */;
long var38 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var11 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var11 = 0;
} else {
var11 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18229);
exit(1);
}
var_pablenode4 = var_nodearraylist2;
/* <var_pablenode4:nullable Object> isa nullable AAble */
cltype13 = type_nullable_parser_nodes__AAble.color;
idtype14 = type_nullable_parser_nodes__AAble.id;
if(var_pablenode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_pablenode4->type->table_size) {
var12 = 0;
} else {
var12 = var_pablenode4->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18231);
exit(1);
}
var_tkwredefnode5 = var_nodearraylist3;
/* <var_tkwredefnode5:nullable Object> isa nullable TKwredef */
cltype16 = type_nullable_parser_nodes__TKwredef.color;
idtype17 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_tkwredefnode5->type->table_size) {
var15 = 0;
} else {
var15 = var_tkwredefnode5->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18233);
exit(1);
}
var_pvisibilitynode6 = var_nodearraylist4;
/* <var_pvisibilitynode6:nullable Object> isa nullable AVisibility */
cltype19 = type_nullable_parser_nodes__AVisibility.color;
idtype20 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode6 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pvisibilitynode6->type->table_size) {
var18 = 0;
} else {
var18 = var_pvisibilitynode6->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18235);
exit(1);
}
var_tkwvarnode7 = var_nodearraylist5;
/* <var_tkwvarnode7:nullable Object> isa nullable TKwvar */
cltype22 = type_nullable_parser_nodes__TKwvar.color;
idtype23 = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode7 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_tkwvarnode7->type->table_size) {
var21 = 0;
} else {
var21 = var_tkwvarnode7->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18237);
exit(1);
}
var_tattridnode8 = var_nodearraylist6;
/* <var_tattridnode8:nullable Object> isa nullable TAttrid */
cltype25 = type_nullable_parser_nodes__TAttrid.color;
idtype26 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode8 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_tattridnode8->type->table_size) {
var24 = 0;
} else {
var24 = var_tattridnode8->type->type_table[cltype25] == idtype26;
}
}
if (!var24) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18239);
exit(1);
}
var_ptypenode10 = var_nodearraylist7;
/* <var_ptypenode10:nullable Object> isa nullable AType */
cltype28 = type_nullable_parser_nodes__AType.color;
idtype29 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode10 == NULL) {
var27 = 1;
} else {
if(cltype28 >= var_ptypenode10->type->table_size) {
var27 = 0;
} else {
var27 = var_ptypenode10->type->type_table[cltype28] == idtype29;
}
}
if (!var27) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18241);
exit(1);
}
var_pexprnode12 = var_nodearraylist10;
/* <var_pexprnode12:nullable Object> isa nullable AExpr */
cltype31 = type_nullable_parser_nodes__AExpr.color;
idtype32 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode12 == NULL) {
var30 = 1;
} else {
if(cltype31 >= var_pexprnode12->type->table_size) {
var30 = 0;
} else {
var30 = var_pexprnode12->type->type_table[cltype31] == idtype32;
}
}
if (!var30) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18243);
exit(1);
}
var33 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var34 = NULL;
var35 = NULL;
var36 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var33->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var33, var_pdocnode2, var34, var_pablenode4, var_tkwredefnode5, var_pvisibilitynode6, var_tkwvarnode7, var_tattridnode8, var35, var_ptypenode10, var36, var_pexprnode12) /* init_aattrpropdef on <var33:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var33);
var_ppropdefnode1 = var33;
var_node_list = var_ppropdefnode1;
var37 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction410> */
var38 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var37) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var38, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction410#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction410__action(val* self, val* p0) {
parser__ReduceAction410__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction411#action for (self: ReduceAction411, Parser) */
void parser__ReduceAction411__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var11 /* : Bool */;
int cltype;
int idtype;
val* var_pablenode3 /* var pablenode3: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_pablenode4 /* var pablenode4: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pvisibilitynode6 /* var pvisibilitynode6: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_tkwvarnode7 /* var tkwvarnode7: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_tattridnode8 /* var tattridnode8: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var_ptypenode10 /* var ptypenode10: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var_pexprnode12 /* var pexprnode12: nullable Object */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
val* var33 /* : AAttrPropdef */;
val* var34 /* : null */;
val* var35 /* : null */;
val* var36 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var37 /* : Int */;
long var38 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var11 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var11 = 0;
} else {
var11 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18277);
exit(1);
}
var_pablenode3 = var_nodearraylist2;
/* <var_pablenode3:nullable Object> isa nullable AAble */
cltype13 = type_nullable_parser_nodes__AAble.color;
idtype14 = type_nullable_parser_nodes__AAble.id;
if(var_pablenode3 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_pablenode3->type->table_size) {
var12 = 0;
} else {
var12 = var_pablenode3->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18279);
exit(1);
}
var_pablenode4 = var_nodearraylist3;
/* <var_pablenode4:nullable Object> isa nullable AAble */
cltype16 = type_nullable_parser_nodes__AAble.color;
idtype17 = type_nullable_parser_nodes__AAble.id;
if(var_pablenode4 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_pablenode4->type->table_size) {
var15 = 0;
} else {
var15 = var_pablenode4->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18281);
exit(1);
}
var_pvisibilitynode6 = var_nodearraylist4;
/* <var_pvisibilitynode6:nullable Object> isa nullable AVisibility */
cltype19 = type_nullable_parser_nodes__AVisibility.color;
idtype20 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode6 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pvisibilitynode6->type->table_size) {
var18 = 0;
} else {
var18 = var_pvisibilitynode6->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18283);
exit(1);
}
var_tkwvarnode7 = var_nodearraylist5;
/* <var_tkwvarnode7:nullable Object> isa nullable TKwvar */
cltype22 = type_nullable_parser_nodes__TKwvar.color;
idtype23 = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode7 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_tkwvarnode7->type->table_size) {
var21 = 0;
} else {
var21 = var_tkwvarnode7->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18285);
exit(1);
}
var_tattridnode8 = var_nodearraylist6;
/* <var_tattridnode8:nullable Object> isa nullable TAttrid */
cltype25 = type_nullable_parser_nodes__TAttrid.color;
idtype26 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode8 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_tattridnode8->type->table_size) {
var24 = 0;
} else {
var24 = var_tattridnode8->type->type_table[cltype25] == idtype26;
}
}
if (!var24) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18287);
exit(1);
}
var_ptypenode10 = var_nodearraylist7;
/* <var_ptypenode10:nullable Object> isa nullable AType */
cltype28 = type_nullable_parser_nodes__AType.color;
idtype29 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode10 == NULL) {
var27 = 1;
} else {
if(cltype28 >= var_ptypenode10->type->table_size) {
var27 = 0;
} else {
var27 = var_ptypenode10->type->type_table[cltype28] == idtype29;
}
}
if (!var27) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18289);
exit(1);
}
var_pexprnode12 = var_nodearraylist10;
/* <var_pexprnode12:nullable Object> isa nullable AExpr */
cltype31 = type_nullable_parser_nodes__AExpr.color;
idtype32 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode12 == NULL) {
var30 = 1;
} else {
if(cltype31 >= var_pexprnode12->type->table_size) {
var30 = 0;
} else {
var30 = var_pexprnode12->type->type_table[cltype31] == idtype32;
}
}
if (!var30) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18291);
exit(1);
}
var33 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var34 = NULL;
var35 = NULL;
var36 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var33->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var33, var_pdocnode2, var_pablenode3, var_pablenode4, var34, var_pvisibilitynode6, var_tkwvarnode7, var_tattridnode8, var35, var_ptypenode10, var36, var_pexprnode12) /* init_aattrpropdef on <var33:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var33);
var_ppropdefnode1 = var33;
var_node_list = var_ppropdefnode1;
var37 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction411> */
var38 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var37) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var38, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction411#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction411__action(val* self, val* p0) {
parser__ReduceAction411__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction412#action for (self: ReduceAction412, Parser) */
void parser__ReduceAction412__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var12 /* : Bool */;
int cltype;
int idtype;
val* var_pablenode3 /* var pablenode3: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_pablenode4 /* var pablenode4: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_tkwredefnode5 /* var tkwredefnode5: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pvisibilitynode6 /* var pvisibilitynode6: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_tkwvarnode7 /* var tkwvarnode7: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_tattridnode8 /* var tattridnode8: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var_ptypenode10 /* var ptypenode10: nullable Object */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var_pexprnode12 /* var pexprnode12: nullable Object */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
val* var37 /* : AAttrPropdef */;
val* var38 /* : null */;
val* var39 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var40 /* : Int */;
long var41 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var12 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var12 = 0;
} else {
var12 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18326);
exit(1);
}
var_pablenode3 = var_nodearraylist2;
/* <var_pablenode3:nullable Object> isa nullable AAble */
cltype14 = type_nullable_parser_nodes__AAble.color;
idtype15 = type_nullable_parser_nodes__AAble.id;
if(var_pablenode3 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_pablenode3->type->table_size) {
var13 = 0;
} else {
var13 = var_pablenode3->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18328);
exit(1);
}
var_pablenode4 = var_nodearraylist3;
/* <var_pablenode4:nullable Object> isa nullable AAble */
cltype17 = type_nullable_parser_nodes__AAble.color;
idtype18 = type_nullable_parser_nodes__AAble.id;
if(var_pablenode4 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_pablenode4->type->table_size) {
var16 = 0;
} else {
var16 = var_pablenode4->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18330);
exit(1);
}
var_tkwredefnode5 = var_nodearraylist4;
/* <var_tkwredefnode5:nullable Object> isa nullable TKwredef */
cltype20 = type_nullable_parser_nodes__TKwredef.color;
idtype21 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode5 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_tkwredefnode5->type->table_size) {
var19 = 0;
} else {
var19 = var_tkwredefnode5->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18332);
exit(1);
}
var_pvisibilitynode6 = var_nodearraylist5;
/* <var_pvisibilitynode6:nullable Object> isa nullable AVisibility */
cltype23 = type_nullable_parser_nodes__AVisibility.color;
idtype24 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode6 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_pvisibilitynode6->type->table_size) {
var22 = 0;
} else {
var22 = var_pvisibilitynode6->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18334);
exit(1);
}
var_tkwvarnode7 = var_nodearraylist6;
/* <var_tkwvarnode7:nullable Object> isa nullable TKwvar */
cltype26 = type_nullable_parser_nodes__TKwvar.color;
idtype27 = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode7 == NULL) {
var25 = 1;
} else {
if(cltype26 >= var_tkwvarnode7->type->table_size) {
var25 = 0;
} else {
var25 = var_tkwvarnode7->type->type_table[cltype26] == idtype27;
}
}
if (!var25) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18336);
exit(1);
}
var_tattridnode8 = var_nodearraylist7;
/* <var_tattridnode8:nullable Object> isa nullable TAttrid */
cltype29 = type_nullable_parser_nodes__TAttrid.color;
idtype30 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode8 == NULL) {
var28 = 1;
} else {
if(cltype29 >= var_tattridnode8->type->table_size) {
var28 = 0;
} else {
var28 = var_tattridnode8->type->type_table[cltype29] == idtype30;
}
}
if (!var28) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18338);
exit(1);
}
var_ptypenode10 = var_nodearraylist8;
/* <var_ptypenode10:nullable Object> isa nullable AType */
cltype32 = type_nullable_parser_nodes__AType.color;
idtype33 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode10 == NULL) {
var31 = 1;
} else {
if(cltype32 >= var_ptypenode10->type->table_size) {
var31 = 0;
} else {
var31 = var_ptypenode10->type->type_table[cltype32] == idtype33;
}
}
if (!var31) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18340);
exit(1);
}
var_pexprnode12 = var_nodearraylist11;
/* <var_pexprnode12:nullable Object> isa nullable AExpr */
cltype35 = type_nullable_parser_nodes__AExpr.color;
idtype36 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode12 == NULL) {
var34 = 1;
} else {
if(cltype35 >= var_pexprnode12->type->table_size) {
var34 = 0;
} else {
var34 = var_pexprnode12->type->type_table[cltype35] == idtype36;
}
}
if (!var34) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18342);
exit(1);
}
var37 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var38 = NULL;
var39 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var37->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var37, var_pdocnode2, var_pablenode3, var_pablenode4, var_tkwredefnode5, var_pvisibilitynode6, var_tkwvarnode7, var_tattridnode8, var38, var_ptypenode10, var39, var_pexprnode12) /* init_aattrpropdef on <var37:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var37);
var_ppropdefnode1 = var37;
var_node_list = var_ppropdefnode1;
var40 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction412> */
var41 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var40) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var41, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction412#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction412__action(val* self, val* p0) {
parser__ReduceAction412__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction413#action for (self: ReduceAction413, Parser) */
void parser__ReduceAction413__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode6 /* var pvisibilitynode6: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var_tkwvarnode7 /* var tkwvarnode7: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_tidnode9 /* var tidnode9: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : AAttrPropdef */;
val* var16 /* : null */;
val* var17 /* : null */;
val* var18 /* : null */;
val* var19 /* : null */;
val* var20 /* : null */;
val* var21 /* : null */;
val* var22 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var23 /* : Int */;
long var24 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var5 = 0;
} else {
var5 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18370);
exit(1);
}
var_pvisibilitynode6 = var_nodearraylist2;
/* <var_pvisibilitynode6:nullable Object> isa nullable AVisibility */
cltype7 = type_nullable_parser_nodes__AVisibility.color;
idtype8 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode6 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_pvisibilitynode6->type->table_size) {
var6 = 0;
} else {
var6 = var_pvisibilitynode6->type->type_table[cltype7] == idtype8;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18372);
exit(1);
}
var_tkwvarnode7 = var_nodearraylist3;
/* <var_tkwvarnode7:nullable Object> isa nullable TKwvar */
cltype10 = type_nullable_parser_nodes__TKwvar.color;
idtype11 = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode7 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_tkwvarnode7->type->table_size) {
var9 = 0;
} else {
var9 = var_tkwvarnode7->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18374);
exit(1);
}
var_tidnode9 = var_nodearraylist4;
/* <var_tidnode9:nullable Object> isa nullable TId */
cltype13 = type_nullable_parser_nodes__TId.color;
idtype14 = type_nullable_parser_nodes__TId.id;
if(var_tidnode9 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_tidnode9->type->table_size) {
var12 = 0;
} else {
var12 = var_tidnode9->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18376);
exit(1);
}
var15 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var16 = NULL;
var17 = NULL;
var18 = NULL;
var19 = NULL;
var20 = NULL;
var21 = NULL;
var22 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var15->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var15, var_pdocnode2, var16, var17, var18, var_pvisibilitynode6, var_tkwvarnode7, var19, var_tidnode9, var20, var21, var22) /* init_aattrpropdef on <var15:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var15);
var_ppropdefnode1 = var15;
var_node_list = var_ppropdefnode1;
var23 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction413> */
var24 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var23) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var24, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction413#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction413__action(val* self, val* p0) {
parser__ReduceAction413__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction414#action for (self: ReduceAction414, Parser) */
void parser__ReduceAction414__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode5 /* var tkwredefnode5: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_pvisibilitynode6 /* var pvisibilitynode6: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_tkwvarnode7 /* var tkwvarnode7: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_tidnode9 /* var tidnode9: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : AAttrPropdef */;
val* var20 /* : null */;
val* var21 /* : null */;
val* var22 /* : null */;
val* var23 /* : null */;
val* var24 /* : null */;
val* var25 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var26 /* : Int */;
long var27 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var6 = 0;
} else {
var6 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18405);
exit(1);
}
var_tkwredefnode5 = var_nodearraylist2;
/* <var_tkwredefnode5:nullable Object> isa nullable TKwredef */
cltype8 = type_nullable_parser_nodes__TKwredef.color;
idtype9 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode5 == NULL) {
var7 = 1;
} else {
if(cltype8 >= var_tkwredefnode5->type->table_size) {
var7 = 0;
} else {
var7 = var_tkwredefnode5->type->type_table[cltype8] == idtype9;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18407);
exit(1);
}
var_pvisibilitynode6 = var_nodearraylist3;
/* <var_pvisibilitynode6:nullable Object> isa nullable AVisibility */
cltype11 = type_nullable_parser_nodes__AVisibility.color;
idtype12 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode6 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_pvisibilitynode6->type->table_size) {
var10 = 0;
} else {
var10 = var_pvisibilitynode6->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18409);
exit(1);
}
var_tkwvarnode7 = var_nodearraylist4;
/* <var_tkwvarnode7:nullable Object> isa nullable TKwvar */
cltype14 = type_nullable_parser_nodes__TKwvar.color;
idtype15 = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode7 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_tkwvarnode7->type->table_size) {
var13 = 0;
} else {
var13 = var_tkwvarnode7->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18411);
exit(1);
}
var_tidnode9 = var_nodearraylist5;
/* <var_tidnode9:nullable Object> isa nullable TId */
cltype17 = type_nullable_parser_nodes__TId.color;
idtype18 = type_nullable_parser_nodes__TId.id;
if(var_tidnode9 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tidnode9->type->table_size) {
var16 = 0;
} else {
var16 = var_tidnode9->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18413);
exit(1);
}
var19 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var20 = NULL;
var21 = NULL;
var22 = NULL;
var23 = NULL;
var24 = NULL;
var25 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var19->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var19, var_pdocnode2, var20, var21, var_tkwredefnode5, var_pvisibilitynode6, var_tkwvarnode7, var22, var_tidnode9, var23, var24, var25) /* init_aattrpropdef on <var19:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var19);
var_ppropdefnode1 = var19;
var_node_list = var_ppropdefnode1;
var26 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction414> */
var27 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var26) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var27, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction414#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction414__action(val* self, val* p0) {
parser__ReduceAction414__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction415#action for (self: ReduceAction415, Parser) */
void parser__ReduceAction415__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode6 /* var pvisibilitynode6: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_tkwvarnode7 /* var tkwvarnode7: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_tidnode9 /* var tidnode9: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_ptypenode10 /* var ptypenode10: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : AAttrPropdef */;
val* var20 /* : null */;
val* var21 /* : null */;
val* var22 /* : null */;
val* var23 /* : null */;
val* var24 /* : null */;
val* var25 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var26 /* : Int */;
long var27 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var6 = 0;
} else {
var6 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18442);
exit(1);
}
var_pvisibilitynode6 = var_nodearraylist2;
/* <var_pvisibilitynode6:nullable Object> isa nullable AVisibility */
cltype8 = type_nullable_parser_nodes__AVisibility.color;
idtype9 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode6 == NULL) {
var7 = 1;
} else {
if(cltype8 >= var_pvisibilitynode6->type->table_size) {
var7 = 0;
} else {
var7 = var_pvisibilitynode6->type->type_table[cltype8] == idtype9;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18444);
exit(1);
}
var_tkwvarnode7 = var_nodearraylist3;
/* <var_tkwvarnode7:nullable Object> isa nullable TKwvar */
cltype11 = type_nullable_parser_nodes__TKwvar.color;
idtype12 = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode7 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_tkwvarnode7->type->table_size) {
var10 = 0;
} else {
var10 = var_tkwvarnode7->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18446);
exit(1);
}
var_tidnode9 = var_nodearraylist4;
/* <var_tidnode9:nullable Object> isa nullable TId */
cltype14 = type_nullable_parser_nodes__TId.color;
idtype15 = type_nullable_parser_nodes__TId.id;
if(var_tidnode9 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_tidnode9->type->table_size) {
var13 = 0;
} else {
var13 = var_tidnode9->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18448);
exit(1);
}
var_ptypenode10 = var_nodearraylist5;
/* <var_ptypenode10:nullable Object> isa nullable AType */
cltype17 = type_nullable_parser_nodes__AType.color;
idtype18 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode10 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_ptypenode10->type->table_size) {
var16 = 0;
} else {
var16 = var_ptypenode10->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18450);
exit(1);
}
var19 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var20 = NULL;
var21 = NULL;
var22 = NULL;
var23 = NULL;
var24 = NULL;
var25 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var19->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var19, var_pdocnode2, var20, var21, var22, var_pvisibilitynode6, var_tkwvarnode7, var23, var_tidnode9, var_ptypenode10, var24, var25) /* init_aattrpropdef on <var19:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var19);
var_ppropdefnode1 = var19;
var_node_list = var_ppropdefnode1;
var26 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction415> */
var27 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var26) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var27, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction415#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction415__action(val* self, val* p0) {
parser__ReduceAction415__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction416#action for (self: ReduceAction416, Parser) */
void parser__ReduceAction416__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode5 /* var tkwredefnode5: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pvisibilitynode6 /* var pvisibilitynode6: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_tkwvarnode7 /* var tkwvarnode7: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_tidnode9 /* var tidnode9: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_ptypenode10 /* var ptypenode10: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var23 /* : AAttrPropdef */;
val* var24 /* : null */;
val* var25 /* : null */;
val* var26 /* : null */;
val* var27 /* : null */;
val* var28 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var29 /* : Int */;
long var30 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var7 = 0;
} else {
var7 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18480);
exit(1);
}
var_tkwredefnode5 = var_nodearraylist2;
/* <var_tkwredefnode5:nullable Object> isa nullable TKwredef */
cltype9 = type_nullable_parser_nodes__TKwredef.color;
idtype10 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode5 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_tkwredefnode5->type->table_size) {
var8 = 0;
} else {
var8 = var_tkwredefnode5->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18482);
exit(1);
}
var_pvisibilitynode6 = var_nodearraylist3;
/* <var_pvisibilitynode6:nullable Object> isa nullable AVisibility */
cltype12 = type_nullable_parser_nodes__AVisibility.color;
idtype13 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode6 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_pvisibilitynode6->type->table_size) {
var11 = 0;
} else {
var11 = var_pvisibilitynode6->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18484);
exit(1);
}
var_tkwvarnode7 = var_nodearraylist4;
/* <var_tkwvarnode7:nullable Object> isa nullable TKwvar */
cltype15 = type_nullable_parser_nodes__TKwvar.color;
idtype16 = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode7 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_tkwvarnode7->type->table_size) {
var14 = 0;
} else {
var14 = var_tkwvarnode7->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18486);
exit(1);
}
var_tidnode9 = var_nodearraylist5;
/* <var_tidnode9:nullable Object> isa nullable TId */
cltype18 = type_nullable_parser_nodes__TId.color;
idtype19 = type_nullable_parser_nodes__TId.id;
if(var_tidnode9 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tidnode9->type->table_size) {
var17 = 0;
} else {
var17 = var_tidnode9->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18488);
exit(1);
}
var_ptypenode10 = var_nodearraylist6;
/* <var_ptypenode10:nullable Object> isa nullable AType */
cltype21 = type_nullable_parser_nodes__AType.color;
idtype22 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode10 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_ptypenode10->type->table_size) {
var20 = 0;
} else {
var20 = var_ptypenode10->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18490);
exit(1);
}
var23 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var24 = NULL;
var25 = NULL;
var26 = NULL;
var27 = NULL;
var28 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var23->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var23, var_pdocnode2, var24, var25, var_tkwredefnode5, var_pvisibilitynode6, var_tkwvarnode7, var26, var_tidnode9, var_ptypenode10, var27, var28) /* init_aattrpropdef on <var23:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var23);
var_ppropdefnode1 = var23;
var_node_list = var_ppropdefnode1;
var29 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction416> */
var30 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var29) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var30, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction416#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction416__action(val* self, val* p0) {
parser__ReduceAction416__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction417#action for (self: ReduceAction417, Parser) */
void parser__ReduceAction417__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_pablenode4 /* var pablenode4: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_pvisibilitynode6 /* var pvisibilitynode6: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_tkwvarnode7 /* var tkwvarnode7: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_tidnode9 /* var tidnode9: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : AAttrPropdef */;
val* var20 /* : null */;
val* var21 /* : null */;
val* var22 /* : null */;
val* var23 /* : null */;
val* var24 /* : null */;
val* var25 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var26 /* : Int */;
long var27 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var6 = 0;
} else {
var6 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18519);
exit(1);
}
var_pablenode4 = var_nodearraylist5;
/* <var_pablenode4:nullable Object> isa nullable AAble */
cltype8 = type_nullable_parser_nodes__AAble.color;
idtype9 = type_nullable_parser_nodes__AAble.id;
if(var_pablenode4 == NULL) {
var7 = 1;
} else {
if(cltype8 >= var_pablenode4->type->table_size) {
var7 = 0;
} else {
var7 = var_pablenode4->type->type_table[cltype8] == idtype9;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18521);
exit(1);
}
var_pvisibilitynode6 = var_nodearraylist2;
/* <var_pvisibilitynode6:nullable Object> isa nullable AVisibility */
cltype11 = type_nullable_parser_nodes__AVisibility.color;
idtype12 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode6 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_pvisibilitynode6->type->table_size) {
var10 = 0;
} else {
var10 = var_pvisibilitynode6->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18523);
exit(1);
}
var_tkwvarnode7 = var_nodearraylist3;
/* <var_tkwvarnode7:nullable Object> isa nullable TKwvar */
cltype14 = type_nullable_parser_nodes__TKwvar.color;
idtype15 = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode7 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_tkwvarnode7->type->table_size) {
var13 = 0;
} else {
var13 = var_tkwvarnode7->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18525);
exit(1);
}
var_tidnode9 = var_nodearraylist4;
/* <var_tidnode9:nullable Object> isa nullable TId */
cltype17 = type_nullable_parser_nodes__TId.color;
idtype18 = type_nullable_parser_nodes__TId.id;
if(var_tidnode9 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tidnode9->type->table_size) {
var16 = 0;
} else {
var16 = var_tidnode9->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18527);
exit(1);
}
var19 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var20 = NULL;
var21 = NULL;
var22 = NULL;
var23 = NULL;
var24 = NULL;
var25 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var19->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var19, var_pdocnode2, var20, var_pablenode4, var21, var_pvisibilitynode6, var_tkwvarnode7, var22, var_tidnode9, var23, var24, var25) /* init_aattrpropdef on <var19:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var19);
var_ppropdefnode1 = var19;
var_node_list = var_ppropdefnode1;
var26 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction417> */
var27 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var26) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var27, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction417#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction417__action(val* self, val* p0) {
parser__ReduceAction417__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction418#action for (self: ReduceAction418, Parser) */
void parser__ReduceAction418__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_pablenode4 /* var pablenode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_tkwredefnode5 /* var tkwredefnode5: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_pvisibilitynode6 /* var pvisibilitynode6: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_tkwvarnode7 /* var tkwvarnode7: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_tidnode9 /* var tidnode9: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var23 /* : AAttrPropdef */;
val* var24 /* : null */;
val* var25 /* : null */;
val* var26 /* : null */;
val* var27 /* : null */;
val* var28 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var29 /* : Int */;
long var30 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var7 = 0;
} else {
var7 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18557);
exit(1);
}
var_pablenode4 = var_nodearraylist6;
/* <var_pablenode4:nullable Object> isa nullable AAble */
cltype9 = type_nullable_parser_nodes__AAble.color;
idtype10 = type_nullable_parser_nodes__AAble.id;
if(var_pablenode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_pablenode4->type->table_size) {
var8 = 0;
} else {
var8 = var_pablenode4->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18559);
exit(1);
}
var_tkwredefnode5 = var_nodearraylist2;
/* <var_tkwredefnode5:nullable Object> isa nullable TKwredef */
cltype12 = type_nullable_parser_nodes__TKwredef.color;
idtype13 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode5 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_tkwredefnode5->type->table_size) {
var11 = 0;
} else {
var11 = var_tkwredefnode5->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18561);
exit(1);
}
var_pvisibilitynode6 = var_nodearraylist3;
/* <var_pvisibilitynode6:nullable Object> isa nullable AVisibility */
cltype15 = type_nullable_parser_nodes__AVisibility.color;
idtype16 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode6 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_pvisibilitynode6->type->table_size) {
var14 = 0;
} else {
var14 = var_pvisibilitynode6->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18563);
exit(1);
}
var_tkwvarnode7 = var_nodearraylist4;
/* <var_tkwvarnode7:nullable Object> isa nullable TKwvar */
cltype18 = type_nullable_parser_nodes__TKwvar.color;
idtype19 = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode7 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tkwvarnode7->type->table_size) {
var17 = 0;
} else {
var17 = var_tkwvarnode7->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18565);
exit(1);
}
var_tidnode9 = var_nodearraylist5;
/* <var_tidnode9:nullable Object> isa nullable TId */
cltype21 = type_nullable_parser_nodes__TId.color;
idtype22 = type_nullable_parser_nodes__TId.id;
if(var_tidnode9 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_tidnode9->type->table_size) {
var20 = 0;
} else {
var20 = var_tidnode9->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18567);
exit(1);
}
var23 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var24 = NULL;
var25 = NULL;
var26 = NULL;
var27 = NULL;
var28 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var23->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var23, var_pdocnode2, var24, var_pablenode4, var_tkwredefnode5, var_pvisibilitynode6, var_tkwvarnode7, var25, var_tidnode9, var26, var27, var28) /* init_aattrpropdef on <var23:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var23);
var_ppropdefnode1 = var23;
var_node_list = var_ppropdefnode1;
var29 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction418> */
var30 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var29) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var30, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction418#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction418__action(val* self, val* p0) {
parser__ReduceAction418__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction419#action for (self: ReduceAction419, Parser) */
void parser__ReduceAction419__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_pablenode4 /* var pablenode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pvisibilitynode6 /* var pvisibilitynode6: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_tkwvarnode7 /* var tkwvarnode7: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_tidnode9 /* var tidnode9: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_ptypenode10 /* var ptypenode10: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var23 /* : AAttrPropdef */;
val* var24 /* : null */;
val* var25 /* : null */;
val* var26 /* : null */;
val* var27 /* : null */;
val* var28 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var29 /* : Int */;
long var30 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var7 = 0;
} else {
var7 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18597);
exit(1);
}
var_pablenode4 = var_nodearraylist6;
/* <var_pablenode4:nullable Object> isa nullable AAble */
cltype9 = type_nullable_parser_nodes__AAble.color;
idtype10 = type_nullable_parser_nodes__AAble.id;
if(var_pablenode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_pablenode4->type->table_size) {
var8 = 0;
} else {
var8 = var_pablenode4->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18599);
exit(1);
}
var_pvisibilitynode6 = var_nodearraylist2;
/* <var_pvisibilitynode6:nullable Object> isa nullable AVisibility */
cltype12 = type_nullable_parser_nodes__AVisibility.color;
idtype13 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode6 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_pvisibilitynode6->type->table_size) {
var11 = 0;
} else {
var11 = var_pvisibilitynode6->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18601);
exit(1);
}
var_tkwvarnode7 = var_nodearraylist3;
/* <var_tkwvarnode7:nullable Object> isa nullable TKwvar */
cltype15 = type_nullable_parser_nodes__TKwvar.color;
idtype16 = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode7 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_tkwvarnode7->type->table_size) {
var14 = 0;
} else {
var14 = var_tkwvarnode7->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18603);
exit(1);
}
var_tidnode9 = var_nodearraylist4;
/* <var_tidnode9:nullable Object> isa nullable TId */
cltype18 = type_nullable_parser_nodes__TId.color;
idtype19 = type_nullable_parser_nodes__TId.id;
if(var_tidnode9 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tidnode9->type->table_size) {
var17 = 0;
} else {
var17 = var_tidnode9->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18605);
exit(1);
}
var_ptypenode10 = var_nodearraylist5;
/* <var_ptypenode10:nullable Object> isa nullable AType */
cltype21 = type_nullable_parser_nodes__AType.color;
idtype22 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode10 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_ptypenode10->type->table_size) {
var20 = 0;
} else {
var20 = var_ptypenode10->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18607);
exit(1);
}
var23 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var24 = NULL;
var25 = NULL;
var26 = NULL;
var27 = NULL;
var28 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var23->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var23, var_pdocnode2, var24, var_pablenode4, var25, var_pvisibilitynode6, var_tkwvarnode7, var26, var_tidnode9, var_ptypenode10, var27, var28) /* init_aattrpropdef on <var23:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var23);
var_ppropdefnode1 = var23;
var_node_list = var_ppropdefnode1;
var29 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction419> */
var30 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var29) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var30, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction419#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction419__action(val* self, val* p0) {
parser__ReduceAction419__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction420#action for (self: ReduceAction420, Parser) */
void parser__ReduceAction420__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_pablenode4 /* var pablenode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_tkwredefnode5 /* var tkwredefnode5: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_pvisibilitynode6 /* var pvisibilitynode6: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_tkwvarnode7 /* var tkwvarnode7: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_tidnode9 /* var tidnode9: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_ptypenode10 /* var ptypenode10: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var27 /* : AAttrPropdef */;
val* var28 /* : null */;
val* var29 /* : null */;
val* var30 /* : null */;
val* var31 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var32 /* : Int */;
long var33 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18638);
exit(1);
}
var_pablenode4 = var_nodearraylist7;
/* <var_pablenode4:nullable Object> isa nullable AAble */
cltype10 = type_nullable_parser_nodes__AAble.color;
idtype11 = type_nullable_parser_nodes__AAble.id;
if(var_pablenode4 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_pablenode4->type->table_size) {
var9 = 0;
} else {
var9 = var_pablenode4->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18640);
exit(1);
}
var_tkwredefnode5 = var_nodearraylist2;
/* <var_tkwredefnode5:nullable Object> isa nullable TKwredef */
cltype13 = type_nullable_parser_nodes__TKwredef.color;
idtype14 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode5 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_tkwredefnode5->type->table_size) {
var12 = 0;
} else {
var12 = var_tkwredefnode5->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18642);
exit(1);
}
var_pvisibilitynode6 = var_nodearraylist3;
/* <var_pvisibilitynode6:nullable Object> isa nullable AVisibility */
cltype16 = type_nullable_parser_nodes__AVisibility.color;
idtype17 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode6 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_pvisibilitynode6->type->table_size) {
var15 = 0;
} else {
var15 = var_pvisibilitynode6->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18644);
exit(1);
}
var_tkwvarnode7 = var_nodearraylist4;
/* <var_tkwvarnode7:nullable Object> isa nullable TKwvar */
cltype19 = type_nullable_parser_nodes__TKwvar.color;
idtype20 = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode7 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_tkwvarnode7->type->table_size) {
var18 = 0;
} else {
var18 = var_tkwvarnode7->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18646);
exit(1);
}
var_tidnode9 = var_nodearraylist5;
/* <var_tidnode9:nullable Object> isa nullable TId */
cltype22 = type_nullable_parser_nodes__TId.color;
idtype23 = type_nullable_parser_nodes__TId.id;
if(var_tidnode9 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_tidnode9->type->table_size) {
var21 = 0;
} else {
var21 = var_tidnode9->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18648);
exit(1);
}
var_ptypenode10 = var_nodearraylist6;
/* <var_ptypenode10:nullable Object> isa nullable AType */
cltype25 = type_nullable_parser_nodes__AType.color;
idtype26 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode10 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_ptypenode10->type->table_size) {
var24 = 0;
} else {
var24 = var_ptypenode10->type->type_table[cltype25] == idtype26;
}
}
if (!var24) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18650);
exit(1);
}
var27 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var28 = NULL;
var29 = NULL;
var30 = NULL;
var31 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var27->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var27, var_pdocnode2, var28, var_pablenode4, var_tkwredefnode5, var_pvisibilitynode6, var_tkwvarnode7, var29, var_tidnode9, var_ptypenode10, var30, var31) /* init_aattrpropdef on <var27:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var27);
var_ppropdefnode1 = var27;
var_node_list = var_ppropdefnode1;
var32 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction420> */
var33 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var32) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var33, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction420#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction420__action(val* self, val* p0) {
parser__ReduceAction420__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction421#action for (self: ReduceAction421, Parser) */
void parser__ReduceAction421__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode6 /* var pvisibilitynode6: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_tkwvarnode7 /* var tkwvarnode7: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_tidnode9 /* var tidnode9: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_pannotationsnode11 /* var pannotationsnode11: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : AAttrPropdef */;
val* var20 /* : null */;
val* var21 /* : null */;
val* var22 /* : null */;
val* var23 /* : null */;
val* var24 /* : null */;
val* var25 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var26 /* : Int */;
long var27 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var6 = 0;
} else {
var6 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18679);
exit(1);
}
var_pvisibilitynode6 = var_nodearraylist2;
/* <var_pvisibilitynode6:nullable Object> isa nullable AVisibility */
cltype8 = type_nullable_parser_nodes__AVisibility.color;
idtype9 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode6 == NULL) {
var7 = 1;
} else {
if(cltype8 >= var_pvisibilitynode6->type->table_size) {
var7 = 0;
} else {
var7 = var_pvisibilitynode6->type->type_table[cltype8] == idtype9;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18681);
exit(1);
}
var_tkwvarnode7 = var_nodearraylist3;
/* <var_tkwvarnode7:nullable Object> isa nullable TKwvar */
cltype11 = type_nullable_parser_nodes__TKwvar.color;
idtype12 = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode7 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_tkwvarnode7->type->table_size) {
var10 = 0;
} else {
var10 = var_tkwvarnode7->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18683);
exit(1);
}
var_tidnode9 = var_nodearraylist4;
/* <var_tidnode9:nullable Object> isa nullable TId */
cltype14 = type_nullable_parser_nodes__TId.color;
idtype15 = type_nullable_parser_nodes__TId.id;
if(var_tidnode9 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_tidnode9->type->table_size) {
var13 = 0;
} else {
var13 = var_tidnode9->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18685);
exit(1);
}
var_pannotationsnode11 = var_nodearraylist5;
/* <var_pannotationsnode11:nullable Object> isa nullable AAnnotations */
cltype17 = type_nullable_parser_nodes__AAnnotations.color;
idtype18 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode11 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_pannotationsnode11->type->table_size) {
var16 = 0;
} else {
var16 = var_pannotationsnode11->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18687);
exit(1);
}
var19 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var20 = NULL;
var21 = NULL;
var22 = NULL;
var23 = NULL;
var24 = NULL;
var25 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var19->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var19, var_pdocnode2, var20, var21, var22, var_pvisibilitynode6, var_tkwvarnode7, var23, var_tidnode9, var24, var_pannotationsnode11, var25) /* init_aattrpropdef on <var19:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var19);
var_ppropdefnode1 = var19;
var_node_list = var_ppropdefnode1;
var26 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction421> */
var27 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var26) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var27, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction421#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction421__action(val* self, val* p0) {
parser__ReduceAction421__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction422#action for (self: ReduceAction422, Parser) */
void parser__ReduceAction422__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode5 /* var tkwredefnode5: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pvisibilitynode6 /* var pvisibilitynode6: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_tkwvarnode7 /* var tkwvarnode7: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_tidnode9 /* var tidnode9: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pannotationsnode11 /* var pannotationsnode11: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var23 /* : AAttrPropdef */;
val* var24 /* : null */;
val* var25 /* : null */;
val* var26 /* : null */;
val* var27 /* : null */;
val* var28 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var29 /* : Int */;
long var30 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var7 = 0;
} else {
var7 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18717);
exit(1);
}
var_tkwredefnode5 = var_nodearraylist2;
/* <var_tkwredefnode5:nullable Object> isa nullable TKwredef */
cltype9 = type_nullable_parser_nodes__TKwredef.color;
idtype10 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode5 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_tkwredefnode5->type->table_size) {
var8 = 0;
} else {
var8 = var_tkwredefnode5->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18719);
exit(1);
}
var_pvisibilitynode6 = var_nodearraylist3;
/* <var_pvisibilitynode6:nullable Object> isa nullable AVisibility */
cltype12 = type_nullable_parser_nodes__AVisibility.color;
idtype13 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode6 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_pvisibilitynode6->type->table_size) {
var11 = 0;
} else {
var11 = var_pvisibilitynode6->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18721);
exit(1);
}
var_tkwvarnode7 = var_nodearraylist4;
/* <var_tkwvarnode7:nullable Object> isa nullable TKwvar */
cltype15 = type_nullable_parser_nodes__TKwvar.color;
idtype16 = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode7 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_tkwvarnode7->type->table_size) {
var14 = 0;
} else {
var14 = var_tkwvarnode7->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18723);
exit(1);
}
var_tidnode9 = var_nodearraylist5;
/* <var_tidnode9:nullable Object> isa nullable TId */
cltype18 = type_nullable_parser_nodes__TId.color;
idtype19 = type_nullable_parser_nodes__TId.id;
if(var_tidnode9 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tidnode9->type->table_size) {
var17 = 0;
} else {
var17 = var_tidnode9->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18725);
exit(1);
}
var_pannotationsnode11 = var_nodearraylist6;
/* <var_pannotationsnode11:nullable Object> isa nullable AAnnotations */
cltype21 = type_nullable_parser_nodes__AAnnotations.color;
idtype22 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode11 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_pannotationsnode11->type->table_size) {
var20 = 0;
} else {
var20 = var_pannotationsnode11->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18727);
exit(1);
}
var23 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var24 = NULL;
var25 = NULL;
var26 = NULL;
var27 = NULL;
var28 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var23->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var23, var_pdocnode2, var24, var25, var_tkwredefnode5, var_pvisibilitynode6, var_tkwvarnode7, var26, var_tidnode9, var27, var_pannotationsnode11, var28) /* init_aattrpropdef on <var23:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var23);
var_ppropdefnode1 = var23;
var_node_list = var_ppropdefnode1;
var29 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction422> */
var30 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var29) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var30, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction422#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction422__action(val* self, val* p0) {
parser__ReduceAction422__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction423#action for (self: ReduceAction423, Parser) */
void parser__ReduceAction423__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode6 /* var pvisibilitynode6: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_tkwvarnode7 /* var tkwvarnode7: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_tidnode9 /* var tidnode9: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_ptypenode10 /* var ptypenode10: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pannotationsnode11 /* var pannotationsnode11: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var23 /* : AAttrPropdef */;
val* var24 /* : null */;
val* var25 /* : null */;
val* var26 /* : null */;
val* var27 /* : null */;
val* var28 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var29 /* : Int */;
long var30 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var7 = 0;
} else {
var7 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18757);
exit(1);
}
var_pvisibilitynode6 = var_nodearraylist2;
/* <var_pvisibilitynode6:nullable Object> isa nullable AVisibility */
cltype9 = type_nullable_parser_nodes__AVisibility.color;
idtype10 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode6 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_pvisibilitynode6->type->table_size) {
var8 = 0;
} else {
var8 = var_pvisibilitynode6->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18759);
exit(1);
}
var_tkwvarnode7 = var_nodearraylist3;
/* <var_tkwvarnode7:nullable Object> isa nullable TKwvar */
cltype12 = type_nullable_parser_nodes__TKwvar.color;
idtype13 = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode7 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_tkwvarnode7->type->table_size) {
var11 = 0;
} else {
var11 = var_tkwvarnode7->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18761);
exit(1);
}
var_tidnode9 = var_nodearraylist4;
/* <var_tidnode9:nullable Object> isa nullable TId */
cltype15 = type_nullable_parser_nodes__TId.color;
idtype16 = type_nullable_parser_nodes__TId.id;
if(var_tidnode9 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_tidnode9->type->table_size) {
var14 = 0;
} else {
var14 = var_tidnode9->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18763);
exit(1);
}
var_ptypenode10 = var_nodearraylist5;
/* <var_ptypenode10:nullable Object> isa nullable AType */
cltype18 = type_nullable_parser_nodes__AType.color;
idtype19 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode10 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_ptypenode10->type->table_size) {
var17 = 0;
} else {
var17 = var_ptypenode10->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18765);
exit(1);
}
var_pannotationsnode11 = var_nodearraylist6;
/* <var_pannotationsnode11:nullable Object> isa nullable AAnnotations */
cltype21 = type_nullable_parser_nodes__AAnnotations.color;
idtype22 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode11 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_pannotationsnode11->type->table_size) {
var20 = 0;
} else {
var20 = var_pannotationsnode11->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18767);
exit(1);
}
var23 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var24 = NULL;
var25 = NULL;
var26 = NULL;
var27 = NULL;
var28 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var23->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var23, var_pdocnode2, var24, var25, var26, var_pvisibilitynode6, var_tkwvarnode7, var27, var_tidnode9, var_ptypenode10, var_pannotationsnode11, var28) /* init_aattrpropdef on <var23:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var23);
var_ppropdefnode1 = var23;
var_node_list = var_ppropdefnode1;
var29 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction423> */
var30 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var29) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var30, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction423#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction423__action(val* self, val* p0) {
parser__ReduceAction423__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction424#action for (self: ReduceAction424, Parser) */
void parser__ReduceAction424__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode5 /* var tkwredefnode5: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_pvisibilitynode6 /* var pvisibilitynode6: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_tkwvarnode7 /* var tkwvarnode7: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_tidnode9 /* var tidnode9: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_ptypenode10 /* var ptypenode10: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_pannotationsnode11 /* var pannotationsnode11: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var27 /* : AAttrPropdef */;
val* var28 /* : null */;
val* var29 /* : null */;
val* var30 /* : null */;
val* var31 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var32 /* : Int */;
long var33 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18798);
exit(1);
}
var_tkwredefnode5 = var_nodearraylist2;
/* <var_tkwredefnode5:nullable Object> isa nullable TKwredef */
cltype10 = type_nullable_parser_nodes__TKwredef.color;
idtype11 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode5 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_tkwredefnode5->type->table_size) {
var9 = 0;
} else {
var9 = var_tkwredefnode5->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18800);
exit(1);
}
var_pvisibilitynode6 = var_nodearraylist3;
/* <var_pvisibilitynode6:nullable Object> isa nullable AVisibility */
cltype13 = type_nullable_parser_nodes__AVisibility.color;
idtype14 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode6 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_pvisibilitynode6->type->table_size) {
var12 = 0;
} else {
var12 = var_pvisibilitynode6->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18802);
exit(1);
}
var_tkwvarnode7 = var_nodearraylist4;
/* <var_tkwvarnode7:nullable Object> isa nullable TKwvar */
cltype16 = type_nullable_parser_nodes__TKwvar.color;
idtype17 = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode7 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_tkwvarnode7->type->table_size) {
var15 = 0;
} else {
var15 = var_tkwvarnode7->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18804);
exit(1);
}
var_tidnode9 = var_nodearraylist5;
/* <var_tidnode9:nullable Object> isa nullable TId */
cltype19 = type_nullable_parser_nodes__TId.color;
idtype20 = type_nullable_parser_nodes__TId.id;
if(var_tidnode9 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_tidnode9->type->table_size) {
var18 = 0;
} else {
var18 = var_tidnode9->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18806);
exit(1);
}
var_ptypenode10 = var_nodearraylist6;
/* <var_ptypenode10:nullable Object> isa nullable AType */
cltype22 = type_nullable_parser_nodes__AType.color;
idtype23 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode10 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_ptypenode10->type->table_size) {
var21 = 0;
} else {
var21 = var_ptypenode10->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18808);
exit(1);
}
var_pannotationsnode11 = var_nodearraylist7;
/* <var_pannotationsnode11:nullable Object> isa nullable AAnnotations */
cltype25 = type_nullable_parser_nodes__AAnnotations.color;
idtype26 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode11 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_pannotationsnode11->type->table_size) {
var24 = 0;
} else {
var24 = var_pannotationsnode11->type->type_table[cltype25] == idtype26;
}
}
if (!var24) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18810);
exit(1);
}
var27 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var28 = NULL;
var29 = NULL;
var30 = NULL;
var31 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var27->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var27, var_pdocnode2, var28, var29, var_tkwredefnode5, var_pvisibilitynode6, var_tkwvarnode7, var30, var_tidnode9, var_ptypenode10, var_pannotationsnode11, var31) /* init_aattrpropdef on <var27:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var27);
var_ppropdefnode1 = var27;
var_node_list = var_ppropdefnode1;
var32 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction424> */
var33 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var32) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var33, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction424#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction424__action(val* self, val* p0) {
parser__ReduceAction424__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction425#action for (self: ReduceAction425, Parser) */
void parser__ReduceAction425__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_pablenode4 /* var pablenode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pvisibilitynode6 /* var pvisibilitynode6: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_tkwvarnode7 /* var tkwvarnode7: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_tidnode9 /* var tidnode9: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pannotationsnode11 /* var pannotationsnode11: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var23 /* : AAttrPropdef */;
val* var24 /* : null */;
val* var25 /* : null */;
val* var26 /* : null */;
val* var27 /* : null */;
val* var28 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var29 /* : Int */;
long var30 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var7 = 0;
} else {
var7 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18840);
exit(1);
}
var_pablenode4 = var_nodearraylist5;
/* <var_pablenode4:nullable Object> isa nullable AAble */
cltype9 = type_nullable_parser_nodes__AAble.color;
idtype10 = type_nullable_parser_nodes__AAble.id;
if(var_pablenode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_pablenode4->type->table_size) {
var8 = 0;
} else {
var8 = var_pablenode4->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18842);
exit(1);
}
var_pvisibilitynode6 = var_nodearraylist2;
/* <var_pvisibilitynode6:nullable Object> isa nullable AVisibility */
cltype12 = type_nullable_parser_nodes__AVisibility.color;
idtype13 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode6 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_pvisibilitynode6->type->table_size) {
var11 = 0;
} else {
var11 = var_pvisibilitynode6->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18844);
exit(1);
}
var_tkwvarnode7 = var_nodearraylist3;
/* <var_tkwvarnode7:nullable Object> isa nullable TKwvar */
cltype15 = type_nullable_parser_nodes__TKwvar.color;
idtype16 = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode7 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_tkwvarnode7->type->table_size) {
var14 = 0;
} else {
var14 = var_tkwvarnode7->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18846);
exit(1);
}
var_tidnode9 = var_nodearraylist4;
/* <var_tidnode9:nullable Object> isa nullable TId */
cltype18 = type_nullable_parser_nodes__TId.color;
idtype19 = type_nullable_parser_nodes__TId.id;
if(var_tidnode9 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tidnode9->type->table_size) {
var17 = 0;
} else {
var17 = var_tidnode9->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18848);
exit(1);
}
var_pannotationsnode11 = var_nodearraylist6;
/* <var_pannotationsnode11:nullable Object> isa nullable AAnnotations */
cltype21 = type_nullable_parser_nodes__AAnnotations.color;
idtype22 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode11 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_pannotationsnode11->type->table_size) {
var20 = 0;
} else {
var20 = var_pannotationsnode11->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18850);
exit(1);
}
var23 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var24 = NULL;
var25 = NULL;
var26 = NULL;
var27 = NULL;
var28 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var23->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var23, var_pdocnode2, var24, var_pablenode4, var25, var_pvisibilitynode6, var_tkwvarnode7, var26, var_tidnode9, var27, var_pannotationsnode11, var28) /* init_aattrpropdef on <var23:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var23);
var_ppropdefnode1 = var23;
var_node_list = var_ppropdefnode1;
var29 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction425> */
var30 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var29) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var30, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction425#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction425__action(val* self, val* p0) {
parser__ReduceAction425__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction426#action for (self: ReduceAction426, Parser) */
void parser__ReduceAction426__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_pablenode4 /* var pablenode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_tkwredefnode5 /* var tkwredefnode5: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_pvisibilitynode6 /* var pvisibilitynode6: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_tkwvarnode7 /* var tkwvarnode7: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_tidnode9 /* var tidnode9: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_pannotationsnode11 /* var pannotationsnode11: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var27 /* : AAttrPropdef */;
val* var28 /* : null */;
val* var29 /* : null */;
val* var30 /* : null */;
val* var31 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var32 /* : Int */;
long var33 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18881);
exit(1);
}
var_pablenode4 = var_nodearraylist6;
/* <var_pablenode4:nullable Object> isa nullable AAble */
cltype10 = type_nullable_parser_nodes__AAble.color;
idtype11 = type_nullable_parser_nodes__AAble.id;
if(var_pablenode4 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_pablenode4->type->table_size) {
var9 = 0;
} else {
var9 = var_pablenode4->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18883);
exit(1);
}
var_tkwredefnode5 = var_nodearraylist2;
/* <var_tkwredefnode5:nullable Object> isa nullable TKwredef */
cltype13 = type_nullable_parser_nodes__TKwredef.color;
idtype14 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode5 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_tkwredefnode5->type->table_size) {
var12 = 0;
} else {
var12 = var_tkwredefnode5->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18885);
exit(1);
}
var_pvisibilitynode6 = var_nodearraylist3;
/* <var_pvisibilitynode6:nullable Object> isa nullable AVisibility */
cltype16 = type_nullable_parser_nodes__AVisibility.color;
idtype17 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode6 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_pvisibilitynode6->type->table_size) {
var15 = 0;
} else {
var15 = var_pvisibilitynode6->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18887);
exit(1);
}
var_tkwvarnode7 = var_nodearraylist4;
/* <var_tkwvarnode7:nullable Object> isa nullable TKwvar */
cltype19 = type_nullable_parser_nodes__TKwvar.color;
idtype20 = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode7 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_tkwvarnode7->type->table_size) {
var18 = 0;
} else {
var18 = var_tkwvarnode7->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18889);
exit(1);
}
var_tidnode9 = var_nodearraylist5;
/* <var_tidnode9:nullable Object> isa nullable TId */
cltype22 = type_nullable_parser_nodes__TId.color;
idtype23 = type_nullable_parser_nodes__TId.id;
if(var_tidnode9 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_tidnode9->type->table_size) {
var21 = 0;
} else {
var21 = var_tidnode9->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18891);
exit(1);
}
var_pannotationsnode11 = var_nodearraylist7;
/* <var_pannotationsnode11:nullable Object> isa nullable AAnnotations */
cltype25 = type_nullable_parser_nodes__AAnnotations.color;
idtype26 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode11 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_pannotationsnode11->type->table_size) {
var24 = 0;
} else {
var24 = var_pannotationsnode11->type->type_table[cltype25] == idtype26;
}
}
if (!var24) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18893);
exit(1);
}
var27 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var28 = NULL;
var29 = NULL;
var30 = NULL;
var31 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var27->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var27, var_pdocnode2, var28, var_pablenode4, var_tkwredefnode5, var_pvisibilitynode6, var_tkwvarnode7, var29, var_tidnode9, var30, var_pannotationsnode11, var31) /* init_aattrpropdef on <var27:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var27);
var_ppropdefnode1 = var27;
var_node_list = var_ppropdefnode1;
var32 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction426> */
var33 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var32) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var33, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction426#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction426__action(val* self, val* p0) {
parser__ReduceAction426__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction427#action for (self: ReduceAction427, Parser) */
void parser__ReduceAction427__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_pablenode4 /* var pablenode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_pvisibilitynode6 /* var pvisibilitynode6: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_tkwvarnode7 /* var tkwvarnode7: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_tidnode9 /* var tidnode9: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_ptypenode10 /* var ptypenode10: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_pannotationsnode11 /* var pannotationsnode11: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var27 /* : AAttrPropdef */;
val* var28 /* : null */;
val* var29 /* : null */;
val* var30 /* : null */;
val* var31 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var32 /* : Int */;
long var33 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18924);
exit(1);
}
var_pablenode4 = var_nodearraylist6;
/* <var_pablenode4:nullable Object> isa nullable AAble */
cltype10 = type_nullable_parser_nodes__AAble.color;
idtype11 = type_nullable_parser_nodes__AAble.id;
if(var_pablenode4 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_pablenode4->type->table_size) {
var9 = 0;
} else {
var9 = var_pablenode4->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18926);
exit(1);
}
var_pvisibilitynode6 = var_nodearraylist2;
/* <var_pvisibilitynode6:nullable Object> isa nullable AVisibility */
cltype13 = type_nullable_parser_nodes__AVisibility.color;
idtype14 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode6 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_pvisibilitynode6->type->table_size) {
var12 = 0;
} else {
var12 = var_pvisibilitynode6->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18928);
exit(1);
}
var_tkwvarnode7 = var_nodearraylist3;
/* <var_tkwvarnode7:nullable Object> isa nullable TKwvar */
cltype16 = type_nullable_parser_nodes__TKwvar.color;
idtype17 = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode7 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_tkwvarnode7->type->table_size) {
var15 = 0;
} else {
var15 = var_tkwvarnode7->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18930);
exit(1);
}
var_tidnode9 = var_nodearraylist4;
/* <var_tidnode9:nullable Object> isa nullable TId */
cltype19 = type_nullable_parser_nodes__TId.color;
idtype20 = type_nullable_parser_nodes__TId.id;
if(var_tidnode9 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_tidnode9->type->table_size) {
var18 = 0;
} else {
var18 = var_tidnode9->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18932);
exit(1);
}
var_ptypenode10 = var_nodearraylist5;
/* <var_ptypenode10:nullable Object> isa nullable AType */
cltype22 = type_nullable_parser_nodes__AType.color;
idtype23 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode10 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_ptypenode10->type->table_size) {
var21 = 0;
} else {
var21 = var_ptypenode10->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18934);
exit(1);
}
var_pannotationsnode11 = var_nodearraylist7;
/* <var_pannotationsnode11:nullable Object> isa nullable AAnnotations */
cltype25 = type_nullable_parser_nodes__AAnnotations.color;
idtype26 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode11 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_pannotationsnode11->type->table_size) {
var24 = 0;
} else {
var24 = var_pannotationsnode11->type->type_table[cltype25] == idtype26;
}
}
if (!var24) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18936);
exit(1);
}
var27 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var28 = NULL;
var29 = NULL;
var30 = NULL;
var31 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var27->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var27, var_pdocnode2, var28, var_pablenode4, var29, var_pvisibilitynode6, var_tkwvarnode7, var30, var_tidnode9, var_ptypenode10, var_pannotationsnode11, var31) /* init_aattrpropdef on <var27:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var27);
var_ppropdefnode1 = var27;
var_node_list = var_ppropdefnode1;
var32 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction427> */
var33 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var32) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var33, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction427#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction427__action(val* self, val* p0) {
parser__ReduceAction427__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction428#action for (self: ReduceAction428, Parser) */
void parser__ReduceAction428__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_pablenode4 /* var pablenode4: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_tkwredefnode5 /* var tkwredefnode5: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_pvisibilitynode6 /* var pvisibilitynode6: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_tkwvarnode7 /* var tkwvarnode7: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_tidnode9 /* var tidnode9: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_ptypenode10 /* var ptypenode10: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_pannotationsnode11 /* var pannotationsnode11: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var31 /* : AAttrPropdef */;
val* var32 /* : null */;
val* var33 /* : null */;
val* var34 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var35 /* : Int */;
long var36 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var9 = 0;
} else {
var9 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18968);
exit(1);
}
var_pablenode4 = var_nodearraylist7;
/* <var_pablenode4:nullable Object> isa nullable AAble */
cltype11 = type_nullable_parser_nodes__AAble.color;
idtype12 = type_nullable_parser_nodes__AAble.id;
if(var_pablenode4 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_pablenode4->type->table_size) {
var10 = 0;
} else {
var10 = var_pablenode4->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18970);
exit(1);
}
var_tkwredefnode5 = var_nodearraylist2;
/* <var_tkwredefnode5:nullable Object> isa nullable TKwredef */
cltype14 = type_nullable_parser_nodes__TKwredef.color;
idtype15 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode5 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_tkwredefnode5->type->table_size) {
var13 = 0;
} else {
var13 = var_tkwredefnode5->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18972);
exit(1);
}
var_pvisibilitynode6 = var_nodearraylist3;
/* <var_pvisibilitynode6:nullable Object> isa nullable AVisibility */
cltype17 = type_nullable_parser_nodes__AVisibility.color;
idtype18 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode6 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_pvisibilitynode6->type->table_size) {
var16 = 0;
} else {
var16 = var_pvisibilitynode6->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18974);
exit(1);
}
var_tkwvarnode7 = var_nodearraylist4;
/* <var_tkwvarnode7:nullable Object> isa nullable TKwvar */
cltype20 = type_nullable_parser_nodes__TKwvar.color;
idtype21 = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode7 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_tkwvarnode7->type->table_size) {
var19 = 0;
} else {
var19 = var_tkwvarnode7->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18976);
exit(1);
}
var_tidnode9 = var_nodearraylist5;
/* <var_tidnode9:nullable Object> isa nullable TId */
cltype23 = type_nullable_parser_nodes__TId.color;
idtype24 = type_nullable_parser_nodes__TId.id;
if(var_tidnode9 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_tidnode9->type->table_size) {
var22 = 0;
} else {
var22 = var_tidnode9->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18978);
exit(1);
}
var_ptypenode10 = var_nodearraylist6;
/* <var_ptypenode10:nullable Object> isa nullable AType */
cltype26 = type_nullable_parser_nodes__AType.color;
idtype27 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode10 == NULL) {
var25 = 1;
} else {
if(cltype26 >= var_ptypenode10->type->table_size) {
var25 = 0;
} else {
var25 = var_ptypenode10->type->type_table[cltype26] == idtype27;
}
}
if (!var25) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18980);
exit(1);
}
var_pannotationsnode11 = var_nodearraylist8;
/* <var_pannotationsnode11:nullable Object> isa nullable AAnnotations */
cltype29 = type_nullable_parser_nodes__AAnnotations.color;
idtype30 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode11 == NULL) {
var28 = 1;
} else {
if(cltype29 >= var_pannotationsnode11->type->table_size) {
var28 = 0;
} else {
var28 = var_pannotationsnode11->type->type_table[cltype29] == idtype30;
}
}
if (!var28) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18982);
exit(1);
}
var31 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var32 = NULL;
var33 = NULL;
var34 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var31->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var31, var_pdocnode2, var32, var_pablenode4, var_tkwredefnode5, var_pvisibilitynode6, var_tkwvarnode7, var33, var_tidnode9, var_ptypenode10, var_pannotationsnode11, var34) /* init_aattrpropdef on <var31:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var31);
var_ppropdefnode1 = var31;
var_node_list = var_ppropdefnode1;
var35 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction428> */
var36 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var35) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var36, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction428#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction428__action(val* self, val* p0) {
parser__ReduceAction428__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction429#action for (self: ReduceAction429, Parser) */
void parser__ReduceAction429__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode6 /* var pvisibilitynode6: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_tkwvarnode7 /* var tkwvarnode7: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_tidnode9 /* var tidnode9: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pexprnode12 /* var pexprnode12: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : AAttrPropdef */;
val* var22 /* : null */;
val* var23 /* : null */;
val* var24 /* : null */;
val* var25 /* : null */;
val* var26 /* : null */;
val* var27 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var28 /* : Int */;
long var29 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19013);
exit(1);
}
var_pvisibilitynode6 = var_nodearraylist2;
/* <var_pvisibilitynode6:nullable Object> isa nullable AVisibility */
cltype10 = type_nullable_parser_nodes__AVisibility.color;
idtype11 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode6 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_pvisibilitynode6->type->table_size) {
var9 = 0;
} else {
var9 = var_pvisibilitynode6->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19015);
exit(1);
}
var_tkwvarnode7 = var_nodearraylist3;
/* <var_tkwvarnode7:nullable Object> isa nullable TKwvar */
cltype13 = type_nullable_parser_nodes__TKwvar.color;
idtype14 = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode7 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_tkwvarnode7->type->table_size) {
var12 = 0;
} else {
var12 = var_tkwvarnode7->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19017);
exit(1);
}
var_tidnode9 = var_nodearraylist4;
/* <var_tidnode9:nullable Object> isa nullable TId */
cltype16 = type_nullable_parser_nodes__TId.color;
idtype17 = type_nullable_parser_nodes__TId.id;
if(var_tidnode9 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_tidnode9->type->table_size) {
var15 = 0;
} else {
var15 = var_tidnode9->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19019);
exit(1);
}
var_pexprnode12 = var_nodearraylist7;
/* <var_pexprnode12:nullable Object> isa nullable AExpr */
cltype19 = type_nullable_parser_nodes__AExpr.color;
idtype20 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode12 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pexprnode12->type->table_size) {
var18 = 0;
} else {
var18 = var_pexprnode12->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19021);
exit(1);
}
var21 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var22 = NULL;
var23 = NULL;
var24 = NULL;
var25 = NULL;
var26 = NULL;
var27 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var21->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var21, var_pdocnode2, var22, var23, var24, var_pvisibilitynode6, var_tkwvarnode7, var25, var_tidnode9, var26, var27, var_pexprnode12) /* init_aattrpropdef on <var21:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var21);
var_ppropdefnode1 = var21;
var_node_list = var_ppropdefnode1;
var28 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction429> */
var29 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var28) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var29, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction429#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction429__action(val* self, val* p0) {
parser__ReduceAction429__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction430#action for (self: ReduceAction430, Parser) */
void parser__ReduceAction430__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode5 /* var tkwredefnode5: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_pvisibilitynode6 /* var pvisibilitynode6: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_tkwvarnode7 /* var tkwvarnode7: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_tidnode9 /* var tidnode9: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pexprnode12 /* var pexprnode12: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var25 /* : AAttrPropdef */;
val* var26 /* : null */;
val* var27 /* : null */;
val* var28 /* : null */;
val* var29 /* : null */;
val* var30 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var31 /* : Int */;
long var32 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var9 = 0;
} else {
var9 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19053);
exit(1);
}
var_tkwredefnode5 = var_nodearraylist2;
/* <var_tkwredefnode5:nullable Object> isa nullable TKwredef */
cltype11 = type_nullable_parser_nodes__TKwredef.color;
idtype12 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode5 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_tkwredefnode5->type->table_size) {
var10 = 0;
} else {
var10 = var_tkwredefnode5->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19055);
exit(1);
}
var_pvisibilitynode6 = var_nodearraylist3;
/* <var_pvisibilitynode6:nullable Object> isa nullable AVisibility */
cltype14 = type_nullable_parser_nodes__AVisibility.color;
idtype15 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode6 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_pvisibilitynode6->type->table_size) {
var13 = 0;
} else {
var13 = var_pvisibilitynode6->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19057);
exit(1);
}
var_tkwvarnode7 = var_nodearraylist4;
/* <var_tkwvarnode7:nullable Object> isa nullable TKwvar */
cltype17 = type_nullable_parser_nodes__TKwvar.color;
idtype18 = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode7 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tkwvarnode7->type->table_size) {
var16 = 0;
} else {
var16 = var_tkwvarnode7->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19059);
exit(1);
}
var_tidnode9 = var_nodearraylist5;
/* <var_tidnode9:nullable Object> isa nullable TId */
cltype20 = type_nullable_parser_nodes__TId.color;
idtype21 = type_nullable_parser_nodes__TId.id;
if(var_tidnode9 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_tidnode9->type->table_size) {
var19 = 0;
} else {
var19 = var_tidnode9->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19061);
exit(1);
}
var_pexprnode12 = var_nodearraylist8;
/* <var_pexprnode12:nullable Object> isa nullable AExpr */
cltype23 = type_nullable_parser_nodes__AExpr.color;
idtype24 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode12 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_pexprnode12->type->table_size) {
var22 = 0;
} else {
var22 = var_pexprnode12->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19063);
exit(1);
}
var25 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var26 = NULL;
var27 = NULL;
var28 = NULL;
var29 = NULL;
var30 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var25->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var25, var_pdocnode2, var26, var27, var_tkwredefnode5, var_pvisibilitynode6, var_tkwvarnode7, var28, var_tidnode9, var29, var30, var_pexprnode12) /* init_aattrpropdef on <var25:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var25);
var_ppropdefnode1 = var25;
var_node_list = var_ppropdefnode1;
var31 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction430> */
var32 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var31) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var32, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction430#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction430__action(val* self, val* p0) {
parser__ReduceAction430__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction431#action for (self: ReduceAction431, Parser) */
void parser__ReduceAction431__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode6 /* var pvisibilitynode6: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_tkwvarnode7 /* var tkwvarnode7: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_tidnode9 /* var tidnode9: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_ptypenode10 /* var ptypenode10: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pexprnode12 /* var pexprnode12: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var25 /* : AAttrPropdef */;
val* var26 /* : null */;
val* var27 /* : null */;
val* var28 /* : null */;
val* var29 /* : null */;
val* var30 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var31 /* : Int */;
long var32 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var9 = 0;
} else {
var9 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19095);
exit(1);
}
var_pvisibilitynode6 = var_nodearraylist2;
/* <var_pvisibilitynode6:nullable Object> isa nullable AVisibility */
cltype11 = type_nullable_parser_nodes__AVisibility.color;
idtype12 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode6 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_pvisibilitynode6->type->table_size) {
var10 = 0;
} else {
var10 = var_pvisibilitynode6->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19097);
exit(1);
}
var_tkwvarnode7 = var_nodearraylist3;
/* <var_tkwvarnode7:nullable Object> isa nullable TKwvar */
cltype14 = type_nullable_parser_nodes__TKwvar.color;
idtype15 = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode7 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_tkwvarnode7->type->table_size) {
var13 = 0;
} else {
var13 = var_tkwvarnode7->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19099);
exit(1);
}
var_tidnode9 = var_nodearraylist4;
/* <var_tidnode9:nullable Object> isa nullable TId */
cltype17 = type_nullable_parser_nodes__TId.color;
idtype18 = type_nullable_parser_nodes__TId.id;
if(var_tidnode9 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tidnode9->type->table_size) {
var16 = 0;
} else {
var16 = var_tidnode9->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19101);
exit(1);
}
var_ptypenode10 = var_nodearraylist5;
/* <var_ptypenode10:nullable Object> isa nullable AType */
cltype20 = type_nullable_parser_nodes__AType.color;
idtype21 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode10 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_ptypenode10->type->table_size) {
var19 = 0;
} else {
var19 = var_ptypenode10->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19103);
exit(1);
}
var_pexprnode12 = var_nodearraylist8;
/* <var_pexprnode12:nullable Object> isa nullable AExpr */
cltype23 = type_nullable_parser_nodes__AExpr.color;
idtype24 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode12 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_pexprnode12->type->table_size) {
var22 = 0;
} else {
var22 = var_pexprnode12->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19105);
exit(1);
}
var25 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var26 = NULL;
var27 = NULL;
var28 = NULL;
var29 = NULL;
var30 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var25->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var25, var_pdocnode2, var26, var27, var28, var_pvisibilitynode6, var_tkwvarnode7, var29, var_tidnode9, var_ptypenode10, var30, var_pexprnode12) /* init_aattrpropdef on <var25:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var25);
var_ppropdefnode1 = var25;
var_node_list = var_ppropdefnode1;
var31 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction431> */
var32 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var31) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var32, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction431#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction431__action(val* self, val* p0) {
parser__ReduceAction431__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction432#action for (self: ReduceAction432, Parser) */
void parser__ReduceAction432__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode5 /* var tkwredefnode5: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_pvisibilitynode6 /* var pvisibilitynode6: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_tkwvarnode7 /* var tkwvarnode7: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_tidnode9 /* var tidnode9: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_ptypenode10 /* var ptypenode10: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_pexprnode12 /* var pexprnode12: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : AAttrPropdef */;
val* var30 /* : null */;
val* var31 /* : null */;
val* var32 /* : null */;
val* var33 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var34 /* : Int */;
long var35 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var10 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var10 = 0;
} else {
var10 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19138);
exit(1);
}
var_tkwredefnode5 = var_nodearraylist2;
/* <var_tkwredefnode5:nullable Object> isa nullable TKwredef */
cltype12 = type_nullable_parser_nodes__TKwredef.color;
idtype13 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode5 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_tkwredefnode5->type->table_size) {
var11 = 0;
} else {
var11 = var_tkwredefnode5->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19140);
exit(1);
}
var_pvisibilitynode6 = var_nodearraylist3;
/* <var_pvisibilitynode6:nullable Object> isa nullable AVisibility */
cltype15 = type_nullable_parser_nodes__AVisibility.color;
idtype16 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode6 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_pvisibilitynode6->type->table_size) {
var14 = 0;
} else {
var14 = var_pvisibilitynode6->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19142);
exit(1);
}
var_tkwvarnode7 = var_nodearraylist4;
/* <var_tkwvarnode7:nullable Object> isa nullable TKwvar */
cltype18 = type_nullable_parser_nodes__TKwvar.color;
idtype19 = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode7 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tkwvarnode7->type->table_size) {
var17 = 0;
} else {
var17 = var_tkwvarnode7->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19144);
exit(1);
}
var_tidnode9 = var_nodearraylist5;
/* <var_tidnode9:nullable Object> isa nullable TId */
cltype21 = type_nullable_parser_nodes__TId.color;
idtype22 = type_nullable_parser_nodes__TId.id;
if(var_tidnode9 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_tidnode9->type->table_size) {
var20 = 0;
} else {
var20 = var_tidnode9->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19146);
exit(1);
}
var_ptypenode10 = var_nodearraylist6;
/* <var_ptypenode10:nullable Object> isa nullable AType */
cltype24 = type_nullable_parser_nodes__AType.color;
idtype25 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode10 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_ptypenode10->type->table_size) {
var23 = 0;
} else {
var23 = var_ptypenode10->type->type_table[cltype24] == idtype25;
}
}
if (!var23) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19148);
exit(1);
}
var_pexprnode12 = var_nodearraylist9;
/* <var_pexprnode12:nullable Object> isa nullable AExpr */
cltype27 = type_nullable_parser_nodes__AExpr.color;
idtype28 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode12 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_pexprnode12->type->table_size) {
var26 = 0;
} else {
var26 = var_pexprnode12->type->type_table[cltype27] == idtype28;
}
}
if (!var26) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19150);
exit(1);
}
var29 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var30 = NULL;
var31 = NULL;
var32 = NULL;
var33 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var29, var_pdocnode2, var30, var31, var_tkwredefnode5, var_pvisibilitynode6, var_tkwvarnode7, var32, var_tidnode9, var_ptypenode10, var33, var_pexprnode12) /* init_aattrpropdef on <var29:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var29);
var_ppropdefnode1 = var29;
var_node_list = var_ppropdefnode1;
var34 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction432> */
var35 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var34) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var35, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction432#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction432__action(val* self, val* p0) {
parser__ReduceAction432__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction433#action for (self: ReduceAction433, Parser) */
void parser__ReduceAction433__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_pablenode4 /* var pablenode4: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_pvisibilitynode6 /* var pvisibilitynode6: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_tkwvarnode7 /* var tkwvarnode7: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_tidnode9 /* var tidnode9: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pexprnode12 /* var pexprnode12: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var25 /* : AAttrPropdef */;
val* var26 /* : null */;
val* var27 /* : null */;
val* var28 /* : null */;
val* var29 /* : null */;
val* var30 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var31 /* : Int */;
long var32 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var9 = 0;
} else {
var9 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19182);
exit(1);
}
var_pablenode4 = var_nodearraylist5;
/* <var_pablenode4:nullable Object> isa nullable AAble */
cltype11 = type_nullable_parser_nodes__AAble.color;
idtype12 = type_nullable_parser_nodes__AAble.id;
if(var_pablenode4 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_pablenode4->type->table_size) {
var10 = 0;
} else {
var10 = var_pablenode4->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19184);
exit(1);
}
var_pvisibilitynode6 = var_nodearraylist2;
/* <var_pvisibilitynode6:nullable Object> isa nullable AVisibility */
cltype14 = type_nullable_parser_nodes__AVisibility.color;
idtype15 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode6 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_pvisibilitynode6->type->table_size) {
var13 = 0;
} else {
var13 = var_pvisibilitynode6->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19186);
exit(1);
}
var_tkwvarnode7 = var_nodearraylist3;
/* <var_tkwvarnode7:nullable Object> isa nullable TKwvar */
cltype17 = type_nullable_parser_nodes__TKwvar.color;
idtype18 = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode7 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tkwvarnode7->type->table_size) {
var16 = 0;
} else {
var16 = var_tkwvarnode7->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19188);
exit(1);
}
var_tidnode9 = var_nodearraylist4;
/* <var_tidnode9:nullable Object> isa nullable TId */
cltype20 = type_nullable_parser_nodes__TId.color;
idtype21 = type_nullable_parser_nodes__TId.id;
if(var_tidnode9 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_tidnode9->type->table_size) {
var19 = 0;
} else {
var19 = var_tidnode9->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19190);
exit(1);
}
var_pexprnode12 = var_nodearraylist8;
/* <var_pexprnode12:nullable Object> isa nullable AExpr */
cltype23 = type_nullable_parser_nodes__AExpr.color;
idtype24 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode12 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_pexprnode12->type->table_size) {
var22 = 0;
} else {
var22 = var_pexprnode12->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19192);
exit(1);
}
var25 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var26 = NULL;
var27 = NULL;
var28 = NULL;
var29 = NULL;
var30 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var25->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var25, var_pdocnode2, var26, var_pablenode4, var27, var_pvisibilitynode6, var_tkwvarnode7, var28, var_tidnode9, var29, var30, var_pexprnode12) /* init_aattrpropdef on <var25:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var25);
var_ppropdefnode1 = var25;
var_node_list = var_ppropdefnode1;
var31 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction433> */
var32 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var31) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var32, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction433#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction433__action(val* self, val* p0) {
parser__ReduceAction433__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction434#action for (self: ReduceAction434, Parser) */
void parser__ReduceAction434__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var_pablenode4 /* var pablenode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_tkwredefnode5 /* var tkwredefnode5: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_pvisibilitynode6 /* var pvisibilitynode6: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_tkwvarnode7 /* var tkwvarnode7: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_tidnode9 /* var tidnode9: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_pexprnode12 /* var pexprnode12: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : AAttrPropdef */;
val* var30 /* : null */;
val* var31 /* : null */;
val* var32 /* : null */;
val* var33 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var34 /* : Int */;
long var35 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var10 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var10 = 0;
} else {
var10 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19225);
exit(1);
}
var_pablenode4 = var_nodearraylist6;
/* <var_pablenode4:nullable Object> isa nullable AAble */
cltype12 = type_nullable_parser_nodes__AAble.color;
idtype13 = type_nullable_parser_nodes__AAble.id;
if(var_pablenode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_pablenode4->type->table_size) {
var11 = 0;
} else {
var11 = var_pablenode4->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19227);
exit(1);
}
var_tkwredefnode5 = var_nodearraylist2;
/* <var_tkwredefnode5:nullable Object> isa nullable TKwredef */
cltype15 = type_nullable_parser_nodes__TKwredef.color;
idtype16 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode5 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_tkwredefnode5->type->table_size) {
var14 = 0;
} else {
var14 = var_tkwredefnode5->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19229);
exit(1);
}
var_pvisibilitynode6 = var_nodearraylist3;
/* <var_pvisibilitynode6:nullable Object> isa nullable AVisibility */
cltype18 = type_nullable_parser_nodes__AVisibility.color;
idtype19 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode6 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_pvisibilitynode6->type->table_size) {
var17 = 0;
} else {
var17 = var_pvisibilitynode6->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19231);
exit(1);
}
var_tkwvarnode7 = var_nodearraylist4;
/* <var_tkwvarnode7:nullable Object> isa nullable TKwvar */
cltype21 = type_nullable_parser_nodes__TKwvar.color;
idtype22 = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode7 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_tkwvarnode7->type->table_size) {
var20 = 0;
} else {
var20 = var_tkwvarnode7->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19233);
exit(1);
}
var_tidnode9 = var_nodearraylist5;
/* <var_tidnode9:nullable Object> isa nullable TId */
cltype24 = type_nullable_parser_nodes__TId.color;
idtype25 = type_nullable_parser_nodes__TId.id;
if(var_tidnode9 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_tidnode9->type->table_size) {
var23 = 0;
} else {
var23 = var_tidnode9->type->type_table[cltype24] == idtype25;
}
}
if (!var23) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19235);
exit(1);
}
var_pexprnode12 = var_nodearraylist9;
/* <var_pexprnode12:nullable Object> isa nullable AExpr */
cltype27 = type_nullable_parser_nodes__AExpr.color;
idtype28 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode12 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_pexprnode12->type->table_size) {
var26 = 0;
} else {
var26 = var_pexprnode12->type->type_table[cltype27] == idtype28;
}
}
if (!var26) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19237);
exit(1);
}
var29 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var30 = NULL;
var31 = NULL;
var32 = NULL;
var33 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var29, var_pdocnode2, var30, var_pablenode4, var_tkwredefnode5, var_pvisibilitynode6, var_tkwvarnode7, var31, var_tidnode9, var32, var33, var_pexprnode12) /* init_aattrpropdef on <var29:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var29);
var_ppropdefnode1 = var29;
var_node_list = var_ppropdefnode1;
var34 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction434> */
var35 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var34) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var35, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction434#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction434__action(val* self, val* p0) {
parser__ReduceAction434__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction435#action for (self: ReduceAction435, Parser) */
void parser__ReduceAction435__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var_pablenode4 /* var pablenode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_pvisibilitynode6 /* var pvisibilitynode6: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_tkwvarnode7 /* var tkwvarnode7: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_tidnode9 /* var tidnode9: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_ptypenode10 /* var ptypenode10: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_pexprnode12 /* var pexprnode12: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : AAttrPropdef */;
val* var30 /* : null */;
val* var31 /* : null */;
val* var32 /* : null */;
val* var33 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var34 /* : Int */;
long var35 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var10 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var10 = 0;
} else {
var10 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19270);
exit(1);
}
var_pablenode4 = var_nodearraylist6;
/* <var_pablenode4:nullable Object> isa nullable AAble */
cltype12 = type_nullable_parser_nodes__AAble.color;
idtype13 = type_nullable_parser_nodes__AAble.id;
if(var_pablenode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_pablenode4->type->table_size) {
var11 = 0;
} else {
var11 = var_pablenode4->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19272);
exit(1);
}
var_pvisibilitynode6 = var_nodearraylist2;
/* <var_pvisibilitynode6:nullable Object> isa nullable AVisibility */
cltype15 = type_nullable_parser_nodes__AVisibility.color;
idtype16 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode6 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_pvisibilitynode6->type->table_size) {
var14 = 0;
} else {
var14 = var_pvisibilitynode6->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19274);
exit(1);
}
var_tkwvarnode7 = var_nodearraylist3;
/* <var_tkwvarnode7:nullable Object> isa nullable TKwvar */
cltype18 = type_nullable_parser_nodes__TKwvar.color;
idtype19 = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode7 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tkwvarnode7->type->table_size) {
var17 = 0;
} else {
var17 = var_tkwvarnode7->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19276);
exit(1);
}
var_tidnode9 = var_nodearraylist4;
/* <var_tidnode9:nullable Object> isa nullable TId */
cltype21 = type_nullable_parser_nodes__TId.color;
idtype22 = type_nullable_parser_nodes__TId.id;
if(var_tidnode9 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_tidnode9->type->table_size) {
var20 = 0;
} else {
var20 = var_tidnode9->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19278);
exit(1);
}
var_ptypenode10 = var_nodearraylist5;
/* <var_ptypenode10:nullable Object> isa nullable AType */
cltype24 = type_nullable_parser_nodes__AType.color;
idtype25 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode10 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_ptypenode10->type->table_size) {
var23 = 0;
} else {
var23 = var_ptypenode10->type->type_table[cltype24] == idtype25;
}
}
if (!var23) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19280);
exit(1);
}
var_pexprnode12 = var_nodearraylist9;
/* <var_pexprnode12:nullable Object> isa nullable AExpr */
cltype27 = type_nullable_parser_nodes__AExpr.color;
idtype28 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode12 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_pexprnode12->type->table_size) {
var26 = 0;
} else {
var26 = var_pexprnode12->type->type_table[cltype27] == idtype28;
}
}
if (!var26) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19282);
exit(1);
}
var29 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var30 = NULL;
var31 = NULL;
var32 = NULL;
var33 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var29, var_pdocnode2, var30, var_pablenode4, var31, var_pvisibilitynode6, var_tkwvarnode7, var32, var_tidnode9, var_ptypenode10, var33, var_pexprnode12) /* init_aattrpropdef on <var29:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var29);
var_ppropdefnode1 = var29;
var_node_list = var_ppropdefnode1;
var34 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction435> */
var35 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var34) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var35, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction435#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction435__action(val* self, val* p0) {
parser__ReduceAction435__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction436#action for (self: ReduceAction436, Parser) */
void parser__ReduceAction436__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var11 /* : Bool */;
int cltype;
int idtype;
val* var_pablenode4 /* var pablenode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_tkwredefnode5 /* var tkwredefnode5: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pvisibilitynode6 /* var pvisibilitynode6: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_tkwvarnode7 /* var tkwvarnode7: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_tidnode9 /* var tidnode9: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var_ptypenode10 /* var ptypenode10: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var_pexprnode12 /* var pexprnode12: nullable Object */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
val* var33 /* : AAttrPropdef */;
val* var34 /* : null */;
val* var35 /* : null */;
val* var36 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var37 /* : Int */;
long var38 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var11 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var11 = 0;
} else {
var11 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19316);
exit(1);
}
var_pablenode4 = var_nodearraylist7;
/* <var_pablenode4:nullable Object> isa nullable AAble */
cltype13 = type_nullable_parser_nodes__AAble.color;
idtype14 = type_nullable_parser_nodes__AAble.id;
if(var_pablenode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_pablenode4->type->table_size) {
var12 = 0;
} else {
var12 = var_pablenode4->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19318);
exit(1);
}
var_tkwredefnode5 = var_nodearraylist2;
/* <var_tkwredefnode5:nullable Object> isa nullable TKwredef */
cltype16 = type_nullable_parser_nodes__TKwredef.color;
idtype17 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_tkwredefnode5->type->table_size) {
var15 = 0;
} else {
var15 = var_tkwredefnode5->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19320);
exit(1);
}
var_pvisibilitynode6 = var_nodearraylist3;
/* <var_pvisibilitynode6:nullable Object> isa nullable AVisibility */
cltype19 = type_nullable_parser_nodes__AVisibility.color;
idtype20 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode6 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pvisibilitynode6->type->table_size) {
var18 = 0;
} else {
var18 = var_pvisibilitynode6->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19322);
exit(1);
}
var_tkwvarnode7 = var_nodearraylist4;
/* <var_tkwvarnode7:nullable Object> isa nullable TKwvar */
cltype22 = type_nullable_parser_nodes__TKwvar.color;
idtype23 = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode7 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_tkwvarnode7->type->table_size) {
var21 = 0;
} else {
var21 = var_tkwvarnode7->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19324);
exit(1);
}
var_tidnode9 = var_nodearraylist5;
/* <var_tidnode9:nullable Object> isa nullable TId */
cltype25 = type_nullable_parser_nodes__TId.color;
idtype26 = type_nullable_parser_nodes__TId.id;
if(var_tidnode9 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_tidnode9->type->table_size) {
var24 = 0;
} else {
var24 = var_tidnode9->type->type_table[cltype25] == idtype26;
}
}
if (!var24) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19326);
exit(1);
}
var_ptypenode10 = var_nodearraylist6;
/* <var_ptypenode10:nullable Object> isa nullable AType */
cltype28 = type_nullable_parser_nodes__AType.color;
idtype29 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode10 == NULL) {
var27 = 1;
} else {
if(cltype28 >= var_ptypenode10->type->table_size) {
var27 = 0;
} else {
var27 = var_ptypenode10->type->type_table[cltype28] == idtype29;
}
}
if (!var27) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19328);
exit(1);
}
var_pexprnode12 = var_nodearraylist10;
/* <var_pexprnode12:nullable Object> isa nullable AExpr */
cltype31 = type_nullable_parser_nodes__AExpr.color;
idtype32 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode12 == NULL) {
var30 = 1;
} else {
if(cltype31 >= var_pexprnode12->type->table_size) {
var30 = 0;
} else {
var30 = var_pexprnode12->type->type_table[cltype31] == idtype32;
}
}
if (!var30) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19330);
exit(1);
}
var33 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var34 = NULL;
var35 = NULL;
var36 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var33->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var33, var_pdocnode2, var34, var_pablenode4, var_tkwredefnode5, var_pvisibilitynode6, var_tkwvarnode7, var35, var_tidnode9, var_ptypenode10, var36, var_pexprnode12) /* init_aattrpropdef on <var33:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var33);
var_ppropdefnode1 = var33;
var_node_list = var_ppropdefnode1;
var37 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction436> */
var38 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var37) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var38, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction436#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction436__action(val* self, val* p0) {
parser__ReduceAction436__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction437#action for (self: ReduceAction437, Parser) */
void parser__ReduceAction437__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode6 /* var pvisibilitynode6: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_tkwvarnode7 /* var tkwvarnode7: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_tidnode9 /* var tidnode9: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pannotationsnode11 /* var pannotationsnode11: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pexprnode12 /* var pexprnode12: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var25 /* : AAttrPropdef */;
val* var26 /* : null */;
val* var27 /* : null */;
val* var28 /* : null */;
val* var29 /* : null */;
val* var30 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var31 /* : Int */;
long var32 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var9 = 0;
} else {
var9 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19362);
exit(1);
}
var_pvisibilitynode6 = var_nodearraylist2;
/* <var_pvisibilitynode6:nullable Object> isa nullable AVisibility */
cltype11 = type_nullable_parser_nodes__AVisibility.color;
idtype12 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode6 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_pvisibilitynode6->type->table_size) {
var10 = 0;
} else {
var10 = var_pvisibilitynode6->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19364);
exit(1);
}
var_tkwvarnode7 = var_nodearraylist3;
/* <var_tkwvarnode7:nullable Object> isa nullable TKwvar */
cltype14 = type_nullable_parser_nodes__TKwvar.color;
idtype15 = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode7 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_tkwvarnode7->type->table_size) {
var13 = 0;
} else {
var13 = var_tkwvarnode7->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19366);
exit(1);
}
var_tidnode9 = var_nodearraylist4;
/* <var_tidnode9:nullable Object> isa nullable TId */
cltype17 = type_nullable_parser_nodes__TId.color;
idtype18 = type_nullable_parser_nodes__TId.id;
if(var_tidnode9 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tidnode9->type->table_size) {
var16 = 0;
} else {
var16 = var_tidnode9->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19368);
exit(1);
}
var_pannotationsnode11 = var_nodearraylist8;
/* <var_pannotationsnode11:nullable Object> isa nullable AAnnotations */
cltype20 = type_nullable_parser_nodes__AAnnotations.color;
idtype21 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode11 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_pannotationsnode11->type->table_size) {
var19 = 0;
} else {
var19 = var_pannotationsnode11->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19370);
exit(1);
}
var_pexprnode12 = var_nodearraylist7;
/* <var_pexprnode12:nullable Object> isa nullable AExpr */
cltype23 = type_nullable_parser_nodes__AExpr.color;
idtype24 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode12 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_pexprnode12->type->table_size) {
var22 = 0;
} else {
var22 = var_pexprnode12->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19372);
exit(1);
}
var25 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var26 = NULL;
var27 = NULL;
var28 = NULL;
var29 = NULL;
var30 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var25->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var25, var_pdocnode2, var26, var27, var28, var_pvisibilitynode6, var_tkwvarnode7, var29, var_tidnode9, var30, var_pannotationsnode11, var_pexprnode12) /* init_aattrpropdef on <var25:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var25);
var_ppropdefnode1 = var25;
var_node_list = var_ppropdefnode1;
var31 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction437> */
var32 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var31) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var32, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction437#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction437__action(val* self, val* p0) {
parser__ReduceAction437__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction438#action for (self: ReduceAction438, Parser) */
void parser__ReduceAction438__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode5 /* var tkwredefnode5: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_pvisibilitynode6 /* var pvisibilitynode6: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_tkwvarnode7 /* var tkwvarnode7: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_tidnode9 /* var tidnode9: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_pannotationsnode11 /* var pannotationsnode11: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_pexprnode12 /* var pexprnode12: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : AAttrPropdef */;
val* var30 /* : null */;
val* var31 /* : null */;
val* var32 /* : null */;
val* var33 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var34 /* : Int */;
long var35 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var10 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var10 = 0;
} else {
var10 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19405);
exit(1);
}
var_tkwredefnode5 = var_nodearraylist2;
/* <var_tkwredefnode5:nullable Object> isa nullable TKwredef */
cltype12 = type_nullable_parser_nodes__TKwredef.color;
idtype13 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode5 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_tkwredefnode5->type->table_size) {
var11 = 0;
} else {
var11 = var_tkwredefnode5->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19407);
exit(1);
}
var_pvisibilitynode6 = var_nodearraylist3;
/* <var_pvisibilitynode6:nullable Object> isa nullable AVisibility */
cltype15 = type_nullable_parser_nodes__AVisibility.color;
idtype16 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode6 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_pvisibilitynode6->type->table_size) {
var14 = 0;
} else {
var14 = var_pvisibilitynode6->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19409);
exit(1);
}
var_tkwvarnode7 = var_nodearraylist4;
/* <var_tkwvarnode7:nullable Object> isa nullable TKwvar */
cltype18 = type_nullable_parser_nodes__TKwvar.color;
idtype19 = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode7 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tkwvarnode7->type->table_size) {
var17 = 0;
} else {
var17 = var_tkwvarnode7->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19411);
exit(1);
}
var_tidnode9 = var_nodearraylist5;
/* <var_tidnode9:nullable Object> isa nullable TId */
cltype21 = type_nullable_parser_nodes__TId.color;
idtype22 = type_nullable_parser_nodes__TId.id;
if(var_tidnode9 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_tidnode9->type->table_size) {
var20 = 0;
} else {
var20 = var_tidnode9->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19413);
exit(1);
}
var_pannotationsnode11 = var_nodearraylist9;
/* <var_pannotationsnode11:nullable Object> isa nullable AAnnotations */
cltype24 = type_nullable_parser_nodes__AAnnotations.color;
idtype25 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode11 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_pannotationsnode11->type->table_size) {
var23 = 0;
} else {
var23 = var_pannotationsnode11->type->type_table[cltype24] == idtype25;
}
}
if (!var23) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19415);
exit(1);
}
var_pexprnode12 = var_nodearraylist8;
/* <var_pexprnode12:nullable Object> isa nullable AExpr */
cltype27 = type_nullable_parser_nodes__AExpr.color;
idtype28 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode12 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_pexprnode12->type->table_size) {
var26 = 0;
} else {
var26 = var_pexprnode12->type->type_table[cltype27] == idtype28;
}
}
if (!var26) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19417);
exit(1);
}
var29 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var30 = NULL;
var31 = NULL;
var32 = NULL;
var33 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var29, var_pdocnode2, var30, var31, var_tkwredefnode5, var_pvisibilitynode6, var_tkwvarnode7, var32, var_tidnode9, var33, var_pannotationsnode11, var_pexprnode12) /* init_aattrpropdef on <var29:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var29);
var_ppropdefnode1 = var29;
var_node_list = var_ppropdefnode1;
var34 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction438> */
var35 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var34) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var35, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction438#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction438__action(val* self, val* p0) {
parser__ReduceAction438__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction439#action for (self: ReduceAction439, Parser) */
void parser__ReduceAction439__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode6 /* var pvisibilitynode6: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_tkwvarnode7 /* var tkwvarnode7: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_tidnode9 /* var tidnode9: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_ptypenode10 /* var ptypenode10: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_pannotationsnode11 /* var pannotationsnode11: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_pexprnode12 /* var pexprnode12: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : AAttrPropdef */;
val* var30 /* : null */;
val* var31 /* : null */;
val* var32 /* : null */;
val* var33 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var34 /* : Int */;
long var35 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var10 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var10 = 0;
} else {
var10 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19450);
exit(1);
}
var_pvisibilitynode6 = var_nodearraylist2;
/* <var_pvisibilitynode6:nullable Object> isa nullable AVisibility */
cltype12 = type_nullable_parser_nodes__AVisibility.color;
idtype13 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode6 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_pvisibilitynode6->type->table_size) {
var11 = 0;
} else {
var11 = var_pvisibilitynode6->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19452);
exit(1);
}
var_tkwvarnode7 = var_nodearraylist3;
/* <var_tkwvarnode7:nullable Object> isa nullable TKwvar */
cltype15 = type_nullable_parser_nodes__TKwvar.color;
idtype16 = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode7 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_tkwvarnode7->type->table_size) {
var14 = 0;
} else {
var14 = var_tkwvarnode7->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19454);
exit(1);
}
var_tidnode9 = var_nodearraylist4;
/* <var_tidnode9:nullable Object> isa nullable TId */
cltype18 = type_nullable_parser_nodes__TId.color;
idtype19 = type_nullable_parser_nodes__TId.id;
if(var_tidnode9 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tidnode9->type->table_size) {
var17 = 0;
} else {
var17 = var_tidnode9->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19456);
exit(1);
}
var_ptypenode10 = var_nodearraylist5;
/* <var_ptypenode10:nullable Object> isa nullable AType */
cltype21 = type_nullable_parser_nodes__AType.color;
idtype22 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode10 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_ptypenode10->type->table_size) {
var20 = 0;
} else {
var20 = var_ptypenode10->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19458);
exit(1);
}
var_pannotationsnode11 = var_nodearraylist9;
/* <var_pannotationsnode11:nullable Object> isa nullable AAnnotations */
cltype24 = type_nullable_parser_nodes__AAnnotations.color;
idtype25 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode11 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_pannotationsnode11->type->table_size) {
var23 = 0;
} else {
var23 = var_pannotationsnode11->type->type_table[cltype24] == idtype25;
}
}
if (!var23) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19460);
exit(1);
}
var_pexprnode12 = var_nodearraylist8;
/* <var_pexprnode12:nullable Object> isa nullable AExpr */
cltype27 = type_nullable_parser_nodes__AExpr.color;
idtype28 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode12 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_pexprnode12->type->table_size) {
var26 = 0;
} else {
var26 = var_pexprnode12->type->type_table[cltype27] == idtype28;
}
}
if (!var26) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19462);
exit(1);
}
var29 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var30 = NULL;
var31 = NULL;
var32 = NULL;
var33 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var29, var_pdocnode2, var30, var31, var32, var_pvisibilitynode6, var_tkwvarnode7, var33, var_tidnode9, var_ptypenode10, var_pannotationsnode11, var_pexprnode12) /* init_aattrpropdef on <var29:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var29);
var_ppropdefnode1 = var29;
var_node_list = var_ppropdefnode1;
var34 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction439> */
var35 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var34) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var35, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction439#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction439__action(val* self, val* p0) {
parser__ReduceAction439__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction440#action for (self: ReduceAction440, Parser) */
void parser__ReduceAction440__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var11 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode5 /* var tkwredefnode5: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_pvisibilitynode6 /* var pvisibilitynode6: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_tkwvarnode7 /* var tkwvarnode7: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_tidnode9 /* var tidnode9: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_ptypenode10 /* var ptypenode10: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var_pannotationsnode11 /* var pannotationsnode11: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var_pexprnode12 /* var pexprnode12: nullable Object */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
val* var33 /* : AAttrPropdef */;
val* var34 /* : null */;
val* var35 /* : null */;
val* var36 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var37 /* : Int */;
long var38 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var11 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var11 = 0;
} else {
var11 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19496);
exit(1);
}
var_tkwredefnode5 = var_nodearraylist2;
/* <var_tkwredefnode5:nullable Object> isa nullable TKwredef */
cltype13 = type_nullable_parser_nodes__TKwredef.color;
idtype14 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode5 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_tkwredefnode5->type->table_size) {
var12 = 0;
} else {
var12 = var_tkwredefnode5->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19498);
exit(1);
}
var_pvisibilitynode6 = var_nodearraylist3;
/* <var_pvisibilitynode6:nullable Object> isa nullable AVisibility */
cltype16 = type_nullable_parser_nodes__AVisibility.color;
idtype17 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode6 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_pvisibilitynode6->type->table_size) {
var15 = 0;
} else {
var15 = var_pvisibilitynode6->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19500);
exit(1);
}
var_tkwvarnode7 = var_nodearraylist4;
/* <var_tkwvarnode7:nullable Object> isa nullable TKwvar */
cltype19 = type_nullable_parser_nodes__TKwvar.color;
idtype20 = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode7 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_tkwvarnode7->type->table_size) {
var18 = 0;
} else {
var18 = var_tkwvarnode7->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19502);
exit(1);
}
var_tidnode9 = var_nodearraylist5;
/* <var_tidnode9:nullable Object> isa nullable TId */
cltype22 = type_nullable_parser_nodes__TId.color;
idtype23 = type_nullable_parser_nodes__TId.id;
if(var_tidnode9 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_tidnode9->type->table_size) {
var21 = 0;
} else {
var21 = var_tidnode9->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19504);
exit(1);
}
var_ptypenode10 = var_nodearraylist6;
/* <var_ptypenode10:nullable Object> isa nullable AType */
cltype25 = type_nullable_parser_nodes__AType.color;
idtype26 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode10 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_ptypenode10->type->table_size) {
var24 = 0;
} else {
var24 = var_ptypenode10->type->type_table[cltype25] == idtype26;
}
}
if (!var24) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19506);
exit(1);
}
var_pannotationsnode11 = var_nodearraylist10;
/* <var_pannotationsnode11:nullable Object> isa nullable AAnnotations */
cltype28 = type_nullable_parser_nodes__AAnnotations.color;
idtype29 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode11 == NULL) {
var27 = 1;
} else {
if(cltype28 >= var_pannotationsnode11->type->table_size) {
var27 = 0;
} else {
var27 = var_pannotationsnode11->type->type_table[cltype28] == idtype29;
}
}
if (!var27) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19508);
exit(1);
}
var_pexprnode12 = var_nodearraylist9;
/* <var_pexprnode12:nullable Object> isa nullable AExpr */
cltype31 = type_nullable_parser_nodes__AExpr.color;
idtype32 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode12 == NULL) {
var30 = 1;
} else {
if(cltype31 >= var_pexprnode12->type->table_size) {
var30 = 0;
} else {
var30 = var_pexprnode12->type->type_table[cltype31] == idtype32;
}
}
if (!var30) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19510);
exit(1);
}
var33 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var34 = NULL;
var35 = NULL;
var36 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var33->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var33, var_pdocnode2, var34, var35, var_tkwredefnode5, var_pvisibilitynode6, var_tkwvarnode7, var36, var_tidnode9, var_ptypenode10, var_pannotationsnode11, var_pexprnode12) /* init_aattrpropdef on <var33:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var33);
var_ppropdefnode1 = var33;
var_node_list = var_ppropdefnode1;
var37 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction440> */
var38 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var37) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var38, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction440#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction440__action(val* self, val* p0) {
parser__ReduceAction440__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction441#action for (self: ReduceAction441, Parser) */
void parser__ReduceAction441__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var_pablenode4 /* var pablenode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_pvisibilitynode6 /* var pvisibilitynode6: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_tkwvarnode7 /* var tkwvarnode7: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_tidnode9 /* var tidnode9: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_pannotationsnode11 /* var pannotationsnode11: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_pexprnode12 /* var pexprnode12: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : AAttrPropdef */;
val* var30 /* : null */;
val* var31 /* : null */;
val* var32 /* : null */;
val* var33 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var34 /* : Int */;
long var35 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var10 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var10 = 0;
} else {
var10 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19543);
exit(1);
}
var_pablenode4 = var_nodearraylist5;
/* <var_pablenode4:nullable Object> isa nullable AAble */
cltype12 = type_nullable_parser_nodes__AAble.color;
idtype13 = type_nullable_parser_nodes__AAble.id;
if(var_pablenode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_pablenode4->type->table_size) {
var11 = 0;
} else {
var11 = var_pablenode4->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19545);
exit(1);
}
var_pvisibilitynode6 = var_nodearraylist2;
/* <var_pvisibilitynode6:nullable Object> isa nullable AVisibility */
cltype15 = type_nullable_parser_nodes__AVisibility.color;
idtype16 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode6 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_pvisibilitynode6->type->table_size) {
var14 = 0;
} else {
var14 = var_pvisibilitynode6->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19547);
exit(1);
}
var_tkwvarnode7 = var_nodearraylist3;
/* <var_tkwvarnode7:nullable Object> isa nullable TKwvar */
cltype18 = type_nullable_parser_nodes__TKwvar.color;
idtype19 = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode7 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tkwvarnode7->type->table_size) {
var17 = 0;
} else {
var17 = var_tkwvarnode7->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19549);
exit(1);
}
var_tidnode9 = var_nodearraylist4;
/* <var_tidnode9:nullable Object> isa nullable TId */
cltype21 = type_nullable_parser_nodes__TId.color;
idtype22 = type_nullable_parser_nodes__TId.id;
if(var_tidnode9 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_tidnode9->type->table_size) {
var20 = 0;
} else {
var20 = var_tidnode9->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19551);
exit(1);
}
var_pannotationsnode11 = var_nodearraylist9;
/* <var_pannotationsnode11:nullable Object> isa nullable AAnnotations */
cltype24 = type_nullable_parser_nodes__AAnnotations.color;
idtype25 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode11 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_pannotationsnode11->type->table_size) {
var23 = 0;
} else {
var23 = var_pannotationsnode11->type->type_table[cltype24] == idtype25;
}
}
if (!var23) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19553);
exit(1);
}
var_pexprnode12 = var_nodearraylist8;
/* <var_pexprnode12:nullable Object> isa nullable AExpr */
cltype27 = type_nullable_parser_nodes__AExpr.color;
idtype28 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode12 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_pexprnode12->type->table_size) {
var26 = 0;
} else {
var26 = var_pexprnode12->type->type_table[cltype27] == idtype28;
}
}
if (!var26) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19555);
exit(1);
}
var29 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var30 = NULL;
var31 = NULL;
var32 = NULL;
var33 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var29, var_pdocnode2, var30, var_pablenode4, var31, var_pvisibilitynode6, var_tkwvarnode7, var32, var_tidnode9, var33, var_pannotationsnode11, var_pexprnode12) /* init_aattrpropdef on <var29:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var29);
var_ppropdefnode1 = var29;
var_node_list = var_ppropdefnode1;
var34 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction441> */
var35 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var34) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var35, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction441#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction441__action(val* self, val* p0) {
parser__ReduceAction441__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction442#action for (self: ReduceAction442, Parser) */
void parser__ReduceAction442__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var11 /* : Bool */;
int cltype;
int idtype;
val* var_pablenode4 /* var pablenode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_tkwredefnode5 /* var tkwredefnode5: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pvisibilitynode6 /* var pvisibilitynode6: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_tkwvarnode7 /* var tkwvarnode7: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_tidnode9 /* var tidnode9: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var_pannotationsnode11 /* var pannotationsnode11: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var_pexprnode12 /* var pexprnode12: nullable Object */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
val* var33 /* : AAttrPropdef */;
val* var34 /* : null */;
val* var35 /* : null */;
val* var36 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var37 /* : Int */;
long var38 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var11 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var11 = 0;
} else {
var11 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19589);
exit(1);
}
var_pablenode4 = var_nodearraylist6;
/* <var_pablenode4:nullable Object> isa nullable AAble */
cltype13 = type_nullable_parser_nodes__AAble.color;
idtype14 = type_nullable_parser_nodes__AAble.id;
if(var_pablenode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_pablenode4->type->table_size) {
var12 = 0;
} else {
var12 = var_pablenode4->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19591);
exit(1);
}
var_tkwredefnode5 = var_nodearraylist2;
/* <var_tkwredefnode5:nullable Object> isa nullable TKwredef */
cltype16 = type_nullable_parser_nodes__TKwredef.color;
idtype17 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_tkwredefnode5->type->table_size) {
var15 = 0;
} else {
var15 = var_tkwredefnode5->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19593);
exit(1);
}
var_pvisibilitynode6 = var_nodearraylist3;
/* <var_pvisibilitynode6:nullable Object> isa nullable AVisibility */
cltype19 = type_nullable_parser_nodes__AVisibility.color;
idtype20 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode6 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pvisibilitynode6->type->table_size) {
var18 = 0;
} else {
var18 = var_pvisibilitynode6->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19595);
exit(1);
}
var_tkwvarnode7 = var_nodearraylist4;
/* <var_tkwvarnode7:nullable Object> isa nullable TKwvar */
cltype22 = type_nullable_parser_nodes__TKwvar.color;
idtype23 = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode7 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_tkwvarnode7->type->table_size) {
var21 = 0;
} else {
var21 = var_tkwvarnode7->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19597);
exit(1);
}
var_tidnode9 = var_nodearraylist5;
/* <var_tidnode9:nullable Object> isa nullable TId */
cltype25 = type_nullable_parser_nodes__TId.color;
idtype26 = type_nullable_parser_nodes__TId.id;
if(var_tidnode9 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_tidnode9->type->table_size) {
var24 = 0;
} else {
var24 = var_tidnode9->type->type_table[cltype25] == idtype26;
}
}
if (!var24) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19599);
exit(1);
}
var_pannotationsnode11 = var_nodearraylist10;
/* <var_pannotationsnode11:nullable Object> isa nullable AAnnotations */
cltype28 = type_nullable_parser_nodes__AAnnotations.color;
idtype29 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode11 == NULL) {
var27 = 1;
} else {
if(cltype28 >= var_pannotationsnode11->type->table_size) {
var27 = 0;
} else {
var27 = var_pannotationsnode11->type->type_table[cltype28] == idtype29;
}
}
if (!var27) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19601);
exit(1);
}
var_pexprnode12 = var_nodearraylist9;
/* <var_pexprnode12:nullable Object> isa nullable AExpr */
cltype31 = type_nullable_parser_nodes__AExpr.color;
idtype32 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode12 == NULL) {
var30 = 1;
} else {
if(cltype31 >= var_pexprnode12->type->table_size) {
var30 = 0;
} else {
var30 = var_pexprnode12->type->type_table[cltype31] == idtype32;
}
}
if (!var30) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19603);
exit(1);
}
var33 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var34 = NULL;
var35 = NULL;
var36 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var33->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var33, var_pdocnode2, var34, var_pablenode4, var_tkwredefnode5, var_pvisibilitynode6, var_tkwvarnode7, var35, var_tidnode9, var36, var_pannotationsnode11, var_pexprnode12) /* init_aattrpropdef on <var33:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var33);
var_ppropdefnode1 = var33;
var_node_list = var_ppropdefnode1;
var37 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction442> */
var38 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var37) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var38, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction442#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction442__action(val* self, val* p0) {
parser__ReduceAction442__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction443#action for (self: ReduceAction443, Parser) */
void parser__ReduceAction443__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var11 /* : Bool */;
int cltype;
int idtype;
val* var_pablenode4 /* var pablenode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_pvisibilitynode6 /* var pvisibilitynode6: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_tkwvarnode7 /* var tkwvarnode7: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_tidnode9 /* var tidnode9: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_ptypenode10 /* var ptypenode10: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var_pannotationsnode11 /* var pannotationsnode11: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var_pexprnode12 /* var pexprnode12: nullable Object */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
val* var33 /* : AAttrPropdef */;
val* var34 /* : null */;
val* var35 /* : null */;
val* var36 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var37 /* : Int */;
long var38 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var11 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var11 = 0;
} else {
var11 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19637);
exit(1);
}
var_pablenode4 = var_nodearraylist6;
/* <var_pablenode4:nullable Object> isa nullable AAble */
cltype13 = type_nullable_parser_nodes__AAble.color;
idtype14 = type_nullable_parser_nodes__AAble.id;
if(var_pablenode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_pablenode4->type->table_size) {
var12 = 0;
} else {
var12 = var_pablenode4->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19639);
exit(1);
}
var_pvisibilitynode6 = var_nodearraylist2;
/* <var_pvisibilitynode6:nullable Object> isa nullable AVisibility */
cltype16 = type_nullable_parser_nodes__AVisibility.color;
idtype17 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode6 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_pvisibilitynode6->type->table_size) {
var15 = 0;
} else {
var15 = var_pvisibilitynode6->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19641);
exit(1);
}
var_tkwvarnode7 = var_nodearraylist3;
/* <var_tkwvarnode7:nullable Object> isa nullable TKwvar */
cltype19 = type_nullable_parser_nodes__TKwvar.color;
idtype20 = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode7 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_tkwvarnode7->type->table_size) {
var18 = 0;
} else {
var18 = var_tkwvarnode7->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19643);
exit(1);
}
var_tidnode9 = var_nodearraylist4;
/* <var_tidnode9:nullable Object> isa nullable TId */
cltype22 = type_nullable_parser_nodes__TId.color;
idtype23 = type_nullable_parser_nodes__TId.id;
if(var_tidnode9 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_tidnode9->type->table_size) {
var21 = 0;
} else {
var21 = var_tidnode9->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19645);
exit(1);
}
var_ptypenode10 = var_nodearraylist5;
/* <var_ptypenode10:nullable Object> isa nullable AType */
cltype25 = type_nullable_parser_nodes__AType.color;
idtype26 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode10 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_ptypenode10->type->table_size) {
var24 = 0;
} else {
var24 = var_ptypenode10->type->type_table[cltype25] == idtype26;
}
}
if (!var24) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19647);
exit(1);
}
var_pannotationsnode11 = var_nodearraylist10;
/* <var_pannotationsnode11:nullable Object> isa nullable AAnnotations */
cltype28 = type_nullable_parser_nodes__AAnnotations.color;
idtype29 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode11 == NULL) {
var27 = 1;
} else {
if(cltype28 >= var_pannotationsnode11->type->table_size) {
var27 = 0;
} else {
var27 = var_pannotationsnode11->type->type_table[cltype28] == idtype29;
}
}
if (!var27) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19649);
exit(1);
}
var_pexprnode12 = var_nodearraylist9;
/* <var_pexprnode12:nullable Object> isa nullable AExpr */
cltype31 = type_nullable_parser_nodes__AExpr.color;
idtype32 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode12 == NULL) {
var30 = 1;
} else {
if(cltype31 >= var_pexprnode12->type->table_size) {
var30 = 0;
} else {
var30 = var_pexprnode12->type->type_table[cltype31] == idtype32;
}
}
if (!var30) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19651);
exit(1);
}
var33 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var34 = NULL;
var35 = NULL;
var36 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var33->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var33, var_pdocnode2, var34, var_pablenode4, var35, var_pvisibilitynode6, var_tkwvarnode7, var36, var_tidnode9, var_ptypenode10, var_pannotationsnode11, var_pexprnode12) /* init_aattrpropdef on <var33:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var33);
var_ppropdefnode1 = var33;
var_node_list = var_ppropdefnode1;
var37 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction443> */
var38 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var37) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var38, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction443#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction443__action(val* self, val* p0) {
parser__ReduceAction443__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction444#action for (self: ReduceAction444, Parser) */
void parser__ReduceAction444__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var12 /* : Bool */;
int cltype;
int idtype;
val* var_pablenode4 /* var pablenode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_tkwredefnode5 /* var tkwredefnode5: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pvisibilitynode6 /* var pvisibilitynode6: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_tkwvarnode7 /* var tkwvarnode7: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_tidnode9 /* var tidnode9: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_ptypenode10 /* var ptypenode10: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var_pannotationsnode11 /* var pannotationsnode11: nullable Object */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var_pexprnode12 /* var pexprnode12: nullable Object */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
val* var37 /* : AAttrPropdef */;
val* var38 /* : null */;
val* var39 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AAttrPropdef */;
long var40 /* : Int */;
long var41 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var12 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var12 = 0;
} else {
var12 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19686);
exit(1);
}
var_pablenode4 = var_nodearraylist7;
/* <var_pablenode4:nullable Object> isa nullable AAble */
cltype14 = type_nullable_parser_nodes__AAble.color;
idtype15 = type_nullable_parser_nodes__AAble.id;
if(var_pablenode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_pablenode4->type->table_size) {
var13 = 0;
} else {
var13 = var_pablenode4->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19688);
exit(1);
}
var_tkwredefnode5 = var_nodearraylist2;
/* <var_tkwredefnode5:nullable Object> isa nullable TKwredef */
cltype17 = type_nullable_parser_nodes__TKwredef.color;
idtype18 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode5 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tkwredefnode5->type->table_size) {
var16 = 0;
} else {
var16 = var_tkwredefnode5->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19690);
exit(1);
}
var_pvisibilitynode6 = var_nodearraylist3;
/* <var_pvisibilitynode6:nullable Object> isa nullable AVisibility */
cltype20 = type_nullable_parser_nodes__AVisibility.color;
idtype21 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode6 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_pvisibilitynode6->type->table_size) {
var19 = 0;
} else {
var19 = var_pvisibilitynode6->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19692);
exit(1);
}
var_tkwvarnode7 = var_nodearraylist4;
/* <var_tkwvarnode7:nullable Object> isa nullable TKwvar */
cltype23 = type_nullable_parser_nodes__TKwvar.color;
idtype24 = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode7 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_tkwvarnode7->type->table_size) {
var22 = 0;
} else {
var22 = var_tkwvarnode7->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19694);
exit(1);
}
var_tidnode9 = var_nodearraylist5;
/* <var_tidnode9:nullable Object> isa nullable TId */
cltype26 = type_nullable_parser_nodes__TId.color;
idtype27 = type_nullable_parser_nodes__TId.id;
if(var_tidnode9 == NULL) {
var25 = 1;
} else {
if(cltype26 >= var_tidnode9->type->table_size) {
var25 = 0;
} else {
var25 = var_tidnode9->type->type_table[cltype26] == idtype27;
}
}
if (!var25) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19696);
exit(1);
}
var_ptypenode10 = var_nodearraylist6;
/* <var_ptypenode10:nullable Object> isa nullable AType */
cltype29 = type_nullable_parser_nodes__AType.color;
idtype30 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode10 == NULL) {
var28 = 1;
} else {
if(cltype29 >= var_ptypenode10->type->table_size) {
var28 = 0;
} else {
var28 = var_ptypenode10->type->type_table[cltype29] == idtype30;
}
}
if (!var28) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19698);
exit(1);
}
var_pannotationsnode11 = var_nodearraylist11;
/* <var_pannotationsnode11:nullable Object> isa nullable AAnnotations */
cltype32 = type_nullable_parser_nodes__AAnnotations.color;
idtype33 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode11 == NULL) {
var31 = 1;
} else {
if(cltype32 >= var_pannotationsnode11->type->table_size) {
var31 = 0;
} else {
var31 = var_pannotationsnode11->type->type_table[cltype32] == idtype33;
}
}
if (!var31) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19700);
exit(1);
}
var_pexprnode12 = var_nodearraylist10;
/* <var_pexprnode12:nullable Object> isa nullable AExpr */
cltype35 = type_nullable_parser_nodes__AExpr.color;
idtype36 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode12 == NULL) {
var34 = 1;
} else {
if(cltype35 >= var_pexprnode12->type->table_size) {
var34 = 0;
} else {
var34 = var_pexprnode12->type->type_table[cltype35] == idtype36;
}
}
if (!var34) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19702);
exit(1);
}
var37 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var38 = NULL;
var39 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var37->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var37, var_pdocnode2, var38, var_pablenode4, var_tkwredefnode5, var_pvisibilitynode6, var_tkwvarnode7, var39, var_tidnode9, var_ptypenode10, var_pannotationsnode11, var_pexprnode12) /* init_aattrpropdef on <var37:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var37);
var_ppropdefnode1 = var37;
var_node_list = var_ppropdefnode1;
var40 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction444> */
var41 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var40) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var41, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction444#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction444__action(val* self, val* p0) {
parser__ReduceAction444__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction445#action for (self: ReduceAction445, Parser) */
void parser__ReduceAction445__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_tkwinitnode5 /* var tkwinitnode5: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_psignaturenode7 /* var psignaturenode7: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_pexprnode9 /* var pexprnode9: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var20 /* : AConcreteInitPropdef */;
val* var21 /* : null */;
val* var22 /* : null */;
val* var23 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AConcreteInitPropdef */;
long var24 /* : Int */;
long var25 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var7 = 0;
} else {
var7 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19732);
exit(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype9 = type_nullable_parser_nodes__AVisibility.color;
idtype10 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_pvisibilitynode4->type->table_size) {
var8 = 0;
} else {
var8 = var_pvisibilitynode4->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19734);
exit(1);
}
var_tkwinitnode5 = var_nodearraylist3;
/* <var_tkwinitnode5:nullable Object> isa nullable TKwinit */
cltype12 = type_nullable_parser_nodes__TKwinit.color;
idtype13 = type_nullable_parser_nodes__TKwinit.id;
if(var_tkwinitnode5 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_tkwinitnode5->type->table_size) {
var11 = 0;
} else {
var11 = var_tkwinitnode5->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19736);
exit(1);
}
var_psignaturenode7 = var_nodearraylist4;
/* <var_psignaturenode7:nullable Object> isa nullable ASignature */
cltype15 = type_nullable_parser_nodes__ASignature.color;
idtype16 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode7 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_psignaturenode7->type->table_size) {
var14 = 0;
} else {
var14 = var_psignaturenode7->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19738);
exit(1);
}
var_pexprnode9 = var_nodearraylist6;
/* <var_pexprnode9:nullable Object> isa nullable AExpr */
cltype18 = type_nullable_parser_nodes__AExpr.color;
idtype19 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode9 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_pexprnode9->type->table_size) {
var17 = 0;
} else {
var17 = var_pexprnode9->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19740);
exit(1);
}
var20 = NEW_parser_nodes__AConcreteInitPropdef(&type_parser_nodes__AConcreteInitPropdef);
var21 = NULL;
var22 = NULL;
var23 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*))(var20->class->vft[COLOR_parser_prod__AConcreteInitPropdef__init_aconcreteinitpropdef]))(var20, var_pdocnode2, var21, var_pvisibilitynode4, var_tkwinitnode5, var22, var_psignaturenode7, var23, var_pexprnode9) /* init_aconcreteinitpropdef on <var20:AConcreteInitPropdef>*/;
CHECK_NEW_parser_nodes__AConcreteInitPropdef(var20);
var_ppropdefnode1 = var20;
var_node_list = var_ppropdefnode1;
var24 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction445> */
var25 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var24) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var25, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction445#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction445__action(val* self, val* p0) {
parser__ReduceAction445__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction446#action for (self: ReduceAction446, Parser) */
void parser__ReduceAction446__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_tkwinitnode5 /* var tkwinitnode5: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_psignaturenode7 /* var psignaturenode7: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_pexprnode9 /* var pexprnode9: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var24 /* : AConcreteInitPropdef */;
val* var25 /* : null */;
val* var26 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AConcreteInitPropdef */;
long var27 /* : Int */;
long var28 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19768);
exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype10 = type_nullable_parser_nodes__TKwredef.color;
idtype11 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_tkwredefnode3->type->table_size) {
var9 = 0;
} else {
var9 = var_tkwredefnode3->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19770);
exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype13 = type_nullable_parser_nodes__AVisibility.color;
idtype14 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_pvisibilitynode4->type->table_size) {
var12 = 0;
} else {
var12 = var_pvisibilitynode4->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19772);
exit(1);
}
var_tkwinitnode5 = var_nodearraylist4;
/* <var_tkwinitnode5:nullable Object> isa nullable TKwinit */
cltype16 = type_nullable_parser_nodes__TKwinit.color;
idtype17 = type_nullable_parser_nodes__TKwinit.id;
if(var_tkwinitnode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_tkwinitnode5->type->table_size) {
var15 = 0;
} else {
var15 = var_tkwinitnode5->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19774);
exit(1);
}
var_psignaturenode7 = var_nodearraylist5;
/* <var_psignaturenode7:nullable Object> isa nullable ASignature */
cltype19 = type_nullable_parser_nodes__ASignature.color;
idtype20 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode7 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_psignaturenode7->type->table_size) {
var18 = 0;
} else {
var18 = var_psignaturenode7->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19776);
exit(1);
}
var_pexprnode9 = var_nodearraylist7;
/* <var_pexprnode9:nullable Object> isa nullable AExpr */
cltype22 = type_nullable_parser_nodes__AExpr.color;
idtype23 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode9 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_pexprnode9->type->table_size) {
var21 = 0;
} else {
var21 = var_pexprnode9->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19778);
exit(1);
}
var24 = NEW_parser_nodes__AConcreteInitPropdef(&type_parser_nodes__AConcreteInitPropdef);
var25 = NULL;
var26 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*))(var24->class->vft[COLOR_parser_prod__AConcreteInitPropdef__init_aconcreteinitpropdef]))(var24, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwinitnode5, var25, var_psignaturenode7, var26, var_pexprnode9) /* init_aconcreteinitpropdef on <var24:AConcreteInitPropdef>*/;
CHECK_NEW_parser_nodes__AConcreteInitPropdef(var24);
var_ppropdefnode1 = var24;
var_node_list = var_ppropdefnode1;
var27 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction446> */
var28 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var27) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var28, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction446#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction446__action(val* self, val* p0) {
parser__ReduceAction446__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction447#action for (self: ReduceAction447, Parser) */
void parser__ReduceAction447__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_tkwinitnode5 /* var tkwinitnode5: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_pmethidnode6 /* var pmethidnode6: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_psignaturenode7 /* var psignaturenode7: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_pexprnode9 /* var pexprnode9: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var24 /* : AConcreteInitPropdef */;
val* var25 /* : null */;
val* var26 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AConcreteInitPropdef */;
long var27 /* : Int */;
long var28 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19806);
exit(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype10 = type_nullable_parser_nodes__AVisibility.color;
idtype11 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_pvisibilitynode4->type->table_size) {
var9 = 0;
} else {
var9 = var_pvisibilitynode4->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19808);
exit(1);
}
var_tkwinitnode5 = var_nodearraylist3;
/* <var_tkwinitnode5:nullable Object> isa nullable TKwinit */
cltype13 = type_nullable_parser_nodes__TKwinit.color;
idtype14 = type_nullable_parser_nodes__TKwinit.id;
if(var_tkwinitnode5 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_tkwinitnode5->type->table_size) {
var12 = 0;
} else {
var12 = var_tkwinitnode5->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19810);
exit(1);
}
var_pmethidnode6 = var_nodearraylist4;
/* <var_pmethidnode6:nullable Object> isa nullable AMethid */
cltype16 = type_nullable_parser_nodes__AMethid.color;
idtype17 = type_nullable_parser_nodes__AMethid.id;
if(var_pmethidnode6 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_pmethidnode6->type->table_size) {
var15 = 0;
} else {
var15 = var_pmethidnode6->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19812);
exit(1);
}
var_psignaturenode7 = var_nodearraylist5;
/* <var_psignaturenode7:nullable Object> isa nullable ASignature */
cltype19 = type_nullable_parser_nodes__ASignature.color;
idtype20 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode7 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_psignaturenode7->type->table_size) {
var18 = 0;
} else {
var18 = var_psignaturenode7->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19814);
exit(1);
}
var_pexprnode9 = var_nodearraylist7;
/* <var_pexprnode9:nullable Object> isa nullable AExpr */
cltype22 = type_nullable_parser_nodes__AExpr.color;
idtype23 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode9 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_pexprnode9->type->table_size) {
var21 = 0;
} else {
var21 = var_pexprnode9->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19816);
exit(1);
}
var24 = NEW_parser_nodes__AConcreteInitPropdef(&type_parser_nodes__AConcreteInitPropdef);
var25 = NULL;
var26 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*))(var24->class->vft[COLOR_parser_prod__AConcreteInitPropdef__init_aconcreteinitpropdef]))(var24, var_pdocnode2, var25, var_pvisibilitynode4, var_tkwinitnode5, var_pmethidnode6, var_psignaturenode7, var26, var_pexprnode9) /* init_aconcreteinitpropdef on <var24:AConcreteInitPropdef>*/;
CHECK_NEW_parser_nodes__AConcreteInitPropdef(var24);
var_ppropdefnode1 = var24;
var_node_list = var_ppropdefnode1;
var27 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction447> */
var28 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var27) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var28, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction447#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction447__action(val* self, val* p0) {
parser__ReduceAction447__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction448#action for (self: ReduceAction448, Parser) */
void parser__ReduceAction448__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_tkwinitnode5 /* var tkwinitnode5: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pmethidnode6 /* var pmethidnode6: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_psignaturenode7 /* var psignaturenode7: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_pexprnode9 /* var pexprnode9: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : AConcreteInitPropdef */;
val* var29 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AConcreteInitPropdef */;
long var30 /* : Int */;
long var31 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var9 = 0;
} else {
var9 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19845);
exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype11 = type_nullable_parser_nodes__TKwredef.color;
idtype12 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_tkwredefnode3->type->table_size) {
var10 = 0;
} else {
var10 = var_tkwredefnode3->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19847);
exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype14 = type_nullable_parser_nodes__AVisibility.color;
idtype15 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_pvisibilitynode4->type->table_size) {
var13 = 0;
} else {
var13 = var_pvisibilitynode4->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19849);
exit(1);
}
var_tkwinitnode5 = var_nodearraylist4;
/* <var_tkwinitnode5:nullable Object> isa nullable TKwinit */
cltype17 = type_nullable_parser_nodes__TKwinit.color;
idtype18 = type_nullable_parser_nodes__TKwinit.id;
if(var_tkwinitnode5 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tkwinitnode5->type->table_size) {
var16 = 0;
} else {
var16 = var_tkwinitnode5->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19851);
exit(1);
}
var_pmethidnode6 = var_nodearraylist5;
/* <var_pmethidnode6:nullable Object> isa nullable AMethid */
cltype20 = type_nullable_parser_nodes__AMethid.color;
idtype21 = type_nullable_parser_nodes__AMethid.id;
if(var_pmethidnode6 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_pmethidnode6->type->table_size) {
var19 = 0;
} else {
var19 = var_pmethidnode6->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19853);
exit(1);
}
var_psignaturenode7 = var_nodearraylist6;
/* <var_psignaturenode7:nullable Object> isa nullable ASignature */
cltype23 = type_nullable_parser_nodes__ASignature.color;
idtype24 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode7 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_psignaturenode7->type->table_size) {
var22 = 0;
} else {
var22 = var_psignaturenode7->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19855);
exit(1);
}
var_pexprnode9 = var_nodearraylist8;
/* <var_pexprnode9:nullable Object> isa nullable AExpr */
cltype26 = type_nullable_parser_nodes__AExpr.color;
idtype27 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode9 == NULL) {
var25 = 1;
} else {
if(cltype26 >= var_pexprnode9->type->table_size) {
var25 = 0;
} else {
var25 = var_pexprnode9->type->type_table[cltype26] == idtype27;
}
}
if (!var25) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19857);
exit(1);
}
var28 = NEW_parser_nodes__AConcreteInitPropdef(&type_parser_nodes__AConcreteInitPropdef);
var29 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*))(var28->class->vft[COLOR_parser_prod__AConcreteInitPropdef__init_aconcreteinitpropdef]))(var28, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwinitnode5, var_pmethidnode6, var_psignaturenode7, var29, var_pexprnode9) /* init_aconcreteinitpropdef on <var28:AConcreteInitPropdef>*/;
CHECK_NEW_parser_nodes__AConcreteInitPropdef(var28);
var_ppropdefnode1 = var28;
var_node_list = var_ppropdefnode1;
var30 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction448> */
var31 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var30) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var31, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction448#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction448__action(val* self, val* p0) {
parser__ReduceAction448__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction449#action for (self: ReduceAction449, Parser) */
void parser__ReduceAction449__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_tkwinitnode5 /* var tkwinitnode5: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_psignaturenode7 /* var psignaturenode7: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pannotationsnode8 /* var pannotationsnode8: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_pexprnode9 /* var pexprnode9: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var24 /* : AConcreteInitPropdef */;
val* var25 /* : null */;
val* var26 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AConcreteInitPropdef */;
long var27 /* : Int */;
long var28 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19885);
exit(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype10 = type_nullable_parser_nodes__AVisibility.color;
idtype11 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_pvisibilitynode4->type->table_size) {
var9 = 0;
} else {
var9 = var_pvisibilitynode4->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19887);
exit(1);
}
var_tkwinitnode5 = var_nodearraylist3;
/* <var_tkwinitnode5:nullable Object> isa nullable TKwinit */
cltype13 = type_nullable_parser_nodes__TKwinit.color;
idtype14 = type_nullable_parser_nodes__TKwinit.id;
if(var_tkwinitnode5 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_tkwinitnode5->type->table_size) {
var12 = 0;
} else {
var12 = var_tkwinitnode5->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19889);
exit(1);
}
var_psignaturenode7 = var_nodearraylist4;
/* <var_psignaturenode7:nullable Object> isa nullable ASignature */
cltype16 = type_nullable_parser_nodes__ASignature.color;
idtype17 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode7 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_psignaturenode7->type->table_size) {
var15 = 0;
} else {
var15 = var_psignaturenode7->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19891);
exit(1);
}
var_pannotationsnode8 = var_nodearraylist5;
/* <var_pannotationsnode8:nullable Object> isa nullable AAnnotations */
cltype19 = type_nullable_parser_nodes__AAnnotations.color;
idtype20 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode8 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pannotationsnode8->type->table_size) {
var18 = 0;
} else {
var18 = var_pannotationsnode8->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19893);
exit(1);
}
var_pexprnode9 = var_nodearraylist7;
/* <var_pexprnode9:nullable Object> isa nullable AExpr */
cltype22 = type_nullable_parser_nodes__AExpr.color;
idtype23 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode9 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_pexprnode9->type->table_size) {
var21 = 0;
} else {
var21 = var_pexprnode9->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19895);
exit(1);
}
var24 = NEW_parser_nodes__AConcreteInitPropdef(&type_parser_nodes__AConcreteInitPropdef);
var25 = NULL;
var26 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*))(var24->class->vft[COLOR_parser_prod__AConcreteInitPropdef__init_aconcreteinitpropdef]))(var24, var_pdocnode2, var25, var_pvisibilitynode4, var_tkwinitnode5, var26, var_psignaturenode7, var_pannotationsnode8, var_pexprnode9) /* init_aconcreteinitpropdef on <var24:AConcreteInitPropdef>*/;
CHECK_NEW_parser_nodes__AConcreteInitPropdef(var24);
var_ppropdefnode1 = var24;
var_node_list = var_ppropdefnode1;
var27 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction449> */
var28 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var27) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var28, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction449#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction449__action(val* self, val* p0) {
parser__ReduceAction449__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction450#action for (self: ReduceAction450, Parser) */
void parser__ReduceAction450__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_tkwinitnode5 /* var tkwinitnode5: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_psignaturenode7 /* var psignaturenode7: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pannotationsnode8 /* var pannotationsnode8: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_pexprnode9 /* var pexprnode9: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : AConcreteInitPropdef */;
val* var29 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AConcreteInitPropdef */;
long var30 /* : Int */;
long var31 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var9 = 0;
} else {
var9 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19924);
exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype11 = type_nullable_parser_nodes__TKwredef.color;
idtype12 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_tkwredefnode3->type->table_size) {
var10 = 0;
} else {
var10 = var_tkwredefnode3->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19926);
exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype14 = type_nullable_parser_nodes__AVisibility.color;
idtype15 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_pvisibilitynode4->type->table_size) {
var13 = 0;
} else {
var13 = var_pvisibilitynode4->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19928);
exit(1);
}
var_tkwinitnode5 = var_nodearraylist4;
/* <var_tkwinitnode5:nullable Object> isa nullable TKwinit */
cltype17 = type_nullable_parser_nodes__TKwinit.color;
idtype18 = type_nullable_parser_nodes__TKwinit.id;
if(var_tkwinitnode5 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tkwinitnode5->type->table_size) {
var16 = 0;
} else {
var16 = var_tkwinitnode5->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19930);
exit(1);
}
var_psignaturenode7 = var_nodearraylist5;
/* <var_psignaturenode7:nullable Object> isa nullable ASignature */
cltype20 = type_nullable_parser_nodes__ASignature.color;
idtype21 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode7 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_psignaturenode7->type->table_size) {
var19 = 0;
} else {
var19 = var_psignaturenode7->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19932);
exit(1);
}
var_pannotationsnode8 = var_nodearraylist6;
/* <var_pannotationsnode8:nullable Object> isa nullable AAnnotations */
cltype23 = type_nullable_parser_nodes__AAnnotations.color;
idtype24 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode8 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_pannotationsnode8->type->table_size) {
var22 = 0;
} else {
var22 = var_pannotationsnode8->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19934);
exit(1);
}
var_pexprnode9 = var_nodearraylist8;
/* <var_pexprnode9:nullable Object> isa nullable AExpr */
cltype26 = type_nullable_parser_nodes__AExpr.color;
idtype27 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode9 == NULL) {
var25 = 1;
} else {
if(cltype26 >= var_pexprnode9->type->table_size) {
var25 = 0;
} else {
var25 = var_pexprnode9->type->type_table[cltype26] == idtype27;
}
}
if (!var25) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19936);
exit(1);
}
var28 = NEW_parser_nodes__AConcreteInitPropdef(&type_parser_nodes__AConcreteInitPropdef);
var29 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*))(var28->class->vft[COLOR_parser_prod__AConcreteInitPropdef__init_aconcreteinitpropdef]))(var28, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwinitnode5, var29, var_psignaturenode7, var_pannotationsnode8, var_pexprnode9) /* init_aconcreteinitpropdef on <var28:AConcreteInitPropdef>*/;
CHECK_NEW_parser_nodes__AConcreteInitPropdef(var28);
var_ppropdefnode1 = var28;
var_node_list = var_ppropdefnode1;
var30 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction450> */
var31 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var30) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var31, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction450#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction450__action(val* self, val* p0) {
parser__ReduceAction450__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction451#action for (self: ReduceAction451, Parser) */
void parser__ReduceAction451__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_tkwinitnode5 /* var tkwinitnode5: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_pmethidnode6 /* var pmethidnode6: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_psignaturenode7 /* var psignaturenode7: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pannotationsnode8 /* var pannotationsnode8: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_pexprnode9 /* var pexprnode9: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : AConcreteInitPropdef */;
val* var29 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AConcreteInitPropdef */;
long var30 /* : Int */;
long var31 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var9 = 0;
} else {
var9 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19965);
exit(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype11 = type_nullable_parser_nodes__AVisibility.color;
idtype12 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_pvisibilitynode4->type->table_size) {
var10 = 0;
} else {
var10 = var_pvisibilitynode4->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19967);
exit(1);
}
var_tkwinitnode5 = var_nodearraylist3;
/* <var_tkwinitnode5:nullable Object> isa nullable TKwinit */
cltype14 = type_nullable_parser_nodes__TKwinit.color;
idtype15 = type_nullable_parser_nodes__TKwinit.id;
if(var_tkwinitnode5 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_tkwinitnode5->type->table_size) {
var13 = 0;
} else {
var13 = var_tkwinitnode5->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19969);
exit(1);
}
var_pmethidnode6 = var_nodearraylist4;
/* <var_pmethidnode6:nullable Object> isa nullable AMethid */
cltype17 = type_nullable_parser_nodes__AMethid.color;
idtype18 = type_nullable_parser_nodes__AMethid.id;
if(var_pmethidnode6 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_pmethidnode6->type->table_size) {
var16 = 0;
} else {
var16 = var_pmethidnode6->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19971);
exit(1);
}
var_psignaturenode7 = var_nodearraylist5;
/* <var_psignaturenode7:nullable Object> isa nullable ASignature */
cltype20 = type_nullable_parser_nodes__ASignature.color;
idtype21 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode7 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_psignaturenode7->type->table_size) {
var19 = 0;
} else {
var19 = var_psignaturenode7->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19973);
exit(1);
}
var_pannotationsnode8 = var_nodearraylist6;
/* <var_pannotationsnode8:nullable Object> isa nullable AAnnotations */
cltype23 = type_nullable_parser_nodes__AAnnotations.color;
idtype24 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode8 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_pannotationsnode8->type->table_size) {
var22 = 0;
} else {
var22 = var_pannotationsnode8->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19975);
exit(1);
}
var_pexprnode9 = var_nodearraylist8;
/* <var_pexprnode9:nullable Object> isa nullable AExpr */
cltype26 = type_nullable_parser_nodes__AExpr.color;
idtype27 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode9 == NULL) {
var25 = 1;
} else {
if(cltype26 >= var_pexprnode9->type->table_size) {
var25 = 0;
} else {
var25 = var_pexprnode9->type->type_table[cltype26] == idtype27;
}
}
if (!var25) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19977);
exit(1);
}
var28 = NEW_parser_nodes__AConcreteInitPropdef(&type_parser_nodes__AConcreteInitPropdef);
var29 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*))(var28->class->vft[COLOR_parser_prod__AConcreteInitPropdef__init_aconcreteinitpropdef]))(var28, var_pdocnode2, var29, var_pvisibilitynode4, var_tkwinitnode5, var_pmethidnode6, var_psignaturenode7, var_pannotationsnode8, var_pexprnode9) /* init_aconcreteinitpropdef on <var28:AConcreteInitPropdef>*/;
CHECK_NEW_parser_nodes__AConcreteInitPropdef(var28);
var_ppropdefnode1 = var28;
var_node_list = var_ppropdefnode1;
var30 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction451> */
var31 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var30) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var31, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction451#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction451__action(val* self, val* p0) {
parser__ReduceAction451__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction452#action for (self: ReduceAction452, Parser) */
void parser__ReduceAction452__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_tkwinitnode5 /* var tkwinitnode5: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pmethidnode6 /* var pmethidnode6: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_psignaturenode7 /* var psignaturenode7: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_pannotationsnode8 /* var pannotationsnode8: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var_pexprnode9 /* var pexprnode9: nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var32 /* : AConcreteInitPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AConcreteInitPropdef */;
long var33 /* : Int */;
long var34 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var10 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var10 = 0;
} else {
var10 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20007);
exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype12 = type_nullable_parser_nodes__TKwredef.color;
idtype13 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_tkwredefnode3->type->table_size) {
var11 = 0;
} else {
var11 = var_tkwredefnode3->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20009);
exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype15 = type_nullable_parser_nodes__AVisibility.color;
idtype16 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_pvisibilitynode4->type->table_size) {
var14 = 0;
} else {
var14 = var_pvisibilitynode4->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20011);
exit(1);
}
var_tkwinitnode5 = var_nodearraylist4;
/* <var_tkwinitnode5:nullable Object> isa nullable TKwinit */
cltype18 = type_nullable_parser_nodes__TKwinit.color;
idtype19 = type_nullable_parser_nodes__TKwinit.id;
if(var_tkwinitnode5 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tkwinitnode5->type->table_size) {
var17 = 0;
} else {
var17 = var_tkwinitnode5->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20013);
exit(1);
}
var_pmethidnode6 = var_nodearraylist5;
/* <var_pmethidnode6:nullable Object> isa nullable AMethid */
cltype21 = type_nullable_parser_nodes__AMethid.color;
idtype22 = type_nullable_parser_nodes__AMethid.id;
if(var_pmethidnode6 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_pmethidnode6->type->table_size) {
var20 = 0;
} else {
var20 = var_pmethidnode6->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20015);
exit(1);
}
var_psignaturenode7 = var_nodearraylist6;
/* <var_psignaturenode7:nullable Object> isa nullable ASignature */
cltype24 = type_nullable_parser_nodes__ASignature.color;
idtype25 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode7 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_psignaturenode7->type->table_size) {
var23 = 0;
} else {
var23 = var_psignaturenode7->type->type_table[cltype24] == idtype25;
}
}
if (!var23) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20017);
exit(1);
}
var_pannotationsnode8 = var_nodearraylist7;
/* <var_pannotationsnode8:nullable Object> isa nullable AAnnotations */
cltype27 = type_nullable_parser_nodes__AAnnotations.color;
idtype28 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode8 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_pannotationsnode8->type->table_size) {
var26 = 0;
} else {
var26 = var_pannotationsnode8->type->type_table[cltype27] == idtype28;
}
}
if (!var26) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20019);
exit(1);
}
var_pexprnode9 = var_nodearraylist9;
/* <var_pexprnode9:nullable Object> isa nullable AExpr */
cltype30 = type_nullable_parser_nodes__AExpr.color;
idtype31 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode9 == NULL) {
var29 = 1;
} else {
if(cltype30 >= var_pexprnode9->type->table_size) {
var29 = 0;
} else {
var29 = var_pexprnode9->type->type_table[cltype30] == idtype31;
}
}
if (!var29) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20021);
exit(1);
}
var32 = NEW_parser_nodes__AConcreteInitPropdef(&type_parser_nodes__AConcreteInitPropdef);
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*))(var32->class->vft[COLOR_parser_prod__AConcreteInitPropdef__init_aconcreteinitpropdef]))(var32, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwinitnode5, var_pmethidnode6, var_psignaturenode7, var_pannotationsnode8, var_pexprnode9) /* init_aconcreteinitpropdef on <var32:AConcreteInitPropdef>*/;
CHECK_NEW_parser_nodes__AConcreteInitPropdef(var32);
var_ppropdefnode1 = var32;
var_node_list = var_ppropdefnode1;
var33 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction452> */
var34 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var33) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var34, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction452#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction452__action(val* self, val* p0) {
parser__ReduceAction452__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction453#action for (self: ReduceAction453, Parser) */
void parser__ReduceAction453__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_tkwinitnode5 /* var tkwinitnode5: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_psignaturenode7 /* var psignaturenode7: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pexprnode9 /* var pexprnode9: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : AConcreteInitPropdef */;
val* var22 /* : null */;
val* var23 /* : null */;
val* var24 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AConcreteInitPropdef */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20049);
exit(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype10 = type_nullable_parser_nodes__AVisibility.color;
idtype11 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_pvisibilitynode4->type->table_size) {
var9 = 0;
} else {
var9 = var_pvisibilitynode4->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20051);
exit(1);
}
var_tkwinitnode5 = var_nodearraylist3;
/* <var_tkwinitnode5:nullable Object> isa nullable TKwinit */
cltype13 = type_nullable_parser_nodes__TKwinit.color;
idtype14 = type_nullable_parser_nodes__TKwinit.id;
if(var_tkwinitnode5 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_tkwinitnode5->type->table_size) {
var12 = 0;
} else {
var12 = var_tkwinitnode5->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20053);
exit(1);
}
var_psignaturenode7 = var_nodearraylist4;
/* <var_psignaturenode7:nullable Object> isa nullable ASignature */
cltype16 = type_nullable_parser_nodes__ASignature.color;
idtype17 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode7 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_psignaturenode7->type->table_size) {
var15 = 0;
} else {
var15 = var_psignaturenode7->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20055);
exit(1);
}
var_pexprnode9 = var_nodearraylist6;
/* <var_pexprnode9:nullable Object> isa nullable AExpr */
cltype19 = type_nullable_parser_nodes__AExpr.color;
idtype20 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode9 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pexprnode9->type->table_size) {
var18 = 0;
} else {
var18 = var_pexprnode9->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20057);
exit(1);
}
var21 = NEW_parser_nodes__AConcreteInitPropdef(&type_parser_nodes__AConcreteInitPropdef);
var22 = NULL;
var23 = NULL;
var24 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*))(var21->class->vft[COLOR_parser_prod__AConcreteInitPropdef__init_aconcreteinitpropdef]))(var21, var_pdocnode2, var22, var_pvisibilitynode4, var_tkwinitnode5, var23, var_psignaturenode7, var24, var_pexprnode9) /* init_aconcreteinitpropdef on <var21:AConcreteInitPropdef>*/;
CHECK_NEW_parser_nodes__AConcreteInitPropdef(var21);
var_ppropdefnode1 = var21;
var_node_list = var_ppropdefnode1;
var25 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction453> */
var26 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var25) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var26, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction453#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction453__action(val* self, val* p0) {
parser__ReduceAction453__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction454#action for (self: ReduceAction454, Parser) */
void parser__ReduceAction454__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_tkwinitnode5 /* var tkwinitnode5: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_psignaturenode7 /* var psignaturenode7: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pexprnode9 /* var pexprnode9: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var25 /* : AConcreteInitPropdef */;
val* var26 /* : null */;
val* var27 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AConcreteInitPropdef */;
long var28 /* : Int */;
long var29 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var9 = 0;
} else {
var9 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20086);
exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype11 = type_nullable_parser_nodes__TKwredef.color;
idtype12 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_tkwredefnode3->type->table_size) {
var10 = 0;
} else {
var10 = var_tkwredefnode3->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20088);
exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype14 = type_nullable_parser_nodes__AVisibility.color;
idtype15 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_pvisibilitynode4->type->table_size) {
var13 = 0;
} else {
var13 = var_pvisibilitynode4->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20090);
exit(1);
}
var_tkwinitnode5 = var_nodearraylist4;
/* <var_tkwinitnode5:nullable Object> isa nullable TKwinit */
cltype17 = type_nullable_parser_nodes__TKwinit.color;
idtype18 = type_nullable_parser_nodes__TKwinit.id;
if(var_tkwinitnode5 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tkwinitnode5->type->table_size) {
var16 = 0;
} else {
var16 = var_tkwinitnode5->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20092);
exit(1);
}
var_psignaturenode7 = var_nodearraylist5;
/* <var_psignaturenode7:nullable Object> isa nullable ASignature */
cltype20 = type_nullable_parser_nodes__ASignature.color;
idtype21 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode7 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_psignaturenode7->type->table_size) {
var19 = 0;
} else {
var19 = var_psignaturenode7->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20094);
exit(1);
}
var_pexprnode9 = var_nodearraylist7;
/* <var_pexprnode9:nullable Object> isa nullable AExpr */
cltype23 = type_nullable_parser_nodes__AExpr.color;
idtype24 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode9 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_pexprnode9->type->table_size) {
var22 = 0;
} else {
var22 = var_pexprnode9->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20096);
exit(1);
}
var25 = NEW_parser_nodes__AConcreteInitPropdef(&type_parser_nodes__AConcreteInitPropdef);
var26 = NULL;
var27 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*))(var25->class->vft[COLOR_parser_prod__AConcreteInitPropdef__init_aconcreteinitpropdef]))(var25, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwinitnode5, var26, var_psignaturenode7, var27, var_pexprnode9) /* init_aconcreteinitpropdef on <var25:AConcreteInitPropdef>*/;
CHECK_NEW_parser_nodes__AConcreteInitPropdef(var25);
var_ppropdefnode1 = var25;
var_node_list = var_ppropdefnode1;
var28 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction454> */
var29 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var28) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var29, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction454#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction454__action(val* self, val* p0) {
parser__ReduceAction454__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction455#action for (self: ReduceAction455, Parser) */
void parser__ReduceAction455__action(val* self, val* p0) {
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
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_tkwinitnode5 /* var tkwinitnode5: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_pmethidnode6 /* var pmethidnode6: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_psignaturenode7 /* var psignaturenode7: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pexprnode9 /* var pexprnode9: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var25 /* : AConcreteInitPropdef */;
val* var26 /* : null */;
val* var27 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AConcreteInitPropdef */;
long var28 /* : Int */;
long var29 /* : Int */;
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
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var9 = 0;
} else {
var9 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20125);
exit(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype11 = type_nullable_parser_nodes__AVisibility.color;
idtype12 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_pvisibilitynode4->type->table_size) {
var10 = 0;
} else {
var10 = var_pvisibilitynode4->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20127);
exit(1);
}
var_tkwinitnode5 = var_nodearraylist3;
/* <var_tkwinitnode5:nullable Object> isa nullable TKwinit */
cltype14 = type_nullable_parser_nodes__TKwinit.color;
idtype15 = type_nullable_parser_nodes__TKwinit.id;
if(var_tkwinitnode5 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_tkwinitnode5->type->table_size) {
var13 = 0;
} else {
var13 = var_tkwinitnode5->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20129);
exit(1);
}
var_pmethidnode6 = var_nodearraylist4;
/* <var_pmethidnode6:nullable Object> isa nullable AMethid */
cltype17 = type_nullable_parser_nodes__AMethid.color;
idtype18 = type_nullable_parser_nodes__AMethid.id;
if(var_pmethidnode6 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_pmethidnode6->type->table_size) {
var16 = 0;
} else {
var16 = var_pmethidnode6->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20131);
exit(1);
}
var_psignaturenode7 = var_nodearraylist5;
/* <var_psignaturenode7:nullable Object> isa nullable ASignature */
cltype20 = type_nullable_parser_nodes__ASignature.color;
idtype21 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode7 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_psignaturenode7->type->table_size) {
var19 = 0;
} else {
var19 = var_psignaturenode7->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20133);
exit(1);
}
var_pexprnode9 = var_nodearraylist7;
/* <var_pexprnode9:nullable Object> isa nullable AExpr */
cltype23 = type_nullable_parser_nodes__AExpr.color;
idtype24 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode9 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_pexprnode9->type->table_size) {
var22 = 0;
} else {
var22 = var_pexprnode9->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20135);
exit(1);
}
var25 = NEW_parser_nodes__AConcreteInitPropdef(&type_parser_nodes__AConcreteInitPropdef);
var26 = NULL;
var27 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*))(var25->class->vft[COLOR_parser_prod__AConcreteInitPropdef__init_aconcreteinitpropdef]))(var25, var_pdocnode2, var26, var_pvisibilitynode4, var_tkwinitnode5, var_pmethidnode6, var_psignaturenode7, var27, var_pexprnode9) /* init_aconcreteinitpropdef on <var25:AConcreteInitPropdef>*/;
CHECK_NEW_parser_nodes__AConcreteInitPropdef(var25);
var_ppropdefnode1 = var25;
var_node_list = var_ppropdefnode1;
var28 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction455> */
var29 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var28) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var29, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction455#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction455__action(val* self, val* p0) {
parser__ReduceAction455__action(self, p0);
RET_LABEL:;
}
