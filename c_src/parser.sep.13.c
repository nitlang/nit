#include "parser.sep.0.h"
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22520);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AReadAble(&type_parser_nodes__AReadAble);
var4 = NULL;
((void (*)(val*, val*, val*))(var3->class->vft[COLOR_parser_prod__AReadAble__init_areadable]))(var3, var4, var_tkwreadablenode3) /* init_areadable on <var3:AReadAble>*/;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22537);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22539);
show_backtrace(1);
}
var7 = NEW_parser_nodes__AReadAble(&type_parser_nodes__AReadAble);
((void (*)(val*, val*, val*))(var7->class->vft[COLOR_parser_prod__AReadAble__init_areadable]))(var7, var_tkwredefnode2, var_tkwreadablenode3) /* init_areadable on <var7:AReadAble>*/;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22555);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AWriteAble(&type_parser_nodes__AWriteAble);
var4 = NULL;
var5 = NULL;
((void (*)(val*, val*, val*, val*))(var3->class->vft[COLOR_parser_prod__AWriteAble__init_awriteable]))(var3, var4, var5, var_tkwwritablenode4) /* init_awriteable on <var3:AWriteAble>*/;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22573);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22575);
show_backtrace(1);
}
var7 = NEW_parser_nodes__AWriteAble(&type_parser_nodes__AWriteAble);
var8 = NULL;
((void (*)(val*, val*, val*, val*))(var7->class->vft[COLOR_parser_prod__AWriteAble__init_awriteable]))(var7, var_tkwredefnode2, var8, var_tkwwritablenode4) /* init_awriteable on <var7:AWriteAble>*/;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22593);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22595);
show_backtrace(1);
}
var7 = NEW_parser_nodes__AWriteAble(&type_parser_nodes__AWriteAble);
var8 = NULL;
((void (*)(val*, val*, val*, val*))(var7->class->vft[COLOR_parser_prod__AWriteAble__init_awriteable]))(var7, var8, var_pvisibilitynode3, var_tkwwritablenode4) /* init_awriteable on <var7:AWriteAble>*/;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22614);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22616);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22618);
show_backtrace(1);
}
var11 = NEW_parser_nodes__AWriteAble(&type_parser_nodes__AWriteAble);
((void (*)(val*, val*, val*, val*))(var11->class->vft[COLOR_parser_prod__AWriteAble__init_awriteable]))(var11, var_tkwredefnode2, var_pvisibilitynode3, var_tkwwritablenode4) /* init_awriteable on <var11:AWriteAble>*/;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22646);
show_backtrace(1);
}
var4 = NEW_parser_nodes__APrivateVisibility(&type_parser_nodes__APrivateVisibility);
((void (*)(val*, val*))(var4->class->vft[COLOR_parser_prod__APrivateVisibility__init_aprivatevisibility]))(var4, var_tkwprivatenode2) /* init_aprivatevisibility on <var4:APrivateVisibility>*/;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22662);
show_backtrace(1);
}
var4 = NEW_parser_nodes__AProtectedVisibility(&type_parser_nodes__AProtectedVisibility);
((void (*)(val*, val*))(var4->class->vft[COLOR_parser_prod__AProtectedVisibility__init_aprotectedvisibility]))(var4, var_tkwprotectednode2) /* init_aprotectedvisibility on <var4:AProtectedVisibility>*/;
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
/* method parser#ReduceAction526#action for (self: ReduceAction526, Parser) */
void parser__ReduceAction526__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwintrudenode2 /* var tkwintrudenode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : AIntrudeVisibility */;
val* var_pvisibilitynode1 /* var pvisibilitynode1: nullable AIntrudeVisibility */;
long var5 /* : Int */;
long var6 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var_tkwintrudenode2 = var_nodearraylist1;
/* <var_tkwintrudenode2:nullable Object> isa nullable TKwintrude */
cltype = type_nullable_parser_nodes__TKwintrude.color;
idtype = type_nullable_parser_nodes__TKwintrude.id;
if(var_tkwintrudenode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tkwintrudenode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tkwintrudenode2->type->type_table[cltype] == idtype;
}
}
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22678);
show_backtrace(1);
}
var4 = NEW_parser_nodes__AIntrudeVisibility(&type_parser_nodes__AIntrudeVisibility);
((void (*)(val*, val*))(var4->class->vft[COLOR_parser_prod__AIntrudeVisibility__init_aintrudevisibility]))(var4, var_tkwintrudenode2) /* init_aintrudevisibility on <var4:AIntrudeVisibility>*/;
var_pvisibilitynode1 = var4;
var_node_list = var_pvisibilitynode1;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction526> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction526#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction526__action(val* self, val* p0) {
parser__ReduceAction526__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction527#action for (self: ReduceAction527, Parser) */
void parser__ReduceAction527__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tidnode2 /* var tidnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AIdMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable AIdMethid */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22693);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AIdMethid(&type_parser_nodes__AIdMethid);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__AIdMethid__init_aidmethid]))(var3, var_tidnode2) /* init_aidmethid on <var3:AIdMethid>*/;
var_pmethidnode1 = var3;
var_node_list = var_pmethidnode1;
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction527> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction527#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction527__action(val* self, val* p0) {
parser__ReduceAction527__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction528#action for (self: ReduceAction528, Parser) */
void parser__ReduceAction528__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tplusnode2 /* var tplusnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : APlusMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable APlusMethid */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var_tplusnode2 = var_nodearraylist1;
/* <var_tplusnode2:nullable Object> isa nullable TPlus */
cltype = type_nullable_parser_nodes__TPlus.color;
idtype = type_nullable_parser_nodes__TPlus.id;
if(var_tplusnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tplusnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tplusnode2->type->type_table[cltype] == idtype;
}
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22708);
show_backtrace(1);
}
var3 = NEW_parser_nodes__APlusMethid(&type_parser_nodes__APlusMethid);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__APlusMethid__init_aplusmethid]))(var3, var_tplusnode2) /* init_aplusmethid on <var3:APlusMethid>*/;
var_pmethidnode1 = var3;
var_node_list = var_pmethidnode1;
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction528> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction528#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction528__action(val* self, val* p0) {
parser__ReduceAction528__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction529#action for (self: ReduceAction529, Parser) */
void parser__ReduceAction529__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tminusnode2 /* var tminusnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AMinusMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable AMinusMethid */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var_tminusnode2 = var_nodearraylist1;
/* <var_tminusnode2:nullable Object> isa nullable TMinus */
cltype = type_nullable_parser_nodes__TMinus.color;
idtype = type_nullable_parser_nodes__TMinus.id;
if(var_tminusnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tminusnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tminusnode2->type->type_table[cltype] == idtype;
}
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22723);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AMinusMethid(&type_parser_nodes__AMinusMethid);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__AMinusMethid__init_aminusmethid]))(var3, var_tminusnode2) /* init_aminusmethid on <var3:AMinusMethid>*/;
var_pmethidnode1 = var3;
var_node_list = var_pmethidnode1;
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction529> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction529#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction529__action(val* self, val* p0) {
parser__ReduceAction529__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction530#action for (self: ReduceAction530, Parser) */
void parser__ReduceAction530__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tstarnode2 /* var tstarnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AStarMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable AStarMethid */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var_tstarnode2 = var_nodearraylist1;
/* <var_tstarnode2:nullable Object> isa nullable TStar */
cltype = type_nullable_parser_nodes__TStar.color;
idtype = type_nullable_parser_nodes__TStar.id;
if(var_tstarnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tstarnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tstarnode2->type->type_table[cltype] == idtype;
}
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22738);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AStarMethid(&type_parser_nodes__AStarMethid);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__AStarMethid__init_astarmethid]))(var3, var_tstarnode2) /* init_astarmethid on <var3:AStarMethid>*/;
var_pmethidnode1 = var3;
var_node_list = var_pmethidnode1;
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction530> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction530#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction530__action(val* self, val* p0) {
parser__ReduceAction530__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction531#action for (self: ReduceAction531, Parser) */
void parser__ReduceAction531__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tslashnode2 /* var tslashnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : ASlashMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable ASlashMethid */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var_tslashnode2 = var_nodearraylist1;
/* <var_tslashnode2:nullable Object> isa nullable TSlash */
cltype = type_nullable_parser_nodes__TSlash.color;
idtype = type_nullable_parser_nodes__TSlash.id;
if(var_tslashnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tslashnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tslashnode2->type->type_table[cltype] == idtype;
}
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22753);
show_backtrace(1);
}
var3 = NEW_parser_nodes__ASlashMethid(&type_parser_nodes__ASlashMethid);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__ASlashMethid__init_aslashmethid]))(var3, var_tslashnode2) /* init_aslashmethid on <var3:ASlashMethid>*/;
var_pmethidnode1 = var3;
var_node_list = var_pmethidnode1;
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction531> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction531#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction531__action(val* self, val* p0) {
parser__ReduceAction531__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction532#action for (self: ReduceAction532, Parser) */
void parser__ReduceAction532__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tpercentnode2 /* var tpercentnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : APercentMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable APercentMethid */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var_tpercentnode2 = var_nodearraylist1;
/* <var_tpercentnode2:nullable Object> isa nullable TPercent */
cltype = type_nullable_parser_nodes__TPercent.color;
idtype = type_nullable_parser_nodes__TPercent.id;
if(var_tpercentnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tpercentnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tpercentnode2->type->type_table[cltype] == idtype;
}
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22768);
show_backtrace(1);
}
var3 = NEW_parser_nodes__APercentMethid(&type_parser_nodes__APercentMethid);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__APercentMethid__init_apercentmethid]))(var3, var_tpercentnode2) /* init_apercentmethid on <var3:APercentMethid>*/;
var_pmethidnode1 = var3;
var_node_list = var_pmethidnode1;
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction532> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction532#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction532__action(val* self, val* p0) {
parser__ReduceAction532__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction533#action for (self: ReduceAction533, Parser) */
void parser__ReduceAction533__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_teqnode2 /* var teqnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AEqMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable AEqMethid */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var_teqnode2 = var_nodearraylist1;
/* <var_teqnode2:nullable Object> isa nullable TEq */
cltype = type_nullable_parser_nodes__TEq.color;
idtype = type_nullable_parser_nodes__TEq.id;
if(var_teqnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_teqnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_teqnode2->type->type_table[cltype] == idtype;
}
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22783);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AEqMethid(&type_parser_nodes__AEqMethid);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__AEqMethid__init_aeqmethid]))(var3, var_teqnode2) /* init_aeqmethid on <var3:AEqMethid>*/;
var_pmethidnode1 = var3;
var_node_list = var_pmethidnode1;
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction533> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction533#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction533__action(val* self, val* p0) {
parser__ReduceAction533__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction534#action for (self: ReduceAction534, Parser) */
void parser__ReduceAction534__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tnenode2 /* var tnenode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : ANeMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable ANeMethid */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var_tnenode2 = var_nodearraylist1;
/* <var_tnenode2:nullable Object> isa nullable TNe */
cltype = type_nullable_parser_nodes__TNe.color;
idtype = type_nullable_parser_nodes__TNe.id;
if(var_tnenode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tnenode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tnenode2->type->type_table[cltype] == idtype;
}
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22798);
show_backtrace(1);
}
var3 = NEW_parser_nodes__ANeMethid(&type_parser_nodes__ANeMethid);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__ANeMethid__init_anemethid]))(var3, var_tnenode2) /* init_anemethid on <var3:ANeMethid>*/;
var_pmethidnode1 = var3;
var_node_list = var_pmethidnode1;
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction534> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction534#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction534__action(val* self, val* p0) {
parser__ReduceAction534__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction535#action for (self: ReduceAction535, Parser) */
void parser__ReduceAction535__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tlenode2 /* var tlenode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : ALeMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable ALeMethid */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var_tlenode2 = var_nodearraylist1;
/* <var_tlenode2:nullable Object> isa nullable TLe */
cltype = type_nullable_parser_nodes__TLe.color;
idtype = type_nullable_parser_nodes__TLe.id;
if(var_tlenode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tlenode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tlenode2->type->type_table[cltype] == idtype;
}
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22813);
show_backtrace(1);
}
var3 = NEW_parser_nodes__ALeMethid(&type_parser_nodes__ALeMethid);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__ALeMethid__init_alemethid]))(var3, var_tlenode2) /* init_alemethid on <var3:ALeMethid>*/;
var_pmethidnode1 = var3;
var_node_list = var_pmethidnode1;
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction535> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction535#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction535__action(val* self, val* p0) {
parser__ReduceAction535__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction536#action for (self: ReduceAction536, Parser) */
void parser__ReduceAction536__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tgenode2 /* var tgenode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AGeMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable AGeMethid */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var_tgenode2 = var_nodearraylist1;
/* <var_tgenode2:nullable Object> isa nullable TGe */
cltype = type_nullable_parser_nodes__TGe.color;
idtype = type_nullable_parser_nodes__TGe.id;
if(var_tgenode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tgenode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tgenode2->type->type_table[cltype] == idtype;
}
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22828);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AGeMethid(&type_parser_nodes__AGeMethid);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__AGeMethid__init_agemethid]))(var3, var_tgenode2) /* init_agemethid on <var3:AGeMethid>*/;
var_pmethidnode1 = var3;
var_node_list = var_pmethidnode1;
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction536> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction536#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction536__action(val* self, val* p0) {
parser__ReduceAction536__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction537#action for (self: ReduceAction537, Parser) */
void parser__ReduceAction537__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tltnode2 /* var tltnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : ALtMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable ALtMethid */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var_tltnode2 = var_nodearraylist1;
/* <var_tltnode2:nullable Object> isa nullable TLt */
cltype = type_nullable_parser_nodes__TLt.color;
idtype = type_nullable_parser_nodes__TLt.id;
if(var_tltnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tltnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tltnode2->type->type_table[cltype] == idtype;
}
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22843);
show_backtrace(1);
}
var3 = NEW_parser_nodes__ALtMethid(&type_parser_nodes__ALtMethid);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__ALtMethid__init_altmethid]))(var3, var_tltnode2) /* init_altmethid on <var3:ALtMethid>*/;
var_pmethidnode1 = var3;
var_node_list = var_pmethidnode1;
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction537> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction537#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction537__action(val* self, val* p0) {
parser__ReduceAction537__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction538#action for (self: ReduceAction538, Parser) */
void parser__ReduceAction538__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tgtnode2 /* var tgtnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AGtMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable AGtMethid */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var_tgtnode2 = var_nodearraylist1;
/* <var_tgtnode2:nullable Object> isa nullable TGt */
cltype = type_nullable_parser_nodes__TGt.color;
idtype = type_nullable_parser_nodes__TGt.id;
if(var_tgtnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tgtnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tgtnode2->type->type_table[cltype] == idtype;
}
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22858);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AGtMethid(&type_parser_nodes__AGtMethid);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__AGtMethid__init_agtmethid]))(var3, var_tgtnode2) /* init_agtmethid on <var3:AGtMethid>*/;
var_pmethidnode1 = var3;
var_node_list = var_pmethidnode1;
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction538> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction538#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction538__action(val* self, val* p0) {
parser__ReduceAction538__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction539#action for (self: ReduceAction539, Parser) */
void parser__ReduceAction539__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tllnode2 /* var tllnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : ALlMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable ALlMethid */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var_tllnode2 = var_nodearraylist1;
/* <var_tllnode2:nullable Object> isa nullable TLl */
cltype = type_nullable_parser_nodes__TLl.color;
idtype = type_nullable_parser_nodes__TLl.id;
if(var_tllnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tllnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tllnode2->type->type_table[cltype] == idtype;
}
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22873);
show_backtrace(1);
}
var3 = NEW_parser_nodes__ALlMethid(&type_parser_nodes__ALlMethid);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__ALlMethid__init_allmethid]))(var3, var_tllnode2) /* init_allmethid on <var3:ALlMethid>*/;
var_pmethidnode1 = var3;
var_node_list = var_pmethidnode1;
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction539> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction539#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction539__action(val* self, val* p0) {
parser__ReduceAction539__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction540#action for (self: ReduceAction540, Parser) */
void parser__ReduceAction540__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tggnode2 /* var tggnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AGgMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable AGgMethid */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var_tggnode2 = var_nodearraylist1;
/* <var_tggnode2:nullable Object> isa nullable TGg */
cltype = type_nullable_parser_nodes__TGg.color;
idtype = type_nullable_parser_nodes__TGg.id;
if(var_tggnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tggnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tggnode2->type->type_table[cltype] == idtype;
}
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22888);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AGgMethid(&type_parser_nodes__AGgMethid);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__AGgMethid__init_aggmethid]))(var3, var_tggnode2) /* init_aggmethid on <var3:AGgMethid>*/;
var_pmethidnode1 = var3;
var_node_list = var_pmethidnode1;
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction540> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction540#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction540__action(val* self, val* p0) {
parser__ReduceAction540__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction541#action for (self: ReduceAction541, Parser) */
void parser__ReduceAction541__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tobranode2 /* var tobranode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_tcbranode3 /* var tcbranode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : ABraMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable ABraMethid */;
long var8 /* : Int */;
long var9 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var_tobranode2 = var_nodearraylist1;
/* <var_tobranode2:nullable Object> isa nullable TObra */
cltype = type_nullable_parser_nodes__TObra.color;
idtype = type_nullable_parser_nodes__TObra.id;
if(var_tobranode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tobranode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tobranode2->type->type_table[cltype] == idtype;
}
}
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22904);
show_backtrace(1);
}
var_tcbranode3 = var_nodearraylist2;
/* <var_tcbranode3:nullable Object> isa nullable TCbra */
cltype5 = type_nullable_parser_nodes__TCbra.color;
idtype6 = type_nullable_parser_nodes__TCbra.id;
if(var_tcbranode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_tcbranode3->type->table_size) {
var4 = 0;
} else {
var4 = var_tcbranode3->type->type_table[cltype5] == idtype6;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22906);
show_backtrace(1);
}
var7 = NEW_parser_nodes__ABraMethid(&type_parser_nodes__ABraMethid);
((void (*)(val*, val*, val*))(var7->class->vft[COLOR_parser_prod__ABraMethid__init_abramethid]))(var7, var_tobranode2, var_tcbranode3) /* init_abramethid on <var7:ABraMethid>*/;
var_pmethidnode1 = var7;
var_node_list = var_pmethidnode1;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction541> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction541#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction541__action(val* self, val* p0) {
parser__ReduceAction541__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction542#action for (self: ReduceAction542, Parser) */
void parser__ReduceAction542__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tstarshipnode2 /* var tstarshipnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AStarshipMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable AStarshipMethid */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var_tstarshipnode2 = var_nodearraylist1;
/* <var_tstarshipnode2:nullable Object> isa nullable TStarship */
cltype = type_nullable_parser_nodes__TStarship.color;
idtype = type_nullable_parser_nodes__TStarship.id;
if(var_tstarshipnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tstarshipnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tstarshipnode2->type->type_table[cltype] == idtype;
}
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22922);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AStarshipMethid(&type_parser_nodes__AStarshipMethid);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__AStarshipMethid__init_astarshipmethid]))(var3, var_tstarshipnode2) /* init_astarshipmethid on <var3:AStarshipMethid>*/;
var_pmethidnode1 = var3;
var_node_list = var_pmethidnode1;
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction542> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction542#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction542__action(val* self, val* p0) {
parser__ReduceAction542__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction543#action for (self: ReduceAction543, Parser) */
void parser__ReduceAction543__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tidnode2 /* var tidnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_tassignnode3 /* var tassignnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : AAssignMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable AAssignMethid */;
long var8 /* : Int */;
long var9 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var_tidnode2 = var_nodearraylist1;
/* <var_tidnode2:nullable Object> isa nullable TId */
cltype = type_nullable_parser_nodes__TId.color;
idtype = type_nullable_parser_nodes__TId.id;
if(var_tidnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tidnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tidnode2->type->type_table[cltype] == idtype;
}
}
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22938);
show_backtrace(1);
}
var_tassignnode3 = var_nodearraylist2;
/* <var_tassignnode3:nullable Object> isa nullable TAssign */
cltype5 = type_nullable_parser_nodes__TAssign.color;
idtype6 = type_nullable_parser_nodes__TAssign.id;
if(var_tassignnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_tassignnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_tassignnode3->type->type_table[cltype5] == idtype6;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22940);
show_backtrace(1);
}
var7 = NEW_parser_nodes__AAssignMethid(&type_parser_nodes__AAssignMethid);
((void (*)(val*, val*, val*))(var7->class->vft[COLOR_parser_prod__AAssignMethid__init_aassignmethid]))(var7, var_tidnode2, var_tassignnode3) /* init_aassignmethid on <var7:AAssignMethid>*/;
var_pmethidnode1 = var7;
var_node_list = var_pmethidnode1;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction543> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction543#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction543__action(val* self, val* p0) {
parser__ReduceAction543__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction544#action for (self: ReduceAction544, Parser) */
void parser__ReduceAction544__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tobranode2 /* var tobranode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_tcbranode3 /* var tcbranode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_tassignnode4 /* var tassignnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : ABraassignMethid */;
val* var_pmethidnode1 /* var pmethidnode1: nullable ABraassignMethid */;
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
var_tobranode2 = var_nodearraylist1;
/* <var_tobranode2:nullable Object> isa nullable TObra */
cltype = type_nullable_parser_nodes__TObra.color;
idtype = type_nullable_parser_nodes__TObra.id;
if(var_tobranode2 == NULL) {
var4 = 1;
} else {
if(cltype >= var_tobranode2->type->table_size) {
var4 = 0;
} else {
var4 = var_tobranode2->type->type_table[cltype] == idtype;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22958);
show_backtrace(1);
}
var_tcbranode3 = var_nodearraylist2;
/* <var_tcbranode3:nullable Object> isa nullable TCbra */
cltype6 = type_nullable_parser_nodes__TCbra.color;
idtype7 = type_nullable_parser_nodes__TCbra.id;
if(var_tcbranode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= var_tcbranode3->type->table_size) {
var5 = 0;
} else {
var5 = var_tcbranode3->type->type_table[cltype6] == idtype7;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22960);
show_backtrace(1);
}
var_tassignnode4 = var_nodearraylist3;
/* <var_tassignnode4:nullable Object> isa nullable TAssign */
cltype9 = type_nullable_parser_nodes__TAssign.color;
idtype10 = type_nullable_parser_nodes__TAssign.id;
if(var_tassignnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_tassignnode4->type->table_size) {
var8 = 0;
} else {
var8 = var_tassignnode4->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22962);
show_backtrace(1);
}
var11 = NEW_parser_nodes__ABraassignMethid(&type_parser_nodes__ABraassignMethid);
((void (*)(val*, val*, val*, val*))(var11->class->vft[COLOR_parser_prod__ABraassignMethid__init_abraassignmethid]))(var11, var_tobranode2, var_tcbranode3, var_tassignnode4) /* init_abraassignmethid on <var11:ABraassignMethid>*/;
var_pmethidnode1 = var11;
var_node_list = var_pmethidnode1;
var12 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction544> */
var13 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var12) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var13, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction544#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction544__action(val* self, val* p0) {
parser__ReduceAction544__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction545#action for (self: ReduceAction545, Parser) */
void parser__ReduceAction545__action(val* self, val* p0) {
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
val* var_toparnode2 /* var toparnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_tcparnode4 /* var tcparnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_ptypenode5 /* var ptypenode5: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : ASignature */;
val* var_psignaturenode1 /* var psignaturenode1: nullable ASignature */;
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
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
var_listnode3 = var6;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22984);
show_backtrace(1);
}
var_tcparnode4 = var_nodearraylist3;
/* <var_tcparnode4:nullable Object> isa nullable TCpar */
cltype9 = type_nullable_parser_nodes__TCpar.color;
idtype10 = type_nullable_parser_nodes__TCpar.id;
if(var_tcparnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_tcparnode4->type->table_size) {
var8 = 0;
} else {
var8 = var_tcparnode4->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22986);
show_backtrace(1);
}
var_ptypenode5 = var_nodearraylist4;
/* <var_ptypenode5:nullable Object> isa nullable AType */
cltype12 = type_nullable_parser_nodes__AType.color;
idtype13 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode5 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_ptypenode5->type->table_size) {
var11 = 0;
} else {
var11 = var_ptypenode5->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 22988);
show_backtrace(1);
}
var14 = NEW_parser_nodes__ASignature(&type_parser_nodes__ASignature);
((void (*)(val*, val*, val*, val*, val*))(var14->class->vft[COLOR_parser_prod__ASignature__init_asignature]))(var14, var_toparnode2, var_listnode3, var_tcparnode4, var_ptypenode5) /* init_asignature on <var14:ASignature>*/;
var_psignaturenode1 = var14;
var_node_list = var_psignaturenode1;
var15 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction545> */
var16 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var15) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var16, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction545#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction545__action(val* self, val* p0) {
parser__ReduceAction545__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction546#action for (self: ReduceAction546, Parser) */
void parser__ReduceAction546__action(val* self, val* p0) {
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
val* var_toparnode2 /* var toparnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : Array[Object] */;
val* var_tcparnode5 /* var tcparnode5: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_ptypenode6 /* var ptypenode6: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : ASignature */;
val* var_psignaturenode1 /* var psignaturenode1: nullable ASignature */;
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
var_listnode4 = var7;
var_toparnode2 = var_nodearraylist1;
/* <var_toparnode2:nullable Object> isa nullable TOpar */
cltype = type_nullable_parser_nodes__TOpar.color;
idtype = type_nullable_parser_nodes__TOpar.id;
if(var_toparnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_toparnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_toparnode2->type->type_table[cltype] == idtype;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23012);
show_backtrace(1);
}
var_listnode3 = var_nodearraylist3;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23014);
show_backtrace(1);
}
var12 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction546>*/;
var_listnode4 = var12;
var_tcparnode5 = var_nodearraylist4;
/* <var_tcparnode5:nullable Object> isa nullable TCpar */
cltype14 = type_nullable_parser_nodes__TCpar.color;
idtype15 = type_nullable_parser_nodes__TCpar.id;
if(var_tcparnode5 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_tcparnode5->type->table_size) {
var13 = 0;
} else {
var13 = var_tcparnode5->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23017);
show_backtrace(1);
}
var_ptypenode6 = var_nodearraylist5;
/* <var_ptypenode6:nullable Object> isa nullable AType */
cltype17 = type_nullable_parser_nodes__AType.color;
idtype18 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode6 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_ptypenode6->type->table_size) {
var16 = 0;
} else {
var16 = var_ptypenode6->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23019);
show_backtrace(1);
}
var19 = NEW_parser_nodes__ASignature(&type_parser_nodes__ASignature);
((void (*)(val*, val*, val*, val*, val*))(var19->class->vft[COLOR_parser_prod__ASignature__init_asignature]))(var19, var_toparnode2, var_listnode4, var_tcparnode5, var_ptypenode6) /* init_asignature on <var19:ASignature>*/;
var_psignaturenode1 = var19;
var_node_list = var_psignaturenode1;
var20 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction546> */
var21 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var20) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var21, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction546#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction546__action(val* self, val* p0) {
parser__ReduceAction546__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction547#action for (self: ReduceAction547, Parser) */
void parser__ReduceAction547__action(val* self, val* p0) {
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
val* var_toparnode2 /* var toparnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_tcparnode4 /* var tcparnode4: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : ASignature */;
val* var11 /* : null */;
val* var_psignaturenode1 /* var psignaturenode1: nullable ASignature */;
long var12 /* : Int */;
long var13 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23041);
show_backtrace(1);
}
var_tcparnode4 = var_nodearraylist3;
/* <var_tcparnode4:nullable Object> isa nullable TCpar */
cltype8 = type_nullable_parser_nodes__TCpar.color;
idtype9 = type_nullable_parser_nodes__TCpar.id;
if(var_tcparnode4 == NULL) {
var7 = 1;
} else {
if(cltype8 >= var_tcparnode4->type->table_size) {
var7 = 0;
} else {
var7 = var_tcparnode4->type->type_table[cltype8] == idtype9;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23043);
show_backtrace(1);
}
var10 = NEW_parser_nodes__ASignature(&type_parser_nodes__ASignature);
var11 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var10->class->vft[COLOR_parser_prod__ASignature__init_asignature]))(var10, var_toparnode2, var_listnode3, var_tcparnode4, var11) /* init_asignature on <var10:ASignature>*/;
var_psignaturenode1 = var10;
var_node_list = var_psignaturenode1;
var12 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction547> */
var13 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var12) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var13, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction547#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction547__action(val* self, val* p0) {
parser__ReduceAction547__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction548#action for (self: ReduceAction548, Parser) */
void parser__ReduceAction548__action(val* self, val* p0) {
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
val* var_toparnode2 /* var toparnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : Array[Object] */;
val* var_tcparnode5 /* var tcparnode5: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : ASignature */;
val* var16 /* : null */;
val* var_psignaturenode1 /* var psignaturenode1: nullable ASignature */;
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
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
var_listnode4 = var6;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23066);
show_backtrace(1);
}
var_listnode3 = var_nodearraylist3;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23068);
show_backtrace(1);
}
var11 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction548>*/;
var_listnode4 = var11;
var_tcparnode5 = var_nodearraylist4;
/* <var_tcparnode5:nullable Object> isa nullable TCpar */
cltype13 = type_nullable_parser_nodes__TCpar.color;
idtype14 = type_nullable_parser_nodes__TCpar.id;
if(var_tcparnode5 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_tcparnode5->type->table_size) {
var12 = 0;
} else {
var12 = var_tcparnode5->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23071);
show_backtrace(1);
}
var15 = NEW_parser_nodes__ASignature(&type_parser_nodes__ASignature);
var16 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var15->class->vft[COLOR_parser_prod__ASignature__init_asignature]))(var15, var_toparnode2, var_listnode4, var_tcparnode5, var16) /* init_asignature on <var15:ASignature>*/;
var_psignaturenode1 = var15;
var_node_list = var_psignaturenode1;
var17 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction548> */
var18 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var17) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var18, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction548#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction548__action(val* self, val* p0) {
parser__ReduceAction548__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction549#action for (self: ReduceAction549, Parser) */
void parser__ReduceAction549__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_ptypenode5 /* var ptypenode5: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : ASignature */;
val* var6 /* : null */;
val* var7 /* : null */;
val* var_psignaturenode1 /* var psignaturenode1: nullable ASignature */;
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
var_ptypenode5 = var_nodearraylist1;
/* <var_ptypenode5:nullable Object> isa nullable AType */
cltype = type_nullable_parser_nodes__AType.color;
idtype = type_nullable_parser_nodes__AType.id;
if(var_ptypenode5 == NULL) {
var4 = 1;
} else {
if(cltype >= var_ptypenode5->type->table_size) {
var4 = 0;
} else {
var4 = var_ptypenode5->type->type_table[cltype] == idtype;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23091);
show_backtrace(1);
}
var5 = NEW_parser_nodes__ASignature(&type_parser_nodes__ASignature);
var6 = NULL;
var7 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var5->class->vft[COLOR_parser_prod__ASignature__init_asignature]))(var5, var6, var_listnode3, var7, var_ptypenode5) /* init_asignature on <var5:ASignature>*/;
var_psignaturenode1 = var5;
var_node_list = var_psignaturenode1;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction549> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction549#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction549__action(val* self, val* p0) {
parser__ReduceAction549__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction550#action for (self: ReduceAction550, Parser) */
void parser__ReduceAction550__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var3 /* : ASignature */;
val* var4 /* : null */;
val* var5 /* : null */;
val* var6 /* : null */;
val* var_psignaturenode1 /* var psignaturenode1: nullable ASignature */;
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
var3 = NEW_parser_nodes__ASignature(&type_parser_nodes__ASignature);
var4 = NULL;
var5 = NULL;
var6 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var3->class->vft[COLOR_parser_prod__ASignature__init_asignature]))(var3, var4, var_listnode3, var5, var6) /* init_asignature on <var3:ASignature>*/;
var_psignaturenode1 = var3;
var_node_list = var_psignaturenode1;
var7 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction550> */
var8 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var7) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var8, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction550#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction550__action(val* self, val* p0) {
parser__ReduceAction550__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction551#action for (self: ReduceAction551, Parser) */
void parser__ReduceAction551__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_pparamnode1 /* var pparamnode1: nullable Object */;
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
var_pparamnode1 = var_nodearraylist1;
var4 = NULL;
if (var_pparamnode1 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (var5){
((void (*)(val*, val*))(var_listnode2->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode2, var_pparamnode1) /* add on <var_listnode2:Array[Object]>*/;
} else {
}
var_node_list = var_listnode2;
var6 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction551> */
var7 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var6) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var7, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction551#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction551__action(val* self, val* p0) {
parser__ReduceAction551__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction552#action for (self: ReduceAction552, Parser) */
void parser__ReduceAction552__action(val* self, val* p0) {
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
val* var_pparamnode1 /* var pparamnode1: nullable Object */;
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
var_pparamnode1 = var_nodearraylist1;
var_listnode2 = var_nodearraylist2;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23146);
show_backtrace(1);
}
var6 = NULL;
if (var_pparamnode1 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (var7){
((void (*)(val*, val*))(var_listnode3->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode3, var_pparamnode1) /* add on <var_listnode3:Array[Object]>*/;
} else {
}
var8 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode3, var_listnode2) /* concat on <self:ReduceAction552>*/;
var_listnode3 = var8;
var_node_list = var_listnode3;
var9 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction552> */
var10 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var9) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var10, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction552#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction552__action(val* self, val* p0) {
parser__ReduceAction552__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction553#action for (self: ReduceAction553, Parser) */
void parser__ReduceAction553__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pparamnode1 /* var pparamnode1: nullable Object */;
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
var_pparamnode1 = var_nodearraylist3;
var_node_list = var_pparamnode1;
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction553> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction553#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction553__action(val* self, val* p0) {
parser__ReduceAction553__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction554#action for (self: ReduceAction554, Parser) */
void parser__ReduceAction554__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tidnode2 /* var tidnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AParam */;
val* var4 /* : null */;
val* var5 /* : null */;
val* var6 /* : null */;
val* var_pparamnode1 /* var pparamnode1: nullable AParam */;
long var7 /* : Int */;
long var8 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23175);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AParam(&type_parser_nodes__AParam);
var4 = NULL;
var5 = NULL;
var6 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var3->class->vft[COLOR_parser_prod__AParam__init_aparam]))(var3, var_tidnode2, var4, var5, var6) /* init_aparam on <var3:AParam>*/;
var_pparamnode1 = var3;
var_node_list = var_pparamnode1;
var7 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction554> */
var8 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var7) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var8, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction554#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction554__action(val* self, val* p0) {
parser__ReduceAction554__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction555#action for (self: ReduceAction555, Parser) */
void parser__ReduceAction555__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tidnode2 /* var tidnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode5 /* var pannotationsnode5: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : AParam */;
val* var8 /* : null */;
val* var9 /* : null */;
val* var_pparamnode1 /* var pparamnode1: nullable AParam */;
long var10 /* : Int */;
long var11 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var_tidnode2 = var_nodearraylist1;
/* <var_tidnode2:nullable Object> isa nullable TId */
cltype = type_nullable_parser_nodes__TId.color;
idtype = type_nullable_parser_nodes__TId.id;
if(var_tidnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tidnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tidnode2->type->type_table[cltype] == idtype;
}
}
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23194);
show_backtrace(1);
}
var_pannotationsnode5 = var_nodearraylist2;
/* <var_pannotationsnode5:nullable Object> isa nullable AAnnotations */
cltype5 = type_nullable_parser_nodes__AAnnotations.color;
idtype6 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode5 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_pannotationsnode5->type->table_size) {
var4 = 0;
} else {
var4 = var_pannotationsnode5->type->type_table[cltype5] == idtype6;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23196);
show_backtrace(1);
}
var7 = NEW_parser_nodes__AParam(&type_parser_nodes__AParam);
var8 = NULL;
var9 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var7->class->vft[COLOR_parser_prod__AParam__init_aparam]))(var7, var_tidnode2, var8, var9, var_pannotationsnode5) /* init_aparam on <var7:AParam>*/;
var_pparamnode1 = var7;
var_node_list = var_pparamnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction555> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction555#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction555__action(val* self, val* p0) {
parser__ReduceAction555__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction556#action for (self: ReduceAction556, Parser) */
void parser__ReduceAction556__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tidnode2 /* var tidnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_ptypenode3 /* var ptypenode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : AParam */;
val* var8 /* : null */;
val* var9 /* : null */;
val* var_pparamnode1 /* var pparamnode1: nullable AParam */;
long var10 /* : Int */;
long var11 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var_tidnode2 = var_nodearraylist1;
/* <var_tidnode2:nullable Object> isa nullable TId */
cltype = type_nullable_parser_nodes__TId.color;
idtype = type_nullable_parser_nodes__TId.id;
if(var_tidnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tidnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tidnode2->type->type_table[cltype] == idtype;
}
}
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23215);
show_backtrace(1);
}
var_ptypenode3 = var_nodearraylist2;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype5 = type_nullable_parser_nodes__AType.color;
idtype6 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_ptypenode3->type->table_size) {
var4 = 0;
} else {
var4 = var_ptypenode3->type->type_table[cltype5] == idtype6;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23217);
show_backtrace(1);
}
var7 = NEW_parser_nodes__AParam(&type_parser_nodes__AParam);
var8 = NULL;
var9 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var7->class->vft[COLOR_parser_prod__AParam__init_aparam]))(var7, var_tidnode2, var_ptypenode3, var8, var9) /* init_aparam on <var7:AParam>*/;
var_pparamnode1 = var7;
var_node_list = var_pparamnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction556> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction556#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction556__action(val* self, val* p0) {
parser__ReduceAction556__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction557#action for (self: ReduceAction557, Parser) */
void parser__ReduceAction557__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tidnode2 /* var tidnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_ptypenode3 /* var ptypenode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pannotationsnode5 /* var pannotationsnode5: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : AParam */;
val* var12 /* : null */;
val* var_pparamnode1 /* var pparamnode1: nullable AParam */;
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
var_tidnode2 = var_nodearraylist1;
/* <var_tidnode2:nullable Object> isa nullable TId */
cltype = type_nullable_parser_nodes__TId.color;
idtype = type_nullable_parser_nodes__TId.id;
if(var_tidnode2 == NULL) {
var4 = 1;
} else {
if(cltype >= var_tidnode2->type->table_size) {
var4 = 0;
} else {
var4 = var_tidnode2->type->type_table[cltype] == idtype;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23237);
show_backtrace(1);
}
var_ptypenode3 = var_nodearraylist3;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype6 = type_nullable_parser_nodes__AType.color;
idtype7 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= var_ptypenode3->type->table_size) {
var5 = 0;
} else {
var5 = var_ptypenode3->type->type_table[cltype6] == idtype7;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23239);
show_backtrace(1);
}
var_pannotationsnode5 = var_nodearraylist2;
/* <var_pannotationsnode5:nullable Object> isa nullable AAnnotations */
cltype9 = type_nullable_parser_nodes__AAnnotations.color;
idtype10 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode5 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_pannotationsnode5->type->table_size) {
var8 = 0;
} else {
var8 = var_pannotationsnode5->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23241);
show_backtrace(1);
}
var11 = NEW_parser_nodes__AParam(&type_parser_nodes__AParam);
var12 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var11->class->vft[COLOR_parser_prod__AParam__init_aparam]))(var11, var_tidnode2, var_ptypenode3, var12, var_pannotationsnode5) /* init_aparam on <var11:AParam>*/;
var_pparamnode1 = var11;
var_node_list = var_pparamnode1;
var13 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction557> */
var14 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var13) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var14, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction557#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction557__action(val* self, val* p0) {
parser__ReduceAction557__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction558#action for (self: ReduceAction558, Parser) */
void parser__ReduceAction558__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tidnode2 /* var tidnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_ptypenode3 /* var ptypenode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_tdotdotdotnode4 /* var tdotdotdotnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : AParam */;
val* var12 /* : null */;
val* var_pparamnode1 /* var pparamnode1: nullable AParam */;
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
var_tidnode2 = var_nodearraylist1;
/* <var_tidnode2:nullable Object> isa nullable TId */
cltype = type_nullable_parser_nodes__TId.color;
idtype = type_nullable_parser_nodes__TId.id;
if(var_tidnode2 == NULL) {
var4 = 1;
} else {
if(cltype >= var_tidnode2->type->table_size) {
var4 = 0;
} else {
var4 = var_tidnode2->type->type_table[cltype] == idtype;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23261);
show_backtrace(1);
}
var_ptypenode3 = var_nodearraylist2;
/* <var_ptypenode3:nullable Object> isa nullable AType */
cltype6 = type_nullable_parser_nodes__AType.color;
idtype7 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= var_ptypenode3->type->table_size) {
var5 = 0;
} else {
var5 = var_ptypenode3->type->type_table[cltype6] == idtype7;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23263);
show_backtrace(1);
}
var_tdotdotdotnode4 = var_nodearraylist3;
/* <var_tdotdotdotnode4:nullable Object> isa nullable TDotdotdot */
cltype9 = type_nullable_parser_nodes__TDotdotdot.color;
idtype10 = type_nullable_parser_nodes__TDotdotdot.id;
if(var_tdotdotdotnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_tdotdotdotnode4->type->table_size) {
var8 = 0;
} else {
var8 = var_tdotdotdotnode4->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23265);
show_backtrace(1);
}
var11 = NEW_parser_nodes__AParam(&type_parser_nodes__AParam);
var12 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var11->class->vft[COLOR_parser_prod__AParam__init_aparam]))(var11, var_tidnode2, var_ptypenode3, var_tdotdotdotnode4, var12) /* init_aparam on <var11:AParam>*/;
var_pparamnode1 = var11;
var_node_list = var_pparamnode1;
var13 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction558> */
var14 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var13) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var14, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction558#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction558__action(val* self, val* p0) {
parser__ReduceAction558__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction559#action for (self: ReduceAction559, Parser) */
void parser__ReduceAction559__action(val* self, val* p0) {
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
val* var_tidnode2 /* var tidnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_ptypenode3 /* var ptypenode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var_tdotdotdotnode4 /* var tdotdotdotnode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_pannotationsnode5 /* var pannotationsnode5: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : AParam */;
val* var_pparamnode1 /* var pparamnode1: nullable AParam */;
long var16 /* : Int */;
long var17 /* : Int */;
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
var_tidnode2 = var_nodearraylist1;
/* <var_tidnode2:nullable Object> isa nullable TId */
cltype = type_nullable_parser_nodes__TId.color;
idtype = type_nullable_parser_nodes__TId.id;
if(var_tidnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= var_tidnode2->type->table_size) {
var5 = 0;
} else {
var5 = var_tidnode2->type->type_table[cltype] == idtype;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23286);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23288);
show_backtrace(1);
}
var_tdotdotdotnode4 = var_nodearraylist4;
/* <var_tdotdotdotnode4:nullable Object> isa nullable TDotdotdot */
cltype10 = type_nullable_parser_nodes__TDotdotdot.color;
idtype11 = type_nullable_parser_nodes__TDotdotdot.id;
if(var_tdotdotdotnode4 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_tdotdotdotnode4->type->table_size) {
var9 = 0;
} else {
var9 = var_tdotdotdotnode4->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23290);
show_backtrace(1);
}
var_pannotationsnode5 = var_nodearraylist2;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23292);
show_backtrace(1);
}
var15 = NEW_parser_nodes__AParam(&type_parser_nodes__AParam);
((void (*)(val*, val*, val*, val*, val*))(var15->class->vft[COLOR_parser_prod__AParam__init_aparam]))(var15, var_tidnode2, var_ptypenode3, var_tdotdotdotnode4, var_pannotationsnode5) /* init_aparam on <var15:AParam>*/;
var_pparamnode1 = var15;
var_node_list = var_pparamnode1;
var16 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction559> */
var17 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var16) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var17, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction559#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction559__action(val* self, val* p0) {
parser__ReduceAction559__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction560#action for (self: ReduceAction560, Parser) */
void parser__ReduceAction560__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AReturnExpr */;
val* var4 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable AReturnExpr */;
long var5 /* : Int */;
long var6 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var_pexprnode3 = var_nodearraylist1;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode3 == NULL) {
var2 = 1;
} else {
if(cltype >= var_pexprnode3->type->table_size) {
var2 = 0;
} else {
var2 = var_pexprnode3->type->type_table[cltype] == idtype;
}
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23310);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AReturnExpr(&type_parser_nodes__AReturnExpr);
var4 = NULL;
((void (*)(val*, val*, val*))(var3->class->vft[COLOR_parser_prod__AReturnExpr__init_areturnexpr]))(var3, var4, var_pexprnode3) /* init_areturnexpr on <var3:AReturnExpr>*/;
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction560> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction560#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction560__action(val* self, val* p0) {
parser__ReduceAction560__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction561#action for (self: ReduceAction561, Parser) */
void parser__ReduceAction561__action(val* self, val* p0) {
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
val* var_tkwimportnode2 /* var tkwimportnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_pexterncallnode3 /* var pexterncallnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : null */;
short int var10 /* : Bool */;
val* var11 /* : AExternCalls */;
val* var_pexterncallsnode1 /* var pexterncallsnode1: nullable AExternCalls */;
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
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
var_listnode4 = var4;
var_tkwimportnode2 = var_nodearraylist1;
/* <var_tkwimportnode2:nullable Object> isa nullable TKwimport */
cltype = type_nullable_parser_nodes__TKwimport.color;
idtype = type_nullable_parser_nodes__TKwimport.id;
if(var_tkwimportnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= var_tkwimportnode2->type->table_size) {
var5 = 0;
} else {
var5 = var_tkwimportnode2->type->type_table[cltype] == idtype;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23329);
show_backtrace(1);
}
var_pexterncallnode3 = var_nodearraylist3;
/* <var_pexterncallnode3:nullable Object> isa nullable AExternCall */
cltype7 = type_nullable_parser_nodes__AExternCall.color;
idtype8 = type_nullable_parser_nodes__AExternCall.id;
if(var_pexterncallnode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_pexterncallnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_pexterncallnode3->type->type_table[cltype7] == idtype8;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23331);
show_backtrace(1);
}
var9 = NULL;
if (var_pexterncallnode3 == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (var10){
((void (*)(val*, val*))(var_listnode4->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode4, var_pexterncallnode3) /* add on <var_listnode4:Array[Object]>*/;
} else {
}
var11 = NEW_parser_nodes__AExternCalls(&type_parser_nodes__AExternCalls);
((void (*)(val*, val*, val*))(var11->class->vft[COLOR_parser_prod__AExternCalls__init_aexterncalls]))(var11, var_tkwimportnode2, var_listnode4) /* init_aexterncalls on <var11:AExternCalls>*/;
var_pexterncallsnode1 = var11;
var_node_list = var_pexterncallsnode1;
var12 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction561> */
var13 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var12) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var13, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction561#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction561__action(val* self, val* p0) {
parser__ReduceAction561__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction562#action for (self: ReduceAction562, Parser) */
void parser__ReduceAction562__action(val* self, val* p0) {
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
val* var_tkwimportnode2 /* var tkwimportnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_pexterncallnode3 /* var pexterncallnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : null */;
short int var14 /* : Bool */;
val* var15 /* : Array[Object] */;
val* var16 /* : AExternCalls */;
val* var_pexterncallsnode1 /* var pexterncallsnode1: nullable AExternCalls */;
long var17 /* : Int */;
long var18 /* : Int */;
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
var_tkwimportnode2 = var_nodearraylist1;
/* <var_tkwimportnode2:nullable Object> isa nullable TKwimport */
cltype = type_nullable_parser_nodes__TKwimport.color;
idtype = type_nullable_parser_nodes__TKwimport.id;
if(var_tkwimportnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= var_tkwimportnode2->type->table_size) {
var6 = 0;
} else {
var6 = var_tkwimportnode2->type->type_table[cltype] == idtype;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23354);
show_backtrace(1);
}
var_pexterncallnode3 = var_nodearraylist3;
/* <var_pexterncallnode3:nullable Object> isa nullable AExternCall */
cltype8 = type_nullable_parser_nodes__AExternCall.color;
idtype9 = type_nullable_parser_nodes__AExternCall.id;
if(var_pexterncallnode3 == NULL) {
var7 = 1;
} else {
if(cltype8 >= var_pexterncallnode3->type->table_size) {
var7 = 0;
} else {
var7 = var_pexterncallnode3->type->type_table[cltype8] == idtype9;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23356);
show_backtrace(1);
}
var_listnode4 = var_nodearraylist4;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23358);
show_backtrace(1);
}
var13 = NULL;
if (var_pexterncallnode3 == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (var14){
((void (*)(val*, val*))(var_listnode5->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode5, var_pexterncallnode3) /* add on <var_listnode5:Array[Object]>*/;
} else {
}
var15 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode4) /* concat on <self:ReduceAction562>*/;
var_listnode5 = var15;
var16 = NEW_parser_nodes__AExternCalls(&type_parser_nodes__AExternCalls);
((void (*)(val*, val*, val*))(var16->class->vft[COLOR_parser_prod__AExternCalls__init_aexterncalls]))(var16, var_tkwimportnode2, var_listnode5) /* init_aexterncalls on <var16:AExternCalls>*/;
var_pexterncallsnode1 = var16;
var_node_list = var_pexterncallsnode1;
var17 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction562> */
var18 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var17) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var18, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction562#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction562__action(val* self, val* p0) {
parser__ReduceAction562__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction563#action for (self: ReduceAction563, Parser) */
void parser__ReduceAction563__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable Object */;
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
var_pexterncallnode1 = var_nodearraylist3;
var_node_list = var_pexterncallnode1;
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction563> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction563#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction563__action(val* self, val* p0) {
parser__ReduceAction563__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction564#action for (self: ReduceAction564, Parser) */
void parser__ReduceAction564__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable Object */;
long var2 /* : Int */;
long var3 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var_pexterncallnode1 = var_nodearraylist1;
var_node_list = var_pexterncallnode1;
var2 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction564> */
var3 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var2) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var3, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction564#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction564__action(val* self, val* p0) {
parser__ReduceAction564__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction566#action for (self: ReduceAction566, Parser) */
void parser__ReduceAction566__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwsupernode2 /* var tkwsupernode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : ASuperExternCall */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable ASuperExternCall */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var_tkwsupernode2 = var_nodearraylist1;
/* <var_tkwsupernode2:nullable Object> isa nullable TKwsuper */
cltype = type_nullable_parser_nodes__TKwsuper.color;
idtype = type_nullable_parser_nodes__TKwsuper.id;
if(var_tkwsupernode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tkwsupernode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tkwsupernode2->type->type_table[cltype] == idtype;
}
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23402);
show_backtrace(1);
}
var3 = NEW_parser_nodes__ASuperExternCall(&type_parser_nodes__ASuperExternCall);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__ASuperExternCall__init_asuperexterncall]))(var3, var_tkwsupernode2) /* init_asuperexterncall on <var3:ASuperExternCall>*/;
var_pexterncallnode1 = var3;
var_node_list = var_pexterncallnode1;
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction566> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction566#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction566__action(val* self, val* p0) {
parser__ReduceAction566__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction567#action for (self: ReduceAction567, Parser) */
void parser__ReduceAction567__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pmethidnode2 /* var pmethidnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : ALocalPropExternCall */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable ALocalPropExternCall */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var_pmethidnode2 = var_nodearraylist1;
/* <var_pmethidnode2:nullable Object> isa nullable AMethid */
cltype = type_nullable_parser_nodes__AMethid.color;
idtype = type_nullable_parser_nodes__AMethid.id;
if(var_pmethidnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_pmethidnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_pmethidnode2->type->type_table[cltype] == idtype;
}
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23417);
show_backtrace(1);
}
var3 = NEW_parser_nodes__ALocalPropExternCall(&type_parser_nodes__ALocalPropExternCall);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__ALocalPropExternCall__init_alocalpropexterncall]))(var3, var_pmethidnode2) /* init_alocalpropexterncall on <var3:ALocalPropExternCall>*/;
var_pexterncallnode1 = var3;
var_node_list = var_pexterncallnode1;
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction567> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction567#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction567__action(val* self, val* p0) {
parser__ReduceAction567__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction568#action for (self: ReduceAction568, Parser) */
void parser__ReduceAction568__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_ptypenode2 /* var ptypenode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_pmethidnode4 /* var pmethidnode4: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : AFullPropExternCall */;
val* var9 /* : null */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable AFullPropExternCall */;
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
var_ptypenode2 = var_nodearraylist1;
/* <var_ptypenode2:nullable Object> isa nullable AType */
cltype = type_nullable_parser_nodes__AType.color;
idtype = type_nullable_parser_nodes__AType.id;
if(var_ptypenode2 == NULL) {
var4 = 1;
} else {
if(cltype >= var_ptypenode2->type->table_size) {
var4 = 0;
} else {
var4 = var_ptypenode2->type->type_table[cltype] == idtype;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23434);
show_backtrace(1);
}
var_pmethidnode4 = var_nodearraylist3;
/* <var_pmethidnode4:nullable Object> isa nullable AMethid */
cltype6 = type_nullable_parser_nodes__AMethid.color;
idtype7 = type_nullable_parser_nodes__AMethid.id;
if(var_pmethidnode4 == NULL) {
var5 = 1;
} else {
if(cltype6 >= var_pmethidnode4->type->table_size) {
var5 = 0;
} else {
var5 = var_pmethidnode4->type->type_table[cltype6] == idtype7;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23436);
show_backtrace(1);
}
var8 = NEW_parser_nodes__AFullPropExternCall(&type_parser_nodes__AFullPropExternCall);
var9 = NULL;
((void (*)(val*, val*, val*, val*))(var8->class->vft[COLOR_parser_prod__AFullPropExternCall__init_afullpropexterncall]))(var8, var_ptypenode2, var9, var_pmethidnode4) /* init_afullpropexterncall on <var8:AFullPropExternCall>*/;
var_pexterncallnode1 = var8;
var_node_list = var_pexterncallnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction568> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction568#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction568__action(val* self, val* p0) {
parser__ReduceAction568__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction569#action for (self: ReduceAction569, Parser) */
void parser__ReduceAction569__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_ptypenode2 /* var ptypenode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_tdotnode3 /* var tdotnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pmethidnode4 /* var pmethidnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : AFullPropExternCall */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable AFullPropExternCall */;
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
var_ptypenode2 = var_nodearraylist1;
/* <var_ptypenode2:nullable Object> isa nullable AType */
cltype = type_nullable_parser_nodes__AType.color;
idtype = type_nullable_parser_nodes__AType.id;
if(var_ptypenode2 == NULL) {
var4 = 1;
} else {
if(cltype >= var_ptypenode2->type->table_size) {
var4 = 0;
} else {
var4 = var_ptypenode2->type->type_table[cltype] == idtype;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23455);
show_backtrace(1);
}
var_tdotnode3 = var_nodearraylist2;
/* <var_tdotnode3:nullable Object> isa nullable TDot */
cltype6 = type_nullable_parser_nodes__TDot.color;
idtype7 = type_nullable_parser_nodes__TDot.id;
if(var_tdotnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= var_tdotnode3->type->table_size) {
var5 = 0;
} else {
var5 = var_tdotnode3->type->type_table[cltype6] == idtype7;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23457);
show_backtrace(1);
}
var_pmethidnode4 = var_nodearraylist3;
/* <var_pmethidnode4:nullable Object> isa nullable AMethid */
cltype9 = type_nullable_parser_nodes__AMethid.color;
idtype10 = type_nullable_parser_nodes__AMethid.id;
if(var_pmethidnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_pmethidnode4->type->table_size) {
var8 = 0;
} else {
var8 = var_pmethidnode4->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23459);
show_backtrace(1);
}
var11 = NEW_parser_nodes__AFullPropExternCall(&type_parser_nodes__AFullPropExternCall);
((void (*)(val*, val*, val*, val*))(var11->class->vft[COLOR_parser_prod__AFullPropExternCall__init_afullpropexterncall]))(var11, var_ptypenode2, var_tdotnode3, var_pmethidnode4) /* init_afullpropexterncall on <var11:AFullPropExternCall>*/;
var_pexterncallnode1 = var11;
var_node_list = var_pexterncallnode1;
var12 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction569> */
var13 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var12) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var13, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction569#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction569__action(val* self, val* p0) {
parser__ReduceAction569__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction570#action for (self: ReduceAction570, Parser) */
void parser__ReduceAction570__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_ptypenode2 /* var ptypenode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AInitPropExternCall */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable AInitPropExternCall */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23476);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AInitPropExternCall(&type_parser_nodes__AInitPropExternCall);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__AInitPropExternCall__init_ainitpropexterncall]))(var3, var_ptypenode2) /* init_ainitpropexterncall on <var3:AInitPropExternCall>*/;
var_pexterncallnode1 = var3;
var_node_list = var_pexterncallnode1;
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction570> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction570#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction570__action(val* self, val* p0) {
parser__ReduceAction570__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction571#action for (self: ReduceAction571, Parser) */
void parser__ReduceAction571__action(val* self, val* p0) {
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
val* var_ptypenode2 /* var ptypenode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_tkwasnode4 /* var tkwasnode4: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_ptypenode5 /* var ptypenode5: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : ACastAsExternCall */;
val* var17 /* : null */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable ACastAsExternCall */;
long var18 /* : Int */;
long var19 /* : Int */;
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
var_ptypenode2 = var_nodearraylist1;
/* <var_ptypenode2:nullable Object> isa nullable AType */
cltype = type_nullable_parser_nodes__AType.color;
idtype = type_nullable_parser_nodes__AType.id;
if(var_ptypenode2 == NULL) {
var9 = 1;
} else {
if(cltype >= var_ptypenode2->type->table_size) {
var9 = 0;
} else {
var9 = var_ptypenode2->type->type_table[cltype] == idtype;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23498);
show_backtrace(1);
}
var_tkwasnode4 = var_nodearraylist2;
/* <var_tkwasnode4:nullable Object> isa nullable TKwas */
cltype11 = type_nullable_parser_nodes__TKwas.color;
idtype12 = type_nullable_parser_nodes__TKwas.id;
if(var_tkwasnode4 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_tkwasnode4->type->table_size) {
var10 = 0;
} else {
var10 = var_tkwasnode4->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23500);
show_backtrace(1);
}
var_ptypenode5 = var_nodearraylist6;
/* <var_ptypenode5:nullable Object> isa nullable AType */
cltype14 = type_nullable_parser_nodes__AType.color;
idtype15 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode5 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_ptypenode5->type->table_size) {
var13 = 0;
} else {
var13 = var_ptypenode5->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23502);
show_backtrace(1);
}
var16 = NEW_parser_nodes__ACastAsExternCall(&type_parser_nodes__ACastAsExternCall);
var17 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var16->class->vft[COLOR_parser_prod__ACastAsExternCall__init_acastasexterncall]))(var16, var_ptypenode2, var17, var_tkwasnode4, var_ptypenode5) /* init_acastasexterncall on <var16:ACastAsExternCall>*/;
var_pexterncallnode1 = var16;
var_node_list = var_pexterncallnode1;
var18 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction571> */
var19 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var18) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var19, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction571#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction571__action(val* self, val* p0) {
parser__ReduceAction571__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction572#action for (self: ReduceAction572, Parser) */
void parser__ReduceAction572__action(val* self, val* p0) {
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
val* var_ptypenode2 /* var ptypenode2: nullable Object */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var_tdotnode3 /* var tdotnode3: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_tkwasnode4 /* var tkwasnode4: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_ptypenode5 /* var ptypenode5: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var20 /* : ACastAsExternCall */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable ACastAsExternCall */;
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
var_ptypenode2 = var_nodearraylist1;
/* <var_ptypenode2:nullable Object> isa nullable AType */
cltype = type_nullable_parser_nodes__AType.color;
idtype = type_nullable_parser_nodes__AType.id;
if(var_ptypenode2 == NULL) {
var10 = 1;
} else {
if(cltype >= var_ptypenode2->type->table_size) {
var10 = 0;
} else {
var10 = var_ptypenode2->type->type_table[cltype] == idtype;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23528);
show_backtrace(1);
}
var_tdotnode3 = var_nodearraylist2;
/* <var_tdotnode3:nullable Object> isa nullable TDot */
cltype12 = type_nullable_parser_nodes__TDot.color;
idtype13 = type_nullable_parser_nodes__TDot.id;
if(var_tdotnode3 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_tdotnode3->type->table_size) {
var11 = 0;
} else {
var11 = var_tdotnode3->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23530);
show_backtrace(1);
}
var_tkwasnode4 = var_nodearraylist3;
/* <var_tkwasnode4:nullable Object> isa nullable TKwas */
cltype15 = type_nullable_parser_nodes__TKwas.color;
idtype16 = type_nullable_parser_nodes__TKwas.id;
if(var_tkwasnode4 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_tkwasnode4->type->table_size) {
var14 = 0;
} else {
var14 = var_tkwasnode4->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23532);
show_backtrace(1);
}
var_ptypenode5 = var_nodearraylist7;
/* <var_ptypenode5:nullable Object> isa nullable AType */
cltype18 = type_nullable_parser_nodes__AType.color;
idtype19 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode5 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_ptypenode5->type->table_size) {
var17 = 0;
} else {
var17 = var_ptypenode5->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23534);
show_backtrace(1);
}
var20 = NEW_parser_nodes__ACastAsExternCall(&type_parser_nodes__ACastAsExternCall);
((void (*)(val*, val*, val*, val*, val*))(var20->class->vft[COLOR_parser_prod__ACastAsExternCall__init_acastasexterncall]))(var20, var_ptypenode2, var_tdotnode3, var_tkwasnode4, var_ptypenode5) /* init_acastasexterncall on <var20:ACastAsExternCall>*/;
var_pexterncallnode1 = var20;
var_node_list = var_pexterncallnode1;
var21 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction572> */
var22 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var21) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var22, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction572#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction572__action(val* self, val* p0) {
parser__ReduceAction572__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction573#action for (self: ReduceAction573, Parser) */
void parser__ReduceAction573__action(val* self, val* p0) {
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
val* var_ptypenode2 /* var ptypenode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_tkwasnode3 /* var tkwasnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var_tkwnullablenode4 /* var tkwnullablenode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : AAsNullableExternCall */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable AAsNullableExternCall */;
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
var_ptypenode2 = var_nodearraylist1;
/* <var_ptypenode2:nullable Object> isa nullable AType */
cltype = type_nullable_parser_nodes__AType.color;
idtype = type_nullable_parser_nodes__AType.id;
if(var_ptypenode2 == NULL) {
var5 = 1;
} else {
if(cltype >= var_ptypenode2->type->table_size) {
var5 = 0;
} else {
var5 = var_ptypenode2->type->type_table[cltype] == idtype;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23555);
show_backtrace(1);
}
var_tkwasnode3 = var_nodearraylist2;
/* <var_tkwasnode3:nullable Object> isa nullable TKwas */
cltype7 = type_nullable_parser_nodes__TKwas.color;
idtype8 = type_nullable_parser_nodes__TKwas.id;
if(var_tkwasnode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_tkwasnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_tkwasnode3->type->type_table[cltype7] == idtype8;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23557);
show_backtrace(1);
}
var_tkwnullablenode4 = var_nodearraylist4;
/* <var_tkwnullablenode4:nullable Object> isa nullable TKwnullable */
cltype10 = type_nullable_parser_nodes__TKwnullable.color;
idtype11 = type_nullable_parser_nodes__TKwnullable.id;
if(var_tkwnullablenode4 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_tkwnullablenode4->type->table_size) {
var9 = 0;
} else {
var9 = var_tkwnullablenode4->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23559);
show_backtrace(1);
}
var12 = NEW_parser_nodes__AAsNullableExternCall(&type_parser_nodes__AAsNullableExternCall);
((void (*)(val*, val*, val*, val*))(var12->class->vft[COLOR_parser_prod__AAsNullableExternCall__init_aasnullableexterncall]))(var12, var_ptypenode2, var_tkwasnode3, var_tkwnullablenode4) /* init_aasnullableexterncall on <var12:AAsNullableExternCall>*/;
var_pexterncallnode1 = var12;
var_node_list = var_pexterncallnode1;
var13 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction573> */
var14 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var13) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var14, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction573#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction573__action(val* self, val* p0) {
parser__ReduceAction573__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction574#action for (self: ReduceAction574, Parser) */
void parser__ReduceAction574__action(val* self, val* p0) {
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
val* var_ptypenode2 /* var ptypenode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_tkwasnode3 /* var tkwasnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_tkwnullablenode4 /* var tkwnullablenode4: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : AAsNullableExternCall */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable AAsNullableExternCall */;
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
var_ptypenode2 = var_nodearraylist1;
/* <var_ptypenode2:nullable Object> isa nullable AType */
cltype = type_nullable_parser_nodes__AType.color;
idtype = type_nullable_parser_nodes__AType.id;
if(var_ptypenode2 == NULL) {
var6 = 1;
} else {
if(cltype >= var_ptypenode2->type->table_size) {
var6 = 0;
} else {
var6 = var_ptypenode2->type->type_table[cltype] == idtype;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23580);
show_backtrace(1);
}
var_tkwasnode3 = var_nodearraylist3;
/* <var_tkwasnode3:nullable Object> isa nullable TKwas */
cltype8 = type_nullable_parser_nodes__TKwas.color;
idtype9 = type_nullable_parser_nodes__TKwas.id;
if(var_tkwasnode3 == NULL) {
var7 = 1;
} else {
if(cltype8 >= var_tkwasnode3->type->table_size) {
var7 = 0;
} else {
var7 = var_tkwasnode3->type->type_table[cltype8] == idtype9;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23582);
show_backtrace(1);
}
var_tkwnullablenode4 = var_nodearraylist5;
/* <var_tkwnullablenode4:nullable Object> isa nullable TKwnullable */
cltype11 = type_nullable_parser_nodes__TKwnullable.color;
idtype12 = type_nullable_parser_nodes__TKwnullable.id;
if(var_tkwnullablenode4 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_tkwnullablenode4->type->table_size) {
var10 = 0;
} else {
var10 = var_tkwnullablenode4->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23584);
show_backtrace(1);
}
var13 = NEW_parser_nodes__AAsNullableExternCall(&type_parser_nodes__AAsNullableExternCall);
((void (*)(val*, val*, val*, val*))(var13->class->vft[COLOR_parser_prod__AAsNullableExternCall__init_aasnullableexterncall]))(var13, var_ptypenode2, var_tkwasnode3, var_tkwnullablenode4) /* init_aasnullableexterncall on <var13:AAsNullableExternCall>*/;
var_pexterncallnode1 = var13;
var_node_list = var_pexterncallnode1;
var14 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction574> */
var15 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var14) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var15, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction574#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction574__action(val* self, val* p0) {
parser__ReduceAction574__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction575#action for (self: ReduceAction575, Parser) */
void parser__ReduceAction575__action(val* self, val* p0) {
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
val* var_ptypenode2 /* var ptypenode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_tkwasnode3 /* var tkwasnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_tkwnotnode4 /* var tkwnotnode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_tkwnullablenode5 /* var tkwnullablenode5: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : AAsNotNullableExternCall */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable AAsNotNullableExternCall */;
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
var_ptypenode2 = var_nodearraylist1;
/* <var_ptypenode2:nullable Object> isa nullable AType */
cltype = type_nullable_parser_nodes__AType.color;
idtype = type_nullable_parser_nodes__AType.id;
if(var_ptypenode2 == NULL) {
var7 = 1;
} else {
if(cltype >= var_ptypenode2->type->table_size) {
var7 = 0;
} else {
var7 = var_ptypenode2->type->type_table[cltype] == idtype;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23606);
show_backtrace(1);
}
var_tkwasnode3 = var_nodearraylist2;
/* <var_tkwasnode3:nullable Object> isa nullable TKwas */
cltype9 = type_nullable_parser_nodes__TKwas.color;
idtype10 = type_nullable_parser_nodes__TKwas.id;
if(var_tkwasnode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_tkwasnode3->type->table_size) {
var8 = 0;
} else {
var8 = var_tkwasnode3->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23608);
show_backtrace(1);
}
var_tkwnotnode4 = var_nodearraylist4;
/* <var_tkwnotnode4:nullable Object> isa nullable TKwnot */
cltype12 = type_nullable_parser_nodes__TKwnot.color;
idtype13 = type_nullable_parser_nodes__TKwnot.id;
if(var_tkwnotnode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_tkwnotnode4->type->table_size) {
var11 = 0;
} else {
var11 = var_tkwnotnode4->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23610);
show_backtrace(1);
}
var_tkwnullablenode5 = var_nodearraylist6;
/* <var_tkwnullablenode5:nullable Object> isa nullable TKwnullable */
cltype15 = type_nullable_parser_nodes__TKwnullable.color;
idtype16 = type_nullable_parser_nodes__TKwnullable.id;
if(var_tkwnullablenode5 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_tkwnullablenode5->type->table_size) {
var14 = 0;
} else {
var14 = var_tkwnullablenode5->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23612);
show_backtrace(1);
}
var17 = NEW_parser_nodes__AAsNotNullableExternCall(&type_parser_nodes__AAsNotNullableExternCall);
((void (*)(val*, val*, val*, val*, val*))(var17->class->vft[COLOR_parser_prod__AAsNotNullableExternCall__init_aasnotnullableexterncall]))(var17, var_ptypenode2, var_tkwasnode3, var_tkwnotnode4, var_tkwnullablenode5) /* init_aasnotnullableexterncall on <var17:AAsNotNullableExternCall>*/;
var_pexterncallnode1 = var17;
var_node_list = var_pexterncallnode1;
var18 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction575> */
var19 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var18) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var19, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction575#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction575__action(val* self, val* p0) {
parser__ReduceAction575__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction576#action for (self: ReduceAction576, Parser) */
void parser__ReduceAction576__action(val* self, val* p0) {
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
val* var_ptypenode2 /* var ptypenode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_tkwasnode3 /* var tkwasnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_tkwnotnode4 /* var tkwnotnode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_tkwnullablenode5 /* var tkwnullablenode5: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : AAsNotNullableExternCall */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable AAsNotNullableExternCall */;
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
var_ptypenode2 = var_nodearraylist1;
/* <var_ptypenode2:nullable Object> isa nullable AType */
cltype = type_nullable_parser_nodes__AType.color;
idtype = type_nullable_parser_nodes__AType.id;
if(var_ptypenode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_ptypenode2->type->table_size) {
var8 = 0;
} else {
var8 = var_ptypenode2->type->type_table[cltype] == idtype;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23636);
show_backtrace(1);
}
var_tkwasnode3 = var_nodearraylist3;
/* <var_tkwasnode3:nullable Object> isa nullable TKwas */
cltype10 = type_nullable_parser_nodes__TKwas.color;
idtype11 = type_nullable_parser_nodes__TKwas.id;
if(var_tkwasnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_tkwasnode3->type->table_size) {
var9 = 0;
} else {
var9 = var_tkwasnode3->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23638);
show_backtrace(1);
}
var_tkwnotnode4 = var_nodearraylist5;
/* <var_tkwnotnode4:nullable Object> isa nullable TKwnot */
cltype13 = type_nullable_parser_nodes__TKwnot.color;
idtype14 = type_nullable_parser_nodes__TKwnot.id;
if(var_tkwnotnode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_tkwnotnode4->type->table_size) {
var12 = 0;
} else {
var12 = var_tkwnotnode4->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23640);
show_backtrace(1);
}
var_tkwnullablenode5 = var_nodearraylist7;
/* <var_tkwnullablenode5:nullable Object> isa nullable TKwnullable */
cltype16 = type_nullable_parser_nodes__TKwnullable.color;
idtype17 = type_nullable_parser_nodes__TKwnullable.id;
if(var_tkwnullablenode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_tkwnullablenode5->type->table_size) {
var15 = 0;
} else {
var15 = var_tkwnullablenode5->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23642);
show_backtrace(1);
}
var18 = NEW_parser_nodes__AAsNotNullableExternCall(&type_parser_nodes__AAsNotNullableExternCall);
((void (*)(val*, val*, val*, val*, val*))(var18->class->vft[COLOR_parser_prod__AAsNotNullableExternCall__init_aasnotnullableexterncall]))(var18, var_ptypenode2, var_tkwasnode3, var_tkwnotnode4, var_tkwnullablenode5) /* init_aasnotnullableexterncall on <var18:AAsNotNullableExternCall>*/;
var_pexterncallnode1 = var18;
var_node_list = var_pexterncallnode1;
var19 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction576> */
var20 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var19) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var20, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction576#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction576__action(val* self, val* p0) {
parser__ReduceAction576__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction577#action for (self: ReduceAction577, Parser) */
void parser__ReduceAction577__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwinnode2 /* var tkwinnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_tstringnode3 /* var tstringnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : AInLanguage */;
val* var_pinlanguagenode1 /* var pinlanguagenode1: nullable AInLanguage */;
long var8 /* : Int */;
long var9 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var_tkwinnode2 = var_nodearraylist1;
/* <var_tkwinnode2:nullable Object> isa nullable TKwin */
cltype = type_nullable_parser_nodes__TKwin.color;
idtype = type_nullable_parser_nodes__TKwin.id;
if(var_tkwinnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tkwinnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tkwinnode2->type->type_table[cltype] == idtype;
}
}
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23661);
show_backtrace(1);
}
var_tstringnode3 = var_nodearraylist2;
/* <var_tstringnode3:nullable Object> isa nullable TString */
cltype5 = type_nullable_parser_nodes__TString.color;
idtype6 = type_nullable_parser_nodes__TString.id;
if(var_tstringnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_tstringnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_tstringnode3->type->type_table[cltype5] == idtype6;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23663);
show_backtrace(1);
}
var7 = NEW_parser_nodes__AInLanguage(&type_parser_nodes__AInLanguage);
((void (*)(val*, val*, val*))(var7->class->vft[COLOR_parser_prod__AInLanguage__init_ainlanguage]))(var7, var_tkwinnode2, var_tstringnode3) /* init_ainlanguage on <var7:AInLanguage>*/;
var_pinlanguagenode1 = var7;
var_node_list = var_pinlanguagenode1;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction577> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction577#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction577__action(val* self, val* p0) {
parser__ReduceAction577__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction578#action for (self: ReduceAction578, Parser) */
void parser__ReduceAction578__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_texterncodesegmentnode3 /* var texterncodesegmentnode3: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AExternCodeBlock */;
val* var4 /* : null */;
val* var_pexterncodeblocknode1 /* var pexterncodeblocknode1: nullable AExternCodeBlock */;
long var5 /* : Int */;
long var6 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var_texterncodesegmentnode3 = var_nodearraylist1;
/* <var_texterncodesegmentnode3:nullable Object> isa nullable TExternCodeSegment */
cltype = type_nullable_parser_nodes__TExternCodeSegment.color;
idtype = type_nullable_parser_nodes__TExternCodeSegment.id;
if(var_texterncodesegmentnode3 == NULL) {
var2 = 1;
} else {
if(cltype >= var_texterncodesegmentnode3->type->table_size) {
var2 = 0;
} else {
var2 = var_texterncodesegmentnode3->type->type_table[cltype] == idtype;
}
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23679);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AExternCodeBlock(&type_parser_nodes__AExternCodeBlock);
var4 = NULL;
((void (*)(val*, val*, val*))(var3->class->vft[COLOR_parser_prod__AExternCodeBlock__init_aexterncodeblock]))(var3, var4, var_texterncodesegmentnode3) /* init_aexterncodeblock on <var3:AExternCodeBlock>*/;
var_pexterncodeblocknode1 = var3;
var_node_list = var_pexterncodeblocknode1;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction578> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction578#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction578__action(val* self, val* p0) {
parser__ReduceAction578__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction579#action for (self: ReduceAction579, Parser) */
void parser__ReduceAction579__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pinlanguagenode2 /* var pinlanguagenode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_texterncodesegmentnode3 /* var texterncodesegmentnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : AExternCodeBlock */;
val* var_pexterncodeblocknode1 /* var pexterncodeblocknode1: nullable AExternCodeBlock */;
long var8 /* : Int */;
long var9 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var_pinlanguagenode2 = var_nodearraylist1;
/* <var_pinlanguagenode2:nullable Object> isa nullable AInLanguage */
cltype = type_nullable_parser_nodes__AInLanguage.color;
idtype = type_nullable_parser_nodes__AInLanguage.id;
if(var_pinlanguagenode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_pinlanguagenode2->type->table_size) {
var3 = 0;
} else {
var3 = var_pinlanguagenode2->type->type_table[cltype] == idtype;
}
}
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23696);
show_backtrace(1);
}
var_texterncodesegmentnode3 = var_nodearraylist2;
/* <var_texterncodesegmentnode3:nullable Object> isa nullable TExternCodeSegment */
cltype5 = type_nullable_parser_nodes__TExternCodeSegment.color;
idtype6 = type_nullable_parser_nodes__TExternCodeSegment.id;
if(var_texterncodesegmentnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_texterncodesegmentnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_texterncodesegmentnode3->type->type_table[cltype5] == idtype6;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23698);
show_backtrace(1);
}
var7 = NEW_parser_nodes__AExternCodeBlock(&type_parser_nodes__AExternCodeBlock);
((void (*)(val*, val*, val*))(var7->class->vft[COLOR_parser_prod__AExternCodeBlock__init_aexterncodeblock]))(var7, var_pinlanguagenode2, var_texterncodesegmentnode3) /* init_aexterncodeblock on <var7:AExternCodeBlock>*/;
var_pexterncodeblocknode1 = var7;
var_node_list = var_pexterncodeblocknode1;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction579> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction579#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction579__action(val* self, val* p0) {
parser__ReduceAction579__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction580#action for (self: ReduceAction580, Parser) */
void parser__ReduceAction580__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexterncodeblocknode1 /* var pexterncodeblocknode1: nullable Object */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var_pexterncodeblocknode1 = var_nodearraylist2;
var_node_list = var_pexterncodeblocknode1;
var3 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction580> */
var4 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var3) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var4, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction580#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction580__action(val* self, val* p0) {
parser__ReduceAction580__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction581#action for (self: ReduceAction581, Parser) */
void parser__ReduceAction581__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var_tclassidnode3 /* var tclassidnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : AType */;
val* var5 /* : null */;
val* var6 /* : null */;
val* var_ptypenode1 /* var ptypenode1: nullable AType */;
long var7 /* : Int */;
long var8 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var2 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var2->class->vft[COLOR_array__Array__init]))(var2) /* init on <var2:Array[Object]>*/;
var_listnode4 = var2;
var_tclassidnode3 = var_nodearraylist1;
/* <var_tclassidnode3:nullable Object> isa nullable TClassid */
cltype = type_nullable_parser_nodes__TClassid.color;
idtype = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode3 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tclassidnode3->type->table_size) {
var3 = 0;
} else {
var3 = var_tclassidnode3->type->type_table[cltype] == idtype;
}
}
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23727);
show_backtrace(1);
}
var4 = NEW_parser_nodes__AType(&type_parser_nodes__AType);
var5 = NULL;
var6 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var4->class->vft[COLOR_parser_prod__AType__init_atype]))(var4, var5, var_tclassidnode3, var_listnode4, var6) /* init_atype on <var4:AType>*/;
var_ptypenode1 = var4;
var_node_list = var_ptypenode1;
var7 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction581> */
var8 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var7) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var8, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction581#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction581__action(val* self, val* p0) {
parser__ReduceAction581__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction582#action for (self: ReduceAction582, Parser) */
void parser__ReduceAction582__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var_tkwnullablenode2 /* var tkwnullablenode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_tclassidnode3 /* var tclassidnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : AType */;
val* var9 /* : null */;
val* var_ptypenode1 /* var ptypenode1: nullable AType */;
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
var_listnode4 = var3;
var_tkwnullablenode2 = var_nodearraylist1;
/* <var_tkwnullablenode2:nullable Object> isa nullable TKwnullable */
cltype = type_nullable_parser_nodes__TKwnullable.color;
idtype = type_nullable_parser_nodes__TKwnullable.id;
if(var_tkwnullablenode2 == NULL) {
var4 = 1;
} else {
if(cltype >= var_tkwnullablenode2->type->table_size) {
var4 = 0;
} else {
var4 = var_tkwnullablenode2->type->type_table[cltype] == idtype;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23747);
show_backtrace(1);
}
var_tclassidnode3 = var_nodearraylist2;
/* <var_tclassidnode3:nullable Object> isa nullable TClassid */
cltype6 = type_nullable_parser_nodes__TClassid.color;
idtype7 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= var_tclassidnode3->type->table_size) {
var5 = 0;
} else {
var5 = var_tclassidnode3->type->type_table[cltype6] == idtype7;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23749);
show_backtrace(1);
}
var8 = NEW_parser_nodes__AType(&type_parser_nodes__AType);
var9 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var8->class->vft[COLOR_parser_prod__AType__init_atype]))(var8, var_tkwnullablenode2, var_tclassidnode3, var_listnode4, var9) /* init_atype on <var8:AType>*/;
var_ptypenode1 = var8;
var_node_list = var_ptypenode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction582> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction582#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction582__action(val* self, val* p0) {
parser__ReduceAction582__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction583#action for (self: ReduceAction583, Parser) */
void parser__ReduceAction583__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var_tclassidnode3 /* var tclassidnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_pannotationsnode5 /* var pannotationsnode5: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : AType */;
val* var9 /* : null */;
val* var_ptypenode1 /* var ptypenode1: nullable AType */;
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
var_listnode4 = var3;
var_tclassidnode3 = var_nodearraylist1;
/* <var_tclassidnode3:nullable Object> isa nullable TClassid */
cltype = type_nullable_parser_nodes__TClassid.color;
idtype = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode3 == NULL) {
var4 = 1;
} else {
if(cltype >= var_tclassidnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_tclassidnode3->type->type_table[cltype] == idtype;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23769);
show_backtrace(1);
}
var_pannotationsnode5 = var_nodearraylist2;
/* <var_pannotationsnode5:nullable Object> isa nullable AAnnotations */
cltype6 = type_nullable_parser_nodes__AAnnotations.color;
idtype7 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode5 == NULL) {
var5 = 1;
} else {
if(cltype6 >= var_pannotationsnode5->type->table_size) {
var5 = 0;
} else {
var5 = var_pannotationsnode5->type->type_table[cltype6] == idtype7;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23771);
show_backtrace(1);
}
var8 = NEW_parser_nodes__AType(&type_parser_nodes__AType);
var9 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var8->class->vft[COLOR_parser_prod__AType__init_atype]))(var8, var9, var_tclassidnode3, var_listnode4, var_pannotationsnode5) /* init_atype on <var8:AType>*/;
var_ptypenode1 = var8;
var_node_list = var_ptypenode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction583> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction583#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction583__action(val* self, val* p0) {
parser__ReduceAction583__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction584#action for (self: ReduceAction584, Parser) */
void parser__ReduceAction584__action(val* self, val* p0) {
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
val* var_tkwnullablenode2 /* var tkwnullablenode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_tclassidnode3 /* var tclassidnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var_pannotationsnode5 /* var pannotationsnode5: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : AType */;
val* var_ptypenode1 /* var ptypenode1: nullable AType */;
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
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
var_listnode4 = var4;
var_tkwnullablenode2 = var_nodearraylist1;
/* <var_tkwnullablenode2:nullable Object> isa nullable TKwnullable */
cltype = type_nullable_parser_nodes__TKwnullable.color;
idtype = type_nullable_parser_nodes__TKwnullable.id;
if(var_tkwnullablenode2 == NULL) {
var5 = 1;
} else {
if(cltype >= var_tkwnullablenode2->type->table_size) {
var5 = 0;
} else {
var5 = var_tkwnullablenode2->type->type_table[cltype] == idtype;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23792);
show_backtrace(1);
}
var_tclassidnode3 = var_nodearraylist2;
/* <var_tclassidnode3:nullable Object> isa nullable TClassid */
cltype7 = type_nullable_parser_nodes__TClassid.color;
idtype8 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode3 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_tclassidnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_tclassidnode3->type->type_table[cltype7] == idtype8;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23794);
show_backtrace(1);
}
var_pannotationsnode5 = var_nodearraylist3;
/* <var_pannotationsnode5:nullable Object> isa nullable AAnnotations */
cltype10 = type_nullable_parser_nodes__AAnnotations.color;
idtype11 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode5 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_pannotationsnode5->type->table_size) {
var9 = 0;
} else {
var9 = var_pannotationsnode5->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23796);
show_backtrace(1);
}
var12 = NEW_parser_nodes__AType(&type_parser_nodes__AType);
((void (*)(val*, val*, val*, val*, val*))(var12->class->vft[COLOR_parser_prod__AType__init_atype]))(var12, var_tkwnullablenode2, var_tclassidnode3, var_listnode4, var_pannotationsnode5) /* init_atype on <var12:AType>*/;
var_ptypenode1 = var12;
var_node_list = var_ptypenode1;
var13 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction584> */
var14 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var13) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var14, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction584#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction584__action(val* self, val* p0) {
parser__ReduceAction584__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction585#action for (self: ReduceAction585, Parser) */
void parser__ReduceAction585__action(val* self, val* p0) {
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
val* var_tclassidnode3 /* var tclassidnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : Array[Object] */;
val* var13 /* : AType */;
val* var14 /* : null */;
val* var15 /* : null */;
val* var_ptypenode1 /* var ptypenode1: nullable AType */;
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
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
var_listnode5 = var7;
var_tclassidnode3 = var_nodearraylist1;
/* <var_tclassidnode3:nullable Object> isa nullable TClassid */
cltype = type_nullable_parser_nodes__TClassid.color;
idtype = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode3 == NULL) {
var8 = 1;
} else {
if(cltype >= var_tclassidnode3->type->table_size) {
var8 = 0;
} else {
var8 = var_tclassidnode3->type->type_table[cltype] == idtype;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23820);
show_backtrace(1);
}
var_listnode4 = var_nodearraylist4;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23822);
show_backtrace(1);
}
var12 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode4) /* concat on <self:ReduceAction585>*/;
var_listnode5 = var12;
var13 = NEW_parser_nodes__AType(&type_parser_nodes__AType);
var14 = NULL;
var15 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var13->class->vft[COLOR_parser_prod__AType__init_atype]))(var13, var14, var_tclassidnode3, var_listnode5, var15) /* init_atype on <var13:AType>*/;
var_ptypenode1 = var13;
var_node_list = var_ptypenode1;
var16 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction585> */
var17 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var16) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var17, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction585#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction585__action(val* self, val* p0) {
parser__ReduceAction585__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction586#action for (self: ReduceAction586, Parser) */
void parser__ReduceAction586__action(val* self, val* p0) {
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
val* var_tkwnullablenode2 /* var tkwnullablenode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_tclassidnode3 /* var tclassidnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : Array[Object] */;
val* var17 /* : AType */;
val* var18 /* : null */;
val* var_ptypenode1 /* var ptypenode1: nullable AType */;
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
var8 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var8->class->vft[COLOR_array__Array__init]))(var8) /* init on <var8:Array[Object]>*/;
var_listnode5 = var8;
var_tkwnullablenode2 = var_nodearraylist1;
/* <var_tkwnullablenode2:nullable Object> isa nullable TKwnullable */
cltype = type_nullable_parser_nodes__TKwnullable.color;
idtype = type_nullable_parser_nodes__TKwnullable.id;
if(var_tkwnullablenode2 == NULL) {
var9 = 1;
} else {
if(cltype >= var_tkwnullablenode2->type->table_size) {
var9 = 0;
} else {
var9 = var_tkwnullablenode2->type->type_table[cltype] == idtype;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23848);
show_backtrace(1);
}
var_tclassidnode3 = var_nodearraylist2;
/* <var_tclassidnode3:nullable Object> isa nullable TClassid */
cltype11 = type_nullable_parser_nodes__TClassid.color;
idtype12 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_tclassidnode3->type->table_size) {
var10 = 0;
} else {
var10 = var_tclassidnode3->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23850);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23852);
show_backtrace(1);
}
var16 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode4) /* concat on <self:ReduceAction586>*/;
var_listnode5 = var16;
var17 = NEW_parser_nodes__AType(&type_parser_nodes__AType);
var18 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var17->class->vft[COLOR_parser_prod__AType__init_atype]))(var17, var_tkwnullablenode2, var_tclassidnode3, var_listnode5, var18) /* init_atype on <var17:AType>*/;
var_ptypenode1 = var17;
var_node_list = var_ptypenode1;
var19 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction586> */
var20 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var19) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var20, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction586#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction586__action(val* self, val* p0) {
parser__ReduceAction586__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction587#action for (self: ReduceAction587, Parser) */
void parser__ReduceAction587__action(val* self, val* p0) {
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
val* var_tclassidnode3 /* var tclassidnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : Array[Object] */;
val* var_pannotationsnode6 /* var pannotationsnode6: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : AType */;
val* var18 /* : null */;
val* var_ptypenode1 /* var ptypenode1: nullable AType */;
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
var8 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var8->class->vft[COLOR_array__Array__init]))(var8) /* init on <var8:Array[Object]>*/;
var_listnode5 = var8;
var_tclassidnode3 = var_nodearraylist1;
/* <var_tclassidnode3:nullable Object> isa nullable TClassid */
cltype = type_nullable_parser_nodes__TClassid.color;
idtype = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode3 == NULL) {
var9 = 1;
} else {
if(cltype >= var_tclassidnode3->type->table_size) {
var9 = 0;
} else {
var9 = var_tclassidnode3->type->type_table[cltype] == idtype;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23878);
show_backtrace(1);
}
var_listnode4 = var_nodearraylist4;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23880);
show_backtrace(1);
}
var13 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode4) /* concat on <self:ReduceAction587>*/;
var_listnode5 = var13;
var_pannotationsnode6 = var_nodearraylist7;
/* <var_pannotationsnode6:nullable Object> isa nullable AAnnotations */
cltype15 = type_nullable_parser_nodes__AAnnotations.color;
idtype16 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode6 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_pannotationsnode6->type->table_size) {
var14 = 0;
} else {
var14 = var_pannotationsnode6->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23883);
show_backtrace(1);
}
var17 = NEW_parser_nodes__AType(&type_parser_nodes__AType);
var18 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var17->class->vft[COLOR_parser_prod__AType__init_atype]))(var17, var18, var_tclassidnode3, var_listnode5, var_pannotationsnode6) /* init_atype on <var17:AType>*/;
var_ptypenode1 = var17;
var_node_list = var_ptypenode1;
var19 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction587> */
var20 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var19) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var20, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction587#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction587__action(val* self, val* p0) {
parser__ReduceAction587__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction588#action for (self: ReduceAction588, Parser) */
void parser__ReduceAction588__action(val* self, val* p0) {
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
val* var_tkwnullablenode2 /* var tkwnullablenode2: nullable Object */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var_tclassidnode3 /* var tclassidnode3: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_listnode4 /* var listnode4: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : Array[Object] */;
val* var_pannotationsnode6 /* var pannotationsnode6: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : AType */;
val* var_ptypenode1 /* var ptypenode1: nullable AType */;
long var22 /* : Int */;
long var23 /* : Int */;
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
var_tkwnullablenode2 = var_nodearraylist1;
/* <var_tkwnullablenode2:nullable Object> isa nullable TKwnullable */
cltype = type_nullable_parser_nodes__TKwnullable.color;
idtype = type_nullable_parser_nodes__TKwnullable.id;
if(var_tkwnullablenode2 == NULL) {
var10 = 1;
} else {
if(cltype >= var_tkwnullablenode2->type->table_size) {
var10 = 0;
} else {
var10 = var_tkwnullablenode2->type->type_table[cltype] == idtype;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23909);
show_backtrace(1);
}
var_tclassidnode3 = var_nodearraylist2;
/* <var_tclassidnode3:nullable Object> isa nullable TClassid */
cltype12 = type_nullable_parser_nodes__TClassid.color;
idtype13 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode3 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_tclassidnode3->type->table_size) {
var11 = 0;
} else {
var11 = var_tclassidnode3->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23911);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23913);
show_backtrace(1);
}
var17 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode4) /* concat on <self:ReduceAction588>*/;
var_listnode5 = var17;
var_pannotationsnode6 = var_nodearraylist8;
/* <var_pannotationsnode6:nullable Object> isa nullable AAnnotations */
cltype19 = type_nullable_parser_nodes__AAnnotations.color;
idtype20 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode6 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pannotationsnode6->type->table_size) {
var18 = 0;
} else {
var18 = var_pannotationsnode6->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23916);
show_backtrace(1);
}
var21 = NEW_parser_nodes__AType(&type_parser_nodes__AType);
((void (*)(val*, val*, val*, val*, val*))(var21->class->vft[COLOR_parser_prod__AType__init_atype]))(var21, var_tkwnullablenode2, var_tclassidnode3, var_listnode5, var_pannotationsnode6) /* init_atype on <var21:AType>*/;
var_ptypenode1 = var21;
var_node_list = var_ptypenode1;
var22 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction588> */
var23 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var22) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var23, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction588#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction588__action(val* self, val* p0) {
parser__ReduceAction588__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction589#action for (self: ReduceAction589, Parser) */
void parser__ReduceAction589__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_ptypenode1 /* var ptypenode1: nullable Object */;
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
var_ptypenode1 = var_nodearraylist1;
var3 = NULL;
if (var_ptypenode1 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (var4){
((void (*)(val*, val*))(var_listnode2->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode2, var_ptypenode1) /* add on <var_listnode2:Array[Object]>*/;
} else {
}
var_node_list = var_listnode2;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction589> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction589#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction589__action(val* self, val* p0) {
parser__ReduceAction589__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction590#action for (self: ReduceAction590, Parser) */
void parser__ReduceAction590__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_ptypenode1 /* var ptypenode1: nullable Object */;
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
var_ptypenode1 = var_nodearraylist1;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23952);
show_backtrace(1);
}
var5 = NULL;
if (var_ptypenode1 == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (var6){
((void (*)(val*, val*))(var_listnode3->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode3, var_ptypenode1) /* add on <var_listnode3:Array[Object]>*/;
} else {
}
var7 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode3, var_listnode2) /* concat on <self:ReduceAction590>*/;
var_listnode3 = var7;
var_node_list = var_listnode3;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction590> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction590#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction590__action(val* self, val* p0) {
parser__ReduceAction590__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction591#action for (self: ReduceAction591, Parser) */
void parser__ReduceAction591__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_ptypenode1 /* var ptypenode1: nullable Object */;
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
var_ptypenode1 = var_nodearraylist3;
var_node_list = var_ptypenode1;
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction591> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction591#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction591__action(val* self, val* p0) {
parser__ReduceAction591__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction593#action for (self: ReduceAction593, Parser) */
void parser__ReduceAction593__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode1 /* var pexprnode1: nullable Object */;
long var3 /* : Int */;
long var4 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var_pexprnode1 = var_nodearraylist2;
var_node_list = var_pexprnode1;
var3 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction593> */
var4 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var3) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var4, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction593#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction593__action(val* self, val* p0) {
parser__ReduceAction593__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction594#action for (self: ReduceAction594, Parser) */
void parser__ReduceAction594__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_tkwendnode3 /* var tkwendnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : ABlockExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ABlockExpr */;
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
var_tkwendnode3 = var_nodearraylist2;
/* <var_tkwendnode3:nullable Object> isa nullable TKwend */
cltype = type_nullable_parser_nodes__TKwend.color;
idtype = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode3 == NULL) {
var4 = 1;
} else {
if(cltype >= var_tkwendnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_tkwendnode3->type->type_table[cltype] == idtype;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 23995);
show_backtrace(1);
}
var5 = NEW_parser_nodes__ABlockExpr(&type_parser_nodes__ABlockExpr);
((void (*)(val*, val*, val*))(var5->class->vft[COLOR_parser_prod__ABlockExpr__init_ablockexpr]))(var5, var_listnode2, var_tkwendnode3) /* init_ablockexpr on <var5:ABlockExpr>*/;
var_pexprnode1 = var5;
var_node_list = var_pexprnode1;
var6 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction594> */
var7 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var6) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var7, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction594#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction594__action(val* self, val* p0) {
parser__ReduceAction594__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction595#action for (self: ReduceAction595, Parser) */
void parser__ReduceAction595__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_tkwendnode3 /* var tkwendnode3: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : ABlockExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ABlockExpr */;
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
var_tkwendnode3 = var_nodearraylist1;
/* <var_tkwendnode3:nullable Object> isa nullable TKwend */
cltype = type_nullable_parser_nodes__TKwend.color;
idtype = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode3 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tkwendnode3->type->table_size) {
var3 = 0;
} else {
var3 = var_tkwendnode3->type->type_table[cltype] == idtype;
}
}
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24012);
show_backtrace(1);
}
var4 = NEW_parser_nodes__ABlockExpr(&type_parser_nodes__ABlockExpr);
((void (*)(val*, val*, val*))(var4->class->vft[COLOR_parser_prod__ABlockExpr__init_ablockexpr]))(var4, var_listnode2, var_tkwendnode3) /* init_ablockexpr on <var4:ABlockExpr>*/;
var_pexprnode1 = var4;
var_node_list = var_pexprnode1;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction595> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction595#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction595__action(val* self, val* p0) {
parser__ReduceAction595__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction596#action for (self: ReduceAction596, Parser) */
void parser__ReduceAction596__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode1 /* var pexprnode1: nullable Object */;
long var2 /* : Int */;
long var3 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var_pexprnode1 = var_nodearraylist1;
var_node_list = var_pexprnode1;
var2 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction596> */
var3 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var2) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var3, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction596#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction596__action(val* self, val* p0) {
parser__ReduceAction596__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction597#action for (self: ReduceAction597, Parser) */
void parser__ReduceAction597__action(val* self, val* p0) {
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
val* var6 /* : ABlockExpr */;
val* var7 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable ABlockExpr */;
long var8 /* : Int */;
long var9 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24040);
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
var6 = NEW_parser_nodes__ABlockExpr(&type_parser_nodes__ABlockExpr);
var7 = NULL;
((void (*)(val*, val*, val*))(var6->class->vft[COLOR_parser_prod__ABlockExpr__init_ablockexpr]))(var6, var_listnode3, var7) /* init_ablockexpr on <var6:ABlockExpr>*/;
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction597> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction597#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction597__action(val* self, val* p0) {
parser__ReduceAction597__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction598#action for (self: ReduceAction598, Parser) */
void parser__ReduceAction598__action(val* self, val* p0) {
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
val* var_listnode3 /* var listnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : null */;
short int var9 /* : Bool */;
val* var10 /* : Array[Object] */;
val* var11 /* : ABlockExpr */;
val* var12 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable ABlockExpr */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24061);
show_backtrace(1);
}
var_listnode3 = var_nodearraylist2;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype6 = type_array__Arraykernel__Object.color;
idtype7 = type_array__Arraykernel__Object.id;
if(var_listnode3 == NULL) {
var5 = 0;
} else {
if(cltype6 >= var_listnode3->type->table_size) {
var5 = 0;
} else {
var5 = var_listnode3->type->type_table[cltype6] == idtype7;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24063);
show_backtrace(1);
}
var8 = NULL;
if (var_pexprnode2 == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (var9){
((void (*)(val*, val*))(var_listnode4->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode4, var_pexprnode2) /* add on <var_listnode4:Array[Object]>*/;
} else {
}
var10 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction598>*/;
var_listnode4 = var10;
var11 = NEW_parser_nodes__ABlockExpr(&type_parser_nodes__ABlockExpr);
var12 = NULL;
((void (*)(val*, val*, val*))(var11->class->vft[COLOR_parser_prod__ABlockExpr__init_ablockexpr]))(var11, var_listnode4, var12) /* init_ablockexpr on <var11:ABlockExpr>*/;
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var13 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction598> */
var14 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var13) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var14, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction598#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction598__action(val* self, val* p0) {
parser__ReduceAction598__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction599#action for (self: ReduceAction599, Parser) */
void parser__ReduceAction599__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : null */;
short int var6 /* : Bool */;
val* var7 /* : ABlockExpr */;
val* var8 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable ABlockExpr */;
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
var_listnode3 = var3;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24085);
show_backtrace(1);
}
var5 = NULL;
if (var_pexprnode2 == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (var6){
((void (*)(val*, val*))(var_listnode3->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode3, var_pexprnode2) /* add on <var_listnode3:Array[Object]>*/;
} else {
}
var7 = NEW_parser_nodes__ABlockExpr(&type_parser_nodes__ABlockExpr);
var8 = NULL;
((void (*)(val*, val*, val*))(var7->class->vft[COLOR_parser_prod__ABlockExpr__init_ablockexpr]))(var7, var_listnode3, var8) /* init_ablockexpr on <var7:ABlockExpr>*/;
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction599> */
var10 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var9) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var10, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction599#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction599__action(val* self, val* p0) {
parser__ReduceAction599__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction600#action for (self: ReduceAction600, Parser) */
void parser__ReduceAction600__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : null */;
short int var10 /* : Bool */;
val* var11 /* : Array[Object] */;
val* var12 /* : ABlockExpr */;
val* var13 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable ABlockExpr */;
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
var_listnode4 = var4;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24107);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24109);
show_backtrace(1);
}
var9 = NULL;
if (var_pexprnode2 == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (var10){
((void (*)(val*, val*))(var_listnode4->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode4, var_pexprnode2) /* add on <var_listnode4:Array[Object]>*/;
} else {
}
var11 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction600>*/;
var_listnode4 = var11;
var12 = NEW_parser_nodes__ABlockExpr(&type_parser_nodes__ABlockExpr);
var13 = NULL;
((void (*)(val*, val*, val*))(var12->class->vft[COLOR_parser_prod__ABlockExpr__init_ablockexpr]))(var12, var_listnode4, var13) /* init_ablockexpr on <var12:ABlockExpr>*/;
var_pexprnode1 = var12;
var_node_list = var_pexprnode1;
var14 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction600> */
var15 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var14) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var15, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction600#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction600__action(val* self, val* p0) {
parser__ReduceAction600__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction601#action for (self: ReduceAction601, Parser) */
void parser__ReduceAction601__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var6 /* : null */;
short int var7 /* : Bool */;
val* var_tkwendnode4 /* var tkwendnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : ABlockExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ABlockExpr */;
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
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
var_listnode3 = var4;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24132);
show_backtrace(1);
}
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
var_tkwendnode4 = var_nodearraylist3;
/* <var_tkwendnode4:nullable Object> isa nullable TKwend */
cltype9 = type_nullable_parser_nodes__TKwend.color;
idtype10 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_tkwendnode4->type->table_size) {
var8 = 0;
} else {
var8 = var_tkwendnode4->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24137);
show_backtrace(1);
}
var11 = NEW_parser_nodes__ABlockExpr(&type_parser_nodes__ABlockExpr);
((void (*)(val*, val*, val*))(var11->class->vft[COLOR_parser_prod__ABlockExpr__init_ablockexpr]))(var11, var_listnode3, var_tkwendnode4) /* init_ablockexpr on <var11:ABlockExpr>*/;
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction601> */
var13 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var12) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var13, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction601#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction601__action(val* self, val* p0) {
parser__ReduceAction601__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction602#action for (self: ReduceAction602, Parser) */
void parser__ReduceAction602__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : null */;
short int var11 /* : Bool */;
val* var12 /* : Array[Object] */;
val* var_tkwendnode5 /* var tkwendnode5: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : ABlockExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ABlockExpr */;
long var17 /* : Int */;
long var18 /* : Int */;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24157);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24159);
show_backtrace(1);
}
var10 = NULL;
if (var_pexprnode2 == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (var11){
((void (*)(val*, val*))(var_listnode4->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_listnode4, var_pexprnode2) /* add on <var_listnode4:Array[Object]>*/;
} else {
}
var12 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction602>*/;
var_listnode4 = var12;
var_tkwendnode5 = var_nodearraylist4;
/* <var_tkwendnode5:nullable Object> isa nullable TKwend */
cltype14 = type_nullable_parser_nodes__TKwend.color;
idtype15 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode5 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_tkwendnode5->type->table_size) {
var13 = 0;
} else {
var13 = var_tkwendnode5->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24165);
show_backtrace(1);
}
var16 = NEW_parser_nodes__ABlockExpr(&type_parser_nodes__ABlockExpr);
((void (*)(val*, val*, val*))(var16->class->vft[COLOR_parser_prod__ABlockExpr__init_ablockexpr]))(var16, var_listnode4, var_tkwendnode5) /* init_ablockexpr on <var16:ABlockExpr>*/;
var_pexprnode1 = var16;
var_node_list = var_pexprnode1;
var17 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction602> */
var18 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var17) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var18, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction602#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction602__action(val* self, val* p0) {
parser__ReduceAction602__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction606#action for (self: ReduceAction606, Parser) */
void parser__ReduceAction606__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwreturnnode2 /* var tkwreturnnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AReturnExpr */;
val* var4 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable AReturnExpr */;
long var5 /* : Int */;
long var6 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var_tkwreturnnode2 = var_nodearraylist1;
/* <var_tkwreturnnode2:nullable Object> isa nullable TKwreturn */
cltype = type_nullable_parser_nodes__TKwreturn.color;
idtype = type_nullable_parser_nodes__TKwreturn.id;
if(var_tkwreturnnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tkwreturnnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tkwreturnnode2->type->type_table[cltype] == idtype;
}
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24181);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AReturnExpr(&type_parser_nodes__AReturnExpr);
var4 = NULL;
((void (*)(val*, val*, val*))(var3->class->vft[COLOR_parser_prod__AReturnExpr__init_areturnexpr]))(var3, var_tkwreturnnode2, var4) /* init_areturnexpr on <var3:AReturnExpr>*/;
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction606> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction606#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction606__action(val* self, val* p0) {
parser__ReduceAction606__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction607#action for (self: ReduceAction607, Parser) */
void parser__ReduceAction607__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwreturnnode2 /* var tkwreturnnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode3 /* var pexprnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : AReturnExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AReturnExpr */;
long var8 /* : Int */;
long var9 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var_tkwreturnnode2 = var_nodearraylist1;
/* <var_tkwreturnnode2:nullable Object> isa nullable TKwreturn */
cltype = type_nullable_parser_nodes__TKwreturn.color;
idtype = type_nullable_parser_nodes__TKwreturn.id;
if(var_tkwreturnnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tkwreturnnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tkwreturnnode2->type->type_table[cltype] == idtype;
}
}
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24198);
show_backtrace(1);
}
var_pexprnode3 = var_nodearraylist2;
/* <var_pexprnode3:nullable Object> isa nullable AExpr */
cltype5 = type_nullable_parser_nodes__AExpr.color;
idtype6 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_pexprnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_pexprnode3->type->type_table[cltype5] == idtype6;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24200);
show_backtrace(1);
}
var7 = NEW_parser_nodes__AReturnExpr(&type_parser_nodes__AReturnExpr);
((void (*)(val*, val*, val*))(var7->class->vft[COLOR_parser_prod__AReturnExpr__init_areturnexpr]))(var7, var_tkwreturnnode2, var_pexprnode3) /* init_areturnexpr on <var7:AReturnExpr>*/;
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction607> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction607#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction607__action(val* self, val* p0) {
parser__ReduceAction607__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction608#action for (self: ReduceAction608, Parser) */
void parser__ReduceAction608__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwbreaknode2 /* var tkwbreaknode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : ABreakExpr */;
val* var4 /* : null */;
val* var5 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable ABreakExpr */;
long var6 /* : Int */;
long var7 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var_tkwbreaknode2 = var_nodearraylist1;
/* <var_tkwbreaknode2:nullable Object> isa nullable TKwbreak */
cltype = type_nullable_parser_nodes__TKwbreak.color;
idtype = type_nullable_parser_nodes__TKwbreak.id;
if(var_tkwbreaknode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tkwbreaknode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tkwbreaknode2->type->type_table[cltype] == idtype;
}
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24216);
show_backtrace(1);
}
var3 = NEW_parser_nodes__ABreakExpr(&type_parser_nodes__ABreakExpr);
var4 = NULL;
var5 = NULL;
((void (*)(val*, val*, val*, val*))(var3->class->vft[COLOR_parser_prod__ABreakExpr__init_abreakexpr]))(var3, var_tkwbreaknode2, var4, var5) /* init_abreakexpr on <var3:ABreakExpr>*/;
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var6 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction608> */
var7 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var6) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var7, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction608#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction608__action(val* self, val* p0) {
parser__ReduceAction608__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction609#action for (self: ReduceAction609, Parser) */
void parser__ReduceAction609__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwbreaknode2 /* var tkwbreaknode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_plabelnode3 /* var plabelnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : ABreakExpr */;
val* var8 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable ABreakExpr */;
long var9 /* : Int */;
long var10 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var_tkwbreaknode2 = var_nodearraylist1;
/* <var_tkwbreaknode2:nullable Object> isa nullable TKwbreak */
cltype = type_nullable_parser_nodes__TKwbreak.color;
idtype = type_nullable_parser_nodes__TKwbreak.id;
if(var_tkwbreaknode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tkwbreaknode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tkwbreaknode2->type->type_table[cltype] == idtype;
}
}
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24234);
show_backtrace(1);
}
var_plabelnode3 = var_nodearraylist2;
/* <var_plabelnode3:nullable Object> isa nullable ALabel */
cltype5 = type_nullable_parser_nodes__ALabel.color;
idtype6 = type_nullable_parser_nodes__ALabel.id;
if(var_plabelnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_plabelnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_plabelnode3->type->type_table[cltype5] == idtype6;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24236);
show_backtrace(1);
}
var7 = NEW_parser_nodes__ABreakExpr(&type_parser_nodes__ABreakExpr);
var8 = NULL;
((void (*)(val*, val*, val*, val*))(var7->class->vft[COLOR_parser_prod__ABreakExpr__init_abreakexpr]))(var7, var_tkwbreaknode2, var_plabelnode3, var8) /* init_abreakexpr on <var7:ABreakExpr>*/;
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction609> */
var10 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var9) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var10, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction609#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction609__action(val* self, val* p0) {
parser__ReduceAction609__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction610#action for (self: ReduceAction610, Parser) */
void parser__ReduceAction610__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwbreaknode2 /* var tkwbreaknode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : ABreakExpr */;
val* var8 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable ABreakExpr */;
long var9 /* : Int */;
long var10 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var_tkwbreaknode2 = var_nodearraylist1;
/* <var_tkwbreaknode2:nullable Object> isa nullable TKwbreak */
cltype = type_nullable_parser_nodes__TKwbreak.color;
idtype = type_nullable_parser_nodes__TKwbreak.id;
if(var_tkwbreaknode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tkwbreaknode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tkwbreaknode2->type->type_table[cltype] == idtype;
}
}
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24254);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24256);
show_backtrace(1);
}
var7 = NEW_parser_nodes__ABreakExpr(&type_parser_nodes__ABreakExpr);
var8 = NULL;
((void (*)(val*, val*, val*, val*))(var7->class->vft[COLOR_parser_prod__ABreakExpr__init_abreakexpr]))(var7, var_tkwbreaknode2, var8, var_pexprnode4) /* init_abreakexpr on <var7:ABreakExpr>*/;
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction610> */
var10 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var9) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var10, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction610#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction610__action(val* self, val* p0) {
parser__ReduceAction610__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction611#action for (self: ReduceAction611, Parser) */
void parser__ReduceAction611__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwbreaknode2 /* var tkwbreaknode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_plabelnode3 /* var plabelnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : ABreakExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ABreakExpr */;
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
var_tkwbreaknode2 = var_nodearraylist1;
/* <var_tkwbreaknode2:nullable Object> isa nullable TKwbreak */
cltype = type_nullable_parser_nodes__TKwbreak.color;
idtype = type_nullable_parser_nodes__TKwbreak.id;
if(var_tkwbreaknode2 == NULL) {
var4 = 1;
} else {
if(cltype >= var_tkwbreaknode2->type->table_size) {
var4 = 0;
} else {
var4 = var_tkwbreaknode2->type->type_table[cltype] == idtype;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24275);
show_backtrace(1);
}
var_plabelnode3 = var_nodearraylist2;
/* <var_plabelnode3:nullable Object> isa nullable ALabel */
cltype6 = type_nullable_parser_nodes__ALabel.color;
idtype7 = type_nullable_parser_nodes__ALabel.id;
if(var_plabelnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= var_plabelnode3->type->table_size) {
var5 = 0;
} else {
var5 = var_plabelnode3->type->type_table[cltype6] == idtype7;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24277);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24279);
show_backtrace(1);
}
var11 = NEW_parser_nodes__ABreakExpr(&type_parser_nodes__ABreakExpr);
((void (*)(val*, val*, val*, val*))(var11->class->vft[COLOR_parser_prod__ABreakExpr__init_abreakexpr]))(var11, var_tkwbreaknode2, var_plabelnode3, var_pexprnode4) /* init_abreakexpr on <var11:ABreakExpr>*/;
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction611> */
var13 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var12) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var13, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction611#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction611__action(val* self, val* p0) {
parser__ReduceAction611__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction612#action for (self: ReduceAction612, Parser) */
void parser__ReduceAction612__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwabortnode2 /* var tkwabortnode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AAbortExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AAbortExpr */;
long var4 /* : Int */;
long var5 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var_tkwabortnode2 = var_nodearraylist1;
/* <var_tkwabortnode2:nullable Object> isa nullable TKwabort */
cltype = type_nullable_parser_nodes__TKwabort.color;
idtype = type_nullable_parser_nodes__TKwabort.id;
if(var_tkwabortnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tkwabortnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tkwabortnode2->type->type_table[cltype] == idtype;
}
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24296);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AAbortExpr(&type_parser_nodes__AAbortExpr);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__AAbortExpr__init_aabortexpr]))(var3, var_tkwabortnode2) /* init_aabortexpr on <var3:AAbortExpr>*/;
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction612> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction612#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction612__action(val* self, val* p0) {
parser__ReduceAction612__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction613#action for (self: ReduceAction613, Parser) */
void parser__ReduceAction613__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwcontinuenode2 /* var tkwcontinuenode2: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AContinueExpr */;
val* var4 /* : null */;
val* var5 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable AContinueExpr */;
long var6 /* : Int */;
long var7 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var_tkwcontinuenode2 = var_nodearraylist1;
/* <var_tkwcontinuenode2:nullable Object> isa nullable TKwcontinue */
cltype = type_nullable_parser_nodes__TKwcontinue.color;
idtype = type_nullable_parser_nodes__TKwcontinue.id;
if(var_tkwcontinuenode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tkwcontinuenode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tkwcontinuenode2->type->type_table[cltype] == idtype;
}
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24311);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AContinueExpr(&type_parser_nodes__AContinueExpr);
var4 = NULL;
var5 = NULL;
((void (*)(val*, val*, val*, val*))(var3->class->vft[COLOR_parser_prod__AContinueExpr__init_acontinueexpr]))(var3, var_tkwcontinuenode2, var4, var5) /* init_acontinueexpr on <var3:AContinueExpr>*/;
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var6 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction613> */
var7 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var6) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var7, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction613#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction613__action(val* self, val* p0) {
parser__ReduceAction613__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction614#action for (self: ReduceAction614, Parser) */
void parser__ReduceAction614__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwcontinuenode2 /* var tkwcontinuenode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_plabelnode3 /* var plabelnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : AContinueExpr */;
val* var8 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable AContinueExpr */;
long var9 /* : Int */;
long var10 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var_tkwcontinuenode2 = var_nodearraylist1;
/* <var_tkwcontinuenode2:nullable Object> isa nullable TKwcontinue */
cltype = type_nullable_parser_nodes__TKwcontinue.color;
idtype = type_nullable_parser_nodes__TKwcontinue.id;
if(var_tkwcontinuenode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tkwcontinuenode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tkwcontinuenode2->type->type_table[cltype] == idtype;
}
}
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24329);
show_backtrace(1);
}
var_plabelnode3 = var_nodearraylist2;
/* <var_plabelnode3:nullable Object> isa nullable ALabel */
cltype5 = type_nullable_parser_nodes__ALabel.color;
idtype6 = type_nullable_parser_nodes__ALabel.id;
if(var_plabelnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_plabelnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_plabelnode3->type->type_table[cltype5] == idtype6;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24331);
show_backtrace(1);
}
var7 = NEW_parser_nodes__AContinueExpr(&type_parser_nodes__AContinueExpr);
var8 = NULL;
((void (*)(val*, val*, val*, val*))(var7->class->vft[COLOR_parser_prod__AContinueExpr__init_acontinueexpr]))(var7, var_tkwcontinuenode2, var_plabelnode3, var8) /* init_acontinueexpr on <var7:AContinueExpr>*/;
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction614> */
var10 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var9) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var10, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction614#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction614__action(val* self, val* p0) {
parser__ReduceAction614__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction615#action for (self: ReduceAction615, Parser) */
void parser__ReduceAction615__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwcontinuenode2 /* var tkwcontinuenode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : AContinueExpr */;
val* var8 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable AContinueExpr */;
long var9 /* : Int */;
long var10 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var_tkwcontinuenode2 = var_nodearraylist1;
/* <var_tkwcontinuenode2:nullable Object> isa nullable TKwcontinue */
cltype = type_nullable_parser_nodes__TKwcontinue.color;
idtype = type_nullable_parser_nodes__TKwcontinue.id;
if(var_tkwcontinuenode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tkwcontinuenode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tkwcontinuenode2->type->type_table[cltype] == idtype;
}
}
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24349);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24351);
show_backtrace(1);
}
var7 = NEW_parser_nodes__AContinueExpr(&type_parser_nodes__AContinueExpr);
var8 = NULL;
((void (*)(val*, val*, val*, val*))(var7->class->vft[COLOR_parser_prod__AContinueExpr__init_acontinueexpr]))(var7, var_tkwcontinuenode2, var8, var_pexprnode4) /* init_acontinueexpr on <var7:AContinueExpr>*/;
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction615> */
var10 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var9) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var10, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction615#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction615__action(val* self, val* p0) {
parser__ReduceAction615__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction616#action for (self: ReduceAction616, Parser) */
void parser__ReduceAction616__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwcontinuenode2 /* var tkwcontinuenode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_plabelnode3 /* var plabelnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : AContinueExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AContinueExpr */;
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
var_tkwcontinuenode2 = var_nodearraylist1;
/* <var_tkwcontinuenode2:nullable Object> isa nullable TKwcontinue */
cltype = type_nullable_parser_nodes__TKwcontinue.color;
idtype = type_nullable_parser_nodes__TKwcontinue.id;
if(var_tkwcontinuenode2 == NULL) {
var4 = 1;
} else {
if(cltype >= var_tkwcontinuenode2->type->table_size) {
var4 = 0;
} else {
var4 = var_tkwcontinuenode2->type->type_table[cltype] == idtype;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24370);
show_backtrace(1);
}
var_plabelnode3 = var_nodearraylist2;
/* <var_plabelnode3:nullable Object> isa nullable ALabel */
cltype6 = type_nullable_parser_nodes__ALabel.color;
idtype7 = type_nullable_parser_nodes__ALabel.id;
if(var_plabelnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= var_plabelnode3->type->table_size) {
var5 = 0;
} else {
var5 = var_plabelnode3->type->type_table[cltype6] == idtype7;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24372);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24374);
show_backtrace(1);
}
var11 = NEW_parser_nodes__AContinueExpr(&type_parser_nodes__AContinueExpr);
((void (*)(val*, val*, val*, val*))(var11->class->vft[COLOR_parser_prod__AContinueExpr__init_acontinueexpr]))(var11, var_tkwcontinuenode2, var_plabelnode3, var_pexprnode4) /* init_acontinueexpr on <var11:AContinueExpr>*/;
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction616> */
var13 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var12) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var13, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction616#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction616__action(val* self, val* p0) {
parser__ReduceAction616__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction623#action for (self: ReduceAction623, Parser) */
void parser__ReduceAction623__action(val* self, val* p0) {
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
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24395);
show_backtrace(1);
}
var_tidnode3 = var_nodearraylist4;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24397);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist5;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype11 = type_nullable_parser_nodes__AExprs.color;
idtype12 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode4 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_pexprsnode4->type->table_size) {
var10 = 0;
} else {
var10 = var_pexprsnode4->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24399);
show_backtrace(1);
}
var13 = NEW_parser_nodes__ACallExpr(&type_parser_nodes__ACallExpr);
((void (*)(val*, val*, val*, val*))(var13->class->vft[COLOR_parser_prod__ACallExpr__init_acallexpr]))(var13, var_pexprnode2, var_tidnode3, var_pexprsnode4) /* init_acallexpr on <var13:ACallExpr>*/;
var_pexprnode1 = var13;
var_node_list = var_pexprnode1;
var14 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction623> */
var15 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var14) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var15, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction623#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction623__action(val* self, val* p0) {
parser__ReduceAction623__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction624#action for (self: ReduceAction624, Parser) */
void parser__ReduceAction624__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
long var9 /* : Int */;
long var10 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var3 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
((void (*)(val*))(var3->class->vft[COLOR_parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr]))(var3) /* init_aimplicitselfexpr on <var3:AImplicitSelfExpr>*/;
var_pexprnode2 = var3;
var_tidnode3 = var_nodearraylist1;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype = type_nullable_parser_nodes__TId.color;
idtype = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var4 = 1;
} else {
if(cltype >= var_tidnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_tidnode3->type->type_table[cltype] == idtype;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24418);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist2;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype6 = type_nullable_parser_nodes__AExprs.color;
idtype7 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode4 == NULL) {
var5 = 1;
} else {
if(cltype6 >= var_pexprsnode4->type->table_size) {
var5 = 0;
} else {
var5 = var_pexprsnode4->type->type_table[cltype6] == idtype7;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24420);
show_backtrace(1);
}
var8 = NEW_parser_nodes__ACallExpr(&type_parser_nodes__ACallExpr);
((void (*)(val*, val*, val*, val*))(var8->class->vft[COLOR_parser_prod__ACallExpr__init_acallexpr]))(var8, var_pexprnode2, var_tidnode3, var_pexprsnode4) /* init_acallexpr on <var8:ACallExpr>*/;
var_pexprnode1 = var8;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction624> */
var10 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var9) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var10, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction624#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction624__action(val* self, val* p0) {
parser__ReduceAction624__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction625#action for (self: ReduceAction625, Parser) */
void parser__ReduceAction625__action(val* self, val* p0) {
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
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24442);
show_backtrace(1);
}
var_tidnode3 = var_nodearraylist5;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype9 = type_nullable_parser_nodes__TId.color;
idtype10 = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_tidnode3->type->table_size) {
var8 = 0;
} else {
var8 = var_tidnode3->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24444);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist6;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype12 = type_nullable_parser_nodes__AExprs.color;
idtype13 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_pexprsnode4->type->table_size) {
var11 = 0;
} else {
var11 = var_pexprsnode4->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24446);
show_backtrace(1);
}
var14 = NEW_parser_nodes__ACallExpr(&type_parser_nodes__ACallExpr);
((void (*)(val*, val*, val*, val*))(var14->class->vft[COLOR_parser_prod__ACallExpr__init_acallexpr]))(var14, var_pexprnode2, var_tidnode3, var_pexprsnode4) /* init_acallexpr on <var14:ACallExpr>*/;
var_pexprnode1 = var14;
var_node_list = var_pexprnode1;
var15 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction625> */
var16 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var15) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var16, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction625#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction625__action(val* self, val* p0) {
parser__ReduceAction625__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction626#action for (self: ReduceAction626, Parser) */
void parser__ReduceAction626__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24469);
show_backtrace(1);
}
var_tidnode3 = var_nodearraylist6;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype10 = type_nullable_parser_nodes__TId.color;
idtype11 = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_tidnode3->type->table_size) {
var9 = 0;
} else {
var9 = var_tidnode3->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24471);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist7;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype13 = type_nullable_parser_nodes__AExprs.color;
idtype14 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_pexprsnode4->type->table_size) {
var12 = 0;
} else {
var12 = var_pexprsnode4->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24473);
show_backtrace(1);
}
var15 = NEW_parser_nodes__ACallExpr(&type_parser_nodes__ACallExpr);
((void (*)(val*, val*, val*, val*))(var15->class->vft[COLOR_parser_prod__ACallExpr__init_acallexpr]))(var15, var_pexprnode2, var_tidnode3, var_pexprsnode4) /* init_acallexpr on <var15:ACallExpr>*/;
var_pexprnode1 = var15;
var_node_list = var_pexprnode1;
var16 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction626> */
var17 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var16) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var17, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction626#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction626__action(val* self, val* p0) {
parser__ReduceAction626__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction628#action for (self: ReduceAction628, Parser) */
void parser__ReduceAction628__action(val* self, val* p0) {
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
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
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
var4 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
((void (*)(val*))(var4->class->vft[COLOR_parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr]))(var4) /* init_aimplicitselfexpr on <var4:AImplicitSelfExpr>*/;
var_pexprnode2 = var4;
var_tidnode3 = var_nodearraylist2;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype = type_nullable_parser_nodes__TId.color;
idtype = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var5 = 1;
} else {
if(cltype >= var_tidnode3->type->table_size) {
var5 = 0;
} else {
var5 = var_tidnode3->type->type_table[cltype] == idtype;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24493);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist3;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype7 = type_nullable_parser_nodes__AExprs.color;
idtype8 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode4 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_pexprsnode4->type->table_size) {
var6 = 0;
} else {
var6 = var_pexprsnode4->type->type_table[cltype7] == idtype8;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24495);
show_backtrace(1);
}
var9 = NEW_parser_nodes__ACallExpr(&type_parser_nodes__ACallExpr);
((void (*)(val*, val*, val*, val*))(var9->class->vft[COLOR_parser_prod__ACallExpr__init_acallexpr]))(var9, var_pexprnode2, var_tidnode3, var_pexprsnode4) /* init_acallexpr on <var9:ACallExpr>*/;
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction628> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction628#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction628__action(val* self, val* p0) {
parser__ReduceAction628__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction629#action for (self: ReduceAction629, Parser) */
void parser__ReduceAction629__action(val* self, val* p0) {
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
val* var5 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
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
var5 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
((void (*)(val*))(var5->class->vft[COLOR_parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr]))(var5) /* init_aimplicitselfexpr on <var5:AImplicitSelfExpr>*/;
var_pexprnode2 = var5;
var_tidnode3 = var_nodearraylist3;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype = type_nullable_parser_nodes__TId.color;
idtype = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var6 = 1;
} else {
if(cltype >= var_tidnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_tidnode3->type->type_table[cltype] == idtype;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24516);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist4;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype8 = type_nullable_parser_nodes__AExprs.color;
idtype9 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode4 == NULL) {
var7 = 1;
} else {
if(cltype8 >= var_pexprsnode4->type->table_size) {
var7 = 0;
} else {
var7 = var_pexprsnode4->type->type_table[cltype8] == idtype9;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24518);
show_backtrace(1);
}
var10 = NEW_parser_nodes__ACallExpr(&type_parser_nodes__ACallExpr);
((void (*)(val*, val*, val*, val*))(var10->class->vft[COLOR_parser_prod__ACallExpr__init_acallexpr]))(var10, var_pexprnode2, var_tidnode3, var_pexprsnode4) /* init_acallexpr on <var10:ACallExpr>*/;
var_pexprnode1 = var10;
var_node_list = var_pexprnode1;
var11 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction629> */
var12 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var11) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var12, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction629#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction629__action(val* self, val* p0) {
parser__ReduceAction629__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction631#action for (self: ReduceAction631, Parser) */
void parser__ReduceAction631__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwsupernode3 /* var tkwsupernode3: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : ASuperExpr */;
val* var8 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable ASuperExpr */;
long var9 /* : Int */;
long var10 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var_tkwsupernode3 = var_nodearraylist1;
/* <var_tkwsupernode3:nullable Object> isa nullable TKwsuper */
cltype = type_nullable_parser_nodes__TKwsuper.color;
idtype = type_nullable_parser_nodes__TKwsuper.id;
if(var_tkwsupernode3 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tkwsupernode3->type->table_size) {
var3 = 0;
} else {
var3 = var_tkwsupernode3->type->type_table[cltype] == idtype;
}
}
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24536);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist2;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype5 = type_nullable_parser_nodes__AExprs.color;
idtype6 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode4 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_pexprsnode4->type->table_size) {
var4 = 0;
} else {
var4 = var_pexprsnode4->type->type_table[cltype5] == idtype6;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24538);
show_backtrace(1);
}
var7 = NEW_parser_nodes__ASuperExpr(&type_parser_nodes__ASuperExpr);
var8 = NULL;
((void (*)(val*, val*, val*, val*))(var7->class->vft[COLOR_parser_prod__ASuperExpr__init_asuperexpr]))(var7, var8, var_tkwsupernode3, var_pexprsnode4) /* init_asuperexpr on <var7:ASuperExpr>*/;
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction631> */
var10 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var9) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var10, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction631#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction631__action(val* self, val* p0) {
parser__ReduceAction631__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction632#action for (self: ReduceAction632, Parser) */
void parser__ReduceAction632__action(val* self, val* p0) {
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
val* var_tclassidnode4 /* var tclassidnode4: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var6 /* : AQualified */;
val* var_pqualifiednode2 /* var pqualifiednode2: nullable AQualified */;
val* var_tkwsupernode5 /* var tkwsupernode5: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_pexprsnode6 /* var pexprsnode6: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : ASuperExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ASuperExpr */;
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
var_listnode3 = var4;
var_tclassidnode4 = var_nodearraylist1;
/* <var_tclassidnode4:nullable Object> isa nullable TClassid */
cltype = type_nullable_parser_nodes__TClassid.color;
idtype = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode4 == NULL) {
var5 = 1;
} else {
if(cltype >= var_tclassidnode4->type->table_size) {
var5 = 0;
} else {
var5 = var_tclassidnode4->type->type_table[cltype] == idtype;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24558);
show_backtrace(1);
}
var6 = NEW_parser_nodes__AQualified(&type_parser_nodes__AQualified);
((void (*)(val*, val*, val*))(var6->class->vft[COLOR_parser_prod__AQualified__init_aqualified]))(var6, var_listnode3, var_tclassidnode4) /* init_aqualified on <var6:AQualified>*/;
var_pqualifiednode2 = var6;
var_tkwsupernode5 = var_nodearraylist2;
/* <var_tkwsupernode5:nullable Object> isa nullable TKwsuper */
cltype8 = type_nullable_parser_nodes__TKwsuper.color;
idtype9 = type_nullable_parser_nodes__TKwsuper.id;
if(var_tkwsupernode5 == NULL) {
var7 = 1;
} else {
if(cltype8 >= var_tkwsupernode5->type->table_size) {
var7 = 0;
} else {
var7 = var_tkwsupernode5->type->type_table[cltype8] == idtype9;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24564);
show_backtrace(1);
}
var_pexprsnode6 = var_nodearraylist3;
/* <var_pexprsnode6:nullable Object> isa nullable AExprs */
cltype11 = type_nullable_parser_nodes__AExprs.color;
idtype12 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode6 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_pexprsnode6->type->table_size) {
var10 = 0;
} else {
var10 = var_pexprsnode6->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24566);
show_backtrace(1);
}
var13 = NEW_parser_nodes__ASuperExpr(&type_parser_nodes__ASuperExpr);
((void (*)(val*, val*, val*, val*))(var13->class->vft[COLOR_parser_prod__ASuperExpr__init_asuperexpr]))(var13, var_pqualifiednode2, var_tkwsupernode5, var_pexprsnode6) /* init_asuperexpr on <var13:ASuperExpr>*/;
var_pexprnode1 = var13;
var_node_list = var_pexprnode1;
var14 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction632> */
var15 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var14) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var15, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction632#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction632__action(val* self, val* p0) {
parser__ReduceAction632__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction633#action for (self: ReduceAction633, Parser) */
void parser__ReduceAction633__action(val* self, val* p0) {
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
val* var_listnode3 /* var listnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var7 /* : Array[Object] */;
val* var_tclassidnode5 /* var tclassidnode5: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : AQualified */;
val* var_pqualifiednode2 /* var pqualifiednode2: nullable AQualified */;
val* var_tkwsupernode6 /* var tkwsupernode6: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_pexprsnode7 /* var pexprsnode7: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : ASuperExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ASuperExpr */;
long var19 /* : Int */;
long var20 /* : Int */;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24587);
show_backtrace(1);
}
var7 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction633>*/;
var_listnode4 = var7;
var_tclassidnode5 = var_nodearraylist2;
/* <var_tclassidnode5:nullable Object> isa nullable TClassid */
cltype9 = type_nullable_parser_nodes__TClassid.color;
idtype10 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode5 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_tclassidnode5->type->table_size) {
var8 = 0;
} else {
var8 = var_tclassidnode5->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24590);
show_backtrace(1);
}
var11 = NEW_parser_nodes__AQualified(&type_parser_nodes__AQualified);
((void (*)(val*, val*, val*))(var11->class->vft[COLOR_parser_prod__AQualified__init_aqualified]))(var11, var_listnode4, var_tclassidnode5) /* init_aqualified on <var11:AQualified>*/;
var_pqualifiednode2 = var11;
var_tkwsupernode6 = var_nodearraylist3;
/* <var_tkwsupernode6:nullable Object> isa nullable TKwsuper */
cltype13 = type_nullable_parser_nodes__TKwsuper.color;
idtype14 = type_nullable_parser_nodes__TKwsuper.id;
if(var_tkwsupernode6 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_tkwsupernode6->type->table_size) {
var12 = 0;
} else {
var12 = var_tkwsupernode6->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24596);
show_backtrace(1);
}
var_pexprsnode7 = var_nodearraylist4;
/* <var_pexprsnode7:nullable Object> isa nullable AExprs */
cltype16 = type_nullable_parser_nodes__AExprs.color;
idtype17 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode7 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_pexprsnode7->type->table_size) {
var15 = 0;
} else {
var15 = var_pexprsnode7->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24598);
show_backtrace(1);
}
var18 = NEW_parser_nodes__ASuperExpr(&type_parser_nodes__ASuperExpr);
((void (*)(val*, val*, val*, val*))(var18->class->vft[COLOR_parser_prod__ASuperExpr__init_asuperexpr]))(var18, var_pqualifiednode2, var_tkwsupernode6, var_pexprsnode7) /* init_asuperexpr on <var18:ASuperExpr>*/;
var_pexprnode1 = var18;
var_node_list = var_pexprnode1;
var19 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction633> */
var20 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var19) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var20, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction633#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction633__action(val* self, val* p0) {
parser__ReduceAction633__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction634#action for (self: ReduceAction634, Parser) */
void parser__ReduceAction634__action(val* self, val* p0) {
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
val* var_listnode3 /* var listnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var6 /* : Array[Object] */;
val* var7 /* : AQualified */;
val* var8 /* : null */;
val* var_pqualifiednode2 /* var pqualifiednode2: nullable AQualified */;
val* var_tkwsupernode6 /* var tkwsupernode6: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_pexprsnode7 /* var pexprsnode7: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : ASuperExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ASuperExpr */;
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
var_listnode3 = var_nodearraylist1;
/* <var_listnode3:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode3 == NULL) {
var5 = 0;
} else {
if(cltype >= var_listnode3->type->table_size) {
var5 = 0;
} else {
var5 = var_listnode3->type->type_table[cltype] == idtype;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24618);
show_backtrace(1);
}
var6 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction634>*/;
var_listnode4 = var6;
var7 = NEW_parser_nodes__AQualified(&type_parser_nodes__AQualified);
var8 = NULL;
((void (*)(val*, val*, val*))(var7->class->vft[COLOR_parser_prod__AQualified__init_aqualified]))(var7, var_listnode4, var8) /* init_aqualified on <var7:AQualified>*/;
var_pqualifiednode2 = var7;
var_tkwsupernode6 = var_nodearraylist2;
/* <var_tkwsupernode6:nullable Object> isa nullable TKwsuper */
cltype10 = type_nullable_parser_nodes__TKwsuper.color;
idtype11 = type_nullable_parser_nodes__TKwsuper.id;
if(var_tkwsupernode6 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_tkwsupernode6->type->table_size) {
var9 = 0;
} else {
var9 = var_tkwsupernode6->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24625);
show_backtrace(1);
}
var_pexprsnode7 = var_nodearraylist3;
/* <var_pexprsnode7:nullable Object> isa nullable AExprs */
cltype13 = type_nullable_parser_nodes__AExprs.color;
idtype14 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode7 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_pexprsnode7->type->table_size) {
var12 = 0;
} else {
var12 = var_pexprsnode7->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24627);
show_backtrace(1);
}
var15 = NEW_parser_nodes__ASuperExpr(&type_parser_nodes__ASuperExpr);
((void (*)(val*, val*, val*, val*))(var15->class->vft[COLOR_parser_prod__ASuperExpr__init_asuperexpr]))(var15, var_pqualifiednode2, var_tkwsupernode6, var_pexprsnode7) /* init_asuperexpr on <var15:ASuperExpr>*/;
var_pexprnode1 = var15;
var_node_list = var_pexprnode1;
var16 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction634> */
var17 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var16) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var17, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction634#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction634__action(val* self, val* p0) {
parser__ReduceAction634__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction635#action for (self: ReduceAction635, Parser) */
void parser__ReduceAction635__action(val* self, val* p0) {
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
val* var_tkwinitnode3 /* var tkwinitnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : AInitExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AInitExpr */;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24648);
show_backtrace(1);
}
var_tkwinitnode3 = var_nodearraylist4;
/* <var_tkwinitnode3:nullable Object> isa nullable TKwinit */
cltype8 = type_nullable_parser_nodes__TKwinit.color;
idtype9 = type_nullable_parser_nodes__TKwinit.id;
if(var_tkwinitnode3 == NULL) {
var7 = 1;
} else {
if(cltype8 >= var_tkwinitnode3->type->table_size) {
var7 = 0;
} else {
var7 = var_tkwinitnode3->type->type_table[cltype8] == idtype9;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24650);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist5;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype11 = type_nullable_parser_nodes__AExprs.color;
idtype12 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode4 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_pexprsnode4->type->table_size) {
var10 = 0;
} else {
var10 = var_pexprsnode4->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24652);
show_backtrace(1);
}
var13 = NEW_parser_nodes__AInitExpr(&type_parser_nodes__AInitExpr);
((void (*)(val*, val*, val*, val*))(var13->class->vft[COLOR_parser_prod__AInitExpr__init_ainitexpr]))(var13, var_pexprnode2, var_tkwinitnode3, var_pexprsnode4) /* init_ainitexpr on <var13:AInitExpr>*/;
var_pexprnode1 = var13;
var_node_list = var_pexprnode1;
var14 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction635> */
var15 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var14) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var15, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction635#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction635__action(val* self, val* p0) {
parser__ReduceAction635__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction636#action for (self: ReduceAction636, Parser) */
void parser__ReduceAction636__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tkwinitnode3 /* var tkwinitnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var8 /* : AInitExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AInitExpr */;
long var9 /* : Int */;
long var10 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var3 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
((void (*)(val*))(var3->class->vft[COLOR_parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr]))(var3) /* init_aimplicitselfexpr on <var3:AImplicitSelfExpr>*/;
var_pexprnode2 = var3;
var_tkwinitnode3 = var_nodearraylist1;
/* <var_tkwinitnode3:nullable Object> isa nullable TKwinit */
cltype = type_nullable_parser_nodes__TKwinit.color;
idtype = type_nullable_parser_nodes__TKwinit.id;
if(var_tkwinitnode3 == NULL) {
var4 = 1;
} else {
if(cltype >= var_tkwinitnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_tkwinitnode3->type->type_table[cltype] == idtype;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24671);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist2;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype6 = type_nullable_parser_nodes__AExprs.color;
idtype7 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode4 == NULL) {
var5 = 1;
} else {
if(cltype6 >= var_pexprsnode4->type->table_size) {
var5 = 0;
} else {
var5 = var_pexprsnode4->type->type_table[cltype6] == idtype7;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24673);
show_backtrace(1);
}
var8 = NEW_parser_nodes__AInitExpr(&type_parser_nodes__AInitExpr);
((void (*)(val*, val*, val*, val*))(var8->class->vft[COLOR_parser_prod__AInitExpr__init_ainitexpr]))(var8, var_pexprnode2, var_tkwinitnode3, var_pexprsnode4) /* init_ainitexpr on <var8:AInitExpr>*/;
var_pexprnode1 = var8;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction636> */
var10 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var9) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var10, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction636#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction636__action(val* self, val* p0) {
parser__ReduceAction636__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction637#action for (self: ReduceAction637, Parser) */
void parser__ReduceAction637__action(val* self, val* p0) {
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
val* var_tkwinitnode3 /* var tkwinitnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : AInitExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AInitExpr */;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24695);
show_backtrace(1);
}
var_tkwinitnode3 = var_nodearraylist5;
/* <var_tkwinitnode3:nullable Object> isa nullable TKwinit */
cltype9 = type_nullable_parser_nodes__TKwinit.color;
idtype10 = type_nullable_parser_nodes__TKwinit.id;
if(var_tkwinitnode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_tkwinitnode3->type->table_size) {
var8 = 0;
} else {
var8 = var_tkwinitnode3->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24697);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist6;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype12 = type_nullable_parser_nodes__AExprs.color;
idtype13 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode4 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_pexprsnode4->type->table_size) {
var11 = 0;
} else {
var11 = var_pexprsnode4->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24699);
show_backtrace(1);
}
var14 = NEW_parser_nodes__AInitExpr(&type_parser_nodes__AInitExpr);
((void (*)(val*, val*, val*, val*))(var14->class->vft[COLOR_parser_prod__AInitExpr__init_ainitexpr]))(var14, var_pexprnode2, var_tkwinitnode3, var_pexprsnode4) /* init_ainitexpr on <var14:AInitExpr>*/;
var_pexprnode1 = var14;
var_node_list = var_pexprnode1;
var15 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction637> */
var16 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var15) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var16, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction637#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction637__action(val* self, val* p0) {
parser__ReduceAction637__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction638#action for (self: ReduceAction638, Parser) */
void parser__ReduceAction638__action(val* self, val* p0) {
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_tkwinitnode3 /* var tkwinitnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : AInitExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AInitExpr */;
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
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var8 = 0;
} else {
var8 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24722);
show_backtrace(1);
}
var_tkwinitnode3 = var_nodearraylist6;
/* <var_tkwinitnode3:nullable Object> isa nullable TKwinit */
cltype10 = type_nullable_parser_nodes__TKwinit.color;
idtype11 = type_nullable_parser_nodes__TKwinit.id;
if(var_tkwinitnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_tkwinitnode3->type->table_size) {
var9 = 0;
} else {
var9 = var_tkwinitnode3->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24724);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist7;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype13 = type_nullable_parser_nodes__AExprs.color;
idtype14 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_pexprsnode4->type->table_size) {
var12 = 0;
} else {
var12 = var_pexprsnode4->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24726);
show_backtrace(1);
}
var15 = NEW_parser_nodes__AInitExpr(&type_parser_nodes__AInitExpr);
((void (*)(val*, val*, val*, val*))(var15->class->vft[COLOR_parser_prod__AInitExpr__init_ainitexpr]))(var15, var_pexprnode2, var_tkwinitnode3, var_pexprsnode4) /* init_ainitexpr on <var15:AInitExpr>*/;
var_pexprnode1 = var15;
var_node_list = var_pexprnode1;
var16 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction638> */
var17 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var16) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var17, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction638#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction638__action(val* self, val* p0) {
parser__ReduceAction638__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction640#action for (self: ReduceAction640, Parser) */
void parser__ReduceAction640__action(val* self, val* p0) {
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
val* var_tkwinitnode3 /* var tkwinitnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : AInitExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AInitExpr */;
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
var4 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
((void (*)(val*))(var4->class->vft[COLOR_parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr]))(var4) /* init_aimplicitselfexpr on <var4:AImplicitSelfExpr>*/;
var_pexprnode2 = var4;
var_tkwinitnode3 = var_nodearraylist2;
/* <var_tkwinitnode3:nullable Object> isa nullable TKwinit */
cltype = type_nullable_parser_nodes__TKwinit.color;
idtype = type_nullable_parser_nodes__TKwinit.id;
if(var_tkwinitnode3 == NULL) {
var5 = 1;
} else {
if(cltype >= var_tkwinitnode3->type->table_size) {
var5 = 0;
} else {
var5 = var_tkwinitnode3->type->type_table[cltype] == idtype;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24746);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist3;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype7 = type_nullable_parser_nodes__AExprs.color;
idtype8 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode4 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_pexprsnode4->type->table_size) {
var6 = 0;
} else {
var6 = var_pexprsnode4->type->type_table[cltype7] == idtype8;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24748);
show_backtrace(1);
}
var9 = NEW_parser_nodes__AInitExpr(&type_parser_nodes__AInitExpr);
((void (*)(val*, val*, val*, val*))(var9->class->vft[COLOR_parser_prod__AInitExpr__init_ainitexpr]))(var9, var_pexprnode2, var_tkwinitnode3, var_pexprsnode4) /* init_ainitexpr on <var9:AInitExpr>*/;
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction640> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction640#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction640__action(val* self, val* p0) {
parser__ReduceAction640__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction641#action for (self: ReduceAction641, Parser) */
void parser__ReduceAction641__action(val* self, val* p0) {
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
val* var5 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tkwinitnode3 /* var tkwinitnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : AInitExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable AInitExpr */;
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
var5 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
((void (*)(val*))(var5->class->vft[COLOR_parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr]))(var5) /* init_aimplicitselfexpr on <var5:AImplicitSelfExpr>*/;
var_pexprnode2 = var5;
var_tkwinitnode3 = var_nodearraylist3;
/* <var_tkwinitnode3:nullable Object> isa nullable TKwinit */
cltype = type_nullable_parser_nodes__TKwinit.color;
idtype = type_nullable_parser_nodes__TKwinit.id;
if(var_tkwinitnode3 == NULL) {
var6 = 1;
} else {
if(cltype >= var_tkwinitnode3->type->table_size) {
var6 = 0;
} else {
var6 = var_tkwinitnode3->type->type_table[cltype] == idtype;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24769);
show_backtrace(1);
}
var_pexprsnode4 = var_nodearraylist4;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype8 = type_nullable_parser_nodes__AExprs.color;
idtype9 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode4 == NULL) {
var7 = 1;
} else {
if(cltype8 >= var_pexprsnode4->type->table_size) {
var7 = 0;
} else {
var7 = var_pexprsnode4->type->type_table[cltype8] == idtype9;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24771);
show_backtrace(1);
}
var10 = NEW_parser_nodes__AInitExpr(&type_parser_nodes__AInitExpr);
((void (*)(val*, val*, val*, val*))(var10->class->vft[COLOR_parser_prod__AInitExpr__init_ainitexpr]))(var10, var_pexprnode2, var_tkwinitnode3, var_pexprsnode4) /* init_ainitexpr on <var10:AInitExpr>*/;
var_pexprnode1 = var10;
var_node_list = var_pexprnode1;
var11 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction641> */
var12 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var11) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var12, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction641#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction641__action(val* self, val* p0) {
parser__ReduceAction641__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction643#action for (self: ReduceAction643, Parser) */
void parser__ReduceAction643__action(val* self, val* p0) {
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
val* var_tkwdebugnode2 /* var tkwdebugnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_tkwtypenode3 /* var tkwtypenode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_ptypenode5 /* var ptypenode5: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : ADebugTypeExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ADebugTypeExpr */;
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
var_tkwdebugnode2 = var_nodearraylist1;
/* <var_tkwdebugnode2:nullable Object> isa nullable TKwdebug */
cltype = type_nullable_parser_nodes__TKwdebug.color;
idtype = type_nullable_parser_nodes__TKwdebug.id;
if(var_tkwdebugnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= var_tkwdebugnode2->type->table_size) {
var6 = 0;
} else {
var6 = var_tkwdebugnode2->type->type_table[cltype] == idtype;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24792);
show_backtrace(1);
}
var_tkwtypenode3 = var_nodearraylist2;
/* <var_tkwtypenode3:nullable Object> isa nullable TKwtype */
cltype8 = type_nullable_parser_nodes__TKwtype.color;
idtype9 = type_nullable_parser_nodes__TKwtype.id;
if(var_tkwtypenode3 == NULL) {
var7 = 1;
} else {
if(cltype8 >= var_tkwtypenode3->type->table_size) {
var7 = 0;
} else {
var7 = var_tkwtypenode3->type->type_table[cltype8] == idtype9;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24794);
show_backtrace(1);
}
var_pexprnode4 = var_nodearraylist5;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24796);
show_backtrace(1);
}
var_ptypenode5 = var_nodearraylist3;
/* <var_ptypenode5:nullable Object> isa nullable AType */
cltype14 = type_nullable_parser_nodes__AType.color;
idtype15 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode5 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_ptypenode5->type->table_size) {
var13 = 0;
} else {
var13 = var_ptypenode5->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24798);
show_backtrace(1);
}
var16 = NEW_parser_nodes__ADebugTypeExpr(&type_parser_nodes__ADebugTypeExpr);
((void (*)(val*, val*, val*, val*, val*))(var16->class->vft[COLOR_parser_prod__ADebugTypeExpr__init_adebugtypeexpr]))(var16, var_tkwdebugnode2, var_tkwtypenode3, var_pexprnode4, var_ptypenode5) /* init_adebugtypeexpr on <var16:ADebugTypeExpr>*/;
var_pexprnode1 = var16;
var_node_list = var_pexprnode1;
var17 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction643> */
var18 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var17) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var18, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction643#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction643__action(val* self, val* p0) {
parser__ReduceAction643__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction644#action for (self: ReduceAction644, Parser) */
void parser__ReduceAction644__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwlabelnode2 /* var tkwlabelnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : ALabel */;
val* var_plabelnode1 /* var plabelnode1: nullable ALabel */;
long var8 /* : Int */;
long var9 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var_tkwlabelnode2 = var_nodearraylist1;
/* <var_tkwlabelnode2:nullable Object> isa nullable TKwlabel */
cltype = type_nullable_parser_nodes__TKwlabel.color;
idtype = type_nullable_parser_nodes__TKwlabel.id;
if(var_tkwlabelnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tkwlabelnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tkwlabelnode2->type->type_table[cltype] == idtype;
}
}
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24817);
show_backtrace(1);
}
var_tidnode3 = var_nodearraylist2;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype5 = type_nullable_parser_nodes__TId.color;
idtype6 = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_tidnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_tidnode3->type->type_table[cltype5] == idtype6;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24819);
show_backtrace(1);
}
var7 = NEW_parser_nodes__ALabel(&type_parser_nodes__ALabel);
((void (*)(val*, val*, val*))(var7->class->vft[COLOR_parser_prod__ALabel__init_alabel]))(var7, var_tkwlabelnode2, var_tidnode3) /* init_alabel on <var7:ALabel>*/;
var_plabelnode1 = var7;
var_node_list = var_plabelnode1;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction644> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction644#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction644__action(val* self, val* p0) {
parser__ReduceAction644__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction645#action for (self: ReduceAction645, Parser) */
void parser__ReduceAction645__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_pexprnode4 /* var pexprnode4: nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : AContinueExpr */;
val* var4 /* : null */;
val* var5 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable AContinueExpr */;
long var6 /* : Int */;
long var7 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var_pexprnode4 = var_nodearraylist1;
/* <var_pexprnode4:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode4 == NULL) {
var2 = 1;
} else {
if(cltype >= var_pexprnode4->type->table_size) {
var2 = 0;
} else {
var2 = var_pexprnode4->type->type_table[cltype] == idtype;
}
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24835);
show_backtrace(1);
}
var3 = NEW_parser_nodes__AContinueExpr(&type_parser_nodes__AContinueExpr);
var4 = NULL;
var5 = NULL;
((void (*)(val*, val*, val*, val*))(var3->class->vft[COLOR_parser_prod__AContinueExpr__init_acontinueexpr]))(var3, var4, var5, var_pexprnode4) /* init_acontinueexpr on <var3:AContinueExpr>*/;
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var6 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction645> */
var7 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var6) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var7, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction645#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction645__action(val* self, val* p0) {
parser__ReduceAction645__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction646#action for (self: ReduceAction646, Parser) */
void parser__ReduceAction646__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwvarnode2 /* var tkwvarnode2: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : AVardeclExpr */;
val* var8 /* : null */;
val* var9 /* : null */;
val* var10 /* : null */;
val* var11 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable AVardeclExpr */;
long var12 /* : Int */;
long var13 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var_tkwvarnode2 = var_nodearraylist1;
/* <var_tkwvarnode2:nullable Object> isa nullable TKwvar */
cltype = type_nullable_parser_nodes__TKwvar.color;
idtype = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode2 == NULL) {
var3 = 1;
} else {
if(cltype >= var_tkwvarnode2->type->table_size) {
var3 = 0;
} else {
var3 = var_tkwvarnode2->type->type_table[cltype] == idtype;
}
}
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24853);
show_backtrace(1);
}
var_tidnode3 = var_nodearraylist2;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype5 = type_nullable_parser_nodes__TId.color;
idtype6 = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var4 = 1;
} else {
if(cltype5 >= var_tidnode3->type->table_size) {
var4 = 0;
} else {
var4 = var_tidnode3->type->type_table[cltype5] == idtype6;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24855);
show_backtrace(1);
}
var7 = NEW_parser_nodes__AVardeclExpr(&type_parser_nodes__AVardeclExpr);
var8 = NULL;
var9 = NULL;
var10 = NULL;
var11 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*))(var7->class->vft[COLOR_parser_prod__AVardeclExpr__init_avardeclexpr]))(var7, var_tkwvarnode2, var_tidnode3, var8, var9, var10, var11) /* init_avardeclexpr on <var7:AVardeclExpr>*/;
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction646> */
var13 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var12) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var13, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction646#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction646__action(val* self, val* p0) {
parser__ReduceAction646__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction647#action for (self: ReduceAction647, Parser) */
void parser__ReduceAction647__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwvarnode2 /* var tkwvarnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_pannotationsnode7 /* var pannotationsnode7: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : AVardeclExpr */;
val* var12 /* : null */;
val* var13 /* : null */;
val* var14 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable AVardeclExpr */;
long var15 /* : Int */;
long var16 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var3;
var_tkwvarnode2 = var_nodearraylist1;
/* <var_tkwvarnode2:nullable Object> isa nullable TKwvar */
cltype = type_nullable_parser_nodes__TKwvar.color;
idtype = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode2 == NULL) {
var4 = 1;
} else {
if(cltype >= var_tkwvarnode2->type->table_size) {
var4 = 0;
} else {
var4 = var_tkwvarnode2->type->type_table[cltype] == idtype;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24877);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24879);
show_backtrace(1);
}
var_pannotationsnode7 = var_nodearraylist3;
/* <var_pannotationsnode7:nullable Object> isa nullable AAnnotations */
cltype9 = type_nullable_parser_nodes__AAnnotations.color;
idtype10 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode7 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_pannotationsnode7->type->table_size) {
var8 = 0;
} else {
var8 = var_pannotationsnode7->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24881);
show_backtrace(1);
}
var11 = NEW_parser_nodes__AVardeclExpr(&type_parser_nodes__AVardeclExpr);
var12 = NULL;
var13 = NULL;
var14 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*))(var11->class->vft[COLOR_parser_prod__AVardeclExpr__init_avardeclexpr]))(var11, var_tkwvarnode2, var_tidnode3, var12, var13, var14, var_pannotationsnode7) /* init_avardeclexpr on <var11:AVardeclExpr>*/;
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var15 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction647> */
var16 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var15) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var16, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction647#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction647__action(val* self, val* p0) {
parser__ReduceAction647__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction648#action for (self: ReduceAction648, Parser) */
void parser__ReduceAction648__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tkwvarnode2 /* var tkwvarnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
val* var_ptypenode4 /* var ptypenode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : AVardeclExpr */;
val* var12 /* : null */;
val* var13 /* : null */;
val* var14 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable AVardeclExpr */;
long var15 /* : Int */;
long var16 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var3;
var_tkwvarnode2 = var_nodearraylist1;
/* <var_tkwvarnode2:nullable Object> isa nullable TKwvar */
cltype = type_nullable_parser_nodes__TKwvar.color;
idtype = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode2 == NULL) {
var4 = 1;
} else {
if(cltype >= var_tkwvarnode2->type->table_size) {
var4 = 0;
} else {
var4 = var_tkwvarnode2->type->type_table[cltype] == idtype;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24903);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24905);
show_backtrace(1);
}
var_ptypenode4 = var_nodearraylist3;
/* <var_ptypenode4:nullable Object> isa nullable AType */
cltype9 = type_nullable_parser_nodes__AType.color;
idtype10 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_ptypenode4->type->table_size) {
var8 = 0;
} else {
var8 = var_ptypenode4->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24907);
show_backtrace(1);
}
var11 = NEW_parser_nodes__AVardeclExpr(&type_parser_nodes__AVardeclExpr);
var12 = NULL;
var13 = NULL;
var14 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*))(var11->class->vft[COLOR_parser_prod__AVardeclExpr__init_avardeclexpr]))(var11, var_tkwvarnode2, var_tidnode3, var_ptypenode4, var12, var13, var14) /* init_avardeclexpr on <var11:AVardeclExpr>*/;
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var15 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction648> */
var16 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var15) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var16, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction648#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction648__action(val* self, val* p0) {
parser__ReduceAction648__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction649#action for (self: ReduceAction649, Parser) */
void parser__ReduceAction649__action(val* self, val* p0) {
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
val* var_tkwvarnode2 /* var tkwvarnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var_ptypenode4 /* var ptypenode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_pannotationsnode7 /* var pannotationsnode7: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : AVardeclExpr */;
val* var16 /* : null */;
val* var17 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable AVardeclExpr */;
long var18 /* : Int */;
long var19 /* : Int */;
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
var_tkwvarnode2 = var_nodearraylist1;
/* <var_tkwvarnode2:nullable Object> isa nullable TKwvar */
cltype = type_nullable_parser_nodes__TKwvar.color;
idtype = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= var_tkwvarnode2->type->table_size) {
var5 = 0;
} else {
var5 = var_tkwvarnode2->type->type_table[cltype] == idtype;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24930);
show_backtrace(1);
}
var_tidnode3 = var_nodearraylist2;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24932);
show_backtrace(1);
}
var_ptypenode4 = var_nodearraylist4;
/* <var_ptypenode4:nullable Object> isa nullable AType */
cltype10 = type_nullable_parser_nodes__AType.color;
idtype11 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode4 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_ptypenode4->type->table_size) {
var9 = 0;
} else {
var9 = var_ptypenode4->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24934);
show_backtrace(1);
}
var_pannotationsnode7 = var_nodearraylist3;
/* <var_pannotationsnode7:nullable Object> isa nullable AAnnotations */
cltype13 = type_nullable_parser_nodes__AAnnotations.color;
idtype14 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode7 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_pannotationsnode7->type->table_size) {
var12 = 0;
} else {
var12 = var_pannotationsnode7->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24936);
show_backtrace(1);
}
var15 = NEW_parser_nodes__AVardeclExpr(&type_parser_nodes__AVardeclExpr);
var16 = NULL;
var17 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*))(var15->class->vft[COLOR_parser_prod__AVardeclExpr__init_avardeclexpr]))(var15, var_tkwvarnode2, var_tidnode3, var_ptypenode4, var16, var17, var_pannotationsnode7) /* init_avardeclexpr on <var15:AVardeclExpr>*/;
var_pexprnode1 = var15;
var_node_list = var_pexprnode1;
var18 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction649> */
var19 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var18) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var19, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction649#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction649__action(val* self, val* p0) {
parser__ReduceAction649__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction650#action for (self: ReduceAction650, Parser) */
void parser__ReduceAction650__action(val* self, val* p0) {
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
val* var_tkwvarnode2 /* var tkwvarnode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_tassignnode5 /* var tassignnode5: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_pexprnode6 /* var pexprnode6: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : AVardeclExpr */;
val* var17 /* : null */;
val* var18 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable AVardeclExpr */;
long var19 /* : Int */;
long var20 /* : Int */;
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
var_tkwvarnode2 = var_nodearraylist1;
/* <var_tkwvarnode2:nullable Object> isa nullable TKwvar */
cltype = type_nullable_parser_nodes__TKwvar.color;
idtype = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode2 == NULL) {
var6 = 1;
} else {
if(cltype >= var_tkwvarnode2->type->table_size) {
var6 = 0;
} else {
var6 = var_tkwvarnode2->type->type_table[cltype] == idtype;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24960);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24962);
show_backtrace(1);
}
var_tassignnode5 = var_nodearraylist3;
/* <var_tassignnode5:nullable Object> isa nullable TAssign */
cltype11 = type_nullable_parser_nodes__TAssign.color;
idtype12 = type_nullable_parser_nodes__TAssign.id;
if(var_tassignnode5 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_tassignnode5->type->table_size) {
var10 = 0;
} else {
var10 = var_tassignnode5->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24964);
show_backtrace(1);
}
var_pexprnode6 = var_nodearraylist5;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype14 = type_nullable_parser_nodes__AExpr.color;
idtype15 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode6 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_pexprnode6->type->table_size) {
var13 = 0;
} else {
var13 = var_pexprnode6->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24966);
show_backtrace(1);
}
var16 = NEW_parser_nodes__AVardeclExpr(&type_parser_nodes__AVardeclExpr);
var17 = NULL;
var18 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*))(var16->class->vft[COLOR_parser_prod__AVardeclExpr__init_avardeclexpr]))(var16, var_tkwvarnode2, var_tidnode3, var17, var_tassignnode5, var_pexprnode6, var18) /* init_avardeclexpr on <var16:AVardeclExpr>*/;
var_pexprnode1 = var16;
var_node_list = var_pexprnode1;
var19 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction650> */
var20 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var19) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var20, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction650#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction650__action(val* self, val* p0) {
parser__ReduceAction650__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction651#action for (self: ReduceAction651, Parser) */
void parser__ReduceAction651__action(val* self, val* p0) {
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
val* var_tkwvarnode2 /* var tkwvarnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_tassignnode5 /* var tassignnode5: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_pexprnode6 /* var pexprnode6: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_pannotationsnode7 /* var pannotationsnode7: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var20 /* : AVardeclExpr */;
val* var21 /* : null */;
val* var_pexprnode1 /* var pexprnode1: nullable AVardeclExpr */;
long var22 /* : Int */;
long var23 /* : Int */;
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
var_tkwvarnode2 = var_nodearraylist1;
/* <var_tkwvarnode2:nullable Object> isa nullable TKwvar */
cltype = type_nullable_parser_nodes__TKwvar.color;
idtype = type_nullable_parser_nodes__TKwvar.id;
if(var_tkwvarnode2 == NULL) {
var7 = 1;
} else {
if(cltype >= var_tkwvarnode2->type->table_size) {
var7 = 0;
} else {
var7 = var_tkwvarnode2->type->type_table[cltype] == idtype;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24991);
show_backtrace(1);
}
var_tidnode3 = var_nodearraylist2;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype9 = type_nullable_parser_nodes__TId.color;
idtype10 = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_tidnode3->type->table_size) {
var8 = 0;
} else {
var8 = var_tidnode3->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24993);
show_backtrace(1);
}
var_tassignnode5 = var_nodearraylist4;
/* <var_tassignnode5:nullable Object> isa nullable TAssign */
cltype12 = type_nullable_parser_nodes__TAssign.color;
idtype13 = type_nullable_parser_nodes__TAssign.id;
if(var_tassignnode5 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_tassignnode5->type->table_size) {
var11 = 0;
} else {
var11 = var_tassignnode5->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24995);
show_backtrace(1);
}
var_pexprnode6 = var_nodearraylist6;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype15 = type_nullable_parser_nodes__AExpr.color;
idtype16 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode6 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_pexprnode6->type->table_size) {
var14 = 0;
} else {
var14 = var_pexprnode6->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24997);
show_backtrace(1);
}
var_pannotationsnode7 = var_nodearraylist3;
/* <var_pannotationsnode7:nullable Object> isa nullable AAnnotations */
cltype18 = type_nullable_parser_nodes__AAnnotations.color;
idtype19 = type_nullable_parser_nodes__AAnnotations.id;
if(var_pannotationsnode7 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_pannotationsnode7->type->table_size) {
var17 = 0;
} else {
var17 = var_pannotationsnode7->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 24999);
show_backtrace(1);
}
var20 = NEW_parser_nodes__AVardeclExpr(&type_parser_nodes__AVardeclExpr);
var21 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*))(var20->class->vft[COLOR_parser_prod__AVardeclExpr__init_avardeclexpr]))(var20, var_tkwvarnode2, var_tidnode3, var21, var_tassignnode5, var_pexprnode6, var_pannotationsnode7) /* init_avardeclexpr on <var20:AVardeclExpr>*/;
var_pexprnode1 = var20;
var_node_list = var_pexprnode1;
var22 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction651> */
var23 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var22) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var23, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction651#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction651__action(val* self, val* p0) {
parser__ReduceAction651__action(self, p0);
RET_LABEL:;
}
