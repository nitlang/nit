#include "list.sep.0.h"
/* method list#List#[] for (self: List[nullable Object], Int): nullable Object */
val* list__List___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
long var_index /* var index: Int */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var2 /* : nullable Object */;
var_index = p0;
var1 = ((val* (*)(val*, long))(self->class->vft[COLOR_list__List__get_node]))(self, var_index) /* get_node on <self:List[nullable Object]>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "lib/standard/collection/list.nit", 22);
exit(1);
} else {
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Container__item]))(var1) /* item on <var1:nullable ListNode[nullable Object]>*/;
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list#List#[] for (self: Object, Int): nullable Object */
val* VIRTUAL_list__List___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = list__List___91d_93d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method list#List#[]= for (self: List[nullable Object], Int, nullable Object) */
void list__List___91d_93d_61d(val* self, long p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
long var_index /* var index: Int */;
val* var_item /* var item: nullable Object */;
val* var1 /* : nullable ListNode[nullable Object] */;
/* Covariant cast for argument 1 (item) <p1:nullable Object> isa Sequence#0 */
/* <p1:nullable Object> isa Sequence#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Sequence_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p1 == NULL) {
var = is_nullable;
} else {
if(cltype >= p1->type->table_size) {
var = 0;
} else {
var = p1->type->type_table[cltype] == idtype;
}
}
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/list.nit", 24);
exit(1);
}
var_index = p0;
var_item = p1;
var1 = ((val* (*)(val*, long))(self->class->vft[COLOR_list__List__get_node]))(self, var_index) /* get_node on <self:List[nullable Object]>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "lib/standard/collection/list.nit", 24);
exit(1);
} else {
((void (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__Container__item_61d]))(var1, var_item) /* item= on <var1:nullable ListNode[nullable Object]>*/;
}
RET_LABEL:;
}
/* method list#List#[]= for (self: Object, Int, nullable Object) */
void VIRTUAL_list__List___91d_93d_61d(val* self, long p0, val* p1) {
list__List___91d_93d_61d(self, p0, p1);
RET_LABEL:;
}
/* method list#List#first for (self: List[nullable Object]): nullable Object */
val* list__List__first(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var2 /* : nullable Object */;
var1 = self->attrs[COLOR_list__List___head].val; /* _head on <self:List[nullable Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "lib/standard/collection/list.nit", 27);
exit(1);
} else {
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Container__item]))(var1) /* item on <var1:nullable ListNode[nullable Object]>*/;
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list#List#first for (self: Object): nullable Object */
val* VIRTUAL_list__List__first(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = list__List__first(self);
var = var1;
RET_LABEL:;
return var;
}
/* method list#List#first= for (self: List[nullable Object], nullable Object) */
void list__List__first_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
val* var_e /* var e: nullable Object */;
val* var1 /* : nullable ListNode[nullable Object] */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa Sequence#0 */
/* <p0:nullable Object> isa Sequence#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Sequence_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
}
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/list.nit", 29);
exit(1);
}
var_e = p0;
var1 = self->attrs[COLOR_list__List___head].val; /* _head on <self:List[nullable Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "lib/standard/collection/list.nit", 30);
exit(1);
} else {
((void (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__Container__item_61d]))(var1, var_e) /* item= on <var1:nullable ListNode[nullable Object]>*/;
}
RET_LABEL:;
}
/* method list#List#first= for (self: Object, nullable Object) */
void VIRTUAL_list__List__first_61d(val* self, val* p0) {
list__List__first_61d(self, p0);
RET_LABEL:;
}
/* method list#List#last for (self: List[nullable Object]): nullable Object */
val* list__List__last(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var2 /* : nullable Object */;
var1 = self->attrs[COLOR_list__List___tail].val; /* _tail on <self:List[nullable Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "lib/standard/collection/list.nit", 33);
exit(1);
} else {
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Container__item]))(var1) /* item on <var1:nullable ListNode[nullable Object]>*/;
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list#List#last for (self: Object): nullable Object */
val* VIRTUAL_list__List__last(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = list__List__last(self);
var = var1;
RET_LABEL:;
return var;
}
/* method list#List#last= for (self: List[nullable Object], nullable Object) */
void list__List__last_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
val* var_e /* var e: nullable Object */;
val* var1 /* : nullable ListNode[nullable Object] */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa Sequence#0 */
/* <p0:nullable Object> isa Sequence#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Sequence_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
}
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/list.nit", 35);
exit(1);
}
var_e = p0;
var1 = self->attrs[COLOR_list__List___tail].val; /* _tail on <self:List[nullable Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "lib/standard/collection/list.nit", 36);
exit(1);
} else {
((void (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__Container__item_61d]))(var1, var_e) /* item= on <var1:nullable ListNode[nullable Object]>*/;
}
RET_LABEL:;
}
/* method list#List#last= for (self: Object, nullable Object) */
void VIRTUAL_list__List__last_61d(val* self, val* p0) {
list__List__last_61d(self, p0);
RET_LABEL:;
}
/* method list#List#is_empty for (self: List[nullable Object]): Bool */
short int list__List__is_empty(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var2 /* : null */;
short int var3 /* : Bool */;
var1 = self->attrs[COLOR_list__List___head].val; /* _head on <self:List[nullable Object]> */
var2 = NULL;
if (var1 == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list#List#is_empty for (self: Object): Bool */
short int VIRTUAL_list__List__is_empty(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = list__List__is_empty(self);
var = var1;
RET_LABEL:;
return var;
}
/* method list#List#length for (self: List[nullable Object]): Int */
long list__List__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var_l /* var l: Int */;
val* var2 /* : nullable ListNode[nullable Object] */;
val* var_t /* var t: nullable ListNode[nullable Object] */;
val* var3 /* : null */;
short int var4 /* : Bool */;
long var5 /* : Int */;
long var6 /* : Int */;
long var8 /* : Int */;
val* var9 /* : nullable ListNode[nullable Object] */;
var1 = 0;
var_l = var1;
var2 = self->attrs[COLOR_list__List___head].val; /* _head on <self:List[nullable Object]> */
var_t = var2;
for(;;) {
var3 = NULL;
if (var_t == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (!var4) break;
var5 = 1;
{ /* Inline kernel#Int#+ (var_l,var5) */
var8 = var_l + var5;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var_l = var6;
var9 = ((val* (*)(val*))(var_t->class->vft[COLOR_list__ListNode__next]))(var_t) /* next on <var_t:nullable ListNode[nullable Object](ListNode[nullable Object])>*/;
var_t = var9;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var = var_l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list#List#length for (self: Object): Int */
long VIRTUAL_list__List__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = list__List__length(self);
var = var1;
RET_LABEL:;
return var;
}
/* method list#List#has for (self: List[nullable Object], nullable Object): Bool */
short int list__List__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
val* var_e /* var e: nullable Object */;
val* var2 /* : nullable ListNode[nullable Object] */;
val* var3 /* : nullable ListNode[nullable Object] */;
val* var4 /* : null */;
short int var5 /* : Bool */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa Collection#0 */
/* <p0:nullable Object> isa Collection#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Collection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
}
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/list.nit", 55);
exit(1);
}
var_e = p0;
var2 = self->attrs[COLOR_list__List___head].val; /* _head on <self:List[nullable Object]> */
var3 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_list__List__search_node_after]))(self, var_e, var2) /* search_node_after on <self:List[nullable Object]>*/;
var4 = NULL;
if (var3 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list#List#has for (self: Object, nullable Object): Bool */
short int VIRTUAL_list__List__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = list__List__has(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method list#List#has_only for (self: List[nullable Object], nullable Object): Bool */
short int list__List__has_only(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
val* var_e /* var e: nullable Object */;
val* var2 /* : nullable ListNode[nullable Object] */;
val* var_node /* var node: nullable ListNode[nullable Object] */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable ListNode[nullable Object] */;
short int var9 /* : Bool */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa Collection#0 */
/* <p0:nullable Object> isa Collection#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Collection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
}
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/list.nit", 58);
exit(1);
}
var_e = p0;
var2 = self->attrs[COLOR_list__List___head].val; /* _head on <self:List[nullable Object]> */
var_node = var2;
for(;;) {
var3 = NULL;
if (var_node == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (!var4) break;
var5 = ((val* (*)(val*))(var_node->class->vft[COLOR_abstract_collection__Container__item]))(var_node) /* item on <var_node:nullable ListNode[nullable Object](ListNode[nullable Object])>*/;
if (var5 == NULL) {
var6 = (var_e != NULL);
} else {
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_kernel__Object___33d_61d]))(var5, var_e) /* != on <var5:nullable Object>*/;
}
if (var6){
var7 = 0;
var = var7;
goto RET_LABEL;
} else {
}
var8 = ((val* (*)(val*))(var_node->class->vft[COLOR_list__ListNode__next]))(var_node) /* next on <var_node:nullable ListNode[nullable Object](ListNode[nullable Object])>*/;
var_node = var8;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var9 = 1;
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list#List#has_only for (self: Object, nullable Object): Bool */
short int VIRTUAL_list__List__has_only(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = list__List__has_only(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method list#List#count for (self: List[nullable Object], nullable Object): Int */
long list__List__count(val* self, val* p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
val* var_e /* var e: nullable Object */;
long var2 /* : Int */;
long var_nb /* var nb: Int */;
val* var3 /* : nullable ListNode[nullable Object] */;
val* var_node /* var node: nullable ListNode[nullable Object] */;
val* var4 /* : null */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
short int var7 /* : Bool */;
long var8 /* : Int */;
long var9 /* : Int */;
long var11 /* : Int */;
val* var12 /* : nullable ListNode[nullable Object] */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa Collection#0 */
/* <p0:nullable Object> isa Collection#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Collection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
}
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/list.nit", 68);
exit(1);
}
var_e = p0;
var2 = 0;
var_nb = var2;
var3 = self->attrs[COLOR_list__List___head].val; /* _head on <self:List[nullable Object]> */
var_node = var3;
for(;;) {
var4 = NULL;
if (var_node == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (!var5) break;
var6 = ((val* (*)(val*))(var_node->class->vft[COLOR_abstract_collection__Container__item]))(var_node) /* item on <var_node:nullable ListNode[nullable Object](ListNode[nullable Object])>*/;
if (var6 == NULL) {
var7 = (var_e != NULL);
} else {
var7 = ((short int (*)(val*, val*))(var6->class->vft[COLOR_kernel__Object___33d_61d]))(var6, var_e) /* != on <var6:nullable Object>*/;
}
if (var7){
var8 = 1;
{ /* Inline kernel#Int#+ (var_nb,var8) */
var11 = var_nb + var8;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var_nb = var9;
} else {
}
var12 = ((val* (*)(val*))(var_node->class->vft[COLOR_list__ListNode__next]))(var_node) /* next on <var_node:nullable ListNode[nullable Object](ListNode[nullable Object])>*/;
var_node = var12;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var = var_nb;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list#List#count for (self: Object, nullable Object): Int */
long VIRTUAL_list__List__count(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = list__List__count(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method list#List#slice for (self: List[nullable Object], Int, Int): List[nullable Object] */
val* list__List__slice(val* self, long p0, long p1) {
val* var /* : List[nullable Object] */;
long var_from /* var from: Int */;
long var_to /* var to: Int */;
short int var1 /* : Bool */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
short int var6 /* : Bool */;
short int var_ /* var : Bool */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
long var16 /* : Int */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
short int var22 /* : Bool */;
short int var_23 /* var : Bool */;
long var24 /* : Int */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
short int var30 /* : Bool */;
short int var_31 /* var : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
short int var37 /* : Bool */;
val* var38 /* : List[nullable Object] */;
val* var_list /* var list: List[nullable Object] */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
short int var44 /* : Bool */;
val* var45 /* : nullable Object */;
long var46 /* : Int */;
long var47 /* : Int */;
long var49 /* : Int */;
var_from = p0;
var_to = p1;
var2 = 0;
{ /* Inline kernel#Int#>= (var_from,var2) */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (!var5) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
}
var6 = var_from >= var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var_ = var3;
if (var3){
var7 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:List[nullable Object]>*/;
{ /* Inline kernel#Int#< (var_from,var7) */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (!var10) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var13 = var_from < var7;
var8 = var13;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var1 = var8;
} else {
var1 = var_;
}
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "lib/standard/collection/list.nit", 81);
exit(1);
}
var16 = 0;
{ /* Inline kernel#Int#>= (var_to,var16) */
/* Covariant cast for argument 0 (i) <var16:Int> isa OTHER */
/* <var16:Int> isa OTHER */
var19 = 1; /* easy <var16:Int> isa OTHER*/
if (!var19) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
}
var22 = var_to >= var16;
var17 = var22;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var_23 = var17;
if (var17){
var24 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:List[nullable Object]>*/;
{ /* Inline kernel#Int#< (var_to,var24) */
/* Covariant cast for argument 0 (i) <var24:Int> isa OTHER */
/* <var24:Int> isa OTHER */
var27 = 1; /* easy <var24:Int> isa OTHER*/
if (!var27) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var30 = var_to < var24;
var25 = var30;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var15 = var25;
} else {
var15 = var_23;
}
var_31 = var15;
if (var15){
{ /* Inline kernel#Int#<= (var_from,var_to) */
/* Covariant cast for argument 0 (i) <var_to:Int> isa OTHER */
/* <var_to:Int> isa OTHER */
var34 = 1; /* easy <var_to:Int> isa OTHER*/
if (!var34) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 256);
exit(1);
}
var37 = var_from <= var_to;
var32 = var37;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
var14 = var32;
} else {
var14 = var_31;
}
if (!var14) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "lib/standard/collection/list.nit", 82);
exit(1);
}
var38 = NEW_list__List(self->type->resolution_table->types[COLOR_list__Listlist__List_FT0]);
((void (*)(val*))(var38->class->vft[COLOR_list__List__init]))(var38) /* init on <var38:List[nullable Object]>*/;
CHECK_NEW_list__List(var38);
var_list = var38;
for(;;) {
{ /* Inline kernel#Int#<= (var_from,var_to) */
/* Covariant cast for argument 0 (i) <var_to:Int> isa OTHER */
/* <var_to:Int> isa OTHER */
var41 = 1; /* easy <var_to:Int> isa OTHER*/
if (!var41) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 256);
exit(1);
}
var44 = var_from <= var_to;
var39 = var44;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
if (!var39) break;
var45 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(self, var_from) /* [] on <self:List[nullable Object]>*/;
((void (*)(val*, val*))(var_list->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_list, var45) /* add on <var_list:List[nullable Object]>*/;
var46 = 1;
{ /* Inline kernel#Int#+ (var_from,var46) */
var49 = var_from + var46;
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
var_from = var47;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var = var_list;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list#List#slice for (self: Object, Int, Int): List[nullable Object] */
val* VIRTUAL_list__List__slice(val* self, long p0, long p1) {
val* var /* : List[nullable Object] */;
val* var1 /* : List[nullable Object] */;
var1 = list__List__slice(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method list#List#push for (self: List[nullable Object], nullable Object) */
void list__List__push(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
val* var_e /* var e: nullable Object */;
val* var1 /* : ListNode[nullable Object] */;
val* var_node /* var node: ListNode[nullable Object] */;
val* var2 /* : nullable ListNode[nullable Object] */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : nullable ListNode[nullable Object] */;
val* var6 /* : nullable ListNode[nullable Object] */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa Sequence#0 */
/* <p0:nullable Object> isa Sequence#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Sequence_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
}
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/list.nit", 93);
exit(1);
}
var_e = p0;
var1 = NEW_list__ListNode(self->type->resolution_table->types[COLOR_list__ListNodelist__List_FT0]);
((void (*)(val*, val*))(var1->class->vft[COLOR_list__ListNode__init]))(var1, var_e) /* init on <var1:ListNode[nullable Object]>*/;
CHECK_NEW_list__ListNode(var1);
var_node = var1;
var2 = self->attrs[COLOR_list__List___tail].val; /* _tail on <self:List[nullable Object]> */
var3 = NULL;
if (var2 == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (var4){
self->attrs[COLOR_list__List___head].val = var_node; /* _head on <self:List[nullable Object]> */
} else {
var5 = self->attrs[COLOR_list__List___tail].val; /* _tail on <self:List[nullable Object]> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "lib/standard/collection/list.nit", 100);
exit(1);
} else {
((void (*)(val*, val*))(var5->class->vft[COLOR_list__ListNode__next_61d]))(var5, var_node) /* next= on <var5:nullable ListNode[nullable Object]>*/;
}
var6 = self->attrs[COLOR_list__List___tail].val; /* _tail on <self:List[nullable Object]> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_list__ListNode__prev_61d]))(var_node, var6) /* prev= on <var_node:ListNode[nullable Object]>*/;
}
self->attrs[COLOR_list__List___tail].val = var_node; /* _tail on <self:List[nullable Object]> */
RET_LABEL:;
}
/* method list#List#push for (self: Object, nullable Object) */
void VIRTUAL_list__List__push(val* self, val* p0) {
list__List__push(self, p0);
RET_LABEL:;
}
/* method list#List#unshift for (self: List[nullable Object], nullable Object) */
void list__List__unshift(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
val* var_e /* var e: nullable Object */;
val* var1 /* : ListNode[nullable Object] */;
val* var_node /* var node: ListNode[nullable Object] */;
val* var2 /* : nullable ListNode[nullable Object] */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : nullable ListNode[nullable Object] */;
val* var6 /* : nullable ListNode[nullable Object] */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa Sequence#0 */
/* <p0:nullable Object> isa Sequence#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Sequence_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
}
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/list.nit", 106);
exit(1);
}
var_e = p0;
var1 = NEW_list__ListNode(self->type->resolution_table->types[COLOR_list__ListNodelist__List_FT0]);
((void (*)(val*, val*))(var1->class->vft[COLOR_list__ListNode__init]))(var1, var_e) /* init on <var1:ListNode[nullable Object]>*/;
CHECK_NEW_list__ListNode(var1);
var_node = var1;
var2 = self->attrs[COLOR_list__List___head].val; /* _head on <self:List[nullable Object]> */
var3 = NULL;
if (var2 == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (var4){
self->attrs[COLOR_list__List___tail].val = var_node; /* _tail on <self:List[nullable Object]> */
} else {
var5 = self->attrs[COLOR_list__List___head].val; /* _head on <self:List[nullable Object]> */
((void (*)(val*, val*))(var_node->class->vft[COLOR_list__ListNode__next_61d]))(var_node, var5) /* next= on <var_node:ListNode[nullable Object]>*/;
var6 = self->attrs[COLOR_list__List___head].val; /* _head on <self:List[nullable Object]> */
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "lib/standard/collection/list.nit", 114);
exit(1);
} else {
((void (*)(val*, val*))(var6->class->vft[COLOR_list__ListNode__prev_61d]))(var6, var_node) /* prev= on <var6:nullable ListNode[nullable Object]>*/;
}
}
self->attrs[COLOR_list__List___head].val = var_node; /* _head on <self:List[nullable Object]> */
RET_LABEL:;
}
/* method list#List#unshift for (self: Object, nullable Object) */
void VIRTUAL_list__List__unshift(val* self, val* p0) {
list__List__unshift(self, p0);
RET_LABEL:;
}
/* method list#List#link for (self: List[nullable Object], List[nullable Object]) */
void list__List__link(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
val* var_l /* var l: List[nullable Object] */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : nullable ListNode[nullable Object] */;
val* var5 /* : nullable ListNode[nullable Object] */;
val* var6 /* : null */;
short int var7 /* : Bool */;
val* var8 /* : nullable ListNode[nullable Object] */;
val* var9 /* : nullable ListNode[nullable Object] */;
val* var10 /* : nullable ListNode[nullable Object] */;
val* var11 /* : nullable ListNode[nullable Object] */;
val* var12 /* : nullable ListNode[nullable Object] */;
val* var13 /* : nullable ListNode[nullable Object] */;
/* Covariant cast for argument 0 (l) <p0:List[nullable Object]> isa List[List#0] */
/* <p0:List[nullable Object]> isa List[List#0] */
type_struct = self->type->resolution_table->types[COLOR_list__Listlist__List_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/list.nit", 119);
exit(1);
}
var_l = p0;
var1 = self->attrs[COLOR_list__List___tail].val; /* _tail on <self:List[nullable Object]> */
var2 = NULL;
if (var1 == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (var3){
var4 = var_l->attrs[COLOR_list__List___head].val; /* _head on <var_l:List[nullable Object]> */
self->attrs[COLOR_list__List___head].val = var4; /* _head on <self:List[nullable Object]> */
} else {
var5 = var_l->attrs[COLOR_list__List___head].val; /* _head on <var_l:List[nullable Object]> */
var6 = NULL;
if (var5 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (var7){
var8 = self->attrs[COLOR_list__List___tail].val; /* _tail on <self:List[nullable Object]> */
var9 = var_l->attrs[COLOR_list__List___head].val; /* _head on <var_l:List[nullable Object]> */
if (var8 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "lib/standard/collection/list.nit", 127);
exit(1);
} else {
((void (*)(val*, val*))(var8->class->vft[COLOR_list__ListNode__next_61d]))(var8, var9) /* next= on <var8:nullable ListNode[nullable Object]>*/;
}
var10 = self->attrs[COLOR_list__List___tail].val; /* _tail on <self:List[nullable Object]> */
if (var10 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "lib/standard/collection/list.nit", 128);
exit(1);
} else {
var11 = ((val* (*)(val*))(var10->class->vft[COLOR_list__ListNode__next]))(var10) /* next on <var10:nullable ListNode[nullable Object]>*/;
}
var12 = self->attrs[COLOR_list__List___tail].val; /* _tail on <self:List[nullable Object]> */
if (var11 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "lib/standard/collection/list.nit", 128);
exit(1);
} else {
((void (*)(val*, val*))(var11->class->vft[COLOR_list__ListNode__prev_61d]))(var11, var12) /* prev= on <var11:nullable ListNode[nullable Object]>*/;
}
} else {
}
}
var13 = var_l->attrs[COLOR_list__List___tail].val; /* _tail on <var_l:List[nullable Object]> */
self->attrs[COLOR_list__List___tail].val = var13; /* _tail on <self:List[nullable Object]> */
((void (*)(val*))(var_l->class->vft[COLOR_abstract_collection__RemovableCollection__clear]))(var_l) /* clear on <var_l:List[nullable Object]>*/;
RET_LABEL:;
}
/* method list#List#link for (self: Object, List[nullable Object]) */
void VIRTUAL_list__List__link(val* self, val* p0) {
list__List__link(self, p0);
RET_LABEL:;
}
/* method list#List#pop for (self: List[nullable Object]): nullable Object */
val* list__List__pop(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var_node /* var node: nullable ListNode[nullable Object] */;
val* var2 /* : nullable ListNode[nullable Object] */;
val* var3 /* : null */;
val* var4 /* : nullable ListNode[nullable Object] */;
val* var5 /* : null */;
short int var6 /* : Bool */;
val* var7 /* : null */;
val* var8 /* : nullable ListNode[nullable Object] */;
val* var9 /* : null */;
val* var10 /* : nullable Object */;
var1 = self->attrs[COLOR_list__List___tail].val; /* _tail on <self:List[nullable Object]> */
var_node = var1;
if (var_node == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "lib/standard/collection/list.nit", 140);
exit(1);
} else {
var2 = ((val* (*)(val*))(var_node->class->vft[COLOR_list__ListNode__prev]))(var_node) /* prev on <var_node:nullable ListNode[nullable Object]>*/;
}
self->attrs[COLOR_list__List___tail].val = var2; /* _tail on <self:List[nullable Object]> */
var3 = NULL;
if (var_node == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "lib/standard/collection/list.nit", 141);
exit(1);
} else {
((void (*)(val*, val*))(var_node->class->vft[COLOR_list__ListNode__prev_61d]))(var_node, var3) /* prev= on <var_node:nullable ListNode[nullable Object]>*/;
}
var4 = self->attrs[COLOR_list__List___tail].val; /* _tail on <self:List[nullable Object]> */
var5 = NULL;
if (var4 == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (var6){
var7 = NULL;
self->attrs[COLOR_list__List___head].val = var7; /* _head on <self:List[nullable Object]> */
} else {
var8 = self->attrs[COLOR_list__List___tail].val; /* _tail on <self:List[nullable Object]> */
var9 = NULL;
if (var8 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "lib/standard/collection/list.nit", 145);
exit(1);
} else {
((void (*)(val*, val*))(var8->class->vft[COLOR_list__ListNode__next_61d]))(var8, var9) /* next= on <var8:nullable ListNode[nullable Object]>*/;
}
}
if (var_node == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "lib/standard/collection/list.nit", 147);
exit(1);
} else {
var10 = ((val* (*)(val*))(var_node->class->vft[COLOR_abstract_collection__Container__item]))(var_node) /* item on <var_node:nullable ListNode[nullable Object]>*/;
}
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list#List#pop for (self: Object): nullable Object */
val* VIRTUAL_list__List__pop(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = list__List__pop(self);
var = var1;
RET_LABEL:;
return var;
}
/* method list#List#shift for (self: List[nullable Object]): nullable Object */
val* list__List__shift(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var_node /* var node: nullable ListNode[nullable Object] */;
val* var2 /* : nullable ListNode[nullable Object] */;
val* var3 /* : null */;
val* var4 /* : nullable ListNode[nullable Object] */;
val* var5 /* : null */;
short int var6 /* : Bool */;
val* var7 /* : null */;
val* var8 /* : nullable ListNode[nullable Object] */;
val* var9 /* : null */;
val* var10 /* : nullable Object */;
var1 = self->attrs[COLOR_list__List___head].val; /* _head on <self:List[nullable Object]> */
var_node = var1;
if (var_node == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "lib/standard/collection/list.nit", 154);
exit(1);
} else {
var2 = ((val* (*)(val*))(var_node->class->vft[COLOR_list__ListNode__next]))(var_node) /* next on <var_node:nullable ListNode[nullable Object]>*/;
}
self->attrs[COLOR_list__List___head].val = var2; /* _head on <self:List[nullable Object]> */
var3 = NULL;
if (var_node == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "lib/standard/collection/list.nit", 155);
exit(1);
} else {
((void (*)(val*, val*))(var_node->class->vft[COLOR_list__ListNode__next_61d]))(var_node, var3) /* next= on <var_node:nullable ListNode[nullable Object]>*/;
}
var4 = self->attrs[COLOR_list__List___head].val; /* _head on <self:List[nullable Object]> */
var5 = NULL;
if (var4 == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (var6){
var7 = NULL;
self->attrs[COLOR_list__List___tail].val = var7; /* _tail on <self:List[nullable Object]> */
} else {
var8 = self->attrs[COLOR_list__List___head].val; /* _head on <self:List[nullable Object]> */
var9 = NULL;
if (var8 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "lib/standard/collection/list.nit", 159);
exit(1);
} else {
((void (*)(val*, val*))(var8->class->vft[COLOR_list__ListNode__prev_61d]))(var8, var9) /* prev= on <var8:nullable ListNode[nullable Object]>*/;
}
}
if (var_node == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "lib/standard/collection/list.nit", 161);
exit(1);
} else {
var10 = ((val* (*)(val*))(var_node->class->vft[COLOR_abstract_collection__Container__item]))(var_node) /* item on <var_node:nullable ListNode[nullable Object]>*/;
}
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list#List#shift for (self: Object): nullable Object */
val* VIRTUAL_list__List__shift(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = list__List__shift(self);
var = var1;
RET_LABEL:;
return var;
}
/* method list#List#remove for (self: List[nullable Object], nullable Object) */
void list__List__remove(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
val* var_e /* var e: nullable Object */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var2 /* : nullable ListNode[nullable Object] */;
val* var_node /* var node: nullable ListNode[nullable Object] */;
val* var3 /* : null */;
short int var4 /* : Bool */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa RemovableCollection#0 */
/* <p0:nullable Object> isa RemovableCollection#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__RemovableCollection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
}
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/list.nit", 164);
exit(1);
}
var_e = p0;
var1 = self->attrs[COLOR_list__List___head].val; /* _head on <self:List[nullable Object]> */
var2 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_list__List__search_node_after]))(self, var_e, var1) /* search_node_after on <self:List[nullable Object]>*/;
var_node = var2;
var3 = NULL;
if (var_node == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (var4){
((void (*)(val*, val*))(self->class->vft[COLOR_list__List__remove_node]))(self, var_node) /* remove_node on <self:List[nullable Object]>*/;
} else {
}
RET_LABEL:;
}
/* method list#List#remove for (self: Object, nullable Object) */
void VIRTUAL_list__List__remove(val* self, val* p0) {
list__List__remove(self, p0);
RET_LABEL:;
}
/* method list#List#remove_at for (self: List[nullable Object], Int) */
void list__List__remove_at(val* self, long p0) {
long var_i /* var i: Int */;
val* var /* : nullable ListNode[nullable Object] */;
val* var_node /* var node: nullable ListNode[nullable Object] */;
val* var1 /* : null */;
short int var2 /* : Bool */;
var_i = p0;
var = ((val* (*)(val*, long))(self->class->vft[COLOR_list__List__get_node]))(self, var_i) /* get_node on <self:List[nullable Object]>*/;
var_node = var;
var1 = NULL;
if (var_node == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (var2){
((void (*)(val*, val*))(self->class->vft[COLOR_list__List__remove_node]))(self, var_node) /* remove_node on <self:List[nullable Object]>*/;
} else {
}
RET_LABEL:;
}
/* method list#List#remove_at for (self: Object, Int) */
void VIRTUAL_list__List__remove_at(val* self, long p0) {
list__List__remove_at(self, p0);
RET_LABEL:;
}
/* method list#List#clear for (self: List[nullable Object]) */
void list__List__clear(val* self) {
val* var /* : null */;
val* var1 /* : null */;
var = NULL;
self->attrs[COLOR_list__List___head].val = var; /* _head on <self:List[nullable Object]> */
var1 = NULL;
self->attrs[COLOR_list__List___tail].val = var1; /* _tail on <self:List[nullable Object]> */
RET_LABEL:;
}
/* method list#List#clear for (self: Object) */
void VIRTUAL_list__List__clear(val* self) {
list__List__clear(self);
RET_LABEL:;
}
/* method list#List#iterator for (self: List[nullable Object]): ListIterator[nullable Object] */
val* list__List__iterator(val* self) {
val* var /* : ListIterator[nullable Object] */;
val* var1 /* : ListIterator[nullable Object] */;
var1 = NEW_list__ListIterator(self->type->resolution_table->types[COLOR_list__ListIteratorlist__List_FT0]);
((void (*)(val*, val*))(var1->class->vft[COLOR_list__ListIterator__init]))(var1, self) /* init on <var1:ListIterator[nullable Object]>*/;
CHECK_NEW_list__ListIterator(var1);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list#List#iterator for (self: Object): Iterator[nullable Object] */
val* VIRTUAL_list__List__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : ListIterator[nullable Object] */;
var1 = list__List__iterator(self);
var = var1;
RET_LABEL:;
return var;
}
/* method list#List#init for (self: List[nullable Object]) */
void list__List__init(val* self) {
RET_LABEL:;
}
/* method list#List#init for (self: Object) */
void VIRTUAL_list__List__init(val* self) {
list__List__init(self);
RET_LABEL:;
}
/* method list#List#from for (self: List[nullable Object], Collection[nullable Object]) */
void list__List__from(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
val* var_coll /* var coll: Collection[nullable Object] */;
/* Covariant cast for argument 0 (coll) <p0:Collection[nullable Object]> isa Collection[List#0] */
/* <p0:Collection[nullable Object]> isa Collection[List#0] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Collectionlist__List_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/list.nit", 188);
exit(1);
}
var_coll = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_collection__Sequence__append]))(self, var_coll) /* append on <self:List[nullable Object]>*/;
RET_LABEL:;
}
/* method list#List#from for (self: Object, Collection[nullable Object]) */
void VIRTUAL_list__List__from(val* self, val* p0) {
list__List__from(self, p0);
RET_LABEL:;
}
/* method list#List#get_node for (self: List[nullable Object], Int): nullable ListNode[nullable Object] */
val* list__List__get_node(val* self, long p0) {
val* var /* : nullable ListNode[nullable Object] */;
long var_i /* var i: Int */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var_n /* var n: nullable ListNode[nullable Object] */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
val* var9 /* : null */;
short int var10 /* : Bool */;
short int var_ /* var : Bool */;
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
short int var17 /* : Bool */;
val* var18 /* : nullable ListNode[nullable Object] */;
long var19 /* : Int */;
long var20 /* : Int */;
long var22 /* : Int */;
var_i = p0;
var1 = self->attrs[COLOR_list__List___head].val; /* _head on <self:List[nullable Object]> */
var_n = var1;
var2 = 0;
{ /* Inline kernel#Int#< (var_i,var2) */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (!var5) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var6 = var_i < var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
if (var3){
var7 = NULL;
var = var7;
goto RET_LABEL;
} else {
}
for(;;) {
var9 = NULL;
if (var_n == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
var_ = var10;
if (var10){
var11 = 0;
{ /* Inline kernel#Int#> (var_i,var11) */
/* Covariant cast for argument 0 (i) <var11:Int> isa OTHER */
/* <var11:Int> isa OTHER */
var14 = 1; /* easy <var11:Int> isa OTHER*/
if (!var14) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 259);
exit(1);
}
var17 = var_i > var11;
var12 = var17;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var8 = var12;
} else {
var8 = var_;
}
if (!var8) break;
var18 = ((val* (*)(val*))(var_n->class->vft[COLOR_list__ListNode__next]))(var_n) /* next on <var_n:nullable ListNode[nullable Object](ListNode[nullable Object])>*/;
var_n = var18;
var19 = 1;
{ /* Inline kernel#Int#- (var_i,var19) */
var22 = var_i - var19;
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var_i = var20;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var = var_n;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list#List#get_node for (self: Object, Int): nullable ListNode[nullable Object] */
val* VIRTUAL_list__List__get_node(val* self, long p0) {
val* var /* : nullable ListNode[nullable Object] */;
val* var1 /* : nullable ListNode[nullable Object] */;
var1 = list__List__get_node(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method list#List#search_node_after for (self: List[nullable Object], nullable Object, nullable ListNode[nullable Object]): nullable ListNode[nullable Object] */
val* list__List__search_node_after(val* self, val* p0, val* p1) {
val* var /* : nullable ListNode[nullable Object] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
val* var_e /* var e: nullable Object */;
val* var_after /* var after: nullable ListNode[nullable Object] */;
val* var_n /* var n: nullable ListNode[nullable Object] */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
val* var9 /* : nullable Object */;
short int var10 /* : Bool */;
val* var11 /* : nullable ListNode[nullable Object] */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa List#0 */
/* <p0:nullable Object> isa List#0 */
type_struct = self->type->resolution_table->types[COLOR_list__List_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
}
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/list.nit", 211);
exit(1);
}
/* Covariant cast for argument 1 (after) <p1:nullable ListNode[nullable Object]> isa nullable ListNode[List#0] */
/* <p1:nullable ListNode[nullable Object]> isa nullable ListNode[List#0] */
type_struct5 = self->type->resolution_table->types[COLOR_list__ListNodelist__List_FT0];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
if(p1 == NULL) {
var2 = 1;
} else {
if(cltype3 >= p1->type->table_size) {
var2 = 0;
} else {
var2 = p1->type->type_table[cltype3] == idtype4;
}
}
if (!var2) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/list.nit", 211);
exit(1);
}
var_e = p0;
var_after = p1;
var_n = var_after;
for(;;) {
var7 = NULL;
if (var_n == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
var_ = var8;
if (var8){
var9 = ((val* (*)(val*))(var_n->class->vft[COLOR_abstract_collection__Container__item]))(var_n) /* item on <var_n:nullable ListNode[nullable Object](ListNode[nullable Object])>*/;
if (var9 == NULL) {
var10 = (var_e != NULL);
} else {
var10 = ((short int (*)(val*, val*))(var9->class->vft[COLOR_kernel__Object___33d_61d]))(var9, var_e) /* != on <var9:nullable Object>*/;
}
var6 = var10;
} else {
var6 = var_;
}
if (!var6) break;
var11 = ((val* (*)(val*))(var_n->class->vft[COLOR_list__ListNode__next]))(var_n) /* next on <var_n:nullable ListNode[nullable Object](ListNode[nullable Object])>*/;
var_n = var11;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var = var_n;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list#List#search_node_after for (self: Object, nullable Object, nullable ListNode[nullable Object]): nullable ListNode[nullable Object] */
val* VIRTUAL_list__List__search_node_after(val* self, val* p0, val* p1) {
val* var /* : nullable ListNode[nullable Object] */;
val* var1 /* : nullable ListNode[nullable Object] */;
var1 = list__List__search_node_after(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method list#List#remove_node for (self: List[nullable Object], ListNode[nullable Object]) */
void list__List__remove_node(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
val* var_node /* var node: ListNode[nullable Object] */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : nullable ListNode[nullable Object] */;
val* var5 /* : nullable ListNode[nullable Object] */;
val* var6 /* : null */;
short int var7 /* : Bool */;
val* var8 /* : null */;
val* var9 /* : nullable ListNode[nullable Object] */;
val* var10 /* : null */;
val* var11 /* : nullable ListNode[nullable Object] */;
val* var12 /* : null */;
short int var13 /* : Bool */;
val* var14 /* : nullable ListNode[nullable Object] */;
val* var15 /* : nullable ListNode[nullable Object] */;
val* var16 /* : null */;
val* var17 /* : nullable ListNode[nullable Object] */;
val* var18 /* : nullable ListNode[nullable Object] */;
val* var19 /* : nullable ListNode[nullable Object] */;
val* var20 /* : nullable ListNode[nullable Object] */;
/* Covariant cast for argument 0 (node) <p0:ListNode[nullable Object]> isa ListNode[List#0] */
/* <p0:ListNode[nullable Object]> isa ListNode[List#0] */
type_struct = self->type->resolution_table->types[COLOR_list__ListNodelist__List_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/list.nit", 219);
exit(1);
}
var_node = p0;
var1 = ((val* (*)(val*))(var_node->class->vft[COLOR_list__ListNode__prev]))(var_node) /* prev on <var_node:ListNode[nullable Object]>*/;
var2 = NULL;
if (var1 == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (var3){
var4 = ((val* (*)(val*))(var_node->class->vft[COLOR_list__ListNode__next]))(var_node) /* next on <var_node:ListNode[nullable Object]>*/;
self->attrs[COLOR_list__List___head].val = var4; /* _head on <self:List[nullable Object]> */
var5 = ((val* (*)(val*))(var_node->class->vft[COLOR_list__ListNode__next]))(var_node) /* next on <var_node:ListNode[nullable Object]>*/;
var6 = NULL;
if (var5 == NULL) {
var7 = 1; /* is null */
} else {
var7 = 0; /* arg is null but recv is not */
}
if (var7){
var8 = NULL;
self->attrs[COLOR_list__List___tail].val = var8; /* _tail on <self:List[nullable Object]> */
} else {
var9 = ((val* (*)(val*))(var_node->class->vft[COLOR_list__ListNode__next]))(var_node) /* next on <var_node:ListNode[nullable Object]>*/;
var10 = NULL;
if (var9 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "lib/standard/collection/list.nit", 227);
exit(1);
} else {
((void (*)(val*, val*))(var9->class->vft[COLOR_list__ListNode__prev_61d]))(var9, var10) /* prev= on <var9:nullable ListNode[nullable Object]>*/;
}
}
} else {
var11 = ((val* (*)(val*))(var_node->class->vft[COLOR_list__ListNode__next]))(var_node) /* next on <var_node:ListNode[nullable Object]>*/;
var12 = NULL;
if (var11 == NULL) {
var13 = 1; /* is null */
} else {
var13 = 0; /* arg is null but recv is not */
}
if (var13){
var14 = ((val* (*)(val*))(var_node->class->vft[COLOR_list__ListNode__prev]))(var_node) /* prev on <var_node:ListNode[nullable Object]>*/;
self->attrs[COLOR_list__List___tail].val = var14; /* _tail on <self:List[nullable Object]> */
var15 = ((val* (*)(val*))(var_node->class->vft[COLOR_list__ListNode__prev]))(var_node) /* prev on <var_node:ListNode[nullable Object]>*/;
var16 = NULL;
if (var15 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "lib/standard/collection/list.nit", 231);
exit(1);
} else {
((void (*)(val*, val*))(var15->class->vft[COLOR_list__ListNode__next_61d]))(var15, var16) /* next= on <var15:nullable ListNode[nullable Object]>*/;
}
} else {
var17 = ((val* (*)(val*))(var_node->class->vft[COLOR_list__ListNode__prev]))(var_node) /* prev on <var_node:ListNode[nullable Object]>*/;
var18 = ((val* (*)(val*))(var_node->class->vft[COLOR_list__ListNode__next]))(var_node) /* next on <var_node:ListNode[nullable Object]>*/;
if (var17 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "lib/standard/collection/list.nit", 233);
exit(1);
} else {
((void (*)(val*, val*))(var17->class->vft[COLOR_list__ListNode__next_61d]))(var17, var18) /* next= on <var17:nullable ListNode[nullable Object]>*/;
}
var19 = ((val* (*)(val*))(var_node->class->vft[COLOR_list__ListNode__next]))(var_node) /* next on <var_node:ListNode[nullable Object]>*/;
var20 = ((val* (*)(val*))(var_node->class->vft[COLOR_list__ListNode__prev]))(var_node) /* prev on <var_node:ListNode[nullable Object]>*/;
if (var19 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "lib/standard/collection/list.nit", 234);
exit(1);
} else {
((void (*)(val*, val*))(var19->class->vft[COLOR_list__ListNode__prev_61d]))(var19, var20) /* prev= on <var19:nullable ListNode[nullable Object]>*/;
}
}
}
RET_LABEL:;
}
/* method list#List#remove_node for (self: Object, ListNode[nullable Object]) */
void VIRTUAL_list__List__remove_node(val* self, val* p0) {
list__List__remove_node(self, p0);
RET_LABEL:;
}
/* method list#List#insert_before for (self: List[nullable Object], nullable Object, ListNode[nullable Object]) */
void list__List__insert_before(val* self, val* p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
short int var1 /* : Bool */;
int cltype2;
int idtype3;
const struct type* type_struct4;
val* var_element /* var element: nullable Object */;
val* var_node /* var node: ListNode[nullable Object] */;
val* var5 /* : ListNode[nullable Object] */;
val* var_nnode /* var nnode: ListNode[nullable Object] */;
val* var6 /* : nullable ListNode[nullable Object] */;
val* var_prev /* var prev: nullable ListNode[nullable Object] */;
val* var7 /* : null */;
short int var8 /* : Bool */;
/* Covariant cast for argument 0 (element) <p0:nullable Object> isa List#0 */
/* <p0:nullable Object> isa List#0 */
type_struct = self->type->resolution_table->types[COLOR_list__List_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
}
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/list.nit", 238);
exit(1);
}
/* Covariant cast for argument 1 (node) <p1:ListNode[nullable Object]> isa ListNode[List#0] */
/* <p1:ListNode[nullable Object]> isa ListNode[List#0] */
type_struct4 = self->type->resolution_table->types[COLOR_list__ListNodelist__List_FT0];
cltype2 = type_struct4->color;
idtype3 = type_struct4->id;
if(cltype2 >= p1->type->table_size) {
var1 = 0;
} else {
var1 = p1->type->type_table[cltype2] == idtype3;
}
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/list.nit", 238);
exit(1);
}
var_element = p0;
var_node = p1;
var5 = NEW_list__ListNode(self->type->resolution_table->types[COLOR_list__ListNodelist__List_FT0]);
((void (*)(val*, val*))(var5->class->vft[COLOR_list__ListNode__init]))(var5, var_element) /* init on <var5:ListNode[nullable Object]>*/;
CHECK_NEW_list__ListNode(var5);
var_nnode = var5;
var6 = ((val* (*)(val*))(var_node->class->vft[COLOR_list__ListNode__prev]))(var_node) /* prev on <var_node:ListNode[nullable Object]>*/;
var_prev = var6;
var7 = NULL;
if (var_prev == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (var8){
self->attrs[COLOR_list__List___head].val = var_nnode; /* _head on <self:List[nullable Object]> */
} else {
((void (*)(val*, val*))(var_prev->class->vft[COLOR_list__ListNode__next_61d]))(var_prev, var_nnode) /* next= on <var_prev:nullable ListNode[nullable Object](ListNode[nullable Object])>*/;
}
((void (*)(val*, val*))(var_nnode->class->vft[COLOR_list__ListNode__prev_61d]))(var_nnode, var_prev) /* prev= on <var_nnode:ListNode[nullable Object]>*/;
((void (*)(val*, val*))(var_nnode->class->vft[COLOR_list__ListNode__next_61d]))(var_nnode, var_node) /* next= on <var_nnode:ListNode[nullable Object]>*/;
((void (*)(val*, val*))(var_node->class->vft[COLOR_list__ListNode__prev_61d]))(var_node, var_nnode) /* prev= on <var_node:ListNode[nullable Object]>*/;
RET_LABEL:;
}
/* method list#List#insert_before for (self: Object, nullable Object, ListNode[nullable Object]) */
void VIRTUAL_list__List__insert_before(val* self, val* p0, val* p1) {
list__List__insert_before(self, p0, p1);
RET_LABEL:;
}
/* method list#ListIterator#item for (self: ListIterator[nullable Object]): nullable Object */
val* list__ListIterator__item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var2 /* : nullable Object */;
var1 = self->attrs[COLOR_list__ListIterator___node].val; /* _node on <self:ListIterator[nullable Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "lib/standard/collection/list.nit", 256);
exit(1);
} else {
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Container__item]))(var1) /* item on <var1:nullable ListNode[nullable Object]>*/;
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list#ListIterator#item for (self: Object): nullable Object */
val* VIRTUAL_list__ListIterator__item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = list__ListIterator__item(self);
var = var1;
RET_LABEL:;
return var;
}
/* method list#ListIterator#item= for (self: ListIterator[nullable Object], nullable Object) */
void list__ListIterator__item_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
val* var_e /* var e: nullable Object */;
val* var1 /* : nullable ListNode[nullable Object] */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa ListIterator#0 */
/* <p0:nullable Object> isa ListIterator#0 */
type_struct = self->type->resolution_table->types[COLOR_list__ListIterator_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
}
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/list.nit", 258);
exit(1);
}
var_e = p0;
var1 = self->attrs[COLOR_list__ListIterator___node].val; /* _node on <self:ListIterator[nullable Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "lib/standard/collection/list.nit", 258);
exit(1);
} else {
((void (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__Container__item_61d]))(var1, var_e) /* item= on <var1:nullable ListNode[nullable Object]>*/;
}
RET_LABEL:;
}
/* method list#ListIterator#item= for (self: Object, nullable Object) */
void VIRTUAL_list__ListIterator__item_61d(val* self, val* p0) {
list__ListIterator__item_61d(self, p0);
RET_LABEL:;
}
/* method list#ListIterator#is_ok for (self: ListIterator[nullable Object]): Bool */
short int list__ListIterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var1 = self->attrs[COLOR_list__ListIterator___node].val; /* _node on <self:ListIterator[nullable Object]> */
var2 = NULL;
if (var1 == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
var4 = !var3;
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list#ListIterator#is_ok for (self: Object): Bool */
short int VIRTUAL_list__ListIterator__is_ok(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = list__ListIterator__is_ok(self);
var = var1;
RET_LABEL:;
return var;
}
/* method list#ListIterator#next for (self: ListIterator[nullable Object]) */
void list__ListIterator__next(val* self) {
val* var /* : nullable ListNode[nullable Object] */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var_ /* var : ListIterator[nullable Object] */;
long var2 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
long var6 /* : Int */;
var = self->attrs[COLOR_list__ListIterator___node].val; /* _node on <self:ListIterator[nullable Object]> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "lib/standard/collection/list.nit", 264);
exit(1);
} else {
var1 = ((val* (*)(val*))(var->class->vft[COLOR_list__ListNode__next]))(var) /* next on <var:nullable ListNode[nullable Object]>*/;
}
self->attrs[COLOR_list__ListIterator___node].val = var1; /* _node on <self:ListIterator[nullable Object]> */
var_ = self;
var2 = var_->attrs[COLOR_list__ListIterator___index].l; /* _index on <var_:ListIterator[nullable Object]> */
var3 = 1;
{ /* Inline kernel#Int#+ (var2,var3) */
var6 = var2 + var3;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var_->attrs[COLOR_list__ListIterator___index].l = var4; /* _index on <var_:ListIterator[nullable Object]> */
RET_LABEL:;
}
/* method list#ListIterator#next for (self: Object) */
void VIRTUAL_list__ListIterator__next(val* self) {
list__ListIterator__next(self);
RET_LABEL:;
}
/* method list#ListIterator#init for (self: ListIterator[nullable Object], List[nullable Object]) */
void list__ListIterator__init(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
val* var_list /* var list: List[nullable Object] */;
val* var1 /* : nullable ListNode[nullable Object] */;
long var2 /* : Int */;
/* Covariant cast for argument 0 (list) <p0:List[nullable Object]> isa List[ListIterator#0] */
/* <p0:List[nullable Object]> isa List[ListIterator#0] */
type_struct = self->type->resolution_table->types[COLOR_list__Listlist__ListIterator_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/list.nit", 268);
exit(1);
}
var_list = p0;
self->attrs[COLOR_list__ListIterator___list].val = var_list; /* _list on <self:ListIterator[nullable Object]> */
var1 = var_list->attrs[COLOR_list__List___head].val; /* _head on <var_list:List[nullable Object]> */
self->attrs[COLOR_list__ListIterator___node].val = var1; /* _node on <self:ListIterator[nullable Object]> */
var2 = 0;
self->attrs[COLOR_list__ListIterator___index].l = var2; /* _index on <self:ListIterator[nullable Object]> */
RET_LABEL:;
}
/* method list#ListIterator#init for (self: Object, List[nullable Object]) */
void VIRTUAL_list__ListIterator__init(val* self, val* p0) {
list__ListIterator__init(self, p0);
RET_LABEL:;
}
/* method list#ListIterator#index for (self: ListIterator[nullable Object]): Int */
long list__ListIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_list__ListIterator___index].l; /* _index on <self:ListIterator[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method list#ListIterator#index for (self: Object): Int */
long VIRTUAL_list__ListIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = list__ListIterator__index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method list#ListIterator#delete for (self: ListIterator[nullable Object]) */
void list__ListIterator__delete(val* self) {
val* var /* : List[nullable Object] */;
val* var1 /* : nullable ListNode[nullable Object] */;
var = self->attrs[COLOR_list__ListIterator___list].val; /* _list on <self:ListIterator[nullable Object]> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _list", "lib/standard/collection/list.nit", 288);
exit(1);
}
var1 = self->attrs[COLOR_list__ListIterator___node].val; /* _node on <self:ListIterator[nullable Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/list.nit", 288);
exit(1);
}
((void (*)(val*, val*))(var->class->vft[COLOR_list__List__remove_node]))(var, var1) /* remove_node on <var:List[nullable Object]>*/;
RET_LABEL:;
}
/* method list#ListIterator#delete for (self: Object) */
void VIRTUAL_list__ListIterator__delete(val* self) {
list__ListIterator__delete(self);
RET_LABEL:;
}
/* method list#ListIterator#insert_before for (self: ListIterator[nullable Object], nullable Object) */
void list__ListIterator__insert_before(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
val* var_element /* var element: nullable Object */;
val* var1 /* : List[nullable Object] */;
val* var2 /* : nullable ListNode[nullable Object] */;
/* Covariant cast for argument 0 (element) <p0:nullable Object> isa ListIterator#0 */
/* <p0:nullable Object> isa ListIterator#0 */
type_struct = self->type->resolution_table->types[COLOR_list__ListIterator_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
}
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/list.nit", 291);
exit(1);
}
var_element = p0;
var1 = self->attrs[COLOR_list__ListIterator___list].val; /* _list on <self:ListIterator[nullable Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _list", "lib/standard/collection/list.nit", 294);
exit(1);
}
var2 = self->attrs[COLOR_list__ListIterator___node].val; /* _node on <self:ListIterator[nullable Object]> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/list.nit", 294);
exit(1);
}
((void (*)(val*, val*, val*))(var1->class->vft[COLOR_list__List__insert_before]))(var1, var_element, var2) /* insert_before on <var1:List[nullable Object]>*/;
RET_LABEL:;
}
/* method list#ListIterator#insert_before for (self: Object, nullable Object) */
void VIRTUAL_list__ListIterator__insert_before(val* self, val* p0) {
list__ListIterator__insert_before(self, p0);
RET_LABEL:;
}
/* method list#ListNode#init for (self: ListNode[nullable Object], nullable Object) */
void list__ListNode__init(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
val* var_i /* var i: nullable Object */;
/* Covariant cast for argument 0 (i) <p0:nullable Object> isa ListNode#0 */
/* <p0:nullable Object> isa ListNode#0 */
type_struct = self->type->resolution_table->types[COLOR_list__ListNode_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
}
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/list.nit", 301);
exit(1);
}
var_i = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_collection__Container__init]))(self, p0) /* init on <self:ListNode[nullable Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_collection__Container__item_61d]))(self, var_i) /* item= on <self:ListNode[nullable Object]>*/;
RET_LABEL:;
}
/* method list#ListNode#init for (self: Object, nullable Object) */
void VIRTUAL_list__ListNode__init(val* self, val* p0) {
list__ListNode__init(self, p0);
RET_LABEL:;
}
/* method list#ListNode#next for (self: ListNode[nullable Object]): nullable ListNode[nullable Object] */
val* list__ListNode__next(val* self) {
val* var /* : nullable ListNode[nullable Object] */;
val* var1 /* : nullable ListNode[nullable Object] */;
var1 = self->attrs[COLOR_list__ListNode___next].val; /* _next on <self:ListNode[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method list#ListNode#next for (self: Object): nullable ListNode[nullable Object] */
val* VIRTUAL_list__ListNode__next(val* self) {
val* var /* : nullable ListNode[nullable Object] */;
val* var1 /* : nullable ListNode[nullable Object] */;
var1 = list__ListNode__next(self);
var = var1;
RET_LABEL:;
return var;
}
/* method list#ListNode#next= for (self: ListNode[nullable Object], nullable ListNode[nullable Object]) */
void list__ListNode__next_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
/* Covariant cast for argument 0 (next) <p0:nullable ListNode[nullable Object]> isa nullable ListNode[ListNode#0] */
/* <p0:nullable ListNode[nullable Object]> isa nullable ListNode[ListNode#0] */
type_struct = self->type->resolution_table->types[COLOR_list__ListNodelist__ListNode_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(p0 == NULL) {
var = 1;
} else {
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
}
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/list.nit", 306);
exit(1);
}
self->attrs[COLOR_list__ListNode___next].val = p0; /* _next on <self:ListNode[nullable Object]> */
RET_LABEL:;
}
/* method list#ListNode#next= for (self: Object, nullable ListNode[nullable Object]) */
void VIRTUAL_list__ListNode__next_61d(val* self, val* p0) {
list__ListNode__next_61d(self, p0);
RET_LABEL:;
}
/* method list#ListNode#prev for (self: ListNode[nullable Object]): nullable ListNode[nullable Object] */
val* list__ListNode__prev(val* self) {
val* var /* : nullable ListNode[nullable Object] */;
val* var1 /* : nullable ListNode[nullable Object] */;
var1 = self->attrs[COLOR_list__ListNode___prev].val; /* _prev on <self:ListNode[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method list#ListNode#prev for (self: Object): nullable ListNode[nullable Object] */
val* VIRTUAL_list__ListNode__prev(val* self) {
val* var /* : nullable ListNode[nullable Object] */;
val* var1 /* : nullable ListNode[nullable Object] */;
var1 = list__ListNode__prev(self);
var = var1;
RET_LABEL:;
return var;
}
/* method list#ListNode#prev= for (self: ListNode[nullable Object], nullable ListNode[nullable Object]) */
void list__ListNode__prev_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
/* Covariant cast for argument 0 (prev) <p0:nullable ListNode[nullable Object]> isa nullable ListNode[ListNode#0] */
/* <p0:nullable ListNode[nullable Object]> isa nullable ListNode[ListNode#0] */
type_struct = self->type->resolution_table->types[COLOR_list__ListNodelist__ListNode_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(p0 == NULL) {
var = 1;
} else {
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
}
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/list.nit", 309);
exit(1);
}
self->attrs[COLOR_list__ListNode___prev].val = p0; /* _prev on <self:ListNode[nullable Object]> */
RET_LABEL:;
}
/* method list#ListNode#prev= for (self: Object, nullable ListNode[nullable Object]) */
void VIRTUAL_list__ListNode__prev_61d(val* self, val* p0) {
list__ListNode__prev_61d(self, p0);
RET_LABEL:;
}
