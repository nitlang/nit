#include "parser.sep.0.h"
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 20862);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 20864);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 20866);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 20868);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 20870);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 20872);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 20901);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 20903);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 20905);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 20907);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 20909);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 20939);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 20941);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 20943);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 20945);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 20947);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 20949);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 20979);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 20981);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 20983);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 20985);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 20987);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 20989);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21020);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21022);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21024);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21026);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21028);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21030);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21032);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21061);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21063);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21065);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21067);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21069);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21099);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21101);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21103);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21105);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21107);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21109);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21139);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21141);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21143);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21145);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21147);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21149);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21180);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21182);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21184);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21186);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21188);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21190);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21192);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21222);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21224);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21226);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21228);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21230);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21232);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21263);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21265);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21267);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21269);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21271);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21273);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21275);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21306);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21308);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21310);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21312);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21314);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21316);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21318);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21350);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21352);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21354);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21356);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21358);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21360);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21362);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21364);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21393);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21395);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21397);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21399);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21401);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21431);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21433);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21435);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21437);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21439);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21441);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21471);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21473);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21475);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21477);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21479);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21481);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21512);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21514);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21516);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21518);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21520);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21522);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21524);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21554);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21556);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21558);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21560);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21562);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21564);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21595);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21597);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21599);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21601);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21603);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21605);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21607);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21638);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21640);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21642);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21644);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21646);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21648);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21650);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21682);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21684);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21686);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21688);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21690);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21692);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21694);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21696);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21726);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21728);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21730);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21732);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21734);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21736);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21767);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21769);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21771);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21773);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21775);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21777);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21779);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21810);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21812);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21814);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21816);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21818);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21820);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21822);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21854);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21856);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21858);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21860);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21862);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21864);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21866);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21868);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21899);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21901);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21903);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21905);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21907);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21909);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21911);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21943);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21945);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21947);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21949);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21951);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21953);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21955);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21957);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21989);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21991);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21993);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21995);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21997);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 21999);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22001);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22003);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22036);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22038);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22040);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22042);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22044);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22046);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22048);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22050);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22052);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22079);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22081);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22083);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22085);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22087);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22115);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22117);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22119);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22121);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22123);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22125);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22153);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22155);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22157);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22159);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22161);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22163);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22192);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22194);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22196);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22198);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22200);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22202);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22204);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22232);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22234);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22236);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22238);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22240);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22242);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22271);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22273);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22275);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22277);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22279);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22281);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22283);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22312);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22314);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22316);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22318);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22320);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22322);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22324);
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
/* method parser#ReduceAction504#action for (self: ReduceAction504, Parser) */
void parser__ReduceAction504__action(val* self, val* p0) {
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
val* var_tstringnode8 /* var tstringnode8: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var31 /* : AExternInitPropdef */;
val* var32 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternInitPropdef */;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22354);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22356);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22358);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22360);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22362);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22364);
exit(1);
}
var_tstringnode8 = var_nodearraylist7;
/* <var_tstringnode8:nullable Object> isa nullable TString */
cltype26 = type_nullable_parser_nodes__TString.color;
idtype27 = type_nullable_parser_nodes__TString.id;
if(var_tstringnode8 == NULL) {
var25 = 1;
} else {
if(cltype26 >= var_tstringnode8->type->table_size) {
var25 = 0;
} else {
var25 = var_tstringnode8->type->type_table[cltype26] == idtype27;
}
}
if (!var25) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22366);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22368);
exit(1);
}
var31 = NEW_parser_nodes__AExternInitPropdef(&type_parser_nodes__AExternInitPropdef);
var32 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var31->class->vft[COLOR_parser_prod__AExternInitPropdef__init_aexterninitpropdef]))(var31, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwnewnode5, var_pmethidnode6, var_psignaturenode7, var_tstringnode8, var32, var_pexterncodeblocknode10) /* init_aexterninitpropdef on <var31:AExternInitPropdef>*/;
CHECK_NEW_parser_nodes__AExternInitPropdef(var31);
var_ppropdefnode1 = var31;
var_node_list = var_ppropdefnode1;
var33 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction504> */
var34 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var33) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var34, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction504#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction504__action(val* self, val* p0) {
parser__ReduceAction504__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction505#action for (self: ReduceAction505, Parser) */
void parser__ReduceAction505__action(val* self, val* p0) {
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
val* var_pexterncallsnode9 /* var pexterncallsnode9: nullable Object */;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22396);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22398);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22400);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22402);
exit(1);
}
var_pexterncallsnode9 = var_nodearraylist5;
/* <var_pexterncallsnode9:nullable Object> isa nullable AExternCalls */
cltype18 = type_nullable_parser_nodes__AExternCalls.color;
idtype19 = type_nullable_parser_nodes__AExternCalls.id;
if(var_pexterncallsnode9 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_pexterncallsnode9->type->table_size) {
var17 = 0;
} else {
var17 = var_pexterncallsnode9->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22404);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22406);
exit(1);
}
var23 = NEW_parser_nodes__AExternInitPropdef(&type_parser_nodes__AExternInitPropdef);
var24 = NULL;
var25 = NULL;
var26 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var23->class->vft[COLOR_parser_prod__AExternInitPropdef__init_aexterninitpropdef]))(var23, var_pdocnode2, var24, var_pvisibilitynode4, var_tkwnewnode5, var25, var_psignaturenode7, var26, var_pexterncallsnode9, var_pexterncodeblocknode10) /* init_aexterninitpropdef on <var23:AExternInitPropdef>*/;
CHECK_NEW_parser_nodes__AExternInitPropdef(var23);
var_ppropdefnode1 = var23;
var_node_list = var_ppropdefnode1;
var27 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction505> */
var28 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var27) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var28, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction505#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction505__action(val* self, val* p0) {
parser__ReduceAction505__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction506#action for (self: ReduceAction506, Parser) */
void parser__ReduceAction506__action(val* self, val* p0) {
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
val* var_pexterncallsnode9 /* var pexterncallsnode9: nullable Object */;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22435);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22437);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22439);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22441);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22443);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22445);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22447);
exit(1);
}
var27 = NEW_parser_nodes__AExternInitPropdef(&type_parser_nodes__AExternInitPropdef);
var28 = NULL;
var29 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var27->class->vft[COLOR_parser_prod__AExternInitPropdef__init_aexterninitpropdef]))(var27, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwnewnode5, var28, var_psignaturenode7, var29, var_pexterncallsnode9, var_pexterncodeblocknode10) /* init_aexterninitpropdef on <var27:AExternInitPropdef>*/;
CHECK_NEW_parser_nodes__AExternInitPropdef(var27);
var_ppropdefnode1 = var27;
var_node_list = var_ppropdefnode1;
var30 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction506> */
var31 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var30) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var31, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction506#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction506__action(val* self, val* p0) {
parser__ReduceAction506__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction507#action for (self: ReduceAction507, Parser) */
void parser__ReduceAction507__action(val* self, val* p0) {
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
val* var_pexterncallsnode9 /* var pexterncallsnode9: nullable Object */;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22476);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22478);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22480);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22482);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22484);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22486);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22488);
exit(1);
}
var27 = NEW_parser_nodes__AExternInitPropdef(&type_parser_nodes__AExternInitPropdef);
var28 = NULL;
var29 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var27->class->vft[COLOR_parser_prod__AExternInitPropdef__init_aexterninitpropdef]))(var27, var_pdocnode2, var28, var_pvisibilitynode4, var_tkwnewnode5, var_pmethidnode6, var_psignaturenode7, var29, var_pexterncallsnode9, var_pexterncodeblocknode10) /* init_aexterninitpropdef on <var27:AExternInitPropdef>*/;
CHECK_NEW_parser_nodes__AExternInitPropdef(var27);
var_ppropdefnode1 = var27;
var_node_list = var_ppropdefnode1;
var30 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction507> */
var31 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var30) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var31, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction507#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction507__action(val* self, val* p0) {
parser__ReduceAction507__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction508#action for (self: ReduceAction508, Parser) */
void parser__ReduceAction508__action(val* self, val* p0) {
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
val* var_pexterncallsnode9 /* var pexterncallsnode9: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var31 /* : AExternInitPropdef */;
val* var32 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternInitPropdef */;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22518);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22520);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22522);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22524);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22526);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22528);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22530);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22532);
exit(1);
}
var31 = NEW_parser_nodes__AExternInitPropdef(&type_parser_nodes__AExternInitPropdef);
var32 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var31->class->vft[COLOR_parser_prod__AExternInitPropdef__init_aexterninitpropdef]))(var31, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwnewnode5, var_pmethidnode6, var_psignaturenode7, var32, var_pexterncallsnode9, var_pexterncodeblocknode10) /* init_aexterninitpropdef on <var31:AExternInitPropdef>*/;
CHECK_NEW_parser_nodes__AExternInitPropdef(var31);
var_ppropdefnode1 = var31;
var_node_list = var_ppropdefnode1;
var33 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction508> */
var34 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var33) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var34, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction508#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction508__action(val* self, val* p0) {
parser__ReduceAction508__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction509#action for (self: ReduceAction509, Parser) */
void parser__ReduceAction509__action(val* self, val* p0) {
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
val* var_pexterncallsnode9 /* var pexterncallsnode9: nullable Object */;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22561);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22563);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22565);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22567);
exit(1);
}
var_tstringnode8 = var_nodearraylist5;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22569);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22571);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22573);
exit(1);
}
var27 = NEW_parser_nodes__AExternInitPropdef(&type_parser_nodes__AExternInitPropdef);
var28 = NULL;
var29 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var27->class->vft[COLOR_parser_prod__AExternInitPropdef__init_aexterninitpropdef]))(var27, var_pdocnode2, var28, var_pvisibilitynode4, var_tkwnewnode5, var29, var_psignaturenode7, var_tstringnode8, var_pexterncallsnode9, var_pexterncodeblocknode10) /* init_aexterninitpropdef on <var27:AExternInitPropdef>*/;
CHECK_NEW_parser_nodes__AExternInitPropdef(var27);
var_ppropdefnode1 = var27;
var_node_list = var_ppropdefnode1;
var30 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction509> */
var31 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var30) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var31, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction509#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction509__action(val* self, val* p0) {
parser__ReduceAction509__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction510#action for (self: ReduceAction510, Parser) */
void parser__ReduceAction510__action(val* self, val* p0) {
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
val* var_pexterncallsnode9 /* var pexterncallsnode9: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var31 /* : AExternInitPropdef */;
val* var32 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternInitPropdef */;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22603);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22605);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22607);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22609);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22611);
exit(1);
}
var_tstringnode8 = var_nodearraylist6;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22613);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22615);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22617);
exit(1);
}
var31 = NEW_parser_nodes__AExternInitPropdef(&type_parser_nodes__AExternInitPropdef);
var32 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var31->class->vft[COLOR_parser_prod__AExternInitPropdef__init_aexterninitpropdef]))(var31, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwnewnode5, var32, var_psignaturenode7, var_tstringnode8, var_pexterncallsnode9, var_pexterncodeblocknode10) /* init_aexterninitpropdef on <var31:AExternInitPropdef>*/;
CHECK_NEW_parser_nodes__AExternInitPropdef(var31);
var_ppropdefnode1 = var31;
var_node_list = var_ppropdefnode1;
var33 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction510> */
var34 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var33) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var34, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction510#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction510__action(val* self, val* p0) {
parser__ReduceAction510__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction511#action for (self: ReduceAction511, Parser) */
void parser__ReduceAction511__action(val* self, val* p0) {
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
val* var_pexterncallsnode9 /* var pexterncallsnode9: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var31 /* : AExternInitPropdef */;
val* var32 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternInitPropdef */;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22647);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22649);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22651);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22653);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22655);
exit(1);
}
var_tstringnode8 = var_nodearraylist6;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22657);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22659);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22661);
exit(1);
}
var31 = NEW_parser_nodes__AExternInitPropdef(&type_parser_nodes__AExternInitPropdef);
var32 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var31->class->vft[COLOR_parser_prod__AExternInitPropdef__init_aexterninitpropdef]))(var31, var_pdocnode2, var32, var_pvisibilitynode4, var_tkwnewnode5, var_pmethidnode6, var_psignaturenode7, var_tstringnode8, var_pexterncallsnode9, var_pexterncodeblocknode10) /* init_aexterninitpropdef on <var31:AExternInitPropdef>*/;
CHECK_NEW_parser_nodes__AExternInitPropdef(var31);
var_ppropdefnode1 = var31;
var_node_list = var_ppropdefnode1;
var33 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction511> */
var34 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var33) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var34, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction511#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction511__action(val* self, val* p0) {
parser__ReduceAction511__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction512#action for (self: ReduceAction512, Parser) */
void parser__ReduceAction512__action(val* self, val* p0) {
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
val* var_pexterncallsnode9 /* var pexterncallsnode9: nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
val* var35 /* : AExternInitPropdef */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AExternInitPropdef */;
long var36 /* : Int */;
long var37 /* : Int */;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22692);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22694);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22696);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22698);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22700);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22702);
exit(1);
}
var_tstringnode8 = var_nodearraylist7;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22704);
exit(1);
}
var_pexterncallsnode9 = var_nodearraylist8;
/* <var_pexterncallsnode9:nullable Object> isa nullable AExternCalls */
cltype30 = type_nullable_parser_nodes__AExternCalls.color;
idtype31 = type_nullable_parser_nodes__AExternCalls.id;
if(var_pexterncallsnode9 == NULL) {
var29 = 1;
} else {
if(cltype30 >= var_pexterncallsnode9->type->table_size) {
var29 = 0;
} else {
var29 = var_pexterncallsnode9->type->type_table[cltype30] == idtype31;
}
}
if (!var29) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22706);
exit(1);
}
var_pexterncodeblocknode10 = var_nodearraylist9;
/* <var_pexterncodeblocknode10:nullable Object> isa nullable AExternCodeBlock */
cltype33 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype34 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode10 == NULL) {
var32 = 1;
} else {
if(cltype33 >= var_pexterncodeblocknode10->type->table_size) {
var32 = 0;
} else {
var32 = var_pexterncodeblocknode10->type->type_table[cltype33] == idtype34;
}
}
if (!var32) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22708);
exit(1);
}
var35 = NEW_parser_nodes__AExternInitPropdef(&type_parser_nodes__AExternInitPropdef);
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var35->class->vft[COLOR_parser_prod__AExternInitPropdef__init_aexterninitpropdef]))(var35, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_tkwnewnode5, var_pmethidnode6, var_psignaturenode7, var_tstringnode8, var_pexterncallsnode9, var_pexterncodeblocknode10) /* init_aexterninitpropdef on <var35:AExternInitPropdef>*/;
CHECK_NEW_parser_nodes__AExternInitPropdef(var35);
var_ppropdefnode1 = var35;
var_node_list = var_ppropdefnode1;
var36 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction512> */
var37 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var36) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var37, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction512#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction512__action(val* self, val* p0) {
parser__ReduceAction512__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction513#action for (self: ReduceAction513, Parser) */
void parser__ReduceAction513__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pannotationsnode1 /* var pannotationsnode1: nullable Object */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var_pannotationsnode1 = var_nodearraylist2;
var_node_list = var_pannotationsnode1;
var3 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction513> */
var4 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var3) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var4, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction513#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction513__action(val* self, val* p0) {
parser__ReduceAction513__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction514#action for (self: ReduceAction514, Parser) */
void parser__ReduceAction514__action(val* self, val* p0) {
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
val* var_pannotationsnode1 /* var pannotationsnode1: nullable Object */;
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
var_pannotationsnode1 = var_nodearraylist3;
var_node_list = var_pannotationsnode1;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction514> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction514#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction514__action(val* self, val* p0) {
parser__ReduceAction514__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction516#action for (self: ReduceAction516, Parser) */
void parser__ReduceAction516__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pannotationsnode1 /* var pannotationsnode1: nullable Object */;
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
var_pannotationsnode1 = var_nodearraylist3;
var_node_list = var_pannotationsnode1;
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction516> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction516#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction516__action(val* self, val* p0) {
parser__ReduceAction516__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction517#action for (self: ReduceAction517, Parser) */
void parser__ReduceAction517__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwreadablenode3 /* var tkwreadablenode3: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AReadAble */;
val* var4 /* : null */;
val* var_pablenode1 /* var pablenode1: nullable AReadAble */;
long var5 /* : Int */;
long var6 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var_tkwreadablenode3 = var_nodearraylist1;
/* <var_tkwreadablenode3:nullable Object> isa nullable TKwreadable */
cltype = type_nullable_parser_nodes__TKwreadable.color;
idtype = type_nullable_parser_nodes__TKwreadable.id;
if(var_tkwreadablenode3 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tkwreadablenode3->type->table_size) {
var2 = 0;
} else {
var2 = var_tkwreadablenode3->type->type_table[cltype] == idtype;
}
}
if (!var2) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22770);
exit(1);
}
var3 = NEW_parser_nodes__AReadAble(&type_parser_nodes__AReadAble);
var4 = NULL;
((void (*)(val*, val*, val*))(var3->class->vft[COLOR_parser_prod__AReadAble__init_areadable]))(var3, var4, var_tkwreadablenode3) /* init_areadable on <var3:AReadAble>*/;
CHECK_NEW_parser_nodes__AReadAble(var3);
var_pablenode1 = var3;
var_node_list = var_pablenode1;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction517> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction517#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction517__action(val* self, val* p0) {
parser__ReduceAction517__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction518#action for (self: ReduceAction518, Parser) */
void parser__ReduceAction518__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwredefnode2 /* var tkwredefnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_tkwreadablenode3 /* var tkwreadablenode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : AReadAble */;
val* var_pablenode1 /* var pablenode1: nullable AReadAble */;
long var8 /* : Int */;
long var9 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var_tkwredefnode2 = var_nodearraylist1;
/* <var_tkwredefnode2:nullable Object> isa nullable TKwredef */
cltype = type_nullable_parser_nodes__TKwredef.color;
idtype = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tkwredefnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tkwredefnode2->type->type_table[cltype] == idtype;
}
}
if (!var3) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22787);
exit(1);
}
var_tkwreadablenode3 = var_nodearraylist2;
/* <var_tkwreadablenode3:nullable Object> isa nullable TKwreadable */
cltype5 = type_nullable_parser_nodes__TKwreadable.color;
idtype6 = type_nullable_parser_nodes__TKwreadable.id;
if(var_tkwreadablenode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_tkwreadablenode3->type->table_size) {
var4 = 0;
} else {
var4 = var_tkwreadablenode3->type->type_table[cltype5] == idtype6;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22789);
exit(1);
}
var7 = NEW_parser_nodes__AReadAble(&type_parser_nodes__AReadAble);
((void (*)(val*, val*, val*))(var7->class->vft[COLOR_parser_prod__AReadAble__init_areadable]))(var7, var_tkwredefnode2, var_tkwreadablenode3) /* init_areadable on <var7:AReadAble>*/;
CHECK_NEW_parser_nodes__AReadAble(var7);
var_pablenode1 = var7;
var_node_list = var_pablenode1;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction518> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction518#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction518__action(val* self, val* p0) {
parser__ReduceAction518__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction519#action for (self: ReduceAction519, Parser) */
void parser__ReduceAction519__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwwritablenode4 /* var tkwwritablenode4: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AWriteAble */;
val* var4 /* : null */;
val* var5 /* : null */;
val* var_pablenode1 /* var pablenode1: nullable AWriteAble */;
long var6 /* : Int */;
long var7 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var_tkwwritablenode4 = var_nodearraylist1;
/* <var_tkwwritablenode4:nullable Object> isa nullable TKwwritable */
cltype = type_nullable_parser_nodes__TKwwritable.color;
idtype = type_nullable_parser_nodes__TKwwritable.id;
if(var_tkwwritablenode4 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tkwwritablenode4->type->table_size) {
var2 = 0;
} else {
var2 = var_tkwwritablenode4->type->type_table[cltype] == idtype;
}
}
if (!var2) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22805);
exit(1);
}
var3 = NEW_parser_nodes__AWriteAble(&type_parser_nodes__AWriteAble);
var4 = NULL;
var5 = NULL;
((void (*)(val*, val*, val*, val*))(var3->class->vft[COLOR_parser_prod__AWriteAble__init_awriteable]))(var3, var4, var5, var_tkwwritablenode4) /* init_awriteable on <var3:AWriteAble>*/;
CHECK_NEW_parser_nodes__AWriteAble(var3);
var_pablenode1 = var3;
var_node_list = var_pablenode1;
var6 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction519> */
var7 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var6) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var7, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction519#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction519__action(val* self, val* p0) {
parser__ReduceAction519__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction520#action for (self: ReduceAction520, Parser) */
void parser__ReduceAction520__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwredefnode2 /* var tkwredefnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_tkwwritablenode4 /* var tkwwritablenode4: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : AWriteAble */;
val* var8 /* : null */;
val* var_pablenode1 /* var pablenode1: nullable AWriteAble */;
long var9 /* : Int */;
long var10 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var_tkwredefnode2 = var_nodearraylist1;
/* <var_tkwredefnode2:nullable Object> isa nullable TKwredef */
cltype = type_nullable_parser_nodes__TKwredef.color;
idtype = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tkwredefnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tkwredefnode2->type->type_table[cltype] == idtype;
}
}
if (!var3) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22823);
exit(1);
}
var_tkwwritablenode4 = var_nodearraylist2;
/* <var_tkwwritablenode4:nullable Object> isa nullable TKwwritable */
cltype5 = type_nullable_parser_nodes__TKwwritable.color;
idtype6 = type_nullable_parser_nodes__TKwwritable.id;
if(var_tkwwritablenode4 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_tkwwritablenode4->type->table_size) {
var4 = 0;
} else {
var4 = var_tkwwritablenode4->type->type_table[cltype5] == idtype6;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22825);
exit(1);
}
var7 = NEW_parser_nodes__AWriteAble(&type_parser_nodes__AWriteAble);
var8 = NULL;
((void (*)(val*, val*, val*, val*))(var7->class->vft[COLOR_parser_prod__AWriteAble__init_awriteable]))(var7, var_tkwredefnode2, var8, var_tkwwritablenode4) /* init_awriteable on <var7:AWriteAble>*/;
CHECK_NEW_parser_nodes__AWriteAble(var7);
var_pablenode1 = var7;
var_node_list = var_pablenode1;
var9 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction520> */
var10 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var9) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var10, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction520#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction520__action(val* self, val* p0) {
parser__ReduceAction520__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction521#action for (self: ReduceAction521, Parser) */
void parser__ReduceAction521__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pvisibilitynode3 /* var pvisibilitynode3: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_tkwwritablenode4 /* var tkwwritablenode4: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : AWriteAble */;
val* var8 /* : null */;
val* var_pablenode1 /* var pablenode1: nullable AWriteAble */;
long var9 /* : Int */;
long var10 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var_pvisibilitynode3 = var_nodearraylist1;
/* <var_pvisibilitynode3:nullable Object> isa nullable AVisibility */
cltype = type_nullable_parser_nodes__AVisibility.color;
idtype = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode3 == NULL) {
var3 = 1;
} else {
if(cltype >= var_pvisibilitynode3->type->table_size) {
var3 = 0;
} else {
var3 = var_pvisibilitynode3->type->type_table[cltype] == idtype;
}
}
if (!var3) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22843);
exit(1);
}
var_tkwwritablenode4 = var_nodearraylist2;
/* <var_tkwwritablenode4:nullable Object> isa nullable TKwwritable */
cltype5 = type_nullable_parser_nodes__TKwwritable.color;
idtype6 = type_nullable_parser_nodes__TKwwritable.id;
if(var_tkwwritablenode4 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_tkwwritablenode4->type->table_size) {
var4 = 0;
} else {
var4 = var_tkwwritablenode4->type->type_table[cltype5] == idtype6;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22845);
exit(1);
}
var7 = NEW_parser_nodes__AWriteAble(&type_parser_nodes__AWriteAble);
var8 = NULL;
((void (*)(val*, val*, val*, val*))(var7->class->vft[COLOR_parser_prod__AWriteAble__init_awriteable]))(var7, var8, var_pvisibilitynode3, var_tkwwritablenode4) /* init_awriteable on <var7:AWriteAble>*/;
CHECK_NEW_parser_nodes__AWriteAble(var7);
var_pablenode1 = var7;
var_node_list = var_pablenode1;
var9 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction521> */
var10 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var9) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var10, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction521#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction521__action(val* self, val* p0) {
parser__ReduceAction521__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction522#action for (self: ReduceAction522, Parser) */
void parser__ReduceAction522__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwredefnode2 /* var tkwredefnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode3 /* var pvisibilitynode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_tkwwritablenode4 /* var tkwwritablenode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : AWriteAble */;
val* var_pablenode1 /* var pablenode1: nullable AWriteAble */;
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
var_tkwredefnode2 = var_nodearraylist1;
/* <var_tkwredefnode2:nullable Object> isa nullable TKwredef */
cltype = type_nullable_parser_nodes__TKwredef.color;
idtype = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode2 == NULL) {
var4 = 1;
} else {
if(cltype >= var_tkwredefnode2->type->table_size) {
var4 = 0;
} else {
var4 = var_tkwredefnode2->type->type_table[cltype] == idtype;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22864);
exit(1);
}
var_pvisibilitynode3 = var_nodearraylist2;
/* <var_pvisibilitynode3:nullable Object> isa nullable AVisibility */
cltype6 = type_nullable_parser_nodes__AVisibility.color;
idtype7 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= var_pvisibilitynode3->type->table_size) {
var5 = 0;
} else {
var5 = var_pvisibilitynode3->type->type_table[cltype6] == idtype7;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22866);
exit(1);
}
var_tkwwritablenode4 = var_nodearraylist3;
/* <var_tkwwritablenode4:nullable Object> isa nullable TKwwritable */
cltype9 = type_nullable_parser_nodes__TKwwritable.color;
idtype10 = type_nullable_parser_nodes__TKwwritable.id;
if(var_tkwwritablenode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_tkwwritablenode4->type->table_size) {
var8 = 0;
} else {
var8 = var_tkwwritablenode4->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22868);
exit(1);
}
var11 = NEW_parser_nodes__AWriteAble(&type_parser_nodes__AWriteAble);
((void (*)(val*, val*, val*, val*))(var11->class->vft[COLOR_parser_prod__AWriteAble__init_awriteable]))(var11, var_tkwredefnode2, var_pvisibilitynode3, var_tkwwritablenode4) /* init_awriteable on <var11:AWriteAble>*/;
CHECK_NEW_parser_nodes__AWriteAble(var11);
var_pablenode1 = var11;
var_node_list = var_pablenode1;
var12 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction522> */
var13 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var12) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var13, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction522#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction522__action(val* self, val* p0) {
parser__ReduceAction522__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction523#action for (self: ReduceAction523, Parser) */
void parser__ReduceAction523__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : APublicVisibility */;
val* var_pvisibilitynode1 /* var pvisibilitynode1: nullable APublicVisibility */;
long var2 /* : Int */;
long var3 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = NEW_parser_nodes__APublicVisibility(&type_parser_nodes__APublicVisibility);
((void (*)(val*))(var1->class->vft[COLOR_parser_prod__APublicVisibility__init_apublicvisibility]))(var1) /* init_apublicvisibility on <var1:APublicVisibility>*/;
CHECK_NEW_parser_nodes__APublicVisibility(var1);
var_pvisibilitynode1 = var1;
var_node_list = var_pvisibilitynode1;
var2 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction523> */
var3 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var2) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var3, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction523#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction523__action(val* self, val* p0) {
parser__ReduceAction523__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction524#action for (self: ReduceAction524, Parser) */
void parser__ReduceAction524__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwprivatenode2 /* var tkwprivatenode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : APrivateVisibility */;
val* var_pvisibilitynode1 /* var pvisibilitynode1: nullable APrivateVisibility */;
long var5 /* : Int */;
long var6 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var_tkwprivatenode2 = var_nodearraylist1;
/* <var_tkwprivatenode2:nullable Object> isa nullable TKwprivate */
cltype = type_nullable_parser_nodes__TKwprivate.color;
idtype = type_nullable_parser_nodes__TKwprivate.id;
if(var_tkwprivatenode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tkwprivatenode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tkwprivatenode2->type->type_table[cltype] == idtype;
}
}
if (!var3) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22896);
exit(1);
}
var4 = NEW_parser_nodes__APrivateVisibility(&type_parser_nodes__APrivateVisibility);
((void (*)(val*, val*))(var4->class->vft[COLOR_parser_prod__APrivateVisibility__init_aprivatevisibility]))(var4, var_tkwprivatenode2) /* init_aprivatevisibility on <var4:APrivateVisibility>*/;
CHECK_NEW_parser_nodes__APrivateVisibility(var4);
var_pvisibilitynode1 = var4;
var_node_list = var_pvisibilitynode1;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction524> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction524#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction524__action(val* self, val* p0) {
parser__ReduceAction524__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction525#action for (self: ReduceAction525, Parser) */
void parser__ReduceAction525__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwprotectednode2 /* var tkwprotectednode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : AProtectedVisibility */;
val* var_pvisibilitynode1 /* var pvisibilitynode1: nullable AProtectedVisibility */;
long var5 /* : Int */;
long var6 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var_tkwprotectednode2 = var_nodearraylist1;
/* <var_tkwprotectednode2:nullable Object> isa nullable TKwprotected */
cltype = type_nullable_parser_nodes__TKwprotected.color;
idtype = type_nullable_parser_nodes__TKwprotected.id;
if(var_tkwprotectednode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tkwprotectednode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tkwprotectednode2->type->type_table[cltype] == idtype;
}
}
if (!var3) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22912);
exit(1);
}
var4 = NEW_parser_nodes__AProtectedVisibility(&type_parser_nodes__AProtectedVisibility);
((void (*)(val*, val*))(var4->class->vft[COLOR_parser_prod__AProtectedVisibility__init_aprotectedvisibility]))(var4, var_tkwprotectednode2) /* init_aprotectedvisibility on <var4:AProtectedVisibility>*/;
CHECK_NEW_parser_nodes__AProtectedVisibility(var4);
var_pvisibilitynode1 = var4;
var_node_list = var_pvisibilitynode1;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction525> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction525#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction525__action(val* self, val* p0) {
parser__ReduceAction525__action(self, p0);
RET_LABEL:;
}
