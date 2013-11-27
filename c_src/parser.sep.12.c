#include "parser.sep.0.h"
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20165);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20167);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20169);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20171);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20173);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20175);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20177);
exit(1);
}
var29 = NEW_parser_nodes__AConcreteInitPropdef(&type_parser_nodes__AConcreteInitPropdef);
var30 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AConcreteInitPropdef__init_aconcreteinitpropdef]))(var29, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwinitnode5, var_pmethidnode6, var_psignaturenode7, var30, var_pexprnode9) /* init_aconcreteinitpropdef on <var29:AConcreteInitPropdef>*/;
CHECK_NEW_parser_nodes__AConcreteInitPropdef(var29);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20206);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20208);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20210);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20212);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20214);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20216);
exit(1);
}
var25 = NEW_parser_nodes__AConcreteInitPropdef(&type_parser_nodes__AConcreteInitPropdef);
var26 = NULL;
var27 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*))(var25->class->vft[COLOR_parser_prod__AConcreteInitPropdef__init_aconcreteinitpropdef]))(var25, var_pdocnode2, var26, var_pvisibilitynode4, var_tkwinitnode5, var27, var_psignaturenode7, var_pannotationsnode8, var_pexprnode9) /* init_aconcreteinitpropdef on <var25:AConcreteInitPropdef>*/;
CHECK_NEW_parser_nodes__AConcreteInitPropdef(var25);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20246);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20248);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20250);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20252);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20254);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20256);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20258);
exit(1);
}
var29 = NEW_parser_nodes__AConcreteInitPropdef(&type_parser_nodes__AConcreteInitPropdef);
var30 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AConcreteInitPropdef__init_aconcreteinitpropdef]))(var29, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwinitnode5, var30, var_psignaturenode7, var_pannotationsnode8, var_pexprnode9) /* init_aconcreteinitpropdef on <var29:AConcreteInitPropdef>*/;
CHECK_NEW_parser_nodes__AConcreteInitPropdef(var29);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20288);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20290);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20292);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20294);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20296);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20298);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20300);
exit(1);
}
var29 = NEW_parser_nodes__AConcreteInitPropdef(&type_parser_nodes__AConcreteInitPropdef);
var30 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AConcreteInitPropdef__init_aconcreteinitpropdef]))(var29, var_pdocnode2, var30, var_pvisibilitynode4, var_tkwinitnode5, var_pmethidnode6, var_psignaturenode7, var_pannotationsnode8, var_pexprnode9) /* init_aconcreteinitpropdef on <var29:AConcreteInitPropdef>*/;
CHECK_NEW_parser_nodes__AConcreteInitPropdef(var29);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20331);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20333);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20335);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20337);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20339);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20341);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20343);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20345);
exit(1);
}
var33 = NEW_parser_nodes__AConcreteInitPropdef(&type_parser_nodes__AConcreteInitPropdef);
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*))(var33->class->vft[COLOR_parser_prod__AConcreteInitPropdef__init_aconcreteinitpropdef]))(var33, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwinitnode5, var_pmethidnode6, var_psignaturenode7, var_pannotationsnode8, var_pexprnode9) /* init_aconcreteinitpropdef on <var33:AConcreteInitPropdef>*/;
CHECK_NEW_parser_nodes__AConcreteInitPropdef(var33);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20371);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20373);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20375);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20377);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20379);
exit(1);
}
var19 = NEW_parser_nodes__ATypePropdef(&type_parser_nodes__ATypePropdef);
var20 = NULL;
var21 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*))(var19->class->vft[COLOR_parser_prod__ATypePropdef__init_atypepropdef]))(var19, var_pdocnode2, var20, var_pvisibilitynode4, var_tkwtypenode5, var_tclassidnode6, var_ptypenode7, var21) /* init_atypepropdef on <var19:ATypePropdef>*/;
CHECK_NEW_parser_nodes__ATypePropdef(var19);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20405);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20407);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20409);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20411);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20413);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20415);
exit(1);
}
var23 = NEW_parser_nodes__ATypePropdef(&type_parser_nodes__ATypePropdef);
var24 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*))(var23->class->vft[COLOR_parser_prod__ATypePropdef__init_atypepropdef]))(var23, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwtypenode5, var_tclassidnode6, var_ptypenode7, var24) /* init_atypepropdef on <var23:ATypePropdef>*/;
CHECK_NEW_parser_nodes__ATypePropdef(var23);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20441);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20443);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20445);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20447);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20449);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20451);
exit(1);
}
var23 = NEW_parser_nodes__ATypePropdef(&type_parser_nodes__ATypePropdef);
var24 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*))(var23->class->vft[COLOR_parser_prod__ATypePropdef__init_atypepropdef]))(var23, var_pdocnode2, var24, var_pvisibilitynode4, var_tkwtypenode5, var_tclassidnode6, var_ptypenode7, var_pannotationsnode8) /* init_atypepropdef on <var23:ATypePropdef>*/;
CHECK_NEW_parser_nodes__ATypePropdef(var23);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20478);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20480);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20482);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20484);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20486);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20488);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20490);
exit(1);
}
var27 = NEW_parser_nodes__ATypePropdef(&type_parser_nodes__ATypePropdef);
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*))(var27->class->vft[COLOR_parser_prod__ATypePropdef__init_atypepropdef]))(var27, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwtypenode5, var_tclassidnode6, var_ptypenode7, var_pannotationsnode8) /* init_atypepropdef on <var27:ATypePropdef>*/;
CHECK_NEW_parser_nodes__ATypePropdef(var27);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20516);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20518);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20520);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20522);
exit(1);
}
var17 = NEW_parser_nodes__AExternInitPropdef(&type_parser_nodes__AExternInitPropdef);
var18 = NULL;
var19 = NULL;
var20 = NULL;
var21 = NULL;
var22 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var17->class->vft[COLOR_parser_prod__AExternInitPropdef__init_aexterninitpropdef]))(var17, var_pdocnode2, var18, var_pvisibilitynode4, var_tkwnewnode5, var19, var_psignaturenode7, var20, var21, var22) /* init_aexterninitpropdef on <var17:AExternInitPropdef>*/;
CHECK_NEW_parser_nodes__AExternInitPropdef(var17);
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
/* method parser#ReduceAction466#action for (self: ReduceAction466, Parser) */
void parser__ReduceAction466__action(val* self, val* p0) {
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
val* var_tkwnewnode5 /* var tkwnewnode5: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_psignaturenode7 /* var psignaturenode7: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : AExternInitPropdef */;
val* var22 /* : null */;
val* var23 /* : null */;
val* var24 /* : null */;
val* var25 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternInitPropdef */;
long var26 /* : Int */;
long var27 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20551);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20553);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20555);
exit(1);
}
var_tkwnewnode5 = var_nodearraylist4;
/* <var_tkwnewnode5:nullable Object> isa nullable TKwnew */
cltype16 = type_nullable_parser_nodes__TKwnew.color;
idtype17 = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_tkwnewnode5->type->table_size) {
var15 = 0;
} else {
var15 = var_tkwnewnode5->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20557);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20559);
exit(1);
}
var21 = NEW_parser_nodes__AExternInitPropdef(&type_parser_nodes__AExternInitPropdef);
var22 = NULL;
var23 = NULL;
var24 = NULL;
var25 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var21->class->vft[COLOR_parser_prod__AExternInitPropdef__init_aexterninitpropdef]))(var21, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwnewnode5, var22, var_psignaturenode7, var23, var24, var25) /* init_aexterninitpropdef on <var21:AExternInitPropdef>*/;
CHECK_NEW_parser_nodes__AExternInitPropdef(var21);
var_ppropdefnode1 = var21;
var_node_list = var_ppropdefnode1;
var26 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction466> */
var27 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var26) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var27, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction466#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction466__action(val* self, val* p0) {
parser__ReduceAction466__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction467#action for (self: ReduceAction467, Parser) */
void parser__ReduceAction467__action(val* self, val* p0) {
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
val* var_tkwnewnode5 /* var tkwnewnode5: nullable Object */;
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
val* var21 /* : AExternInitPropdef */;
val* var22 /* : null */;
val* var23 /* : null */;
val* var24 /* : null */;
val* var25 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternInitPropdef */;
long var26 /* : Int */;
long var27 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20588);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20590);
exit(1);
}
var_tkwnewnode5 = var_nodearraylist3;
/* <var_tkwnewnode5:nullable Object> isa nullable TKwnew */
cltype13 = type_nullable_parser_nodes__TKwnew.color;
idtype14 = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode5 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_tkwnewnode5->type->table_size) {
var12 = 0;
} else {
var12 = var_tkwnewnode5->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20592);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20594);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20596);
exit(1);
}
var21 = NEW_parser_nodes__AExternInitPropdef(&type_parser_nodes__AExternInitPropdef);
var22 = NULL;
var23 = NULL;
var24 = NULL;
var25 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var21->class->vft[COLOR_parser_prod__AExternInitPropdef__init_aexterninitpropdef]))(var21, var_pdocnode2, var22, var_pvisibilitynode4, var_tkwnewnode5, var_pmethidnode6, var_psignaturenode7, var23, var24, var25) /* init_aexterninitpropdef on <var21:AExternInitPropdef>*/;
CHECK_NEW_parser_nodes__AExternInitPropdef(var21);
var_ppropdefnode1 = var21;
var_node_list = var_ppropdefnode1;
var26 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction467> */
var27 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var26) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var27, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction467#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction467__action(val* self, val* p0) {
parser__ReduceAction467__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction468#action for (self: ReduceAction468, Parser) */
void parser__ReduceAction468__action(val* self, val* p0) {
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
val* var_tkwnewnode5 /* var tkwnewnode5: nullable Object */;
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
val* var25 /* : AExternInitPropdef */;
val* var26 /* : null */;
val* var27 /* : null */;
val* var28 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternInitPropdef */;
long var29 /* : Int */;
long var30 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20626);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20628);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20630);
exit(1);
}
var_tkwnewnode5 = var_nodearraylist4;
/* <var_tkwnewnode5:nullable Object> isa nullable TKwnew */
cltype17 = type_nullable_parser_nodes__TKwnew.color;
idtype18 = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode5 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tkwnewnode5->type->table_size) {
var16 = 0;
} else {
var16 = var_tkwnewnode5->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20632);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20634);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20636);
exit(1);
}
var25 = NEW_parser_nodes__AExternInitPropdef(&type_parser_nodes__AExternInitPropdef);
var26 = NULL;
var27 = NULL;
var28 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var25->class->vft[COLOR_parser_prod__AExternInitPropdef__init_aexterninitpropdef]))(var25, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwnewnode5, var_pmethidnode6, var_psignaturenode7, var26, var27, var28) /* init_aexterninitpropdef on <var25:AExternInitPropdef>*/;
CHECK_NEW_parser_nodes__AExternInitPropdef(var25);
var_ppropdefnode1 = var25;
var_node_list = var_ppropdefnode1;
var29 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction468> */
var30 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var29) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var30, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction468#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction468__action(val* self, val* p0) {
parser__ReduceAction468__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction469#action for (self: ReduceAction469, Parser) */
void parser__ReduceAction469__action(val* self, val* p0) {
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
val* var_tkwnewnode5 /* var tkwnewnode5: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_psignaturenode7 /* var psignaturenode7: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_tstringnode8 /* var tstringnode8: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : AExternInitPropdef */;
val* var22 /* : null */;
val* var23 /* : null */;
val* var24 /* : null */;
val* var25 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternInitPropdef */;
long var26 /* : Int */;
long var27 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20665);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20667);
exit(1);
}
var_tkwnewnode5 = var_nodearraylist3;
/* <var_tkwnewnode5:nullable Object> isa nullable TKwnew */
cltype13 = type_nullable_parser_nodes__TKwnew.color;
idtype14 = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode5 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_tkwnewnode5->type->table_size) {
var12 = 0;
} else {
var12 = var_tkwnewnode5->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20669);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20671);
exit(1);
}
var_tstringnode8 = var_nodearraylist7;
/* <var_tstringnode8:nullable Object> isa nullable TString */
cltype19 = type_nullable_parser_nodes__TString.color;
idtype20 = type_nullable_parser_nodes__TString.id;
if(var_tstringnode8 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_tstringnode8->type->table_size) {
var18 = 0;
} else {
var18 = var_tstringnode8->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20673);
exit(1);
}
var21 = NEW_parser_nodes__AExternInitPropdef(&type_parser_nodes__AExternInitPropdef);
var22 = NULL;
var23 = NULL;
var24 = NULL;
var25 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var21->class->vft[COLOR_parser_prod__AExternInitPropdef__init_aexterninitpropdef]))(var21, var_pdocnode2, var22, var_pvisibilitynode4, var_tkwnewnode5, var23, var_psignaturenode7, var_tstringnode8, var24, var25) /* init_aexterninitpropdef on <var21:AExternInitPropdef>*/;
CHECK_NEW_parser_nodes__AExternInitPropdef(var21);
var_ppropdefnode1 = var21;
var_node_list = var_ppropdefnode1;
var26 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction469> */
var27 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var26) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var27, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction469#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction469__action(val* self, val* p0) {
parser__ReduceAction469__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction470#action for (self: ReduceAction470, Parser) */
void parser__ReduceAction470__action(val* self, val* p0) {
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
val* var_tkwnewnode5 /* var tkwnewnode5: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_psignaturenode7 /* var psignaturenode7: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_tstringnode8 /* var tstringnode8: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var25 /* : AExternInitPropdef */;
val* var26 /* : null */;
val* var27 /* : null */;
val* var28 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternInitPropdef */;
long var29 /* : Int */;
long var30 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20703);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20705);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20707);
exit(1);
}
var_tkwnewnode5 = var_nodearraylist4;
/* <var_tkwnewnode5:nullable Object> isa nullable TKwnew */
cltype17 = type_nullable_parser_nodes__TKwnew.color;
idtype18 = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode5 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tkwnewnode5->type->table_size) {
var16 = 0;
} else {
var16 = var_tkwnewnode5->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20709);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20711);
exit(1);
}
var_tstringnode8 = var_nodearraylist8;
/* <var_tstringnode8:nullable Object> isa nullable TString */
cltype23 = type_nullable_parser_nodes__TString.color;
idtype24 = type_nullable_parser_nodes__TString.id;
if(var_tstringnode8 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_tstringnode8->type->table_size) {
var22 = 0;
} else {
var22 = var_tstringnode8->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20713);
exit(1);
}
var25 = NEW_parser_nodes__AExternInitPropdef(&type_parser_nodes__AExternInitPropdef);
var26 = NULL;
var27 = NULL;
var28 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var25->class->vft[COLOR_parser_prod__AExternInitPropdef__init_aexterninitpropdef]))(var25, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwnewnode5, var26, var_psignaturenode7, var_tstringnode8, var27, var28) /* init_aexterninitpropdef on <var25:AExternInitPropdef>*/;
CHECK_NEW_parser_nodes__AExternInitPropdef(var25);
var_ppropdefnode1 = var25;
var_node_list = var_ppropdefnode1;
var29 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction470> */
var30 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var29) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var30, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction470#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction470__action(val* self, val* p0) {
parser__ReduceAction470__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction471#action for (self: ReduceAction471, Parser) */
void parser__ReduceAction471__action(val* self, val* p0) {
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
val* var_tkwnewnode5 /* var tkwnewnode5: nullable Object */;
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
val* var_tstringnode8 /* var tstringnode8: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var25 /* : AExternInitPropdef */;
val* var26 /* : null */;
val* var27 /* : null */;
val* var28 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternInitPropdef */;
long var29 /* : Int */;
long var30 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20743);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20745);
exit(1);
}
var_tkwnewnode5 = var_nodearraylist3;
/* <var_tkwnewnode5:nullable Object> isa nullable TKwnew */
cltype14 = type_nullable_parser_nodes__TKwnew.color;
idtype15 = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode5 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_tkwnewnode5->type->table_size) {
var13 = 0;
} else {
var13 = var_tkwnewnode5->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20747);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20749);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20751);
exit(1);
}
var_tstringnode8 = var_nodearraylist8;
/* <var_tstringnode8:nullable Object> isa nullable TString */
cltype23 = type_nullable_parser_nodes__TString.color;
idtype24 = type_nullable_parser_nodes__TString.id;
if(var_tstringnode8 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_tstringnode8->type->table_size) {
var22 = 0;
} else {
var22 = var_tstringnode8->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20753);
exit(1);
}
var25 = NEW_parser_nodes__AExternInitPropdef(&type_parser_nodes__AExternInitPropdef);
var26 = NULL;
var27 = NULL;
var28 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var25->class->vft[COLOR_parser_prod__AExternInitPropdef__init_aexterninitpropdef]))(var25, var_pdocnode2, var26, var_pvisibilitynode4, var_tkwnewnode5, var_pmethidnode6, var_psignaturenode7, var_tstringnode8, var27, var28) /* init_aexterninitpropdef on <var25:AExternInitPropdef>*/;
CHECK_NEW_parser_nodes__AExternInitPropdef(var25);
var_ppropdefnode1 = var25;
var_node_list = var_ppropdefnode1;
var29 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction471> */
var30 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var29) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var30, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction471#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction471__action(val* self, val* p0) {
parser__ReduceAction471__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction472#action for (self: ReduceAction472, Parser) */
void parser__ReduceAction472__action(val* self, val* p0) {
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
val* var_tkwnewnode5 /* var tkwnewnode5: nullable Object */;
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
val* var_tstringnode8 /* var tstringnode8: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : AExternInitPropdef */;
val* var30 /* : null */;
val* var31 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternInitPropdef */;
long var32 /* : Int */;
long var33 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20784);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20786);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20788);
exit(1);
}
var_tkwnewnode5 = var_nodearraylist4;
/* <var_tkwnewnode5:nullable Object> isa nullable TKwnew */
cltype18 = type_nullable_parser_nodes__TKwnew.color;
idtype19 = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode5 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tkwnewnode5->type->table_size) {
var17 = 0;
} else {
var17 = var_tkwnewnode5->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20790);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20792);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20794);
exit(1);
}
var_tstringnode8 = var_nodearraylist9;
/* <var_tstringnode8:nullable Object> isa nullable TString */
cltype27 = type_nullable_parser_nodes__TString.color;
idtype28 = type_nullable_parser_nodes__TString.id;
if(var_tstringnode8 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_tstringnode8->type->table_size) {
var26 = 0;
} else {
var26 = var_tstringnode8->type->type_table[cltype27] == idtype28;
}
}
if (!var26) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20796);
exit(1);
}
var29 = NEW_parser_nodes__AExternInitPropdef(&type_parser_nodes__AExternInitPropdef);
var30 = NULL;
var31 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AExternInitPropdef__init_aexterninitpropdef]))(var29, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwnewnode5, var_pmethidnode6, var_psignaturenode7, var_tstringnode8, var30, var31) /* init_aexterninitpropdef on <var29:AExternInitPropdef>*/;
CHECK_NEW_parser_nodes__AExternInitPropdef(var29);
var_ppropdefnode1 = var29;
var_node_list = var_ppropdefnode1;
var32 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction472> */
var33 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var32) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var33, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction472#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction472__action(val* self, val* p0) {
parser__ReduceAction472__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction473#action for (self: ReduceAction473, Parser) */
void parser__ReduceAction473__action(val* self, val* p0) {
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
val* var_tkwnewnode5 /* var tkwnewnode5: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_psignaturenode7 /* var psignaturenode7: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pexterncallsnode9 /* var pexterncallsnode9: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : AExternInitPropdef */;
val* var22 /* : null */;
val* var23 /* : null */;
val* var24 /* : null */;
val* var25 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternInitPropdef */;
long var26 /* : Int */;
long var27 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20825);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20827);
exit(1);
}
var_tkwnewnode5 = var_nodearraylist3;
/* <var_tkwnewnode5:nullable Object> isa nullable TKwnew */
cltype13 = type_nullable_parser_nodes__TKwnew.color;
idtype14 = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode5 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_tkwnewnode5->type->table_size) {
var12 = 0;
} else {
var12 = var_tkwnewnode5->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20829);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20831);
exit(1);
}
var_pexterncallsnode9 = var_nodearraylist7;
/* <var_pexterncallsnode9:nullable Object> isa nullable AExternCalls */
cltype19 = type_nullable_parser_nodes__AExternCalls.color;
idtype20 = type_nullable_parser_nodes__AExternCalls.id;
if(var_pexterncallsnode9 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pexterncallsnode9->type->table_size) {
var18 = 0;
} else {
var18 = var_pexterncallsnode9->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20833);
exit(1);
}
var21 = NEW_parser_nodes__AExternInitPropdef(&type_parser_nodes__AExternInitPropdef);
var22 = NULL;
var23 = NULL;
var24 = NULL;
var25 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var21->class->vft[COLOR_parser_prod__AExternInitPropdef__init_aexterninitpropdef]))(var21, var_pdocnode2, var22, var_pvisibilitynode4, var_tkwnewnode5, var23, var_psignaturenode7, var24, var_pexterncallsnode9, var25) /* init_aexterninitpropdef on <var21:AExternInitPropdef>*/;
CHECK_NEW_parser_nodes__AExternInitPropdef(var21);
var_ppropdefnode1 = var21;
var_node_list = var_ppropdefnode1;
var26 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction473> */
var27 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var26) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var27, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction473#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction473__action(val* self, val* p0) {
parser__ReduceAction473__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction474#action for (self: ReduceAction474, Parser) */
void parser__ReduceAction474__action(val* self, val* p0) {
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
val* var_tkwnewnode5 /* var tkwnewnode5: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_psignaturenode7 /* var psignaturenode7: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pexterncallsnode9 /* var pexterncallsnode9: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var25 /* : AExternInitPropdef */;
val* var26 /* : null */;
val* var27 /* : null */;
val* var28 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternInitPropdef */;
long var29 /* : Int */;
long var30 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20863);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20865);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20867);
exit(1);
}
var_tkwnewnode5 = var_nodearraylist4;
/* <var_tkwnewnode5:nullable Object> isa nullable TKwnew */
cltype17 = type_nullable_parser_nodes__TKwnew.color;
idtype18 = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode5 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tkwnewnode5->type->table_size) {
var16 = 0;
} else {
var16 = var_tkwnewnode5->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20869);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20871);
exit(1);
}
var_pexterncallsnode9 = var_nodearraylist8;
/* <var_pexterncallsnode9:nullable Object> isa nullable AExternCalls */
cltype23 = type_nullable_parser_nodes__AExternCalls.color;
idtype24 = type_nullable_parser_nodes__AExternCalls.id;
if(var_pexterncallsnode9 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_pexterncallsnode9->type->table_size) {
var22 = 0;
} else {
var22 = var_pexterncallsnode9->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20873);
exit(1);
}
var25 = NEW_parser_nodes__AExternInitPropdef(&type_parser_nodes__AExternInitPropdef);
var26 = NULL;
var27 = NULL;
var28 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var25->class->vft[COLOR_parser_prod__AExternInitPropdef__init_aexterninitpropdef]))(var25, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwnewnode5, var26, var_psignaturenode7, var27, var_pexterncallsnode9, var28) /* init_aexterninitpropdef on <var25:AExternInitPropdef>*/;
CHECK_NEW_parser_nodes__AExternInitPropdef(var25);
var_ppropdefnode1 = var25;
var_node_list = var_ppropdefnode1;
var29 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction474> */
var30 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var29) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var30, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction474#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction474__action(val* self, val* p0) {
parser__ReduceAction474__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction475#action for (self: ReduceAction475, Parser) */
void parser__ReduceAction475__action(val* self, val* p0) {
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
val* var_tkwnewnode5 /* var tkwnewnode5: nullable Object */;
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
val* var_pexterncallsnode9 /* var pexterncallsnode9: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var25 /* : AExternInitPropdef */;
val* var26 /* : null */;
val* var27 /* : null */;
val* var28 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternInitPropdef */;
long var29 /* : Int */;
long var30 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20903);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20905);
exit(1);
}
var_tkwnewnode5 = var_nodearraylist3;
/* <var_tkwnewnode5:nullable Object> isa nullable TKwnew */
cltype14 = type_nullable_parser_nodes__TKwnew.color;
idtype15 = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode5 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_tkwnewnode5->type->table_size) {
var13 = 0;
} else {
var13 = var_tkwnewnode5->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20907);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20909);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20911);
exit(1);
}
var_pexterncallsnode9 = var_nodearraylist8;
/* <var_pexterncallsnode9:nullable Object> isa nullable AExternCalls */
cltype23 = type_nullable_parser_nodes__AExternCalls.color;
idtype24 = type_nullable_parser_nodes__AExternCalls.id;
if(var_pexterncallsnode9 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_pexterncallsnode9->type->table_size) {
var22 = 0;
} else {
var22 = var_pexterncallsnode9->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20913);
exit(1);
}
var25 = NEW_parser_nodes__AExternInitPropdef(&type_parser_nodes__AExternInitPropdef);
var26 = NULL;
var27 = NULL;
var28 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var25->class->vft[COLOR_parser_prod__AExternInitPropdef__init_aexterninitpropdef]))(var25, var_pdocnode2, var26, var_pvisibilitynode4, var_tkwnewnode5, var_pmethidnode6, var_psignaturenode7, var27, var_pexterncallsnode9, var28) /* init_aexterninitpropdef on <var25:AExternInitPropdef>*/;
CHECK_NEW_parser_nodes__AExternInitPropdef(var25);
var_ppropdefnode1 = var25;
var_node_list = var_ppropdefnode1;
var29 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction475> */
var30 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var29) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var30, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction475#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction475__action(val* self, val* p0) {
parser__ReduceAction475__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction476#action for (self: ReduceAction476, Parser) */
void parser__ReduceAction476__action(val* self, val* p0) {
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
val* var_tkwnewnode5 /* var tkwnewnode5: nullable Object */;
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
val* var_pexterncallsnode9 /* var pexterncallsnode9: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : AExternInitPropdef */;
val* var30 /* : null */;
val* var31 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternInitPropdef */;
long var32 /* : Int */;
long var33 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20944);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20946);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20948);
exit(1);
}
var_tkwnewnode5 = var_nodearraylist4;
/* <var_tkwnewnode5:nullable Object> isa nullable TKwnew */
cltype18 = type_nullable_parser_nodes__TKwnew.color;
idtype19 = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode5 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tkwnewnode5->type->table_size) {
var17 = 0;
} else {
var17 = var_tkwnewnode5->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20950);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20952);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20954);
exit(1);
}
var_pexterncallsnode9 = var_nodearraylist9;
/* <var_pexterncallsnode9:nullable Object> isa nullable AExternCalls */
cltype27 = type_nullable_parser_nodes__AExternCalls.color;
idtype28 = type_nullable_parser_nodes__AExternCalls.id;
if(var_pexterncallsnode9 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_pexterncallsnode9->type->table_size) {
var26 = 0;
} else {
var26 = var_pexterncallsnode9->type->type_table[cltype27] == idtype28;
}
}
if (!var26) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20956);
exit(1);
}
var29 = NEW_parser_nodes__AExternInitPropdef(&type_parser_nodes__AExternInitPropdef);
var30 = NULL;
var31 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AExternInitPropdef__init_aexterninitpropdef]))(var29, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwnewnode5, var_pmethidnode6, var_psignaturenode7, var30, var_pexterncallsnode9, var31) /* init_aexterninitpropdef on <var29:AExternInitPropdef>*/;
CHECK_NEW_parser_nodes__AExternInitPropdef(var29);
var_ppropdefnode1 = var29;
var_node_list = var_ppropdefnode1;
var32 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction476> */
var33 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var32) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var33, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction476#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction476__action(val* self, val* p0) {
parser__ReduceAction476__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction477#action for (self: ReduceAction477, Parser) */
void parser__ReduceAction477__action(val* self, val* p0) {
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
val* var_tkwnewnode5 /* var tkwnewnode5: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_psignaturenode7 /* var psignaturenode7: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_tstringnode8 /* var tstringnode8: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pexterncallsnode9 /* var pexterncallsnode9: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var25 /* : AExternInitPropdef */;
val* var26 /* : null */;
val* var27 /* : null */;
val* var28 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternInitPropdef */;
long var29 /* : Int */;
long var30 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20986);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20988);
exit(1);
}
var_tkwnewnode5 = var_nodearraylist3;
/* <var_tkwnewnode5:nullable Object> isa nullable TKwnew */
cltype14 = type_nullable_parser_nodes__TKwnew.color;
idtype15 = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode5 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_tkwnewnode5->type->table_size) {
var13 = 0;
} else {
var13 = var_tkwnewnode5->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20990);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20992);
exit(1);
}
var_tstringnode8 = var_nodearraylist7;
/* <var_tstringnode8:nullable Object> isa nullable TString */
cltype20 = type_nullable_parser_nodes__TString.color;
idtype21 = type_nullable_parser_nodes__TString.id;
if(var_tstringnode8 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_tstringnode8->type->table_size) {
var19 = 0;
} else {
var19 = var_tstringnode8->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20994);
exit(1);
}
var_pexterncallsnode9 = var_nodearraylist8;
/* <var_pexterncallsnode9:nullable Object> isa nullable AExternCalls */
cltype23 = type_nullable_parser_nodes__AExternCalls.color;
idtype24 = type_nullable_parser_nodes__AExternCalls.id;
if(var_pexterncallsnode9 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_pexterncallsnode9->type->table_size) {
var22 = 0;
} else {
var22 = var_pexterncallsnode9->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 20996);
exit(1);
}
var25 = NEW_parser_nodes__AExternInitPropdef(&type_parser_nodes__AExternInitPropdef);
var26 = NULL;
var27 = NULL;
var28 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var25->class->vft[COLOR_parser_prod__AExternInitPropdef__init_aexterninitpropdef]))(var25, var_pdocnode2, var26, var_pvisibilitynode4, var_tkwnewnode5, var27, var_psignaturenode7, var_tstringnode8, var_pexterncallsnode9, var28) /* init_aexterninitpropdef on <var25:AExternInitPropdef>*/;
CHECK_NEW_parser_nodes__AExternInitPropdef(var25);
var_ppropdefnode1 = var25;
var_node_list = var_ppropdefnode1;
var29 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction477> */
var30 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var29) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var30, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction477#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction477__action(val* self, val* p0) {
parser__ReduceAction477__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction478#action for (self: ReduceAction478, Parser) */
void parser__ReduceAction478__action(val* self, val* p0) {
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
val* var_tkwnewnode5 /* var tkwnewnode5: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_psignaturenode7 /* var psignaturenode7: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_tstringnode8 /* var tstringnode8: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_pexterncallsnode9 /* var pexterncallsnode9: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : AExternInitPropdef */;
val* var30 /* : null */;
val* var31 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternInitPropdef */;
long var32 /* : Int */;
long var33 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21027);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21029);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21031);
exit(1);
}
var_tkwnewnode5 = var_nodearraylist4;
/* <var_tkwnewnode5:nullable Object> isa nullable TKwnew */
cltype18 = type_nullable_parser_nodes__TKwnew.color;
idtype19 = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode5 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tkwnewnode5->type->table_size) {
var17 = 0;
} else {
var17 = var_tkwnewnode5->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21033);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21035);
exit(1);
}
var_tstringnode8 = var_nodearraylist8;
/* <var_tstringnode8:nullable Object> isa nullable TString */
cltype24 = type_nullable_parser_nodes__TString.color;
idtype25 = type_nullable_parser_nodes__TString.id;
if(var_tstringnode8 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_tstringnode8->type->table_size) {
var23 = 0;
} else {
var23 = var_tstringnode8->type->type_table[cltype24] == idtype25;
}
}
if (!var23) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21037);
exit(1);
}
var_pexterncallsnode9 = var_nodearraylist9;
/* <var_pexterncallsnode9:nullable Object> isa nullable AExternCalls */
cltype27 = type_nullable_parser_nodes__AExternCalls.color;
idtype28 = type_nullable_parser_nodes__AExternCalls.id;
if(var_pexterncallsnode9 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_pexterncallsnode9->type->table_size) {
var26 = 0;
} else {
var26 = var_pexterncallsnode9->type->type_table[cltype27] == idtype28;
}
}
if (!var26) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21039);
exit(1);
}
var29 = NEW_parser_nodes__AExternInitPropdef(&type_parser_nodes__AExternInitPropdef);
var30 = NULL;
var31 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AExternInitPropdef__init_aexterninitpropdef]))(var29, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwnewnode5, var30, var_psignaturenode7, var_tstringnode8, var_pexterncallsnode9, var31) /* init_aexterninitpropdef on <var29:AExternInitPropdef>*/;
CHECK_NEW_parser_nodes__AExternInitPropdef(var29);
var_ppropdefnode1 = var29;
var_node_list = var_ppropdefnode1;
var32 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction478> */
var33 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var32) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var33, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction478#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction478__action(val* self, val* p0) {
parser__ReduceAction478__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction479#action for (self: ReduceAction479, Parser) */
void parser__ReduceAction479__action(val* self, val* p0) {
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
val* var_tkwnewnode5 /* var tkwnewnode5: nullable Object */;
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
val* var_tstringnode8 /* var tstringnode8: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_pexterncallsnode9 /* var pexterncallsnode9: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : AExternInitPropdef */;
val* var30 /* : null */;
val* var31 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternInitPropdef */;
long var32 /* : Int */;
long var33 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21070);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21072);
exit(1);
}
var_tkwnewnode5 = var_nodearraylist3;
/* <var_tkwnewnode5:nullable Object> isa nullable TKwnew */
cltype15 = type_nullable_parser_nodes__TKwnew.color;
idtype16 = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode5 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_tkwnewnode5->type->table_size) {
var14 = 0;
} else {
var14 = var_tkwnewnode5->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21074);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21076);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21078);
exit(1);
}
var_tstringnode8 = var_nodearraylist8;
/* <var_tstringnode8:nullable Object> isa nullable TString */
cltype24 = type_nullable_parser_nodes__TString.color;
idtype25 = type_nullable_parser_nodes__TString.id;
if(var_tstringnode8 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_tstringnode8->type->table_size) {
var23 = 0;
} else {
var23 = var_tstringnode8->type->type_table[cltype24] == idtype25;
}
}
if (!var23) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21080);
exit(1);
}
var_pexterncallsnode9 = var_nodearraylist9;
/* <var_pexterncallsnode9:nullable Object> isa nullable AExternCalls */
cltype27 = type_nullable_parser_nodes__AExternCalls.color;
idtype28 = type_nullable_parser_nodes__AExternCalls.id;
if(var_pexterncallsnode9 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_pexterncallsnode9->type->table_size) {
var26 = 0;
} else {
var26 = var_pexterncallsnode9->type->type_table[cltype27] == idtype28;
}
}
if (!var26) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21082);
exit(1);
}
var29 = NEW_parser_nodes__AExternInitPropdef(&type_parser_nodes__AExternInitPropdef);
var30 = NULL;
var31 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AExternInitPropdef__init_aexterninitpropdef]))(var29, var_pdocnode2, var30, var_pvisibilitynode4, var_tkwnewnode5, var_pmethidnode6, var_psignaturenode7, var_tstringnode8, var_pexterncallsnode9, var31) /* init_aexterninitpropdef on <var29:AExternInitPropdef>*/;
CHECK_NEW_parser_nodes__AExternInitPropdef(var29);
var_ppropdefnode1 = var29;
var_node_list = var_ppropdefnode1;
var32 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction479> */
var33 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var32) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var33, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction479#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction479__action(val* self, val* p0) {
parser__ReduceAction479__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction480#action for (self: ReduceAction480, Parser) */
void parser__ReduceAction480__action(val* self, val* p0) {
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
val* var_tkwnewnode5 /* var tkwnewnode5: nullable Object */;
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
val* var_tstringnode8 /* var tstringnode8: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var_pexterncallsnode9 /* var pexterncallsnode9: nullable Object */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
val* var33 /* : AExternInitPropdef */;
val* var34 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternInitPropdef */;
long var35 /* : Int */;
long var36 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21114);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21116);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21118);
exit(1);
}
var_tkwnewnode5 = var_nodearraylist4;
/* <var_tkwnewnode5:nullable Object> isa nullable TKwnew */
cltype19 = type_nullable_parser_nodes__TKwnew.color;
idtype20 = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode5 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_tkwnewnode5->type->table_size) {
var18 = 0;
} else {
var18 = var_tkwnewnode5->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21120);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21122);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21124);
exit(1);
}
var_tstringnode8 = var_nodearraylist9;
/* <var_tstringnode8:nullable Object> isa nullable TString */
cltype28 = type_nullable_parser_nodes__TString.color;
idtype29 = type_nullable_parser_nodes__TString.id;
if(var_tstringnode8 == NULL) {
var27 = 1;
} else {
if(cltype28 >= var_tstringnode8->type->table_size) {
var27 = 0;
} else {
var27 = var_tstringnode8->type->type_table[cltype28] == idtype29;
}
}
if (!var27) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21126);
exit(1);
}
var_pexterncallsnode9 = var_nodearraylist10;
/* <var_pexterncallsnode9:nullable Object> isa nullable AExternCalls */
cltype31 = type_nullable_parser_nodes__AExternCalls.color;
idtype32 = type_nullable_parser_nodes__AExternCalls.id;
if(var_pexterncallsnode9 == NULL) {
var30 = 1;
} else {
if(cltype31 >= var_pexterncallsnode9->type->table_size) {
var30 = 0;
} else {
var30 = var_pexterncallsnode9->type->type_table[cltype31] == idtype32;
}
}
if (!var30) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21128);
exit(1);
}
var33 = NEW_parser_nodes__AExternInitPropdef(&type_parser_nodes__AExternInitPropdef);
var34 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var33->class->vft[COLOR_parser_prod__AExternInitPropdef__init_aexterninitpropdef]))(var33, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwnewnode5, var_pmethidnode6, var_psignaturenode7, var_tstringnode8, var_pexterncallsnode9, var34) /* init_aexterninitpropdef on <var33:AExternInitPropdef>*/;
CHECK_NEW_parser_nodes__AExternInitPropdef(var33);
var_ppropdefnode1 = var33;
var_node_list = var_ppropdefnode1;
var35 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction480> */
var36 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var35) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var36, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction480#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction480__action(val* self, val* p0) {
parser__ReduceAction480__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction481#action for (self: ReduceAction481, Parser) */
void parser__ReduceAction481__action(val* self, val* p0) {
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
val* var_tkwnewnode5 /* var tkwnewnode5: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_psignaturenode7 /* var psignaturenode7: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : AExternInitPropdef */;
val* var22 /* : null */;
val* var23 /* : null */;
val* var24 /* : null */;
val* var25 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternInitPropdef */;
long var26 /* : Int */;
long var27 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21157);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21159);
exit(1);
}
var_tkwnewnode5 = var_nodearraylist3;
/* <var_tkwnewnode5:nullable Object> isa nullable TKwnew */
cltype13 = type_nullable_parser_nodes__TKwnew.color;
idtype14 = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode5 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_tkwnewnode5->type->table_size) {
var12 = 0;
} else {
var12 = var_tkwnewnode5->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21161);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21163);
exit(1);
}
var_pexterncodeblocknode10 = var_nodearraylist7;
/* <var_pexterncodeblocknode10:nullable Object> isa nullable AExternCodeBlock */
cltype19 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype20 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode10 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pexterncodeblocknode10->type->table_size) {
var18 = 0;
} else {
var18 = var_pexterncodeblocknode10->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21165);
exit(1);
}
var21 = NEW_parser_nodes__AExternInitPropdef(&type_parser_nodes__AExternInitPropdef);
var22 = NULL;
var23 = NULL;
var24 = NULL;
var25 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var21->class->vft[COLOR_parser_prod__AExternInitPropdef__init_aexterninitpropdef]))(var21, var_pdocnode2, var22, var_pvisibilitynode4, var_tkwnewnode5, var23, var_psignaturenode7, var24, var25, var_pexterncodeblocknode10) /* init_aexterninitpropdef on <var21:AExternInitPropdef>*/;
CHECK_NEW_parser_nodes__AExternInitPropdef(var21);
var_ppropdefnode1 = var21;
var_node_list = var_ppropdefnode1;
var26 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction481> */
var27 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var26) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var27, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction481#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction481__action(val* self, val* p0) {
parser__ReduceAction481__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction482#action for (self: ReduceAction482, Parser) */
void parser__ReduceAction482__action(val* self, val* p0) {
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
val* var_tkwnewnode5 /* var tkwnewnode5: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_psignaturenode7 /* var psignaturenode7: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var25 /* : AExternInitPropdef */;
val* var26 /* : null */;
val* var27 /* : null */;
val* var28 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternInitPropdef */;
long var29 /* : Int */;
long var30 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21195);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21197);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21199);
exit(1);
}
var_tkwnewnode5 = var_nodearraylist4;
/* <var_tkwnewnode5:nullable Object> isa nullable TKwnew */
cltype17 = type_nullable_parser_nodes__TKwnew.color;
idtype18 = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode5 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tkwnewnode5->type->table_size) {
var16 = 0;
} else {
var16 = var_tkwnewnode5->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21201);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21203);
exit(1);
}
var_pexterncodeblocknode10 = var_nodearraylist8;
/* <var_pexterncodeblocknode10:nullable Object> isa nullable AExternCodeBlock */
cltype23 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype24 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode10 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_pexterncodeblocknode10->type->table_size) {
var22 = 0;
} else {
var22 = var_pexterncodeblocknode10->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21205);
exit(1);
}
var25 = NEW_parser_nodes__AExternInitPropdef(&type_parser_nodes__AExternInitPropdef);
var26 = NULL;
var27 = NULL;
var28 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var25->class->vft[COLOR_parser_prod__AExternInitPropdef__init_aexterninitpropdef]))(var25, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwnewnode5, var26, var_psignaturenode7, var27, var28, var_pexterncodeblocknode10) /* init_aexterninitpropdef on <var25:AExternInitPropdef>*/;
CHECK_NEW_parser_nodes__AExternInitPropdef(var25);
var_ppropdefnode1 = var25;
var_node_list = var_ppropdefnode1;
var29 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction482> */
var30 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var29) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var30, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction482#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction482__action(val* self, val* p0) {
parser__ReduceAction482__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction483#action for (self: ReduceAction483, Parser) */
void parser__ReduceAction483__action(val* self, val* p0) {
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
val* var_tkwnewnode5 /* var tkwnewnode5: nullable Object */;
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
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var25 /* : AExternInitPropdef */;
val* var26 /* : null */;
val* var27 /* : null */;
val* var28 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternInitPropdef */;
long var29 /* : Int */;
long var30 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21235);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21237);
exit(1);
}
var_tkwnewnode5 = var_nodearraylist3;
/* <var_tkwnewnode5:nullable Object> isa nullable TKwnew */
cltype14 = type_nullable_parser_nodes__TKwnew.color;
idtype15 = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode5 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_tkwnewnode5->type->table_size) {
var13 = 0;
} else {
var13 = var_tkwnewnode5->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21239);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21241);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21243);
exit(1);
}
var_pexterncodeblocknode10 = var_nodearraylist8;
/* <var_pexterncodeblocknode10:nullable Object> isa nullable AExternCodeBlock */
cltype23 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype24 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode10 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_pexterncodeblocknode10->type->table_size) {
var22 = 0;
} else {
var22 = var_pexterncodeblocknode10->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21245);
exit(1);
}
var25 = NEW_parser_nodes__AExternInitPropdef(&type_parser_nodes__AExternInitPropdef);
var26 = NULL;
var27 = NULL;
var28 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var25->class->vft[COLOR_parser_prod__AExternInitPropdef__init_aexterninitpropdef]))(var25, var_pdocnode2, var26, var_pvisibilitynode4, var_tkwnewnode5, var_pmethidnode6, var_psignaturenode7, var27, var28, var_pexterncodeblocknode10) /* init_aexterninitpropdef on <var25:AExternInitPropdef>*/;
CHECK_NEW_parser_nodes__AExternInitPropdef(var25);
var_ppropdefnode1 = var25;
var_node_list = var_ppropdefnode1;
var29 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction483> */
var30 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var29) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var30, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction483#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction483__action(val* self, val* p0) {
parser__ReduceAction483__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction484#action for (self: ReduceAction484, Parser) */
void parser__ReduceAction484__action(val* self, val* p0) {
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
val* var_tkwnewnode5 /* var tkwnewnode5: nullable Object */;
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
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : AExternInitPropdef */;
val* var30 /* : null */;
val* var31 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternInitPropdef */;
long var32 /* : Int */;
long var33 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21276);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21278);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21280);
exit(1);
}
var_tkwnewnode5 = var_nodearraylist4;
/* <var_tkwnewnode5:nullable Object> isa nullable TKwnew */
cltype18 = type_nullable_parser_nodes__TKwnew.color;
idtype19 = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode5 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tkwnewnode5->type->table_size) {
var17 = 0;
} else {
var17 = var_tkwnewnode5->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21282);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21284);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21286);
exit(1);
}
var_pexterncodeblocknode10 = var_nodearraylist9;
/* <var_pexterncodeblocknode10:nullable Object> isa nullable AExternCodeBlock */
cltype27 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype28 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode10 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_pexterncodeblocknode10->type->table_size) {
var26 = 0;
} else {
var26 = var_pexterncodeblocknode10->type->type_table[cltype27] == idtype28;
}
}
if (!var26) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21288);
exit(1);
}
var29 = NEW_parser_nodes__AExternInitPropdef(&type_parser_nodes__AExternInitPropdef);
var30 = NULL;
var31 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AExternInitPropdef__init_aexterninitpropdef]))(var29, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwnewnode5, var_pmethidnode6, var_psignaturenode7, var30, var31, var_pexterncodeblocknode10) /* init_aexterninitpropdef on <var29:AExternInitPropdef>*/;
CHECK_NEW_parser_nodes__AExternInitPropdef(var29);
var_ppropdefnode1 = var29;
var_node_list = var_ppropdefnode1;
var32 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction484> */
var33 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var32) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var33, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction484#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction484__action(val* self, val* p0) {
parser__ReduceAction484__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction485#action for (self: ReduceAction485, Parser) */
void parser__ReduceAction485__action(val* self, val* p0) {
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
val* var_tkwnewnode5 /* var tkwnewnode5: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_psignaturenode7 /* var psignaturenode7: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_tstringnode8 /* var tstringnode8: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var25 /* : AExternInitPropdef */;
val* var26 /* : null */;
val* var27 /* : null */;
val* var28 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternInitPropdef */;
long var29 /* : Int */;
long var30 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21318);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21320);
exit(1);
}
var_tkwnewnode5 = var_nodearraylist3;
/* <var_tkwnewnode5:nullable Object> isa nullable TKwnew */
cltype14 = type_nullable_parser_nodes__TKwnew.color;
idtype15 = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode5 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_tkwnewnode5->type->table_size) {
var13 = 0;
} else {
var13 = var_tkwnewnode5->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21322);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21324);
exit(1);
}
var_tstringnode8 = var_nodearraylist7;
/* <var_tstringnode8:nullable Object> isa nullable TString */
cltype20 = type_nullable_parser_nodes__TString.color;
idtype21 = type_nullable_parser_nodes__TString.id;
if(var_tstringnode8 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_tstringnode8->type->table_size) {
var19 = 0;
} else {
var19 = var_tstringnode8->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21326);
exit(1);
}
var_pexterncodeblocknode10 = var_nodearraylist8;
/* <var_pexterncodeblocknode10:nullable Object> isa nullable AExternCodeBlock */
cltype23 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype24 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode10 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_pexterncodeblocknode10->type->table_size) {
var22 = 0;
} else {
var22 = var_pexterncodeblocknode10->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21328);
exit(1);
}
var25 = NEW_parser_nodes__AExternInitPropdef(&type_parser_nodes__AExternInitPropdef);
var26 = NULL;
var27 = NULL;
var28 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var25->class->vft[COLOR_parser_prod__AExternInitPropdef__init_aexterninitpropdef]))(var25, var_pdocnode2, var26, var_pvisibilitynode4, var_tkwnewnode5, var27, var_psignaturenode7, var_tstringnode8, var28, var_pexterncodeblocknode10) /* init_aexterninitpropdef on <var25:AExternInitPropdef>*/;
CHECK_NEW_parser_nodes__AExternInitPropdef(var25);
var_ppropdefnode1 = var25;
var_node_list = var_ppropdefnode1;
var29 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction485> */
var30 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var29) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var30, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction485#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction485__action(val* self, val* p0) {
parser__ReduceAction485__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction486#action for (self: ReduceAction486, Parser) */
void parser__ReduceAction486__action(val* self, val* p0) {
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
val* var_tkwnewnode5 /* var tkwnewnode5: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_psignaturenode7 /* var psignaturenode7: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_tstringnode8 /* var tstringnode8: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : AExternInitPropdef */;
val* var30 /* : null */;
val* var31 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternInitPropdef */;
long var32 /* : Int */;
long var33 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21359);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21361);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21363);
exit(1);
}
var_tkwnewnode5 = var_nodearraylist4;
/* <var_tkwnewnode5:nullable Object> isa nullable TKwnew */
cltype18 = type_nullable_parser_nodes__TKwnew.color;
idtype19 = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode5 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tkwnewnode5->type->table_size) {
var17 = 0;
} else {
var17 = var_tkwnewnode5->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21365);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21367);
exit(1);
}
var_tstringnode8 = var_nodearraylist8;
/* <var_tstringnode8:nullable Object> isa nullable TString */
cltype24 = type_nullable_parser_nodes__TString.color;
idtype25 = type_nullable_parser_nodes__TString.id;
if(var_tstringnode8 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_tstringnode8->type->table_size) {
var23 = 0;
} else {
var23 = var_tstringnode8->type->type_table[cltype24] == idtype25;
}
}
if (!var23) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21369);
exit(1);
}
var_pexterncodeblocknode10 = var_nodearraylist9;
/* <var_pexterncodeblocknode10:nullable Object> isa nullable AExternCodeBlock */
cltype27 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype28 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode10 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_pexterncodeblocknode10->type->table_size) {
var26 = 0;
} else {
var26 = var_pexterncodeblocknode10->type->type_table[cltype27] == idtype28;
}
}
if (!var26) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21371);
exit(1);
}
var29 = NEW_parser_nodes__AExternInitPropdef(&type_parser_nodes__AExternInitPropdef);
var30 = NULL;
var31 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AExternInitPropdef__init_aexterninitpropdef]))(var29, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwnewnode5, var30, var_psignaturenode7, var_tstringnode8, var31, var_pexterncodeblocknode10) /* init_aexterninitpropdef on <var29:AExternInitPropdef>*/;
CHECK_NEW_parser_nodes__AExternInitPropdef(var29);
var_ppropdefnode1 = var29;
var_node_list = var_ppropdefnode1;
var32 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction486> */
var33 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var32) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var33, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction486#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction486__action(val* self, val* p0) {
parser__ReduceAction486__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction487#action for (self: ReduceAction487, Parser) */
void parser__ReduceAction487__action(val* self, val* p0) {
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
val* var_tkwnewnode5 /* var tkwnewnode5: nullable Object */;
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
val* var_tstringnode8 /* var tstringnode8: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : AExternInitPropdef */;
val* var30 /* : null */;
val* var31 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternInitPropdef */;
long var32 /* : Int */;
long var33 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21402);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21404);
exit(1);
}
var_tkwnewnode5 = var_nodearraylist3;
/* <var_tkwnewnode5:nullable Object> isa nullable TKwnew */
cltype15 = type_nullable_parser_nodes__TKwnew.color;
idtype16 = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode5 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_tkwnewnode5->type->table_size) {
var14 = 0;
} else {
var14 = var_tkwnewnode5->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21406);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21408);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21410);
exit(1);
}
var_tstringnode8 = var_nodearraylist8;
/* <var_tstringnode8:nullable Object> isa nullable TString */
cltype24 = type_nullable_parser_nodes__TString.color;
idtype25 = type_nullable_parser_nodes__TString.id;
if(var_tstringnode8 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_tstringnode8->type->table_size) {
var23 = 0;
} else {
var23 = var_tstringnode8->type->type_table[cltype24] == idtype25;
}
}
if (!var23) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21412);
exit(1);
}
var_pexterncodeblocknode10 = var_nodearraylist9;
/* <var_pexterncodeblocknode10:nullable Object> isa nullable AExternCodeBlock */
cltype27 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype28 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode10 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_pexterncodeblocknode10->type->table_size) {
var26 = 0;
} else {
var26 = var_pexterncodeblocknode10->type->type_table[cltype27] == idtype28;
}
}
if (!var26) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21414);
exit(1);
}
var29 = NEW_parser_nodes__AExternInitPropdef(&type_parser_nodes__AExternInitPropdef);
var30 = NULL;
var31 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AExternInitPropdef__init_aexterninitpropdef]))(var29, var_pdocnode2, var30, var_pvisibilitynode4, var_tkwnewnode5, var_pmethidnode6, var_psignaturenode7, var_tstringnode8, var31, var_pexterncodeblocknode10) /* init_aexterninitpropdef on <var29:AExternInitPropdef>*/;
CHECK_NEW_parser_nodes__AExternInitPropdef(var29);
var_ppropdefnode1 = var29;
var_node_list = var_ppropdefnode1;
var32 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction487> */
var33 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var32) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var33, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction487#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction487__action(val* self, val* p0) {
parser__ReduceAction487__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction488#action for (self: ReduceAction488, Parser) */
void parser__ReduceAction488__action(val* self, val* p0) {
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
val* var_tkwnewnode5 /* var tkwnewnode5: nullable Object */;
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
val* var_tstringnode8 /* var tstringnode8: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
val* var33 /* : AExternInitPropdef */;
val* var34 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternInitPropdef */;
long var35 /* : Int */;
long var36 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21446);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21448);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21450);
exit(1);
}
var_tkwnewnode5 = var_nodearraylist4;
/* <var_tkwnewnode5:nullable Object> isa nullable TKwnew */
cltype19 = type_nullable_parser_nodes__TKwnew.color;
idtype20 = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode5 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_tkwnewnode5->type->table_size) {
var18 = 0;
} else {
var18 = var_tkwnewnode5->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21452);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21454);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21456);
exit(1);
}
var_tstringnode8 = var_nodearraylist9;
/* <var_tstringnode8:nullable Object> isa nullable TString */
cltype28 = type_nullable_parser_nodes__TString.color;
idtype29 = type_nullable_parser_nodes__TString.id;
if(var_tstringnode8 == NULL) {
var27 = 1;
} else {
if(cltype28 >= var_tstringnode8->type->table_size) {
var27 = 0;
} else {
var27 = var_tstringnode8->type->type_table[cltype28] == idtype29;
}
}
if (!var27) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21458);
exit(1);
}
var_pexterncodeblocknode10 = var_nodearraylist10;
/* <var_pexterncodeblocknode10:nullable Object> isa nullable AExternCodeBlock */
cltype31 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype32 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode10 == NULL) {
var30 = 1;
} else {
if(cltype31 >= var_pexterncodeblocknode10->type->table_size) {
var30 = 0;
} else {
var30 = var_pexterncodeblocknode10->type->type_table[cltype31] == idtype32;
}
}
if (!var30) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21460);
exit(1);
}
var33 = NEW_parser_nodes__AExternInitPropdef(&type_parser_nodes__AExternInitPropdef);
var34 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var33->class->vft[COLOR_parser_prod__AExternInitPropdef__init_aexterninitpropdef]))(var33, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwnewnode5, var_pmethidnode6, var_psignaturenode7, var_tstringnode8, var34, var_pexterncodeblocknode10) /* init_aexterninitpropdef on <var33:AExternInitPropdef>*/;
CHECK_NEW_parser_nodes__AExternInitPropdef(var33);
var_ppropdefnode1 = var33;
var_node_list = var_ppropdefnode1;
var35 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction488> */
var36 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var35) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var36, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction488#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction488__action(val* self, val* p0) {
parser__ReduceAction488__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction489#action for (self: ReduceAction489, Parser) */
void parser__ReduceAction489__action(val* self, val* p0) {
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
val* var_tkwnewnode5 /* var tkwnewnode5: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_psignaturenode7 /* var psignaturenode7: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pexterncallsnode9 /* var pexterncallsnode9: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var25 /* : AExternInitPropdef */;
val* var26 /* : null */;
val* var27 /* : null */;
val* var28 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternInitPropdef */;
long var29 /* : Int */;
long var30 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21490);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21492);
exit(1);
}
var_tkwnewnode5 = var_nodearraylist3;
/* <var_tkwnewnode5:nullable Object> isa nullable TKwnew */
cltype14 = type_nullable_parser_nodes__TKwnew.color;
idtype15 = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode5 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_tkwnewnode5->type->table_size) {
var13 = 0;
} else {
var13 = var_tkwnewnode5->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21494);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21496);
exit(1);
}
var_pexterncallsnode9 = var_nodearraylist7;
/* <var_pexterncallsnode9:nullable Object> isa nullable AExternCalls */
cltype20 = type_nullable_parser_nodes__AExternCalls.color;
idtype21 = type_nullable_parser_nodes__AExternCalls.id;
if(var_pexterncallsnode9 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_pexterncallsnode9->type->table_size) {
var19 = 0;
} else {
var19 = var_pexterncallsnode9->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21498);
exit(1);
}
var_pexterncodeblocknode10 = var_nodearraylist8;
/* <var_pexterncodeblocknode10:nullable Object> isa nullable AExternCodeBlock */
cltype23 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype24 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode10 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_pexterncodeblocknode10->type->table_size) {
var22 = 0;
} else {
var22 = var_pexterncodeblocknode10->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21500);
exit(1);
}
var25 = NEW_parser_nodes__AExternInitPropdef(&type_parser_nodes__AExternInitPropdef);
var26 = NULL;
var27 = NULL;
var28 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var25->class->vft[COLOR_parser_prod__AExternInitPropdef__init_aexterninitpropdef]))(var25, var_pdocnode2, var26, var_pvisibilitynode4, var_tkwnewnode5, var27, var_psignaturenode7, var28, var_pexterncallsnode9, var_pexterncodeblocknode10) /* init_aexterninitpropdef on <var25:AExternInitPropdef>*/;
CHECK_NEW_parser_nodes__AExternInitPropdef(var25);
var_ppropdefnode1 = var25;
var_node_list = var_ppropdefnode1;
var29 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction489> */
var30 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var29) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var30, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction489#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction489__action(val* self, val* p0) {
parser__ReduceAction489__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction490#action for (self: ReduceAction490, Parser) */
void parser__ReduceAction490__action(val* self, val* p0) {
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
val* var_tkwnewnode5 /* var tkwnewnode5: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_psignaturenode7 /* var psignaturenode7: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_pexterncallsnode9 /* var pexterncallsnode9: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : AExternInitPropdef */;
val* var30 /* : null */;
val* var31 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternInitPropdef */;
long var32 /* : Int */;
long var33 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21531);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21533);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21535);
exit(1);
}
var_tkwnewnode5 = var_nodearraylist4;
/* <var_tkwnewnode5:nullable Object> isa nullable TKwnew */
cltype18 = type_nullable_parser_nodes__TKwnew.color;
idtype19 = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode5 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tkwnewnode5->type->table_size) {
var17 = 0;
} else {
var17 = var_tkwnewnode5->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21537);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21539);
exit(1);
}
var_pexterncallsnode9 = var_nodearraylist8;
/* <var_pexterncallsnode9:nullable Object> isa nullable AExternCalls */
cltype24 = type_nullable_parser_nodes__AExternCalls.color;
idtype25 = type_nullable_parser_nodes__AExternCalls.id;
if(var_pexterncallsnode9 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_pexterncallsnode9->type->table_size) {
var23 = 0;
} else {
var23 = var_pexterncallsnode9->type->type_table[cltype24] == idtype25;
}
}
if (!var23) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21541);
exit(1);
}
var_pexterncodeblocknode10 = var_nodearraylist9;
/* <var_pexterncodeblocknode10:nullable Object> isa nullable AExternCodeBlock */
cltype27 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype28 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode10 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_pexterncodeblocknode10->type->table_size) {
var26 = 0;
} else {
var26 = var_pexterncodeblocknode10->type->type_table[cltype27] == idtype28;
}
}
if (!var26) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21543);
exit(1);
}
var29 = NEW_parser_nodes__AExternInitPropdef(&type_parser_nodes__AExternInitPropdef);
var30 = NULL;
var31 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AExternInitPropdef__init_aexterninitpropdef]))(var29, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwnewnode5, var30, var_psignaturenode7, var31, var_pexterncallsnode9, var_pexterncodeblocknode10) /* init_aexterninitpropdef on <var29:AExternInitPropdef>*/;
CHECK_NEW_parser_nodes__AExternInitPropdef(var29);
var_ppropdefnode1 = var29;
var_node_list = var_ppropdefnode1;
var32 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction490> */
var33 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var32) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var33, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction490#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction490__action(val* self, val* p0) {
parser__ReduceAction490__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction491#action for (self: ReduceAction491, Parser) */
void parser__ReduceAction491__action(val* self, val* p0) {
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
val* var_tkwnewnode5 /* var tkwnewnode5: nullable Object */;
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
val* var_pexterncallsnode9 /* var pexterncallsnode9: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : AExternInitPropdef */;
val* var30 /* : null */;
val* var31 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternInitPropdef */;
long var32 /* : Int */;
long var33 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21574);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21576);
exit(1);
}
var_tkwnewnode5 = var_nodearraylist3;
/* <var_tkwnewnode5:nullable Object> isa nullable TKwnew */
cltype15 = type_nullable_parser_nodes__TKwnew.color;
idtype16 = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode5 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_tkwnewnode5->type->table_size) {
var14 = 0;
} else {
var14 = var_tkwnewnode5->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21578);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21580);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21582);
exit(1);
}
var_pexterncallsnode9 = var_nodearraylist8;
/* <var_pexterncallsnode9:nullable Object> isa nullable AExternCalls */
cltype24 = type_nullable_parser_nodes__AExternCalls.color;
idtype25 = type_nullable_parser_nodes__AExternCalls.id;
if(var_pexterncallsnode9 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_pexterncallsnode9->type->table_size) {
var23 = 0;
} else {
var23 = var_pexterncallsnode9->type->type_table[cltype24] == idtype25;
}
}
if (!var23) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21584);
exit(1);
}
var_pexterncodeblocknode10 = var_nodearraylist9;
/* <var_pexterncodeblocknode10:nullable Object> isa nullable AExternCodeBlock */
cltype27 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype28 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode10 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_pexterncodeblocknode10->type->table_size) {
var26 = 0;
} else {
var26 = var_pexterncodeblocknode10->type->type_table[cltype27] == idtype28;
}
}
if (!var26) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21586);
exit(1);
}
var29 = NEW_parser_nodes__AExternInitPropdef(&type_parser_nodes__AExternInitPropdef);
var30 = NULL;
var31 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AExternInitPropdef__init_aexterninitpropdef]))(var29, var_pdocnode2, var30, var_pvisibilitynode4, var_tkwnewnode5, var_pmethidnode6, var_psignaturenode7, var31, var_pexterncallsnode9, var_pexterncodeblocknode10) /* init_aexterninitpropdef on <var29:AExternInitPropdef>*/;
CHECK_NEW_parser_nodes__AExternInitPropdef(var29);
var_ppropdefnode1 = var29;
var_node_list = var_ppropdefnode1;
var32 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction491> */
var33 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var32) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var33, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction491#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction491__action(val* self, val* p0) {
parser__ReduceAction491__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction492#action for (self: ReduceAction492, Parser) */
void parser__ReduceAction492__action(val* self, val* p0) {
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
val* var_tkwnewnode5 /* var tkwnewnode5: nullable Object */;
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
val* var_pexterncallsnode9 /* var pexterncallsnode9: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
val* var33 /* : AExternInitPropdef */;
val* var34 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternInitPropdef */;
long var35 /* : Int */;
long var36 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21618);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21620);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21622);
exit(1);
}
var_tkwnewnode5 = var_nodearraylist4;
/* <var_tkwnewnode5:nullable Object> isa nullable TKwnew */
cltype19 = type_nullable_parser_nodes__TKwnew.color;
idtype20 = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode5 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_tkwnewnode5->type->table_size) {
var18 = 0;
} else {
var18 = var_tkwnewnode5->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21624);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21626);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21628);
exit(1);
}
var_pexterncallsnode9 = var_nodearraylist9;
/* <var_pexterncallsnode9:nullable Object> isa nullable AExternCalls */
cltype28 = type_nullable_parser_nodes__AExternCalls.color;
idtype29 = type_nullable_parser_nodes__AExternCalls.id;
if(var_pexterncallsnode9 == NULL) {
var27 = 1;
} else {
if(cltype28 >= var_pexterncallsnode9->type->table_size) {
var27 = 0;
} else {
var27 = var_pexterncallsnode9->type->type_table[cltype28] == idtype29;
}
}
if (!var27) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21630);
exit(1);
}
var_pexterncodeblocknode10 = var_nodearraylist10;
/* <var_pexterncodeblocknode10:nullable Object> isa nullable AExternCodeBlock */
cltype31 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype32 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode10 == NULL) {
var30 = 1;
} else {
if(cltype31 >= var_pexterncodeblocknode10->type->table_size) {
var30 = 0;
} else {
var30 = var_pexterncodeblocknode10->type->type_table[cltype31] == idtype32;
}
}
if (!var30) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21632);
exit(1);
}
var33 = NEW_parser_nodes__AExternInitPropdef(&type_parser_nodes__AExternInitPropdef);
var34 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var33->class->vft[COLOR_parser_prod__AExternInitPropdef__init_aexterninitpropdef]))(var33, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwnewnode5, var_pmethidnode6, var_psignaturenode7, var34, var_pexterncallsnode9, var_pexterncodeblocknode10) /* init_aexterninitpropdef on <var33:AExternInitPropdef>*/;
CHECK_NEW_parser_nodes__AExternInitPropdef(var33);
var_ppropdefnode1 = var33;
var_node_list = var_ppropdefnode1;
var35 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction492> */
var36 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var35) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var36, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction492#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction492__action(val* self, val* p0) {
parser__ReduceAction492__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction493#action for (self: ReduceAction493, Parser) */
void parser__ReduceAction493__action(val* self, val* p0) {
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
val* var_tkwnewnode5 /* var tkwnewnode5: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_psignaturenode7 /* var psignaturenode7: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_tstringnode8 /* var tstringnode8: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_pexterncallsnode9 /* var pexterncallsnode9: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : AExternInitPropdef */;
val* var30 /* : null */;
val* var31 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternInitPropdef */;
long var32 /* : Int */;
long var33 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21663);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21665);
exit(1);
}
var_tkwnewnode5 = var_nodearraylist3;
/* <var_tkwnewnode5:nullable Object> isa nullable TKwnew */
cltype15 = type_nullable_parser_nodes__TKwnew.color;
idtype16 = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode5 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_tkwnewnode5->type->table_size) {
var14 = 0;
} else {
var14 = var_tkwnewnode5->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21667);
exit(1);
}
var_psignaturenode7 = var_nodearraylist4;
/* <var_psignaturenode7:nullable Object> isa nullable ASignature */
cltype18 = type_nullable_parser_nodes__ASignature.color;
idtype19 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode7 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_psignaturenode7->type->table_size) {
var17 = 0;
} else {
var17 = var_psignaturenode7->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21669);
exit(1);
}
var_tstringnode8 = var_nodearraylist7;
/* <var_tstringnode8:nullable Object> isa nullable TString */
cltype21 = type_nullable_parser_nodes__TString.color;
idtype22 = type_nullable_parser_nodes__TString.id;
if(var_tstringnode8 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_tstringnode8->type->table_size) {
var20 = 0;
} else {
var20 = var_tstringnode8->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21671);
exit(1);
}
var_pexterncallsnode9 = var_nodearraylist8;
/* <var_pexterncallsnode9:nullable Object> isa nullable AExternCalls */
cltype24 = type_nullable_parser_nodes__AExternCalls.color;
idtype25 = type_nullable_parser_nodes__AExternCalls.id;
if(var_pexterncallsnode9 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_pexterncallsnode9->type->table_size) {
var23 = 0;
} else {
var23 = var_pexterncallsnode9->type->type_table[cltype24] == idtype25;
}
}
if (!var23) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21673);
exit(1);
}
var_pexterncodeblocknode10 = var_nodearraylist9;
/* <var_pexterncodeblocknode10:nullable Object> isa nullable AExternCodeBlock */
cltype27 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype28 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode10 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_pexterncodeblocknode10->type->table_size) {
var26 = 0;
} else {
var26 = var_pexterncodeblocknode10->type->type_table[cltype27] == idtype28;
}
}
if (!var26) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21675);
exit(1);
}
var29 = NEW_parser_nodes__AExternInitPropdef(&type_parser_nodes__AExternInitPropdef);
var30 = NULL;
var31 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AExternInitPropdef__init_aexterninitpropdef]))(var29, var_pdocnode2, var30, var_pvisibilitynode4, var_tkwnewnode5, var31, var_psignaturenode7, var_tstringnode8, var_pexterncallsnode9, var_pexterncodeblocknode10) /* init_aexterninitpropdef on <var29:AExternInitPropdef>*/;
CHECK_NEW_parser_nodes__AExternInitPropdef(var29);
var_ppropdefnode1 = var29;
var_node_list = var_ppropdefnode1;
var32 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction493> */
var33 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var32) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var33, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction493#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction493__action(val* self, val* p0) {
parser__ReduceAction493__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction494#action for (self: ReduceAction494, Parser) */
void parser__ReduceAction494__action(val* self, val* p0) {
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
val* var_tkwnewnode5 /* var tkwnewnode5: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_psignaturenode7 /* var psignaturenode7: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_tstringnode8 /* var tstringnode8: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var_pexterncallsnode9 /* var pexterncallsnode9: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
val* var33 /* : AExternInitPropdef */;
val* var34 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternInitPropdef */;
long var35 /* : Int */;
long var36 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21707);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21709);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21711);
exit(1);
}
var_tkwnewnode5 = var_nodearraylist4;
/* <var_tkwnewnode5:nullable Object> isa nullable TKwnew */
cltype19 = type_nullable_parser_nodes__TKwnew.color;
idtype20 = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode5 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_tkwnewnode5->type->table_size) {
var18 = 0;
} else {
var18 = var_tkwnewnode5->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21713);
exit(1);
}
var_psignaturenode7 = var_nodearraylist5;
/* <var_psignaturenode7:nullable Object> isa nullable ASignature */
cltype22 = type_nullable_parser_nodes__ASignature.color;
idtype23 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode7 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_psignaturenode7->type->table_size) {
var21 = 0;
} else {
var21 = var_psignaturenode7->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21715);
exit(1);
}
var_tstringnode8 = var_nodearraylist8;
/* <var_tstringnode8:nullable Object> isa nullable TString */
cltype25 = type_nullable_parser_nodes__TString.color;
idtype26 = type_nullable_parser_nodes__TString.id;
if(var_tstringnode8 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_tstringnode8->type->table_size) {
var24 = 0;
} else {
var24 = var_tstringnode8->type->type_table[cltype25] == idtype26;
}
}
if (!var24) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21717);
exit(1);
}
var_pexterncallsnode9 = var_nodearraylist9;
/* <var_pexterncallsnode9:nullable Object> isa nullable AExternCalls */
cltype28 = type_nullable_parser_nodes__AExternCalls.color;
idtype29 = type_nullable_parser_nodes__AExternCalls.id;
if(var_pexterncallsnode9 == NULL) {
var27 = 1;
} else {
if(cltype28 >= var_pexterncallsnode9->type->table_size) {
var27 = 0;
} else {
var27 = var_pexterncallsnode9->type->type_table[cltype28] == idtype29;
}
}
if (!var27) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21719);
exit(1);
}
var_pexterncodeblocknode10 = var_nodearraylist10;
/* <var_pexterncodeblocknode10:nullable Object> isa nullable AExternCodeBlock */
cltype31 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype32 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode10 == NULL) {
var30 = 1;
} else {
if(cltype31 >= var_pexterncodeblocknode10->type->table_size) {
var30 = 0;
} else {
var30 = var_pexterncodeblocknode10->type->type_table[cltype31] == idtype32;
}
}
if (!var30) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21721);
exit(1);
}
var33 = NEW_parser_nodes__AExternInitPropdef(&type_parser_nodes__AExternInitPropdef);
var34 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var33->class->vft[COLOR_parser_prod__AExternInitPropdef__init_aexterninitpropdef]))(var33, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwnewnode5, var34, var_psignaturenode7, var_tstringnode8, var_pexterncallsnode9, var_pexterncodeblocknode10) /* init_aexterninitpropdef on <var33:AExternInitPropdef>*/;
CHECK_NEW_parser_nodes__AExternInitPropdef(var33);
var_ppropdefnode1 = var33;
var_node_list = var_ppropdefnode1;
var35 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction494> */
var36 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var35) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var36, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction494#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction494__action(val* self, val* p0) {
parser__ReduceAction494__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction495#action for (self: ReduceAction495, Parser) */
void parser__ReduceAction495__action(val* self, val* p0) {
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
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_tkwnewnode5 /* var tkwnewnode5: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pmethidnode6 /* var pmethidnode6: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_psignaturenode7 /* var psignaturenode7: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_tstringnode8 /* var tstringnode8: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var_pexterncallsnode9 /* var pexterncallsnode9: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
val* var33 /* : AExternInitPropdef */;
val* var34 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternInitPropdef */;
long var35 /* : Int */;
long var36 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21753);
exit(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21755);
exit(1);
}
var_tkwnewnode5 = var_nodearraylist3;
/* <var_tkwnewnode5:nullable Object> isa nullable TKwnew */
cltype16 = type_nullable_parser_nodes__TKwnew.color;
idtype17 = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_tkwnewnode5->type->table_size) {
var15 = 0;
} else {
var15 = var_tkwnewnode5->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21757);
exit(1);
}
var_pmethidnode6 = var_nodearraylist4;
/* <var_pmethidnode6:nullable Object> isa nullable AMethid */
cltype19 = type_nullable_parser_nodes__AMethid.color;
idtype20 = type_nullable_parser_nodes__AMethid.id;
if(var_pmethidnode6 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pmethidnode6->type->table_size) {
var18 = 0;
} else {
var18 = var_pmethidnode6->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21759);
exit(1);
}
var_psignaturenode7 = var_nodearraylist5;
/* <var_psignaturenode7:nullable Object> isa nullable ASignature */
cltype22 = type_nullable_parser_nodes__ASignature.color;
idtype23 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode7 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_psignaturenode7->type->table_size) {
var21 = 0;
} else {
var21 = var_psignaturenode7->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21761);
exit(1);
}
var_tstringnode8 = var_nodearraylist8;
/* <var_tstringnode8:nullable Object> isa nullable TString */
cltype25 = type_nullable_parser_nodes__TString.color;
idtype26 = type_nullable_parser_nodes__TString.id;
if(var_tstringnode8 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_tstringnode8->type->table_size) {
var24 = 0;
} else {
var24 = var_tstringnode8->type->type_table[cltype25] == idtype26;
}
}
if (!var24) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21763);
exit(1);
}
var_pexterncallsnode9 = var_nodearraylist9;
/* <var_pexterncallsnode9:nullable Object> isa nullable AExternCalls */
cltype28 = type_nullable_parser_nodes__AExternCalls.color;
idtype29 = type_nullable_parser_nodes__AExternCalls.id;
if(var_pexterncallsnode9 == NULL) {
var27 = 1;
} else {
if(cltype28 >= var_pexterncallsnode9->type->table_size) {
var27 = 0;
} else {
var27 = var_pexterncallsnode9->type->type_table[cltype28] == idtype29;
}
}
if (!var27) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21765);
exit(1);
}
var_pexterncodeblocknode10 = var_nodearraylist10;
/* <var_pexterncodeblocknode10:nullable Object> isa nullable AExternCodeBlock */
cltype31 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype32 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode10 == NULL) {
var30 = 1;
} else {
if(cltype31 >= var_pexterncodeblocknode10->type->table_size) {
var30 = 0;
} else {
var30 = var_pexterncodeblocknode10->type->type_table[cltype31] == idtype32;
}
}
if (!var30) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21767);
exit(1);
}
var33 = NEW_parser_nodes__AExternInitPropdef(&type_parser_nodes__AExternInitPropdef);
var34 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var33->class->vft[COLOR_parser_prod__AExternInitPropdef__init_aexterninitpropdef]))(var33, var_pdocnode2, var34, var_pvisibilitynode4, var_tkwnewnode5, var_pmethidnode6, var_psignaturenode7, var_tstringnode8, var_pexterncallsnode9, var_pexterncodeblocknode10) /* init_aexterninitpropdef on <var33:AExternInitPropdef>*/;
CHECK_NEW_parser_nodes__AExternInitPropdef(var33);
var_ppropdefnode1 = var33;
var_node_list = var_ppropdefnode1;
var35 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction495> */
var36 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var35) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var36, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction495#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction495__action(val* self, val* p0) {
parser__ReduceAction495__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction496#action for (self: ReduceAction496, Parser) */
void parser__ReduceAction496__action(val* self, val* p0) {
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
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_tkwnewnode5 /* var tkwnewnode5: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pmethidnode6 /* var pmethidnode6: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_psignaturenode7 /* var psignaturenode7: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_tstringnode8 /* var tstringnode8: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var_pexterncallsnode9 /* var pexterncallsnode9: nullable Object */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
val* var37 /* : AExternInitPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternInitPropdef */;
long var38 /* : Int */;
long var39 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21800);
exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype14 = type_nullable_parser_nodes__TKwredef.color;
idtype15 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_tkwredefnode3->type->table_size) {
var13 = 0;
} else {
var13 = var_tkwredefnode3->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21802);
exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype17 = type_nullable_parser_nodes__AVisibility.color;
idtype18 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_pvisibilitynode4->type->table_size) {
var16 = 0;
} else {
var16 = var_pvisibilitynode4->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21804);
exit(1);
}
var_tkwnewnode5 = var_nodearraylist4;
/* <var_tkwnewnode5:nullable Object> isa nullable TKwnew */
cltype20 = type_nullable_parser_nodes__TKwnew.color;
idtype21 = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode5 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_tkwnewnode5->type->table_size) {
var19 = 0;
} else {
var19 = var_tkwnewnode5->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21806);
exit(1);
}
var_pmethidnode6 = var_nodearraylist5;
/* <var_pmethidnode6:nullable Object> isa nullable AMethid */
cltype23 = type_nullable_parser_nodes__AMethid.color;
idtype24 = type_nullable_parser_nodes__AMethid.id;
if(var_pmethidnode6 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_pmethidnode6->type->table_size) {
var22 = 0;
} else {
var22 = var_pmethidnode6->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21808);
exit(1);
}
var_psignaturenode7 = var_nodearraylist6;
/* <var_psignaturenode7:nullable Object> isa nullable ASignature */
cltype26 = type_nullable_parser_nodes__ASignature.color;
idtype27 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode7 == NULL) {
var25 = 1;
} else {
if(cltype26 >= var_psignaturenode7->type->table_size) {
var25 = 0;
} else {
var25 = var_psignaturenode7->type->type_table[cltype26] == idtype27;
}
}
if (!var25) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21810);
exit(1);
}
var_tstringnode8 = var_nodearraylist9;
/* <var_tstringnode8:nullable Object> isa nullable TString */
cltype29 = type_nullable_parser_nodes__TString.color;
idtype30 = type_nullable_parser_nodes__TString.id;
if(var_tstringnode8 == NULL) {
var28 = 1;
} else {
if(cltype29 >= var_tstringnode8->type->table_size) {
var28 = 0;
} else {
var28 = var_tstringnode8->type->type_table[cltype29] == idtype30;
}
}
if (!var28) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21812);
exit(1);
}
var_pexterncallsnode9 = var_nodearraylist10;
/* <var_pexterncallsnode9:nullable Object> isa nullable AExternCalls */
cltype32 = type_nullable_parser_nodes__AExternCalls.color;
idtype33 = type_nullable_parser_nodes__AExternCalls.id;
if(var_pexterncallsnode9 == NULL) {
var31 = 1;
} else {
if(cltype32 >= var_pexterncallsnode9->type->table_size) {
var31 = 0;
} else {
var31 = var_pexterncallsnode9->type->type_table[cltype32] == idtype33;
}
}
if (!var31) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21814);
exit(1);
}
var_pexterncodeblocknode10 = var_nodearraylist11;
/* <var_pexterncodeblocknode10:nullable Object> isa nullable AExternCodeBlock */
cltype35 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype36 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode10 == NULL) {
var34 = 1;
} else {
if(cltype35 >= var_pexterncodeblocknode10->type->table_size) {
var34 = 0;
} else {
var34 = var_pexterncodeblocknode10->type->type_table[cltype35] == idtype36;
}
}
if (!var34) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21816);
exit(1);
}
var37 = NEW_parser_nodes__AExternInitPropdef(&type_parser_nodes__AExternInitPropdef);
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var37->class->vft[COLOR_parser_prod__AExternInitPropdef__init_aexterninitpropdef]))(var37, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwnewnode5, var_pmethidnode6, var_psignaturenode7, var_tstringnode8, var_pexterncallsnode9, var_pexterncodeblocknode10) /* init_aexterninitpropdef on <var37:AExternInitPropdef>*/;
CHECK_NEW_parser_nodes__AExternInitPropdef(var37);
var_ppropdefnode1 = var37;
var_node_list = var_ppropdefnode1;
var38 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction496> */
var39 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var38) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var39, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction496#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction496__action(val* self, val* p0) {
parser__ReduceAction496__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction497#action for (self: ReduceAction497, Parser) */
void parser__ReduceAction497__action(val* self, val* p0) {
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
val* var_tkwnewnode5 /* var tkwnewnode5: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_psignaturenode7 /* var psignaturenode7: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : AExternInitPropdef */;
val* var20 /* : null */;
val* var21 /* : null */;
val* var22 /* : null */;
val* var23 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternInitPropdef */;
long var24 /* : Int */;
long var25 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21843);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21845);
exit(1);
}
var_tkwnewnode5 = var_nodearraylist3;
/* <var_tkwnewnode5:nullable Object> isa nullable TKwnew */
cltype11 = type_nullable_parser_nodes__TKwnew.color;
idtype12 = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode5 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_tkwnewnode5->type->table_size) {
var10 = 0;
} else {
var10 = var_tkwnewnode5->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21847);
exit(1);
}
var_psignaturenode7 = var_nodearraylist4;
/* <var_psignaturenode7:nullable Object> isa nullable ASignature */
cltype14 = type_nullable_parser_nodes__ASignature.color;
idtype15 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode7 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_psignaturenode7->type->table_size) {
var13 = 0;
} else {
var13 = var_psignaturenode7->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21849);
exit(1);
}
var_pexterncodeblocknode10 = var_nodearraylist5;
/* <var_pexterncodeblocknode10:nullable Object> isa nullable AExternCodeBlock */
cltype17 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype18 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode10 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_pexterncodeblocknode10->type->table_size) {
var16 = 0;
} else {
var16 = var_pexterncodeblocknode10->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21851);
exit(1);
}
var19 = NEW_parser_nodes__AExternInitPropdef(&type_parser_nodes__AExternInitPropdef);
var20 = NULL;
var21 = NULL;
var22 = NULL;
var23 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var19->class->vft[COLOR_parser_prod__AExternInitPropdef__init_aexterninitpropdef]))(var19, var_pdocnode2, var20, var_pvisibilitynode4, var_tkwnewnode5, var21, var_psignaturenode7, var22, var23, var_pexterncodeblocknode10) /* init_aexterninitpropdef on <var19:AExternInitPropdef>*/;
CHECK_NEW_parser_nodes__AExternInitPropdef(var19);
var_ppropdefnode1 = var19;
var_node_list = var_ppropdefnode1;
var24 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction497> */
var25 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var24) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var25, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction497#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction497__action(val* self, val* p0) {
parser__ReduceAction497__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction498#action for (self: ReduceAction498, Parser) */
void parser__ReduceAction498__action(val* self, val* p0) {
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
val* var_tkwnewnode5 /* var tkwnewnode5: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_psignaturenode7 /* var psignaturenode7: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var23 /* : AExternInitPropdef */;
val* var24 /* : null */;
val* var25 /* : null */;
val* var26 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternInitPropdef */;
long var27 /* : Int */;
long var28 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21879);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21881);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21883);
exit(1);
}
var_tkwnewnode5 = var_nodearraylist4;
/* <var_tkwnewnode5:nullable Object> isa nullable TKwnew */
cltype15 = type_nullable_parser_nodes__TKwnew.color;
idtype16 = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode5 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_tkwnewnode5->type->table_size) {
var14 = 0;
} else {
var14 = var_tkwnewnode5->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21885);
exit(1);
}
var_psignaturenode7 = var_nodearraylist5;
/* <var_psignaturenode7:nullable Object> isa nullable ASignature */
cltype18 = type_nullable_parser_nodes__ASignature.color;
idtype19 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode7 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_psignaturenode7->type->table_size) {
var17 = 0;
} else {
var17 = var_psignaturenode7->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21887);
exit(1);
}
var_pexterncodeblocknode10 = var_nodearraylist6;
/* <var_pexterncodeblocknode10:nullable Object> isa nullable AExternCodeBlock */
cltype21 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype22 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode10 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_pexterncodeblocknode10->type->table_size) {
var20 = 0;
} else {
var20 = var_pexterncodeblocknode10->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21889);
exit(1);
}
var23 = NEW_parser_nodes__AExternInitPropdef(&type_parser_nodes__AExternInitPropdef);
var24 = NULL;
var25 = NULL;
var26 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var23->class->vft[COLOR_parser_prod__AExternInitPropdef__init_aexterninitpropdef]))(var23, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwnewnode5, var24, var_psignaturenode7, var25, var26, var_pexterncodeblocknode10) /* init_aexterninitpropdef on <var23:AExternInitPropdef>*/;
CHECK_NEW_parser_nodes__AExternInitPropdef(var23);
var_ppropdefnode1 = var23;
var_node_list = var_ppropdefnode1;
var27 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction498> */
var28 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var27) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var28, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction498#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction498__action(val* self, val* p0) {
parser__ReduceAction498__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction499#action for (self: ReduceAction499, Parser) */
void parser__ReduceAction499__action(val* self, val* p0) {
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
val* var_pmethidnode6 /* var pmethidnode6: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_psignaturenode7 /* var psignaturenode7: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var23 /* : AExternInitPropdef */;
val* var24 /* : null */;
val* var25 /* : null */;
val* var26 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternInitPropdef */;
long var27 /* : Int */;
long var28 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21917);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21919);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21921);
exit(1);
}
var_pmethidnode6 = var_nodearraylist4;
/* <var_pmethidnode6:nullable Object> isa nullable AMethid */
cltype15 = type_nullable_parser_nodes__AMethid.color;
idtype16 = type_nullable_parser_nodes__AMethid.id;
if(var_pmethidnode6 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_pmethidnode6->type->table_size) {
var14 = 0;
} else {
var14 = var_pmethidnode6->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21923);
exit(1);
}
var_psignaturenode7 = var_nodearraylist5;
/* <var_psignaturenode7:nullable Object> isa nullable ASignature */
cltype18 = type_nullable_parser_nodes__ASignature.color;
idtype19 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode7 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_psignaturenode7->type->table_size) {
var17 = 0;
} else {
var17 = var_psignaturenode7->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21925);
exit(1);
}
var_pexterncodeblocknode10 = var_nodearraylist6;
/* <var_pexterncodeblocknode10:nullable Object> isa nullable AExternCodeBlock */
cltype21 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype22 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode10 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_pexterncodeblocknode10->type->table_size) {
var20 = 0;
} else {
var20 = var_pexterncodeblocknode10->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21927);
exit(1);
}
var23 = NEW_parser_nodes__AExternInitPropdef(&type_parser_nodes__AExternInitPropdef);
var24 = NULL;
var25 = NULL;
var26 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var23->class->vft[COLOR_parser_prod__AExternInitPropdef__init_aexterninitpropdef]))(var23, var_pdocnode2, var24, var_pvisibilitynode4, var_tkwnewnode5, var_pmethidnode6, var_psignaturenode7, var25, var26, var_pexterncodeblocknode10) /* init_aexterninitpropdef on <var23:AExternInitPropdef>*/;
CHECK_NEW_parser_nodes__AExternInitPropdef(var23);
var_ppropdefnode1 = var23;
var_node_list = var_ppropdefnode1;
var27 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction499> */
var28 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var27) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var28, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction499#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction499__action(val* self, val* p0) {
parser__ReduceAction499__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction500#action for (self: ReduceAction500, Parser) */
void parser__ReduceAction500__action(val* self, val* p0) {
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
val* var_tkwnewnode5 /* var tkwnewnode5: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pmethidnode6 /* var pmethidnode6: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_psignaturenode7 /* var psignaturenode7: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var27 /* : AExternInitPropdef */;
val* var28 /* : null */;
val* var29 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternInitPropdef */;
long var30 /* : Int */;
long var31 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21956);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21958);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21960);
exit(1);
}
var_tkwnewnode5 = var_nodearraylist4;
/* <var_tkwnewnode5:nullable Object> isa nullable TKwnew */
cltype16 = type_nullable_parser_nodes__TKwnew.color;
idtype17 = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_tkwnewnode5->type->table_size) {
var15 = 0;
} else {
var15 = var_tkwnewnode5->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21962);
exit(1);
}
var_pmethidnode6 = var_nodearraylist5;
/* <var_pmethidnode6:nullable Object> isa nullable AMethid */
cltype19 = type_nullable_parser_nodes__AMethid.color;
idtype20 = type_nullable_parser_nodes__AMethid.id;
if(var_pmethidnode6 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pmethidnode6->type->table_size) {
var18 = 0;
} else {
var18 = var_pmethidnode6->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21964);
exit(1);
}
var_psignaturenode7 = var_nodearraylist6;
/* <var_psignaturenode7:nullable Object> isa nullable ASignature */
cltype22 = type_nullable_parser_nodes__ASignature.color;
idtype23 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode7 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_psignaturenode7->type->table_size) {
var21 = 0;
} else {
var21 = var_psignaturenode7->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21966);
exit(1);
}
var_pexterncodeblocknode10 = var_nodearraylist7;
/* <var_pexterncodeblocknode10:nullable Object> isa nullable AExternCodeBlock */
cltype25 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype26 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode10 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_pexterncodeblocknode10->type->table_size) {
var24 = 0;
} else {
var24 = var_pexterncodeblocknode10->type->type_table[cltype25] == idtype26;
}
}
if (!var24) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21968);
exit(1);
}
var27 = NEW_parser_nodes__AExternInitPropdef(&type_parser_nodes__AExternInitPropdef);
var28 = NULL;
var29 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var27->class->vft[COLOR_parser_prod__AExternInitPropdef__init_aexterninitpropdef]))(var27, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwnewnode5, var_pmethidnode6, var_psignaturenode7, var28, var29, var_pexterncodeblocknode10) /* init_aexterninitpropdef on <var27:AExternInitPropdef>*/;
CHECK_NEW_parser_nodes__AExternInitPropdef(var27);
var_ppropdefnode1 = var27;
var_node_list = var_ppropdefnode1;
var30 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction500> */
var31 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var30) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var31, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction500#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction500__action(val* self, val* p0) {
parser__ReduceAction500__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction501#action for (self: ReduceAction501, Parser) */
void parser__ReduceAction501__action(val* self, val* p0) {
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
val* var_tstringnode8 /* var tstringnode8: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var23 /* : AExternInitPropdef */;
val* var24 /* : null */;
val* var25 /* : null */;
val* var26 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternInitPropdef */;
long var27 /* : Int */;
long var28 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21996);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 21998);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22000);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22002);
exit(1);
}
var_tstringnode8 = var_nodearraylist5;
/* <var_tstringnode8:nullable Object> isa nullable TString */
cltype18 = type_nullable_parser_nodes__TString.color;
idtype19 = type_nullable_parser_nodes__TString.id;
if(var_tstringnode8 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tstringnode8->type->table_size) {
var17 = 0;
} else {
var17 = var_tstringnode8->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22004);
exit(1);
}
var_pexterncodeblocknode10 = var_nodearraylist6;
/* <var_pexterncodeblocknode10:nullable Object> isa nullable AExternCodeBlock */
cltype21 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype22 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode10 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_pexterncodeblocknode10->type->table_size) {
var20 = 0;
} else {
var20 = var_pexterncodeblocknode10->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22006);
exit(1);
}
var23 = NEW_parser_nodes__AExternInitPropdef(&type_parser_nodes__AExternInitPropdef);
var24 = NULL;
var25 = NULL;
var26 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var23->class->vft[COLOR_parser_prod__AExternInitPropdef__init_aexterninitpropdef]))(var23, var_pdocnode2, var24, var_pvisibilitynode4, var_tkwnewnode5, var25, var_psignaturenode7, var_tstringnode8, var26, var_pexterncodeblocknode10) /* init_aexterninitpropdef on <var23:AExternInitPropdef>*/;
CHECK_NEW_parser_nodes__AExternInitPropdef(var23);
var_ppropdefnode1 = var23;
var_node_list = var_ppropdefnode1;
var27 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction501> */
var28 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var27) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var28, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction501#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction501__action(val* self, val* p0) {
parser__ReduceAction501__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction502#action for (self: ReduceAction502, Parser) */
void parser__ReduceAction502__action(val* self, val* p0) {
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
val* var_tkwnewnode5 /* var tkwnewnode5: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_psignaturenode7 /* var psignaturenode7: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_tstringnode8 /* var tstringnode8: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var27 /* : AExternInitPropdef */;
val* var28 /* : null */;
val* var29 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternInitPropdef */;
long var30 /* : Int */;
long var31 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22035);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22037);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22039);
exit(1);
}
var_tkwnewnode5 = var_nodearraylist4;
/* <var_tkwnewnode5:nullable Object> isa nullable TKwnew */
cltype16 = type_nullable_parser_nodes__TKwnew.color;
idtype17 = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_tkwnewnode5->type->table_size) {
var15 = 0;
} else {
var15 = var_tkwnewnode5->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22041);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22043);
exit(1);
}
var_tstringnode8 = var_nodearraylist6;
/* <var_tstringnode8:nullable Object> isa nullable TString */
cltype22 = type_nullable_parser_nodes__TString.color;
idtype23 = type_nullable_parser_nodes__TString.id;
if(var_tstringnode8 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_tstringnode8->type->table_size) {
var21 = 0;
} else {
var21 = var_tstringnode8->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22045);
exit(1);
}
var_pexterncodeblocknode10 = var_nodearraylist7;
/* <var_pexterncodeblocknode10:nullable Object> isa nullable AExternCodeBlock */
cltype25 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype26 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode10 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_pexterncodeblocknode10->type->table_size) {
var24 = 0;
} else {
var24 = var_pexterncodeblocknode10->type->type_table[cltype25] == idtype26;
}
}
if (!var24) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22047);
exit(1);
}
var27 = NEW_parser_nodes__AExternInitPropdef(&type_parser_nodes__AExternInitPropdef);
var28 = NULL;
var29 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var27->class->vft[COLOR_parser_prod__AExternInitPropdef__init_aexterninitpropdef]))(var27, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwnewnode5, var28, var_psignaturenode7, var_tstringnode8, var29, var_pexterncodeblocknode10) /* init_aexterninitpropdef on <var27:AExternInitPropdef>*/;
CHECK_NEW_parser_nodes__AExternInitPropdef(var27);
var_ppropdefnode1 = var27;
var_node_list = var_ppropdefnode1;
var30 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction502> */
var31 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var30) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var31, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction502#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction502__action(val* self, val* p0) {
parser__ReduceAction502__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction503#action for (self: ReduceAction503, Parser) */
void parser__ReduceAction503__action(val* self, val* p0) {
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
val* var_tkwnewnode5 /* var tkwnewnode5: nullable Object */;
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
val* var_tstringnode8 /* var tstringnode8: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var27 /* : AExternInitPropdef */;
val* var28 /* : null */;
val* var29 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternInitPropdef */;
long var30 /* : Int */;
long var31 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22076);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22078);
exit(1);
}
var_tkwnewnode5 = var_nodearraylist3;
/* <var_tkwnewnode5:nullable Object> isa nullable TKwnew */
cltype13 = type_nullable_parser_nodes__TKwnew.color;
idtype14 = type_nullable_parser_nodes__TKwnew.id;
if(var_tkwnewnode5 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_tkwnewnode5->type->table_size) {
var12 = 0;
} else {
var12 = var_tkwnewnode5->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22080);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22082);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22084);
exit(1);
}
var_tstringnode8 = var_nodearraylist6;
/* <var_tstringnode8:nullable Object> isa nullable TString */
cltype22 = type_nullable_parser_nodes__TString.color;
idtype23 = type_nullable_parser_nodes__TString.id;
if(var_tstringnode8 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_tstringnode8->type->table_size) {
var21 = 0;
} else {
var21 = var_tstringnode8->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22086);
exit(1);
}
var_pexterncodeblocknode10 = var_nodearraylist7;
/* <var_pexterncodeblocknode10:nullable Object> isa nullable AExternCodeBlock */
cltype25 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype26 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode10 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_pexterncodeblocknode10->type->table_size) {
var24 = 0;
} else {
var24 = var_pexterncodeblocknode10->type->type_table[cltype25] == idtype26;
}
}
if (!var24) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22088);
exit(1);
}
var27 = NEW_parser_nodes__AExternInitPropdef(&type_parser_nodes__AExternInitPropdef);
var28 = NULL;
var29 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var27->class->vft[COLOR_parser_prod__AExternInitPropdef__init_aexterninitpropdef]))(var27, var_pdocnode2, var28, var_pvisibilitynode4, var_tkwnewnode5, var_pmethidnode6, var_psignaturenode7, var_tstringnode8, var29, var_pexterncodeblocknode10) /* init_aexterninitpropdef on <var27:AExternInitPropdef>*/;
CHECK_NEW_parser_nodes__AExternInitPropdef(var27);
var_ppropdefnode1 = var27;
var_node_list = var_ppropdefnode1;
var30 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction503> */
var31 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var30) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var31, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction503#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction503__action(val* self, val* p0) {
parser__ReduceAction503__action(self, p0);
RET_LABEL:;
}
