#include "parser.sep.0.h"
/* method parser#Parser#build_reduce_table for (self: Object) */
void VIRTUAL_parser__Parser__build_reduce_table(val* self) {
parser__Parser__build_reduce_table(self);
RET_LABEL:;
}
/* method parser#ComputeProdLocationVisitor#visit for (self: ComputeProdLocationVisitor, ANode) */
void parser__ComputeProdLocationVisitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
short int var /* : Bool */;
int cltype;
int idtype;
val* var1 /* : Location */;
val* var_loc /* var loc: Location */;
val* var2 /* : Array[Prod] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : Array[Prod] */;
val* var6 /* : Iterator[nullable Object] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_no /* var no: Prod */;
val* var9 /* : Array[Prod] */;
val* var10 /* : Array[Prod] */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : Location */;
val* var14 /* : nullable SourceFile */;
long var15 /* : Int */;
long var16 /* : Int */;
long var17 /* : Int */;
long var18 /* : Int */;
val* var_loco /* var loco: Location */;
val* var19 /* : Array[Prod] */;
val* var20 /* : Iterator[nullable Object] */;
short int var21 /* : Bool */;
val* var22 /* : nullable Object */;
val* var_no23 /* var no: Prod */;
val* var25 /* : Array[Prod] */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : Array[Prod] */;
val* var30 /* : nullable Location */;
val* var_startl /* var startl: nullable Location */;
val* var31 /* : null */;
short int var32 /* : Bool */;
val* var33 /* : nullable Location */;
val* var_endl /* var endl: nullable Location */;
val* var34 /* : null */;
short int var35 /* : Bool */;
val* var36 /* : Location */;
val* var37 /* : nullable SourceFile */;
long var38 /* : Int */;
long var39 /* : Int */;
long var40 /* : Int */;
long var41 /* : Int */;
val* var42 /* : Array[Prod] */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
val* var45 /* : Location */;
val* var46 /* : nullable SourceFile */;
long var47 /* : Int */;
long var48 /* : Int */;
long var49 /* : Int */;
long var50 /* : Int */;
val* var_loc51 /* var loc: Location */;
val* var52 /* : Array[Prod] */;
val* var53 /* : Iterator[nullable Object] */;
short int var54 /* : Bool */;
val* var55 /* : nullable Object */;
val* var_no56 /* var no: Prod */;
val* var58 /* : Array[Prod] */;
val* var59 /* : Array[Prod] */;
var_n = p0;
/* <var_n:ANode> isa Token */
cltype = type_parser_nodes__Token.color;
idtype = type_parser_nodes__Token.id;
if(cltype >= var_n->type->table_size) {
var = 0;
} else {
var = var_n->type->type_table[cltype] == idtype;
}
if (var){
var1 = ((val* (*)(val*))(var_n->class->vft[COLOR_parser_nodes__ANode__location]))(var_n) /* location on <var_n:ANode(Token)>*/;
var_loc = var1;
self->attrs[COLOR_parser__ComputeProdLocationVisitor___last_location].val = var_loc; /* _last_location on <self:ComputeProdLocationVisitor> */
var2 = self->attrs[COLOR_parser__ComputeProdLocationVisitor___need_first_prods].val; /* _need_first_prods on <self:ComputeProdLocationVisitor> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _need_first_prods");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 1763);
exit(1);
}
var3 = ((short int (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var2) /* is_empty on <var2:Array[Prod]>*/;
var4 = !var3;
if (var4){
var5 = self->attrs[COLOR_parser__ComputeProdLocationVisitor___need_first_prods].val; /* _need_first_prods on <self:ComputeProdLocationVisitor> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _need_first_prods");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 1764);
exit(1);
}
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_abstract_collection__Collection__iterator]))(var5) /* iterator on <var5:Array[Prod]>*/;
for(;;) {
var7 = ((short int (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var6) /* is_ok on <var6:Iterator[nullable Object]>*/;
if(!var7) break;
var8 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__item]))(var6) /* item on <var6:Iterator[nullable Object]>*/;
var_no = var8;
var_no->attrs[COLOR_parser__Prod___first_location].val = var_loc; /* _first_location on <var_no:Prod> */
CONTINUE_label: (void)0;
((void (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__next]))(var6) /* next on <var6:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var9 = self->attrs[COLOR_parser__ComputeProdLocationVisitor___need_first_prods].val; /* _need_first_prods on <self:ComputeProdLocationVisitor> */
if (var9 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _need_first_prods");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 1767);
exit(1);
}
((void (*)(val*))(var9->class->vft[COLOR_abstract_collection__RemovableCollection__clear]))(var9) /* clear on <var9:Array[Prod]>*/;
} else {
}
var10 = self->attrs[COLOR_parser__ComputeProdLocationVisitor___need_after_epsilons].val; /* _need_after_epsilons on <self:ComputeProdLocationVisitor> */
if (var10 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _need_after_epsilons");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 1771);
exit(1);
}
var11 = ((short int (*)(val*))(var10->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var10) /* is_empty on <var10:Array[Prod]>*/;
var12 = !var11;
if (var12){
var13 = NEW_location__Location(&type_location__Location);
var14 = ((val* (*)(val*))(var_loc->class->vft[COLOR_location__Location__file]))(var_loc) /* file on <var_loc:Location>*/;
var15 = ((long (*)(val*))(var_loc->class->vft[COLOR_location__Location__line_start]))(var_loc) /* line_start on <var_loc:Location>*/;
var16 = ((long (*)(val*))(var_loc->class->vft[COLOR_location__Location__line_start]))(var_loc) /* line_start on <var_loc:Location>*/;
var17 = ((long (*)(val*))(var_loc->class->vft[COLOR_location__Location__column_start]))(var_loc) /* column_start on <var_loc:Location>*/;
var18 = ((long (*)(val*))(var_loc->class->vft[COLOR_location__Location__column_start]))(var_loc) /* column_start on <var_loc:Location>*/;
((void (*)(val*, val*, long, long, long, long))(var13->class->vft[COLOR_location__Location__init]))(var13, var14, var15, var16, var17, var18) /* init on <var13:Location>*/;
CHECK_NEW_location__Location(var13);
var_loco = var13;
var19 = self->attrs[COLOR_parser__ComputeProdLocationVisitor___need_after_epsilons].val; /* _need_after_epsilons on <self:ComputeProdLocationVisitor> */
if (var19 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _need_after_epsilons");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 1773);
exit(1);
}
var20 = ((val* (*)(val*))(var19->class->vft[COLOR_abstract_collection__Collection__iterator]))(var19) /* iterator on <var19:Array[Prod]>*/;
for(;;) {
var21 = ((short int (*)(val*))(var20->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var20) /* is_ok on <var20:Iterator[nullable Object]>*/;
if(!var21) break;
var22 = ((val* (*)(val*))(var20->class->vft[COLOR_abstract_collection__Iterator__item]))(var20) /* item on <var20:Iterator[nullable Object]>*/;
var_no23 = var22;
((void (*)(val*, val*))(var_no23->class->vft[COLOR_parser_nodes__Prod__location_61d]))(var_no23, var_loco) /* location= on <var_no23:Prod>*/;
CONTINUE_label24: (void)0;
((void (*)(val*))(var20->class->vft[COLOR_abstract_collection__Iterator__next]))(var20) /* next on <var20:Iterator[nullable Object]>*/;
}
BREAK_label24: (void)0;
var25 = self->attrs[COLOR_parser__ComputeProdLocationVisitor___need_after_epsilons].val; /* _need_after_epsilons on <self:ComputeProdLocationVisitor> */
if (var25 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _need_after_epsilons");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 1776);
exit(1);
}
((void (*)(val*))(var25->class->vft[COLOR_abstract_collection__RemovableCollection__clear]))(var25) /* clear on <var25:Array[Prod]>*/;
} else {
}
} else {
/* <var_n:ANode> isa Prod */
cltype27 = type_parser_nodes__Prod.color;
idtype28 = type_parser_nodes__Prod.id;
if(cltype27 >= var_n->type->table_size) {
var26 = 0;
} else {
var26 = var_n->type->type_table[cltype27] == idtype28;
}
if (!var26) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 1779);
exit(1);
}
var29 = self->attrs[COLOR_parser__ComputeProdLocationVisitor___need_first_prods].val; /* _need_first_prods on <self:ComputeProdLocationVisitor> */
if (var29 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _need_first_prods");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 1780);
exit(1);
}
((void (*)(val*, val*))(var29->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var29, var_n) /* add on <var29:Array[Prod]>*/;
((void (*)(val*, val*))(var_n->class->vft[COLOR_parser_nodes__ANode__visit_all]))(var_n, self) /* visit_all on <var_n:ANode(Prod)>*/;
var30 = var_n->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <var_n:ANode(Prod)> */
var_startl = var30;
var31 = NULL;
if (var_startl == NULL) {
var32 = 0; /* is null */
} else {
var32 = 1; /* arg is null and recv is not */
}
if (var32){
var33 = self->attrs[COLOR_parser__ComputeProdLocationVisitor___last_location].val; /* _last_location on <self:ComputeProdLocationVisitor> */
var_endl = var33;
var34 = NULL;
if (var_endl == NULL) {
var35 = 0; /* is null */
} else {
var35 = 1; /* arg is null and recv is not */
}
if (!var35) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 1788);
exit(1);
}
var36 = NEW_location__Location(&type_location__Location);
var37 = ((val* (*)(val*))(var_startl->class->vft[COLOR_location__Location__file]))(var_startl) /* file on <var_startl:nullable Location(Location)>*/;
var38 = ((long (*)(val*))(var_startl->class->vft[COLOR_location__Location__line_start]))(var_startl) /* line_start on <var_startl:nullable Location(Location)>*/;
var39 = ((long (*)(val*))(var_endl->class->vft[COLOR_location__Location__line_end]))(var_endl) /* line_end on <var_endl:nullable Location(Location)>*/;
var40 = ((long (*)(val*))(var_startl->class->vft[COLOR_location__Location__column_start]))(var_startl) /* column_start on <var_startl:nullable Location(Location)>*/;
var41 = ((long (*)(val*))(var_endl->class->vft[COLOR_location__Location__column_end]))(var_endl) /* column_end on <var_endl:nullable Location(Location)>*/;
((void (*)(val*, val*, long, long, long, long))(var36->class->vft[COLOR_location__Location__init]))(var36, var37, var38, var39, var40, var41) /* init on <var36:Location>*/;
CHECK_NEW_location__Location(var36);
((void (*)(val*, val*))(var_n->class->vft[COLOR_parser_nodes__Prod__location_61d]))(var_n, var36) /* location= on <var_n:ANode(Prod)>*/;
var42 = self->attrs[COLOR_parser__ComputeProdLocationVisitor___need_after_epsilons].val; /* _need_after_epsilons on <self:ComputeProdLocationVisitor> */
if (var42 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _need_after_epsilons");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 1792);
exit(1);
}
var43 = ((short int (*)(val*))(var42->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var42) /* is_empty on <var42:Array[Prod]>*/;
var44 = !var43;
if (var44){
var45 = NEW_location__Location(&type_location__Location);
var46 = ((val* (*)(val*))(var_endl->class->vft[COLOR_location__Location__file]))(var_endl) /* file on <var_endl:nullable Location(Location)>*/;
var47 = ((long (*)(val*))(var_endl->class->vft[COLOR_location__Location__line_end]))(var_endl) /* line_end on <var_endl:nullable Location(Location)>*/;
var48 = ((long (*)(val*))(var_endl->class->vft[COLOR_location__Location__line_end]))(var_endl) /* line_end on <var_endl:nullable Location(Location)>*/;
var49 = ((long (*)(val*))(var_endl->class->vft[COLOR_location__Location__column_end]))(var_endl) /* column_end on <var_endl:nullable Location(Location)>*/;
var50 = ((long (*)(val*))(var_endl->class->vft[COLOR_location__Location__column_end]))(var_endl) /* column_end on <var_endl:nullable Location(Location)>*/;
((void (*)(val*, val*, long, long, long, long))(var45->class->vft[COLOR_location__Location__init]))(var45, var46, var47, var48, var49, var50) /* init on <var45:Location>*/;
CHECK_NEW_location__Location(var45);
var_loc51 = var45;
var52 = self->attrs[COLOR_parser__ComputeProdLocationVisitor___need_after_epsilons].val; /* _need_after_epsilons on <self:ComputeProdLocationVisitor> */
if (var52 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _need_after_epsilons");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 1794);
exit(1);
}
var53 = ((val* (*)(val*))(var52->class->vft[COLOR_abstract_collection__Collection__iterator]))(var52) /* iterator on <var52:Array[Prod]>*/;
for(;;) {
var54 = ((short int (*)(val*))(var53->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var53) /* is_ok on <var53:Iterator[nullable Object]>*/;
if(!var54) break;
var55 = ((val* (*)(val*))(var53->class->vft[COLOR_abstract_collection__Iterator__item]))(var53) /* item on <var53:Iterator[nullable Object]>*/;
var_no56 = var55;
((void (*)(val*, val*))(var_no56->class->vft[COLOR_parser_nodes__Prod__location_61d]))(var_no56, var_loc51) /* location= on <var_no56:Prod>*/;
CONTINUE_label57: (void)0;
((void (*)(val*))(var53->class->vft[COLOR_abstract_collection__Iterator__next]))(var53) /* next on <var53:Iterator[nullable Object]>*/;
}
BREAK_label57: (void)0;
var58 = self->attrs[COLOR_parser__ComputeProdLocationVisitor___need_after_epsilons].val; /* _need_after_epsilons on <self:ComputeProdLocationVisitor> */
if (var58 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _need_after_epsilons");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 1798);
exit(1);
}
((void (*)(val*))(var58->class->vft[COLOR_abstract_collection__RemovableCollection__clear]))(var58) /* clear on <var58:Array[Prod]>*/;
} else {
}
} else {
var59 = self->attrs[COLOR_parser__ComputeProdLocationVisitor___need_after_epsilons].val; /* _need_after_epsilons on <self:ComputeProdLocationVisitor> */
if (var59 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _need_after_epsilons");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 1802);
exit(1);
}
((void (*)(val*, val*))(var59->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var59, var_n) /* add on <var59:Array[Prod]>*/;
}
}
RET_LABEL:;
}
/* method parser#ComputeProdLocationVisitor#visit for (self: Object, ANode) */
void VIRTUAL_parser__ComputeProdLocationVisitor__visit(val* self, val* p0) {
parser__ComputeProdLocationVisitor__visit(self, p0);
RET_LABEL:;
}
/* method parser#ComputeProdLocationVisitor#init for (self: ComputeProdLocationVisitor) */
void parser__ComputeProdLocationVisitor__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Visitor__init]))(self) /* init on <self:ComputeProdLocationVisitor>*/;
RET_LABEL:;
}
/* method parser#ComputeProdLocationVisitor#init for (self: Object) */
void VIRTUAL_parser__ComputeProdLocationVisitor__init(val* self) {
parser__ComputeProdLocationVisitor__init(self);
RET_LABEL:;
}
/* method parser#ReduceAction#action for (self: ReduceAction, Parser) */
void parser__ReduceAction__action(val* self, val* p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "action", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 1812);
exit(1);
RET_LABEL:;
}
/* method parser#ReduceAction#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction__action(val* self, val* p0) {
parser__ReduceAction__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction#concat for (self: ReduceAction, Array[Object], Array[Object]): Array[Object] */
val* parser__ReduceAction__concat(val* self, val* p0, val* p1) {
val* var /* : Array[Object] */;
val* var_l1 /* var l1: Array[Object] */;
val* var_l2 /* var l2: Array[Object] */;
short int var1 /* : Bool */;
var_l1 = p0;
var_l2 = p1;
var1 = ((short int (*)(val*))(var_l1->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var_l1) /* is_empty on <var_l1:Array[Object]>*/;
if (var1){
var = var_l2;
goto RET_LABEL;
} else {
}
((void (*)(val*, val*))(var_l1->class->vft[COLOR_abstract_collection__Sequence__append]))(var_l1, var_l2) /* append on <var_l1:Array[Object]>*/;
var = var_l1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser#ReduceAction#concat for (self: Object, Array[Object], Array[Object]): Array[Object] */
val* VIRTUAL_parser__ReduceAction__concat(val* self, val* p0, val* p1) {
val* var /* : Array[Object] */;
val* var1 /* : Array[Object] */;
var1 = parser__ReduceAction__concat(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method parser#ReduceAction#init for (self: ReduceAction, Int) */
void parser__ReduceAction__init(val* self, long p0) {
long var_g /* var g: Int */;
var_g = p0;
self->attrs[COLOR_parser__ReduceAction___goto].l = var_g; /* _goto on <self:ReduceAction> */
RET_LABEL:;
}
/* method parser#ReduceAction#init for (self: Object, Int) */
void VIRTUAL_parser__ReduceAction__init(val* self, long p0) {
parser__ReduceAction__init(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction0#action for (self: ReduceAction0, Parser) */
void parser__ReduceAction0__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : Array[Object] */;
val* var_listnode3 /* var listnode3: Array[Object] */;
val* var2 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var3 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var4 /* : AModule */;
val* var5 /* : null */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
long var6 /* : Int */;
long var7 /* : Int */;
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
var_listnode4 = var2;
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var3->class->vft[COLOR_array__Array__init]))(var3) /* init on <var3:Array[Object]>*/;
CHECK_NEW_array__Array(var3);
var_listnode5 = var3;
var4 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
var5 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var4->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var4, var5, var_listnode3, var_listnode4, var_listnode5) /* init_amodule on <var4:AModule>*/;
CHECK_NEW_parser_nodes__AModule(var4);
var_pmodulenode1 = var4;
var_node_list = var_pmodulenode1;
var6 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction0> */
var7 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var6) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var7, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction0#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction0__action(val* self, val* p0) {
parser__ReduceAction0__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction1#action for (self: ReduceAction1, Parser) */
void parser__ReduceAction1__action(val* self, val* p0) {
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
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var_pmoduledeclnode2 /* var pmoduledeclnode2: nullable Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var6 /* : AModule */;
val* var_pmodulenode1 /* var pmodulenode1: nullable AModule */;
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
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var3->class->vft[COLOR_array__Array__init]))(var3) /* init on <var3:Array[Object]>*/;
CHECK_NEW_array__Array(var3);
var_listnode4 = var3;
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
CHECK_NEW_array__Array(var4);
var_listnode5 = var4;
var_pmoduledeclnode2 = var_nodearraylist1;
/* <var_pmoduledeclnode2:nullable Object> isa nullable AModuledecl */
cltype = type_nullable_parser_nodes__AModuledecl.color;
idtype = type_nullable_parser_nodes__AModuledecl.id;
if(var_pmoduledeclnode2 == NULL) {
var5 = 1;
} else {
if(cltype >= var_pmoduledeclnode2->type->table_size) {
var5 = 0;
} else {
var5 = var_pmoduledeclnode2->type->type_table[cltype] == idtype;
}
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 1851);
exit(1);
}
var6 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
((void (*)(val*, val*, val*, val*, val*))(var6->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var6, var_pmoduledeclnode2, var_listnode3, var_listnode4, var_listnode5) /* init_amodule on <var6:AModule>*/;
CHECK_NEW_parser_nodes__AModule(var6);
var_pmodulenode1 = var6;
var_node_list = var_pmodulenode1;
var7 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction1> */
var8 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var7) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var8, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction1#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction1__action(val* self, val* p0) {
parser__ReduceAction1__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction2#action for (self: ReduceAction2, Parser) */
void parser__ReduceAction2__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var2 /* : Array[Object] */;
val* var_listnode4 /* var listnode4: Array[Object] */;
val* var3 /* : Array[Object] */;
val* var_listnode5 /* var listnode5: Array[Object] */;
val* var4 /* : Array[Object] */;
val* var_listnode6 /* var listnode6: Array[Object] */;
val* var_listnode3 /* var listnode3: nullable Object */;
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
CHECK_NEW_array__Array(var2);
var_listnode4 = var2;
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var3->class->vft[COLOR_array__Array__init]))(var3) /* init on <var3:Array[Object]>*/;
CHECK_NEW_array__Array(var3);
var_listnode5 = var3;
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
CHECK_NEW_array__Array(var4);
var_listnode6 = var4;
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 1872);
exit(1);
}
var6 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction2>*/;
var_listnode4 = var6;
var7 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
var8 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var7->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var7, var8, var_listnode4, var_listnode5, var_listnode6) /* init_amodule on <var7:AModule>*/;
CHECK_NEW_parser_nodes__AModule(var7);
var_pmodulenode1 = var7;
var_node_list = var_pmodulenode1;
var9 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction2> */
var10 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var9) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var10, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction2#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction2__action(val* self, val* p0) {
parser__ReduceAction2__action(self, p0);
RET_LABEL:;
}
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
CHECK_NEW_array__Array(var3);
var_listnode4 = var3;
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
CHECK_NEW_array__Array(var4);
var_listnode5 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 1895);
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
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 1897);
exit(1);
}
var10 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction3>*/;
var_listnode4 = var10;
var11 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
((void (*)(val*, val*, val*, val*, val*))(var11->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var11, var_pmoduledeclnode2, var_listnode4, var_listnode5, var_listnode6) /* init_amodule on <var11:AModule>*/;
CHECK_NEW_parser_nodes__AModule(var11);
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
CHECK_NEW_array__Array(var2);
var_listnode3 = var2;
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var3->class->vft[COLOR_array__Array__init]))(var3) /* init on <var3:Array[Object]>*/;
CHECK_NEW_array__Array(var3);
var_listnode5 = var3;
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
CHECK_NEW_array__Array(var4);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 1919);
exit(1);
}
var6 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode4) /* concat on <self:ReduceAction4>*/;
var_listnode5 = var6;
var7 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
var8 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var7->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var7, var8, var_listnode3, var_listnode5, var_listnode6) /* init_amodule on <var7:AModule>*/;
CHECK_NEW_parser_nodes__AModule(var7);
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
CHECK_NEW_array__Array(var3);
var_listnode3 = var3;
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
CHECK_NEW_array__Array(var4);
var_listnode5 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 1942);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 1944);
exit(1);
}
var10 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode4) /* concat on <self:ReduceAction5>*/;
var_listnode5 = var10;
var11 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
((void (*)(val*, val*, val*, val*, val*))(var11->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var11, var_pmoduledeclnode2, var_listnode3, var_listnode5, var_listnode6) /* init_amodule on <var11:AModule>*/;
CHECK_NEW_parser_nodes__AModule(var11);
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
CHECK_NEW_array__Array(var3);
var_listnode4 = var3;
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
CHECK_NEW_array__Array(var4);
var_listnode6 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 1967);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 1970);
exit(1);
}
var11 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode6, var_listnode5) /* concat on <self:ReduceAction6>*/;
var_listnode6 = var11;
var12 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
var13 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var12->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var12, var13, var_listnode4, var_listnode6, var_listnode7) /* init_amodule on <var12:AModule>*/;
CHECK_NEW_parser_nodes__AModule(var12);
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
CHECK_NEW_array__Array(var4);
var_listnode4 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
var_listnode6 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
CHECK_NEW_array__Array(var6);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 1994);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 1996);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 1999);
exit(1);
}
var15 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode6, var_listnode5) /* concat on <self:ReduceAction7>*/;
var_listnode6 = var15;
var16 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
((void (*)(val*, val*, val*, val*, val*))(var16->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var16, var_pmoduledeclnode2, var_listnode4, var_listnode6, var_listnode7) /* init_amodule on <var16:AModule>*/;
CHECK_NEW_parser_nodes__AModule(var16);
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
CHECK_NEW_array__Array(var2);
var_listnode3 = var2;
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var3->class->vft[COLOR_array__Array__init]))(var3) /* init on <var3:Array[Object]>*/;
CHECK_NEW_array__Array(var3);
var_listnode4 = var3;
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
CHECK_NEW_array__Array(var4);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2021);
exit(1);
}
var6 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode6, var_listnode5) /* concat on <self:ReduceAction8>*/;
var_listnode6 = var6;
var7 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
var8 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var7->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var7, var8, var_listnode3, var_listnode4, var_listnode6) /* init_amodule on <var7:AModule>*/;
CHECK_NEW_parser_nodes__AModule(var7);
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
CHECK_NEW_array__Array(var3);
var_listnode3 = var3;
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
CHECK_NEW_array__Array(var4);
var_listnode4 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2044);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2046);
exit(1);
}
var10 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode6, var_listnode5) /* concat on <self:ReduceAction9>*/;
var_listnode6 = var10;
var11 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
((void (*)(val*, val*, val*, val*, val*))(var11->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var11, var_pmoduledeclnode2, var_listnode3, var_listnode4, var_listnode6) /* init_amodule on <var11:AModule>*/;
CHECK_NEW_parser_nodes__AModule(var11);
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
CHECK_NEW_array__Array(var3);
var_listnode4 = var3;
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
CHECK_NEW_array__Array(var4);
var_listnode5 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2069);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2072);
exit(1);
}
var11 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode7, var_listnode6) /* concat on <self:ReduceAction10>*/;
var_listnode7 = var11;
var12 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
var13 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var12->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var12, var13, var_listnode4, var_listnode5, var_listnode7) /* init_amodule on <var12:AModule>*/;
CHECK_NEW_parser_nodes__AModule(var12);
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
CHECK_NEW_array__Array(var4);
var_listnode4 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
var_listnode5 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
CHECK_NEW_array__Array(var6);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2096);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2098);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2101);
exit(1);
}
var15 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode7, var_listnode6) /* concat on <self:ReduceAction11>*/;
var_listnode7 = var15;
var16 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
((void (*)(val*, val*, val*, val*, val*))(var16->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var16, var_pmoduledeclnode2, var_listnode4, var_listnode5, var_listnode7) /* init_amodule on <var16:AModule>*/;
CHECK_NEW_parser_nodes__AModule(var16);
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
CHECK_NEW_array__Array(var3);
var_listnode3 = var3;
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
CHECK_NEW_array__Array(var4);
var_listnode5 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2124);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2127);
exit(1);
}
var11 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode7, var_listnode6) /* concat on <self:ReduceAction12>*/;
var_listnode7 = var11;
var12 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
var13 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var12->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var12, var13, var_listnode3, var_listnode5, var_listnode7) /* init_amodule on <var12:AModule>*/;
CHECK_NEW_parser_nodes__AModule(var12);
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
CHECK_NEW_array__Array(var4);
var_listnode3 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
var_listnode5 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
CHECK_NEW_array__Array(var6);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2151);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2153);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2156);
exit(1);
}
var15 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode7, var_listnode6) /* concat on <self:ReduceAction13>*/;
var_listnode7 = var15;
var16 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
((void (*)(val*, val*, val*, val*, val*))(var16->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var16, var_pmoduledeclnode2, var_listnode3, var_listnode5, var_listnode7) /* init_amodule on <var16:AModule>*/;
CHECK_NEW_parser_nodes__AModule(var16);
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
CHECK_NEW_array__Array(var4);
var_listnode4 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
var_listnode6 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
CHECK_NEW_array__Array(var6);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2180);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2183);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2186);
exit(1);
}
var16 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction14>*/;
var_listnode8 = var16;
var17 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
var18 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var17->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var17, var18, var_listnode4, var_listnode6, var_listnode8) /* init_amodule on <var17:AModule>*/;
CHECK_NEW_parser_nodes__AModule(var17);
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
CHECK_NEW_array__Array(var5);
var_listnode4 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
CHECK_NEW_array__Array(var6);
var_listnode6 = var6;
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
CHECK_NEW_array__Array(var7);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2211);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2213);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2216);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2219);
exit(1);
}
var20 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction15>*/;
var_listnode8 = var20;
var21 = NEW_parser_nodes__AModule(&type_parser_nodes__AModule);
((void (*)(val*, val*, val*, val*, val*))(var21->class->vft[COLOR_parser_prod__AModule__init_amodule]))(var21, var_pmoduledeclnode2, var_listnode4, var_listnode6, var_listnode8) /* init_amodule on <var21:AModule>*/;
CHECK_NEW_parser_nodes__AModule(var21);
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
CHECK_NEW_array__Array(var2);
var_listnode3 = var2;
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var3->class->vft[COLOR_array__Array__init]))(var3) /* init on <var3:Array[Object]>*/;
CHECK_NEW_array__Array(var3);
var_listnode4 = var3;
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
CHECK_NEW_array__Array(var4);
var_listnode8 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2242);
exit(1);
}
var7 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode7, var_listnode6) /* concat on <self:ReduceAction16>*/;
var_listnode7 = var7;
var8 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var8->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var8, var_listnode7) /* init_atopclassdef on <var8:ATopClassdef>*/;
CHECK_NEW_parser_nodes__ATopClassdef(var8);
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
CHECK_NEW_parser_nodes__AModule(var11);
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
CHECK_NEW_array__Array(var3);
var_listnode3 = var3;
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
CHECK_NEW_array__Array(var4);
var_listnode4 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2271);
exit(1);
}
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
CHECK_NEW_array__Array(var7);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2274);
exit(1);
}
var11 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode7, var_listnode6) /* concat on <self:ReduceAction17>*/;
var_listnode7 = var11;
var12 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var12->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var12, var_listnode7) /* init_atopclassdef on <var12:ATopClassdef>*/;
CHECK_NEW_parser_nodes__ATopClassdef(var12);
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
CHECK_NEW_parser_nodes__AModule(var15);
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
CHECK_NEW_array__Array(var3);
var_listnode4 = var3;
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
CHECK_NEW_array__Array(var4);
var_listnode5 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2303);
exit(1);
}
var7 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction18>*/;
var_listnode4 = var7;
var8 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var8->class->vft[COLOR_array__Array__init]))(var8) /* init on <var8:Array[Object]>*/;
CHECK_NEW_array__Array(var8);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2307);
exit(1);
}
var12 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction18>*/;
var_listnode8 = var12;
var13 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var13->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var13, var_listnode8) /* init_atopclassdef on <var13:ATopClassdef>*/;
CHECK_NEW_parser_nodes__ATopClassdef(var13);
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
CHECK_NEW_parser_nodes__AModule(var16);
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
CHECK_NEW_array__Array(var4);
var_listnode4 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
var_listnode5 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
CHECK_NEW_array__Array(var6);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2337);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2339);
exit(1);
}
var11 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction19>*/;
var_listnode4 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2343);
exit(1);
}
var16 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction19>*/;
var_listnode8 = var16;
var17 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var17->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var17, var_listnode8) /* init_atopclassdef on <var17:ATopClassdef>*/;
CHECK_NEW_parser_nodes__ATopClassdef(var17);
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
CHECK_NEW_parser_nodes__AModule(var20);
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
CHECK_NEW_array__Array(var3);
var_listnode3 = var3;
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
CHECK_NEW_array__Array(var4);
var_listnode5 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2372);
exit(1);
}
var7 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode4) /* concat on <self:ReduceAction20>*/;
var_listnode5 = var7;
var8 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var8->class->vft[COLOR_array__Array__init]))(var8) /* init on <var8:Array[Object]>*/;
CHECK_NEW_array__Array(var8);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2376);
exit(1);
}
var12 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction20>*/;
var_listnode8 = var12;
var13 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var13->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var13, var_listnode8) /* init_atopclassdef on <var13:ATopClassdef>*/;
CHECK_NEW_parser_nodes__ATopClassdef(var13);
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
CHECK_NEW_parser_nodes__AModule(var16);
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
CHECK_NEW_array__Array(var4);
var_listnode3 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
var_listnode5 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
CHECK_NEW_array__Array(var6);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2406);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2408);
exit(1);
}
var11 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode4) /* concat on <self:ReduceAction21>*/;
var_listnode5 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2412);
exit(1);
}
var16 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction21>*/;
var_listnode8 = var16;
var17 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var17->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var17, var_listnode8) /* init_atopclassdef on <var17:ATopClassdef>*/;
CHECK_NEW_parser_nodes__ATopClassdef(var17);
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
CHECK_NEW_parser_nodes__AModule(var20);
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
CHECK_NEW_array__Array(var4);
var_listnode4 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
var_listnode6 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
CHECK_NEW_array__Array(var6);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2442);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2445);
exit(1);
}
var12 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode6, var_listnode5) /* concat on <self:ReduceAction22>*/;
var_listnode6 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2449);
exit(1);
}
var17 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode9, var_listnode8) /* concat on <self:ReduceAction22>*/;
var_listnode9 = var17;
var18 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var18->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var18, var_listnode9) /* init_atopclassdef on <var18:ATopClassdef>*/;
CHECK_NEW_parser_nodes__ATopClassdef(var18);
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
CHECK_NEW_parser_nodes__AModule(var21);
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
CHECK_NEW_array__Array(var5);
var_listnode4 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
CHECK_NEW_array__Array(var6);
var_listnode6 = var6;
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
CHECK_NEW_array__Array(var7);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2480);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2482);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2485);
exit(1);
}
var16 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode6, var_listnode5) /* concat on <self:ReduceAction23>*/;
var_listnode6 = var16;
var17 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var17->class->vft[COLOR_array__Array__init]))(var17) /* init on <var17:Array[Object]>*/;
CHECK_NEW_array__Array(var17);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2489);
exit(1);
}
var21 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode9, var_listnode8) /* concat on <self:ReduceAction23>*/;
var_listnode9 = var21;
var22 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var22->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var22, var_listnode9) /* init_atopclassdef on <var22:ATopClassdef>*/;
CHECK_NEW_parser_nodes__ATopClassdef(var22);
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
CHECK_NEW_parser_nodes__AModule(var25);
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
CHECK_NEW_array__Array(var3);
var_listnode3 = var3;
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
CHECK_NEW_array__Array(var4);
var_listnode4 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2518);
exit(1);
}
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
CHECK_NEW_array__Array(var7);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2521);
exit(1);
}
var11 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction24>*/;
var_listnode8 = var11;
var12 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var12->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var12, var_listnode8) /* init_atopclassdef on <var12:ATopClassdef>*/;
CHECK_NEW_parser_nodes__ATopClassdef(var12);
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
CHECK_NEW_parser_nodes__AModule(var16);
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
CHECK_NEW_array__Array(var4);
var_listnode3 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
var_listnode4 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
CHECK_NEW_array__Array(var6);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2552);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2554);
exit(1);
}
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var11->class->vft[COLOR_array__Array__init]))(var11) /* init on <var11:Array[Object]>*/;
CHECK_NEW_array__Array(var11);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2557);
exit(1);
}
var15 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction25>*/;
var_listnode8 = var15;
var16 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var16->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var16, var_listnode8) /* init_atopclassdef on <var16:ATopClassdef>*/;
CHECK_NEW_parser_nodes__ATopClassdef(var16);
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
CHECK_NEW_parser_nodes__AModule(var20);
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
CHECK_NEW_array__Array(var4);
var_listnode4 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
var_listnode5 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
CHECK_NEW_array__Array(var6);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2588);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2591);
exit(1);
}
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2594);
exit(1);
}
var16 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode9, var_listnode8) /* concat on <self:ReduceAction26>*/;
var_listnode9 = var16;
var17 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var17->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var17, var_listnode9) /* init_atopclassdef on <var17:ATopClassdef>*/;
CHECK_NEW_parser_nodes__ATopClassdef(var17);
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
CHECK_NEW_parser_nodes__AModule(var21);
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
CHECK_NEW_array__Array(var5);
var_listnode4 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
CHECK_NEW_array__Array(var6);
var_listnode5 = var6;
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
CHECK_NEW_array__Array(var7);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2626);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2628);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2631);
exit(1);
}
var16 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var16->class->vft[COLOR_array__Array__init]))(var16) /* init on <var16:Array[Object]>*/;
CHECK_NEW_array__Array(var16);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2634);
exit(1);
}
var20 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode9, var_listnode8) /* concat on <self:ReduceAction27>*/;
var_listnode9 = var20;
var21 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var21->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var21, var_listnode9) /* init_atopclassdef on <var21:ATopClassdef>*/;
CHECK_NEW_parser_nodes__ATopClassdef(var21);
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
CHECK_NEW_parser_nodes__AModule(var25);
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
CHECK_NEW_array__Array(var4);
var_listnode3 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
var_listnode5 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
CHECK_NEW_array__Array(var6);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2665);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2668);
exit(1);
}
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2671);
exit(1);
}
var16 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode9, var_listnode8) /* concat on <self:ReduceAction28>*/;
var_listnode9 = var16;
var17 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var17->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var17, var_listnode9) /* init_atopclassdef on <var17:ATopClassdef>*/;
CHECK_NEW_parser_nodes__ATopClassdef(var17);
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
CHECK_NEW_parser_nodes__AModule(var21);
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
CHECK_NEW_array__Array(var5);
var_listnode3 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
CHECK_NEW_array__Array(var6);
var_listnode5 = var6;
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
CHECK_NEW_array__Array(var7);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2703);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2705);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2708);
exit(1);
}
var16 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var16->class->vft[COLOR_array__Array__init]))(var16) /* init on <var16:Array[Object]>*/;
CHECK_NEW_array__Array(var16);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2711);
exit(1);
}
var20 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode9, var_listnode8) /* concat on <self:ReduceAction29>*/;
var_listnode9 = var20;
var21 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var21->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var21, var_listnode9) /* init_atopclassdef on <var21:ATopClassdef>*/;
CHECK_NEW_parser_nodes__ATopClassdef(var21);
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
CHECK_NEW_parser_nodes__AModule(var25);
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
CHECK_NEW_array__Array(var5);
var_listnode4 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
CHECK_NEW_array__Array(var6);
var_listnode6 = var6;
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
CHECK_NEW_array__Array(var7);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2743);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2746);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2749);
exit(1);
}
var17 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var17->class->vft[COLOR_array__Array__init]))(var17) /* init on <var17:Array[Object]>*/;
CHECK_NEW_array__Array(var17);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2752);
exit(1);
}
var21 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode10, var_listnode9) /* concat on <self:ReduceAction30>*/;
var_listnode10 = var21;
var22 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var22->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var22, var_listnode10) /* init_atopclassdef on <var22:ATopClassdef>*/;
CHECK_NEW_parser_nodes__ATopClassdef(var22);
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
CHECK_NEW_parser_nodes__AModule(var26);
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
CHECK_NEW_array__Array(var6);
var_listnode4 = var6;
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
CHECK_NEW_array__Array(var7);
var_listnode6 = var7;
var8 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var8->class->vft[COLOR_array__Array__init]))(var8) /* init on <var8:Array[Object]>*/;
CHECK_NEW_array__Array(var8);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2785);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2787);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2790);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2793);
exit(1);
}
var21 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var21->class->vft[COLOR_array__Array__init]))(var21) /* init on <var21:Array[Object]>*/;
CHECK_NEW_array__Array(var21);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2796);
exit(1);
}
var25 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode10, var_listnode9) /* concat on <self:ReduceAction31>*/;
var_listnode10 = var25;
var26 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var26->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var26, var_listnode10) /* init_atopclassdef on <var26:ATopClassdef>*/;
CHECK_NEW_parser_nodes__ATopClassdef(var26);
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
CHECK_NEW_parser_nodes__AModule(var30);
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
CHECK_NEW_array__Array(var2);
var_listnode3 = var2;
var3 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var3->class->vft[COLOR_array__Array__init]))(var3) /* init on <var3:Array[Object]>*/;
CHECK_NEW_array__Array(var3);
var_listnode4 = var3;
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
CHECK_NEW_array__Array(var4);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2825);
exit(1);
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
CHECK_NEW_parser_nodes__AModule(var8);
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
CHECK_NEW_array__Array(var3);
var_listnode3 = var3;
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
CHECK_NEW_array__Array(var4);
var_listnode4 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2850);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2852);
exit(1);
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
CHECK_NEW_parser_nodes__AModule(var12);
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
CHECK_NEW_array__Array(var3);
var_listnode4 = var3;
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
CHECK_NEW_array__Array(var4);
var_listnode5 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2877);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2880);
exit(1);
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
CHECK_NEW_parser_nodes__AModule(var13);
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
CHECK_NEW_array__Array(var4);
var_listnode4 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
var_listnode5 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
CHECK_NEW_array__Array(var6);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2906);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2908);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2911);
exit(1);
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
CHECK_NEW_parser_nodes__AModule(var17);
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
CHECK_NEW_array__Array(var3);
var_listnode3 = var3;
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
CHECK_NEW_array__Array(var4);
var_listnode5 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2936);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2939);
exit(1);
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
CHECK_NEW_parser_nodes__AModule(var13);
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
CHECK_NEW_array__Array(var4);
var_listnode3 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
var_listnode5 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
CHECK_NEW_array__Array(var6);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2965);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2967);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2970);
exit(1);
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
CHECK_NEW_parser_nodes__AModule(var17);
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
CHECK_NEW_array__Array(var4);
var_listnode4 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
var_listnode6 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
CHECK_NEW_array__Array(var6);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2996);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 2999);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3002);
exit(1);
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
CHECK_NEW_parser_nodes__AModule(var18);
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
CHECK_NEW_array__Array(var5);
var_listnode4 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
CHECK_NEW_array__Array(var6);
var_listnode6 = var6;
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
CHECK_NEW_array__Array(var7);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3029);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3031);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3034);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3037);
exit(1);
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
CHECK_NEW_parser_nodes__AModule(var22);
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
CHECK_NEW_array__Array(var3);
var_listnode3 = var3;
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
CHECK_NEW_array__Array(var4);
var_listnode4 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3062);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3064);
exit(1);
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
CHECK_NEW_parser_nodes__AModule(var13);
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
CHECK_NEW_array__Array(var4);
var_listnode3 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
var_listnode4 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
CHECK_NEW_array__Array(var6);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3091);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3093);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3095);
exit(1);
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
CHECK_NEW_parser_nodes__AModule(var17);
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
CHECK_NEW_array__Array(var4);
var_listnode4 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
var_listnode5 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
CHECK_NEW_array__Array(var6);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3122);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3125);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3127);
exit(1);
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
CHECK_NEW_parser_nodes__AModule(var18);
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
CHECK_NEW_array__Array(var5);
var_listnode4 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
CHECK_NEW_array__Array(var6);
var_listnode5 = var6;
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
CHECK_NEW_array__Array(var7);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3155);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3157);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3160);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3162);
exit(1);
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
CHECK_NEW_parser_nodes__AModule(var22);
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
CHECK_NEW_array__Array(var4);
var_listnode3 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
var_listnode5 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
CHECK_NEW_array__Array(var6);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3189);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3192);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3194);
exit(1);
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
CHECK_NEW_parser_nodes__AModule(var18);
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
CHECK_NEW_array__Array(var5);
var_listnode3 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
CHECK_NEW_array__Array(var6);
var_listnode5 = var6;
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
CHECK_NEW_array__Array(var7);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3222);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3224);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3227);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3229);
exit(1);
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
CHECK_NEW_parser_nodes__AModule(var22);
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
CHECK_NEW_array__Array(var5);
var_listnode4 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
CHECK_NEW_array__Array(var6);
var_listnode6 = var6;
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
CHECK_NEW_array__Array(var7);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3257);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3260);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3263);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3265);
exit(1);
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
CHECK_NEW_parser_nodes__AModule(var23);
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
CHECK_NEW_array__Array(var6);
var_listnode4 = var6;
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
CHECK_NEW_array__Array(var7);
var_listnode6 = var7;
var8 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var8->class->vft[COLOR_array__Array__init]))(var8) /* init on <var8:Array[Object]>*/;
CHECK_NEW_array__Array(var8);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3294);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3296);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3299);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3302);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3304);
exit(1);
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
CHECK_NEW_parser_nodes__AModule(var27);
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
CHECK_NEW_array__Array(var3);
var_listnode3 = var3;
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[Object]>*/;
CHECK_NEW_array__Array(var4);
var_listnode4 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
var_listnode9 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
CHECK_NEW_array__Array(var6);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3331);
exit(1);
}
var8 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode7, var_listnode6) /* concat on <self:ReduceAction48>*/;
var_listnode7 = var8;
var9 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var9->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var9, var_listnode7) /* init_atopclassdef on <var9:ATopClassdef>*/;
CHECK_NEW_parser_nodes__ATopClassdef(var9);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3337);
exit(1);
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
CHECK_NEW_parser_nodes__AModule(var17);
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
CHECK_NEW_array__Array(var4);
var_listnode3 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
var_listnode4 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
CHECK_NEW_array__Array(var6);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3366);
exit(1);
}
var8 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var8->class->vft[COLOR_array__Array__init]))(var8) /* init on <var8:Array[Object]>*/;
CHECK_NEW_array__Array(var8);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3369);
exit(1);
}
var12 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode7, var_listnode6) /* concat on <self:ReduceAction49>*/;
var_listnode7 = var12;
var13 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var13->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var13, var_listnode7) /* init_atopclassdef on <var13:ATopClassdef>*/;
CHECK_NEW_parser_nodes__ATopClassdef(var13);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3375);
exit(1);
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
CHECK_NEW_parser_nodes__AModule(var21);
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
CHECK_NEW_array__Array(var4);
var_listnode4 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
var_listnode5 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
CHECK_NEW_array__Array(var6);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3404);
exit(1);
}
var8 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction50>*/;
var_listnode4 = var8;
var9 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var9->class->vft[COLOR_array__Array__init]))(var9) /* init on <var9:Array[Object]>*/;
CHECK_NEW_array__Array(var9);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3408);
exit(1);
}
var13 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction50>*/;
var_listnode8 = var13;
var14 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var14->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var14, var_listnode8) /* init_atopclassdef on <var14:ATopClassdef>*/;
CHECK_NEW_parser_nodes__ATopClassdef(var14);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3414);
exit(1);
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
CHECK_NEW_parser_nodes__AModule(var22);
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
CHECK_NEW_array__Array(var5);
var_listnode4 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
CHECK_NEW_array__Array(var6);
var_listnode5 = var6;
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
CHECK_NEW_array__Array(var7);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3444);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3446);
exit(1);
}
var12 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode4, var_listnode3) /* concat on <self:ReduceAction51>*/;
var_listnode4 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3450);
exit(1);
}
var17 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction51>*/;
var_listnode8 = var17;
var18 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var18->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var18, var_listnode8) /* init_atopclassdef on <var18:ATopClassdef>*/;
CHECK_NEW_parser_nodes__ATopClassdef(var18);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3456);
exit(1);
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
CHECK_NEW_parser_nodes__AModule(var26);
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
CHECK_NEW_array__Array(var4);
var_listnode3 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
var_listnode5 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
CHECK_NEW_array__Array(var6);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3485);
exit(1);
}
var8 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode4) /* concat on <self:ReduceAction52>*/;
var_listnode5 = var8;
var9 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var9->class->vft[COLOR_array__Array__init]))(var9) /* init on <var9:Array[Object]>*/;
CHECK_NEW_array__Array(var9);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3489);
exit(1);
}
var13 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction52>*/;
var_listnode8 = var13;
var14 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var14->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var14, var_listnode8) /* init_atopclassdef on <var14:ATopClassdef>*/;
CHECK_NEW_parser_nodes__ATopClassdef(var14);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3495);
exit(1);
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
CHECK_NEW_parser_nodes__AModule(var22);
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
CHECK_NEW_array__Array(var5);
var_listnode3 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
CHECK_NEW_array__Array(var6);
var_listnode5 = var6;
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
CHECK_NEW_array__Array(var7);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3525);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3527);
exit(1);
}
var12 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode5, var_listnode4) /* concat on <self:ReduceAction53>*/;
var_listnode5 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3531);
exit(1);
}
var17 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction53>*/;
var_listnode8 = var17;
var18 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var18->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var18, var_listnode8) /* init_atopclassdef on <var18:ATopClassdef>*/;
CHECK_NEW_parser_nodes__ATopClassdef(var18);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3537);
exit(1);
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
CHECK_NEW_parser_nodes__AModule(var26);
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
CHECK_NEW_array__Array(var5);
var_listnode4 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
CHECK_NEW_array__Array(var6);
var_listnode6 = var6;
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
CHECK_NEW_array__Array(var7);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3567);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3570);
exit(1);
}
var13 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode6, var_listnode5) /* concat on <self:ReduceAction54>*/;
var_listnode6 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
CHECK_NEW_array__Array(var14);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3574);
exit(1);
}
var18 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode9, var_listnode8) /* concat on <self:ReduceAction54>*/;
var_listnode9 = var18;
var19 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var19->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var19, var_listnode9) /* init_atopclassdef on <var19:ATopClassdef>*/;
CHECK_NEW_parser_nodes__ATopClassdef(var19);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3580);
exit(1);
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
CHECK_NEW_parser_nodes__AModule(var27);
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
CHECK_NEW_array__Array(var6);
var_listnode4 = var6;
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
CHECK_NEW_array__Array(var7);
var_listnode6 = var7;
var8 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var8->class->vft[COLOR_array__Array__init]))(var8) /* init on <var8:Array[Object]>*/;
CHECK_NEW_array__Array(var8);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3611);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3613);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3616);
exit(1);
}
var17 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode6, var_listnode5) /* concat on <self:ReduceAction55>*/;
var_listnode6 = var17;
var18 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var18->class->vft[COLOR_array__Array__init]))(var18) /* init on <var18:Array[Object]>*/;
CHECK_NEW_array__Array(var18);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3620);
exit(1);
}
var22 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode9, var_listnode8) /* concat on <self:ReduceAction55>*/;
var_listnode9 = var22;
var23 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var23->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var23, var_listnode9) /* init_atopclassdef on <var23:ATopClassdef>*/;
CHECK_NEW_parser_nodes__ATopClassdef(var23);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3626);
exit(1);
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
CHECK_NEW_parser_nodes__AModule(var31);
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
CHECK_NEW_array__Array(var4);
var_listnode3 = var4;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var5->class->vft[COLOR_array__Array__init]))(var5) /* init on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
var_listnode4 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
CHECK_NEW_array__Array(var6);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3655);
exit(1);
}
var8 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var8->class->vft[COLOR_array__Array__init]))(var8) /* init on <var8:Array[Object]>*/;
CHECK_NEW_array__Array(var8);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3658);
exit(1);
}
var12 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction56>*/;
var_listnode8 = var12;
var13 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var13->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var13, var_listnode8) /* init_atopclassdef on <var13:ATopClassdef>*/;
CHECK_NEW_parser_nodes__ATopClassdef(var13);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3664);
exit(1);
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
CHECK_NEW_parser_nodes__AModule(var22);
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
CHECK_NEW_array__Array(var5);
var_listnode3 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
CHECK_NEW_array__Array(var6);
var_listnode4 = var6;
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
CHECK_NEW_array__Array(var7);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3695);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3697);
exit(1);
}
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3700);
exit(1);
}
var16 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction57>*/;
var_listnode8 = var16;
var17 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var17->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var17, var_listnode8) /* init_atopclassdef on <var17:ATopClassdef>*/;
CHECK_NEW_parser_nodes__ATopClassdef(var17);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3706);
exit(1);
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
CHECK_NEW_parser_nodes__AModule(var26);
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
CHECK_NEW_array__Array(var5);
var_listnode4 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
CHECK_NEW_array__Array(var6);
var_listnode5 = var6;
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
CHECK_NEW_array__Array(var7);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3737);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3740);
exit(1);
}
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3743);
exit(1);
}
var17 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode9, var_listnode8) /* concat on <self:ReduceAction58>*/;
var_listnode9 = var17;
var18 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var18->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var18, var_listnode9) /* init_atopclassdef on <var18:ATopClassdef>*/;
CHECK_NEW_parser_nodes__ATopClassdef(var18);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3749);
exit(1);
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
CHECK_NEW_parser_nodes__AModule(var27);
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
CHECK_NEW_array__Array(var6);
var_listnode4 = var6;
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
CHECK_NEW_array__Array(var7);
var_listnode5 = var7;
var8 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var8->class->vft[COLOR_array__Array__init]))(var8) /* init on <var8:Array[Object]>*/;
CHECK_NEW_array__Array(var8);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3781);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3783);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3786);
exit(1);
}
var17 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var17->class->vft[COLOR_array__Array__init]))(var17) /* init on <var17:Array[Object]>*/;
CHECK_NEW_array__Array(var17);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3789);
exit(1);
}
var21 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode9, var_listnode8) /* concat on <self:ReduceAction59>*/;
var_listnode9 = var21;
var22 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var22->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var22, var_listnode9) /* init_atopclassdef on <var22:ATopClassdef>*/;
CHECK_NEW_parser_nodes__ATopClassdef(var22);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3795);
exit(1);
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
CHECK_NEW_parser_nodes__AModule(var31);
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
CHECK_NEW_array__Array(var5);
var_listnode3 = var5;
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var6->class->vft[COLOR_array__Array__init]))(var6) /* init on <var6:Array[Object]>*/;
CHECK_NEW_array__Array(var6);
var_listnode5 = var6;
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
CHECK_NEW_array__Array(var7);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3826);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3829);
exit(1);
}
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3832);
exit(1);
}
var17 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode9, var_listnode8) /* concat on <self:ReduceAction60>*/;
var_listnode9 = var17;
var18 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var18->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var18, var_listnode9) /* init_atopclassdef on <var18:ATopClassdef>*/;
CHECK_NEW_parser_nodes__ATopClassdef(var18);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3838);
exit(1);
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
CHECK_NEW_parser_nodes__AModule(var27);
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
CHECK_NEW_array__Array(var6);
var_listnode3 = var6;
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
CHECK_NEW_array__Array(var7);
var_listnode5 = var7;
var8 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var8->class->vft[COLOR_array__Array__init]))(var8) /* init on <var8:Array[Object]>*/;
CHECK_NEW_array__Array(var8);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3870);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3872);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3875);
exit(1);
}
var17 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var17->class->vft[COLOR_array__Array__init]))(var17) /* init on <var17:Array[Object]>*/;
CHECK_NEW_array__Array(var17);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3878);
exit(1);
}
var21 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode9, var_listnode8) /* concat on <self:ReduceAction61>*/;
var_listnode9 = var21;
var22 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var22->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var22, var_listnode9) /* init_atopclassdef on <var22:ATopClassdef>*/;
CHECK_NEW_parser_nodes__ATopClassdef(var22);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3884);
exit(1);
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
CHECK_NEW_parser_nodes__AModule(var31);
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
CHECK_NEW_array__Array(var6);
var_listnode4 = var6;
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[Object]>*/;
CHECK_NEW_array__Array(var7);
var_listnode6 = var7;
var8 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var8->class->vft[COLOR_array__Array__init]))(var8) /* init on <var8:Array[Object]>*/;
CHECK_NEW_array__Array(var8);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3916);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3919);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3922);
exit(1);
}
var18 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var18->class->vft[COLOR_array__Array__init]))(var18) /* init on <var18:Array[Object]>*/;
CHECK_NEW_array__Array(var18);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3925);
exit(1);
}
var22 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode10, var_listnode9) /* concat on <self:ReduceAction62>*/;
var_listnode10 = var22;
var23 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var23->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var23, var_listnode10) /* init_atopclassdef on <var23:ATopClassdef>*/;
CHECK_NEW_parser_nodes__ATopClassdef(var23);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3931);
exit(1);
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
CHECK_NEW_parser_nodes__AModule(var32);
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
CHECK_NEW_array__Array(var7);
var_listnode4 = var7;
var8 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var8->class->vft[COLOR_array__Array__init]))(var8) /* init on <var8:Array[Object]>*/;
CHECK_NEW_array__Array(var8);
var_listnode6 = var8;
var9 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var9->class->vft[COLOR_array__Array__init]))(var9) /* init on <var9:Array[Object]>*/;
CHECK_NEW_array__Array(var9);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3964);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3966);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3969);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3972);
exit(1);
}
var22 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var22->class->vft[COLOR_array__Array__init]))(var22) /* init on <var22:Array[Object]>*/;
CHECK_NEW_array__Array(var22);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3975);
exit(1);
}
var26 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode10, var_listnode9) /* concat on <self:ReduceAction63>*/;
var_listnode10 = var26;
var27 = NEW_parser_nodes__ATopClassdef(&type_parser_nodes__ATopClassdef);
((void (*)(val*, val*))(var27->class->vft[COLOR_parser_prod__ATopClassdef__init_atopclassdef]))(var27, var_listnode10) /* init_atopclassdef on <var27:ATopClassdef>*/;
CHECK_NEW_parser_nodes__ATopClassdef(var27);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 3981);
exit(1);
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
CHECK_NEW_parser_nodes__AModule(var36);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4010);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4012);
exit(1);
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
fprintf(stderr, " (%s:%d)\n", "src/parser/parser.nit", 4014);
exit(1);
}
var13 = NEW_parser_nodes__AModuledecl(&type_parser_nodes__AModuledecl);
var14 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var13->class->vft[COLOR_parser_prod__AModuledecl__init_amoduledecl]))(var13, var_pdocnode2, var_tkwmodulenode3, var_pmodulenamenode4, var14) /* init_amoduledecl on <var13:AModuledecl>*/;
CHECK_NEW_parser_nodes__AModuledecl(var13);
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
