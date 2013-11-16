#include "parser.sep.0.h"
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22928);
exit(1);
}
var4 = NEW_parser_nodes__AIntrudeVisibility(&type_parser_nodes__AIntrudeVisibility);
((void (*)(val*, val*))(var4->class->vft[COLOR_parser_prod__AIntrudeVisibility__init_aintrudevisibility]))(var4, var_tkwintrudenode2) /* init_aintrudevisibility on <var4:AIntrudeVisibility>*/;
CHECK_NEW_parser_nodes__AIntrudeVisibility(var4);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22943);
exit(1);
}
var3 = NEW_parser_nodes__AIdMethid(&type_parser_nodes__AIdMethid);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__AIdMethid__init_aidmethid]))(var3, var_tidnode2) /* init_aidmethid on <var3:AIdMethid>*/;
CHECK_NEW_parser_nodes__AIdMethid(var3);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22958);
exit(1);
}
var3 = NEW_parser_nodes__APlusMethid(&type_parser_nodes__APlusMethid);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__APlusMethid__init_aplusmethid]))(var3, var_tplusnode2) /* init_aplusmethid on <var3:APlusMethid>*/;
CHECK_NEW_parser_nodes__APlusMethid(var3);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22973);
exit(1);
}
var3 = NEW_parser_nodes__AMinusMethid(&type_parser_nodes__AMinusMethid);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__AMinusMethid__init_aminusmethid]))(var3, var_tminusnode2) /* init_aminusmethid on <var3:AMinusMethid>*/;
CHECK_NEW_parser_nodes__AMinusMethid(var3);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 22988);
exit(1);
}
var3 = NEW_parser_nodes__AStarMethid(&type_parser_nodes__AStarMethid);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__AStarMethid__init_astarmethid]))(var3, var_tstarnode2) /* init_astarmethid on <var3:AStarMethid>*/;
CHECK_NEW_parser_nodes__AStarMethid(var3);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23003);
exit(1);
}
var3 = NEW_parser_nodes__ASlashMethid(&type_parser_nodes__ASlashMethid);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__ASlashMethid__init_aslashmethid]))(var3, var_tslashnode2) /* init_aslashmethid on <var3:ASlashMethid>*/;
CHECK_NEW_parser_nodes__ASlashMethid(var3);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23018);
exit(1);
}
var3 = NEW_parser_nodes__APercentMethid(&type_parser_nodes__APercentMethid);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__APercentMethid__init_apercentmethid]))(var3, var_tpercentnode2) /* init_apercentmethid on <var3:APercentMethid>*/;
CHECK_NEW_parser_nodes__APercentMethid(var3);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23033);
exit(1);
}
var3 = NEW_parser_nodes__AEqMethid(&type_parser_nodes__AEqMethid);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__AEqMethid__init_aeqmethid]))(var3, var_teqnode2) /* init_aeqmethid on <var3:AEqMethid>*/;
CHECK_NEW_parser_nodes__AEqMethid(var3);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23048);
exit(1);
}
var3 = NEW_parser_nodes__ANeMethid(&type_parser_nodes__ANeMethid);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__ANeMethid__init_anemethid]))(var3, var_tnenode2) /* init_anemethid on <var3:ANeMethid>*/;
CHECK_NEW_parser_nodes__ANeMethid(var3);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23063);
exit(1);
}
var3 = NEW_parser_nodes__ALeMethid(&type_parser_nodes__ALeMethid);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__ALeMethid__init_alemethid]))(var3, var_tlenode2) /* init_alemethid on <var3:ALeMethid>*/;
CHECK_NEW_parser_nodes__ALeMethid(var3);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23078);
exit(1);
}
var3 = NEW_parser_nodes__AGeMethid(&type_parser_nodes__AGeMethid);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__AGeMethid__init_agemethid]))(var3, var_tgenode2) /* init_agemethid on <var3:AGeMethid>*/;
CHECK_NEW_parser_nodes__AGeMethid(var3);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23093);
exit(1);
}
var3 = NEW_parser_nodes__ALtMethid(&type_parser_nodes__ALtMethid);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__ALtMethid__init_altmethid]))(var3, var_tltnode2) /* init_altmethid on <var3:ALtMethid>*/;
CHECK_NEW_parser_nodes__ALtMethid(var3);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23108);
exit(1);
}
var3 = NEW_parser_nodes__AGtMethid(&type_parser_nodes__AGtMethid);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__AGtMethid__init_agtmethid]))(var3, var_tgtnode2) /* init_agtmethid on <var3:AGtMethid>*/;
CHECK_NEW_parser_nodes__AGtMethid(var3);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23123);
exit(1);
}
var3 = NEW_parser_nodes__ALlMethid(&type_parser_nodes__ALlMethid);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__ALlMethid__init_allmethid]))(var3, var_tllnode2) /* init_allmethid on <var3:ALlMethid>*/;
CHECK_NEW_parser_nodes__ALlMethid(var3);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23138);
exit(1);
}
var3 = NEW_parser_nodes__AGgMethid(&type_parser_nodes__AGgMethid);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__AGgMethid__init_aggmethid]))(var3, var_tggnode2) /* init_aggmethid on <var3:AGgMethid>*/;
CHECK_NEW_parser_nodes__AGgMethid(var3);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23154);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23156);
exit(1);
}
var7 = NEW_parser_nodes__ABraMethid(&type_parser_nodes__ABraMethid);
((void (*)(val*, val*, val*))(var7->class->vft[COLOR_parser_prod__ABraMethid__init_abramethid]))(var7, var_tobranode2, var_tcbranode3) /* init_abramethid on <var7:ABraMethid>*/;
CHECK_NEW_parser_nodes__ABraMethid(var7);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23172);
exit(1);
}
var3 = NEW_parser_nodes__AStarshipMethid(&type_parser_nodes__AStarshipMethid);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__AStarshipMethid__init_astarshipmethid]))(var3, var_tstarshipnode2) /* init_astarshipmethid on <var3:AStarshipMethid>*/;
CHECK_NEW_parser_nodes__AStarshipMethid(var3);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23188);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23190);
exit(1);
}
var7 = NEW_parser_nodes__AAssignMethid(&type_parser_nodes__AAssignMethid);
((void (*)(val*, val*, val*))(var7->class->vft[COLOR_parser_prod__AAssignMethid__init_aassignmethid]))(var7, var_tidnode2, var_tassignnode3) /* init_aassignmethid on <var7:AAssignMethid>*/;
CHECK_NEW_parser_nodes__AAssignMethid(var7);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23208);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23210);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23212);
exit(1);
}
var11 = NEW_parser_nodes__ABraassignMethid(&type_parser_nodes__ABraassignMethid);
((void (*)(val*, val*, val*, val*))(var11->class->vft[COLOR_parser_prod__ABraassignMethid__init_abraassignmethid]))(var11, var_tobranode2, var_tcbranode3, var_tassignnode4) /* init_abraassignmethid on <var11:ABraassignMethid>*/;
CHECK_NEW_parser_nodes__ABraassignMethid(var11);
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
val* var7 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_toparnode2 /* var toparnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_tcparnode4 /* var tcparnode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_ptypenode5 /* var ptypenode5: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : ASignature */;
val* var_psignaturenode1 /* var psignaturenode1: nullable ASignature */;
long var16 /* : Int */;
long var17 /* : Int */;
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
CHECK_NEW_array__Array(var6);
var_listnode3 = var6;
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
CHECK_NEW_array__Array(var7);
var_listnode6 = var7;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23235);
exit(1);
}
var_tcparnode4 = var_nodearraylist3;
/* <var_tcparnode4:nullable Object> isa nullable TCpar */
cltype10 = type_nullable_parser_nodes__TCpar.color;
idtype11 = type_nullable_parser_nodes__TCpar.id;
if(var_tcparnode4 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_tcparnode4->type->table_size) {
var9 = 0;
} else {
var9 = var_tcparnode4->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23237);
exit(1);
}
var_ptypenode5 = var_nodearraylist4;
/* <var_ptypenode5:nullable Object> isa nullable AType */
cltype13 = type_nullable_parser_nodes__AType.color;
idtype14 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode5 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_ptypenode5->type->table_size) {
var12 = 0;
} else {
var12 = var_ptypenode5->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23239);
exit(1);
}
var15 = NEW_parser_nodes__ASignature(&type_parser_nodes__ASignature);
((void (*)(val*, val*, val*, val*, val*, val*))(var15->class->vft[COLOR_parser_prod__ASignature__init_asignature]))(var15, var_toparnode2, var_listnode3, var_tcparnode4, var_ptypenode5, var_listnode6) /* init_asignature on <var15:ASignature>*/;
CHECK_NEW_parser_nodes__ASignature(var15);
var_psignaturenode1 = var15;
var_node_list = var_psignaturenode1;
var16 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction545> */
var17 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var16) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var17, var_node_list) /* push on <var_p:Parser>*/;
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
val* var8 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_toparnode2 /* var toparnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : Array[Object] */;
val* var_tcparnode5 /* var tcparnode5: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_ptypenode6 /* var ptypenode6: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var20 /* : ASignature */;
val* var_psignaturenode1 /* var psignaturenode1: nullable ASignature */;
long var21 /* : Int */;
long var22 /* : Int */;
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
CHECK_NEW_array__Array(var7);
var_listnode4 = var7;
var8 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var8->class->vft[COLOR_array__Array__init]))(var8) /* init on <var8:Array[Object]>*/;
CHECK_NEW_array__Array(var8);
var_listnode7 = var8;
var_toparnode2 = var_nodearraylist1;
/* <var_toparnode2:nullable Object> isa nullable TOpar */
cltype = type_nullable_parser_nodes__TOpar.color;
idtype = type_nullable_parser_nodes__TOpar.id;
if(var_toparnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= var_toparnode2->type->table_size) {
var9 = 0;
} else {
var9 = var_toparnode2->type->type_table[cltype] == idtype;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23265);
exit(1);
}
var_listnode3 = var_nodearraylist3;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23267);
exit(1);
}
var13 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction546>*/;
var_listnode4 = var13;
var_tcparnode5 = var_nodearraylist4;
/* <var_tcparnode5:nullable Object> isa nullable TCpar */
cltype15 = type_nullable_parser_nodes__TCpar.color;
idtype16 = type_nullable_parser_nodes__TCpar.id;
if(var_tcparnode5 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_tcparnode5->type->table_size) {
var14 = 0;
} else {
var14 = var_tcparnode5->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23270);
exit(1);
}
var_ptypenode6 = var_nodearraylist5;
/* <var_ptypenode6:nullable Object> isa nullable AType */
cltype18 = type_nullable_parser_nodes__AType.color;
idtype19 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode6 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_ptypenode6->type->table_size) {
var17 = 0;
} else {
var17 = var_ptypenode6->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23272);
exit(1);
}
var20 = NEW_parser_nodes__ASignature(&type_parser_nodes__ASignature);
((void (*)(val*, val*, val*, val*, val*, val*))(var20->class->vft[COLOR_parser_prod__ASignature__init_asignature]))(var20, var_toparnode2, var_listnode4, var_tcparnode5, var_ptypenode6, var_listnode7) /* init_asignature on <var20:ASignature>*/;
CHECK_NEW_parser_nodes__ASignature(var20);
var_psignaturenode1 = var20;
var_node_list = var_psignaturenode1;
var21 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction546> */
var22 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var21) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var22, var_node_list) /* push on <var_p:Parser>*/;
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
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var8 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_toparnode2 /* var toparnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_tcparnode4 /* var tcparnode4: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_ptypenode5 /* var ptypenode5: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_listnode6 /* var listnode6: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : Array[Object] */;
val* var20 /* : ASignature */;
val* var_psignaturenode1 /* var psignaturenode1: nullable ASignature */;
long var21 /* : Int */;
long var22 /* : Int */;
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
CHECK_NEW_array__Array(var7);
var_listnode3 = var7;
var8 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var8->class->vft[COLOR_array__Array__init]))(var8) /* init on <var8:Array[Object]>*/;
CHECK_NEW_array__Array(var8);
var_listnode7 = var8;
var_toparnode2 = var_nodearraylist1;
/* <var_toparnode2:nullable Object> isa nullable TOpar */
cltype = type_nullable_parser_nodes__TOpar.color;
idtype = type_nullable_parser_nodes__TOpar.id;
if(var_toparnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= var_toparnode2->type->table_size) {
var9 = 0;
} else {
var9 = var_toparnode2->type->type_table[cltype] == idtype;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23298);
exit(1);
}
var_tcparnode4 = var_nodearraylist3;
/* <var_tcparnode4:nullable Object> isa nullable TCpar */
cltype11 = type_nullable_parser_nodes__TCpar.color;
idtype12 = type_nullable_parser_nodes__TCpar.id;
if(var_tcparnode4 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_tcparnode4->type->table_size) {
var10 = 0;
} else {
var10 = var_tcparnode4->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23300);
exit(1);
}
var_ptypenode5 = var_nodearraylist4;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23302);
exit(1);
}
var_listnode6 = var_nodearraylist6;
/* <var_listnode6:nullable Object> isa Array[Object] */
cltype17 = type_array__Arraykernel__Object.color;
idtype18 = type_array__Arraykernel__Object.id;
if(var_listnode6 == NULL) {
var16 = 0;
} else {
if(cltype17 >= var_listnode6->type->table_size) {
var16 = 0;
} else {
var16 = var_listnode6->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23304);
exit(1);
}
var19 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode7, var_listnode6) /* concat on <self:ReduceAction547>*/;
var_listnode7 = var19;
var20 = NEW_parser_nodes__ASignature(&type_parser_nodes__ASignature);
((void (*)(val*, val*, val*, val*, val*, val*))(var20->class->vft[COLOR_parser_prod__ASignature__init_asignature]))(var20, var_toparnode2, var_listnode3, var_tcparnode4, var_ptypenode5, var_listnode7) /* init_asignature on <var20:ASignature>*/;
CHECK_NEW_parser_nodes__ASignature(var20);
var_psignaturenode1 = var20;
var_node_list = var_psignaturenode1;
var21 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction547> */
var22 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var21) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var22, var_node_list) /* push on <var_p:Parser>*/;
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
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var9 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_toparnode2 /* var toparnode2: nullable Object */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : Array[Object] */;
val* var_tcparnode5 /* var tcparnode5: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_ptypenode6 /* var ptypenode6: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var24 /* : Array[Object] */;
val* var25 /* : ASignature */;
val* var_psignaturenode1 /* var psignaturenode1: nullable ASignature */;
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
var8 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var8->class->vft[COLOR_array__Array__init]))(var8) /* init on <var8:Array[Object]>*/;
CHECK_NEW_array__Array(var8);
var_listnode4 = var8;
var9 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var9->class->vft[COLOR_array__Array__init]))(var9) /* init on <var9:Array[Object]>*/;
CHECK_NEW_array__Array(var9);
var_listnode8 = var9;
var_toparnode2 = var_nodearraylist1;
/* <var_toparnode2:nullable Object> isa nullable TOpar */
cltype = type_nullable_parser_nodes__TOpar.color;
idtype = type_nullable_parser_nodes__TOpar.id;
if(var_toparnode2 == NULL) {
var10 = 1;
} else {
if(cltype >= var_toparnode2->type->table_size) {
var10 = 0;
} else {
var10 = var_toparnode2->type->type_table[cltype] == idtype;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23332);
exit(1);
}
var_listnode3 = var_nodearraylist3;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23334);
exit(1);
}
var14 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction548>*/;
var_listnode4 = var14;
var_tcparnode5 = var_nodearraylist4;
/* <var_tcparnode5:nullable Object> isa nullable TCpar */
cltype16 = type_nullable_parser_nodes__TCpar.color;
idtype17 = type_nullable_parser_nodes__TCpar.id;
if(var_tcparnode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_tcparnode5->type->table_size) {
var15 = 0;
} else {
var15 = var_tcparnode5->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23337);
exit(1);
}
var_ptypenode6 = var_nodearraylist5;
/* <var_ptypenode6:nullable Object> isa nullable AType */
cltype19 = type_nullable_parser_nodes__AType.color;
idtype20 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode6 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_ptypenode6->type->table_size) {
var18 = 0;
} else {
var18 = var_ptypenode6->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23339);
exit(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype22 = type_array__Arraykernel__Object.color;
idtype23 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var21 = 0;
} else {
if(cltype22 >= var_listnode7->type->table_size) {
var21 = 0;
} else {
var21 = var_listnode7->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23341);
exit(1);
}
var24 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction548>*/;
var_listnode8 = var24;
var25 = NEW_parser_nodes__ASignature(&type_parser_nodes__ASignature);
((void (*)(val*, val*, val*, val*, val*, val*))(var25->class->vft[COLOR_parser_prod__ASignature__init_asignature]))(var25, var_toparnode2, var_listnode4, var_tcparnode5, var_ptypenode6, var_listnode8) /* init_asignature on <var25:ASignature>*/;
CHECK_NEW_parser_nodes__ASignature(var25);
var_psignaturenode1 = var25;
var_node_list = var_psignaturenode1;
var26 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction548> */
var27 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var26) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var27, var_node_list) /* push on <var_p:Parser>*/;
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
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_toparnode2 /* var toparnode2: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_tcparnode4 /* var tcparnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : ASignature */;
val* var12 /* : null */;
val* var_psignaturenode1 /* var psignaturenode1: nullable ASignature */;
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
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
var_listnode3 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
CHECK_NEW_array__Array(var6);
var_listnode6 = var6;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23366);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23368);
exit(1);
}
var11 = NEW_parser_nodes__ASignature(&type_parser_nodes__ASignature);
var12 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*))(var11->class->vft[COLOR_parser_prod__ASignature__init_asignature]))(var11, var_toparnode2, var_listnode3, var_tcparnode4, var12, var_listnode6) /* init_asignature on <var11:ASignature>*/;
CHECK_NEW_parser_nodes__ASignature(var11);
var_psignaturenode1 = var11;
var_node_list = var_psignaturenode1;
var13 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction549> */
var14 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var13) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var14, var_node_list) /* push on <var_p:Parser>*/;
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
val* var_listnode7 /* var listnode7: Array[Object] */;
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
val* var16 /* : ASignature */;
val* var17 /* : null */;
val* var_psignaturenode1 /* var psignaturenode1: nullable ASignature */;
long var18 /* : Int */;
long var19 /* : Int */;
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
CHECK_NEW_array__Array(var6);
var_listnode4 = var6;
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
CHECK_NEW_array__Array(var7);
var_listnode7 = var7;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23393);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23395);
exit(1);
}
var12 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction550>*/;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23398);
exit(1);
}
var16 = NEW_parser_nodes__ASignature(&type_parser_nodes__ASignature);
var17 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*))(var16->class->vft[COLOR_parser_prod__ASignature__init_asignature]))(var16, var_toparnode2, var_listnode4, var_tcparnode5, var17, var_listnode7) /* init_asignature on <var16:ASignature>*/;
CHECK_NEW_parser_nodes__ASignature(var16);
var_psignaturenode1 = var16;
var_node_list = var_psignaturenode1;
var18 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction550> */
var19 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var18) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var19, var_node_list) /* push on <var_p:Parser>*/;
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
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_toparnode2 /* var toparnode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_tcparnode4 /* var tcparnode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_listnode6 /* var listnode6: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : Array[Object] */;
val* var16 /* : ASignature */;
val* var17 /* : null */;
val* var_psignaturenode1 /* var psignaturenode1: nullable ASignature */;
long var18 /* : Int */;
long var19 /* : Int */;
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
CHECK_NEW_array__Array(var6);
var_listnode3 = var6;
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
CHECK_NEW_array__Array(var7);
var_listnode7 = var7;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23423);
exit(1);
}
var_tcparnode4 = var_nodearraylist3;
/* <var_tcparnode4:nullable Object> isa nullable TCpar */
cltype10 = type_nullable_parser_nodes__TCpar.color;
idtype11 = type_nullable_parser_nodes__TCpar.id;
if(var_tcparnode4 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_tcparnode4->type->table_size) {
var9 = 0;
} else {
var9 = var_tcparnode4->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23425);
exit(1);
}
var_listnode6 = var_nodearraylist5;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23427);
exit(1);
}
var15 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode7, var_listnode6) /* concat on <self:ReduceAction551>*/;
var_listnode7 = var15;
var16 = NEW_parser_nodes__ASignature(&type_parser_nodes__ASignature);
var17 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*))(var16->class->vft[COLOR_parser_prod__ASignature__init_asignature]))(var16, var_toparnode2, var_listnode3, var_tcparnode4, var17, var_listnode7) /* init_asignature on <var16:ASignature>*/;
CHECK_NEW_parser_nodes__ASignature(var16);
var_psignaturenode1 = var16;
var_node_list = var_psignaturenode1;
var18 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction551> */
var19 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var18) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var19, var_node_list) /* push on <var_p:Parser>*/;
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
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var_toparnode2 /* var toparnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_listnode3 /* var listnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : Array[Object] */;
val* var_tcparnode5 /* var tcparnode5: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var20 /* : Array[Object] */;
val* var21 /* : ASignature */;
val* var22 /* : null */;
val* var_psignaturenode1 /* var psignaturenode1: nullable ASignature */;
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
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
CHECK_NEW_array__Array(var7);
var_listnode4 = var7;
var8 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var8->class->vft[COLOR_array__Array__init]))(var8) /* init on <var8:Array[Object]>*/;
CHECK_NEW_array__Array(var8);
var_listnode8 = var8;
var_toparnode2 = var_nodearraylist1;
/* <var_toparnode2:nullable Object> isa nullable TOpar */
cltype = type_nullable_parser_nodes__TOpar.color;
idtype = type_nullable_parser_nodes__TOpar.id;
if(var_toparnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= var_toparnode2->type->table_size) {
var9 = 0;
} else {
var9 = var_toparnode2->type->type_table[cltype] == idtype;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23454);
exit(1);
}
var_listnode3 = var_nodearraylist3;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23456);
exit(1);
}
var13 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction552>*/;
var_listnode4 = var13;
var_tcparnode5 = var_nodearraylist4;
/* <var_tcparnode5:nullable Object> isa nullable TCpar */
cltype15 = type_nullable_parser_nodes__TCpar.color;
idtype16 = type_nullable_parser_nodes__TCpar.id;
if(var_tcparnode5 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_tcparnode5->type->table_size) {
var14 = 0;
} else {
var14 = var_tcparnode5->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23459);
exit(1);
}
var_listnode7 = var_nodearraylist6;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23461);
exit(1);
}
var20 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction552>*/;
var_listnode8 = var20;
var21 = NEW_parser_nodes__ASignature(&type_parser_nodes__ASignature);
var22 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*))(var21->class->vft[COLOR_parser_prod__ASignature__init_asignature]))(var21, var_toparnode2, var_listnode4, var_tcparnode5, var22, var_listnode8) /* init_asignature on <var21:ASignature>*/;
CHECK_NEW_parser_nodes__ASignature(var21);
var_psignaturenode1 = var21;
var_node_list = var_psignaturenode1;
var23 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction552> */
var24 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var23) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var24, var_node_list) /* push on <var_p:Parser>*/;
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
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var4 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_ptypenode5 /* var ptypenode5: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var6 /* : ASignature */;
val* var7 /* : null */;
val* var8 /* : null */;
val* var_psignaturenode1 /* var psignaturenode1: nullable ASignature */;
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
CHECK_NEW_array__Array(var3);
var_listnode3 = var3;
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
CHECK_NEW_array__Array(var4);
var_listnode6 = var4;
var_ptypenode5 = var_nodearraylist1;
/* <var_ptypenode5:nullable Object> isa nullable AType */
cltype = type_nullable_parser_nodes__AType.color;
idtype = type_nullable_parser_nodes__AType.id;
if(var_ptypenode5 == NULL) {
var5 = 1;
} else {
if(cltype >= var_ptypenode5->type->table_size) {
var5 = 0;
} else {
var5 = var_ptypenode5->type->type_table[cltype] == idtype;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23484);
exit(1);
}
var6 = NEW_parser_nodes__ASignature(&type_parser_nodes__ASignature);
var7 = NULL;
var8 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*))(var6->class->vft[COLOR_parser_prod__ASignature__init_asignature]))(var6, var7, var_listnode3, var8, var_ptypenode5, var_listnode6) /* init_asignature on <var6:ASignature>*/;
CHECK_NEW_parser_nodes__ASignature(var6);
var_psignaturenode1 = var6;
var_node_list = var_psignaturenode1;
var9 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction553> */
var10 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var9) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var10, var_node_list) /* push on <var_p:Parser>*/;
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
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var4 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var5 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_ptypenode5 /* var ptypenode5: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_listnode6 /* var listnode6: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : Array[Object] */;
val* var11 /* : ASignature */;
val* var12 /* : null */;
val* var13 /* : null */;
val* var_psignaturenode1 /* var psignaturenode1: nullable ASignature */;
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
CHECK_NEW_array__Array(var4);
var_listnode3 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
var_listnode7 = var5;
var_ptypenode5 = var_nodearraylist1;
/* <var_ptypenode5:nullable Object> isa nullable AType */
cltype = type_nullable_parser_nodes__AType.color;
idtype = type_nullable_parser_nodes__AType.id;
if(var_ptypenode5 == NULL) {
var6 = 1;
} else {
if(cltype >= var_ptypenode5->type->table_size) {
var6 = 0;
} else {
var6 = var_ptypenode5->type->type_table[cltype] == idtype;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23507);
exit(1);
}
var_listnode6 = var_nodearraylist3;
/* <var_listnode6:nullable Object> isa Array[Object] */
cltype8 = type_array__Arraykernel__Object.color;
idtype9 = type_array__Arraykernel__Object.id;
if(var_listnode6 == NULL) {
var7 = 0;
} else {
if(cltype8 >= var_listnode6->type->table_size) {
var7 = 0;
} else {
var7 = var_listnode6->type->type_table[cltype8] == idtype9;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23509);
exit(1);
}
var10 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode7, var_listnode6) /* concat on <self:ReduceAction554>*/;
var_listnode7 = var10;
var11 = NEW_parser_nodes__ASignature(&type_parser_nodes__ASignature);
var12 = NULL;
var13 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*))(var11->class->vft[COLOR_parser_prod__ASignature__init_asignature]))(var11, var12, var_listnode3, var13, var_ptypenode5, var_listnode7) /* init_asignature on <var11:ASignature>*/;
CHECK_NEW_parser_nodes__ASignature(var11);
var_psignaturenode1 = var11;
var_node_list = var_psignaturenode1;
var14 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction554> */
var15 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var14) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var15, var_node_list) /* push on <var_p:Parser>*/;
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
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var3 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var4 /* : ASignature */;
val* var5 /* : null */;
val* var6 /* : null */;
val* var7 /* : null */;
val* var_psignaturenode1 /* var psignaturenode1: nullable ASignature */;
long var8 /* : Int */;
long var9 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var2 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var2->class->vft[COLOR_array__Array__init]))(var2) /* init on <var2:Array[Object]>*/;
CHECK_NEW_array__Array(var2);
var_listnode3 = var2;
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var3->class->vft[COLOR_array__Array__init]))(var3) /* init on <var3:Array[Object]>*/;
CHECK_NEW_array__Array(var3);
var_listnode6 = var3;
var4 = NEW_parser_nodes__ASignature(&type_parser_nodes__ASignature);
var5 = NULL;
var6 = NULL;
var7 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*))(var4->class->vft[COLOR_parser_prod__ASignature__init_asignature]))(var4, var5, var_listnode3, var6, var7, var_listnode6) /* init_asignature on <var4:ASignature>*/;
CHECK_NEW_parser_nodes__ASignature(var4);
var_psignaturenode1 = var4;
var_node_list = var_psignaturenode1;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction555> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
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
val* var3 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var4 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var_listnode6 /* var listnode6: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var6 /* : Array[Object] */;
val* var7 /* : ASignature */;
val* var8 /* : null */;
val* var9 /* : null */;
val* var10 /* : null */;
val* var_psignaturenode1 /* var psignaturenode1: nullable ASignature */;
long var11 /* : Int */;
long var12 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var3->class->vft[COLOR_array__Array__init]))(var3) /* init on <var3:Array[Object]>*/;
CHECK_NEW_array__Array(var3);
var_listnode3 = var3;
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
CHECK_NEW_array__Array(var4);
var_listnode7 = var4;
var_listnode6 = var_nodearraylist2;
/* <var_listnode6:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode6 == NULL) {
var5 = 0;
} else {
if(cltype >= var_listnode6->type->table_size) {
var5 = 0;
} else {
var5 = var_listnode6->type->type_table[cltype] == idtype;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23551);
exit(1);
}
var6 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode7, var_listnode6) /* concat on <self:ReduceAction556>*/;
var_listnode7 = var6;
var7 = NEW_parser_nodes__ASignature(&type_parser_nodes__ASignature);
var8 = NULL;
var9 = NULL;
var10 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*))(var7->class->vft[COLOR_parser_prod__ASignature__init_asignature]))(var7, var8, var_listnode3, var9, var10, var_listnode7) /* init_asignature on <var7:ASignature>*/;
CHECK_NEW_parser_nodes__ASignature(var7);
var_psignaturenode1 = var7;
var_node_list = var_psignaturenode1;
var11 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction556> */
var12 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var11) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var12, var_node_list) /* push on <var_p:Parser>*/;
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
val* var4 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var5 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
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
var_nodearraylist3 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var3;
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
CHECK_NEW_array__Array(var4);
var_listnode3 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
var_listnode6 = var5;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23575);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23577);
exit(1);
}
var10 = NEW_parser_nodes__ASignature(&type_parser_nodes__ASignature);
var11 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*))(var10->class->vft[COLOR_parser_prod__ASignature__init_asignature]))(var10, var_toparnode2, var_listnode3, var_tcparnode4, var11, var_listnode6) /* init_asignature on <var10:ASignature>*/;
CHECK_NEW_parser_nodes__ASignature(var10);
var_psignaturenode1 = var10;
var_node_list = var_psignaturenode1;
var12 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction557> */
var13 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var12) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var13, var_node_list) /* push on <var_p:Parser>*/;
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
val* var_listnode7 /* var listnode7: Array[Object] */;
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
var_nodearraylist4 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
var_listnode4 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
CHECK_NEW_array__Array(var6);
var_listnode7 = var6;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23601);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23603);
exit(1);
}
var11 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction558>*/;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23606);
exit(1);
}
var15 = NEW_parser_nodes__ASignature(&type_parser_nodes__ASignature);
var16 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*))(var15->class->vft[COLOR_parser_prod__ASignature__init_asignature]))(var15, var_toparnode2, var_listnode4, var_tcparnode5, var16, var_listnode7) /* init_asignature on <var15:ASignature>*/;
CHECK_NEW_parser_nodes__ASignature(var15);
var_psignaturenode1 = var15;
var_node_list = var_psignaturenode1;
var17 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction558> */
var18 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var17) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var18, var_node_list) /* push on <var_p:Parser>*/;
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
val* var5 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var6 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
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
var_nodearraylist4 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
var_listnode3 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
CHECK_NEW_array__Array(var6);
var_listnode6 = var6;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23630);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23632);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23634);
exit(1);
}
var14 = NEW_parser_nodes__ASignature(&type_parser_nodes__ASignature);
((void (*)(val*, val*, val*, val*, val*, val*))(var14->class->vft[COLOR_parser_prod__ASignature__init_asignature]))(var14, var_toparnode2, var_listnode3, var_tcparnode4, var_ptypenode5, var_listnode6) /* init_asignature on <var14:ASignature>*/;
CHECK_NEW_parser_nodes__ASignature(var14);
var_psignaturenode1 = var14;
var_node_list = var_psignaturenode1;
var15 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction559> */
var16 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var15) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var16, var_node_list) /* push on <var_p:Parser>*/;
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
val* var_listnode7 /* var listnode7: Array[Object] */;
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
CHECK_NEW_array__Array(var6);
var_listnode4 = var6;
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
CHECK_NEW_array__Array(var7);
var_listnode7 = var7;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23659);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23661);
exit(1);
}
var12 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction560>*/;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23664);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23666);
exit(1);
}
var19 = NEW_parser_nodes__ASignature(&type_parser_nodes__ASignature);
((void (*)(val*, val*, val*, val*, val*, val*))(var19->class->vft[COLOR_parser_prod__ASignature__init_asignature]))(var19, var_toparnode2, var_listnode4, var_tcparnode5, var_ptypenode6, var_listnode7) /* init_asignature on <var19:ASignature>*/;
CHECK_NEW_parser_nodes__ASignature(var19);
var_psignaturenode1 = var19;
var_node_list = var_psignaturenode1;
var20 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction560> */
var21 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var20) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var21, var_node_list) /* push on <var_p:Parser>*/;
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
val* var1 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var2 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
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
var1 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var1->class->vft[COLOR_array__Array__init]))(var1) /* init on <var1:Array[Object]>*/;
CHECK_NEW_array__Array(var1);
var_listnode3 = var1;
var2 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var2->class->vft[COLOR_array__Array__init]))(var2) /* init on <var2:Array[Object]>*/;
CHECK_NEW_array__Array(var2);
var_listnode6 = var2;
var3 = NEW_parser_nodes__ASignature(&type_parser_nodes__ASignature);
var4 = NULL;
var5 = NULL;
var6 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*))(var3->class->vft[COLOR_parser_prod__ASignature__init_asignature]))(var3, var4, var_listnode3, var5, var6, var_listnode6) /* init_asignature on <var3:ASignature>*/;
CHECK_NEW_parser_nodes__ASignature(var3);
var_psignaturenode1 = var3;
var_node_list = var_psignaturenode1;
var7 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction561> */
var8 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var7) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var8, var_node_list) /* push on <var_p:Parser>*/;
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
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var3 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
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
var_nodearraylist1 = var1;
var2 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var2->class->vft[COLOR_array__Array__init]))(var2) /* init on <var2:Array[Object]>*/;
CHECK_NEW_array__Array(var2);
var_listnode3 = var2;
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var3->class->vft[COLOR_array__Array__init]))(var3) /* init on <var3:Array[Object]>*/;
CHECK_NEW_array__Array(var3);
var_listnode6 = var3;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23705);
exit(1);
}
var5 = NEW_parser_nodes__ASignature(&type_parser_nodes__ASignature);
var6 = NULL;
var7 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*))(var5->class->vft[COLOR_parser_prod__ASignature__init_asignature]))(var5, var6, var_listnode3, var7, var_ptypenode5, var_listnode6) /* init_asignature on <var5:ASignature>*/;
CHECK_NEW_parser_nodes__ASignature(var5);
var_psignaturenode1 = var5;
var_node_list = var_psignaturenode1;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction562> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
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
CHECK_NEW_array__Array(var3);
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
var6 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction563> */
var7 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var6) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var7, var_node_list) /* push on <var_p:Parser>*/;
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
CHECK_NEW_array__Array(var4);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23744);
exit(1);
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
var8 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode3, var_listnode2) /* concat on <self:ReduceAction564>*/;
var_listnode3 = var8;
var_node_list = var_listnode3;
var9 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction564> */
var10 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var9) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var10, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction564#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction564__action(val* self, val* p0) {
parser__ReduceAction564__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction565#action for (self: ReduceAction565, Parser) */
void parser__ReduceAction565__action(val* self, val* p0) {
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
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction565> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction565#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction565__action(val* self, val* p0) {
parser__ReduceAction565__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction566#action for (self: ReduceAction566, Parser) */
void parser__ReduceAction566__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23773);
exit(1);
}
var3 = NEW_parser_nodes__AParam(&type_parser_nodes__AParam);
var4 = NULL;
var5 = NULL;
var6 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var3->class->vft[COLOR_parser_prod__AParam__init_aparam]))(var3, var_tidnode2, var4, var5, var6) /* init_aparam on <var3:AParam>*/;
CHECK_NEW_parser_nodes__AParam(var3);
var_pparamnode1 = var3;
var_node_list = var_pparamnode1;
var7 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction566> */
var8 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var7) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var8, var_node_list) /* push on <var_p:Parser>*/;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23792);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23794);
exit(1);
}
var7 = NEW_parser_nodes__AParam(&type_parser_nodes__AParam);
var8 = NULL;
var9 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var7->class->vft[COLOR_parser_prod__AParam__init_aparam]))(var7, var_tidnode2, var8, var9, var_pannotationsnode5) /* init_aparam on <var7:AParam>*/;
CHECK_NEW_parser_nodes__AParam(var7);
var_pparamnode1 = var7;
var_node_list = var_pparamnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction567> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23813);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23815);
exit(1);
}
var7 = NEW_parser_nodes__AParam(&type_parser_nodes__AParam);
var8 = NULL;
var9 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var7->class->vft[COLOR_parser_prod__AParam__init_aparam]))(var7, var_tidnode2, var_ptypenode3, var8, var9) /* init_aparam on <var7:AParam>*/;
CHECK_NEW_parser_nodes__AParam(var7);
var_pparamnode1 = var7;
var_node_list = var_pparamnode1;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23835);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23837);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23839);
exit(1);
}
var11 = NEW_parser_nodes__AParam(&type_parser_nodes__AParam);
var12 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var11->class->vft[COLOR_parser_prod__AParam__init_aparam]))(var11, var_tidnode2, var_ptypenode3, var12, var_pannotationsnode5) /* init_aparam on <var11:AParam>*/;
CHECK_NEW_parser_nodes__AParam(var11);
var_pparamnode1 = var11;
var_node_list = var_pparamnode1;
var13 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction569> */
var14 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var13) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var14, var_node_list) /* push on <var_p:Parser>*/;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23859);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23861);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23863);
exit(1);
}
var11 = NEW_parser_nodes__AParam(&type_parser_nodes__AParam);
var12 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var11->class->vft[COLOR_parser_prod__AParam__init_aparam]))(var11, var_tidnode2, var_ptypenode3, var_tdotdotdotnode4, var12) /* init_aparam on <var11:AParam>*/;
CHECK_NEW_parser_nodes__AParam(var11);
var_pparamnode1 = var11;
var_node_list = var_pparamnode1;
var13 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction570> */
var14 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var13) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var14, var_node_list) /* push on <var_p:Parser>*/;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23884);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23886);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23888);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23890);
exit(1);
}
var15 = NEW_parser_nodes__AParam(&type_parser_nodes__AParam);
((void (*)(val*, val*, val*, val*, val*))(var15->class->vft[COLOR_parser_prod__AParam__init_aparam]))(var15, var_tidnode2, var_ptypenode3, var_tdotdotdotnode4, var_pannotationsnode5) /* init_aparam on <var15:AParam>*/;
CHECK_NEW_parser_nodes__AParam(var15);
var_pparamnode1 = var15;
var_node_list = var_pparamnode1;
var16 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction571> */
var17 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var16) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var17, var_node_list) /* push on <var_p:Parser>*/;
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
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode2 /* var listnode2: Array[Object] */;
val* var_listnode1 /* var listnode1: nullable Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : Array[Object] */;
long var5 /* : Int */;
long var6 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var1;
var2 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var2->class->vft[COLOR_array__Array__init]))(var2) /* init on <var2:Array[Object]>*/;
CHECK_NEW_array__Array(var2);
var_listnode2 = var2;
var_listnode1 = var_nodearraylist1;
/* <var_listnode1:nullable Object> isa Array[Object] */
cltype = type_array__Arraykernel__Object.color;
idtype = type_array__Arraykernel__Object.id;
if(var_listnode1 == NULL) {
var3 = 0;
} else {
if(cltype >= var_listnode1->type->table_size) {
var3 = 0;
} else {
var3 = var_listnode1->type->type_table[cltype] == idtype;
}
}
if (!var3) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23909);
exit(1);
}
var4 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode2, var_listnode1) /* concat on <self:ReduceAction572>*/;
var_listnode2 = var4;
var_node_list = var_listnode2;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction572> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
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
val* var_tbangnode3 /* var tbangnode3: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode4 /* var tidnode4: nullable Object */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var_psignaturenode5 /* var psignaturenode5: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : AClosureDecl */;
val* var13 /* : null */;
val* var14 /* : null */;
val* var_pclosuredeclnode1 /* var pclosuredeclnode1: nullable AClosureDecl */;
long var15 /* : Int */;
long var16 /* : Int */;
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
var_tbangnode3 = var_nodearraylist1;
/* <var_tbangnode3:nullable Object> isa nullable TBang */
cltype = type_nullable_parser_nodes__TBang.color;
idtype = type_nullable_parser_nodes__TBang.id;
if(var_tbangnode3 == NULL) {
var5 = 1;
} else {
if(cltype >= var_tbangnode3->type->table_size) {
var5 = 0;
} else {
var5 = var_tbangnode3->type->type_table[cltype] == idtype;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23925);
exit(1);
}
var_tidnode4 = var_nodearraylist2;
/* <var_tidnode4:nullable Object> isa nullable TId */
cltype7 = type_nullable_parser_nodes__TId.color;
idtype8 = type_nullable_parser_nodes__TId.id;
if(var_tidnode4 == NULL) {
var6 = 1;
} else {
if(cltype7 >= var_tidnode4->type->table_size) {
var6 = 0;
} else {
var6 = var_tidnode4->type->type_table[cltype7] == idtype8;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23927);
exit(1);
}
var_psignaturenode5 = var_nodearraylist3;
/* <var_psignaturenode5:nullable Object> isa nullable ASignature */
cltype10 = type_nullable_parser_nodes__ASignature.color;
idtype11 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode5 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_psignaturenode5->type->table_size) {
var9 = 0;
} else {
var9 = var_psignaturenode5->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23929);
exit(1);
}
var12 = NEW_parser_nodes__AClosureDecl(&type_parser_nodes__AClosureDecl);
var13 = NULL;
var14 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*))(var12->class->vft[COLOR_parser_prod__AClosureDecl__init_aclosuredecl]))(var12, var13, var_tbangnode3, var_tidnode4, var_psignaturenode5, var14) /* init_aclosuredecl on <var12:AClosureDecl>*/;
CHECK_NEW_parser_nodes__AClosureDecl(var12);
var_pclosuredeclnode1 = var12;
var_node_list = var_pclosuredeclnode1;
var15 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction573> */
var16 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var15) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var16, var_node_list) /* push on <var_p:Parser>*/;
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
val* var_tkwbreaknode2 /* var tkwbreaknode2: nullable Object */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var_tbangnode3 /* var tbangnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var_tidnode4 /* var tidnode4: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_psignaturenode5 /* var psignaturenode5: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : AClosureDecl */;
val* var17 /* : null */;
val* var_pclosuredeclnode1 /* var pclosuredeclnode1: nullable AClosureDecl */;
long var18 /* : Int */;
long var19 /* : Int */;
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
var_tkwbreaknode2 = var_nodearraylist1;
/* <var_tkwbreaknode2:nullable Object> isa nullable TKwbreak */
cltype = type_nullable_parser_nodes__TKwbreak.color;
idtype = type_nullable_parser_nodes__TKwbreak.id;
if(var_tkwbreaknode2 == NULL) {
var6 = 1;
} else {
if(cltype >= var_tkwbreaknode2->type->table_size) {
var6 = 0;
} else {
var6 = var_tkwbreaknode2->type->type_table[cltype] == idtype;
}
}
if (!var6) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23952);
exit(1);
}
var_tbangnode3 = var_nodearraylist2;
/* <var_tbangnode3:nullable Object> isa nullable TBang */
cltype8 = type_nullable_parser_nodes__TBang.color;
idtype9 = type_nullable_parser_nodes__TBang.id;
if(var_tbangnode3 == NULL) {
var7 = 1;
} else {
if(cltype8 >= var_tbangnode3->type->table_size) {
var7 = 0;
} else {
var7 = var_tbangnode3->type->type_table[cltype8] == idtype9;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23954);
exit(1);
}
var_tidnode4 = var_nodearraylist3;
/* <var_tidnode4:nullable Object> isa nullable TId */
cltype11 = type_nullable_parser_nodes__TId.color;
idtype12 = type_nullable_parser_nodes__TId.id;
if(var_tidnode4 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_tidnode4->type->table_size) {
var10 = 0;
} else {
var10 = var_tidnode4->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23956);
exit(1);
}
var_psignaturenode5 = var_nodearraylist4;
/* <var_psignaturenode5:nullable Object> isa nullable ASignature */
cltype14 = type_nullable_parser_nodes__ASignature.color;
idtype15 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode5 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_psignaturenode5->type->table_size) {
var13 = 0;
} else {
var13 = var_psignaturenode5->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23958);
exit(1);
}
var16 = NEW_parser_nodes__AClosureDecl(&type_parser_nodes__AClosureDecl);
var17 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*))(var16->class->vft[COLOR_parser_prod__AClosureDecl__init_aclosuredecl]))(var16, var_tkwbreaknode2, var_tbangnode3, var_tidnode4, var_psignaturenode5, var17) /* init_aclosuredecl on <var16:AClosureDecl>*/;
CHECK_NEW_parser_nodes__AClosureDecl(var16);
var_pclosuredeclnode1 = var16;
var_node_list = var_pclosuredeclnode1;
var18 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction574> */
var19 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var18) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var19, var_node_list) /* push on <var_p:Parser>*/;
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
val* var_tbangnode3 /* var tbangnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode4 /* var tidnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_psignaturenode5 /* var psignaturenode5: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_pexprnode6 /* var pexprnode6: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : AClosureDecl */;
val* var18 /* : null */;
val* var_pclosuredeclnode1 /* var pclosuredeclnode1: nullable AClosureDecl */;
long var19 /* : Int */;
long var20 /* : Int */;
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
var_tbangnode3 = var_nodearraylist1;
/* <var_tbangnode3:nullable Object> isa nullable TBang */
cltype = type_nullable_parser_nodes__TBang.color;
idtype = type_nullable_parser_nodes__TBang.id;
if(var_tbangnode3 == NULL) {
var7 = 1;
} else {
if(cltype >= var_tbangnode3->type->table_size) {
var7 = 0;
} else {
var7 = var_tbangnode3->type->type_table[cltype] == idtype;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23982);
exit(1);
}
var_tidnode4 = var_nodearraylist2;
/* <var_tidnode4:nullable Object> isa nullable TId */
cltype9 = type_nullable_parser_nodes__TId.color;
idtype10 = type_nullable_parser_nodes__TId.id;
if(var_tidnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_tidnode4->type->table_size) {
var8 = 0;
} else {
var8 = var_tidnode4->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23984);
exit(1);
}
var_psignaturenode5 = var_nodearraylist3;
/* <var_psignaturenode5:nullable Object> isa nullable ASignature */
cltype12 = type_nullable_parser_nodes__ASignature.color;
idtype13 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode5 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_psignaturenode5->type->table_size) {
var11 = 0;
} else {
var11 = var_psignaturenode5->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23986);
exit(1);
}
var_pexprnode6 = var_nodearraylist5;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 23988);
exit(1);
}
var17 = NEW_parser_nodes__AClosureDecl(&type_parser_nodes__AClosureDecl);
var18 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*))(var17->class->vft[COLOR_parser_prod__AClosureDecl__init_aclosuredecl]))(var17, var18, var_tbangnode3, var_tidnode4, var_psignaturenode5, var_pexprnode6) /* init_aclosuredecl on <var17:AClosureDecl>*/;
CHECK_NEW_parser_nodes__AClosureDecl(var17);
var_pclosuredeclnode1 = var17;
var_node_list = var_pclosuredeclnode1;
var19 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction575> */
var20 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var19) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var20, var_node_list) /* push on <var_p:Parser>*/;
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
val* var_tkwbreaknode2 /* var tkwbreaknode2: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_tbangnode3 /* var tbangnode3: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_tidnode4 /* var tidnode4: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_psignaturenode5 /* var psignaturenode5: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pexprnode6 /* var pexprnode6: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : AClosureDecl */;
val* var_pclosuredeclnode1 /* var pclosuredeclnode1: nullable AClosureDecl */;
long var22 /* : Int */;
long var23 /* : Int */;
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
var_tkwbreaknode2 = var_nodearraylist1;
/* <var_tkwbreaknode2:nullable Object> isa nullable TKwbreak */
cltype = type_nullable_parser_nodes__TKwbreak.color;
idtype = type_nullable_parser_nodes__TKwbreak.id;
if(var_tkwbreaknode2 == NULL) {
var8 = 1;
} else {
if(cltype >= var_tkwbreaknode2->type->table_size) {
var8 = 0;
} else {
var8 = var_tkwbreaknode2->type->type_table[cltype] == idtype;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24013);
exit(1);
}
var_tbangnode3 = var_nodearraylist2;
/* <var_tbangnode3:nullable Object> isa nullable TBang */
cltype10 = type_nullable_parser_nodes__TBang.color;
idtype11 = type_nullable_parser_nodes__TBang.id;
if(var_tbangnode3 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_tbangnode3->type->table_size) {
var9 = 0;
} else {
var9 = var_tbangnode3->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24015);
exit(1);
}
var_tidnode4 = var_nodearraylist3;
/* <var_tidnode4:nullable Object> isa nullable TId */
cltype13 = type_nullable_parser_nodes__TId.color;
idtype14 = type_nullable_parser_nodes__TId.id;
if(var_tidnode4 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_tidnode4->type->table_size) {
var12 = 0;
} else {
var12 = var_tidnode4->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24017);
exit(1);
}
var_psignaturenode5 = var_nodearraylist4;
/* <var_psignaturenode5:nullable Object> isa nullable ASignature */
cltype16 = type_nullable_parser_nodes__ASignature.color;
idtype17 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode5 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_psignaturenode5->type->table_size) {
var15 = 0;
} else {
var15 = var_psignaturenode5->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24019);
exit(1);
}
var_pexprnode6 = var_nodearraylist6;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype19 = type_nullable_parser_nodes__AExpr.color;
idtype20 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode6 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pexprnode6->type->table_size) {
var18 = 0;
} else {
var18 = var_pexprnode6->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24021);
exit(1);
}
var21 = NEW_parser_nodes__AClosureDecl(&type_parser_nodes__AClosureDecl);
((void (*)(val*, val*, val*, val*, val*, val*))(var21->class->vft[COLOR_parser_prod__AClosureDecl__init_aclosuredecl]))(var21, var_tkwbreaknode2, var_tbangnode3, var_tidnode4, var_psignaturenode5, var_pexprnode6) /* init_aclosuredecl on <var21:AClosureDecl>*/;
CHECK_NEW_parser_nodes__AClosureDecl(var21);
var_pclosuredeclnode1 = var21;
var_node_list = var_pclosuredeclnode1;
var22 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction576> */
var23 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var22) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var23, var_node_list) /* push on <var_p:Parser>*/;
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
val* var_tbangnode3 /* var tbangnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode4 /* var tidnode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_psignaturenode5 /* var psignaturenode5: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var_pexprnode6 /* var pexprnode6: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : AClosureDecl */;
val* var19 /* : null */;
val* var_pclosuredeclnode1 /* var pclosuredeclnode1: nullable AClosureDecl */;
long var20 /* : Int */;
long var21 /* : Int */;
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
var_tbangnode3 = var_nodearraylist1;
/* <var_tbangnode3:nullable Object> isa nullable TBang */
cltype = type_nullable_parser_nodes__TBang.color;
idtype = type_nullable_parser_nodes__TBang.id;
if(var_tbangnode3 == NULL) {
var8 = 1;
} else {
if(cltype >= var_tbangnode3->type->table_size) {
var8 = 0;
} else {
var8 = var_tbangnode3->type->type_table[cltype] == idtype;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24046);
exit(1);
}
var_tidnode4 = var_nodearraylist2;
/* <var_tidnode4:nullable Object> isa nullable TId */
cltype10 = type_nullable_parser_nodes__TId.color;
idtype11 = type_nullable_parser_nodes__TId.id;
if(var_tidnode4 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_tidnode4->type->table_size) {
var9 = 0;
} else {
var9 = var_tidnode4->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24048);
exit(1);
}
var_psignaturenode5 = var_nodearraylist3;
/* <var_psignaturenode5:nullable Object> isa nullable ASignature */
cltype13 = type_nullable_parser_nodes__ASignature.color;
idtype14 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode5 == NULL) {
var12 = 1;
} else {
if(cltype13 >= var_psignaturenode5->type->table_size) {
var12 = 0;
} else {
var12 = var_psignaturenode5->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24050);
exit(1);
}
var_pexprnode6 = var_nodearraylist6;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype16 = type_nullable_parser_nodes__AExpr.color;
idtype17 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode6 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_pexprnode6->type->table_size) {
var15 = 0;
} else {
var15 = var_pexprnode6->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24052);
exit(1);
}
var18 = NEW_parser_nodes__AClosureDecl(&type_parser_nodes__AClosureDecl);
var19 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*))(var18->class->vft[COLOR_parser_prod__AClosureDecl__init_aclosuredecl]))(var18, var19, var_tbangnode3, var_tidnode4, var_psignaturenode5, var_pexprnode6) /* init_aclosuredecl on <var18:AClosureDecl>*/;
CHECK_NEW_parser_nodes__AClosureDecl(var18);
var_pclosuredeclnode1 = var18;
var_node_list = var_pclosuredeclnode1;
var20 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction577> */
var21 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var20) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var21, var_node_list) /* push on <var_p:Parser>*/;
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
val* var_tkwbreaknode2 /* var tkwbreaknode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_tbangnode3 /* var tbangnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_tidnode4 /* var tidnode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_psignaturenode5 /* var psignaturenode5: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pexprnode6 /* var pexprnode6: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var22 /* : AClosureDecl */;
val* var_pclosuredeclnode1 /* var pclosuredeclnode1: nullable AClosureDecl */;
long var23 /* : Int */;
long var24 /* : Int */;
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
var_tkwbreaknode2 = var_nodearraylist1;
/* <var_tkwbreaknode2:nullable Object> isa nullable TKwbreak */
cltype = type_nullable_parser_nodes__TKwbreak.color;
idtype = type_nullable_parser_nodes__TKwbreak.id;
if(var_tkwbreaknode2 == NULL) {
var9 = 1;
} else {
if(cltype >= var_tkwbreaknode2->type->table_size) {
var9 = 0;
} else {
var9 = var_tkwbreaknode2->type->type_table[cltype] == idtype;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24078);
exit(1);
}
var_tbangnode3 = var_nodearraylist2;
/* <var_tbangnode3:nullable Object> isa nullable TBang */
cltype11 = type_nullable_parser_nodes__TBang.color;
idtype12 = type_nullable_parser_nodes__TBang.id;
if(var_tbangnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_tbangnode3->type->table_size) {
var10 = 0;
} else {
var10 = var_tbangnode3->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24080);
exit(1);
}
var_tidnode4 = var_nodearraylist3;
/* <var_tidnode4:nullable Object> isa nullable TId */
cltype14 = type_nullable_parser_nodes__TId.color;
idtype15 = type_nullable_parser_nodes__TId.id;
if(var_tidnode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_tidnode4->type->table_size) {
var13 = 0;
} else {
var13 = var_tidnode4->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24082);
exit(1);
}
var_psignaturenode5 = var_nodearraylist4;
/* <var_psignaturenode5:nullable Object> isa nullable ASignature */
cltype17 = type_nullable_parser_nodes__ASignature.color;
idtype18 = type_nullable_parser_nodes__ASignature.id;
if(var_psignaturenode5 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_psignaturenode5->type->table_size) {
var16 = 0;
} else {
var16 = var_psignaturenode5->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24084);
exit(1);
}
var_pexprnode6 = var_nodearraylist7;
/* <var_pexprnode6:nullable Object> isa nullable AExpr */
cltype20 = type_nullable_parser_nodes__AExpr.color;
idtype21 = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode6 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_pexprnode6->type->table_size) {
var19 = 0;
} else {
var19 = var_pexprnode6->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24086);
exit(1);
}
var22 = NEW_parser_nodes__AClosureDecl(&type_parser_nodes__AClosureDecl);
((void (*)(val*, val*, val*, val*, val*, val*))(var22->class->vft[COLOR_parser_prod__AClosureDecl__init_aclosuredecl]))(var22, var_tkwbreaknode2, var_tbangnode3, var_tidnode4, var_psignaturenode5, var_pexprnode6) /* init_aclosuredecl on <var22:AClosureDecl>*/;
CHECK_NEW_parser_nodes__AClosureDecl(var22);
var_pclosuredeclnode1 = var22;
var_node_list = var_pclosuredeclnode1;
var23 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction578> */
var24 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var23) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var24, var_node_list) /* push on <var_p:Parser>*/;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24105);
exit(1);
}
var3 = NEW_parser_nodes__AReturnExpr(&type_parser_nodes__AReturnExpr);
var4 = NULL;
((void (*)(val*, val*, val*))(var3->class->vft[COLOR_parser_prod__AReturnExpr__init_areturnexpr]))(var3, var4, var_pexprnode3) /* init_areturnexpr on <var3:AReturnExpr>*/;
CHECK_NEW_parser_nodes__AReturnExpr(var3);
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction579> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
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
CHECK_NEW_array__Array(var4);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24124);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24126);
exit(1);
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
CHECK_NEW_parser_nodes__AExternCalls(var11);
var_pexterncallsnode1 = var11;
var_node_list = var_pexterncallsnode1;
var12 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction580> */
var13 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var12) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var13, var_node_list) /* push on <var_p:Parser>*/;
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
CHECK_NEW_array__Array(var5);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24149);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24151);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24153);
exit(1);
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
var15 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode4) /* concat on <self:ReduceAction581>*/;
var_listnode5 = var15;
var16 = NEW_parser_nodes__AExternCalls(&type_parser_nodes__AExternCalls);
((void (*)(val*, val*, val*))(var16->class->vft[COLOR_parser_prod__AExternCalls__init_aexterncalls]))(var16, var_tkwimportnode2, var_listnode5) /* init_aexterncalls on <var16:AExternCalls>*/;
CHECK_NEW_parser_nodes__AExternCalls(var16);
var_pexterncallsnode1 = var16;
var_node_list = var_pexterncallsnode1;
var17 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction581> */
var18 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var17) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var18, var_node_list) /* push on <var_p:Parser>*/;
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
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction582> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
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
var2 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction583> */
var3 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var2) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var3, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction583#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction583__action(val* self, val* p0) {
parser__ReduceAction583__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction585#action for (self: ReduceAction585, Parser) */
void parser__ReduceAction585__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24197);
exit(1);
}
var3 = NEW_parser_nodes__ASuperExternCall(&type_parser_nodes__ASuperExternCall);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__ASuperExternCall__init_asuperexterncall]))(var3, var_tkwsupernode2) /* init_asuperexterncall on <var3:ASuperExternCall>*/;
CHECK_NEW_parser_nodes__ASuperExternCall(var3);
var_pexterncallnode1 = var3;
var_node_list = var_pexterncallnode1;
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction585> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24212);
exit(1);
}
var3 = NEW_parser_nodes__ALocalPropExternCall(&type_parser_nodes__ALocalPropExternCall);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__ALocalPropExternCall__init_alocalpropexterncall]))(var3, var_pmethidnode2) /* init_alocalpropexterncall on <var3:ALocalPropExternCall>*/;
CHECK_NEW_parser_nodes__ALocalPropExternCall(var3);
var_pexterncallnode1 = var3;
var_node_list = var_pexterncallnode1;
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction586> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
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
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tclassidnode2 /* var tclassidnode2: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_tquadnode3 /* var tquadnode3: nullable Object */;
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
var_tclassidnode2 = var_nodearraylist1;
/* <var_tclassidnode2:nullable Object> isa nullable TClassid */
cltype = type_nullable_parser_nodes__TClassid.color;
idtype = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode2 == NULL) {
var4 = 1;
} else {
if(cltype >= var_tclassidnode2->type->table_size) {
var4 = 0;
} else {
var4 = var_tclassidnode2->type->type_table[cltype] == idtype;
}
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24229);
exit(1);
}
var_tquadnode3 = var_nodearraylist2;
/* <var_tquadnode3:nullable Object> isa nullable TQuad */
cltype6 = type_nullable_parser_nodes__TQuad.color;
idtype7 = type_nullable_parser_nodes__TQuad.id;
if(var_tquadnode3 == NULL) {
var5 = 1;
} else {
if(cltype6 >= var_tquadnode3->type->table_size) {
var5 = 0;
} else {
var5 = var_tquadnode3->type->type_table[cltype6] == idtype7;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24231);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24233);
exit(1);
}
var11 = NEW_parser_nodes__AFullPropExternCall(&type_parser_nodes__AFullPropExternCall);
((void (*)(val*, val*, val*, val*))(var11->class->vft[COLOR_parser_prod__AFullPropExternCall__init_afullpropexterncall]))(var11, var_tclassidnode2, var_tquadnode3, var_pmethidnode4) /* init_afullpropexterncall on <var11:AFullPropExternCall>*/;
CHECK_NEW_parser_nodes__AFullPropExternCall(var11);
var_pexterncallnode1 = var11;
var_node_list = var_pexterncallnode1;
var12 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction587> */
var13 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var12) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var13, var_node_list) /* push on <var_p:Parser>*/;
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
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var_tclassidnode2 /* var tclassidnode2: nullable Object */;
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
var_tclassidnode2 = var_nodearraylist1;
/* <var_tclassidnode2:nullable Object> isa nullable TClassid */
cltype = type_nullable_parser_nodes__TClassid.color;
idtype = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode2 == NULL) {
var2 = 1;
} else {
if(cltype >= var_tclassidnode2->type->table_size) {
var2 = 0;
} else {
var2 = var_tclassidnode2->type->type_table[cltype] == idtype;
}
}
if (!var2) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24250);
exit(1);
}
var3 = NEW_parser_nodes__AInitPropExternCall(&type_parser_nodes__AInitPropExternCall);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__AInitPropExternCall__init_ainitpropexterncall]))(var3, var_tclassidnode2) /* init_ainitpropexterncall on <var3:AInitPropExternCall>*/;
CHECK_NEW_parser_nodes__AInitPropExternCall(var3);
var_pexterncallnode1 = var3;
var_node_list = var_pexterncallnode1;
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction588> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
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
val* var_tkwasnode3 /* var tkwasnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_ptypenode4 /* var ptypenode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : ACastAsExternCall */;
val* var_pexterncallnode1 /* var pexterncallnode1: nullable ACastAsExternCall */;
long var17 /* : Int */;
long var18 /* : Int */;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24272);
exit(1);
}
var_tkwasnode3 = var_nodearraylist2;
/* <var_tkwasnode3:nullable Object> isa nullable TKwas */
cltype11 = type_nullable_parser_nodes__TKwas.color;
idtype12 = type_nullable_parser_nodes__TKwas.id;
if(var_tkwasnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_tkwasnode3->type->table_size) {
var10 = 0;
} else {
var10 = var_tkwasnode3->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24274);
exit(1);
}
var_ptypenode4 = var_nodearraylist6;
/* <var_ptypenode4:nullable Object> isa nullable AType */
cltype14 = type_nullable_parser_nodes__AType.color;
idtype15 = type_nullable_parser_nodes__AType.id;
if(var_ptypenode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_ptypenode4->type->table_size) {
var13 = 0;
} else {
var13 = var_ptypenode4->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24276);
exit(1);
}
var16 = NEW_parser_nodes__ACastAsExternCall(&type_parser_nodes__ACastAsExternCall);
((void (*)(val*, val*, val*, val*))(var16->class->vft[COLOR_parser_prod__ACastAsExternCall__init_acastasexterncall]))(var16, var_ptypenode2, var_tkwasnode3, var_ptypenode4) /* init_acastasexterncall on <var16:ACastAsExternCall>*/;
CHECK_NEW_parser_nodes__ACastAsExternCall(var16);
var_pexterncallnode1 = var16;
var_node_list = var_pexterncallnode1;
var17 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction589> */
var18 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var17) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var18, var_node_list) /* push on <var_p:Parser>*/;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24296);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24298);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24300);
exit(1);
}
var12 = NEW_parser_nodes__AAsNullableExternCall(&type_parser_nodes__AAsNullableExternCall);
((void (*)(val*, val*, val*, val*))(var12->class->vft[COLOR_parser_prod__AAsNullableExternCall__init_aasnullableexterncall]))(var12, var_ptypenode2, var_tkwasnode3, var_tkwnullablenode4) /* init_aasnullableexterncall on <var12:AAsNullableExternCall>*/;
CHECK_NEW_parser_nodes__AAsNullableExternCall(var12);
var_pexterncallnode1 = var12;
var_node_list = var_pexterncallnode1;
var13 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction590> */
var14 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var13) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var14, var_node_list) /* push on <var_p:Parser>*/;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24322);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24324);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24326);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24328);
exit(1);
}
var17 = NEW_parser_nodes__AAsNotNullableExternCall(&type_parser_nodes__AAsNotNullableExternCall);
((void (*)(val*, val*, val*, val*, val*))(var17->class->vft[COLOR_parser_prod__AAsNotNullableExternCall__init_aasnotnullableexterncall]))(var17, var_ptypenode2, var_tkwasnode3, var_tkwnotnode4, var_tkwnullablenode5) /* init_aasnotnullableexterncall on <var17:AAsNotNullableExternCall>*/;
CHECK_NEW_parser_nodes__AAsNotNullableExternCall(var17);
var_pexterncallnode1 = var17;
var_node_list = var_pexterncallnode1;
var18 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction591> */
var19 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var18) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var19, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction591#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction591__action(val* self, val* p0) {
parser__ReduceAction591__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction592#action for (self: ReduceAction592, Parser) */
void parser__ReduceAction592__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24347);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24349);
exit(1);
}
var7 = NEW_parser_nodes__AInLanguage(&type_parser_nodes__AInLanguage);
((void (*)(val*, val*, val*))(var7->class->vft[COLOR_parser_prod__AInLanguage__init_ainlanguage]))(var7, var_tkwinnode2, var_tstringnode3) /* init_ainlanguage on <var7:AInLanguage>*/;
CHECK_NEW_parser_nodes__AInLanguage(var7);
var_pinlanguagenode1 = var7;
var_node_list = var_pinlanguagenode1;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction592> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction592#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction592__action(val* self, val* p0) {
parser__ReduceAction592__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction593#action for (self: ReduceAction593, Parser) */
void parser__ReduceAction593__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24365);
exit(1);
}
var3 = NEW_parser_nodes__AExternCodeBlock(&type_parser_nodes__AExternCodeBlock);
var4 = NULL;
((void (*)(val*, val*, val*))(var3->class->vft[COLOR_parser_prod__AExternCodeBlock__init_aexterncodeblock]))(var3, var4, var_texterncodesegmentnode3) /* init_aexterncodeblock on <var3:AExternCodeBlock>*/;
CHECK_NEW_parser_nodes__AExternCodeBlock(var3);
var_pexterncodeblocknode1 = var3;
var_node_list = var_pexterncodeblocknode1;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction593> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24382);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24384);
exit(1);
}
var7 = NEW_parser_nodes__AExternCodeBlock(&type_parser_nodes__AExternCodeBlock);
((void (*)(val*, val*, val*))(var7->class->vft[COLOR_parser_prod__AExternCodeBlock__init_aexterncodeblock]))(var7, var_pinlanguagenode2, var_texterncodesegmentnode3) /* init_aexterncodeblock on <var7:AExternCodeBlock>*/;
CHECK_NEW_parser_nodes__AExternCodeBlock(var7);
var_pexterncodeblocknode1 = var7;
var_node_list = var_pexterncodeblocknode1;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction594> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
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
var3 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction595> */
var4 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var3) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var4, var_node_list) /* push on <var_p:Parser>*/;
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
CHECK_NEW_array__Array(var2);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24413);
exit(1);
}
var4 = NEW_parser_nodes__AType(&type_parser_nodes__AType);
var5 = NULL;
var6 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var4->class->vft[COLOR_parser_prod__AType__init_atype]))(var4, var5, var_tclassidnode3, var_listnode4, var6) /* init_atype on <var4:AType>*/;
CHECK_NEW_parser_nodes__AType(var4);
var_ptypenode1 = var4;
var_node_list = var_ptypenode1;
var7 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction596> */
var8 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var7) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var8, var_node_list) /* push on <var_p:Parser>*/;
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
CHECK_NEW_array__Array(var3);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24433);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24435);
exit(1);
}
var8 = NEW_parser_nodes__AType(&type_parser_nodes__AType);
var9 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var8->class->vft[COLOR_parser_prod__AType__init_atype]))(var8, var_tkwnullablenode2, var_tclassidnode3, var_listnode4, var9) /* init_atype on <var8:AType>*/;
CHECK_NEW_parser_nodes__AType(var8);
var_ptypenode1 = var8;
var_node_list = var_ptypenode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction597> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
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
CHECK_NEW_array__Array(var3);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24455);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24457);
exit(1);
}
var8 = NEW_parser_nodes__AType(&type_parser_nodes__AType);
var9 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var8->class->vft[COLOR_parser_prod__AType__init_atype]))(var8, var9, var_tclassidnode3, var_listnode4, var_pannotationsnode5) /* init_atype on <var8:AType>*/;
CHECK_NEW_parser_nodes__AType(var8);
var_ptypenode1 = var8;
var_node_list = var_ptypenode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction598> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
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
CHECK_NEW_array__Array(var4);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24478);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24480);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24482);
exit(1);
}
var12 = NEW_parser_nodes__AType(&type_parser_nodes__AType);
((void (*)(val*, val*, val*, val*, val*))(var12->class->vft[COLOR_parser_prod__AType__init_atype]))(var12, var_tkwnullablenode2, var_tclassidnode3, var_listnode4, var_pannotationsnode5) /* init_atype on <var12:AType>*/;
CHECK_NEW_parser_nodes__AType(var12);
var_ptypenode1 = var12;
var_node_list = var_ptypenode1;
var13 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction599> */
var14 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var13) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var14, var_node_list) /* push on <var_p:Parser>*/;
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
CHECK_NEW_array__Array(var7);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24506);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24508);
exit(1);
}
var12 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode4) /* concat on <self:ReduceAction600>*/;
var_listnode5 = var12;
var13 = NEW_parser_nodes__AType(&type_parser_nodes__AType);
var14 = NULL;
var15 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var13->class->vft[COLOR_parser_prod__AType__init_atype]))(var13, var14, var_tclassidnode3, var_listnode5, var15) /* init_atype on <var13:AType>*/;
CHECK_NEW_parser_nodes__AType(var13);
var_ptypenode1 = var13;
var_node_list = var_ptypenode1;
var16 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction600> */
var17 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var16) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var17, var_node_list) /* push on <var_p:Parser>*/;
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
CHECK_NEW_array__Array(var8);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24534);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24536);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24538);
exit(1);
}
var16 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode4) /* concat on <self:ReduceAction601>*/;
var_listnode5 = var16;
var17 = NEW_parser_nodes__AType(&type_parser_nodes__AType);
var18 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var17->class->vft[COLOR_parser_prod__AType__init_atype]))(var17, var_tkwnullablenode2, var_tclassidnode3, var_listnode5, var18) /* init_atype on <var17:AType>*/;
CHECK_NEW_parser_nodes__AType(var17);
var_ptypenode1 = var17;
var_node_list = var_ptypenode1;
var19 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction601> */
var20 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var19) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var20, var_node_list) /* push on <var_p:Parser>*/;
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
CHECK_NEW_array__Array(var8);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24564);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24566);
exit(1);
}
var13 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode4) /* concat on <self:ReduceAction602>*/;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24569);
exit(1);
}
var17 = NEW_parser_nodes__AType(&type_parser_nodes__AType);
var18 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var17->class->vft[COLOR_parser_prod__AType__init_atype]))(var17, var18, var_tclassidnode3, var_listnode5, var_pannotationsnode6) /* init_atype on <var17:AType>*/;
CHECK_NEW_parser_nodes__AType(var17);
var_ptypenode1 = var17;
var_node_list = var_ptypenode1;
var19 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction602> */
var20 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var19) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var20, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction602#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction602__action(val* self, val* p0) {
parser__ReduceAction602__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction603#action for (self: ReduceAction603, Parser) */
void parser__ReduceAction603__action(val* self, val* p0) {
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
CHECK_NEW_array__Array(var9);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24595);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24597);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24599);
exit(1);
}
var17 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode4) /* concat on <self:ReduceAction603>*/;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24602);
exit(1);
}
var21 = NEW_parser_nodes__AType(&type_parser_nodes__AType);
((void (*)(val*, val*, val*, val*, val*))(var21->class->vft[COLOR_parser_prod__AType__init_atype]))(var21, var_tkwnullablenode2, var_tclassidnode3, var_listnode5, var_pannotationsnode6) /* init_atype on <var21:AType>*/;
CHECK_NEW_parser_nodes__AType(var21);
var_ptypenode1 = var21;
var_node_list = var_ptypenode1;
var22 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction603> */
var23 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var22) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var23, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction603#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction603__action(val* self, val* p0) {
parser__ReduceAction603__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction604#action for (self: ReduceAction604, Parser) */
void parser__ReduceAction604__action(val* self, val* p0) {
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
CHECK_NEW_array__Array(var2);
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
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction604> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction604#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction604__action(val* self, val* p0) {
parser__ReduceAction604__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction605#action for (self: ReduceAction605, Parser) */
void parser__ReduceAction605__action(val* self, val* p0) {
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
CHECK_NEW_array__Array(var3);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24638);
exit(1);
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
var7 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode3, var_listnode2) /* concat on <self:ReduceAction605>*/;
var_listnode3 = var7;
var_node_list = var_listnode3;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction605> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction605#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction605__action(val* self, val* p0) {
parser__ReduceAction605__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction606#action for (self: ReduceAction606, Parser) */
void parser__ReduceAction606__action(val* self, val* p0) {
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
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction606> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction606#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction606__action(val* self, val* p0) {
parser__ReduceAction606__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction608#action for (self: ReduceAction608, Parser) */
void parser__ReduceAction608__action(val* self, val* p0) {
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
var3 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction608> */
var4 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var3) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var4, var_node_list) /* push on <var_p:Parser>*/;
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
CHECK_NEW_array__Array(var3);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24681);
exit(1);
}
var5 = NEW_parser_nodes__ABlockExpr(&type_parser_nodes__ABlockExpr);
((void (*)(val*, val*, val*))(var5->class->vft[COLOR_parser_prod__ABlockExpr__init_ablockexpr]))(var5, var_listnode2, var_tkwendnode3) /* init_ablockexpr on <var5:ABlockExpr>*/;
CHECK_NEW_parser_nodes__ABlockExpr(var5);
var_pexprnode1 = var5;
var_node_list = var_pexprnode1;
var6 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction609> */
var7 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var6) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var7, var_node_list) /* push on <var_p:Parser>*/;
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
CHECK_NEW_array__Array(var2);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24698);
exit(1);
}
var4 = NEW_parser_nodes__ABlockExpr(&type_parser_nodes__ABlockExpr);
((void (*)(val*, val*, val*))(var4->class->vft[COLOR_parser_prod__ABlockExpr__init_ablockexpr]))(var4, var_listnode2, var_tkwendnode3) /* init_ablockexpr on <var4:ABlockExpr>*/;
CHECK_NEW_parser_nodes__ABlockExpr(var4);
var_pexprnode1 = var4;
var_node_list = var_pexprnode1;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction610> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
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
var2 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction611> */
var3 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var2) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var3, var_node_list) /* push on <var_p:Parser>*/;
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
CHECK_NEW_array__Array(var2);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24726);
exit(1);
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
CHECK_NEW_parser_nodes__ABlockExpr(var6);
var_pexprnode1 = var6;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction612> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
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
CHECK_NEW_array__Array(var3);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24747);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24749);
exit(1);
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
var10 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction613>*/;
var_listnode4 = var10;
var11 = NEW_parser_nodes__ABlockExpr(&type_parser_nodes__ABlockExpr);
var12 = NULL;
((void (*)(val*, val*, val*))(var11->class->vft[COLOR_parser_prod__ABlockExpr__init_ablockexpr]))(var11, var_listnode4, var12) /* init_ablockexpr on <var11:ABlockExpr>*/;
CHECK_NEW_parser_nodes__ABlockExpr(var11);
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var13 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction613> */
var14 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var13) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var14, var_node_list) /* push on <var_p:Parser>*/;
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
CHECK_NEW_array__Array(var3);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24771);
exit(1);
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
CHECK_NEW_parser_nodes__ABlockExpr(var7);
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
CHECK_NEW_array__Array(var4);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24793);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24795);
exit(1);
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
var11 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction615>*/;
var_listnode4 = var11;
var12 = NEW_parser_nodes__ABlockExpr(&type_parser_nodes__ABlockExpr);
var13 = NULL;
((void (*)(val*, val*, val*))(var12->class->vft[COLOR_parser_prod__ABlockExpr__init_ablockexpr]))(var12, var_listnode4, var13) /* init_ablockexpr on <var12:ABlockExpr>*/;
CHECK_NEW_parser_nodes__ABlockExpr(var12);
var_pexprnode1 = var12;
var_node_list = var_pexprnode1;
var14 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction615> */
var15 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var14) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var15, var_node_list) /* push on <var_p:Parser>*/;
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
CHECK_NEW_array__Array(var4);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24818);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24823);
exit(1);
}
var11 = NEW_parser_nodes__ABlockExpr(&type_parser_nodes__ABlockExpr);
((void (*)(val*, val*, val*))(var11->class->vft[COLOR_parser_prod__ABlockExpr__init_ablockexpr]))(var11, var_listnode3, var_tkwendnode4) /* init_ablockexpr on <var11:ABlockExpr>*/;
CHECK_NEW_parser_nodes__ABlockExpr(var11);
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
/* method parser#ReduceAction617#action for (self: ReduceAction617, Parser) */
void parser__ReduceAction617__action(val* self, val* p0) {
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
CHECK_NEW_array__Array(var5);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24843);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24845);
exit(1);
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
var12 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction617>*/;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24851);
exit(1);
}
var16 = NEW_parser_nodes__ABlockExpr(&type_parser_nodes__ABlockExpr);
((void (*)(val*, val*, val*))(var16->class->vft[COLOR_parser_prod__ABlockExpr__init_ablockexpr]))(var16, var_listnode4, var_tkwendnode5) /* init_ablockexpr on <var16:ABlockExpr>*/;
CHECK_NEW_parser_nodes__ABlockExpr(var16);
var_pexprnode1 = var16;
var_node_list = var_pexprnode1;
var17 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction617> */
var18 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var17) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var18, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction617#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction617__action(val* self, val* p0) {
parser__ReduceAction617__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction621#action for (self: ReduceAction621, Parser) */
void parser__ReduceAction621__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24867);
exit(1);
}
var3 = NEW_parser_nodes__AReturnExpr(&type_parser_nodes__AReturnExpr);
var4 = NULL;
((void (*)(val*, val*, val*))(var3->class->vft[COLOR_parser_prod__AReturnExpr__init_areturnexpr]))(var3, var_tkwreturnnode2, var4) /* init_areturnexpr on <var3:AReturnExpr>*/;
CHECK_NEW_parser_nodes__AReturnExpr(var3);
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var5 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction621> */
var6 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var5) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var6, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction621#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction621__action(val* self, val* p0) {
parser__ReduceAction621__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction622#action for (self: ReduceAction622, Parser) */
void parser__ReduceAction622__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24884);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24886);
exit(1);
}
var7 = NEW_parser_nodes__AReturnExpr(&type_parser_nodes__AReturnExpr);
((void (*)(val*, val*, val*))(var7->class->vft[COLOR_parser_prod__AReturnExpr__init_areturnexpr]))(var7, var_tkwreturnnode2, var_pexprnode3) /* init_areturnexpr on <var7:AReturnExpr>*/;
CHECK_NEW_parser_nodes__AReturnExpr(var7);
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var8 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction622> */
var9 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var8) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var9, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction622#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction622__action(val* self, val* p0) {
parser__ReduceAction622__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction623#action for (self: ReduceAction623, Parser) */
void parser__ReduceAction623__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24902);
exit(1);
}
var3 = NEW_parser_nodes__ABreakExpr(&type_parser_nodes__ABreakExpr);
var4 = NULL;
var5 = NULL;
((void (*)(val*, val*, val*, val*))(var3->class->vft[COLOR_parser_prod__ABreakExpr__init_abreakexpr]))(var3, var_tkwbreaknode2, var4, var5) /* init_abreakexpr on <var3:ABreakExpr>*/;
CHECK_NEW_parser_nodes__ABreakExpr(var3);
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var6 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction623> */
var7 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var6) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var7, var_node_list) /* push on <var_p:Parser>*/;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24920);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24922);
exit(1);
}
var7 = NEW_parser_nodes__ABreakExpr(&type_parser_nodes__ABreakExpr);
var8 = NULL;
((void (*)(val*, val*, val*, val*))(var7->class->vft[COLOR_parser_prod__ABreakExpr__init_abreakexpr]))(var7, var_tkwbreaknode2, var_plabelnode3, var8) /* init_abreakexpr on <var7:ABreakExpr>*/;
CHECK_NEW_parser_nodes__ABreakExpr(var7);
var_pexprnode1 = var7;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24940);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24942);
exit(1);
}
var7 = NEW_parser_nodes__ABreakExpr(&type_parser_nodes__ABreakExpr);
var8 = NULL;
((void (*)(val*, val*, val*, val*))(var7->class->vft[COLOR_parser_prod__ABreakExpr__init_abreakexpr]))(var7, var_tkwbreaknode2, var8, var_pexprnode4) /* init_abreakexpr on <var7:ABreakExpr>*/;
CHECK_NEW_parser_nodes__ABreakExpr(var7);
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction625> */
var10 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var9) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var10, var_node_list) /* push on <var_p:Parser>*/;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24961);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24963);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24965);
exit(1);
}
var11 = NEW_parser_nodes__ABreakExpr(&type_parser_nodes__ABreakExpr);
((void (*)(val*, val*, val*, val*))(var11->class->vft[COLOR_parser_prod__ABreakExpr__init_abreakexpr]))(var11, var_tkwbreaknode2, var_plabelnode3, var_pexprnode4) /* init_abreakexpr on <var11:ABreakExpr>*/;
CHECK_NEW_parser_nodes__ABreakExpr(var11);
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction626> */
var13 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var12) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var13, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction626#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction626__action(val* self, val* p0) {
parser__ReduceAction626__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction627#action for (self: ReduceAction627, Parser) */
void parser__ReduceAction627__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24982);
exit(1);
}
var3 = NEW_parser_nodes__AAbortExpr(&type_parser_nodes__AAbortExpr);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_prod__AAbortExpr__init_aabortexpr]))(var3, var_tkwabortnode2) /* init_aabortexpr on <var3:AAbortExpr>*/;
CHECK_NEW_parser_nodes__AAbortExpr(var3);
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var4 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction627> */
var5 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var4) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var5, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction627#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction627__action(val* self, val* p0) {
parser__ReduceAction627__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction628#action for (self: ReduceAction628, Parser) */
void parser__ReduceAction628__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 24997);
exit(1);
}
var3 = NEW_parser_nodes__AContinueExpr(&type_parser_nodes__AContinueExpr);
var4 = NULL;
var5 = NULL;
((void (*)(val*, val*, val*, val*))(var3->class->vft[COLOR_parser_prod__AContinueExpr__init_acontinueexpr]))(var3, var_tkwcontinuenode2, var4, var5) /* init_acontinueexpr on <var3:AContinueExpr>*/;
CHECK_NEW_parser_nodes__AContinueExpr(var3);
var_pexprnode1 = var3;
var_node_list = var_pexprnode1;
var6 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction628> */
var7 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var6) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var7, var_node_list) /* push on <var_p:Parser>*/;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 25015);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 25017);
exit(1);
}
var7 = NEW_parser_nodes__AContinueExpr(&type_parser_nodes__AContinueExpr);
var8 = NULL;
((void (*)(val*, val*, val*, val*))(var7->class->vft[COLOR_parser_prod__AContinueExpr__init_acontinueexpr]))(var7, var_tkwcontinuenode2, var_plabelnode3, var8) /* init_acontinueexpr on <var7:AContinueExpr>*/;
CHECK_NEW_parser_nodes__AContinueExpr(var7);
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction629> */
var10 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var9) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var10, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction629#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction629__action(val* self, val* p0) {
parser__ReduceAction629__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction630#action for (self: ReduceAction630, Parser) */
void parser__ReduceAction630__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 25035);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 25037);
exit(1);
}
var7 = NEW_parser_nodes__AContinueExpr(&type_parser_nodes__AContinueExpr);
var8 = NULL;
((void (*)(val*, val*, val*, val*))(var7->class->vft[COLOR_parser_prod__AContinueExpr__init_acontinueexpr]))(var7, var_tkwcontinuenode2, var8, var_pexprnode4) /* init_acontinueexpr on <var7:AContinueExpr>*/;
CHECK_NEW_parser_nodes__AContinueExpr(var7);
var_pexprnode1 = var7;
var_node_list = var_pexprnode1;
var9 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction630> */
var10 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var9) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var10, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction630#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction630__action(val* self, val* p0) {
parser__ReduceAction630__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction631#action for (self: ReduceAction631, Parser) */
void parser__ReduceAction631__action(val* self, val* p0) {
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 25056);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 25058);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 25060);
exit(1);
}
var11 = NEW_parser_nodes__AContinueExpr(&type_parser_nodes__AContinueExpr);
((void (*)(val*, val*, val*, val*))(var11->class->vft[COLOR_parser_prod__AContinueExpr__init_acontinueexpr]))(var11, var_tkwcontinuenode2, var_plabelnode3, var_pexprnode4) /* init_acontinueexpr on <var11:AContinueExpr>*/;
CHECK_NEW_parser_nodes__AContinueExpr(var11);
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction631> */
var13 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var12) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var13, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction631#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction631__action(val* self, val* p0) {
parser__ReduceAction631__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction638#action for (self: ReduceAction638, Parser) */
void parser__ReduceAction638__action(val* self, val* p0) {
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
val* var_listnode5 /* var listnode5: Array[Object] */;
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
CHECK_NEW_array__Array(var6);
var_listnode5 = var6;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 25082);
exit(1);
}
var_tidnode3 = var_nodearraylist4;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 25084);
exit(1);
}
var_pexprsnode4 = var_nodearraylist5;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 25086);
exit(1);
}
var14 = NEW_parser_nodes__ACallExpr(&type_parser_nodes__ACallExpr);
((void (*)(val*, val*, val*, val*, val*))(var14->class->vft[COLOR_parser_prod__ACallExpr__init_acallexpr]))(var14, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_listnode5) /* init_acallexpr on <var14:ACallExpr>*/;
CHECK_NEW_parser_nodes__ACallExpr(var14);
var_pexprnode1 = var14;
var_node_list = var_pexprnode1;
var15 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction638> */
var16 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var15) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var16, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction638#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction638__action(val* self, val* p0) {
parser__ReduceAction638__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction639#action for (self: ReduceAction639, Parser) */
void parser__ReduceAction639__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var3 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
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
var_nodearraylist2 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var2;
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var3->class->vft[COLOR_array__Array__init]))(var3) /* init on <var3:Array[Object]>*/;
CHECK_NEW_array__Array(var3);
var_listnode5 = var3;
var4 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
((void (*)(val*))(var4->class->vft[COLOR_parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr]))(var4) /* init_aimplicitselfexpr on <var4:AImplicitSelfExpr>*/;
CHECK_NEW_parser_nodes__AImplicitSelfExpr(var4);
var_pexprnode2 = var4;
var_tidnode3 = var_nodearraylist1;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 25107);
exit(1);
}
var_pexprsnode4 = var_nodearraylist2;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 25109);
exit(1);
}
var9 = NEW_parser_nodes__ACallExpr(&type_parser_nodes__ACallExpr);
((void (*)(val*, val*, val*, val*, val*))(var9->class->vft[COLOR_parser_prod__ACallExpr__init_acallexpr]))(var9, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_listnode5) /* init_acallexpr on <var9:ACallExpr>*/;
CHECK_NEW_parser_nodes__ACallExpr(var9);
var_pexprnode1 = var9;
var_node_list = var_pexprnode1;
var10 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction639> */
var11 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var10) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var11, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction639#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction639__action(val* self, val* p0) {
parser__ReduceAction639__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction640#action for (self: ReduceAction640, Parser) */
void parser__ReduceAction640__action(val* self, val* p0) {
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
CHECK_NEW_array__Array(var7);
var_listnode5 = var7;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 25133);
exit(1);
}
var_tidnode3 = var_nodearraylist5;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 25135);
exit(1);
}
var_pexprsnode4 = var_nodearraylist6;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 25137);
exit(1);
}
var15 = NEW_parser_nodes__ACallExpr(&type_parser_nodes__ACallExpr);
((void (*)(val*, val*, val*, val*, val*))(var15->class->vft[COLOR_parser_prod__ACallExpr__init_acallexpr]))(var15, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_listnode5) /* init_acallexpr on <var15:ACallExpr>*/;
CHECK_NEW_parser_nodes__ACallExpr(var15);
var_pexprnode1 = var15;
var_node_list = var_pexprnode1;
var16 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction640> */
var17 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var16) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var17, var_node_list) /* push on <var_p:Parser>*/;
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
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
long var17 /* : Int */;
long var18 /* : Int */;
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
var_listnode5 = var8;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var9 = 0;
} else {
var9 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 25162);
exit(1);
}
var_tidnode3 = var_nodearraylist6;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype11 = type_nullable_parser_nodes__TId.color;
idtype12 = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_tidnode3->type->table_size) {
var10 = 0;
} else {
var10 = var_tidnode3->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 25164);
exit(1);
}
var_pexprsnode4 = var_nodearraylist7;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype14 = type_nullable_parser_nodes__AExprs.color;
idtype15 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_pexprsnode4->type->table_size) {
var13 = 0;
} else {
var13 = var_pexprsnode4->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 25166);
exit(1);
}
var16 = NEW_parser_nodes__ACallExpr(&type_parser_nodes__ACallExpr);
((void (*)(val*, val*, val*, val*, val*))(var16->class->vft[COLOR_parser_prod__ACallExpr__init_acallexpr]))(var16, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_listnode5) /* init_acallexpr on <var16:ACallExpr>*/;
CHECK_NEW_parser_nodes__ACallExpr(var16);
var_pexprnode1 = var16;
var_node_list = var_pexprnode1;
var17 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction641> */
var18 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var17) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var18, var_node_list) /* push on <var_p:Parser>*/;
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
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var4 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
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
var_nodearraylist3 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var3;
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
CHECK_NEW_array__Array(var4);
var_listnode5 = var4;
var5 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
((void (*)(val*))(var5->class->vft[COLOR_parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr]))(var5) /* init_aimplicitselfexpr on <var5:AImplicitSelfExpr>*/;
CHECK_NEW_parser_nodes__AImplicitSelfExpr(var5);
var_pexprnode2 = var5;
var_tidnode3 = var_nodearraylist2;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 25188);
exit(1);
}
var_pexprsnode4 = var_nodearraylist3;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 25190);
exit(1);
}
var10 = NEW_parser_nodes__ACallExpr(&type_parser_nodes__ACallExpr);
((void (*)(val*, val*, val*, val*, val*))(var10->class->vft[COLOR_parser_prod__ACallExpr__init_acallexpr]))(var10, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_listnode5) /* init_acallexpr on <var10:ACallExpr>*/;
CHECK_NEW_parser_nodes__ACallExpr(var10);
var_pexprnode1 = var10;
var_node_list = var_pexprnode1;
var11 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction643> */
var12 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var11) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var12, var_node_list) /* push on <var_p:Parser>*/;
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
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var5 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var6 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var11 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
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
CHECK_NEW_array__Array(var5);
var_listnode5 = var5;
var6 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
((void (*)(val*))(var6->class->vft[COLOR_parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr]))(var6) /* init_aimplicitselfexpr on <var6:AImplicitSelfExpr>*/;
CHECK_NEW_parser_nodes__AImplicitSelfExpr(var6);
var_pexprnode2 = var6;
var_tidnode3 = var_nodearraylist3;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype = type_nullable_parser_nodes__TId.color;
idtype = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var7 = 1;
} else {
if(cltype >= var_tidnode3->type->table_size) {
var7 = 0;
} else {
var7 = var_tidnode3->type->type_table[cltype] == idtype;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 25213);
exit(1);
}
var_pexprsnode4 = var_nodearraylist4;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype9 = type_nullable_parser_nodes__AExprs.color;
idtype10 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_pexprsnode4->type->table_size) {
var8 = 0;
} else {
var8 = var_pexprsnode4->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 25215);
exit(1);
}
var11 = NEW_parser_nodes__ACallExpr(&type_parser_nodes__ACallExpr);
((void (*)(val*, val*, val*, val*, val*))(var11->class->vft[COLOR_parser_prod__ACallExpr__init_acallexpr]))(var11, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_listnode5) /* init_acallexpr on <var11:ACallExpr>*/;
CHECK_NEW_parser_nodes__ACallExpr(var11);
var_pexprnode1 = var11;
var_node_list = var_pexprnode1;
var12 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction644> */
var13 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var12) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var13, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction644#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction644__action(val* self, val* p0) {
parser__ReduceAction644__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction646#action for (self: ReduceAction646, Parser) */
void parser__ReduceAction646__action(val* self, val* p0) {
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
val* var_listnode6 /* var listnode6: Array[Object] */;
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
val* var_listnode5 /* var listnode5: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var18 /* : Array[Object] */;
val* var19 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
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
CHECK_NEW_array__Array(var7);
var_listnode6 = var7;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 25239);
exit(1);
}
var_tidnode3 = var_nodearraylist4;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 25241);
exit(1);
}
var_pexprsnode4 = var_nodearraylist5;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 25243);
exit(1);
}
var_listnode5 = var_nodearraylist6;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 25245);
exit(1);
}
var18 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode6, var_listnode5) /* concat on <self:ReduceAction646>*/;
var_listnode6 = var18;
var19 = NEW_parser_nodes__ACallExpr(&type_parser_nodes__ACallExpr);
((void (*)(val*, val*, val*, val*, val*))(var19->class->vft[COLOR_parser_prod__ACallExpr__init_acallexpr]))(var19, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_listnode6) /* init_acallexpr on <var19:ACallExpr>*/;
CHECK_NEW_parser_nodes__ACallExpr(var19);
var_pexprnode1 = var19;
var_node_list = var_pexprnode1;
var20 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction646> */
var21 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var20) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var21, var_node_list) /* push on <var_p:Parser>*/;
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
val* var4 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
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
val* var_listnode5 /* var listnode5: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : Array[Object] */;
val* var14 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
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
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
CHECK_NEW_array__Array(var4);
var_listnode6 = var4;
var5 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
((void (*)(val*))(var5->class->vft[COLOR_parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr]))(var5) /* init_aimplicitselfexpr on <var5:AImplicitSelfExpr>*/;
CHECK_NEW_parser_nodes__AImplicitSelfExpr(var5);
var_pexprnode2 = var5;
var_tidnode3 = var_nodearraylist1;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 25268);
exit(1);
}
var_pexprsnode4 = var_nodearraylist2;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 25270);
exit(1);
}
var_listnode5 = var_nodearraylist3;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 25272);
exit(1);
}
var13 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode6, var_listnode5) /* concat on <self:ReduceAction647>*/;
var_listnode6 = var13;
var14 = NEW_parser_nodes__ACallExpr(&type_parser_nodes__ACallExpr);
((void (*)(val*, val*, val*, val*, val*))(var14->class->vft[COLOR_parser_prod__ACallExpr__init_acallexpr]))(var14, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_listnode6) /* init_acallexpr on <var14:ACallExpr>*/;
CHECK_NEW_parser_nodes__ACallExpr(var14);
var_pexprnode1 = var14;
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
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : Array[Object] */;
val* var20 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
long var21 /* : Int */;
long var22 /* : Int */;
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
var_listnode6 = var8;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var9 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var9 = 0;
} else {
var9 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 25298);
exit(1);
}
var_tidnode3 = var_nodearraylist5;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype11 = type_nullable_parser_nodes__TId.color;
idtype12 = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var10 = 1;
} else {
if(cltype11 >= var_tidnode3->type->table_size) {
var10 = 0;
} else {
var10 = var_tidnode3->type->type_table[cltype11] == idtype12;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 25300);
exit(1);
}
var_pexprsnode4 = var_nodearraylist6;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype14 = type_nullable_parser_nodes__AExprs.color;
idtype15 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_pexprsnode4->type->table_size) {
var13 = 0;
} else {
var13 = var_pexprsnode4->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 25302);
exit(1);
}
var_listnode5 = var_nodearraylist7;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype17 = type_array__Arraykernel__Object.color;
idtype18 = type_array__Arraykernel__Object.id;
if(var_listnode5 == NULL) {
var16 = 0;
} else {
if(cltype17 >= var_listnode5->type->table_size) {
var16 = 0;
} else {
var16 = var_listnode5->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 25304);
exit(1);
}
var19 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode6, var_listnode5) /* concat on <self:ReduceAction648>*/;
var_listnode6 = var19;
var20 = NEW_parser_nodes__ACallExpr(&type_parser_nodes__ACallExpr);
((void (*)(val*, val*, val*, val*, val*))(var20->class->vft[COLOR_parser_prod__ACallExpr__init_acallexpr]))(var20, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_listnode6) /* init_acallexpr on <var20:ACallExpr>*/;
CHECK_NEW_parser_nodes__ACallExpr(var20);
var_pexprnode1 = var20;
var_node_list = var_pexprnode1;
var21 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction648> */
var22 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var21) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var22, var_node_list) /* push on <var_p:Parser>*/;
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
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_pexprnode2 /* var pexprnode2: nullable Object */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var20 /* : Array[Object] */;
val* var21 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
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
CHECK_NEW_array__Array(var9);
var_listnode6 = var9;
var_pexprnode2 = var_nodearraylist1;
/* <var_pexprnode2:nullable Object> isa nullable AExpr */
cltype = type_nullable_parser_nodes__AExpr.color;
idtype = type_nullable_parser_nodes__AExpr.id;
if(var_pexprnode2 == NULL) {
var10 = 1;
} else {
if(cltype >= var_pexprnode2->type->table_size) {
var10 = 0;
} else {
var10 = var_pexprnode2->type->type_table[cltype] == idtype;
}
}
if (!var10) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 25331);
exit(1);
}
var_tidnode3 = var_nodearraylist6;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype12 = type_nullable_parser_nodes__TId.color;
idtype13 = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var_tidnode3->type->table_size) {
var11 = 0;
} else {
var11 = var_tidnode3->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 25333);
exit(1);
}
var_pexprsnode4 = var_nodearraylist7;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype15 = type_nullable_parser_nodes__AExprs.color;
idtype16 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode4 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_pexprsnode4->type->table_size) {
var14 = 0;
} else {
var14 = var_pexprsnode4->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 25335);
exit(1);
}
var_listnode5 = var_nodearraylist8;
/* <var_listnode5:nullable Object> isa Array[Object] */
cltype18 = type_array__Arraykernel__Object.color;
idtype19 = type_array__Arraykernel__Object.id;
if(var_listnode5 == NULL) {
var17 = 0;
} else {
if(cltype18 >= var_listnode5->type->table_size) {
var17 = 0;
} else {
var17 = var_listnode5->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 25337);
exit(1);
}
var20 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode6, var_listnode5) /* concat on <self:ReduceAction649>*/;
var_listnode6 = var20;
var21 = NEW_parser_nodes__ACallExpr(&type_parser_nodes__ACallExpr);
((void (*)(val*, val*, val*, val*, val*))(var21->class->vft[COLOR_parser_prod__ACallExpr__init_acallexpr]))(var21, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_listnode6) /* init_acallexpr on <var21:ACallExpr>*/;
CHECK_NEW_parser_nodes__ACallExpr(var21);
var_pexprnode1 = var21;
var_node_list = var_pexprnode1;
var22 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction649> */
var23 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var22) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var23, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction649#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction649__action(val* self, val* p0) {
parser__ReduceAction649__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction651#action for (self: ReduceAction651, Parser) */
void parser__ReduceAction651__action(val* self, val* p0) {
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
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var6 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : Array[Object] */;
val* var15 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
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
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
var_listnode6 = var5;
var6 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
((void (*)(val*))(var6->class->vft[COLOR_parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr]))(var6) /* init_aimplicitselfexpr on <var6:AImplicitSelfExpr>*/;
CHECK_NEW_parser_nodes__AImplicitSelfExpr(var6);
var_pexprnode2 = var6;
var_tidnode3 = var_nodearraylist2;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype = type_nullable_parser_nodes__TId.color;
idtype = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var7 = 1;
} else {
if(cltype >= var_tidnode3->type->table_size) {
var7 = 0;
} else {
var7 = var_tidnode3->type->type_table[cltype] == idtype;
}
}
if (!var7) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 25361);
exit(1);
}
var_pexprsnode4 = var_nodearraylist3;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype9 = type_nullable_parser_nodes__AExprs.color;
idtype10 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode4 == NULL) {
var8 = 1;
} else {
if(cltype9 >= var_pexprsnode4->type->table_size) {
var8 = 0;
} else {
var8 = var_pexprsnode4->type->type_table[cltype9] == idtype10;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 25363);
exit(1);
}
var_listnode5 = var_nodearraylist4;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 25365);
exit(1);
}
var14 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode6, var_listnode5) /* concat on <self:ReduceAction651>*/;
var_listnode6 = var14;
var15 = NEW_parser_nodes__ACallExpr(&type_parser_nodes__ACallExpr);
((void (*)(val*, val*, val*, val*, val*))(var15->class->vft[COLOR_parser_prod__ACallExpr__init_acallexpr]))(var15, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_listnode6) /* init_acallexpr on <var15:ACallExpr>*/;
CHECK_NEW_parser_nodes__ACallExpr(var15);
var_pexprnode1 = var15;
var_node_list = var_pexprnode1;
var16 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction651> */
var17 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var16) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var17, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction651#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction651__action(val* self, val* p0) {
parser__ReduceAction651__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction652#action for (self: ReduceAction652, Parser) */
void parser__ReduceAction652__action(val* self, val* p0) {
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
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var7 /* : AImplicitSelfExpr */;
val* var_pexprnode2 /* var pexprnode2: nullable AImplicitSelfExpr */;
val* var_tidnode3 /* var tidnode3: nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var_pexprsnode4 /* var pexprsnode4: nullable Object */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var_listnode5 /* var listnode5: nullable Object */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : Array[Object] */;
val* var16 /* : ACallExpr */;
val* var_pexprnode1 /* var pexprnode1: nullable ACallExpr */;
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
CHECK_NEW_array__Array(var6);
var_listnode6 = var6;
var7 = NEW_parser_nodes__AImplicitSelfExpr(&type_parser_nodes__AImplicitSelfExpr);
((void (*)(val*))(var7->class->vft[COLOR_parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr]))(var7) /* init_aimplicitselfexpr on <var7:AImplicitSelfExpr>*/;
CHECK_NEW_parser_nodes__AImplicitSelfExpr(var7);
var_pexprnode2 = var7;
var_tidnode3 = var_nodearraylist3;
/* <var_tidnode3:nullable Object> isa nullable TId */
cltype = type_nullable_parser_nodes__TId.color;
idtype = type_nullable_parser_nodes__TId.id;
if(var_tidnode3 == NULL) {
var8 = 1;
} else {
if(cltype >= var_tidnode3->type->table_size) {
var8 = 0;
} else {
var8 = var_tidnode3->type->type_table[cltype] == idtype;
}
}
if (!var8) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 25390);
exit(1);
}
var_pexprsnode4 = var_nodearraylist4;
/* <var_pexprsnode4:nullable Object> isa nullable AExprs */
cltype10 = type_nullable_parser_nodes__AExprs.color;
idtype11 = type_nullable_parser_nodes__AExprs.id;
if(var_pexprsnode4 == NULL) {
var9 = 1;
} else {
if(cltype10 >= var_pexprsnode4->type->table_size) {
var9 = 0;
} else {
var9 = var_pexprsnode4->type->type_table[cltype10] == idtype11;
}
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 25392);
exit(1);
}
var_listnode5 = var_nodearraylist5;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 25394);
exit(1);
}
var15 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode6, var_listnode5) /* concat on <self:ReduceAction652>*/;
var_listnode6 = var15;
var16 = NEW_parser_nodes__ACallExpr(&type_parser_nodes__ACallExpr);
((void (*)(val*, val*, val*, val*, val*))(var16->class->vft[COLOR_parser_prod__ACallExpr__init_acallexpr]))(var16, var_pexprnode2, var_tidnode3, var_pexprsnode4, var_listnode6) /* init_acallexpr on <var16:ACallExpr>*/;
CHECK_NEW_parser_nodes__ACallExpr(var16);
var_pexprnode1 = var16;
var_node_list = var_pexprnode1;
var17 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction652> */
var18 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var17) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var18, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction652#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction652__action(val* self, val* p0) {
parser__ReduceAction652__action(self, p0);
RET_LABEL:;
}
