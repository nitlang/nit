#include "parser.sep.0.h"
/* method parser#ReduceAction3#action for (self: ReduceAction3, Parser) */
void parser__ReduceAction3__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var4 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var5 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : Array[Object] */;
val* var11 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var12 /* : Int */;
long var13 /* : Int */;
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
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
var_listnode5 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
var_listnode6 = var5;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable_parser_nodes__AModuledecl.color;
idtype = type_nullable_parser_nodes__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= var_pmoduledeclnode2->type->table_size) {
var6 = 0;
} else {
var6 = var_pmoduledeclnode2->type->type_table[cltype] == idtype;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 1881);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 1883);
show_backtrace(1);
}
var10 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction3>*/;
var_listnode4 = var10;
var11 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
((void (*)(val*, val*, val*, val*, val*))(var11->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var11, var_pmoduledeclnode2, var_listnode4, var_listnode5, var_listnode6) /* init_amodule on <var11:AModule>*/;
var_pmodulenode1 = var11;
var_node_list = var_pmodulenode1;
var12 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction3> */
var13 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var12) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var13, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction3#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction3__action(val* self, val* p0) {
parser__ReduceAction3__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction4#action for (self: ReduceAction4, Parser) */
void parser__ReduceAction4__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var3 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var4 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var6 /* : Array[Object] */;
val* var7 /* : AModule */;
val* var8 /* : null */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var9 /* : Int */;
long var10 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var2 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var2->class->vft[COLOR_array__Array__init]))(var2) /* init on <var2:Array[Object]>*/;
var_listnode3 = var2;
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var3->class->vft[COLOR_array__Array__init]))(var3) /* init on <var3:Array[Object]>*/;
var_listnode5 = var3;
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
var_listnode6 = var4;
var_listnode4 = var_nodearraylist1;
/* <var_listnode4:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode4 == NULL) {
var5 = 0;
} else {
if(cltype >= var_listnode4->type->table_size) {
var5 = 0;
} else {
var5 = var_listnode4->type->type_table[cltype] == idtype;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 1905);
show_backtrace(1);
}
var6 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode4) /* concat on <self:ReduceAction4>*/;
var_listnode5 = var6;
var7 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
var8 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var7->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var7, var8, var_listnode3, var_listnode5, var_listnode6) /* init_amodule on <var7:AModule>*/;
var_pmodulenode1 = var7;
var_node_list = var_pmodulenode1;
var9 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction4> */
var10 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var9) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var10, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction4#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction4__action(val* self, val* p0) {
parser__ReduceAction4__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction5#action for (self: ReduceAction5, Parser) */
void parser__ReduceAction5__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var4 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var5 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : Array[Object] */;
val* var11 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var12 /* : Int */;
long var13 /* : Int */;
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
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
var_listnode5 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
var_listnode6 = var5;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable_parser_nodes__AModuledecl.color;
idtype = type_nullable_parser_nodes__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= var_pmoduledeclnode2->type->table_size) {
var6 = 0;
} else {
var6 = var_pmoduledeclnode2->type->type_table[cltype] == idtype;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 1928);
show_backtrace(1);
}
var_listnode4 = var_nodearraylist2;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 1930);
show_backtrace(1);
}
var10 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode4) /* concat on <self:ReduceAction5>*/;
var_listnode5 = var10;
var11 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
((void (*)(val*, val*, val*, val*, val*))(var11->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var11, var_pmoduledeclnode2, var_listnode3, var_listnode5, var_listnode6) /* init_amodule on <var11:AModule>*/;
var_pmodulenode1 = var11;
var_node_list = var_pmodulenode1;
var12 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction5> */
var13 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var12) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var13, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction5#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction5__action(val* self, val* p0) {
parser__ReduceAction5__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction6#action for (self: ReduceAction6, Parser) */
void parser__ReduceAction6__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var4 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var5 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var7 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : Array[Object] */;
val* var12 /* : AModule */;
val* var13 /* : null */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var14 /* : Int */;
long var15 /* : Int */;
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
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
var_listnode6 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
var_listnode7 = var5;
var_listnode3 = var_nodearraylist1;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode3 == NULL) {
var6 = 0;
} else {
if(cltype >= var_listnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_listnode3->type->type_table[cltype] == idtype;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 1953);
show_backtrace(1);
}
var7 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction6>*/;
var_listnode4 = var7;
var_listnode5 = var_nodearraylist2;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype9 = type_array__Arraykernel__Object.color;
idtype10 = type_array__Arraykernel__Object.id;
if(var_listnode5 == NULL) {
var8 = 0;
} else {
if(cltype9 >= var_listnode5->type->table_size) {
var8 = 0;
} else {
var8 = var_listnode5->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 1956);
show_backtrace(1);
}
var11 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode6, var_listnode5) /* concat on <self:ReduceAction6>*/;
var_listnode6 = var11;
var12 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
var13 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var12->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var12, var13, var_listnode4, var_listnode6, var_listnode7) /* init_amodule on <var12:AModule>*/;
var_pmodulenode1 = var12;
var_node_list = var_pmodulenode1;
var14 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction6> */
var15 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var14) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var15, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction6#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction6__action(val* self, val* p0) {
parser__ReduceAction6__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction7#action for (self: ReduceAction7, Parser) */
void parser__ReduceAction7__action(val* self, val* p0) {
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
val* var5 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var6 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : Array[Object] */;
val* var16 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var17 /* : Int */;
long var18 /* : Int */;
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
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
var_listnode6 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
var_listnode7 = var6;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable_parser_nodes__AModuledecl.color;
idtype = type_nullable_parser_nodes__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= var_pmoduledeclnode2->type->table_size) {
var7 = 0;
} else {
var7 = var_pmoduledeclnode2->type->type_table[cltype] == idtype;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 1980);
show_backtrace(1);
}
var_listnode3 = var_nodearraylist2;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype9 = type_array__Arraykernel__Object.color;
idtype10 = type_array__Arraykernel__Object.id;
if(var_listnode3 == NULL) {
var8 = 0;
} else {
if(cltype9 >= var_listnode3->type->table_size) {
var8 = 0;
} else {
var8 = var_listnode3->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 1982);
show_backtrace(1);
}
var11 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction7>*/;
var_listnode4 = var11;
var_listnode5 = var_nodearraylist3;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype13 = type_array__Arraykernel__Object.color;
idtype14 = type_array__Arraykernel__Object.id;
if(var_listnode5 == NULL) {
var12 = 0;
} else {
if(cltype13 >= var_listnode5->type->table_size) {
var12 = 0;
} else {
var12 = var_listnode5->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 1985);
show_backtrace(1);
}
var15 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode6, var_listnode5) /* concat on <self:ReduceAction7>*/;
var_listnode6 = var15;
var16 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
((void (*)(val*, val*, val*, val*, val*))(var16->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var16, var_pmoduledeclnode2, var_listnode4, var_listnode6, var_listnode7) /* init_amodule on <var16:AModule>*/;
var_pmodulenode1 = var16;
var_node_list = var_pmodulenode1;
var17 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction7> */
var18 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var17) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var18, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction7#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction7__action(val* self, val* p0) {
parser__ReduceAction7__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction8#action for (self: ReduceAction8, Parser) */
void parser__ReduceAction8__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var3 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var4 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var6 /* : Array[Object] */;
val* var7 /* : AModule */;
val* var8 /* : null */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var9 /* : Int */;
long var10 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var2 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var2->class->vft[COLOR_array__Array__init]))(var2) /* init on <var2:Array[Object]>*/;
var_listnode3 = var2;
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var3->class->vft[COLOR_array__Array__init]))(var3) /* init on <var3:Array[Object]>*/;
var_listnode4 = var3;
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
var_listnode6 = var4;
var_listnode5 = var_nodearraylist1;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode5 == NULL) {
var5 = 0;
} else {
if(cltype >= var_listnode5->type->table_size) {
var5 = 0;
} else {
var5 = var_listnode5->type->type_table[cltype] == idtype;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2007);
show_backtrace(1);
}
var6 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode6, var_listnode5) /* concat on <self:ReduceAction8>*/;
var_listnode6 = var6;
var7 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
var8 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var7->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var7, var8, var_listnode3, var_listnode4, var_listnode6) /* init_amodule on <var7:AModule>*/;
var_pmodulenode1 = var7;
var_node_list = var_pmodulenode1;
var9 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction8> */
var10 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var9) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var10, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction8#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction8__action(val* self, val* p0) {
parser__ReduceAction8__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction9#action for (self: ReduceAction9, Parser) */
void parser__ReduceAction9__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var4 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var5 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : Array[Object] */;
val* var11 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var12 /* : Int */;
long var13 /* : Int */;
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
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
var_listnode4 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
var_listnode6 = var5;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable_parser_nodes__AModuledecl.color;
idtype = type_nullable_parser_nodes__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= var_pmoduledeclnode2->type->table_size) {
var6 = 0;
} else {
var6 = var_pmoduledeclnode2->type->type_table[cltype] == idtype;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2030);
show_backtrace(1);
}
var_listnode5 = var_nodearraylist2;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype8 = type_array__Arraykernel__Object.color;
idtype9 = type_array__Arraykernel__Object.id;
if(var_listnode5 == NULL) {
var7 = 0;
} else {
if(cltype8 >= var_listnode5->type->table_size) {
var7 = 0;
} else {
var7 = var_listnode5->type->type_table[cltype8] == idtype9;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2032);
show_backtrace(1);
}
var10 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode6, var_listnode5) /* concat on <self:ReduceAction9>*/;
var_listnode6 = var10;
var11 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
((void (*)(val*, val*, val*, val*, val*))(var11->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var11, var_pmoduledeclnode2, var_listnode3, var_listnode4, var_listnode6) /* init_amodule on <var11:AModule>*/;
var_pmodulenode1 = var11;
var_node_list = var_pmodulenode1;
var12 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction9> */
var13 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var12) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var13, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction9#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction9__action(val* self, val* p0) {
parser__ReduceAction9__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction10#action for (self: ReduceAction10, Parser) */
void parser__ReduceAction10__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var4 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var5 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var7 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : Array[Object] */;
val* var12 /* : AModule */;
val* var13 /* : null */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var14 /* : Int */;
long var15 /* : Int */;
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
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
var_listnode5 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
var_listnode7 = var5;
var_listnode3 = var_nodearraylist1;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode3 == NULL) {
var6 = 0;
} else {
if(cltype >= var_listnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_listnode3->type->type_table[cltype] == idtype;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2055);
show_backtrace(1);
}
var7 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction10>*/;
var_listnode4 = var7;
var_listnode6 = var_nodearraylist2;
/* <var_listnode6:nullable Object> isa Array[Object] */
cltype9 = type_array__Arraykernel__Object.color;
idtype10 = type_array__Arraykernel__Object.id;
if(var_listnode6 == NULL) {
var8 = 0;
} else {
if(cltype9 >= var_listnode6->type->table_size) {
var8 = 0;
} else {
var8 = var_listnode6->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2058);
show_backtrace(1);
}
var11 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode7, var_listnode6) /* concat on <self:ReduceAction10>*/;
var_listnode7 = var11;
var12 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
var13 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var12->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var12, var13, var_listnode4, var_listnode5, var_listnode7) /* init_amodule on <var12:AModule>*/;
var_pmodulenode1 = var12;
var_node_list = var_pmodulenode1;
var14 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction10> */
var15 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var14) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var15, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction10#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction10__action(val* self, val* p0) {
parser__ReduceAction10__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction11#action for (self: ReduceAction11, Parser) */
void parser__ReduceAction11__action(val* self, val* p0) {
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
val* var5 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var6 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : Array[Object] */;
val* var16 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var17 /* : Int */;
long var18 /* : Int */;
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
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
var_listnode5 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
var_listnode7 = var6;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable_parser_nodes__AModuledecl.color;
idtype = type_nullable_parser_nodes__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= var_pmoduledeclnode2->type->table_size) {
var7 = 0;
} else {
var7 = var_pmoduledeclnode2->type->type_table[cltype] == idtype;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2082);
show_backtrace(1);
}
var_listnode3 = var_nodearraylist2;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype9 = type_array__Arraykernel__Object.color;
idtype10 = type_array__Arraykernel__Object.id;
if(var_listnode3 == NULL) {
var8 = 0;
} else {
if(cltype9 >= var_listnode3->type->table_size) {
var8 = 0;
} else {
var8 = var_listnode3->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2084);
show_backtrace(1);
}
var11 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction11>*/;
var_listnode4 = var11;
var_listnode6 = var_nodearraylist3;
/* <var_listnode6:nullable Object> isa Array[Object] */
cltype13 = type_array__Arraykernel__Object.color;
idtype14 = type_array__Arraykernel__Object.id;
if(var_listnode6 == NULL) {
var12 = 0;
} else {
if(cltype13 >= var_listnode6->type->table_size) {
var12 = 0;
} else {
var12 = var_listnode6->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2087);
show_backtrace(1);
}
var15 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode7, var_listnode6) /* concat on <self:ReduceAction11>*/;
var_listnode7 = var15;
var16 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
((void (*)(val*, val*, val*, val*, val*))(var16->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var16, var_pmoduledeclnode2, var_listnode4, var_listnode5, var_listnode7) /* init_amodule on <var16:AModule>*/;
var_pmodulenode1 = var16;
var_node_list = var_pmodulenode1;
var17 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction11> */
var18 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var17) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var18, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction11#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction11__action(val* self, val* p0) {
parser__ReduceAction11__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction12#action for (self: ReduceAction12, Parser) */
void parser__ReduceAction12__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var4 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var5 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var7 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : Array[Object] */;
val* var12 /* : AModule */;
val* var13 /* : null */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var14 /* : Int */;
long var15 /* : Int */;
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
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
var_listnode5 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
var_listnode7 = var5;
var_listnode4 = var_nodearraylist1;
/* <var_listnode4:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode4 == NULL) {
var6 = 0;
} else {
if(cltype >= var_listnode4->type->table_size) {
var6 = 0;
} else {
var6 = var_listnode4->type->type_table[cltype] == idtype;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2110);
show_backtrace(1);
}
var7 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode4) /* concat on <self:ReduceAction12>*/;
var_listnode5 = var7;
var_listnode6 = var_nodearraylist2;
/* <var_listnode6:nullable Object> isa Array[Object] */
cltype9 = type_array__Arraykernel__Object.color;
idtype10 = type_array__Arraykernel__Object.id;
if(var_listnode6 == NULL) {
var8 = 0;
} else {
if(cltype9 >= var_listnode6->type->table_size) {
var8 = 0;
} else {
var8 = var_listnode6->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2113);
show_backtrace(1);
}
var11 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode7, var_listnode6) /* concat on <self:ReduceAction12>*/;
var_listnode7 = var11;
var12 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
var13 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var12->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var12, var13, var_listnode3, var_listnode5, var_listnode7) /* init_amodule on <var12:AModule>*/;
var_pmodulenode1 = var12;
var_node_list = var_pmodulenode1;
var14 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction12> */
var15 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var14) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var15, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction12#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction12__action(val* self, val* p0) {
parser__ReduceAction12__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction13#action for (self: ReduceAction13, Parser) */
void parser__ReduceAction13__action(val* self, val* p0) {
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
val* var5 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var6 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : Array[Object] */;
val* var16 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var17 /* : Int */;
long var18 /* : Int */;
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
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
var_listnode5 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
var_listnode7 = var6;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable_parser_nodes__AModuledecl.color;
idtype = type_nullable_parser_nodes__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= var_pmoduledeclnode2->type->table_size) {
var7 = 0;
} else {
var7 = var_pmoduledeclnode2->type->type_table[cltype] == idtype;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2137);
show_backtrace(1);
}
var_listnode4 = var_nodearraylist2;
/* <var_listnode4:nullable Object> isa Array[Object] */
cltype9 = type_array__Arraykernel__Object.color;
idtype10 = type_array__Arraykernel__Object.id;
if(var_listnode4 == NULL) {
var8 = 0;
} else {
if(cltype9 >= var_listnode4->type->table_size) {
var8 = 0;
} else {
var8 = var_listnode4->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2139);
show_backtrace(1);
}
var11 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode4) /* concat on <self:ReduceAction13>*/;
var_listnode5 = var11;
var_listnode6 = var_nodearraylist3;
/* <var_listnode6:nullable Object> isa Array[Object] */
cltype13 = type_array__Arraykernel__Object.color;
idtype14 = type_array__Arraykernel__Object.id;
if(var_listnode6 == NULL) {
var12 = 0;
} else {
if(cltype13 >= var_listnode6->type->table_size) {
var12 = 0;
} else {
var12 = var_listnode6->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2142);
show_backtrace(1);
}
var15 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode7, var_listnode6) /* concat on <self:ReduceAction13>*/;
var_listnode7 = var15;
var16 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
((void (*)(val*, val*, val*, val*, val*))(var16->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var16, var_pmoduledeclnode2, var_listnode3, var_listnode5, var_listnode7) /* init_amodule on <var16:AModule>*/;
var_pmodulenode1 = var16;
var_node_list = var_pmodulenode1;
var17 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction13> */
var18 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var17) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var18, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction13#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction13__action(val* self, val* p0) {
parser__ReduceAction13__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction14#action for (self: ReduceAction14, Parser) */
void parser__ReduceAction14__action(val* self, val* p0) {
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
val* var5 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var6 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var8 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : Array[Object] */;
val* var17 /* : AModule */;
val* var18 /* : null */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var19 /* : Int */;
long var20 /* : Int */;
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
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
var_listnode6 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
var_listnode8 = var6;
var_listnode3 = var_nodearraylist1;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode3 == NULL) {
var7 = 0;
} else {
if(cltype >= var_listnode3->type->table_size) {
var7 = 0;
} else {
var7 = var_listnode3->type->type_table[cltype] == idtype;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2166);
show_backtrace(1);
}
var8 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction14>*/;
var_listnode4 = var8;
var_listnode5 = var_nodearraylist2;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype10 = type_array__Arraykernel__Object.color;
idtype11 = type_array__Arraykernel__Object.id;
if(var_listnode5 == NULL) {
var9 = 0;
} else {
if(cltype10 >= var_listnode5->type->table_size) {
var9 = 0;
} else {
var9 = var_listnode5->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2169);
show_backtrace(1);
}
var12 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode6, var_listnode5) /* concat on <self:ReduceAction14>*/;
var_listnode6 = var12;
var_listnode7 = var_nodearraylist3;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype14 = type_array__Arraykernel__Object.color;
idtype15 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var13 = 0;
} else {
if(cltype14 >= var_listnode7->type->table_size) {
var13 = 0;
} else {
var13 = var_listnode7->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2172);
show_backtrace(1);
}
var16 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction14>*/;
var_listnode8 = var16;
var17 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
var18 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var17->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var17, var18, var_listnode4, var_listnode6, var_listnode8) /* init_amodule on <var17:AModule>*/;
var_pmodulenode1 = var17;
var_node_list = var_pmodulenode1;
var19 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction14> */
var20 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var19) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var20, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction14#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction14__action(val* self, val* p0) {
parser__ReduceAction14__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction15#action for (self: ReduceAction15, Parser) */
void parser__ReduceAction15__action(val* self, val* p0) {
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
val* var6 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var7 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var20 /* : Array[Object] */;
val* var21 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var22 /* : Int */;
long var23 /* : Int */;
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
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
var_listnode6 = var6;
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
var_listnode8 = var7;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable_parser_nodes__AModuledecl.color;
idtype = type_nullable_parser_nodes__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_pmoduledeclnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_pmoduledeclnode2->type->type_table[cltype] == idtype;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2197);
show_backtrace(1);
}
var_listnode3 = var_nodearraylist2;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype10 = type_array__Arraykernel__Object.color;
idtype11 = type_array__Arraykernel__Object.id;
if(var_listnode3 == NULL) {
var9 = 0;
} else {
if(cltype10 >= var_listnode3->type->table_size) {
var9 = 0;
} else {
var9 = var_listnode3->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2199);
show_backtrace(1);
}
var12 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction15>*/;
var_listnode4 = var12;
var_listnode5 = var_nodearraylist3;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype14 = type_array__Arraykernel__Object.color;
idtype15 = type_array__Arraykernel__Object.id;
if(var_listnode5 == NULL) {
var13 = 0;
} else {
if(cltype14 >= var_listnode5->type->table_size) {
var13 = 0;
} else {
var13 = var_listnode5->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2202);
show_backtrace(1);
}
var16 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode6, var_listnode5) /* concat on <self:ReduceAction15>*/;
var_listnode6 = var16;
var_listnode7 = var_nodearraylist4;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype18 = type_array__Arraykernel__Object.color;
idtype19 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var17 = 0;
} else {
if(cltype18 >= var_listnode7->type->table_size) {
var17 = 0;
} else {
var17 = var_listnode7->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2205);
show_backtrace(1);
}
var20 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction15>*/;
var_listnode8 = var20;
var21 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
((void (*)(val*, val*, val*, val*, val*))(var21->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var21, var_pmoduledeclnode2, var_listnode4, var_listnode6, var_listnode8) /* init_amodule on <var21:AModule>*/;
var_pmodulenode1 = var21;
var_node_list = var_pmodulenode1;
var22 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction15> */
var23 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var22) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var23, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction15#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction15__action(val* self, val* p0) {
parser__ReduceAction15__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction16#action for (self: ReduceAction16, Parser) */
void parser__ReduceAction16__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var3 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var4 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var5 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_listnode6 /* var listnode6: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var7 /* : Array[Object] */;
val* var8 /* : ATopClassdef */;
val* var_pclassdefnode5 /* var pclassdefnode5: nullable ATopClassdef */;
val* var9 /* : null */;
short int var10 /* : Bool */;
val* var11 /* : AModule */;
val* var12 /* : null */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var13 /* : Int */;
long var14 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var2 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var2->class->vft[COLOR_array__Array__init]))(var2) /* init on <var2:Array[Object]>*/;
var_listnode3 = var2;
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var3->class->vft[COLOR_array__Array__init]))(var3) /* init on <var3:Array[Object]>*/;
var_listnode4 = var3;
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
var_listnode8 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
var_listnode7 = var5;
var_listnode6 = var_nodearraylist1;
/* <var_listnode6:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode6 == NULL) {
var6 = 0;
} else {
if(cltype >= var_listnode6->type->table_size) {
var6 = 0;
} else {
var6 = var_listnode6->type->type_table[cltype] == idtype;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2228);
show_backtrace(1);
}
var7 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode7, var_listnode6) /* concat on <self:ReduceAction16>*/;
var_listnode7 = var7;
var8 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var8->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var8, var_listnode7) /* init_atopclassdef on <var8:ATopClassdef>*/;
var_pclassdefnode5 = var8;
var9 = NULL;
if (var_pclassdefnode5 == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (var10){
((void (*)(val*, val*))(var_listnode8->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode8, var_pclassdefnode5) /* add on <var_listnode8:Array[Object]>*/;
} else {
}
var11 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
var12 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var11->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var11, var12, var_listnode3, var_listnode4, var_listnode8) /* init_amodule on <var11:AModule>*/;
var_pmodulenode1 = var11;
var_node_list = var_pmodulenode1;
var13 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction16> */
var14 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var13) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var14, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction16#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction16__action(val* self, val* p0) {
parser__ReduceAction16__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction17#action for (self: ReduceAction17, Parser) */
void parser__ReduceAction17__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var4 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var5 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var7 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_listnode6 /* var listnode6: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : Array[Object] */;
val* var12 /* : ATopClassdef */;
val* var_pclassdefnode5 /* var pclassdefnode5: nullable ATopClassdef */;
val* var13 /* : null */;
short int var14 /* : Bool */;
val* var15 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var16 /* : Int */;
long var17 /* : Int */;
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
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
var_listnode4 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
var_listnode8 = var5;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable_parser_nodes__AModuledecl.color;
idtype = type_nullable_parser_nodes__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= var_pmoduledeclnode2->type->table_size) {
var6 = 0;
} else {
var6 = var_pmoduledeclnode2->type->type_table[cltype] == idtype;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2257);
show_backtrace(1);
}
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
var_listnode7 = var7;
var_listnode6 = var_nodearraylist2;
/* <var_listnode6:nullable Object> isa Array[Object] */
cltype9 = type_array__Arraykernel__Object.color;
idtype10 = type_array__Arraykernel__Object.id;
if(var_listnode6 == NULL) {
var8 = 0;
} else {
if(cltype9 >= var_listnode6->type->table_size) {
var8 = 0;
} else {
var8 = var_listnode6->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2260);
show_backtrace(1);
}
var11 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode7, var_listnode6) /* concat on <self:ReduceAction17>*/;
var_listnode7 = var11;
var12 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var12->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var12, var_listnode7) /* init_atopclassdef on <var12:ATopClassdef>*/;
var_pclassdefnode5 = var12;
var13 = NULL;
if (var_pclassdefnode5 == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (var14){
((void (*)(val*, val*))(var_listnode8->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode8, var_pclassdefnode5) /* add on <var_listnode8:Array[Object]>*/;
} else {
}
var15 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
((void (*)(val*, val*, val*, val*, val*))(var15->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var15, var_pmoduledeclnode2, var_listnode3, var_listnode4, var_listnode8) /* init_amodule on <var15:AModule>*/;
var_pmodulenode1 = var15;
var_node_list = var_pmodulenode1;
var16 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction17> */
var17 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var16) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var17, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction17#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction17__action(val* self, val* p0) {
parser__ReduceAction17__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction18#action for (self: ReduceAction18, Parser) */
void parser__ReduceAction18__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var4 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var5 /* : Array[Object] */;
val* var_listnode9 /* var listnode9: Array[Object] */;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var7 /* : Array[Object] */;
val* var8 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : Array[Object] */;
val* var13 /* : ATopClassdef */;
val* var_pclassdefnode6 /* var pclassdefnode6: nullable ATopClassdef */;
val* var14 /* : null */;
short int var15 /* : Bool */;
val* var16 /* : AModule */;
val* var17 /* : null */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var18 /* : Int */;
long var19 /* : Int */;
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
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
var_listnode5 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
var_listnode9 = var5;
var_listnode3 = var_nodearraylist1;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode3 == NULL) {
var6 = 0;
} else {
if(cltype >= var_listnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_listnode3->type->type_table[cltype] == idtype;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2289);
show_backtrace(1);
}
var7 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction18>*/;
var_listnode4 = var7;
var8 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var8->class->vft[COLOR_array__Array__init]))(var8) /* init on <var8:Array[Object]>*/;
var_listnode8 = var8;
var_listnode7 = var_nodearraylist2;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype10 = type_array__Arraykernel__Object.color;
idtype11 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var9 = 0;
} else {
if(cltype10 >= var_listnode7->type->table_size) {
var9 = 0;
} else {
var9 = var_listnode7->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2293);
show_backtrace(1);
}
var12 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction18>*/;
var_listnode8 = var12;
var13 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var13->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var13, var_listnode8) /* init_atopclassdef on <var13:ATopClassdef>*/;
var_pclassdefnode6 = var13;
var14 = NULL;
if (var_pclassdefnode6 == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (var15){
((void (*)(val*, val*))(var_listnode9->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode9, var_pclassdefnode6) /* add on <var_listnode9:Array[Object]>*/;
} else {
}
var16 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
var17 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var16->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var16, var17, var_listnode4, var_listnode5, var_listnode9) /* init_amodule on <var16:AModule>*/;
var_pmodulenode1 = var16;
var_node_list = var_pmodulenode1;
var18 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction18> */
var19 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var18) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var19, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction18#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction18__action(val* self, val* p0) {
parser__ReduceAction18__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction19#action for (self: ReduceAction19, Parser) */
void parser__ReduceAction19__action(val* self, val* p0) {
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
val* var5 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var6 /* : Array[Object] */;
val* var_listnode9 /* var listnode9: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : Array[Object] */;
val* var12 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : Array[Object] */;
val* var17 /* : ATopClassdef */;
val* var_pclassdefnode6 /* var pclassdefnode6: nullable ATopClassdef */;
val* var18 /* : null */;
short int var19 /* : Bool */;
val* var20 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var21 /* : Int */;
long var22 /* : Int */;
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
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
var_listnode5 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
var_listnode9 = var6;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable_parser_nodes__AModuledecl.color;
idtype = type_nullable_parser_nodes__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= var_pmoduledeclnode2->type->table_size) {
var7 = 0;
} else {
var7 = var_pmoduledeclnode2->type->type_table[cltype] == idtype;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2323);
show_backtrace(1);
}
var_listnode3 = var_nodearraylist2;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype9 = type_array__Arraykernel__Object.color;
idtype10 = type_array__Arraykernel__Object.id;
if(var_listnode3 == NULL) {
var8 = 0;
} else {
if(cltype9 >= var_listnode3->type->table_size) {
var8 = 0;
} else {
var8 = var_listnode3->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2325);
show_backtrace(1);
}
var11 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction19>*/;
var_listnode4 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
var_listnode8 = var12;
var_listnode7 = var_nodearraylist3;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype14 = type_array__Arraykernel__Object.color;
idtype15 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var13 = 0;
} else {
if(cltype14 >= var_listnode7->type->table_size) {
var13 = 0;
} else {
var13 = var_listnode7->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2329);
show_backtrace(1);
}
var16 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction19>*/;
var_listnode8 = var16;
var17 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var17->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var17, var_listnode8) /* init_atopclassdef on <var17:ATopClassdef>*/;
var_pclassdefnode6 = var17;
var18 = NULL;
if (var_pclassdefnode6 == NULL) {
var19 = 0; /* is null */
} else {
var19 = 1; /* arg is null and recv is not */
}
if (var19){
((void (*)(val*, val*))(var_listnode9->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode9, var_pclassdefnode6) /* add on <var_listnode9:Array[Object]>*/;
} else {
}
var20 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
((void (*)(val*, val*, val*, val*, val*))(var20->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var20, var_pmoduledeclnode2, var_listnode4, var_listnode5, var_listnode9) /* init_amodule on <var20:AModule>*/;
var_pmodulenode1 = var20;
var_node_list = var_pmodulenode1;
var21 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction19> */
var22 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var21) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var22, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction19#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction19__action(val* self, val* p0) {
parser__ReduceAction19__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction20#action for (self: ReduceAction20, Parser) */
void parser__ReduceAction20__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var4 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var5 /* : Array[Object] */;
val* var_listnode9 /* var listnode9: Array[Object] */;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var7 /* : Array[Object] */;
val* var8 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : Array[Object] */;
val* var13 /* : ATopClassdef */;
val* var_pclassdefnode6 /* var pclassdefnode6: nullable ATopClassdef */;
val* var14 /* : null */;
short int var15 /* : Bool */;
val* var16 /* : AModule */;
val* var17 /* : null */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var18 /* : Int */;
long var19 /* : Int */;
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
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
var_listnode5 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
var_listnode9 = var5;
var_listnode4 = var_nodearraylist1;
/* <var_listnode4:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode4 == NULL) {
var6 = 0;
} else {
if(cltype >= var_listnode4->type->table_size) {
var6 = 0;
} else {
var6 = var_listnode4->type->type_table[cltype] == idtype;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2358);
show_backtrace(1);
}
var7 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode4) /* concat on <self:ReduceAction20>*/;
var_listnode5 = var7;
var8 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var8->class->vft[COLOR_array__Array__init]))(var8) /* init on <var8:Array[Object]>*/;
var_listnode8 = var8;
var_listnode7 = var_nodearraylist2;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype10 = type_array__Arraykernel__Object.color;
idtype11 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var9 = 0;
} else {
if(cltype10 >= var_listnode7->type->table_size) {
var9 = 0;
} else {
var9 = var_listnode7->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2362);
show_backtrace(1);
}
var12 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction20>*/;
var_listnode8 = var12;
var13 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var13->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var13, var_listnode8) /* init_atopclassdef on <var13:ATopClassdef>*/;
var_pclassdefnode6 = var13;
var14 = NULL;
if (var_pclassdefnode6 == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (var15){
((void (*)(val*, val*))(var_listnode9->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode9, var_pclassdefnode6) /* add on <var_listnode9:Array[Object]>*/;
} else {
}
var16 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
var17 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var16->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var16, var17, var_listnode3, var_listnode5, var_listnode9) /* init_amodule on <var16:AModule>*/;
var_pmodulenode1 = var16;
var_node_list = var_pmodulenode1;
var18 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction20> */
var19 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var18) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var19, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction20#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction20__action(val* self, val* p0) {
parser__ReduceAction20__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction21#action for (self: ReduceAction21, Parser) */
void parser__ReduceAction21__action(val* self, val* p0) {
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
val* var5 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var6 /* : Array[Object] */;
val* var_listnode9 /* var listnode9: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : Array[Object] */;
val* var12 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : Array[Object] */;
val* var17 /* : ATopClassdef */;
val* var_pclassdefnode6 /* var pclassdefnode6: nullable ATopClassdef */;
val* var18 /* : null */;
short int var19 /* : Bool */;
val* var20 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var21 /* : Int */;
long var22 /* : Int */;
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
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
var_listnode5 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
var_listnode9 = var6;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable_parser_nodes__AModuledecl.color;
idtype = type_nullable_parser_nodes__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= var_pmoduledeclnode2->type->table_size) {
var7 = 0;
} else {
var7 = var_pmoduledeclnode2->type->type_table[cltype] == idtype;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2392);
show_backtrace(1);
}
var_listnode4 = var_nodearraylist2;
/* <var_listnode4:nullable Object> isa Array[Object] */
cltype9 = type_array__Arraykernel__Object.color;
idtype10 = type_array__Arraykernel__Object.id;
if(var_listnode4 == NULL) {
var8 = 0;
} else {
if(cltype9 >= var_listnode4->type->table_size) {
var8 = 0;
} else {
var8 = var_listnode4->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2394);
show_backtrace(1);
}
var11 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode4) /* concat on <self:ReduceAction21>*/;
var_listnode5 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
var_listnode8 = var12;
var_listnode7 = var_nodearraylist3;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype14 = type_array__Arraykernel__Object.color;
idtype15 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var13 = 0;
} else {
if(cltype14 >= var_listnode7->type->table_size) {
var13 = 0;
} else {
var13 = var_listnode7->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2398);
show_backtrace(1);
}
var16 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction21>*/;
var_listnode8 = var16;
var17 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var17->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var17, var_listnode8) /* init_atopclassdef on <var17:ATopClassdef>*/;
var_pclassdefnode6 = var17;
var18 = NULL;
if (var_pclassdefnode6 == NULL) {
var19 = 0; /* is null */
} else {
var19 = 1; /* arg is null and recv is not */
}
if (var19){
((void (*)(val*, val*))(var_listnode9->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode9, var_pclassdefnode6) /* add on <var_listnode9:Array[Object]>*/;
} else {
}
var20 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
((void (*)(val*, val*, val*, val*, val*))(var20->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var20, var_pmoduledeclnode2, var_listnode3, var_listnode5, var_listnode9) /* init_amodule on <var20:AModule>*/;
var_pmodulenode1 = var20;
var_node_list = var_pmodulenode1;
var21 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction21> */
var22 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var21) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var22, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction21#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction21__action(val* self, val* p0) {
parser__ReduceAction21__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction22#action for (self: ReduceAction22, Parser) */
void parser__ReduceAction22__action(val* self, val* p0) {
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
val* var5 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var6 /* : Array[Object] */;
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var8 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode9 /* var listnode9: Array[Object] */;
val* var_listnode8 /* var listnode8: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : Array[Object] */;
val* var18 /* : ATopClassdef */;
val* var_pclassdefnode7 /* var pclassdefnode7: nullable ATopClassdef */;
val* var19 /* : null */;
short int var20 /* : Bool */;
val* var21 /* : AModule */;
val* var22 /* : null */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var23 /* : Int */;
long var24 /* : Int */;
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
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
var_listnode6 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
var_listnode10 = var6;
var_listnode3 = var_nodearraylist1;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode3 == NULL) {
var7 = 0;
} else {
if(cltype >= var_listnode3->type->table_size) {
var7 = 0;
} else {
var7 = var_listnode3->type->type_table[cltype] == idtype;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2428);
show_backtrace(1);
}
var8 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction22>*/;
var_listnode4 = var8;
var_listnode5 = var_nodearraylist2;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype10 = type_array__Arraykernel__Object.color;
idtype11 = type_array__Arraykernel__Object.id;
if(var_listnode5 == NULL) {
var9 = 0;
} else {
if(cltype10 >= var_listnode5->type->table_size) {
var9 = 0;
} else {
var9 = var_listnode5->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2431);
show_backtrace(1);
}
var12 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode6, var_listnode5) /* concat on <self:ReduceAction22>*/;
var_listnode6 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
var_listnode9 = var13;
var_listnode8 = var_nodearraylist3;
/* <var_listnode8:nullable Object> isa Array[Object] */
cltype15 = type_array__Arraykernel__Object.color;
idtype16 = type_array__Arraykernel__Object.id;
if(var_listnode8 == NULL) {
var14 = 0;
} else {
if(cltype15 >= var_listnode8->type->table_size) {
var14 = 0;
} else {
var14 = var_listnode8->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2435);
show_backtrace(1);
}
var17 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode9, var_listnode8) /* concat on <self:ReduceAction22>*/;
var_listnode9 = var17;
var18 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var18->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var18, var_listnode9) /* init_atopclassdef on <var18:ATopClassdef>*/;
var_pclassdefnode7 = var18;
var19 = NULL;
if (var_pclassdefnode7 == NULL) {
var20 = 0; /* is null */
} else {
var20 = 1; /* arg is null and recv is not */
}
if (var20){
((void (*)(val*, val*))(var_listnode10->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode10, var_pclassdefnode7) /* add on <var_listnode10:Array[Object]>*/;
} else {
}
var21 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
var22 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var21->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var21, var22, var_listnode4, var_listnode6, var_listnode10) /* init_amodule on <var21:AModule>*/;
var_pmodulenode1 = var21;
var_node_list = var_pmodulenode1;
var23 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction22> */
var24 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var23) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var24, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction22#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction22__action(val* self, val* p0) {
parser__ReduceAction22__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction23#action for (self: ReduceAction23, Parser) */
void parser__ReduceAction23__action(val* self, val* p0) {
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
val* var6 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var7 /* : Array[Object] */;
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : Array[Object] */;
val* var17 /* : Array[Object] */;
val* var_listnode9 /* var listnode9: Array[Object] */;
val* var_listnode8 /* var listnode8: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : Array[Object] */;
val* var22 /* : ATopClassdef */;
val* var_pclassdefnode7 /* var pclassdefnode7: nullable ATopClassdef */;
val* var23 /* : null */;
short int var24 /* : Bool */;
val* var25 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var26 /* : Int */;
long var27 /* : Int */;
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
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
var_listnode6 = var6;
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
var_listnode10 = var7;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable_parser_nodes__AModuledecl.color;
idtype = type_nullable_parser_nodes__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_pmoduledeclnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_pmoduledeclnode2->type->type_table[cltype] == idtype;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2466);
show_backtrace(1);
}
var_listnode3 = var_nodearraylist2;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype10 = type_array__Arraykernel__Object.color;
idtype11 = type_array__Arraykernel__Object.id;
if(var_listnode3 == NULL) {
var9 = 0;
} else {
if(cltype10 >= var_listnode3->type->table_size) {
var9 = 0;
} else {
var9 = var_listnode3->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2468);
show_backtrace(1);
}
var12 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction23>*/;
var_listnode4 = var12;
var_listnode5 = var_nodearraylist3;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype14 = type_array__Arraykernel__Object.color;
idtype15 = type_array__Arraykernel__Object.id;
if(var_listnode5 == NULL) {
var13 = 0;
} else {
if(cltype14 >= var_listnode5->type->table_size) {
var13 = 0;
} else {
var13 = var_listnode5->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2471);
show_backtrace(1);
}
var16 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode6, var_listnode5) /* concat on <self:ReduceAction23>*/;
var_listnode6 = var16;
var17 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var17->class->vft[COLOR_array__Array__init]))(var17) /* init on <var17:Array[Object]>*/;
var_listnode9 = var17;
var_listnode8 = var_nodearraylist4;
/* <var_listnode8:nullable Object> isa Array[Object] */
cltype19 = type_array__Arraykernel__Object.color;
idtype20 = type_array__Arraykernel__Object.id;
if(var_listnode8 == NULL) {
var18 = 0;
} else {
if(cltype19 >= var_listnode8->type->table_size) {
var18 = 0;
} else {
var18 = var_listnode8->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2475);
show_backtrace(1);
}
var21 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode9, var_listnode8) /* concat on <self:ReduceAction23>*/;
var_listnode9 = var21;
var22 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var22->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var22, var_listnode9) /* init_atopclassdef on <var22:ATopClassdef>*/;
var_pclassdefnode7 = var22;
var23 = NULL;
if (var_pclassdefnode7 == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (var24){
((void (*)(val*, val*))(var_listnode10->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode10, var_pclassdefnode7) /* add on <var_listnode10:Array[Object]>*/;
} else {
}
var25 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
((void (*)(val*, val*, val*, val*, val*))(var25->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var25, var_pmoduledeclnode2, var_listnode4, var_listnode6, var_listnode10) /* init_amodule on <var25:AModule>*/;
var_pmodulenode1 = var25;
var_node_list = var_pmodulenode1;
var26 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction23> */
var27 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var26) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var27, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction23#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction23__action(val* self, val* p0) {
parser__ReduceAction23__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction24#action for (self: ReduceAction24, Parser) */
void parser__ReduceAction24__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var4 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var5 /* : Array[Object] */;
val* var_listnode9 /* var listnode9: Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var7 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : Array[Object] */;
val* var12 /* : ATopClassdef */;
val* var_pclassdefnode6 /* var pclassdefnode6: nullable ATopClassdef */;
val* var13 /* : Array[Object] */;
val* var14 /* : null */;
short int var15 /* : Bool */;
val* var16 /* : AModule */;
val* var17 /* : null */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var18 /* : Int */;
long var19 /* : Int */;
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
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
var_listnode4 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
var_listnode9 = var5;
var_listnode5 = var_nodearraylist1;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode5 == NULL) {
var6 = 0;
} else {
if(cltype >= var_listnode5->type->table_size) {
var6 = 0;
} else {
var6 = var_listnode5->type->type_table[cltype] == idtype;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2504);
show_backtrace(1);
}
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
var_listnode8 = var7;
var_listnode7 = var_nodearraylist2;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype9 = type_array__Arraykernel__Object.color;
idtype10 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var8 = 0;
} else {
if(cltype9 >= var_listnode7->type->table_size) {
var8 = 0;
} else {
var8 = var_listnode7->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2507);
show_backtrace(1);
}
var11 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction24>*/;
var_listnode8 = var11;
var12 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var12->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var12, var_listnode8) /* init_atopclassdef on <var12:ATopClassdef>*/;
var_pclassdefnode6 = var12;
var13 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode9, var_listnode5) /* concat on <self:ReduceAction24>*/;
var_listnode9 = var13;
var14 = NULL;
if (var_pclassdefnode6 == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (var15){
((void (*)(val*, val*))(var_listnode9->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode9, var_pclassdefnode6) /* add on <var_listnode9:Array[Object]>*/;
} else {
}
var16 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
var17 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var16->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var16, var17, var_listnode3, var_listnode4, var_listnode9) /* init_amodule on <var16:AModule>*/;
var_pmodulenode1 = var16;
var_node_list = var_pmodulenode1;
var18 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction24> */
var19 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var18) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var19, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction24#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction24__action(val* self, val* p0) {
parser__ReduceAction24__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction25#action for (self: ReduceAction25, Parser) */
void parser__ReduceAction25__action(val* self, val* p0) {
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
val* var5 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var6 /* : Array[Object] */;
val* var_listnode9 /* var listnode9: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : Array[Object] */;
val* var16 /* : ATopClassdef */;
val* var_pclassdefnode6 /* var pclassdefnode6: nullable ATopClassdef */;
val* var17 /* : Array[Object] */;
val* var18 /* : null */;
short int var19 /* : Bool */;
val* var20 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var21 /* : Int */;
long var22 /* : Int */;
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
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
var_listnode4 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
var_listnode9 = var6;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable_parser_nodes__AModuledecl.color;
idtype = type_nullable_parser_nodes__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= var_pmoduledeclnode2->type->table_size) {
var7 = 0;
} else {
var7 = var_pmoduledeclnode2->type->type_table[cltype] == idtype;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2538);
show_backtrace(1);
}
var_listnode5 = var_nodearraylist2;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype9 = type_array__Arraykernel__Object.color;
idtype10 = type_array__Arraykernel__Object.id;
if(var_listnode5 == NULL) {
var8 = 0;
} else {
if(cltype9 >= var_listnode5->type->table_size) {
var8 = 0;
} else {
var8 = var_listnode5->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2540);
show_backtrace(1);
}
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var11->class->vft[COLOR_array__Array__init]))(var11) /* init on <var11:Array[Object]>*/;
var_listnode8 = var11;
var_listnode7 = var_nodearraylist3;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype13 = type_array__Arraykernel__Object.color;
idtype14 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var12 = 0;
} else {
if(cltype13 >= var_listnode7->type->table_size) {
var12 = 0;
} else {
var12 = var_listnode7->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2543);
show_backtrace(1);
}
var15 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction25>*/;
var_listnode8 = var15;
var16 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var16->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var16, var_listnode8) /* init_atopclassdef on <var16:ATopClassdef>*/;
var_pclassdefnode6 = var16;
var17 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode9, var_listnode5) /* concat on <self:ReduceAction25>*/;
var_listnode9 = var17;
var18 = NULL;
if (var_pclassdefnode6 == NULL) {
var19 = 0; /* is null */
} else {
var19 = 1; /* arg is null and recv is not */
}
if (var19){
((void (*)(val*, val*))(var_listnode9->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode9, var_pclassdefnode6) /* add on <var_listnode9:Array[Object]>*/;
} else {
}
var20 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
((void (*)(val*, val*, val*, val*, val*))(var20->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var20, var_pmoduledeclnode2, var_listnode3, var_listnode4, var_listnode9) /* init_amodule on <var20:AModule>*/;
var_pmodulenode1 = var20;
var_node_list = var_pmodulenode1;
var21 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction25> */
var22 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var21) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var22, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction25#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction25__action(val* self, val* p0) {
parser__ReduceAction25__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction26#action for (self: ReduceAction26, Parser) */
void parser__ReduceAction26__action(val* self, val* p0) {
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
val* var5 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var6 /* : Array[Object] */;
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var8 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : Array[Object] */;
val* var_listnode9 /* var listnode9: Array[Object] */;
val* var_listnode8 /* var listnode8: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : Array[Object] */;
val* var17 /* : ATopClassdef */;
val* var_pclassdefnode7 /* var pclassdefnode7: nullable ATopClassdef */;
val* var18 /* : Array[Object] */;
val* var19 /* : null */;
short int var20 /* : Bool */;
val* var21 /* : AModule */;
val* var22 /* : null */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var23 /* : Int */;
long var24 /* : Int */;
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
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
var_listnode5 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
var_listnode10 = var6;
var_listnode3 = var_nodearraylist1;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode3 == NULL) {
var7 = 0;
} else {
if(cltype >= var_listnode3->type->table_size) {
var7 = 0;
} else {
var7 = var_listnode3->type->type_table[cltype] == idtype;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2574);
show_backtrace(1);
}
var8 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction26>*/;
var_listnode4 = var8;
var_listnode6 = var_nodearraylist2;
/* <var_listnode6:nullable Object> isa Array[Object] */
cltype10 = type_array__Arraykernel__Object.color;
idtype11 = type_array__Arraykernel__Object.id;
if(var_listnode6 == NULL) {
var9 = 0;
} else {
if(cltype10 >= var_listnode6->type->table_size) {
var9 = 0;
} else {
var9 = var_listnode6->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2577);
show_backtrace(1);
}
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
var_listnode9 = var12;
var_listnode8 = var_nodearraylist3;
/* <var_listnode8:nullable Object> isa Array[Object] */
cltype14 = type_array__Arraykernel__Object.color;
idtype15 = type_array__Arraykernel__Object.id;
if(var_listnode8 == NULL) {
var13 = 0;
} else {
if(cltype14 >= var_listnode8->type->table_size) {
var13 = 0;
} else {
var13 = var_listnode8->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2580);
show_backtrace(1);
}
var16 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode9, var_listnode8) /* concat on <self:ReduceAction26>*/;
var_listnode9 = var16;
var17 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var17->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var17, var_listnode9) /* init_atopclassdef on <var17:ATopClassdef>*/;
var_pclassdefnode7 = var17;
var18 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode10, var_listnode6) /* concat on <self:ReduceAction26>*/;
var_listnode10 = var18;
var19 = NULL;
if (var_pclassdefnode7 == NULL) {
var20 = 0; /* is null */
} else {
var20 = 1; /* arg is null and recv is not */
}
if (var20){
((void (*)(val*, val*))(var_listnode10->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode10, var_pclassdefnode7) /* add on <var_listnode10:Array[Object]>*/;
} else {
}
var21 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
var22 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var21->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var21, var22, var_listnode4, var_listnode5, var_listnode10) /* init_amodule on <var21:AModule>*/;
var_pmodulenode1 = var21;
var_node_list = var_pmodulenode1;
var23 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction26> */
var24 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var23) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var24, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction26#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction26__action(val* self, val* p0) {
parser__ReduceAction26__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction27#action for (self: ReduceAction27, Parser) */
void parser__ReduceAction27__action(val* self, val* p0) {
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
val* var6 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var7 /* : Array[Object] */;
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : Array[Object] */;
val* var_listnode9 /* var listnode9: Array[Object] */;
val* var_listnode8 /* var listnode8: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var20 /* : Array[Object] */;
val* var21 /* : ATopClassdef */;
val* var_pclassdefnode7 /* var pclassdefnode7: nullable ATopClassdef */;
val* var22 /* : Array[Object] */;
val* var23 /* : null */;
short int var24 /* : Bool */;
val* var25 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var26 /* : Int */;
long var27 /* : Int */;
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
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
var_listnode5 = var6;
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
var_listnode10 = var7;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable_parser_nodes__AModuledecl.color;
idtype = type_nullable_parser_nodes__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_pmoduledeclnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_pmoduledeclnode2->type->type_table[cltype] == idtype;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2612);
show_backtrace(1);
}
var_listnode3 = var_nodearraylist2;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype10 = type_array__Arraykernel__Object.color;
idtype11 = type_array__Arraykernel__Object.id;
if(var_listnode3 == NULL) {
var9 = 0;
} else {
if(cltype10 >= var_listnode3->type->table_size) {
var9 = 0;
} else {
var9 = var_listnode3->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2614);
show_backtrace(1);
}
var12 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction27>*/;
var_listnode4 = var12;
var_listnode6 = var_nodearraylist3;
/* <var_listnode6:nullable Object> isa Array[Object] */
cltype14 = type_array__Arraykernel__Object.color;
idtype15 = type_array__Arraykernel__Object.id;
if(var_listnode6 == NULL) {
var13 = 0;
} else {
if(cltype14 >= var_listnode6->type->table_size) {
var13 = 0;
} else {
var13 = var_listnode6->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2617);
show_backtrace(1);
}
var16 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var16->class->vft[COLOR_array__Array__init]))(var16) /* init on <var16:Array[Object]>*/;
var_listnode9 = var16;
var_listnode8 = var_nodearraylist4;
/* <var_listnode8:nullable Object> isa Array[Object] */
cltype18 = type_array__Arraykernel__Object.color;
idtype19 = type_array__Arraykernel__Object.id;
if(var_listnode8 == NULL) {
var17 = 0;
} else {
if(cltype18 >= var_listnode8->type->table_size) {
var17 = 0;
} else {
var17 = var_listnode8->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2620);
show_backtrace(1);
}
var20 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode9, var_listnode8) /* concat on <self:ReduceAction27>*/;
var_listnode9 = var20;
var21 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var21->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var21, var_listnode9) /* init_atopclassdef on <var21:ATopClassdef>*/;
var_pclassdefnode7 = var21;
var22 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode10, var_listnode6) /* concat on <self:ReduceAction27>*/;
var_listnode10 = var22;
var23 = NULL;
if (var_pclassdefnode7 == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (var24){
((void (*)(val*, val*))(var_listnode10->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode10, var_pclassdefnode7) /* add on <var_listnode10:Array[Object]>*/;
} else {
}
var25 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
((void (*)(val*, val*, val*, val*, val*))(var25->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var25, var_pmoduledeclnode2, var_listnode4, var_listnode5, var_listnode10) /* init_amodule on <var25:AModule>*/;
var_pmodulenode1 = var25;
var_node_list = var_pmodulenode1;
var26 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction27> */
var27 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var26) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var27, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction27#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction27__action(val* self, val* p0) {
parser__ReduceAction27__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction28#action for (self: ReduceAction28, Parser) */
void parser__ReduceAction28__action(val* self, val* p0) {
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
val* var5 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var6 /* : Array[Object] */;
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var8 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : Array[Object] */;
val* var_listnode9 /* var listnode9: Array[Object] */;
val* var_listnode8 /* var listnode8: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : Array[Object] */;
val* var17 /* : ATopClassdef */;
val* var_pclassdefnode7 /* var pclassdefnode7: nullable ATopClassdef */;
val* var18 /* : Array[Object] */;
val* var19 /* : null */;
short int var20 /* : Bool */;
val* var21 /* : AModule */;
val* var22 /* : null */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var23 /* : Int */;
long var24 /* : Int */;
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
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
var_listnode5 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
var_listnode10 = var6;
var_listnode4 = var_nodearraylist1;
/* <var_listnode4:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode4 == NULL) {
var7 = 0;
} else {
if(cltype >= var_listnode4->type->table_size) {
var7 = 0;
} else {
var7 = var_listnode4->type->type_table[cltype] == idtype;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2651);
show_backtrace(1);
}
var8 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode4) /* concat on <self:ReduceAction28>*/;
var_listnode5 = var8;
var_listnode6 = var_nodearraylist2;
/* <var_listnode6:nullable Object> isa Array[Object] */
cltype10 = type_array__Arraykernel__Object.color;
idtype11 = type_array__Arraykernel__Object.id;
if(var_listnode6 == NULL) {
var9 = 0;
} else {
if(cltype10 >= var_listnode6->type->table_size) {
var9 = 0;
} else {
var9 = var_listnode6->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2654);
show_backtrace(1);
}
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
var_listnode9 = var12;
var_listnode8 = var_nodearraylist3;
/* <var_listnode8:nullable Object> isa Array[Object] */
cltype14 = type_array__Arraykernel__Object.color;
idtype15 = type_array__Arraykernel__Object.id;
if(var_listnode8 == NULL) {
var13 = 0;
} else {
if(cltype14 >= var_listnode8->type->table_size) {
var13 = 0;
} else {
var13 = var_listnode8->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2657);
show_backtrace(1);
}
var16 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode9, var_listnode8) /* concat on <self:ReduceAction28>*/;
var_listnode9 = var16;
var17 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var17->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var17, var_listnode9) /* init_atopclassdef on <var17:ATopClassdef>*/;
var_pclassdefnode7 = var17;
var18 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode10, var_listnode6) /* concat on <self:ReduceAction28>*/;
var_listnode10 = var18;
var19 = NULL;
if (var_pclassdefnode7 == NULL) {
var20 = 0; /* is null */
} else {
var20 = 1; /* arg is null and recv is not */
}
if (var20){
((void (*)(val*, val*))(var_listnode10->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode10, var_pclassdefnode7) /* add on <var_listnode10:Array[Object]>*/;
} else {
}
var21 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
var22 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var21->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var21, var22, var_listnode3, var_listnode5, var_listnode10) /* init_amodule on <var21:AModule>*/;
var_pmodulenode1 = var21;
var_node_list = var_pmodulenode1;
var23 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction28> */
var24 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var23) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var24, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction28#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction28__action(val* self, val* p0) {
parser__ReduceAction28__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction29#action for (self: ReduceAction29, Parser) */
void parser__ReduceAction29__action(val* self, val* p0) {
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
val* var6 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var7 /* : Array[Object] */;
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : Array[Object] */;
val* var_listnode9 /* var listnode9: Array[Object] */;
val* var_listnode8 /* var listnode8: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var20 /* : Array[Object] */;
val* var21 /* : ATopClassdef */;
val* var_pclassdefnode7 /* var pclassdefnode7: nullable ATopClassdef */;
val* var22 /* : Array[Object] */;
val* var23 /* : null */;
short int var24 /* : Bool */;
val* var25 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var26 /* : Int */;
long var27 /* : Int */;
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
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
var_listnode5 = var6;
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
var_listnode10 = var7;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable_parser_nodes__AModuledecl.color;
idtype = type_nullable_parser_nodes__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_pmoduledeclnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_pmoduledeclnode2->type->type_table[cltype] == idtype;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2689);
show_backtrace(1);
}
var_listnode4 = var_nodearraylist2;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2691);
show_backtrace(1);
}
var12 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode4) /* concat on <self:ReduceAction29>*/;
var_listnode5 = var12;
var_listnode6 = var_nodearraylist3;
/* <var_listnode6:nullable Object> isa Array[Object] */
cltype14 = type_array__Arraykernel__Object.color;
idtype15 = type_array__Arraykernel__Object.id;
if(var_listnode6 == NULL) {
var13 = 0;
} else {
if(cltype14 >= var_listnode6->type->table_size) {
var13 = 0;
} else {
var13 = var_listnode6->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2694);
show_backtrace(1);
}
var16 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var16->class->vft[COLOR_array__Array__init]))(var16) /* init on <var16:Array[Object]>*/;
var_listnode9 = var16;
var_listnode8 = var_nodearraylist4;
/* <var_listnode8:nullable Object> isa Array[Object] */
cltype18 = type_array__Arraykernel__Object.color;
idtype19 = type_array__Arraykernel__Object.id;
if(var_listnode8 == NULL) {
var17 = 0;
} else {
if(cltype18 >= var_listnode8->type->table_size) {
var17 = 0;
} else {
var17 = var_listnode8->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2697);
show_backtrace(1);
}
var20 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode9, var_listnode8) /* concat on <self:ReduceAction29>*/;
var_listnode9 = var20;
var21 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var21->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var21, var_listnode9) /* init_atopclassdef on <var21:ATopClassdef>*/;
var_pclassdefnode7 = var21;
var22 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode10, var_listnode6) /* concat on <self:ReduceAction29>*/;
var_listnode10 = var22;
var23 = NULL;
if (var_pclassdefnode7 == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (var24){
((void (*)(val*, val*))(var_listnode10->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode10, var_pclassdefnode7) /* add on <var_listnode10:Array[Object]>*/;
} else {
}
var25 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
((void (*)(val*, val*, val*, val*, val*))(var25->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var25, var_pmoduledeclnode2, var_listnode3, var_listnode5, var_listnode10) /* init_amodule on <var25:AModule>*/;
var_pmodulenode1 = var25;
var_node_list = var_pmodulenode1;
var26 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction29> */
var27 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var26) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var27, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction29#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction29__action(val* self, val* p0) {
parser__ReduceAction29__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction30#action for (self: ReduceAction30, Parser) */
void parser__ReduceAction30__action(val* self, val* p0) {
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
val* var6 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var7 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: Array[Object] */;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var9 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : Array[Object] */;
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var_listnode9 /* var listnode9: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : Array[Object] */;
val* var22 /* : ATopClassdef */;
val* var_pclassdefnode8 /* var pclassdefnode8: nullable ATopClassdef */;
val* var23 /* : Array[Object] */;
val* var24 /* : null */;
short int var25 /* : Bool */;
val* var26 /* : AModule */;
val* var27 /* : null */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var28 /* : Int */;
long var29 /* : Int */;
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
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
var_listnode6 = var6;
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
var_listnode11 = var7;
var_listnode3 = var_nodearraylist1;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode3 == NULL) {
var8 = 0;
} else {
if(cltype >= var_listnode3->type->table_size) {
var8 = 0;
} else {
var8 = var_listnode3->type->type_table[cltype] == idtype;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2729);
show_backtrace(1);
}
var9 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction30>*/;
var_listnode4 = var9;
var_listnode5 = var_nodearraylist2;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype11 = type_array__Arraykernel__Object.color;
idtype12 = type_array__Arraykernel__Object.id;
if(var_listnode5 == NULL) {
var10 = 0;
} else {
if(cltype11 >= var_listnode5->type->table_size) {
var10 = 0;
} else {
var10 = var_listnode5->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2732);
show_backtrace(1);
}
var13 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode6, var_listnode5) /* concat on <self:ReduceAction30>*/;
var_listnode6 = var13;
var_listnode7 = var_nodearraylist3;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype15 = type_array__Arraykernel__Object.color;
idtype16 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var14 = 0;
} else {
if(cltype15 >= var_listnode7->type->table_size) {
var14 = 0;
} else {
var14 = var_listnode7->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2735);
show_backtrace(1);
}
var17 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var17->class->vft[COLOR_array__Array__init]))(var17) /* init on <var17:Array[Object]>*/;
var_listnode10 = var17;
var_listnode9 = var_nodearraylist4;
/* <var_listnode9:nullable Object> isa Array[Object] */
cltype19 = type_array__Arraykernel__Object.color;
idtype20 = type_array__Arraykernel__Object.id;
if(var_listnode9 == NULL) {
var18 = 0;
} else {
if(cltype19 >= var_listnode9->type->table_size) {
var18 = 0;
} else {
var18 = var_listnode9->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2738);
show_backtrace(1);
}
var21 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode10, var_listnode9) /* concat on <self:ReduceAction30>*/;
var_listnode10 = var21;
var22 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var22->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var22, var_listnode10) /* init_atopclassdef on <var22:ATopClassdef>*/;
var_pclassdefnode8 = var22;
var23 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode11, var_listnode7) /* concat on <self:ReduceAction30>*/;
var_listnode11 = var23;
var24 = NULL;
if (var_pclassdefnode8 == NULL) {
var25 = 0; /* is null */
} else {
var25 = 1; /* arg is null and recv is not */
}
if (var25){
((void (*)(val*, val*))(var_listnode11->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode11, var_pclassdefnode8) /* add on <var_listnode11:Array[Object]>*/;
} else {
}
var26 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
var27 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var26->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var26, var27, var_listnode4, var_listnode6, var_listnode11) /* init_amodule on <var26:AModule>*/;
var_pmodulenode1 = var26;
var_node_list = var_pmodulenode1;
var28 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction30> */
var29 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var28) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var29, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction30#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction30__action(val* self, val* p0) {
parser__ReduceAction30__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction31#action for (self: ReduceAction31, Parser) */
void parser__ReduceAction31__action(val* self, val* p0) {
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
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var7 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var8 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : Array[Object] */;
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var_listnode9 /* var listnode9: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var25 /* : Array[Object] */;
val* var26 /* : ATopClassdef */;
val* var_pclassdefnode8 /* var pclassdefnode8: nullable ATopClassdef */;
val* var27 /* : Array[Object] */;
val* var28 /* : null */;
short int var29 /* : Bool */;
val* var30 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var31 /* : Int */;
long var32 /* : Int */;
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
var_listnode4 = var6;
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
var_listnode6 = var7;
var8 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var8->class->vft[COLOR_array__Array__init]))(var8) /* init on <var8:Array[Object]>*/;
var_listnode11 = var8;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable_parser_nodes__AModuledecl.color;
idtype = type_nullable_parser_nodes__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= var_pmoduledeclnode2->type->table_size) {
var9 = 0;
} else {
var9 = var_pmoduledeclnode2->type->type_table[cltype] == idtype;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2771);
show_backtrace(1);
}
var_listnode3 = var_nodearraylist2;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype11 = type_array__Arraykernel__Object.color;
idtype12 = type_array__Arraykernel__Object.id;
if(var_listnode3 == NULL) {
var10 = 0;
} else {
if(cltype11 >= var_listnode3->type->table_size) {
var10 = 0;
} else {
var10 = var_listnode3->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2773);
show_backtrace(1);
}
var13 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction31>*/;
var_listnode4 = var13;
var_listnode5 = var_nodearraylist3;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype15 = type_array__Arraykernel__Object.color;
idtype16 = type_array__Arraykernel__Object.id;
if(var_listnode5 == NULL) {
var14 = 0;
} else {
if(cltype15 >= var_listnode5->type->table_size) {
var14 = 0;
} else {
var14 = var_listnode5->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2776);
show_backtrace(1);
}
var17 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode6, var_listnode5) /* concat on <self:ReduceAction31>*/;
var_listnode6 = var17;
var_listnode7 = var_nodearraylist4;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype19 = type_array__Arraykernel__Object.color;
idtype20 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var18 = 0;
} else {
if(cltype19 >= var_listnode7->type->table_size) {
var18 = 0;
} else {
var18 = var_listnode7->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2779);
show_backtrace(1);
}
var21 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var21->class->vft[COLOR_array__Array__init]))(var21) /* init on <var21:Array[Object]>*/;
var_listnode10 = var21;
var_listnode9 = var_nodearraylist5;
/* <var_listnode9:nullable Object> isa Array[Object] */
cltype23 = type_array__Arraykernel__Object.color;
idtype24 = type_array__Arraykernel__Object.id;
if(var_listnode9 == NULL) {
var22 = 0;
} else {
if(cltype23 >= var_listnode9->type->table_size) {
var22 = 0;
} else {
var22 = var_listnode9->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2782);
show_backtrace(1);
}
var25 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode10, var_listnode9) /* concat on <self:ReduceAction31>*/;
var_listnode10 = var25;
var26 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var26->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var26, var_listnode10) /* init_atopclassdef on <var26:ATopClassdef>*/;
var_pclassdefnode8 = var26;
var27 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode11, var_listnode7) /* concat on <self:ReduceAction31>*/;
var_listnode11 = var27;
var28 = NULL;
if (var_pclassdefnode8 == NULL) {
var29 = 0; /* is null */
} else {
var29 = 1; /* arg is null and recv is not */
}
if (var29){
((void (*)(val*, val*))(var_listnode11->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode11, var_pclassdefnode8) /* add on <var_listnode11:Array[Object]>*/;
} else {
}
var30 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
((void (*)(val*, val*, val*, val*, val*))(var30->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var30, var_pmoduledeclnode2, var_listnode4, var_listnode6, var_listnode11) /* init_amodule on <var30:AModule>*/;
var_pmodulenode1 = var30;
var_node_list = var_pmodulenode1;
var31 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction31> */
var32 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var31) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var32, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction31#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction31__action(val* self, val* p0) {
parser__ReduceAction31__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction32#action for (self: ReduceAction32, Parser) */
void parser__ReduceAction32__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var3 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var4 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_pclassdefnode5 /* var pclassdefnode5: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var6 /* : null */;
short int var7 /* : Bool */;
val* var8 /* : AModule */;
val* var9 /* : null */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var10 /* : Int */;
long var11 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var2 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var2->class->vft[COLOR_array__Array__init]))(var2) /* init on <var2:Array[Object]>*/;
var_listnode3 = var2;
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var3->class->vft[COLOR_array__Array__init]))(var3) /* init on <var3:Array[Object]>*/;
var_listnode4 = var3;
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
var_listnode6 = var4;
var_pclassdefnode5 = var_nodearraylist1;
/* <var_pclassdefnode5:nullable Object> isa nullable AClassdef */
cltype = type_nullable_parser_nodes__AClassdef.color;
idtype = type_nullable_parser_nodes__AClassdef.id;
if(var_pclassdefnode5 == NULL) {
var5 = 1;
} else {
if(cltype >= var_pclassdefnode5->type->table_size) {
var5 = 0;
} else {
var5 = var_pclassdefnode5->type->type_table[cltype] == idtype;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2811);
show_backtrace(1);
}
var6 = NULL;
if (var_pclassdefnode5 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (var7){
((void (*)(val*, val*))(var_listnode6->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode6, var_pclassdefnode5) /* add on <var_listnode6:Array[Object]>*/;
} else {
}
var8 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
var9 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var8->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var8, var9, var_listnode3, var_listnode4, var_listnode6) /* init_amodule on <var8:AModule>*/;
var_pmodulenode1 = var8;
var_node_list = var_pmodulenode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction32> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction32#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction32__action(val* self, val* p0) {
parser__ReduceAction32__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction33#action for (self: ReduceAction33, Parser) */
void parser__ReduceAction33__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var4 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var5 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_pclassdefnode5 /* var pclassdefnode5: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : null */;
short int var11 /* : Bool */;
val* var12 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
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
var_listnode3 = var3;
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
var_listnode4 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
var_listnode6 = var5;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable_parser_nodes__AModuledecl.color;
idtype = type_nullable_parser_nodes__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= var_pmoduledeclnode2->type->table_size) {
var6 = 0;
} else {
var6 = var_pmoduledeclnode2->type->type_table[cltype] == idtype;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2836);
show_backtrace(1);
}
var_pclassdefnode5 = var_nodearraylist2;
/* <var_pclassdefnode5:nullable Object> isa nullable AClassdef */
cltype8 = type_nullable_parser_nodes__AClassdef.color;
idtype9 = type_nullable_parser_nodes__AClassdef.id;
if(var_pclassdefnode5 == NULL) {
var7 = 1;
} else {
if(cltype8 >= var_pclassdefnode5->type->table_size) {
var7 = 0;
} else {
var7 = var_pclassdefnode5->type->type_table[cltype8] == idtype9;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2838);
show_backtrace(1);
}
var10 = NULL;
if (var_pclassdefnode5 == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (var11){
((void (*)(val*, val*))(var_listnode6->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode6, var_pclassdefnode5) /* add on <var_listnode6:Array[Object]>*/;
} else {
}
var12 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
((void (*)(val*, val*, val*, val*, val*))(var12->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var12, var_pmoduledeclnode2, var_listnode3, var_listnode4, var_listnode6) /* init_amodule on <var12:AModule>*/;
var_pmodulenode1 = var12;
var_node_list = var_pmodulenode1;
var13 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction33> */
var14 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var13) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var14, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction33#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction33__action(val* self, val* p0) {
parser__ReduceAction33__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction34#action for (self: ReduceAction34, Parser) */
void parser__ReduceAction34__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var4 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var5 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var7 /* : Array[Object] */;
val* var_pclassdefnode6 /* var pclassdefnode6: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : null */;
short int var12 /* : Bool */;
val* var13 /* : AModule */;
val* var14 /* : null */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var15 /* : Int */;
long var16 /* : Int */;
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
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
var_listnode5 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
var_listnode7 = var5;
var_listnode3 = var_nodearraylist1;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode3 == NULL) {
var6 = 0;
} else {
if(cltype >= var_listnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_listnode3->type->type_table[cltype] == idtype;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2863);
show_backtrace(1);
}
var7 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction34>*/;
var_listnode4 = var7;
var_pclassdefnode6 = var_nodearraylist2;
/* <var_pclassdefnode6:nullable Object> isa nullable AClassdef */
cltype9 = type_nullable_parser_nodes__AClassdef.color;
idtype10 = type_nullable_parser_nodes__AClassdef.id;
if(var_pclassdefnode6 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_pclassdefnode6->type->table_size) {
var8 = 0;
} else {
var8 = var_pclassdefnode6->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2866);
show_backtrace(1);
}
var11 = NULL;
if (var_pclassdefnode6 == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (var12){
((void (*)(val*, val*))(var_listnode7->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode7, var_pclassdefnode6) /* add on <var_listnode7:Array[Object]>*/;
} else {
}
var13 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
var14 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var13->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var13, var14, var_listnode4, var_listnode5, var_listnode7) /* init_amodule on <var13:AModule>*/;
var_pmodulenode1 = var13;
var_node_list = var_pmodulenode1;
var15 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction34> */
var16 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var15) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var16, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction34#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction34__action(val* self, val* p0) {
parser__ReduceAction34__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction35#action for (self: ReduceAction35, Parser) */
void parser__ReduceAction35__action(val* self, val* p0) {
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
val* var5 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var6 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : Array[Object] */;
val* var_pclassdefnode6 /* var pclassdefnode6: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : null */;
short int var16 /* : Bool */;
val* var17 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
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
var_listnode4 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
var_listnode5 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
var_listnode7 = var6;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable_parser_nodes__AModuledecl.color;
idtype = type_nullable_parser_nodes__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= var_pmoduledeclnode2->type->table_size) {
var7 = 0;
} else {
var7 = var_pmoduledeclnode2->type->type_table[cltype] == idtype;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2892);
show_backtrace(1);
}
var_listnode3 = var_nodearraylist2;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype9 = type_array__Arraykernel__Object.color;
idtype10 = type_array__Arraykernel__Object.id;
if(var_listnode3 == NULL) {
var8 = 0;
} else {
if(cltype9 >= var_listnode3->type->table_size) {
var8 = 0;
} else {
var8 = var_listnode3->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2894);
show_backtrace(1);
}
var11 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction35>*/;
var_listnode4 = var11;
var_pclassdefnode6 = var_nodearraylist3;
/* <var_pclassdefnode6:nullable Object> isa nullable AClassdef */
cltype13 = type_nullable_parser_nodes__AClassdef.color;
idtype14 = type_nullable_parser_nodes__AClassdef.id;
if(var_pclassdefnode6 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_pclassdefnode6->type->table_size) {
var12 = 0;
} else {
var12 = var_pclassdefnode6->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2897);
show_backtrace(1);
}
var15 = NULL;
if (var_pclassdefnode6 == NULL) {
var16 = 0; /* is null */
} else {
var16 = 1; /* arg is null and recv is not */
}
if (var16){
((void (*)(val*, val*))(var_listnode7->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode7, var_pclassdefnode6) /* add on <var_listnode7:Array[Object]>*/;
} else {
}
var17 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
((void (*)(val*, val*, val*, val*, val*))(var17->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var17, var_pmoduledeclnode2, var_listnode4, var_listnode5, var_listnode7) /* init_amodule on <var17:AModule>*/;
var_pmodulenode1 = var17;
var_node_list = var_pmodulenode1;
var18 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction35> */
var19 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var18) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var19, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction35#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction35__action(val* self, val* p0) {
parser__ReduceAction35__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction36#action for (self: ReduceAction36, Parser) */
void parser__ReduceAction36__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var4 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var5 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var7 /* : Array[Object] */;
val* var_pclassdefnode6 /* var pclassdefnode6: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : null */;
short int var12 /* : Bool */;
val* var13 /* : AModule */;
val* var14 /* : null */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var15 /* : Int */;
long var16 /* : Int */;
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
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
var_listnode5 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
var_listnode7 = var5;
var_listnode4 = var_nodearraylist1;
/* <var_listnode4:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode4 == NULL) {
var6 = 0;
} else {
if(cltype >= var_listnode4->type->table_size) {
var6 = 0;
} else {
var6 = var_listnode4->type->type_table[cltype] == idtype;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2922);
show_backtrace(1);
}
var7 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode4) /* concat on <self:ReduceAction36>*/;
var_listnode5 = var7;
var_pclassdefnode6 = var_nodearraylist2;
/* <var_pclassdefnode6:nullable Object> isa nullable AClassdef */
cltype9 = type_nullable_parser_nodes__AClassdef.color;
idtype10 = type_nullable_parser_nodes__AClassdef.id;
if(var_pclassdefnode6 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_pclassdefnode6->type->table_size) {
var8 = 0;
} else {
var8 = var_pclassdefnode6->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2925);
show_backtrace(1);
}
var11 = NULL;
if (var_pclassdefnode6 == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (var12){
((void (*)(val*, val*))(var_listnode7->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode7, var_pclassdefnode6) /* add on <var_listnode7:Array[Object]>*/;
} else {
}
var13 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
var14 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var13->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var13, var14, var_listnode3, var_listnode5, var_listnode7) /* init_amodule on <var13:AModule>*/;
var_pmodulenode1 = var13;
var_node_list = var_pmodulenode1;
var15 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction36> */
var16 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var15) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var16, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction36#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction36__action(val* self, val* p0) {
parser__ReduceAction36__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction37#action for (self: ReduceAction37, Parser) */
void parser__ReduceAction37__action(val* self, val* p0) {
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
val* var5 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var6 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : Array[Object] */;
val* var_pclassdefnode6 /* var pclassdefnode6: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : null */;
short int var16 /* : Bool */;
val* var17 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
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
var_listnode3 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
var_listnode5 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
var_listnode7 = var6;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable_parser_nodes__AModuledecl.color;
idtype = type_nullable_parser_nodes__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= var_pmoduledeclnode2->type->table_size) {
var7 = 0;
} else {
var7 = var_pmoduledeclnode2->type->type_table[cltype] == idtype;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2951);
show_backtrace(1);
}
var_listnode4 = var_nodearraylist2;
/* <var_listnode4:nullable Object> isa Array[Object] */
cltype9 = type_array__Arraykernel__Object.color;
idtype10 = type_array__Arraykernel__Object.id;
if(var_listnode4 == NULL) {
var8 = 0;
} else {
if(cltype9 >= var_listnode4->type->table_size) {
var8 = 0;
} else {
var8 = var_listnode4->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2953);
show_backtrace(1);
}
var11 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode4) /* concat on <self:ReduceAction37>*/;
var_listnode5 = var11;
var_pclassdefnode6 = var_nodearraylist3;
/* <var_pclassdefnode6:nullable Object> isa nullable AClassdef */
cltype13 = type_nullable_parser_nodes__AClassdef.color;
idtype14 = type_nullable_parser_nodes__AClassdef.id;
if(var_pclassdefnode6 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_pclassdefnode6->type->table_size) {
var12 = 0;
} else {
var12 = var_pclassdefnode6->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2956);
show_backtrace(1);
}
var15 = NULL;
if (var_pclassdefnode6 == NULL) {
var16 = 0; /* is null */
} else {
var16 = 1; /* arg is null and recv is not */
}
if (var16){
((void (*)(val*, val*))(var_listnode7->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode7, var_pclassdefnode6) /* add on <var_listnode7:Array[Object]>*/;
} else {
}
var17 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
((void (*)(val*, val*, val*, val*, val*))(var17->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var17, var_pmoduledeclnode2, var_listnode3, var_listnode5, var_listnode7) /* init_amodule on <var17:AModule>*/;
var_pmodulenode1 = var17;
var_node_list = var_pmodulenode1;
var18 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction37> */
var19 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var18) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var19, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction37#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction37__action(val* self, val* p0) {
parser__ReduceAction37__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction38#action for (self: ReduceAction38, Parser) */
void parser__ReduceAction38__action(val* self, val* p0) {
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
val* var5 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var6 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var8 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : Array[Object] */;
val* var_pclassdefnode7 /* var pclassdefnode7: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : null */;
short int var17 /* : Bool */;
val* var18 /* : AModule */;
val* var19 /* : null */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var20 /* : Int */;
long var21 /* : Int */;
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
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
var_listnode6 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
var_listnode8 = var6;
var_listnode3 = var_nodearraylist1;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode3 == NULL) {
var7 = 0;
} else {
if(cltype >= var_listnode3->type->table_size) {
var7 = 0;
} else {
var7 = var_listnode3->type->type_table[cltype] == idtype;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2982);
show_backtrace(1);
}
var8 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction38>*/;
var_listnode4 = var8;
var_listnode5 = var_nodearraylist2;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype10 = type_array__Arraykernel__Object.color;
idtype11 = type_array__Arraykernel__Object.id;
if(var_listnode5 == NULL) {
var9 = 0;
} else {
if(cltype10 >= var_listnode5->type->table_size) {
var9 = 0;
} else {
var9 = var_listnode5->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2985);
show_backtrace(1);
}
var12 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode6, var_listnode5) /* concat on <self:ReduceAction38>*/;
var_listnode6 = var12;
var_pclassdefnode7 = var_nodearraylist3;
/* <var_pclassdefnode7:nullable Object> isa nullable AClassdef */
cltype14 = type_nullable_parser_nodes__AClassdef.color;
idtype15 = type_nullable_parser_nodes__AClassdef.id;
if(var_pclassdefnode7 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_pclassdefnode7->type->table_size) {
var13 = 0;
} else {
var13 = var_pclassdefnode7->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2988);
show_backtrace(1);
}
var16 = NULL;
if (var_pclassdefnode7 == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (var17){
((void (*)(val*, val*))(var_listnode8->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode8, var_pclassdefnode7) /* add on <var_listnode8:Array[Object]>*/;
} else {
}
var18 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
var19 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var18->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var18, var19, var_listnode4, var_listnode6, var_listnode8) /* init_amodule on <var18:AModule>*/;
var_pmodulenode1 = var18;
var_node_list = var_pmodulenode1;
var20 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction38> */
var21 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var20) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var21, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction38#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction38__action(val* self, val* p0) {
parser__ReduceAction38__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction39#action for (self: ReduceAction39, Parser) */
void parser__ReduceAction39__action(val* self, val* p0) {
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
val* var6 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var7 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : Array[Object] */;
val* var_pclassdefnode7 /* var pclassdefnode7: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var20 /* : null */;
short int var21 /* : Bool */;
val* var22 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
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
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
var_listnode4 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
var_listnode6 = var6;
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
var_listnode8 = var7;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable_parser_nodes__AModuledecl.color;
idtype = type_nullable_parser_nodes__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_pmoduledeclnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_pmoduledeclnode2->type->type_table[cltype] == idtype;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3015);
show_backtrace(1);
}
var_listnode3 = var_nodearraylist2;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype10 = type_array__Arraykernel__Object.color;
idtype11 = type_array__Arraykernel__Object.id;
if(var_listnode3 == NULL) {
var9 = 0;
} else {
if(cltype10 >= var_listnode3->type->table_size) {
var9 = 0;
} else {
var9 = var_listnode3->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3017);
show_backtrace(1);
}
var12 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction39>*/;
var_listnode4 = var12;
var_listnode5 = var_nodearraylist3;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype14 = type_array__Arraykernel__Object.color;
idtype15 = type_array__Arraykernel__Object.id;
if(var_listnode5 == NULL) {
var13 = 0;
} else {
if(cltype14 >= var_listnode5->type->table_size) {
var13 = 0;
} else {
var13 = var_listnode5->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3020);
show_backtrace(1);
}
var16 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode6, var_listnode5) /* concat on <self:ReduceAction39>*/;
var_listnode6 = var16;
var_pclassdefnode7 = var_nodearraylist4;
/* <var_pclassdefnode7:nullable Object> isa nullable AClassdef */
cltype18 = type_nullable_parser_nodes__AClassdef.color;
idtype19 = type_nullable_parser_nodes__AClassdef.id;
if(var_pclassdefnode7 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_pclassdefnode7->type->table_size) {
var17 = 0;
} else {
var17 = var_pclassdefnode7->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3023);
show_backtrace(1);
}
var20 = NULL;
if (var_pclassdefnode7 == NULL) {
var21 = 0; /* is null */
} else {
var21 = 1; /* arg is null and recv is not */
}
if (var21){
((void (*)(val*, val*))(var_listnode8->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode8, var_pclassdefnode7) /* add on <var_listnode8:Array[Object]>*/;
} else {
}
var22 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
((void (*)(val*, val*, val*, val*, val*))(var22->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var22, var_pmoduledeclnode2, var_listnode4, var_listnode6, var_listnode8) /* init_amodule on <var22:AModule>*/;
var_pmodulenode1 = var22;
var_node_list = var_pmodulenode1;
var23 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction39> */
var24 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var23) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var24, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction39#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction39__action(val* self, val* p0) {
parser__ReduceAction39__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction40#action for (self: ReduceAction40, Parser) */
void parser__ReduceAction40__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var4 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var5 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_pclassdefnode6 /* var pclassdefnode6: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : Array[Object] */;
val* var11 /* : null */;
short int var12 /* : Bool */;
val* var13 /* : AModule */;
val* var14 /* : null */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var15 /* : Int */;
long var16 /* : Int */;
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
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
var_listnode4 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
var_listnode7 = var5;
var_listnode5 = var_nodearraylist1;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode5 == NULL) {
var6 = 0;
} else {
if(cltype >= var_listnode5->type->table_size) {
var6 = 0;
} else {
var6 = var_listnode5->type->type_table[cltype] == idtype;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3048);
show_backtrace(1);
}
var_pclassdefnode6 = var_nodearraylist2;
/* <var_pclassdefnode6:nullable Object> isa nullable AClassdef */
cltype8 = type_nullable_parser_nodes__AClassdef.color;
idtype9 = type_nullable_parser_nodes__AClassdef.id;
if(var_pclassdefnode6 == NULL) {
var7 = 1;
} else {
if(cltype8 >= var_pclassdefnode6->type->table_size) {
var7 = 0;
} else {
var7 = var_pclassdefnode6->type->type_table[cltype8] == idtype9;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3050);
show_backtrace(1);
}
var10 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode7, var_listnode5) /* concat on <self:ReduceAction40>*/;
var_listnode7 = var10;
var11 = NULL;
if (var_pclassdefnode6 == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (var12){
((void (*)(val*, val*))(var_listnode7->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode7, var_pclassdefnode6) /* add on <var_listnode7:Array[Object]>*/;
} else {
}
var13 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
var14 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var13->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var13, var14, var_listnode3, var_listnode4, var_listnode7) /* init_amodule on <var13:AModule>*/;
var_pmodulenode1 = var13;
var_node_list = var_pmodulenode1;
var15 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction40> */
var16 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var15) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var16, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction40#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction40__action(val* self, val* p0) {
parser__ReduceAction40__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction41#action for (self: ReduceAction41, Parser) */
void parser__ReduceAction41__action(val* self, val* p0) {
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
val* var5 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var6 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pclassdefnode6 /* var pclassdefnode6: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : Array[Object] */;
val* var15 /* : null */;
short int var16 /* : Bool */;
val* var17 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
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
var_listnode3 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
var_listnode4 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
var_listnode7 = var6;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable_parser_nodes__AModuledecl.color;
idtype = type_nullable_parser_nodes__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= var_pmoduledeclnode2->type->table_size) {
var7 = 0;
} else {
var7 = var_pmoduledeclnode2->type->type_table[cltype] == idtype;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3077);
show_backtrace(1);
}
var_listnode5 = var_nodearraylist2;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype9 = type_array__Arraykernel__Object.color;
idtype10 = type_array__Arraykernel__Object.id;
if(var_listnode5 == NULL) {
var8 = 0;
} else {
if(cltype9 >= var_listnode5->type->table_size) {
var8 = 0;
} else {
var8 = var_listnode5->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3079);
show_backtrace(1);
}
var_pclassdefnode6 = var_nodearraylist3;
/* <var_pclassdefnode6:nullable Object> isa nullable AClassdef */
cltype12 = type_nullable_parser_nodes__AClassdef.color;
idtype13 = type_nullable_parser_nodes__AClassdef.id;
if(var_pclassdefnode6 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_pclassdefnode6->type->table_size) {
var11 = 0;
} else {
var11 = var_pclassdefnode6->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3081);
show_backtrace(1);
}
var14 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode7, var_listnode5) /* concat on <self:ReduceAction41>*/;
var_listnode7 = var14;
var15 = NULL;
if (var_pclassdefnode6 == NULL) {
var16 = 0; /* is null */
} else {
var16 = 1; /* arg is null and recv is not */
}
if (var16){
((void (*)(val*, val*))(var_listnode7->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode7, var_pclassdefnode6) /* add on <var_listnode7:Array[Object]>*/;
} else {
}
var17 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
((void (*)(val*, val*, val*, val*, val*))(var17->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var17, var_pmoduledeclnode2, var_listnode3, var_listnode4, var_listnode7) /* init_amodule on <var17:AModule>*/;
var_pmodulenode1 = var17;
var_node_list = var_pmodulenode1;
var18 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction41> */
var19 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var18) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var19, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction41#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction41__action(val* self, val* p0) {
parser__ReduceAction41__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction42#action for (self: ReduceAction42, Parser) */
void parser__ReduceAction42__action(val* self, val* p0) {
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
val* var5 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var6 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var8 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_pclassdefnode7 /* var pclassdefnode7: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : Array[Object] */;
val* var16 /* : null */;
short int var17 /* : Bool */;
val* var18 /* : AModule */;
val* var19 /* : null */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var20 /* : Int */;
long var21 /* : Int */;
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
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
var_listnode5 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
var_listnode8 = var6;
var_listnode3 = var_nodearraylist1;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode3 == NULL) {
var7 = 0;
} else {
if(cltype >= var_listnode3->type->table_size) {
var7 = 0;
} else {
var7 = var_listnode3->type->type_table[cltype] == idtype;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3108);
show_backtrace(1);
}
var8 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction42>*/;
var_listnode4 = var8;
var_listnode6 = var_nodearraylist2;
/* <var_listnode6:nullable Object> isa Array[Object] */
cltype10 = type_array__Arraykernel__Object.color;
idtype11 = type_array__Arraykernel__Object.id;
if(var_listnode6 == NULL) {
var9 = 0;
} else {
if(cltype10 >= var_listnode6->type->table_size) {
var9 = 0;
} else {
var9 = var_listnode6->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3111);
show_backtrace(1);
}
var_pclassdefnode7 = var_nodearraylist3;
/* <var_pclassdefnode7:nullable Object> isa nullable AClassdef */
cltype13 = type_nullable_parser_nodes__AClassdef.color;
idtype14 = type_nullable_parser_nodes__AClassdef.id;
if(var_pclassdefnode7 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_pclassdefnode7->type->table_size) {
var12 = 0;
} else {
var12 = var_pclassdefnode7->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3113);
show_backtrace(1);
}
var15 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode6) /* concat on <self:ReduceAction42>*/;
var_listnode8 = var15;
var16 = NULL;
if (var_pclassdefnode7 == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (var17){
((void (*)(val*, val*))(var_listnode8->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode8, var_pclassdefnode7) /* add on <var_listnode8:Array[Object]>*/;
} else {
}
var18 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
var19 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var18->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var18, var19, var_listnode4, var_listnode5, var_listnode8) /* init_amodule on <var18:AModule>*/;
var_pmodulenode1 = var18;
var_node_list = var_pmodulenode1;
var20 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction42> */
var21 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var20) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var21, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction42#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction42__action(val* self, val* p0) {
parser__ReduceAction42__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction43#action for (self: ReduceAction43, Parser) */
void parser__ReduceAction43__action(val* self, val* p0) {
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
val* var6 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var7 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_pclassdefnode7 /* var pclassdefnode7: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : Array[Object] */;
val* var20 /* : null */;
short int var21 /* : Bool */;
val* var22 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
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
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
var_listnode4 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
var_listnode5 = var6;
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
var_listnode8 = var7;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable_parser_nodes__AModuledecl.color;
idtype = type_nullable_parser_nodes__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_pmoduledeclnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_pmoduledeclnode2->type->type_table[cltype] == idtype;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3141);
show_backtrace(1);
}
var_listnode3 = var_nodearraylist2;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype10 = type_array__Arraykernel__Object.color;
idtype11 = type_array__Arraykernel__Object.id;
if(var_listnode3 == NULL) {
var9 = 0;
} else {
if(cltype10 >= var_listnode3->type->table_size) {
var9 = 0;
} else {
var9 = var_listnode3->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3143);
show_backtrace(1);
}
var12 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction43>*/;
var_listnode4 = var12;
var_listnode6 = var_nodearraylist3;
/* <var_listnode6:nullable Object> isa Array[Object] */
cltype14 = type_array__Arraykernel__Object.color;
idtype15 = type_array__Arraykernel__Object.id;
if(var_listnode6 == NULL) {
var13 = 0;
} else {
if(cltype14 >= var_listnode6->type->table_size) {
var13 = 0;
} else {
var13 = var_listnode6->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3146);
show_backtrace(1);
}
var_pclassdefnode7 = var_nodearraylist4;
/* <var_pclassdefnode7:nullable Object> isa nullable AClassdef */
cltype17 = type_nullable_parser_nodes__AClassdef.color;
idtype18 = type_nullable_parser_nodes__AClassdef.id;
if(var_pclassdefnode7 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_pclassdefnode7->type->table_size) {
var16 = 0;
} else {
var16 = var_pclassdefnode7->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3148);
show_backtrace(1);
}
var19 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode6) /* concat on <self:ReduceAction43>*/;
var_listnode8 = var19;
var20 = NULL;
if (var_pclassdefnode7 == NULL) {
var21 = 0; /* is null */
} else {
var21 = 1; /* arg is null and recv is not */
}
if (var21){
((void (*)(val*, val*))(var_listnode8->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode8, var_pclassdefnode7) /* add on <var_listnode8:Array[Object]>*/;
} else {
}
var22 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
((void (*)(val*, val*, val*, val*, val*))(var22->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var22, var_pmoduledeclnode2, var_listnode4, var_listnode5, var_listnode8) /* init_amodule on <var22:AModule>*/;
var_pmodulenode1 = var22;
var_node_list = var_pmodulenode1;
var23 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction43> */
var24 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var23) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var24, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction43#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction43__action(val* self, val* p0) {
parser__ReduceAction43__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction44#action for (self: ReduceAction44, Parser) */
void parser__ReduceAction44__action(val* self, val* p0) {
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
val* var5 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var6 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var8 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_pclassdefnode7 /* var pclassdefnode7: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : Array[Object] */;
val* var16 /* : null */;
short int var17 /* : Bool */;
val* var18 /* : AModule */;
val* var19 /* : null */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var20 /* : Int */;
long var21 /* : Int */;
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
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
var_listnode5 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
var_listnode8 = var6;
var_listnode4 = var_nodearraylist1;
/* <var_listnode4:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode4 == NULL) {
var7 = 0;
} else {
if(cltype >= var_listnode4->type->table_size) {
var7 = 0;
} else {
var7 = var_listnode4->type->type_table[cltype] == idtype;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3175);
show_backtrace(1);
}
var8 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode4) /* concat on <self:ReduceAction44>*/;
var_listnode5 = var8;
var_listnode6 = var_nodearraylist2;
/* <var_listnode6:nullable Object> isa Array[Object] */
cltype10 = type_array__Arraykernel__Object.color;
idtype11 = type_array__Arraykernel__Object.id;
if(var_listnode6 == NULL) {
var9 = 0;
} else {
if(cltype10 >= var_listnode6->type->table_size) {
var9 = 0;
} else {
var9 = var_listnode6->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3178);
show_backtrace(1);
}
var_pclassdefnode7 = var_nodearraylist3;
/* <var_pclassdefnode7:nullable Object> isa nullable AClassdef */
cltype13 = type_nullable_parser_nodes__AClassdef.color;
idtype14 = type_nullable_parser_nodes__AClassdef.id;
if(var_pclassdefnode7 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_pclassdefnode7->type->table_size) {
var12 = 0;
} else {
var12 = var_pclassdefnode7->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3180);
show_backtrace(1);
}
var15 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode6) /* concat on <self:ReduceAction44>*/;
var_listnode8 = var15;
var16 = NULL;
if (var_pclassdefnode7 == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (var17){
((void (*)(val*, val*))(var_listnode8->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode8, var_pclassdefnode7) /* add on <var_listnode8:Array[Object]>*/;
} else {
}
var18 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
var19 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var18->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var18, var19, var_listnode3, var_listnode5, var_listnode8) /* init_amodule on <var18:AModule>*/;
var_pmodulenode1 = var18;
var_node_list = var_pmodulenode1;
var20 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction44> */
var21 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var20) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var21, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction44#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction44__action(val* self, val* p0) {
parser__ReduceAction44__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction45#action for (self: ReduceAction45, Parser) */
void parser__ReduceAction45__action(val* self, val* p0) {
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
val* var6 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var7 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_pclassdefnode7 /* var pclassdefnode7: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : Array[Object] */;
val* var20 /* : null */;
short int var21 /* : Bool */;
val* var22 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
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
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
var_listnode3 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
var_listnode5 = var6;
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
var_listnode8 = var7;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable_parser_nodes__AModuledecl.color;
idtype = type_nullable_parser_nodes__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_pmoduledeclnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_pmoduledeclnode2->type->type_table[cltype] == idtype;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3208);
show_backtrace(1);
}
var_listnode4 = var_nodearraylist2;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3210);
show_backtrace(1);
}
var12 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode4) /* concat on <self:ReduceAction45>*/;
var_listnode5 = var12;
var_listnode6 = var_nodearraylist3;
/* <var_listnode6:nullable Object> isa Array[Object] */
cltype14 = type_array__Arraykernel__Object.color;
idtype15 = type_array__Arraykernel__Object.id;
if(var_listnode6 == NULL) {
var13 = 0;
} else {
if(cltype14 >= var_listnode6->type->table_size) {
var13 = 0;
} else {
var13 = var_listnode6->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3213);
show_backtrace(1);
}
var_pclassdefnode7 = var_nodearraylist4;
/* <var_pclassdefnode7:nullable Object> isa nullable AClassdef */
cltype17 = type_nullable_parser_nodes__AClassdef.color;
idtype18 = type_nullable_parser_nodes__AClassdef.id;
if(var_pclassdefnode7 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_pclassdefnode7->type->table_size) {
var16 = 0;
} else {
var16 = var_pclassdefnode7->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3215);
show_backtrace(1);
}
var19 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode6) /* concat on <self:ReduceAction45>*/;
var_listnode8 = var19;
var20 = NULL;
if (var_pclassdefnode7 == NULL) {
var21 = 0; /* is null */
} else {
var21 = 1; /* arg is null and recv is not */
}
if (var21){
((void (*)(val*, val*))(var_listnode8->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode8, var_pclassdefnode7) /* add on <var_listnode8:Array[Object]>*/;
} else {
}
var22 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
((void (*)(val*, val*, val*, val*, val*))(var22->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var22, var_pmoduledeclnode2, var_listnode3, var_listnode5, var_listnode8) /* init_amodule on <var22:AModule>*/;
var_pmodulenode1 = var22;
var_node_list = var_pmodulenode1;
var23 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction45> */
var24 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var23) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var24, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction45#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction45__action(val* self, val* p0) {
parser__ReduceAction45__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction46#action for (self: ReduceAction46, Parser) */
void parser__ReduceAction46__action(val* self, val* p0) {
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
val* var6 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var7 /* : Array[Object] */;
val* var_listnode9 /* var listnode9: Array[Object] */;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var9 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_pclassdefnode8 /* var pclassdefnode8: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var20 /* : Array[Object] */;
val* var21 /* : null */;
short int var22 /* : Bool */;
val* var23 /* : AModule */;
val* var24 /* : null */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var25 /* : Int */;
long var26 /* : Int */;
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
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
var_listnode6 = var6;
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
var_listnode9 = var7;
var_listnode3 = var_nodearraylist1;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode3 == NULL) {
var8 = 0;
} else {
if(cltype >= var_listnode3->type->table_size) {
var8 = 0;
} else {
var8 = var_listnode3->type->type_table[cltype] == idtype;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3243);
show_backtrace(1);
}
var9 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction46>*/;
var_listnode4 = var9;
var_listnode5 = var_nodearraylist2;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype11 = type_array__Arraykernel__Object.color;
idtype12 = type_array__Arraykernel__Object.id;
if(var_listnode5 == NULL) {
var10 = 0;
} else {
if(cltype11 >= var_listnode5->type->table_size) {
var10 = 0;
} else {
var10 = var_listnode5->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3246);
show_backtrace(1);
}
var13 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode6, var_listnode5) /* concat on <self:ReduceAction46>*/;
var_listnode6 = var13;
var_listnode7 = var_nodearraylist3;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype15 = type_array__Arraykernel__Object.color;
idtype16 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var14 = 0;
} else {
if(cltype15 >= var_listnode7->type->table_size) {
var14 = 0;
} else {
var14 = var_listnode7->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3249);
show_backtrace(1);
}
var_pclassdefnode8 = var_nodearraylist4;
/* <var_pclassdefnode8:nullable Object> isa nullable AClassdef */
cltype18 = type_nullable_parser_nodes__AClassdef.color;
idtype19 = type_nullable_parser_nodes__AClassdef.id;
if(var_pclassdefnode8 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_pclassdefnode8->type->table_size) {
var17 = 0;
} else {
var17 = var_pclassdefnode8->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3251);
show_backtrace(1);
}
var20 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode9, var_listnode7) /* concat on <self:ReduceAction46>*/;
var_listnode9 = var20;
var21 = NULL;
if (var_pclassdefnode8 == NULL) {
var22 = 0; /* is null */
} else {
var22 = 1; /* arg is null and recv is not */
}
if (var22){
((void (*)(val*, val*))(var_listnode9->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode9, var_pclassdefnode8) /* add on <var_listnode9:Array[Object]>*/;
} else {
}
var23 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
var24 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var23->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var23, var24, var_listnode4, var_listnode6, var_listnode9) /* init_amodule on <var23:AModule>*/;
var_pmodulenode1 = var23;
var_node_list = var_pmodulenode1;
var25 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction46> */
var26 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var25) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var26, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction46#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction46__action(val* self, val* p0) {
parser__ReduceAction46__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction47#action for (self: ReduceAction47, Parser) */
void parser__ReduceAction47__action(val* self, val* p0) {
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
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var7 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var8 /* : Array[Object] */;
val* var_listnode9 /* var listnode9: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_pclassdefnode8 /* var pclassdefnode8: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var24 /* : Array[Object] */;
val* var25 /* : null */;
short int var26 /* : Bool */;
val* var27 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var28 /* : Int */;
long var29 /* : Int */;
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
var_listnode4 = var6;
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
var_listnode6 = var7;
var8 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var8->class->vft[COLOR_array__Array__init]))(var8) /* init on <var8:Array[Object]>*/;
var_listnode9 = var8;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable_parser_nodes__AModuledecl.color;
idtype = type_nullable_parser_nodes__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= var_pmoduledeclnode2->type->table_size) {
var9 = 0;
} else {
var9 = var_pmoduledeclnode2->type->type_table[cltype] == idtype;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3280);
show_backtrace(1);
}
var_listnode3 = var_nodearraylist2;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype11 = type_array__Arraykernel__Object.color;
idtype12 = type_array__Arraykernel__Object.id;
if(var_listnode3 == NULL) {
var10 = 0;
} else {
if(cltype11 >= var_listnode3->type->table_size) {
var10 = 0;
} else {
var10 = var_listnode3->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3282);
show_backtrace(1);
}
var13 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction47>*/;
var_listnode4 = var13;
var_listnode5 = var_nodearraylist3;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype15 = type_array__Arraykernel__Object.color;
idtype16 = type_array__Arraykernel__Object.id;
if(var_listnode5 == NULL) {
var14 = 0;
} else {
if(cltype15 >= var_listnode5->type->table_size) {
var14 = 0;
} else {
var14 = var_listnode5->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3285);
show_backtrace(1);
}
var17 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode6, var_listnode5) /* concat on <self:ReduceAction47>*/;
var_listnode6 = var17;
var_listnode7 = var_nodearraylist4;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype19 = type_array__Arraykernel__Object.color;
idtype20 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var18 = 0;
} else {
if(cltype19 >= var_listnode7->type->table_size) {
var18 = 0;
} else {
var18 = var_listnode7->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3288);
show_backtrace(1);
}
var_pclassdefnode8 = var_nodearraylist5;
/* <var_pclassdefnode8:nullable Object> isa nullable AClassdef */
cltype22 = type_nullable_parser_nodes__AClassdef.color;
idtype23 = type_nullable_parser_nodes__AClassdef.id;
if(var_pclassdefnode8 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_pclassdefnode8->type->table_size) {
var21 = 0;
} else {
var21 = var_pclassdefnode8->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3290);
show_backtrace(1);
}
var24 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode9, var_listnode7) /* concat on <self:ReduceAction47>*/;
var_listnode9 = var24;
var25 = NULL;
if (var_pclassdefnode8 == NULL) {
var26 = 0; /* is null */
} else {
var26 = 1; /* arg is null and recv is not */
}
if (var26){
((void (*)(val*, val*))(var_listnode9->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode9, var_pclassdefnode8) /* add on <var_listnode9:Array[Object]>*/;
} else {
}
var27 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
((void (*)(val*, val*, val*, val*, val*))(var27->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var27, var_pmoduledeclnode2, var_listnode4, var_listnode6, var_listnode9) /* init_amodule on <var27:AModule>*/;
var_pmodulenode1 = var27;
var_node_list = var_pmodulenode1;
var28 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction47> */
var29 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var28) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var29, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction47#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction47__action(val* self, val* p0) {
parser__ReduceAction47__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction48#action for (self: ReduceAction48, Parser) */
void parser__ReduceAction48__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var4 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var5 /* : Array[Object] */;
val* var_listnode9 /* var listnode9: Array[Object] */;
val* var6 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_listnode6 /* var listnode6: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var8 /* : Array[Object] */;
val* var9 /* : ATopClassdef */;
val* var_pclassdefnode5 /* var pclassdefnode5: nullable ATopClassdef */;
val* var_pclassdefnode8 /* var pclassdefnode8: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : null */;
short int var14 /* : Bool */;
val* var15 /* : null */;
short int var16 /* : Bool */;
val* var17 /* : AModule */;
val* var18 /* : null */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var19 /* : Int */;
long var20 /* : Int */;
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
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
var_listnode4 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
var_listnode9 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
var_listnode7 = var6;
var_listnode6 = var_nodearraylist1;
/* <var_listnode6:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode6 == NULL) {
var7 = 0;
} else {
if(cltype >= var_listnode6->type->table_size) {
var7 = 0;
} else {
var7 = var_listnode6->type->type_table[cltype] == idtype;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3317);
show_backtrace(1);
}
var8 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode7, var_listnode6) /* concat on <self:ReduceAction48>*/;
var_listnode7 = var8;
var9 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var9->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var9, var_listnode7) /* init_atopclassdef on <var9:ATopClassdef>*/;
var_pclassdefnode5 = var9;
var_pclassdefnode8 = var_nodearraylist2;
/* <var_pclassdefnode8:nullable Object> isa nullable AClassdef */
cltype11 = type_nullable_parser_nodes__AClassdef.color;
idtype12 = type_nullable_parser_nodes__AClassdef.id;
if(var_pclassdefnode8 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_pclassdefnode8->type->table_size) {
var10 = 0;
} else {
var10 = var_pclassdefnode8->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3323);
show_backtrace(1);
}
var13 = NULL;
if (var_pclassdefnode5 == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (var14){
((void (*)(val*, val*))(var_listnode9->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode9, var_pclassdefnode5) /* add on <var_listnode9:Array[Object]>*/;
} else {
}
var15 = NULL;
if (var_pclassdefnode8 == NULL) {
var16 = 0; /* is null */
} else {
var16 = 1; /* arg is null and recv is not */
}
if (var16){
((void (*)(val*, val*))(var_listnode9->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode9, var_pclassdefnode8) /* add on <var_listnode9:Array[Object]>*/;
} else {
}
var17 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
var18 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var17->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var17, var18, var_listnode3, var_listnode4, var_listnode9) /* init_amodule on <var17:AModule>*/;
var_pmodulenode1 = var17;
var_node_list = var_pmodulenode1;
var19 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction48> */
var20 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var19) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var20, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction48#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction48__action(val* self, val* p0) {
parser__ReduceAction48__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction49#action for (self: ReduceAction49, Parser) */
void parser__ReduceAction49__action(val* self, val* p0) {
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
val* var5 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var6 /* : Array[Object] */;
val* var_listnode9 /* var listnode9: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var8 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_listnode6 /* var listnode6: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : Array[Object] */;
val* var13 /* : ATopClassdef */;
val* var_pclassdefnode5 /* var pclassdefnode5: nullable ATopClassdef */;
val* var_pclassdefnode8 /* var pclassdefnode8: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : null */;
short int var18 /* : Bool */;
val* var19 /* : null */;
short int var20 /* : Bool */;
val* var21 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var22 /* : Int */;
long var23 /* : Int */;
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
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
var_listnode4 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
var_listnode9 = var6;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable_parser_nodes__AModuledecl.color;
idtype = type_nullable_parser_nodes__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= var_pmoduledeclnode2->type->table_size) {
var7 = 0;
} else {
var7 = var_pmoduledeclnode2->type->type_table[cltype] == idtype;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3352);
show_backtrace(1);
}
var8 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var8->class->vft[COLOR_array__Array__init]))(var8) /* init on <var8:Array[Object]>*/;
var_listnode7 = var8;
var_listnode6 = var_nodearraylist2;
/* <var_listnode6:nullable Object> isa Array[Object] */
cltype10 = type_array__Arraykernel__Object.color;
idtype11 = type_array__Arraykernel__Object.id;
if(var_listnode6 == NULL) {
var9 = 0;
} else {
if(cltype10 >= var_listnode6->type->table_size) {
var9 = 0;
} else {
var9 = var_listnode6->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3355);
show_backtrace(1);
}
var12 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode7, var_listnode6) /* concat on <self:ReduceAction49>*/;
var_listnode7 = var12;
var13 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var13->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var13, var_listnode7) /* init_atopclassdef on <var13:ATopClassdef>*/;
var_pclassdefnode5 = var13;
var_pclassdefnode8 = var_nodearraylist3;
/* <var_pclassdefnode8:nullable Object> isa nullable AClassdef */
cltype15 = type_nullable_parser_nodes__AClassdef.color;
idtype16 = type_nullable_parser_nodes__AClassdef.id;
if(var_pclassdefnode8 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_pclassdefnode8->type->table_size) {
var14 = 0;
} else {
var14 = var_pclassdefnode8->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3361);
show_backtrace(1);
}
var17 = NULL;
if (var_pclassdefnode5 == NULL) {
var18 = 0; /* is null */
} else {
var18 = 1; /* arg is null and recv is not */
}
if (var18){
((void (*)(val*, val*))(var_listnode9->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode9, var_pclassdefnode5) /* add on <var_listnode9:Array[Object]>*/;
} else {
}
var19 = NULL;
if (var_pclassdefnode8 == NULL) {
var20 = 0; /* is null */
} else {
var20 = 1; /* arg is null and recv is not */
}
if (var20){
((void (*)(val*, val*))(var_listnode9->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode9, var_pclassdefnode8) /* add on <var_listnode9:Array[Object]>*/;
} else {
}
var21 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
((void (*)(val*, val*, val*, val*, val*))(var21->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var21, var_pmoduledeclnode2, var_listnode3, var_listnode4, var_listnode9) /* init_amodule on <var21:AModule>*/;
var_pmodulenode1 = var21;
var_node_list = var_pmodulenode1;
var22 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction49> */
var23 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var22) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var23, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction49#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction49__action(val* self, val* p0) {
parser__ReduceAction49__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction50#action for (self: ReduceAction50, Parser) */
void parser__ReduceAction50__action(val* self, val* p0) {
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
val* var5 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var6 /* : Array[Object] */;
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var8 /* : Array[Object] */;
val* var9 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : Array[Object] */;
val* var14 /* : ATopClassdef */;
val* var_pclassdefnode6 /* var pclassdefnode6: nullable ATopClassdef */;
val* var_pclassdefnode9 /* var pclassdefnode9: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : null */;
short int var19 /* : Bool */;
val* var20 /* : null */;
short int var21 /* : Bool */;
val* var22 /* : AModule */;
val* var23 /* : null */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var24 /* : Int */;
long var25 /* : Int */;
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
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
var_listnode5 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
var_listnode10 = var6;
var_listnode3 = var_nodearraylist1;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode3 == NULL) {
var7 = 0;
} else {
if(cltype >= var_listnode3->type->table_size) {
var7 = 0;
} else {
var7 = var_listnode3->type->type_table[cltype] == idtype;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3390);
show_backtrace(1);
}
var8 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction50>*/;
var_listnode4 = var8;
var9 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var9->class->vft[COLOR_array__Array__init]))(var9) /* init on <var9:Array[Object]>*/;
var_listnode8 = var9;
var_listnode7 = var_nodearraylist2;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype11 = type_array__Arraykernel__Object.color;
idtype12 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var10 = 0;
} else {
if(cltype11 >= var_listnode7->type->table_size) {
var10 = 0;
} else {
var10 = var_listnode7->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3394);
show_backtrace(1);
}
var13 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction50>*/;
var_listnode8 = var13;
var14 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var14->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var14, var_listnode8) /* init_atopclassdef on <var14:ATopClassdef>*/;
var_pclassdefnode6 = var14;
var_pclassdefnode9 = var_nodearraylist3;
/* <var_pclassdefnode9:nullable Object> isa nullable AClassdef */
cltype16 = type_nullable_parser_nodes__AClassdef.color;
idtype17 = type_nullable_parser_nodes__AClassdef.id;
if(var_pclassdefnode9 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_pclassdefnode9->type->table_size) {
var15 = 0;
} else {
var15 = var_pclassdefnode9->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3400);
show_backtrace(1);
}
var18 = NULL;
if (var_pclassdefnode6 == NULL) {
var19 = 0; /* is null */
} else {
var19 = 1; /* arg is null and recv is not */
}
if (var19){
((void (*)(val*, val*))(var_listnode10->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode10, var_pclassdefnode6) /* add on <var_listnode10:Array[Object]>*/;
} else {
}
var20 = NULL;
if (var_pclassdefnode9 == NULL) {
var21 = 0; /* is null */
} else {
var21 = 1; /* arg is null and recv is not */
}
if (var21){
((void (*)(val*, val*))(var_listnode10->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode10, var_pclassdefnode9) /* add on <var_listnode10:Array[Object]>*/;
} else {
}
var22 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
var23 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var22->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var22, var23, var_listnode4, var_listnode5, var_listnode10) /* init_amodule on <var22:AModule>*/;
var_pmodulenode1 = var22;
var_node_list = var_pmodulenode1;
var24 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction50> */
var25 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var24) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var25, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction50#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction50__action(val* self, val* p0) {
parser__ReduceAction50__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction51#action for (self: ReduceAction51, Parser) */
void parser__ReduceAction51__action(val* self, val* p0) {
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
val* var6 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var7 /* : Array[Object] */;
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : Array[Object] */;
val* var18 /* : ATopClassdef */;
val* var_pclassdefnode6 /* var pclassdefnode6: nullable ATopClassdef */;
val* var_pclassdefnode9 /* var pclassdefnode9: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var22 /* : null */;
short int var23 /* : Bool */;
val* var24 /* : null */;
short int var25 /* : Bool */;
val* var26 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var27 /* : Int */;
long var28 /* : Int */;
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
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
var_listnode5 = var6;
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
var_listnode10 = var7;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable_parser_nodes__AModuledecl.color;
idtype = type_nullable_parser_nodes__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_pmoduledeclnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_pmoduledeclnode2->type->type_table[cltype] == idtype;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3430);
show_backtrace(1);
}
var_listnode3 = var_nodearraylist2;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype10 = type_array__Arraykernel__Object.color;
idtype11 = type_array__Arraykernel__Object.id;
if(var_listnode3 == NULL) {
var9 = 0;
} else {
if(cltype10 >= var_listnode3->type->table_size) {
var9 = 0;
} else {
var9 = var_listnode3->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3432);
show_backtrace(1);
}
var12 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction51>*/;
var_listnode4 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
var_listnode8 = var13;
var_listnode7 = var_nodearraylist3;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype15 = type_array__Arraykernel__Object.color;
idtype16 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var14 = 0;
} else {
if(cltype15 >= var_listnode7->type->table_size) {
var14 = 0;
} else {
var14 = var_listnode7->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3436);
show_backtrace(1);
}
var17 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction51>*/;
var_listnode8 = var17;
var18 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var18->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var18, var_listnode8) /* init_atopclassdef on <var18:ATopClassdef>*/;
var_pclassdefnode6 = var18;
var_pclassdefnode9 = var_nodearraylist4;
/* <var_pclassdefnode9:nullable Object> isa nullable AClassdef */
cltype20 = type_nullable_parser_nodes__AClassdef.color;
idtype21 = type_nullable_parser_nodes__AClassdef.id;
if(var_pclassdefnode9 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_pclassdefnode9->type->table_size) {
var19 = 0;
} else {
var19 = var_pclassdefnode9->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3442);
show_backtrace(1);
}
var22 = NULL;
if (var_pclassdefnode6 == NULL) {
var23 = 0; /* is null */
} else {
var23 = 1; /* arg is null and recv is not */
}
if (var23){
((void (*)(val*, val*))(var_listnode10->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode10, var_pclassdefnode6) /* add on <var_listnode10:Array[Object]>*/;
} else {
}
var24 = NULL;
if (var_pclassdefnode9 == NULL) {
var25 = 0; /* is null */
} else {
var25 = 1; /* arg is null and recv is not */
}
if (var25){
((void (*)(val*, val*))(var_listnode10->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode10, var_pclassdefnode9) /* add on <var_listnode10:Array[Object]>*/;
} else {
}
var26 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
((void (*)(val*, val*, val*, val*, val*))(var26->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var26, var_pmoduledeclnode2, var_listnode4, var_listnode5, var_listnode10) /* init_amodule on <var26:AModule>*/;
var_pmodulenode1 = var26;
var_node_list = var_pmodulenode1;
var27 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction51> */
var28 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var27) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var28, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction51#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction51__action(val* self, val* p0) {
parser__ReduceAction51__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction52#action for (self: ReduceAction52, Parser) */
void parser__ReduceAction52__action(val* self, val* p0) {
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
val* var5 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var6 /* : Array[Object] */;
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var8 /* : Array[Object] */;
val* var9 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : Array[Object] */;
val* var14 /* : ATopClassdef */;
val* var_pclassdefnode6 /* var pclassdefnode6: nullable ATopClassdef */;
val* var_pclassdefnode9 /* var pclassdefnode9: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : null */;
short int var19 /* : Bool */;
val* var20 /* : null */;
short int var21 /* : Bool */;
val* var22 /* : AModule */;
val* var23 /* : null */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var24 /* : Int */;
long var25 /* : Int */;
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
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
var_listnode5 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
var_listnode10 = var6;
var_listnode4 = var_nodearraylist1;
/* <var_listnode4:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode4 == NULL) {
var7 = 0;
} else {
if(cltype >= var_listnode4->type->table_size) {
var7 = 0;
} else {
var7 = var_listnode4->type->type_table[cltype] == idtype;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3471);
show_backtrace(1);
}
var8 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode4) /* concat on <self:ReduceAction52>*/;
var_listnode5 = var8;
var9 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var9->class->vft[COLOR_array__Array__init]))(var9) /* init on <var9:Array[Object]>*/;
var_listnode8 = var9;
var_listnode7 = var_nodearraylist2;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype11 = type_array__Arraykernel__Object.color;
idtype12 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var10 = 0;
} else {
if(cltype11 >= var_listnode7->type->table_size) {
var10 = 0;
} else {
var10 = var_listnode7->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3475);
show_backtrace(1);
}
var13 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction52>*/;
var_listnode8 = var13;
var14 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var14->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var14, var_listnode8) /* init_atopclassdef on <var14:ATopClassdef>*/;
var_pclassdefnode6 = var14;
var_pclassdefnode9 = var_nodearraylist3;
/* <var_pclassdefnode9:nullable Object> isa nullable AClassdef */
cltype16 = type_nullable_parser_nodes__AClassdef.color;
idtype17 = type_nullable_parser_nodes__AClassdef.id;
if(var_pclassdefnode9 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_pclassdefnode9->type->table_size) {
var15 = 0;
} else {
var15 = var_pclassdefnode9->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3481);
show_backtrace(1);
}
var18 = NULL;
if (var_pclassdefnode6 == NULL) {
var19 = 0; /* is null */
} else {
var19 = 1; /* arg is null and recv is not */
}
if (var19){
((void (*)(val*, val*))(var_listnode10->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode10, var_pclassdefnode6) /* add on <var_listnode10:Array[Object]>*/;
} else {
}
var20 = NULL;
if (var_pclassdefnode9 == NULL) {
var21 = 0; /* is null */
} else {
var21 = 1; /* arg is null and recv is not */
}
if (var21){
((void (*)(val*, val*))(var_listnode10->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode10, var_pclassdefnode9) /* add on <var_listnode10:Array[Object]>*/;
} else {
}
var22 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
var23 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var22->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var22, var23, var_listnode3, var_listnode5, var_listnode10) /* init_amodule on <var22:AModule>*/;
var_pmodulenode1 = var22;
var_node_list = var_pmodulenode1;
var24 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction52> */
var25 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var24) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var25, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction52#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction52__action(val* self, val* p0) {
parser__ReduceAction52__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction53#action for (self: ReduceAction53, Parser) */
void parser__ReduceAction53__action(val* self, val* p0) {
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
val* var6 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var7 /* : Array[Object] */;
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : Array[Object] */;
val* var18 /* : ATopClassdef */;
val* var_pclassdefnode6 /* var pclassdefnode6: nullable ATopClassdef */;
val* var_pclassdefnode9 /* var pclassdefnode9: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var22 /* : null */;
short int var23 /* : Bool */;
val* var24 /* : null */;
short int var25 /* : Bool */;
val* var26 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var27 /* : Int */;
long var28 /* : Int */;
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
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
var_listnode5 = var6;
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
var_listnode10 = var7;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable_parser_nodes__AModuledecl.color;
idtype = type_nullable_parser_nodes__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_pmoduledeclnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_pmoduledeclnode2->type->type_table[cltype] == idtype;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3511);
show_backtrace(1);
}
var_listnode4 = var_nodearraylist2;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3513);
show_backtrace(1);
}
var12 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode4) /* concat on <self:ReduceAction53>*/;
var_listnode5 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
var_listnode8 = var13;
var_listnode7 = var_nodearraylist3;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype15 = type_array__Arraykernel__Object.color;
idtype16 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var14 = 0;
} else {
if(cltype15 >= var_listnode7->type->table_size) {
var14 = 0;
} else {
var14 = var_listnode7->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3517);
show_backtrace(1);
}
var17 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction53>*/;
var_listnode8 = var17;
var18 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var18->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var18, var_listnode8) /* init_atopclassdef on <var18:ATopClassdef>*/;
var_pclassdefnode6 = var18;
var_pclassdefnode9 = var_nodearraylist4;
/* <var_pclassdefnode9:nullable Object> isa nullable AClassdef */
cltype20 = type_nullable_parser_nodes__AClassdef.color;
idtype21 = type_nullable_parser_nodes__AClassdef.id;
if(var_pclassdefnode9 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_pclassdefnode9->type->table_size) {
var19 = 0;
} else {
var19 = var_pclassdefnode9->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3523);
show_backtrace(1);
}
var22 = NULL;
if (var_pclassdefnode6 == NULL) {
var23 = 0; /* is null */
} else {
var23 = 1; /* arg is null and recv is not */
}
if (var23){
((void (*)(val*, val*))(var_listnode10->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode10, var_pclassdefnode6) /* add on <var_listnode10:Array[Object]>*/;
} else {
}
var24 = NULL;
if (var_pclassdefnode9 == NULL) {
var25 = 0; /* is null */
} else {
var25 = 1; /* arg is null and recv is not */
}
if (var25){
((void (*)(val*, val*))(var_listnode10->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode10, var_pclassdefnode9) /* add on <var_listnode10:Array[Object]>*/;
} else {
}
var26 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
((void (*)(val*, val*, val*, val*, val*))(var26->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var26, var_pmoduledeclnode2, var_listnode3, var_listnode5, var_listnode10) /* init_amodule on <var26:AModule>*/;
var_pmodulenode1 = var26;
var_node_list = var_pmodulenode1;
var27 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction53> */
var28 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var27) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var28, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction53#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction53__action(val* self, val* p0) {
parser__ReduceAction53__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction54#action for (self: ReduceAction54, Parser) */
void parser__ReduceAction54__action(val* self, val* p0) {
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
val* var6 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var7 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: Array[Object] */;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var9 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode9 /* var listnode9: Array[Object] */;
val* var_listnode8 /* var listnode8: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : Array[Object] */;
val* var19 /* : ATopClassdef */;
val* var_pclassdefnode7 /* var pclassdefnode7: nullable ATopClassdef */;
val* var_pclassdefnode10 /* var pclassdefnode10: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var23 /* : null */;
short int var24 /* : Bool */;
val* var25 /* : null */;
short int var26 /* : Bool */;
val* var27 /* : AModule */;
val* var28 /* : null */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var29 /* : Int */;
long var30 /* : Int */;
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
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
var_listnode6 = var6;
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
var_listnode11 = var7;
var_listnode3 = var_nodearraylist1;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode3 == NULL) {
var8 = 0;
} else {
if(cltype >= var_listnode3->type->table_size) {
var8 = 0;
} else {
var8 = var_listnode3->type->type_table[cltype] == idtype;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3553);
show_backtrace(1);
}
var9 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction54>*/;
var_listnode4 = var9;
var_listnode5 = var_nodearraylist2;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype11 = type_array__Arraykernel__Object.color;
idtype12 = type_array__Arraykernel__Object.id;
if(var_listnode5 == NULL) {
var10 = 0;
} else {
if(cltype11 >= var_listnode5->type->table_size) {
var10 = 0;
} else {
var10 = var_listnode5->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3556);
show_backtrace(1);
}
var13 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode6, var_listnode5) /* concat on <self:ReduceAction54>*/;
var_listnode6 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
var_listnode9 = var14;
var_listnode8 = var_nodearraylist3;
/* <var_listnode8:nullable Object> isa Array[Object] */
cltype16 = type_array__Arraykernel__Object.color;
idtype17 = type_array__Arraykernel__Object.id;
if(var_listnode8 == NULL) {
var15 = 0;
} else {
if(cltype16 >= var_listnode8->type->table_size) {
var15 = 0;
} else {
var15 = var_listnode8->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3560);
show_backtrace(1);
}
var18 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode9, var_listnode8) /* concat on <self:ReduceAction54>*/;
var_listnode9 = var18;
var19 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var19->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var19, var_listnode9) /* init_atopclassdef on <var19:ATopClassdef>*/;
var_pclassdefnode7 = var19;
var_pclassdefnode10 = var_nodearraylist4;
/* <var_pclassdefnode10:nullable Object> isa nullable AClassdef */
cltype21 = type_nullable_parser_nodes__AClassdef.color;
idtype22 = type_nullable_parser_nodes__AClassdef.id;
if(var_pclassdefnode10 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_pclassdefnode10->type->table_size) {
var20 = 0;
} else {
var20 = var_pclassdefnode10->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3566);
show_backtrace(1);
}
var23 = NULL;
if (var_pclassdefnode7 == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (var24){
((void (*)(val*, val*))(var_listnode11->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode11, var_pclassdefnode7) /* add on <var_listnode11:Array[Object]>*/;
} else {
}
var25 = NULL;
if (var_pclassdefnode10 == NULL) {
var26 = 0; /* is null */
} else {
var26 = 1; /* arg is null and recv is not */
}
if (var26){
((void (*)(val*, val*))(var_listnode11->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode11, var_pclassdefnode10) /* add on <var_listnode11:Array[Object]>*/;
} else {
}
var27 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
var28 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var27->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var27, var28, var_listnode4, var_listnode6, var_listnode11) /* init_amodule on <var27:AModule>*/;
var_pmodulenode1 = var27;
var_node_list = var_pmodulenode1;
var29 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction54> */
var30 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var29) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var30, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction54#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction54__action(val* self, val* p0) {
parser__ReduceAction54__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction55#action for (self: ReduceAction55, Parser) */
void parser__ReduceAction55__action(val* self, val* p0) {
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
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var7 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var8 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : Array[Object] */;
val* var18 /* : Array[Object] */;
val* var_listnode9 /* var listnode9: Array[Object] */;
val* var_listnode8 /* var listnode8: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var22 /* : Array[Object] */;
val* var23 /* : ATopClassdef */;
val* var_pclassdefnode7 /* var pclassdefnode7: nullable ATopClassdef */;
val* var_pclassdefnode10 /* var pclassdefnode10: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var27 /* : null */;
short int var28 /* : Bool */;
val* var29 /* : null */;
short int var30 /* : Bool */;
val* var31 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var32 /* : Int */;
long var33 /* : Int */;
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
var_listnode4 = var6;
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
var_listnode6 = var7;
var8 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var8->class->vft[COLOR_array__Array__init]))(var8) /* init on <var8:Array[Object]>*/;
var_listnode11 = var8;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable_parser_nodes__AModuledecl.color;
idtype = type_nullable_parser_nodes__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= var_pmoduledeclnode2->type->table_size) {
var9 = 0;
} else {
var9 = var_pmoduledeclnode2->type->type_table[cltype] == idtype;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3597);
show_backtrace(1);
}
var_listnode3 = var_nodearraylist2;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype11 = type_array__Arraykernel__Object.color;
idtype12 = type_array__Arraykernel__Object.id;
if(var_listnode3 == NULL) {
var10 = 0;
} else {
if(cltype11 >= var_listnode3->type->table_size) {
var10 = 0;
} else {
var10 = var_listnode3->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3599);
show_backtrace(1);
}
var13 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction55>*/;
var_listnode4 = var13;
var_listnode5 = var_nodearraylist3;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype15 = type_array__Arraykernel__Object.color;
idtype16 = type_array__Arraykernel__Object.id;
if(var_listnode5 == NULL) {
var14 = 0;
} else {
if(cltype15 >= var_listnode5->type->table_size) {
var14 = 0;
} else {
var14 = var_listnode5->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3602);
show_backtrace(1);
}
var17 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode6, var_listnode5) /* concat on <self:ReduceAction55>*/;
var_listnode6 = var17;
var18 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var18->class->vft[COLOR_array__Array__init]))(var18) /* init on <var18:Array[Object]>*/;
var_listnode9 = var18;
var_listnode8 = var_nodearraylist4;
/* <var_listnode8:nullable Object> isa Array[Object] */
cltype20 = type_array__Arraykernel__Object.color;
idtype21 = type_array__Arraykernel__Object.id;
if(var_listnode8 == NULL) {
var19 = 0;
} else {
if(cltype20 >= var_listnode8->type->table_size) {
var19 = 0;
} else {
var19 = var_listnode8->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3606);
show_backtrace(1);
}
var22 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode9, var_listnode8) /* concat on <self:ReduceAction55>*/;
var_listnode9 = var22;
var23 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var23->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var23, var_listnode9) /* init_atopclassdef on <var23:ATopClassdef>*/;
var_pclassdefnode7 = var23;
var_pclassdefnode10 = var_nodearraylist5;
/* <var_pclassdefnode10:nullable Object> isa nullable AClassdef */
cltype25 = type_nullable_parser_nodes__AClassdef.color;
idtype26 = type_nullable_parser_nodes__AClassdef.id;
if(var_pclassdefnode10 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_pclassdefnode10->type->table_size) {
var24 = 0;
} else {
var24 = var_pclassdefnode10->type->type_table[cltype25] == idtype26;
}
}
if (!var24) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3612);
show_backtrace(1);
}
var27 = NULL;
if (var_pclassdefnode7 == NULL) {
var28 = 0; /* is null */
} else {
var28 = 1; /* arg is null and recv is not */
}
if (var28){
((void (*)(val*, val*))(var_listnode11->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode11, var_pclassdefnode7) /* add on <var_listnode11:Array[Object]>*/;
} else {
}
var29 = NULL;
if (var_pclassdefnode10 == NULL) {
var30 = 0; /* is null */
} else {
var30 = 1; /* arg is null and recv is not */
}
if (var30){
((void (*)(val*, val*))(var_listnode11->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode11, var_pclassdefnode10) /* add on <var_listnode11:Array[Object]>*/;
} else {
}
var31 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
((void (*)(val*, val*, val*, val*, val*))(var31->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var31, var_pmoduledeclnode2, var_listnode4, var_listnode6, var_listnode11) /* init_amodule on <var31:AModule>*/;
var_pmodulenode1 = var31;
var_node_list = var_pmodulenode1;
var32 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction55> */
var33 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var32) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var33, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction55#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction55__action(val* self, val* p0) {
parser__ReduceAction55__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction56#action for (self: ReduceAction56, Parser) */
void parser__ReduceAction56__action(val* self, val* p0) {
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
val* var5 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var6 /* : Array[Object] */;
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var8 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : Array[Object] */;
val* var13 /* : ATopClassdef */;
val* var_pclassdefnode6 /* var pclassdefnode6: nullable ATopClassdef */;
val* var_pclassdefnode9 /* var pclassdefnode9: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : Array[Object] */;
val* var18 /* : null */;
short int var19 /* : Bool */;
val* var20 /* : null */;
short int var21 /* : Bool */;
val* var22 /* : AModule */;
val* var23 /* : null */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var24 /* : Int */;
long var25 /* : Int */;
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
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
var_listnode4 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
var_listnode10 = var6;
var_listnode5 = var_nodearraylist1;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode5 == NULL) {
var7 = 0;
} else {
if(cltype >= var_listnode5->type->table_size) {
var7 = 0;
} else {
var7 = var_listnode5->type->type_table[cltype] == idtype;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3641);
show_backtrace(1);
}
var8 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var8->class->vft[COLOR_array__Array__init]))(var8) /* init on <var8:Array[Object]>*/;
var_listnode8 = var8;
var_listnode7 = var_nodearraylist2;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype10 = type_array__Arraykernel__Object.color;
idtype11 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var9 = 0;
} else {
if(cltype10 >= var_listnode7->type->table_size) {
var9 = 0;
} else {
var9 = var_listnode7->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3644);
show_backtrace(1);
}
var12 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction56>*/;
var_listnode8 = var12;
var13 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var13->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var13, var_listnode8) /* init_atopclassdef on <var13:ATopClassdef>*/;
var_pclassdefnode6 = var13;
var_pclassdefnode9 = var_nodearraylist3;
/* <var_pclassdefnode9:nullable Object> isa nullable AClassdef */
cltype15 = type_nullable_parser_nodes__AClassdef.color;
idtype16 = type_nullable_parser_nodes__AClassdef.id;
if(var_pclassdefnode9 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_pclassdefnode9->type->table_size) {
var14 = 0;
} else {
var14 = var_pclassdefnode9->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3650);
show_backtrace(1);
}
var17 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode10, var_listnode5) /* concat on <self:ReduceAction56>*/;
var_listnode10 = var17;
var18 = NULL;
if (var_pclassdefnode6 == NULL) {
var19 = 0; /* is null */
} else {
var19 = 1; /* arg is null and recv is not */
}
if (var19){
((void (*)(val*, val*))(var_listnode10->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode10, var_pclassdefnode6) /* add on <var_listnode10:Array[Object]>*/;
} else {
}
var20 = NULL;
if (var_pclassdefnode9 == NULL) {
var21 = 0; /* is null */
} else {
var21 = 1; /* arg is null and recv is not */
}
if (var21){
((void (*)(val*, val*))(var_listnode10->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode10, var_pclassdefnode9) /* add on <var_listnode10:Array[Object]>*/;
} else {
}
var22 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
var23 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var22->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var22, var23, var_listnode3, var_listnode4, var_listnode10) /* init_amodule on <var22:AModule>*/;
var_pmodulenode1 = var22;
var_node_list = var_pmodulenode1;
var24 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction56> */
var25 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var24) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var25, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction56#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction56__action(val* self, val* p0) {
parser__ReduceAction56__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction57#action for (self: ReduceAction57, Parser) */
void parser__ReduceAction57__action(val* self, val* p0) {
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
val* var6 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var7 /* : Array[Object] */;
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : Array[Object] */;
val* var17 /* : ATopClassdef */;
val* var_pclassdefnode6 /* var pclassdefnode6: nullable ATopClassdef */;
val* var_pclassdefnode9 /* var pclassdefnode9: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : Array[Object] */;
val* var22 /* : null */;
short int var23 /* : Bool */;
val* var24 /* : null */;
short int var25 /* : Bool */;
val* var26 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var27 /* : Int */;
long var28 /* : Int */;
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
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
var_listnode4 = var6;
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
var_listnode10 = var7;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable_parser_nodes__AModuledecl.color;
idtype = type_nullable_parser_nodes__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_pmoduledeclnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_pmoduledeclnode2->type->type_table[cltype] == idtype;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3681);
show_backtrace(1);
}
var_listnode5 = var_nodearraylist2;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype10 = type_array__Arraykernel__Object.color;
idtype11 = type_array__Arraykernel__Object.id;
if(var_listnode5 == NULL) {
var9 = 0;
} else {
if(cltype10 >= var_listnode5->type->table_size) {
var9 = 0;
} else {
var9 = var_listnode5->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3683);
show_backtrace(1);
}
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
var_listnode8 = var12;
var_listnode7 = var_nodearraylist3;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype14 = type_array__Arraykernel__Object.color;
idtype15 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var13 = 0;
} else {
if(cltype14 >= var_listnode7->type->table_size) {
var13 = 0;
} else {
var13 = var_listnode7->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3686);
show_backtrace(1);
}
var16 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction57>*/;
var_listnode8 = var16;
var17 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var17->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var17, var_listnode8) /* init_atopclassdef on <var17:ATopClassdef>*/;
var_pclassdefnode6 = var17;
var_pclassdefnode9 = var_nodearraylist4;
/* <var_pclassdefnode9:nullable Object> isa nullable AClassdef */
cltype19 = type_nullable_parser_nodes__AClassdef.color;
idtype20 = type_nullable_parser_nodes__AClassdef.id;
if(var_pclassdefnode9 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pclassdefnode9->type->table_size) {
var18 = 0;
} else {
var18 = var_pclassdefnode9->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3692);
show_backtrace(1);
}
var21 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode10, var_listnode5) /* concat on <self:ReduceAction57>*/;
var_listnode10 = var21;
var22 = NULL;
if (var_pclassdefnode6 == NULL) {
var23 = 0; /* is null */
} else {
var23 = 1; /* arg is null and recv is not */
}
if (var23){
((void (*)(val*, val*))(var_listnode10->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode10, var_pclassdefnode6) /* add on <var_listnode10:Array[Object]>*/;
} else {
}
var24 = NULL;
if (var_pclassdefnode9 == NULL) {
var25 = 0; /* is null */
} else {
var25 = 1; /* arg is null and recv is not */
}
if (var25){
((void (*)(val*, val*))(var_listnode10->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode10, var_pclassdefnode9) /* add on <var_listnode10:Array[Object]>*/;
} else {
}
var26 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
((void (*)(val*, val*, val*, val*, val*))(var26->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var26, var_pmoduledeclnode2, var_listnode3, var_listnode4, var_listnode10) /* init_amodule on <var26:AModule>*/;
var_pmodulenode1 = var26;
var_node_list = var_pmodulenode1;
var27 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction57> */
var28 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var27) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var28, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction57#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction57__action(val* self, val* p0) {
parser__ReduceAction57__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction58#action for (self: ReduceAction58, Parser) */
void parser__ReduceAction58__action(val* self, val* p0) {
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
val* var6 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var7 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: Array[Object] */;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var9 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : Array[Object] */;
val* var_listnode9 /* var listnode9: Array[Object] */;
val* var_listnode8 /* var listnode8: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : Array[Object] */;
val* var18 /* : ATopClassdef */;
val* var_pclassdefnode7 /* var pclassdefnode7: nullable ATopClassdef */;
val* var_pclassdefnode10 /* var pclassdefnode10: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var22 /* : Array[Object] */;
val* var23 /* : null */;
short int var24 /* : Bool */;
val* var25 /* : null */;
short int var26 /* : Bool */;
val* var27 /* : AModule */;
val* var28 /* : null */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var29 /* : Int */;
long var30 /* : Int */;
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
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
var_listnode5 = var6;
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
var_listnode11 = var7;
var_listnode3 = var_nodearraylist1;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode3 == NULL) {
var8 = 0;
} else {
if(cltype >= var_listnode3->type->table_size) {
var8 = 0;
} else {
var8 = var_listnode3->type->type_table[cltype] == idtype;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3723);
show_backtrace(1);
}
var9 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction58>*/;
var_listnode4 = var9;
var_listnode6 = var_nodearraylist2;
/* <var_listnode6:nullable Object> isa Array[Object] */
cltype11 = type_array__Arraykernel__Object.color;
idtype12 = type_array__Arraykernel__Object.id;
if(var_listnode6 == NULL) {
var10 = 0;
} else {
if(cltype11 >= var_listnode6->type->table_size) {
var10 = 0;
} else {
var10 = var_listnode6->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3726);
show_backtrace(1);
}
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
var_listnode9 = var13;
var_listnode8 = var_nodearraylist3;
/* <var_listnode8:nullable Object> isa Array[Object] */
cltype15 = type_array__Arraykernel__Object.color;
idtype16 = type_array__Arraykernel__Object.id;
if(var_listnode8 == NULL) {
var14 = 0;
} else {
if(cltype15 >= var_listnode8->type->table_size) {
var14 = 0;
} else {
var14 = var_listnode8->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3729);
show_backtrace(1);
}
var17 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode9, var_listnode8) /* concat on <self:ReduceAction58>*/;
var_listnode9 = var17;
var18 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var18->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var18, var_listnode9) /* init_atopclassdef on <var18:ATopClassdef>*/;
var_pclassdefnode7 = var18;
var_pclassdefnode10 = var_nodearraylist4;
/* <var_pclassdefnode10:nullable Object> isa nullable AClassdef */
cltype20 = type_nullable_parser_nodes__AClassdef.color;
idtype21 = type_nullable_parser_nodes__AClassdef.id;
if(var_pclassdefnode10 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_pclassdefnode10->type->table_size) {
var19 = 0;
} else {
var19 = var_pclassdefnode10->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3735);
show_backtrace(1);
}
var22 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode11, var_listnode6) /* concat on <self:ReduceAction58>*/;
var_listnode11 = var22;
var23 = NULL;
if (var_pclassdefnode7 == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (var24){
((void (*)(val*, val*))(var_listnode11->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode11, var_pclassdefnode7) /* add on <var_listnode11:Array[Object]>*/;
} else {
}
var25 = NULL;
if (var_pclassdefnode10 == NULL) {
var26 = 0; /* is null */
} else {
var26 = 1; /* arg is null and recv is not */
}
if (var26){
((void (*)(val*, val*))(var_listnode11->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode11, var_pclassdefnode10) /* add on <var_listnode11:Array[Object]>*/;
} else {
}
var27 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
var28 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var27->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var27, var28, var_listnode4, var_listnode5, var_listnode11) /* init_amodule on <var27:AModule>*/;
var_pmodulenode1 = var27;
var_node_list = var_pmodulenode1;
var29 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction58> */
var30 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var29) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var30, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction58#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction58__action(val* self, val* p0) {
parser__ReduceAction58__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction59#action for (self: ReduceAction59, Parser) */
void parser__ReduceAction59__action(val* self, val* p0) {
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
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var7 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var8 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : Array[Object] */;
val* var_listnode9 /* var listnode9: Array[Object] */;
val* var_listnode8 /* var listnode8: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : Array[Object] */;
val* var22 /* : ATopClassdef */;
val* var_pclassdefnode7 /* var pclassdefnode7: nullable ATopClassdef */;
val* var_pclassdefnode10 /* var pclassdefnode10: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var26 /* : Array[Object] */;
val* var27 /* : null */;
short int var28 /* : Bool */;
val* var29 /* : null */;
short int var30 /* : Bool */;
val* var31 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var32 /* : Int */;
long var33 /* : Int */;
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
var_listnode4 = var6;
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
var_listnode5 = var7;
var8 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var8->class->vft[COLOR_array__Array__init]))(var8) /* init on <var8:Array[Object]>*/;
var_listnode11 = var8;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable_parser_nodes__AModuledecl.color;
idtype = type_nullable_parser_nodes__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= var_pmoduledeclnode2->type->table_size) {
var9 = 0;
} else {
var9 = var_pmoduledeclnode2->type->type_table[cltype] == idtype;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3767);
show_backtrace(1);
}
var_listnode3 = var_nodearraylist2;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype11 = type_array__Arraykernel__Object.color;
idtype12 = type_array__Arraykernel__Object.id;
if(var_listnode3 == NULL) {
var10 = 0;
} else {
if(cltype11 >= var_listnode3->type->table_size) {
var10 = 0;
} else {
var10 = var_listnode3->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3769);
show_backtrace(1);
}
var13 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction59>*/;
var_listnode4 = var13;
var_listnode6 = var_nodearraylist3;
/* <var_listnode6:nullable Object> isa Array[Object] */
cltype15 = type_array__Arraykernel__Object.color;
idtype16 = type_array__Arraykernel__Object.id;
if(var_listnode6 == NULL) {
var14 = 0;
} else {
if(cltype15 >= var_listnode6->type->table_size) {
var14 = 0;
} else {
var14 = var_listnode6->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3772);
show_backtrace(1);
}
var17 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var17->class->vft[COLOR_array__Array__init]))(var17) /* init on <var17:Array[Object]>*/;
var_listnode9 = var17;
var_listnode8 = var_nodearraylist4;
/* <var_listnode8:nullable Object> isa Array[Object] */
cltype19 = type_array__Arraykernel__Object.color;
idtype20 = type_array__Arraykernel__Object.id;
if(var_listnode8 == NULL) {
var18 = 0;
} else {
if(cltype19 >= var_listnode8->type->table_size) {
var18 = 0;
} else {
var18 = var_listnode8->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3775);
show_backtrace(1);
}
var21 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode9, var_listnode8) /* concat on <self:ReduceAction59>*/;
var_listnode9 = var21;
var22 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var22->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var22, var_listnode9) /* init_atopclassdef on <var22:ATopClassdef>*/;
var_pclassdefnode7 = var22;
var_pclassdefnode10 = var_nodearraylist5;
/* <var_pclassdefnode10:nullable Object> isa nullable AClassdef */
cltype24 = type_nullable_parser_nodes__AClassdef.color;
idtype25 = type_nullable_parser_nodes__AClassdef.id;
if(var_pclassdefnode10 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_pclassdefnode10->type->table_size) {
var23 = 0;
} else {
var23 = var_pclassdefnode10->type->type_table[cltype24] == idtype25;
}
}
if (!var23) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3781);
show_backtrace(1);
}
var26 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode11, var_listnode6) /* concat on <self:ReduceAction59>*/;
var_listnode11 = var26;
var27 = NULL;
if (var_pclassdefnode7 == NULL) {
var28 = 0; /* is null */
} else {
var28 = 1; /* arg is null and recv is not */
}
if (var28){
((void (*)(val*, val*))(var_listnode11->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode11, var_pclassdefnode7) /* add on <var_listnode11:Array[Object]>*/;
} else {
}
var29 = NULL;
if (var_pclassdefnode10 == NULL) {
var30 = 0; /* is null */
} else {
var30 = 1; /* arg is null and recv is not */
}
if (var30){
((void (*)(val*, val*))(var_listnode11->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode11, var_pclassdefnode10) /* add on <var_listnode11:Array[Object]>*/;
} else {
}
var31 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
((void (*)(val*, val*, val*, val*, val*))(var31->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var31, var_pmoduledeclnode2, var_listnode4, var_listnode5, var_listnode11) /* init_amodule on <var31:AModule>*/;
var_pmodulenode1 = var31;
var_node_list = var_pmodulenode1;
var32 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction59> */
var33 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var32) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var33, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction59#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction59__action(val* self, val* p0) {
parser__ReduceAction59__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction60#action for (self: ReduceAction60, Parser) */
void parser__ReduceAction60__action(val* self, val* p0) {
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
val* var6 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var7 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: Array[Object] */;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var9 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : Array[Object] */;
val* var_listnode9 /* var listnode9: Array[Object] */;
val* var_listnode8 /* var listnode8: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : Array[Object] */;
val* var18 /* : ATopClassdef */;
val* var_pclassdefnode7 /* var pclassdefnode7: nullable ATopClassdef */;
val* var_pclassdefnode10 /* var pclassdefnode10: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var22 /* : Array[Object] */;
val* var23 /* : null */;
short int var24 /* : Bool */;
val* var25 /* : null */;
short int var26 /* : Bool */;
val* var27 /* : AModule */;
val* var28 /* : null */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var29 /* : Int */;
long var30 /* : Int */;
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
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
var_listnode5 = var6;
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
var_listnode11 = var7;
var_listnode4 = var_nodearraylist1;
/* <var_listnode4:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode4 == NULL) {
var8 = 0;
} else {
if(cltype >= var_listnode4->type->table_size) {
var8 = 0;
} else {
var8 = var_listnode4->type->type_table[cltype] == idtype;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3812);
show_backtrace(1);
}
var9 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode4) /* concat on <self:ReduceAction60>*/;
var_listnode5 = var9;
var_listnode6 = var_nodearraylist2;
/* <var_listnode6:nullable Object> isa Array[Object] */
cltype11 = type_array__Arraykernel__Object.color;
idtype12 = type_array__Arraykernel__Object.id;
if(var_listnode6 == NULL) {
var10 = 0;
} else {
if(cltype11 >= var_listnode6->type->table_size) {
var10 = 0;
} else {
var10 = var_listnode6->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3815);
show_backtrace(1);
}
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
var_listnode9 = var13;
var_listnode8 = var_nodearraylist3;
/* <var_listnode8:nullable Object> isa Array[Object] */
cltype15 = type_array__Arraykernel__Object.color;
idtype16 = type_array__Arraykernel__Object.id;
if(var_listnode8 == NULL) {
var14 = 0;
} else {
if(cltype15 >= var_listnode8->type->table_size) {
var14 = 0;
} else {
var14 = var_listnode8->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3818);
show_backtrace(1);
}
var17 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode9, var_listnode8) /* concat on <self:ReduceAction60>*/;
var_listnode9 = var17;
var18 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var18->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var18, var_listnode9) /* init_atopclassdef on <var18:ATopClassdef>*/;
var_pclassdefnode7 = var18;
var_pclassdefnode10 = var_nodearraylist4;
/* <var_pclassdefnode10:nullable Object> isa nullable AClassdef */
cltype20 = type_nullable_parser_nodes__AClassdef.color;
idtype21 = type_nullable_parser_nodes__AClassdef.id;
if(var_pclassdefnode10 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_pclassdefnode10->type->table_size) {
var19 = 0;
} else {
var19 = var_pclassdefnode10->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3824);
show_backtrace(1);
}
var22 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode11, var_listnode6) /* concat on <self:ReduceAction60>*/;
var_listnode11 = var22;
var23 = NULL;
if (var_pclassdefnode7 == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (var24){
((void (*)(val*, val*))(var_listnode11->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode11, var_pclassdefnode7) /* add on <var_listnode11:Array[Object]>*/;
} else {
}
var25 = NULL;
if (var_pclassdefnode10 == NULL) {
var26 = 0; /* is null */
} else {
var26 = 1; /* arg is null and recv is not */
}
if (var26){
((void (*)(val*, val*))(var_listnode11->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode11, var_pclassdefnode10) /* add on <var_listnode11:Array[Object]>*/;
} else {
}
var27 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
var28 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var27->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var27, var28, var_listnode3, var_listnode5, var_listnode11) /* init_amodule on <var27:AModule>*/;
var_pmodulenode1 = var27;
var_node_list = var_pmodulenode1;
var29 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction60> */
var30 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var29) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var30, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction60#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction60__action(val* self, val* p0) {
parser__ReduceAction60__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction61#action for (self: ReduceAction61, Parser) */
void parser__ReduceAction61__action(val* self, val* p0) {
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
val* var7 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var8 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : Array[Object] */;
val* var_listnode9 /* var listnode9: Array[Object] */;
val* var_listnode8 /* var listnode8: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : Array[Object] */;
val* var22 /* : ATopClassdef */;
val* var_pclassdefnode7 /* var pclassdefnode7: nullable ATopClassdef */;
val* var_pclassdefnode10 /* var pclassdefnode10: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var26 /* : Array[Object] */;
val* var27 /* : null */;
short int var28 /* : Bool */;
val* var29 /* : null */;
short int var30 /* : Bool */;
val* var31 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var32 /* : Int */;
long var33 /* : Int */;
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
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
var_listnode5 = var7;
var8 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var8->class->vft[COLOR_array__Array__init]))(var8) /* init on <var8:Array[Object]>*/;
var_listnode11 = var8;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable_parser_nodes__AModuledecl.color;
idtype = type_nullable_parser_nodes__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= var_pmoduledeclnode2->type->table_size) {
var9 = 0;
} else {
var9 = var_pmoduledeclnode2->type->type_table[cltype] == idtype;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3856);
show_backtrace(1);
}
var_listnode4 = var_nodearraylist2;
/* <var_listnode4:nullable Object> isa Array[Object] */
cltype11 = type_array__Arraykernel__Object.color;
idtype12 = type_array__Arraykernel__Object.id;
if(var_listnode4 == NULL) {
var10 = 0;
} else {
if(cltype11 >= var_listnode4->type->table_size) {
var10 = 0;
} else {
var10 = var_listnode4->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3858);
show_backtrace(1);
}
var13 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode4) /* concat on <self:ReduceAction61>*/;
var_listnode5 = var13;
var_listnode6 = var_nodearraylist3;
/* <var_listnode6:nullable Object> isa Array[Object] */
cltype15 = type_array__Arraykernel__Object.color;
idtype16 = type_array__Arraykernel__Object.id;
if(var_listnode6 == NULL) {
var14 = 0;
} else {
if(cltype15 >= var_listnode6->type->table_size) {
var14 = 0;
} else {
var14 = var_listnode6->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3861);
show_backtrace(1);
}
var17 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var17->class->vft[COLOR_array__Array__init]))(var17) /* init on <var17:Array[Object]>*/;
var_listnode9 = var17;
var_listnode8 = var_nodearraylist4;
/* <var_listnode8:nullable Object> isa Array[Object] */
cltype19 = type_array__Arraykernel__Object.color;
idtype20 = type_array__Arraykernel__Object.id;
if(var_listnode8 == NULL) {
var18 = 0;
} else {
if(cltype19 >= var_listnode8->type->table_size) {
var18 = 0;
} else {
var18 = var_listnode8->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3864);
show_backtrace(1);
}
var21 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode9, var_listnode8) /* concat on <self:ReduceAction61>*/;
var_listnode9 = var21;
var22 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var22->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var22, var_listnode9) /* init_atopclassdef on <var22:ATopClassdef>*/;
var_pclassdefnode7 = var22;
var_pclassdefnode10 = var_nodearraylist5;
/* <var_pclassdefnode10:nullable Object> isa nullable AClassdef */
cltype24 = type_nullable_parser_nodes__AClassdef.color;
idtype25 = type_nullable_parser_nodes__AClassdef.id;
if(var_pclassdefnode10 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_pclassdefnode10->type->table_size) {
var23 = 0;
} else {
var23 = var_pclassdefnode10->type->type_table[cltype24] == idtype25;
}
}
if (!var23) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3870);
show_backtrace(1);
}
var26 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode11, var_listnode6) /* concat on <self:ReduceAction61>*/;
var_listnode11 = var26;
var27 = NULL;
if (var_pclassdefnode7 == NULL) {
var28 = 0; /* is null */
} else {
var28 = 1; /* arg is null and recv is not */
}
if (var28){
((void (*)(val*, val*))(var_listnode11->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode11, var_pclassdefnode7) /* add on <var_listnode11:Array[Object]>*/;
} else {
}
var29 = NULL;
if (var_pclassdefnode10 == NULL) {
var30 = 0; /* is null */
} else {
var30 = 1; /* arg is null and recv is not */
}
if (var30){
((void (*)(val*, val*))(var_listnode11->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode11, var_pclassdefnode10) /* add on <var_listnode11:Array[Object]>*/;
} else {
}
var31 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
((void (*)(val*, val*, val*, val*, val*))(var31->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var31, var_pmoduledeclnode2, var_listnode3, var_listnode5, var_listnode11) /* init_amodule on <var31:AModule>*/;
var_pmodulenode1 = var31;
var_node_list = var_pmodulenode1;
var32 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction61> */
var33 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var32) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var33, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction61#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction61__action(val* self, val* p0) {
parser__ReduceAction61__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction62#action for (self: ReduceAction62, Parser) */
void parser__ReduceAction62__action(val* self, val* p0) {
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
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var7 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var8 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var10 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : Array[Object] */;
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var_listnode9 /* var listnode9: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var22 /* : Array[Object] */;
val* var23 /* : ATopClassdef */;
val* var_pclassdefnode8 /* var pclassdefnode8: nullable ATopClassdef */;
val* var_pclassdefnode11 /* var pclassdefnode11: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var27 /* : Array[Object] */;
val* var28 /* : null */;
short int var29 /* : Bool */;
val* var30 /* : null */;
short int var31 /* : Bool */;
val* var32 /* : AModule */;
val* var33 /* : null */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var34 /* : Int */;
long var35 /* : Int */;
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
var_listnode4 = var6;
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
var_listnode6 = var7;
var8 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var8->class->vft[COLOR_array__Array__init]))(var8) /* init on <var8:Array[Object]>*/;
var_listnode12 = var8;
var_listnode3 = var_nodearraylist1;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode3 == NULL) {
var9 = 0;
} else {
if(cltype >= var_listnode3->type->table_size) {
var9 = 0;
} else {
var9 = var_listnode3->type->type_table[cltype] == idtype;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3902);
show_backtrace(1);
}
var10 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction62>*/;
var_listnode4 = var10;
var_listnode5 = var_nodearraylist2;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype12 = type_array__Arraykernel__Object.color;
idtype13 = type_array__Arraykernel__Object.id;
if(var_listnode5 == NULL) {
var11 = 0;
} else {
if(cltype12 >= var_listnode5->type->table_size) {
var11 = 0;
} else {
var11 = var_listnode5->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3905);
show_backtrace(1);
}
var14 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode6, var_listnode5) /* concat on <self:ReduceAction62>*/;
var_listnode6 = var14;
var_listnode7 = var_nodearraylist3;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype16 = type_array__Arraykernel__Object.color;
idtype17 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var15 = 0;
} else {
if(cltype16 >= var_listnode7->type->table_size) {
var15 = 0;
} else {
var15 = var_listnode7->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3908);
show_backtrace(1);
}
var18 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var18->class->vft[COLOR_array__Array__init]))(var18) /* init on <var18:Array[Object]>*/;
var_listnode10 = var18;
var_listnode9 = var_nodearraylist4;
/* <var_listnode9:nullable Object> isa Array[Object] */
cltype20 = type_array__Arraykernel__Object.color;
idtype21 = type_array__Arraykernel__Object.id;
if(var_listnode9 == NULL) {
var19 = 0;
} else {
if(cltype20 >= var_listnode9->type->table_size) {
var19 = 0;
} else {
var19 = var_listnode9->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3911);
show_backtrace(1);
}
var22 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode10, var_listnode9) /* concat on <self:ReduceAction62>*/;
var_listnode10 = var22;
var23 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var23->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var23, var_listnode10) /* init_atopclassdef on <var23:ATopClassdef>*/;
var_pclassdefnode8 = var23;
var_pclassdefnode11 = var_nodearraylist5;
/* <var_pclassdefnode11:nullable Object> isa nullable AClassdef */
cltype25 = type_nullable_parser_nodes__AClassdef.color;
idtype26 = type_nullable_parser_nodes__AClassdef.id;
if(var_pclassdefnode11 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_pclassdefnode11->type->table_size) {
var24 = 0;
} else {
var24 = var_pclassdefnode11->type->type_table[cltype25] == idtype26;
}
}
if (!var24) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3917);
show_backtrace(1);
}
var27 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode7) /* concat on <self:ReduceAction62>*/;
var_listnode12 = var27;
var28 = NULL;
if (var_pclassdefnode8 == NULL) {
var29 = 0; /* is null */
} else {
var29 = 1; /* arg is null and recv is not */
}
if (var29){
((void (*)(val*, val*))(var_listnode12->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode12, var_pclassdefnode8) /* add on <var_listnode12:Array[Object]>*/;
} else {
}
var30 = NULL;
if (var_pclassdefnode11 == NULL) {
var31 = 0; /* is null */
} else {
var31 = 1; /* arg is null and recv is not */
}
if (var31){
((void (*)(val*, val*))(var_listnode12->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode12, var_pclassdefnode11) /* add on <var_listnode12:Array[Object]>*/;
} else {
}
var32 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
var33 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var32->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var32, var33, var_listnode4, var_listnode6, var_listnode12) /* init_amodule on <var32:AModule>*/;
var_pmodulenode1 = var32;
var_node_list = var_pmodulenode1;
var34 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction62> */
var35 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var34) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var35, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction62#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction62__action(val* self, val* p0) {
parser__ReduceAction62__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction63#action for (self: ReduceAction63, Parser) */
void parser__ReduceAction63__action(val* self, val* p0) {
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
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var8 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var9 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var22 /* : Array[Object] */;
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var_listnode9 /* var listnode9: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var26 /* : Array[Object] */;
val* var27 /* : ATopClassdef */;
val* var_pclassdefnode8 /* var pclassdefnode8: nullable ATopClassdef */;
val* var_pclassdefnode11 /* var pclassdefnode11: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var31 /* : Array[Object] */;
val* var32 /* : null */;
short int var33 /* : Bool */;
val* var34 /* : null */;
short int var35 /* : Bool */;
val* var36 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var37 /* : Int */;
long var38 /* : Int */;
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
var_listnode4 = var7;
var8 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var8->class->vft[COLOR_array__Array__init]))(var8) /* init on <var8:Array[Object]>*/;
var_listnode6 = var8;
var9 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var9->class->vft[COLOR_array__Array__init]))(var9) /* init on <var9:Array[Object]>*/;
var_listnode12 = var9;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable_parser_nodes__AModuledecl.color;
idtype = type_nullable_parser_nodes__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var10 = 1;
} else {
if(cltype >= var_pmoduledeclnode2->type->table_size) {
var10 = 0;
} else {
var10 = var_pmoduledeclnode2->type->type_table[cltype] == idtype;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3950);
show_backtrace(1);
}
var_listnode3 = var_nodearraylist2;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype12 = type_array__Arraykernel__Object.color;
idtype13 = type_array__Arraykernel__Object.id;
if(var_listnode3 == NULL) {
var11 = 0;
} else {
if(cltype12 >= var_listnode3->type->table_size) {
var11 = 0;
} else {
var11 = var_listnode3->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3952);
show_backtrace(1);
}
var14 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction63>*/;
var_listnode4 = var14;
var_listnode5 = var_nodearraylist3;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype16 = type_array__Arraykernel__Object.color;
idtype17 = type_array__Arraykernel__Object.id;
if(var_listnode5 == NULL) {
var15 = 0;
} else {
if(cltype16 >= var_listnode5->type->table_size) {
var15 = 0;
} else {
var15 = var_listnode5->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3955);
show_backtrace(1);
}
var18 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode6, var_listnode5) /* concat on <self:ReduceAction63>*/;
var_listnode6 = var18;
var_listnode7 = var_nodearraylist4;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype20 = type_array__Arraykernel__Object.color;
idtype21 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var19 = 0;
} else {
if(cltype20 >= var_listnode7->type->table_size) {
var19 = 0;
} else {
var19 = var_listnode7->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3958);
show_backtrace(1);
}
var22 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var22->class->vft[COLOR_array__Array__init]))(var22) /* init on <var22:Array[Object]>*/;
var_listnode10 = var22;
var_listnode9 = var_nodearraylist5;
/* <var_listnode9:nullable Object> isa Array[Object] */
cltype24 = type_array__Arraykernel__Object.color;
idtype25 = type_array__Arraykernel__Object.id;
if(var_listnode9 == NULL) {
var23 = 0;
} else {
if(cltype24 >= var_listnode9->type->table_size) {
var23 = 0;
} else {
var23 = var_listnode9->type->type_table[cltype24] == idtype25;
}
}
if (!var23) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3961);
show_backtrace(1);
}
var26 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode10, var_listnode9) /* concat on <self:ReduceAction63>*/;
var_listnode10 = var26;
var27 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var27->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var27, var_listnode10) /* init_atopclassdef on <var27:ATopClassdef>*/;
var_pclassdefnode8 = var27;
var_pclassdefnode11 = var_nodearraylist6;
/* <var_pclassdefnode11:nullable Object> isa nullable AClassdef */
cltype29 = type_nullable_parser_nodes__AClassdef.color;
idtype30 = type_nullable_parser_nodes__AClassdef.id;
if(var_pclassdefnode11 == NULL) {
var28 = 1;
} else {
if(cltype29 >= var_pclassdefnode11->type->table_size) {
var28 = 0;
} else {
var28 = var_pclassdefnode11->type->type_table[cltype29] == idtype30;
}
}
if (!var28) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3967);
show_backtrace(1);
}
var31 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode7) /* concat on <self:ReduceAction63>*/;
var_listnode12 = var31;
var32 = NULL;
if (var_pclassdefnode8 == NULL) {
var33 = 0; /* is null */
} else {
var33 = 1; /* arg is null and recv is not */
}
if (var33){
((void (*)(val*, val*))(var_listnode12->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode12, var_pclassdefnode8) /* add on <var_listnode12:Array[Object]>*/;
} else {
}
var34 = NULL;
if (var_pclassdefnode11 == NULL) {
var35 = 0; /* is null */
} else {
var35 = 1; /* arg is null and recv is not */
}
if (var35){
((void (*)(val*, val*))(var_listnode12->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode12, var_pclassdefnode11) /* add on <var_listnode12:Array[Object]>*/;
} else {
}
var36 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
((void (*)(val*, val*, val*, val*, val*))(var36->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var36, var_pmoduledeclnode2, var_listnode4, var_listnode6, var_listnode12) /* init_amodule on <var36:AModule>*/;
var_pmodulenode1 = var36;
var_node_list = var_pmodulenode1;
var37 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction63> */
var38 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var37) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var38, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction63#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction63__action(val* self, val* p0) {
parser__ReduceAction63__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction64#action for (self: ReduceAction64, Parser) */
void parser__ReduceAction64__action(val* self, val* p0) {
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
val* var_tkwmodulenode3 /* var tkwmodulenode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_pmodulenamenode4 /* var pmodulenamenode4: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : AModuledecl */;
val* var14 /* : null */;
val* var_pmoduledeclnode1 /* var pmoduledeclnode1: nullable AModuledecl */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3996);
show_backtrace(1);
}
var_tkwmodulenode3 = var_nodearraylist2;
/* <var_tkwmodulenode3:nullable Object> isa nullable TKwmodule */
cltype8 = type_nullable_parser_nodes__TKwmodule.color;
idtype9 = type_nullable_parser_nodes__TKwmodule.id;
if(var_tkwmodulenode3 == NULL) {
var7 = 1;
} else {
if(cltype8 >= var_tkwmodulenode3->type->table_size) {
var7 = 0;
} else {
var7 = var_tkwmodulenode3->type->type_table[cltype8] == idtype9;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3998);
show_backtrace(1);
}
var_pmodulenamenode4 = var_nodearraylist4;
/* <var_pmodulenamenode4:nullable Object> isa nullable AModuleName */
cltype11 = type_nullable_parser_nodes__AModuleName.color;
idtype12 = type_nullable_parser_nodes__AModuleName.id;
if(var_pmodulenamenode4 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_pmodulenamenode4->type->table_size) {
var10 = 0;
} else {
var10 = var_pmodulenamenode4->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4000);
show_backtrace(1);
}
var13 = NEW_parser_nodes__AModuledecl(&type_parser_nodes__AModuledecl);
var14 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var13->class->vft[COLOR_parser_prod__AModuledecl__init_amoduledecl]))(var13, var_pdocnode2, var_tkwmodulenode3, var_pmodulenamenode4, var14) /* init_amoduledecl on <var13:AModuledecl>*/;
var_pmoduledeclnode1 = var13;
var_node_list = var_pmoduledeclnode1;
var15 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction64> */
var16 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var15) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var16, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction64#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction64__action(val* self, val* p0) {
parser__ReduceAction64__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction65#action for (self: ReduceAction65, Parser) */
void parser__ReduceAction65__action(val* self, val* p0) {
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
val* var_tkwmodulenode3 /* var tkwmodulenode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pmodulenamenode4 /* var pmodulenamenode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_pannotationsnode5 /* var pannotationsnode5: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : AModuledecl */;
val* var_pmoduledeclnode1 /* var pmoduledeclnode1: nullable AModuledecl */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4023);
show_backtrace(1);
}
var_tkwmodulenode3 = var_nodearraylist2;
/* <var_tkwmodulenode3:nullable Object> isa nullable TKwmodule */
cltype9 = type_nullable_parser_nodes__TKwmodule.color;
idtype10 = type_nullable_parser_nodes__TKwmodule.id;
if(var_tkwmodulenode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_tkwmodulenode3->type->table_size) {
var8 = 0;
} else {
var8 = var_tkwmodulenode3->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4025);
show_backtrace(1);
}
var_pmodulenamenode4 = var_nodearraylist4;
/* <var_pmodulenamenode4:nullable Object> isa nullable AModuleName */
cltype12 = type_nullable_parser_nodes__AModuleName.color;
idtype13 = type_nullable_parser_nodes__AModuleName.id;
if(var_pmodulenamenode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_pmodulenamenode4->type->table_size) {
var11 = 0;
} else {
var11 = var_pmodulenamenode4->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4027);
show_backtrace(1);
}
var_pannotationsnode5 = var_nodearraylist5;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4029);
show_backtrace(1);
}
var17 = NEW_parser_nodes__AModuledecl(&type_parser_nodes__AModuledecl);
((void (*)(val*, val*, val*, val*, val*))(var17->class->vft[COLOR_parser_prod__AModuledecl__init_amoduledecl]))(var17, var_pdocnode2, var_tkwmodulenode3, var_pmodulenamenode4, var_pannotationsnode5) /* init_amoduledecl on <var17:AModuledecl>*/;
var_pmoduledeclnode1 = var17;
var_node_list = var_pmoduledeclnode1;
var18 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction65> */
var19 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var18) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var19, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction65#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction65__action(val* self, val* p0) {
parser__ReduceAction65__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction66#action for (self: ReduceAction66, Parser) */
void parser__ReduceAction66__action(val* self, val* p0) {
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
val* var_pvisibilitynode2 /* var pvisibilitynode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_tkwimportnode3 /* var tkwimportnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pmodulenamenode4 /* var pmodulenamenode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : AStdImport */;
val* var15 /* : null */;
val* var_pimportnode1 /* var pimportnode1: nullable AStdImport */;
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
var_pvisibilitynode2 = var_nodearraylist2;
/* <var_pvisibilitynode2:nullable Object> isa nullable AVisibility */
cltype = type_nullable_parser_nodes__AVisibility.color;
idtype = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode2 == NULL) {
var7 = 1;
} else {
if(cltype >= var_pvisibilitynode2->type->table_size) {
var7 = 0;
} else {
var7 = var_pvisibilitynode2->type->type_table[cltype] == idtype;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4052);
show_backtrace(1);
}
var_tkwimportnode3 = var_nodearraylist3;
/* <var_tkwimportnode3:nullable Object> isa nullable TKwimport */
cltype9 = type_nullable_parser_nodes__TKwimport.color;
idtype10 = type_nullable_parser_nodes__TKwimport.id;
if(var_tkwimportnode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_tkwimportnode3->type->table_size) {
var8 = 0;
} else {
var8 = var_tkwimportnode3->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4054);
show_backtrace(1);
}
var_pmodulenamenode4 = var_nodearraylist5;
/* <var_pmodulenamenode4:nullable Object> isa nullable AModuleName */
cltype12 = type_nullable_parser_nodes__AModuleName.color;
idtype13 = type_nullable_parser_nodes__AModuleName.id;
if(var_pmodulenamenode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_pmodulenamenode4->type->table_size) {
var11 = 0;
} else {
var11 = var_pmodulenamenode4->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4056);
show_backtrace(1);
}
var14 = NEW_parser_nodes__AStdImport(&type_parser_nodes__AStdImport);
var15 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var14->class->vft[COLOR_parser_prod__AStdImport__init_astdimport]))(var14, var_pvisibilitynode2, var_tkwimportnode3, var_pmodulenamenode4, var15) /* init_astdimport on <var14:AStdImport>*/;
var_pimportnode1 = var14;
var_node_list = var_pimportnode1;
var16 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction66> */
var17 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var16) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var17, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction66#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction66__action(val* self, val* p0) {
parser__ReduceAction66__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction67#action for (self: ReduceAction67, Parser) */
void parser__ReduceAction67__action(val* self, val* p0) {
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
val* var_pvisibilitynode2 /* var pvisibilitynode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_tkwimportnode3 /* var tkwimportnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_pmodulenamenode4 /* var pmodulenamenode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_pannotationsnode5 /* var pannotationsnode5: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : AStdImport */;
val* var_pimportnode1 /* var pimportnode1: nullable AStdImport */;
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
var_pvisibilitynode2 = var_nodearraylist2;
/* <var_pvisibilitynode2:nullable Object> isa nullable AVisibility */
cltype = type_nullable_parser_nodes__AVisibility.color;
idtype = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_pvisibilitynode2->type->table_size) {
var8 = 0;
} else {
var8 = var_pvisibilitynode2->type->type_table[cltype] == idtype;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4080);
show_backtrace(1);
}
var_tkwimportnode3 = var_nodearraylist3;
/* <var_tkwimportnode3:nullable Object> isa nullable TKwimport */
cltype10 = type_nullable_parser_nodes__TKwimport.color;
idtype11 = type_nullable_parser_nodes__TKwimport.id;
if(var_tkwimportnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_tkwimportnode3->type->table_size) {
var9 = 0;
} else {
var9 = var_tkwimportnode3->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4082);
show_backtrace(1);
}
var_pmodulenamenode4 = var_nodearraylist5;
/* <var_pmodulenamenode4:nullable Object> isa nullable AModuleName */
cltype13 = type_nullable_parser_nodes__AModuleName.color;
idtype14 = type_nullable_parser_nodes__AModuleName.id;
if(var_pmodulenamenode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_pmodulenamenode4->type->table_size) {
var12 = 0;
} else {
var12 = var_pmodulenamenode4->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4084);
show_backtrace(1);
}
var_pannotationsnode5 = var_nodearraylist6;
/* <var_pannotationsnode5:nullable Object> isa nullable AAnnotations */
cltype16 = type_nullable_parser_nodes__AAnnotations.color;
idtype17 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_pannotationsnode5->type->table_size) {
var15 = 0;
} else {
var15 = var_pannotationsnode5->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4086);
show_backtrace(1);
}
var18 = NEW_parser_nodes__AStdImport(&type_parser_nodes__AStdImport);
((void (*)(val*, val*, val*, val*, val*))(var18->class->vft[COLOR_parser_prod__AStdImport__init_astdimport]))(var18, var_pvisibilitynode2, var_tkwimportnode3, var_pmodulenamenode4, var_pannotationsnode5) /* init_astdimport on <var18:AStdImport>*/;
var_pimportnode1 = var18;
var_node_list = var_pimportnode1;
var19 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction67> */
var20 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var19) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var20, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction67#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction67__action(val* self, val* p0) {
parser__ReduceAction67__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction68#action for (self: ReduceAction68, Parser) */
void parser__ReduceAction68__action(val* self, val* p0) {
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
val* var_pvisibilitynode2 /* var pvisibilitynode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_tkwimportnode3 /* var tkwimportnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_tkwendnode4 /* var tkwendnode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : ANoImport */;
val* var_pimportnode1 /* var pimportnode1: nullable ANoImport */;
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
var_pvisibilitynode2 = var_nodearraylist2;
/* <var_pvisibilitynode2:nullable Object> isa nullable AVisibility */
cltype = type_nullable_parser_nodes__AVisibility.color;
idtype = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode2 == NULL) {
var7 = 1;
} else {
if(cltype >= var_pvisibilitynode2->type->table_size) {
var7 = 0;
} else {
var7 = var_pvisibilitynode2->type->type_table[cltype] == idtype;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4109);
show_backtrace(1);
}
var_tkwimportnode3 = var_nodearraylist3;
/* <var_tkwimportnode3:nullable Object> isa nullable TKwimport */
cltype9 = type_nullable_parser_nodes__TKwimport.color;
idtype10 = type_nullable_parser_nodes__TKwimport.id;
if(var_tkwimportnode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_tkwimportnode3->type->table_size) {
var8 = 0;
} else {
var8 = var_tkwimportnode3->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4111);
show_backtrace(1);
}
var_tkwendnode4 = var_nodearraylist5;
/* <var_tkwendnode4:nullable Object> isa nullable TKwend */
cltype12 = type_nullable_parser_nodes__TKwend.color;
idtype13 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_tkwendnode4->type->table_size) {
var11 = 0;
} else {
var11 = var_tkwendnode4->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4113);
show_backtrace(1);
}
var14 = NEW_parser_nodes__ANoImport(&type_parser_nodes__ANoImport);
((void (*)(val*, val*, val*, val*))(var14->class->vft[COLOR_parser_prod__ANoImport__init_anoimport]))(var14, var_pvisibilitynode2, var_tkwimportnode3, var_tkwendnode4) /* init_anoimport on <var14:ANoImport>*/;
var_pimportnode1 = var14;
var_node_list = var_pimportnode1;
var15 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction68> */
var16 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var15) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var16, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction68#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction68__action(val* self, val* p0) {
parser__ReduceAction68__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction69#action for (self: ReduceAction69, Parser) */
void parser__ReduceAction69__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_ppropdefnode2 /* var ppropdefnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : null */;
short int var5 /* : Bool */;
val* var6 /* : AMainClassdef */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AMainClassdef */;
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
var_ppropdefnode2 = var_nodearraylist1;
/* <var_ppropdefnode2:nullable Object> isa nullable APropdef */
cltype = type_nullable_parser_nodes__APropdef.color;
idtype = type_nullable_parser_nodes__APropdef.id;
if(var_ppropdefnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_ppropdefnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_ppropdefnode2->type->type_table[cltype] == idtype;
}
}
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4131);
show_backtrace(1);
}
var4 = NULL;
if (var_ppropdefnode2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (var5){
((void (*)(val*, val*))(var_listnode3->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode3, var_ppropdefnode2) /* add on <var_listnode3:Array[Object]>*/;
} else {
}
var6 = NEW_parser_nodes__AMainClassdef(&type_parser_nodes__AMainClassdef);
((void (*)(val*, val*))(var6->class->vft[COLOR_parser_prod__AMainClassdef__init_amainclassdef]))(var6, var_listnode3) /* init_amainclassdef on <var6:AMainClassdef>*/;
var_pclassdefnode1 = var6;
var_node_list = var_pclassdefnode1;
var7 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction69> */
var8 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var7) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var8, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction69#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction69__action(val* self, val* p0) {
parser__ReduceAction69__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction70#action for (self: ReduceAction70, Parser) */
void parser__ReduceAction70__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : null */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var2 = NULL;
var_node_list = var2;
var3 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction70> */
var4 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var3) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var4, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction70#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction70__action(val* self, val* p0) {
parser__ReduceAction70__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction71#action for (self: ReduceAction71, Parser) */
void parser__ReduceAction71__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : AMainMethPropdef */;
val* var5 /* : null */;
val* var_ppropdefnode1 /* var ppropdefnode1: nullable AMainMethPropdef */;
long var6 /* : Int */;
long var7 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var_pexprnode3 = var_nodearraylist2;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode3 == NULL) {
var3 = 1;
} else {
if(cltype >= var_pexprnode3->type->table_size) {
var3 = 0;
} else {
var3 = var_pexprnode3->type->type_table[cltype] == idtype;
}
}
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4160);
show_backtrace(1);
}
var4 = NEW_parser_nodes__AMainMethPropdef(&type_parser_nodes__AMainMethPropdef);
var5 = NULL;
((void (*)(val*, val*, val*))(var4->class->vft[COLOR_parser_prod__AMainMethPropdef__init_amainmethpropdef]))(var4, var5, var_pexprnode3) /* init_amainmethpropdef on <var4:AMainMethPropdef>*/;
var_ppropdefnode1 = var4;
var_node_list = var_ppropdefnode1;
var6 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction71> */
var7 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var6) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var7, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction71#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction71__action(val* self, val* p0) {
parser__ReduceAction71__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction73#action for (self: ReduceAction73, Parser) */
void parser__ReduceAction73__action(val* self, val* p0) {
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
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var9 /* : Array[Object] */;
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var10 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var11 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_tkwendnode12 /* var tkwendnode12: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var24 /* : AStdClassdef */;
val* var25 /* : null */;
val* var26 /* : null */;
val* var27 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
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
var8 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var8->class->vft[COLOR_array__Array__init]))(var8) /* init on <var8:Array[Object]>*/;
var_listnode7 = var8;
var9 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var9->class->vft[COLOR_array__Array__init]))(var9) /* init on <var9:Array[Object]>*/;
var_listnode10 = var9;
var10 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var10->class->vft[COLOR_array__Array__init]))(var10) /* init on <var10:Array[Object]>*/;
var_listnode11 = var10;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4185);
show_backtrace(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4187);
show_backtrace(1);
}
var_pclasskindnode5 = var_nodearraylist3;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype16 = type_nullable_parser_nodes__AClasskind.color;
idtype17 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_pclasskindnode5->type->table_size) {
var15 = 0;
} else {
var15 = var_pclasskindnode5->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4189);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4191);
show_backtrace(1);
}
var_tkwendnode12 = var_nodearraylist7;
/* <var_tkwendnode12:nullable Object> isa nullable TKwend */
cltype22 = type_nullable_parser_nodes__TKwend.color;
idtype23 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode12 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_tkwendnode12->type->table_size) {
var21 = 0;
} else {
var21 = var_tkwendnode12->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4193);
show_backtrace(1);
}
var24 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var25 = NULL;
var26 = NULL;
var27 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var24->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var24, var_pdocnode2, var25, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var26, var27, var_listnode10, var_listnode11, var_tkwendnode12) /* init_astdclassdef on <var24:AStdClassdef>*/;
var_pclassdefnode1 = var24;
var_node_list = var_pclassdefnode1;
var28 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction73> */
var29 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var28) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var29, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction73#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction73__action(val* self, val* p0) {
parser__ReduceAction73__action(self, p0);
RET_LABEL:;
}
