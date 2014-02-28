#include "parser_prod.sep.0.h"
/* method parser_prod#AModule#empty_init for (self: AModule) */
void parser_prod__AModule__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AModule#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AModule__empty_init(val* self) {
parser_prod__AModule__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AModule#init_amodule for (self: AModule, nullable AModuledecl, Collection[Object], Collection[Object], Collection[Object]) */
void parser_prod__AModule__init_amodule(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_moduledecl /* var n_moduledecl: nullable AModuledecl */;
val* var_n_imports /* var n_imports: Collection[Object] */;
val* var_n_extern_code_blocks /* var n_extern_code_blocks: Collection[Object] */;
val* var_n_classdefs /* var n_classdefs: Collection[Object] */;
val* var /* : null */;
short int var1 /* : Bool */;
val* var2 /* : Iterator[nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_n /* var n: Object */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var6 /* : ANodes[AImport] */;
val* var7 /* : Iterator[nullable Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_n10 /* var n: Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : ANodes[AExternCodeBlock] */;
val* var16 /* : Iterator[nullable Object] */;
short int var17 /* : Bool */;
val* var18 /* : nullable Object */;
val* var_n19 /* var n: Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var23 /* : ANodes[AClassdef] */;
var_n_moduledecl = p0;
var_n_imports = p1;
var_n_extern_code_blocks = p2;
var_n_classdefs = p3;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AModule__empty_init]))(self) /* empty_init on <self:AModule>*/;
self->attrs[COLOR_parser_nodes__AModule___n_moduledecl].val = var_n_moduledecl; /* _n_moduledecl on <self:AModule> */
var = NULL;
if (var_n_moduledecl == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_moduledecl->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_moduledecl, self) /* parent= on <var_n_moduledecl:nullable AModuledecl(AModuledecl)>*/;
} else {
}
var2 = ((val* (*)(val*))(var_n_imports->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_n_imports) /* iterator on <var_n_imports:Collection[Object]>*/;
for(;;) {
var3 = ((short int (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var2) /* is_ok on <var2:Iterator[nullable Object]>*/;
if(!var3) break;
var4 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__item]))(var2) /* item on <var2:Iterator[nullable Object]>*/;
var_n = var4;
/* <var_n:Object> isa AImport */
cltype = type_parser_nodes__AImport.color;
idtype = type_parser_nodes__AImport.id;
if(cltype >= var_n->type->table_size) {
var5 = 0;
} else {
var5 = var_n->type->type_table[cltype] == idtype;
}
if (!var5) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 25);
show_backtrace(1);
}
var6 = self->attrs[COLOR_parser_nodes__AModule___n_imports].val; /* _n_imports on <self:AModule> */
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_imports");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 26);
show_backtrace(1);
}
((void (*)(val*, val*))(var6->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var6, var_n) /* add on <var6:ANodes[AImport]>*/;
((void (*)(val*, val*))(var_n->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n, self) /* parent= on <var_n:Object(AImport)>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__next]))(var2) /* next on <var2:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var7 = ((val* (*)(val*))(var_n_extern_code_blocks->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_n_extern_code_blocks) /* iterator on <var_n_extern_code_blocks:Collection[Object]>*/;
for(;;) {
var8 = ((short int (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var7) /* is_ok on <var7:Iterator[nullable Object]>*/;
if(!var8) break;
var9 = ((val* (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__item]))(var7) /* item on <var7:Iterator[nullable Object]>*/;
var_n10 = var9;
/* <var_n10:Object> isa AExternCodeBlock */
cltype12 = type_parser_nodes__AExternCodeBlock.color;
idtype13 = type_parser_nodes__AExternCodeBlock.id;
if(cltype12 >= var_n10->type->table_size) {
var11 = 0;
} else {
var11 = var_n10->type->type_table[cltype12] == idtype13;
}
if (!var11) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 30);
show_backtrace(1);
}
var14 = self->attrs[COLOR_parser_nodes__AModule___n_extern_code_blocks].val; /* _n_extern_code_blocks on <self:AModule> */
if (var14 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_extern_code_blocks");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 31);
show_backtrace(1);
}
((void (*)(val*, val*))(var14->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var14, var_n10) /* add on <var14:ANodes[AExternCodeBlock]>*/;
((void (*)(val*, val*))(var_n10->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n10, self) /* parent= on <var_n10:Object(AExternCodeBlock)>*/;
CONTINUE_label15: (void)0;
((void (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__next]))(var7) /* next on <var7:Iterator[nullable Object]>*/;
}
BREAK_label15: (void)0;
var16 = ((val* (*)(val*))(var_n_classdefs->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_n_classdefs) /* iterator on <var_n_classdefs:Collection[Object]>*/;
for(;;) {
var17 = ((short int (*)(val*))(var16->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var16) /* is_ok on <var16:Iterator[nullable Object]>*/;
if(!var17) break;
var18 = ((val* (*)(val*))(var16->class->vft[COLOR_abstract_collection__Iterator__item]))(var16) /* item on <var16:Iterator[nullable Object]>*/;
var_n19 = var18;
/* <var_n19:Object> isa AClassdef */
cltype21 = type_parser_nodes__AClassdef.color;
idtype22 = type_parser_nodes__AClassdef.id;
if(cltype21 >= var_n19->type->table_size) {
var20 = 0;
} else {
var20 = var_n19->type->type_table[cltype21] == idtype22;
}
if (!var20) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 35);
show_backtrace(1);
}
var23 = self->attrs[COLOR_parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <self:AModule> */
if (var23 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_classdefs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 36);
show_backtrace(1);
}
((void (*)(val*, val*))(var23->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var23, var_n19) /* add on <var23:ANodes[AClassdef]>*/;
((void (*)(val*, val*))(var_n19->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n19, self) /* parent= on <var_n19:Object(AClassdef)>*/;
CONTINUE_label24: (void)0;
((void (*)(val*))(var16->class->vft[COLOR_abstract_collection__Iterator__next]))(var16) /* next on <var16:Iterator[nullable Object]>*/;
}
BREAK_label24: (void)0;
RET_LABEL:;
}
/* method parser_prod#AModule#init_amodule for (self: Object, nullable AModuledecl, Collection[Object], Collection[Object], Collection[Object]) */
void VIRTUAL_parser_prod__AModule__init_amodule(val* self, val* p0, val* p1, val* p2, val* p3) {
parser_prod__AModule__init_amodule(self, p0, p1, p2, p3);
RET_LABEL:;
}
/* method parser_prod#AModule#replace_child for (self: AModule, ANode, nullable ANode) */
void parser_prod__AModule__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable AModuledecl */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : null */;
val* var6 /* : Range[Int] */;
long var7 /* : Int */;
val* var8 /* : ANodes[AImport] */;
long var9 /* : Int */;
val* var10 /* : Discrete */;
val* var11 /* : Discrete */;
val* var12 /* : Iterator[nullable Object] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
long var_i /* var i: Int */;
long var15 /* : Int */;
val* var16 /* : ANodes[AImport] */;
val* var17 /* : nullable Object */;
short int var18 /* : Bool */;
val* var19 /* : null */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var24 /* : ANodes[AImport] */;
val* var25 /* : ANodes[AImport] */;
val* var26 /* : Range[Int] */;
long var27 /* : Int */;
val* var28 /* : ANodes[AExternCodeBlock] */;
long var29 /* : Int */;
val* var30 /* : Discrete */;
val* var31 /* : Discrete */;
val* var32 /* : Iterator[nullable Object] */;
short int var33 /* : Bool */;
val* var34 /* : nullable Object */;
long var_i35 /* var i: Int */;
long var36 /* : Int */;
val* var37 /* : ANodes[AExternCodeBlock] */;
val* var38 /* : nullable Object */;
short int var39 /* : Bool */;
val* var40 /* : null */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
val* var45 /* : ANodes[AExternCodeBlock] */;
val* var46 /* : ANodes[AExternCodeBlock] */;
val* var48 /* : Range[Int] */;
long var49 /* : Int */;
val* var50 /* : ANodes[AClassdef] */;
long var51 /* : Int */;
val* var52 /* : Discrete */;
val* var53 /* : Discrete */;
val* var54 /* : Iterator[nullable Object] */;
short int var55 /* : Bool */;
val* var56 /* : nullable Object */;
long var_i57 /* var i: Int */;
long var58 /* : Int */;
val* var59 /* : ANodes[AClassdef] */;
val* var60 /* : nullable Object */;
short int var61 /* : Bool */;
val* var62 /* : null */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
int cltype65;
int idtype66;
val* var67 /* : ANodes[AClassdef] */;
val* var68 /* : ANodes[AClassdef] */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AModule___n_moduledecl].val; /* _n_moduledecl on <self:AModule> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:nullable AModuledecl>*/;
}
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AModuledecl */
cltype = type_parser_nodes__AModuledecl.color;
idtype = type_parser_nodes__AModuledecl.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 46);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AModule___n_moduledecl].val = var_new_child; /* _n_moduledecl on <self:AModule> */
} else {
var5 = NULL;
self->attrs[COLOR_parser_nodes__AModule___n_moduledecl].val = var5; /* _n_moduledecl on <self:AModule> */
}
goto RET_LABEL;
} else {
}
var6 = NEW_range__Range(&type_range__Rangekernel__Int);
var7 = 0;
var8 = self->attrs[COLOR_parser_nodes__AModule___n_imports].val; /* _n_imports on <self:AModule> */
if (var8 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_imports");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 53);
show_backtrace(1);
}
var9 = ((long (*)(val*))(var8->class->vft[COLOR_abstract_collection__Collection__length]))(var8) /* length on <var8:ANodes[AImport]>*/;
var10 = BOX_kernel__Int(var7); /* autobox from Int to Discrete */
var11 = BOX_kernel__Int(var9); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var6->class->vft[COLOR_range__Range__without_last]))(var6, var10, var11) /* without_last on <var6:Range[Int]>*/;
var12 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_collection__Collection__iterator]))(var6) /* iterator on <var6:Range[Int]>*/;
for(;;) {
var13 = ((short int (*)(val*))(var12->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var12) /* is_ok on <var12:Iterator[nullable Object]>*/;
if(!var13) break;
var14 = ((val* (*)(val*))(var12->class->vft[COLOR_abstract_collection__Iterator__item]))(var12) /* item on <var12:Iterator[nullable Object]>*/;
var15 = ((struct instance_kernel__Int*)var14)->value; /* autounbox from nullable Object to Int */;
var_i = var15;
var16 = self->attrs[COLOR_parser_nodes__AModule___n_imports].val; /* _n_imports on <self:AModule> */
if (var16 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_imports");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 54);
show_backtrace(1);
}
var17 = ((val* (*)(val*, long))(var16->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var16, var_i) /* [] on <var16:ANodes[AImport]>*/;
var18 = ((short int (*)(val*, val*))(var17->class->vft[COLOR_kernel__Object___61d_61d]))(var17, var_old_child) /* == on <var17:nullable Object(AImport)>*/;
if (var18){
var19 = NULL;
if (var_new_child == NULL) {
var20 = 0; /* is null */
} else {
var20 = 1; /* arg is null and recv is not */
}
if (var20){
/* <var_new_child:nullable ANode(ANode)> isa AImport */
cltype22 = type_parser_nodes__AImport.color;
idtype23 = type_parser_nodes__AImport.id;
if(cltype22 >= var_new_child->type->table_size) {
var21 = 0;
} else {
var21 = var_new_child->type->type_table[cltype22] == idtype23;
}
if (!var21) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 56);
show_backtrace(1);
}
var24 = self->attrs[COLOR_parser_nodes__AModule___n_imports].val; /* _n_imports on <self:AModule> */
if (var24 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_imports");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 57);
show_backtrace(1);
}
((void (*)(val*, long, val*))(var24->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var24, var_i, var_new_child) /* []= on <var24:ANodes[AImport]>*/;
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(AImport)>*/;
} else {
var25 = self->attrs[COLOR_parser_nodes__AModule___n_imports].val; /* _n_imports on <self:AModule> */
if (var25 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_imports");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 60);
show_backtrace(1);
}
((void (*)(val*, long))(var25->class->vft[COLOR_abstract_collection__Sequence__remove_at]))(var25, var_i) /* remove_at on <var25:ANodes[AImport]>*/;
}
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var12->class->vft[COLOR_abstract_collection__Iterator__next]))(var12) /* next on <var12:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var26 = NEW_range__Range(&type_range__Rangekernel__Int);
var27 = 0;
var28 = self->attrs[COLOR_parser_nodes__AModule___n_extern_code_blocks].val; /* _n_extern_code_blocks on <self:AModule> */
if (var28 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_extern_code_blocks");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 65);
show_backtrace(1);
}
var29 = ((long (*)(val*))(var28->class->vft[COLOR_abstract_collection__Collection__length]))(var28) /* length on <var28:ANodes[AExternCodeBlock]>*/;
var30 = BOX_kernel__Int(var27); /* autobox from Int to Discrete */
var31 = BOX_kernel__Int(var29); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var26->class->vft[COLOR_range__Range__without_last]))(var26, var30, var31) /* without_last on <var26:Range[Int]>*/;
var32 = ((val* (*)(val*))(var26->class->vft[COLOR_abstract_collection__Collection__iterator]))(var26) /* iterator on <var26:Range[Int]>*/;
for(;;) {
var33 = ((short int (*)(val*))(var32->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var32) /* is_ok on <var32:Iterator[nullable Object]>*/;
if(!var33) break;
var34 = ((val* (*)(val*))(var32->class->vft[COLOR_abstract_collection__Iterator__item]))(var32) /* item on <var32:Iterator[nullable Object]>*/;
var36 = ((struct instance_kernel__Int*)var34)->value; /* autounbox from nullable Object to Int */;
var_i35 = var36;
var37 = self->attrs[COLOR_parser_nodes__AModule___n_extern_code_blocks].val; /* _n_extern_code_blocks on <self:AModule> */
if (var37 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_extern_code_blocks");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 66);
show_backtrace(1);
}
var38 = ((val* (*)(val*, long))(var37->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var37, var_i35) /* [] on <var37:ANodes[AExternCodeBlock]>*/;
var39 = ((short int (*)(val*, val*))(var38->class->vft[COLOR_kernel__Object___61d_61d]))(var38, var_old_child) /* == on <var38:nullable Object(AExternCodeBlock)>*/;
if (var39){
var40 = NULL;
if (var_new_child == NULL) {
var41 = 0; /* is null */
} else {
var41 = 1; /* arg is null and recv is not */
}
if (var41){
/* <var_new_child:nullable ANode(ANode)> isa AExternCodeBlock */
cltype43 = type_parser_nodes__AExternCodeBlock.color;
idtype44 = type_parser_nodes__AExternCodeBlock.id;
if(cltype43 >= var_new_child->type->table_size) {
var42 = 0;
} else {
var42 = var_new_child->type->type_table[cltype43] == idtype44;
}
if (!var42) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 68);
show_backtrace(1);
}
var45 = self->attrs[COLOR_parser_nodes__AModule___n_extern_code_blocks].val; /* _n_extern_code_blocks on <self:AModule> */
if (var45 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_extern_code_blocks");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 69);
show_backtrace(1);
}
((void (*)(val*, long, val*))(var45->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var45, var_i35, var_new_child) /* []= on <var45:ANodes[AExternCodeBlock]>*/;
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(AExternCodeBlock)>*/;
} else {
var46 = self->attrs[COLOR_parser_nodes__AModule___n_extern_code_blocks].val; /* _n_extern_code_blocks on <self:AModule> */
if (var46 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_extern_code_blocks");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 72);
show_backtrace(1);
}
((void (*)(val*, long))(var46->class->vft[COLOR_abstract_collection__Sequence__remove_at]))(var46, var_i35) /* remove_at on <var46:ANodes[AExternCodeBlock]>*/;
}
goto RET_LABEL;
} else {
}
CONTINUE_label47: (void)0;
((void (*)(val*))(var32->class->vft[COLOR_abstract_collection__Iterator__next]))(var32) /* next on <var32:Iterator[nullable Object]>*/;
}
BREAK_label47: (void)0;
var48 = NEW_range__Range(&type_range__Rangekernel__Int);
var49 = 0;
var50 = self->attrs[COLOR_parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <self:AModule> */
if (var50 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_classdefs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 77);
show_backtrace(1);
}
var51 = ((long (*)(val*))(var50->class->vft[COLOR_abstract_collection__Collection__length]))(var50) /* length on <var50:ANodes[AClassdef]>*/;
var52 = BOX_kernel__Int(var49); /* autobox from Int to Discrete */
var53 = BOX_kernel__Int(var51); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var48->class->vft[COLOR_range__Range__without_last]))(var48, var52, var53) /* without_last on <var48:Range[Int]>*/;
var54 = ((val* (*)(val*))(var48->class->vft[COLOR_abstract_collection__Collection__iterator]))(var48) /* iterator on <var48:Range[Int]>*/;
for(;;) {
var55 = ((short int (*)(val*))(var54->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var54) /* is_ok on <var54:Iterator[nullable Object]>*/;
if(!var55) break;
var56 = ((val* (*)(val*))(var54->class->vft[COLOR_abstract_collection__Iterator__item]))(var54) /* item on <var54:Iterator[nullable Object]>*/;
var58 = ((struct instance_kernel__Int*)var56)->value; /* autounbox from nullable Object to Int */;
var_i57 = var58;
var59 = self->attrs[COLOR_parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <self:AModule> */
if (var59 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_classdefs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 78);
show_backtrace(1);
}
var60 = ((val* (*)(val*, long))(var59->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var59, var_i57) /* [] on <var59:ANodes[AClassdef]>*/;
var61 = ((short int (*)(val*, val*))(var60->class->vft[COLOR_kernel__Object___61d_61d]))(var60, var_old_child) /* == on <var60:nullable Object(AClassdef)>*/;
if (var61){
var62 = NULL;
if (var_new_child == NULL) {
var63 = 0; /* is null */
} else {
var63 = 1; /* arg is null and recv is not */
}
if (var63){
/* <var_new_child:nullable ANode(ANode)> isa AClassdef */
cltype65 = type_parser_nodes__AClassdef.color;
idtype66 = type_parser_nodes__AClassdef.id;
if(cltype65 >= var_new_child->type->table_size) {
var64 = 0;
} else {
var64 = var_new_child->type->type_table[cltype65] == idtype66;
}
if (!var64) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 80);
show_backtrace(1);
}
var67 = self->attrs[COLOR_parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <self:AModule> */
if (var67 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_classdefs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 81);
show_backtrace(1);
}
((void (*)(val*, long, val*))(var67->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var67, var_i57, var_new_child) /* []= on <var67:ANodes[AClassdef]>*/;
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(AClassdef)>*/;
} else {
var68 = self->attrs[COLOR_parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <self:AModule> */
if (var68 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_classdefs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 84);
show_backtrace(1);
}
((void (*)(val*, long))(var68->class->vft[COLOR_abstract_collection__Sequence__remove_at]))(var68, var_i57) /* remove_at on <var68:ANodes[AClassdef]>*/;
}
goto RET_LABEL;
} else {
}
CONTINUE_label69: (void)0;
((void (*)(val*))(var54->class->vft[COLOR_abstract_collection__Iterator__next]))(var54) /* next on <var54:Iterator[nullable Object]>*/;
}
BREAK_label69: (void)0;
RET_LABEL:;
}
/* method parser_prod#AModule#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AModule__replace_child(val* self, val* p0, val* p1) {
parser_prod__AModule__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AModule#n_moduledecl= for (self: AModule, nullable AModuledecl) */
void parser_prod__AModule__n_moduledecl_61d(val* self, val* p0) {
val* var_node /* var node: nullable AModuledecl */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AModule___n_moduledecl].val = var_node; /* _n_moduledecl on <self:AModule> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AModuledecl(AModuledecl)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AModule#n_moduledecl= for (self: Object, nullable AModuledecl) */
void VIRTUAL_parser_prod__AModule__n_moduledecl_61d(val* self, val* p0) {
parser_prod__AModule__n_moduledecl_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AModule#visit_all for (self: AModule, Visitor) */
void parser_prod__AModule__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable AModuledecl */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : nullable AModuledecl */;
val* var4 /* : ANodes[AImport] */;
val* var5 /* : Iterator[nullable Object] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_n /* var n: AImport */;
val* var8 /* : ANodes[AExternCodeBlock] */;
val* var9 /* : Iterator[nullable Object] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_n12 /* var n: AExternCodeBlock */;
val* var14 /* : ANodes[AClassdef] */;
val* var15 /* : Iterator[nullable Object] */;
short int var16 /* : Bool */;
val* var17 /* : nullable Object */;
val* var_n18 /* var n: AClassdef */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AModule___n_moduledecl].val; /* _n_moduledecl on <self:AModule> */
var1 = NULL;
if (var == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (var2){
var3 = self->attrs[COLOR_parser_nodes__AModule___n_moduledecl].val; /* _n_moduledecl on <self:AModule> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 103);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var3) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var4 = self->attrs[COLOR_parser_nodes__AModule___n_imports].val; /* _n_imports on <self:AModule> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_imports");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 105);
show_backtrace(1);
}
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__Collection__iterator]))(var4) /* iterator on <var4:ANodes[AImport]>*/;
for(;;) {
var6 = ((short int (*)(val*))(var5->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var5) /* is_ok on <var5:Iterator[nullable Object]>*/;
if(!var6) break;
var7 = ((val* (*)(val*))(var5->class->vft[COLOR_abstract_collection__Iterator__item]))(var5) /* item on <var5:Iterator[nullable Object]>*/;
var_n = var7;
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var_n) /* enter_visit on <var_v:Visitor>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var5->class->vft[COLOR_abstract_collection__Iterator__next]))(var5) /* next on <var5:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var8 = self->attrs[COLOR_parser_nodes__AModule___n_extern_code_blocks].val; /* _n_extern_code_blocks on <self:AModule> */
if (var8 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_extern_code_blocks");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 108);
show_backtrace(1);
}
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_abstract_collection__Collection__iterator]))(var8) /* iterator on <var8:ANodes[AExternCodeBlock]>*/;
for(;;) {
var10 = ((short int (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var9) /* is_ok on <var9:Iterator[nullable Object]>*/;
if(!var10) break;
var11 = ((val* (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__item]))(var9) /* item on <var9:Iterator[nullable Object]>*/;
var_n12 = var11;
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var_n12) /* enter_visit on <var_v:Visitor>*/;
CONTINUE_label13: (void)0;
((void (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__next]))(var9) /* next on <var9:Iterator[nullable Object]>*/;
}
BREAK_label13: (void)0;
var14 = self->attrs[COLOR_parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <self:AModule> */
if (var14 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_classdefs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 111);
show_backtrace(1);
}
var15 = ((val* (*)(val*))(var14->class->vft[COLOR_abstract_collection__Collection__iterator]))(var14) /* iterator on <var14:ANodes[AClassdef]>*/;
for(;;) {
var16 = ((short int (*)(val*))(var15->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var15) /* is_ok on <var15:Iterator[nullable Object]>*/;
if(!var16) break;
var17 = ((val* (*)(val*))(var15->class->vft[COLOR_abstract_collection__Iterator__item]))(var15) /* item on <var15:Iterator[nullable Object]>*/;
var_n18 = var17;
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var_n18) /* enter_visit on <var_v:Visitor>*/;
CONTINUE_label19: (void)0;
((void (*)(val*))(var15->class->vft[COLOR_abstract_collection__Iterator__next]))(var15) /* next on <var15:Iterator[nullable Object]>*/;
}
BREAK_label19: (void)0;
RET_LABEL:;
}
/* method parser_prod#AModule#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AModule__visit_all(val* self, val* p0) {
parser_prod__AModule__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AModuledecl#empty_init for (self: AModuledecl) */
void parser_prod__AModuledecl__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AModuledecl#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AModuledecl__empty_init(val* self) {
parser_prod__AModuledecl__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AModuledecl#init_amoduledecl for (self: AModuledecl, nullable ADoc, nullable TKwmodule, nullable AModuleName, nullable AAnnotations) */
void parser_prod__AModuledecl__init_amoduledecl(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_doc /* var n_doc: nullable ADoc */;
val* var_n_kwmodule /* var n_kwmodule: nullable TKwmodule */;
val* var_n_name /* var n_name: nullable AModuleName */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
var_n_doc = p0;
var_n_kwmodule = p1;
var_n_name = p2;
var_n_annotations = p3;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AModuledecl__empty_init]))(self) /* empty_init on <self:AModuledecl>*/;
self->attrs[COLOR_parser_nodes__AModuledecl___n_doc].val = var_n_doc; /* _n_doc on <self:AModuledecl> */
var = NULL;
if (var_n_doc == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_doc->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_doc, self) /* parent= on <var_n_doc:nullable ADoc(ADoc)>*/;
} else {
}
if (var_n_kwmodule == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 131);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AModuledecl___n_kwmodule].val = var_n_kwmodule; /* _n_kwmodule on <self:AModuledecl> */
if (var_n_kwmodule == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 132);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_kwmodule->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwmodule, self) /* parent= on <var_n_kwmodule:nullable TKwmodule>*/;
}
if (var_n_name == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 133);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AModuledecl___n_name].val = var_n_name; /* _n_name on <self:AModuledecl> */
if (var_n_name == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 134);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_name->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_name, self) /* parent= on <var_n_name:nullable AModuleName>*/;
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AModuledecl> */
var2 = NULL;
if (var_n_annotations == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_n_annotations->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_annotations, self) /* parent= on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AModuledecl#init_amoduledecl for (self: Object, nullable ADoc, nullable TKwmodule, nullable AModuleName, nullable AAnnotations) */
void VIRTUAL_parser_prod__AModuledecl__init_amoduledecl(val* self, val* p0, val* p1, val* p2, val* p3) {
parser_prod__AModuledecl__init_amoduledecl(self, p0, p1, p2, p3);
RET_LABEL:;
}
/* method parser_prod#AModuledecl#replace_child for (self: AModuledecl, ANode, nullable ANode) */
void parser_prod__AModuledecl__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable ADoc */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : null */;
val* var6 /* : TKwmodule */;
short int var7 /* : Bool */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : AModuleName */;
short int var14 /* : Bool */;
val* var15 /* : null */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var20 /* : nullable AAnnotations */;
short int var21 /* : Bool */;
val* var22 /* : null */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var27 /* : null */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AModuledecl___n_doc].val; /* _n_doc on <self:AModuledecl> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:nullable ADoc>*/;
}
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa ADoc */
cltype = type_parser_nodes__ADoc.color;
idtype = type_parser_nodes__ADoc.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 146);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AModuledecl___n_doc].val = var_new_child; /* _n_doc on <self:AModuledecl> */
} else {
var5 = NULL;
self->attrs[COLOR_parser_nodes__AModuledecl___n_doc].val = var5; /* _n_doc on <self:AModuledecl> */
}
goto RET_LABEL;
} else {
}
var6 = self->attrs[COLOR_parser_nodes__AModuledecl___n_kwmodule].val; /* _n_kwmodule on <self:AModuledecl> */
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwmodule");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 153);
show_backtrace(1);
}
var7 = ((short int (*)(val*, val*))(var6->class->vft[COLOR_kernel__Object___61d_61d]))(var6, var_old_child) /* == on <var6:TKwmodule>*/;
if (var7){
var8 = NULL;
if (var_new_child == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (var9){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwmodule */
cltype11 = type_parser_nodes__TKwmodule.color;
idtype12 = type_parser_nodes__TKwmodule.id;
if(cltype11 >= var_new_child->type->table_size) {
var10 = 0;
} else {
var10 = var_new_child->type->type_table[cltype11] == idtype12;
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 156);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AModuledecl___n_kwmodule].val = var_new_child; /* _n_kwmodule on <self:AModuledecl> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 159);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var13 = self->attrs[COLOR_parser_nodes__AModuledecl___n_name].val; /* _n_name on <self:AModuledecl> */
if (var13 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_name");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 163);
show_backtrace(1);
}
var14 = ((short int (*)(val*, val*))(var13->class->vft[COLOR_kernel__Object___61d_61d]))(var13, var_old_child) /* == on <var13:AModuleName>*/;
if (var14){
var15 = NULL;
if (var_new_child == NULL) {
var16 = 0; /* is null */
} else {
var16 = 1; /* arg is null and recv is not */
}
if (var16){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AModuleName */
cltype18 = type_parser_nodes__AModuleName.color;
idtype19 = type_parser_nodes__AModuleName.id;
if(cltype18 >= var_new_child->type->table_size) {
var17 = 0;
} else {
var17 = var_new_child->type->type_table[cltype18] == idtype19;
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 166);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AModuledecl___n_name].val = var_new_child; /* _n_name on <self:AModuledecl> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 169);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var20 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AModuledecl> */
if (var20 == NULL) {
var21 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var21 = ((short int (*)(val*, val*))(var20->class->vft[COLOR_kernel__Object___61d_61d]))(var20, var_old_child) /* == on <var20:nullable AAnnotations>*/;
}
if (var21){
var22 = NULL;
if (var_new_child == NULL) {
var23 = 0; /* is null */
} else {
var23 = 1; /* arg is null and recv is not */
}
if (var23){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AAnnotations */
cltype25 = type_parser_nodes__AAnnotations.color;
idtype26 = type_parser_nodes__AAnnotations.id;
if(cltype25 >= var_new_child->type->table_size) {
var24 = 0;
} else {
var24 = var_new_child->type->type_table[cltype25] == idtype26;
}
if (!var24) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 176);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_new_child; /* _n_annotations on <self:AModuledecl> */
} else {
var27 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var27; /* _n_annotations on <self:AModuledecl> */
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AModuledecl#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AModuledecl__replace_child(val* self, val* p0, val* p1) {
parser_prod__AModuledecl__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AModuledecl#n_doc= for (self: AModuledecl, nullable ADoc) */
void parser_prod__AModuledecl__n_doc_61d(val* self, val* p0) {
val* var_node /* var node: nullable ADoc */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AModuledecl___n_doc].val = var_node; /* _n_doc on <self:AModuledecl> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable ADoc(ADoc)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AModuledecl#n_doc= for (self: Object, nullable ADoc) */
void VIRTUAL_parser_prod__AModuledecl__n_doc_61d(val* self, val* p0) {
parser_prod__AModuledecl__n_doc_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AModuledecl#n_kwmodule= for (self: AModuledecl, TKwmodule) */
void parser_prod__AModuledecl__n_kwmodule_61d(val* self, val* p0) {
val* var_node /* var node: TKwmodule */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AModuledecl___n_kwmodule].val = var_node; /* _n_kwmodule on <self:AModuledecl> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwmodule>*/;
RET_LABEL:;
}
/* method parser_prod#AModuledecl#n_kwmodule= for (self: Object, TKwmodule) */
void VIRTUAL_parser_prod__AModuledecl__n_kwmodule_61d(val* self, val* p0) {
parser_prod__AModuledecl__n_kwmodule_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AModuledecl#n_name= for (self: AModuledecl, AModuleName) */
void parser_prod__AModuledecl__n_name_61d(val* self, val* p0) {
val* var_node /* var node: AModuleName */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AModuledecl___n_name].val = var_node; /* _n_name on <self:AModuledecl> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AModuleName>*/;
RET_LABEL:;
}
/* method parser_prod#AModuledecl#n_name= for (self: Object, AModuleName) */
void VIRTUAL_parser_prod__AModuledecl__n_name_61d(val* self, val* p0) {
parser_prod__AModuledecl__n_name_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AModuledecl#n_annotations= for (self: AModuledecl, nullable AAnnotations) */
void parser_prod__AModuledecl__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AModuledecl> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AAnnotations(AAnnotations)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AModuledecl#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__AModuledecl__n_annotations_61d(val* self, val* p0) {
parser_prod__AModuledecl__n_annotations_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AModuledecl#visit_all for (self: AModuledecl, Visitor) */
void parser_prod__AModuledecl__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable ADoc */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : nullable ADoc */;
val* var4 /* : TKwmodule */;
val* var5 /* : AModuleName */;
val* var6 /* : nullable AAnnotations */;
val* var7 /* : null */;
short int var8 /* : Bool */;
val* var9 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AModuledecl___n_doc].val; /* _n_doc on <self:AModuledecl> */
var1 = NULL;
if (var == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (var2){
var3 = self->attrs[COLOR_parser_nodes__AModuledecl___n_doc].val; /* _n_doc on <self:AModuledecl> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 214);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var3) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var4 = self->attrs[COLOR_parser_nodes__AModuledecl___n_kwmodule].val; /* _n_kwmodule on <self:AModuledecl> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwmodule");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 216);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var4) /* enter_visit on <var_v:Visitor>*/;
var5 = self->attrs[COLOR_parser_nodes__AModuledecl___n_name].val; /* _n_name on <self:AModuledecl> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_name");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 217);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var5) /* enter_visit on <var_v:Visitor>*/;
var6 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AModuledecl> */
var7 = NULL;
if (var6 == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
var9 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AModuledecl> */
if (var9 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 219);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var9) /* enter_visit on <var_v:Visitor>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AModuledecl#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AModuledecl__visit_all(val* self, val* p0) {
parser_prod__AModuledecl__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AStdImport#empty_init for (self: AStdImport) */
void parser_prod__AStdImport__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AStdImport#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AStdImport__empty_init(val* self) {
parser_prod__AStdImport__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AStdImport#init_astdimport for (self: AStdImport, nullable AVisibility, nullable TKwimport, nullable AModuleName, nullable AAnnotations) */
void parser_prod__AStdImport__init_astdimport(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_n_visibility /* var n_visibility: nullable AVisibility */;
val* var_n_kwimport /* var n_kwimport: nullable TKwimport */;
val* var_n_name /* var n_name: nullable AModuleName */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
var_n_visibility = p0;
var_n_kwimport = p1;
var_n_name = p2;
var_n_annotations = p3;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AStdImport__empty_init]))(self) /* empty_init on <self:AStdImport>*/;
if (var_n_visibility == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 234);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AStdImport___n_visibility].val = var_n_visibility; /* _n_visibility on <self:AStdImport> */
if (var_n_visibility == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 235);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_visibility->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_visibility, self) /* parent= on <var_n_visibility:nullable AVisibility>*/;
}
if (var_n_kwimport == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 236);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AStdImport___n_kwimport].val = var_n_kwimport; /* _n_kwimport on <self:AStdImport> */
if (var_n_kwimport == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 237);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_kwimport->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwimport, self) /* parent= on <var_n_kwimport:nullable TKwimport>*/;
}
if (var_n_name == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 238);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AStdImport___n_name].val = var_n_name; /* _n_name on <self:AStdImport> */
if (var_n_name == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 239);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_name->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_name, self) /* parent= on <var_n_name:nullable AModuleName>*/;
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AStdImport> */
var = NULL;
if (var_n_annotations == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_annotations->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_annotations, self) /* parent= on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStdImport#init_astdimport for (self: Object, nullable AVisibility, nullable TKwimport, nullable AModuleName, nullable AAnnotations) */
void VIRTUAL_parser_prod__AStdImport__init_astdimport(val* self, val* p0, val* p1, val* p2, val* p3) {
parser_prod__AStdImport__init_astdimport(self, p0, p1, p2, p3);
RET_LABEL:;
}
/* method parser_prod#AStdImport#replace_child for (self: AStdImport, ANode, nullable ANode) */
void parser_prod__AStdImport__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AVisibility */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : TKwimport */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : AModuleName */;
short int var13 /* : Bool */;
val* var14 /* : null */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : nullable AAnnotations */;
short int var20 /* : Bool */;
val* var21 /* : null */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var26 /* : null */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AStdImport___n_visibility].val; /* _n_visibility on <self:AStdImport> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_visibility");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 248);
show_backtrace(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:AVisibility>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AVisibility */
cltype = type_parser_nodes__AVisibility.color;
idtype = type_parser_nodes__AVisibility.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 251);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AStdImport___n_visibility].val = var_new_child; /* _n_visibility on <self:AStdImport> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 254);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__AStdImport___n_kwimport].val; /* _n_kwimport on <self:AStdImport> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwimport");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 258);
show_backtrace(1);
}
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_old_child) /* == on <var5:TKwimport>*/;
if (var6){
var7 = NULL;
if (var_new_child == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwimport */
cltype10 = type_parser_nodes__TKwimport.color;
idtype11 = type_parser_nodes__TKwimport.id;
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 261);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AStdImport___n_kwimport].val = var_new_child; /* _n_kwimport on <self:AStdImport> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 264);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_parser_nodes__AStdImport___n_name].val; /* _n_name on <self:AStdImport> */
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_name");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 268);
show_backtrace(1);
}
var13 = ((short int (*)(val*, val*))(var12->class->vft[COLOR_kernel__Object___61d_61d]))(var12, var_old_child) /* == on <var12:AModuleName>*/;
if (var13){
var14 = NULL;
if (var_new_child == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (var15){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AModuleName */
cltype17 = type_parser_nodes__AModuleName.color;
idtype18 = type_parser_nodes__AModuleName.id;
if(cltype17 >= var_new_child->type->table_size) {
var16 = 0;
} else {
var16 = var_new_child->type->type_table[cltype17] == idtype18;
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 271);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AStdImport___n_name].val = var_new_child; /* _n_name on <self:AStdImport> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 274);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AStdImport> */
if (var19 == NULL) {
var20 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var20 = ((short int (*)(val*, val*))(var19->class->vft[COLOR_kernel__Object___61d_61d]))(var19, var_old_child) /* == on <var19:nullable AAnnotations>*/;
}
if (var20){
var21 = NULL;
if (var_new_child == NULL) {
var22 = 0; /* is null */
} else {
var22 = 1; /* arg is null and recv is not */
}
if (var22){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AAnnotations */
cltype24 = type_parser_nodes__AAnnotations.color;
idtype25 = type_parser_nodes__AAnnotations.id;
if(cltype24 >= var_new_child->type->table_size) {
var23 = 0;
} else {
var23 = var_new_child->type->type_table[cltype24] == idtype25;
}
if (!var23) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 281);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_new_child; /* _n_annotations on <self:AStdImport> */
} else {
var26 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var26; /* _n_annotations on <self:AStdImport> */
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStdImport#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AStdImport__replace_child(val* self, val* p0, val* p1) {
parser_prod__AStdImport__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AStdImport#n_visibility= for (self: AStdImport, AVisibility) */
void parser_prod__AStdImport__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: AVisibility */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AStdImport___n_visibility].val = var_node; /* _n_visibility on <self:AStdImport> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AVisibility>*/;
RET_LABEL:;
}
/* method parser_prod#AStdImport#n_visibility= for (self: Object, AVisibility) */
void VIRTUAL_parser_prod__AStdImport__n_visibility_61d(val* self, val* p0) {
parser_prod__AStdImport__n_visibility_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AStdImport#n_kwimport= for (self: AStdImport, TKwimport) */
void parser_prod__AStdImport__n_kwimport_61d(val* self, val* p0) {
val* var_node /* var node: TKwimport */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AStdImport___n_kwimport].val = var_node; /* _n_kwimport on <self:AStdImport> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwimport>*/;
RET_LABEL:;
}
/* method parser_prod#AStdImport#n_kwimport= for (self: Object, TKwimport) */
void VIRTUAL_parser_prod__AStdImport__n_kwimport_61d(val* self, val* p0) {
parser_prod__AStdImport__n_kwimport_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AStdImport#n_name= for (self: AStdImport, AModuleName) */
void parser_prod__AStdImport__n_name_61d(val* self, val* p0) {
val* var_node /* var node: AModuleName */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AStdImport___n_name].val = var_node; /* _n_name on <self:AStdImport> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AModuleName>*/;
RET_LABEL:;
}
/* method parser_prod#AStdImport#n_name= for (self: Object, AModuleName) */
void VIRTUAL_parser_prod__AStdImport__n_name_61d(val* self, val* p0) {
parser_prod__AStdImport__n_name_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AStdImport#n_annotations= for (self: AStdImport, nullable AAnnotations) */
void parser_prod__AStdImport__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AStdImport> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AAnnotations(AAnnotations)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStdImport#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__AStdImport__n_annotations_61d(val* self, val* p0) {
parser_prod__AStdImport__n_annotations_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AStdImport#visit_all for (self: AStdImport, Visitor) */
void parser_prod__AStdImport__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AVisibility */;
val* var1 /* : TKwimport */;
val* var2 /* : AModuleName */;
val* var3 /* : nullable AAnnotations */;
val* var4 /* : null */;
short int var5 /* : Bool */;
val* var6 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AStdImport___n_visibility].val; /* _n_visibility on <self:AStdImport> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_visibility");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 316);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__AStdImport___n_kwimport].val; /* _n_kwimport on <self:AStdImport> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwimport");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 317);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
var2 = self->attrs[COLOR_parser_nodes__AStdImport___n_name].val; /* _n_name on <self:AStdImport> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_name");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 318);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var2) /* enter_visit on <var_v:Visitor>*/;
var3 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AStdImport> */
var4 = NULL;
if (var3 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (var5){
var6 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AStdImport> */
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 320);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var6) /* enter_visit on <var_v:Visitor>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStdImport#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AStdImport__visit_all(val* self, val* p0) {
parser_prod__AStdImport__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ANoImport#empty_init for (self: ANoImport) */
void parser_prod__ANoImport__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ANoImport#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ANoImport__empty_init(val* self) {
parser_prod__ANoImport__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ANoImport#init_anoimport for (self: ANoImport, nullable AVisibility, nullable TKwimport, nullable TKwend) */
void parser_prod__ANoImport__init_anoimport(val* self, val* p0, val* p1, val* p2) {
val* var_n_visibility /* var n_visibility: nullable AVisibility */;
val* var_n_kwimport /* var n_kwimport: nullable TKwimport */;
val* var_n_kwend /* var n_kwend: nullable TKwend */;
var_n_visibility = p0;
var_n_kwimport = p1;
var_n_kwend = p2;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ANoImport__empty_init]))(self) /* empty_init on <self:ANoImport>*/;
if (var_n_visibility == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 334);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ANoImport___n_visibility].val = var_n_visibility; /* _n_visibility on <self:ANoImport> */
if (var_n_visibility == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 335);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_visibility->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_visibility, self) /* parent= on <var_n_visibility:nullable AVisibility>*/;
}
if (var_n_kwimport == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 336);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ANoImport___n_kwimport].val = var_n_kwimport; /* _n_kwimport on <self:ANoImport> */
if (var_n_kwimport == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 337);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_kwimport->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwimport, self) /* parent= on <var_n_kwimport:nullable TKwimport>*/;
}
if (var_n_kwend == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 338);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ANoImport___n_kwend].val = var_n_kwend; /* _n_kwend on <self:ANoImport> */
if (var_n_kwend == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 339);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_kwend->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwend, self) /* parent= on <var_n_kwend:nullable TKwend>*/;
}
RET_LABEL:;
}
/* method parser_prod#ANoImport#init_anoimport for (self: Object, nullable AVisibility, nullable TKwimport, nullable TKwend) */
void VIRTUAL_parser_prod__ANoImport__init_anoimport(val* self, val* p0, val* p1, val* p2) {
parser_prod__ANoImport__init_anoimport(self, p0, p1, p2);
RET_LABEL:;
}
/* method parser_prod#ANoImport#replace_child for (self: ANoImport, ANode, nullable ANode) */
void parser_prod__ANoImport__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : AVisibility */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : TKwimport */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : TKwend */;
short int var13 /* : Bool */;
val* var14 /* : null */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ANoImport___n_visibility].val; /* _n_visibility on <self:ANoImport> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_visibility");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 344);
show_backtrace(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:AVisibility>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AVisibility */
cltype = type_parser_nodes__AVisibility.color;
idtype = type_parser_nodes__AVisibility.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 347);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ANoImport___n_visibility].val = var_new_child; /* _n_visibility on <self:ANoImport> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 350);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__ANoImport___n_kwimport].val; /* _n_kwimport on <self:ANoImport> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwimport");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 354);
show_backtrace(1);
}
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_old_child) /* == on <var5:TKwimport>*/;
if (var6){
var7 = NULL;
if (var_new_child == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwimport */
cltype10 = type_parser_nodes__TKwimport.color;
idtype11 = type_parser_nodes__TKwimport.id;
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 357);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ANoImport___n_kwimport].val = var_new_child; /* _n_kwimport on <self:ANoImport> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 360);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_parser_nodes__ANoImport___n_kwend].val; /* _n_kwend on <self:ANoImport> */
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwend");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 364);
show_backtrace(1);
}
var13 = ((short int (*)(val*, val*))(var12->class->vft[COLOR_kernel__Object___61d_61d]))(var12, var_old_child) /* == on <var12:TKwend>*/;
if (var13){
var14 = NULL;
if (var_new_child == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (var15){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwend */
cltype17 = type_parser_nodes__TKwend.color;
idtype18 = type_parser_nodes__TKwend.id;
if(cltype17 >= var_new_child->type->table_size) {
var16 = 0;
} else {
var16 = var_new_child->type->type_table[cltype17] == idtype18;
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 367);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ANoImport___n_kwend].val = var_new_child; /* _n_kwend on <self:ANoImport> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 370);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ANoImport#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ANoImport__replace_child(val* self, val* p0, val* p1) {
parser_prod__ANoImport__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ANoImport#n_visibility= for (self: ANoImport, AVisibility) */
void parser_prod__ANoImport__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: AVisibility */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ANoImport___n_visibility].val = var_node; /* _n_visibility on <self:ANoImport> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AVisibility>*/;
RET_LABEL:;
}
/* method parser_prod#ANoImport#n_visibility= for (self: Object, AVisibility) */
void VIRTUAL_parser_prod__ANoImport__n_visibility_61d(val* self, val* p0) {
parser_prod__ANoImport__n_visibility_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ANoImport#n_kwimport= for (self: ANoImport, TKwimport) */
void parser_prod__ANoImport__n_kwimport_61d(val* self, val* p0) {
val* var_node /* var node: TKwimport */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ANoImport___n_kwimport].val = var_node; /* _n_kwimport on <self:ANoImport> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwimport>*/;
RET_LABEL:;
}
/* method parser_prod#ANoImport#n_kwimport= for (self: Object, TKwimport) */
void VIRTUAL_parser_prod__ANoImport__n_kwimport_61d(val* self, val* p0) {
parser_prod__ANoImport__n_kwimport_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ANoImport#n_kwend= for (self: ANoImport, TKwend) */
void parser_prod__ANoImport__n_kwend_61d(val* self, val* p0) {
val* var_node /* var node: TKwend */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ANoImport___n_kwend].val = var_node; /* _n_kwend on <self:ANoImport> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwend>*/;
RET_LABEL:;
}
/* method parser_prod#ANoImport#n_kwend= for (self: Object, TKwend) */
void VIRTUAL_parser_prod__ANoImport__n_kwend_61d(val* self, val* p0) {
parser_prod__ANoImport__n_kwend_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ANoImport#visit_all for (self: ANoImport, Visitor) */
void parser_prod__ANoImport__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : AVisibility */;
val* var1 /* : TKwimport */;
val* var2 /* : TKwend */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ANoImport___n_visibility].val; /* _n_visibility on <self:ANoImport> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_visibility");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 395);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__ANoImport___n_kwimport].val; /* _n_kwimport on <self:ANoImport> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwimport");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 396);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
var2 = self->attrs[COLOR_parser_nodes__ANoImport___n_kwend].val; /* _n_kwend on <self:ANoImport> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwend");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 397);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var2) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#ANoImport#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ANoImport__visit_all(val* self, val* p0) {
parser_prod__ANoImport__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#APublicVisibility#empty_init for (self: APublicVisibility) */
void parser_prod__APublicVisibility__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#APublicVisibility#empty_init for (self: Object) */
void VIRTUAL_parser_prod__APublicVisibility__empty_init(val* self) {
parser_prod__APublicVisibility__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#APublicVisibility#init_apublicvisibility for (self: APublicVisibility) */
void parser_prod__APublicVisibility__init_apublicvisibility(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_prod__APublicVisibility__empty_init]))(self) /* empty_init on <self:APublicVisibility>*/;
RET_LABEL:;
}
/* method parser_prod#APublicVisibility#init_apublicvisibility for (self: Object) */
void VIRTUAL_parser_prod__APublicVisibility__init_apublicvisibility(val* self) {
parser_prod__APublicVisibility__init_apublicvisibility(self);
RET_LABEL:;
}
/* method parser_prod#APublicVisibility#replace_child for (self: APublicVisibility, ANode, nullable ANode) */
void parser_prod__APublicVisibility__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
var_old_child = p0;
var_new_child = p1;
RET_LABEL:;
}
/* method parser_prod#APublicVisibility#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__APublicVisibility__replace_child(val* self, val* p0, val* p1) {
parser_prod__APublicVisibility__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#APublicVisibility#visit_all for (self: APublicVisibility, Visitor) */
void parser_prod__APublicVisibility__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
var_v = p0;
RET_LABEL:;
}
/* method parser_prod#APublicVisibility#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__APublicVisibility__visit_all(val* self, val* p0) {
parser_prod__APublicVisibility__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#APrivateVisibility#empty_init for (self: APrivateVisibility) */
void parser_prod__APrivateVisibility__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#APrivateVisibility#empty_init for (self: Object) */
void VIRTUAL_parser_prod__APrivateVisibility__empty_init(val* self) {
parser_prod__APrivateVisibility__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#APrivateVisibility#init_aprivatevisibility for (self: APrivateVisibility, nullable TKwprivate) */
void parser_prod__APrivateVisibility__init_aprivatevisibility(val* self, val* p0) {
val* var_n_kwprivate /* var n_kwprivate: nullable TKwprivate */;
var_n_kwprivate = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__APrivateVisibility__empty_init]))(self) /* empty_init on <self:APrivateVisibility>*/;
if (var_n_kwprivate == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 426);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__APrivateVisibility___n_kwprivate].val = var_n_kwprivate; /* _n_kwprivate on <self:APrivateVisibility> */
if (var_n_kwprivate == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 427);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_kwprivate->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwprivate, self) /* parent= on <var_n_kwprivate:nullable TKwprivate>*/;
}
RET_LABEL:;
}
/* method parser_prod#APrivateVisibility#init_aprivatevisibility for (self: Object, nullable TKwprivate) */
void VIRTUAL_parser_prod__APrivateVisibility__init_aprivatevisibility(val* self, val* p0) {
parser_prod__APrivateVisibility__init_aprivatevisibility(self, p0);
RET_LABEL:;
}
/* method parser_prod#APrivateVisibility#replace_child for (self: APrivateVisibility, ANode, nullable ANode) */
void parser_prod__APrivateVisibility__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwprivate */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__APrivateVisibility___n_kwprivate].val; /* _n_kwprivate on <self:APrivateVisibility> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwprivate");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 432);
show_backtrace(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TKwprivate>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwprivate */
cltype = type_parser_nodes__TKwprivate.color;
idtype = type_parser_nodes__TKwprivate.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 435);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__APrivateVisibility___n_kwprivate].val = var_new_child; /* _n_kwprivate on <self:APrivateVisibility> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 438);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#APrivateVisibility#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__APrivateVisibility__replace_child(val* self, val* p0, val* p1) {
parser_prod__APrivateVisibility__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#APrivateVisibility#n_kwprivate= for (self: APrivateVisibility, TKwprivate) */
void parser_prod__APrivateVisibility__n_kwprivate_61d(val* self, val* p0) {
val* var_node /* var node: TKwprivate */;
var_node = p0;
self->attrs[COLOR_parser_nodes__APrivateVisibility___n_kwprivate].val = var_node; /* _n_kwprivate on <self:APrivateVisibility> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwprivate>*/;
RET_LABEL:;
}
/* method parser_prod#APrivateVisibility#n_kwprivate= for (self: Object, TKwprivate) */
void VIRTUAL_parser_prod__APrivateVisibility__n_kwprivate_61d(val* self, val* p0) {
parser_prod__APrivateVisibility__n_kwprivate_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#APrivateVisibility#visit_all for (self: APrivateVisibility, Visitor) */
void parser_prod__APrivateVisibility__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwprivate */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__APrivateVisibility___n_kwprivate].val; /* _n_kwprivate on <self:APrivateVisibility> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwprivate");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 453);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#APrivateVisibility#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__APrivateVisibility__visit_all(val* self, val* p0) {
parser_prod__APrivateVisibility__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AProtectedVisibility#empty_init for (self: AProtectedVisibility) */
void parser_prod__AProtectedVisibility__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AProtectedVisibility#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AProtectedVisibility__empty_init(val* self) {
parser_prod__AProtectedVisibility__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AProtectedVisibility#init_aprotectedvisibility for (self: AProtectedVisibility, nullable TKwprotected) */
void parser_prod__AProtectedVisibility__init_aprotectedvisibility(val* self, val* p0) {
val* var_n_kwprotected /* var n_kwprotected: nullable TKwprotected */;
var_n_kwprotected = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AProtectedVisibility__empty_init]))(self) /* empty_init on <self:AProtectedVisibility>*/;
if (var_n_kwprotected == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 464);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AProtectedVisibility___n_kwprotected].val = var_n_kwprotected; /* _n_kwprotected on <self:AProtectedVisibility> */
if (var_n_kwprotected == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 465);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_kwprotected->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwprotected, self) /* parent= on <var_n_kwprotected:nullable TKwprotected>*/;
}
RET_LABEL:;
}
/* method parser_prod#AProtectedVisibility#init_aprotectedvisibility for (self: Object, nullable TKwprotected) */
void VIRTUAL_parser_prod__AProtectedVisibility__init_aprotectedvisibility(val* self, val* p0) {
parser_prod__AProtectedVisibility__init_aprotectedvisibility(self, p0);
RET_LABEL:;
}
/* method parser_prod#AProtectedVisibility#replace_child for (self: AProtectedVisibility, ANode, nullable ANode) */
void parser_prod__AProtectedVisibility__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwprotected */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AProtectedVisibility___n_kwprotected].val; /* _n_kwprotected on <self:AProtectedVisibility> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwprotected");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 470);
show_backtrace(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TKwprotected>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwprotected */
cltype = type_parser_nodes__TKwprotected.color;
idtype = type_parser_nodes__TKwprotected.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 473);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AProtectedVisibility___n_kwprotected].val = var_new_child; /* _n_kwprotected on <self:AProtectedVisibility> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 476);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AProtectedVisibility#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AProtectedVisibility__replace_child(val* self, val* p0, val* p1) {
parser_prod__AProtectedVisibility__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AProtectedVisibility#n_kwprotected= for (self: AProtectedVisibility, TKwprotected) */
void parser_prod__AProtectedVisibility__n_kwprotected_61d(val* self, val* p0) {
val* var_node /* var node: TKwprotected */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AProtectedVisibility___n_kwprotected].val = var_node; /* _n_kwprotected on <self:AProtectedVisibility> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwprotected>*/;
RET_LABEL:;
}
/* method parser_prod#AProtectedVisibility#n_kwprotected= for (self: Object, TKwprotected) */
void VIRTUAL_parser_prod__AProtectedVisibility__n_kwprotected_61d(val* self, val* p0) {
parser_prod__AProtectedVisibility__n_kwprotected_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AProtectedVisibility#visit_all for (self: AProtectedVisibility, Visitor) */
void parser_prod__AProtectedVisibility__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwprotected */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AProtectedVisibility___n_kwprotected].val; /* _n_kwprotected on <self:AProtectedVisibility> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwprotected");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 491);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AProtectedVisibility#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AProtectedVisibility__visit_all(val* self, val* p0) {
parser_prod__AProtectedVisibility__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AIntrudeVisibility#empty_init for (self: AIntrudeVisibility) */
void parser_prod__AIntrudeVisibility__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AIntrudeVisibility#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AIntrudeVisibility__empty_init(val* self) {
parser_prod__AIntrudeVisibility__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AIntrudeVisibility#init_aintrudevisibility for (self: AIntrudeVisibility, nullable TKwintrude) */
void parser_prod__AIntrudeVisibility__init_aintrudevisibility(val* self, val* p0) {
val* var_n_kwintrude /* var n_kwintrude: nullable TKwintrude */;
var_n_kwintrude = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AIntrudeVisibility__empty_init]))(self) /* empty_init on <self:AIntrudeVisibility>*/;
if (var_n_kwintrude == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 502);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AIntrudeVisibility___n_kwintrude].val = var_n_kwintrude; /* _n_kwintrude on <self:AIntrudeVisibility> */
if (var_n_kwintrude == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 503);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_kwintrude->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwintrude, self) /* parent= on <var_n_kwintrude:nullable TKwintrude>*/;
}
RET_LABEL:;
}
/* method parser_prod#AIntrudeVisibility#init_aintrudevisibility for (self: Object, nullable TKwintrude) */
void VIRTUAL_parser_prod__AIntrudeVisibility__init_aintrudevisibility(val* self, val* p0) {
parser_prod__AIntrudeVisibility__init_aintrudevisibility(self, p0);
RET_LABEL:;
}
/* method parser_prod#AIntrudeVisibility#replace_child for (self: AIntrudeVisibility, ANode, nullable ANode) */
void parser_prod__AIntrudeVisibility__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwintrude */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AIntrudeVisibility___n_kwintrude].val; /* _n_kwintrude on <self:AIntrudeVisibility> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwintrude");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 508);
show_backtrace(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TKwintrude>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwintrude */
cltype = type_parser_nodes__TKwintrude.color;
idtype = type_parser_nodes__TKwintrude.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 511);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AIntrudeVisibility___n_kwintrude].val = var_new_child; /* _n_kwintrude on <self:AIntrudeVisibility> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 514);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AIntrudeVisibility#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AIntrudeVisibility__replace_child(val* self, val* p0, val* p1) {
parser_prod__AIntrudeVisibility__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AIntrudeVisibility#n_kwintrude= for (self: AIntrudeVisibility, TKwintrude) */
void parser_prod__AIntrudeVisibility__n_kwintrude_61d(val* self, val* p0) {
val* var_node /* var node: TKwintrude */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AIntrudeVisibility___n_kwintrude].val = var_node; /* _n_kwintrude on <self:AIntrudeVisibility> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwintrude>*/;
RET_LABEL:;
}
/* method parser_prod#AIntrudeVisibility#n_kwintrude= for (self: Object, TKwintrude) */
void VIRTUAL_parser_prod__AIntrudeVisibility__n_kwintrude_61d(val* self, val* p0) {
parser_prod__AIntrudeVisibility__n_kwintrude_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AIntrudeVisibility#visit_all for (self: AIntrudeVisibility, Visitor) */
void parser_prod__AIntrudeVisibility__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwintrude */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AIntrudeVisibility___n_kwintrude].val; /* _n_kwintrude on <self:AIntrudeVisibility> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwintrude");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 529);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AIntrudeVisibility#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AIntrudeVisibility__visit_all(val* self, val* p0) {
parser_prod__AIntrudeVisibility__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#empty_init for (self: AStdClassdef) */
void parser_prod__AStdClassdef__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AStdClassdef__empty_init(val* self) {
parser_prod__AStdClassdef__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#init_astdclassdef for (self: AStdClassdef, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable AClasskind, nullable TClassid, Collection[Object], nullable AAnnotations, nullable AExternCodeBlock, Collection[Object], Collection[Object], nullable TKwend) */
void parser_prod__AStdClassdef__init_astdclassdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8, val* p9, val* p10) {
val* var_n_doc /* var n_doc: nullable ADoc */;
val* var_n_kwredef /* var n_kwredef: nullable TKwredef */;
val* var_n_visibility /* var n_visibility: nullable AVisibility */;
val* var_n_classkind /* var n_classkind: nullable AClasskind */;
val* var_n_id /* var n_id: nullable TClassid */;
val* var_n_formaldefs /* var n_formaldefs: Collection[Object] */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var_n_extern_code_block /* var n_extern_code_block: nullable AExternCodeBlock */;
val* var_n_superclasses /* var n_superclasses: Collection[Object] */;
val* var_n_propdefs /* var n_propdefs: Collection[Object] */;
val* var_n_kwend /* var n_kwend: nullable TKwend */;
val* var /* : null */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
short int var5 /* : Bool */;
val* var6 /* : Iterator[nullable Object] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_n /* var n: Object */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var10 /* : ANodes[AFormaldef] */;
val* var11 /* : null */;
short int var12 /* : Bool */;
val* var13 /* : null */;
short int var14 /* : Bool */;
val* var15 /* : Iterator[nullable Object] */;
short int var16 /* : Bool */;
val* var17 /* : nullable Object */;
val* var_n18 /* var n: Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var22 /* : ANodes[ASuperclass] */;
val* var24 /* : Iterator[nullable Object] */;
short int var25 /* : Bool */;
val* var26 /* : nullable Object */;
val* var_n27 /* var n: Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var31 /* : ANodes[APropdef] */;
var_n_doc = p0;
var_n_kwredef = p1;
var_n_visibility = p2;
var_n_classkind = p3;
var_n_id = p4;
var_n_formaldefs = p5;
var_n_annotations = p6;
var_n_extern_code_block = p7;
var_n_superclasses = p8;
var_n_propdefs = p9;
var_n_kwend = p10;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AStdClassdef__empty_init]))(self) /* empty_init on <self:AStdClassdef>*/;
self->attrs[COLOR_parser_nodes__AStdClassdef___n_doc].val = var_n_doc; /* _n_doc on <self:AStdClassdef> */
var = NULL;
if (var_n_doc == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_doc->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_doc, self) /* parent= on <var_n_doc:nullable ADoc(ADoc)>*/;
} else {
}
self->attrs[COLOR_parser_nodes__AStdClassdef___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:AStdClassdef> */
var2 = NULL;
if (var_n_kwredef == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_n_kwredef->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwredef, self) /* parent= on <var_n_kwredef:nullable TKwredef(TKwredef)>*/;
} else {
}
if (var_n_visibility == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 558);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AStdClassdef___n_visibility].val = var_n_visibility; /* _n_visibility on <self:AStdClassdef> */
if (var_n_visibility == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 559);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_visibility->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_visibility, self) /* parent= on <var_n_visibility:nullable AVisibility>*/;
}
if (var_n_classkind == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 560);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AStdClassdef___n_classkind].val = var_n_classkind; /* _n_classkind on <self:AStdClassdef> */
if (var_n_classkind == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 561);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_classkind->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_classkind, self) /* parent= on <var_n_classkind:nullable AClasskind>*/;
}
self->attrs[COLOR_parser_nodes__AStdClassdef___n_id].val = var_n_id; /* _n_id on <self:AStdClassdef> */
var4 = NULL;
if (var_n_id == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (var5){
((void (*)(val*, val*))(var_n_id->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_id, self) /* parent= on <var_n_id:nullable TClassid(TClassid)>*/;
} else {
}
var6 = ((val* (*)(val*))(var_n_formaldefs->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_n_formaldefs) /* iterator on <var_n_formaldefs:Collection[Object]>*/;
for(;;) {
var7 = ((short int (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var6) /* is_ok on <var6:Iterator[nullable Object]>*/;
if(!var7) break;
var8 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__item]))(var6) /* item on <var6:Iterator[nullable Object]>*/;
var_n = var8;
/* <var_n:Object> isa AFormaldef */
cltype = type_parser_nodes__AFormaldef.color;
idtype = type_parser_nodes__AFormaldef.id;
if(cltype >= var_n->type->table_size) {
var9 = 0;
} else {
var9 = var_n->type->type_table[cltype] == idtype;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 567);
show_backtrace(1);
}
var10 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_formaldefs].val; /* _n_formaldefs on <self:AStdClassdef> */
if (var10 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_formaldefs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 568);
show_backtrace(1);
}
((void (*)(val*, val*))(var10->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var10, var_n) /* add on <var10:ANodes[AFormaldef]>*/;
((void (*)(val*, val*))(var_n->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n, self) /* parent= on <var_n:Object(AFormaldef)>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__next]))(var6) /* next on <var6:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AStdClassdef> */
var11 = NULL;
if (var_n_annotations == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (var12){
((void (*)(val*, val*))(var_n_annotations->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_annotations, self) /* parent= on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
} else {
}
self->attrs[COLOR_parser_nodes__AStdClassdef___n_extern_code_block].val = var_n_extern_code_block; /* _n_extern_code_block on <self:AStdClassdef> */
var13 = NULL;
if (var_n_extern_code_block == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (var14){
((void (*)(val*, val*))(var_n_extern_code_block->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_extern_code_block, self) /* parent= on <var_n_extern_code_block:nullable AExternCodeBlock(AExternCodeBlock)>*/;
} else {
}
var15 = ((val* (*)(val*))(var_n_superclasses->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_n_superclasses) /* iterator on <var_n_superclasses:Collection[Object]>*/;
for(;;) {
var16 = ((short int (*)(val*))(var15->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var15) /* is_ok on <var15:Iterator[nullable Object]>*/;
if(!var16) break;
var17 = ((val* (*)(val*))(var15->class->vft[COLOR_abstract_collection__Iterator__item]))(var15) /* item on <var15:Iterator[nullable Object]>*/;
var_n18 = var17;
/* <var_n18:Object> isa ASuperclass */
cltype20 = type_parser_nodes__ASuperclass.color;
idtype21 = type_parser_nodes__ASuperclass.id;
if(cltype20 >= var_n18->type->table_size) {
var19 = 0;
} else {
var19 = var_n18->type->type_table[cltype20] == idtype21;
}
if (!var19) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 580);
show_backtrace(1);
}
var22 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_superclasses].val; /* _n_superclasses on <self:AStdClassdef> */
if (var22 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_superclasses");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 581);
show_backtrace(1);
}
((void (*)(val*, val*))(var22->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var22, var_n18) /* add on <var22:ANodes[ASuperclass]>*/;
((void (*)(val*, val*))(var_n18->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n18, self) /* parent= on <var_n18:Object(ASuperclass)>*/;
CONTINUE_label23: (void)0;
((void (*)(val*))(var15->class->vft[COLOR_abstract_collection__Iterator__next]))(var15) /* next on <var15:Iterator[nullable Object]>*/;
}
BREAK_label23: (void)0;
var24 = ((val* (*)(val*))(var_n_propdefs->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_n_propdefs) /* iterator on <var_n_propdefs:Collection[Object]>*/;
for(;;) {
var25 = ((short int (*)(val*))(var24->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var24) /* is_ok on <var24:Iterator[nullable Object]>*/;
if(!var25) break;
var26 = ((val* (*)(val*))(var24->class->vft[COLOR_abstract_collection__Iterator__item]))(var24) /* item on <var24:Iterator[nullable Object]>*/;
var_n27 = var26;
/* <var_n27:Object> isa APropdef */
cltype29 = type_parser_nodes__APropdef.color;
idtype30 = type_parser_nodes__APropdef.id;
if(cltype29 >= var_n27->type->table_size) {
var28 = 0;
} else {
var28 = var_n27->type->type_table[cltype29] == idtype30;
}
if (!var28) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 585);
show_backtrace(1);
}
var31 = self->attrs[COLOR_parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:AStdClassdef> */
if (var31 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_propdefs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 586);
show_backtrace(1);
}
((void (*)(val*, val*))(var31->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var31, var_n27) /* add on <var31:ANodes[APropdef]>*/;
((void (*)(val*, val*))(var_n27->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n27, self) /* parent= on <var_n27:Object(APropdef)>*/;
CONTINUE_label32: (void)0;
((void (*)(val*))(var24->class->vft[COLOR_abstract_collection__Iterator__next]))(var24) /* next on <var24:Iterator[nullable Object]>*/;
}
BREAK_label32: (void)0;
if (var_n_kwend == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 589);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AStdClassdef___n_kwend].val = var_n_kwend; /* _n_kwend on <self:AStdClassdef> */
if (var_n_kwend == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 590);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_kwend->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwend, self) /* parent= on <var_n_kwend:nullable TKwend>*/;
}
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#init_astdclassdef for (self: Object, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable AClasskind, nullable TClassid, Collection[Object], nullable AAnnotations, nullable AExternCodeBlock, Collection[Object], Collection[Object], nullable TKwend) */
void VIRTUAL_parser_prod__AStdClassdef__init_astdclassdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8, val* p9, val* p10) {
parser_prod__AStdClassdef__init_astdclassdef(self, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#replace_child for (self: AStdClassdef, ANode, nullable ANode) */
void parser_prod__AStdClassdef__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable ADoc */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : null */;
val* var6 /* : nullable TKwredef */;
short int var7 /* : Bool */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : null */;
val* var14 /* : AVisibility */;
short int var15 /* : Bool */;
val* var16 /* : null */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : AClasskind */;
short int var22 /* : Bool */;
val* var23 /* : null */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : nullable TClassid */;
short int var29 /* : Bool */;
val* var30 /* : null */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
val* var35 /* : null */;
val* var36 /* : Range[Int] */;
long var37 /* : Int */;
val* var38 /* : ANodes[AFormaldef] */;
long var39 /* : Int */;
val* var40 /* : Discrete */;
val* var41 /* : Discrete */;
val* var42 /* : Iterator[nullable Object] */;
short int var43 /* : Bool */;
val* var44 /* : nullable Object */;
long var_i /* var i: Int */;
long var45 /* : Int */;
val* var46 /* : ANodes[AFormaldef] */;
val* var47 /* : nullable Object */;
short int var48 /* : Bool */;
val* var49 /* : null */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
int cltype52;
int idtype53;
val* var54 /* : ANodes[AFormaldef] */;
val* var55 /* : ANodes[AFormaldef] */;
val* var56 /* : nullable AAnnotations */;
short int var57 /* : Bool */;
val* var58 /* : null */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
int cltype61;
int idtype62;
val* var63 /* : null */;
val* var64 /* : nullable AExternCodeBlock */;
short int var65 /* : Bool */;
val* var66 /* : null */;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
int cltype69;
int idtype70;
val* var71 /* : null */;
val* var72 /* : Range[Int] */;
long var73 /* : Int */;
val* var74 /* : ANodes[ASuperclass] */;
long var75 /* : Int */;
val* var76 /* : Discrete */;
val* var77 /* : Discrete */;
val* var78 /* : Iterator[nullable Object] */;
short int var79 /* : Bool */;
val* var80 /* : nullable Object */;
long var_i81 /* var i: Int */;
long var82 /* : Int */;
val* var83 /* : ANodes[ASuperclass] */;
val* var84 /* : nullable Object */;
short int var85 /* : Bool */;
val* var86 /* : null */;
short int var87 /* : Bool */;
short int var88 /* : Bool */;
int cltype89;
int idtype90;
val* var91 /* : ANodes[ASuperclass] */;
val* var92 /* : ANodes[ASuperclass] */;
val* var94 /* : Range[Int] */;
long var95 /* : Int */;
val* var96 /* : ANodes[APropdef] */;
long var97 /* : Int */;
val* var98 /* : Discrete */;
val* var99 /* : Discrete */;
val* var100 /* : Iterator[nullable Object] */;
short int var101 /* : Bool */;
val* var102 /* : nullable Object */;
long var_i103 /* var i: Int */;
long var104 /* : Int */;
val* var105 /* : ANodes[APropdef] */;
val* var106 /* : nullable Object */;
short int var107 /* : Bool */;
val* var108 /* : null */;
short int var109 /* : Bool */;
short int var110 /* : Bool */;
int cltype111;
int idtype112;
val* var113 /* : ANodes[APropdef] */;
val* var114 /* : ANodes[APropdef] */;
val* var116 /* : TKwend */;
short int var117 /* : Bool */;
val* var118 /* : null */;
short int var119 /* : Bool */;
short int var120 /* : Bool */;
int cltype121;
int idtype122;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AStdClassdef___n_doc].val; /* _n_doc on <self:AStdClassdef> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:nullable ADoc>*/;
}
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa ADoc */
cltype = type_parser_nodes__ADoc.color;
idtype = type_parser_nodes__ADoc.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 598);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AStdClassdef___n_doc].val = var_new_child; /* _n_doc on <self:AStdClassdef> */
} else {
var5 = NULL;
self->attrs[COLOR_parser_nodes__AStdClassdef___n_doc].val = var5; /* _n_doc on <self:AStdClassdef> */
}
goto RET_LABEL;
} else {
}
var6 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_kwredef].val; /* _n_kwredef on <self:AStdClassdef> */
if (var6 == NULL) {
var7 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var7 = ((short int (*)(val*, val*))(var6->class->vft[COLOR_kernel__Object___61d_61d]))(var6, var_old_child) /* == on <var6:nullable TKwredef>*/;
}
if (var7){
var8 = NULL;
if (var_new_child == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (var9){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwredef */
cltype11 = type_parser_nodes__TKwredef.color;
idtype12 = type_parser_nodes__TKwredef.id;
if(cltype11 >= var_new_child->type->table_size) {
var10 = 0;
} else {
var10 = var_new_child->type->type_table[cltype11] == idtype12;
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 608);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AStdClassdef___n_kwredef].val = var_new_child; /* _n_kwredef on <self:AStdClassdef> */
} else {
var13 = NULL;
self->attrs[COLOR_parser_nodes__AStdClassdef___n_kwredef].val = var13; /* _n_kwredef on <self:AStdClassdef> */
}
goto RET_LABEL;
} else {
}
var14 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_visibility].val; /* _n_visibility on <self:AStdClassdef> */
if (var14 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_visibility");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 615);
show_backtrace(1);
}
var15 = ((short int (*)(val*, val*))(var14->class->vft[COLOR_kernel__Object___61d_61d]))(var14, var_old_child) /* == on <var14:AVisibility>*/;
if (var15){
var16 = NULL;
if (var_new_child == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (var17){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AVisibility */
cltype19 = type_parser_nodes__AVisibility.color;
idtype20 = type_parser_nodes__AVisibility.id;
if(cltype19 >= var_new_child->type->table_size) {
var18 = 0;
} else {
var18 = var_new_child->type->type_table[cltype19] == idtype20;
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 618);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AStdClassdef___n_visibility].val = var_new_child; /* _n_visibility on <self:AStdClassdef> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 621);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var21 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_classkind].val; /* _n_classkind on <self:AStdClassdef> */
if (var21 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_classkind");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 625);
show_backtrace(1);
}
var22 = ((short int (*)(val*, val*))(var21->class->vft[COLOR_kernel__Object___61d_61d]))(var21, var_old_child) /* == on <var21:AClasskind>*/;
if (var22){
var23 = NULL;
if (var_new_child == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (var24){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AClasskind */
cltype26 = type_parser_nodes__AClasskind.color;
idtype27 = type_parser_nodes__AClasskind.id;
if(cltype26 >= var_new_child->type->table_size) {
var25 = 0;
} else {
var25 = var_new_child->type->type_table[cltype26] == idtype27;
}
if (!var25) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 628);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AStdClassdef___n_classkind].val = var_new_child; /* _n_classkind on <self:AStdClassdef> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 631);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var28 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_id].val; /* _n_id on <self:AStdClassdef> */
if (var28 == NULL) {
var29 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var29 = ((short int (*)(val*, val*))(var28->class->vft[COLOR_kernel__Object___61d_61d]))(var28, var_old_child) /* == on <var28:nullable TClassid>*/;
}
if (var29){
var30 = NULL;
if (var_new_child == NULL) {
var31 = 0; /* is null */
} else {
var31 = 1; /* arg is null and recv is not */
}
if (var31){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TClassid */
cltype33 = type_parser_nodes__TClassid.color;
idtype34 = type_parser_nodes__TClassid.id;
if(cltype33 >= var_new_child->type->table_size) {
var32 = 0;
} else {
var32 = var_new_child->type->type_table[cltype33] == idtype34;
}
if (!var32) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 638);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AStdClassdef___n_id].val = var_new_child; /* _n_id on <self:AStdClassdef> */
} else {
var35 = NULL;
self->attrs[COLOR_parser_nodes__AStdClassdef___n_id].val = var35; /* _n_id on <self:AStdClassdef> */
}
goto RET_LABEL;
} else {
}
var36 = NEW_range__Range(&type_range__Rangekernel__Int);
var37 = 0;
var38 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_formaldefs].val; /* _n_formaldefs on <self:AStdClassdef> */
if (var38 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_formaldefs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 645);
show_backtrace(1);
}
var39 = ((long (*)(val*))(var38->class->vft[COLOR_abstract_collection__Collection__length]))(var38) /* length on <var38:ANodes[AFormaldef]>*/;
var40 = BOX_kernel__Int(var37); /* autobox from Int to Discrete */
var41 = BOX_kernel__Int(var39); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var36->class->vft[COLOR_range__Range__without_last]))(var36, var40, var41) /* without_last on <var36:Range[Int]>*/;
var42 = ((val* (*)(val*))(var36->class->vft[COLOR_abstract_collection__Collection__iterator]))(var36) /* iterator on <var36:Range[Int]>*/;
for(;;) {
var43 = ((short int (*)(val*))(var42->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var42) /* is_ok on <var42:Iterator[nullable Object]>*/;
if(!var43) break;
var44 = ((val* (*)(val*))(var42->class->vft[COLOR_abstract_collection__Iterator__item]))(var42) /* item on <var42:Iterator[nullable Object]>*/;
var45 = ((struct instance_kernel__Int*)var44)->value; /* autounbox from nullable Object to Int */;
var_i = var45;
var46 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_formaldefs].val; /* _n_formaldefs on <self:AStdClassdef> */
if (var46 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_formaldefs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 646);
show_backtrace(1);
}
var47 = ((val* (*)(val*, long))(var46->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var46, var_i) /* [] on <var46:ANodes[AFormaldef]>*/;
var48 = ((short int (*)(val*, val*))(var47->class->vft[COLOR_kernel__Object___61d_61d]))(var47, var_old_child) /* == on <var47:nullable Object(AFormaldef)>*/;
if (var48){
var49 = NULL;
if (var_new_child == NULL) {
var50 = 0; /* is null */
} else {
var50 = 1; /* arg is null and recv is not */
}
if (var50){
/* <var_new_child:nullable ANode(ANode)> isa AFormaldef */
cltype52 = type_parser_nodes__AFormaldef.color;
idtype53 = type_parser_nodes__AFormaldef.id;
if(cltype52 >= var_new_child->type->table_size) {
var51 = 0;
} else {
var51 = var_new_child->type->type_table[cltype52] == idtype53;
}
if (!var51) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 648);
show_backtrace(1);
}
var54 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_formaldefs].val; /* _n_formaldefs on <self:AStdClassdef> */
if (var54 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_formaldefs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 649);
show_backtrace(1);
}
((void (*)(val*, long, val*))(var54->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var54, var_i, var_new_child) /* []= on <var54:ANodes[AFormaldef]>*/;
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(AFormaldef)>*/;
} else {
var55 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_formaldefs].val; /* _n_formaldefs on <self:AStdClassdef> */
if (var55 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_formaldefs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 652);
show_backtrace(1);
}
((void (*)(val*, long))(var55->class->vft[COLOR_abstract_collection__Sequence__remove_at]))(var55, var_i) /* remove_at on <var55:ANodes[AFormaldef]>*/;
}
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var42->class->vft[COLOR_abstract_collection__Iterator__next]))(var42) /* next on <var42:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var56 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AStdClassdef> */
if (var56 == NULL) {
var57 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var57 = ((short int (*)(val*, val*))(var56->class->vft[COLOR_kernel__Object___61d_61d]))(var56, var_old_child) /* == on <var56:nullable AAnnotations>*/;
}
if (var57){
var58 = NULL;
if (var_new_child == NULL) {
var59 = 0; /* is null */
} else {
var59 = 1; /* arg is null and recv is not */
}
if (var59){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AAnnotations */
cltype61 = type_parser_nodes__AAnnotations.color;
idtype62 = type_parser_nodes__AAnnotations.id;
if(cltype61 >= var_new_child->type->table_size) {
var60 = 0;
} else {
var60 = var_new_child->type->type_table[cltype61] == idtype62;
}
if (!var60) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 660);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_new_child; /* _n_annotations on <self:AStdClassdef> */
} else {
var63 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var63; /* _n_annotations on <self:AStdClassdef> */
}
goto RET_LABEL;
} else {
}
var64 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AStdClassdef> */
if (var64 == NULL) {
var65 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var65 = ((short int (*)(val*, val*))(var64->class->vft[COLOR_kernel__Object___61d_61d]))(var64, var_old_child) /* == on <var64:nullable AExternCodeBlock>*/;
}
if (var65){
var66 = NULL;
if (var_new_child == NULL) {
var67 = 0; /* is null */
} else {
var67 = 1; /* arg is null and recv is not */
}
if (var67){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AExternCodeBlock */
cltype69 = type_parser_nodes__AExternCodeBlock.color;
idtype70 = type_parser_nodes__AExternCodeBlock.id;
if(cltype69 >= var_new_child->type->table_size) {
var68 = 0;
} else {
var68 = var_new_child->type->type_table[cltype69] == idtype70;
}
if (!var68) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 670);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AStdClassdef___n_extern_code_block].val = var_new_child; /* _n_extern_code_block on <self:AStdClassdef> */
} else {
var71 = NULL;
self->attrs[COLOR_parser_nodes__AStdClassdef___n_extern_code_block].val = var71; /* _n_extern_code_block on <self:AStdClassdef> */
}
goto RET_LABEL;
} else {
}
var72 = NEW_range__Range(&type_range__Rangekernel__Int);
var73 = 0;
var74 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_superclasses].val; /* _n_superclasses on <self:AStdClassdef> */
if (var74 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_superclasses");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 677);
show_backtrace(1);
}
var75 = ((long (*)(val*))(var74->class->vft[COLOR_abstract_collection__Collection__length]))(var74) /* length on <var74:ANodes[ASuperclass]>*/;
var76 = BOX_kernel__Int(var73); /* autobox from Int to Discrete */
var77 = BOX_kernel__Int(var75); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var72->class->vft[COLOR_range__Range__without_last]))(var72, var76, var77) /* without_last on <var72:Range[Int]>*/;
var78 = ((val* (*)(val*))(var72->class->vft[COLOR_abstract_collection__Collection__iterator]))(var72) /* iterator on <var72:Range[Int]>*/;
for(;;) {
var79 = ((short int (*)(val*))(var78->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var78) /* is_ok on <var78:Iterator[nullable Object]>*/;
if(!var79) break;
var80 = ((val* (*)(val*))(var78->class->vft[COLOR_abstract_collection__Iterator__item]))(var78) /* item on <var78:Iterator[nullable Object]>*/;
var82 = ((struct instance_kernel__Int*)var80)->value; /* autounbox from nullable Object to Int */;
var_i81 = var82;
var83 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_superclasses].val; /* _n_superclasses on <self:AStdClassdef> */
if (var83 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_superclasses");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 678);
show_backtrace(1);
}
var84 = ((val* (*)(val*, long))(var83->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var83, var_i81) /* [] on <var83:ANodes[ASuperclass]>*/;
var85 = ((short int (*)(val*, val*))(var84->class->vft[COLOR_kernel__Object___61d_61d]))(var84, var_old_child) /* == on <var84:nullable Object(ASuperclass)>*/;
if (var85){
var86 = NULL;
if (var_new_child == NULL) {
var87 = 0; /* is null */
} else {
var87 = 1; /* arg is null and recv is not */
}
if (var87){
/* <var_new_child:nullable ANode(ANode)> isa ASuperclass */
cltype89 = type_parser_nodes__ASuperclass.color;
idtype90 = type_parser_nodes__ASuperclass.id;
if(cltype89 >= var_new_child->type->table_size) {
var88 = 0;
} else {
var88 = var_new_child->type->type_table[cltype89] == idtype90;
}
if (!var88) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 680);
show_backtrace(1);
}
var91 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_superclasses].val; /* _n_superclasses on <self:AStdClassdef> */
if (var91 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_superclasses");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 681);
show_backtrace(1);
}
((void (*)(val*, long, val*))(var91->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var91, var_i81, var_new_child) /* []= on <var91:ANodes[ASuperclass]>*/;
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ASuperclass)>*/;
} else {
var92 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_superclasses].val; /* _n_superclasses on <self:AStdClassdef> */
if (var92 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_superclasses");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 684);
show_backtrace(1);
}
((void (*)(val*, long))(var92->class->vft[COLOR_abstract_collection__Sequence__remove_at]))(var92, var_i81) /* remove_at on <var92:ANodes[ASuperclass]>*/;
}
goto RET_LABEL;
} else {
}
CONTINUE_label93: (void)0;
((void (*)(val*))(var78->class->vft[COLOR_abstract_collection__Iterator__next]))(var78) /* next on <var78:Iterator[nullable Object]>*/;
}
BREAK_label93: (void)0;
var94 = NEW_range__Range(&type_range__Rangekernel__Int);
var95 = 0;
var96 = self->attrs[COLOR_parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:AStdClassdef> */
if (var96 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_propdefs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 689);
show_backtrace(1);
}
var97 = ((long (*)(val*))(var96->class->vft[COLOR_abstract_collection__Collection__length]))(var96) /* length on <var96:ANodes[APropdef]>*/;
var98 = BOX_kernel__Int(var95); /* autobox from Int to Discrete */
var99 = BOX_kernel__Int(var97); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var94->class->vft[COLOR_range__Range__without_last]))(var94, var98, var99) /* without_last on <var94:Range[Int]>*/;
var100 = ((val* (*)(val*))(var94->class->vft[COLOR_abstract_collection__Collection__iterator]))(var94) /* iterator on <var94:Range[Int]>*/;
for(;;) {
var101 = ((short int (*)(val*))(var100->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var100) /* is_ok on <var100:Iterator[nullable Object]>*/;
if(!var101) break;
var102 = ((val* (*)(val*))(var100->class->vft[COLOR_abstract_collection__Iterator__item]))(var100) /* item on <var100:Iterator[nullable Object]>*/;
var104 = ((struct instance_kernel__Int*)var102)->value; /* autounbox from nullable Object to Int */;
var_i103 = var104;
var105 = self->attrs[COLOR_parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:AStdClassdef> */
if (var105 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_propdefs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 690);
show_backtrace(1);
}
var106 = ((val* (*)(val*, long))(var105->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var105, var_i103) /* [] on <var105:ANodes[APropdef]>*/;
var107 = ((short int (*)(val*, val*))(var106->class->vft[COLOR_kernel__Object___61d_61d]))(var106, var_old_child) /* == on <var106:nullable Object(APropdef)>*/;
if (var107){
var108 = NULL;
if (var_new_child == NULL) {
var109 = 0; /* is null */
} else {
var109 = 1; /* arg is null and recv is not */
}
if (var109){
/* <var_new_child:nullable ANode(ANode)> isa APropdef */
cltype111 = type_parser_nodes__APropdef.color;
idtype112 = type_parser_nodes__APropdef.id;
if(cltype111 >= var_new_child->type->table_size) {
var110 = 0;
} else {
var110 = var_new_child->type->type_table[cltype111] == idtype112;
}
if (!var110) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 692);
show_backtrace(1);
}
var113 = self->attrs[COLOR_parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:AStdClassdef> */
if (var113 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_propdefs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 693);
show_backtrace(1);
}
((void (*)(val*, long, val*))(var113->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var113, var_i103, var_new_child) /* []= on <var113:ANodes[APropdef]>*/;
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(APropdef)>*/;
} else {
var114 = self->attrs[COLOR_parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:AStdClassdef> */
if (var114 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_propdefs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 696);
show_backtrace(1);
}
((void (*)(val*, long))(var114->class->vft[COLOR_abstract_collection__Sequence__remove_at]))(var114, var_i103) /* remove_at on <var114:ANodes[APropdef]>*/;
}
goto RET_LABEL;
} else {
}
CONTINUE_label115: (void)0;
((void (*)(val*))(var100->class->vft[COLOR_abstract_collection__Iterator__next]))(var100) /* next on <var100:Iterator[nullable Object]>*/;
}
BREAK_label115: (void)0;
var116 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_kwend].val; /* _n_kwend on <self:AStdClassdef> */
if (var116 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwend");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 701);
show_backtrace(1);
}
var117 = ((short int (*)(val*, val*))(var116->class->vft[COLOR_kernel__Object___61d_61d]))(var116, var_old_child) /* == on <var116:TKwend>*/;
if (var117){
var118 = NULL;
if (var_new_child == NULL) {
var119 = 0; /* is null */
} else {
var119 = 1; /* arg is null and recv is not */
}
if (var119){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwend */
cltype121 = type_parser_nodes__TKwend.color;
idtype122 = type_parser_nodes__TKwend.id;
if(cltype121 >= var_new_child->type->table_size) {
var120 = 0;
} else {
var120 = var_new_child->type->type_table[cltype121] == idtype122;
}
if (!var120) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 704);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AStdClassdef___n_kwend].val = var_new_child; /* _n_kwend on <self:AStdClassdef> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 707);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AStdClassdef__replace_child(val* self, val* p0, val* p1) {
parser_prod__AStdClassdef__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#n_doc= for (self: AStdClassdef, nullable ADoc) */
void parser_prod__AStdClassdef__n_doc_61d(val* self, val* p0) {
val* var_node /* var node: nullable ADoc */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AStdClassdef___n_doc].val = var_node; /* _n_doc on <self:AStdClassdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable ADoc(ADoc)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#n_doc= for (self: Object, nullable ADoc) */
void VIRTUAL_parser_prod__AStdClassdef__n_doc_61d(val* self, val* p0) {
parser_prod__AStdClassdef__n_doc_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#n_kwredef= for (self: AStdClassdef, nullable TKwredef) */
void parser_prod__AStdClassdef__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AStdClassdef___n_kwredef].val = var_node; /* _n_kwredef on <self:AStdClassdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable TKwredef(TKwredef)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#n_kwredef= for (self: Object, nullable TKwredef) */
void VIRTUAL_parser_prod__AStdClassdef__n_kwredef_61d(val* self, val* p0) {
parser_prod__AStdClassdef__n_kwredef_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#n_visibility= for (self: AStdClassdef, AVisibility) */
void parser_prod__AStdClassdef__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: AVisibility */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AStdClassdef___n_visibility].val = var_node; /* _n_visibility on <self:AStdClassdef> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AVisibility>*/;
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#n_visibility= for (self: Object, AVisibility) */
void VIRTUAL_parser_prod__AStdClassdef__n_visibility_61d(val* self, val* p0) {
parser_prod__AStdClassdef__n_visibility_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#n_classkind= for (self: AStdClassdef, AClasskind) */
void parser_prod__AStdClassdef__n_classkind_61d(val* self, val* p0) {
val* var_node /* var node: AClasskind */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AStdClassdef___n_classkind].val = var_node; /* _n_classkind on <self:AStdClassdef> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AClasskind>*/;
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#n_classkind= for (self: Object, AClasskind) */
void VIRTUAL_parser_prod__AStdClassdef__n_classkind_61d(val* self, val* p0) {
parser_prod__AStdClassdef__n_classkind_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#n_id= for (self: AStdClassdef, nullable TClassid) */
void parser_prod__AStdClassdef__n_id_61d(val* self, val* p0) {
val* var_node /* var node: nullable TClassid */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AStdClassdef___n_id].val = var_node; /* _n_id on <self:AStdClassdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable TClassid(TClassid)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#n_id= for (self: Object, nullable TClassid) */
void VIRTUAL_parser_prod__AStdClassdef__n_id_61d(val* self, val* p0) {
parser_prod__AStdClassdef__n_id_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#n_annotations= for (self: AStdClassdef, nullable AAnnotations) */
void parser_prod__AStdClassdef__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AStdClassdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AAnnotations(AAnnotations)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__AStdClassdef__n_annotations_61d(val* self, val* p0) {
parser_prod__AStdClassdef__n_annotations_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#n_extern_code_block= for (self: AStdClassdef, nullable AExternCodeBlock) */
void parser_prod__AStdClassdef__n_extern_code_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExternCodeBlock */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AStdClassdef___n_extern_code_block].val = var_node; /* _n_extern_code_block on <self:AStdClassdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AExternCodeBlock(AExternCodeBlock)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#n_extern_code_block= for (self: Object, nullable AExternCodeBlock) */
void VIRTUAL_parser_prod__AStdClassdef__n_extern_code_block_61d(val* self, val* p0) {
parser_prod__AStdClassdef__n_extern_code_block_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#n_kwend= for (self: AStdClassdef, TKwend) */
void parser_prod__AStdClassdef__n_kwend_61d(val* self, val* p0) {
val* var_node /* var node: TKwend */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AStdClassdef___n_kwend].val = var_node; /* _n_kwend on <self:AStdClassdef> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwend>*/;
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#n_kwend= for (self: Object, TKwend) */
void VIRTUAL_parser_prod__AStdClassdef__n_kwend_61d(val* self, val* p0) {
parser_prod__AStdClassdef__n_kwend_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#visit_all for (self: AStdClassdef, Visitor) */
void parser_prod__AStdClassdef__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable ADoc */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : nullable ADoc */;
val* var4 /* : nullable TKwredef */;
val* var5 /* : null */;
short int var6 /* : Bool */;
val* var7 /* : nullable TKwredef */;
val* var8 /* : AVisibility */;
val* var9 /* : AClasskind */;
val* var10 /* : nullable TClassid */;
val* var11 /* : null */;
short int var12 /* : Bool */;
val* var13 /* : nullable TClassid */;
val* var14 /* : ANodes[AFormaldef] */;
val* var15 /* : Iterator[nullable Object] */;
short int var16 /* : Bool */;
val* var17 /* : nullable Object */;
val* var_n /* var n: AFormaldef */;
val* var18 /* : nullable AAnnotations */;
val* var19 /* : null */;
short int var20 /* : Bool */;
val* var21 /* : nullable AAnnotations */;
val* var22 /* : nullable AExternCodeBlock */;
val* var23 /* : null */;
short int var24 /* : Bool */;
val* var25 /* : nullable AExternCodeBlock */;
val* var26 /* : ANodes[ASuperclass] */;
val* var27 /* : Iterator[nullable Object] */;
short int var28 /* : Bool */;
val* var29 /* : nullable Object */;
val* var_n30 /* var n: ASuperclass */;
val* var32 /* : ANodes[APropdef] */;
val* var33 /* : Iterator[nullable Object] */;
short int var34 /* : Bool */;
val* var35 /* : nullable Object */;
val* var_n36 /* var n: APropdef */;
val* var38 /* : TKwend */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AStdClassdef___n_doc].val; /* _n_doc on <self:AStdClassdef> */
var1 = NULL;
if (var == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (var2){
var3 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_doc].val; /* _n_doc on <self:AStdClassdef> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 768);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var3) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var4 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_kwredef].val; /* _n_kwredef on <self:AStdClassdef> */
var5 = NULL;
if (var4 == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (var6){
var7 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_kwredef].val; /* _n_kwredef on <self:AStdClassdef> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 771);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var7) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_visibility].val; /* _n_visibility on <self:AStdClassdef> */
if (var8 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_visibility");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 773);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var8) /* enter_visit on <var_v:Visitor>*/;
var9 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_classkind].val; /* _n_classkind on <self:AStdClassdef> */
if (var9 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_classkind");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 774);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var9) /* enter_visit on <var_v:Visitor>*/;
var10 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_id].val; /* _n_id on <self:AStdClassdef> */
var11 = NULL;
if (var10 == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (var12){
var13 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_id].val; /* _n_id on <self:AStdClassdef> */
if (var13 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 776);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var13) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var14 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_formaldefs].val; /* _n_formaldefs on <self:AStdClassdef> */
if (var14 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_formaldefs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 778);
show_backtrace(1);
}
var15 = ((val* (*)(val*))(var14->class->vft[COLOR_abstract_collection__Collection__iterator]))(var14) /* iterator on <var14:ANodes[AFormaldef]>*/;
for(;;) {
var16 = ((short int (*)(val*))(var15->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var15) /* is_ok on <var15:Iterator[nullable Object]>*/;
if(!var16) break;
var17 = ((val* (*)(val*))(var15->class->vft[COLOR_abstract_collection__Iterator__item]))(var15) /* item on <var15:Iterator[nullable Object]>*/;
var_n = var17;
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var_n) /* enter_visit on <var_v:Visitor>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var15->class->vft[COLOR_abstract_collection__Iterator__next]))(var15) /* next on <var15:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var18 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AStdClassdef> */
var19 = NULL;
if (var18 == NULL) {
var20 = 0; /* is null */
} else {
var20 = 1; /* arg is null and recv is not */
}
if (var20){
var21 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AStdClassdef> */
if (var21 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 782);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var21) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var22 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AStdClassdef> */
var23 = NULL;
if (var22 == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (var24){
var25 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AStdClassdef> */
if (var25 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 785);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var25) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var26 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_superclasses].val; /* _n_superclasses on <self:AStdClassdef> */
if (var26 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_superclasses");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 787);
show_backtrace(1);
}
var27 = ((val* (*)(val*))(var26->class->vft[COLOR_abstract_collection__Collection__iterator]))(var26) /* iterator on <var26:ANodes[ASuperclass]>*/;
for(;;) {
var28 = ((short int (*)(val*))(var27->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var27) /* is_ok on <var27:Iterator[nullable Object]>*/;
if(!var28) break;
var29 = ((val* (*)(val*))(var27->class->vft[COLOR_abstract_collection__Iterator__item]))(var27) /* item on <var27:Iterator[nullable Object]>*/;
var_n30 = var29;
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var_n30) /* enter_visit on <var_v:Visitor>*/;
CONTINUE_label31: (void)0;
((void (*)(val*))(var27->class->vft[COLOR_abstract_collection__Iterator__next]))(var27) /* next on <var27:Iterator[nullable Object]>*/;
}
BREAK_label31: (void)0;
var32 = self->attrs[COLOR_parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:AStdClassdef> */
if (var32 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_propdefs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 790);
show_backtrace(1);
}
var33 = ((val* (*)(val*))(var32->class->vft[COLOR_abstract_collection__Collection__iterator]))(var32) /* iterator on <var32:ANodes[APropdef]>*/;
for(;;) {
var34 = ((short int (*)(val*))(var33->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var33) /* is_ok on <var33:Iterator[nullable Object]>*/;
if(!var34) break;
var35 = ((val* (*)(val*))(var33->class->vft[COLOR_abstract_collection__Iterator__item]))(var33) /* item on <var33:Iterator[nullable Object]>*/;
var_n36 = var35;
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var_n36) /* enter_visit on <var_v:Visitor>*/;
CONTINUE_label37: (void)0;
((void (*)(val*))(var33->class->vft[COLOR_abstract_collection__Iterator__next]))(var33) /* next on <var33:Iterator[nullable Object]>*/;
}
BREAK_label37: (void)0;
var38 = self->attrs[COLOR_parser_nodes__AStdClassdef___n_kwend].val; /* _n_kwend on <self:AStdClassdef> */
if (var38 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwend");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 793);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var38) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AStdClassdef#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AStdClassdef__visit_all(val* self, val* p0) {
parser_prod__AStdClassdef__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ATopClassdef#empty_init for (self: ATopClassdef) */
void parser_prod__ATopClassdef__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ATopClassdef#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ATopClassdef__empty_init(val* self) {
parser_prod__ATopClassdef__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ATopClassdef#init_atopclassdef for (self: ATopClassdef, Collection[Object]) */
void parser_prod__ATopClassdef__init_atopclassdef(val* self, val* p0) {
val* var_n_propdefs /* var n_propdefs: Collection[Object] */;
val* var /* : Iterator[nullable Object] */;
short int var1 /* : Bool */;
val* var2 /* : nullable Object */;
val* var_n /* var n: Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : ANodes[APropdef] */;
var_n_propdefs = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ATopClassdef__empty_init]))(self) /* empty_init on <self:ATopClassdef>*/;
var = ((val* (*)(val*))(var_n_propdefs->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_n_propdefs) /* iterator on <var_n_propdefs:Collection[Object]>*/;
for(;;) {
var1 = ((short int (*)(val*))(var->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var) /* is_ok on <var:Iterator[nullable Object]>*/;
if(!var1) break;
var2 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_collection__Iterator__item]))(var) /* item on <var:Iterator[nullable Object]>*/;
var_n = var2;
/* <var_n:Object> isa APropdef */
cltype = type_parser_nodes__APropdef.color;
idtype = type_parser_nodes__APropdef.id;
if(cltype >= var_n->type->table_size) {
var3 = 0;
} else {
var3 = var_n->type->type_table[cltype] == idtype;
}
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 805);
show_backtrace(1);
}
var4 = self->attrs[COLOR_parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:ATopClassdef> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_propdefs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 806);
show_backtrace(1);
}
((void (*)(val*, val*))(var4->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var4, var_n) /* add on <var4:ANodes[APropdef]>*/;
((void (*)(val*, val*))(var_n->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n, self) /* parent= on <var_n:Object(APropdef)>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var->class->vft[COLOR_abstract_collection__Iterator__next]))(var) /* next on <var:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method parser_prod#ATopClassdef#init_atopclassdef for (self: Object, Collection[Object]) */
void VIRTUAL_parser_prod__ATopClassdef__init_atopclassdef(val* self, val* p0) {
parser_prod__ATopClassdef__init_atopclassdef(self, p0);
RET_LABEL:;
}
/* method parser_prod#ATopClassdef#replace_child for (self: ATopClassdef, ANode, nullable ANode) */
void parser_prod__ATopClassdef__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : Range[Int] */;
long var1 /* : Int */;
val* var2 /* : ANodes[APropdef] */;
long var3 /* : Int */;
val* var4 /* : Discrete */;
val* var5 /* : Discrete */;
val* var6 /* : Iterator[nullable Object] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
long var_i /* var i: Int */;
long var9 /* : Int */;
val* var10 /* : ANodes[APropdef] */;
val* var11 /* : nullable Object */;
short int var12 /* : Bool */;
val* var13 /* : null */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype;
int idtype;
val* var16 /* : ANodes[APropdef] */;
val* var17 /* : ANodes[APropdef] */;
var_old_child = p0;
var_new_child = p1;
var = NEW_range__Range(&type_range__Rangekernel__Int);
var1 = 0;
var2 = self->attrs[COLOR_parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:ATopClassdef> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_propdefs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 813);
show_backtrace(1);
}
var3 = ((long (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__length]))(var2) /* length on <var2:ANodes[APropdef]>*/;
var4 = BOX_kernel__Int(var1); /* autobox from Int to Discrete */
var5 = BOX_kernel__Int(var3); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var->class->vft[COLOR_range__Range__without_last]))(var, var4, var5) /* without_last on <var:Range[Int]>*/;
var6 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_collection__Collection__iterator]))(var) /* iterator on <var:Range[Int]>*/;
for(;;) {
var7 = ((short int (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var6) /* is_ok on <var6:Iterator[nullable Object]>*/;
if(!var7) break;
var8 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__item]))(var6) /* item on <var6:Iterator[nullable Object]>*/;
var9 = ((struct instance_kernel__Int*)var8)->value; /* autounbox from nullable Object to Int */;
var_i = var9;
var10 = self->attrs[COLOR_parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:ATopClassdef> */
if (var10 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_propdefs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 814);
show_backtrace(1);
}
var11 = ((val* (*)(val*, long))(var10->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var10, var_i) /* [] on <var10:ANodes[APropdef]>*/;
var12 = ((short int (*)(val*, val*))(var11->class->vft[COLOR_kernel__Object___61d_61d]))(var11, var_old_child) /* == on <var11:nullable Object(APropdef)>*/;
if (var12){
var13 = NULL;
if (var_new_child == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (var14){
/* <var_new_child:nullable ANode(ANode)> isa APropdef */
cltype = type_parser_nodes__APropdef.color;
idtype = type_parser_nodes__APropdef.id;
if(cltype >= var_new_child->type->table_size) {
var15 = 0;
} else {
var15 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 816);
show_backtrace(1);
}
var16 = self->attrs[COLOR_parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:ATopClassdef> */
if (var16 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_propdefs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 817);
show_backtrace(1);
}
((void (*)(val*, long, val*))(var16->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var16, var_i, var_new_child) /* []= on <var16:ANodes[APropdef]>*/;
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(APropdef)>*/;
} else {
var17 = self->attrs[COLOR_parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:ATopClassdef> */
if (var17 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_propdefs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 820);
show_backtrace(1);
}
((void (*)(val*, long))(var17->class->vft[COLOR_abstract_collection__Sequence__remove_at]))(var17, var_i) /* remove_at on <var17:ANodes[APropdef]>*/;
}
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__next]))(var6) /* next on <var6:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method parser_prod#ATopClassdef#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ATopClassdef__replace_child(val* self, val* p0, val* p1) {
parser_prod__ATopClassdef__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ATopClassdef#visit_all for (self: ATopClassdef, Visitor) */
void parser_prod__ATopClassdef__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : ANodes[APropdef] */;
val* var1 /* : Iterator[nullable Object] */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
val* var_n /* var n: APropdef */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:ATopClassdef> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_propdefs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 831);
show_backtrace(1);
}
var1 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_collection__Collection__iterator]))(var) /* iterator on <var:ANodes[APropdef]>*/;
for(;;) {
var2 = ((short int (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var1) /* is_ok on <var1:Iterator[nullable Object]>*/;
if(!var2) break;
var3 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__item]))(var1) /* item on <var1:Iterator[nullable Object]>*/;
var_n = var3;
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var_n) /* enter_visit on <var_v:Visitor>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__next]))(var1) /* next on <var1:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method parser_prod#ATopClassdef#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ATopClassdef__visit_all(val* self, val* p0) {
parser_prod__ATopClassdef__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AMainClassdef#empty_init for (self: AMainClassdef) */
void parser_prod__AMainClassdef__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AMainClassdef#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AMainClassdef__empty_init(val* self) {
parser_prod__AMainClassdef__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AMainClassdef#init_amainclassdef for (self: AMainClassdef, Collection[Object]) */
void parser_prod__AMainClassdef__init_amainclassdef(val* self, val* p0) {
val* var_n_propdefs /* var n_propdefs: Collection[Object] */;
val* var /* : Iterator[nullable Object] */;
short int var1 /* : Bool */;
val* var2 /* : nullable Object */;
val* var_n /* var n: Object */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : ANodes[APropdef] */;
var_n_propdefs = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AMainClassdef__empty_init]))(self) /* empty_init on <self:AMainClassdef>*/;
var = ((val* (*)(val*))(var_n_propdefs->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_n_propdefs) /* iterator on <var_n_propdefs:Collection[Object]>*/;
for(;;) {
var1 = ((short int (*)(val*))(var->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var) /* is_ok on <var:Iterator[nullable Object]>*/;
if(!var1) break;
var2 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_collection__Iterator__item]))(var) /* item on <var:Iterator[nullable Object]>*/;
var_n = var2;
/* <var_n:Object> isa APropdef */
cltype = type_parser_nodes__APropdef.color;
idtype = type_parser_nodes__APropdef.id;
if(cltype >= var_n->type->table_size) {
var3 = 0;
} else {
var3 = var_n->type->type_table[cltype] == idtype;
}
if (!var3) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 845);
show_backtrace(1);
}
var4 = self->attrs[COLOR_parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:AMainClassdef> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_propdefs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 846);
show_backtrace(1);
}
((void (*)(val*, val*))(var4->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var4, var_n) /* add on <var4:ANodes[APropdef]>*/;
((void (*)(val*, val*))(var_n->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n, self) /* parent= on <var_n:Object(APropdef)>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var->class->vft[COLOR_abstract_collection__Iterator__next]))(var) /* next on <var:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method parser_prod#AMainClassdef#init_amainclassdef for (self: Object, Collection[Object]) */
void VIRTUAL_parser_prod__AMainClassdef__init_amainclassdef(val* self, val* p0) {
parser_prod__AMainClassdef__init_amainclassdef(self, p0);
RET_LABEL:;
}
/* method parser_prod#AMainClassdef#replace_child for (self: AMainClassdef, ANode, nullable ANode) */
void parser_prod__AMainClassdef__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : Range[Int] */;
long var1 /* : Int */;
val* var2 /* : ANodes[APropdef] */;
long var3 /* : Int */;
val* var4 /* : Discrete */;
val* var5 /* : Discrete */;
val* var6 /* : Iterator[nullable Object] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
long var_i /* var i: Int */;
long var9 /* : Int */;
val* var10 /* : ANodes[APropdef] */;
val* var11 /* : nullable Object */;
short int var12 /* : Bool */;
val* var13 /* : null */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype;
int idtype;
val* var16 /* : ANodes[APropdef] */;
val* var17 /* : ANodes[APropdef] */;
var_old_child = p0;
var_new_child = p1;
var = NEW_range__Range(&type_range__Rangekernel__Int);
var1 = 0;
var2 = self->attrs[COLOR_parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:AMainClassdef> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_propdefs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 853);
show_backtrace(1);
}
var3 = ((long (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__length]))(var2) /* length on <var2:ANodes[APropdef]>*/;
var4 = BOX_kernel__Int(var1); /* autobox from Int to Discrete */
var5 = BOX_kernel__Int(var3); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var->class->vft[COLOR_range__Range__without_last]))(var, var4, var5) /* without_last on <var:Range[Int]>*/;
var6 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_collection__Collection__iterator]))(var) /* iterator on <var:Range[Int]>*/;
for(;;) {
var7 = ((short int (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var6) /* is_ok on <var6:Iterator[nullable Object]>*/;
if(!var7) break;
var8 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__item]))(var6) /* item on <var6:Iterator[nullable Object]>*/;
var9 = ((struct instance_kernel__Int*)var8)->value; /* autounbox from nullable Object to Int */;
var_i = var9;
var10 = self->attrs[COLOR_parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:AMainClassdef> */
if (var10 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_propdefs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 854);
show_backtrace(1);
}
var11 = ((val* (*)(val*, long))(var10->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var10, var_i) /* [] on <var10:ANodes[APropdef]>*/;
var12 = ((short int (*)(val*, val*))(var11->class->vft[COLOR_kernel__Object___61d_61d]))(var11, var_old_child) /* == on <var11:nullable Object(APropdef)>*/;
if (var12){
var13 = NULL;
if (var_new_child == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (var14){
/* <var_new_child:nullable ANode(ANode)> isa APropdef */
cltype = type_parser_nodes__APropdef.color;
idtype = type_parser_nodes__APropdef.id;
if(cltype >= var_new_child->type->table_size) {
var15 = 0;
} else {
var15 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var15) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 856);
show_backtrace(1);
}
var16 = self->attrs[COLOR_parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:AMainClassdef> */
if (var16 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_propdefs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 857);
show_backtrace(1);
}
((void (*)(val*, long, val*))(var16->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var16, var_i, var_new_child) /* []= on <var16:ANodes[APropdef]>*/;
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(APropdef)>*/;
} else {
var17 = self->attrs[COLOR_parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:AMainClassdef> */
if (var17 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_propdefs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 860);
show_backtrace(1);
}
((void (*)(val*, long))(var17->class->vft[COLOR_abstract_collection__Sequence__remove_at]))(var17, var_i) /* remove_at on <var17:ANodes[APropdef]>*/;
}
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__next]))(var6) /* next on <var6:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method parser_prod#AMainClassdef#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AMainClassdef__replace_child(val* self, val* p0, val* p1) {
parser_prod__AMainClassdef__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AMainClassdef#visit_all for (self: AMainClassdef, Visitor) */
void parser_prod__AMainClassdef__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : ANodes[APropdef] */;
val* var1 /* : Iterator[nullable Object] */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
val* var_n /* var n: APropdef */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:AMainClassdef> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_propdefs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 871);
show_backtrace(1);
}
var1 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_collection__Collection__iterator]))(var) /* iterator on <var:ANodes[APropdef]>*/;
for(;;) {
var2 = ((short int (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var1) /* is_ok on <var1:Iterator[nullable Object]>*/;
if(!var2) break;
var3 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__item]))(var1) /* item on <var1:Iterator[nullable Object]>*/;
var_n = var3;
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var_n) /* enter_visit on <var_v:Visitor>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__next]))(var1) /* next on <var1:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method parser_prod#AMainClassdef#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AMainClassdef__visit_all(val* self, val* p0) {
parser_prod__AMainClassdef__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AConcreteClasskind#empty_init for (self: AConcreteClasskind) */
void parser_prod__AConcreteClasskind__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AConcreteClasskind#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AConcreteClasskind__empty_init(val* self) {
parser_prod__AConcreteClasskind__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AConcreteClasskind#init_aconcreteclasskind for (self: AConcreteClasskind, nullable TKwclass) */
void parser_prod__AConcreteClasskind__init_aconcreteclasskind(val* self, val* p0) {
val* var_n_kwclass /* var n_kwclass: nullable TKwclass */;
var_n_kwclass = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AConcreteClasskind__empty_init]))(self) /* empty_init on <self:AConcreteClasskind>*/;
if (var_n_kwclass == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 884);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AConcreteClasskind___n_kwclass].val = var_n_kwclass; /* _n_kwclass on <self:AConcreteClasskind> */
if (var_n_kwclass == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 885);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_kwclass->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwclass, self) /* parent= on <var_n_kwclass:nullable TKwclass>*/;
}
RET_LABEL:;
}
/* method parser_prod#AConcreteClasskind#init_aconcreteclasskind for (self: Object, nullable TKwclass) */
void VIRTUAL_parser_prod__AConcreteClasskind__init_aconcreteclasskind(val* self, val* p0) {
parser_prod__AConcreteClasskind__init_aconcreteclasskind(self, p0);
RET_LABEL:;
}
/* method parser_prod#AConcreteClasskind#replace_child for (self: AConcreteClasskind, ANode, nullable ANode) */
void parser_prod__AConcreteClasskind__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwclass */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AConcreteClasskind___n_kwclass].val; /* _n_kwclass on <self:AConcreteClasskind> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwclass");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 890);
show_backtrace(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TKwclass>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwclass */
cltype = type_parser_nodes__TKwclass.color;
idtype = type_parser_nodes__TKwclass.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 893);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AConcreteClasskind___n_kwclass].val = var_new_child; /* _n_kwclass on <self:AConcreteClasskind> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 896);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AConcreteClasskind#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AConcreteClasskind__replace_child(val* self, val* p0, val* p1) {
parser_prod__AConcreteClasskind__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AConcreteClasskind#n_kwclass= for (self: AConcreteClasskind, TKwclass) */
void parser_prod__AConcreteClasskind__n_kwclass_61d(val* self, val* p0) {
val* var_node /* var node: TKwclass */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AConcreteClasskind___n_kwclass].val = var_node; /* _n_kwclass on <self:AConcreteClasskind> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwclass>*/;
RET_LABEL:;
}
/* method parser_prod#AConcreteClasskind#n_kwclass= for (self: Object, TKwclass) */
void VIRTUAL_parser_prod__AConcreteClasskind__n_kwclass_61d(val* self, val* p0) {
parser_prod__AConcreteClasskind__n_kwclass_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AConcreteClasskind#visit_all for (self: AConcreteClasskind, Visitor) */
void parser_prod__AConcreteClasskind__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwclass */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AConcreteClasskind___n_kwclass].val; /* _n_kwclass on <self:AConcreteClasskind> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwclass");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 911);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AConcreteClasskind#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AConcreteClasskind__visit_all(val* self, val* p0) {
parser_prod__AConcreteClasskind__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAbstractClasskind#empty_init for (self: AAbstractClasskind) */
void parser_prod__AAbstractClasskind__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AAbstractClasskind#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AAbstractClasskind__empty_init(val* self) {
parser_prod__AAbstractClasskind__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AAbstractClasskind#init_aabstractclasskind for (self: AAbstractClasskind, nullable TKwabstract, nullable TKwclass) */
void parser_prod__AAbstractClasskind__init_aabstractclasskind(val* self, val* p0, val* p1) {
val* var_n_kwabstract /* var n_kwabstract: nullable TKwabstract */;
val* var_n_kwclass /* var n_kwclass: nullable TKwclass */;
var_n_kwabstract = p0;
var_n_kwclass = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AAbstractClasskind__empty_init]))(self) /* empty_init on <self:AAbstractClasskind>*/;
if (var_n_kwabstract == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 923);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAbstractClasskind___n_kwabstract].val = var_n_kwabstract; /* _n_kwabstract on <self:AAbstractClasskind> */
if (var_n_kwabstract == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 924);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_kwabstract->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwabstract, self) /* parent= on <var_n_kwabstract:nullable TKwabstract>*/;
}
if (var_n_kwclass == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 925);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAbstractClasskind___n_kwclass].val = var_n_kwclass; /* _n_kwclass on <self:AAbstractClasskind> */
if (var_n_kwclass == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 926);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_kwclass->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwclass, self) /* parent= on <var_n_kwclass:nullable TKwclass>*/;
}
RET_LABEL:;
}
/* method parser_prod#AAbstractClasskind#init_aabstractclasskind for (self: Object, nullable TKwabstract, nullable TKwclass) */
void VIRTUAL_parser_prod__AAbstractClasskind__init_aabstractclasskind(val* self, val* p0, val* p1) {
parser_prod__AAbstractClasskind__init_aabstractclasskind(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AAbstractClasskind#replace_child for (self: AAbstractClasskind, ANode, nullable ANode) */
void parser_prod__AAbstractClasskind__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwabstract */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : TKwclass */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AAbstractClasskind___n_kwabstract].val; /* _n_kwabstract on <self:AAbstractClasskind> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwabstract");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 931);
show_backtrace(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TKwabstract>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwabstract */
cltype = type_parser_nodes__TKwabstract.color;
idtype = type_parser_nodes__TKwabstract.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 934);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAbstractClasskind___n_kwabstract].val = var_new_child; /* _n_kwabstract on <self:AAbstractClasskind> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 937);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__AAbstractClasskind___n_kwclass].val; /* _n_kwclass on <self:AAbstractClasskind> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwclass");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 941);
show_backtrace(1);
}
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_old_child) /* == on <var5:TKwclass>*/;
if (var6){
var7 = NULL;
if (var_new_child == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwclass */
cltype10 = type_parser_nodes__TKwclass.color;
idtype11 = type_parser_nodes__TKwclass.id;
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 944);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAbstractClasskind___n_kwclass].val = var_new_child; /* _n_kwclass on <self:AAbstractClasskind> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 947);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAbstractClasskind#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AAbstractClasskind__replace_child(val* self, val* p0, val* p1) {
parser_prod__AAbstractClasskind__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AAbstractClasskind#n_kwabstract= for (self: AAbstractClasskind, TKwabstract) */
void parser_prod__AAbstractClasskind__n_kwabstract_61d(val* self, val* p0) {
val* var_node /* var node: TKwabstract */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAbstractClasskind___n_kwabstract].val = var_node; /* _n_kwabstract on <self:AAbstractClasskind> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwabstract>*/;
RET_LABEL:;
}
/* method parser_prod#AAbstractClasskind#n_kwabstract= for (self: Object, TKwabstract) */
void VIRTUAL_parser_prod__AAbstractClasskind__n_kwabstract_61d(val* self, val* p0) {
parser_prod__AAbstractClasskind__n_kwabstract_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAbstractClasskind#n_kwclass= for (self: AAbstractClasskind, TKwclass) */
void parser_prod__AAbstractClasskind__n_kwclass_61d(val* self, val* p0) {
val* var_node /* var node: TKwclass */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAbstractClasskind___n_kwclass].val = var_node; /* _n_kwclass on <self:AAbstractClasskind> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwclass>*/;
RET_LABEL:;
}
/* method parser_prod#AAbstractClasskind#n_kwclass= for (self: Object, TKwclass) */
void VIRTUAL_parser_prod__AAbstractClasskind__n_kwclass_61d(val* self, val* p0) {
parser_prod__AAbstractClasskind__n_kwclass_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAbstractClasskind#visit_all for (self: AAbstractClasskind, Visitor) */
void parser_prod__AAbstractClasskind__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwabstract */;
val* var1 /* : TKwclass */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AAbstractClasskind___n_kwabstract].val; /* _n_kwabstract on <self:AAbstractClasskind> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwabstract");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 967);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__AAbstractClasskind___n_kwclass].val; /* _n_kwclass on <self:AAbstractClasskind> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwclass");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 968);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AAbstractClasskind#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AAbstractClasskind__visit_all(val* self, val* p0) {
parser_prod__AAbstractClasskind__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AInterfaceClasskind#empty_init for (self: AInterfaceClasskind) */
void parser_prod__AInterfaceClasskind__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AInterfaceClasskind#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AInterfaceClasskind__empty_init(val* self) {
parser_prod__AInterfaceClasskind__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AInterfaceClasskind#init_ainterfaceclasskind for (self: AInterfaceClasskind, nullable TKwinterface) */
void parser_prod__AInterfaceClasskind__init_ainterfaceclasskind(val* self, val* p0) {
val* var_n_kwinterface /* var n_kwinterface: nullable TKwinterface */;
var_n_kwinterface = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AInterfaceClasskind__empty_init]))(self) /* empty_init on <self:AInterfaceClasskind>*/;
if (var_n_kwinterface == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 979);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AInterfaceClasskind___n_kwinterface].val = var_n_kwinterface; /* _n_kwinterface on <self:AInterfaceClasskind> */
if (var_n_kwinterface == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 980);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_kwinterface->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwinterface, self) /* parent= on <var_n_kwinterface:nullable TKwinterface>*/;
}
RET_LABEL:;
}
/* method parser_prod#AInterfaceClasskind#init_ainterfaceclasskind for (self: Object, nullable TKwinterface) */
void VIRTUAL_parser_prod__AInterfaceClasskind__init_ainterfaceclasskind(val* self, val* p0) {
parser_prod__AInterfaceClasskind__init_ainterfaceclasskind(self, p0);
RET_LABEL:;
}
/* method parser_prod#AInterfaceClasskind#replace_child for (self: AInterfaceClasskind, ANode, nullable ANode) */
void parser_prod__AInterfaceClasskind__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwinterface */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AInterfaceClasskind___n_kwinterface].val; /* _n_kwinterface on <self:AInterfaceClasskind> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwinterface");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 985);
show_backtrace(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TKwinterface>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwinterface */
cltype = type_parser_nodes__TKwinterface.color;
idtype = type_parser_nodes__TKwinterface.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 988);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AInterfaceClasskind___n_kwinterface].val = var_new_child; /* _n_kwinterface on <self:AInterfaceClasskind> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 991);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AInterfaceClasskind#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AInterfaceClasskind__replace_child(val* self, val* p0, val* p1) {
parser_prod__AInterfaceClasskind__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AInterfaceClasskind#n_kwinterface= for (self: AInterfaceClasskind, TKwinterface) */
void parser_prod__AInterfaceClasskind__n_kwinterface_61d(val* self, val* p0) {
val* var_node /* var node: TKwinterface */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AInterfaceClasskind___n_kwinterface].val = var_node; /* _n_kwinterface on <self:AInterfaceClasskind> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwinterface>*/;
RET_LABEL:;
}
/* method parser_prod#AInterfaceClasskind#n_kwinterface= for (self: Object, TKwinterface) */
void VIRTUAL_parser_prod__AInterfaceClasskind__n_kwinterface_61d(val* self, val* p0) {
parser_prod__AInterfaceClasskind__n_kwinterface_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AInterfaceClasskind#visit_all for (self: AInterfaceClasskind, Visitor) */
void parser_prod__AInterfaceClasskind__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwinterface */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AInterfaceClasskind___n_kwinterface].val; /* _n_kwinterface on <self:AInterfaceClasskind> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwinterface");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1006);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AInterfaceClasskind#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AInterfaceClasskind__visit_all(val* self, val* p0) {
parser_prod__AInterfaceClasskind__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AEnumClasskind#empty_init for (self: AEnumClasskind) */
void parser_prod__AEnumClasskind__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AEnumClasskind#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AEnumClasskind__empty_init(val* self) {
parser_prod__AEnumClasskind__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AEnumClasskind#init_aenumclasskind for (self: AEnumClasskind, nullable TKwenum) */
void parser_prod__AEnumClasskind__init_aenumclasskind(val* self, val* p0) {
val* var_n_kwenum /* var n_kwenum: nullable TKwenum */;
var_n_kwenum = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AEnumClasskind__empty_init]))(self) /* empty_init on <self:AEnumClasskind>*/;
if (var_n_kwenum == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1017);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AEnumClasskind___n_kwenum].val = var_n_kwenum; /* _n_kwenum on <self:AEnumClasskind> */
if (var_n_kwenum == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1018);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_kwenum->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwenum, self) /* parent= on <var_n_kwenum:nullable TKwenum>*/;
}
RET_LABEL:;
}
/* method parser_prod#AEnumClasskind#init_aenumclasskind for (self: Object, nullable TKwenum) */
void VIRTUAL_parser_prod__AEnumClasskind__init_aenumclasskind(val* self, val* p0) {
parser_prod__AEnumClasskind__init_aenumclasskind(self, p0);
RET_LABEL:;
}
/* method parser_prod#AEnumClasskind#replace_child for (self: AEnumClasskind, ANode, nullable ANode) */
void parser_prod__AEnumClasskind__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwenum */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AEnumClasskind___n_kwenum].val; /* _n_kwenum on <self:AEnumClasskind> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwenum");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1023);
show_backtrace(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TKwenum>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwenum */
cltype = type_parser_nodes__TKwenum.color;
idtype = type_parser_nodes__TKwenum.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1026);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AEnumClasskind___n_kwenum].val = var_new_child; /* _n_kwenum on <self:AEnumClasskind> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1029);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AEnumClasskind#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AEnumClasskind__replace_child(val* self, val* p0, val* p1) {
parser_prod__AEnumClasskind__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AEnumClasskind#n_kwenum= for (self: AEnumClasskind, TKwenum) */
void parser_prod__AEnumClasskind__n_kwenum_61d(val* self, val* p0) {
val* var_node /* var node: TKwenum */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AEnumClasskind___n_kwenum].val = var_node; /* _n_kwenum on <self:AEnumClasskind> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwenum>*/;
RET_LABEL:;
}
/* method parser_prod#AEnumClasskind#n_kwenum= for (self: Object, TKwenum) */
void VIRTUAL_parser_prod__AEnumClasskind__n_kwenum_61d(val* self, val* p0) {
parser_prod__AEnumClasskind__n_kwenum_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AEnumClasskind#visit_all for (self: AEnumClasskind, Visitor) */
void parser_prod__AEnumClasskind__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwenum */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AEnumClasskind___n_kwenum].val; /* _n_kwenum on <self:AEnumClasskind> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwenum");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1044);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AEnumClasskind#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AEnumClasskind__visit_all(val* self, val* p0) {
parser_prod__AEnumClasskind__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AExternClasskind#empty_init for (self: AExternClasskind) */
void parser_prod__AExternClasskind__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AExternClasskind#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AExternClasskind__empty_init(val* self) {
parser_prod__AExternClasskind__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AExternClasskind#init_aexternclasskind for (self: AExternClasskind, nullable TKwextern, nullable TKwclass) */
void parser_prod__AExternClasskind__init_aexternclasskind(val* self, val* p0, val* p1) {
val* var_n_kwextern /* var n_kwextern: nullable TKwextern */;
val* var_n_kwclass /* var n_kwclass: nullable TKwclass */;
val* var /* : null */;
short int var1 /* : Bool */;
var_n_kwextern = p0;
var_n_kwclass = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AExternClasskind__empty_init]))(self) /* empty_init on <self:AExternClasskind>*/;
if (var_n_kwextern == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1056);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AExternClasskind___n_kwextern].val = var_n_kwextern; /* _n_kwextern on <self:AExternClasskind> */
if (var_n_kwextern == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1057);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_kwextern->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwextern, self) /* parent= on <var_n_kwextern:nullable TKwextern>*/;
}
self->attrs[COLOR_parser_nodes__AExternClasskind___n_kwclass].val = var_n_kwclass; /* _n_kwclass on <self:AExternClasskind> */
var = NULL;
if (var_n_kwclass == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_kwclass->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwclass, self) /* parent= on <var_n_kwclass:nullable TKwclass(TKwclass)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExternClasskind#init_aexternclasskind for (self: Object, nullable TKwextern, nullable TKwclass) */
void VIRTUAL_parser_prod__AExternClasskind__init_aexternclasskind(val* self, val* p0, val* p1) {
parser_prod__AExternClasskind__init_aexternclasskind(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AExternClasskind#replace_child for (self: AExternClasskind, ANode, nullable ANode) */
void parser_prod__AExternClasskind__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwextern */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : nullable TKwclass */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : null */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AExternClasskind___n_kwextern].val; /* _n_kwextern on <self:AExternClasskind> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwextern");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1066);
show_backtrace(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TKwextern>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwextern */
cltype = type_parser_nodes__TKwextern.color;
idtype = type_parser_nodes__TKwextern.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1069);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AExternClasskind___n_kwextern].val = var_new_child; /* _n_kwextern on <self:AExternClasskind> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1072);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__AExternClasskind___n_kwclass].val; /* _n_kwclass on <self:AExternClasskind> */
if (var5 == NULL) {
var6 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_old_child) /* == on <var5:nullable TKwclass>*/;
}
if (var6){
var7 = NULL;
if (var_new_child == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwclass */
cltype10 = type_parser_nodes__TKwclass.color;
idtype11 = type_parser_nodes__TKwclass.id;
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1079);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AExternClasskind___n_kwclass].val = var_new_child; /* _n_kwclass on <self:AExternClasskind> */
} else {
var12 = NULL;
self->attrs[COLOR_parser_nodes__AExternClasskind___n_kwclass].val = var12; /* _n_kwclass on <self:AExternClasskind> */
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExternClasskind#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AExternClasskind__replace_child(val* self, val* p0, val* p1) {
parser_prod__AExternClasskind__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AExternClasskind#n_kwextern= for (self: AExternClasskind, TKwextern) */
void parser_prod__AExternClasskind__n_kwextern_61d(val* self, val* p0) {
val* var_node /* var node: TKwextern */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AExternClasskind___n_kwextern].val = var_node; /* _n_kwextern on <self:AExternClasskind> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwextern>*/;
RET_LABEL:;
}
/* method parser_prod#AExternClasskind#n_kwextern= for (self: Object, TKwextern) */
void VIRTUAL_parser_prod__AExternClasskind__n_kwextern_61d(val* self, val* p0) {
parser_prod__AExternClasskind__n_kwextern_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AExternClasskind#n_kwclass= for (self: AExternClasskind, nullable TKwclass) */
void parser_prod__AExternClasskind__n_kwclass_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwclass */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AExternClasskind___n_kwclass].val = var_node; /* _n_kwclass on <self:AExternClasskind> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable TKwclass(TKwclass)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExternClasskind#n_kwclass= for (self: Object, nullable TKwclass) */
void VIRTUAL_parser_prod__AExternClasskind__n_kwclass_61d(val* self, val* p0) {
parser_prod__AExternClasskind__n_kwclass_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AExternClasskind#visit_all for (self: AExternClasskind, Visitor) */
void parser_prod__AExternClasskind__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwextern */;
val* var1 /* : nullable TKwclass */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : nullable TKwclass */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AExternClasskind___n_kwextern].val; /* _n_kwextern on <self:AExternClasskind> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwextern");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1104);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__AExternClasskind___n_kwclass].val; /* _n_kwclass on <self:AExternClasskind> */
var2 = NULL;
if (var1 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
var4 = self->attrs[COLOR_parser_nodes__AExternClasskind___n_kwclass].val; /* _n_kwclass on <self:AExternClasskind> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1106);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var4) /* enter_visit on <var_v:Visitor>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExternClasskind#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AExternClasskind__visit_all(val* self, val* p0) {
parser_prod__AExternClasskind__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AFormaldef#empty_init for (self: AFormaldef) */
void parser_prod__AFormaldef__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AFormaldef#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AFormaldef__empty_init(val* self) {
parser_prod__AFormaldef__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AFormaldef#init_aformaldef for (self: AFormaldef, nullable TClassid, nullable AType, nullable AAnnotations) */
void parser_prod__AFormaldef__init_aformaldef(val* self, val* p0, val* p1, val* p2) {
val* var_n_id /* var n_id: nullable TClassid */;
val* var_n_type /* var n_type: nullable AType */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
var_n_id = p0;
var_n_type = p1;
var_n_annotations = p2;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AFormaldef__empty_init]))(self) /* empty_init on <self:AFormaldef>*/;
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1120);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AFormaldef___n_id].val = var_n_id; /* _n_id on <self:AFormaldef> */
if (var_n_id == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1121);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_id->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_id, self) /* parent= on <var_n_id:nullable TClassid>*/;
}
self->attrs[COLOR_parser_nodes__AFormaldef___n_type].val = var_n_type; /* _n_type on <self:AFormaldef> */
var = NULL;
if (var_n_type == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_type->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_type, self) /* parent= on <var_n_type:nullable AType(AType)>*/;
} else {
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AFormaldef> */
var2 = NULL;
if (var_n_annotations == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_n_annotations->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_annotations, self) /* parent= on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFormaldef#init_aformaldef for (self: Object, nullable TClassid, nullable AType, nullable AAnnotations) */
void VIRTUAL_parser_prod__AFormaldef__init_aformaldef(val* self, val* p0, val* p1, val* p2) {
parser_prod__AFormaldef__init_aformaldef(self, p0, p1, p2);
RET_LABEL:;
}
/* method parser_prod#AFormaldef#replace_child for (self: AFormaldef, ANode, nullable ANode) */
void parser_prod__AFormaldef__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TClassid */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : nullable AType */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : null */;
val* var13 /* : nullable AAnnotations */;
short int var14 /* : Bool */;
val* var15 /* : null */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var20 /* : null */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__AFormaldef___n_id].val; /* _n_id on <self:AFormaldef> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1134);
show_backtrace(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TClassid>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TClassid */
cltype = type_parser_nodes__TClassid.color;
idtype = type_parser_nodes__TClassid.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1137);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AFormaldef___n_id].val = var_new_child; /* _n_id on <self:AFormaldef> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1140);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__AFormaldef___n_type].val; /* _n_type on <self:AFormaldef> */
if (var5 == NULL) {
var6 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_old_child) /* == on <var5:nullable AType>*/;
}
if (var6){
var7 = NULL;
if (var_new_child == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AType */
cltype10 = type_parser_nodes__AType.color;
idtype11 = type_parser_nodes__AType.id;
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1147);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AFormaldef___n_type].val = var_new_child; /* _n_type on <self:AFormaldef> */
} else {
var12 = NULL;
self->attrs[COLOR_parser_nodes__AFormaldef___n_type].val = var12; /* _n_type on <self:AFormaldef> */
}
goto RET_LABEL;
} else {
}
var13 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AFormaldef> */
if (var13 == NULL) {
var14 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var14 = ((short int (*)(val*, val*))(var13->class->vft[COLOR_kernel__Object___61d_61d]))(var13, var_old_child) /* == on <var13:nullable AAnnotations>*/;
}
if (var14){
var15 = NULL;
if (var_new_child == NULL) {
var16 = 0; /* is null */
} else {
var16 = 1; /* arg is null and recv is not */
}
if (var16){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AAnnotations */
cltype18 = type_parser_nodes__AAnnotations.color;
idtype19 = type_parser_nodes__AAnnotations.id;
if(cltype18 >= var_new_child->type->table_size) {
var17 = 0;
} else {
var17 = var_new_child->type->type_table[cltype18] == idtype19;
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1157);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_new_child; /* _n_annotations on <self:AFormaldef> */
} else {
var20 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var20; /* _n_annotations on <self:AFormaldef> */
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFormaldef#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AFormaldef__replace_child(val* self, val* p0, val* p1) {
parser_prod__AFormaldef__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AFormaldef#n_id= for (self: AFormaldef, TClassid) */
void parser_prod__AFormaldef__n_id_61d(val* self, val* p0) {
val* var_node /* var node: TClassid */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AFormaldef___n_id].val = var_node; /* _n_id on <self:AFormaldef> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TClassid>*/;
RET_LABEL:;
}
/* method parser_prod#AFormaldef#n_id= for (self: Object, TClassid) */
void VIRTUAL_parser_prod__AFormaldef__n_id_61d(val* self, val* p0) {
parser_prod__AFormaldef__n_id_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AFormaldef#n_type= for (self: AFormaldef, nullable AType) */
void parser_prod__AFormaldef__n_type_61d(val* self, val* p0) {
val* var_node /* var node: nullable AType */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AFormaldef___n_type].val = var_node; /* _n_type on <self:AFormaldef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AType(AType)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFormaldef#n_type= for (self: Object, nullable AType) */
void VIRTUAL_parser_prod__AFormaldef__n_type_61d(val* self, val* p0) {
parser_prod__AFormaldef__n_type_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AFormaldef#n_annotations= for (self: AFormaldef, nullable AAnnotations) */
void parser_prod__AFormaldef__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AFormaldef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AAnnotations(AAnnotations)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFormaldef#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__AFormaldef__n_annotations_61d(val* self, val* p0) {
parser_prod__AFormaldef__n_annotations_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AFormaldef#visit_all for (self: AFormaldef, Visitor) */
void parser_prod__AFormaldef__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TClassid */;
val* var1 /* : nullable AType */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : nullable AType */;
val* var5 /* : nullable AAnnotations */;
val* var6 /* : null */;
short int var7 /* : Bool */;
val* var8 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__AFormaldef___n_id].val; /* _n_id on <self:AFormaldef> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1189);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__AFormaldef___n_type].val; /* _n_type on <self:AFormaldef> */
var2 = NULL;
if (var1 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
var4 = self->attrs[COLOR_parser_nodes__AFormaldef___n_type].val; /* _n_type on <self:AFormaldef> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1191);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var4) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AFormaldef> */
var6 = NULL;
if (var5 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (var7){
var8 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AFormaldef> */
if (var8 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1194);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var8) /* enter_visit on <var_v:Visitor>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AFormaldef#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AFormaldef__visit_all(val* self, val* p0) {
parser_prod__AFormaldef__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ASuperclass#empty_init for (self: ASuperclass) */
void parser_prod__ASuperclass__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ASuperclass#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ASuperclass__empty_init(val* self) {
parser_prod__ASuperclass__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ASuperclass#init_asuperclass for (self: ASuperclass, nullable TKwsuper, nullable AType, nullable AAnnotations) */
void parser_prod__ASuperclass__init_asuperclass(val* self, val* p0, val* p1, val* p2) {
val* var_n_kwsuper /* var n_kwsuper: nullable TKwsuper */;
val* var_n_type /* var n_type: nullable AType */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
var_n_kwsuper = p0;
var_n_type = p1;
var_n_annotations = p2;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ASuperclass__empty_init]))(self) /* empty_init on <self:ASuperclass>*/;
if (var_n_kwsuper == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1208);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASuperclass___n_kwsuper].val = var_n_kwsuper; /* _n_kwsuper on <self:ASuperclass> */
if (var_n_kwsuper == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1209);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_kwsuper->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwsuper, self) /* parent= on <var_n_kwsuper:nullable TKwsuper>*/;
}
if (var_n_type == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1210);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASuperclass___n_type].val = var_n_type; /* _n_type on <self:ASuperclass> */
if (var_n_type == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1211);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_type->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_type, self) /* parent= on <var_n_type:nullable AType>*/;
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ASuperclass> */
var = NULL;
if (var_n_annotations == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_annotations->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_annotations, self) /* parent= on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASuperclass#init_asuperclass for (self: Object, nullable TKwsuper, nullable AType, nullable AAnnotations) */
void VIRTUAL_parser_prod__ASuperclass__init_asuperclass(val* self, val* p0, val* p1, val* p2) {
parser_prod__ASuperclass__init_asuperclass(self, p0, p1, p2);
RET_LABEL:;
}
/* method parser_prod#ASuperclass#replace_child for (self: ASuperclass, ANode, nullable ANode) */
void parser_prod__ASuperclass__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : TKwsuper */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : AType */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : nullable AAnnotations */;
short int var13 /* : Bool */;
val* var14 /* : null */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : null */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__ASuperclass___n_kwsuper].val; /* _n_kwsuper on <self:ASuperclass> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwsuper");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1220);
show_backtrace(1);
}
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:TKwsuper>*/;
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwsuper */
cltype = type_parser_nodes__TKwsuper.color;
idtype = type_parser_nodes__TKwsuper.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1223);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASuperclass___n_kwsuper].val = var_new_child; /* _n_kwsuper on <self:ASuperclass> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1226);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var5 = self->attrs[COLOR_parser_nodes__ASuperclass___n_type].val; /* _n_type on <self:ASuperclass> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_type");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1230);
show_backtrace(1);
}
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___61d_61d]))(var5, var_old_child) /* == on <var5:AType>*/;
if (var6){
var7 = NULL;
if (var_new_child == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AType */
cltype10 = type_parser_nodes__AType.color;
idtype11 = type_parser_nodes__AType.id;
if(cltype10 >= var_new_child->type->table_size) {
var9 = 0;
} else {
var9 = var_new_child->type->type_table[cltype10] == idtype11;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1233);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ASuperclass___n_type].val = var_new_child; /* _n_type on <self:ASuperclass> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1236);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ASuperclass> */
if (var12 == NULL) {
var13 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var13 = ((short int (*)(val*, val*))(var12->class->vft[COLOR_kernel__Object___61d_61d]))(var12, var_old_child) /* == on <var12:nullable AAnnotations>*/;
}
if (var13){
var14 = NULL;
if (var_new_child == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (var15){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AAnnotations */
cltype17 = type_parser_nodes__AAnnotations.color;
idtype18 = type_parser_nodes__AAnnotations.id;
if(cltype17 >= var_new_child->type->table_size) {
var16 = 0;
} else {
var16 = var_new_child->type->type_table[cltype17] == idtype18;
}
if (!var16) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1243);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_new_child; /* _n_annotations on <self:ASuperclass> */
} else {
var19 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var19; /* _n_annotations on <self:ASuperclass> */
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASuperclass#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ASuperclass__replace_child(val* self, val* p0, val* p1) {
parser_prod__ASuperclass__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ASuperclass#n_kwsuper= for (self: ASuperclass, TKwsuper) */
void parser_prod__ASuperclass__n_kwsuper_61d(val* self, val* p0) {
val* var_node /* var node: TKwsuper */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASuperclass___n_kwsuper].val = var_node; /* _n_kwsuper on <self:ASuperclass> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwsuper>*/;
RET_LABEL:;
}
/* method parser_prod#ASuperclass#n_kwsuper= for (self: Object, TKwsuper) */
void VIRTUAL_parser_prod__ASuperclass__n_kwsuper_61d(val* self, val* p0) {
parser_prod__ASuperclass__n_kwsuper_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ASuperclass#n_type= for (self: ASuperclass, AType) */
void parser_prod__ASuperclass__n_type_61d(val* self, val* p0) {
val* var_node /* var node: AType */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ASuperclass___n_type].val = var_node; /* _n_type on <self:ASuperclass> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AType>*/;
RET_LABEL:;
}
/* method parser_prod#ASuperclass#n_type= for (self: Object, AType) */
void VIRTUAL_parser_prod__ASuperclass__n_type_61d(val* self, val* p0) {
parser_prod__ASuperclass__n_type_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ASuperclass#n_annotations= for (self: ASuperclass, nullable AAnnotations) */
void parser_prod__ASuperclass__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ASuperclass> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AAnnotations(AAnnotations)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASuperclass#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__ASuperclass__n_annotations_61d(val* self, val* p0) {
parser_prod__ASuperclass__n_annotations_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ASuperclass#visit_all for (self: ASuperclass, Visitor) */
void parser_prod__ASuperclass__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : TKwsuper */;
val* var1 /* : AType */;
val* var2 /* : nullable AAnnotations */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__ASuperclass___n_kwsuper].val; /* _n_kwsuper on <self:ASuperclass> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwsuper");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1273);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var) /* enter_visit on <var_v:Visitor>*/;
var1 = self->attrs[COLOR_parser_nodes__ASuperclass___n_type].val; /* _n_type on <self:ASuperclass> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_type");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1274);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var1) /* enter_visit on <var_v:Visitor>*/;
var2 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ASuperclass> */
var3 = NULL;
if (var2 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (var4){
var5 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ASuperclass> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1276);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var5) /* enter_visit on <var_v:Visitor>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ASuperclass#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ASuperclass__visit_all(val* self, val* p0) {
parser_prod__ASuperclass__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#empty_init for (self: AAttrPropdef) */
void parser_prod__AAttrPropdef__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AAttrPropdef__empty_init(val* self) {
parser_prod__AAttrPropdef__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#init_aattrpropdef for (self: AAttrPropdef, nullable ADoc, nullable AAble, nullable AAble, nullable TKwredef, nullable AVisibility, nullable TKwvar, nullable TAttrid, nullable TId, nullable AType, nullable AAnnotations, nullable AExpr) */
void parser_prod__AAttrPropdef__init_aattrpropdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8, val* p9, val* p10) {
val* var_n_doc /* var n_doc: nullable ADoc */;
val* var_n_readable /* var n_readable: nullable AAble */;
val* var_n_writable /* var n_writable: nullable AAble */;
val* var_n_kwredef /* var n_kwredef: nullable TKwredef */;
val* var_n_visibility /* var n_visibility: nullable AVisibility */;
val* var_n_kwvar /* var n_kwvar: nullable TKwvar */;
val* var_n_id /* var n_id: nullable TAttrid */;
val* var_n_id2 /* var n_id2: nullable TId */;
val* var_n_type /* var n_type: nullable AType */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var_n_expr /* var n_expr: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
short int var5 /* : Bool */;
val* var6 /* : null */;
short int var7 /* : Bool */;
val* var8 /* : null */;
short int var9 /* : Bool */;
val* var10 /* : null */;
short int var11 /* : Bool */;
val* var12 /* : null */;
short int var13 /* : Bool */;
val* var14 /* : null */;
short int var15 /* : Bool */;
val* var16 /* : null */;
short int var17 /* : Bool */;
var_n_doc = p0;
var_n_readable = p1;
var_n_writable = p2;
var_n_kwredef = p3;
var_n_visibility = p4;
var_n_kwvar = p5;
var_n_id = p6;
var_n_id2 = p7;
var_n_type = p8;
var_n_annotations = p9;
var_n_expr = p10;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AAttrPropdef__empty_init]))(self) /* empty_init on <self:AAttrPropdef>*/;
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var_n_doc; /* _n_doc on <self:AAttrPropdef> */
var = NULL;
if (var_n_doc == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_doc->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_doc, self) /* parent= on <var_n_doc:nullable ADoc(ADoc)>*/;
} else {
}
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_readable].val = var_n_readable; /* _n_readable on <self:AAttrPropdef> */
var2 = NULL;
if (var_n_readable == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_n_readable->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_readable, self) /* parent= on <var_n_readable:nullable AAble(AAble)>*/;
} else {
}
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_writable].val = var_n_writable; /* _n_writable on <self:AAttrPropdef> */
var4 = NULL;
if (var_n_writable == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (var5){
((void (*)(val*, val*))(var_n_writable->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_writable, self) /* parent= on <var_n_writable:nullable AAble(AAble)>*/;
} else {
}
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:AAttrPropdef> */
var6 = NULL;
if (var_n_kwredef == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (var7){
((void (*)(val*, val*))(var_n_kwredef->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwredef, self) /* parent= on <var_n_kwredef:nullable TKwredef(TKwredef)>*/;
} else {
}
if (var_n_visibility == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1314);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_visibility].val = var_n_visibility; /* _n_visibility on <self:AAttrPropdef> */
if (var_n_visibility == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1315);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_visibility->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_visibility, self) /* parent= on <var_n_visibility:nullable AVisibility>*/;
}
if (var_n_kwvar == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1316);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_kwvar].val = var_n_kwvar; /* _n_kwvar on <self:AAttrPropdef> */
if (var_n_kwvar == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1317);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_kwvar->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwvar, self) /* parent= on <var_n_kwvar:nullable TKwvar>*/;
}
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_id].val = var_n_id; /* _n_id on <self:AAttrPropdef> */
var8 = NULL;
if (var_n_id == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (var9){
((void (*)(val*, val*))(var_n_id->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_id, self) /* parent= on <var_n_id:nullable TAttrid(TAttrid)>*/;
} else {
}
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_id2].val = var_n_id2; /* _n_id2 on <self:AAttrPropdef> */
var10 = NULL;
if (var_n_id2 == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (var11){
((void (*)(val*, val*))(var_n_id2->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_id2, self) /* parent= on <var_n_id2:nullable TId(TId)>*/;
} else {
}
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_type].val = var_n_type; /* _n_type on <self:AAttrPropdef> */
var12 = NULL;
if (var_n_type == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
if (var13){
((void (*)(val*, val*))(var_n_type->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_type, self) /* parent= on <var_n_type:nullable AType(AType)>*/;
} else {
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AAttrPropdef> */
var14 = NULL;
if (var_n_annotations == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (var15){
((void (*)(val*, val*))(var_n_annotations->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_annotations, self) /* parent= on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
} else {
}
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_expr].val = var_n_expr; /* _n_expr on <self:AAttrPropdef> */
var16 = NULL;
if (var_n_expr == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (var17){
((void (*)(val*, val*))(var_n_expr->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_expr, self) /* parent= on <var_n_expr:nullable AExpr(AExpr)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#init_aattrpropdef for (self: Object, nullable ADoc, nullable AAble, nullable AAble, nullable TKwredef, nullable AVisibility, nullable TKwvar, nullable TAttrid, nullable TId, nullable AType, nullable AAnnotations, nullable AExpr) */
void VIRTUAL_parser_prod__AAttrPropdef__init_aattrpropdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8, val* p9, val* p10) {
parser_prod__AAttrPropdef__init_aattrpropdef(self, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#replace_child for (self: AAttrPropdef, ANode, nullable ANode) */
void parser_prod__AAttrPropdef__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable ADoc */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : null */;
val* var6 /* : nullable AAble */;
short int var7 /* : Bool */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : null */;
val* var14 /* : nullable AAble */;
short int var15 /* : Bool */;
val* var16 /* : null */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : null */;
val* var22 /* : nullable TKwredef */;
short int var23 /* : Bool */;
val* var24 /* : null */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : null */;
val* var30 /* : AVisibility */;
short int var31 /* : Bool */;
val* var32 /* : null */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
val* var37 /* : TKwvar */;
short int var38 /* : Bool */;
val* var39 /* : null */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
val* var44 /* : nullable TAttrid */;
short int var45 /* : Bool */;
val* var46 /* : null */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
val* var51 /* : null */;
val* var52 /* : nullable TId */;
short int var53 /* : Bool */;
val* var54 /* : null */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
val* var59 /* : null */;
val* var60 /* : nullable AType */;
short int var61 /* : Bool */;
val* var62 /* : null */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
int cltype65;
int idtype66;
val* var67 /* : null */;
val* var68 /* : nullable AAnnotations */;
short int var69 /* : Bool */;
val* var70 /* : null */;
short int var71 /* : Bool */;
short int var72 /* : Bool */;
int cltype73;
int idtype74;
val* var75 /* : null */;
val* var76 /* : nullable AExpr */;
short int var77 /* : Bool */;
val* var78 /* : null */;
short int var79 /* : Bool */;
short int var80 /* : Bool */;
int cltype81;
int idtype82;
val* var83 /* : null */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__APropdef___n_doc].val; /* _n_doc on <self:AAttrPropdef> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:nullable ADoc>*/;
}
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa ADoc */
cltype = type_parser_nodes__ADoc.color;
idtype = type_parser_nodes__ADoc.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1345);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var_new_child; /* _n_doc on <self:AAttrPropdef> */
} else {
var5 = NULL;
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var5; /* _n_doc on <self:AAttrPropdef> */
}
goto RET_LABEL;
} else {
}
var6 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_readable].val; /* _n_readable on <self:AAttrPropdef> */
if (var6 == NULL) {
var7 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var7 = ((short int (*)(val*, val*))(var6->class->vft[COLOR_kernel__Object___61d_61d]))(var6, var_old_child) /* == on <var6:nullable AAble>*/;
}
if (var7){
var8 = NULL;
if (var_new_child == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (var9){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AAble */
cltype11 = type_parser_nodes__AAble.color;
idtype12 = type_parser_nodes__AAble.id;
if(cltype11 >= var_new_child->type->table_size) {
var10 = 0;
} else {
var10 = var_new_child->type->type_table[cltype11] == idtype12;
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1355);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_readable].val = var_new_child; /* _n_readable on <self:AAttrPropdef> */
} else {
var13 = NULL;
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_readable].val = var13; /* _n_readable on <self:AAttrPropdef> */
}
goto RET_LABEL;
} else {
}
var14 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_writable].val; /* _n_writable on <self:AAttrPropdef> */
if (var14 == NULL) {
var15 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var15 = ((short int (*)(val*, val*))(var14->class->vft[COLOR_kernel__Object___61d_61d]))(var14, var_old_child) /* == on <var14:nullable AAble>*/;
}
if (var15){
var16 = NULL;
if (var_new_child == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (var17){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AAble */
cltype19 = type_parser_nodes__AAble.color;
idtype20 = type_parser_nodes__AAble.id;
if(cltype19 >= var_new_child->type->table_size) {
var18 = 0;
} else {
var18 = var_new_child->type->type_table[cltype19] == idtype20;
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1365);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_writable].val = var_new_child; /* _n_writable on <self:AAttrPropdef> */
} else {
var21 = NULL;
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_writable].val = var21; /* _n_writable on <self:AAttrPropdef> */
}
goto RET_LABEL;
} else {
}
var22 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_kwredef].val; /* _n_kwredef on <self:AAttrPropdef> */
if (var22 == NULL) {
var23 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var23 = ((short int (*)(val*, val*))(var22->class->vft[COLOR_kernel__Object___61d_61d]))(var22, var_old_child) /* == on <var22:nullable TKwredef>*/;
}
if (var23){
var24 = NULL;
if (var_new_child == NULL) {
var25 = 0; /* is null */
} else {
var25 = 1; /* arg is null and recv is not */
}
if (var25){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwredef */
cltype27 = type_parser_nodes__TKwredef.color;
idtype28 = type_parser_nodes__TKwredef.id;
if(cltype27 >= var_new_child->type->table_size) {
var26 = 0;
} else {
var26 = var_new_child->type->type_table[cltype27] == idtype28;
}
if (!var26) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1375);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_kwredef].val = var_new_child; /* _n_kwredef on <self:AAttrPropdef> */
} else {
var29 = NULL;
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_kwredef].val = var29; /* _n_kwredef on <self:AAttrPropdef> */
}
goto RET_LABEL;
} else {
}
var30 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_visibility].val; /* _n_visibility on <self:AAttrPropdef> */
if (var30 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_visibility");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1382);
show_backtrace(1);
}
var31 = ((short int (*)(val*, val*))(var30->class->vft[COLOR_kernel__Object___61d_61d]))(var30, var_old_child) /* == on <var30:AVisibility>*/;
if (var31){
var32 = NULL;
if (var_new_child == NULL) {
var33 = 0; /* is null */
} else {
var33 = 1; /* arg is null and recv is not */
}
if (var33){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AVisibility */
cltype35 = type_parser_nodes__AVisibility.color;
idtype36 = type_parser_nodes__AVisibility.id;
if(cltype35 >= var_new_child->type->table_size) {
var34 = 0;
} else {
var34 = var_new_child->type->type_table[cltype35] == idtype36;
}
if (!var34) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1385);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_visibility].val = var_new_child; /* _n_visibility on <self:AAttrPropdef> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1388);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var37 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_kwvar].val; /* _n_kwvar on <self:AAttrPropdef> */
if (var37 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwvar");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1392);
show_backtrace(1);
}
var38 = ((short int (*)(val*, val*))(var37->class->vft[COLOR_kernel__Object___61d_61d]))(var37, var_old_child) /* == on <var37:TKwvar>*/;
if (var38){
var39 = NULL;
if (var_new_child == NULL) {
var40 = 0; /* is null */
} else {
var40 = 1; /* arg is null and recv is not */
}
if (var40){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwvar */
cltype42 = type_parser_nodes__TKwvar.color;
idtype43 = type_parser_nodes__TKwvar.id;
if(cltype42 >= var_new_child->type->table_size) {
var41 = 0;
} else {
var41 = var_new_child->type->type_table[cltype42] == idtype43;
}
if (!var41) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1395);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_kwvar].val = var_new_child; /* _n_kwvar on <self:AAttrPropdef> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1398);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var44 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_id].val; /* _n_id on <self:AAttrPropdef> */
if (var44 == NULL) {
var45 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var45 = ((short int (*)(val*, val*))(var44->class->vft[COLOR_kernel__Object___61d_61d]))(var44, var_old_child) /* == on <var44:nullable TAttrid>*/;
}
if (var45){
var46 = NULL;
if (var_new_child == NULL) {
var47 = 0; /* is null */
} else {
var47 = 1; /* arg is null and recv is not */
}
if (var47){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TAttrid */
cltype49 = type_parser_nodes__TAttrid.color;
idtype50 = type_parser_nodes__TAttrid.id;
if(cltype49 >= var_new_child->type->table_size) {
var48 = 0;
} else {
var48 = var_new_child->type->type_table[cltype49] == idtype50;
}
if (!var48) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1405);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_id].val = var_new_child; /* _n_id on <self:AAttrPropdef> */
} else {
var51 = NULL;
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_id].val = var51; /* _n_id on <self:AAttrPropdef> */
}
goto RET_LABEL;
} else {
}
var52 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_id2].val; /* _n_id2 on <self:AAttrPropdef> */
if (var52 == NULL) {
var53 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var53 = ((short int (*)(val*, val*))(var52->class->vft[COLOR_kernel__Object___61d_61d]))(var52, var_old_child) /* == on <var52:nullable TId>*/;
}
if (var53){
var54 = NULL;
if (var_new_child == NULL) {
var55 = 0; /* is null */
} else {
var55 = 1; /* arg is null and recv is not */
}
if (var55){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TId */
cltype57 = type_parser_nodes__TId.color;
idtype58 = type_parser_nodes__TId.id;
if(cltype57 >= var_new_child->type->table_size) {
var56 = 0;
} else {
var56 = var_new_child->type->type_table[cltype57] == idtype58;
}
if (!var56) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1415);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_id2].val = var_new_child; /* _n_id2 on <self:AAttrPropdef> */
} else {
var59 = NULL;
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_id2].val = var59; /* _n_id2 on <self:AAttrPropdef> */
}
goto RET_LABEL;
} else {
}
var60 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_type].val; /* _n_type on <self:AAttrPropdef> */
if (var60 == NULL) {
var61 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var61 = ((short int (*)(val*, val*))(var60->class->vft[COLOR_kernel__Object___61d_61d]))(var60, var_old_child) /* == on <var60:nullable AType>*/;
}
if (var61){
var62 = NULL;
if (var_new_child == NULL) {
var63 = 0; /* is null */
} else {
var63 = 1; /* arg is null and recv is not */
}
if (var63){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AType */
cltype65 = type_parser_nodes__AType.color;
idtype66 = type_parser_nodes__AType.id;
if(cltype65 >= var_new_child->type->table_size) {
var64 = 0;
} else {
var64 = var_new_child->type->type_table[cltype65] == idtype66;
}
if (!var64) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1425);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_type].val = var_new_child; /* _n_type on <self:AAttrPropdef> */
} else {
var67 = NULL;
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_type].val = var67; /* _n_type on <self:AAttrPropdef> */
}
goto RET_LABEL;
} else {
}
var68 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AAttrPropdef> */
if (var68 == NULL) {
var69 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var69 = ((short int (*)(val*, val*))(var68->class->vft[COLOR_kernel__Object___61d_61d]))(var68, var_old_child) /* == on <var68:nullable AAnnotations>*/;
}
if (var69){
var70 = NULL;
if (var_new_child == NULL) {
var71 = 0; /* is null */
} else {
var71 = 1; /* arg is null and recv is not */
}
if (var71){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AAnnotations */
cltype73 = type_parser_nodes__AAnnotations.color;
idtype74 = type_parser_nodes__AAnnotations.id;
if(cltype73 >= var_new_child->type->table_size) {
var72 = 0;
} else {
var72 = var_new_child->type->type_table[cltype73] == idtype74;
}
if (!var72) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1435);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_new_child; /* _n_annotations on <self:AAttrPropdef> */
} else {
var75 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var75; /* _n_annotations on <self:AAttrPropdef> */
}
goto RET_LABEL;
} else {
}
var76 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <self:AAttrPropdef> */
if (var76 == NULL) {
var77 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var77 = ((short int (*)(val*, val*))(var76->class->vft[COLOR_kernel__Object___61d_61d]))(var76, var_old_child) /* == on <var76:nullable AExpr>*/;
}
if (var77){
var78 = NULL;
if (var_new_child == NULL) {
var79 = 0; /* is null */
} else {
var79 = 1; /* arg is null and recv is not */
}
if (var79){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AExpr */
cltype81 = type_parser_nodes__AExpr.color;
idtype82 = type_parser_nodes__AExpr.id;
if(cltype81 >= var_new_child->type->table_size) {
var80 = 0;
} else {
var80 = var_new_child->type->type_table[cltype81] == idtype82;
}
if (!var80) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1445);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_expr].val = var_new_child; /* _n_expr on <self:AAttrPropdef> */
} else {
var83 = NULL;
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_expr].val = var83; /* _n_expr on <self:AAttrPropdef> */
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AAttrPropdef__replace_child(val* self, val* p0, val* p1) {
parser_prod__AAttrPropdef__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#n_doc= for (self: AAttrPropdef, nullable ADoc) */
void parser_prod__AAttrPropdef__n_doc_61d(val* self, val* p0) {
val* var_node /* var node: nullable ADoc */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var_node; /* _n_doc on <self:AAttrPropdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable ADoc(ADoc)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#n_doc= for (self: Object, nullable ADoc) */
void VIRTUAL_parser_prod__AAttrPropdef__n_doc_61d(val* self, val* p0) {
parser_prod__AAttrPropdef__n_doc_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#n_readable= for (self: AAttrPropdef, nullable AAble) */
void parser_prod__AAttrPropdef__n_readable_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAble */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_readable].val = var_node; /* _n_readable on <self:AAttrPropdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AAble(AAble)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#n_readable= for (self: Object, nullable AAble) */
void VIRTUAL_parser_prod__AAttrPropdef__n_readable_61d(val* self, val* p0) {
parser_prod__AAttrPropdef__n_readable_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#n_writable= for (self: AAttrPropdef, nullable AAble) */
void parser_prod__AAttrPropdef__n_writable_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAble */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_writable].val = var_node; /* _n_writable on <self:AAttrPropdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AAble(AAble)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#n_writable= for (self: Object, nullable AAble) */
void VIRTUAL_parser_prod__AAttrPropdef__n_writable_61d(val* self, val* p0) {
parser_prod__AAttrPropdef__n_writable_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#n_kwredef= for (self: AAttrPropdef, nullable TKwredef) */
void parser_prod__AAttrPropdef__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_kwredef].val = var_node; /* _n_kwredef on <self:AAttrPropdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable TKwredef(TKwredef)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#n_kwredef= for (self: Object, nullable TKwredef) */
void VIRTUAL_parser_prod__AAttrPropdef__n_kwredef_61d(val* self, val* p0) {
parser_prod__AAttrPropdef__n_kwredef_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#n_visibility= for (self: AAttrPropdef, AVisibility) */
void parser_prod__AAttrPropdef__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: AVisibility */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_visibility].val = var_node; /* _n_visibility on <self:AAttrPropdef> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:AVisibility>*/;
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#n_visibility= for (self: Object, AVisibility) */
void VIRTUAL_parser_prod__AAttrPropdef__n_visibility_61d(val* self, val* p0) {
parser_prod__AAttrPropdef__n_visibility_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#n_kwvar= for (self: AAttrPropdef, TKwvar) */
void parser_prod__AAttrPropdef__n_kwvar_61d(val* self, val* p0) {
val* var_node /* var node: TKwvar */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_kwvar].val = var_node; /* _n_kwvar on <self:AAttrPropdef> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwvar>*/;
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#n_kwvar= for (self: Object, TKwvar) */
void VIRTUAL_parser_prod__AAttrPropdef__n_kwvar_61d(val* self, val* p0) {
parser_prod__AAttrPropdef__n_kwvar_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#n_id= for (self: AAttrPropdef, nullable TAttrid) */
void parser_prod__AAttrPropdef__n_id_61d(val* self, val* p0) {
val* var_node /* var node: nullable TAttrid */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_id].val = var_node; /* _n_id on <self:AAttrPropdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable TAttrid(TAttrid)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#n_id= for (self: Object, nullable TAttrid) */
void VIRTUAL_parser_prod__AAttrPropdef__n_id_61d(val* self, val* p0) {
parser_prod__AAttrPropdef__n_id_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#n_id2= for (self: AAttrPropdef, nullable TId) */
void parser_prod__AAttrPropdef__n_id2_61d(val* self, val* p0) {
val* var_node /* var node: nullable TId */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_id2].val = var_node; /* _n_id2 on <self:AAttrPropdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable TId(TId)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#n_id2= for (self: Object, nullable TId) */
void VIRTUAL_parser_prod__AAttrPropdef__n_id2_61d(val* self, val* p0) {
parser_prod__AAttrPropdef__n_id2_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#n_type= for (self: AAttrPropdef, nullable AType) */
void parser_prod__AAttrPropdef__n_type_61d(val* self, val* p0) {
val* var_node /* var node: nullable AType */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_type].val = var_node; /* _n_type on <self:AAttrPropdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AType(AType)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#n_type= for (self: Object, nullable AType) */
void VIRTUAL_parser_prod__AAttrPropdef__n_type_61d(val* self, val* p0) {
parser_prod__AAttrPropdef__n_type_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#n_annotations= for (self: AAttrPropdef, nullable AAnnotations) */
void parser_prod__AAttrPropdef__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AAttrPropdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AAnnotations(AAnnotations)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__AAttrPropdef__n_annotations_61d(val* self, val* p0) {
parser_prod__AAttrPropdef__n_annotations_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#n_expr= for (self: AAttrPropdef, nullable AExpr) */
void parser_prod__AAttrPropdef__n_expr_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AAttrPropdef___n_expr].val = var_node; /* _n_expr on <self:AAttrPropdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AExpr(AExpr)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#n_expr= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_prod__AAttrPropdef__n_expr_61d(val* self, val* p0) {
parser_prod__AAttrPropdef__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#visit_all for (self: AAttrPropdef, Visitor) */
void parser_prod__AAttrPropdef__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable ADoc */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : nullable ADoc */;
val* var4 /* : nullable AAble */;
val* var5 /* : null */;
short int var6 /* : Bool */;
val* var7 /* : nullable AAble */;
val* var8 /* : nullable AAble */;
val* var9 /* : null */;
short int var10 /* : Bool */;
val* var11 /* : nullable AAble */;
val* var12 /* : nullable TKwredef */;
val* var13 /* : null */;
short int var14 /* : Bool */;
val* var15 /* : nullable TKwredef */;
val* var16 /* : AVisibility */;
val* var17 /* : TKwvar */;
val* var18 /* : nullable TAttrid */;
val* var19 /* : null */;
short int var20 /* : Bool */;
val* var21 /* : nullable TAttrid */;
val* var22 /* : nullable TId */;
val* var23 /* : null */;
short int var24 /* : Bool */;
val* var25 /* : nullable TId */;
val* var26 /* : nullable AType */;
val* var27 /* : null */;
short int var28 /* : Bool */;
val* var29 /* : nullable AType */;
val* var30 /* : nullable AAnnotations */;
val* var31 /* : null */;
short int var32 /* : Bool */;
val* var33 /* : nullable AAnnotations */;
val* var34 /* : nullable AExpr */;
val* var35 /* : null */;
short int var36 /* : Bool */;
val* var37 /* : nullable AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__APropdef___n_doc].val; /* _n_doc on <self:AAttrPropdef> */
var1 = NULL;
if (var == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (var2){
var3 = self->attrs[COLOR_parser_nodes__APropdef___n_doc].val; /* _n_doc on <self:AAttrPropdef> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1532);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var3) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var4 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_readable].val; /* _n_readable on <self:AAttrPropdef> */
var5 = NULL;
if (var4 == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (var6){
var7 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_readable].val; /* _n_readable on <self:AAttrPropdef> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1535);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var7) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_writable].val; /* _n_writable on <self:AAttrPropdef> */
var9 = NULL;
if (var8 == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (var10){
var11 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_writable].val; /* _n_writable on <self:AAttrPropdef> */
if (var11 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1538);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var11) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var12 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_kwredef].val; /* _n_kwredef on <self:AAttrPropdef> */
var13 = NULL;
if (var12 == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (var14){
var15 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_kwredef].val; /* _n_kwredef on <self:AAttrPropdef> */
if (var15 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1541);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var15) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var16 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_visibility].val; /* _n_visibility on <self:AAttrPropdef> */
if (var16 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_visibility");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1543);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var16) /* enter_visit on <var_v:Visitor>*/;
var17 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_kwvar].val; /* _n_kwvar on <self:AAttrPropdef> */
if (var17 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwvar");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1544);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var17) /* enter_visit on <var_v:Visitor>*/;
var18 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_id].val; /* _n_id on <self:AAttrPropdef> */
var19 = NULL;
if (var18 == NULL) {
var20 = 0; /* is null */
} else {
var20 = 1; /* arg is null and recv is not */
}
if (var20){
var21 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_id].val; /* _n_id on <self:AAttrPropdef> */
if (var21 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1546);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var21) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var22 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_id2].val; /* _n_id2 on <self:AAttrPropdef> */
var23 = NULL;
if (var22 == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (var24){
var25 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_id2].val; /* _n_id2 on <self:AAttrPropdef> */
if (var25 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1549);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var25) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var26 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_type].val; /* _n_type on <self:AAttrPropdef> */
var27 = NULL;
if (var26 == NULL) {
var28 = 0; /* is null */
} else {
var28 = 1; /* arg is null and recv is not */
}
if (var28){
var29 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_type].val; /* _n_type on <self:AAttrPropdef> */
if (var29 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1552);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var29) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var30 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AAttrPropdef> */
var31 = NULL;
if (var30 == NULL) {
var32 = 0; /* is null */
} else {
var32 = 1; /* arg is null and recv is not */
}
if (var32){
var33 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AAttrPropdef> */
if (var33 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1555);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var33) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var34 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <self:AAttrPropdef> */
var35 = NULL;
if (var34 == NULL) {
var36 = 0; /* is null */
} else {
var36 = 1; /* arg is null and recv is not */
}
if (var36){
var37 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <self:AAttrPropdef> */
if (var37 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1558);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var37) /* enter_visit on <var_v:Visitor>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AAttrPropdef#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AAttrPropdef__visit_all(val* self, val* p0) {
parser_prod__AAttrPropdef__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#empty_init for (self: AMethPropdef) */
void parser_prod__AMethPropdef__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AMethPropdef__empty_init(val* self) {
parser_prod__AMethPropdef__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#init_amethpropdef for (self: AMethPropdef, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable AMethid, nullable ASignature) */
void parser_prod__AMethPropdef__init_amethpropdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
val* var_n_doc /* var n_doc: nullable ADoc */;
val* var_n_kwredef /* var n_kwredef: nullable TKwredef */;
val* var_n_visibility /* var n_visibility: nullable AVisibility */;
val* var_n_methid /* var n_methid: nullable AMethid */;
val* var_n_signature /* var n_signature: nullable ASignature */;
val* var /* : null */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
var_n_doc = p0;
var_n_kwredef = p1;
var_n_visibility = p2;
var_n_methid = p3;
var_n_signature = p4;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AMethPropdef__empty_init]))(self) /* empty_init on <self:AMethPropdef>*/;
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var_n_doc; /* _n_doc on <self:AMethPropdef> */
var = NULL;
if (var_n_doc == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_doc->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_doc, self) /* parent= on <var_n_doc:nullable ADoc(ADoc)>*/;
} else {
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:AMethPropdef> */
var2 = NULL;
if (var_n_kwredef == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_n_kwredef->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwredef, self) /* parent= on <var_n_kwredef:nullable TKwredef(TKwredef)>*/;
} else {
}
if (var_n_visibility == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1582);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_visibility].val = var_n_visibility; /* _n_visibility on <self:AMethPropdef> */
if (var_n_visibility == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1583);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_visibility->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_visibility, self) /* parent= on <var_n_visibility:nullable AVisibility>*/;
}
if (var_n_methid == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1584);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val = var_n_methid; /* _n_methid on <self:AMethPropdef> */
if (var_n_methid == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1585);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_methid->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_methid, self) /* parent= on <var_n_methid:nullable AMethid>*/;
}
if (var_n_signature == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1586);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val = var_n_signature; /* _n_signature on <self:AMethPropdef> */
if (var_n_signature == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1587);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_signature->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_signature, self) /* parent= on <var_n_signature:nullable ASignature>*/;
}
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#init_amethpropdef for (self: Object, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable AMethid, nullable ASignature) */
void VIRTUAL_parser_prod__AMethPropdef__init_amethpropdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
parser_prod__AMethPropdef__init_amethpropdef(self, p0, p1, p2, p3, p4);
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#replace_child for (self: AMethPropdef, ANode, nullable ANode) */
void parser_prod__AMethPropdef__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable ADoc */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : null */;
val* var6 /* : nullable TKwredef */;
short int var7 /* : Bool */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : null */;
val* var14 /* : nullable AVisibility */;
short int var15 /* : Bool */;
val* var16 /* : null */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : nullable AMethid */;
short int var22 /* : Bool */;
val* var23 /* : null */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : nullable ASignature */;
short int var29 /* : Bool */;
val* var30 /* : null */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__APropdef___n_doc].val; /* _n_doc on <self:AMethPropdef> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:nullable ADoc>*/;
}
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa ADoc */
cltype = type_parser_nodes__ADoc.color;
idtype = type_parser_nodes__ADoc.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1595);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var_new_child; /* _n_doc on <self:AMethPropdef> */
} else {
var5 = NULL;
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var5; /* _n_doc on <self:AMethPropdef> */
}
goto RET_LABEL;
} else {
}
var6 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val; /* _n_kwredef on <self:AMethPropdef> */
if (var6 == NULL) {
var7 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var7 = ((short int (*)(val*, val*))(var6->class->vft[COLOR_kernel__Object___61d_61d]))(var6, var_old_child) /* == on <var6:nullable TKwredef>*/;
}
if (var7){
var8 = NULL;
if (var_new_child == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (var9){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwredef */
cltype11 = type_parser_nodes__TKwredef.color;
idtype12 = type_parser_nodes__TKwredef.id;
if(cltype11 >= var_new_child->type->table_size) {
var10 = 0;
} else {
var10 = var_new_child->type->type_table[cltype11] == idtype12;
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1605);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val = var_new_child; /* _n_kwredef on <self:AMethPropdef> */
} else {
var13 = NULL;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val = var13; /* _n_kwredef on <self:AMethPropdef> */
}
goto RET_LABEL;
} else {
}
var14 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_visibility].val; /* _n_visibility on <self:AMethPropdef> */
if (var14 == NULL) {
var15 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var15 = ((short int (*)(val*, val*))(var14->class->vft[COLOR_kernel__Object___61d_61d]))(var14, var_old_child) /* == on <var14:nullable AVisibility>*/;
}
if (var15){
var16 = NULL;
if (var_new_child == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (var17){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AVisibility */
cltype19 = type_parser_nodes__AVisibility.color;
idtype20 = type_parser_nodes__AVisibility.id;
if(cltype19 >= var_new_child->type->table_size) {
var18 = 0;
} else {
var18 = var_new_child->type->type_table[cltype19] == idtype20;
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1615);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_visibility].val = var_new_child; /* _n_visibility on <self:AMethPropdef> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1618);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var21 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
if (var21 == NULL) {
var22 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var22 = ((short int (*)(val*, val*))(var21->class->vft[COLOR_kernel__Object___61d_61d]))(var21, var_old_child) /* == on <var21:nullable AMethid>*/;
}
if (var22){
var23 = NULL;
if (var_new_child == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (var24){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AMethid */
cltype26 = type_parser_nodes__AMethid.color;
idtype27 = type_parser_nodes__AMethid.id;
if(cltype26 >= var_new_child->type->table_size) {
var25 = 0;
} else {
var25 = var_new_child->type->type_table[cltype26] == idtype27;
}
if (!var25) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1625);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val = var_new_child; /* _n_methid on <self:AMethPropdef> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1628);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var28 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
if (var28 == NULL) {
var29 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var29 = ((short int (*)(val*, val*))(var28->class->vft[COLOR_kernel__Object___61d_61d]))(var28, var_old_child) /* == on <var28:nullable ASignature>*/;
}
if (var29){
var30 = NULL;
if (var_new_child == NULL) {
var31 = 0; /* is null */
} else {
var31 = 1; /* arg is null and recv is not */
}
if (var31){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa ASignature */
cltype33 = type_parser_nodes__ASignature.color;
idtype34 = type_parser_nodes__ASignature.id;
if(cltype33 >= var_new_child->type->table_size) {
var32 = 0;
} else {
var32 = var_new_child->type->type_table[cltype33] == idtype34;
}
if (!var32) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1635);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val = var_new_child; /* _n_signature on <self:AMethPropdef> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1638);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AMethPropdef__replace_child(val* self, val* p0, val* p1) {
parser_prod__AMethPropdef__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#n_doc= for (self: AMethPropdef, nullable ADoc) */
void parser_prod__AMethPropdef__n_doc_61d(val* self, val* p0) {
val* var_node /* var node: nullable ADoc */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var_node; /* _n_doc on <self:AMethPropdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable ADoc(ADoc)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#n_doc= for (self: Object, nullable ADoc) */
void VIRTUAL_parser_prod__AMethPropdef__n_doc_61d(val* self, val* p0) {
parser_prod__AMethPropdef__n_doc_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#n_kwredef= for (self: AMethPropdef, nullable TKwredef) */
void parser_prod__AMethPropdef__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val = var_node; /* _n_kwredef on <self:AMethPropdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable TKwredef(TKwredef)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#n_kwredef= for (self: Object, nullable TKwredef) */
void VIRTUAL_parser_prod__AMethPropdef__n_kwredef_61d(val* self, val* p0) {
parser_prod__AMethPropdef__n_kwredef_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#n_visibility= for (self: AMethPropdef, nullable AVisibility) */
void parser_prod__AMethPropdef__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: nullable AVisibility */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_visibility].val = var_node; /* _n_visibility on <self:AMethPropdef> */
if (var_node == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1661);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AVisibility>*/;
}
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#n_visibility= for (self: Object, nullable AVisibility) */
void VIRTUAL_parser_prod__AMethPropdef__n_visibility_61d(val* self, val* p0) {
parser_prod__AMethPropdef__n_visibility_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#n_methid= for (self: AMethPropdef, nullable AMethid) */
void parser_prod__AMethPropdef__n_methid_61d(val* self, val* p0) {
val* var_node /* var node: nullable AMethid */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val = var_node; /* _n_methid on <self:AMethPropdef> */
if (var_node == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1666);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AMethid>*/;
}
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#n_methid= for (self: Object, nullable AMethid) */
void VIRTUAL_parser_prod__AMethPropdef__n_methid_61d(val* self, val* p0) {
parser_prod__AMethPropdef__n_methid_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#n_signature= for (self: AMethPropdef, nullable ASignature) */
void parser_prod__AMethPropdef__n_signature_61d(val* self, val* p0) {
val* var_node /* var node: nullable ASignature */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val = var_node; /* _n_signature on <self:AMethPropdef> */
if (var_node == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1671);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable ASignature>*/;
}
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#n_signature= for (self: Object, nullable ASignature) */
void VIRTUAL_parser_prod__AMethPropdef__n_signature_61d(val* self, val* p0) {
parser_prod__AMethPropdef__n_signature_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#visit_all for (self: AMethPropdef, Visitor) */
void parser_prod__AMethPropdef__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable ADoc */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : nullable ADoc */;
val* var4 /* : nullable TKwredef */;
val* var5 /* : null */;
short int var6 /* : Bool */;
val* var7 /* : nullable TKwredef */;
val* var8 /* : nullable AVisibility */;
val* var9 /* : nullable AMethid */;
val* var10 /* : nullable ASignature */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__APropdef___n_doc].val; /* _n_doc on <self:AMethPropdef> */
var1 = NULL;
if (var == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (var2){
var3 = self->attrs[COLOR_parser_nodes__APropdef___n_doc].val; /* _n_doc on <self:AMethPropdef> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1678);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var3) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var4 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val; /* _n_kwredef on <self:AMethPropdef> */
var5 = NULL;
if (var4 == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (var6){
var7 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val; /* _n_kwredef on <self:AMethPropdef> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1681);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var7) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_visibility].val; /* _n_visibility on <self:AMethPropdef> */
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var8) /* enter_visit on <var_v:Visitor>*/;
var9 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var9) /* enter_visit on <var_v:Visitor>*/;
var10 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var10) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AMethPropdef#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AMethPropdef__visit_all(val* self, val* p0) {
parser_prod__AMethPropdef__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#ADeferredMethPropdef#empty_init for (self: ADeferredMethPropdef) */
void parser_prod__ADeferredMethPropdef__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#ADeferredMethPropdef#empty_init for (self: Object) */
void VIRTUAL_parser_prod__ADeferredMethPropdef__empty_init(val* self) {
parser_prod__ADeferredMethPropdef__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#ADeferredMethPropdef#init_adeferredmethpropdef for (self: ADeferredMethPropdef, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable TKwmeth, nullable AMethid, nullable ASignature, nullable AAnnotations) */
void parser_prod__ADeferredMethPropdef__init_adeferredmethpropdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6) {
val* var_n_doc /* var n_doc: nullable ADoc */;
val* var_n_kwredef /* var n_kwredef: nullable TKwredef */;
val* var_n_visibility /* var n_visibility: nullable AVisibility */;
val* var_n_kwmeth /* var n_kwmeth: nullable TKwmeth */;
val* var_n_methid /* var n_methid: nullable AMethid */;
val* var_n_signature /* var n_signature: nullable ASignature */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
short int var5 /* : Bool */;
var_n_doc = p0;
var_n_kwredef = p1;
var_n_visibility = p2;
var_n_kwmeth = p3;
var_n_methid = p4;
var_n_signature = p5;
var_n_annotations = p6;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__ADeferredMethPropdef__empty_init]))(self) /* empty_init on <self:ADeferredMethPropdef>*/;
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var_n_doc; /* _n_doc on <self:ADeferredMethPropdef> */
var = NULL;
if (var_n_doc == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_doc->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_doc, self) /* parent= on <var_n_doc:nullable ADoc(ADoc)>*/;
} else {
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:ADeferredMethPropdef> */
var2 = NULL;
if (var_n_kwredef == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_n_kwredef->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwredef, self) /* parent= on <var_n_kwredef:nullable TKwredef(TKwredef)>*/;
} else {
}
if (var_n_visibility == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1710);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_visibility].val = var_n_visibility; /* _n_visibility on <self:ADeferredMethPropdef> */
if (var_n_visibility == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1711);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_visibility->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_visibility, self) /* parent= on <var_n_visibility:nullable AVisibility>*/;
}
if (var_n_kwmeth == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1712);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ADeferredMethPropdef___n_kwmeth].val = var_n_kwmeth; /* _n_kwmeth on <self:ADeferredMethPropdef> */
if (var_n_kwmeth == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1713);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_kwmeth->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwmeth, self) /* parent= on <var_n_kwmeth:nullable TKwmeth>*/;
}
if (var_n_methid == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1714);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val = var_n_methid; /* _n_methid on <self:ADeferredMethPropdef> */
if (var_n_methid == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1715);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_methid->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_methid, self) /* parent= on <var_n_methid:nullable AMethid>*/;
}
if (var_n_signature == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1716);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val = var_n_signature; /* _n_signature on <self:ADeferredMethPropdef> */
if (var_n_signature == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1717);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_signature->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_signature, self) /* parent= on <var_n_signature:nullable ASignature>*/;
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:ADeferredMethPropdef> */
var4 = NULL;
if (var_n_annotations == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (var5){
((void (*)(val*, val*))(var_n_annotations->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_annotations, self) /* parent= on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ADeferredMethPropdef#init_adeferredmethpropdef for (self: Object, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable TKwmeth, nullable AMethid, nullable ASignature, nullable AAnnotations) */
void VIRTUAL_parser_prod__ADeferredMethPropdef__init_adeferredmethpropdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6) {
parser_prod__ADeferredMethPropdef__init_adeferredmethpropdef(self, p0, p1, p2, p3, p4, p5, p6);
RET_LABEL:;
}
/* method parser_prod#ADeferredMethPropdef#replace_child for (self: ADeferredMethPropdef, ANode, nullable ANode) */
void parser_prod__ADeferredMethPropdef__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable ADoc */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : null */;
val* var6 /* : nullable TKwredef */;
short int var7 /* : Bool */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : null */;
val* var14 /* : nullable AVisibility */;
short int var15 /* : Bool */;
val* var16 /* : null */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : TKwmeth */;
short int var22 /* : Bool */;
val* var23 /* : null */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : nullable AMethid */;
short int var29 /* : Bool */;
val* var30 /* : null */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
val* var35 /* : nullable ASignature */;
short int var36 /* : Bool */;
val* var37 /* : null */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
val* var42 /* : nullable AAnnotations */;
short int var43 /* : Bool */;
val* var44 /* : null */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
val* var49 /* : null */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__APropdef___n_doc].val; /* _n_doc on <self:ADeferredMethPropdef> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:nullable ADoc>*/;
}
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa ADoc */
cltype = type_parser_nodes__ADoc.color;
idtype = type_parser_nodes__ADoc.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1729);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var_new_child; /* _n_doc on <self:ADeferredMethPropdef> */
} else {
var5 = NULL;
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var5; /* _n_doc on <self:ADeferredMethPropdef> */
}
goto RET_LABEL;
} else {
}
var6 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val; /* _n_kwredef on <self:ADeferredMethPropdef> */
if (var6 == NULL) {
var7 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var7 = ((short int (*)(val*, val*))(var6->class->vft[COLOR_kernel__Object___61d_61d]))(var6, var_old_child) /* == on <var6:nullable TKwredef>*/;
}
if (var7){
var8 = NULL;
if (var_new_child == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (var9){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwredef */
cltype11 = type_parser_nodes__TKwredef.color;
idtype12 = type_parser_nodes__TKwredef.id;
if(cltype11 >= var_new_child->type->table_size) {
var10 = 0;
} else {
var10 = var_new_child->type->type_table[cltype11] == idtype12;
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1739);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val = var_new_child; /* _n_kwredef on <self:ADeferredMethPropdef> */
} else {
var13 = NULL;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val = var13; /* _n_kwredef on <self:ADeferredMethPropdef> */
}
goto RET_LABEL;
} else {
}
var14 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_visibility].val; /* _n_visibility on <self:ADeferredMethPropdef> */
if (var14 == NULL) {
var15 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var15 = ((short int (*)(val*, val*))(var14->class->vft[COLOR_kernel__Object___61d_61d]))(var14, var_old_child) /* == on <var14:nullable AVisibility>*/;
}
if (var15){
var16 = NULL;
if (var_new_child == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (var17){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AVisibility */
cltype19 = type_parser_nodes__AVisibility.color;
idtype20 = type_parser_nodes__AVisibility.id;
if(cltype19 >= var_new_child->type->table_size) {
var18 = 0;
} else {
var18 = var_new_child->type->type_table[cltype19] == idtype20;
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1749);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_visibility].val = var_new_child; /* _n_visibility on <self:ADeferredMethPropdef> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1752);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var21 = self->attrs[COLOR_parser_nodes__ADeferredMethPropdef___n_kwmeth].val; /* _n_kwmeth on <self:ADeferredMethPropdef> */
if (var21 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwmeth");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1756);
show_backtrace(1);
}
var22 = ((short int (*)(val*, val*))(var21->class->vft[COLOR_kernel__Object___61d_61d]))(var21, var_old_child) /* == on <var21:TKwmeth>*/;
if (var22){
var23 = NULL;
if (var_new_child == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (var24){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwmeth */
cltype26 = type_parser_nodes__TKwmeth.color;
idtype27 = type_parser_nodes__TKwmeth.id;
if(cltype26 >= var_new_child->type->table_size) {
var25 = 0;
} else {
var25 = var_new_child->type->type_table[cltype26] == idtype27;
}
if (!var25) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1759);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__ADeferredMethPropdef___n_kwmeth].val = var_new_child; /* _n_kwmeth on <self:ADeferredMethPropdef> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1762);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var28 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:ADeferredMethPropdef> */
if (var28 == NULL) {
var29 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var29 = ((short int (*)(val*, val*))(var28->class->vft[COLOR_kernel__Object___61d_61d]))(var28, var_old_child) /* == on <var28:nullable AMethid>*/;
}
if (var29){
var30 = NULL;
if (var_new_child == NULL) {
var31 = 0; /* is null */
} else {
var31 = 1; /* arg is null and recv is not */
}
if (var31){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AMethid */
cltype33 = type_parser_nodes__AMethid.color;
idtype34 = type_parser_nodes__AMethid.id;
if(cltype33 >= var_new_child->type->table_size) {
var32 = 0;
} else {
var32 = var_new_child->type->type_table[cltype33] == idtype34;
}
if (!var32) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1769);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val = var_new_child; /* _n_methid on <self:ADeferredMethPropdef> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1772);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var35 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:ADeferredMethPropdef> */
if (var35 == NULL) {
var36 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var36 = ((short int (*)(val*, val*))(var35->class->vft[COLOR_kernel__Object___61d_61d]))(var35, var_old_child) /* == on <var35:nullable ASignature>*/;
}
if (var36){
var37 = NULL;
if (var_new_child == NULL) {
var38 = 0; /* is null */
} else {
var38 = 1; /* arg is null and recv is not */
}
if (var38){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa ASignature */
cltype40 = type_parser_nodes__ASignature.color;
idtype41 = type_parser_nodes__ASignature.id;
if(cltype40 >= var_new_child->type->table_size) {
var39 = 0;
} else {
var39 = var_new_child->type->type_table[cltype40] == idtype41;
}
if (!var39) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1779);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val = var_new_child; /* _n_signature on <self:ADeferredMethPropdef> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1782);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var42 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ADeferredMethPropdef> */
if (var42 == NULL) {
var43 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var43 = ((short int (*)(val*, val*))(var42->class->vft[COLOR_kernel__Object___61d_61d]))(var42, var_old_child) /* == on <var42:nullable AAnnotations>*/;
}
if (var43){
var44 = NULL;
if (var_new_child == NULL) {
var45 = 0; /* is null */
} else {
var45 = 1; /* arg is null and recv is not */
}
if (var45){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AAnnotations */
cltype47 = type_parser_nodes__AAnnotations.color;
idtype48 = type_parser_nodes__AAnnotations.id;
if(cltype47 >= var_new_child->type->table_size) {
var46 = 0;
} else {
var46 = var_new_child->type->type_table[cltype47] == idtype48;
}
if (!var46) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1789);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_new_child; /* _n_annotations on <self:ADeferredMethPropdef> */
} else {
var49 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var49; /* _n_annotations on <self:ADeferredMethPropdef> */
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ADeferredMethPropdef#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__ADeferredMethPropdef__replace_child(val* self, val* p0, val* p1) {
parser_prod__ADeferredMethPropdef__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#ADeferredMethPropdef#n_doc= for (self: ADeferredMethPropdef, nullable ADoc) */
void parser_prod__ADeferredMethPropdef__n_doc_61d(val* self, val* p0) {
val* var_node /* var node: nullable ADoc */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var_node; /* _n_doc on <self:ADeferredMethPropdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable ADoc(ADoc)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ADeferredMethPropdef#n_doc= for (self: Object, nullable ADoc) */
void VIRTUAL_parser_prod__ADeferredMethPropdef__n_doc_61d(val* self, val* p0) {
parser_prod__ADeferredMethPropdef__n_doc_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ADeferredMethPropdef#n_kwredef= for (self: ADeferredMethPropdef, nullable TKwredef) */
void parser_prod__ADeferredMethPropdef__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val = var_node; /* _n_kwredef on <self:ADeferredMethPropdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable TKwredef(TKwredef)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ADeferredMethPropdef#n_kwredef= for (self: Object, nullable TKwredef) */
void VIRTUAL_parser_prod__ADeferredMethPropdef__n_kwredef_61d(val* self, val* p0) {
parser_prod__ADeferredMethPropdef__n_kwredef_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ADeferredMethPropdef#n_visibility= for (self: ADeferredMethPropdef, nullable AVisibility) */
void parser_prod__ADeferredMethPropdef__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: nullable AVisibility */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_visibility].val = var_node; /* _n_visibility on <self:ADeferredMethPropdef> */
if (var_node == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1815);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AVisibility>*/;
}
RET_LABEL:;
}
/* method parser_prod#ADeferredMethPropdef#n_visibility= for (self: Object, nullable AVisibility) */
void VIRTUAL_parser_prod__ADeferredMethPropdef__n_visibility_61d(val* self, val* p0) {
parser_prod__ADeferredMethPropdef__n_visibility_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ADeferredMethPropdef#n_kwmeth= for (self: ADeferredMethPropdef, TKwmeth) */
void parser_prod__ADeferredMethPropdef__n_kwmeth_61d(val* self, val* p0) {
val* var_node /* var node: TKwmeth */;
var_node = p0;
self->attrs[COLOR_parser_nodes__ADeferredMethPropdef___n_kwmeth].val = var_node; /* _n_kwmeth on <self:ADeferredMethPropdef> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwmeth>*/;
RET_LABEL:;
}
/* method parser_prod#ADeferredMethPropdef#n_kwmeth= for (self: Object, TKwmeth) */
void VIRTUAL_parser_prod__ADeferredMethPropdef__n_kwmeth_61d(val* self, val* p0) {
parser_prod__ADeferredMethPropdef__n_kwmeth_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ADeferredMethPropdef#n_methid= for (self: ADeferredMethPropdef, nullable AMethid) */
void parser_prod__ADeferredMethPropdef__n_methid_61d(val* self, val* p0) {
val* var_node /* var node: nullable AMethid */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val = var_node; /* _n_methid on <self:ADeferredMethPropdef> */
if (var_node == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1825);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AMethid>*/;
}
RET_LABEL:;
}
/* method parser_prod#ADeferredMethPropdef#n_methid= for (self: Object, nullable AMethid) */
void VIRTUAL_parser_prod__ADeferredMethPropdef__n_methid_61d(val* self, val* p0) {
parser_prod__ADeferredMethPropdef__n_methid_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ADeferredMethPropdef#n_signature= for (self: ADeferredMethPropdef, nullable ASignature) */
void parser_prod__ADeferredMethPropdef__n_signature_61d(val* self, val* p0) {
val* var_node /* var node: nullable ASignature */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val = var_node; /* _n_signature on <self:ADeferredMethPropdef> */
if (var_node == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1830);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable ASignature>*/;
}
RET_LABEL:;
}
/* method parser_prod#ADeferredMethPropdef#n_signature= for (self: Object, nullable ASignature) */
void VIRTUAL_parser_prod__ADeferredMethPropdef__n_signature_61d(val* self, val* p0) {
parser_prod__ADeferredMethPropdef__n_signature_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ADeferredMethPropdef#n_annotations= for (self: ADeferredMethPropdef, nullable AAnnotations) */
void parser_prod__ADeferredMethPropdef__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:ADeferredMethPropdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AAnnotations(AAnnotations)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ADeferredMethPropdef#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__ADeferredMethPropdef__n_annotations_61d(val* self, val* p0) {
parser_prod__ADeferredMethPropdef__n_annotations_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#ADeferredMethPropdef#visit_all for (self: ADeferredMethPropdef, Visitor) */
void parser_prod__ADeferredMethPropdef__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable ADoc */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : nullable ADoc */;
val* var4 /* : nullable TKwredef */;
val* var5 /* : null */;
short int var6 /* : Bool */;
val* var7 /* : nullable TKwredef */;
val* var8 /* : nullable AVisibility */;
val* var9 /* : TKwmeth */;
val* var10 /* : nullable AMethid */;
val* var11 /* : nullable ASignature */;
val* var12 /* : nullable AAnnotations */;
val* var13 /* : null */;
short int var14 /* : Bool */;
val* var15 /* : nullable AAnnotations */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__APropdef___n_doc].val; /* _n_doc on <self:ADeferredMethPropdef> */
var1 = NULL;
if (var == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (var2){
var3 = self->attrs[COLOR_parser_nodes__APropdef___n_doc].val; /* _n_doc on <self:ADeferredMethPropdef> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1844);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var3) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var4 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val; /* _n_kwredef on <self:ADeferredMethPropdef> */
var5 = NULL;
if (var4 == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (var6){
var7 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val; /* _n_kwredef on <self:ADeferredMethPropdef> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1847);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var7) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_visibility].val; /* _n_visibility on <self:ADeferredMethPropdef> */
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var8) /* enter_visit on <var_v:Visitor>*/;
var9 = self->attrs[COLOR_parser_nodes__ADeferredMethPropdef___n_kwmeth].val; /* _n_kwmeth on <self:ADeferredMethPropdef> */
if (var9 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwmeth");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1850);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var9) /* enter_visit on <var_v:Visitor>*/;
var10 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:ADeferredMethPropdef> */
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var10) /* enter_visit on <var_v:Visitor>*/;
var11 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:ADeferredMethPropdef> */
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var11) /* enter_visit on <var_v:Visitor>*/;
var12 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ADeferredMethPropdef> */
var13 = NULL;
if (var12 == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (var14){
var15 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:ADeferredMethPropdef> */
if (var15 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1854);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var15) /* enter_visit on <var_v:Visitor>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#ADeferredMethPropdef#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__ADeferredMethPropdef__visit_all(val* self, val* p0) {
parser_prod__ADeferredMethPropdef__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AInternMethPropdef#empty_init for (self: AInternMethPropdef) */
void parser_prod__AInternMethPropdef__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AInternMethPropdef#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AInternMethPropdef__empty_init(val* self) {
parser_prod__AInternMethPropdef__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AInternMethPropdef#init_ainternmethpropdef for (self: AInternMethPropdef, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable TKwmeth, nullable AMethid, nullable ASignature) */
void parser_prod__AInternMethPropdef__init_ainternmethpropdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
val* var_n_doc /* var n_doc: nullable ADoc */;
val* var_n_kwredef /* var n_kwredef: nullable TKwredef */;
val* var_n_visibility /* var n_visibility: nullable AVisibility */;
val* var_n_kwmeth /* var n_kwmeth: nullable TKwmeth */;
val* var_n_methid /* var n_methid: nullable AMethid */;
val* var_n_signature /* var n_signature: nullable ASignature */;
val* var /* : null */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
var_n_doc = p0;
var_n_kwredef = p1;
var_n_visibility = p2;
var_n_kwmeth = p3;
var_n_methid = p4;
var_n_signature = p5;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AInternMethPropdef__empty_init]))(self) /* empty_init on <self:AInternMethPropdef>*/;
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var_n_doc; /* _n_doc on <self:AInternMethPropdef> */
var = NULL;
if (var_n_doc == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_doc->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_doc, self) /* parent= on <var_n_doc:nullable ADoc(ADoc)>*/;
} else {
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:AInternMethPropdef> */
var2 = NULL;
if (var_n_kwredef == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_n_kwredef->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwredef, self) /* parent= on <var_n_kwredef:nullable TKwredef(TKwredef)>*/;
} else {
}
if (var_n_visibility == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1879);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_visibility].val = var_n_visibility; /* _n_visibility on <self:AInternMethPropdef> */
if (var_n_visibility == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1880);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_visibility->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_visibility, self) /* parent= on <var_n_visibility:nullable AVisibility>*/;
}
if (var_n_kwmeth == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1881);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AInternMethPropdef___n_kwmeth].val = var_n_kwmeth; /* _n_kwmeth on <self:AInternMethPropdef> */
if (var_n_kwmeth == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1882);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_kwmeth->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwmeth, self) /* parent= on <var_n_kwmeth:nullable TKwmeth>*/;
}
if (var_n_methid == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1883);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val = var_n_methid; /* _n_methid on <self:AInternMethPropdef> */
if (var_n_methid == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1884);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_methid->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_methid, self) /* parent= on <var_n_methid:nullable AMethid>*/;
}
if (var_n_signature == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1885);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val = var_n_signature; /* _n_signature on <self:AInternMethPropdef> */
if (var_n_signature == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1886);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_signature->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_signature, self) /* parent= on <var_n_signature:nullable ASignature>*/;
}
RET_LABEL:;
}
/* method parser_prod#AInternMethPropdef#init_ainternmethpropdef for (self: Object, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable TKwmeth, nullable AMethid, nullable ASignature) */
void VIRTUAL_parser_prod__AInternMethPropdef__init_ainternmethpropdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5) {
parser_prod__AInternMethPropdef__init_ainternmethpropdef(self, p0, p1, p2, p3, p4, p5);
RET_LABEL:;
}
/* method parser_prod#AInternMethPropdef#replace_child for (self: AInternMethPropdef, ANode, nullable ANode) */
void parser_prod__AInternMethPropdef__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable ADoc */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : null */;
val* var6 /* : nullable TKwredef */;
short int var7 /* : Bool */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : null */;
val* var14 /* : nullable AVisibility */;
short int var15 /* : Bool */;
val* var16 /* : null */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : TKwmeth */;
short int var22 /* : Bool */;
val* var23 /* : null */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : nullable AMethid */;
short int var29 /* : Bool */;
val* var30 /* : null */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
val* var35 /* : nullable ASignature */;
short int var36 /* : Bool */;
val* var37 /* : null */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__APropdef___n_doc].val; /* _n_doc on <self:AInternMethPropdef> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:nullable ADoc>*/;
}
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa ADoc */
cltype = type_parser_nodes__ADoc.color;
idtype = type_parser_nodes__ADoc.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1894);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var_new_child; /* _n_doc on <self:AInternMethPropdef> */
} else {
var5 = NULL;
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var5; /* _n_doc on <self:AInternMethPropdef> */
}
goto RET_LABEL;
} else {
}
var6 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val; /* _n_kwredef on <self:AInternMethPropdef> */
if (var6 == NULL) {
var7 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var7 = ((short int (*)(val*, val*))(var6->class->vft[COLOR_kernel__Object___61d_61d]))(var6, var_old_child) /* == on <var6:nullable TKwredef>*/;
}
if (var7){
var8 = NULL;
if (var_new_child == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (var9){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwredef */
cltype11 = type_parser_nodes__TKwredef.color;
idtype12 = type_parser_nodes__TKwredef.id;
if(cltype11 >= var_new_child->type->table_size) {
var10 = 0;
} else {
var10 = var_new_child->type->type_table[cltype11] == idtype12;
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1904);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val = var_new_child; /* _n_kwredef on <self:AInternMethPropdef> */
} else {
var13 = NULL;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val = var13; /* _n_kwredef on <self:AInternMethPropdef> */
}
goto RET_LABEL;
} else {
}
var14 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_visibility].val; /* _n_visibility on <self:AInternMethPropdef> */
if (var14 == NULL) {
var15 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var15 = ((short int (*)(val*, val*))(var14->class->vft[COLOR_kernel__Object___61d_61d]))(var14, var_old_child) /* == on <var14:nullable AVisibility>*/;
}
if (var15){
var16 = NULL;
if (var_new_child == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (var17){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AVisibility */
cltype19 = type_parser_nodes__AVisibility.color;
idtype20 = type_parser_nodes__AVisibility.id;
if(cltype19 >= var_new_child->type->table_size) {
var18 = 0;
} else {
var18 = var_new_child->type->type_table[cltype19] == idtype20;
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1914);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_visibility].val = var_new_child; /* _n_visibility on <self:AInternMethPropdef> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1917);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var21 = self->attrs[COLOR_parser_nodes__AInternMethPropdef___n_kwmeth].val; /* _n_kwmeth on <self:AInternMethPropdef> */
if (var21 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwmeth");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1921);
show_backtrace(1);
}
var22 = ((short int (*)(val*, val*))(var21->class->vft[COLOR_kernel__Object___61d_61d]))(var21, var_old_child) /* == on <var21:TKwmeth>*/;
if (var22){
var23 = NULL;
if (var_new_child == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (var24){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwmeth */
cltype26 = type_parser_nodes__TKwmeth.color;
idtype27 = type_parser_nodes__TKwmeth.id;
if(cltype26 >= var_new_child->type->table_size) {
var25 = 0;
} else {
var25 = var_new_child->type->type_table[cltype26] == idtype27;
}
if (!var25) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1924);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AInternMethPropdef___n_kwmeth].val = var_new_child; /* _n_kwmeth on <self:AInternMethPropdef> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1927);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var28 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AInternMethPropdef> */
if (var28 == NULL) {
var29 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var29 = ((short int (*)(val*, val*))(var28->class->vft[COLOR_kernel__Object___61d_61d]))(var28, var_old_child) /* == on <var28:nullable AMethid>*/;
}
if (var29){
var30 = NULL;
if (var_new_child == NULL) {
var31 = 0; /* is null */
} else {
var31 = 1; /* arg is null and recv is not */
}
if (var31){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AMethid */
cltype33 = type_parser_nodes__AMethid.color;
idtype34 = type_parser_nodes__AMethid.id;
if(cltype33 >= var_new_child->type->table_size) {
var32 = 0;
} else {
var32 = var_new_child->type->type_table[cltype33] == idtype34;
}
if (!var32) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1934);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val = var_new_child; /* _n_methid on <self:AInternMethPropdef> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1937);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var35 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AInternMethPropdef> */
if (var35 == NULL) {
var36 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var36 = ((short int (*)(val*, val*))(var35->class->vft[COLOR_kernel__Object___61d_61d]))(var35, var_old_child) /* == on <var35:nullable ASignature>*/;
}
if (var36){
var37 = NULL;
if (var_new_child == NULL) {
var38 = 0; /* is null */
} else {
var38 = 1; /* arg is null and recv is not */
}
if (var38){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa ASignature */
cltype40 = type_parser_nodes__ASignature.color;
idtype41 = type_parser_nodes__ASignature.id;
if(cltype40 >= var_new_child->type->table_size) {
var39 = 0;
} else {
var39 = var_new_child->type->type_table[cltype40] == idtype41;
}
if (!var39) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1944);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val = var_new_child; /* _n_signature on <self:AInternMethPropdef> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1947);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AInternMethPropdef#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AInternMethPropdef__replace_child(val* self, val* p0, val* p1) {
parser_prod__AInternMethPropdef__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AInternMethPropdef#n_doc= for (self: AInternMethPropdef, nullable ADoc) */
void parser_prod__AInternMethPropdef__n_doc_61d(val* self, val* p0) {
val* var_node /* var node: nullable ADoc */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var_node; /* _n_doc on <self:AInternMethPropdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable ADoc(ADoc)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AInternMethPropdef#n_doc= for (self: Object, nullable ADoc) */
void VIRTUAL_parser_prod__AInternMethPropdef__n_doc_61d(val* self, val* p0) {
parser_prod__AInternMethPropdef__n_doc_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AInternMethPropdef#n_kwredef= for (self: AInternMethPropdef, nullable TKwredef) */
void parser_prod__AInternMethPropdef__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val = var_node; /* _n_kwredef on <self:AInternMethPropdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable TKwredef(TKwredef)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AInternMethPropdef#n_kwredef= for (self: Object, nullable TKwredef) */
void VIRTUAL_parser_prod__AInternMethPropdef__n_kwredef_61d(val* self, val* p0) {
parser_prod__AInternMethPropdef__n_kwredef_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AInternMethPropdef#n_visibility= for (self: AInternMethPropdef, nullable AVisibility) */
void parser_prod__AInternMethPropdef__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: nullable AVisibility */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_visibility].val = var_node; /* _n_visibility on <self:AInternMethPropdef> */
if (var_node == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1970);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AVisibility>*/;
}
RET_LABEL:;
}
/* method parser_prod#AInternMethPropdef#n_visibility= for (self: Object, nullable AVisibility) */
void VIRTUAL_parser_prod__AInternMethPropdef__n_visibility_61d(val* self, val* p0) {
parser_prod__AInternMethPropdef__n_visibility_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AInternMethPropdef#n_kwmeth= for (self: AInternMethPropdef, TKwmeth) */
void parser_prod__AInternMethPropdef__n_kwmeth_61d(val* self, val* p0) {
val* var_node /* var node: TKwmeth */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AInternMethPropdef___n_kwmeth].val = var_node; /* _n_kwmeth on <self:AInternMethPropdef> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwmeth>*/;
RET_LABEL:;
}
/* method parser_prod#AInternMethPropdef#n_kwmeth= for (self: Object, TKwmeth) */
void VIRTUAL_parser_prod__AInternMethPropdef__n_kwmeth_61d(val* self, val* p0) {
parser_prod__AInternMethPropdef__n_kwmeth_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AInternMethPropdef#n_methid= for (self: AInternMethPropdef, nullable AMethid) */
void parser_prod__AInternMethPropdef__n_methid_61d(val* self, val* p0) {
val* var_node /* var node: nullable AMethid */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val = var_node; /* _n_methid on <self:AInternMethPropdef> */
if (var_node == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1980);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AMethid>*/;
}
RET_LABEL:;
}
/* method parser_prod#AInternMethPropdef#n_methid= for (self: Object, nullable AMethid) */
void VIRTUAL_parser_prod__AInternMethPropdef__n_methid_61d(val* self, val* p0) {
parser_prod__AInternMethPropdef__n_methid_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AInternMethPropdef#n_signature= for (self: AInternMethPropdef, nullable ASignature) */
void parser_prod__AInternMethPropdef__n_signature_61d(val* self, val* p0) {
val* var_node /* var node: nullable ASignature */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val = var_node; /* _n_signature on <self:AInternMethPropdef> */
if (var_node == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1985);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable ASignature>*/;
}
RET_LABEL:;
}
/* method parser_prod#AInternMethPropdef#n_signature= for (self: Object, nullable ASignature) */
void VIRTUAL_parser_prod__AInternMethPropdef__n_signature_61d(val* self, val* p0) {
parser_prod__AInternMethPropdef__n_signature_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AInternMethPropdef#visit_all for (self: AInternMethPropdef, Visitor) */
void parser_prod__AInternMethPropdef__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable ADoc */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : nullable ADoc */;
val* var4 /* : nullable TKwredef */;
val* var5 /* : null */;
short int var6 /* : Bool */;
val* var7 /* : nullable TKwredef */;
val* var8 /* : nullable AVisibility */;
val* var9 /* : TKwmeth */;
val* var10 /* : nullable AMethid */;
val* var11 /* : nullable ASignature */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__APropdef___n_doc].val; /* _n_doc on <self:AInternMethPropdef> */
var1 = NULL;
if (var == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (var2){
var3 = self->attrs[COLOR_parser_nodes__APropdef___n_doc].val; /* _n_doc on <self:AInternMethPropdef> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1992);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var3) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var4 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val; /* _n_kwredef on <self:AInternMethPropdef> */
var5 = NULL;
if (var4 == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (var6){
var7 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val; /* _n_kwredef on <self:AInternMethPropdef> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1995);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var7) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_visibility].val; /* _n_visibility on <self:AInternMethPropdef> */
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var8) /* enter_visit on <var_v:Visitor>*/;
var9 = self->attrs[COLOR_parser_nodes__AInternMethPropdef___n_kwmeth].val; /* _n_kwmeth on <self:AInternMethPropdef> */
if (var9 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwmeth");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 1998);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var9) /* enter_visit on <var_v:Visitor>*/;
var10 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AInternMethPropdef> */
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var10) /* enter_visit on <var_v:Visitor>*/;
var11 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AInternMethPropdef> */
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var11) /* enter_visit on <var_v:Visitor>*/;
RET_LABEL:;
}
/* method parser_prod#AInternMethPropdef#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AInternMethPropdef__visit_all(val* self, val* p0) {
parser_prod__AInternMethPropdef__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AExternMethPropdef#empty_init for (self: AExternMethPropdef) */
void parser_prod__AExternMethPropdef__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AExternMethPropdef#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AExternMethPropdef__empty_init(val* self) {
parser_prod__AExternMethPropdef__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AExternMethPropdef#init_aexternmethpropdef for (self: AExternMethPropdef, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable TKwmeth, nullable AMethid, nullable ASignature, nullable TString, nullable AExternCalls, nullable AExternCodeBlock) */
void parser_prod__AExternMethPropdef__init_aexternmethpropdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8) {
val* var_n_doc /* var n_doc: nullable ADoc */;
val* var_n_kwredef /* var n_kwredef: nullable TKwredef */;
val* var_n_visibility /* var n_visibility: nullable AVisibility */;
val* var_n_kwmeth /* var n_kwmeth: nullable TKwmeth */;
val* var_n_methid /* var n_methid: nullable AMethid */;
val* var_n_signature /* var n_signature: nullable ASignature */;
val* var_n_extern /* var n_extern: nullable TString */;
val* var_n_extern_calls /* var n_extern_calls: nullable AExternCalls */;
val* var_n_extern_code_block /* var n_extern_code_block: nullable AExternCodeBlock */;
val* var /* : null */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
short int var5 /* : Bool */;
val* var6 /* : null */;
short int var7 /* : Bool */;
val* var8 /* : null */;
short int var9 /* : Bool */;
var_n_doc = p0;
var_n_kwredef = p1;
var_n_visibility = p2;
var_n_kwmeth = p3;
var_n_methid = p4;
var_n_signature = p5;
var_n_extern = p6;
var_n_extern_calls = p7;
var_n_extern_code_block = p8;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AExternMethPropdef__empty_init]))(self) /* empty_init on <self:AExternMethPropdef>*/;
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var_n_doc; /* _n_doc on <self:AExternMethPropdef> */
var = NULL;
if (var_n_doc == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_doc->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_doc, self) /* parent= on <var_n_doc:nullable ADoc(ADoc)>*/;
} else {
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:AExternMethPropdef> */
var2 = NULL;
if (var_n_kwredef == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_n_kwredef->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwredef, self) /* parent= on <var_n_kwredef:nullable TKwredef(TKwredef)>*/;
} else {
}
if (var_n_visibility == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2027);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_visibility].val = var_n_visibility; /* _n_visibility on <self:AExternMethPropdef> */
if (var_n_visibility == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2028);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_visibility->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_visibility, self) /* parent= on <var_n_visibility:nullable AVisibility>*/;
}
if (var_n_kwmeth == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2029);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AExternMethPropdef___n_kwmeth].val = var_n_kwmeth; /* _n_kwmeth on <self:AExternMethPropdef> */
if (var_n_kwmeth == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2030);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_kwmeth->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwmeth, self) /* parent= on <var_n_kwmeth:nullable TKwmeth>*/;
}
if (var_n_methid == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2031);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val = var_n_methid; /* _n_methid on <self:AExternMethPropdef> */
if (var_n_methid == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2032);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_methid->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_methid, self) /* parent= on <var_n_methid:nullable AMethid>*/;
}
if (var_n_signature == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2033);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val = var_n_signature; /* _n_signature on <self:AExternMethPropdef> */
if (var_n_signature == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2034);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_signature->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_signature, self) /* parent= on <var_n_signature:nullable ASignature>*/;
}
self->attrs[COLOR_parser_nodes__AExternPropdef___n_extern].val = var_n_extern; /* _n_extern on <self:AExternMethPropdef> */
var4 = NULL;
if (var_n_extern == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (var5){
((void (*)(val*, val*))(var_n_extern->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_extern, self) /* parent= on <var_n_extern:nullable TString(TString)>*/;
} else {
}
self->attrs[COLOR_parser_nodes__AExternPropdef___n_extern_calls].val = var_n_extern_calls; /* _n_extern_calls on <self:AExternMethPropdef> */
var6 = NULL;
if (var_n_extern_calls == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (var7){
((void (*)(val*, val*))(var_n_extern_calls->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_extern_calls, self) /* parent= on <var_n_extern_calls:nullable AExternCalls(AExternCalls)>*/;
} else {
}
self->attrs[COLOR_parser_nodes__AExternPropdef___n_extern_code_block].val = var_n_extern_code_block; /* _n_extern_code_block on <self:AExternMethPropdef> */
var8 = NULL;
if (var_n_extern_code_block == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (var9){
((void (*)(val*, val*))(var_n_extern_code_block->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_extern_code_block, self) /* parent= on <var_n_extern_code_block:nullable AExternCodeBlock(AExternCodeBlock)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExternMethPropdef#init_aexternmethpropdef for (self: Object, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable TKwmeth, nullable AMethid, nullable ASignature, nullable TString, nullable AExternCalls, nullable AExternCodeBlock) */
void VIRTUAL_parser_prod__AExternMethPropdef__init_aexternmethpropdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7, val* p8) {
parser_prod__AExternMethPropdef__init_aexternmethpropdef(self, p0, p1, p2, p3, p4, p5, p6, p7, p8);
RET_LABEL:;
}
/* method parser_prod#AExternMethPropdef#replace_child for (self: AExternMethPropdef, ANode, nullable ANode) */
void parser_prod__AExternMethPropdef__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable ADoc */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : null */;
val* var6 /* : nullable TKwredef */;
short int var7 /* : Bool */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : null */;
val* var14 /* : nullable AVisibility */;
short int var15 /* : Bool */;
val* var16 /* : null */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : TKwmeth */;
short int var22 /* : Bool */;
val* var23 /* : null */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : nullable AMethid */;
short int var29 /* : Bool */;
val* var30 /* : null */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
val* var35 /* : nullable ASignature */;
short int var36 /* : Bool */;
val* var37 /* : null */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
val* var42 /* : nullable TString */;
short int var43 /* : Bool */;
val* var44 /* : null */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
val* var49 /* : null */;
val* var50 /* : nullable AExternCalls */;
short int var51 /* : Bool */;
val* var52 /* : null */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
int cltype55;
int idtype56;
val* var57 /* : null */;
val* var58 /* : nullable AExternCodeBlock */;
short int var59 /* : Bool */;
val* var60 /* : null */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
int cltype63;
int idtype64;
val* var65 /* : null */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__APropdef___n_doc].val; /* _n_doc on <self:AExternMethPropdef> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:nullable ADoc>*/;
}
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa ADoc */
cltype = type_parser_nodes__ADoc.color;
idtype = type_parser_nodes__ADoc.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2054);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var_new_child; /* _n_doc on <self:AExternMethPropdef> */
} else {
var5 = NULL;
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var5; /* _n_doc on <self:AExternMethPropdef> */
}
goto RET_LABEL;
} else {
}
var6 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val; /* _n_kwredef on <self:AExternMethPropdef> */
if (var6 == NULL) {
var7 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var7 = ((short int (*)(val*, val*))(var6->class->vft[COLOR_kernel__Object___61d_61d]))(var6, var_old_child) /* == on <var6:nullable TKwredef>*/;
}
if (var7){
var8 = NULL;
if (var_new_child == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (var9){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwredef */
cltype11 = type_parser_nodes__TKwredef.color;
idtype12 = type_parser_nodes__TKwredef.id;
if(cltype11 >= var_new_child->type->table_size) {
var10 = 0;
} else {
var10 = var_new_child->type->type_table[cltype11] == idtype12;
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2064);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val = var_new_child; /* _n_kwredef on <self:AExternMethPropdef> */
} else {
var13 = NULL;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val = var13; /* _n_kwredef on <self:AExternMethPropdef> */
}
goto RET_LABEL;
} else {
}
var14 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_visibility].val; /* _n_visibility on <self:AExternMethPropdef> */
if (var14 == NULL) {
var15 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var15 = ((short int (*)(val*, val*))(var14->class->vft[COLOR_kernel__Object___61d_61d]))(var14, var_old_child) /* == on <var14:nullable AVisibility>*/;
}
if (var15){
var16 = NULL;
if (var_new_child == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (var17){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AVisibility */
cltype19 = type_parser_nodes__AVisibility.color;
idtype20 = type_parser_nodes__AVisibility.id;
if(cltype19 >= var_new_child->type->table_size) {
var18 = 0;
} else {
var18 = var_new_child->type->type_table[cltype19] == idtype20;
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2074);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_visibility].val = var_new_child; /* _n_visibility on <self:AExternMethPropdef> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2077);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var21 = self->attrs[COLOR_parser_nodes__AExternMethPropdef___n_kwmeth].val; /* _n_kwmeth on <self:AExternMethPropdef> */
if (var21 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwmeth");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2081);
show_backtrace(1);
}
var22 = ((short int (*)(val*, val*))(var21->class->vft[COLOR_kernel__Object___61d_61d]))(var21, var_old_child) /* == on <var21:TKwmeth>*/;
if (var22){
var23 = NULL;
if (var_new_child == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (var24){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwmeth */
cltype26 = type_parser_nodes__TKwmeth.color;
idtype27 = type_parser_nodes__TKwmeth.id;
if(cltype26 >= var_new_child->type->table_size) {
var25 = 0;
} else {
var25 = var_new_child->type->type_table[cltype26] == idtype27;
}
if (!var25) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2084);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AExternMethPropdef___n_kwmeth].val = var_new_child; /* _n_kwmeth on <self:AExternMethPropdef> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2087);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var28 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AExternMethPropdef> */
if (var28 == NULL) {
var29 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var29 = ((short int (*)(val*, val*))(var28->class->vft[COLOR_kernel__Object___61d_61d]))(var28, var_old_child) /* == on <var28:nullable AMethid>*/;
}
if (var29){
var30 = NULL;
if (var_new_child == NULL) {
var31 = 0; /* is null */
} else {
var31 = 1; /* arg is null and recv is not */
}
if (var31){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AMethid */
cltype33 = type_parser_nodes__AMethid.color;
idtype34 = type_parser_nodes__AMethid.id;
if(cltype33 >= var_new_child->type->table_size) {
var32 = 0;
} else {
var32 = var_new_child->type->type_table[cltype33] == idtype34;
}
if (!var32) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2094);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val = var_new_child; /* _n_methid on <self:AExternMethPropdef> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2097);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var35 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AExternMethPropdef> */
if (var35 == NULL) {
var36 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var36 = ((short int (*)(val*, val*))(var35->class->vft[COLOR_kernel__Object___61d_61d]))(var35, var_old_child) /* == on <var35:nullable ASignature>*/;
}
if (var36){
var37 = NULL;
if (var_new_child == NULL) {
var38 = 0; /* is null */
} else {
var38 = 1; /* arg is null and recv is not */
}
if (var38){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa ASignature */
cltype40 = type_parser_nodes__ASignature.color;
idtype41 = type_parser_nodes__ASignature.id;
if(cltype40 >= var_new_child->type->table_size) {
var39 = 0;
} else {
var39 = var_new_child->type->type_table[cltype40] == idtype41;
}
if (!var39) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2104);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val = var_new_child; /* _n_signature on <self:AExternMethPropdef> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2107);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var42 = self->attrs[COLOR_parser_nodes__AExternPropdef___n_extern].val; /* _n_extern on <self:AExternMethPropdef> */
if (var42 == NULL) {
var43 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var43 = ((short int (*)(val*, val*))(var42->class->vft[COLOR_kernel__Object___61d_61d]))(var42, var_old_child) /* == on <var42:nullable TString>*/;
}
if (var43){
var44 = NULL;
if (var_new_child == NULL) {
var45 = 0; /* is null */
} else {
var45 = 1; /* arg is null and recv is not */
}
if (var45){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TString */
cltype47 = type_parser_nodes__TString.color;
idtype48 = type_parser_nodes__TString.id;
if(cltype47 >= var_new_child->type->table_size) {
var46 = 0;
} else {
var46 = var_new_child->type->type_table[cltype47] == idtype48;
}
if (!var46) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2114);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AExternPropdef___n_extern].val = var_new_child; /* _n_extern on <self:AExternMethPropdef> */
} else {
var49 = NULL;
self->attrs[COLOR_parser_nodes__AExternPropdef___n_extern].val = var49; /* _n_extern on <self:AExternMethPropdef> */
}
goto RET_LABEL;
} else {
}
var50 = self->attrs[COLOR_parser_nodes__AExternPropdef___n_extern_calls].val; /* _n_extern_calls on <self:AExternMethPropdef> */
if (var50 == NULL) {
var51 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var51 = ((short int (*)(val*, val*))(var50->class->vft[COLOR_kernel__Object___61d_61d]))(var50, var_old_child) /* == on <var50:nullable AExternCalls>*/;
}
if (var51){
var52 = NULL;
if (var_new_child == NULL) {
var53 = 0; /* is null */
} else {
var53 = 1; /* arg is null and recv is not */
}
if (var53){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AExternCalls */
cltype55 = type_parser_nodes__AExternCalls.color;
idtype56 = type_parser_nodes__AExternCalls.id;
if(cltype55 >= var_new_child->type->table_size) {
var54 = 0;
} else {
var54 = var_new_child->type->type_table[cltype55] == idtype56;
}
if (!var54) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2124);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AExternPropdef___n_extern_calls].val = var_new_child; /* _n_extern_calls on <self:AExternMethPropdef> */
} else {
var57 = NULL;
self->attrs[COLOR_parser_nodes__AExternPropdef___n_extern_calls].val = var57; /* _n_extern_calls on <self:AExternMethPropdef> */
}
goto RET_LABEL;
} else {
}
var58 = self->attrs[COLOR_parser_nodes__AExternPropdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AExternMethPropdef> */
if (var58 == NULL) {
var59 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var59 = ((short int (*)(val*, val*))(var58->class->vft[COLOR_kernel__Object___61d_61d]))(var58, var_old_child) /* == on <var58:nullable AExternCodeBlock>*/;
}
if (var59){
var60 = NULL;
if (var_new_child == NULL) {
var61 = 0; /* is null */
} else {
var61 = 1; /* arg is null and recv is not */
}
if (var61){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AExternCodeBlock */
cltype63 = type_parser_nodes__AExternCodeBlock.color;
idtype64 = type_parser_nodes__AExternCodeBlock.id;
if(cltype63 >= var_new_child->type->table_size) {
var62 = 0;
} else {
var62 = var_new_child->type->type_table[cltype63] == idtype64;
}
if (!var62) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2134);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AExternPropdef___n_extern_code_block].val = var_new_child; /* _n_extern_code_block on <self:AExternMethPropdef> */
} else {
var65 = NULL;
self->attrs[COLOR_parser_nodes__AExternPropdef___n_extern_code_block].val = var65; /* _n_extern_code_block on <self:AExternMethPropdef> */
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExternMethPropdef#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AExternMethPropdef__replace_child(val* self, val* p0, val* p1) {
parser_prod__AExternMethPropdef__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AExternMethPropdef#n_doc= for (self: AExternMethPropdef, nullable ADoc) */
void parser_prod__AExternMethPropdef__n_doc_61d(val* self, val* p0) {
val* var_node /* var node: nullable ADoc */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var_node; /* _n_doc on <self:AExternMethPropdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable ADoc(ADoc)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExternMethPropdef#n_doc= for (self: Object, nullable ADoc) */
void VIRTUAL_parser_prod__AExternMethPropdef__n_doc_61d(val* self, val* p0) {
parser_prod__AExternMethPropdef__n_doc_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AExternMethPropdef#n_kwredef= for (self: AExternMethPropdef, nullable TKwredef) */
void parser_prod__AExternMethPropdef__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val = var_node; /* _n_kwredef on <self:AExternMethPropdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable TKwredef(TKwredef)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExternMethPropdef#n_kwredef= for (self: Object, nullable TKwredef) */
void VIRTUAL_parser_prod__AExternMethPropdef__n_kwredef_61d(val* self, val* p0) {
parser_prod__AExternMethPropdef__n_kwredef_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AExternMethPropdef#n_visibility= for (self: AExternMethPropdef, nullable AVisibility) */
void parser_prod__AExternMethPropdef__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: nullable AVisibility */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_visibility].val = var_node; /* _n_visibility on <self:AExternMethPropdef> */
if (var_node == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2160);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AVisibility>*/;
}
RET_LABEL:;
}
/* method parser_prod#AExternMethPropdef#n_visibility= for (self: Object, nullable AVisibility) */
void VIRTUAL_parser_prod__AExternMethPropdef__n_visibility_61d(val* self, val* p0) {
parser_prod__AExternMethPropdef__n_visibility_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AExternMethPropdef#n_kwmeth= for (self: AExternMethPropdef, TKwmeth) */
void parser_prod__AExternMethPropdef__n_kwmeth_61d(val* self, val* p0) {
val* var_node /* var node: TKwmeth */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AExternMethPropdef___n_kwmeth].val = var_node; /* _n_kwmeth on <self:AExternMethPropdef> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:TKwmeth>*/;
RET_LABEL:;
}
/* method parser_prod#AExternMethPropdef#n_kwmeth= for (self: Object, TKwmeth) */
void VIRTUAL_parser_prod__AExternMethPropdef__n_kwmeth_61d(val* self, val* p0) {
parser_prod__AExternMethPropdef__n_kwmeth_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AExternMethPropdef#n_methid= for (self: AExternMethPropdef, nullable AMethid) */
void parser_prod__AExternMethPropdef__n_methid_61d(val* self, val* p0) {
val* var_node /* var node: nullable AMethid */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val = var_node; /* _n_methid on <self:AExternMethPropdef> */
if (var_node == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2170);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AMethid>*/;
}
RET_LABEL:;
}
/* method parser_prod#AExternMethPropdef#n_methid= for (self: Object, nullable AMethid) */
void VIRTUAL_parser_prod__AExternMethPropdef__n_methid_61d(val* self, val* p0) {
parser_prod__AExternMethPropdef__n_methid_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AExternMethPropdef#n_signature= for (self: AExternMethPropdef, nullable ASignature) */
void parser_prod__AExternMethPropdef__n_signature_61d(val* self, val* p0) {
val* var_node /* var node: nullable ASignature */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val = var_node; /* _n_signature on <self:AExternMethPropdef> */
if (var_node == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2175);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable ASignature>*/;
}
RET_LABEL:;
}
/* method parser_prod#AExternMethPropdef#n_signature= for (self: Object, nullable ASignature) */
void VIRTUAL_parser_prod__AExternMethPropdef__n_signature_61d(val* self, val* p0) {
parser_prod__AExternMethPropdef__n_signature_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AExternMethPropdef#n_extern= for (self: AExternMethPropdef, nullable TString) */
void parser_prod__AExternMethPropdef__n_extern_61d(val* self, val* p0) {
val* var_node /* var node: nullable TString */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AExternPropdef___n_extern].val = var_node; /* _n_extern on <self:AExternMethPropdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable TString(TString)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExternMethPropdef#n_extern= for (self: Object, nullable TString) */
void VIRTUAL_parser_prod__AExternMethPropdef__n_extern_61d(val* self, val* p0) {
parser_prod__AExternMethPropdef__n_extern_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AExternMethPropdef#n_extern_calls= for (self: AExternMethPropdef, nullable AExternCalls) */
void parser_prod__AExternMethPropdef__n_extern_calls_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExternCalls */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AExternPropdef___n_extern_calls].val = var_node; /* _n_extern_calls on <self:AExternMethPropdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AExternCalls(AExternCalls)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExternMethPropdef#n_extern_calls= for (self: Object, nullable AExternCalls) */
void VIRTUAL_parser_prod__AExternMethPropdef__n_extern_calls_61d(val* self, val* p0) {
parser_prod__AExternMethPropdef__n_extern_calls_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AExternMethPropdef#n_extern_code_block= for (self: AExternMethPropdef, nullable AExternCodeBlock) */
void parser_prod__AExternMethPropdef__n_extern_code_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExternCodeBlock */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AExternPropdef___n_extern_code_block].val = var_node; /* _n_extern_code_block on <self:AExternMethPropdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AExternCodeBlock(AExternCodeBlock)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExternMethPropdef#n_extern_code_block= for (self: Object, nullable AExternCodeBlock) */
void VIRTUAL_parser_prod__AExternMethPropdef__n_extern_code_block_61d(val* self, val* p0) {
parser_prod__AExternMethPropdef__n_extern_code_block_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AExternMethPropdef#visit_all for (self: AExternMethPropdef, Visitor) */
void parser_prod__AExternMethPropdef__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable ADoc */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : nullable ADoc */;
val* var4 /* : nullable TKwredef */;
val* var5 /* : null */;
short int var6 /* : Bool */;
val* var7 /* : nullable TKwredef */;
val* var8 /* : nullable AVisibility */;
val* var9 /* : TKwmeth */;
val* var10 /* : nullable AMethid */;
val* var11 /* : nullable ASignature */;
val* var12 /* : nullable TString */;
val* var13 /* : null */;
short int var14 /* : Bool */;
val* var15 /* : nullable TString */;
val* var16 /* : nullable AExternCalls */;
val* var17 /* : null */;
short int var18 /* : Bool */;
val* var19 /* : nullable AExternCalls */;
val* var20 /* : nullable AExternCodeBlock */;
val* var21 /* : null */;
short int var22 /* : Bool */;
val* var23 /* : nullable AExternCodeBlock */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__APropdef___n_doc].val; /* _n_doc on <self:AExternMethPropdef> */
var1 = NULL;
if (var == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (var2){
var3 = self->attrs[COLOR_parser_nodes__APropdef___n_doc].val; /* _n_doc on <self:AExternMethPropdef> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2203);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var3) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var4 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val; /* _n_kwredef on <self:AExternMethPropdef> */
var5 = NULL;
if (var4 == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (var6){
var7 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val; /* _n_kwredef on <self:AExternMethPropdef> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2206);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var7) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_visibility].val; /* _n_visibility on <self:AExternMethPropdef> */
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var8) /* enter_visit on <var_v:Visitor>*/;
var9 = self->attrs[COLOR_parser_nodes__AExternMethPropdef___n_kwmeth].val; /* _n_kwmeth on <self:AExternMethPropdef> */
if (var9 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwmeth");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2209);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var9) /* enter_visit on <var_v:Visitor>*/;
var10 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AExternMethPropdef> */
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var10) /* enter_visit on <var_v:Visitor>*/;
var11 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AExternMethPropdef> */
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var11) /* enter_visit on <var_v:Visitor>*/;
var12 = self->attrs[COLOR_parser_nodes__AExternPropdef___n_extern].val; /* _n_extern on <self:AExternMethPropdef> */
var13 = NULL;
if (var12 == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (var14){
var15 = self->attrs[COLOR_parser_nodes__AExternPropdef___n_extern].val; /* _n_extern on <self:AExternMethPropdef> */
if (var15 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2213);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var15) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var16 = self->attrs[COLOR_parser_nodes__AExternPropdef___n_extern_calls].val; /* _n_extern_calls on <self:AExternMethPropdef> */
var17 = NULL;
if (var16 == NULL) {
var18 = 0; /* is null */
} else {
var18 = 1; /* arg is null and recv is not */
}
if (var18){
var19 = self->attrs[COLOR_parser_nodes__AExternPropdef___n_extern_calls].val; /* _n_extern_calls on <self:AExternMethPropdef> */
if (var19 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2216);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var19) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var20 = self->attrs[COLOR_parser_nodes__AExternPropdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AExternMethPropdef> */
var21 = NULL;
if (var20 == NULL) {
var22 = 0; /* is null */
} else {
var22 = 1; /* arg is null and recv is not */
}
if (var22){
var23 = self->attrs[COLOR_parser_nodes__AExternPropdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AExternMethPropdef> */
if (var23 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2219);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var23) /* enter_visit on <var_v:Visitor>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AExternMethPropdef#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AExternMethPropdef__visit_all(val* self, val* p0) {
parser_prod__AExternMethPropdef__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AConcreteMethPropdef#empty_init for (self: AConcreteMethPropdef) */
void parser_prod__AConcreteMethPropdef__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AConcreteMethPropdef#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AConcreteMethPropdef__empty_init(val* self) {
parser_prod__AConcreteMethPropdef__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AConcreteMethPropdef#init_aconcretemethpropdef for (self: AConcreteMethPropdef, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable TKwmeth, nullable AMethid, nullable ASignature, nullable AAnnotations, nullable AExpr) */
void parser_prod__AConcreteMethPropdef__init_aconcretemethpropdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7) {
val* var_n_doc /* var n_doc: nullable ADoc */;
val* var_n_kwredef /* var n_kwredef: nullable TKwredef */;
val* var_n_visibility /* var n_visibility: nullable AVisibility */;
val* var_n_kwmeth /* var n_kwmeth: nullable TKwmeth */;
val* var_n_methid /* var n_methid: nullable AMethid */;
val* var_n_signature /* var n_signature: nullable ASignature */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var_n_block /* var n_block: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
short int var5 /* : Bool */;
val* var6 /* : null */;
short int var7 /* : Bool */;
var_n_doc = p0;
var_n_kwredef = p1;
var_n_visibility = p2;
var_n_kwmeth = p3;
var_n_methid = p4;
var_n_signature = p5;
var_n_annotations = p6;
var_n_block = p7;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AConcreteMethPropdef__empty_init]))(self) /* empty_init on <self:AConcreteMethPropdef>*/;
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var_n_doc; /* _n_doc on <self:AConcreteMethPropdef> */
var = NULL;
if (var_n_doc == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_doc->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_doc, self) /* parent= on <var_n_doc:nullable ADoc(ADoc)>*/;
} else {
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:AConcreteMethPropdef> */
var2 = NULL;
if (var_n_kwredef == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_n_kwredef->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwredef, self) /* parent= on <var_n_kwredef:nullable TKwredef(TKwredef)>*/;
} else {
}
if (var_n_visibility == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2246);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_visibility].val = var_n_visibility; /* _n_visibility on <self:AConcreteMethPropdef> */
if (var_n_visibility == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2247);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_visibility->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_visibility, self) /* parent= on <var_n_visibility:nullable AVisibility>*/;
}
if (var_n_kwmeth == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2248);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AConcreteMethPropdef___n_kwmeth].val = var_n_kwmeth; /* _n_kwmeth on <self:AConcreteMethPropdef> */
if (var_n_kwmeth == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2249);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_kwmeth->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwmeth, self) /* parent= on <var_n_kwmeth:nullable TKwmeth>*/;
}
if (var_n_methid == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2250);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val = var_n_methid; /* _n_methid on <self:AConcreteMethPropdef> */
if (var_n_methid == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2251);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_methid->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_methid, self) /* parent= on <var_n_methid:nullable AMethid>*/;
}
if (var_n_signature == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2252);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val = var_n_signature; /* _n_signature on <self:AConcreteMethPropdef> */
if (var_n_signature == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2253);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_signature->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_signature, self) /* parent= on <var_n_signature:nullable ASignature>*/;
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AConcreteMethPropdef> */
var4 = NULL;
if (var_n_annotations == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (var5){
((void (*)(val*, val*))(var_n_annotations->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_annotations, self) /* parent= on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
} else {
}
self->attrs[COLOR_parser_nodes__AConcreteMethPropdef___n_block].val = var_n_block; /* _n_block on <self:AConcreteMethPropdef> */
var6 = NULL;
if (var_n_block == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (var7){
((void (*)(val*, val*))(var_n_block->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_block, self) /* parent= on <var_n_block:nullable AExpr(AExpr)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AConcreteMethPropdef#init_aconcretemethpropdef for (self: Object, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable TKwmeth, nullable AMethid, nullable ASignature, nullable AAnnotations, nullable AExpr) */
void VIRTUAL_parser_prod__AConcreteMethPropdef__init_aconcretemethpropdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7) {
parser_prod__AConcreteMethPropdef__init_aconcretemethpropdef(self, p0, p1, p2, p3, p4, p5, p6, p7);
RET_LABEL:;
}
/* method parser_prod#AConcreteMethPropdef#replace_child for (self: AConcreteMethPropdef, ANode, nullable ANode) */
void parser_prod__AConcreteMethPropdef__replace_child(val* self, val* p0, val* p1) {
val* var_old_child /* var old_child: ANode */;
val* var_new_child /* var new_child: nullable ANode */;
val* var /* : nullable ADoc */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : null */;
val* var6 /* : nullable TKwredef */;
short int var7 /* : Bool */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
val* var13 /* : null */;
val* var14 /* : nullable AVisibility */;
short int var15 /* : Bool */;
val* var16 /* : null */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : nullable TKwmeth */;
short int var22 /* : Bool */;
val* var23 /* : null */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : nullable AMethid */;
short int var29 /* : Bool */;
val* var30 /* : null */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
val* var35 /* : nullable ASignature */;
short int var36 /* : Bool */;
val* var37 /* : null */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
val* var42 /* : nullable AAnnotations */;
short int var43 /* : Bool */;
val* var44 /* : null */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
val* var49 /* : null */;
val* var50 /* : nullable AExpr */;
short int var51 /* : Bool */;
val* var52 /* : null */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
int cltype55;
int idtype56;
val* var57 /* : null */;
var_old_child = p0;
var_new_child = p1;
var = self->attrs[COLOR_parser_nodes__APropdef___n_doc].val; /* _n_doc on <self:AConcreteMethPropdef> */
if (var == NULL) {
var1 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var1 = ((short int (*)(val*, val*))(var->class->vft[COLOR_kernel__Object___61d_61d]))(var, var_old_child) /* == on <var:nullable ADoc>*/;
}
if (var1){
var2 = NULL;
if (var_new_child == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa ADoc */
cltype = type_parser_nodes__ADoc.color;
idtype = type_parser_nodes__ADoc.id;
if(cltype >= var_new_child->type->table_size) {
var4 = 0;
} else {
var4 = var_new_child->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2269);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var_new_child; /* _n_doc on <self:AConcreteMethPropdef> */
} else {
var5 = NULL;
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var5; /* _n_doc on <self:AConcreteMethPropdef> */
}
goto RET_LABEL;
} else {
}
var6 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val; /* _n_kwredef on <self:AConcreteMethPropdef> */
if (var6 == NULL) {
var7 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var7 = ((short int (*)(val*, val*))(var6->class->vft[COLOR_kernel__Object___61d_61d]))(var6, var_old_child) /* == on <var6:nullable TKwredef>*/;
}
if (var7){
var8 = NULL;
if (var_new_child == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (var9){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwredef */
cltype11 = type_parser_nodes__TKwredef.color;
idtype12 = type_parser_nodes__TKwredef.id;
if(cltype11 >= var_new_child->type->table_size) {
var10 = 0;
} else {
var10 = var_new_child->type->type_table[cltype11] == idtype12;
}
if (!var10) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2279);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val = var_new_child; /* _n_kwredef on <self:AConcreteMethPropdef> */
} else {
var13 = NULL;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val = var13; /* _n_kwredef on <self:AConcreteMethPropdef> */
}
goto RET_LABEL;
} else {
}
var14 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_visibility].val; /* _n_visibility on <self:AConcreteMethPropdef> */
if (var14 == NULL) {
var15 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var15 = ((short int (*)(val*, val*))(var14->class->vft[COLOR_kernel__Object___61d_61d]))(var14, var_old_child) /* == on <var14:nullable AVisibility>*/;
}
if (var15){
var16 = NULL;
if (var_new_child == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (var17){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AVisibility */
cltype19 = type_parser_nodes__AVisibility.color;
idtype20 = type_parser_nodes__AVisibility.id;
if(cltype19 >= var_new_child->type->table_size) {
var18 = 0;
} else {
var18 = var_new_child->type->type_table[cltype19] == idtype20;
}
if (!var18) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2289);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_visibility].val = var_new_child; /* _n_visibility on <self:AConcreteMethPropdef> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2292);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var21 = self->attrs[COLOR_parser_nodes__AConcreteMethPropdef___n_kwmeth].val; /* _n_kwmeth on <self:AConcreteMethPropdef> */
if (var21 == NULL) {
var22 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var22 = ((short int (*)(val*, val*))(var21->class->vft[COLOR_kernel__Object___61d_61d]))(var21, var_old_child) /* == on <var21:nullable TKwmeth>*/;
}
if (var22){
var23 = NULL;
if (var_new_child == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (var24){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa TKwmeth */
cltype26 = type_parser_nodes__TKwmeth.color;
idtype27 = type_parser_nodes__TKwmeth.id;
if(cltype26 >= var_new_child->type->table_size) {
var25 = 0;
} else {
var25 = var_new_child->type->type_table[cltype26] == idtype27;
}
if (!var25) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2299);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AConcreteMethPropdef___n_kwmeth].val = var_new_child; /* _n_kwmeth on <self:AConcreteMethPropdef> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2302);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var28 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AConcreteMethPropdef> */
if (var28 == NULL) {
var29 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var29 = ((short int (*)(val*, val*))(var28->class->vft[COLOR_kernel__Object___61d_61d]))(var28, var_old_child) /* == on <var28:nullable AMethid>*/;
}
if (var29){
var30 = NULL;
if (var_new_child == NULL) {
var31 = 0; /* is null */
} else {
var31 = 1; /* arg is null and recv is not */
}
if (var31){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AMethid */
cltype33 = type_parser_nodes__AMethid.color;
idtype34 = type_parser_nodes__AMethid.id;
if(cltype33 >= var_new_child->type->table_size) {
var32 = 0;
} else {
var32 = var_new_child->type->type_table[cltype33] == idtype34;
}
if (!var32) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2309);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val = var_new_child; /* _n_methid on <self:AConcreteMethPropdef> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2312);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var35 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AConcreteMethPropdef> */
if (var35 == NULL) {
var36 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var36 = ((short int (*)(val*, val*))(var35->class->vft[COLOR_kernel__Object___61d_61d]))(var35, var_old_child) /* == on <var35:nullable ASignature>*/;
}
if (var36){
var37 = NULL;
if (var_new_child == NULL) {
var38 = 0; /* is null */
} else {
var38 = 1; /* arg is null and recv is not */
}
if (var38){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa ASignature */
cltype40 = type_parser_nodes__ASignature.color;
idtype41 = type_parser_nodes__ASignature.id;
if(cltype40 >= var_new_child->type->table_size) {
var39 = 0;
} else {
var39 = var_new_child->type->type_table[cltype40] == idtype41;
}
if (!var39) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2319);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val = var_new_child; /* _n_signature on <self:AConcreteMethPropdef> */
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2322);
show_backtrace(1);
}
goto RET_LABEL;
} else {
}
var42 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AConcreteMethPropdef> */
if (var42 == NULL) {
var43 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var43 = ((short int (*)(val*, val*))(var42->class->vft[COLOR_kernel__Object___61d_61d]))(var42, var_old_child) /* == on <var42:nullable AAnnotations>*/;
}
if (var43){
var44 = NULL;
if (var_new_child == NULL) {
var45 = 0; /* is null */
} else {
var45 = 1; /* arg is null and recv is not */
}
if (var45){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AAnnotations */
cltype47 = type_parser_nodes__AAnnotations.color;
idtype48 = type_parser_nodes__AAnnotations.id;
if(cltype47 >= var_new_child->type->table_size) {
var46 = 0;
} else {
var46 = var_new_child->type->type_table[cltype47] == idtype48;
}
if (!var46) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2329);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_new_child; /* _n_annotations on <self:AConcreteMethPropdef> */
} else {
var49 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var49; /* _n_annotations on <self:AConcreteMethPropdef> */
}
goto RET_LABEL;
} else {
}
var50 = self->attrs[COLOR_parser_nodes__AConcreteMethPropdef___n_block].val; /* _n_block on <self:AConcreteMethPropdef> */
if (var50 == NULL) {
var51 = 0; /* <var_old_child:ANode> cannot be null */
} else {
var51 = ((short int (*)(val*, val*))(var50->class->vft[COLOR_kernel__Object___61d_61d]))(var50, var_old_child) /* == on <var50:nullable AExpr>*/;
}
if (var51){
var52 = NULL;
if (var_new_child == NULL) {
var53 = 0; /* is null */
} else {
var53 = 1; /* arg is null and recv is not */
}
if (var53){
((void (*)(val*, val*))(var_new_child->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_new_child, self) /* parent= on <var_new_child:nullable ANode(ANode)>*/;
/* <var_new_child:nullable ANode(ANode)> isa AExpr */
cltype55 = type_parser_nodes__AExpr.color;
idtype56 = type_parser_nodes__AExpr.id;
if(cltype55 >= var_new_child->type->table_size) {
var54 = 0;
} else {
var54 = var_new_child->type->type_table[cltype55] == idtype56;
}
if (!var54) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2339);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AConcreteMethPropdef___n_block].val = var_new_child; /* _n_block on <self:AConcreteMethPropdef> */
} else {
var57 = NULL;
self->attrs[COLOR_parser_nodes__AConcreteMethPropdef___n_block].val = var57; /* _n_block on <self:AConcreteMethPropdef> */
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AConcreteMethPropdef#replace_child for (self: Object, ANode, nullable ANode) */
void VIRTUAL_parser_prod__AConcreteMethPropdef__replace_child(val* self, val* p0, val* p1) {
parser_prod__AConcreteMethPropdef__replace_child(self, p0, p1);
RET_LABEL:;
}
/* method parser_prod#AConcreteMethPropdef#n_doc= for (self: AConcreteMethPropdef, nullable ADoc) */
void parser_prod__AConcreteMethPropdef__n_doc_61d(val* self, val* p0) {
val* var_node /* var node: nullable ADoc */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var_node; /* _n_doc on <self:AConcreteMethPropdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable ADoc(ADoc)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AConcreteMethPropdef#n_doc= for (self: Object, nullable ADoc) */
void VIRTUAL_parser_prod__AConcreteMethPropdef__n_doc_61d(val* self, val* p0) {
parser_prod__AConcreteMethPropdef__n_doc_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AConcreteMethPropdef#n_kwredef= for (self: AConcreteMethPropdef, nullable TKwredef) */
void parser_prod__AConcreteMethPropdef__n_kwredef_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwredef */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val = var_node; /* _n_kwredef on <self:AConcreteMethPropdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable TKwredef(TKwredef)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AConcreteMethPropdef#n_kwredef= for (self: Object, nullable TKwredef) */
void VIRTUAL_parser_prod__AConcreteMethPropdef__n_kwredef_61d(val* self, val* p0) {
parser_prod__AConcreteMethPropdef__n_kwredef_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AConcreteMethPropdef#n_visibility= for (self: AConcreteMethPropdef, nullable AVisibility) */
void parser_prod__AConcreteMethPropdef__n_visibility_61d(val* self, val* p0) {
val* var_node /* var node: nullable AVisibility */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_visibility].val = var_node; /* _n_visibility on <self:AConcreteMethPropdef> */
if (var_node == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2365);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AVisibility>*/;
}
RET_LABEL:;
}
/* method parser_prod#AConcreteMethPropdef#n_visibility= for (self: Object, nullable AVisibility) */
void VIRTUAL_parser_prod__AConcreteMethPropdef__n_visibility_61d(val* self, val* p0) {
parser_prod__AConcreteMethPropdef__n_visibility_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AConcreteMethPropdef#n_kwmeth= for (self: AConcreteMethPropdef, nullable TKwmeth) */
void parser_prod__AConcreteMethPropdef__n_kwmeth_61d(val* self, val* p0) {
val* var_node /* var node: nullable TKwmeth */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AConcreteMethPropdef___n_kwmeth].val = var_node; /* _n_kwmeth on <self:AConcreteMethPropdef> */
if (var_node == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2370);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable TKwmeth>*/;
}
RET_LABEL:;
}
/* method parser_prod#AConcreteMethPropdef#n_kwmeth= for (self: Object, nullable TKwmeth) */
void VIRTUAL_parser_prod__AConcreteMethPropdef__n_kwmeth_61d(val* self, val* p0) {
parser_prod__AConcreteMethPropdef__n_kwmeth_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AConcreteMethPropdef#n_methid= for (self: AConcreteMethPropdef, nullable AMethid) */
void parser_prod__AConcreteMethPropdef__n_methid_61d(val* self, val* p0) {
val* var_node /* var node: nullable AMethid */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val = var_node; /* _n_methid on <self:AConcreteMethPropdef> */
if (var_node == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2375);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AMethid>*/;
}
RET_LABEL:;
}
/* method parser_prod#AConcreteMethPropdef#n_methid= for (self: Object, nullable AMethid) */
void VIRTUAL_parser_prod__AConcreteMethPropdef__n_methid_61d(val* self, val* p0) {
parser_prod__AConcreteMethPropdef__n_methid_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AConcreteMethPropdef#n_signature= for (self: AConcreteMethPropdef, nullable ASignature) */
void parser_prod__AConcreteMethPropdef__n_signature_61d(val* self, val* p0) {
val* var_node /* var node: nullable ASignature */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val = var_node; /* _n_signature on <self:AConcreteMethPropdef> */
if (var_node == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2380);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable ASignature>*/;
}
RET_LABEL:;
}
/* method parser_prod#AConcreteMethPropdef#n_signature= for (self: Object, nullable ASignature) */
void VIRTUAL_parser_prod__AConcreteMethPropdef__n_signature_61d(val* self, val* p0) {
parser_prod__AConcreteMethPropdef__n_signature_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AConcreteMethPropdef#n_annotations= for (self: AConcreteMethPropdef, nullable AAnnotations) */
void parser_prod__AConcreteMethPropdef__n_annotations_61d(val* self, val* p0) {
val* var_node /* var node: nullable AAnnotations */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_node; /* _n_annotations on <self:AConcreteMethPropdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AAnnotations(AAnnotations)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AConcreteMethPropdef#n_annotations= for (self: Object, nullable AAnnotations) */
void VIRTUAL_parser_prod__AConcreteMethPropdef__n_annotations_61d(val* self, val* p0) {
parser_prod__AConcreteMethPropdef__n_annotations_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AConcreteMethPropdef#n_block= for (self: AConcreteMethPropdef, nullable AExpr) */
void parser_prod__AConcreteMethPropdef__n_block_61d(val* self, val* p0) {
val* var_node /* var node: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
var_node = p0;
self->attrs[COLOR_parser_nodes__AConcreteMethPropdef___n_block].val = var_node; /* _n_block on <self:AConcreteMethPropdef> */
var = NULL;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_node, self) /* parent= on <var_node:nullable AExpr(AExpr)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AConcreteMethPropdef#n_block= for (self: Object, nullable AExpr) */
void VIRTUAL_parser_prod__AConcreteMethPropdef__n_block_61d(val* self, val* p0) {
parser_prod__AConcreteMethPropdef__n_block_61d(self, p0);
RET_LABEL:;
}
/* method parser_prod#AConcreteMethPropdef#visit_all for (self: AConcreteMethPropdef, Visitor) */
void parser_prod__AConcreteMethPropdef__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : nullable ADoc */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : nullable ADoc */;
val* var4 /* : nullable TKwredef */;
val* var5 /* : null */;
short int var6 /* : Bool */;
val* var7 /* : nullable TKwredef */;
val* var8 /* : nullable AVisibility */;
val* var9 /* : nullable TKwmeth */;
val* var10 /* : nullable AMethid */;
val* var11 /* : nullable ASignature */;
val* var12 /* : nullable AAnnotations */;
val* var13 /* : null */;
short int var14 /* : Bool */;
val* var15 /* : nullable AAnnotations */;
val* var16 /* : nullable AExpr */;
val* var17 /* : null */;
short int var18 /* : Bool */;
val* var19 /* : nullable AExpr */;
var_v = p0;
var = self->attrs[COLOR_parser_nodes__APropdef___n_doc].val; /* _n_doc on <self:AConcreteMethPropdef> */
var1 = NULL;
if (var == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (var2){
var3 = self->attrs[COLOR_parser_nodes__APropdef___n_doc].val; /* _n_doc on <self:AConcreteMethPropdef> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2401);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var3) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var4 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val; /* _n_kwredef on <self:AConcreteMethPropdef> */
var5 = NULL;
if (var4 == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (var6){
var7 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val; /* _n_kwredef on <self:AConcreteMethPropdef> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2404);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var7) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var8 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_visibility].val; /* _n_visibility on <self:AConcreteMethPropdef> */
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var8) /* enter_visit on <var_v:Visitor>*/;
var9 = self->attrs[COLOR_parser_nodes__AConcreteMethPropdef___n_kwmeth].val; /* _n_kwmeth on <self:AConcreteMethPropdef> */
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var9) /* enter_visit on <var_v:Visitor>*/;
var10 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AConcreteMethPropdef> */
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var10) /* enter_visit on <var_v:Visitor>*/;
var11 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AConcreteMethPropdef> */
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var11) /* enter_visit on <var_v:Visitor>*/;
var12 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AConcreteMethPropdef> */
var13 = NULL;
if (var12 == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (var14){
var15 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:AConcreteMethPropdef> */
if (var15 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2411);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var15) /* enter_visit on <var_v:Visitor>*/;
} else {
}
var16 = self->attrs[COLOR_parser_nodes__AConcreteMethPropdef___n_block].val; /* _n_block on <self:AConcreteMethPropdef> */
var17 = NULL;
if (var16 == NULL) {
var18 = 0; /* is null */
} else {
var18 = 1; /* arg is null and recv is not */
}
if (var18){
var19 = self->attrs[COLOR_parser_nodes__AConcreteMethPropdef___n_block].val; /* _n_block on <self:AConcreteMethPropdef> */
if (var19 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2414);
show_backtrace(1);
}
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var19) /* enter_visit on <var_v:Visitor>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AConcreteMethPropdef#visit_all for (self: Object, Visitor) */
void VIRTUAL_parser_prod__AConcreteMethPropdef__visit_all(val* self, val* p0) {
parser_prod__AConcreteMethPropdef__visit_all(self, p0);
RET_LABEL:;
}
/* method parser_prod#AConcreteInitPropdef#empty_init for (self: AConcreteInitPropdef) */
void parser_prod__AConcreteInitPropdef__empty_init(val* self) {
RET_LABEL:;
}
/* method parser_prod#AConcreteInitPropdef#empty_init for (self: Object) */
void VIRTUAL_parser_prod__AConcreteInitPropdef__empty_init(val* self) {
parser_prod__AConcreteInitPropdef__empty_init(self);
RET_LABEL:;
}
/* method parser_prod#AConcreteInitPropdef#init_aconcreteinitpropdef for (self: AConcreteInitPropdef, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable TKwinit, nullable AMethid, nullable ASignature, nullable AAnnotations, nullable AExpr) */
void parser_prod__AConcreteInitPropdef__init_aconcreteinitpropdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7) {
val* var_n_doc /* var n_doc: nullable ADoc */;
val* var_n_kwredef /* var n_kwredef: nullable TKwredef */;
val* var_n_visibility /* var n_visibility: nullable AVisibility */;
val* var_n_kwinit /* var n_kwinit: nullable TKwinit */;
val* var_n_methid /* var n_methid: nullable AMethid */;
val* var_n_signature /* var n_signature: nullable ASignature */;
val* var_n_annotations /* var n_annotations: nullable AAnnotations */;
val* var_n_block /* var n_block: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
short int var5 /* : Bool */;
val* var6 /* : null */;
short int var7 /* : Bool */;
val* var8 /* : null */;
short int var9 /* : Bool */;
var_n_doc = p0;
var_n_kwredef = p1;
var_n_visibility = p2;
var_n_kwinit = p3;
var_n_methid = p4;
var_n_signature = p5;
var_n_annotations = p6;
var_n_block = p7;
((void (*)(val*))(self->class->vft[COLOR_parser_prod__AConcreteInitPropdef__empty_init]))(self) /* empty_init on <self:AConcreteInitPropdef>*/;
self->attrs[COLOR_parser_nodes__APropdef___n_doc].val = var_n_doc; /* _n_doc on <self:AConcreteInitPropdef> */
var = NULL;
if (var_n_doc == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (var1){
((void (*)(val*, val*))(var_n_doc->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_doc, self) /* parent= on <var_n_doc:nullable ADoc(ADoc)>*/;
} else {
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_kwredef].val = var_n_kwredef; /* _n_kwredef on <self:AConcreteInitPropdef> */
var2 = NULL;
if (var_n_kwredef == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*))(var_n_kwredef->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwredef, self) /* parent= on <var_n_kwredef:nullable TKwredef(TKwredef)>*/;
} else {
}
if (var_n_visibility == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2441);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_visibility].val = var_n_visibility; /* _n_visibility on <self:AConcreteInitPropdef> */
if (var_n_visibility == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2442);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_visibility->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_visibility, self) /* parent= on <var_n_visibility:nullable AVisibility>*/;
}
if (var_n_kwinit == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2443);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AConcreteInitPropdef___n_kwinit].val = var_n_kwinit; /* _n_kwinit on <self:AConcreteInitPropdef> */
if (var_n_kwinit == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2444);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_kwinit->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_kwinit, self) /* parent= on <var_n_kwinit:nullable TKwinit>*/;
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_methid].val = var_n_methid; /* _n_methid on <self:AConcreteInitPropdef> */
var4 = NULL;
if (var_n_methid == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (var5){
((void (*)(val*, val*))(var_n_methid->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_methid, self) /* parent= on <var_n_methid:nullable AMethid(AMethid)>*/;
} else {
}
if (var_n_signature == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2449);
show_backtrace(1);
}
self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val = var_n_signature; /* _n_signature on <self:AConcreteInitPropdef> */
if (var_n_signature == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_prod.nit", 2450);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var_n_signature->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_signature, self) /* parent= on <var_n_signature:nullable ASignature>*/;
}
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var_n_annotations; /* _n_annotations on <self:AConcreteInitPropdef> */
var6 = NULL;
if (var_n_annotations == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (var7){
((void (*)(val*, val*))(var_n_annotations->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_annotations, self) /* parent= on <var_n_annotations:nullable AAnnotations(AAnnotations)>*/;
} else {
}
self->attrs[COLOR_parser_nodes__AConcreteMethPropdef___n_block].val = var_n_block; /* _n_block on <self:AConcreteInitPropdef> */
var8 = NULL;
if (var_n_block == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (var9){
((void (*)(val*, val*))(var_n_block->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_n_block, self) /* parent= on <var_n_block:nullable AExpr(AExpr)>*/;
} else {
}
RET_LABEL:;
}
/* method parser_prod#AConcreteInitPropdef#init_aconcreteinitpropdef for (self: Object, nullable ADoc, nullable TKwredef, nullable AVisibility, nullable TKwinit, nullable AMethid, nullable ASignature, nullable AAnnotations, nullable AExpr) */
void VIRTUAL_parser_prod__AConcreteInitPropdef__init_aconcreteinitpropdef(val* self, val* p0, val* p1, val* p2, val* p3, val* p4, val* p5, val* p6, val* p7) {
parser_prod__AConcreteInitPropdef__init_aconcreteinitpropdef(self, p0, p1, p2, p3, p4, p5, p6, p7);
RET_LABEL:;
}
