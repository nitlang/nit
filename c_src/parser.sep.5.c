#include "parser.sep.0.h"
/* method parser#ReduceAction129#action for (self: ReduceAction129, Parser) */
void parser__ReduceAction129__action(val* self, val* p0) {
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
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var12 /* : Array[Object] */;
val* var_listnode16 /* var listnode16: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode17 /* var listnode17: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var14 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var27 /* : Array[Object] */;
val* var28 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_listnode12 /* var listnode12: nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var32 /* : Array[Object] */;
val* var33 /* : AAnnotations */;
val* var34 /* : null */;
val* var35 /* : null */;
val* var36 /* : null */;
val* var_pannotationsnode9 /* var pannotationsnode9: nullable AAnnotations */;
val* var_pexterncodeblocknode15 /* var pexterncodeblocknode15: nullable Object */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
val* var_tkwendnode18 /* var tkwendnode18: nullable Object */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
val* var43 /* : AStdClassdef */;
val* var44 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var45 /* : Int */;
long var46 /* : Int */;
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
var_listnode8 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
var_listnode16 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
var_listnode17 = var13;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var14 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var14 = 0;
} else {
var14 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6381);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6383);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist3;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype19 = type_nullable_parser_nodes__AClasskind.color;
idtype20 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pclasskindnode5->type->table_size) {
var18 = 0;
} else {
var18 = var_pclasskindnode5->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6385);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist5;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype22 = type_nullable_parser_nodes__TClassid.color;
idtype23 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_tclassidnode6->type->table_size) {
var21 = 0;
} else {
var21 = var_tclassidnode6->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6387);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist6;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype25 = type_array__Arraykernel__Object.color;
idtype26 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var24 = 0;
} else {
if(cltype25 >= var_listnode7->type->table_size) {
var24 = 0;
} else {
var24 = var_listnode7->type->type_table[cltype25] == idtype26;
}
}
if (!var24) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6389);
show_backtrace(1);
}
var27 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction129>*/;
var_listnode8 = var27;
var28 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var28->class->vft[COLOR_array__Array__init]))(var28) /* init on <var28:Array[Object]>*/;
var_listnode13 = var28;
var_listnode12 = var_nodearraylist7;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype30 = type_array__Arraykernel__Object.color;
idtype31 = type_array__Arraykernel__Object.id;
if(var_listnode12 == NULL) {
var29 = 0;
} else {
if(cltype30 >= var_listnode12->type->table_size) {
var29 = 0;
} else {
var29 = var_listnode12->type->type_table[cltype30] == idtype31;
}
}
if (!var29) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6393);
show_backtrace(1);
}
var32 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode13, var_listnode12) /* concat on <self:ReduceAction129>*/;
var_listnode13 = var32;
var33 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var34 = NULL;
var35 = NULL;
var36 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var33->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var33, var34, var35, var_listnode13, var36) /* init_aannotations on <var33:AAnnotations>*/;
var_pannotationsnode9 = var33;
var_pexterncodeblocknode15 = var_nodearraylist8;
/* <var_pexterncodeblocknode15:nullable Object> isa nullable AExternCodeBlock */
cltype38 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype39 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode15 == NULL) {
var37 = 1;
} else {
if(cltype38 >= var_pexterncodeblocknode15->type->table_size) {
var37 = 0;
} else {
var37 = var_pexterncodeblocknode15->type->type_table[cltype38] == idtype39;
}
}
if (!var37) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6402);
show_backtrace(1);
}
var_tkwendnode18 = var_nodearraylist10;
/* <var_tkwendnode18:nullable Object> isa nullable TKwend */
cltype41 = type_nullable_parser_nodes__TKwend.color;
idtype42 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode18 == NULL) {
var40 = 1;
} else {
if(cltype41 >= var_tkwendnode18->type->table_size) {
var40 = 0;
} else {
var40 = var_tkwendnode18->type->type_table[cltype41] == idtype42;
}
}
if (!var40) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6404);
show_backtrace(1);
}
var43 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var44 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var43->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var43, var_pdocnode2, var44, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var_pannotationsnode9, var_pexterncodeblocknode15, var_listnode16, var_listnode17, var_tkwendnode18) /* init_astdclassdef on <var43:AStdClassdef>*/;
var_pclassdefnode1 = var43;
var_node_list = var_pclassdefnode1;
var45 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction129> */
var46 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var45) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var46, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction129#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction129__action(val* self, val* p0) {
parser__ReduceAction129__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction130#action for (self: ReduceAction130, Parser) */
void parser__ReduceAction130__action(val* self, val* p0) {
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
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode16 /* var listnode16: Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode17 /* var listnode17: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var15 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var31 /* : Array[Object] */;
val* var32 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_listnode12 /* var listnode12: nullable Object */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
val* var36 /* : Array[Object] */;
val* var37 /* : AAnnotations */;
val* var38 /* : null */;
val* var39 /* : null */;
val* var40 /* : null */;
val* var_pannotationsnode9 /* var pannotationsnode9: nullable AAnnotations */;
val* var_pexterncodeblocknode15 /* var pexterncodeblocknode15: nullable Object */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
val* var_tkwendnode18 /* var tkwendnode18: nullable Object */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
val* var47 /* : AStdClassdef */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var48 /* : Int */;
long var49 /* : Int */;
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
var_listnode8 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
var_listnode16 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
var_listnode17 = var14;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var15 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var15 = 0;
} else {
var15 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6442);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype17 = type_nullable_parser_nodes__TKwredef.color;
idtype18 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tkwredefnode3->type->table_size) {
var16 = 0;
} else {
var16 = var_tkwredefnode3->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6444);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype20 = type_nullable_parser_nodes__AVisibility.color;
idtype21 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_pvisibilitynode4->type->table_size) {
var19 = 0;
} else {
var19 = var_pvisibilitynode4->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6446);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype23 = type_nullable_parser_nodes__AClasskind.color;
idtype24 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_pclasskindnode5->type->table_size) {
var22 = 0;
} else {
var22 = var_pclasskindnode5->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6448);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype26 = type_nullable_parser_nodes__TClassid.color;
idtype27 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var25 = 1;
} else {
if(cltype26 >= var_tclassidnode6->type->table_size) {
var25 = 0;
} else {
var25 = var_tclassidnode6->type->type_table[cltype26] == idtype27;
}
}
if (!var25) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6450);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype29 = type_array__Arraykernel__Object.color;
idtype30 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var28 = 0;
} else {
if(cltype29 >= var_listnode7->type->table_size) {
var28 = 0;
} else {
var28 = var_listnode7->type->type_table[cltype29] == idtype30;
}
}
if (!var28) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6452);
show_backtrace(1);
}
var31 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction130>*/;
var_listnode8 = var31;
var32 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var32->class->vft[COLOR_array__Array__init]))(var32) /* init on <var32:Array[Object]>*/;
var_listnode13 = var32;
var_listnode12 = var_nodearraylist8;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype34 = type_array__Arraykernel__Object.color;
idtype35 = type_array__Arraykernel__Object.id;
if(var_listnode12 == NULL) {
var33 = 0;
} else {
if(cltype34 >= var_listnode12->type->table_size) {
var33 = 0;
} else {
var33 = var_listnode12->type->type_table[cltype34] == idtype35;
}
}
if (!var33) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6456);
show_backtrace(1);
}
var36 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode13, var_listnode12) /* concat on <self:ReduceAction130>*/;
var_listnode13 = var36;
var37 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var38 = NULL;
var39 = NULL;
var40 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var37->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var37, var38, var39, var_listnode13, var40) /* init_aannotations on <var37:AAnnotations>*/;
var_pannotationsnode9 = var37;
var_pexterncodeblocknode15 = var_nodearraylist9;
/* <var_pexterncodeblocknode15:nullable Object> isa nullable AExternCodeBlock */
cltype42 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype43 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode15 == NULL) {
var41 = 1;
} else {
if(cltype42 >= var_pexterncodeblocknode15->type->table_size) {
var41 = 0;
} else {
var41 = var_pexterncodeblocknode15->type->type_table[cltype42] == idtype43;
}
}
if (!var41) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6465);
show_backtrace(1);
}
var_tkwendnode18 = var_nodearraylist11;
/* <var_tkwendnode18:nullable Object> isa nullable TKwend */
cltype45 = type_nullable_parser_nodes__TKwend.color;
idtype46 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode18 == NULL) {
var44 = 1;
} else {
if(cltype45 >= var_tkwendnode18->type->table_size) {
var44 = 0;
} else {
var44 = var_tkwendnode18->type->type_table[cltype45] == idtype46;
}
}
if (!var44) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6467);
show_backtrace(1);
}
var47 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var47->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var47, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var_pannotationsnode9, var_pexterncodeblocknode15, var_listnode16, var_listnode17, var_tkwendnode18) /* init_astdclassdef on <var47:AStdClassdef>*/;
var_pclassdefnode1 = var47;
var_node_list = var_pclassdefnode1;
var48 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction130> */
var49 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var48) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var49, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction130#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction130__action(val* self, val* p0) {
parser__ReduceAction130__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction131#action for (self: ReduceAction131, Parser) */
void parser__ReduceAction131__action(val* self, val* p0) {
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
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode16 /* var listnode16: Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode17 /* var listnode17: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var15 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : Array[Object] */;
val* var29 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_listnode12 /* var listnode12: nullable Object */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
val* var33 /* : Array[Object] */;
val* var34 /* : AAnnotations */;
val* var35 /* : null */;
val* var36 /* : null */;
val* var37 /* : null */;
val* var_pannotationsnode9 /* var pannotationsnode9: nullable AAnnotations */;
val* var_pexterncodeblocknode15 /* var pexterncodeblocknode15: nullable Object */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
val* var_tkwendnode18 /* var tkwendnode18: nullable Object */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
val* var44 /* : AStdClassdef */;
val* var45 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var46 /* : Int */;
long var47 /* : Int */;
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
var_listnode8 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
var_listnode16 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
var_listnode17 = var14;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var15 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var15 = 0;
} else {
var15 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6505);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6507);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist3;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype20 = type_nullable_parser_nodes__AClasskind.color;
idtype21 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_pclasskindnode5->type->table_size) {
var19 = 0;
} else {
var19 = var_pclasskindnode5->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6509);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype23 = type_nullable_parser_nodes__TClassid.color;
idtype24 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_tclassidnode6->type->table_size) {
var22 = 0;
} else {
var22 = var_tclassidnode6->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6511);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype26 = type_array__Arraykernel__Object.color;
idtype27 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var25 = 0;
} else {
if(cltype26 >= var_listnode7->type->table_size) {
var25 = 0;
} else {
var25 = var_listnode7->type->type_table[cltype26] == idtype27;
}
}
if (!var25) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6513);
show_backtrace(1);
}
var28 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction131>*/;
var_listnode8 = var28;
var29 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var29->class->vft[COLOR_array__Array__init]))(var29) /* init on <var29:Array[Object]>*/;
var_listnode13 = var29;
var_listnode12 = var_nodearraylist8;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype31 = type_array__Arraykernel__Object.color;
idtype32 = type_array__Arraykernel__Object.id;
if(var_listnode12 == NULL) {
var30 = 0;
} else {
if(cltype31 >= var_listnode12->type->table_size) {
var30 = 0;
} else {
var30 = var_listnode12->type->type_table[cltype31] == idtype32;
}
}
if (!var30) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6517);
show_backtrace(1);
}
var33 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode13, var_listnode12) /* concat on <self:ReduceAction131>*/;
var_listnode13 = var33;
var34 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var35 = NULL;
var36 = NULL;
var37 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var34->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var34, var35, var36, var_listnode13, var37) /* init_aannotations on <var34:AAnnotations>*/;
var_pannotationsnode9 = var34;
var_pexterncodeblocknode15 = var_nodearraylist9;
/* <var_pexterncodeblocknode15:nullable Object> isa nullable AExternCodeBlock */
cltype39 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype40 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode15 == NULL) {
var38 = 1;
} else {
if(cltype39 >= var_pexterncodeblocknode15->type->table_size) {
var38 = 0;
} else {
var38 = var_pexterncodeblocknode15->type->type_table[cltype39] == idtype40;
}
}
if (!var38) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6526);
show_backtrace(1);
}
var_tkwendnode18 = var_nodearraylist11;
/* <var_tkwendnode18:nullable Object> isa nullable TKwend */
cltype42 = type_nullable_parser_nodes__TKwend.color;
idtype43 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode18 == NULL) {
var41 = 1;
} else {
if(cltype42 >= var_tkwendnode18->type->table_size) {
var41 = 0;
} else {
var41 = var_tkwendnode18->type->type_table[cltype42] == idtype43;
}
}
if (!var41) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6528);
show_backtrace(1);
}
var44 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var45 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var44->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var44, var_pdocnode2, var45, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var_pannotationsnode9, var_pexterncodeblocknode15, var_listnode16, var_listnode17, var_tkwendnode18) /* init_astdclassdef on <var44:AStdClassdef>*/;
var_pclassdefnode1 = var44;
var_node_list = var_pclassdefnode1;
var46 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction131> */
var47 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var46) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var47, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction131#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction131__action(val* self, val* p0) {
parser__ReduceAction131__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction132#action for (self: ReduceAction132, Parser) */
void parser__ReduceAction132__action(val* self, val* p0) {
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
val* var13 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode16 /* var listnode16: Array[Object] */;
val* var15 /* : Array[Object] */;
val* var_listnode17 /* var listnode17: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var16 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : Array[Object] */;
val* var30 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_listnode12 /* var listnode12: nullable Object */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var34 /* : Array[Object] */;
val* var35 /* : AAnnotations */;
val* var36 /* : null */;
val* var37 /* : null */;
val* var38 /* : null */;
val* var_pannotationsnode9 /* var pannotationsnode9: nullable AAnnotations */;
val* var_pexterncodeblocknode15 /* var pexterncodeblocknode15: nullable Object */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
val* var_tkwendnode18 /* var tkwendnode18: nullable Object */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
val* var45 /* : AStdClassdef */;
val* var46 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var47 /* : Int */;
long var48 /* : Int */;
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
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
var_listnode8 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
var_listnode16 = var14;
var15 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var15->class->vft[COLOR_array__Array__init]))(var15) /* init on <var15:Array[Object]>*/;
var_listnode17 = var15;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var16 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var16 = 0;
} else {
var16 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6567);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype18 = type_nullable_parser_nodes__AVisibility.color;
idtype19 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_pvisibilitynode4->type->table_size) {
var17 = 0;
} else {
var17 = var_pvisibilitynode4->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6569);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist3;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype21 = type_nullable_parser_nodes__AClasskind.color;
idtype22 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_pclasskindnode5->type->table_size) {
var20 = 0;
} else {
var20 = var_pclasskindnode5->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6571);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist7;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype24 = type_nullable_parser_nodes__TClassid.color;
idtype25 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_tclassidnode6->type->table_size) {
var23 = 0;
} else {
var23 = var_tclassidnode6->type->type_table[cltype24] == idtype25;
}
}
if (!var23) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6573);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist8;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype27 = type_array__Arraykernel__Object.color;
idtype28 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var26 = 0;
} else {
if(cltype27 >= var_listnode7->type->table_size) {
var26 = 0;
} else {
var26 = var_listnode7->type->type_table[cltype27] == idtype28;
}
}
if (!var26) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6575);
show_backtrace(1);
}
var29 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction132>*/;
var_listnode8 = var29;
var30 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var30->class->vft[COLOR_array__Array__init]))(var30) /* init on <var30:Array[Object]>*/;
var_listnode13 = var30;
var_listnode12 = var_nodearraylist9;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype32 = type_array__Arraykernel__Object.color;
idtype33 = type_array__Arraykernel__Object.id;
if(var_listnode12 == NULL) {
var31 = 0;
} else {
if(cltype32 >= var_listnode12->type->table_size) {
var31 = 0;
} else {
var31 = var_listnode12->type->type_table[cltype32] == idtype33;
}
}
if (!var31) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6579);
show_backtrace(1);
}
var34 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode13, var_listnode12) /* concat on <self:ReduceAction132>*/;
var_listnode13 = var34;
var35 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var36 = NULL;
var37 = NULL;
var38 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var35->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var35, var36, var37, var_listnode13, var38) /* init_aannotations on <var35:AAnnotations>*/;
var_pannotationsnode9 = var35;
var_pexterncodeblocknode15 = var_nodearraylist10;
/* <var_pexterncodeblocknode15:nullable Object> isa nullable AExternCodeBlock */
cltype40 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype41 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode15 == NULL) {
var39 = 1;
} else {
if(cltype40 >= var_pexterncodeblocknode15->type->table_size) {
var39 = 0;
} else {
var39 = var_pexterncodeblocknode15->type->type_table[cltype40] == idtype41;
}
}
if (!var39) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6588);
show_backtrace(1);
}
var_tkwendnode18 = var_nodearraylist12;
/* <var_tkwendnode18:nullable Object> isa nullable TKwend */
cltype43 = type_nullable_parser_nodes__TKwend.color;
idtype44 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode18 == NULL) {
var42 = 1;
} else {
if(cltype43 >= var_tkwendnode18->type->table_size) {
var42 = 0;
} else {
var42 = var_tkwendnode18->type->type_table[cltype43] == idtype44;
}
}
if (!var42) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6590);
show_backtrace(1);
}
var45 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var46 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var45->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var45, var_pdocnode2, var46, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var_pannotationsnode9, var_pexterncodeblocknode15, var_listnode16, var_listnode17, var_tkwendnode18) /* init_astdclassdef on <var45:AStdClassdef>*/;
var_pclassdefnode1 = var45;
var_node_list = var_pclassdefnode1;
var47 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction132> */
var48 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var47) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var48, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction132#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction132__action(val* self, val* p0) {
parser__ReduceAction132__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction134#action for (self: ReduceAction134, Parser) */
void parser__ReduceAction134__action(val* self, val* p0) {
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
val* var13 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode16 /* var listnode16: Array[Object] */;
val* var15 /* : Array[Object] */;
val* var_listnode17 /* var listnode17: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var16 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var32 /* : Array[Object] */;
val* var33 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_listnode12 /* var listnode12: nullable Object */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
val* var37 /* : Array[Object] */;
val* var38 /* : AAnnotations */;
val* var39 /* : null */;
val* var40 /* : null */;
val* var41 /* : null */;
val* var_pannotationsnode9 /* var pannotationsnode9: nullable AAnnotations */;
val* var_pexterncodeblocknode15 /* var pexterncodeblocknode15: nullable Object */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
val* var_tkwendnode18 /* var tkwendnode18: nullable Object */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
val* var48 /* : AStdClassdef */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var49 /* : Int */;
long var50 /* : Int */;
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
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
var_listnode8 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
var_listnode16 = var14;
var15 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var15->class->vft[COLOR_array__Array__init]))(var15) /* init on <var15:Array[Object]>*/;
var_listnode17 = var15;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var16 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var16 = 0;
} else {
var16 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6629);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype18 = type_nullable_parser_nodes__TKwredef.color;
idtype19 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tkwredefnode3->type->table_size) {
var17 = 0;
} else {
var17 = var_tkwredefnode3->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6631);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype21 = type_nullable_parser_nodes__AVisibility.color;
idtype22 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_pvisibilitynode4->type->table_size) {
var20 = 0;
} else {
var20 = var_pvisibilitynode4->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6633);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype24 = type_nullable_parser_nodes__AClasskind.color;
idtype25 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_pclasskindnode5->type->table_size) {
var23 = 0;
} else {
var23 = var_pclasskindnode5->type->type_table[cltype24] == idtype25;
}
}
if (!var23) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6635);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist7;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype27 = type_nullable_parser_nodes__TClassid.color;
idtype28 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_tclassidnode6->type->table_size) {
var26 = 0;
} else {
var26 = var_tclassidnode6->type->type_table[cltype27] == idtype28;
}
}
if (!var26) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6637);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist8;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype30 = type_array__Arraykernel__Object.color;
idtype31 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var29 = 0;
} else {
if(cltype30 >= var_listnode7->type->table_size) {
var29 = 0;
} else {
var29 = var_listnode7->type->type_table[cltype30] == idtype31;
}
}
if (!var29) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6639);
show_backtrace(1);
}
var32 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction134>*/;
var_listnode8 = var32;
var33 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var33->class->vft[COLOR_array__Array__init]))(var33) /* init on <var33:Array[Object]>*/;
var_listnode13 = var33;
var_listnode12 = var_nodearraylist9;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype35 = type_array__Arraykernel__Object.color;
idtype36 = type_array__Arraykernel__Object.id;
if(var_listnode12 == NULL) {
var34 = 0;
} else {
if(cltype35 >= var_listnode12->type->table_size) {
var34 = 0;
} else {
var34 = var_listnode12->type->type_table[cltype35] == idtype36;
}
}
if (!var34) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6643);
show_backtrace(1);
}
var37 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode13, var_listnode12) /* concat on <self:ReduceAction134>*/;
var_listnode13 = var37;
var38 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var39 = NULL;
var40 = NULL;
var41 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var38->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var38, var39, var40, var_listnode13, var41) /* init_aannotations on <var38:AAnnotations>*/;
var_pannotationsnode9 = var38;
var_pexterncodeblocknode15 = var_nodearraylist10;
/* <var_pexterncodeblocknode15:nullable Object> isa nullable AExternCodeBlock */
cltype43 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype44 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode15 == NULL) {
var42 = 1;
} else {
if(cltype43 >= var_pexterncodeblocknode15->type->table_size) {
var42 = 0;
} else {
var42 = var_pexterncodeblocknode15->type->type_table[cltype43] == idtype44;
}
}
if (!var42) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6652);
show_backtrace(1);
}
var_tkwendnode18 = var_nodearraylist12;
/* <var_tkwendnode18:nullable Object> isa nullable TKwend */
cltype46 = type_nullable_parser_nodes__TKwend.color;
idtype47 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode18 == NULL) {
var45 = 1;
} else {
if(cltype46 >= var_tkwendnode18->type->table_size) {
var45 = 0;
} else {
var45 = var_tkwendnode18->type->type_table[cltype46] == idtype47;
}
}
if (!var45) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6654);
show_backtrace(1);
}
var48 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var48->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var48, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var_pannotationsnode9, var_pexterncodeblocknode15, var_listnode16, var_listnode17, var_tkwendnode18) /* init_astdclassdef on <var48:AStdClassdef>*/;
var_pclassdefnode1 = var48;
var_node_list = var_pclassdefnode1;
var49 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction134> */
var50 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var49) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var50, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction134#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction134__action(val* self, val* p0) {
parser__ReduceAction134__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction135#action for (self: ReduceAction135, Parser) */
void parser__ReduceAction135__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist13 /* var nodearraylist13: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist12 /* var nodearraylist12: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist11 /* var nodearraylist11: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var11 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var12 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var13 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var14 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var15 /* : Array[Object] */;
val* var_listnode16 /* var listnode16: Array[Object] */;
val* var16 /* : Array[Object] */;
val* var_listnode17 /* var listnode17: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var17 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
val* var33 /* : Array[Object] */;
val* var34 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_listnode12 /* var listnode12: nullable Object */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
val* var38 /* : Array[Object] */;
val* var39 /* : AAnnotations */;
val* var40 /* : null */;
val* var41 /* : null */;
val* var42 /* : null */;
val* var_pannotationsnode9 /* var pannotationsnode9: nullable AAnnotations */;
val* var_pexterncodeblocknode15 /* var pexterncodeblocknode15: nullable Object */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
val* var_tkwendnode18 /* var tkwendnode18: nullable Object */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
val* var49 /* : AStdClassdef */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var50 /* : Int */;
long var51 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist13 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist12 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist11 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist10 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist9 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var8;
var9 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var9;
var10 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var10;
var11 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var11;
var12 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var12;
var13 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
var_listnode8 = var14;
var15 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var15->class->vft[COLOR_array__Array__init]))(var15) /* init on <var15:Array[Object]>*/;
var_listnode16 = var15;
var16 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var16->class->vft[COLOR_array__Array__init]))(var16) /* init on <var16:Array[Object]>*/;
var_listnode17 = var16;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var17 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var17 = 0;
} else {
var17 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6694);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype19 = type_nullable_parser_nodes__TKwredef.color;
idtype20 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_tkwredefnode3->type->table_size) {
var18 = 0;
} else {
var18 = var_tkwredefnode3->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6696);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype22 = type_nullable_parser_nodes__AVisibility.color;
idtype23 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_pvisibilitynode4->type->table_size) {
var21 = 0;
} else {
var21 = var_pvisibilitynode4->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6698);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype25 = type_nullable_parser_nodes__AClasskind.color;
idtype26 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_pclasskindnode5->type->table_size) {
var24 = 0;
} else {
var24 = var_pclasskindnode5->type->type_table[cltype25] == idtype26;
}
}
if (!var24) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6700);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist8;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype28 = type_nullable_parser_nodes__TClassid.color;
idtype29 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var27 = 1;
} else {
if(cltype28 >= var_tclassidnode6->type->table_size) {
var27 = 0;
} else {
var27 = var_tclassidnode6->type->type_table[cltype28] == idtype29;
}
}
if (!var27) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6702);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist9;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype31 = type_array__Arraykernel__Object.color;
idtype32 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var30 = 0;
} else {
if(cltype31 >= var_listnode7->type->table_size) {
var30 = 0;
} else {
var30 = var_listnode7->type->type_table[cltype31] == idtype32;
}
}
if (!var30) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6704);
show_backtrace(1);
}
var33 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction135>*/;
var_listnode8 = var33;
var34 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var34->class->vft[COLOR_array__Array__init]))(var34) /* init on <var34:Array[Object]>*/;
var_listnode13 = var34;
var_listnode12 = var_nodearraylist10;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype36 = type_array__Arraykernel__Object.color;
idtype37 = type_array__Arraykernel__Object.id;
if(var_listnode12 == NULL) {
var35 = 0;
} else {
if(cltype36 >= var_listnode12->type->table_size) {
var35 = 0;
} else {
var35 = var_listnode12->type->type_table[cltype36] == idtype37;
}
}
if (!var35) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6708);
show_backtrace(1);
}
var38 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode13, var_listnode12) /* concat on <self:ReduceAction135>*/;
var_listnode13 = var38;
var39 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var40 = NULL;
var41 = NULL;
var42 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var39->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var39, var40, var41, var_listnode13, var42) /* init_aannotations on <var39:AAnnotations>*/;
var_pannotationsnode9 = var39;
var_pexterncodeblocknode15 = var_nodearraylist11;
/* <var_pexterncodeblocknode15:nullable Object> isa nullable AExternCodeBlock */
cltype44 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype45 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode15 == NULL) {
var43 = 1;
} else {
if(cltype44 >= var_pexterncodeblocknode15->type->table_size) {
var43 = 0;
} else {
var43 = var_pexterncodeblocknode15->type->type_table[cltype44] == idtype45;
}
}
if (!var43) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6717);
show_backtrace(1);
}
var_tkwendnode18 = var_nodearraylist13;
/* <var_tkwendnode18:nullable Object> isa nullable TKwend */
cltype47 = type_nullable_parser_nodes__TKwend.color;
idtype48 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode18 == NULL) {
var46 = 1;
} else {
if(cltype47 >= var_tkwendnode18->type->table_size) {
var46 = 0;
} else {
var46 = var_tkwendnode18->type->type_table[cltype47] == idtype48;
}
}
if (!var46) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6719);
show_backtrace(1);
}
var49 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var49->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var49, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var_pannotationsnode9, var_pexterncodeblocknode15, var_listnode16, var_listnode17, var_tkwendnode18) /* init_astdclassdef on <var49:AStdClassdef>*/;
var_pclassdefnode1 = var49;
var_node_list = var_pclassdefnode1;
var50 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction135> */
var51 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var50) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var51, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction135#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction135__action(val* self, val* p0) {
parser__ReduceAction135__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction137#action for (self: ReduceAction137, Parser) */
void parser__ReduceAction137__action(val* self, val* p0) {
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
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var10 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: Array[Object] */;
val* var11 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var12 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_listnode10 /* var listnode10: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var25 /* : Array[Object] */;
val* var_tkwendnode13 /* var tkwendnode13: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : AStdClassdef */;
val* var30 /* : null */;
val* var31 /* : null */;
val* var32 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
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
var9 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var9->class->vft[COLOR_array__Array__init]))(var9) /* init on <var9:Array[Object]>*/;
var_listnode7 = var9;
var10 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var10->class->vft[COLOR_array__Array__init]))(var10) /* init on <var10:Array[Object]>*/;
var_listnode11 = var10;
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var11->class->vft[COLOR_array__Array__init]))(var11) /* init on <var11:Array[Object]>*/;
var_listnode12 = var11;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6754);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6756);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist3;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype17 = type_nullable_parser_nodes__AClasskind.color;
idtype18 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_pclasskindnode5->type->table_size) {
var16 = 0;
} else {
var16 = var_pclasskindnode5->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6758);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist5;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype20 = type_nullable_parser_nodes__TClassid.color;
idtype21 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_tclassidnode6->type->table_size) {
var19 = 0;
} else {
var19 = var_tclassidnode6->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6760);
show_backtrace(1);
}
var_listnode10 = var_nodearraylist6;
/* <var_listnode10:nullable Object> isa Array[Object] */
cltype23 = type_array__Arraykernel__Object.color;
idtype24 = type_array__Arraykernel__Object.id;
if(var_listnode10 == NULL) {
var22 = 0;
} else {
if(cltype23 >= var_listnode10->type->table_size) {
var22 = 0;
} else {
var22 = var_listnode10->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6762);
show_backtrace(1);
}
var25 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode11, var_listnode10) /* concat on <self:ReduceAction137>*/;
var_listnode11 = var25;
var_tkwendnode13 = var_nodearraylist8;
/* <var_tkwendnode13:nullable Object> isa nullable TKwend */
cltype27 = type_nullable_parser_nodes__TKwend.color;
idtype28 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode13 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_tkwendnode13->type->table_size) {
var26 = 0;
} else {
var26 = var_tkwendnode13->type->type_table[cltype27] == idtype28;
}
}
if (!var26) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6765);
show_backtrace(1);
}
var29 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var30 = NULL;
var31 = NULL;
var32 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var29, var_pdocnode2, var30, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var31, var32, var_listnode11, var_listnode12, var_tkwendnode13) /* init_astdclassdef on <var29:AStdClassdef>*/;
var_pclassdefnode1 = var29;
var_node_list = var_pclassdefnode1;
var33 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction137> */
var34 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var33) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var34, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction137#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction137__action(val* self, val* p0) {
parser__ReduceAction137__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction138#action for (self: ReduceAction138, Parser) */
void parser__ReduceAction138__action(val* self, val* p0) {
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
val* var10 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var11 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: Array[Object] */;
val* var12 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var13 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_listnode10 /* var listnode10: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : Array[Object] */;
val* var_tkwendnode13 /* var tkwendnode13: nullable Object */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
val* var33 /* : AStdClassdef */;
val* var34 /* : null */;
val* var35 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
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
var10 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var10->class->vft[COLOR_array__Array__init]))(var10) /* init on <var10:Array[Object]>*/;
var_listnode7 = var10;
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var11->class->vft[COLOR_array__Array__init]))(var11) /* init on <var11:Array[Object]>*/;
var_listnode11 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
var_listnode12 = var12;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var13 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var13 = 0;
} else {
var13 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6801);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype15 = type_nullable_parser_nodes__TKwredef.color;
idtype16 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_tkwredefnode3->type->table_size) {
var14 = 0;
} else {
var14 = var_tkwredefnode3->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6803);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype18 = type_nullable_parser_nodes__AVisibility.color;
idtype19 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_pvisibilitynode4->type->table_size) {
var17 = 0;
} else {
var17 = var_pvisibilitynode4->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6805);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype21 = type_nullable_parser_nodes__AClasskind.color;
idtype22 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_pclasskindnode5->type->table_size) {
var20 = 0;
} else {
var20 = var_pclasskindnode5->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6807);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype24 = type_nullable_parser_nodes__TClassid.color;
idtype25 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_tclassidnode6->type->table_size) {
var23 = 0;
} else {
var23 = var_tclassidnode6->type->type_table[cltype24] == idtype25;
}
}
if (!var23) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6809);
show_backtrace(1);
}
var_listnode10 = var_nodearraylist7;
/* <var_listnode10:nullable Object> isa Array[Object] */
cltype27 = type_array__Arraykernel__Object.color;
idtype28 = type_array__Arraykernel__Object.id;
if(var_listnode10 == NULL) {
var26 = 0;
} else {
if(cltype27 >= var_listnode10->type->table_size) {
var26 = 0;
} else {
var26 = var_listnode10->type->type_table[cltype27] == idtype28;
}
}
if (!var26) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6811);
show_backtrace(1);
}
var29 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode11, var_listnode10) /* concat on <self:ReduceAction138>*/;
var_listnode11 = var29;
var_tkwendnode13 = var_nodearraylist9;
/* <var_tkwendnode13:nullable Object> isa nullable TKwend */
cltype31 = type_nullable_parser_nodes__TKwend.color;
idtype32 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode13 == NULL) {
var30 = 1;
} else {
if(cltype31 >= var_tkwendnode13->type->table_size) {
var30 = 0;
} else {
var30 = var_tkwendnode13->type->type_table[cltype31] == idtype32;
}
}
if (!var30) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6814);
show_backtrace(1);
}
var33 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var34 = NULL;
var35 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var33->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var33, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var34, var35, var_listnode11, var_listnode12, var_tkwendnode13) /* init_astdclassdef on <var33:AStdClassdef>*/;
var_pclassdefnode1 = var33;
var_node_list = var_pclassdefnode1;
var36 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction138> */
var37 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var36) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var37, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction138#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction138__action(val* self, val* p0) {
parser__ReduceAction138__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction139#action for (self: ReduceAction139, Parser) */
void parser__ReduceAction139__action(val* self, val* p0) {
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
val* var10 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var11 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: Array[Object] */;
val* var12 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var13 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_listnode10 /* var listnode10: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var26 /* : Array[Object] */;
val* var_tkwendnode13 /* var tkwendnode13: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var30 /* : AStdClassdef */;
val* var31 /* : null */;
val* var32 /* : null */;
val* var33 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
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
var10 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var10->class->vft[COLOR_array__Array__init]))(var10) /* init on <var10:Array[Object]>*/;
var_listnode7 = var10;
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var11->class->vft[COLOR_array__Array__init]))(var11) /* init on <var11:Array[Object]>*/;
var_listnode11 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
var_listnode12 = var12;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var13 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var13 = 0;
} else {
var13 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6850);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6852);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist3;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype18 = type_nullable_parser_nodes__AClasskind.color;
idtype19 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_pclasskindnode5->type->table_size) {
var17 = 0;
} else {
var17 = var_pclasskindnode5->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6854);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype21 = type_nullable_parser_nodes__TClassid.color;
idtype22 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_tclassidnode6->type->table_size) {
var20 = 0;
} else {
var20 = var_tclassidnode6->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6856);
show_backtrace(1);
}
var_listnode10 = var_nodearraylist7;
/* <var_listnode10:nullable Object> isa Array[Object] */
cltype24 = type_array__Arraykernel__Object.color;
idtype25 = type_array__Arraykernel__Object.id;
if(var_listnode10 == NULL) {
var23 = 0;
} else {
if(cltype24 >= var_listnode10->type->table_size) {
var23 = 0;
} else {
var23 = var_listnode10->type->type_table[cltype24] == idtype25;
}
}
if (!var23) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6858);
show_backtrace(1);
}
var26 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode11, var_listnode10) /* concat on <self:ReduceAction139>*/;
var_listnode11 = var26;
var_tkwendnode13 = var_nodearraylist9;
/* <var_tkwendnode13:nullable Object> isa nullable TKwend */
cltype28 = type_nullable_parser_nodes__TKwend.color;
idtype29 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode13 == NULL) {
var27 = 1;
} else {
if(cltype28 >= var_tkwendnode13->type->table_size) {
var27 = 0;
} else {
var27 = var_tkwendnode13->type->type_table[cltype28] == idtype29;
}
}
if (!var27) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6861);
show_backtrace(1);
}
var30 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var31 = NULL;
var32 = NULL;
var33 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var30->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var30, var_pdocnode2, var31, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var32, var33, var_listnode11, var_listnode12, var_tkwendnode13) /* init_astdclassdef on <var30:AStdClassdef>*/;
var_pclassdefnode1 = var30;
var_node_list = var_pclassdefnode1;
var34 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction139> */
var35 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var34) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var35, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction139#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction139__action(val* self, val* p0) {
parser__ReduceAction139__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction140#action for (self: ReduceAction140, Parser) */
void parser__ReduceAction140__action(val* self, val* p0) {
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
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var12 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var14 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_listnode10 /* var listnode10: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var27 /* : Array[Object] */;
val* var_tkwendnode13 /* var tkwendnode13: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var31 /* : AStdClassdef */;
val* var32 /* : null */;
val* var33 /* : null */;
val* var34 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
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
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var11->class->vft[COLOR_array__Array__init]))(var11) /* init on <var11:Array[Object]>*/;
var_listnode7 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
var_listnode11 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
var_listnode12 = var13;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var14 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var14 = 0;
} else {
var14 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6898);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6900);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist3;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype19 = type_nullable_parser_nodes__AClasskind.color;
idtype20 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pclasskindnode5->type->table_size) {
var18 = 0;
} else {
var18 = var_pclasskindnode5->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6902);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist7;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype22 = type_nullable_parser_nodes__TClassid.color;
idtype23 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_tclassidnode6->type->table_size) {
var21 = 0;
} else {
var21 = var_tclassidnode6->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6904);
show_backtrace(1);
}
var_listnode10 = var_nodearraylist8;
/* <var_listnode10:nullable Object> isa Array[Object] */
cltype25 = type_array__Arraykernel__Object.color;
idtype26 = type_array__Arraykernel__Object.id;
if(var_listnode10 == NULL) {
var24 = 0;
} else {
if(cltype25 >= var_listnode10->type->table_size) {
var24 = 0;
} else {
var24 = var_listnode10->type->type_table[cltype25] == idtype26;
}
}
if (!var24) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6906);
show_backtrace(1);
}
var27 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode11, var_listnode10) /* concat on <self:ReduceAction140>*/;
var_listnode11 = var27;
var_tkwendnode13 = var_nodearraylist10;
/* <var_tkwendnode13:nullable Object> isa nullable TKwend */
cltype29 = type_nullable_parser_nodes__TKwend.color;
idtype30 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode13 == NULL) {
var28 = 1;
} else {
if(cltype29 >= var_tkwendnode13->type->table_size) {
var28 = 0;
} else {
var28 = var_tkwendnode13->type->type_table[cltype29] == idtype30;
}
}
if (!var28) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6909);
show_backtrace(1);
}
var31 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var32 = NULL;
var33 = NULL;
var34 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var31->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var31, var_pdocnode2, var32, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var33, var34, var_listnode11, var_listnode12, var_tkwendnode13) /* init_astdclassdef on <var31:AStdClassdef>*/;
var_pclassdefnode1 = var31;
var_node_list = var_pclassdefnode1;
var35 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction140> */
var36 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var35) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var36, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction140#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction140__action(val* self, val* p0) {
parser__ReduceAction140__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction142#action for (self: ReduceAction142, Parser) */
void parser__ReduceAction142__action(val* self, val* p0) {
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
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var12 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var14 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var_listnode10 /* var listnode10: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var30 /* : Array[Object] */;
val* var_tkwendnode13 /* var tkwendnode13: nullable Object */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var34 /* : AStdClassdef */;
val* var35 /* : null */;
val* var36 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
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
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var11->class->vft[COLOR_array__Array__init]))(var11) /* init on <var11:Array[Object]>*/;
var_listnode7 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
var_listnode11 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
var_listnode12 = var13;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var14 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var14 = 0;
} else {
var14 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6946);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype16 = type_nullable_parser_nodes__TKwredef.color;
idtype17 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_tkwredefnode3->type->table_size) {
var15 = 0;
} else {
var15 = var_tkwredefnode3->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6948);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype19 = type_nullable_parser_nodes__AVisibility.color;
idtype20 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pvisibilitynode4->type->table_size) {
var18 = 0;
} else {
var18 = var_pvisibilitynode4->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6950);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype22 = type_nullable_parser_nodes__AClasskind.color;
idtype23 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_pclasskindnode5->type->table_size) {
var21 = 0;
} else {
var21 = var_pclasskindnode5->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6952);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist7;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype25 = type_nullable_parser_nodes__TClassid.color;
idtype26 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_tclassidnode6->type->table_size) {
var24 = 0;
} else {
var24 = var_tclassidnode6->type->type_table[cltype25] == idtype26;
}
}
if (!var24) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6954);
show_backtrace(1);
}
var_listnode10 = var_nodearraylist8;
/* <var_listnode10:nullable Object> isa Array[Object] */
cltype28 = type_array__Arraykernel__Object.color;
idtype29 = type_array__Arraykernel__Object.id;
if(var_listnode10 == NULL) {
var27 = 0;
} else {
if(cltype28 >= var_listnode10->type->table_size) {
var27 = 0;
} else {
var27 = var_listnode10->type->type_table[cltype28] == idtype29;
}
}
if (!var27) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6956);
show_backtrace(1);
}
var30 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode11, var_listnode10) /* concat on <self:ReduceAction142>*/;
var_listnode11 = var30;
var_tkwendnode13 = var_nodearraylist10;
/* <var_tkwendnode13:nullable Object> isa nullable TKwend */
cltype32 = type_nullable_parser_nodes__TKwend.color;
idtype33 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode13 == NULL) {
var31 = 1;
} else {
if(cltype32 >= var_tkwendnode13->type->table_size) {
var31 = 0;
} else {
var31 = var_tkwendnode13->type->type_table[cltype32] == idtype33;
}
}
if (!var31) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6959);
show_backtrace(1);
}
var34 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var35 = NULL;
var36 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var34->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var34, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var35, var36, var_listnode11, var_listnode12, var_tkwendnode13) /* init_astdclassdef on <var34:AStdClassdef>*/;
var_pclassdefnode1 = var34;
var_node_list = var_pclassdefnode1;
var37 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction142> */
var38 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var37) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var38, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction142#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction142__action(val* self, val* p0) {
parser__ReduceAction142__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction143#action for (self: ReduceAction143, Parser) */
void parser__ReduceAction143__action(val* self, val* p0) {
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
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var15 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_listnode10 /* var listnode10: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var31 /* : Array[Object] */;
val* var_tkwendnode13 /* var tkwendnode13: nullable Object */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
val* var35 /* : AStdClassdef */;
val* var36 /* : null */;
val* var37 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
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
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
var_listnode7 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
var_listnode11 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
var_listnode12 = var14;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var15 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var15 = 0;
} else {
var15 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6997);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype17 = type_nullable_parser_nodes__TKwredef.color;
idtype18 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tkwredefnode3->type->table_size) {
var16 = 0;
} else {
var16 = var_tkwredefnode3->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6999);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype20 = type_nullable_parser_nodes__AVisibility.color;
idtype21 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_pvisibilitynode4->type->table_size) {
var19 = 0;
} else {
var19 = var_pvisibilitynode4->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7001);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype23 = type_nullable_parser_nodes__AClasskind.color;
idtype24 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_pclasskindnode5->type->table_size) {
var22 = 0;
} else {
var22 = var_pclasskindnode5->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7003);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist8;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype26 = type_nullable_parser_nodes__TClassid.color;
idtype27 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var25 = 1;
} else {
if(cltype26 >= var_tclassidnode6->type->table_size) {
var25 = 0;
} else {
var25 = var_tclassidnode6->type->type_table[cltype26] == idtype27;
}
}
if (!var25) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7005);
show_backtrace(1);
}
var_listnode10 = var_nodearraylist9;
/* <var_listnode10:nullable Object> isa Array[Object] */
cltype29 = type_array__Arraykernel__Object.color;
idtype30 = type_array__Arraykernel__Object.id;
if(var_listnode10 == NULL) {
var28 = 0;
} else {
if(cltype29 >= var_listnode10->type->table_size) {
var28 = 0;
} else {
var28 = var_listnode10->type->type_table[cltype29] == idtype30;
}
}
if (!var28) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7007);
show_backtrace(1);
}
var31 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode11, var_listnode10) /* concat on <self:ReduceAction143>*/;
var_listnode11 = var31;
var_tkwendnode13 = var_nodearraylist11;
/* <var_tkwendnode13:nullable Object> isa nullable TKwend */
cltype33 = type_nullable_parser_nodes__TKwend.color;
idtype34 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode13 == NULL) {
var32 = 1;
} else {
if(cltype33 >= var_tkwendnode13->type->table_size) {
var32 = 0;
} else {
var32 = var_tkwendnode13->type->type_table[cltype33] == idtype34;
}
}
if (!var32) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7010);
show_backtrace(1);
}
var35 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var36 = NULL;
var37 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var35->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var35, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var36, var37, var_listnode11, var_listnode12, var_tkwendnode13) /* init_astdclassdef on <var35:AStdClassdef>*/;
var_pclassdefnode1 = var35;
var_node_list = var_pclassdefnode1;
var38 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction143> */
var39 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var38) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var39, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction143#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction143__action(val* self, val* p0) {
parser__ReduceAction143__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction145#action for (self: ReduceAction145, Parser) */
void parser__ReduceAction145__action(val* self, val* p0) {
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
val* var10 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var11 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var12 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var13 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var26 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var30 /* : Array[Object] */;
val* var_tkwendnode14 /* var tkwendnode14: nullable Object */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var34 /* : AStdClassdef */;
val* var35 /* : null */;
val* var36 /* : null */;
val* var37 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var38 /* : Int */;
long var39 /* : Int */;
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
var10 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var10->class->vft[COLOR_array__Array__init]))(var10) /* init on <var10:Array[Object]>*/;
var_listnode8 = var10;
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var11->class->vft[COLOR_array__Array__init]))(var11) /* init on <var11:Array[Object]>*/;
var_listnode12 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
var_listnode13 = var12;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var13 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var13 = 0;
} else {
var13 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7046);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7048);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist3;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype18 = type_nullable_parser_nodes__AClasskind.color;
idtype19 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_pclasskindnode5->type->table_size) {
var17 = 0;
} else {
var17 = var_pclasskindnode5->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7050);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist5;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype21 = type_nullable_parser_nodes__TClassid.color;
idtype22 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_tclassidnode6->type->table_size) {
var20 = 0;
} else {
var20 = var_tclassidnode6->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7052);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist6;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype24 = type_array__Arraykernel__Object.color;
idtype25 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var23 = 0;
} else {
if(cltype24 >= var_listnode7->type->table_size) {
var23 = 0;
} else {
var23 = var_listnode7->type->type_table[cltype24] == idtype25;
}
}
if (!var23) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7054);
show_backtrace(1);
}
var26 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction145>*/;
var_listnode8 = var26;
var_listnode11 = var_nodearraylist7;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype28 = type_array__Arraykernel__Object.color;
idtype29 = type_array__Arraykernel__Object.id;
if(var_listnode11 == NULL) {
var27 = 0;
} else {
if(cltype28 >= var_listnode11->type->table_size) {
var27 = 0;
} else {
var27 = var_listnode11->type->type_table[cltype28] == idtype29;
}
}
if (!var27) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7057);
show_backtrace(1);
}
var30 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction145>*/;
var_listnode12 = var30;
var_tkwendnode14 = var_nodearraylist9;
/* <var_tkwendnode14:nullable Object> isa nullable TKwend */
cltype32 = type_nullable_parser_nodes__TKwend.color;
idtype33 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode14 == NULL) {
var31 = 1;
} else {
if(cltype32 >= var_tkwendnode14->type->table_size) {
var31 = 0;
} else {
var31 = var_tkwendnode14->type->type_table[cltype32] == idtype33;
}
}
if (!var31) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7060);
show_backtrace(1);
}
var34 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var35 = NULL;
var36 = NULL;
var37 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var34->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var34, var_pdocnode2, var35, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var36, var37, var_listnode12, var_listnode13, var_tkwendnode14) /* init_astdclassdef on <var34:AStdClassdef>*/;
var_pclassdefnode1 = var34;
var_node_list = var_pclassdefnode1;
var38 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction145> */
var39 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var38) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var39, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction145#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction145__action(val* self, val* p0) {
parser__ReduceAction145__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction146#action for (self: ReduceAction146, Parser) */
void parser__ReduceAction146__action(val* self, val* p0) {
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
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var12 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var14 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var30 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var34 /* : Array[Object] */;
val* var_tkwendnode14 /* var tkwendnode14: nullable Object */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
val* var38 /* : AStdClassdef */;
val* var39 /* : null */;
val* var40 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var41 /* : Int */;
long var42 /* : Int */;
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
var_listnode8 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
var_listnode12 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
var_listnode13 = var13;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var14 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var14 = 0;
} else {
var14 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7097);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype16 = type_nullable_parser_nodes__TKwredef.color;
idtype17 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_tkwredefnode3->type->table_size) {
var15 = 0;
} else {
var15 = var_tkwredefnode3->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7099);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype19 = type_nullable_parser_nodes__AVisibility.color;
idtype20 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pvisibilitynode4->type->table_size) {
var18 = 0;
} else {
var18 = var_pvisibilitynode4->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7101);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype22 = type_nullable_parser_nodes__AClasskind.color;
idtype23 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_pclasskindnode5->type->table_size) {
var21 = 0;
} else {
var21 = var_pclasskindnode5->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7103);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype25 = type_nullable_parser_nodes__TClassid.color;
idtype26 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_tclassidnode6->type->table_size) {
var24 = 0;
} else {
var24 = var_tclassidnode6->type->type_table[cltype25] == idtype26;
}
}
if (!var24) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7105);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype28 = type_array__Arraykernel__Object.color;
idtype29 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var27 = 0;
} else {
if(cltype28 >= var_listnode7->type->table_size) {
var27 = 0;
} else {
var27 = var_listnode7->type->type_table[cltype28] == idtype29;
}
}
if (!var27) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7107);
show_backtrace(1);
}
var30 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction146>*/;
var_listnode8 = var30;
var_listnode11 = var_nodearraylist8;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype32 = type_array__Arraykernel__Object.color;
idtype33 = type_array__Arraykernel__Object.id;
if(var_listnode11 == NULL) {
var31 = 0;
} else {
if(cltype32 >= var_listnode11->type->table_size) {
var31 = 0;
} else {
var31 = var_listnode11->type->type_table[cltype32] == idtype33;
}
}
if (!var31) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7110);
show_backtrace(1);
}
var34 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction146>*/;
var_listnode12 = var34;
var_tkwendnode14 = var_nodearraylist10;
/* <var_tkwendnode14:nullable Object> isa nullable TKwend */
cltype36 = type_nullable_parser_nodes__TKwend.color;
idtype37 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode14 == NULL) {
var35 = 1;
} else {
if(cltype36 >= var_tkwendnode14->type->table_size) {
var35 = 0;
} else {
var35 = var_tkwendnode14->type->type_table[cltype36] == idtype37;
}
}
if (!var35) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7113);
show_backtrace(1);
}
var38 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var39 = NULL;
var40 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var38->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var38, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var39, var40, var_listnode12, var_listnode13, var_tkwendnode14) /* init_astdclassdef on <var38:AStdClassdef>*/;
var_pclassdefnode1 = var38;
var_node_list = var_pclassdefnode1;
var41 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction146> */
var42 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var41) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var42, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction146#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction146__action(val* self, val* p0) {
parser__ReduceAction146__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction147#action for (self: ReduceAction147, Parser) */
void parser__ReduceAction147__action(val* self, val* p0) {
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
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var12 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var14 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var27 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var31 /* : Array[Object] */;
val* var_tkwendnode14 /* var tkwendnode14: nullable Object */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
val* var35 /* : AStdClassdef */;
val* var36 /* : null */;
val* var37 /* : null */;
val* var38 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var39 /* : Int */;
long var40 /* : Int */;
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
var_listnode8 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
var_listnode12 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
var_listnode13 = var13;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var14 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var14 = 0;
} else {
var14 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7150);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7152);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist3;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype19 = type_nullable_parser_nodes__AClasskind.color;
idtype20 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pclasskindnode5->type->table_size) {
var18 = 0;
} else {
var18 = var_pclasskindnode5->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7154);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype22 = type_nullable_parser_nodes__TClassid.color;
idtype23 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_tclassidnode6->type->table_size) {
var21 = 0;
} else {
var21 = var_tclassidnode6->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7156);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype25 = type_array__Arraykernel__Object.color;
idtype26 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var24 = 0;
} else {
if(cltype25 >= var_listnode7->type->table_size) {
var24 = 0;
} else {
var24 = var_listnode7->type->type_table[cltype25] == idtype26;
}
}
if (!var24) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7158);
show_backtrace(1);
}
var27 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction147>*/;
var_listnode8 = var27;
var_listnode11 = var_nodearraylist8;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype29 = type_array__Arraykernel__Object.color;
idtype30 = type_array__Arraykernel__Object.id;
if(var_listnode11 == NULL) {
var28 = 0;
} else {
if(cltype29 >= var_listnode11->type->table_size) {
var28 = 0;
} else {
var28 = var_listnode11->type->type_table[cltype29] == idtype30;
}
}
if (!var28) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7161);
show_backtrace(1);
}
var31 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction147>*/;
var_listnode12 = var31;
var_tkwendnode14 = var_nodearraylist10;
/* <var_tkwendnode14:nullable Object> isa nullable TKwend */
cltype33 = type_nullable_parser_nodes__TKwend.color;
idtype34 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode14 == NULL) {
var32 = 1;
} else {
if(cltype33 >= var_tkwendnode14->type->table_size) {
var32 = 0;
} else {
var32 = var_tkwendnode14->type->type_table[cltype33] == idtype34;
}
}
if (!var32) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7164);
show_backtrace(1);
}
var35 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var36 = NULL;
var37 = NULL;
var38 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var35->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var35, var_pdocnode2, var36, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var37, var38, var_listnode12, var_listnode13, var_tkwendnode14) /* init_astdclassdef on <var35:AStdClassdef>*/;
var_pclassdefnode1 = var35;
var_node_list = var_pclassdefnode1;
var39 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction147> */
var40 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var39) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var40, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction147#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction147__action(val* self, val* p0) {
parser__ReduceAction147__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction148#action for (self: ReduceAction148, Parser) */
void parser__ReduceAction148__action(val* self, val* p0) {
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
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var15 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var32 /* : Array[Object] */;
val* var_tkwendnode14 /* var tkwendnode14: nullable Object */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
val* var36 /* : AStdClassdef */;
val* var37 /* : null */;
val* var38 /* : null */;
val* var39 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
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
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
var_listnode8 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
var_listnode12 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
var_listnode13 = var14;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var15 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var15 = 0;
} else {
var15 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7202);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7204);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist3;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype20 = type_nullable_parser_nodes__AClasskind.color;
idtype21 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_pclasskindnode5->type->table_size) {
var19 = 0;
} else {
var19 = var_pclasskindnode5->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7206);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist7;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype23 = type_nullable_parser_nodes__TClassid.color;
idtype24 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_tclassidnode6->type->table_size) {
var22 = 0;
} else {
var22 = var_tclassidnode6->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7208);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist8;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype26 = type_array__Arraykernel__Object.color;
idtype27 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var25 = 0;
} else {
if(cltype26 >= var_listnode7->type->table_size) {
var25 = 0;
} else {
var25 = var_listnode7->type->type_table[cltype26] == idtype27;
}
}
if (!var25) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7210);
show_backtrace(1);
}
var28 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction148>*/;
var_listnode8 = var28;
var_listnode11 = var_nodearraylist9;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype30 = type_array__Arraykernel__Object.color;
idtype31 = type_array__Arraykernel__Object.id;
if(var_listnode11 == NULL) {
var29 = 0;
} else {
if(cltype30 >= var_listnode11->type->table_size) {
var29 = 0;
} else {
var29 = var_listnode11->type->type_table[cltype30] == idtype31;
}
}
if (!var29) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7213);
show_backtrace(1);
}
var32 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction148>*/;
var_listnode12 = var32;
var_tkwendnode14 = var_nodearraylist11;
/* <var_tkwendnode14:nullable Object> isa nullable TKwend */
cltype34 = type_nullable_parser_nodes__TKwend.color;
idtype35 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode14 == NULL) {
var33 = 1;
} else {
if(cltype34 >= var_tkwendnode14->type->table_size) {
var33 = 0;
} else {
var33 = var_tkwendnode14->type->type_table[cltype34] == idtype35;
}
}
if (!var33) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7216);
show_backtrace(1);
}
var36 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var37 = NULL;
var38 = NULL;
var39 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var36->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var36, var_pdocnode2, var37, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var38, var39, var_listnode12, var_listnode13, var_tkwendnode14) /* init_astdclassdef on <var36:AStdClassdef>*/;
var_pclassdefnode1 = var36;
var_node_list = var_pclassdefnode1;
var40 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction148> */
var41 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var40) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var41, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction148#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction148__action(val* self, val* p0) {
parser__ReduceAction148__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction150#action for (self: ReduceAction150, Parser) */
void parser__ReduceAction150__action(val* self, val* p0) {
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
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var15 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var31 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
val* var35 /* : Array[Object] */;
val* var_tkwendnode14 /* var tkwendnode14: nullable Object */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
val* var39 /* : AStdClassdef */;
val* var40 /* : null */;
val* var41 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var42 /* : Int */;
long var43 /* : Int */;
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
var_listnode8 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
var_listnode12 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
var_listnode13 = var14;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var15 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var15 = 0;
} else {
var15 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7254);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype17 = type_nullable_parser_nodes__TKwredef.color;
idtype18 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tkwredefnode3->type->table_size) {
var16 = 0;
} else {
var16 = var_tkwredefnode3->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7256);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype20 = type_nullable_parser_nodes__AVisibility.color;
idtype21 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_pvisibilitynode4->type->table_size) {
var19 = 0;
} else {
var19 = var_pvisibilitynode4->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7258);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype23 = type_nullable_parser_nodes__AClasskind.color;
idtype24 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_pclasskindnode5->type->table_size) {
var22 = 0;
} else {
var22 = var_pclasskindnode5->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7260);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist7;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype26 = type_nullable_parser_nodes__TClassid.color;
idtype27 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var25 = 1;
} else {
if(cltype26 >= var_tclassidnode6->type->table_size) {
var25 = 0;
} else {
var25 = var_tclassidnode6->type->type_table[cltype26] == idtype27;
}
}
if (!var25) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7262);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist8;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype29 = type_array__Arraykernel__Object.color;
idtype30 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var28 = 0;
} else {
if(cltype29 >= var_listnode7->type->table_size) {
var28 = 0;
} else {
var28 = var_listnode7->type->type_table[cltype29] == idtype30;
}
}
if (!var28) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7264);
show_backtrace(1);
}
var31 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction150>*/;
var_listnode8 = var31;
var_listnode11 = var_nodearraylist9;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype33 = type_array__Arraykernel__Object.color;
idtype34 = type_array__Arraykernel__Object.id;
if(var_listnode11 == NULL) {
var32 = 0;
} else {
if(cltype33 >= var_listnode11->type->table_size) {
var32 = 0;
} else {
var32 = var_listnode11->type->type_table[cltype33] == idtype34;
}
}
if (!var32) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7267);
show_backtrace(1);
}
var35 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction150>*/;
var_listnode12 = var35;
var_tkwendnode14 = var_nodearraylist11;
/* <var_tkwendnode14:nullable Object> isa nullable TKwend */
cltype37 = type_nullable_parser_nodes__TKwend.color;
idtype38 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode14 == NULL) {
var36 = 1;
} else {
if(cltype37 >= var_tkwendnode14->type->table_size) {
var36 = 0;
} else {
var36 = var_tkwendnode14->type->type_table[cltype37] == idtype38;
}
}
if (!var36) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7270);
show_backtrace(1);
}
var39 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var40 = NULL;
var41 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var39->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var39, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var40, var41, var_listnode12, var_listnode13, var_tkwendnode14) /* init_astdclassdef on <var39:AStdClassdef>*/;
var_pclassdefnode1 = var39;
var_node_list = var_pclassdefnode1;
var42 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction150> */
var43 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var42) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var43, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction150#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction150__action(val* self, val* p0) {
parser__ReduceAction150__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction151#action for (self: ReduceAction151, Parser) */
void parser__ReduceAction151__action(val* self, val* p0) {
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
val* var13 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var15 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var16 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var32 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
val* var36 /* : Array[Object] */;
val* var_tkwendnode14 /* var tkwendnode14: nullable Object */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
val* var40 /* : AStdClassdef */;
val* var41 /* : null */;
val* var42 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var43 /* : Int */;
long var44 /* : Int */;
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
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
var_listnode8 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
var_listnode12 = var14;
var15 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var15->class->vft[COLOR_array__Array__init]))(var15) /* init on <var15:Array[Object]>*/;
var_listnode13 = var15;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var16 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var16 = 0;
} else {
var16 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7309);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype18 = type_nullable_parser_nodes__TKwredef.color;
idtype19 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tkwredefnode3->type->table_size) {
var17 = 0;
} else {
var17 = var_tkwredefnode3->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7311);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype21 = type_nullable_parser_nodes__AVisibility.color;
idtype22 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_pvisibilitynode4->type->table_size) {
var20 = 0;
} else {
var20 = var_pvisibilitynode4->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7313);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype24 = type_nullable_parser_nodes__AClasskind.color;
idtype25 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_pclasskindnode5->type->table_size) {
var23 = 0;
} else {
var23 = var_pclasskindnode5->type->type_table[cltype24] == idtype25;
}
}
if (!var23) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7315);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist8;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype27 = type_nullable_parser_nodes__TClassid.color;
idtype28 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_tclassidnode6->type->table_size) {
var26 = 0;
} else {
var26 = var_tclassidnode6->type->type_table[cltype27] == idtype28;
}
}
if (!var26) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7317);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist9;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype30 = type_array__Arraykernel__Object.color;
idtype31 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var29 = 0;
} else {
if(cltype30 >= var_listnode7->type->table_size) {
var29 = 0;
} else {
var29 = var_listnode7->type->type_table[cltype30] == idtype31;
}
}
if (!var29) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7319);
show_backtrace(1);
}
var32 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction151>*/;
var_listnode8 = var32;
var_listnode11 = var_nodearraylist10;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype34 = type_array__Arraykernel__Object.color;
idtype35 = type_array__Arraykernel__Object.id;
if(var_listnode11 == NULL) {
var33 = 0;
} else {
if(cltype34 >= var_listnode11->type->table_size) {
var33 = 0;
} else {
var33 = var_listnode11->type->type_table[cltype34] == idtype35;
}
}
if (!var33) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7322);
show_backtrace(1);
}
var36 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction151>*/;
var_listnode12 = var36;
var_tkwendnode14 = var_nodearraylist12;
/* <var_tkwendnode14:nullable Object> isa nullable TKwend */
cltype38 = type_nullable_parser_nodes__TKwend.color;
idtype39 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode14 == NULL) {
var37 = 1;
} else {
if(cltype38 >= var_tkwendnode14->type->table_size) {
var37 = 0;
} else {
var37 = var_tkwendnode14->type->type_table[cltype38] == idtype39;
}
}
if (!var37) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7325);
show_backtrace(1);
}
var40 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var41 = NULL;
var42 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var40->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var40, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var41, var42, var_listnode12, var_listnode13, var_tkwendnode14) /* init_astdclassdef on <var40:AStdClassdef>*/;
var_pclassdefnode1 = var40;
var_node_list = var_pclassdefnode1;
var43 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction151> */
var44 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var43) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var44, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction151#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction151__action(val* self, val* p0) {
parser__ReduceAction151__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction153#action for (self: ReduceAction153, Parser) */
void parser__ReduceAction153__action(val* self, val* p0) {
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
val* var10 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var11 /* : Array[Object] */;
val* var_listnode16 /* var listnode16: Array[Object] */;
val* var12 /* : Array[Object] */;
val* var_listnode17 /* var listnode17: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var13 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var23 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var27 /* : Array[Object] */;
val* var28 /* : AAnnotations */;
val* var29 /* : null */;
val* var30 /* : null */;
val* var31 /* : null */;
val* var_pannotationsnode8 /* var pannotationsnode8: nullable AAnnotations */;
val* var_listnode15 /* var listnode15: nullable Object */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
val* var35 /* : Array[Object] */;
val* var_tkwendnode18 /* var tkwendnode18: nullable Object */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
val* var39 /* : AStdClassdef */;
val* var40 /* : null */;
val* var41 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var42 /* : Int */;
long var43 /* : Int */;
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
var10 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var10->class->vft[COLOR_array__Array__init]))(var10) /* init on <var10:Array[Object]>*/;
var_listnode7 = var10;
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var11->class->vft[COLOR_array__Array__init]))(var11) /* init on <var11:Array[Object]>*/;
var_listnode16 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
var_listnode17 = var12;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var13 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var13 = 0;
} else {
var13 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7361);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7363);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist3;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype18 = type_nullable_parser_nodes__AClasskind.color;
idtype19 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_pclasskindnode5->type->table_size) {
var17 = 0;
} else {
var17 = var_pclasskindnode5->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7365);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist5;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype21 = type_nullable_parser_nodes__TClassid.color;
idtype22 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_tclassidnode6->type->table_size) {
var20 = 0;
} else {
var20 = var_tclassidnode6->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7367);
show_backtrace(1);
}
var23 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var23->class->vft[COLOR_array__Array__init]))(var23) /* init on <var23:Array[Object]>*/;
var_listnode12 = var23;
var_listnode11 = var_nodearraylist6;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype25 = type_array__Arraykernel__Object.color;
idtype26 = type_array__Arraykernel__Object.id;
if(var_listnode11 == NULL) {
var24 = 0;
} else {
if(cltype25 >= var_listnode11->type->table_size) {
var24 = 0;
} else {
var24 = var_listnode11->type->type_table[cltype25] == idtype26;
}
}
if (!var24) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7370);
show_backtrace(1);
}
var27 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction153>*/;
var_listnode12 = var27;
var28 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var29 = NULL;
var30 = NULL;
var31 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var28->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var28, var29, var30, var_listnode12, var31) /* init_aannotations on <var28:AAnnotations>*/;
var_pannotationsnode8 = var28;
var_listnode15 = var_nodearraylist7;
/* <var_listnode15:nullable Object> isa Array[Object] */
cltype33 = type_array__Arraykernel__Object.color;
idtype34 = type_array__Arraykernel__Object.id;
if(var_listnode15 == NULL) {
var32 = 0;
} else {
if(cltype33 >= var_listnode15->type->table_size) {
var32 = 0;
} else {
var32 = var_listnode15->type->type_table[cltype33] == idtype34;
}
}
if (!var32) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7379);
show_backtrace(1);
}
var35 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode16, var_listnode15) /* concat on <self:ReduceAction153>*/;
var_listnode16 = var35;
var_tkwendnode18 = var_nodearraylist9;
/* <var_tkwendnode18:nullable Object> isa nullable TKwend */
cltype37 = type_nullable_parser_nodes__TKwend.color;
idtype38 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode18 == NULL) {
var36 = 1;
} else {
if(cltype37 >= var_tkwendnode18->type->table_size) {
var36 = 0;
} else {
var36 = var_tkwendnode18->type->type_table[cltype37] == idtype38;
}
}
if (!var36) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7382);
show_backtrace(1);
}
var39 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var40 = NULL;
var41 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var39->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var39, var_pdocnode2, var40, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var_pannotationsnode8, var41, var_listnode16, var_listnode17, var_tkwendnode18) /* init_astdclassdef on <var39:AStdClassdef>*/;
var_pclassdefnode1 = var39;
var_node_list = var_pclassdefnode1;
var42 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction153> */
var43 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var42) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var43, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction153#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction153__action(val* self, val* p0) {
parser__ReduceAction153__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction154#action for (self: ReduceAction154, Parser) */
void parser__ReduceAction154__action(val* self, val* p0) {
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
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var12 /* : Array[Object] */;
val* var_listnode16 /* var listnode16: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode17 /* var listnode17: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var14 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var27 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var31 /* : Array[Object] */;
val* var32 /* : AAnnotations */;
val* var33 /* : null */;
val* var34 /* : null */;
val* var35 /* : null */;
val* var_pannotationsnode8 /* var pannotationsnode8: nullable AAnnotations */;
val* var_listnode15 /* var listnode15: nullable Object */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
val* var39 /* : Array[Object] */;
val* var_tkwendnode18 /* var tkwendnode18: nullable Object */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
val* var43 /* : AStdClassdef */;
val* var44 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var45 /* : Int */;
long var46 /* : Int */;
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
var_listnode7 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
var_listnode16 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
var_listnode17 = var13;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var14 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var14 = 0;
} else {
var14 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7419);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype16 = type_nullable_parser_nodes__TKwredef.color;
idtype17 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_tkwredefnode3->type->table_size) {
var15 = 0;
} else {
var15 = var_tkwredefnode3->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7421);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype19 = type_nullable_parser_nodes__AVisibility.color;
idtype20 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pvisibilitynode4->type->table_size) {
var18 = 0;
} else {
var18 = var_pvisibilitynode4->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7423);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype22 = type_nullable_parser_nodes__AClasskind.color;
idtype23 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_pclasskindnode5->type->table_size) {
var21 = 0;
} else {
var21 = var_pclasskindnode5->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7425);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype25 = type_nullable_parser_nodes__TClassid.color;
idtype26 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_tclassidnode6->type->table_size) {
var24 = 0;
} else {
var24 = var_tclassidnode6->type->type_table[cltype25] == idtype26;
}
}
if (!var24) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7427);
show_backtrace(1);
}
var27 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var27->class->vft[COLOR_array__Array__init]))(var27) /* init on <var27:Array[Object]>*/;
var_listnode12 = var27;
var_listnode11 = var_nodearraylist7;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype29 = type_array__Arraykernel__Object.color;
idtype30 = type_array__Arraykernel__Object.id;
if(var_listnode11 == NULL) {
var28 = 0;
} else {
if(cltype29 >= var_listnode11->type->table_size) {
var28 = 0;
} else {
var28 = var_listnode11->type->type_table[cltype29] == idtype30;
}
}
if (!var28) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7430);
show_backtrace(1);
}
var31 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction154>*/;
var_listnode12 = var31;
var32 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var33 = NULL;
var34 = NULL;
var35 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var32->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var32, var33, var34, var_listnode12, var35) /* init_aannotations on <var32:AAnnotations>*/;
var_pannotationsnode8 = var32;
var_listnode15 = var_nodearraylist8;
/* <var_listnode15:nullable Object> isa Array[Object] */
cltype37 = type_array__Arraykernel__Object.color;
idtype38 = type_array__Arraykernel__Object.id;
if(var_listnode15 == NULL) {
var36 = 0;
} else {
if(cltype37 >= var_listnode15->type->table_size) {
var36 = 0;
} else {
var36 = var_listnode15->type->type_table[cltype37] == idtype38;
}
}
if (!var36) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7439);
show_backtrace(1);
}
var39 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode16, var_listnode15) /* concat on <self:ReduceAction154>*/;
var_listnode16 = var39;
var_tkwendnode18 = var_nodearraylist10;
/* <var_tkwendnode18:nullable Object> isa nullable TKwend */
cltype41 = type_nullable_parser_nodes__TKwend.color;
idtype42 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode18 == NULL) {
var40 = 1;
} else {
if(cltype41 >= var_tkwendnode18->type->table_size) {
var40 = 0;
} else {
var40 = var_tkwendnode18->type->type_table[cltype41] == idtype42;
}
}
if (!var40) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7442);
show_backtrace(1);
}
var43 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var44 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var43->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var43, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var_pannotationsnode8, var44, var_listnode16, var_listnode17, var_tkwendnode18) /* init_astdclassdef on <var43:AStdClassdef>*/;
var_pclassdefnode1 = var43;
var_node_list = var_pclassdefnode1;
var45 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction154> */
var46 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var45) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var46, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction154#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction154__action(val* self, val* p0) {
parser__ReduceAction154__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction155#action for (self: ReduceAction155, Parser) */
void parser__ReduceAction155__action(val* self, val* p0) {
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
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var12 /* : Array[Object] */;
val* var_listnode16 /* var listnode16: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode17 /* var listnode17: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var14 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var24 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : Array[Object] */;
val* var29 /* : AAnnotations */;
val* var30 /* : null */;
val* var31 /* : null */;
val* var32 /* : null */;
val* var_pannotationsnode8 /* var pannotationsnode8: nullable AAnnotations */;
val* var_listnode15 /* var listnode15: nullable Object */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
val* var36 /* : Array[Object] */;
val* var_tkwendnode18 /* var tkwendnode18: nullable Object */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
val* var40 /* : AStdClassdef */;
val* var41 /* : null */;
val* var42 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var43 /* : Int */;
long var44 /* : Int */;
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
var_listnode7 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
var_listnode16 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
var_listnode17 = var13;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var14 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var14 = 0;
} else {
var14 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7479);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7481);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist3;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype19 = type_nullable_parser_nodes__AClasskind.color;
idtype20 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pclasskindnode5->type->table_size) {
var18 = 0;
} else {
var18 = var_pclasskindnode5->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7483);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype22 = type_nullable_parser_nodes__TClassid.color;
idtype23 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_tclassidnode6->type->table_size) {
var21 = 0;
} else {
var21 = var_tclassidnode6->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7485);
show_backtrace(1);
}
var24 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var24->class->vft[COLOR_array__Array__init]))(var24) /* init on <var24:Array[Object]>*/;
var_listnode12 = var24;
var_listnode11 = var_nodearraylist7;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype26 = type_array__Arraykernel__Object.color;
idtype27 = type_array__Arraykernel__Object.id;
if(var_listnode11 == NULL) {
var25 = 0;
} else {
if(cltype26 >= var_listnode11->type->table_size) {
var25 = 0;
} else {
var25 = var_listnode11->type->type_table[cltype26] == idtype27;
}
}
if (!var25) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7488);
show_backtrace(1);
}
var28 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction155>*/;
var_listnode12 = var28;
var29 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var30 = NULL;
var31 = NULL;
var32 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var29, var30, var31, var_listnode12, var32) /* init_aannotations on <var29:AAnnotations>*/;
var_pannotationsnode8 = var29;
var_listnode15 = var_nodearraylist8;
/* <var_listnode15:nullable Object> isa Array[Object] */
cltype34 = type_array__Arraykernel__Object.color;
idtype35 = type_array__Arraykernel__Object.id;
if(var_listnode15 == NULL) {
var33 = 0;
} else {
if(cltype34 >= var_listnode15->type->table_size) {
var33 = 0;
} else {
var33 = var_listnode15->type->type_table[cltype34] == idtype35;
}
}
if (!var33) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7497);
show_backtrace(1);
}
var36 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode16, var_listnode15) /* concat on <self:ReduceAction155>*/;
var_listnode16 = var36;
var_tkwendnode18 = var_nodearraylist10;
/* <var_tkwendnode18:nullable Object> isa nullable TKwend */
cltype38 = type_nullable_parser_nodes__TKwend.color;
idtype39 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode18 == NULL) {
var37 = 1;
} else {
if(cltype38 >= var_tkwendnode18->type->table_size) {
var37 = 0;
} else {
var37 = var_tkwendnode18->type->type_table[cltype38] == idtype39;
}
}
if (!var37) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7500);
show_backtrace(1);
}
var40 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var41 = NULL;
var42 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var40->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var40, var_pdocnode2, var41, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var_pannotationsnode8, var42, var_listnode16, var_listnode17, var_tkwendnode18) /* init_astdclassdef on <var40:AStdClassdef>*/;
var_pclassdefnode1 = var40;
var_node_list = var_pclassdefnode1;
var43 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction155> */
var44 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var43) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var44, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction155#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction155__action(val* self, val* p0) {
parser__ReduceAction155__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction156#action for (self: ReduceAction156, Parser) */
void parser__ReduceAction156__action(val* self, val* p0) {
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
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode16 /* var listnode16: Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode17 /* var listnode17: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var15 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var25 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : Array[Object] */;
val* var30 /* : AAnnotations */;
val* var31 /* : null */;
val* var32 /* : null */;
val* var33 /* : null */;
val* var_pannotationsnode8 /* var pannotationsnode8: nullable AAnnotations */;
val* var_listnode15 /* var listnode15: nullable Object */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
val* var37 /* : Array[Object] */;
val* var_tkwendnode18 /* var tkwendnode18: nullable Object */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
val* var41 /* : AStdClassdef */;
val* var42 /* : null */;
val* var43 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var44 /* : Int */;
long var45 /* : Int */;
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
var_listnode7 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
var_listnode16 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
var_listnode17 = var14;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var15 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var15 = 0;
} else {
var15 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7538);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7540);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist3;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype20 = type_nullable_parser_nodes__AClasskind.color;
idtype21 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_pclasskindnode5->type->table_size) {
var19 = 0;
} else {
var19 = var_pclasskindnode5->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7542);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist7;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype23 = type_nullable_parser_nodes__TClassid.color;
idtype24 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_tclassidnode6->type->table_size) {
var22 = 0;
} else {
var22 = var_tclassidnode6->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7544);
show_backtrace(1);
}
var25 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var25->class->vft[COLOR_array__Array__init]))(var25) /* init on <var25:Array[Object]>*/;
var_listnode12 = var25;
var_listnode11 = var_nodearraylist8;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype27 = type_array__Arraykernel__Object.color;
idtype28 = type_array__Arraykernel__Object.id;
if(var_listnode11 == NULL) {
var26 = 0;
} else {
if(cltype27 >= var_listnode11->type->table_size) {
var26 = 0;
} else {
var26 = var_listnode11->type->type_table[cltype27] == idtype28;
}
}
if (!var26) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7547);
show_backtrace(1);
}
var29 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction156>*/;
var_listnode12 = var29;
var30 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var31 = NULL;
var32 = NULL;
var33 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var30->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var30, var31, var32, var_listnode12, var33) /* init_aannotations on <var30:AAnnotations>*/;
var_pannotationsnode8 = var30;
var_listnode15 = var_nodearraylist9;
/* <var_listnode15:nullable Object> isa Array[Object] */
cltype35 = type_array__Arraykernel__Object.color;
idtype36 = type_array__Arraykernel__Object.id;
if(var_listnode15 == NULL) {
var34 = 0;
} else {
if(cltype35 >= var_listnode15->type->table_size) {
var34 = 0;
} else {
var34 = var_listnode15->type->type_table[cltype35] == idtype36;
}
}
if (!var34) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7556);
show_backtrace(1);
}
var37 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode16, var_listnode15) /* concat on <self:ReduceAction156>*/;
var_listnode16 = var37;
var_tkwendnode18 = var_nodearraylist11;
/* <var_tkwendnode18:nullable Object> isa nullable TKwend */
cltype39 = type_nullable_parser_nodes__TKwend.color;
idtype40 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode18 == NULL) {
var38 = 1;
} else {
if(cltype39 >= var_tkwendnode18->type->table_size) {
var38 = 0;
} else {
var38 = var_tkwendnode18->type->type_table[cltype39] == idtype40;
}
}
if (!var38) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7559);
show_backtrace(1);
}
var41 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var42 = NULL;
var43 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var41->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var41, var_pdocnode2, var42, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var_pannotationsnode8, var43, var_listnode16, var_listnode17, var_tkwendnode18) /* init_astdclassdef on <var41:AStdClassdef>*/;
var_pclassdefnode1 = var41;
var_node_list = var_pclassdefnode1;
var44 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction156> */
var45 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var44) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var45, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction156#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction156__action(val* self, val* p0) {
parser__ReduceAction156__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction158#action for (self: ReduceAction158, Parser) */
void parser__ReduceAction158__action(val* self, val* p0) {
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
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode16 /* var listnode16: Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode17 /* var listnode17: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var15 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var32 /* : Array[Object] */;
val* var33 /* : AAnnotations */;
val* var34 /* : null */;
val* var35 /* : null */;
val* var36 /* : null */;
val* var_pannotationsnode8 /* var pannotationsnode8: nullable AAnnotations */;
val* var_listnode15 /* var listnode15: nullable Object */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
val* var40 /* : Array[Object] */;
val* var_tkwendnode18 /* var tkwendnode18: nullable Object */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
val* var44 /* : AStdClassdef */;
val* var45 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var46 /* : Int */;
long var47 /* : Int */;
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
var_listnode7 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
var_listnode16 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
var_listnode17 = var14;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var15 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var15 = 0;
} else {
var15 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7597);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype17 = type_nullable_parser_nodes__TKwredef.color;
idtype18 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tkwredefnode3->type->table_size) {
var16 = 0;
} else {
var16 = var_tkwredefnode3->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7599);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype20 = type_nullable_parser_nodes__AVisibility.color;
idtype21 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_pvisibilitynode4->type->table_size) {
var19 = 0;
} else {
var19 = var_pvisibilitynode4->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7601);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype23 = type_nullable_parser_nodes__AClasskind.color;
idtype24 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_pclasskindnode5->type->table_size) {
var22 = 0;
} else {
var22 = var_pclasskindnode5->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7603);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist7;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype26 = type_nullable_parser_nodes__TClassid.color;
idtype27 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var25 = 1;
} else {
if(cltype26 >= var_tclassidnode6->type->table_size) {
var25 = 0;
} else {
var25 = var_tclassidnode6->type->type_table[cltype26] == idtype27;
}
}
if (!var25) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7605);
show_backtrace(1);
}
var28 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var28->class->vft[COLOR_array__Array__init]))(var28) /* init on <var28:Array[Object]>*/;
var_listnode12 = var28;
var_listnode11 = var_nodearraylist8;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype30 = type_array__Arraykernel__Object.color;
idtype31 = type_array__Arraykernel__Object.id;
if(var_listnode11 == NULL) {
var29 = 0;
} else {
if(cltype30 >= var_listnode11->type->table_size) {
var29 = 0;
} else {
var29 = var_listnode11->type->type_table[cltype30] == idtype31;
}
}
if (!var29) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7608);
show_backtrace(1);
}
var32 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction158>*/;
var_listnode12 = var32;
var33 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var34 = NULL;
var35 = NULL;
var36 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var33->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var33, var34, var35, var_listnode12, var36) /* init_aannotations on <var33:AAnnotations>*/;
var_pannotationsnode8 = var33;
var_listnode15 = var_nodearraylist9;
/* <var_listnode15:nullable Object> isa Array[Object] */
cltype38 = type_array__Arraykernel__Object.color;
idtype39 = type_array__Arraykernel__Object.id;
if(var_listnode15 == NULL) {
var37 = 0;
} else {
if(cltype38 >= var_listnode15->type->table_size) {
var37 = 0;
} else {
var37 = var_listnode15->type->type_table[cltype38] == idtype39;
}
}
if (!var37) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7617);
show_backtrace(1);
}
var40 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode16, var_listnode15) /* concat on <self:ReduceAction158>*/;
var_listnode16 = var40;
var_tkwendnode18 = var_nodearraylist11;
/* <var_tkwendnode18:nullable Object> isa nullable TKwend */
cltype42 = type_nullable_parser_nodes__TKwend.color;
idtype43 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode18 == NULL) {
var41 = 1;
} else {
if(cltype42 >= var_tkwendnode18->type->table_size) {
var41 = 0;
} else {
var41 = var_tkwendnode18->type->type_table[cltype42] == idtype43;
}
}
if (!var41) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7620);
show_backtrace(1);
}
var44 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var45 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var44->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var44, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var_pannotationsnode8, var45, var_listnode16, var_listnode17, var_tkwendnode18) /* init_astdclassdef on <var44:AStdClassdef>*/;
var_pclassdefnode1 = var44;
var_node_list = var_pclassdefnode1;
var46 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction158> */
var47 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var46) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var47, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction158#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction158__action(val* self, val* p0) {
parser__ReduceAction158__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction159#action for (self: ReduceAction159, Parser) */
void parser__ReduceAction159__action(val* self, val* p0) {
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
val* var13 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode16 /* var listnode16: Array[Object] */;
val* var15 /* : Array[Object] */;
val* var_listnode17 /* var listnode17: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var16 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
val* var33 /* : Array[Object] */;
val* var34 /* : AAnnotations */;
val* var35 /* : null */;
val* var36 /* : null */;
val* var37 /* : null */;
val* var_pannotationsnode8 /* var pannotationsnode8: nullable AAnnotations */;
val* var_listnode15 /* var listnode15: nullable Object */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
val* var41 /* : Array[Object] */;
val* var_tkwendnode18 /* var tkwendnode18: nullable Object */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
val* var45 /* : AStdClassdef */;
val* var46 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var47 /* : Int */;
long var48 /* : Int */;
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
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
var_listnode7 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
var_listnode16 = var14;
var15 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var15->class->vft[COLOR_array__Array__init]))(var15) /* init on <var15:Array[Object]>*/;
var_listnode17 = var15;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var16 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var16 = 0;
} else {
var16 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7659);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype18 = type_nullable_parser_nodes__TKwredef.color;
idtype19 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tkwredefnode3->type->table_size) {
var17 = 0;
} else {
var17 = var_tkwredefnode3->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7661);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype21 = type_nullable_parser_nodes__AVisibility.color;
idtype22 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_pvisibilitynode4->type->table_size) {
var20 = 0;
} else {
var20 = var_pvisibilitynode4->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7663);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype24 = type_nullable_parser_nodes__AClasskind.color;
idtype25 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_pclasskindnode5->type->table_size) {
var23 = 0;
} else {
var23 = var_pclasskindnode5->type->type_table[cltype24] == idtype25;
}
}
if (!var23) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7665);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist8;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype27 = type_nullable_parser_nodes__TClassid.color;
idtype28 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_tclassidnode6->type->table_size) {
var26 = 0;
} else {
var26 = var_tclassidnode6->type->type_table[cltype27] == idtype28;
}
}
if (!var26) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7667);
show_backtrace(1);
}
var29 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var29->class->vft[COLOR_array__Array__init]))(var29) /* init on <var29:Array[Object]>*/;
var_listnode12 = var29;
var_listnode11 = var_nodearraylist9;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype31 = type_array__Arraykernel__Object.color;
idtype32 = type_array__Arraykernel__Object.id;
if(var_listnode11 == NULL) {
var30 = 0;
} else {
if(cltype31 >= var_listnode11->type->table_size) {
var30 = 0;
} else {
var30 = var_listnode11->type->type_table[cltype31] == idtype32;
}
}
if (!var30) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7670);
show_backtrace(1);
}
var33 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction159>*/;
var_listnode12 = var33;
var34 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var35 = NULL;
var36 = NULL;
var37 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var34->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var34, var35, var36, var_listnode12, var37) /* init_aannotations on <var34:AAnnotations>*/;
var_pannotationsnode8 = var34;
var_listnode15 = var_nodearraylist10;
/* <var_listnode15:nullable Object> isa Array[Object] */
cltype39 = type_array__Arraykernel__Object.color;
idtype40 = type_array__Arraykernel__Object.id;
if(var_listnode15 == NULL) {
var38 = 0;
} else {
if(cltype39 >= var_listnode15->type->table_size) {
var38 = 0;
} else {
var38 = var_listnode15->type->type_table[cltype39] == idtype40;
}
}
if (!var38) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7679);
show_backtrace(1);
}
var41 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode16, var_listnode15) /* concat on <self:ReduceAction159>*/;
var_listnode16 = var41;
var_tkwendnode18 = var_nodearraylist12;
/* <var_tkwendnode18:nullable Object> isa nullable TKwend */
cltype43 = type_nullable_parser_nodes__TKwend.color;
idtype44 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode18 == NULL) {
var42 = 1;
} else {
if(cltype43 >= var_tkwendnode18->type->table_size) {
var42 = 0;
} else {
var42 = var_tkwendnode18->type->type_table[cltype43] == idtype44;
}
}
if (!var42) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7682);
show_backtrace(1);
}
var45 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var46 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var45->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var45, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var_pannotationsnode8, var46, var_listnode16, var_listnode17, var_tkwendnode18) /* init_astdclassdef on <var45:AStdClassdef>*/;
var_pclassdefnode1 = var45;
var_node_list = var_pclassdefnode1;
var47 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction159> */
var48 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var47) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var48, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction159#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction159__action(val* self, val* p0) {
parser__ReduceAction159__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction161#action for (self: ReduceAction161, Parser) */
void parser__ReduceAction161__action(val* self, val* p0) {
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
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var12 /* : Array[Object] */;
val* var_listnode17 /* var listnode17: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode18 /* var listnode18: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var14 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var27 /* : Array[Object] */;
val* var28 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_listnode12 /* var listnode12: nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var32 /* : Array[Object] */;
val* var33 /* : AAnnotations */;
val* var34 /* : null */;
val* var35 /* : null */;
val* var36 /* : null */;
val* var_pannotationsnode9 /* var pannotationsnode9: nullable AAnnotations */;
val* var_listnode16 /* var listnode16: nullable Object */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
val* var40 /* : Array[Object] */;
val* var_tkwendnode19 /* var tkwendnode19: nullable Object */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
val* var44 /* : AStdClassdef */;
val* var45 /* : null */;
val* var46 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var47 /* : Int */;
long var48 /* : Int */;
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
var_listnode8 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
var_listnode17 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
var_listnode18 = var13;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var14 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var14 = 0;
} else {
var14 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7719);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7721);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist3;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype19 = type_nullable_parser_nodes__AClasskind.color;
idtype20 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pclasskindnode5->type->table_size) {
var18 = 0;
} else {
var18 = var_pclasskindnode5->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7723);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist5;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype22 = type_nullable_parser_nodes__TClassid.color;
idtype23 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_tclassidnode6->type->table_size) {
var21 = 0;
} else {
var21 = var_tclassidnode6->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7725);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist6;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype25 = type_array__Arraykernel__Object.color;
idtype26 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var24 = 0;
} else {
if(cltype25 >= var_listnode7->type->table_size) {
var24 = 0;
} else {
var24 = var_listnode7->type->type_table[cltype25] == idtype26;
}
}
if (!var24) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7727);
show_backtrace(1);
}
var27 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction161>*/;
var_listnode8 = var27;
var28 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var28->class->vft[COLOR_array__Array__init]))(var28) /* init on <var28:Array[Object]>*/;
var_listnode13 = var28;
var_listnode12 = var_nodearraylist7;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype30 = type_array__Arraykernel__Object.color;
idtype31 = type_array__Arraykernel__Object.id;
if(var_listnode12 == NULL) {
var29 = 0;
} else {
if(cltype30 >= var_listnode12->type->table_size) {
var29 = 0;
} else {
var29 = var_listnode12->type->type_table[cltype30] == idtype31;
}
}
if (!var29) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7731);
show_backtrace(1);
}
var32 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode13, var_listnode12) /* concat on <self:ReduceAction161>*/;
var_listnode13 = var32;
var33 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var34 = NULL;
var35 = NULL;
var36 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var33->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var33, var34, var35, var_listnode13, var36) /* init_aannotations on <var33:AAnnotations>*/;
var_pannotationsnode9 = var33;
var_listnode16 = var_nodearraylist8;
/* <var_listnode16:nullable Object> isa Array[Object] */
cltype38 = type_array__Arraykernel__Object.color;
idtype39 = type_array__Arraykernel__Object.id;
if(var_listnode16 == NULL) {
var37 = 0;
} else {
if(cltype38 >= var_listnode16->type->table_size) {
var37 = 0;
} else {
var37 = var_listnode16->type->type_table[cltype38] == idtype39;
}
}
if (!var37) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7740);
show_backtrace(1);
}
var40 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode17, var_listnode16) /* concat on <self:ReduceAction161>*/;
var_listnode17 = var40;
var_tkwendnode19 = var_nodearraylist10;
/* <var_tkwendnode19:nullable Object> isa nullable TKwend */
cltype42 = type_nullable_parser_nodes__TKwend.color;
idtype43 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode19 == NULL) {
var41 = 1;
} else {
if(cltype42 >= var_tkwendnode19->type->table_size) {
var41 = 0;
} else {
var41 = var_tkwendnode19->type->type_table[cltype42] == idtype43;
}
}
if (!var41) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7743);
show_backtrace(1);
}
var44 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var45 = NULL;
var46 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var44->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var44, var_pdocnode2, var45, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var_pannotationsnode9, var46, var_listnode17, var_listnode18, var_tkwendnode19) /* init_astdclassdef on <var44:AStdClassdef>*/;
var_pclassdefnode1 = var44;
var_node_list = var_pclassdefnode1;
var47 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction161> */
var48 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var47) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var48, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction161#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction161__action(val* self, val* p0) {
parser__ReduceAction161__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction162#action for (self: ReduceAction162, Parser) */
void parser__ReduceAction162__action(val* self, val* p0) {
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
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode17 /* var listnode17: Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode18 /* var listnode18: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var15 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var31 /* : Array[Object] */;
val* var32 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_listnode12 /* var listnode12: nullable Object */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
val* var36 /* : Array[Object] */;
val* var37 /* : AAnnotations */;
val* var38 /* : null */;
val* var39 /* : null */;
val* var40 /* : null */;
val* var_pannotationsnode9 /* var pannotationsnode9: nullable AAnnotations */;
val* var_listnode16 /* var listnode16: nullable Object */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
val* var44 /* : Array[Object] */;
val* var_tkwendnode19 /* var tkwendnode19: nullable Object */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
val* var48 /* : AStdClassdef */;
val* var49 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var50 /* : Int */;
long var51 /* : Int */;
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
var_listnode8 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
var_listnode17 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
var_listnode18 = var14;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var15 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var15 = 0;
} else {
var15 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7781);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype17 = type_nullable_parser_nodes__TKwredef.color;
idtype18 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tkwredefnode3->type->table_size) {
var16 = 0;
} else {
var16 = var_tkwredefnode3->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7783);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype20 = type_nullable_parser_nodes__AVisibility.color;
idtype21 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_pvisibilitynode4->type->table_size) {
var19 = 0;
} else {
var19 = var_pvisibilitynode4->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7785);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype23 = type_nullable_parser_nodes__AClasskind.color;
idtype24 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_pclasskindnode5->type->table_size) {
var22 = 0;
} else {
var22 = var_pclasskindnode5->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7787);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype26 = type_nullable_parser_nodes__TClassid.color;
idtype27 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var25 = 1;
} else {
if(cltype26 >= var_tclassidnode6->type->table_size) {
var25 = 0;
} else {
var25 = var_tclassidnode6->type->type_table[cltype26] == idtype27;
}
}
if (!var25) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7789);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype29 = type_array__Arraykernel__Object.color;
idtype30 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var28 = 0;
} else {
if(cltype29 >= var_listnode7->type->table_size) {
var28 = 0;
} else {
var28 = var_listnode7->type->type_table[cltype29] == idtype30;
}
}
if (!var28) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7791);
show_backtrace(1);
}
var31 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction162>*/;
var_listnode8 = var31;
var32 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var32->class->vft[COLOR_array__Array__init]))(var32) /* init on <var32:Array[Object]>*/;
var_listnode13 = var32;
var_listnode12 = var_nodearraylist8;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype34 = type_array__Arraykernel__Object.color;
idtype35 = type_array__Arraykernel__Object.id;
if(var_listnode12 == NULL) {
var33 = 0;
} else {
if(cltype34 >= var_listnode12->type->table_size) {
var33 = 0;
} else {
var33 = var_listnode12->type->type_table[cltype34] == idtype35;
}
}
if (!var33) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7795);
show_backtrace(1);
}
var36 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode13, var_listnode12) /* concat on <self:ReduceAction162>*/;
var_listnode13 = var36;
var37 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var38 = NULL;
var39 = NULL;
var40 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var37->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var37, var38, var39, var_listnode13, var40) /* init_aannotations on <var37:AAnnotations>*/;
var_pannotationsnode9 = var37;
var_listnode16 = var_nodearraylist9;
/* <var_listnode16:nullable Object> isa Array[Object] */
cltype42 = type_array__Arraykernel__Object.color;
idtype43 = type_array__Arraykernel__Object.id;
if(var_listnode16 == NULL) {
var41 = 0;
} else {
if(cltype42 >= var_listnode16->type->table_size) {
var41 = 0;
} else {
var41 = var_listnode16->type->type_table[cltype42] == idtype43;
}
}
if (!var41) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7804);
show_backtrace(1);
}
var44 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode17, var_listnode16) /* concat on <self:ReduceAction162>*/;
var_listnode17 = var44;
var_tkwendnode19 = var_nodearraylist11;
/* <var_tkwendnode19:nullable Object> isa nullable TKwend */
cltype46 = type_nullable_parser_nodes__TKwend.color;
idtype47 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode19 == NULL) {
var45 = 1;
} else {
if(cltype46 >= var_tkwendnode19->type->table_size) {
var45 = 0;
} else {
var45 = var_tkwendnode19->type->type_table[cltype46] == idtype47;
}
}
if (!var45) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7807);
show_backtrace(1);
}
var48 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var49 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var48->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var48, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var_pannotationsnode9, var49, var_listnode17, var_listnode18, var_tkwendnode19) /* init_astdclassdef on <var48:AStdClassdef>*/;
var_pclassdefnode1 = var48;
var_node_list = var_pclassdefnode1;
var50 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction162> */
var51 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var50) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var51, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction162#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction162__action(val* self, val* p0) {
parser__ReduceAction162__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction163#action for (self: ReduceAction163, Parser) */
void parser__ReduceAction163__action(val* self, val* p0) {
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
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode17 /* var listnode17: Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode18 /* var listnode18: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var15 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : Array[Object] */;
val* var29 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_listnode12 /* var listnode12: nullable Object */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
val* var33 /* : Array[Object] */;
val* var34 /* : AAnnotations */;
val* var35 /* : null */;
val* var36 /* : null */;
val* var37 /* : null */;
val* var_pannotationsnode9 /* var pannotationsnode9: nullable AAnnotations */;
val* var_listnode16 /* var listnode16: nullable Object */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
val* var41 /* : Array[Object] */;
val* var_tkwendnode19 /* var tkwendnode19: nullable Object */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
val* var45 /* : AStdClassdef */;
val* var46 /* : null */;
val* var47 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var48 /* : Int */;
long var49 /* : Int */;
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
var_listnode8 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
var_listnode17 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
var_listnode18 = var14;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var15 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var15 = 0;
} else {
var15 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7845);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7847);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist3;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype20 = type_nullable_parser_nodes__AClasskind.color;
idtype21 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_pclasskindnode5->type->table_size) {
var19 = 0;
} else {
var19 = var_pclasskindnode5->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7849);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype23 = type_nullable_parser_nodes__TClassid.color;
idtype24 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_tclassidnode6->type->table_size) {
var22 = 0;
} else {
var22 = var_tclassidnode6->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7851);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype26 = type_array__Arraykernel__Object.color;
idtype27 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var25 = 0;
} else {
if(cltype26 >= var_listnode7->type->table_size) {
var25 = 0;
} else {
var25 = var_listnode7->type->type_table[cltype26] == idtype27;
}
}
if (!var25) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7853);
show_backtrace(1);
}
var28 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction163>*/;
var_listnode8 = var28;
var29 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var29->class->vft[COLOR_array__Array__init]))(var29) /* init on <var29:Array[Object]>*/;
var_listnode13 = var29;
var_listnode12 = var_nodearraylist8;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype31 = type_array__Arraykernel__Object.color;
idtype32 = type_array__Arraykernel__Object.id;
if(var_listnode12 == NULL) {
var30 = 0;
} else {
if(cltype31 >= var_listnode12->type->table_size) {
var30 = 0;
} else {
var30 = var_listnode12->type->type_table[cltype31] == idtype32;
}
}
if (!var30) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7857);
show_backtrace(1);
}
var33 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode13, var_listnode12) /* concat on <self:ReduceAction163>*/;
var_listnode13 = var33;
var34 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var35 = NULL;
var36 = NULL;
var37 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var34->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var34, var35, var36, var_listnode13, var37) /* init_aannotations on <var34:AAnnotations>*/;
var_pannotationsnode9 = var34;
var_listnode16 = var_nodearraylist9;
/* <var_listnode16:nullable Object> isa Array[Object] */
cltype39 = type_array__Arraykernel__Object.color;
idtype40 = type_array__Arraykernel__Object.id;
if(var_listnode16 == NULL) {
var38 = 0;
} else {
if(cltype39 >= var_listnode16->type->table_size) {
var38 = 0;
} else {
var38 = var_listnode16->type->type_table[cltype39] == idtype40;
}
}
if (!var38) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7866);
show_backtrace(1);
}
var41 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode17, var_listnode16) /* concat on <self:ReduceAction163>*/;
var_listnode17 = var41;
var_tkwendnode19 = var_nodearraylist11;
/* <var_tkwendnode19:nullable Object> isa nullable TKwend */
cltype43 = type_nullable_parser_nodes__TKwend.color;
idtype44 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode19 == NULL) {
var42 = 1;
} else {
if(cltype43 >= var_tkwendnode19->type->table_size) {
var42 = 0;
} else {
var42 = var_tkwendnode19->type->type_table[cltype43] == idtype44;
}
}
if (!var42) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7869);
show_backtrace(1);
}
var45 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var46 = NULL;
var47 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var45->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var45, var_pdocnode2, var46, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var_pannotationsnode9, var47, var_listnode17, var_listnode18, var_tkwendnode19) /* init_astdclassdef on <var45:AStdClassdef>*/;
var_pclassdefnode1 = var45;
var_node_list = var_pclassdefnode1;
var48 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction163> */
var49 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var48) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var49, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction163#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction163__action(val* self, val* p0) {
parser__ReduceAction163__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction164#action for (self: ReduceAction164, Parser) */
void parser__ReduceAction164__action(val* self, val* p0) {
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
val* var13 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode17 /* var listnode17: Array[Object] */;
val* var15 /* : Array[Object] */;
val* var_listnode18 /* var listnode18: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var16 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : Array[Object] */;
val* var30 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_listnode12 /* var listnode12: nullable Object */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var34 /* : Array[Object] */;
val* var35 /* : AAnnotations */;
val* var36 /* : null */;
val* var37 /* : null */;
val* var38 /* : null */;
val* var_pannotationsnode9 /* var pannotationsnode9: nullable AAnnotations */;
val* var_listnode16 /* var listnode16: nullable Object */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
val* var42 /* : Array[Object] */;
val* var_tkwendnode19 /* var tkwendnode19: nullable Object */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
val* var46 /* : AStdClassdef */;
val* var47 /* : null */;
val* var48 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var49 /* : Int */;
long var50 /* : Int */;
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
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
var_listnode8 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
var_listnode17 = var14;
var15 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var15->class->vft[COLOR_array__Array__init]))(var15) /* init on <var15:Array[Object]>*/;
var_listnode18 = var15;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var16 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var16 = 0;
} else {
var16 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7908);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype18 = type_nullable_parser_nodes__AVisibility.color;
idtype19 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_pvisibilitynode4->type->table_size) {
var17 = 0;
} else {
var17 = var_pvisibilitynode4->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7910);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist3;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype21 = type_nullable_parser_nodes__AClasskind.color;
idtype22 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_pclasskindnode5->type->table_size) {
var20 = 0;
} else {
var20 = var_pclasskindnode5->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7912);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist7;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype24 = type_nullable_parser_nodes__TClassid.color;
idtype25 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_tclassidnode6->type->table_size) {
var23 = 0;
} else {
var23 = var_tclassidnode6->type->type_table[cltype24] == idtype25;
}
}
if (!var23) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7914);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist8;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype27 = type_array__Arraykernel__Object.color;
idtype28 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var26 = 0;
} else {
if(cltype27 >= var_listnode7->type->table_size) {
var26 = 0;
} else {
var26 = var_listnode7->type->type_table[cltype27] == idtype28;
}
}
if (!var26) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7916);
show_backtrace(1);
}
var29 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction164>*/;
var_listnode8 = var29;
var30 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var30->class->vft[COLOR_array__Array__init]))(var30) /* init on <var30:Array[Object]>*/;
var_listnode13 = var30;
var_listnode12 = var_nodearraylist9;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype32 = type_array__Arraykernel__Object.color;
idtype33 = type_array__Arraykernel__Object.id;
if(var_listnode12 == NULL) {
var31 = 0;
} else {
if(cltype32 >= var_listnode12->type->table_size) {
var31 = 0;
} else {
var31 = var_listnode12->type->type_table[cltype32] == idtype33;
}
}
if (!var31) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7920);
show_backtrace(1);
}
var34 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode13, var_listnode12) /* concat on <self:ReduceAction164>*/;
var_listnode13 = var34;
var35 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var36 = NULL;
var37 = NULL;
var38 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var35->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var35, var36, var37, var_listnode13, var38) /* init_aannotations on <var35:AAnnotations>*/;
var_pannotationsnode9 = var35;
var_listnode16 = var_nodearraylist10;
/* <var_listnode16:nullable Object> isa Array[Object] */
cltype40 = type_array__Arraykernel__Object.color;
idtype41 = type_array__Arraykernel__Object.id;
if(var_listnode16 == NULL) {
var39 = 0;
} else {
if(cltype40 >= var_listnode16->type->table_size) {
var39 = 0;
} else {
var39 = var_listnode16->type->type_table[cltype40] == idtype41;
}
}
if (!var39) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7929);
show_backtrace(1);
}
var42 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode17, var_listnode16) /* concat on <self:ReduceAction164>*/;
var_listnode17 = var42;
var_tkwendnode19 = var_nodearraylist12;
/* <var_tkwendnode19:nullable Object> isa nullable TKwend */
cltype44 = type_nullable_parser_nodes__TKwend.color;
idtype45 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode19 == NULL) {
var43 = 1;
} else {
if(cltype44 >= var_tkwendnode19->type->table_size) {
var43 = 0;
} else {
var43 = var_tkwendnode19->type->type_table[cltype44] == idtype45;
}
}
if (!var43) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7932);
show_backtrace(1);
}
var46 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var47 = NULL;
var48 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var46->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var46, var_pdocnode2, var47, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var_pannotationsnode9, var48, var_listnode17, var_listnode18, var_tkwendnode19) /* init_astdclassdef on <var46:AStdClassdef>*/;
var_pclassdefnode1 = var46;
var_node_list = var_pclassdefnode1;
var49 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction164> */
var50 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var49) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var50, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction164#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction164__action(val* self, val* p0) {
parser__ReduceAction164__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction166#action for (self: ReduceAction166, Parser) */
void parser__ReduceAction166__action(val* self, val* p0) {
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
val* var13 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode17 /* var listnode17: Array[Object] */;
val* var15 /* : Array[Object] */;
val* var_listnode18 /* var listnode18: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var16 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var32 /* : Array[Object] */;
val* var33 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_listnode12 /* var listnode12: nullable Object */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
val* var37 /* : Array[Object] */;
val* var38 /* : AAnnotations */;
val* var39 /* : null */;
val* var40 /* : null */;
val* var41 /* : null */;
val* var_pannotationsnode9 /* var pannotationsnode9: nullable AAnnotations */;
val* var_listnode16 /* var listnode16: nullable Object */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
val* var45 /* : Array[Object] */;
val* var_tkwendnode19 /* var tkwendnode19: nullable Object */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
val* var49 /* : AStdClassdef */;
val* var50 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var51 /* : Int */;
long var52 /* : Int */;
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
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
var_listnode8 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
var_listnode17 = var14;
var15 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var15->class->vft[COLOR_array__Array__init]))(var15) /* init on <var15:Array[Object]>*/;
var_listnode18 = var15;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var16 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var16 = 0;
} else {
var16 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7971);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype18 = type_nullable_parser_nodes__TKwredef.color;
idtype19 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tkwredefnode3->type->table_size) {
var17 = 0;
} else {
var17 = var_tkwredefnode3->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7973);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype21 = type_nullable_parser_nodes__AVisibility.color;
idtype22 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_pvisibilitynode4->type->table_size) {
var20 = 0;
} else {
var20 = var_pvisibilitynode4->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7975);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype24 = type_nullable_parser_nodes__AClasskind.color;
idtype25 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_pclasskindnode5->type->table_size) {
var23 = 0;
} else {
var23 = var_pclasskindnode5->type->type_table[cltype24] == idtype25;
}
}
if (!var23) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7977);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist7;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype27 = type_nullable_parser_nodes__TClassid.color;
idtype28 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_tclassidnode6->type->table_size) {
var26 = 0;
} else {
var26 = var_tclassidnode6->type->type_table[cltype27] == idtype28;
}
}
if (!var26) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7979);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist8;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype30 = type_array__Arraykernel__Object.color;
idtype31 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var29 = 0;
} else {
if(cltype30 >= var_listnode7->type->table_size) {
var29 = 0;
} else {
var29 = var_listnode7->type->type_table[cltype30] == idtype31;
}
}
if (!var29) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7981);
show_backtrace(1);
}
var32 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction166>*/;
var_listnode8 = var32;
var33 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var33->class->vft[COLOR_array__Array__init]))(var33) /* init on <var33:Array[Object]>*/;
var_listnode13 = var33;
var_listnode12 = var_nodearraylist9;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype35 = type_array__Arraykernel__Object.color;
idtype36 = type_array__Arraykernel__Object.id;
if(var_listnode12 == NULL) {
var34 = 0;
} else {
if(cltype35 >= var_listnode12->type->table_size) {
var34 = 0;
} else {
var34 = var_listnode12->type->type_table[cltype35] == idtype36;
}
}
if (!var34) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7985);
show_backtrace(1);
}
var37 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode13, var_listnode12) /* concat on <self:ReduceAction166>*/;
var_listnode13 = var37;
var38 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var39 = NULL;
var40 = NULL;
var41 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var38->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var38, var39, var40, var_listnode13, var41) /* init_aannotations on <var38:AAnnotations>*/;
var_pannotationsnode9 = var38;
var_listnode16 = var_nodearraylist10;
/* <var_listnode16:nullable Object> isa Array[Object] */
cltype43 = type_array__Arraykernel__Object.color;
idtype44 = type_array__Arraykernel__Object.id;
if(var_listnode16 == NULL) {
var42 = 0;
} else {
if(cltype43 >= var_listnode16->type->table_size) {
var42 = 0;
} else {
var42 = var_listnode16->type->type_table[cltype43] == idtype44;
}
}
if (!var42) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7994);
show_backtrace(1);
}
var45 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode17, var_listnode16) /* concat on <self:ReduceAction166>*/;
var_listnode17 = var45;
var_tkwendnode19 = var_nodearraylist12;
/* <var_tkwendnode19:nullable Object> isa nullable TKwend */
cltype47 = type_nullable_parser_nodes__TKwend.color;
idtype48 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode19 == NULL) {
var46 = 1;
} else {
if(cltype47 >= var_tkwendnode19->type->table_size) {
var46 = 0;
} else {
var46 = var_tkwendnode19->type->type_table[cltype47] == idtype48;
}
}
if (!var46) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 7997);
show_backtrace(1);
}
var49 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var50 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var49->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var49, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var_pannotationsnode9, var50, var_listnode17, var_listnode18, var_tkwendnode19) /* init_astdclassdef on <var49:AStdClassdef>*/;
var_pclassdefnode1 = var49;
var_node_list = var_pclassdefnode1;
var51 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction166> */
var52 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var51) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var52, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction166#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction166__action(val* self, val* p0) {
parser__ReduceAction166__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction167#action for (self: ReduceAction167, Parser) */
void parser__ReduceAction167__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist13 /* var nodearraylist13: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist12 /* var nodearraylist12: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist11 /* var nodearraylist11: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var11 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var12 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var13 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var14 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var15 /* : Array[Object] */;
val* var_listnode17 /* var listnode17: Array[Object] */;
val* var16 /* : Array[Object] */;
val* var_listnode18 /* var listnode18: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var17 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
val* var33 /* : Array[Object] */;
val* var34 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_listnode12 /* var listnode12: nullable Object */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
val* var38 /* : Array[Object] */;
val* var39 /* : AAnnotations */;
val* var40 /* : null */;
val* var41 /* : null */;
val* var42 /* : null */;
val* var_pannotationsnode9 /* var pannotationsnode9: nullable AAnnotations */;
val* var_listnode16 /* var listnode16: nullable Object */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
val* var46 /* : Array[Object] */;
val* var_tkwendnode19 /* var tkwendnode19: nullable Object */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
val* var50 /* : AStdClassdef */;
val* var51 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var52 /* : Int */;
long var53 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist13 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist12 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist11 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist10 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist9 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var8;
var9 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var9;
var10 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var10;
var11 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var11;
var12 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var12;
var13 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
var_listnode8 = var14;
var15 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var15->class->vft[COLOR_array__Array__init]))(var15) /* init on <var15:Array[Object]>*/;
var_listnode17 = var15;
var16 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var16->class->vft[COLOR_array__Array__init]))(var16) /* init on <var16:Array[Object]>*/;
var_listnode18 = var16;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var17 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var17 = 0;
} else {
var17 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8037);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype19 = type_nullable_parser_nodes__TKwredef.color;
idtype20 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_tkwredefnode3->type->table_size) {
var18 = 0;
} else {
var18 = var_tkwredefnode3->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8039);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype22 = type_nullable_parser_nodes__AVisibility.color;
idtype23 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_pvisibilitynode4->type->table_size) {
var21 = 0;
} else {
var21 = var_pvisibilitynode4->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8041);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype25 = type_nullable_parser_nodes__AClasskind.color;
idtype26 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_pclasskindnode5->type->table_size) {
var24 = 0;
} else {
var24 = var_pclasskindnode5->type->type_table[cltype25] == idtype26;
}
}
if (!var24) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8043);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist8;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype28 = type_nullable_parser_nodes__TClassid.color;
idtype29 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var27 = 1;
} else {
if(cltype28 >= var_tclassidnode6->type->table_size) {
var27 = 0;
} else {
var27 = var_tclassidnode6->type->type_table[cltype28] == idtype29;
}
}
if (!var27) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8045);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist9;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype31 = type_array__Arraykernel__Object.color;
idtype32 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var30 = 0;
} else {
if(cltype31 >= var_listnode7->type->table_size) {
var30 = 0;
} else {
var30 = var_listnode7->type->type_table[cltype31] == idtype32;
}
}
if (!var30) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8047);
show_backtrace(1);
}
var33 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction167>*/;
var_listnode8 = var33;
var34 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var34->class->vft[COLOR_array__Array__init]))(var34) /* init on <var34:Array[Object]>*/;
var_listnode13 = var34;
var_listnode12 = var_nodearraylist10;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype36 = type_array__Arraykernel__Object.color;
idtype37 = type_array__Arraykernel__Object.id;
if(var_listnode12 == NULL) {
var35 = 0;
} else {
if(cltype36 >= var_listnode12->type->table_size) {
var35 = 0;
} else {
var35 = var_listnode12->type->type_table[cltype36] == idtype37;
}
}
if (!var35) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8051);
show_backtrace(1);
}
var38 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode13, var_listnode12) /* concat on <self:ReduceAction167>*/;
var_listnode13 = var38;
var39 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var40 = NULL;
var41 = NULL;
var42 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var39->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var39, var40, var41, var_listnode13, var42) /* init_aannotations on <var39:AAnnotations>*/;
var_pannotationsnode9 = var39;
var_listnode16 = var_nodearraylist11;
/* <var_listnode16:nullable Object> isa Array[Object] */
cltype44 = type_array__Arraykernel__Object.color;
idtype45 = type_array__Arraykernel__Object.id;
if(var_listnode16 == NULL) {
var43 = 0;
} else {
if(cltype44 >= var_listnode16->type->table_size) {
var43 = 0;
} else {
var43 = var_listnode16->type->type_table[cltype44] == idtype45;
}
}
if (!var43) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8060);
show_backtrace(1);
}
var46 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode17, var_listnode16) /* concat on <self:ReduceAction167>*/;
var_listnode17 = var46;
var_tkwendnode19 = var_nodearraylist13;
/* <var_tkwendnode19:nullable Object> isa nullable TKwend */
cltype48 = type_nullable_parser_nodes__TKwend.color;
idtype49 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode19 == NULL) {
var47 = 1;
} else {
if(cltype48 >= var_tkwendnode19->type->table_size) {
var47 = 0;
} else {
var47 = var_tkwendnode19->type->type_table[cltype48] == idtype49;
}
}
if (!var47) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8063);
show_backtrace(1);
}
var50 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var51 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var50->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var50, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var_pannotationsnode9, var51, var_listnode17, var_listnode18, var_tkwendnode19) /* init_astdclassdef on <var50:AStdClassdef>*/;
var_pclassdefnode1 = var50;
var_node_list = var_pclassdefnode1;
var52 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction167> */
var53 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var52) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var53, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction167#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction167__action(val* self, val* p0) {
parser__ReduceAction167__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction169#action for (self: ReduceAction169, Parser) */
void parser__ReduceAction169__action(val* self, val* p0) {
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
val* var10 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var11 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: Array[Object] */;
val* var12 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var13 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_pexterncodeblocknode9 /* var pexterncodeblocknode9: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_listnode10 /* var listnode10: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : Array[Object] */;
val* var_tkwendnode13 /* var tkwendnode13: nullable Object */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
val* var33 /* : AStdClassdef */;
val* var34 /* : null */;
val* var35 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
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
var10 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var10->class->vft[COLOR_array__Array__init]))(var10) /* init on <var10:Array[Object]>*/;
var_listnode7 = var10;
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var11->class->vft[COLOR_array__Array__init]))(var11) /* init on <var11:Array[Object]>*/;
var_listnode11 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
var_listnode12 = var12;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var13 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var13 = 0;
} else {
var13 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8099);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8101);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist3;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype18 = type_nullable_parser_nodes__AClasskind.color;
idtype19 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_pclasskindnode5->type->table_size) {
var17 = 0;
} else {
var17 = var_pclasskindnode5->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8103);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist5;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype21 = type_nullable_parser_nodes__TClassid.color;
idtype22 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_tclassidnode6->type->table_size) {
var20 = 0;
} else {
var20 = var_tclassidnode6->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8105);
show_backtrace(1);
}
var_pexterncodeblocknode9 = var_nodearraylist6;
/* <var_pexterncodeblocknode9:nullable Object> isa nullable AExternCodeBlock */
cltype24 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype25 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode9 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_pexterncodeblocknode9->type->table_size) {
var23 = 0;
} else {
var23 = var_pexterncodeblocknode9->type->type_table[cltype24] == idtype25;
}
}
if (!var23) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8107);
show_backtrace(1);
}
var_listnode10 = var_nodearraylist7;
/* <var_listnode10:nullable Object> isa Array[Object] */
cltype27 = type_array__Arraykernel__Object.color;
idtype28 = type_array__Arraykernel__Object.id;
if(var_listnode10 == NULL) {
var26 = 0;
} else {
if(cltype27 >= var_listnode10->type->table_size) {
var26 = 0;
} else {
var26 = var_listnode10->type->type_table[cltype27] == idtype28;
}
}
if (!var26) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8109);
show_backtrace(1);
}
var29 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode11, var_listnode10) /* concat on <self:ReduceAction169>*/;
var_listnode11 = var29;
var_tkwendnode13 = var_nodearraylist9;
/* <var_tkwendnode13:nullable Object> isa nullable TKwend */
cltype31 = type_nullable_parser_nodes__TKwend.color;
idtype32 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode13 == NULL) {
var30 = 1;
} else {
if(cltype31 >= var_tkwendnode13->type->table_size) {
var30 = 0;
} else {
var30 = var_tkwendnode13->type->type_table[cltype31] == idtype32;
}
}
if (!var30) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8112);
show_backtrace(1);
}
var33 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var34 = NULL;
var35 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var33->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var33, var_pdocnode2, var34, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var35, var_pexterncodeblocknode9, var_listnode11, var_listnode12, var_tkwendnode13) /* init_astdclassdef on <var33:AStdClassdef>*/;
var_pclassdefnode1 = var33;
var_node_list = var_pclassdefnode1;
var36 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction169> */
var37 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var36) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var37, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction169#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction169__action(val* self, val* p0) {
parser__ReduceAction169__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction170#action for (self: ReduceAction170, Parser) */
void parser__ReduceAction170__action(val* self, val* p0) {
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
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var12 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var14 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var_pexterncodeblocknode9 /* var pexterncodeblocknode9: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var_listnode10 /* var listnode10: nullable Object */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
val* var33 /* : Array[Object] */;
val* var_tkwendnode13 /* var tkwendnode13: nullable Object */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
val* var37 /* : AStdClassdef */;
val* var38 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var39 /* : Int */;
long var40 /* : Int */;
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
var_listnode7 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
var_listnode11 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
var_listnode12 = var13;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var14 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var14 = 0;
} else {
var14 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8149);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype16 = type_nullable_parser_nodes__TKwredef.color;
idtype17 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_tkwredefnode3->type->table_size) {
var15 = 0;
} else {
var15 = var_tkwredefnode3->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8151);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype19 = type_nullable_parser_nodes__AVisibility.color;
idtype20 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pvisibilitynode4->type->table_size) {
var18 = 0;
} else {
var18 = var_pvisibilitynode4->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8153);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype22 = type_nullable_parser_nodes__AClasskind.color;
idtype23 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_pclasskindnode5->type->table_size) {
var21 = 0;
} else {
var21 = var_pclasskindnode5->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8155);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype25 = type_nullable_parser_nodes__TClassid.color;
idtype26 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_tclassidnode6->type->table_size) {
var24 = 0;
} else {
var24 = var_tclassidnode6->type->type_table[cltype25] == idtype26;
}
}
if (!var24) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8157);
show_backtrace(1);
}
var_pexterncodeblocknode9 = var_nodearraylist7;
/* <var_pexterncodeblocknode9:nullable Object> isa nullable AExternCodeBlock */
cltype28 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype29 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode9 == NULL) {
var27 = 1;
} else {
if(cltype28 >= var_pexterncodeblocknode9->type->table_size) {
var27 = 0;
} else {
var27 = var_pexterncodeblocknode9->type->type_table[cltype28] == idtype29;
}
}
if (!var27) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8159);
show_backtrace(1);
}
var_listnode10 = var_nodearraylist8;
/* <var_listnode10:nullable Object> isa Array[Object] */
cltype31 = type_array__Arraykernel__Object.color;
idtype32 = type_array__Arraykernel__Object.id;
if(var_listnode10 == NULL) {
var30 = 0;
} else {
if(cltype31 >= var_listnode10->type->table_size) {
var30 = 0;
} else {
var30 = var_listnode10->type->type_table[cltype31] == idtype32;
}
}
if (!var30) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8161);
show_backtrace(1);
}
var33 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode11, var_listnode10) /* concat on <self:ReduceAction170>*/;
var_listnode11 = var33;
var_tkwendnode13 = var_nodearraylist10;
/* <var_tkwendnode13:nullable Object> isa nullable TKwend */
cltype35 = type_nullable_parser_nodes__TKwend.color;
idtype36 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode13 == NULL) {
var34 = 1;
} else {
if(cltype35 >= var_tkwendnode13->type->table_size) {
var34 = 0;
} else {
var34 = var_tkwendnode13->type->type_table[cltype35] == idtype36;
}
}
if (!var34) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8164);
show_backtrace(1);
}
var37 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var38 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var37->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var37, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var38, var_pexterncodeblocknode9, var_listnode11, var_listnode12, var_tkwendnode13) /* init_astdclassdef on <var37:AStdClassdef>*/;
var_pclassdefnode1 = var37;
var_node_list = var_pclassdefnode1;
var39 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction170> */
var40 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var39) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var40, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction170#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction170__action(val* self, val* p0) {
parser__ReduceAction170__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction171#action for (self: ReduceAction171, Parser) */
void parser__ReduceAction171__action(val* self, val* p0) {
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
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var12 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var14 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_pexterncodeblocknode9 /* var pexterncodeblocknode9: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var_listnode10 /* var listnode10: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var30 /* : Array[Object] */;
val* var_tkwendnode13 /* var tkwendnode13: nullable Object */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var34 /* : AStdClassdef */;
val* var35 /* : null */;
val* var36 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
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
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var11->class->vft[COLOR_array__Array__init]))(var11) /* init on <var11:Array[Object]>*/;
var_listnode7 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
var_listnode11 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
var_listnode12 = var13;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var14 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var14 = 0;
} else {
var14 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8201);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8203);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist3;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype19 = type_nullable_parser_nodes__AClasskind.color;
idtype20 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pclasskindnode5->type->table_size) {
var18 = 0;
} else {
var18 = var_pclasskindnode5->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8205);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype22 = type_nullable_parser_nodes__TClassid.color;
idtype23 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_tclassidnode6->type->table_size) {
var21 = 0;
} else {
var21 = var_tclassidnode6->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8207);
show_backtrace(1);
}
var_pexterncodeblocknode9 = var_nodearraylist7;
/* <var_pexterncodeblocknode9:nullable Object> isa nullable AExternCodeBlock */
cltype25 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype26 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode9 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_pexterncodeblocknode9->type->table_size) {
var24 = 0;
} else {
var24 = var_pexterncodeblocknode9->type->type_table[cltype25] == idtype26;
}
}
if (!var24) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8209);
show_backtrace(1);
}
var_listnode10 = var_nodearraylist8;
/* <var_listnode10:nullable Object> isa Array[Object] */
cltype28 = type_array__Arraykernel__Object.color;
idtype29 = type_array__Arraykernel__Object.id;
if(var_listnode10 == NULL) {
var27 = 0;
} else {
if(cltype28 >= var_listnode10->type->table_size) {
var27 = 0;
} else {
var27 = var_listnode10->type->type_table[cltype28] == idtype29;
}
}
if (!var27) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8211);
show_backtrace(1);
}
var30 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode11, var_listnode10) /* concat on <self:ReduceAction171>*/;
var_listnode11 = var30;
var_tkwendnode13 = var_nodearraylist10;
/* <var_tkwendnode13:nullable Object> isa nullable TKwend */
cltype32 = type_nullable_parser_nodes__TKwend.color;
idtype33 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode13 == NULL) {
var31 = 1;
} else {
if(cltype32 >= var_tkwendnode13->type->table_size) {
var31 = 0;
} else {
var31 = var_tkwendnode13->type->type_table[cltype32] == idtype33;
}
}
if (!var31) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8214);
show_backtrace(1);
}
var34 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var35 = NULL;
var36 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var34->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var34, var_pdocnode2, var35, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var36, var_pexterncodeblocknode9, var_listnode11, var_listnode12, var_tkwendnode13) /* init_astdclassdef on <var34:AStdClassdef>*/;
var_pclassdefnode1 = var34;
var_node_list = var_pclassdefnode1;
var37 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction171> */
var38 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var37) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var38, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction171#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction171__action(val* self, val* p0) {
parser__ReduceAction171__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction172#action for (self: ReduceAction172, Parser) */
void parser__ReduceAction172__action(val* self, val* p0) {
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
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var15 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_pexterncodeblocknode9 /* var pexterncodeblocknode9: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_listnode10 /* var listnode10: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var31 /* : Array[Object] */;
val* var_tkwendnode13 /* var tkwendnode13: nullable Object */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
val* var35 /* : AStdClassdef */;
val* var36 /* : null */;
val* var37 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
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
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
var_listnode7 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
var_listnode11 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
var_listnode12 = var14;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var15 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var15 = 0;
} else {
var15 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8252);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8254);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist3;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype20 = type_nullable_parser_nodes__AClasskind.color;
idtype21 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_pclasskindnode5->type->table_size) {
var19 = 0;
} else {
var19 = var_pclasskindnode5->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8256);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist7;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype23 = type_nullable_parser_nodes__TClassid.color;
idtype24 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_tclassidnode6->type->table_size) {
var22 = 0;
} else {
var22 = var_tclassidnode6->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8258);
show_backtrace(1);
}
var_pexterncodeblocknode9 = var_nodearraylist8;
/* <var_pexterncodeblocknode9:nullable Object> isa nullable AExternCodeBlock */
cltype26 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype27 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode9 == NULL) {
var25 = 1;
} else {
if(cltype26 >= var_pexterncodeblocknode9->type->table_size) {
var25 = 0;
} else {
var25 = var_pexterncodeblocknode9->type->type_table[cltype26] == idtype27;
}
}
if (!var25) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8260);
show_backtrace(1);
}
var_listnode10 = var_nodearraylist9;
/* <var_listnode10:nullable Object> isa Array[Object] */
cltype29 = type_array__Arraykernel__Object.color;
idtype30 = type_array__Arraykernel__Object.id;
if(var_listnode10 == NULL) {
var28 = 0;
} else {
if(cltype29 >= var_listnode10->type->table_size) {
var28 = 0;
} else {
var28 = var_listnode10->type->type_table[cltype29] == idtype30;
}
}
if (!var28) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8262);
show_backtrace(1);
}
var31 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode11, var_listnode10) /* concat on <self:ReduceAction172>*/;
var_listnode11 = var31;
var_tkwendnode13 = var_nodearraylist11;
/* <var_tkwendnode13:nullable Object> isa nullable TKwend */
cltype33 = type_nullable_parser_nodes__TKwend.color;
idtype34 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode13 == NULL) {
var32 = 1;
} else {
if(cltype33 >= var_tkwendnode13->type->table_size) {
var32 = 0;
} else {
var32 = var_tkwendnode13->type->type_table[cltype33] == idtype34;
}
}
if (!var32) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8265);
show_backtrace(1);
}
var35 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var36 = NULL;
var37 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var35->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var35, var_pdocnode2, var36, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var37, var_pexterncodeblocknode9, var_listnode11, var_listnode12, var_tkwendnode13) /* init_astdclassdef on <var35:AStdClassdef>*/;
var_pclassdefnode1 = var35;
var_node_list = var_pclassdefnode1;
var38 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction172> */
var39 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var38) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var39, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction172#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction172__action(val* self, val* p0) {
parser__ReduceAction172__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction174#action for (self: ReduceAction174, Parser) */
void parser__ReduceAction174__action(val* self, val* p0) {
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
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var15 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_pexterncodeblocknode9 /* var pexterncodeblocknode9: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var_listnode10 /* var listnode10: nullable Object */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var34 /* : Array[Object] */;
val* var_tkwendnode13 /* var tkwendnode13: nullable Object */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
val* var38 /* : AStdClassdef */;
val* var39 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
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
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
var_listnode7 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
var_listnode11 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
var_listnode12 = var14;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var15 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var15 = 0;
} else {
var15 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8303);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype17 = type_nullable_parser_nodes__TKwredef.color;
idtype18 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tkwredefnode3->type->table_size) {
var16 = 0;
} else {
var16 = var_tkwredefnode3->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8305);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype20 = type_nullable_parser_nodes__AVisibility.color;
idtype21 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_pvisibilitynode4->type->table_size) {
var19 = 0;
} else {
var19 = var_pvisibilitynode4->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8307);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype23 = type_nullable_parser_nodes__AClasskind.color;
idtype24 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_pclasskindnode5->type->table_size) {
var22 = 0;
} else {
var22 = var_pclasskindnode5->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8309);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist7;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype26 = type_nullable_parser_nodes__TClassid.color;
idtype27 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var25 = 1;
} else {
if(cltype26 >= var_tclassidnode6->type->table_size) {
var25 = 0;
} else {
var25 = var_tclassidnode6->type->type_table[cltype26] == idtype27;
}
}
if (!var25) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8311);
show_backtrace(1);
}
var_pexterncodeblocknode9 = var_nodearraylist8;
/* <var_pexterncodeblocknode9:nullable Object> isa nullable AExternCodeBlock */
cltype29 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype30 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode9 == NULL) {
var28 = 1;
} else {
if(cltype29 >= var_pexterncodeblocknode9->type->table_size) {
var28 = 0;
} else {
var28 = var_pexterncodeblocknode9->type->type_table[cltype29] == idtype30;
}
}
if (!var28) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8313);
show_backtrace(1);
}
var_listnode10 = var_nodearraylist9;
/* <var_listnode10:nullable Object> isa Array[Object] */
cltype32 = type_array__Arraykernel__Object.color;
idtype33 = type_array__Arraykernel__Object.id;
if(var_listnode10 == NULL) {
var31 = 0;
} else {
if(cltype32 >= var_listnode10->type->table_size) {
var31 = 0;
} else {
var31 = var_listnode10->type->type_table[cltype32] == idtype33;
}
}
if (!var31) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8315);
show_backtrace(1);
}
var34 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode11, var_listnode10) /* concat on <self:ReduceAction174>*/;
var_listnode11 = var34;
var_tkwendnode13 = var_nodearraylist11;
/* <var_tkwendnode13:nullable Object> isa nullable TKwend */
cltype36 = type_nullable_parser_nodes__TKwend.color;
idtype37 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode13 == NULL) {
var35 = 1;
} else {
if(cltype36 >= var_tkwendnode13->type->table_size) {
var35 = 0;
} else {
var35 = var_tkwendnode13->type->type_table[cltype36] == idtype37;
}
}
if (!var35) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8318);
show_backtrace(1);
}
var38 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var39 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var38->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var38, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var39, var_pexterncodeblocknode9, var_listnode11, var_listnode12, var_tkwendnode13) /* init_astdclassdef on <var38:AStdClassdef>*/;
var_pclassdefnode1 = var38;
var_node_list = var_pclassdefnode1;
var40 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction174> */
var41 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var40) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var41, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction174#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction174__action(val* self, val* p0) {
parser__ReduceAction174__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction175#action for (self: ReduceAction175, Parser) */
void parser__ReduceAction175__action(val* self, val* p0) {
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
val* var13 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: Array[Object] */;
val* var15 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var16 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var_pexterncodeblocknode9 /* var pexterncodeblocknode9: nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var_listnode10 /* var listnode10: nullable Object */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
val* var35 /* : Array[Object] */;
val* var_tkwendnode13 /* var tkwendnode13: nullable Object */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
val* var39 /* : AStdClassdef */;
val* var40 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var41 /* : Int */;
long var42 /* : Int */;
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
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
var_listnode7 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
var_listnode11 = var14;
var15 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var15->class->vft[COLOR_array__Array__init]))(var15) /* init on <var15:Array[Object]>*/;
var_listnode12 = var15;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var16 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var16 = 0;
} else {
var16 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8357);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype18 = type_nullable_parser_nodes__TKwredef.color;
idtype19 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tkwredefnode3->type->table_size) {
var17 = 0;
} else {
var17 = var_tkwredefnode3->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8359);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype21 = type_nullable_parser_nodes__AVisibility.color;
idtype22 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_pvisibilitynode4->type->table_size) {
var20 = 0;
} else {
var20 = var_pvisibilitynode4->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8361);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype24 = type_nullable_parser_nodes__AClasskind.color;
idtype25 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_pclasskindnode5->type->table_size) {
var23 = 0;
} else {
var23 = var_pclasskindnode5->type->type_table[cltype24] == idtype25;
}
}
if (!var23) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8363);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist8;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype27 = type_nullable_parser_nodes__TClassid.color;
idtype28 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_tclassidnode6->type->table_size) {
var26 = 0;
} else {
var26 = var_tclassidnode6->type->type_table[cltype27] == idtype28;
}
}
if (!var26) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8365);
show_backtrace(1);
}
var_pexterncodeblocknode9 = var_nodearraylist9;
/* <var_pexterncodeblocknode9:nullable Object> isa nullable AExternCodeBlock */
cltype30 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype31 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode9 == NULL) {
var29 = 1;
} else {
if(cltype30 >= var_pexterncodeblocknode9->type->table_size) {
var29 = 0;
} else {
var29 = var_pexterncodeblocknode9->type->type_table[cltype30] == idtype31;
}
}
if (!var29) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8367);
show_backtrace(1);
}
var_listnode10 = var_nodearraylist10;
/* <var_listnode10:nullable Object> isa Array[Object] */
cltype33 = type_array__Arraykernel__Object.color;
idtype34 = type_array__Arraykernel__Object.id;
if(var_listnode10 == NULL) {
var32 = 0;
} else {
if(cltype33 >= var_listnode10->type->table_size) {
var32 = 0;
} else {
var32 = var_listnode10->type->type_table[cltype33] == idtype34;
}
}
if (!var32) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8369);
show_backtrace(1);
}
var35 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode11, var_listnode10) /* concat on <self:ReduceAction175>*/;
var_listnode11 = var35;
var_tkwendnode13 = var_nodearraylist12;
/* <var_tkwendnode13:nullable Object> isa nullable TKwend */
cltype37 = type_nullable_parser_nodes__TKwend.color;
idtype38 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode13 == NULL) {
var36 = 1;
} else {
if(cltype37 >= var_tkwendnode13->type->table_size) {
var36 = 0;
} else {
var36 = var_tkwendnode13->type->type_table[cltype37] == idtype38;
}
}
if (!var36) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8372);
show_backtrace(1);
}
var39 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var40 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var39->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var39, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var40, var_pexterncodeblocknode9, var_listnode11, var_listnode12, var_tkwendnode13) /* init_astdclassdef on <var39:AStdClassdef>*/;
var_pclassdefnode1 = var39;
var_node_list = var_pclassdefnode1;
var41 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction175> */
var42 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var41) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var42, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction175#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction175__action(val* self, val* p0) {
parser__ReduceAction175__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction177#action for (self: ReduceAction177, Parser) */
void parser__ReduceAction177__action(val* self, val* p0) {
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
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var12 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var14 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var27 /* : Array[Object] */;
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var34 /* : Array[Object] */;
val* var_tkwendnode14 /* var tkwendnode14: nullable Object */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
val* var38 /* : AStdClassdef */;
val* var39 /* : null */;
val* var40 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var41 /* : Int */;
long var42 /* : Int */;
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
var_listnode8 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
var_listnode12 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
var_listnode13 = var13;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var14 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var14 = 0;
} else {
var14 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8409);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8411);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist3;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype19 = type_nullable_parser_nodes__AClasskind.color;
idtype20 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pclasskindnode5->type->table_size) {
var18 = 0;
} else {
var18 = var_pclasskindnode5->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8413);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist5;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype22 = type_nullable_parser_nodes__TClassid.color;
idtype23 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_tclassidnode6->type->table_size) {
var21 = 0;
} else {
var21 = var_tclassidnode6->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8415);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist6;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype25 = type_array__Arraykernel__Object.color;
idtype26 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var24 = 0;
} else {
if(cltype25 >= var_listnode7->type->table_size) {
var24 = 0;
} else {
var24 = var_listnode7->type->type_table[cltype25] == idtype26;
}
}
if (!var24) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8417);
show_backtrace(1);
}
var27 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction177>*/;
var_listnode8 = var27;
var_pexterncodeblocknode10 = var_nodearraylist7;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8420);
show_backtrace(1);
}
var_listnode11 = var_nodearraylist8;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype32 = type_array__Arraykernel__Object.color;
idtype33 = type_array__Arraykernel__Object.id;
if(var_listnode11 == NULL) {
var31 = 0;
} else {
if(cltype32 >= var_listnode11->type->table_size) {
var31 = 0;
} else {
var31 = var_listnode11->type->type_table[cltype32] == idtype33;
}
}
if (!var31) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8422);
show_backtrace(1);
}
var34 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction177>*/;
var_listnode12 = var34;
var_tkwendnode14 = var_nodearraylist10;
/* <var_tkwendnode14:nullable Object> isa nullable TKwend */
cltype36 = type_nullable_parser_nodes__TKwend.color;
idtype37 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode14 == NULL) {
var35 = 1;
} else {
if(cltype36 >= var_tkwendnode14->type->table_size) {
var35 = 0;
} else {
var35 = var_tkwendnode14->type->type_table[cltype36] == idtype37;
}
}
if (!var35) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 8425);
show_backtrace(1);
}
var38 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var39 = NULL;
var40 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var38->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var38, var_pdocnode2, var39, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var40, var_pexterncodeblocknode10, var_listnode12, var_listnode13, var_tkwendnode14) /* init_astdclassdef on <var38:AStdClassdef>*/;
var_pclassdefnode1 = var38;
var_node_list = var_pclassdefnode1;
var41 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction177> */
var42 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var41) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var42, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction177#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction177__action(val* self, val* p0) {
parser__ReduceAction177__action(self, p0);
RET_LABEL:;
}
