#include "parser.sep.0.h"
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18543);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18545);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18547);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18549);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18551);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18553);
show_backtrace(1);
}
var23 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var24 = NULL;
var25 = NULL;
var26 = NULL;
var27 = NULL;
var28 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var23->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var23, var_pdocnode2, var24, var_pablenode4, var_tkwredefnode5, var_pvisibilitynode6, var_tkwvarnode7, var25, var_tidnode9, var26, var27, var28) /* init_aattrpropdef on <var23:AAttrPropdef>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18583);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18585);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18587);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18589);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18591);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18593);
show_backtrace(1);
}
var23 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var24 = NULL;
var25 = NULL;
var26 = NULL;
var27 = NULL;
var28 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var23->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var23, var_pdocnode2, var24, var_pablenode4, var25, var_pvisibilitynode6, var_tkwvarnode7, var26, var_tidnode9, var_ptypenode10, var27, var28) /* init_aattrpropdef on <var23:AAttrPropdef>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18624);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18626);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18628);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18630);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18632);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18634);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18636);
show_backtrace(1);
}
var27 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var28 = NULL;
var29 = NULL;
var30 = NULL;
var31 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var27->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var27, var_pdocnode2, var28, var_pablenode4, var_tkwredefnode5, var_pvisibilitynode6, var_tkwvarnode7, var29, var_tidnode9, var_ptypenode10, var30, var31) /* init_aattrpropdef on <var27:AAttrPropdef>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18665);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18667);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18669);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18671);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18673);
show_backtrace(1);
}
var19 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var20 = NULL;
var21 = NULL;
var22 = NULL;
var23 = NULL;
var24 = NULL;
var25 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var19->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var19, var_pdocnode2, var20, var21, var22, var_pvisibilitynode6, var_tkwvarnode7, var23, var_tidnode9, var24, var_pannotationsnode11, var25) /* init_aattrpropdef on <var19:AAttrPropdef>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18703);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18705);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18707);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18709);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18711);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18713);
show_backtrace(1);
}
var23 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var24 = NULL;
var25 = NULL;
var26 = NULL;
var27 = NULL;
var28 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var23->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var23, var_pdocnode2, var24, var25, var_tkwredefnode5, var_pvisibilitynode6, var_tkwvarnode7, var26, var_tidnode9, var27, var_pannotationsnode11, var28) /* init_aattrpropdef on <var23:AAttrPropdef>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18743);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18745);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18747);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18749);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18751);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18753);
show_backtrace(1);
}
var23 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var24 = NULL;
var25 = NULL;
var26 = NULL;
var27 = NULL;
var28 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var23->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var23, var_pdocnode2, var24, var25, var26, var_pvisibilitynode6, var_tkwvarnode7, var27, var_tidnode9, var_ptypenode10, var_pannotationsnode11, var28) /* init_aattrpropdef on <var23:AAttrPropdef>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18784);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18786);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18788);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18790);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18792);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18794);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18796);
show_backtrace(1);
}
var27 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var28 = NULL;
var29 = NULL;
var30 = NULL;
var31 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var27->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var27, var_pdocnode2, var28, var29, var_tkwredefnode5, var_pvisibilitynode6, var_tkwvarnode7, var30, var_tidnode9, var_ptypenode10, var_pannotationsnode11, var31) /* init_aattrpropdef on <var27:AAttrPropdef>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18826);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18828);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18830);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18832);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18834);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18836);
show_backtrace(1);
}
var23 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var24 = NULL;
var25 = NULL;
var26 = NULL;
var27 = NULL;
var28 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var23->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var23, var_pdocnode2, var24, var_pablenode4, var25, var_pvisibilitynode6, var_tkwvarnode7, var26, var_tidnode9, var27, var_pannotationsnode11, var28) /* init_aattrpropdef on <var23:AAttrPropdef>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18867);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18869);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18871);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18873);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18875);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18877);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18879);
show_backtrace(1);
}
var27 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var28 = NULL;
var29 = NULL;
var30 = NULL;
var31 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var27->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var27, var_pdocnode2, var28, var_pablenode4, var_tkwredefnode5, var_pvisibilitynode6, var_tkwvarnode7, var29, var_tidnode9, var30, var_pannotationsnode11, var31) /* init_aattrpropdef on <var27:AAttrPropdef>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18910);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18912);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18914);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18916);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18918);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18920);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18922);
show_backtrace(1);
}
var27 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var28 = NULL;
var29 = NULL;
var30 = NULL;
var31 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var27->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var27, var_pdocnode2, var28, var_pablenode4, var29, var_pvisibilitynode6, var_tkwvarnode7, var30, var_tidnode9, var_ptypenode10, var_pannotationsnode11, var31) /* init_aattrpropdef on <var27:AAttrPropdef>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18954);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18956);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18958);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18960);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18962);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18964);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18966);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18968);
show_backtrace(1);
}
var31 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var32 = NULL;
var33 = NULL;
var34 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var31->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var31, var_pdocnode2, var32, var_pablenode4, var_tkwredefnode5, var_pvisibilitynode6, var_tkwvarnode7, var33, var_tidnode9, var_ptypenode10, var_pannotationsnode11, var34) /* init_aattrpropdef on <var31:AAttrPropdef>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18999);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19001);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19003);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19005);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19007);
show_backtrace(1);
}
var21 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var22 = NULL;
var23 = NULL;
var24 = NULL;
var25 = NULL;
var26 = NULL;
var27 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var21->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var21, var_pdocnode2, var22, var23, var24, var_pvisibilitynode6, var_tkwvarnode7, var25, var_tidnode9, var26, var27, var_pexprnode12) /* init_aattrpropdef on <var21:AAttrPropdef>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19039);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19041);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19043);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19045);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19047);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19049);
show_backtrace(1);
}
var25 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var26 = NULL;
var27 = NULL;
var28 = NULL;
var29 = NULL;
var30 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var25->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var25, var_pdocnode2, var26, var27, var_tkwredefnode5, var_pvisibilitynode6, var_tkwvarnode7, var28, var_tidnode9, var29, var30, var_pexprnode12) /* init_aattrpropdef on <var25:AAttrPropdef>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19081);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19083);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19085);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19087);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19089);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19091);
show_backtrace(1);
}
var25 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var26 = NULL;
var27 = NULL;
var28 = NULL;
var29 = NULL;
var30 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var25->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var25, var_pdocnode2, var26, var27, var28, var_pvisibilitynode6, var_tkwvarnode7, var29, var_tidnode9, var_ptypenode10, var30, var_pexprnode12) /* init_aattrpropdef on <var25:AAttrPropdef>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19124);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19126);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19128);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19130);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19132);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19134);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19136);
show_backtrace(1);
}
var29 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var30 = NULL;
var31 = NULL;
var32 = NULL;
var33 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var29, var_pdocnode2, var30, var31, var_tkwredefnode5, var_pvisibilitynode6, var_tkwvarnode7, var32, var_tidnode9, var_ptypenode10, var33, var_pexprnode12) /* init_aattrpropdef on <var29:AAttrPropdef>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19168);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19170);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19172);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19174);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19176);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19178);
show_backtrace(1);
}
var25 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var26 = NULL;
var27 = NULL;
var28 = NULL;
var29 = NULL;
var30 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var25->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var25, var_pdocnode2, var26, var_pablenode4, var27, var_pvisibilitynode6, var_tkwvarnode7, var28, var_tidnode9, var29, var30, var_pexprnode12) /* init_aattrpropdef on <var25:AAttrPropdef>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19211);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19213);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19215);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19217);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19219);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19221);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19223);
show_backtrace(1);
}
var29 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var30 = NULL;
var31 = NULL;
var32 = NULL;
var33 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var29, var_pdocnode2, var30, var_pablenode4, var_tkwredefnode5, var_pvisibilitynode6, var_tkwvarnode7, var31, var_tidnode9, var32, var33, var_pexprnode12) /* init_aattrpropdef on <var29:AAttrPropdef>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19256);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19258);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19260);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19262);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19264);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19266);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19268);
show_backtrace(1);
}
var29 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var30 = NULL;
var31 = NULL;
var32 = NULL;
var33 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var29, var_pdocnode2, var30, var_pablenode4, var31, var_pvisibilitynode6, var_tkwvarnode7, var32, var_tidnode9, var_ptypenode10, var33, var_pexprnode12) /* init_aattrpropdef on <var29:AAttrPropdef>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19302);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19304);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19306);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19308);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19310);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19312);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19314);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19316);
show_backtrace(1);
}
var33 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var34 = NULL;
var35 = NULL;
var36 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var33->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var33, var_pdocnode2, var34, var_pablenode4, var_tkwredefnode5, var_pvisibilitynode6, var_tkwvarnode7, var35, var_tidnode9, var_ptypenode10, var36, var_pexprnode12) /* init_aattrpropdef on <var33:AAttrPropdef>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19348);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19350);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19352);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19354);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19356);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19358);
show_backtrace(1);
}
var25 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var26 = NULL;
var27 = NULL;
var28 = NULL;
var29 = NULL;
var30 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var25->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var25, var_pdocnode2, var26, var27, var28, var_pvisibilitynode6, var_tkwvarnode7, var29, var_tidnode9, var30, var_pannotationsnode11, var_pexprnode12) /* init_aattrpropdef on <var25:AAttrPropdef>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19391);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19393);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19395);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19397);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19399);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19401);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19403);
show_backtrace(1);
}
var29 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var30 = NULL;
var31 = NULL;
var32 = NULL;
var33 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var29, var_pdocnode2, var30, var31, var_tkwredefnode5, var_pvisibilitynode6, var_tkwvarnode7, var32, var_tidnode9, var33, var_pannotationsnode11, var_pexprnode12) /* init_aattrpropdef on <var29:AAttrPropdef>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19436);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19438);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19440);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19442);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19444);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19446);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19448);
show_backtrace(1);
}
var29 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var30 = NULL;
var31 = NULL;
var32 = NULL;
var33 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var29, var_pdocnode2, var30, var31, var32, var_pvisibilitynode6, var_tkwvarnode7, var33, var_tidnode9, var_ptypenode10, var_pannotationsnode11, var_pexprnode12) /* init_aattrpropdef on <var29:AAttrPropdef>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19482);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19484);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19486);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19488);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19490);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19492);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19494);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19496);
show_backtrace(1);
}
var33 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var34 = NULL;
var35 = NULL;
var36 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var33->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var33, var_pdocnode2, var34, var35, var_tkwredefnode5, var_pvisibilitynode6, var_tkwvarnode7, var36, var_tidnode9, var_ptypenode10, var_pannotationsnode11, var_pexprnode12) /* init_aattrpropdef on <var33:AAttrPropdef>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19529);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19531);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19533);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19535);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19537);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19539);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19541);
show_backtrace(1);
}
var29 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var30 = NULL;
var31 = NULL;
var32 = NULL;
var33 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var29, var_pdocnode2, var30, var_pablenode4, var31, var_pvisibilitynode6, var_tkwvarnode7, var32, var_tidnode9, var33, var_pannotationsnode11, var_pexprnode12) /* init_aattrpropdef on <var29:AAttrPropdef>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19575);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19577);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19579);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19581);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19583);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19585);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19587);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19589);
show_backtrace(1);
}
var33 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var34 = NULL;
var35 = NULL;
var36 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var33->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var33, var_pdocnode2, var34, var_pablenode4, var_tkwredefnode5, var_pvisibilitynode6, var_tkwvarnode7, var35, var_tidnode9, var36, var_pannotationsnode11, var_pexprnode12) /* init_aattrpropdef on <var33:AAttrPropdef>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19623);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19625);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19627);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19629);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19631);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19633);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19635);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19637);
show_backtrace(1);
}
var33 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var34 = NULL;
var35 = NULL;
var36 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var33->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var33, var_pdocnode2, var34, var_pablenode4, var35, var_pvisibilitynode6, var_tkwvarnode7, var36, var_tidnode9, var_ptypenode10, var_pannotationsnode11, var_pexprnode12) /* init_aattrpropdef on <var33:AAttrPropdef>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19672);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19674);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19676);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19678);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19680);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19682);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19684);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19686);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19688);
show_backtrace(1);
}
var37 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var38 = NULL;
var39 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var37->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var37, var_pdocnode2, var38, var_pablenode4, var_tkwredefnode5, var_pvisibilitynode6, var_tkwvarnode7, var39, var_tidnode9, var_ptypenode10, var_pannotationsnode11, var_pexprnode12) /* init_aattrpropdef on <var37:AAttrPropdef>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19718);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19720);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19722);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19724);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19726);
show_backtrace(1);
}
var20 = NEW_parser_nodes__AConcreteInitPropdef(&type_parser_nodes__AConcreteInitPropdef);
var21 = NULL;
var22 = NULL;
var23 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*))(var20->class->vft[COLOR_parser_prod__AConcreteInitPropdef__init_aconcreteinitpropdef]))(var20, var_pdocnode2, var21, var_pvisibilitynode4, var_tkwinitnode5, var22, var_psignaturenode7, var23, var_pexprnode9) /* init_aconcreteinitpropdef on <var20:AConcreteInitPropdef>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19754);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19756);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19758);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19760);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19762);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19764);
show_backtrace(1);
}
var24 = NEW_parser_nodes__AConcreteInitPropdef(&type_parser_nodes__AConcreteInitPropdef);
var25 = NULL;
var26 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*))(var24->class->vft[COLOR_parser_prod__AConcreteInitPropdef__init_aconcreteinitpropdef]))(var24, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwinitnode5, var25, var_psignaturenode7, var26, var_pexprnode9) /* init_aconcreteinitpropdef on <var24:AConcreteInitPropdef>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19792);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19794);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19796);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19798);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19800);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19802);
show_backtrace(1);
}
var24 = NEW_parser_nodes__AConcreteInitPropdef(&type_parser_nodes__AConcreteInitPropdef);
var25 = NULL;
var26 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*))(var24->class->vft[COLOR_parser_prod__AConcreteInitPropdef__init_aconcreteinitpropdef]))(var24, var_pdocnode2, var25, var_pvisibilitynode4, var_tkwinitnode5, var_pmethidnode6, var_psignaturenode7, var26, var_pexprnode9) /* init_aconcreteinitpropdef on <var24:AConcreteInitPropdef>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19831);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19833);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19835);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19837);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19839);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19841);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19843);
show_backtrace(1);
}
var28 = NEW_parser_nodes__AConcreteInitPropdef(&type_parser_nodes__AConcreteInitPropdef);
var29 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*))(var28->class->vft[COLOR_parser_prod__AConcreteInitPropdef__init_aconcreteinitpropdef]))(var28, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwinitnode5, var_pmethidnode6, var_psignaturenode7, var29, var_pexprnode9) /* init_aconcreteinitpropdef on <var28:AConcreteInitPropdef>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19871);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19873);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19875);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19877);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19879);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19881);
show_backtrace(1);
}
var24 = NEW_parser_nodes__AConcreteInitPropdef(&type_parser_nodes__AConcreteInitPropdef);
var25 = NULL;
var26 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*))(var24->class->vft[COLOR_parser_prod__AConcreteInitPropdef__init_aconcreteinitpropdef]))(var24, var_pdocnode2, var25, var_pvisibilitynode4, var_tkwinitnode5, var26, var_psignaturenode7, var_pannotationsnode8, var_pexprnode9) /* init_aconcreteinitpropdef on <var24:AConcreteInitPropdef>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19910);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19912);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19914);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19916);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19918);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19920);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19922);
show_backtrace(1);
}
var28 = NEW_parser_nodes__AConcreteInitPropdef(&type_parser_nodes__AConcreteInitPropdef);
var29 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*))(var28->class->vft[COLOR_parser_prod__AConcreteInitPropdef__init_aconcreteinitpropdef]))(var28, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwinitnode5, var29, var_psignaturenode7, var_pannotationsnode8, var_pexprnode9) /* init_aconcreteinitpropdef on <var28:AConcreteInitPropdef>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19951);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19953);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19955);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19957);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19959);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19961);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19963);
show_backtrace(1);
}
var28 = NEW_parser_nodes__AConcreteInitPropdef(&type_parser_nodes__AConcreteInitPropdef);
var29 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*))(var28->class->vft[COLOR_parser_prod__AConcreteInitPropdef__init_aconcreteinitpropdef]))(var28, var_pdocnode2, var29, var_pvisibilitynode4, var_tkwinitnode5, var_pmethidnode6, var_psignaturenode7, var_pannotationsnode8, var_pexprnode9) /* init_aconcreteinitpropdef on <var28:AConcreteInitPropdef>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19993);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19995);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19997);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 19999);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20001);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20003);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20005);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20007);
show_backtrace(1);
}
var32 = NEW_parser_nodes__AConcreteInitPropdef(&type_parser_nodes__AConcreteInitPropdef);
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*))(var32->class->vft[COLOR_parser_prod__AConcreteInitPropdef__init_aconcreteinitpropdef]))(var32, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwinitnode5, var_pmethidnode6, var_psignaturenode7, var_pannotationsnode8, var_pexprnode9) /* init_aconcreteinitpropdef on <var32:AConcreteInitPropdef>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20035);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20037);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20039);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20041);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20043);
show_backtrace(1);
}
var21 = NEW_parser_nodes__AConcreteInitPropdef(&type_parser_nodes__AConcreteInitPropdef);
var22 = NULL;
var23 = NULL;
var24 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*))(var21->class->vft[COLOR_parser_prod__AConcreteInitPropdef__init_aconcreteinitpropdef]))(var21, var_pdocnode2, var22, var_pvisibilitynode4, var_tkwinitnode5, var23, var_psignaturenode7, var24, var_pexprnode9) /* init_aconcreteinitpropdef on <var21:AConcreteInitPropdef>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20072);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20074);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20076);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20078);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20080);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20082);
show_backtrace(1);
}
var25 = NEW_parser_nodes__AConcreteInitPropdef(&type_parser_nodes__AConcreteInitPropdef);
var26 = NULL;
var27 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*))(var25->class->vft[COLOR_parser_prod__AConcreteInitPropdef__init_aconcreteinitpropdef]))(var25, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwinitnode5, var26, var_psignaturenode7, var27, var_pexprnode9) /* init_aconcreteinitpropdef on <var25:AConcreteInitPropdef>*/;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20111);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20113);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20115);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20117);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20119);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20121);
show_backtrace(1);
}
var25 = NEW_parser_nodes__AConcreteInitPropdef(&type_parser_nodes__AConcreteInitPropdef);
var26 = NULL;
var27 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*))(var25->class->vft[COLOR_parser_prod__AConcreteInitPropdef__init_aconcreteinitpropdef]))(var25, var_pdocnode2, var26, var_pvisibilitynode4, var_tkwinitnode5, var_pmethidnode6, var_psignaturenode7, var27, var_pexprnode9) /* init_aconcreteinitpropdef on <var25:AConcreteInitPropdef>*/;
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
/* method parser#ReduceAction456#action for (self: ReduceAction456, Parser) */
void parser__ReduceAction456__action(val* self, val* p0) {
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
val* var_pexprnode9 /* var pexprnode9: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : AConcreteInitPropdef */;
val* var30 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AConcreteInitPropdef */;
long var31 /* : Int */;
long var32 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20151);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20153);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20155);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20157);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20159);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20161);
show_backtrace(1);
}
var_pexprnode9 = var_nodearraylist8;
/* <var_pexprnode9:nullable Object> isa nullable AExpr */
cltype27 = type_nullable_parser_nodes__AExpr.color;
idtype28 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode9 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_pexprnode9->type->table_size) {
var26 = 0;
} else {
var26 = var_pexprnode9->type->type_table[cltype27] == idtype28;
}
}
if (!var26) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20163);
show_backtrace(1);
}
var29 = NEW_parser_nodes__AConcreteInitPropdef(&type_parser_nodes__AConcreteInitPropdef);
var30 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AConcreteInitPropdef__init_aconcreteinitpropdef]))(var29, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwinitnode5, var_pmethidnode6, var_psignaturenode7, var30, var_pexprnode9) /* init_aconcreteinitpropdef on <var29:AConcreteInitPropdef>*/;
var_ppropdefnode1 = var29;
var_node_list = var_ppropdefnode1;
var31 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction456> */
var32 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var31) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var32, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction456#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction456__action(val* self, val* p0) {
parser__ReduceAction456__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction457#action for (self: ReduceAction457, Parser) */
void parser__ReduceAction457__action(val* self, val* p0) {
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
val* var_psignaturenode7 /* var psignaturenode7: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pannotationsnode8 /* var pannotationsnode8: nullable Object */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20192);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20194);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20196);
show_backtrace(1);
}
var_psignaturenode7 = var_nodearraylist4;
/* <var_psignaturenode7:nullable Object> isa nullable ASignature */
cltype17 = type_nullable_parser_nodes__ASignature.color;
idtype18 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode7 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_psignaturenode7->type->table_size) {
var16 = 0;
} else {
var16 = var_psignaturenode7->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20198);
show_backtrace(1);
}
var_pannotationsnode8 = var_nodearraylist5;
/* <var_pannotationsnode8:nullable Object> isa nullable AAnnotations */
cltype20 = type_nullable_parser_nodes__AAnnotations.color;
idtype21 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode8 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_pannotationsnode8->type->table_size) {
var19 = 0;
} else {
var19 = var_pannotationsnode8->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20200);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20202);
show_backtrace(1);
}
var25 = NEW_parser_nodes__AConcreteInitPropdef(&type_parser_nodes__AConcreteInitPropdef);
var26 = NULL;
var27 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*))(var25->class->vft[COLOR_parser_prod__AConcreteInitPropdef__init_aconcreteinitpropdef]))(var25, var_pdocnode2, var26, var_pvisibilitynode4, var_tkwinitnode5, var27, var_psignaturenode7, var_pannotationsnode8, var_pexprnode9) /* init_aconcreteinitpropdef on <var25:AConcreteInitPropdef>*/;
var_ppropdefnode1 = var25;
var_node_list = var_ppropdefnode1;
var28 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction457> */
var29 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var28) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var29, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction457#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction457__action(val* self, val* p0) {
parser__ReduceAction457__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction458#action for (self: ReduceAction458, Parser) */
void parser__ReduceAction458__action(val* self, val* p0) {
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
val* var_psignaturenode7 /* var psignaturenode7: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_pannotationsnode8 /* var pannotationsnode8: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_pexprnode9 /* var pexprnode9: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : AConcreteInitPropdef */;
val* var30 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AConcreteInitPropdef */;
long var31 /* : Int */;
long var32 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20232);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20234);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20236);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20238);
show_backtrace(1);
}
var_psignaturenode7 = var_nodearraylist5;
/* <var_psignaturenode7:nullable Object> isa nullable ASignature */
cltype21 = type_nullable_parser_nodes__ASignature.color;
idtype22 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode7 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_psignaturenode7->type->table_size) {
var20 = 0;
} else {
var20 = var_psignaturenode7->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20240);
show_backtrace(1);
}
var_pannotationsnode8 = var_nodearraylist6;
/* <var_pannotationsnode8:nullable Object> isa nullable AAnnotations */
cltype24 = type_nullable_parser_nodes__AAnnotations.color;
idtype25 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode8 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_pannotationsnode8->type->table_size) {
var23 = 0;
} else {
var23 = var_pannotationsnode8->type->type_table[cltype24] == idtype25;
}
}
if (!var23) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20242);
show_backtrace(1);
}
var_pexprnode9 = var_nodearraylist8;
/* <var_pexprnode9:nullable Object> isa nullable AExpr */
cltype27 = type_nullable_parser_nodes__AExpr.color;
idtype28 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode9 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_pexprnode9->type->table_size) {
var26 = 0;
} else {
var26 = var_pexprnode9->type->type_table[cltype27] == idtype28;
}
}
if (!var26) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20244);
show_backtrace(1);
}
var29 = NEW_parser_nodes__AConcreteInitPropdef(&type_parser_nodes__AConcreteInitPropdef);
var30 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AConcreteInitPropdef__init_aconcreteinitpropdef]))(var29, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwinitnode5, var30, var_psignaturenode7, var_pannotationsnode8, var_pexprnode9) /* init_aconcreteinitpropdef on <var29:AConcreteInitPropdef>*/;
var_ppropdefnode1 = var29;
var_node_list = var_ppropdefnode1;
var31 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction458> */
var32 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var31) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var32, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction458#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction458__action(val* self, val* p0) {
parser__ReduceAction458__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction459#action for (self: ReduceAction459, Parser) */
void parser__ReduceAction459__action(val* self, val* p0) {
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
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_tkwinitnode5 /* var tkwinitnode5: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_pmethidnode6 /* var pmethidnode6: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_psignaturenode7 /* var psignaturenode7: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_pannotationsnode8 /* var pannotationsnode8: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_pexprnode9 /* var pexprnode9: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : AConcreteInitPropdef */;
val* var30 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AConcreteInitPropdef */;
long var31 /* : Int */;
long var32 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20274);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype12 = type_nullable_parser_nodes__AVisibility.color;
idtype13 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_pvisibilitynode4->type->table_size) {
var11 = 0;
} else {
var11 = var_pvisibilitynode4->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20276);
show_backtrace(1);
}
var_tkwinitnode5 = var_nodearraylist3;
/* <var_tkwinitnode5:nullable Object> isa nullable TKwinit */
cltype15 = type_nullable_parser_nodes__TKwinit.color;
idtype16 = type_nullable_parser_nodes__TKwinit.id;
if(var_tkwinitnode5 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_tkwinitnode5->type->table_size) {
var14 = 0;
} else {
var14 = var_tkwinitnode5->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20278);
show_backtrace(1);
}
var_pmethidnode6 = var_nodearraylist4;
/* <var_pmethidnode6:nullable Object> isa nullable AMethid */
cltype18 = type_nullable_parser_nodes__AMethid.color;
idtype19 = type_nullable_parser_nodes__AMethid.id;
if(var_pmethidnode6 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_pmethidnode6->type->table_size) {
var17 = 0;
} else {
var17 = var_pmethidnode6->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20280);
show_backtrace(1);
}
var_psignaturenode7 = var_nodearraylist5;
/* <var_psignaturenode7:nullable Object> isa nullable ASignature */
cltype21 = type_nullable_parser_nodes__ASignature.color;
idtype22 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode7 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_psignaturenode7->type->table_size) {
var20 = 0;
} else {
var20 = var_psignaturenode7->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20282);
show_backtrace(1);
}
var_pannotationsnode8 = var_nodearraylist6;
/* <var_pannotationsnode8:nullable Object> isa nullable AAnnotations */
cltype24 = type_nullable_parser_nodes__AAnnotations.color;
idtype25 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode8 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_pannotationsnode8->type->table_size) {
var23 = 0;
} else {
var23 = var_pannotationsnode8->type->type_table[cltype24] == idtype25;
}
}
if (!var23) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20284);
show_backtrace(1);
}
var_pexprnode9 = var_nodearraylist8;
/* <var_pexprnode9:nullable Object> isa nullable AExpr */
cltype27 = type_nullable_parser_nodes__AExpr.color;
idtype28 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode9 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_pexprnode9->type->table_size) {
var26 = 0;
} else {
var26 = var_pexprnode9->type->type_table[cltype27] == idtype28;
}
}
if (!var26) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20286);
show_backtrace(1);
}
var29 = NEW_parser_nodes__AConcreteInitPropdef(&type_parser_nodes__AConcreteInitPropdef);
var30 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AConcreteInitPropdef__init_aconcreteinitpropdef]))(var29, var_pdocnode2, var30, var_pvisibilitynode4, var_tkwinitnode5, var_pmethidnode6, var_psignaturenode7, var_pannotationsnode8, var_pexprnode9) /* init_aconcreteinitpropdef on <var29:AConcreteInitPropdef>*/;
var_ppropdefnode1 = var29;
var_node_list = var_ppropdefnode1;
var31 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction459> */
var32 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var31) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var32, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction459#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction459__action(val* self, val* p0) {
parser__ReduceAction459__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction460#action for (self: ReduceAction460, Parser) */
void parser__ReduceAction460__action(val* self, val* p0) {
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
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_tkwinitnode5 /* var tkwinitnode5: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_pmethidnode6 /* var pmethidnode6: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_psignaturenode7 /* var psignaturenode7: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var_pannotationsnode8 /* var pannotationsnode8: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var_pexprnode9 /* var pexprnode9: nullable Object */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
val* var33 /* : AConcreteInitPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AConcreteInitPropdef */;
long var34 /* : Int */;
long var35 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20317);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype13 = type_nullable_parser_nodes__TKwredef.color;
idtype14 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_tkwredefnode3->type->table_size) {
var12 = 0;
} else {
var12 = var_tkwredefnode3->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20319);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype16 = type_nullable_parser_nodes__AVisibility.color;
idtype17 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_pvisibilitynode4->type->table_size) {
var15 = 0;
} else {
var15 = var_pvisibilitynode4->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20321);
show_backtrace(1);
}
var_tkwinitnode5 = var_nodearraylist4;
/* <var_tkwinitnode5:nullable Object> isa nullable TKwinit */
cltype19 = type_nullable_parser_nodes__TKwinit.color;
idtype20 = type_nullable_parser_nodes__TKwinit.id;
if(var_tkwinitnode5 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_tkwinitnode5->type->table_size) {
var18 = 0;
} else {
var18 = var_tkwinitnode5->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20323);
show_backtrace(1);
}
var_pmethidnode6 = var_nodearraylist5;
/* <var_pmethidnode6:nullable Object> isa nullable AMethid */
cltype22 = type_nullable_parser_nodes__AMethid.color;
idtype23 = type_nullable_parser_nodes__AMethid.id;
if(var_pmethidnode6 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_pmethidnode6->type->table_size) {
var21 = 0;
} else {
var21 = var_pmethidnode6->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20325);
show_backtrace(1);
}
var_psignaturenode7 = var_nodearraylist6;
/* <var_psignaturenode7:nullable Object> isa nullable ASignature */
cltype25 = type_nullable_parser_nodes__ASignature.color;
idtype26 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode7 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_psignaturenode7->type->table_size) {
var24 = 0;
} else {
var24 = var_psignaturenode7->type->type_table[cltype25] == idtype26;
}
}
if (!var24) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20327);
show_backtrace(1);
}
var_pannotationsnode8 = var_nodearraylist7;
/* <var_pannotationsnode8:nullable Object> isa nullable AAnnotations */
cltype28 = type_nullable_parser_nodes__AAnnotations.color;
idtype29 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode8 == NULL) {
var27 = 1;
} else {
if(cltype28 >= var_pannotationsnode8->type->table_size) {
var27 = 0;
} else {
var27 = var_pannotationsnode8->type->type_table[cltype28] == idtype29;
}
}
if (!var27) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20329);
show_backtrace(1);
}
var_pexprnode9 = var_nodearraylist9;
/* <var_pexprnode9:nullable Object> isa nullable AExpr */
cltype31 = type_nullable_parser_nodes__AExpr.color;
idtype32 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode9 == NULL) {
var30 = 1;
} else {
if(cltype31 >= var_pexprnode9->type->table_size) {
var30 = 0;
} else {
var30 = var_pexprnode9->type->type_table[cltype31] == idtype32;
}
}
if (!var30) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20331);
show_backtrace(1);
}
var33 = NEW_parser_nodes__AConcreteInitPropdef(&type_parser_nodes__AConcreteInitPropdef);
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*))(var33->class->vft[COLOR_parser_prod__AConcreteInitPropdef__init_aconcreteinitpropdef]))(var33, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwinitnode5, var_pmethidnode6, var_psignaturenode7, var_pannotationsnode8, var_pexprnode9) /* init_aconcreteinitpropdef on <var33:AConcreteInitPropdef>*/;
var_ppropdefnode1 = var33;
var_node_list = var_ppropdefnode1;
var34 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction460> */
var35 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var34) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var35, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction460#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction460__action(val* self, val* p0) {
parser__ReduceAction460__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction461#action for (self: ReduceAction461, Parser) */
void parser__ReduceAction461__action(val* self, val* p0) {
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
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_tkwtypenode5 /* var tkwtypenode5: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_ptypenode7 /* var ptypenode7: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : ATypePropdef */;
val* var20 /* : null */;
val* var21 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable ATypePropdef */;
long var22 /* : Int */;
long var23 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20357);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype8 = type_nullable_parser_nodes__AVisibility.color;
idtype9 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var7 = 1;
} else {
if(cltype8 >= var_pvisibilitynode4->type->table_size) {
var7 = 0;
} else {
var7 = var_pvisibilitynode4->type->type_table[cltype8] == idtype9;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20359);
show_backtrace(1);
}
var_tkwtypenode5 = var_nodearraylist3;
/* <var_tkwtypenode5:nullable Object> isa nullable TKwtype */
cltype11 = type_nullable_parser_nodes__TKwtype.color;
idtype12 = type_nullable_parser_nodes__TKwtype.id;
if(var_tkwtypenode5 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_tkwtypenode5->type->table_size) {
var10 = 0;
} else {
var10 = var_tkwtypenode5->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20361);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist4;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype14 = type_nullable_parser_nodes__TClassid.color;
idtype15 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_tclassidnode6->type->table_size) {
var13 = 0;
} else {
var13 = var_tclassidnode6->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20363);
show_backtrace(1);
}
var_ptypenode7 = var_nodearraylist5;
/* <var_ptypenode7:nullable Object> isa nullable AType */
cltype17 = type_nullable_parser_nodes__AType.color;
idtype18 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode7 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_ptypenode7->type->table_size) {
var16 = 0;
} else {
var16 = var_ptypenode7->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20365);
show_backtrace(1);
}
var19 = NEW_parser_nodes__ATypePropdef(&type_parser_nodes__ATypePropdef);
var20 = NULL;
var21 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*))(var19->class->vft[COLOR_parser_prod__ATypePropdef__init_atypepropdef]))(var19, var_pdocnode2, var20, var_pvisibilitynode4, var_tkwtypenode5, var_tclassidnode6, var_ptypenode7, var21) /* init_atypepropdef on <var19:ATypePropdef>*/;
var_ppropdefnode1 = var19;
var_node_list = var_ppropdefnode1;
var22 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction461> */
var23 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var22) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var23, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction461#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction461__action(val* self, val* p0) {
parser__ReduceAction461__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction462#action for (self: ReduceAction462, Parser) */
void parser__ReduceAction462__action(val* self, val* p0) {
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
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_tkwtypenode5 /* var tkwtypenode5: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_ptypenode7 /* var ptypenode7: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var23 /* : ATypePropdef */;
val* var24 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable ATypePropdef */;
long var25 /* : Int */;
long var26 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20391);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype9 = type_nullable_parser_nodes__TKwredef.color;
idtype10 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_tkwredefnode3->type->table_size) {
var8 = 0;
} else {
var8 = var_tkwredefnode3->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20393);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype12 = type_nullable_parser_nodes__AVisibility.color;
idtype13 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_pvisibilitynode4->type->table_size) {
var11 = 0;
} else {
var11 = var_pvisibilitynode4->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20395);
show_backtrace(1);
}
var_tkwtypenode5 = var_nodearraylist4;
/* <var_tkwtypenode5:nullable Object> isa nullable TKwtype */
cltype15 = type_nullable_parser_nodes__TKwtype.color;
idtype16 = type_nullable_parser_nodes__TKwtype.id;
if(var_tkwtypenode5 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_tkwtypenode5->type->table_size) {
var14 = 0;
} else {
var14 = var_tkwtypenode5->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20397);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist5;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype18 = type_nullable_parser_nodes__TClassid.color;
idtype19 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tclassidnode6->type->table_size) {
var17 = 0;
} else {
var17 = var_tclassidnode6->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20399);
show_backtrace(1);
}
var_ptypenode7 = var_nodearraylist6;
/* <var_ptypenode7:nullable Object> isa nullable AType */
cltype21 = type_nullable_parser_nodes__AType.color;
idtype22 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode7 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_ptypenode7->type->table_size) {
var20 = 0;
} else {
var20 = var_ptypenode7->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20401);
show_backtrace(1);
}
var23 = NEW_parser_nodes__ATypePropdef(&type_parser_nodes__ATypePropdef);
var24 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*))(var23->class->vft[COLOR_parser_prod__ATypePropdef__init_atypepropdef]))(var23, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwtypenode5, var_tclassidnode6, var_ptypenode7, var24) /* init_atypepropdef on <var23:ATypePropdef>*/;
var_ppropdefnode1 = var23;
var_node_list = var_ppropdefnode1;
var25 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction462> */
var26 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var25) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var26, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction462#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction462__action(val* self, val* p0) {
parser__ReduceAction462__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction463#action for (self: ReduceAction463, Parser) */
void parser__ReduceAction463__action(val* self, val* p0) {
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
val* var_tkwtypenode5 /* var tkwtypenode5: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_ptypenode7 /* var ptypenode7: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pannotationsnode8 /* var pannotationsnode8: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var23 /* : ATypePropdef */;
val* var24 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable ATypePropdef */;
long var25 /* : Int */;
long var26 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20427);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20429);
show_backtrace(1);
}
var_tkwtypenode5 = var_nodearraylist3;
/* <var_tkwtypenode5:nullable Object> isa nullable TKwtype */
cltype12 = type_nullable_parser_nodes__TKwtype.color;
idtype13 = type_nullable_parser_nodes__TKwtype.id;
if(var_tkwtypenode5 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_tkwtypenode5->type->table_size) {
var11 = 0;
} else {
var11 = var_tkwtypenode5->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20431);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist4;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype15 = type_nullable_parser_nodes__TClassid.color;
idtype16 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_tclassidnode6->type->table_size) {
var14 = 0;
} else {
var14 = var_tclassidnode6->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20433);
show_backtrace(1);
}
var_ptypenode7 = var_nodearraylist5;
/* <var_ptypenode7:nullable Object> isa nullable AType */
cltype18 = type_nullable_parser_nodes__AType.color;
idtype19 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode7 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_ptypenode7->type->table_size) {
var17 = 0;
} else {
var17 = var_ptypenode7->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20435);
show_backtrace(1);
}
var_pannotationsnode8 = var_nodearraylist6;
/* <var_pannotationsnode8:nullable Object> isa nullable AAnnotations */
cltype21 = type_nullable_parser_nodes__AAnnotations.color;
idtype22 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode8 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_pannotationsnode8->type->table_size) {
var20 = 0;
} else {
var20 = var_pannotationsnode8->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20437);
show_backtrace(1);
}
var23 = NEW_parser_nodes__ATypePropdef(&type_parser_nodes__ATypePropdef);
var24 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*))(var23->class->vft[COLOR_parser_prod__ATypePropdef__init_atypepropdef]))(var23, var_pdocnode2, var24, var_pvisibilitynode4, var_tkwtypenode5, var_tclassidnode6, var_ptypenode7, var_pannotationsnode8) /* init_atypepropdef on <var23:ATypePropdef>*/;
var_ppropdefnode1 = var23;
var_node_list = var_ppropdefnode1;
var25 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction463> */
var26 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var25) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var26, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction463#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction463__action(val* self, val* p0) {
parser__ReduceAction463__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction464#action for (self: ReduceAction464, Parser) */
void parser__ReduceAction464__action(val* self, val* p0) {
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
val* var_tkwtypenode5 /* var tkwtypenode5: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_ptypenode7 /* var ptypenode7: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_pannotationsnode8 /* var pannotationsnode8: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var27 /* : ATypePropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable ATypePropdef */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20464);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20466);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20468);
show_backtrace(1);
}
var_tkwtypenode5 = var_nodearraylist4;
/* <var_tkwtypenode5:nullable Object> isa nullable TKwtype */
cltype16 = type_nullable_parser_nodes__TKwtype.color;
idtype17 = type_nullable_parser_nodes__TKwtype.id;
if(var_tkwtypenode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_tkwtypenode5->type->table_size) {
var15 = 0;
} else {
var15 = var_tkwtypenode5->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20470);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist5;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype19 = type_nullable_parser_nodes__TClassid.color;
idtype20 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_tclassidnode6->type->table_size) {
var18 = 0;
} else {
var18 = var_tclassidnode6->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20472);
show_backtrace(1);
}
var_ptypenode7 = var_nodearraylist6;
/* <var_ptypenode7:nullable Object> isa nullable AType */
cltype22 = type_nullable_parser_nodes__AType.color;
idtype23 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode7 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_ptypenode7->type->table_size) {
var21 = 0;
} else {
var21 = var_ptypenode7->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20474);
show_backtrace(1);
}
var_pannotationsnode8 = var_nodearraylist7;
/* <var_pannotationsnode8:nullable Object> isa nullable AAnnotations */
cltype25 = type_nullable_parser_nodes__AAnnotations.color;
idtype26 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode8 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_pannotationsnode8->type->table_size) {
var24 = 0;
} else {
var24 = var_pannotationsnode8->type->type_table[cltype25] == idtype26;
}
}
if (!var24) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20476);
show_backtrace(1);
}
var27 = NEW_parser_nodes__ATypePropdef(&type_parser_nodes__ATypePropdef);
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*))(var27->class->vft[COLOR_parser_prod__ATypePropdef__init_atypepropdef]))(var27, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwtypenode5, var_tclassidnode6, var_ptypenode7, var_pannotationsnode8) /* init_atypepropdef on <var27:ATypePropdef>*/;
var_ppropdefnode1 = var27;
var_node_list = var_ppropdefnode1;
var28 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction464> */
var29 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var28) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var29, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction464#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction464__action(val* self, val* p0) {
parser__ReduceAction464__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction465#action for (self: ReduceAction465, Parser) */
void parser__ReduceAction465__action(val* self, val* p0) {
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
val* var_tkwnewnode5 /* var tkwnewnode5: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_psignaturenode7 /* var psignaturenode7: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : AExternInitPropdef */;
val* var18 /* : null */;
val* var19 /* : null */;
val* var20 /* : null */;
val* var21 /* : null */;
val* var22 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternInitPropdef */;
long var23 /* : Int */;
long var24 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20502);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20504);
show_backtrace(1);
}
var_tkwnewnode5 = var_nodearraylist3;
/* <var_tkwnewnode5:nullable Object> isa nullable TKwnew */
cltype12 = type_nullable_parser_nodes__TKwnew.color;
idtype13 = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode5 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_tkwnewnode5->type->table_size) {
var11 = 0;
} else {
var11 = var_tkwnewnode5->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20506);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20508);
show_backtrace(1);
}
var17 = NEW_parser_nodes__AExternInitPropdef(&type_parser_nodes__AExternInitPropdef);
var18 = NULL;
var19 = NULL;
var20 = NULL;
var21 = NULL;
var22 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var17->class->vft[COLOR_parser_prod__AExternInitPropdef__init_aexterninitpropdef]))(var17, var_pdocnode2, var18, var_pvisibilitynode4, var_tkwnewnode5, var19, var_psignaturenode7, var20, var21, var22) /* init_aexterninitpropdef on <var17:AExternInitPropdef>*/;
var_ppropdefnode1 = var17;
var_node_list = var_ppropdefnode1;
var23 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction465> */
var24 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var23) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var24, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction465#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction465__action(val* self, val* p0) {
parser__ReduceAction465__action(self, p0);
RET_LABEL:;
}
