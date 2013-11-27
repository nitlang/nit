#include "parser.sep.0.h"
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4037);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4039);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4041);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4043);
exit(1);
}
var17 = NEW_parser_nodes__AModuledecl(&type_parser_nodes__AModuledecl);
((void (*)(val*, val*, val*, val*, val*))(var17->class->vft[COLOR_parser_prod__AModuledecl__init_amoduledecl]))(var17, var_pdocnode2, var_tkwmodulenode3, var_pmodulenamenode4, var_pannotationsnode5) /* init_amoduledecl on <var17:AModuledecl>*/;
CHECK_NEW_parser_nodes__AModuledecl(var17);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4066);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4068);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4070);
exit(1);
}
var14 = NEW_parser_nodes__AStdImport(&type_parser_nodes__AStdImport);
var15 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var14->class->vft[COLOR_parser_prod__AStdImport__init_astdimport]))(var14, var_pvisibilitynode2, var_tkwimportnode3, var_pmodulenamenode4, var15) /* init_astdimport on <var14:AStdImport>*/;
CHECK_NEW_parser_nodes__AStdImport(var14);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4094);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4096);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4098);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4100);
exit(1);
}
var18 = NEW_parser_nodes__AStdImport(&type_parser_nodes__AStdImport);
((void (*)(val*, val*, val*, val*, val*))(var18->class->vft[COLOR_parser_prod__AStdImport__init_astdimport]))(var18, var_pvisibilitynode2, var_tkwimportnode3, var_pmodulenamenode4, var_pannotationsnode5) /* init_astdimport on <var18:AStdImport>*/;
CHECK_NEW_parser_nodes__AStdImport(var18);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4123);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4125);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4127);
exit(1);
}
var14 = NEW_parser_nodes__ANoImport(&type_parser_nodes__ANoImport);
((void (*)(val*, val*, val*, val*))(var14->class->vft[COLOR_parser_prod__ANoImport__init_anoimport]))(var14, var_pvisibilitynode2, var_tkwimportnode3, var_tkwendnode4) /* init_anoimport on <var14:ANoImport>*/;
CHECK_NEW_parser_nodes__ANoImport(var14);
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
CHECK_NEW_array__Array(var2);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4145);
exit(1);
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
CHECK_NEW_parser_nodes__AMainClassdef(var6);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4174);
exit(1);
}
var4 = NEW_parser_nodes__AMainMethPropdef(&type_parser_nodes__AMainMethPropdef);
var5 = NULL;
((void (*)(val*, val*, val*))(var4->class->vft[COLOR_parser_prod__AMainMethPropdef__init_amainmethpropdef]))(var4, var5, var_pexprnode3) /* init_amainmethpropdef on <var4:AMainMethPropdef>*/;
CHECK_NEW_parser_nodes__AMainMethPropdef(var4);
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
CHECK_NEW_array__Array(var8);
var_listnode7 = var8;
var9 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var9->class->vft[COLOR_array__Array__init]))(var9) /* init on <var9:Array[Object]>*/;
CHECK_NEW_array__Array(var9);
var_listnode10 = var9;
var10 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var10->class->vft[COLOR_array__Array__init]))(var10) /* init on <var10:Array[Object]>*/;
CHECK_NEW_array__Array(var10);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4199);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4201);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4203);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4205);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4207);
exit(1);
}
var24 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var25 = NULL;
var26 = NULL;
var27 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var24->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var24, var_pdocnode2, var25, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var26, var27, var_listnode10, var_listnode11, var_tkwendnode12) /* init_astdclassdef on <var24:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var24);
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
/* method parser#ReduceAction74#action for (self: ReduceAction74, Parser) */
void parser__ReduceAction74__action(val* self, val* p0) {
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
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var11 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: Array[Object] */;
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
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_tkwendnode12 /* var tkwendnode12: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : AStdClassdef */;
val* var29 /* : null */;
val* var30 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
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
var9 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var9->class->vft[COLOR_array__Array__init]))(var9) /* init on <var9:Array[Object]>*/;
CHECK_NEW_array__Array(var9);
var_listnode7 = var9;
var10 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var10->class->vft[COLOR_array__Array__init]))(var10) /* init on <var10:Array[Object]>*/;
CHECK_NEW_array__Array(var10);
var_listnode10 = var10;
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var11->class->vft[COLOR_array__Array__init]))(var11) /* init on <var11:Array[Object]>*/;
CHECK_NEW_array__Array(var11);
var_listnode11 = var11;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4242);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4244);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4246);
exit(1);
}
var_pclasskindnode5 = var_nodearraylist4;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4248);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4250);
exit(1);
}
var_tkwendnode12 = var_nodearraylist8;
/* <var_tkwendnode12:nullable Object> isa nullable TKwend */
cltype26 = type_nullable_parser_nodes__TKwend.color;
idtype27 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode12 == NULL) {
var25 = 1;
} else {
if(cltype26 >= var_tkwendnode12->type->table_size) {
var25 = 0;
} else {
var25 = var_tkwendnode12->type->type_table[cltype26] == idtype27;
}
}
if (!var25) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4252);
exit(1);
}
var28 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var29 = NULL;
var30 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var28->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var28, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var29, var30, var_listnode10, var_listnode11, var_tkwendnode12) /* init_astdclassdef on <var28:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var28);
var_pclassdefnode1 = var28;
var_node_list = var_pclassdefnode1;
var31 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction74> */
var32 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var31) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var32, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction74#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction74__action(val* self, val* p0) {
parser__ReduceAction74__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction75#action for (self: ReduceAction75, Parser) */
void parser__ReduceAction75__action(val* self, val* p0) {
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
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var11 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: Array[Object] */;
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
val* var_tkwendnode12 /* var tkwendnode12: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var25 /* : AStdClassdef */;
val* var26 /* : null */;
val* var27 /* : null */;
val* var28 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
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
var9 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var9->class->vft[COLOR_array__Array__init]))(var9) /* init on <var9:Array[Object]>*/;
CHECK_NEW_array__Array(var9);
var_listnode7 = var9;
var10 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var10->class->vft[COLOR_array__Array__init]))(var10) /* init on <var10:Array[Object]>*/;
CHECK_NEW_array__Array(var10);
var_listnode10 = var10;
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var11->class->vft[COLOR_array__Array__init]))(var11) /* init on <var11:Array[Object]>*/;
CHECK_NEW_array__Array(var11);
var_listnode11 = var11;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4287);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4289);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4291);
exit(1);
}
var_tclassidnode6 = var_nodearraylist6;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4293);
exit(1);
}
var_tkwendnode12 = var_nodearraylist8;
/* <var_tkwendnode12:nullable Object> isa nullable TKwend */
cltype23 = type_nullable_parser_nodes__TKwend.color;
idtype24 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode12 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_tkwendnode12->type->table_size) {
var22 = 0;
} else {
var22 = var_tkwendnode12->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4295);
exit(1);
}
var25 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var26 = NULL;
var27 = NULL;
var28 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var25->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var25, var_pdocnode2, var26, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var27, var28, var_listnode10, var_listnode11, var_tkwendnode12) /* init_astdclassdef on <var25:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var25);
var_pclassdefnode1 = var25;
var_node_list = var_pclassdefnode1;
var29 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction75> */
var30 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var29) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var30, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction75#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction75__action(val* self, val* p0) {
parser__ReduceAction75__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction76#action for (self: ReduceAction76, Parser) */
void parser__ReduceAction76__action(val* self, val* p0) {
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
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var12 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: Array[Object] */;
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
val* var_tkwendnode12 /* var tkwendnode12: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var26 /* : AStdClassdef */;
val* var27 /* : null */;
val* var28 /* : null */;
val* var29 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var30 /* : Int */;
long var31 /* : Int */;
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
CHECK_NEW_array__Array(var10);
var_listnode7 = var10;
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var11->class->vft[COLOR_array__Array__init]))(var11) /* init on <var11:Array[Object]>*/;
CHECK_NEW_array__Array(var11);
var_listnode10 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
var_listnode11 = var12;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4331);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4333);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4335);
exit(1);
}
var_tclassidnode6 = var_nodearraylist7;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4337);
exit(1);
}
var_tkwendnode12 = var_nodearraylist9;
/* <var_tkwendnode12:nullable Object> isa nullable TKwend */
cltype24 = type_nullable_parser_nodes__TKwend.color;
idtype25 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode12 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_tkwendnode12->type->table_size) {
var23 = 0;
} else {
var23 = var_tkwendnode12->type->type_table[cltype24] == idtype25;
}
}
if (!var23) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4339);
exit(1);
}
var26 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var27 = NULL;
var28 = NULL;
var29 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var26->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var26, var_pdocnode2, var27, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var28, var29, var_listnode10, var_listnode11, var_tkwendnode12) /* init_astdclassdef on <var26:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var26);
var_pclassdefnode1 = var26;
var_node_list = var_pclassdefnode1;
var30 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction76> */
var31 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var30) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var31, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction76#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction76__action(val* self, val* p0) {
parser__ReduceAction76__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction78#action for (self: ReduceAction78, Parser) */
void parser__ReduceAction78__action(val* self, val* p0) {
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
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var12 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: Array[Object] */;
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
val* var_tkwendnode12 /* var tkwendnode12: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : AStdClassdef */;
val* var30 /* : null */;
val* var31 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
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
var10 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var10->class->vft[COLOR_array__Array__init]))(var10) /* init on <var10:Array[Object]>*/;
CHECK_NEW_array__Array(var10);
var_listnode7 = var10;
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var11->class->vft[COLOR_array__Array__init]))(var11) /* init on <var11:Array[Object]>*/;
CHECK_NEW_array__Array(var11);
var_listnode10 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
var_listnode11 = var12;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4375);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4377);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4379);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4381);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4383);
exit(1);
}
var_tkwendnode12 = var_nodearraylist9;
/* <var_tkwendnode12:nullable Object> isa nullable TKwend */
cltype27 = type_nullable_parser_nodes__TKwend.color;
idtype28 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode12 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_tkwendnode12->type->table_size) {
var26 = 0;
} else {
var26 = var_tkwendnode12->type->type_table[cltype27] == idtype28;
}
}
if (!var26) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4385);
exit(1);
}
var29 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var30 = NULL;
var31 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var29, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var30, var31, var_listnode10, var_listnode11, var_tkwendnode12) /* init_astdclassdef on <var29:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var29);
var_pclassdefnode1 = var29;
var_node_list = var_pclassdefnode1;
var32 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction78> */
var33 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var32) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var33, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction78#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction78__action(val* self, val* p0) {
parser__ReduceAction78__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction79#action for (self: ReduceAction79, Parser) */
void parser__ReduceAction79__action(val* self, val* p0) {
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
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: Array[Object] */;
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
val* var_tkwendnode12 /* var tkwendnode12: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var30 /* : AStdClassdef */;
val* var31 /* : null */;
val* var32 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var33 /* : Int */;
long var34 /* : Int */;
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
CHECK_NEW_array__Array(var11);
var_listnode7 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
var_listnode10 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
var_listnode11 = var13;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4422);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4424);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4426);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4428);
exit(1);
}
var_tclassidnode6 = var_nodearraylist8;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4430);
exit(1);
}
var_tkwendnode12 = var_nodearraylist10;
/* <var_tkwendnode12:nullable Object> isa nullable TKwend */
cltype28 = type_nullable_parser_nodes__TKwend.color;
idtype29 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode12 == NULL) {
var27 = 1;
} else {
if(cltype28 >= var_tkwendnode12->type->table_size) {
var27 = 0;
} else {
var27 = var_tkwendnode12->type->type_table[cltype28] == idtype29;
}
}
if (!var27) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4432);
exit(1);
}
var30 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var31 = NULL;
var32 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var30->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var30, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var31, var32, var_listnode10, var_listnode11, var_tkwendnode12) /* init_astdclassdef on <var30:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var30);
var_pclassdefnode1 = var30;
var_node_list = var_pclassdefnode1;
var33 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction79> */
var34 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var33) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var34, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction79#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction79__action(val* self, val* p0) {
parser__ReduceAction79__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction81#action for (self: ReduceAction81, Parser) */
void parser__ReduceAction81__action(val* self, val* p0) {
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
val* var_listnode8 /* var listnode8: Array[Object] */;
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
val* var_listnode7 /* var listnode7: nullable Object */;
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
CHECK_NEW_array__Array(var9);
var_listnode8 = var9;
var10 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var10->class->vft[COLOR_array__Array__init]))(var10) /* init on <var10:Array[Object]>*/;
CHECK_NEW_array__Array(var10);
var_listnode11 = var10;
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var11->class->vft[COLOR_array__Array__init]))(var11) /* init on <var11:Array[Object]>*/;
CHECK_NEW_array__Array(var11);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4467);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4469);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4471);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4473);
exit(1);
}
var_listnode7 = var_nodearraylist6;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype23 = type_array__Arraykernel__Object.color;
idtype24 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var22 = 0;
} else {
if(cltype23 >= var_listnode7->type->table_size) {
var22 = 0;
} else {
var22 = var_listnode7->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4475);
exit(1);
}
var25 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction81>*/;
var_listnode8 = var25;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4478);
exit(1);
}
var29 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var30 = NULL;
var31 = NULL;
var32 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var29, var_pdocnode2, var30, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var31, var32, var_listnode11, var_listnode12, var_tkwendnode13) /* init_astdclassdef on <var29:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var29);
var_pclassdefnode1 = var29;
var_node_list = var_pclassdefnode1;
var33 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction81> */
var34 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var33) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var34, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction81#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction81__action(val* self, val* p0) {
parser__ReduceAction81__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction82#action for (self: ReduceAction82, Parser) */
void parser__ReduceAction82__action(val* self, val* p0) {
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
val* var_listnode7 /* var listnode7: nullable Object */;
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
CHECK_NEW_array__Array(var10);
var_listnode8 = var10;
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var11->class->vft[COLOR_array__Array__init]))(var11) /* init on <var11:Array[Object]>*/;
CHECK_NEW_array__Array(var11);
var_listnode11 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4514);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4516);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4518);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4520);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4522);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4524);
exit(1);
}
var29 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction82>*/;
var_listnode8 = var29;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4527);
exit(1);
}
var33 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var34 = NULL;
var35 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var33->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var33, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var34, var35, var_listnode11, var_listnode12, var_tkwendnode13) /* init_astdclassdef on <var33:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var33);
var_pclassdefnode1 = var33;
var_node_list = var_pclassdefnode1;
var36 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction82> */
var37 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var36) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var37, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction82#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction82__action(val* self, val* p0) {
parser__ReduceAction82__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction83#action for (self: ReduceAction83, Parser) */
void parser__ReduceAction83__action(val* self, val* p0) {
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
val* var_listnode7 /* var listnode7: nullable Object */;
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
CHECK_NEW_array__Array(var10);
var_listnode8 = var10;
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var11->class->vft[COLOR_array__Array__init]))(var11) /* init on <var11:Array[Object]>*/;
CHECK_NEW_array__Array(var11);
var_listnode11 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4563);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4565);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4567);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4569);
exit(1);
}
var_listnode7 = var_nodearraylist7;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4571);
exit(1);
}
var26 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction83>*/;
var_listnode8 = var26;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4574);
exit(1);
}
var30 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var31 = NULL;
var32 = NULL;
var33 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var30->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var30, var_pdocnode2, var31, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var32, var33, var_listnode11, var_listnode12, var_tkwendnode13) /* init_astdclassdef on <var30:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var30);
var_pclassdefnode1 = var30;
var_node_list = var_pclassdefnode1;
var34 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction83> */
var35 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var34) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var35, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction83#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction83__action(val* self, val* p0) {
parser__ReduceAction83__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction84#action for (self: ReduceAction84, Parser) */
void parser__ReduceAction84__action(val* self, val* p0) {
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
val* var_listnode7 /* var listnode7: nullable Object */;
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
CHECK_NEW_array__Array(var11);
var_listnode8 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
var_listnode11 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4611);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4613);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4615);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4617);
exit(1);
}
var_listnode7 = var_nodearraylist8;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4619);
exit(1);
}
var27 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction84>*/;
var_listnode8 = var27;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4622);
exit(1);
}
var31 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var32 = NULL;
var33 = NULL;
var34 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var31->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var31, var_pdocnode2, var32, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var33, var34, var_listnode11, var_listnode12, var_tkwendnode13) /* init_astdclassdef on <var31:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var31);
var_pclassdefnode1 = var31;
var_node_list = var_pclassdefnode1;
var35 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction84> */
var36 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var35) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var36, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction84#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction84__action(val* self, val* p0) {
parser__ReduceAction84__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction86#action for (self: ReduceAction86, Parser) */
void parser__ReduceAction86__action(val* self, val* p0) {
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
val* var_listnode7 /* var listnode7: nullable Object */;
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
CHECK_NEW_array__Array(var11);
var_listnode8 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
var_listnode11 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4659);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4661);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4663);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4665);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4667);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4669);
exit(1);
}
var30 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction86>*/;
var_listnode8 = var30;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4672);
exit(1);
}
var34 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var35 = NULL;
var36 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var34->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var34, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var35, var36, var_listnode11, var_listnode12, var_tkwendnode13) /* init_astdclassdef on <var34:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var34);
var_pclassdefnode1 = var34;
var_node_list = var_pclassdefnode1;
var37 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction86> */
var38 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var37) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var38, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction86#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction86__action(val* self, val* p0) {
parser__ReduceAction86__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction87#action for (self: ReduceAction87, Parser) */
void parser__ReduceAction87__action(val* self, val* p0) {
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
val* var_listnode7 /* var listnode7: nullable Object */;
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
CHECK_NEW_array__Array(var12);
var_listnode8 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
var_listnode11 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
CHECK_NEW_array__Array(var14);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4710);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4712);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4714);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4716);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4718);
exit(1);
}
var_listnode7 = var_nodearraylist9;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4720);
exit(1);
}
var31 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction87>*/;
var_listnode8 = var31;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4723);
exit(1);
}
var35 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var36 = NULL;
var37 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var35->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var35, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var36, var37, var_listnode11, var_listnode12, var_tkwendnode13) /* init_astdclassdef on <var35:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var35);
var_pclassdefnode1 = var35;
var_node_list = var_pclassdefnode1;
var38 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction87> */
var39 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var38) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var39, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction87#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction87__action(val* self, val* p0) {
parser__ReduceAction87__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction89#action for (self: ReduceAction89, Parser) */
void parser__ReduceAction89__action(val* self, val* p0) {
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
val* var_listnode15 /* var listnode15: Array[Object] */;
val* var11 /* : Array[Object] */;
val* var_listnode16 /* var listnode16: Array[Object] */;
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
val* var22 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var26 /* : Array[Object] */;
val* var27 /* : AAnnotations */;
val* var28 /* : null */;
val* var29 /* : null */;
val* var30 /* : null */;
val* var_pannotationsnode8 /* var pannotationsnode8: nullable AAnnotations */;
val* var_tkwendnode17 /* var tkwendnode17: nullable Object */;
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
CHECK_NEW_array__Array(var9);
var_listnode7 = var9;
var10 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var10->class->vft[COLOR_array__Array__init]))(var10) /* init on <var10:Array[Object]>*/;
CHECK_NEW_array__Array(var10);
var_listnode15 = var10;
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var11->class->vft[COLOR_array__Array__init]))(var11) /* init on <var11:Array[Object]>*/;
CHECK_NEW_array__Array(var11);
var_listnode16 = var11;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4758);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4760);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4762);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4764);
exit(1);
}
var22 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var22->class->vft[COLOR_array__Array__init]))(var22) /* init on <var22:Array[Object]>*/;
CHECK_NEW_array__Array(var22);
var_listnode12 = var22;
var_listnode11 = var_nodearraylist6;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype24 = type_array__Arraykernel__Object.color;
idtype25 = type_array__Arraykernel__Object.id;
if(var_listnode11 == NULL) {
var23 = 0;
} else {
if(cltype24 >= var_listnode11->type->table_size) {
var23 = 0;
} else {
var23 = var_listnode11->type->type_table[cltype24] == idtype25;
}
}
if (!var23) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4767);
exit(1);
}
var26 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction89>*/;
var_listnode12 = var26;
var27 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var28 = NULL;
var29 = NULL;
var30 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var27->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var27, var28, var29, var_listnode12, var30) /* init_aannotations on <var27:AAnnotations>*/;
CHECK_NEW_parser_nodes__AAnnotations(var27);
var_pannotationsnode8 = var27;
var_tkwendnode17 = var_nodearraylist8;
/* <var_tkwendnode17:nullable Object> isa nullable TKwend */
cltype32 = type_nullable_parser_nodes__TKwend.color;
idtype33 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode17 == NULL) {
var31 = 1;
} else {
if(cltype32 >= var_tkwendnode17->type->table_size) {
var31 = 0;
} else {
var31 = var_tkwendnode17->type->type_table[cltype32] == idtype33;
}
}
if (!var31) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4776);
exit(1);
}
var34 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var35 = NULL;
var36 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var34->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var34, var_pdocnode2, var35, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var_pannotationsnode8, var36, var_listnode15, var_listnode16, var_tkwendnode17) /* init_astdclassdef on <var34:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var34);
var_pclassdefnode1 = var34;
var_node_list = var_pclassdefnode1;
var37 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction89> */
var38 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var37) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var38, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction89#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction89__action(val* self, val* p0) {
parser__ReduceAction89__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction90#action for (self: ReduceAction90, Parser) */
void parser__ReduceAction90__action(val* self, val* p0) {
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
val* var_listnode15 /* var listnode15: Array[Object] */;
val* var12 /* : Array[Object] */;
val* var_listnode16 /* var listnode16: Array[Object] */;
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
val* var_tkwendnode17 /* var tkwendnode17: nullable Object */;
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
CHECK_NEW_array__Array(var10);
var_listnode7 = var10;
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var11->class->vft[COLOR_array__Array__init]))(var11) /* init on <var11:Array[Object]>*/;
CHECK_NEW_array__Array(var11);
var_listnode15 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
var_listnode16 = var12;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4812);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4814);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4816);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4818);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4820);
exit(1);
}
var26 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var26->class->vft[COLOR_array__Array__init]))(var26) /* init on <var26:Array[Object]>*/;
CHECK_NEW_array__Array(var26);
var_listnode12 = var26;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4823);
exit(1);
}
var30 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction90>*/;
var_listnode12 = var30;
var31 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var32 = NULL;
var33 = NULL;
var34 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var31->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var31, var32, var33, var_listnode12, var34) /* init_aannotations on <var31:AAnnotations>*/;
CHECK_NEW_parser_nodes__AAnnotations(var31);
var_pannotationsnode8 = var31;
var_tkwendnode17 = var_nodearraylist9;
/* <var_tkwendnode17:nullable Object> isa nullable TKwend */
cltype36 = type_nullable_parser_nodes__TKwend.color;
idtype37 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode17 == NULL) {
var35 = 1;
} else {
if(cltype36 >= var_tkwendnode17->type->table_size) {
var35 = 0;
} else {
var35 = var_tkwendnode17->type->type_table[cltype36] == idtype37;
}
}
if (!var35) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4832);
exit(1);
}
var38 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var39 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var38->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var38, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var_pannotationsnode8, var39, var_listnode15, var_listnode16, var_tkwendnode17) /* init_astdclassdef on <var38:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var38);
var_pclassdefnode1 = var38;
var_node_list = var_pclassdefnode1;
var40 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction90> */
var41 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var40) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var41, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction90#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction90__action(val* self, val* p0) {
parser__ReduceAction90__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction91#action for (self: ReduceAction91, Parser) */
void parser__ReduceAction91__action(val* self, val* p0) {
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
val* var_listnode15 /* var listnode15: Array[Object] */;
val* var12 /* : Array[Object] */;
val* var_listnode16 /* var listnode16: Array[Object] */;
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
val* var_tkwendnode17 /* var tkwendnode17: nullable Object */;
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
CHECK_NEW_array__Array(var10);
var_listnode7 = var10;
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var11->class->vft[COLOR_array__Array__init]))(var11) /* init on <var11:Array[Object]>*/;
CHECK_NEW_array__Array(var11);
var_listnode15 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
var_listnode16 = var12;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4868);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4870);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4872);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4874);
exit(1);
}
var23 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var23->class->vft[COLOR_array__Array__init]))(var23) /* init on <var23:Array[Object]>*/;
CHECK_NEW_array__Array(var23);
var_listnode12 = var23;
var_listnode11 = var_nodearraylist7;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4877);
exit(1);
}
var27 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction91>*/;
var_listnode12 = var27;
var28 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var29 = NULL;
var30 = NULL;
var31 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var28->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var28, var29, var30, var_listnode12, var31) /* init_aannotations on <var28:AAnnotations>*/;
CHECK_NEW_parser_nodes__AAnnotations(var28);
var_pannotationsnode8 = var28;
var_tkwendnode17 = var_nodearraylist9;
/* <var_tkwendnode17:nullable Object> isa nullable TKwend */
cltype33 = type_nullable_parser_nodes__TKwend.color;
idtype34 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode17 == NULL) {
var32 = 1;
} else {
if(cltype33 >= var_tkwendnode17->type->table_size) {
var32 = 0;
} else {
var32 = var_tkwendnode17->type->type_table[cltype33] == idtype34;
}
}
if (!var32) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4886);
exit(1);
}
var35 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var36 = NULL;
var37 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var35->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var35, var_pdocnode2, var36, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var_pannotationsnode8, var37, var_listnode15, var_listnode16, var_tkwendnode17) /* init_astdclassdef on <var35:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var35);
var_pclassdefnode1 = var35;
var_node_list = var_pclassdefnode1;
var38 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction91> */
var39 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var38) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var39, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction91#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction91__action(val* self, val* p0) {
parser__ReduceAction91__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction92#action for (self: ReduceAction92, Parser) */
void parser__ReduceAction92__action(val* self, val* p0) {
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
val* var_listnode15 /* var listnode15: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode16 /* var listnode16: Array[Object] */;
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
val* var_tkwendnode17 /* var tkwendnode17: nullable Object */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
val* var36 /* : AStdClassdef */;
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
CHECK_NEW_array__Array(var11);
var_listnode7 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
var_listnode15 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
var_listnode16 = var13;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4923);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4925);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4927);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4929);
exit(1);
}
var24 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var24->class->vft[COLOR_array__Array__init]))(var24) /* init on <var24:Array[Object]>*/;
CHECK_NEW_array__Array(var24);
var_listnode12 = var24;
var_listnode11 = var_nodearraylist8;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4932);
exit(1);
}
var28 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction92>*/;
var_listnode12 = var28;
var29 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var30 = NULL;
var31 = NULL;
var32 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var29, var30, var31, var_listnode12, var32) /* init_aannotations on <var29:AAnnotations>*/;
CHECK_NEW_parser_nodes__AAnnotations(var29);
var_pannotationsnode8 = var29;
var_tkwendnode17 = var_nodearraylist10;
/* <var_tkwendnode17:nullable Object> isa nullable TKwend */
cltype34 = type_nullable_parser_nodes__TKwend.color;
idtype35 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode17 == NULL) {
var33 = 1;
} else {
if(cltype34 >= var_tkwendnode17->type->table_size) {
var33 = 0;
} else {
var33 = var_tkwendnode17->type->type_table[cltype34] == idtype35;
}
}
if (!var33) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4941);
exit(1);
}
var36 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var37 = NULL;
var38 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var36->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var36, var_pdocnode2, var37, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var_pannotationsnode8, var38, var_listnode15, var_listnode16, var_tkwendnode17) /* init_astdclassdef on <var36:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var36);
var_pclassdefnode1 = var36;
var_node_list = var_pclassdefnode1;
var39 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction92> */
var40 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var39) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var40, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction92#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction92__action(val* self, val* p0) {
parser__ReduceAction92__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction94#action for (self: ReduceAction94, Parser) */
void parser__ReduceAction94__action(val* self, val* p0) {
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
val* var_listnode15 /* var listnode15: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode16 /* var listnode16: Array[Object] */;
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
val* var_tkwendnode17 /* var tkwendnode17: nullable Object */;
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
CHECK_NEW_array__Array(var11);
var_listnode7 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
var_listnode15 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
var_listnode16 = var13;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4978);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4980);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4982);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4984);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4986);
exit(1);
}
var27 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var27->class->vft[COLOR_array__Array__init]))(var27) /* init on <var27:Array[Object]>*/;
CHECK_NEW_array__Array(var27);
var_listnode12 = var27;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4989);
exit(1);
}
var31 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction94>*/;
var_listnode12 = var31;
var32 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var33 = NULL;
var34 = NULL;
var35 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var32->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var32, var33, var34, var_listnode12, var35) /* init_aannotations on <var32:AAnnotations>*/;
CHECK_NEW_parser_nodes__AAnnotations(var32);
var_pannotationsnode8 = var32;
var_tkwendnode17 = var_nodearraylist10;
/* <var_tkwendnode17:nullable Object> isa nullable TKwend */
cltype37 = type_nullable_parser_nodes__TKwend.color;
idtype38 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode17 == NULL) {
var36 = 1;
} else {
if(cltype37 >= var_tkwendnode17->type->table_size) {
var36 = 0;
} else {
var36 = var_tkwendnode17->type->type_table[cltype37] == idtype38;
}
}
if (!var36) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4998);
exit(1);
}
var39 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var40 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var39->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var39, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var_pannotationsnode8, var40, var_listnode15, var_listnode16, var_tkwendnode17) /* init_astdclassdef on <var39:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var39);
var_pclassdefnode1 = var39;
var_node_list = var_pclassdefnode1;
var41 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction94> */
var42 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var41) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var42, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction94#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction94__action(val* self, val* p0) {
parser__ReduceAction94__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction95#action for (self: ReduceAction95, Parser) */
void parser__ReduceAction95__action(val* self, val* p0) {
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
val* var_listnode15 /* var listnode15: Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode16 /* var listnode16: Array[Object] */;
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
val* var_tkwendnode17 /* var tkwendnode17: nullable Object */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
val* var40 /* : AStdClassdef */;
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
CHECK_NEW_array__Array(var12);
var_listnode7 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
var_listnode15 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
CHECK_NEW_array__Array(var14);
var_listnode16 = var14;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5036);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5038);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5040);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5042);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5044);
exit(1);
}
var28 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var28->class->vft[COLOR_array__Array__init]))(var28) /* init on <var28:Array[Object]>*/;
CHECK_NEW_array__Array(var28);
var_listnode12 = var28;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5047);
exit(1);
}
var32 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction95>*/;
var_listnode12 = var32;
var33 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var34 = NULL;
var35 = NULL;
var36 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var33->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var33, var34, var35, var_listnode12, var36) /* init_aannotations on <var33:AAnnotations>*/;
CHECK_NEW_parser_nodes__AAnnotations(var33);
var_pannotationsnode8 = var33;
var_tkwendnode17 = var_nodearraylist11;
/* <var_tkwendnode17:nullable Object> isa nullable TKwend */
cltype38 = type_nullable_parser_nodes__TKwend.color;
idtype39 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode17 == NULL) {
var37 = 1;
} else {
if(cltype38 >= var_tkwendnode17->type->table_size) {
var37 = 0;
} else {
var37 = var_tkwendnode17->type->type_table[cltype38] == idtype39;
}
}
if (!var37) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5056);
exit(1);
}
var40 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var41 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var40->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var40, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var_pannotationsnode8, var41, var_listnode15, var_listnode16, var_tkwendnode17) /* init_astdclassdef on <var40:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var40);
var_pclassdefnode1 = var40;
var_node_list = var_pclassdefnode1;
var42 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction95> */
var43 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var42) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var43, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction95#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction95__action(val* self, val* p0) {
parser__ReduceAction95__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction97#action for (self: ReduceAction97, Parser) */
void parser__ReduceAction97__action(val* self, val* p0) {
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
val* var_listnode7 /* var listnode7: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var26 /* : Array[Object] */;
val* var27 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_listnode12 /* var listnode12: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var31 /* : Array[Object] */;
val* var32 /* : AAnnotations */;
val* var33 /* : null */;
val* var34 /* : null */;
val* var35 /* : null */;
val* var_pannotationsnode9 /* var pannotationsnode9: nullable AAnnotations */;
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
CHECK_NEW_array__Array(var10);
var_listnode8 = var10;
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var11->class->vft[COLOR_array__Array__init]))(var11) /* init on <var11:Array[Object]>*/;
CHECK_NEW_array__Array(var11);
var_listnode16 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5092);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5094);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5096);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5098);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5100);
exit(1);
}
var26 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction97>*/;
var_listnode8 = var26;
var27 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var27->class->vft[COLOR_array__Array__init]))(var27) /* init on <var27:Array[Object]>*/;
CHECK_NEW_array__Array(var27);
var_listnode13 = var27;
var_listnode12 = var_nodearraylist7;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype29 = type_array__Arraykernel__Object.color;
idtype30 = type_array__Arraykernel__Object.id;
if(var_listnode12 == NULL) {
var28 = 0;
} else {
if(cltype29 >= var_listnode12->type->table_size) {
var28 = 0;
} else {
var28 = var_listnode12->type->type_table[cltype29] == idtype30;
}
}
if (!var28) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5104);
exit(1);
}
var31 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode13, var_listnode12) /* concat on <self:ReduceAction97>*/;
var_listnode13 = var31;
var32 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var33 = NULL;
var34 = NULL;
var35 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var32->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var32, var33, var34, var_listnode13, var35) /* init_aannotations on <var32:AAnnotations>*/;
CHECK_NEW_parser_nodes__AAnnotations(var32);
var_pannotationsnode9 = var32;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5113);
exit(1);
}
var39 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var40 = NULL;
var41 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var39->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var39, var_pdocnode2, var40, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var_pannotationsnode9, var41, var_listnode16, var_listnode17, var_tkwendnode18) /* init_astdclassdef on <var39:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var39);
var_pclassdefnode1 = var39;
var_node_list = var_pclassdefnode1;
var42 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction97> */
var43 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var42) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var43, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction97#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction97__action(val* self, val* p0) {
parser__ReduceAction97__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction98#action for (self: ReduceAction98, Parser) */
void parser__ReduceAction98__action(val* self, val* p0) {
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
CHECK_NEW_array__Array(var11);
var_listnode8 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
var_listnode16 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5150);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5152);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5154);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5156);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5158);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5160);
exit(1);
}
var30 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction98>*/;
var_listnode8 = var30;
var31 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var31->class->vft[COLOR_array__Array__init]))(var31) /* init on <var31:Array[Object]>*/;
CHECK_NEW_array__Array(var31);
var_listnode13 = var31;
var_listnode12 = var_nodearraylist8;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5164);
exit(1);
}
var35 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode13, var_listnode12) /* concat on <self:ReduceAction98>*/;
var_listnode13 = var35;
var36 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var37 = NULL;
var38 = NULL;
var39 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var36->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var36, var37, var38, var_listnode13, var39) /* init_aannotations on <var36:AAnnotations>*/;
CHECK_NEW_parser_nodes__AAnnotations(var36);
var_pannotationsnode9 = var36;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5173);
exit(1);
}
var43 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var44 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var43->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var43, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var_pannotationsnode9, var44, var_listnode16, var_listnode17, var_tkwendnode18) /* init_astdclassdef on <var43:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var43);
var_pclassdefnode1 = var43;
var_node_list = var_pclassdefnode1;
var45 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction98> */
var46 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var45) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var46, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction98#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction98__action(val* self, val* p0) {
parser__ReduceAction98__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction99#action for (self: ReduceAction99, Parser) */
void parser__ReduceAction99__action(val* self, val* p0) {
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
CHECK_NEW_array__Array(var11);
var_listnode8 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
var_listnode16 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5210);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5212);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5214);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5216);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5218);
exit(1);
}
var27 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction99>*/;
var_listnode8 = var27;
var28 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var28->class->vft[COLOR_array__Array__init]))(var28) /* init on <var28:Array[Object]>*/;
CHECK_NEW_array__Array(var28);
var_listnode13 = var28;
var_listnode12 = var_nodearraylist8;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5222);
exit(1);
}
var32 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode13, var_listnode12) /* concat on <self:ReduceAction99>*/;
var_listnode13 = var32;
var33 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var34 = NULL;
var35 = NULL;
var36 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var33->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var33, var34, var35, var_listnode13, var36) /* init_aannotations on <var33:AAnnotations>*/;
CHECK_NEW_parser_nodes__AAnnotations(var33);
var_pannotationsnode9 = var33;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5231);
exit(1);
}
var40 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var41 = NULL;
var42 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var40->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var40, var_pdocnode2, var41, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var_pannotationsnode9, var42, var_listnode16, var_listnode17, var_tkwendnode18) /* init_astdclassdef on <var40:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var40);
var_pclassdefnode1 = var40;
var_node_list = var_pclassdefnode1;
var43 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction99> */
var44 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var43) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var44, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction99#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction99__action(val* self, val* p0) {
parser__ReduceAction99__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction100#action for (self: ReduceAction100, Parser) */
void parser__ReduceAction100__action(val* self, val* p0) {
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
CHECK_NEW_array__Array(var12);
var_listnode8 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
var_listnode16 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
CHECK_NEW_array__Array(var14);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5269);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5271);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5273);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5275);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5277);
exit(1);
}
var28 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction100>*/;
var_listnode8 = var28;
var29 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var29->class->vft[COLOR_array__Array__init]))(var29) /* init on <var29:Array[Object]>*/;
CHECK_NEW_array__Array(var29);
var_listnode13 = var29;
var_listnode12 = var_nodearraylist9;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5281);
exit(1);
}
var33 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode13, var_listnode12) /* concat on <self:ReduceAction100>*/;
var_listnode13 = var33;
var34 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var35 = NULL;
var36 = NULL;
var37 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var34->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var34, var35, var36, var_listnode13, var37) /* init_aannotations on <var34:AAnnotations>*/;
CHECK_NEW_parser_nodes__AAnnotations(var34);
var_pannotationsnode9 = var34;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5290);
exit(1);
}
var41 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var42 = NULL;
var43 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var41->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var41, var_pdocnode2, var42, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var_pannotationsnode9, var43, var_listnode16, var_listnode17, var_tkwendnode18) /* init_astdclassdef on <var41:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var41);
var_pclassdefnode1 = var41;
var_node_list = var_pclassdefnode1;
var44 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction100> */
var45 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var44) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var45, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction100#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction100__action(val* self, val* p0) {
parser__ReduceAction100__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction102#action for (self: ReduceAction102, Parser) */
void parser__ReduceAction102__action(val* self, val* p0) {
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
CHECK_NEW_array__Array(var12);
var_listnode8 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
var_listnode16 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
CHECK_NEW_array__Array(var14);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5328);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5330);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5332);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5334);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5336);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5338);
exit(1);
}
var31 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction102>*/;
var_listnode8 = var31;
var32 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var32->class->vft[COLOR_array__Array__init]))(var32) /* init on <var32:Array[Object]>*/;
CHECK_NEW_array__Array(var32);
var_listnode13 = var32;
var_listnode12 = var_nodearraylist9;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5342);
exit(1);
}
var36 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode13, var_listnode12) /* concat on <self:ReduceAction102>*/;
var_listnode13 = var36;
var37 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var38 = NULL;
var39 = NULL;
var40 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var37->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var37, var38, var39, var_listnode13, var40) /* init_aannotations on <var37:AAnnotations>*/;
CHECK_NEW_parser_nodes__AAnnotations(var37);
var_pannotationsnode9 = var37;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5351);
exit(1);
}
var44 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var45 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var44->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var44, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var_pannotationsnode9, var45, var_listnode16, var_listnode17, var_tkwendnode18) /* init_astdclassdef on <var44:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var44);
var_pclassdefnode1 = var44;
var_node_list = var_pclassdefnode1;
var46 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction102> */
var47 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var46) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var47, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction102#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction102__action(val* self, val* p0) {
parser__ReduceAction102__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction103#action for (self: ReduceAction103, Parser) */
void parser__ReduceAction103__action(val* self, val* p0) {
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
CHECK_NEW_array__Array(var13);
var_listnode8 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
CHECK_NEW_array__Array(var14);
var_listnode16 = var14;
var15 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var15->class->vft[COLOR_array__Array__init]))(var15) /* init on <var15:Array[Object]>*/;
CHECK_NEW_array__Array(var15);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5390);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5392);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5394);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5396);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5398);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5400);
exit(1);
}
var32 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction103>*/;
var_listnode8 = var32;
var33 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var33->class->vft[COLOR_array__Array__init]))(var33) /* init on <var33:Array[Object]>*/;
CHECK_NEW_array__Array(var33);
var_listnode13 = var33;
var_listnode12 = var_nodearraylist10;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5404);
exit(1);
}
var37 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode13, var_listnode12) /* concat on <self:ReduceAction103>*/;
var_listnode13 = var37;
var38 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var39 = NULL;
var40 = NULL;
var41 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var38->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var38, var39, var40, var_listnode13, var41) /* init_aannotations on <var38:AAnnotations>*/;
CHECK_NEW_parser_nodes__AAnnotations(var38);
var_pannotationsnode9 = var38;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5413);
exit(1);
}
var45 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var46 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var45->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var45, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var_pannotationsnode9, var46, var_listnode16, var_listnode17, var_tkwendnode18) /* init_astdclassdef on <var45:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var45);
var_pclassdefnode1 = var45;
var_node_list = var_pclassdefnode1;
var47 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction103> */
var48 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var47) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var48, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction103#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction103__action(val* self, val* p0) {
parser__ReduceAction103__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction105#action for (self: ReduceAction105, Parser) */
void parser__ReduceAction105__action(val* self, val* p0) {
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
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var11 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: Array[Object] */;
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
val* var_pexterncodeblocknode9 /* var pexterncodeblocknode9: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_tkwendnode12 /* var tkwendnode12: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : AStdClassdef */;
val* var29 /* : null */;
val* var30 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
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
var9 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var9->class->vft[COLOR_array__Array__init]))(var9) /* init on <var9:Array[Object]>*/;
CHECK_NEW_array__Array(var9);
var_listnode7 = var9;
var10 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var10->class->vft[COLOR_array__Array__init]))(var10) /* init on <var10:Array[Object]>*/;
CHECK_NEW_array__Array(var10);
var_listnode10 = var10;
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var11->class->vft[COLOR_array__Array__init]))(var11) /* init on <var11:Array[Object]>*/;
CHECK_NEW_array__Array(var11);
var_listnode11 = var11;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5448);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5450);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5452);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5454);
exit(1);
}
var_pexterncodeblocknode9 = var_nodearraylist6;
/* <var_pexterncodeblocknode9:nullable Object> isa nullable AExternCodeBlock */
cltype23 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype24 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode9 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_pexterncodeblocknode9->type->table_size) {
var22 = 0;
} else {
var22 = var_pexterncodeblocknode9->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5456);
exit(1);
}
var_tkwendnode12 = var_nodearraylist8;
/* <var_tkwendnode12:nullable Object> isa nullable TKwend */
cltype26 = type_nullable_parser_nodes__TKwend.color;
idtype27 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode12 == NULL) {
var25 = 1;
} else {
if(cltype26 >= var_tkwendnode12->type->table_size) {
var25 = 0;
} else {
var25 = var_tkwendnode12->type->type_table[cltype26] == idtype27;
}
}
if (!var25) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5458);
exit(1);
}
var28 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var29 = NULL;
var30 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var28->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var28, var_pdocnode2, var29, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var30, var_pexterncodeblocknode9, var_listnode10, var_listnode11, var_tkwendnode12) /* init_astdclassdef on <var28:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var28);
var_pclassdefnode1 = var28;
var_node_list = var_pclassdefnode1;
var31 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction105> */
var32 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var31) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var32, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction105#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction105__action(val* self, val* p0) {
parser__ReduceAction105__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction106#action for (self: ReduceAction106, Parser) */
void parser__ReduceAction106__action(val* self, val* p0) {
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
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var12 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: Array[Object] */;
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
val* var_pexterncodeblocknode9 /* var pexterncodeblocknode9: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var_tkwendnode12 /* var tkwendnode12: nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var32 /* : AStdClassdef */;
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
CHECK_NEW_array__Array(var10);
var_listnode7 = var10;
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var11->class->vft[COLOR_array__Array__init]))(var11) /* init on <var11:Array[Object]>*/;
CHECK_NEW_array__Array(var11);
var_listnode10 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
var_listnode11 = var12;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5494);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5496);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5498);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5500);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5502);
exit(1);
}
var_pexterncodeblocknode9 = var_nodearraylist7;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5504);
exit(1);
}
var_tkwendnode12 = var_nodearraylist9;
/* <var_tkwendnode12:nullable Object> isa nullable TKwend */
cltype30 = type_nullable_parser_nodes__TKwend.color;
idtype31 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode12 == NULL) {
var29 = 1;
} else {
if(cltype30 >= var_tkwendnode12->type->table_size) {
var29 = 0;
} else {
var29 = var_tkwendnode12->type->type_table[cltype30] == idtype31;
}
}
if (!var29) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5506);
exit(1);
}
var32 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var33 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var32->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var32, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var33, var_pexterncodeblocknode9, var_listnode10, var_listnode11, var_tkwendnode12) /* init_astdclassdef on <var32:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var32);
var_pclassdefnode1 = var32;
var_node_list = var_pclassdefnode1;
var34 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction106> */
var35 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var34) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var35, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction106#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction106__action(val* self, val* p0) {
parser__ReduceAction106__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction107#action for (self: ReduceAction107, Parser) */
void parser__ReduceAction107__action(val* self, val* p0) {
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
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var12 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: Array[Object] */;
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
val* var_tkwendnode12 /* var tkwendnode12: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : AStdClassdef */;
val* var30 /* : null */;
val* var31 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
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
var10 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var10->class->vft[COLOR_array__Array__init]))(var10) /* init on <var10:Array[Object]>*/;
CHECK_NEW_array__Array(var10);
var_listnode7 = var10;
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var11->class->vft[COLOR_array__Array__init]))(var11) /* init on <var11:Array[Object]>*/;
CHECK_NEW_array__Array(var11);
var_listnode10 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
var_listnode11 = var12;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5542);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5544);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5546);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5548);
exit(1);
}
var_pexterncodeblocknode9 = var_nodearraylist7;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5550);
exit(1);
}
var_tkwendnode12 = var_nodearraylist9;
/* <var_tkwendnode12:nullable Object> isa nullable TKwend */
cltype27 = type_nullable_parser_nodes__TKwend.color;
idtype28 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode12 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_tkwendnode12->type->table_size) {
var26 = 0;
} else {
var26 = var_tkwendnode12->type->type_table[cltype27] == idtype28;
}
}
if (!var26) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5552);
exit(1);
}
var29 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var30 = NULL;
var31 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var29, var_pdocnode2, var30, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var31, var_pexterncodeblocknode9, var_listnode10, var_listnode11, var_tkwendnode12) /* init_astdclassdef on <var29:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var29);
var_pclassdefnode1 = var29;
var_node_list = var_pclassdefnode1;
var32 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction107> */
var33 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var32) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var33, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction107#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction107__action(val* self, val* p0) {
parser__ReduceAction107__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction108#action for (self: ReduceAction108, Parser) */
void parser__ReduceAction108__action(val* self, val* p0) {
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
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: Array[Object] */;
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
val* var_tkwendnode12 /* var tkwendnode12: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var30 /* : AStdClassdef */;
val* var31 /* : null */;
val* var32 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var33 /* : Int */;
long var34 /* : Int */;
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
CHECK_NEW_array__Array(var11);
var_listnode7 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
var_listnode10 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
var_listnode11 = var13;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5589);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5591);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5593);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5595);
exit(1);
}
var_pexterncodeblocknode9 = var_nodearraylist8;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5597);
exit(1);
}
var_tkwendnode12 = var_nodearraylist10;
/* <var_tkwendnode12:nullable Object> isa nullable TKwend */
cltype28 = type_nullable_parser_nodes__TKwend.color;
idtype29 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode12 == NULL) {
var27 = 1;
} else {
if(cltype28 >= var_tkwendnode12->type->table_size) {
var27 = 0;
} else {
var27 = var_tkwendnode12->type->type_table[cltype28] == idtype29;
}
}
if (!var27) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5599);
exit(1);
}
var30 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var31 = NULL;
var32 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var30->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var30, var_pdocnode2, var31, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var32, var_pexterncodeblocknode9, var_listnode10, var_listnode11, var_tkwendnode12) /* init_astdclassdef on <var30:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var30);
var_pclassdefnode1 = var30;
var_node_list = var_pclassdefnode1;
var33 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction108> */
var34 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var33) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var34, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction108#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction108__action(val* self, val* p0) {
parser__ReduceAction108__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction110#action for (self: ReduceAction110, Parser) */
void parser__ReduceAction110__action(val* self, val* p0) {
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
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: Array[Object] */;
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
val* var_tkwendnode12 /* var tkwendnode12: nullable Object */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
val* var33 /* : AStdClassdef */;
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
CHECK_NEW_array__Array(var11);
var_listnode7 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
var_listnode10 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
var_listnode11 = var13;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5636);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5638);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5640);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5642);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5644);
exit(1);
}
var_pexterncodeblocknode9 = var_nodearraylist8;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5646);
exit(1);
}
var_tkwendnode12 = var_nodearraylist10;
/* <var_tkwendnode12:nullable Object> isa nullable TKwend */
cltype31 = type_nullable_parser_nodes__TKwend.color;
idtype32 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode12 == NULL) {
var30 = 1;
} else {
if(cltype31 >= var_tkwendnode12->type->table_size) {
var30 = 0;
} else {
var30 = var_tkwendnode12->type->type_table[cltype31] == idtype32;
}
}
if (!var30) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5648);
exit(1);
}
var33 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var34 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var33->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var33, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var34, var_pexterncodeblocknode9, var_listnode10, var_listnode11, var_tkwendnode12) /* init_astdclassdef on <var33:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var33);
var_pclassdefnode1 = var33;
var_node_list = var_pclassdefnode1;
var35 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction110> */
var36 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var35) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var36, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction110#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction110__action(val* self, val* p0) {
parser__ReduceAction110__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction111#action for (self: ReduceAction111, Parser) */
void parser__ReduceAction111__action(val* self, val* p0) {
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
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: Array[Object] */;
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
val* var_tkwendnode12 /* var tkwendnode12: nullable Object */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var34 /* : AStdClassdef */;
val* var35 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var36 /* : Int */;
long var37 /* : Int */;
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
CHECK_NEW_array__Array(var12);
var_listnode7 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
var_listnode10 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
CHECK_NEW_array__Array(var14);
var_listnode11 = var14;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5686);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5688);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5690);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5692);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5694);
exit(1);
}
var_pexterncodeblocknode9 = var_nodearraylist9;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5696);
exit(1);
}
var_tkwendnode12 = var_nodearraylist11;
/* <var_tkwendnode12:nullable Object> isa nullable TKwend */
cltype32 = type_nullable_parser_nodes__TKwend.color;
idtype33 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode12 == NULL) {
var31 = 1;
} else {
if(cltype32 >= var_tkwendnode12->type->table_size) {
var31 = 0;
} else {
var31 = var_tkwendnode12->type->type_table[cltype32] == idtype33;
}
}
if (!var31) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5698);
exit(1);
}
var34 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var35 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var34->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var34, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var35, var_pexterncodeblocknode9, var_listnode10, var_listnode11, var_tkwendnode12) /* init_astdclassdef on <var34:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var34);
var_pclassdefnode1 = var34;
var_node_list = var_pclassdefnode1;
var36 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction111> */
var37 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var36) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var37, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction111#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction111__action(val* self, val* p0) {
parser__ReduceAction111__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction113#action for (self: ReduceAction113, Parser) */
void parser__ReduceAction113__action(val* self, val* p0) {
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
val* var_listnode7 /* var listnode7: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var26 /* : Array[Object] */;
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
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
CHECK_NEW_array__Array(var10);
var_listnode8 = var10;
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var11->class->vft[COLOR_array__Array__init]))(var11) /* init on <var11:Array[Object]>*/;
CHECK_NEW_array__Array(var11);
var_listnode11 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5734);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5736);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5738);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5740);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5742);
exit(1);
}
var26 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction113>*/;
var_listnode8 = var26;
var_pexterncodeblocknode10 = var_nodearraylist7;
/* <var_pexterncodeblocknode10:nullable Object> isa nullable AExternCodeBlock */
cltype28 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype29 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode10 == NULL) {
var27 = 1;
} else {
if(cltype28 >= var_pexterncodeblocknode10->type->table_size) {
var27 = 0;
} else {
var27 = var_pexterncodeblocknode10->type->type_table[cltype28] == idtype29;
}
}
if (!var27) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5745);
exit(1);
}
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5747);
exit(1);
}
var33 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var34 = NULL;
var35 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var33->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var33, var_pdocnode2, var34, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var35, var_pexterncodeblocknode10, var_listnode11, var_listnode12, var_tkwendnode13) /* init_astdclassdef on <var33:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var33);
var_pclassdefnode1 = var33;
var_node_list = var_pclassdefnode1;
var36 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction113> */
var37 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var36) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var37, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction113#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction113__action(val* self, val* p0) {
parser__ReduceAction113__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction114#action for (self: ReduceAction114, Parser) */
void parser__ReduceAction114__action(val* self, val* p0) {
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
val* var_listnode7 /* var listnode7: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var30 /* : Array[Object] */;
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
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
CHECK_NEW_array__Array(var11);
var_listnode8 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
var_listnode11 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5784);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5786);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5788);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5790);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5792);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5794);
exit(1);
}
var30 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction114>*/;
var_listnode8 = var30;
var_pexterncodeblocknode10 = var_nodearraylist8;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5797);
exit(1);
}
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5799);
exit(1);
}
var37 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var38 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var37->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var37, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var38, var_pexterncodeblocknode10, var_listnode11, var_listnode12, var_tkwendnode13) /* init_astdclassdef on <var37:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var37);
var_pclassdefnode1 = var37;
var_node_list = var_pclassdefnode1;
var39 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction114> */
var40 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var39) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var40, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction114#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction114__action(val* self, val* p0) {
parser__ReduceAction114__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction115#action for (self: ReduceAction115, Parser) */
void parser__ReduceAction115__action(val* self, val* p0) {
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
val* var_listnode7 /* var listnode7: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var27 /* : Array[Object] */;
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
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
CHECK_NEW_array__Array(var11);
var_listnode8 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
var_listnode11 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5836);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5838);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5840);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5842);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5844);
exit(1);
}
var27 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction115>*/;
var_listnode8 = var27;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5847);
exit(1);
}
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5849);
exit(1);
}
var34 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var35 = NULL;
var36 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var34->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var34, var_pdocnode2, var35, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var36, var_pexterncodeblocknode10, var_listnode11, var_listnode12, var_tkwendnode13) /* init_astdclassdef on <var34:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var34);
var_pclassdefnode1 = var34;
var_node_list = var_pclassdefnode1;
var37 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction115> */
var38 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var37) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var38, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction115#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction115__action(val* self, val* p0) {
parser__ReduceAction115__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction116#action for (self: ReduceAction116, Parser) */
void parser__ReduceAction116__action(val* self, val* p0) {
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
val* var_listnode7 /* var listnode7: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : Array[Object] */;
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
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
CHECK_NEW_array__Array(var12);
var_listnode8 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
var_listnode11 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
CHECK_NEW_array__Array(var14);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5887);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5889);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5891);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5893);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5895);
exit(1);
}
var28 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction116>*/;
var_listnode8 = var28;
var_pexterncodeblocknode10 = var_nodearraylist9;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5898);
exit(1);
}
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5900);
exit(1);
}
var35 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var36 = NULL;
var37 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var35->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var35, var_pdocnode2, var36, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var37, var_pexterncodeblocknode10, var_listnode11, var_listnode12, var_tkwendnode13) /* init_astdclassdef on <var35:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var35);
var_pclassdefnode1 = var35;
var_node_list = var_pclassdefnode1;
var38 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction116> */
var39 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var38) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var39, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction116#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction116__action(val* self, val* p0) {
parser__ReduceAction116__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction118#action for (self: ReduceAction118, Parser) */
void parser__ReduceAction118__action(val* self, val* p0) {
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
val* var_listnode7 /* var listnode7: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var31 /* : Array[Object] */;
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
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
CHECK_NEW_array__Array(var12);
var_listnode8 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
var_listnode11 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
CHECK_NEW_array__Array(var14);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5938);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5940);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5942);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5944);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5946);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5948);
exit(1);
}
var31 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction118>*/;
var_listnode8 = var31;
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5951);
exit(1);
}
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5953);
exit(1);
}
var38 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var39 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var38->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var38, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var39, var_pexterncodeblocknode10, var_listnode11, var_listnode12, var_tkwendnode13) /* init_astdclassdef on <var38:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var38);
var_pclassdefnode1 = var38;
var_node_list = var_pclassdefnode1;
var40 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction118> */
var41 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var40) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var41, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction118#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction118__action(val* self, val* p0) {
parser__ReduceAction118__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction119#action for (self: ReduceAction119, Parser) */
void parser__ReduceAction119__action(val* self, val* p0) {
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
val* var_listnode7 /* var listnode7: nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var32 /* : Array[Object] */;
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
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
CHECK_NEW_array__Array(var13);
var_listnode8 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
CHECK_NEW_array__Array(var14);
var_listnode11 = var14;
var15 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var15->class->vft[COLOR_array__Array__init]))(var15) /* init on <var15:Array[Object]>*/;
CHECK_NEW_array__Array(var15);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5992);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5994);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5996);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 5998);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6000);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6002);
exit(1);
}
var32 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction119>*/;
var_listnode8 = var32;
var_pexterncodeblocknode10 = var_nodearraylist10;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6005);
exit(1);
}
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6007);
exit(1);
}
var39 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var40 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var39->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var39, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var40, var_pexterncodeblocknode10, var_listnode11, var_listnode12, var_tkwendnode13) /* init_astdclassdef on <var39:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var39);
var_pclassdefnode1 = var39;
var_node_list = var_pclassdefnode1;
var41 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction119> */
var42 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var41) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var42, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction119#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction119__action(val* self, val* p0) {
parser__ReduceAction119__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction121#action for (self: ReduceAction121, Parser) */
void parser__ReduceAction121__action(val* self, val* p0) {
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
val* var_listnode15 /* var listnode15: Array[Object] */;
val* var12 /* : Array[Object] */;
val* var_listnode16 /* var listnode16: Array[Object] */;
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
val* var_pexterncodeblocknode14 /* var pexterncodeblocknode14: nullable Object */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
val* var_tkwendnode17 /* var tkwendnode17: nullable Object */;
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
CHECK_NEW_array__Array(var10);
var_listnode7 = var10;
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var11->class->vft[COLOR_array__Array__init]))(var11) /* init on <var11:Array[Object]>*/;
CHECK_NEW_array__Array(var11);
var_listnode15 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
var_listnode16 = var12;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6043);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6045);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6047);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6049);
exit(1);
}
var23 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var23->class->vft[COLOR_array__Array__init]))(var23) /* init on <var23:Array[Object]>*/;
CHECK_NEW_array__Array(var23);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6052);
exit(1);
}
var27 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction121>*/;
var_listnode12 = var27;
var28 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var29 = NULL;
var30 = NULL;
var31 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var28->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var28, var29, var30, var_listnode12, var31) /* init_aannotations on <var28:AAnnotations>*/;
CHECK_NEW_parser_nodes__AAnnotations(var28);
var_pannotationsnode8 = var28;
var_pexterncodeblocknode14 = var_nodearraylist7;
/* <var_pexterncodeblocknode14:nullable Object> isa nullable AExternCodeBlock */
cltype33 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype34 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode14 == NULL) {
var32 = 1;
} else {
if(cltype33 >= var_pexterncodeblocknode14->type->table_size) {
var32 = 0;
} else {
var32 = var_pexterncodeblocknode14->type->type_table[cltype33] == idtype34;
}
}
if (!var32) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6061);
exit(1);
}
var_tkwendnode17 = var_nodearraylist9;
/* <var_tkwendnode17:nullable Object> isa nullable TKwend */
cltype36 = type_nullable_parser_nodes__TKwend.color;
idtype37 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode17 == NULL) {
var35 = 1;
} else {
if(cltype36 >= var_tkwendnode17->type->table_size) {
var35 = 0;
} else {
var35 = var_tkwendnode17->type->type_table[cltype36] == idtype37;
}
}
if (!var35) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6063);
exit(1);
}
var38 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var39 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var38->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var38, var_pdocnode2, var39, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var_pannotationsnode8, var_pexterncodeblocknode14, var_listnode15, var_listnode16, var_tkwendnode17) /* init_astdclassdef on <var38:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var38);
var_pclassdefnode1 = var38;
var_node_list = var_pclassdefnode1;
var40 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction121> */
var41 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var40) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var41, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction121#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction121__action(val* self, val* p0) {
parser__ReduceAction121__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction122#action for (self: ReduceAction122, Parser) */
void parser__ReduceAction122__action(val* self, val* p0) {
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
val* var_listnode15 /* var listnode15: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode16 /* var listnode16: Array[Object] */;
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
val* var_pexterncodeblocknode14 /* var pexterncodeblocknode14: nullable Object */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
val* var_tkwendnode17 /* var tkwendnode17: nullable Object */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
val* var42 /* : AStdClassdef */;
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
CHECK_NEW_array__Array(var11);
var_listnode7 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
var_listnode15 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
var_listnode16 = var13;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6100);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6102);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6104);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6106);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6108);
exit(1);
}
var27 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var27->class->vft[COLOR_array__Array__init]))(var27) /* init on <var27:Array[Object]>*/;
CHECK_NEW_array__Array(var27);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6111);
exit(1);
}
var31 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction122>*/;
var_listnode12 = var31;
var32 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var33 = NULL;
var34 = NULL;
var35 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var32->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var32, var33, var34, var_listnode12, var35) /* init_aannotations on <var32:AAnnotations>*/;
CHECK_NEW_parser_nodes__AAnnotations(var32);
var_pannotationsnode8 = var32;
var_pexterncodeblocknode14 = var_nodearraylist8;
/* <var_pexterncodeblocknode14:nullable Object> isa nullable AExternCodeBlock */
cltype37 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype38 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode14 == NULL) {
var36 = 1;
} else {
if(cltype37 >= var_pexterncodeblocknode14->type->table_size) {
var36 = 0;
} else {
var36 = var_pexterncodeblocknode14->type->type_table[cltype37] == idtype38;
}
}
if (!var36) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6120);
exit(1);
}
var_tkwendnode17 = var_nodearraylist10;
/* <var_tkwendnode17:nullable Object> isa nullable TKwend */
cltype40 = type_nullable_parser_nodes__TKwend.color;
idtype41 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode17 == NULL) {
var39 = 1;
} else {
if(cltype40 >= var_tkwendnode17->type->table_size) {
var39 = 0;
} else {
var39 = var_tkwendnode17->type->type_table[cltype40] == idtype41;
}
}
if (!var39) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 6122);
exit(1);
}
var42 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var42->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var42, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var_pannotationsnode8, var_pexterncodeblocknode14, var_listnode15, var_listnode16, var_tkwendnode17) /* init_astdclassdef on <var42:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var42);
var_pclassdefnode1 = var42;
var_node_list = var_pclassdefnode1;
var43 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction122> */
var44 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var43) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var44, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction122#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction122__action(val* self, val* p0) {
parser__ReduceAction122__action(self, p0);
RET_LABEL:;
}
