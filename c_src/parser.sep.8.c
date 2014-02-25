#include "parser.sep.0.h"
/* method parser#ReduceAction270#action for (self: ReduceAction270, Parser) */
void parser__ReduceAction270__action(val* self, val* p0) {
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
val* var_listnode10 /* var listnode10: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var31 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: nullable Object */;
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
var_listnode7 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
var_listnode11 = var13;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12483);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12485);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12487);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12489);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12491);
show_backtrace(1);
}
var_listnode10 = var_nodearraylist8;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12493);
show_backtrace(1);
}
var31 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode11, var_listnode10) /* concat on <self:ReduceAction270>*/;
var_listnode11 = var31;
var_listnode12 = var_nodearraylist9;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype33 = type_array__Arraykernel__Object.color;
idtype34 = type_array__Arraykernel__Object.id;
if(var_listnode12 == NULL) {
var32 = 0;
} else {
if(cltype33 >= var_listnode12->type->table_size) {
var32 = 0;
} else {
var32 = var_listnode12->type->type_table[cltype33] == idtype34;
}
}
if (!var32) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12496);
show_backtrace(1);
}
var35 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode13, var_listnode12) /* concat on <self:ReduceAction270>*/;
var_listnode13 = var35;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12499);
show_backtrace(1);
}
var39 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var40 = NULL;
var41 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var39->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var39, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var40, var41, var_listnode11, var_listnode13, var_tkwendnode14) /* init_astdclassdef on <var39:AStdClassdef>*/;
var_pclassdefnode1 = var39;
var_node_list = var_pclassdefnode1;
var42 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction270> */
var43 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var42) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var43, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction270#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction270__action(val* self, val* p0) {
parser__ReduceAction270__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction271#action for (self: ReduceAction271, Parser) */
void parser__ReduceAction271__action(val* self, val* p0) {
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
val* var_listnode10 /* var listnode10: nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var32 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: nullable Object */;
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
var_listnode7 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
var_listnode11 = var14;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12538);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12540);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12542);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12544);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12546);
show_backtrace(1);
}
var_listnode10 = var_nodearraylist9;
/* <var_listnode10:nullable Object> isa Array[Object] */
cltype30 = type_array__Arraykernel__Object.color;
idtype31 = type_array__Arraykernel__Object.id;
if(var_listnode10 == NULL) {
var29 = 0;
} else {
if(cltype30 >= var_listnode10->type->table_size) {
var29 = 0;
} else {
var29 = var_listnode10->type->type_table[cltype30] == idtype31;
}
}
if (!var29) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12548);
show_backtrace(1);
}
var32 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode11, var_listnode10) /* concat on <self:ReduceAction271>*/;
var_listnode11 = var32;
var_listnode12 = var_nodearraylist10;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12551);
show_backtrace(1);
}
var36 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode13, var_listnode12) /* concat on <self:ReduceAction271>*/;
var_listnode13 = var36;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12554);
show_backtrace(1);
}
var40 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var41 = NULL;
var42 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var40->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var40, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var41, var42, var_listnode11, var_listnode13, var_tkwendnode14) /* init_astdclassdef on <var40:AStdClassdef>*/;
var_pclassdefnode1 = var40;
var_node_list = var_pclassdefnode1;
var43 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction271> */
var44 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var43) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var44, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction271#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction271__action(val* self, val* p0) {
parser__ReduceAction271__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction273#action for (self: ReduceAction273, Parser) */
void parser__ReduceAction273__action(val* self, val* p0) {
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
val* var_listnode14 /* var listnode14: Array[Object] */;
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
val* var_listnode13 /* var listnode13: nullable Object */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
val* var35 /* : Array[Object] */;
val* var_tkwendnode15 /* var tkwendnode15: nullable Object */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
val* var39 /* : AStdClassdef */;
val* var40 /* : null */;
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
var_listnode8 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
var_listnode12 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
var_listnode14 = var13;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12591);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12593);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12595);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12597);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12599);
show_backtrace(1);
}
var27 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction273>*/;
var_listnode8 = var27;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12602);
show_backtrace(1);
}
var31 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction273>*/;
var_listnode12 = var31;
var_listnode13 = var_nodearraylist8;
/* <var_listnode13:nullable Object> isa Array[Object] */
cltype33 = type_array__Arraykernel__Object.color;
idtype34 = type_array__Arraykernel__Object.id;
if(var_listnode13 == NULL) {
var32 = 0;
} else {
if(cltype33 >= var_listnode13->type->table_size) {
var32 = 0;
} else {
var32 = var_listnode13->type->type_table[cltype33] == idtype34;
}
}
if (!var32) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12605);
show_backtrace(1);
}
var35 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode14, var_listnode13) /* concat on <self:ReduceAction273>*/;
var_listnode14 = var35;
var_tkwendnode15 = var_nodearraylist10;
/* <var_tkwendnode15:nullable Object> isa nullable TKwend */
cltype37 = type_nullable_parser_nodes__TKwend.color;
idtype38 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode15 == NULL) {
var36 = 1;
} else {
if(cltype37 >= var_tkwendnode15->type->table_size) {
var36 = 0;
} else {
var36 = var_tkwendnode15->type->type_table[cltype37] == idtype38;
}
}
if (!var36) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12608);
show_backtrace(1);
}
var39 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var40 = NULL;
var41 = NULL;
var42 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var39->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var39, var_pdocnode2, var40, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var41, var42, var_listnode12, var_listnode14, var_tkwendnode15) /* init_astdclassdef on <var39:AStdClassdef>*/;
var_pclassdefnode1 = var39;
var_node_list = var_pclassdefnode1;
var43 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction273> */
var44 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var43) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var44, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction273#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction273__action(val* self, val* p0) {
parser__ReduceAction273__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction274#action for (self: ReduceAction274, Parser) */
void parser__ReduceAction274__action(val* self, val* p0) {
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
val* var_listnode14 /* var listnode14: Array[Object] */;
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
val* var_listnode13 /* var listnode13: nullable Object */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
val* var39 /* : Array[Object] */;
val* var_tkwendnode15 /* var tkwendnode15: nullable Object */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
val* var43 /* : AStdClassdef */;
val* var44 /* : null */;
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
var_listnode12 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
var_listnode14 = var14;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12646);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12648);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12650);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12652);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12654);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12656);
show_backtrace(1);
}
var31 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction274>*/;
var_listnode8 = var31;
var_listnode11 = var_nodearraylist8;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12659);
show_backtrace(1);
}
var35 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction274>*/;
var_listnode12 = var35;
var_listnode13 = var_nodearraylist9;
/* <var_listnode13:nullable Object> isa Array[Object] */
cltype37 = type_array__Arraykernel__Object.color;
idtype38 = type_array__Arraykernel__Object.id;
if(var_listnode13 == NULL) {
var36 = 0;
} else {
if(cltype37 >= var_listnode13->type->table_size) {
var36 = 0;
} else {
var36 = var_listnode13->type->type_table[cltype37] == idtype38;
}
}
if (!var36) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12662);
show_backtrace(1);
}
var39 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode14, var_listnode13) /* concat on <self:ReduceAction274>*/;
var_listnode14 = var39;
var_tkwendnode15 = var_nodearraylist11;
/* <var_tkwendnode15:nullable Object> isa nullable TKwend */
cltype41 = type_nullable_parser_nodes__TKwend.color;
idtype42 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode15 == NULL) {
var40 = 1;
} else {
if(cltype41 >= var_tkwendnode15->type->table_size) {
var40 = 0;
} else {
var40 = var_tkwendnode15->type->type_table[cltype41] == idtype42;
}
}
if (!var40) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12665);
show_backtrace(1);
}
var43 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var44 = NULL;
var45 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var43->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var43, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var44, var45, var_listnode12, var_listnode14, var_tkwendnode15) /* init_astdclassdef on <var43:AStdClassdef>*/;
var_pclassdefnode1 = var43;
var_node_list = var_pclassdefnode1;
var46 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction274> */
var47 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var46) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var47, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction274#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction274__action(val* self, val* p0) {
parser__ReduceAction274__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction275#action for (self: ReduceAction275, Parser) */
void parser__ReduceAction275__action(val* self, val* p0) {
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
val* var_listnode14 /* var listnode14: Array[Object] */;
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
val* var_listnode13 /* var listnode13: nullable Object */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
val* var36 /* : Array[Object] */;
val* var_tkwendnode15 /* var tkwendnode15: nullable Object */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
val* var40 /* : AStdClassdef */;
val* var41 /* : null */;
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
var_listnode8 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
var_listnode12 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
var_listnode14 = var14;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12703);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12705);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12707);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12709);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12711);
show_backtrace(1);
}
var28 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction275>*/;
var_listnode8 = var28;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12714);
show_backtrace(1);
}
var32 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction275>*/;
var_listnode12 = var32;
var_listnode13 = var_nodearraylist9;
/* <var_listnode13:nullable Object> isa Array[Object] */
cltype34 = type_array__Arraykernel__Object.color;
idtype35 = type_array__Arraykernel__Object.id;
if(var_listnode13 == NULL) {
var33 = 0;
} else {
if(cltype34 >= var_listnode13->type->table_size) {
var33 = 0;
} else {
var33 = var_listnode13->type->type_table[cltype34] == idtype35;
}
}
if (!var33) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12717);
show_backtrace(1);
}
var36 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode14, var_listnode13) /* concat on <self:ReduceAction275>*/;
var_listnode14 = var36;
var_tkwendnode15 = var_nodearraylist11;
/* <var_tkwendnode15:nullable Object> isa nullable TKwend */
cltype38 = type_nullable_parser_nodes__TKwend.color;
idtype39 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode15 == NULL) {
var37 = 1;
} else {
if(cltype38 >= var_tkwendnode15->type->table_size) {
var37 = 0;
} else {
var37 = var_tkwendnode15->type->type_table[cltype38] == idtype39;
}
}
if (!var37) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12720);
show_backtrace(1);
}
var40 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var41 = NULL;
var42 = NULL;
var43 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var40->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var40, var_pdocnode2, var41, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var42, var43, var_listnode12, var_listnode14, var_tkwendnode15) /* init_astdclassdef on <var40:AStdClassdef>*/;
var_pclassdefnode1 = var40;
var_node_list = var_pclassdefnode1;
var44 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction275> */
var45 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var44) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var45, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction275#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction275__action(val* self, val* p0) {
parser__ReduceAction275__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction276#action for (self: ReduceAction276, Parser) */
void parser__ReduceAction276__action(val* self, val* p0) {
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
val* var_listnode14 /* var listnode14: Array[Object] */;
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
val* var_listnode11 /* var listnode11: nullable Object */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
val* var33 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: nullable Object */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
val* var37 /* : Array[Object] */;
val* var_tkwendnode15 /* var tkwendnode15: nullable Object */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
val* var41 /* : AStdClassdef */;
val* var42 /* : null */;
val* var43 /* : null */;
val* var44 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var45 /* : Int */;
long var46 /* : Int */;
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
var_listnode14 = var15;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12759);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12761);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12763);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12765);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12767);
show_backtrace(1);
}
var29 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction276>*/;
var_listnode8 = var29;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12770);
show_backtrace(1);
}
var33 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction276>*/;
var_listnode12 = var33;
var_listnode13 = var_nodearraylist10;
/* <var_listnode13:nullable Object> isa Array[Object] */
cltype35 = type_array__Arraykernel__Object.color;
idtype36 = type_array__Arraykernel__Object.id;
if(var_listnode13 == NULL) {
var34 = 0;
} else {
if(cltype35 >= var_listnode13->type->table_size) {
var34 = 0;
} else {
var34 = var_listnode13->type->type_table[cltype35] == idtype36;
}
}
if (!var34) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12773);
show_backtrace(1);
}
var37 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode14, var_listnode13) /* concat on <self:ReduceAction276>*/;
var_listnode14 = var37;
var_tkwendnode15 = var_nodearraylist12;
/* <var_tkwendnode15:nullable Object> isa nullable TKwend */
cltype39 = type_nullable_parser_nodes__TKwend.color;
idtype40 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode15 == NULL) {
var38 = 1;
} else {
if(cltype39 >= var_tkwendnode15->type->table_size) {
var38 = 0;
} else {
var38 = var_tkwendnode15->type->type_table[cltype39] == idtype40;
}
}
if (!var38) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12776);
show_backtrace(1);
}
var41 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var42 = NULL;
var43 = NULL;
var44 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var41->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var41, var_pdocnode2, var42, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var43, var44, var_listnode12, var_listnode14, var_tkwendnode15) /* init_astdclassdef on <var41:AStdClassdef>*/;
var_pclassdefnode1 = var41;
var_node_list = var_pclassdefnode1;
var45 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction276> */
var46 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var45) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var46, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction276#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction276__action(val* self, val* p0) {
parser__ReduceAction276__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction278#action for (self: ReduceAction278, Parser) */
void parser__ReduceAction278__action(val* self, val* p0) {
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
val* var_listnode14 /* var listnode14: Array[Object] */;
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
val* var_listnode13 /* var listnode13: nullable Object */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
val* var40 /* : Array[Object] */;
val* var_tkwendnode15 /* var tkwendnode15: nullable Object */;
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
var_listnode14 = var15;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12815);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12817);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12819);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12821);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12823);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12825);
show_backtrace(1);
}
var32 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction278>*/;
var_listnode8 = var32;
var_listnode11 = var_nodearraylist9;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12828);
show_backtrace(1);
}
var36 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction278>*/;
var_listnode12 = var36;
var_listnode13 = var_nodearraylist10;
/* <var_listnode13:nullable Object> isa Array[Object] */
cltype38 = type_array__Arraykernel__Object.color;
idtype39 = type_array__Arraykernel__Object.id;
if(var_listnode13 == NULL) {
var37 = 0;
} else {
if(cltype38 >= var_listnode13->type->table_size) {
var37 = 0;
} else {
var37 = var_listnode13->type->type_table[cltype38] == idtype39;
}
}
if (!var37) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12831);
show_backtrace(1);
}
var40 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode14, var_listnode13) /* concat on <self:ReduceAction278>*/;
var_listnode14 = var40;
var_tkwendnode15 = var_nodearraylist12;
/* <var_tkwendnode15:nullable Object> isa nullable TKwend */
cltype42 = type_nullable_parser_nodes__TKwend.color;
idtype43 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode15 == NULL) {
var41 = 1;
} else {
if(cltype42 >= var_tkwendnode15->type->table_size) {
var41 = 0;
} else {
var41 = var_tkwendnode15->type->type_table[cltype42] == idtype43;
}
}
if (!var41) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12834);
show_backtrace(1);
}
var44 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var45 = NULL;
var46 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var44->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var44, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var45, var46, var_listnode12, var_listnode14, var_tkwendnode15) /* init_astdclassdef on <var44:AStdClassdef>*/;
var_pclassdefnode1 = var44;
var_node_list = var_pclassdefnode1;
var47 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction278> */
var48 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var47) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var48, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction278#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction278__action(val* self, val* p0) {
parser__ReduceAction278__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction279#action for (self: ReduceAction279, Parser) */
void parser__ReduceAction279__action(val* self, val* p0) {
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
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var16 /* : Array[Object] */;
val* var_listnode14 /* var listnode14: Array[Object] */;
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
val* var_listnode11 /* var listnode11: nullable Object */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
val* var37 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: nullable Object */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
val* var41 /* : Array[Object] */;
val* var_tkwendnode15 /* var tkwendnode15: nullable Object */;
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
var_listnode12 = var15;
var16 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var16->class->vft[COLOR_array__Array__init]))(var16) /* init on <var16:Array[Object]>*/;
var_listnode14 = var16;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12874);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12876);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12878);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12880);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12882);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12884);
show_backtrace(1);
}
var33 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction279>*/;
var_listnode8 = var33;
var_listnode11 = var_nodearraylist10;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype35 = type_array__Arraykernel__Object.color;
idtype36 = type_array__Arraykernel__Object.id;
if(var_listnode11 == NULL) {
var34 = 0;
} else {
if(cltype35 >= var_listnode11->type->table_size) {
var34 = 0;
} else {
var34 = var_listnode11->type->type_table[cltype35] == idtype36;
}
}
if (!var34) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12887);
show_backtrace(1);
}
var37 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction279>*/;
var_listnode12 = var37;
var_listnode13 = var_nodearraylist11;
/* <var_listnode13:nullable Object> isa Array[Object] */
cltype39 = type_array__Arraykernel__Object.color;
idtype40 = type_array__Arraykernel__Object.id;
if(var_listnode13 == NULL) {
var38 = 0;
} else {
if(cltype39 >= var_listnode13->type->table_size) {
var38 = 0;
} else {
var38 = var_listnode13->type->type_table[cltype39] == idtype40;
}
}
if (!var38) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12890);
show_backtrace(1);
}
var41 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode14, var_listnode13) /* concat on <self:ReduceAction279>*/;
var_listnode14 = var41;
var_tkwendnode15 = var_nodearraylist13;
/* <var_tkwendnode15:nullable Object> isa nullable TKwend */
cltype43 = type_nullable_parser_nodes__TKwend.color;
idtype44 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode15 == NULL) {
var42 = 1;
} else {
if(cltype43 >= var_tkwendnode15->type->table_size) {
var42 = 0;
} else {
var42 = var_tkwendnode15->type->type_table[cltype43] == idtype44;
}
}
if (!var42) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12893);
show_backtrace(1);
}
var45 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var46 = NULL;
var47 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var45->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var45, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var46, var47, var_listnode12, var_listnode14, var_tkwendnode15) /* init_astdclassdef on <var45:AStdClassdef>*/;
var_pclassdefnode1 = var45;
var_node_list = var_pclassdefnode1;
var48 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction279> */
var49 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var48) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var49, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction279#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction279__action(val* self, val* p0) {
parser__ReduceAction279__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction281#action for (self: ReduceAction281, Parser) */
void parser__ReduceAction281__action(val* self, val* p0) {
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
val* var_listnode17 /* var listnode17: nullable Object */;
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
var_listnode7 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
var_listnode16 = var12;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12930);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12932);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12934);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12936);
show_backtrace(1);
}
var24 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var24->class->vft[COLOR_array__Array__init]))(var24) /* init on <var24:Array[Object]>*/;
var_listnode12 = var24;
var_listnode11 = var_nodearraylist6;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12939);
show_backtrace(1);
}
var28 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction281>*/;
var_listnode12 = var28;
var29 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var30 = NULL;
var31 = NULL;
var32 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var29, var30, var31, var_listnode12, var32) /* init_aannotations on <var29:AAnnotations>*/;
var_pannotationsnode8 = var29;
var_listnode15 = var_nodearraylist7;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12948);
show_backtrace(1);
}
var36 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode16, var_listnode15) /* concat on <self:ReduceAction281>*/;
var_listnode16 = var36;
var_listnode17 = var_nodearraylist8;
/* <var_listnode17:nullable Object> isa Array[Object] */
cltype38 = type_array__Arraykernel__Object.color;
idtype39 = type_array__Arraykernel__Object.id;
if(var_listnode17 == NULL) {
var37 = 0;
} else {
if(cltype38 >= var_listnode17->type->table_size) {
var37 = 0;
} else {
var37 = var_listnode17->type->type_table[cltype38] == idtype39;
}
}
if (!var37) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12951);
show_backtrace(1);
}
var40 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode18, var_listnode17) /* concat on <self:ReduceAction281>*/;
var_listnode18 = var40;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12954);
show_backtrace(1);
}
var44 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var45 = NULL;
var46 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var44->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var44, var_pdocnode2, var45, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var_pannotationsnode8, var46, var_listnode16, var_listnode18, var_tkwendnode19) /* init_astdclassdef on <var44:AStdClassdef>*/;
var_pclassdefnode1 = var44;
var_node_list = var_pclassdefnode1;
var47 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction281> */
var48 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var47) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var48, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction281#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction281__action(val* self, val* p0) {
parser__ReduceAction281__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction282#action for (self: ReduceAction282, Parser) */
void parser__ReduceAction282__action(val* self, val* p0) {
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
val* var_listnode17 /* var listnode17: nullable Object */;
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
var_listnode7 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
var_listnode16 = var13;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12992);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12994);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12996);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 12998);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13000);
show_backtrace(1);
}
var28 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var28->class->vft[COLOR_array__Array__init]))(var28) /* init on <var28:Array[Object]>*/;
var_listnode12 = var28;
var_listnode11 = var_nodearraylist7;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13003);
show_backtrace(1);
}
var32 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction282>*/;
var_listnode12 = var32;
var33 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var34 = NULL;
var35 = NULL;
var36 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var33->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var33, var34, var35, var_listnode12, var36) /* init_aannotations on <var33:AAnnotations>*/;
var_pannotationsnode8 = var33;
var_listnode15 = var_nodearraylist8;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13012);
show_backtrace(1);
}
var40 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode16, var_listnode15) /* concat on <self:ReduceAction282>*/;
var_listnode16 = var40;
var_listnode17 = var_nodearraylist9;
/* <var_listnode17:nullable Object> isa Array[Object] */
cltype42 = type_array__Arraykernel__Object.color;
idtype43 = type_array__Arraykernel__Object.id;
if(var_listnode17 == NULL) {
var41 = 0;
} else {
if(cltype42 >= var_listnode17->type->table_size) {
var41 = 0;
} else {
var41 = var_listnode17->type->type_table[cltype42] == idtype43;
}
}
if (!var41) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13015);
show_backtrace(1);
}
var44 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode18, var_listnode17) /* concat on <self:ReduceAction282>*/;
var_listnode18 = var44;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13018);
show_backtrace(1);
}
var48 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var49 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var48->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var48, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var_pannotationsnode8, var49, var_listnode16, var_listnode18, var_tkwendnode19) /* init_astdclassdef on <var48:AStdClassdef>*/;
var_pclassdefnode1 = var48;
var_node_list = var_pclassdefnode1;
var50 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction282> */
var51 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var50) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var51, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction282#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction282__action(val* self, val* p0) {
parser__ReduceAction282__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction283#action for (self: ReduceAction283, Parser) */
void parser__ReduceAction283__action(val* self, val* p0) {
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
val* var_listnode17 /* var listnode17: nullable Object */;
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
var_listnode7 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
var_listnode16 = var13;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13056);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13058);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13060);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13062);
show_backtrace(1);
}
var25 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var25->class->vft[COLOR_array__Array__init]))(var25) /* init on <var25:Array[Object]>*/;
var_listnode12 = var25;
var_listnode11 = var_nodearraylist7;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13065);
show_backtrace(1);
}
var29 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction283>*/;
var_listnode12 = var29;
var30 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var31 = NULL;
var32 = NULL;
var33 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var30->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var30, var31, var32, var_listnode12, var33) /* init_aannotations on <var30:AAnnotations>*/;
var_pannotationsnode8 = var30;
var_listnode15 = var_nodearraylist8;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13074);
show_backtrace(1);
}
var37 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode16, var_listnode15) /* concat on <self:ReduceAction283>*/;
var_listnode16 = var37;
var_listnode17 = var_nodearraylist9;
/* <var_listnode17:nullable Object> isa Array[Object] */
cltype39 = type_array__Arraykernel__Object.color;
idtype40 = type_array__Arraykernel__Object.id;
if(var_listnode17 == NULL) {
var38 = 0;
} else {
if(cltype39 >= var_listnode17->type->table_size) {
var38 = 0;
} else {
var38 = var_listnode17->type->type_table[cltype39] == idtype40;
}
}
if (!var38) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13077);
show_backtrace(1);
}
var41 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode18, var_listnode17) /* concat on <self:ReduceAction283>*/;
var_listnode18 = var41;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13080);
show_backtrace(1);
}
var45 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var46 = NULL;
var47 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var45->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var45, var_pdocnode2, var46, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var_pannotationsnode8, var47, var_listnode16, var_listnode18, var_tkwendnode19) /* init_astdclassdef on <var45:AStdClassdef>*/;
var_pclassdefnode1 = var45;
var_node_list = var_pclassdefnode1;
var48 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction283> */
var49 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var48) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var49, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction283#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction283__action(val* self, val* p0) {
parser__ReduceAction283__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction284#action for (self: ReduceAction284, Parser) */
void parser__ReduceAction284__action(val* self, val* p0) {
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
val* var26 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var30 /* : Array[Object] */;
val* var31 /* : AAnnotations */;
val* var32 /* : null */;
val* var33 /* : null */;
val* var34 /* : null */;
val* var_pannotationsnode8 /* var pannotationsnode8: nullable AAnnotations */;
val* var_listnode15 /* var listnode15: nullable Object */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
val* var38 /* : Array[Object] */;
val* var_listnode17 /* var listnode17: nullable Object */;
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
var_listnode7 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
var_listnode16 = var14;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13119);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13121);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13123);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13125);
show_backtrace(1);
}
var26 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var26->class->vft[COLOR_array__Array__init]))(var26) /* init on <var26:Array[Object]>*/;
var_listnode12 = var26;
var_listnode11 = var_nodearraylist8;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13128);
show_backtrace(1);
}
var30 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction284>*/;
var_listnode12 = var30;
var31 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var32 = NULL;
var33 = NULL;
var34 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var31->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var31, var32, var33, var_listnode12, var34) /* init_aannotations on <var31:AAnnotations>*/;
var_pannotationsnode8 = var31;
var_listnode15 = var_nodearraylist9;
/* <var_listnode15:nullable Object> isa Array[Object] */
cltype36 = type_array__Arraykernel__Object.color;
idtype37 = type_array__Arraykernel__Object.id;
if(var_listnode15 == NULL) {
var35 = 0;
} else {
if(cltype36 >= var_listnode15->type->table_size) {
var35 = 0;
} else {
var35 = var_listnode15->type->type_table[cltype36] == idtype37;
}
}
if (!var35) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13137);
show_backtrace(1);
}
var38 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode16, var_listnode15) /* concat on <self:ReduceAction284>*/;
var_listnode16 = var38;
var_listnode17 = var_nodearraylist10;
/* <var_listnode17:nullable Object> isa Array[Object] */
cltype40 = type_array__Arraykernel__Object.color;
idtype41 = type_array__Arraykernel__Object.id;
if(var_listnode17 == NULL) {
var39 = 0;
} else {
if(cltype40 >= var_listnode17->type->table_size) {
var39 = 0;
} else {
var39 = var_listnode17->type->type_table[cltype40] == idtype41;
}
}
if (!var39) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13140);
show_backtrace(1);
}
var42 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode18, var_listnode17) /* concat on <self:ReduceAction284>*/;
var_listnode18 = var42;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13143);
show_backtrace(1);
}
var46 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var47 = NULL;
var48 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var46->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var46, var_pdocnode2, var47, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var_pannotationsnode8, var48, var_listnode16, var_listnode18, var_tkwendnode19) /* init_astdclassdef on <var46:AStdClassdef>*/;
var_pclassdefnode1 = var46;
var_node_list = var_pclassdefnode1;
var49 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction284> */
var50 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var49) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var50, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction284#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction284__action(val* self, val* p0) {
parser__ReduceAction284__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction286#action for (self: ReduceAction286, Parser) */
void parser__ReduceAction286__action(val* self, val* p0) {
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
val* var_listnode17 /* var listnode17: nullable Object */;
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
var_listnode7 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
var_listnode16 = var14;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13182);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13184);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13186);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13188);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13190);
show_backtrace(1);
}
var29 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var29->class->vft[COLOR_array__Array__init]))(var29) /* init on <var29:Array[Object]>*/;
var_listnode12 = var29;
var_listnode11 = var_nodearraylist8;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13193);
show_backtrace(1);
}
var33 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction286>*/;
var_listnode12 = var33;
var34 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var35 = NULL;
var36 = NULL;
var37 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var34->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var34, var35, var36, var_listnode12, var37) /* init_aannotations on <var34:AAnnotations>*/;
var_pannotationsnode8 = var34;
var_listnode15 = var_nodearraylist9;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13202);
show_backtrace(1);
}
var41 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode16, var_listnode15) /* concat on <self:ReduceAction286>*/;
var_listnode16 = var41;
var_listnode17 = var_nodearraylist10;
/* <var_listnode17:nullable Object> isa Array[Object] */
cltype43 = type_array__Arraykernel__Object.color;
idtype44 = type_array__Arraykernel__Object.id;
if(var_listnode17 == NULL) {
var42 = 0;
} else {
if(cltype43 >= var_listnode17->type->table_size) {
var42 = 0;
} else {
var42 = var_listnode17->type->type_table[cltype43] == idtype44;
}
}
if (!var42) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13205);
show_backtrace(1);
}
var45 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode18, var_listnode17) /* concat on <self:ReduceAction286>*/;
var_listnode18 = var45;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13208);
show_backtrace(1);
}
var49 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var50 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var49->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var49, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var_pannotationsnode8, var50, var_listnode16, var_listnode18, var_tkwendnode19) /* init_astdclassdef on <var49:AStdClassdef>*/;
var_pclassdefnode1 = var49;
var_node_list = var_pclassdefnode1;
var51 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction286> */
var52 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var51) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var52, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction286#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction286__action(val* self, val* p0) {
parser__ReduceAction286__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction287#action for (self: ReduceAction287, Parser) */
void parser__ReduceAction287__action(val* self, val* p0) {
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
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var15 /* : Array[Object] */;
val* var_listnode16 /* var listnode16: Array[Object] */;
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
val* var30 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var34 /* : Array[Object] */;
val* var35 /* : AAnnotations */;
val* var36 /* : null */;
val* var37 /* : null */;
val* var38 /* : null */;
val* var_pannotationsnode8 /* var pannotationsnode8: nullable AAnnotations */;
val* var_listnode15 /* var listnode15: nullable Object */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
val* var42 /* : Array[Object] */;
val* var_listnode17 /* var listnode17: nullable Object */;
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
var_listnode7 = var14;
var15 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var15->class->vft[COLOR_array__Array__init]))(var15) /* init on <var15:Array[Object]>*/;
var_listnode16 = var15;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13248);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13250);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13252);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13254);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13256);
show_backtrace(1);
}
var30 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var30->class->vft[COLOR_array__Array__init]))(var30) /* init on <var30:Array[Object]>*/;
var_listnode12 = var30;
var_listnode11 = var_nodearraylist9;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13259);
show_backtrace(1);
}
var34 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction287>*/;
var_listnode12 = var34;
var35 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var36 = NULL;
var37 = NULL;
var38 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var35->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var35, var36, var37, var_listnode12, var38) /* init_aannotations on <var35:AAnnotations>*/;
var_pannotationsnode8 = var35;
var_listnode15 = var_nodearraylist10;
/* <var_listnode15:nullable Object> isa Array[Object] */
cltype40 = type_array__Arraykernel__Object.color;
idtype41 = type_array__Arraykernel__Object.id;
if(var_listnode15 == NULL) {
var39 = 0;
} else {
if(cltype40 >= var_listnode15->type->table_size) {
var39 = 0;
} else {
var39 = var_listnode15->type->type_table[cltype40] == idtype41;
}
}
if (!var39) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13268);
show_backtrace(1);
}
var42 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode16, var_listnode15) /* concat on <self:ReduceAction287>*/;
var_listnode16 = var42;
var_listnode17 = var_nodearraylist11;
/* <var_listnode17:nullable Object> isa Array[Object] */
cltype44 = type_array__Arraykernel__Object.color;
idtype45 = type_array__Arraykernel__Object.id;
if(var_listnode17 == NULL) {
var43 = 0;
} else {
if(cltype44 >= var_listnode17->type->table_size) {
var43 = 0;
} else {
var43 = var_listnode17->type->type_table[cltype44] == idtype45;
}
}
if (!var43) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13271);
show_backtrace(1);
}
var46 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode18, var_listnode17) /* concat on <self:ReduceAction287>*/;
var_listnode18 = var46;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13274);
show_backtrace(1);
}
var50 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var51 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var50->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var50, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var_pannotationsnode8, var51, var_listnode16, var_listnode18, var_tkwendnode19) /* init_astdclassdef on <var50:AStdClassdef>*/;
var_pclassdefnode1 = var50;
var_node_list = var_pclassdefnode1;
var52 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction287> */
var53 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var52) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var53, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction287#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction287__action(val* self, val* p0) {
parser__ReduceAction287__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction289#action for (self: ReduceAction289, Parser) */
void parser__ReduceAction289__action(val* self, val* p0) {
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
val* var_listnode19 /* var listnode19: Array[Object] */;
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
val* var_listnode18 /* var listnode18: nullable Object */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
val* var45 /* : Array[Object] */;
val* var_tkwendnode20 /* var tkwendnode20: nullable Object */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
val* var49 /* : AStdClassdef */;
val* var50 /* : null */;
val* var51 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var52 /* : Int */;
long var53 /* : Int */;
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
var_listnode19 = var14;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13312);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13314);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13316);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist5;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13318);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist6;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13320);
show_backtrace(1);
}
var28 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction289>*/;
var_listnode8 = var28;
var29 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var29->class->vft[COLOR_array__Array__init]))(var29) /* init on <var29:Array[Object]>*/;
var_listnode13 = var29;
var_listnode12 = var_nodearraylist7;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13324);
show_backtrace(1);
}
var33 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode13, var_listnode12) /* concat on <self:ReduceAction289>*/;
var_listnode13 = var33;
var34 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var35 = NULL;
var36 = NULL;
var37 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var34->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var34, var35, var36, var_listnode13, var37) /* init_aannotations on <var34:AAnnotations>*/;
var_pannotationsnode9 = var34;
var_listnode16 = var_nodearraylist8;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13333);
show_backtrace(1);
}
var41 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode17, var_listnode16) /* concat on <self:ReduceAction289>*/;
var_listnode17 = var41;
var_listnode18 = var_nodearraylist9;
/* <var_listnode18:nullable Object> isa Array[Object] */
cltype43 = type_array__Arraykernel__Object.color;
idtype44 = type_array__Arraykernel__Object.id;
if(var_listnode18 == NULL) {
var42 = 0;
} else {
if(cltype43 >= var_listnode18->type->table_size) {
var42 = 0;
} else {
var42 = var_listnode18->type->type_table[cltype43] == idtype44;
}
}
if (!var42) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13336);
show_backtrace(1);
}
var45 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode19, var_listnode18) /* concat on <self:ReduceAction289>*/;
var_listnode19 = var45;
var_tkwendnode20 = var_nodearraylist11;
/* <var_tkwendnode20:nullable Object> isa nullable TKwend */
cltype47 = type_nullable_parser_nodes__TKwend.color;
idtype48 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode20 == NULL) {
var46 = 1;
} else {
if(cltype47 >= var_tkwendnode20->type->table_size) {
var46 = 0;
} else {
var46 = var_tkwendnode20->type->type_table[cltype47] == idtype48;
}
}
if (!var46) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13339);
show_backtrace(1);
}
var49 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var50 = NULL;
var51 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var49->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var49, var_pdocnode2, var50, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var_pannotationsnode9, var51, var_listnode17, var_listnode19, var_tkwendnode20) /* init_astdclassdef on <var49:AStdClassdef>*/;
var_pclassdefnode1 = var49;
var_node_list = var_pclassdefnode1;
var52 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction289> */
var53 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var52) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var53, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction289#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction289__action(val* self, val* p0) {
parser__ReduceAction289__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction290#action for (self: ReduceAction290, Parser) */
void parser__ReduceAction290__action(val* self, val* p0) {
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
val* var_listnode19 /* var listnode19: Array[Object] */;
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
val* var_listnode18 /* var listnode18: nullable Object */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
val* var49 /* : Array[Object] */;
val* var_tkwendnode20 /* var tkwendnode20: nullable Object */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
val* var53 /* : AStdClassdef */;
val* var54 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var55 /* : Int */;
long var56 /* : Int */;
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
var_listnode19 = var15;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13378);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13380);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13382);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13384);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist6;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13386);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist7;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13388);
show_backtrace(1);
}
var32 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction290>*/;
var_listnode8 = var32;
var33 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var33->class->vft[COLOR_array__Array__init]))(var33) /* init on <var33:Array[Object]>*/;
var_listnode13 = var33;
var_listnode12 = var_nodearraylist8;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13392);
show_backtrace(1);
}
var37 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode13, var_listnode12) /* concat on <self:ReduceAction290>*/;
var_listnode13 = var37;
var38 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var39 = NULL;
var40 = NULL;
var41 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var38->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var38, var39, var40, var_listnode13, var41) /* init_aannotations on <var38:AAnnotations>*/;
var_pannotationsnode9 = var38;
var_listnode16 = var_nodearraylist9;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13401);
show_backtrace(1);
}
var45 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode17, var_listnode16) /* concat on <self:ReduceAction290>*/;
var_listnode17 = var45;
var_listnode18 = var_nodearraylist10;
/* <var_listnode18:nullable Object> isa Array[Object] */
cltype47 = type_array__Arraykernel__Object.color;
idtype48 = type_array__Arraykernel__Object.id;
if(var_listnode18 == NULL) {
var46 = 0;
} else {
if(cltype47 >= var_listnode18->type->table_size) {
var46 = 0;
} else {
var46 = var_listnode18->type->type_table[cltype47] == idtype48;
}
}
if (!var46) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13404);
show_backtrace(1);
}
var49 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode19, var_listnode18) /* concat on <self:ReduceAction290>*/;
var_listnode19 = var49;
var_tkwendnode20 = var_nodearraylist12;
/* <var_tkwendnode20:nullable Object> isa nullable TKwend */
cltype51 = type_nullable_parser_nodes__TKwend.color;
idtype52 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode20 == NULL) {
var50 = 1;
} else {
if(cltype51 >= var_tkwendnode20->type->table_size) {
var50 = 0;
} else {
var50 = var_tkwendnode20->type->type_table[cltype51] == idtype52;
}
}
if (!var50) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13407);
show_backtrace(1);
}
var53 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var54 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var53->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var53, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var_pannotationsnode9, var54, var_listnode17, var_listnode19, var_tkwendnode20) /* init_astdclassdef on <var53:AStdClassdef>*/;
var_pclassdefnode1 = var53;
var_node_list = var_pclassdefnode1;
var55 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction290> */
var56 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var55) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var56, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction290#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction290__action(val* self, val* p0) {
parser__ReduceAction290__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction291#action for (self: ReduceAction291, Parser) */
void parser__ReduceAction291__action(val* self, val* p0) {
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
val* var_listnode19 /* var listnode19: Array[Object] */;
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
val* var_listnode18 /* var listnode18: nullable Object */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
val* var46 /* : Array[Object] */;
val* var_tkwendnode20 /* var tkwendnode20: nullable Object */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
val* var50 /* : AStdClassdef */;
val* var51 /* : null */;
val* var52 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var53 /* : Int */;
long var54 /* : Int */;
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
var_listnode19 = var15;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13446);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13448);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13450);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13452);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist7;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13454);
show_backtrace(1);
}
var29 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction291>*/;
var_listnode8 = var29;
var30 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var30->class->vft[COLOR_array__Array__init]))(var30) /* init on <var30:Array[Object]>*/;
var_listnode13 = var30;
var_listnode12 = var_nodearraylist8;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13458);
show_backtrace(1);
}
var34 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode13, var_listnode12) /* concat on <self:ReduceAction291>*/;
var_listnode13 = var34;
var35 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var36 = NULL;
var37 = NULL;
var38 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var35->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var35, var36, var37, var_listnode13, var38) /* init_aannotations on <var35:AAnnotations>*/;
var_pannotationsnode9 = var35;
var_listnode16 = var_nodearraylist9;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13467);
show_backtrace(1);
}
var42 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode17, var_listnode16) /* concat on <self:ReduceAction291>*/;
var_listnode17 = var42;
var_listnode18 = var_nodearraylist10;
/* <var_listnode18:nullable Object> isa Array[Object] */
cltype44 = type_array__Arraykernel__Object.color;
idtype45 = type_array__Arraykernel__Object.id;
if(var_listnode18 == NULL) {
var43 = 0;
} else {
if(cltype44 >= var_listnode18->type->table_size) {
var43 = 0;
} else {
var43 = var_listnode18->type->type_table[cltype44] == idtype45;
}
}
if (!var43) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13470);
show_backtrace(1);
}
var46 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode19, var_listnode18) /* concat on <self:ReduceAction291>*/;
var_listnode19 = var46;
var_tkwendnode20 = var_nodearraylist12;
/* <var_tkwendnode20:nullable Object> isa nullable TKwend */
cltype48 = type_nullable_parser_nodes__TKwend.color;
idtype49 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode20 == NULL) {
var47 = 1;
} else {
if(cltype48 >= var_tkwendnode20->type->table_size) {
var47 = 0;
} else {
var47 = var_tkwendnode20->type->type_table[cltype48] == idtype49;
}
}
if (!var47) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13473);
show_backtrace(1);
}
var50 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var51 = NULL;
var52 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var50->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var50, var_pdocnode2, var51, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var_pannotationsnode9, var52, var_listnode17, var_listnode19, var_tkwendnode20) /* init_astdclassdef on <var50:AStdClassdef>*/;
var_pclassdefnode1 = var50;
var_node_list = var_pclassdefnode1;
var53 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction291> */
var54 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var53) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var54, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction291#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction291__action(val* self, val* p0) {
parser__ReduceAction291__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction292#action for (self: ReduceAction292, Parser) */
void parser__ReduceAction292__action(val* self, val* p0) {
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
val* var_listnode19 /* var listnode19: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var17 /* : Bool */;
int cltype;
int idtype;
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
val* var31 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_listnode12 /* var listnode12: nullable Object */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
val* var35 /* : Array[Object] */;
val* var36 /* : AAnnotations */;
val* var37 /* : null */;
val* var38 /* : null */;
val* var39 /* : null */;
val* var_pannotationsnode9 /* var pannotationsnode9: nullable AAnnotations */;
val* var_listnode16 /* var listnode16: nullable Object */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
val* var43 /* : Array[Object] */;
val* var_listnode18 /* var listnode18: nullable Object */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
val* var47 /* : Array[Object] */;
val* var_tkwendnode20 /* var tkwendnode20: nullable Object */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
val* var51 /* : AStdClassdef */;
val* var52 /* : null */;
val* var53 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var54 /* : Int */;
long var55 /* : Int */;
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
var_listnode19 = var16;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13513);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13515);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist3;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13517);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13519);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist8;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13521);
show_backtrace(1);
}
var30 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction292>*/;
var_listnode8 = var30;
var31 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var31->class->vft[COLOR_array__Array__init]))(var31) /* init on <var31:Array[Object]>*/;
var_listnode13 = var31;
var_listnode12 = var_nodearraylist9;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype33 = type_array__Arraykernel__Object.color;
idtype34 = type_array__Arraykernel__Object.id;
if(var_listnode12 == NULL) {
var32 = 0;
} else {
if(cltype33 >= var_listnode12->type->table_size) {
var32 = 0;
} else {
var32 = var_listnode12->type->type_table[cltype33] == idtype34;
}
}
if (!var32) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13525);
show_backtrace(1);
}
var35 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode13, var_listnode12) /* concat on <self:ReduceAction292>*/;
var_listnode13 = var35;
var36 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var37 = NULL;
var38 = NULL;
var39 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var36->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var36, var37, var38, var_listnode13, var39) /* init_aannotations on <var36:AAnnotations>*/;
var_pannotationsnode9 = var36;
var_listnode16 = var_nodearraylist10;
/* <var_listnode16:nullable Object> isa Array[Object] */
cltype41 = type_array__Arraykernel__Object.color;
idtype42 = type_array__Arraykernel__Object.id;
if(var_listnode16 == NULL) {
var40 = 0;
} else {
if(cltype41 >= var_listnode16->type->table_size) {
var40 = 0;
} else {
var40 = var_listnode16->type->type_table[cltype41] == idtype42;
}
}
if (!var40) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13534);
show_backtrace(1);
}
var43 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode17, var_listnode16) /* concat on <self:ReduceAction292>*/;
var_listnode17 = var43;
var_listnode18 = var_nodearraylist11;
/* <var_listnode18:nullable Object> isa Array[Object] */
cltype45 = type_array__Arraykernel__Object.color;
idtype46 = type_array__Arraykernel__Object.id;
if(var_listnode18 == NULL) {
var44 = 0;
} else {
if(cltype45 >= var_listnode18->type->table_size) {
var44 = 0;
} else {
var44 = var_listnode18->type->type_table[cltype45] == idtype46;
}
}
if (!var44) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13537);
show_backtrace(1);
}
var47 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode19, var_listnode18) /* concat on <self:ReduceAction292>*/;
var_listnode19 = var47;
var_tkwendnode20 = var_nodearraylist13;
/* <var_tkwendnode20:nullable Object> isa nullable TKwend */
cltype49 = type_nullable_parser_nodes__TKwend.color;
idtype50 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode20 == NULL) {
var48 = 1;
} else {
if(cltype49 >= var_tkwendnode20->type->table_size) {
var48 = 0;
} else {
var48 = var_tkwendnode20->type->type_table[cltype49] == idtype50;
}
}
if (!var48) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13540);
show_backtrace(1);
}
var51 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var52 = NULL;
var53 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var51->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var51, var_pdocnode2, var52, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var_pannotationsnode9, var53, var_listnode17, var_listnode19, var_tkwendnode20) /* init_astdclassdef on <var51:AStdClassdef>*/;
var_pclassdefnode1 = var51;
var_node_list = var_pclassdefnode1;
var54 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction292> */
var55 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var54) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var55, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction292#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction292__action(val* self, val* p0) {
parser__ReduceAction292__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction294#action for (self: ReduceAction294, Parser) */
void parser__ReduceAction294__action(val* self, val* p0) {
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
val* var_listnode19 /* var listnode19: Array[Object] */;
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
val* var_listnode18 /* var listnode18: nullable Object */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
val* var50 /* : Array[Object] */;
val* var_tkwendnode20 /* var tkwendnode20: nullable Object */;
short int var51 /* : Bool */;
int cltype52;
int idtype53;
val* var54 /* : AStdClassdef */;
val* var55 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var56 /* : Int */;
long var57 /* : Int */;
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
var_listnode19 = var16;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13580);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13582);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13584);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13586);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist7;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13588);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist8;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13590);
show_backtrace(1);
}
var33 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction294>*/;
var_listnode8 = var33;
var34 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var34->class->vft[COLOR_array__Array__init]))(var34) /* init on <var34:Array[Object]>*/;
var_listnode13 = var34;
var_listnode12 = var_nodearraylist9;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13594);
show_backtrace(1);
}
var38 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode13, var_listnode12) /* concat on <self:ReduceAction294>*/;
var_listnode13 = var38;
var39 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var40 = NULL;
var41 = NULL;
var42 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var39->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var39, var40, var41, var_listnode13, var42) /* init_aannotations on <var39:AAnnotations>*/;
var_pannotationsnode9 = var39;
var_listnode16 = var_nodearraylist10;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13603);
show_backtrace(1);
}
var46 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode17, var_listnode16) /* concat on <self:ReduceAction294>*/;
var_listnode17 = var46;
var_listnode18 = var_nodearraylist11;
/* <var_listnode18:nullable Object> isa Array[Object] */
cltype48 = type_array__Arraykernel__Object.color;
idtype49 = type_array__Arraykernel__Object.id;
if(var_listnode18 == NULL) {
var47 = 0;
} else {
if(cltype48 >= var_listnode18->type->table_size) {
var47 = 0;
} else {
var47 = var_listnode18->type->type_table[cltype48] == idtype49;
}
}
if (!var47) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13606);
show_backtrace(1);
}
var50 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode19, var_listnode18) /* concat on <self:ReduceAction294>*/;
var_listnode19 = var50;
var_tkwendnode20 = var_nodearraylist13;
/* <var_tkwendnode20:nullable Object> isa nullable TKwend */
cltype52 = type_nullable_parser_nodes__TKwend.color;
idtype53 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode20 == NULL) {
var51 = 1;
} else {
if(cltype52 >= var_tkwendnode20->type->table_size) {
var51 = 0;
} else {
var51 = var_tkwendnode20->type->type_table[cltype52] == idtype53;
}
}
if (!var51) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13609);
show_backtrace(1);
}
var54 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var55 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var54->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var54, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var_pannotationsnode9, var55, var_listnode17, var_listnode19, var_tkwendnode20) /* init_astdclassdef on <var54:AStdClassdef>*/;
var_pclassdefnode1 = var54;
var_node_list = var_pclassdefnode1;
var56 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction294> */
var57 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var56) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var57, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction294#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction294__action(val* self, val* p0) {
parser__ReduceAction294__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction295#action for (self: ReduceAction295, Parser) */
void parser__ReduceAction295__action(val* self, val* p0) {
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
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var16 /* : Array[Object] */;
val* var_listnode17 /* var listnode17: Array[Object] */;
val* var17 /* : Array[Object] */;
val* var_listnode19 /* var listnode19: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var18 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var34 /* : Array[Object] */;
val* var35 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_listnode12 /* var listnode12: nullable Object */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
val* var39 /* : Array[Object] */;
val* var40 /* : AAnnotations */;
val* var41 /* : null */;
val* var42 /* : null */;
val* var43 /* : null */;
val* var_pannotationsnode9 /* var pannotationsnode9: nullable AAnnotations */;
val* var_listnode16 /* var listnode16: nullable Object */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
val* var47 /* : Array[Object] */;
val* var_listnode18 /* var listnode18: nullable Object */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
val* var51 /* : Array[Object] */;
val* var_tkwendnode20 /* var tkwendnode20: nullable Object */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
val* var55 /* : AStdClassdef */;
val* var56 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var57 /* : Int */;
long var58 /* : Int */;
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
var_listnode8 = var15;
var16 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var16->class->vft[COLOR_array__Array__init]))(var16) /* init on <var16:Array[Object]>*/;
var_listnode17 = var16;
var17 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var17->class->vft[COLOR_array__Array__init]))(var17) /* init on <var17:Array[Object]>*/;
var_listnode19 = var17;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var18 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var18 = 0;
} else {
var18 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13650);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype20 = type_nullable_parser_nodes__TKwredef.color;
idtype21 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_tkwredefnode3->type->table_size) {
var19 = 0;
} else {
var19 = var_tkwredefnode3->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13652);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype23 = type_nullable_parser_nodes__AVisibility.color;
idtype24 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_pvisibilitynode4->type->table_size) {
var22 = 0;
} else {
var22 = var_pvisibilitynode4->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13654);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype26 = type_nullable_parser_nodes__AClasskind.color;
idtype27 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var25 = 1;
} else {
if(cltype26 >= var_pclasskindnode5->type->table_size) {
var25 = 0;
} else {
var25 = var_pclasskindnode5->type->type_table[cltype26] == idtype27;
}
}
if (!var25) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13656);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist8;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype29 = type_nullable_parser_nodes__TClassid.color;
idtype30 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var28 = 1;
} else {
if(cltype29 >= var_tclassidnode6->type->table_size) {
var28 = 0;
} else {
var28 = var_tclassidnode6->type->type_table[cltype29] == idtype30;
}
}
if (!var28) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13658);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist9;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype32 = type_array__Arraykernel__Object.color;
idtype33 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var31 = 0;
} else {
if(cltype32 >= var_listnode7->type->table_size) {
var31 = 0;
} else {
var31 = var_listnode7->type->type_table[cltype32] == idtype33;
}
}
if (!var31) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13660);
show_backtrace(1);
}
var34 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction295>*/;
var_listnode8 = var34;
var35 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var35->class->vft[COLOR_array__Array__init]))(var35) /* init on <var35:Array[Object]>*/;
var_listnode13 = var35;
var_listnode12 = var_nodearraylist10;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype37 = type_array__Arraykernel__Object.color;
idtype38 = type_array__Arraykernel__Object.id;
if(var_listnode12 == NULL) {
var36 = 0;
} else {
if(cltype37 >= var_listnode12->type->table_size) {
var36 = 0;
} else {
var36 = var_listnode12->type->type_table[cltype37] == idtype38;
}
}
if (!var36) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13664);
show_backtrace(1);
}
var39 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode13, var_listnode12) /* concat on <self:ReduceAction295>*/;
var_listnode13 = var39;
var40 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var41 = NULL;
var42 = NULL;
var43 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var40->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var40, var41, var42, var_listnode13, var43) /* init_aannotations on <var40:AAnnotations>*/;
var_pannotationsnode9 = var40;
var_listnode16 = var_nodearraylist11;
/* <var_listnode16:nullable Object> isa Array[Object] */
cltype45 = type_array__Arraykernel__Object.color;
idtype46 = type_array__Arraykernel__Object.id;
if(var_listnode16 == NULL) {
var44 = 0;
} else {
if(cltype45 >= var_listnode16->type->table_size) {
var44 = 0;
} else {
var44 = var_listnode16->type->type_table[cltype45] == idtype46;
}
}
if (!var44) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13673);
show_backtrace(1);
}
var47 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode17, var_listnode16) /* concat on <self:ReduceAction295>*/;
var_listnode17 = var47;
var_listnode18 = var_nodearraylist12;
/* <var_listnode18:nullable Object> isa Array[Object] */
cltype49 = type_array__Arraykernel__Object.color;
idtype50 = type_array__Arraykernel__Object.id;
if(var_listnode18 == NULL) {
var48 = 0;
} else {
if(cltype49 >= var_listnode18->type->table_size) {
var48 = 0;
} else {
var48 = var_listnode18->type->type_table[cltype49] == idtype50;
}
}
if (!var48) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13676);
show_backtrace(1);
}
var51 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode19, var_listnode18) /* concat on <self:ReduceAction295>*/;
var_listnode19 = var51;
var_tkwendnode20 = var_nodearraylist14;
/* <var_tkwendnode20:nullable Object> isa nullable TKwend */
cltype53 = type_nullable_parser_nodes__TKwend.color;
idtype54 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode20 == NULL) {
var52 = 1;
} else {
if(cltype53 >= var_tkwendnode20->type->table_size) {
var52 = 0;
} else {
var52 = var_tkwendnode20->type->type_table[cltype53] == idtype54;
}
}
if (!var52) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13679);
show_backtrace(1);
}
var55 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var56 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var55->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var55, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var_pannotationsnode9, var56, var_listnode17, var_listnode19, var_tkwendnode20) /* init_astdclassdef on <var55:AStdClassdef>*/;
var_pclassdefnode1 = var55;
var_node_list = var_pclassdefnode1;
var57 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction295> */
var58 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var57) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var58, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction295#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction295__action(val* self, val* p0) {
parser__ReduceAction295__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction297#action for (self: ReduceAction297, Parser) */
void parser__ReduceAction297__action(val* self, val* p0) {
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
val* var_pexterncodeblocknode9 /* var pexterncodeblocknode9: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var_listnode10 /* var listnode10: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var30 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: nullable Object */;
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
var_listnode7 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
var_listnode11 = var12;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13716);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13718);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13720);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13722);
show_backtrace(1);
}
var_pexterncodeblocknode9 = var_nodearraylist6;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13724);
show_backtrace(1);
}
var_listnode10 = var_nodearraylist7;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13726);
show_backtrace(1);
}
var30 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode11, var_listnode10) /* concat on <self:ReduceAction297>*/;
var_listnode11 = var30;
var_listnode12 = var_nodearraylist8;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13729);
show_backtrace(1);
}
var34 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode13, var_listnode12) /* concat on <self:ReduceAction297>*/;
var_listnode13 = var34;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13732);
show_backtrace(1);
}
var38 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var39 = NULL;
var40 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var38->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var38, var_pdocnode2, var39, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var40, var_pexterncodeblocknode9, var_listnode11, var_listnode13, var_tkwendnode14) /* init_astdclassdef on <var38:AStdClassdef>*/;
var_pclassdefnode1 = var38;
var_node_list = var_pclassdefnode1;
var41 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction297> */
var42 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var41) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var42, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction297#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction297__action(val* self, val* p0) {
parser__ReduceAction297__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction298#action for (self: ReduceAction298, Parser) */
void parser__ReduceAction298__action(val* self, val* p0) {
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
val* var_pexterncodeblocknode9 /* var pexterncodeblocknode9: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var_listnode10 /* var listnode10: nullable Object */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var34 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: nullable Object */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
val* var38 /* : Array[Object] */;
val* var_tkwendnode14 /* var tkwendnode14: nullable Object */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
val* var42 /* : AStdClassdef */;
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
var_listnode11 = var13;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13770);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13772);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13774);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13776);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13778);
show_backtrace(1);
}
var_pexterncodeblocknode9 = var_nodearraylist7;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13780);
show_backtrace(1);
}
var_listnode10 = var_nodearraylist8;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13782);
show_backtrace(1);
}
var34 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode11, var_listnode10) /* concat on <self:ReduceAction298>*/;
var_listnode11 = var34;
var_listnode12 = var_nodearraylist9;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13785);
show_backtrace(1);
}
var38 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode13, var_listnode12) /* concat on <self:ReduceAction298>*/;
var_listnode13 = var38;
var_tkwendnode14 = var_nodearraylist11;
/* <var_tkwendnode14:nullable Object> isa nullable TKwend */
cltype40 = type_nullable_parser_nodes__TKwend.color;
idtype41 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode14 == NULL) {
var39 = 1;
} else {
if(cltype40 >= var_tkwendnode14->type->table_size) {
var39 = 0;
} else {
var39 = var_tkwendnode14->type->type_table[cltype40] == idtype41;
}
}
if (!var39) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13788);
show_backtrace(1);
}
var42 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var43 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var42->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var42, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var43, var_pexterncodeblocknode9, var_listnode11, var_listnode13, var_tkwendnode14) /* init_astdclassdef on <var42:AStdClassdef>*/;
var_pclassdefnode1 = var42;
var_node_list = var_pclassdefnode1;
var44 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction298> */
var45 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var44) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var45, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction298#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction298__action(val* self, val* p0) {
parser__ReduceAction298__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction299#action for (self: ReduceAction299, Parser) */
void parser__ReduceAction299__action(val* self, val* p0) {
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
val* var_pexterncodeblocknode9 /* var pexterncodeblocknode9: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_listnode10 /* var listnode10: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var31 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: nullable Object */;
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
var_listnode7 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
var_listnode11 = var13;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13826);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13828);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13830);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13832);
show_backtrace(1);
}
var_pexterncodeblocknode9 = var_nodearraylist7;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13834);
show_backtrace(1);
}
var_listnode10 = var_nodearraylist8;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13836);
show_backtrace(1);
}
var31 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode11, var_listnode10) /* concat on <self:ReduceAction299>*/;
var_listnode11 = var31;
var_listnode12 = var_nodearraylist9;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype33 = type_array__Arraykernel__Object.color;
idtype34 = type_array__Arraykernel__Object.id;
if(var_listnode12 == NULL) {
var32 = 0;
} else {
if(cltype33 >= var_listnode12->type->table_size) {
var32 = 0;
} else {
var32 = var_listnode12->type->type_table[cltype33] == idtype34;
}
}
if (!var32) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13839);
show_backtrace(1);
}
var35 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode13, var_listnode12) /* concat on <self:ReduceAction299>*/;
var_listnode13 = var35;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13842);
show_backtrace(1);
}
var39 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var40 = NULL;
var41 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var39->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var39, var_pdocnode2, var40, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var41, var_pexterncodeblocknode9, var_listnode11, var_listnode13, var_tkwendnode14) /* init_astdclassdef on <var39:AStdClassdef>*/;
var_pclassdefnode1 = var39;
var_node_list = var_pclassdefnode1;
var42 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction299> */
var43 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var42) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var43, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction299#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction299__action(val* self, val* p0) {
parser__ReduceAction299__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction300#action for (self: ReduceAction300, Parser) */
void parser__ReduceAction300__action(val* self, val* p0) {
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
val* var_listnode13 /* var listnode13: Array[Object] */;
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
val* var_pexterncodeblocknode9 /* var pexterncodeblocknode9: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var_listnode10 /* var listnode10: nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var32 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: nullable Object */;
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
var_listnode7 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
var_listnode11 = var14;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13881);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13883);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13885);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13887);
show_backtrace(1);
}
var_pexterncodeblocknode9 = var_nodearraylist8;
/* <var_pexterncodeblocknode9:nullable Object> isa nullable AExternCodeBlock */
cltype27 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype28 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode9 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_pexterncodeblocknode9->type->table_size) {
var26 = 0;
} else {
var26 = var_pexterncodeblocknode9->type->type_table[cltype27] == idtype28;
}
}
if (!var26) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13889);
show_backtrace(1);
}
var_listnode10 = var_nodearraylist9;
/* <var_listnode10:nullable Object> isa Array[Object] */
cltype30 = type_array__Arraykernel__Object.color;
idtype31 = type_array__Arraykernel__Object.id;
if(var_listnode10 == NULL) {
var29 = 0;
} else {
if(cltype30 >= var_listnode10->type->table_size) {
var29 = 0;
} else {
var29 = var_listnode10->type->type_table[cltype30] == idtype31;
}
}
if (!var29) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13891);
show_backtrace(1);
}
var32 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode11, var_listnode10) /* concat on <self:ReduceAction300>*/;
var_listnode11 = var32;
var_listnode12 = var_nodearraylist10;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13894);
show_backtrace(1);
}
var36 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode13, var_listnode12) /* concat on <self:ReduceAction300>*/;
var_listnode13 = var36;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13897);
show_backtrace(1);
}
var40 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var41 = NULL;
var42 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var40->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var40, var_pdocnode2, var41, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var42, var_pexterncodeblocknode9, var_listnode11, var_listnode13, var_tkwendnode14) /* init_astdclassdef on <var40:AStdClassdef>*/;
var_pclassdefnode1 = var40;
var_node_list = var_pclassdefnode1;
var43 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction300> */
var44 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var43) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var44, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction300#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction300__action(val* self, val* p0) {
parser__ReduceAction300__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction302#action for (self: ReduceAction302, Parser) */
void parser__ReduceAction302__action(val* self, val* p0) {
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
val* var_pexterncodeblocknode9 /* var pexterncodeblocknode9: nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var_listnode10 /* var listnode10: nullable Object */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
val* var35 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: nullable Object */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
val* var39 /* : Array[Object] */;
val* var_tkwendnode14 /* var tkwendnode14: nullable Object */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13936);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13938);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13940);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13942);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13944);
show_backtrace(1);
}
var_pexterncodeblocknode9 = var_nodearraylist8;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13946);
show_backtrace(1);
}
var_listnode10 = var_nodearraylist9;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13948);
show_backtrace(1);
}
var35 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode11, var_listnode10) /* concat on <self:ReduceAction302>*/;
var_listnode11 = var35;
var_listnode12 = var_nodearraylist10;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype37 = type_array__Arraykernel__Object.color;
idtype38 = type_array__Arraykernel__Object.id;
if(var_listnode12 == NULL) {
var36 = 0;
} else {
if(cltype37 >= var_listnode12->type->table_size) {
var36 = 0;
} else {
var36 = var_listnode12->type->type_table[cltype37] == idtype38;
}
}
if (!var36) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13951);
show_backtrace(1);
}
var39 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode13, var_listnode12) /* concat on <self:ReduceAction302>*/;
var_listnode13 = var39;
var_tkwendnode14 = var_nodearraylist12;
/* <var_tkwendnode14:nullable Object> isa nullable TKwend */
cltype41 = type_nullable_parser_nodes__TKwend.color;
idtype42 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode14 == NULL) {
var40 = 1;
} else {
if(cltype41 >= var_tkwendnode14->type->table_size) {
var40 = 0;
} else {
var40 = var_tkwendnode14->type->type_table[cltype41] == idtype42;
}
}
if (!var40) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13954);
show_backtrace(1);
}
var43 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var44 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var43->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var43, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var44, var_pexterncodeblocknode9, var_listnode11, var_listnode13, var_tkwendnode14) /* init_astdclassdef on <var43:AStdClassdef>*/;
var_pclassdefnode1 = var43;
var_node_list = var_pclassdefnode1;
var45 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction302> */
var46 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var45) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var46, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction302#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction302__action(val* self, val* p0) {
parser__ReduceAction302__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction303#action for (self: ReduceAction303, Parser) */
void parser__ReduceAction303__action(val* self, val* p0) {
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
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var15 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: Array[Object] */;
val* var16 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
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
val* var_pexterncodeblocknode9 /* var pexterncodeblocknode9: nullable Object */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
val* var_listnode10 /* var listnode10: nullable Object */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
val* var36 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: nullable Object */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
val* var40 /* : Array[Object] */;
val* var_tkwendnode14 /* var tkwendnode14: nullable Object */;
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
var_listnode7 = var14;
var15 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var15->class->vft[COLOR_array__Array__init]))(var15) /* init on <var15:Array[Object]>*/;
var_listnode11 = var15;
var16 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var16->class->vft[COLOR_array__Array__init]))(var16) /* init on <var16:Array[Object]>*/;
var_listnode13 = var16;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13994);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13996);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 13998);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14000);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14002);
show_backtrace(1);
}
var_pexterncodeblocknode9 = var_nodearraylist9;
/* <var_pexterncodeblocknode9:nullable Object> isa nullable AExternCodeBlock */
cltype31 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype32 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode9 == NULL) {
var30 = 1;
} else {
if(cltype31 >= var_pexterncodeblocknode9->type->table_size) {
var30 = 0;
} else {
var30 = var_pexterncodeblocknode9->type->type_table[cltype31] == idtype32;
}
}
if (!var30) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14004);
show_backtrace(1);
}
var_listnode10 = var_nodearraylist10;
/* <var_listnode10:nullable Object> isa Array[Object] */
cltype34 = type_array__Arraykernel__Object.color;
idtype35 = type_array__Arraykernel__Object.id;
if(var_listnode10 == NULL) {
var33 = 0;
} else {
if(cltype34 >= var_listnode10->type->table_size) {
var33 = 0;
} else {
var33 = var_listnode10->type->type_table[cltype34] == idtype35;
}
}
if (!var33) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14006);
show_backtrace(1);
}
var36 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode11, var_listnode10) /* concat on <self:ReduceAction303>*/;
var_listnode11 = var36;
var_listnode12 = var_nodearraylist11;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype38 = type_array__Arraykernel__Object.color;
idtype39 = type_array__Arraykernel__Object.id;
if(var_listnode12 == NULL) {
var37 = 0;
} else {
if(cltype38 >= var_listnode12->type->table_size) {
var37 = 0;
} else {
var37 = var_listnode12->type->type_table[cltype38] == idtype39;
}
}
if (!var37) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14009);
show_backtrace(1);
}
var40 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode13, var_listnode12) /* concat on <self:ReduceAction303>*/;
var_listnode13 = var40;
var_tkwendnode14 = var_nodearraylist13;
/* <var_tkwendnode14:nullable Object> isa nullable TKwend */
cltype42 = type_nullable_parser_nodes__TKwend.color;
idtype43 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode14 == NULL) {
var41 = 1;
} else {
if(cltype42 >= var_tkwendnode14->type->table_size) {
var41 = 0;
} else {
var41 = var_tkwendnode14->type->type_table[cltype42] == idtype43;
}
}
if (!var41) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14012);
show_backtrace(1);
}
var44 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var45 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var44->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var44, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var45, var_pexterncodeblocknode9, var_listnode11, var_listnode13, var_tkwendnode14) /* init_astdclassdef on <var44:AStdClassdef>*/;
var_pclassdefnode1 = var44;
var_node_list = var_pclassdefnode1;
var46 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction303> */
var47 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var46) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var47, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction303#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction303__action(val* self, val* p0) {
parser__ReduceAction303__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction305#action for (self: ReduceAction305, Parser) */
void parser__ReduceAction305__action(val* self, val* p0) {
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
val* var_listnode14 /* var listnode14: Array[Object] */;
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
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
val* var35 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: nullable Object */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
val* var39 /* : Array[Object] */;
val* var_tkwendnode15 /* var tkwendnode15: nullable Object */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
val* var43 /* : AStdClassdef */;
val* var44 /* : null */;
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
var_listnode12 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
var_listnode14 = var14;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14050);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14052);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14054);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist5;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14056);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist6;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14058);
show_backtrace(1);
}
var28 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction305>*/;
var_listnode8 = var28;
var_pexterncodeblocknode10 = var_nodearraylist7;
/* <var_pexterncodeblocknode10:nullable Object> isa nullable AExternCodeBlock */
cltype30 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype31 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode10 == NULL) {
var29 = 1;
} else {
if(cltype30 >= var_pexterncodeblocknode10->type->table_size) {
var29 = 0;
} else {
var29 = var_pexterncodeblocknode10->type->type_table[cltype30] == idtype31;
}
}
if (!var29) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14061);
show_backtrace(1);
}
var_listnode11 = var_nodearraylist8;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14063);
show_backtrace(1);
}
var35 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction305>*/;
var_listnode12 = var35;
var_listnode13 = var_nodearraylist9;
/* <var_listnode13:nullable Object> isa Array[Object] */
cltype37 = type_array__Arraykernel__Object.color;
idtype38 = type_array__Arraykernel__Object.id;
if(var_listnode13 == NULL) {
var36 = 0;
} else {
if(cltype37 >= var_listnode13->type->table_size) {
var36 = 0;
} else {
var36 = var_listnode13->type->type_table[cltype37] == idtype38;
}
}
if (!var36) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14066);
show_backtrace(1);
}
var39 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode14, var_listnode13) /* concat on <self:ReduceAction305>*/;
var_listnode14 = var39;
var_tkwendnode15 = var_nodearraylist11;
/* <var_tkwendnode15:nullable Object> isa nullable TKwend */
cltype41 = type_nullable_parser_nodes__TKwend.color;
idtype42 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode15 == NULL) {
var40 = 1;
} else {
if(cltype41 >= var_tkwendnode15->type->table_size) {
var40 = 0;
} else {
var40 = var_tkwendnode15->type->type_table[cltype41] == idtype42;
}
}
if (!var40) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14069);
show_backtrace(1);
}
var43 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var44 = NULL;
var45 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var43->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var43, var_pdocnode2, var44, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var45, var_pexterncodeblocknode10, var_listnode12, var_listnode14, var_tkwendnode15) /* init_astdclassdef on <var43:AStdClassdef>*/;
var_pclassdefnode1 = var43;
var_node_list = var_pclassdefnode1;
var46 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction305> */
var47 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var46) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var47, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction305#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction305__action(val* self, val* p0) {
parser__ReduceAction305__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction306#action for (self: ReduceAction306, Parser) */
void parser__ReduceAction306__action(val* self, val* p0) {
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
val* var_listnode14 /* var listnode14: Array[Object] */;
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
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
val* var39 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: nullable Object */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
val* var43 /* : Array[Object] */;
val* var_tkwendnode15 /* var tkwendnode15: nullable Object */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
val* var47 /* : AStdClassdef */;
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
var_listnode12 = var14;
var15 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var15->class->vft[COLOR_array__Array__init]))(var15) /* init on <var15:Array[Object]>*/;
var_listnode14 = var15;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14108);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14110);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14112);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14114);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist6;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14116);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist7;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14118);
show_backtrace(1);
}
var32 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction306>*/;
var_listnode8 = var32;
var_pexterncodeblocknode10 = var_nodearraylist8;
/* <var_pexterncodeblocknode10:nullable Object> isa nullable AExternCodeBlock */
cltype34 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype35 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode10 == NULL) {
var33 = 1;
} else {
if(cltype34 >= var_pexterncodeblocknode10->type->table_size) {
var33 = 0;
} else {
var33 = var_pexterncodeblocknode10->type->type_table[cltype34] == idtype35;
}
}
if (!var33) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14121);
show_backtrace(1);
}
var_listnode11 = var_nodearraylist9;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype37 = type_array__Arraykernel__Object.color;
idtype38 = type_array__Arraykernel__Object.id;
if(var_listnode11 == NULL) {
var36 = 0;
} else {
if(cltype37 >= var_listnode11->type->table_size) {
var36 = 0;
} else {
var36 = var_listnode11->type->type_table[cltype37] == idtype38;
}
}
if (!var36) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14123);
show_backtrace(1);
}
var39 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction306>*/;
var_listnode12 = var39;
var_listnode13 = var_nodearraylist10;
/* <var_listnode13:nullable Object> isa Array[Object] */
cltype41 = type_array__Arraykernel__Object.color;
idtype42 = type_array__Arraykernel__Object.id;
if(var_listnode13 == NULL) {
var40 = 0;
} else {
if(cltype41 >= var_listnode13->type->table_size) {
var40 = 0;
} else {
var40 = var_listnode13->type->type_table[cltype41] == idtype42;
}
}
if (!var40) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14126);
show_backtrace(1);
}
var43 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode14, var_listnode13) /* concat on <self:ReduceAction306>*/;
var_listnode14 = var43;
var_tkwendnode15 = var_nodearraylist12;
/* <var_tkwendnode15:nullable Object> isa nullable TKwend */
cltype45 = type_nullable_parser_nodes__TKwend.color;
idtype46 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode15 == NULL) {
var44 = 1;
} else {
if(cltype45 >= var_tkwendnode15->type->table_size) {
var44 = 0;
} else {
var44 = var_tkwendnode15->type->type_table[cltype45] == idtype46;
}
}
if (!var44) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14129);
show_backtrace(1);
}
var47 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var48 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var47->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var47, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var48, var_pexterncodeblocknode10, var_listnode12, var_listnode14, var_tkwendnode15) /* init_astdclassdef on <var47:AStdClassdef>*/;
var_pclassdefnode1 = var47;
var_node_list = var_pclassdefnode1;
var49 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction306> */
var50 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var49) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var50, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction306#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction306__action(val* self, val* p0) {
parser__ReduceAction306__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction307#action for (self: ReduceAction307, Parser) */
void parser__ReduceAction307__action(val* self, val* p0) {
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
val* var_listnode14 /* var listnode14: Array[Object] */;
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
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
val* var36 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: nullable Object */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
val* var40 /* : Array[Object] */;
val* var_tkwendnode15 /* var tkwendnode15: nullable Object */;
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
var_listnode14 = var15;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14168);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14170);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14172);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14174);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist7;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14176);
show_backtrace(1);
}
var29 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction307>*/;
var_listnode8 = var29;
var_pexterncodeblocknode10 = var_nodearraylist8;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14179);
show_backtrace(1);
}
var_listnode11 = var_nodearraylist9;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14181);
show_backtrace(1);
}
var36 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction307>*/;
var_listnode12 = var36;
var_listnode13 = var_nodearraylist10;
/* <var_listnode13:nullable Object> isa Array[Object] */
cltype38 = type_array__Arraykernel__Object.color;
idtype39 = type_array__Arraykernel__Object.id;
if(var_listnode13 == NULL) {
var37 = 0;
} else {
if(cltype38 >= var_listnode13->type->table_size) {
var37 = 0;
} else {
var37 = var_listnode13->type->type_table[cltype38] == idtype39;
}
}
if (!var37) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14184);
show_backtrace(1);
}
var40 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode14, var_listnode13) /* concat on <self:ReduceAction307>*/;
var_listnode14 = var40;
var_tkwendnode15 = var_nodearraylist12;
/* <var_tkwendnode15:nullable Object> isa nullable TKwend */
cltype42 = type_nullable_parser_nodes__TKwend.color;
idtype43 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode15 == NULL) {
var41 = 1;
} else {
if(cltype42 >= var_tkwendnode15->type->table_size) {
var41 = 0;
} else {
var41 = var_tkwendnode15->type->type_table[cltype42] == idtype43;
}
}
if (!var41) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14187);
show_backtrace(1);
}
var44 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var45 = NULL;
var46 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var44->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var44, var_pdocnode2, var45, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var46, var_pexterncodeblocknode10, var_listnode12, var_listnode14, var_tkwendnode15) /* init_astdclassdef on <var44:AStdClassdef>*/;
var_pclassdefnode1 = var44;
var_node_list = var_pclassdefnode1;
var47 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction307> */
var48 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var47) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var48, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction307#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction307__action(val* self, val* p0) {
parser__ReduceAction307__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction308#action for (self: ReduceAction308, Parser) */
void parser__ReduceAction308__action(val* self, val* p0) {
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
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var16 /* : Array[Object] */;
val* var_listnode14 /* var listnode14: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var17 /* : Bool */;
int cltype;
int idtype;
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
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
val* var37 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: nullable Object */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
val* var41 /* : Array[Object] */;
val* var_tkwendnode15 /* var tkwendnode15: nullable Object */;
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
var_listnode12 = var15;
var16 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var16->class->vft[COLOR_array__Array__init]))(var16) /* init on <var16:Array[Object]>*/;
var_listnode14 = var16;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14227);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14229);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist3;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14231);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14233);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist8;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14235);
show_backtrace(1);
}
var30 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction308>*/;
var_listnode8 = var30;
var_pexterncodeblocknode10 = var_nodearraylist9;
/* <var_pexterncodeblocknode10:nullable Object> isa nullable AExternCodeBlock */
cltype32 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype33 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode10 == NULL) {
var31 = 1;
} else {
if(cltype32 >= var_pexterncodeblocknode10->type->table_size) {
var31 = 0;
} else {
var31 = var_pexterncodeblocknode10->type->type_table[cltype32] == idtype33;
}
}
if (!var31) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14238);
show_backtrace(1);
}
var_listnode11 = var_nodearraylist10;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype35 = type_array__Arraykernel__Object.color;
idtype36 = type_array__Arraykernel__Object.id;
if(var_listnode11 == NULL) {
var34 = 0;
} else {
if(cltype35 >= var_listnode11->type->table_size) {
var34 = 0;
} else {
var34 = var_listnode11->type->type_table[cltype35] == idtype36;
}
}
if (!var34) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14240);
show_backtrace(1);
}
var37 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction308>*/;
var_listnode12 = var37;
var_listnode13 = var_nodearraylist11;
/* <var_listnode13:nullable Object> isa Array[Object] */
cltype39 = type_array__Arraykernel__Object.color;
idtype40 = type_array__Arraykernel__Object.id;
if(var_listnode13 == NULL) {
var38 = 0;
} else {
if(cltype39 >= var_listnode13->type->table_size) {
var38 = 0;
} else {
var38 = var_listnode13->type->type_table[cltype39] == idtype40;
}
}
if (!var38) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14243);
show_backtrace(1);
}
var41 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode14, var_listnode13) /* concat on <self:ReduceAction308>*/;
var_listnode14 = var41;
var_tkwendnode15 = var_nodearraylist13;
/* <var_tkwendnode15:nullable Object> isa nullable TKwend */
cltype43 = type_nullable_parser_nodes__TKwend.color;
idtype44 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode15 == NULL) {
var42 = 1;
} else {
if(cltype43 >= var_tkwendnode15->type->table_size) {
var42 = 0;
} else {
var42 = var_tkwendnode15->type->type_table[cltype43] == idtype44;
}
}
if (!var42) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14246);
show_backtrace(1);
}
var45 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var46 = NULL;
var47 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var45->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var45, var_pdocnode2, var46, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var47, var_pexterncodeblocknode10, var_listnode12, var_listnode14, var_tkwendnode15) /* init_astdclassdef on <var45:AStdClassdef>*/;
var_pclassdefnode1 = var45;
var_node_list = var_pclassdefnode1;
var48 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction308> */
var49 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var48) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var49, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction308#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction308__action(val* self, val* p0) {
parser__ReduceAction308__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction310#action for (self: ReduceAction310, Parser) */
void parser__ReduceAction310__action(val* self, val* p0) {
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
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var16 /* : Array[Object] */;
val* var_listnode14 /* var listnode14: Array[Object] */;
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
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
val* var40 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: nullable Object */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
val* var44 /* : Array[Object] */;
val* var_tkwendnode15 /* var tkwendnode15: nullable Object */;
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
var_listnode12 = var15;
var16 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var16->class->vft[COLOR_array__Array__init]))(var16) /* init on <var16:Array[Object]>*/;
var_listnode14 = var16;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14286);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14288);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14290);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14292);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist7;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14294);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist8;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14296);
show_backtrace(1);
}
var33 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction310>*/;
var_listnode8 = var33;
var_pexterncodeblocknode10 = var_nodearraylist9;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14299);
show_backtrace(1);
}
var_listnode11 = var_nodearraylist10;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype38 = type_array__Arraykernel__Object.color;
idtype39 = type_array__Arraykernel__Object.id;
if(var_listnode11 == NULL) {
var37 = 0;
} else {
if(cltype38 >= var_listnode11->type->table_size) {
var37 = 0;
} else {
var37 = var_listnode11->type->type_table[cltype38] == idtype39;
}
}
if (!var37) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14301);
show_backtrace(1);
}
var40 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction310>*/;
var_listnode12 = var40;
var_listnode13 = var_nodearraylist11;
/* <var_listnode13:nullable Object> isa Array[Object] */
cltype42 = type_array__Arraykernel__Object.color;
idtype43 = type_array__Arraykernel__Object.id;
if(var_listnode13 == NULL) {
var41 = 0;
} else {
if(cltype42 >= var_listnode13->type->table_size) {
var41 = 0;
} else {
var41 = var_listnode13->type->type_table[cltype42] == idtype43;
}
}
if (!var41) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14304);
show_backtrace(1);
}
var44 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode14, var_listnode13) /* concat on <self:ReduceAction310>*/;
var_listnode14 = var44;
var_tkwendnode15 = var_nodearraylist13;
/* <var_tkwendnode15:nullable Object> isa nullable TKwend */
cltype46 = type_nullable_parser_nodes__TKwend.color;
idtype47 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode15 == NULL) {
var45 = 1;
} else {
if(cltype46 >= var_tkwendnode15->type->table_size) {
var45 = 0;
} else {
var45 = var_tkwendnode15->type->type_table[cltype46] == idtype47;
}
}
if (!var45) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14307);
show_backtrace(1);
}
var48 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var49 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var48->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var48, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var49, var_pexterncodeblocknode10, var_listnode12, var_listnode14, var_tkwendnode15) /* init_astdclassdef on <var48:AStdClassdef>*/;
var_pclassdefnode1 = var48;
var_node_list = var_pclassdefnode1;
var50 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction310> */
var51 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var50) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var51, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction310#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction310__action(val* self, val* p0) {
parser__ReduceAction310__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction311#action for (self: ReduceAction311, Parser) */
void parser__ReduceAction311__action(val* self, val* p0) {
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
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var16 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var17 /* : Array[Object] */;
val* var_listnode14 /* var listnode14: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var18 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var34 /* : Array[Object] */;
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
val* var41 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: nullable Object */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
val* var45 /* : Array[Object] */;
val* var_tkwendnode15 /* var tkwendnode15: nullable Object */;
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
var_listnode8 = var15;
var16 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var16->class->vft[COLOR_array__Array__init]))(var16) /* init on <var16:Array[Object]>*/;
var_listnode12 = var16;
var17 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var17->class->vft[COLOR_array__Array__init]))(var17) /* init on <var17:Array[Object]>*/;
var_listnode14 = var17;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var18 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var18 = 0;
} else {
var18 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14348);
show_backtrace(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype20 = type_nullable_parser_nodes__TKwredef.color;
idtype21 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_tkwredefnode3->type->table_size) {
var19 = 0;
} else {
var19 = var_tkwredefnode3->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14350);
show_backtrace(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype23 = type_nullable_parser_nodes__AVisibility.color;
idtype24 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_pvisibilitynode4->type->table_size) {
var22 = 0;
} else {
var22 = var_pvisibilitynode4->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14352);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype26 = type_nullable_parser_nodes__AClasskind.color;
idtype27 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var25 = 1;
} else {
if(cltype26 >= var_pclasskindnode5->type->table_size) {
var25 = 0;
} else {
var25 = var_pclasskindnode5->type->type_table[cltype26] == idtype27;
}
}
if (!var25) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14354);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist8;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype29 = type_nullable_parser_nodes__TClassid.color;
idtype30 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var28 = 1;
} else {
if(cltype29 >= var_tclassidnode6->type->table_size) {
var28 = 0;
} else {
var28 = var_tclassidnode6->type->type_table[cltype29] == idtype30;
}
}
if (!var28) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14356);
show_backtrace(1);
}
var_listnode7 = var_nodearraylist9;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype32 = type_array__Arraykernel__Object.color;
idtype33 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var31 = 0;
} else {
if(cltype32 >= var_listnode7->type->table_size) {
var31 = 0;
} else {
var31 = var_listnode7->type->type_table[cltype32] == idtype33;
}
}
if (!var31) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14358);
show_backtrace(1);
}
var34 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction311>*/;
var_listnode8 = var34;
var_pexterncodeblocknode10 = var_nodearraylist10;
/* <var_pexterncodeblocknode10:nullable Object> isa nullable AExternCodeBlock */
cltype36 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype37 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode10 == NULL) {
var35 = 1;
} else {
if(cltype36 >= var_pexterncodeblocknode10->type->table_size) {
var35 = 0;
} else {
var35 = var_pexterncodeblocknode10->type->type_table[cltype36] == idtype37;
}
}
if (!var35) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14361);
show_backtrace(1);
}
var_listnode11 = var_nodearraylist11;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype39 = type_array__Arraykernel__Object.color;
idtype40 = type_array__Arraykernel__Object.id;
if(var_listnode11 == NULL) {
var38 = 0;
} else {
if(cltype39 >= var_listnode11->type->table_size) {
var38 = 0;
} else {
var38 = var_listnode11->type->type_table[cltype39] == idtype40;
}
}
if (!var38) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14363);
show_backtrace(1);
}
var41 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction311>*/;
var_listnode12 = var41;
var_listnode13 = var_nodearraylist12;
/* <var_listnode13:nullable Object> isa Array[Object] */
cltype43 = type_array__Arraykernel__Object.color;
idtype44 = type_array__Arraykernel__Object.id;
if(var_listnode13 == NULL) {
var42 = 0;
} else {
if(cltype43 >= var_listnode13->type->table_size) {
var42 = 0;
} else {
var42 = var_listnode13->type->type_table[cltype43] == idtype44;
}
}
if (!var42) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14366);
show_backtrace(1);
}
var45 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode14, var_listnode13) /* concat on <self:ReduceAction311>*/;
var_listnode14 = var45;
var_tkwendnode15 = var_nodearraylist14;
/* <var_tkwendnode15:nullable Object> isa nullable TKwend */
cltype47 = type_nullable_parser_nodes__TKwend.color;
idtype48 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode15 == NULL) {
var46 = 1;
} else {
if(cltype47 >= var_tkwendnode15->type->table_size) {
var46 = 0;
} else {
var46 = var_tkwendnode15->type->type_table[cltype47] == idtype48;
}
}
if (!var46) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14369);
show_backtrace(1);
}
var49 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var50 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var49->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var49, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var50, var_pexterncodeblocknode10, var_listnode12, var_listnode14, var_tkwendnode15) /* init_astdclassdef on <var49:AStdClassdef>*/;
var_pclassdefnode1 = var49;
var_node_list = var_pclassdefnode1;
var51 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction311> */
var52 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var51) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var52, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction311#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction311__action(val* self, val* p0) {
parser__ReduceAction311__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction313#action for (self: ReduceAction313, Parser) */
void parser__ReduceAction313__action(val* self, val* p0) {
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
val* var_pexterncodeblocknode14 /* var pexterncodeblocknode14: nullable Object */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
val* var_listnode15 /* var listnode15: nullable Object */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
val* var40 /* : Array[Object] */;
val* var_listnode17 /* var listnode17: nullable Object */;
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
var_listnode7 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
var_listnode16 = var13;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14407);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14409);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14411);
show_backtrace(1);
}
var_tclassidnode6 = var_nodearraylist5;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14413);
show_backtrace(1);
}
var25 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var25->class->vft[COLOR_array__Array__init]))(var25) /* init on <var25:Array[Object]>*/;
var_listnode12 = var25;
var_listnode11 = var_nodearraylist6;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14416);
show_backtrace(1);
}
var29 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction313>*/;
var_listnode12 = var29;
var30 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var31 = NULL;
var32 = NULL;
var33 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var30->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var30, var31, var32, var_listnode12, var33) /* init_aannotations on <var30:AAnnotations>*/;
var_pannotationsnode8 = var30;
var_pexterncodeblocknode14 = var_nodearraylist7;
/* <var_pexterncodeblocknode14:nullable Object> isa nullable AExternCodeBlock */
cltype35 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype36 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode14 == NULL) {
var34 = 1;
} else {
if(cltype35 >= var_pexterncodeblocknode14->type->table_size) {
var34 = 0;
} else {
var34 = var_pexterncodeblocknode14->type->type_table[cltype35] == idtype36;
}
}
if (!var34) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14425);
show_backtrace(1);
}
var_listnode15 = var_nodearraylist8;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14427);
show_backtrace(1);
}
var40 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode16, var_listnode15) /* concat on <self:ReduceAction313>*/;
var_listnode16 = var40;
var_listnode17 = var_nodearraylist9;
/* <var_listnode17:nullable Object> isa Array[Object] */
cltype42 = type_array__Arraykernel__Object.color;
idtype43 = type_array__Arraykernel__Object.id;
if(var_listnode17 == NULL) {
var41 = 0;
} else {
if(cltype42 >= var_listnode17->type->table_size) {
var41 = 0;
} else {
var41 = var_listnode17->type->type_table[cltype42] == idtype43;
}
}
if (!var41) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14430);
show_backtrace(1);
}
var44 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode18, var_listnode17) /* concat on <self:ReduceAction313>*/;
var_listnode18 = var44;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 14433);
show_backtrace(1);
}
var48 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var49 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var48->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var48, var_pdocnode2, var49, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var_pannotationsnode8, var_pexterncodeblocknode14, var_listnode16, var_listnode18, var_tkwendnode19) /* init_astdclassdef on <var48:AStdClassdef>*/;
var_pclassdefnode1 = var48;
var_node_list = var_pclassdefnode1;
var50 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction313> */
var51 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var50) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var51, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction313#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction313__action(val* self, val* p0) {
parser__ReduceAction313__action(self, p0);
RET_LABEL:;
}
