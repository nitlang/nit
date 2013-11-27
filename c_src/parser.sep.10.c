#include "parser.sep.0.h"
/* method parser#ReduceAction362#action for (self: ReduceAction362, Parser) */
void parser__ReduceAction362__action(val* self, val* p0) {
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
val* var_tkwmethnode5 /* var tkwmethnode5: nullable Object */;
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
val* var25 /* : AExternMethPropdef */;
val* var26 /* : null */;
val* var27 /* : null */;
val* var28 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternMethPropdef */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16199);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16201);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16203);
exit(1);
}
var_tkwmethnode5 = var_nodearraylist4;
/* <var_tkwmethnode5:nullable Object> isa nullable TKwmeth */
cltype17 = type_nullable_parser_nodes__TKwmeth.color;
idtype18 = type_nullable_parser_nodes__TKwmeth.id;
if(var_tkwmethnode5 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tkwmethnode5->type->table_size) {
var16 = 0;
} else {
var16 = var_tkwmethnode5->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16205);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16207);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16209);
exit(1);
}
var25 = NEW_parser_nodes__AExternMethPropdef(&type_parser_nodes__AExternMethPropdef);
var26 = NULL;
var27 = NULL;
var28 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var25->class->vft[COLOR_parser_prod__AExternMethPropdef__init_aexternmethpropdef]))(var25, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwmethnode5, var_pmethidnode6, var_psignaturenode7, var26, var27, var28) /* init_aexternmethpropdef on <var25:AExternMethPropdef>*/;
CHECK_NEW_parser_nodes__AExternMethPropdef(var25);
var_ppropdefnode1 = var25;
var_node_list = var_ppropdefnode1;
var29 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction362> */
var30 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var29) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var30, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction362#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction362__action(val* self, val* p0) {
parser__ReduceAction362__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction363#action for (self: ReduceAction363, Parser) */
void parser__ReduceAction363__action(val* self, val* p0) {
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
val* var_tkwmethnode5 /* var tkwmethnode5: nullable Object */;
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
val* var25 /* : AExternMethPropdef */;
val* var26 /* : null */;
val* var27 /* : null */;
val* var28 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternMethPropdef */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16239);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16241);
exit(1);
}
var_tkwmethnode5 = var_nodearraylist3;
/* <var_tkwmethnode5:nullable Object> isa nullable TKwmeth */
cltype14 = type_nullable_parser_nodes__TKwmeth.color;
idtype15 = type_nullable_parser_nodes__TKwmeth.id;
if(var_tkwmethnode5 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_tkwmethnode5->type->table_size) {
var13 = 0;
} else {
var13 = var_tkwmethnode5->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16243);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16245);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16247);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16249);
exit(1);
}
var25 = NEW_parser_nodes__AExternMethPropdef(&type_parser_nodes__AExternMethPropdef);
var26 = NULL;
var27 = NULL;
var28 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var25->class->vft[COLOR_parser_prod__AExternMethPropdef__init_aexternmethpropdef]))(var25, var_pdocnode2, var26, var_pvisibilitynode4, var_tkwmethnode5, var_pmethidnode6, var_psignaturenode7, var_tstringnode8, var27, var28) /* init_aexternmethpropdef on <var25:AExternMethPropdef>*/;
CHECK_NEW_parser_nodes__AExternMethPropdef(var25);
var_ppropdefnode1 = var25;
var_node_list = var_ppropdefnode1;
var29 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction363> */
var30 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var29) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var30, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction363#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction363__action(val* self, val* p0) {
parser__ReduceAction363__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction364#action for (self: ReduceAction364, Parser) */
void parser__ReduceAction364__action(val* self, val* p0) {
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
val* var_tkwmethnode5 /* var tkwmethnode5: nullable Object */;
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
val* var29 /* : AExternMethPropdef */;
val* var30 /* : null */;
val* var31 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternMethPropdef */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16280);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16282);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16284);
exit(1);
}
var_tkwmethnode5 = var_nodearraylist4;
/* <var_tkwmethnode5:nullable Object> isa nullable TKwmeth */
cltype18 = type_nullable_parser_nodes__TKwmeth.color;
idtype19 = type_nullable_parser_nodes__TKwmeth.id;
if(var_tkwmethnode5 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tkwmethnode5->type->table_size) {
var17 = 0;
} else {
var17 = var_tkwmethnode5->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16286);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16288);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16290);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16292);
exit(1);
}
var29 = NEW_parser_nodes__AExternMethPropdef(&type_parser_nodes__AExternMethPropdef);
var30 = NULL;
var31 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AExternMethPropdef__init_aexternmethpropdef]))(var29, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwmethnode5, var_pmethidnode6, var_psignaturenode7, var_tstringnode8, var30, var31) /* init_aexternmethpropdef on <var29:AExternMethPropdef>*/;
CHECK_NEW_parser_nodes__AExternMethPropdef(var29);
var_ppropdefnode1 = var29;
var_node_list = var_ppropdefnode1;
var32 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction364> */
var33 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var32) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var33, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction364#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction364__action(val* self, val* p0) {
parser__ReduceAction364__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction365#action for (self: ReduceAction365, Parser) */
void parser__ReduceAction365__action(val* self, val* p0) {
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
val* var_tkwmethnode5 /* var tkwmethnode5: nullable Object */;
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
val* var25 /* : AExternMethPropdef */;
val* var26 /* : null */;
val* var27 /* : null */;
val* var28 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternMethPropdef */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16322);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16324);
exit(1);
}
var_tkwmethnode5 = var_nodearraylist3;
/* <var_tkwmethnode5:nullable Object> isa nullable TKwmeth */
cltype14 = type_nullable_parser_nodes__TKwmeth.color;
idtype15 = type_nullable_parser_nodes__TKwmeth.id;
if(var_tkwmethnode5 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_tkwmethnode5->type->table_size) {
var13 = 0;
} else {
var13 = var_tkwmethnode5->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16326);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16328);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16330);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16332);
exit(1);
}
var25 = NEW_parser_nodes__AExternMethPropdef(&type_parser_nodes__AExternMethPropdef);
var26 = NULL;
var27 = NULL;
var28 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var25->class->vft[COLOR_parser_prod__AExternMethPropdef__init_aexternmethpropdef]))(var25, var_pdocnode2, var26, var_pvisibilitynode4, var_tkwmethnode5, var_pmethidnode6, var_psignaturenode7, var27, var_pexterncallsnode9, var28) /* init_aexternmethpropdef on <var25:AExternMethPropdef>*/;
CHECK_NEW_parser_nodes__AExternMethPropdef(var25);
var_ppropdefnode1 = var25;
var_node_list = var_ppropdefnode1;
var29 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction365> */
var30 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var29) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var30, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction365#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction365__action(val* self, val* p0) {
parser__ReduceAction365__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction366#action for (self: ReduceAction366, Parser) */
void parser__ReduceAction366__action(val* self, val* p0) {
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
val* var_tkwmethnode5 /* var tkwmethnode5: nullable Object */;
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
val* var29 /* : AExternMethPropdef */;
val* var30 /* : null */;
val* var31 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternMethPropdef */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16363);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16365);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16367);
exit(1);
}
var_tkwmethnode5 = var_nodearraylist4;
/* <var_tkwmethnode5:nullable Object> isa nullable TKwmeth */
cltype18 = type_nullable_parser_nodes__TKwmeth.color;
idtype19 = type_nullable_parser_nodes__TKwmeth.id;
if(var_tkwmethnode5 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tkwmethnode5->type->table_size) {
var17 = 0;
} else {
var17 = var_tkwmethnode5->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16369);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16371);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16373);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16375);
exit(1);
}
var29 = NEW_parser_nodes__AExternMethPropdef(&type_parser_nodes__AExternMethPropdef);
var30 = NULL;
var31 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AExternMethPropdef__init_aexternmethpropdef]))(var29, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwmethnode5, var_pmethidnode6, var_psignaturenode7, var30, var_pexterncallsnode9, var31) /* init_aexternmethpropdef on <var29:AExternMethPropdef>*/;
CHECK_NEW_parser_nodes__AExternMethPropdef(var29);
var_ppropdefnode1 = var29;
var_node_list = var_ppropdefnode1;
var32 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction366> */
var33 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var32) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var33, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction366#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction366__action(val* self, val* p0) {
parser__ReduceAction366__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction367#action for (self: ReduceAction367, Parser) */
void parser__ReduceAction367__action(val* self, val* p0) {
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
val* var_tkwmethnode5 /* var tkwmethnode5: nullable Object */;
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
val* var29 /* : AExternMethPropdef */;
val* var30 /* : null */;
val* var31 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternMethPropdef */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16406);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16408);
exit(1);
}
var_tkwmethnode5 = var_nodearraylist3;
/* <var_tkwmethnode5:nullable Object> isa nullable TKwmeth */
cltype15 = type_nullable_parser_nodes__TKwmeth.color;
idtype16 = type_nullable_parser_nodes__TKwmeth.id;
if(var_tkwmethnode5 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_tkwmethnode5->type->table_size) {
var14 = 0;
} else {
var14 = var_tkwmethnode5->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16410);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16412);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16414);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16416);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16418);
exit(1);
}
var29 = NEW_parser_nodes__AExternMethPropdef(&type_parser_nodes__AExternMethPropdef);
var30 = NULL;
var31 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AExternMethPropdef__init_aexternmethpropdef]))(var29, var_pdocnode2, var30, var_pvisibilitynode4, var_tkwmethnode5, var_pmethidnode6, var_psignaturenode7, var_tstringnode8, var_pexterncallsnode9, var31) /* init_aexternmethpropdef on <var29:AExternMethPropdef>*/;
CHECK_NEW_parser_nodes__AExternMethPropdef(var29);
var_ppropdefnode1 = var29;
var_node_list = var_ppropdefnode1;
var32 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction367> */
var33 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var32) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var33, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction367#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction367__action(val* self, val* p0) {
parser__ReduceAction367__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction368#action for (self: ReduceAction368, Parser) */
void parser__ReduceAction368__action(val* self, val* p0) {
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
val* var_tkwmethnode5 /* var tkwmethnode5: nullable Object */;
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
val* var33 /* : AExternMethPropdef */;
val* var34 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternMethPropdef */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16450);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16452);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16454);
exit(1);
}
var_tkwmethnode5 = var_nodearraylist4;
/* <var_tkwmethnode5:nullable Object> isa nullable TKwmeth */
cltype19 = type_nullable_parser_nodes__TKwmeth.color;
idtype20 = type_nullable_parser_nodes__TKwmeth.id;
if(var_tkwmethnode5 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_tkwmethnode5->type->table_size) {
var18 = 0;
} else {
var18 = var_tkwmethnode5->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16456);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16458);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16460);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16462);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16464);
exit(1);
}
var33 = NEW_parser_nodes__AExternMethPropdef(&type_parser_nodes__AExternMethPropdef);
var34 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var33->class->vft[COLOR_parser_prod__AExternMethPropdef__init_aexternmethpropdef]))(var33, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwmethnode5, var_pmethidnode6, var_psignaturenode7, var_tstringnode8, var_pexterncallsnode9, var34) /* init_aexternmethpropdef on <var33:AExternMethPropdef>*/;
CHECK_NEW_parser_nodes__AExternMethPropdef(var33);
var_ppropdefnode1 = var33;
var_node_list = var_ppropdefnode1;
var35 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction368> */
var36 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var35) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var36, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction368#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction368__action(val* self, val* p0) {
parser__ReduceAction368__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction369#action for (self: ReduceAction369, Parser) */
void parser__ReduceAction369__action(val* self, val* p0) {
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
val* var_tkwmethnode5 /* var tkwmethnode5: nullable Object */;
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
val* var25 /* : AExternMethPropdef */;
val* var26 /* : null */;
val* var27 /* : null */;
val* var28 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternMethPropdef */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16494);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16496);
exit(1);
}
var_tkwmethnode5 = var_nodearraylist3;
/* <var_tkwmethnode5:nullable Object> isa nullable TKwmeth */
cltype14 = type_nullable_parser_nodes__TKwmeth.color;
idtype15 = type_nullable_parser_nodes__TKwmeth.id;
if(var_tkwmethnode5 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_tkwmethnode5->type->table_size) {
var13 = 0;
} else {
var13 = var_tkwmethnode5->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16498);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16500);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16502);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16504);
exit(1);
}
var25 = NEW_parser_nodes__AExternMethPropdef(&type_parser_nodes__AExternMethPropdef);
var26 = NULL;
var27 = NULL;
var28 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var25->class->vft[COLOR_parser_prod__AExternMethPropdef__init_aexternmethpropdef]))(var25, var_pdocnode2, var26, var_pvisibilitynode4, var_tkwmethnode5, var_pmethidnode6, var_psignaturenode7, var27, var28, var_pexterncodeblocknode10) /* init_aexternmethpropdef on <var25:AExternMethPropdef>*/;
CHECK_NEW_parser_nodes__AExternMethPropdef(var25);
var_ppropdefnode1 = var25;
var_node_list = var_ppropdefnode1;
var29 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction369> */
var30 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var29) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var30, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction369#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction369__action(val* self, val* p0) {
parser__ReduceAction369__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction370#action for (self: ReduceAction370, Parser) */
void parser__ReduceAction370__action(val* self, val* p0) {
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
val* var_tkwmethnode5 /* var tkwmethnode5: nullable Object */;
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
val* var29 /* : AExternMethPropdef */;
val* var30 /* : null */;
val* var31 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternMethPropdef */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16535);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16537);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16539);
exit(1);
}
var_tkwmethnode5 = var_nodearraylist4;
/* <var_tkwmethnode5:nullable Object> isa nullable TKwmeth */
cltype18 = type_nullable_parser_nodes__TKwmeth.color;
idtype19 = type_nullable_parser_nodes__TKwmeth.id;
if(var_tkwmethnode5 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tkwmethnode5->type->table_size) {
var17 = 0;
} else {
var17 = var_tkwmethnode5->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16541);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16543);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16545);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16547);
exit(1);
}
var29 = NEW_parser_nodes__AExternMethPropdef(&type_parser_nodes__AExternMethPropdef);
var30 = NULL;
var31 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AExternMethPropdef__init_aexternmethpropdef]))(var29, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwmethnode5, var_pmethidnode6, var_psignaturenode7, var30, var31, var_pexterncodeblocknode10) /* init_aexternmethpropdef on <var29:AExternMethPropdef>*/;
CHECK_NEW_parser_nodes__AExternMethPropdef(var29);
var_ppropdefnode1 = var29;
var_node_list = var_ppropdefnode1;
var32 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction370> */
var33 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var32) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var33, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction370#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction370__action(val* self, val* p0) {
parser__ReduceAction370__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction371#action for (self: ReduceAction371, Parser) */
void parser__ReduceAction371__action(val* self, val* p0) {
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
val* var_tkwmethnode5 /* var tkwmethnode5: nullable Object */;
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
val* var29 /* : AExternMethPropdef */;
val* var30 /* : null */;
val* var31 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternMethPropdef */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16578);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16580);
exit(1);
}
var_tkwmethnode5 = var_nodearraylist3;
/* <var_tkwmethnode5:nullable Object> isa nullable TKwmeth */
cltype15 = type_nullable_parser_nodes__TKwmeth.color;
idtype16 = type_nullable_parser_nodes__TKwmeth.id;
if(var_tkwmethnode5 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_tkwmethnode5->type->table_size) {
var14 = 0;
} else {
var14 = var_tkwmethnode5->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16582);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16584);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16586);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16588);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16590);
exit(1);
}
var29 = NEW_parser_nodes__AExternMethPropdef(&type_parser_nodes__AExternMethPropdef);
var30 = NULL;
var31 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AExternMethPropdef__init_aexternmethpropdef]))(var29, var_pdocnode2, var30, var_pvisibilitynode4, var_tkwmethnode5, var_pmethidnode6, var_psignaturenode7, var_tstringnode8, var31, var_pexterncodeblocknode10) /* init_aexternmethpropdef on <var29:AExternMethPropdef>*/;
CHECK_NEW_parser_nodes__AExternMethPropdef(var29);
var_ppropdefnode1 = var29;
var_node_list = var_ppropdefnode1;
var32 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction371> */
var33 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var32) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var33, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction371#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction371__action(val* self, val* p0) {
parser__ReduceAction371__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction372#action for (self: ReduceAction372, Parser) */
void parser__ReduceAction372__action(val* self, val* p0) {
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
val* var_tkwmethnode5 /* var tkwmethnode5: nullable Object */;
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
val* var33 /* : AExternMethPropdef */;
val* var34 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternMethPropdef */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16622);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16624);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16626);
exit(1);
}
var_tkwmethnode5 = var_nodearraylist4;
/* <var_tkwmethnode5:nullable Object> isa nullable TKwmeth */
cltype19 = type_nullable_parser_nodes__TKwmeth.color;
idtype20 = type_nullable_parser_nodes__TKwmeth.id;
if(var_tkwmethnode5 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_tkwmethnode5->type->table_size) {
var18 = 0;
} else {
var18 = var_tkwmethnode5->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16628);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16630);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16632);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16634);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16636);
exit(1);
}
var33 = NEW_parser_nodes__AExternMethPropdef(&type_parser_nodes__AExternMethPropdef);
var34 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var33->class->vft[COLOR_parser_prod__AExternMethPropdef__init_aexternmethpropdef]))(var33, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwmethnode5, var_pmethidnode6, var_psignaturenode7, var_tstringnode8, var34, var_pexterncodeblocknode10) /* init_aexternmethpropdef on <var33:AExternMethPropdef>*/;
CHECK_NEW_parser_nodes__AExternMethPropdef(var33);
var_ppropdefnode1 = var33;
var_node_list = var_ppropdefnode1;
var35 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction372> */
var36 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var35) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var36, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction372#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction372__action(val* self, val* p0) {
parser__ReduceAction372__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction373#action for (self: ReduceAction373, Parser) */
void parser__ReduceAction373__action(val* self, val* p0) {
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
val* var_tkwmethnode5 /* var tkwmethnode5: nullable Object */;
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
val* var29 /* : AExternMethPropdef */;
val* var30 /* : null */;
val* var31 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternMethPropdef */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16667);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16669);
exit(1);
}
var_tkwmethnode5 = var_nodearraylist3;
/* <var_tkwmethnode5:nullable Object> isa nullable TKwmeth */
cltype15 = type_nullable_parser_nodes__TKwmeth.color;
idtype16 = type_nullable_parser_nodes__TKwmeth.id;
if(var_tkwmethnode5 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_tkwmethnode5->type->table_size) {
var14 = 0;
} else {
var14 = var_tkwmethnode5->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16671);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16673);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16675);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16677);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16679);
exit(1);
}
var29 = NEW_parser_nodes__AExternMethPropdef(&type_parser_nodes__AExternMethPropdef);
var30 = NULL;
var31 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AExternMethPropdef__init_aexternmethpropdef]))(var29, var_pdocnode2, var30, var_pvisibilitynode4, var_tkwmethnode5, var_pmethidnode6, var_psignaturenode7, var31, var_pexterncallsnode9, var_pexterncodeblocknode10) /* init_aexternmethpropdef on <var29:AExternMethPropdef>*/;
CHECK_NEW_parser_nodes__AExternMethPropdef(var29);
var_ppropdefnode1 = var29;
var_node_list = var_ppropdefnode1;
var32 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction373> */
var33 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var32) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var33, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction373#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction373__action(val* self, val* p0) {
parser__ReduceAction373__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction374#action for (self: ReduceAction374, Parser) */
void parser__ReduceAction374__action(val* self, val* p0) {
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
val* var_tkwmethnode5 /* var tkwmethnode5: nullable Object */;
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
val* var33 /* : AExternMethPropdef */;
val* var34 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternMethPropdef */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16711);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16713);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16715);
exit(1);
}
var_tkwmethnode5 = var_nodearraylist4;
/* <var_tkwmethnode5:nullable Object> isa nullable TKwmeth */
cltype19 = type_nullable_parser_nodes__TKwmeth.color;
idtype20 = type_nullable_parser_nodes__TKwmeth.id;
if(var_tkwmethnode5 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_tkwmethnode5->type->table_size) {
var18 = 0;
} else {
var18 = var_tkwmethnode5->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16717);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16719);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16721);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16723);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16725);
exit(1);
}
var33 = NEW_parser_nodes__AExternMethPropdef(&type_parser_nodes__AExternMethPropdef);
var34 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var33->class->vft[COLOR_parser_prod__AExternMethPropdef__init_aexternmethpropdef]))(var33, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwmethnode5, var_pmethidnode6, var_psignaturenode7, var34, var_pexterncallsnode9, var_pexterncodeblocknode10) /* init_aexternmethpropdef on <var33:AExternMethPropdef>*/;
CHECK_NEW_parser_nodes__AExternMethPropdef(var33);
var_ppropdefnode1 = var33;
var_node_list = var_ppropdefnode1;
var35 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction374> */
var36 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var35) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var36, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction374#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction374__action(val* self, val* p0) {
parser__ReduceAction374__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction375#action for (self: ReduceAction375, Parser) */
void parser__ReduceAction375__action(val* self, val* p0) {
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
val* var_tkwmethnode5 /* var tkwmethnode5: nullable Object */;
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
val* var33 /* : AExternMethPropdef */;
val* var34 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternMethPropdef */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16757);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16759);
exit(1);
}
var_tkwmethnode5 = var_nodearraylist3;
/* <var_tkwmethnode5:nullable Object> isa nullable TKwmeth */
cltype16 = type_nullable_parser_nodes__TKwmeth.color;
idtype17 = type_nullable_parser_nodes__TKwmeth.id;
if(var_tkwmethnode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_tkwmethnode5->type->table_size) {
var15 = 0;
} else {
var15 = var_tkwmethnode5->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16761);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16763);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16765);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16767);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16769);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16771);
exit(1);
}
var33 = NEW_parser_nodes__AExternMethPropdef(&type_parser_nodes__AExternMethPropdef);
var34 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var33->class->vft[COLOR_parser_prod__AExternMethPropdef__init_aexternmethpropdef]))(var33, var_pdocnode2, var34, var_pvisibilitynode4, var_tkwmethnode5, var_pmethidnode6, var_psignaturenode7, var_tstringnode8, var_pexterncallsnode9, var_pexterncodeblocknode10) /* init_aexternmethpropdef on <var33:AExternMethPropdef>*/;
CHECK_NEW_parser_nodes__AExternMethPropdef(var33);
var_ppropdefnode1 = var33;
var_node_list = var_ppropdefnode1;
var35 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction375> */
var36 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var35) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var36, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction375#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction375__action(val* self, val* p0) {
parser__ReduceAction375__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction376#action for (self: ReduceAction376, Parser) */
void parser__ReduceAction376__action(val* self, val* p0) {
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
val* var_tkwmethnode5 /* var tkwmethnode5: nullable Object */;
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
val* var37 /* : AExternMethPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternMethPropdef */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16804);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16806);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16808);
exit(1);
}
var_tkwmethnode5 = var_nodearraylist4;
/* <var_tkwmethnode5:nullable Object> isa nullable TKwmeth */
cltype20 = type_nullable_parser_nodes__TKwmeth.color;
idtype21 = type_nullable_parser_nodes__TKwmeth.id;
if(var_tkwmethnode5 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_tkwmethnode5->type->table_size) {
var19 = 0;
} else {
var19 = var_tkwmethnode5->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16810);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16812);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16814);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16816);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16818);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16820);
exit(1);
}
var37 = NEW_parser_nodes__AExternMethPropdef(&type_parser_nodes__AExternMethPropdef);
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var37->class->vft[COLOR_parser_prod__AExternMethPropdef__init_aexternmethpropdef]))(var37, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwmethnode5, var_pmethidnode6, var_psignaturenode7, var_tstringnode8, var_pexterncallsnode9, var_pexterncodeblocknode10) /* init_aexternmethpropdef on <var37:AExternMethPropdef>*/;
CHECK_NEW_parser_nodes__AExternMethPropdef(var37);
var_ppropdefnode1 = var37;
var_node_list = var_ppropdefnode1;
var38 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction376> */
var39 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var38) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var39, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction376#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction376__action(val* self, val* p0) {
parser__ReduceAction376__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction377#action for (self: ReduceAction377, Parser) */
void parser__ReduceAction377__action(val* self, val* p0) {
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
val* var_tkwmethnode5 /* var tkwmethnode5: nullable Object */;
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
val* var23 /* : AExternMethPropdef */;
val* var24 /* : null */;
val* var25 /* : null */;
val* var26 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternMethPropdef */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16848);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16850);
exit(1);
}
var_tkwmethnode5 = var_nodearraylist3;
/* <var_tkwmethnode5:nullable Object> isa nullable TKwmeth */
cltype12 = type_nullable_parser_nodes__TKwmeth.color;
idtype13 = type_nullable_parser_nodes__TKwmeth.id;
if(var_tkwmethnode5 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_tkwmethnode5->type->table_size) {
var11 = 0;
} else {
var11 = var_tkwmethnode5->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16852);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16854);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16856);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16858);
exit(1);
}
var23 = NEW_parser_nodes__AExternMethPropdef(&type_parser_nodes__AExternMethPropdef);
var24 = NULL;
var25 = NULL;
var26 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var23->class->vft[COLOR_parser_prod__AExternMethPropdef__init_aexternmethpropdef]))(var23, var_pdocnode2, var24, var_pvisibilitynode4, var_tkwmethnode5, var_pmethidnode6, var_psignaturenode7, var25, var26, var_pexterncodeblocknode10) /* init_aexternmethpropdef on <var23:AExternMethPropdef>*/;
CHECK_NEW_parser_nodes__AExternMethPropdef(var23);
var_ppropdefnode1 = var23;
var_node_list = var_ppropdefnode1;
var27 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction377> */
var28 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var27) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var28, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction377#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction377__action(val* self, val* p0) {
parser__ReduceAction377__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction378#action for (self: ReduceAction378, Parser) */
void parser__ReduceAction378__action(val* self, val* p0) {
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
val* var_tkwmethnode5 /* var tkwmethnode5: nullable Object */;
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
val* var27 /* : AExternMethPropdef */;
val* var28 /* : null */;
val* var29 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternMethPropdef */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16887);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16889);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16891);
exit(1);
}
var_tkwmethnode5 = var_nodearraylist4;
/* <var_tkwmethnode5:nullable Object> isa nullable TKwmeth */
cltype16 = type_nullable_parser_nodes__TKwmeth.color;
idtype17 = type_nullable_parser_nodes__TKwmeth.id;
if(var_tkwmethnode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_tkwmethnode5->type->table_size) {
var15 = 0;
} else {
var15 = var_tkwmethnode5->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16893);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16895);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16897);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16899);
exit(1);
}
var27 = NEW_parser_nodes__AExternMethPropdef(&type_parser_nodes__AExternMethPropdef);
var28 = NULL;
var29 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var27->class->vft[COLOR_parser_prod__AExternMethPropdef__init_aexternmethpropdef]))(var27, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwmethnode5, var_pmethidnode6, var_psignaturenode7, var28, var29, var_pexterncodeblocknode10) /* init_aexternmethpropdef on <var27:AExternMethPropdef>*/;
CHECK_NEW_parser_nodes__AExternMethPropdef(var27);
var_ppropdefnode1 = var27;
var_node_list = var_ppropdefnode1;
var30 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction378> */
var31 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var30) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var31, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction378#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction378__action(val* self, val* p0) {
parser__ReduceAction378__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction379#action for (self: ReduceAction379, Parser) */
void parser__ReduceAction379__action(val* self, val* p0) {
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
val* var_tkwmethnode5 /* var tkwmethnode5: nullable Object */;
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
val* var_pexterncallsnode9 /* var pexterncallsnode9: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var27 /* : AExternMethPropdef */;
val* var28 /* : null */;
val* var29 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternMethPropdef */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16928);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16930);
exit(1);
}
var_tkwmethnode5 = var_nodearraylist3;
/* <var_tkwmethnode5:nullable Object> isa nullable TKwmeth */
cltype13 = type_nullable_parser_nodes__TKwmeth.color;
idtype14 = type_nullable_parser_nodes__TKwmeth.id;
if(var_tkwmethnode5 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_tkwmethnode5->type->table_size) {
var12 = 0;
} else {
var12 = var_tkwmethnode5->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16932);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16934);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16936);
exit(1);
}
var_pexterncallsnode9 = var_nodearraylist6;
/* <var_pexterncallsnode9:nullable Object> isa nullable AExternCalls */
cltype22 = type_nullable_parser_nodes__AExternCalls.color;
idtype23 = type_nullable_parser_nodes__AExternCalls.id;
if(var_pexterncallsnode9 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_pexterncallsnode9->type->table_size) {
var21 = 0;
} else {
var21 = var_pexterncallsnode9->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16938);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16940);
exit(1);
}
var27 = NEW_parser_nodes__AExternMethPropdef(&type_parser_nodes__AExternMethPropdef);
var28 = NULL;
var29 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var27->class->vft[COLOR_parser_prod__AExternMethPropdef__init_aexternmethpropdef]))(var27, var_pdocnode2, var28, var_pvisibilitynode4, var_tkwmethnode5, var_pmethidnode6, var_psignaturenode7, var29, var_pexterncallsnode9, var_pexterncodeblocknode10) /* init_aexternmethpropdef on <var27:AExternMethPropdef>*/;
CHECK_NEW_parser_nodes__AExternMethPropdef(var27);
var_ppropdefnode1 = var27;
var_node_list = var_ppropdefnode1;
var30 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction379> */
var31 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var30) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var31, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction379#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction379__action(val* self, val* p0) {
parser__ReduceAction379__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction380#action for (self: ReduceAction380, Parser) */
void parser__ReduceAction380__action(val* self, val* p0) {
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
val* var_tkwmethnode5 /* var tkwmethnode5: nullable Object */;
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
val* var_pexterncallsnode9 /* var pexterncallsnode9: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var31 /* : AExternMethPropdef */;
val* var32 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternMethPropdef */;
long var33 /* : Int */;
long var34 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16970);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16972);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16974);
exit(1);
}
var_tkwmethnode5 = var_nodearraylist4;
/* <var_tkwmethnode5:nullable Object> isa nullable TKwmeth */
cltype17 = type_nullable_parser_nodes__TKwmeth.color;
idtype18 = type_nullable_parser_nodes__TKwmeth.id;
if(var_tkwmethnode5 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tkwmethnode5->type->table_size) {
var16 = 0;
} else {
var16 = var_tkwmethnode5->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16976);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16978);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16980);
exit(1);
}
var_pexterncallsnode9 = var_nodearraylist7;
/* <var_pexterncallsnode9:nullable Object> isa nullable AExternCalls */
cltype26 = type_nullable_parser_nodes__AExternCalls.color;
idtype27 = type_nullable_parser_nodes__AExternCalls.id;
if(var_pexterncallsnode9 == NULL) {
var25 = 1;
} else {
if(cltype26 >= var_pexterncallsnode9->type->table_size) {
var25 = 0;
} else {
var25 = var_pexterncallsnode9->type->type_table[cltype26] == idtype27;
}
}
if (!var25) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16982);
exit(1);
}
var_pexterncodeblocknode10 = var_nodearraylist8;
/* <var_pexterncodeblocknode10:nullable Object> isa nullable AExternCodeBlock */
cltype29 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype30 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode10 == NULL) {
var28 = 1;
} else {
if(cltype29 >= var_pexterncodeblocknode10->type->table_size) {
var28 = 0;
} else {
var28 = var_pexterncodeblocknode10->type->type_table[cltype29] == idtype30;
}
}
if (!var28) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 16984);
exit(1);
}
var31 = NEW_parser_nodes__AExternMethPropdef(&type_parser_nodes__AExternMethPropdef);
var32 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var31->class->vft[COLOR_parser_prod__AExternMethPropdef__init_aexternmethpropdef]))(var31, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwmethnode5, var_pmethidnode6, var_psignaturenode7, var32, var_pexterncallsnode9, var_pexterncodeblocknode10) /* init_aexternmethpropdef on <var31:AExternMethPropdef>*/;
CHECK_NEW_parser_nodes__AExternMethPropdef(var31);
var_ppropdefnode1 = var31;
var_node_list = var_ppropdefnode1;
var33 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction380> */
var34 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var33) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var34, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction380#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction380__action(val* self, val* p0) {
parser__ReduceAction380__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction381#action for (self: ReduceAction381, Parser) */
void parser__ReduceAction381__action(val* self, val* p0) {
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
val* var_tattridnode8 /* var tattridnode8: nullable Object */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17010);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17012);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17014);
exit(1);
}
var_tattridnode8 = var_nodearraylist4;
/* <var_tattridnode8:nullable Object> isa nullable TAttrid */
cltype13 = type_nullable_parser_nodes__TAttrid.color;
idtype14 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode8 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_tattridnode8->type->table_size) {
var12 = 0;
} else {
var12 = var_tattridnode8->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17016);
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
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var15->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var15, var_pdocnode2, var16, var17, var18, var_pvisibilitynode6, var_tkwvarnode7, var_tattridnode8, var19, var20, var21, var22) /* init_aattrpropdef on <var15:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var15);
var_ppropdefnode1 = var15;
var_node_list = var_ppropdefnode1;
var23 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction381> */
var24 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var23) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var24, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction381#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction381__action(val* self, val* p0) {
parser__ReduceAction381__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction382#action for (self: ReduceAction382, Parser) */
void parser__ReduceAction382__action(val* self, val* p0) {
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
val* var_tattridnode8 /* var tattridnode8: nullable Object */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17045);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17047);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17049);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17051);
exit(1);
}
var_tattridnode8 = var_nodearraylist5;
/* <var_tattridnode8:nullable Object> isa nullable TAttrid */
cltype17 = type_nullable_parser_nodes__TAttrid.color;
idtype18 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode8 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tattridnode8->type->table_size) {
var16 = 0;
} else {
var16 = var_tattridnode8->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17053);
exit(1);
}
var19 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var20 = NULL;
var21 = NULL;
var22 = NULL;
var23 = NULL;
var24 = NULL;
var25 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var19->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var19, var_pdocnode2, var20, var21, var_tkwredefnode5, var_pvisibilitynode6, var_tkwvarnode7, var_tattridnode8, var22, var23, var24, var25) /* init_aattrpropdef on <var19:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var19);
var_ppropdefnode1 = var19;
var_node_list = var_ppropdefnode1;
var26 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction382> */
var27 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var26) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var27, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction382#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction382__action(val* self, val* p0) {
parser__ReduceAction382__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction383#action for (self: ReduceAction383, Parser) */
void parser__ReduceAction383__action(val* self, val* p0) {
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
val* var_pablenode3 /* var pablenode3: nullable Object */;
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
val* var_tattridnode8 /* var tattridnode8: nullable Object */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17082);
exit(1);
}
var_pablenode3 = var_nodearraylist2;
/* <var_pablenode3:nullable Object> isa nullable AAble */
cltype8 = type_nullable_parser_nodes__AAble.color;
idtype9 = type_nullable_parser_nodes__AAble.id;
if(var_pablenode3 == NULL) {
var7 = 1;
} else {
if(cltype8 >= var_pablenode3->type->table_size) {
var7 = 0;
} else {
var7 = var_pablenode3->type->type_table[cltype8] == idtype9;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17084);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17086);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17088);
exit(1);
}
var_tattridnode8 = var_nodearraylist5;
/* <var_tattridnode8:nullable Object> isa nullable TAttrid */
cltype17 = type_nullable_parser_nodes__TAttrid.color;
idtype18 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode8 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tattridnode8->type->table_size) {
var16 = 0;
} else {
var16 = var_tattridnode8->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17090);
exit(1);
}
var19 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var20 = NULL;
var21 = NULL;
var22 = NULL;
var23 = NULL;
var24 = NULL;
var25 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var19->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var19, var_pdocnode2, var_pablenode3, var20, var21, var_pvisibilitynode6, var_tkwvarnode7, var_tattridnode8, var22, var23, var24, var25) /* init_aattrpropdef on <var19:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var19);
var_ppropdefnode1 = var19;
var_node_list = var_ppropdefnode1;
var26 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction383> */
var27 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var26) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var27, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction383#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction383__action(val* self, val* p0) {
parser__ReduceAction383__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction384#action for (self: ReduceAction384, Parser) */
void parser__ReduceAction384__action(val* self, val* p0) {
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
val* var_pablenode3 /* var pablenode3: nullable Object */;
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
val* var_tattridnode8 /* var tattridnode8: nullable Object */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17120);
exit(1);
}
var_pablenode3 = var_nodearraylist2;
/* <var_pablenode3:nullable Object> isa nullable AAble */
cltype9 = type_nullable_parser_nodes__AAble.color;
idtype10 = type_nullable_parser_nodes__AAble.id;
if(var_pablenode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_pablenode3->type->table_size) {
var8 = 0;
} else {
var8 = var_pablenode3->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17122);
exit(1);
}
var_tkwredefnode5 = var_nodearraylist3;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17124);
exit(1);
}
var_pvisibilitynode6 = var_nodearraylist4;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17126);
exit(1);
}
var_tkwvarnode7 = var_nodearraylist5;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17128);
exit(1);
}
var_tattridnode8 = var_nodearraylist6;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17130);
exit(1);
}
var23 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var24 = NULL;
var25 = NULL;
var26 = NULL;
var27 = NULL;
var28 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var23->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var23, var_pdocnode2, var_pablenode3, var24, var_tkwredefnode5, var_pvisibilitynode6, var_tkwvarnode7, var_tattridnode8, var25, var26, var27, var28) /* init_aattrpropdef on <var23:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var23);
var_ppropdefnode1 = var23;
var_node_list = var_ppropdefnode1;
var29 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction384> */
var30 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var29) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var30, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction384#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction384__action(val* self, val* p0) {
parser__ReduceAction384__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction385#action for (self: ReduceAction385, Parser) */
void parser__ReduceAction385__action(val* self, val* p0) {
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
val* var_tattridnode8 /* var tattridnode8: nullable Object */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17159);
exit(1);
}
var_pablenode4 = var_nodearraylist2;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17161);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17163);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17165);
exit(1);
}
var_tattridnode8 = var_nodearraylist5;
/* <var_tattridnode8:nullable Object> isa nullable TAttrid */
cltype17 = type_nullable_parser_nodes__TAttrid.color;
idtype18 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode8 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tattridnode8->type->table_size) {
var16 = 0;
} else {
var16 = var_tattridnode8->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17167);
exit(1);
}
var19 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var20 = NULL;
var21 = NULL;
var22 = NULL;
var23 = NULL;
var24 = NULL;
var25 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var19->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var19, var_pdocnode2, var20, var_pablenode4, var21, var_pvisibilitynode6, var_tkwvarnode7, var_tattridnode8, var22, var23, var24, var25) /* init_aattrpropdef on <var19:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var19);
var_ppropdefnode1 = var19;
var_node_list = var_ppropdefnode1;
var26 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction385> */
var27 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var26) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var27, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction385#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction385__action(val* self, val* p0) {
parser__ReduceAction385__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction386#action for (self: ReduceAction386, Parser) */
void parser__ReduceAction386__action(val* self, val* p0) {
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
val* var_tattridnode8 /* var tattridnode8: nullable Object */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17197);
exit(1);
}
var_pablenode4 = var_nodearraylist2;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17199);
exit(1);
}
var_tkwredefnode5 = var_nodearraylist3;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17201);
exit(1);
}
var_pvisibilitynode6 = var_nodearraylist4;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17203);
exit(1);
}
var_tkwvarnode7 = var_nodearraylist5;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17205);
exit(1);
}
var_tattridnode8 = var_nodearraylist6;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17207);
exit(1);
}
var23 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var24 = NULL;
var25 = NULL;
var26 = NULL;
var27 = NULL;
var28 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var23->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var23, var_pdocnode2, var24, var_pablenode4, var_tkwredefnode5, var_pvisibilitynode6, var_tkwvarnode7, var_tattridnode8, var25, var26, var27, var28) /* init_aattrpropdef on <var23:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var23);
var_ppropdefnode1 = var23;
var_node_list = var_ppropdefnode1;
var29 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction386> */
var30 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var29) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var30, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction386#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction386__action(val* self, val* p0) {
parser__ReduceAction386__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction387#action for (self: ReduceAction387, Parser) */
void parser__ReduceAction387__action(val* self, val* p0) {
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
val* var_pablenode3 /* var pablenode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17237);
exit(1);
}
var_pablenode3 = var_nodearraylist2;
/* <var_pablenode3:nullable Object> isa nullable AAble */
cltype9 = type_nullable_parser_nodes__AAble.color;
idtype10 = type_nullable_parser_nodes__AAble.id;
if(var_pablenode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_pablenode3->type->table_size) {
var8 = 0;
} else {
var8 = var_pablenode3->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17239);
exit(1);
}
var_pablenode4 = var_nodearraylist3;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17241);
exit(1);
}
var_pvisibilitynode6 = var_nodearraylist4;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17243);
exit(1);
}
var_tkwvarnode7 = var_nodearraylist5;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17245);
exit(1);
}
var_tattridnode8 = var_nodearraylist6;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17247);
exit(1);
}
var23 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var24 = NULL;
var25 = NULL;
var26 = NULL;
var27 = NULL;
var28 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var23->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var23, var_pdocnode2, var_pablenode3, var_pablenode4, var24, var_pvisibilitynode6, var_tkwvarnode7, var_tattridnode8, var25, var26, var27, var28) /* init_aattrpropdef on <var23:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var23);
var_ppropdefnode1 = var23;
var_node_list = var_ppropdefnode1;
var29 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction387> */
var30 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var29) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var30, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction387#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction387__action(val* self, val* p0) {
parser__ReduceAction387__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction388#action for (self: ReduceAction388, Parser) */
void parser__ReduceAction388__action(val* self, val* p0) {
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
val* var_pablenode3 /* var pablenode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17278);
exit(1);
}
var_pablenode3 = var_nodearraylist2;
/* <var_pablenode3:nullable Object> isa nullable AAble */
cltype10 = type_nullable_parser_nodes__AAble.color;
idtype11 = type_nullable_parser_nodes__AAble.id;
if(var_pablenode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_pablenode3->type->table_size) {
var9 = 0;
} else {
var9 = var_pablenode3->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17280);
exit(1);
}
var_pablenode4 = var_nodearraylist3;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17282);
exit(1);
}
var_tkwredefnode5 = var_nodearraylist4;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17284);
exit(1);
}
var_pvisibilitynode6 = var_nodearraylist5;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17286);
exit(1);
}
var_tkwvarnode7 = var_nodearraylist6;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17288);
exit(1);
}
var_tattridnode8 = var_nodearraylist7;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17290);
exit(1);
}
var27 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var28 = NULL;
var29 = NULL;
var30 = NULL;
var31 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var27->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var27, var_pdocnode2, var_pablenode3, var_pablenode4, var_tkwredefnode5, var_pvisibilitynode6, var_tkwvarnode7, var_tattridnode8, var28, var29, var30, var31) /* init_aattrpropdef on <var27:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var27);
var_ppropdefnode1 = var27;
var_node_list = var_ppropdefnode1;
var32 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction388> */
var33 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var32) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var33, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction388#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction388__action(val* self, val* p0) {
parser__ReduceAction388__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction389#action for (self: ReduceAction389, Parser) */
void parser__ReduceAction389__action(val* self, val* p0) {
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
val* var_tattridnode8 /* var tattridnode8: nullable Object */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17319);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17321);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17323);
exit(1);
}
var_tattridnode8 = var_nodearraylist4;
/* <var_tattridnode8:nullable Object> isa nullable TAttrid */
cltype14 = type_nullable_parser_nodes__TAttrid.color;
idtype15 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode8 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_tattridnode8->type->table_size) {
var13 = 0;
} else {
var13 = var_tattridnode8->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17325);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17327);
exit(1);
}
var19 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var20 = NULL;
var21 = NULL;
var22 = NULL;
var23 = NULL;
var24 = NULL;
var25 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var19->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var19, var_pdocnode2, var20, var21, var22, var_pvisibilitynode6, var_tkwvarnode7, var_tattridnode8, var23, var_ptypenode10, var24, var25) /* init_aattrpropdef on <var19:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var19);
var_ppropdefnode1 = var19;
var_node_list = var_ppropdefnode1;
var26 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction389> */
var27 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var26) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var27, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction389#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction389__action(val* self, val* p0) {
parser__ReduceAction389__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction390#action for (self: ReduceAction390, Parser) */
void parser__ReduceAction390__action(val* self, val* p0) {
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
val* var_tattridnode8 /* var tattridnode8: nullable Object */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17357);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17359);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17361);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17363);
exit(1);
}
var_tattridnode8 = var_nodearraylist5;
/* <var_tattridnode8:nullable Object> isa nullable TAttrid */
cltype18 = type_nullable_parser_nodes__TAttrid.color;
idtype19 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode8 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tattridnode8->type->table_size) {
var17 = 0;
} else {
var17 = var_tattridnode8->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17365);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17367);
exit(1);
}
var23 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var24 = NULL;
var25 = NULL;
var26 = NULL;
var27 = NULL;
var28 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var23->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var23, var_pdocnode2, var24, var25, var_tkwredefnode5, var_pvisibilitynode6, var_tkwvarnode7, var_tattridnode8, var26, var_ptypenode10, var27, var28) /* init_aattrpropdef on <var23:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var23);
var_ppropdefnode1 = var23;
var_node_list = var_ppropdefnode1;
var29 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction390> */
var30 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var29) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var30, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction390#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction390__action(val* self, val* p0) {
parser__ReduceAction390__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction391#action for (self: ReduceAction391, Parser) */
void parser__ReduceAction391__action(val* self, val* p0) {
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
val* var_pablenode3 /* var pablenode3: nullable Object */;
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
val* var_tattridnode8 /* var tattridnode8: nullable Object */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17397);
exit(1);
}
var_pablenode3 = var_nodearraylist2;
/* <var_pablenode3:nullable Object> isa nullable AAble */
cltype9 = type_nullable_parser_nodes__AAble.color;
idtype10 = type_nullable_parser_nodes__AAble.id;
if(var_pablenode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_pablenode3->type->table_size) {
var8 = 0;
} else {
var8 = var_pablenode3->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17399);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17401);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17403);
exit(1);
}
var_tattridnode8 = var_nodearraylist5;
/* <var_tattridnode8:nullable Object> isa nullable TAttrid */
cltype18 = type_nullable_parser_nodes__TAttrid.color;
idtype19 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode8 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tattridnode8->type->table_size) {
var17 = 0;
} else {
var17 = var_tattridnode8->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17405);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17407);
exit(1);
}
var23 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var24 = NULL;
var25 = NULL;
var26 = NULL;
var27 = NULL;
var28 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var23->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var23, var_pdocnode2, var_pablenode3, var24, var25, var_pvisibilitynode6, var_tkwvarnode7, var_tattridnode8, var26, var_ptypenode10, var27, var28) /* init_aattrpropdef on <var23:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var23);
var_ppropdefnode1 = var23;
var_node_list = var_ppropdefnode1;
var29 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction391> */
var30 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var29) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var30, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction391#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction391__action(val* self, val* p0) {
parser__ReduceAction391__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction392#action for (self: ReduceAction392, Parser) */
void parser__ReduceAction392__action(val* self, val* p0) {
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
val* var_pablenode3 /* var pablenode3: nullable Object */;
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
val* var_tattridnode8 /* var tattridnode8: nullable Object */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17438);
exit(1);
}
var_pablenode3 = var_nodearraylist2;
/* <var_pablenode3:nullable Object> isa nullable AAble */
cltype10 = type_nullable_parser_nodes__AAble.color;
idtype11 = type_nullable_parser_nodes__AAble.id;
if(var_pablenode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_pablenode3->type->table_size) {
var9 = 0;
} else {
var9 = var_pablenode3->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17440);
exit(1);
}
var_tkwredefnode5 = var_nodearraylist3;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17442);
exit(1);
}
var_pvisibilitynode6 = var_nodearraylist4;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17444);
exit(1);
}
var_tkwvarnode7 = var_nodearraylist5;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17446);
exit(1);
}
var_tattridnode8 = var_nodearraylist6;
/* <var_tattridnode8:nullable Object> isa nullable TAttrid */
cltype22 = type_nullable_parser_nodes__TAttrid.color;
idtype23 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode8 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_tattridnode8->type->table_size) {
var21 = 0;
} else {
var21 = var_tattridnode8->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17448);
exit(1);
}
var_ptypenode10 = var_nodearraylist7;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17450);
exit(1);
}
var27 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var28 = NULL;
var29 = NULL;
var30 = NULL;
var31 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var27->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var27, var_pdocnode2, var_pablenode3, var28, var_tkwredefnode5, var_pvisibilitynode6, var_tkwvarnode7, var_tattridnode8, var29, var_ptypenode10, var30, var31) /* init_aattrpropdef on <var27:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var27);
var_ppropdefnode1 = var27;
var_node_list = var_ppropdefnode1;
var32 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction392> */
var33 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var32) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var33, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction392#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction392__action(val* self, val* p0) {
parser__ReduceAction392__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction393#action for (self: ReduceAction393, Parser) */
void parser__ReduceAction393__action(val* self, val* p0) {
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
val* var_tattridnode8 /* var tattridnode8: nullable Object */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17480);
exit(1);
}
var_pablenode4 = var_nodearraylist2;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17482);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17484);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17486);
exit(1);
}
var_tattridnode8 = var_nodearraylist5;
/* <var_tattridnode8:nullable Object> isa nullable TAttrid */
cltype18 = type_nullable_parser_nodes__TAttrid.color;
idtype19 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode8 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tattridnode8->type->table_size) {
var17 = 0;
} else {
var17 = var_tattridnode8->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17488);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17490);
exit(1);
}
var23 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var24 = NULL;
var25 = NULL;
var26 = NULL;
var27 = NULL;
var28 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var23->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var23, var_pdocnode2, var24, var_pablenode4, var25, var_pvisibilitynode6, var_tkwvarnode7, var_tattridnode8, var26, var_ptypenode10, var27, var28) /* init_aattrpropdef on <var23:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var23);
var_ppropdefnode1 = var23;
var_node_list = var_ppropdefnode1;
var29 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction393> */
var30 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var29) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var30, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction393#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction393__action(val* self, val* p0) {
parser__ReduceAction393__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction394#action for (self: ReduceAction394, Parser) */
void parser__ReduceAction394__action(val* self, val* p0) {
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
val* var_tattridnode8 /* var tattridnode8: nullable Object */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17521);
exit(1);
}
var_pablenode4 = var_nodearraylist2;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17523);
exit(1);
}
var_tkwredefnode5 = var_nodearraylist3;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17525);
exit(1);
}
var_pvisibilitynode6 = var_nodearraylist4;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17527);
exit(1);
}
var_tkwvarnode7 = var_nodearraylist5;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17529);
exit(1);
}
var_tattridnode8 = var_nodearraylist6;
/* <var_tattridnode8:nullable Object> isa nullable TAttrid */
cltype22 = type_nullable_parser_nodes__TAttrid.color;
idtype23 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode8 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_tattridnode8->type->table_size) {
var21 = 0;
} else {
var21 = var_tattridnode8->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17531);
exit(1);
}
var_ptypenode10 = var_nodearraylist7;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17533);
exit(1);
}
var27 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var28 = NULL;
var29 = NULL;
var30 = NULL;
var31 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var27->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var27, var_pdocnode2, var28, var_pablenode4, var_tkwredefnode5, var_pvisibilitynode6, var_tkwvarnode7, var_tattridnode8, var29, var_ptypenode10, var30, var31) /* init_aattrpropdef on <var27:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var27);
var_ppropdefnode1 = var27;
var_node_list = var_ppropdefnode1;
var32 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction394> */
var33 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var32) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var33, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction394#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction394__action(val* self, val* p0) {
parser__ReduceAction394__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction395#action for (self: ReduceAction395, Parser) */
void parser__ReduceAction395__action(val* self, val* p0) {
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
val* var_pablenode3 /* var pablenode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
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
val* var_tattridnode8 /* var tattridnode8: nullable Object */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17564);
exit(1);
}
var_pablenode3 = var_nodearraylist2;
/* <var_pablenode3:nullable Object> isa nullable AAble */
cltype10 = type_nullable_parser_nodes__AAble.color;
idtype11 = type_nullable_parser_nodes__AAble.id;
if(var_pablenode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_pablenode3->type->table_size) {
var9 = 0;
} else {
var9 = var_pablenode3->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17566);
exit(1);
}
var_pablenode4 = var_nodearraylist3;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17568);
exit(1);
}
var_pvisibilitynode6 = var_nodearraylist4;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17570);
exit(1);
}
var_tkwvarnode7 = var_nodearraylist5;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17572);
exit(1);
}
var_tattridnode8 = var_nodearraylist6;
/* <var_tattridnode8:nullable Object> isa nullable TAttrid */
cltype22 = type_nullable_parser_nodes__TAttrid.color;
idtype23 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode8 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_tattridnode8->type->table_size) {
var21 = 0;
} else {
var21 = var_tattridnode8->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17574);
exit(1);
}
var_ptypenode10 = var_nodearraylist7;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17576);
exit(1);
}
var27 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var28 = NULL;
var29 = NULL;
var30 = NULL;
var31 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var27->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var27, var_pdocnode2, var_pablenode3, var_pablenode4, var28, var_pvisibilitynode6, var_tkwvarnode7, var_tattridnode8, var29, var_ptypenode10, var30, var31) /* init_aattrpropdef on <var27:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var27);
var_ppropdefnode1 = var27;
var_node_list = var_ppropdefnode1;
var32 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction395> */
var33 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var32) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var33, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction395#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction395__action(val* self, val* p0) {
parser__ReduceAction395__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction396#action for (self: ReduceAction396, Parser) */
void parser__ReduceAction396__action(val* self, val* p0) {
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
val* var_pablenode3 /* var pablenode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
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
val* var_tattridnode8 /* var tattridnode8: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_ptypenode10 /* var ptypenode10: nullable Object */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17608);
exit(1);
}
var_pablenode3 = var_nodearraylist2;
/* <var_pablenode3:nullable Object> isa nullable AAble */
cltype11 = type_nullable_parser_nodes__AAble.color;
idtype12 = type_nullable_parser_nodes__AAble.id;
if(var_pablenode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_pablenode3->type->table_size) {
var10 = 0;
} else {
var10 = var_pablenode3->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17610);
exit(1);
}
var_pablenode4 = var_nodearraylist3;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17612);
exit(1);
}
var_tkwredefnode5 = var_nodearraylist4;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17614);
exit(1);
}
var_pvisibilitynode6 = var_nodearraylist5;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17616);
exit(1);
}
var_tkwvarnode7 = var_nodearraylist6;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17618);
exit(1);
}
var_tattridnode8 = var_nodearraylist7;
/* <var_tattridnode8:nullable Object> isa nullable TAttrid */
cltype26 = type_nullable_parser_nodes__TAttrid.color;
idtype27 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode8 == NULL) {
var25 = 1;
} else {
if(cltype26 >= var_tattridnode8->type->table_size) {
var25 = 0;
} else {
var25 = var_tattridnode8->type->type_table[cltype26] == idtype27;
}
}
if (!var25) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17620);
exit(1);
}
var_ptypenode10 = var_nodearraylist8;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17622);
exit(1);
}
var31 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var32 = NULL;
var33 = NULL;
var34 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var31->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var31, var_pdocnode2, var_pablenode3, var_pablenode4, var_tkwredefnode5, var_pvisibilitynode6, var_tkwvarnode7, var_tattridnode8, var32, var_ptypenode10, var33, var34) /* init_aattrpropdef on <var31:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var31);
var_ppropdefnode1 = var31;
var_node_list = var_ppropdefnode1;
var35 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction396> */
var36 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var35) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var36, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction396#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction396__action(val* self, val* p0) {
parser__ReduceAction396__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction397#action for (self: ReduceAction397, Parser) */
void parser__ReduceAction397__action(val* self, val* p0) {
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
val* var_tattridnode8 /* var tattridnode8: nullable Object */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17653);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17655);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17657);
exit(1);
}
var_tattridnode8 = var_nodearraylist4;
/* <var_tattridnode8:nullable Object> isa nullable TAttrid */
cltype16 = type_nullable_parser_nodes__TAttrid.color;
idtype17 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode8 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_tattridnode8->type->table_size) {
var15 = 0;
} else {
var15 = var_tattridnode8->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17659);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17661);
exit(1);
}
var21 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var22 = NULL;
var23 = NULL;
var24 = NULL;
var25 = NULL;
var26 = NULL;
var27 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var21->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var21, var_pdocnode2, var22, var23, var24, var_pvisibilitynode6, var_tkwvarnode7, var_tattridnode8, var25, var26, var27, var_pexprnode12) /* init_aattrpropdef on <var21:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var21);
var_ppropdefnode1 = var21;
var_node_list = var_ppropdefnode1;
var28 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction397> */
var29 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var28) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var29, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction397#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction397__action(val* self, val* p0) {
parser__ReduceAction397__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction398#action for (self: ReduceAction398, Parser) */
void parser__ReduceAction398__action(val* self, val* p0) {
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
val* var_tattridnode8 /* var tattridnode8: nullable Object */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17693);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17695);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17697);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17699);
exit(1);
}
var_tattridnode8 = var_nodearraylist5;
/* <var_tattridnode8:nullable Object> isa nullable TAttrid */
cltype20 = type_nullable_parser_nodes__TAttrid.color;
idtype21 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode8 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_tattridnode8->type->table_size) {
var19 = 0;
} else {
var19 = var_tattridnode8->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17701);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17703);
exit(1);
}
var25 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var26 = NULL;
var27 = NULL;
var28 = NULL;
var29 = NULL;
var30 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var25->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var25, var_pdocnode2, var26, var27, var_tkwredefnode5, var_pvisibilitynode6, var_tkwvarnode7, var_tattridnode8, var28, var29, var30, var_pexprnode12) /* init_aattrpropdef on <var25:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var25);
var_ppropdefnode1 = var25;
var_node_list = var_ppropdefnode1;
var31 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction398> */
var32 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var31) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var32, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction398#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction398__action(val* self, val* p0) {
parser__ReduceAction398__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction399#action for (self: ReduceAction399, Parser) */
void parser__ReduceAction399__action(val* self, val* p0) {
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
val* var_pablenode3 /* var pablenode3: nullable Object */;
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
val* var_tattridnode8 /* var tattridnode8: nullable Object */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17735);
exit(1);
}
var_pablenode3 = var_nodearraylist2;
/* <var_pablenode3:nullable Object> isa nullable AAble */
cltype11 = type_nullable_parser_nodes__AAble.color;
idtype12 = type_nullable_parser_nodes__AAble.id;
if(var_pablenode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_pablenode3->type->table_size) {
var10 = 0;
} else {
var10 = var_pablenode3->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17737);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17739);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17741);
exit(1);
}
var_tattridnode8 = var_nodearraylist5;
/* <var_tattridnode8:nullable Object> isa nullable TAttrid */
cltype20 = type_nullable_parser_nodes__TAttrid.color;
idtype21 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode8 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_tattridnode8->type->table_size) {
var19 = 0;
} else {
var19 = var_tattridnode8->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17743);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17745);
exit(1);
}
var25 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var26 = NULL;
var27 = NULL;
var28 = NULL;
var29 = NULL;
var30 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var25->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var25, var_pdocnode2, var_pablenode3, var26, var27, var_pvisibilitynode6, var_tkwvarnode7, var_tattridnode8, var28, var29, var30, var_pexprnode12) /* init_aattrpropdef on <var25:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var25);
var_ppropdefnode1 = var25;
var_node_list = var_ppropdefnode1;
var31 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction399> */
var32 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var31) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var32, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction399#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction399__action(val* self, val* p0) {
parser__ReduceAction399__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction400#action for (self: ReduceAction400, Parser) */
void parser__ReduceAction400__action(val* self, val* p0) {
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
val* var_pablenode3 /* var pablenode3: nullable Object */;
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
val* var_tattridnode8 /* var tattridnode8: nullable Object */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17778);
exit(1);
}
var_pablenode3 = var_nodearraylist2;
/* <var_pablenode3:nullable Object> isa nullable AAble */
cltype12 = type_nullable_parser_nodes__AAble.color;
idtype13 = type_nullable_parser_nodes__AAble.id;
if(var_pablenode3 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_pablenode3->type->table_size) {
var11 = 0;
} else {
var11 = var_pablenode3->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17780);
exit(1);
}
var_tkwredefnode5 = var_nodearraylist3;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17782);
exit(1);
}
var_pvisibilitynode6 = var_nodearraylist4;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17784);
exit(1);
}
var_tkwvarnode7 = var_nodearraylist5;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17786);
exit(1);
}
var_tattridnode8 = var_nodearraylist6;
/* <var_tattridnode8:nullable Object> isa nullable TAttrid */
cltype24 = type_nullable_parser_nodes__TAttrid.color;
idtype25 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode8 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_tattridnode8->type->table_size) {
var23 = 0;
} else {
var23 = var_tattridnode8->type->type_table[cltype24] == idtype25;
}
}
if (!var23) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17788);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17790);
exit(1);
}
var29 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var30 = NULL;
var31 = NULL;
var32 = NULL;
var33 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var29, var_pdocnode2, var_pablenode3, var30, var_tkwredefnode5, var_pvisibilitynode6, var_tkwvarnode7, var_tattridnode8, var31, var32, var33, var_pexprnode12) /* init_aattrpropdef on <var29:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var29);
var_ppropdefnode1 = var29;
var_node_list = var_ppropdefnode1;
var34 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction400> */
var35 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var34) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var35, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction400#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction400__action(val* self, val* p0) {
parser__ReduceAction400__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction401#action for (self: ReduceAction401, Parser) */
void parser__ReduceAction401__action(val* self, val* p0) {
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
val* var_tattridnode8 /* var tattridnode8: nullable Object */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17822);
exit(1);
}
var_pablenode4 = var_nodearraylist2;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17824);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17826);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17828);
exit(1);
}
var_tattridnode8 = var_nodearraylist5;
/* <var_tattridnode8:nullable Object> isa nullable TAttrid */
cltype20 = type_nullable_parser_nodes__TAttrid.color;
idtype21 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode8 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_tattridnode8->type->table_size) {
var19 = 0;
} else {
var19 = var_tattridnode8->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17830);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17832);
exit(1);
}
var25 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var26 = NULL;
var27 = NULL;
var28 = NULL;
var29 = NULL;
var30 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var25->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var25, var_pdocnode2, var26, var_pablenode4, var27, var_pvisibilitynode6, var_tkwvarnode7, var_tattridnode8, var28, var29, var30, var_pexprnode12) /* init_aattrpropdef on <var25:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var25);
var_ppropdefnode1 = var25;
var_node_list = var_ppropdefnode1;
var31 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction401> */
var32 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var31) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var32, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction401#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction401__action(val* self, val* p0) {
parser__ReduceAction401__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction402#action for (self: ReduceAction402, Parser) */
void parser__ReduceAction402__action(val* self, val* p0) {
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
val* var_tattridnode8 /* var tattridnode8: nullable Object */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17865);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17867);
exit(1);
}
var_tkwredefnode5 = var_nodearraylist3;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17869);
exit(1);
}
var_pvisibilitynode6 = var_nodearraylist4;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17871);
exit(1);
}
var_tkwvarnode7 = var_nodearraylist5;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17873);
exit(1);
}
var_tattridnode8 = var_nodearraylist6;
/* <var_tattridnode8:nullable Object> isa nullable TAttrid */
cltype24 = type_nullable_parser_nodes__TAttrid.color;
idtype25 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode8 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_tattridnode8->type->table_size) {
var23 = 0;
} else {
var23 = var_tattridnode8->type->type_table[cltype24] == idtype25;
}
}
if (!var23) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17875);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17877);
exit(1);
}
var29 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var30 = NULL;
var31 = NULL;
var32 = NULL;
var33 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var29, var_pdocnode2, var30, var_pablenode4, var_tkwredefnode5, var_pvisibilitynode6, var_tkwvarnode7, var_tattridnode8, var31, var32, var33, var_pexprnode12) /* init_aattrpropdef on <var29:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var29);
var_ppropdefnode1 = var29;
var_node_list = var_ppropdefnode1;
var34 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction402> */
var35 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var34) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var35, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction402#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction402__action(val* self, val* p0) {
parser__ReduceAction402__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction403#action for (self: ReduceAction403, Parser) */
void parser__ReduceAction403__action(val* self, val* p0) {
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
val* var_pablenode3 /* var pablenode3: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_pablenode4 /* var pablenode4: nullable Object */;
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
val* var_tattridnode8 /* var tattridnode8: nullable Object */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17910);
exit(1);
}
var_pablenode3 = var_nodearraylist2;
/* <var_pablenode3:nullable Object> isa nullable AAble */
cltype12 = type_nullable_parser_nodes__AAble.color;
idtype13 = type_nullable_parser_nodes__AAble.id;
if(var_pablenode3 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_pablenode3->type->table_size) {
var11 = 0;
} else {
var11 = var_pablenode3->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17912);
exit(1);
}
var_pablenode4 = var_nodearraylist3;
/* <var_pablenode4:nullable Object> isa nullable AAble */
cltype15 = type_nullable_parser_nodes__AAble.color;
idtype16 = type_nullable_parser_nodes__AAble.id;
if(var_pablenode4 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_pablenode4->type->table_size) {
var14 = 0;
} else {
var14 = var_pablenode4->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17914);
exit(1);
}
var_pvisibilitynode6 = var_nodearraylist4;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17916);
exit(1);
}
var_tkwvarnode7 = var_nodearraylist5;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17918);
exit(1);
}
var_tattridnode8 = var_nodearraylist6;
/* <var_tattridnode8:nullable Object> isa nullable TAttrid */
cltype24 = type_nullable_parser_nodes__TAttrid.color;
idtype25 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode8 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_tattridnode8->type->table_size) {
var23 = 0;
} else {
var23 = var_tattridnode8->type->type_table[cltype24] == idtype25;
}
}
if (!var23) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17920);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17922);
exit(1);
}
var29 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var30 = NULL;
var31 = NULL;
var32 = NULL;
var33 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var29, var_pdocnode2, var_pablenode3, var_pablenode4, var30, var_pvisibilitynode6, var_tkwvarnode7, var_tattridnode8, var31, var32, var33, var_pexprnode12) /* init_aattrpropdef on <var29:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var29);
var_ppropdefnode1 = var29;
var_node_list = var_ppropdefnode1;
var34 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction403> */
var35 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var34) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var35, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction403#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction403__action(val* self, val* p0) {
parser__ReduceAction403__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction404#action for (self: ReduceAction404, Parser) */
void parser__ReduceAction404__action(val* self, val* p0) {
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
val* var_tkwredefnode5 /* var tkwredefnode5: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_pvisibilitynode6 /* var pvisibilitynode6: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_tkwvarnode7 /* var tkwvarnode7: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var_tattridnode8 /* var tattridnode8: nullable Object */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17956);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17958);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17960);
exit(1);
}
var_tkwredefnode5 = var_nodearraylist4;
/* <var_tkwredefnode5:nullable Object> isa nullable TKwredef */
cltype19 = type_nullable_parser_nodes__TKwredef.color;
idtype20 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode5 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_tkwredefnode5->type->table_size) {
var18 = 0;
} else {
var18 = var_tkwredefnode5->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17962);
exit(1);
}
var_pvisibilitynode6 = var_nodearraylist5;
/* <var_pvisibilitynode6:nullable Object> isa nullable AVisibility */
cltype22 = type_nullable_parser_nodes__AVisibility.color;
idtype23 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode6 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_pvisibilitynode6->type->table_size) {
var21 = 0;
} else {
var21 = var_pvisibilitynode6->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17964);
exit(1);
}
var_tkwvarnode7 = var_nodearraylist6;
/* <var_tkwvarnode7:nullable Object> isa nullable TKwvar */
cltype25 = type_nullable_parser_nodes__TKwvar.color;
idtype26 = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode7 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_tkwvarnode7->type->table_size) {
var24 = 0;
} else {
var24 = var_tkwvarnode7->type->type_table[cltype25] == idtype26;
}
}
if (!var24) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17966);
exit(1);
}
var_tattridnode8 = var_nodearraylist7;
/* <var_tattridnode8:nullable Object> isa nullable TAttrid */
cltype28 = type_nullable_parser_nodes__TAttrid.color;
idtype29 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode8 == NULL) {
var27 = 1;
} else {
if(cltype28 >= var_tattridnode8->type->table_size) {
var27 = 0;
} else {
var27 = var_tattridnode8->type->type_table[cltype28] == idtype29;
}
}
if (!var27) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17968);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 17970);
exit(1);
}
var33 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var34 = NULL;
var35 = NULL;
var36 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var33->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var33, var_pdocnode2, var_pablenode3, var_pablenode4, var_tkwredefnode5, var_pvisibilitynode6, var_tkwvarnode7, var_tattridnode8, var34, var35, var36, var_pexprnode12) /* init_aattrpropdef on <var33:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var33);
var_ppropdefnode1 = var33;
var_node_list = var_ppropdefnode1;
var37 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction404> */
var38 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var37) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var38, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction404#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction404__action(val* self, val* p0) {
parser__ReduceAction404__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction405#action for (self: ReduceAction405, Parser) */
void parser__ReduceAction405__action(val* self, val* p0) {
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
val* var_tattridnode8 /* var tattridnode8: nullable Object */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18002);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18004);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18006);
exit(1);
}
var_tattridnode8 = var_nodearraylist4;
/* <var_tattridnode8:nullable Object> isa nullable TAttrid */
cltype17 = type_nullable_parser_nodes__TAttrid.color;
idtype18 = type_nullable_parser_nodes__TAttrid.id;
if(var_tattridnode8 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tattridnode8->type->table_size) {
var16 = 0;
} else {
var16 = var_tattridnode8->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18008);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18010);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18012);
exit(1);
}
var25 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var26 = NULL;
var27 = NULL;
var28 = NULL;
var29 = NULL;
var30 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var25->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var25, var_pdocnode2, var26, var27, var28, var_pvisibilitynode6, var_tkwvarnode7, var_tattridnode8, var29, var_ptypenode10, var30, var_pexprnode12) /* init_aattrpropdef on <var25:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var25);
var_ppropdefnode1 = var25;
var_node_list = var_ppropdefnode1;
var31 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction405> */
var32 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var31) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var32, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction405#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction405__action(val* self, val* p0) {
parser__ReduceAction405__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction406#action for (self: ReduceAction406, Parser) */
void parser__ReduceAction406__action(val* self, val* p0) {
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18045);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18047);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18049);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18051);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18053);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18055);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18057);
exit(1);
}
var29 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var30 = NULL;
var31 = NULL;
var32 = NULL;
var33 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var29, var_pdocnode2, var30, var31, var_tkwredefnode5, var_pvisibilitynode6, var_tkwvarnode7, var_tattridnode8, var32, var_ptypenode10, var33, var_pexprnode12) /* init_aattrpropdef on <var29:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var29);
var_ppropdefnode1 = var29;
var_node_list = var_ppropdefnode1;
var34 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction406> */
var35 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var34) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var35, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction406#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction406__action(val* self, val* p0) {
parser__ReduceAction406__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction407#action for (self: ReduceAction407, Parser) */
void parser__ReduceAction407__action(val* self, val* p0) {
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
val* var_pablenode3 /* var pablenode3: nullable Object */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18090);
exit(1);
}
var_pablenode3 = var_nodearraylist2;
/* <var_pablenode3:nullable Object> isa nullable AAble */
cltype12 = type_nullable_parser_nodes__AAble.color;
idtype13 = type_nullable_parser_nodes__AAble.id;
if(var_pablenode3 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_pablenode3->type->table_size) {
var11 = 0;
} else {
var11 = var_pablenode3->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18092);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18094);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18096);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18098);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18100);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18102);
exit(1);
}
var29 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var30 = NULL;
var31 = NULL;
var32 = NULL;
var33 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var29, var_pdocnode2, var_pablenode3, var30, var31, var_pvisibilitynode6, var_tkwvarnode7, var_tattridnode8, var32, var_ptypenode10, var33, var_pexprnode12) /* init_aattrpropdef on <var29:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var29);
var_ppropdefnode1 = var29;
var_node_list = var_ppropdefnode1;
var34 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction407> */
var35 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var34) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var35, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction407#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction407__action(val* self, val* p0) {
parser__ReduceAction407__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction408#action for (self: ReduceAction408, Parser) */
void parser__ReduceAction408__action(val* self, val* p0) {
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18136);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18138);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18140);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18142);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18144);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18146);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18148);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 18150);
exit(1);
}
var33 = NEW_parser_nodes__AAttrPropdef(&type_parser_nodes__AAttrPropdef);
var34 = NULL;
var35 = NULL;
var36 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var33->class->vft[COLOR_parser_prod__AAttrPropdef__init_aattrpropdef]))(var33, var_pdocnode2, var_pablenode3, var34, var_tkwredefnode5, var_pvisibilitynode6, var_tkwvarnode7, var_tattridnode8, var35, var_ptypenode10, var36, var_pexprnode12) /* init_aattrpropdef on <var33:AAttrPropdef>*/;
CHECK_NEW_parser_nodes__AAttrPropdef(var33);
var_ppropdefnode1 = var33;
var_node_list = var_ppropdefnode1;
var37 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction408> */
var38 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var37) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var38, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction408#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction408__action(val* self, val* p0) {
parser__ReduceAction408__action(self, p0);
RET_LABEL:;
}
