#include "array.sep.0.h"
/* method array#AbstractArrayRead#length for (self: AbstractArrayRead[nullable Object]): Int */
long array__AbstractArrayRead__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:AbstractArrayRead[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method array#AbstractArrayRead#length for (self: Object): Int */
long VIRTUAL_array__AbstractArrayRead__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = array__AbstractArrayRead__length(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#AbstractArrayRead#is_empty for (self: AbstractArrayRead[nullable Object]): Bool */
short int array__AbstractArrayRead__is_empty(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
var1 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:AbstractArrayRead[nullable Object]> */
var2 = 0;
{ /* Inline kernel#Int#== (var1,var2) */
var5 = var1 == var2;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#AbstractArrayRead#is_empty for (self: Object): Bool */
short int VIRTUAL_array__AbstractArrayRead__is_empty(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = array__AbstractArrayRead__is_empty(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#AbstractArrayRead#has for (self: AbstractArrayRead[nullable Object], nullable Object): Bool */
short int array__AbstractArrayRead__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
val* var_item /* var item: nullable Object */;
long var2 /* : Int */;
long var_i /* var i: Int */;
long var3 /* : Int */;
long var_l /* var l: Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
long var13 /* : Int */;
long var14 /* : Int */;
long var16 /* : Int */;
short int var17 /* : Bool */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa Collection#0 */
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 28);
exit(1);
}
var_item = p0;
var2 = 0;
var_i = var2;
var3 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:AbstractArrayRead[nullable Object]>*/;
var_l = var3;
for(;;) {
{ /* Inline kernel#Int#< (var_i,var_l) */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var6 = 1; /* easy <var_l:Int> isa OTHER*/
if (!var6) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var9 = var_i < var_l;
var4 = var9;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
if (!var4) break;
var10 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(self, var_i) /* [] on <self:AbstractArrayRead[nullable Object]>*/;
if (var10 == NULL) {
var11 = (var_item == NULL);
} else {
var11 = ((short int (*)(val*, val*))(var10->class->vft[COLOR_kernel__Object___61d_61d]))(var10, var_item) /* == on <var10:nullable Object>*/;
}
if (var11){
var12 = 1;
var = var12;
goto RET_LABEL;
} else {
}
var13 = 1;
{ /* Inline kernel#Int#+ (var_i,var13) */
var16 = var_i + var13;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var_i = var14;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var17 = 0;
var = var17;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#AbstractArrayRead#has for (self: Object, nullable Object): Bool */
short int VIRTUAL_array__AbstractArrayRead__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = array__AbstractArrayRead__has(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method array#AbstractArrayRead#has_only for (self: AbstractArrayRead[nullable Object], nullable Object): Bool */
short int array__AbstractArrayRead__has_only(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
val* var_item /* var item: nullable Object */;
long var2 /* : Int */;
long var_i /* var i: Int */;
long var3 /* : Int */;
long var_l /* var l: Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
long var13 /* : Int */;
long var14 /* : Int */;
long var16 /* : Int */;
short int var17 /* : Bool */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa Collection#0 */
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 39);
exit(1);
}
var_item = p0;
var2 = 0;
var_i = var2;
var3 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:AbstractArrayRead[nullable Object]>*/;
var_l = var3;
for(;;) {
{ /* Inline kernel#Int#< (var_i,var_l) */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var6 = 1; /* easy <var_l:Int> isa OTHER*/
if (!var6) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var9 = var_i < var_l;
var4 = var9;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
if (!var4) break;
var10 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(self, var_i) /* [] on <self:AbstractArrayRead[nullable Object]>*/;
if (var10 == NULL) {
var11 = (var_item != NULL);
} else {
var11 = ((short int (*)(val*, val*))(var10->class->vft[COLOR_kernel__Object___33d_61d]))(var10, var_item) /* != on <var10:nullable Object>*/;
}
if (var11){
var12 = 0;
var = var12;
goto RET_LABEL;
} else {
}
var13 = 1;
{ /* Inline kernel#Int#+ (var_i,var13) */
var16 = var_i + var13;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var_i = var14;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var17 = 1;
var = var17;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#AbstractArrayRead#has_only for (self: Object, nullable Object): Bool */
short int VIRTUAL_array__AbstractArrayRead__has_only(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = array__AbstractArrayRead__has_only(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method array#AbstractArrayRead#count for (self: AbstractArrayRead[nullable Object], nullable Object): Int */
long array__AbstractArrayRead__count(val* self, val* p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
val* var_item /* var item: nullable Object */;
long var2 /* : Int */;
long var_res /* var res: Int */;
long var3 /* : Int */;
long var_i /* var i: Int */;
long var4 /* : Int */;
long var_l /* var l: Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
short int var12 /* : Bool */;
long var13 /* : Int */;
long var14 /* : Int */;
long var16 /* : Int */;
long var17 /* : Int */;
long var18 /* : Int */;
long var20 /* : Int */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa Collection#0 */
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 50);
exit(1);
}
var_item = p0;
var2 = 0;
var_res = var2;
var3 = 0;
var_i = var3;
var4 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:AbstractArrayRead[nullable Object]>*/;
var_l = var4;
for(;;) {
{ /* Inline kernel#Int#< (var_i,var_l) */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var7 = 1; /* easy <var_l:Int> isa OTHER*/
if (!var7) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var10 = var_i < var_l;
var5 = var10;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
if (!var5) break;
var11 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(self, var_i) /* [] on <self:AbstractArrayRead[nullable Object]>*/;
if (var11 == NULL) {
var12 = (var_item == NULL);
} else {
var12 = ((short int (*)(val*, val*))(var11->class->vft[COLOR_kernel__Object___61d_61d]))(var11, var_item) /* == on <var11:nullable Object>*/;
}
if (var12){
var13 = 1;
{ /* Inline kernel#Int#+ (var_res,var13) */
var16 = var_res + var13;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var_res = var14;
} else {
}
var17 = 1;
{ /* Inline kernel#Int#+ (var_i,var17) */
var20 = var_i + var17;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
var_i = var18;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#AbstractArrayRead#count for (self: Object, nullable Object): Int */
long VIRTUAL_array__AbstractArrayRead__count(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = array__AbstractArrayRead__count(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method array#AbstractArrayRead#index_of for (self: AbstractArrayRead[nullable Object], nullable Object): Int */
long array__AbstractArrayRead__index_of(val* self, val* p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
val* var_item /* var item: nullable Object */;
long var2 /* : Int */;
long var3 /* : Int */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa SequenceRead#0 */
/* <p0:nullable Object> isa SequenceRead#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__SequenceRead_FT0];
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 62);
exit(1);
}
var_item = p0;
var2 = 0;
var3 = ((long (*)(val*, val*, long))(self->class->vft[COLOR_array__AbstractArrayRead__index_of_from]))(self, var_item, var2) /* index_of_from on <self:AbstractArrayRead[nullable Object]>*/;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#AbstractArrayRead#index_of for (self: Object, nullable Object): Int */
long VIRTUAL_array__AbstractArrayRead__index_of(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = array__AbstractArrayRead__index_of(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method array#AbstractArrayRead#last_index_of for (self: AbstractArrayRead[nullable Object], nullable Object): Int */
long array__AbstractArrayRead__last_index_of(val* self, val* p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
val* var_item /* var item: nullable Object */;
long var2 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
long var6 /* : Int */;
long var7 /* : Int */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa AbstractArrayRead#0 */
/* <p0:nullable Object> isa AbstractArrayRead#0 */
type_struct = self->type->resolution_table->types[COLOR_array__AbstractArrayRead_FT0];
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 64);
exit(1);
}
var_item = p0;
var2 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:AbstractArrayRead[nullable Object]>*/;
var3 = 1;
{ /* Inline kernel#Int#- (var2,var3) */
var6 = var2 - var3;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var7 = ((long (*)(val*, val*, long))(self->class->vft[COLOR_array__AbstractArrayRead__last_index_of_from]))(self, var_item, var4) /* last_index_of_from on <self:AbstractArrayRead[nullable Object]>*/;
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#AbstractArrayRead#last_index_of for (self: Object, nullable Object): Int */
long VIRTUAL_array__AbstractArrayRead__last_index_of(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = array__AbstractArrayRead__last_index_of(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method array#AbstractArrayRead#index_of_from for (self: AbstractArrayRead[nullable Object], nullable Object, Int): Int */
long array__AbstractArrayRead__index_of_from(val* self, val* p0, long p1) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
val* var_item /* var item: nullable Object */;
long var_pos /* var pos: Int */;
long var_i /* var i: Int */;
long var2 /* : Int */;
long var_len /* var len: Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
short int var10 /* : Bool */;
long var11 /* : Int */;
long var12 /* : Int */;
long var14 /* : Int */;
long var15 /* : Int */;
long var16 /* : Int */;
long var18 /* : Int */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa AbstractArrayRead#0 */
/* <p0:nullable Object> isa AbstractArrayRead#0 */
type_struct = self->type->resolution_table->types[COLOR_array__AbstractArrayRead_FT0];
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 68);
exit(1);
}
var_item = p0;
var_pos = p1;
var_i = var_pos;
var2 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:AbstractArrayRead[nullable Object]>*/;
var_len = var2;
for(;;) {
{ /* Inline kernel#Int#< (var_i,var_len) */
/* Covariant cast for argument 0 (i) <var_len:Int> isa OTHER */
/* <var_len:Int> isa OTHER */
var5 = 1; /* easy <var_len:Int> isa OTHER*/
if (!var5) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var8 = var_i < var_len;
var3 = var8;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
if (!var3) break;
var9 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(self, var_i) /* [] on <self:AbstractArrayRead[nullable Object]>*/;
if (var9 == NULL) {
var10 = (var_item == NULL);
} else {
var10 = ((short int (*)(val*, val*))(var9->class->vft[COLOR_kernel__Object___61d_61d]))(var9, var_item) /* == on <var9:nullable Object>*/;
}
if (var10){
var = var_i;
goto RET_LABEL;
} else {
}
var11 = 1;
{ /* Inline kernel#Int#+ (var_i,var11) */
var14 = var_i + var11;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var_i = var12;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var15 = 1;
{ /* Inline kernel#Int#unary - (var15) */
var18 = -var15;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var = var16;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#AbstractArrayRead#index_of_from for (self: Object, nullable Object, Int): Int */
long VIRTUAL_array__AbstractArrayRead__index_of_from(val* self, val* p0, long p1) {
long var /* : Int */;
long var1 /* : Int */;
var1 = array__AbstractArrayRead__index_of_from(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method array#AbstractArrayRead#last_index_of_from for (self: AbstractArrayRead[nullable Object], nullable Object, Int): Int */
long array__AbstractArrayRead__last_index_of_from(val* self, val* p0, long p1) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
val* var_item /* var item: nullable Object */;
long var_pos /* var pos: Int */;
long var_i /* var i: Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
short int var10 /* : Bool */;
long var11 /* : Int */;
long var12 /* : Int */;
long var14 /* : Int */;
long var15 /* : Int */;
long var16 /* : Int */;
long var18 /* : Int */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa AbstractArrayRead#0 */
/* <p0:nullable Object> isa AbstractArrayRead#0 */
type_struct = self->type->resolution_table->types[COLOR_array__AbstractArrayRead_FT0];
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 83);
exit(1);
}
var_item = p0;
var_pos = p1;
var_i = var_pos;
for(;;) {
var2 = 0;
{ /* Inline kernel#Int#>= (var_i,var2) */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (!var5) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
}
var8 = var_i >= var2;
var3 = var8;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
if (!var3) break;
var9 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(self, var_i) /* [] on <self:AbstractArrayRead[nullable Object]>*/;
if (var9 == NULL) {
var10 = (var_item == NULL);
} else {
var10 = ((short int (*)(val*, val*))(var9->class->vft[COLOR_kernel__Object___61d_61d]))(var9, var_item) /* == on <var9:nullable Object>*/;
}
if (var10){
var = var_i;
goto RET_LABEL;
} else {
var11 = 1;
{ /* Inline kernel#Int#- (var_i,var11) */
var14 = var_i - var11;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var_i = var12;
}
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var15 = 1;
{ /* Inline kernel#Int#unary - (var15) */
var18 = -var15;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var = var16;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#AbstractArrayRead#last_index_of_from for (self: Object, nullable Object, Int): Int */
long VIRTUAL_array__AbstractArrayRead__last_index_of_from(val* self, val* p0, long p1) {
long var /* : Int */;
long var1 /* : Int */;
var1 = array__AbstractArrayRead__last_index_of_from(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method array#AbstractArrayRead#reversed for (self: AbstractArrayRead[nullable Object]): Array[nullable Object] */
val* array__AbstractArrayRead__reversed(val* self) {
val* var /* : Array[nullable Object] */;
long var1 /* : Int */;
long var_cmp /* var cmp: Int */;
val* var2 /* : Array[nullable Object] */;
val* var_result /* var result: Array[nullable Object] */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
short int var7 /* : Bool */;
long var8 /* : Int */;
long var9 /* : Int */;
long var11 /* : Int */;
val* var12 /* : nullable Object */;
var1 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:AbstractArrayRead[nullable Object]> */
var_cmp = var1;
var2 = NEW_array__Array(self->type->resolution_table->types[COLOR_array__Arrayarray__AbstractArrayRead_FT0]);
((void (*)(val*, long))(var2->class->vft[COLOR_array__Array__with_capacity]))(var2, var_cmp) /* with_capacity on <var2:Array[nullable Object]>*/;
CHECK_NEW_array__Array(var2);
var_result = var2;
for(;;) {
var3 = 0;
{ /* Inline kernel#Int#> (var_cmp,var3) */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (!var6) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 259);
exit(1);
}
var7 = var_cmp > var3;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
if (!var4) break;
var8 = 1;
{ /* Inline kernel#Int#- (var_cmp,var8) */
var11 = var_cmp - var8;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var_cmp = var9;
var12 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(self, var_cmp) /* [] on <self:AbstractArrayRead[nullable Object]>*/;
((void (*)(val*, val*))(var_result->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_result, var12) /* add on <var_result:Array[nullable Object]>*/;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var = var_result;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#AbstractArrayRead#reversed for (self: Object): Array[nullable Object] */
val* VIRTUAL_array__AbstractArrayRead__reversed(val* self) {
val* var /* : Array[nullable Object] */;
val* var1 /* : Array[nullable Object] */;
var1 = array__AbstractArrayRead__reversed(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#AbstractArrayRead#copy_to for (self: AbstractArrayRead[nullable Object], Int, Int, AbstractArray[nullable Object], Int) */
void array__AbstractArrayRead__copy_to(val* self, long p0, long p1, val* p2, long p3) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
long var_start /* var start: Int */;
long var_len /* var len: Int */;
val* var_dest /* var dest: AbstractArray[nullable Object] */;
long var_new_start /* var new_start: Int */;
long var_i /* var i: Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
short int var7 /* : Bool */;
long var8 /* : Int */;
long var9 /* : Int */;
long var11 /* : Int */;
long var12 /* : Int */;
long var14 /* : Int */;
long var15 /* : Int */;
long var17 /* : Int */;
val* var18 /* : nullable Object */;
/* Covariant cast for argument 2 (dest) <p2:AbstractArray[nullable Object]> isa AbstractArray[AbstractArrayRead#0] */
/* <p2:AbstractArray[nullable Object]> isa AbstractArray[AbstractArrayRead#0] */
type_struct = self->type->resolution_table->types[COLOR_array__AbstractArrayarray__AbstractArrayRead_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p2->type->table_size) {
var = 0;
} else {
var = p2->type->type_table[cltype] == idtype;
}
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 112);
exit(1);
}
var_start = p0;
var_len = p1;
var_dest = p2;
var_new_start = p3;
var_i = var_len;
for(;;) {
var1 = 0;
{ /* Inline kernel#Int#> (var_i,var1) */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 259);
exit(1);
}
var7 = var_i > var1;
var2 = var7;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
if (!var2) break;
var8 = 1;
{ /* Inline kernel#Int#- (var_i,var8) */
var11 = var_i - var8;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var_i = var9;
{ /* Inline kernel#Int#+ (var_new_start,var_i) */
var14 = var_new_start + var_i;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
{ /* Inline kernel#Int#+ (var_start,var_i) */
var17 = var_start + var_i;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var18 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(self, var15) /* [] on <self:AbstractArrayRead[nullable Object]>*/;
((void (*)(val*, long, val*))(var_dest->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var_dest, var12, var18) /* []= on <var_dest:AbstractArray[nullable Object]>*/;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method array#AbstractArrayRead#copy_to for (self: Object, Int, Int, AbstractArray[nullable Object], Int) */
void VIRTUAL_array__AbstractArrayRead__copy_to(val* self, long p0, long p1, val* p2, long p3) {
array__AbstractArrayRead__copy_to(self, p0, p1, p2, p3);
RET_LABEL:;
}
/* method array#AbstractArrayRead#output for (self: AbstractArrayRead[nullable Object]) */
void array__AbstractArrayRead__output(val* self) {
long var /* : Int */;
long var_i /* var i: Int */;
long var1 /* : Int */;
long var_l /* var l: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
val* var7 /* : null */;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var10 /* : Int */;
long var12 /* : Int */;
var = 0;
var_i = var;
var1 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:AbstractArrayRead[nullable Object]>*/;
var_l = var1;
for(;;) {
{ /* Inline kernel#Int#< (var_i,var_l) */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var4 = 1; /* easy <var_l:Int> isa OTHER*/
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var5 = var_i < var_l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
if (!var2) break;
var6 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(self, var_i) /* [] on <self:AbstractArrayRead[nullable Object]>*/;
var_e = var6;
var7 = NULL;
if (var_e == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
if (var_e == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "lib/standard/collection/array.nit", 134);
exit(1);
} else {
((void (*)(val*))(var_e->class->vft[COLOR_kernel__Object__output]))(var_e) /* output on <var_e:nullable Object>*/;
}
} else {
}
var9 = 1;
{ /* Inline kernel#Int#+ (var_i,var9) */
var12 = var_i + var9;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var_i = var10;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method array#AbstractArrayRead#output for (self: Object) */
void VIRTUAL_array__AbstractArrayRead__output(val* self) {
array__AbstractArrayRead__output(self);
RET_LABEL:;
}
/* method array#AbstractArrayRead#iterator for (self: AbstractArrayRead[nullable Object]): ArrayIterator[nullable Object] */
val* array__AbstractArrayRead__iterator(val* self) {
val* var /* : ArrayIterator[nullable Object] */;
val* var1 /* : ArrayIterator[nullable Object] */;
var1 = NEW_array__ArrayIterator(self->type->resolution_table->types[COLOR_array__ArrayIteratorarray__AbstractArrayRead_FT0]);
((void (*)(val*, val*))(var1->class->vft[COLOR_array__ArrayIterator__init]))(var1, self) /* init on <var1:ArrayIterator[nullable Object]>*/;
CHECK_NEW_array__ArrayIterator(var1);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#AbstractArrayRead#iterator for (self: Object): Iterator[nullable Object] */
val* VIRTUAL_array__AbstractArrayRead__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : ArrayIterator[nullable Object] */;
var1 = array__AbstractArrayRead__iterator(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#AbstractArrayRead#init for (self: AbstractArrayRead[nullable Object]) */
void array__AbstractArrayRead__init(val* self) {
RET_LABEL:;
}
/* method array#AbstractArrayRead#init for (self: Object) */
void VIRTUAL_array__AbstractArrayRead__init(val* self) {
array__AbstractArrayRead__init(self);
RET_LABEL:;
}
/* method array#AbstractArray#enlarge for (self: AbstractArray[nullable Object], Int) */
void array__AbstractArray__enlarge(val* self, long p0) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Deferred method called", "lib/standard/collection/array.nit", 147);
exit(1);
RET_LABEL:;
}
/* method array#AbstractArray#enlarge for (self: Object, Int) */
void VIRTUAL_array__AbstractArray__enlarge(val* self, long p0) {
array__AbstractArray__enlarge(self, p0);
RET_LABEL:;
}
/* method array#AbstractArray#push for (self: AbstractArray[nullable Object], nullable Object) */
void array__AbstractArray__push(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
val* var_item /* var item: nullable Object */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa Sequence#0 */
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 152);
exit(1);
}
var_item = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(self, var_item) /* add on <self:AbstractArray[nullable Object]>*/;
RET_LABEL:;
}
/* method array#AbstractArray#push for (self: Object, nullable Object) */
void VIRTUAL_array__AbstractArray__push(val* self, val* p0) {
array__AbstractArray__push(self, p0);
RET_LABEL:;
}
/* method array#AbstractArray#pop for (self: AbstractArray[nullable Object]): nullable Object */
val* array__AbstractArray__pop(val* self) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
val* var_r /* var r: nullable Object */;
val* var_ /* var : AbstractArray[nullable Object] */;
long var4 /* : Int */;
long var5 /* : Int */;
long var6 /* : Int */;
long var8 /* : Int */;
var1 = ((short int (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__is_empty]))(self) /* is_empty on <self:AbstractArray[nullable Object]>*/;
var2 = !var1;
if (!var2) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert \'not_empty\' failed", "lib/standard/collection/array.nit", 156);
exit(1);
}
var3 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_collection__SequenceRead__last]))(self) /* last on <self:AbstractArray[nullable Object]>*/;
var_r = var3;
var_ = self;
var4 = var_->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_:AbstractArray[nullable Object]> */
var5 = 1;
{ /* Inline kernel#Int#- (var4,var5) */
var8 = var4 - var5;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var_->attrs[COLOR_array__AbstractArrayRead___length].l = var6; /* _length on <var_:AbstractArray[nullable Object]> */
var = var_r;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#AbstractArray#pop for (self: Object): nullable Object */
val* VIRTUAL_array__AbstractArray__pop(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = array__AbstractArray__pop(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#AbstractArray#shift for (self: AbstractArray[nullable Object]): nullable Object */
val* array__AbstractArray__shift(val* self) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
val* var_r /* var r: nullable Object */;
long var4 /* : Int */;
long var_i /* var i: Int */;
long var5 /* : Int */;
long var_l /* var l: Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype;
int idtype;
short int var9 /* : Bool */;
long var10 /* : Int */;
long var11 /* : Int */;
long var13 /* : Int */;
val* var14 /* : nullable Object */;
long var15 /* : Int */;
long var16 /* : Int */;
long var18 /* : Int */;
long var19 /* : Int */;
long var20 /* : Int */;
long var22 /* : Int */;
var1 = ((short int (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__is_empty]))(self) /* is_empty on <self:AbstractArray[nullable Object]>*/;
var2 = !var1;
if (!var2) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert \'not_empty\' failed", "lib/standard/collection/array.nit", 164);
exit(1);
}
var3 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__first]))(self) /* first on <self:AbstractArray[nullable Object]>*/;
var_r = var3;
var4 = 1;
var_i = var4;
var5 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:AbstractArray[nullable Object]>*/;
var_l = var5;
for(;;) {
{ /* Inline kernel#Int#< (var_i,var_l) */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var8 = 1; /* easy <var_l:Int> isa OTHER*/
if (!var8) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var9 = var_i < var_l;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
if (!var6) break;
var10 = 1;
{ /* Inline kernel#Int#- (var_i,var10) */
var13 = var_i - var10;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var14 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(self, var_i) /* [] on <self:AbstractArray[nullable Object]>*/;
((void (*)(val*, long, val*))(self->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(self, var11, var14) /* []= on <self:AbstractArray[nullable Object]>*/;
var15 = 1;
{ /* Inline kernel#Int#+ (var_i,var15) */
var18 = var_i + var15;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var_i = var16;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var19 = 1;
{ /* Inline kernel#Int#- (var_l,var19) */
var22 = var_l - var19;
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
self->attrs[COLOR_array__AbstractArrayRead___length].l = var20; /* _length on <self:AbstractArray[nullable Object]> */
var = var_r;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#AbstractArray#shift for (self: Object): nullable Object */
val* VIRTUAL_array__AbstractArray__shift(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = array__AbstractArray__shift(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#AbstractArray#unshift for (self: AbstractArray[nullable Object], nullable Object) */
void array__AbstractArray__unshift(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
val* var_item /* var item: nullable Object */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
long var5 /* : Int */;
long var_i /* var i: Int */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
short int var12 /* : Bool */;
long var13 /* : Int */;
long var14 /* : Int */;
long var16 /* : Int */;
val* var17 /* : nullable Object */;
long var18 /* : Int */;
long var19 /* : Int */;
long var21 /* : Int */;
long var22 /* : Int */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa Sequence#0 */
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 176);
exit(1);
}
var_item = p0;
var1 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:AbstractArray[nullable Object]>*/;
var2 = 1;
{ /* Inline kernel#Int#- (var1,var2) */
var5 = var1 - var2;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var_i = var3;
for(;;) {
var6 = 0;
{ /* Inline kernel#Int#> (var_i,var6) */
/* Covariant cast for argument 0 (i) <var6:Int> isa OTHER */
/* <var6:Int> isa OTHER */
var9 = 1; /* easy <var6:Int> isa OTHER*/
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 259);
exit(1);
}
var12 = var_i > var6;
var7 = var12;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
if (!var7) break;
var13 = 1;
{ /* Inline kernel#Int#+ (var_i,var13) */
var16 = var_i + var13;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var17 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(self, var_i) /* [] on <self:AbstractArray[nullable Object]>*/;
((void (*)(val*, long, val*))(self->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(self, var14, var17) /* []= on <self:AbstractArray[nullable Object]>*/;
var18 = 1;
{ /* Inline kernel#Int#- (var_i,var18) */
var21 = var_i - var18;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var_i = var19;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var22 = 0;
((void (*)(val*, long, val*))(self->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(self, var22, var_item) /* []= on <self:AbstractArray[nullable Object]>*/;
RET_LABEL:;
}
/* method array#AbstractArray#unshift for (self: Object, nullable Object) */
void VIRTUAL_array__AbstractArray__unshift(val* self, val* p0) {
array__AbstractArray__unshift(self, p0);
RET_LABEL:;
}
/* method array#AbstractArray#insert for (self: AbstractArray[nullable Object], nullable Object, Int) */
void array__AbstractArray__insert(val* self, val* p0, long p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
val* var_item /* var item: nullable Object */;
long var_pos /* var pos: Int */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
long var5 /* : Int */;
long var6 /* : Int */;
long var7 /* : Int */;
long var9 /* : Int */;
long var10 /* : Int */;
long var11 /* : Int */;
long var13 /* : Int */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa AbstractArray#0 */
/* <p0:nullable Object> isa AbstractArray#0 */
type_struct = self->type->resolution_table->types[COLOR_array__AbstractArray_FT0];
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 186);
exit(1);
}
var_item = p0;
var_pos = p1;
var1 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:AbstractArray[nullable Object]>*/;
var2 = 1;
{ /* Inline kernel#Int#+ (var1,var2) */
var5 = var1 + var2;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
((void (*)(val*, long))(self->class->vft[COLOR_array__AbstractArray__enlarge]))(self, var3) /* enlarge on <self:AbstractArray[nullable Object]>*/;
var6 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:AbstractArray[nullable Object]>*/;
{ /* Inline kernel#Int#- (var6,var_pos) */
var9 = var6 - var_pos;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var10 = 1;
{ /* Inline kernel#Int#+ (var_pos,var10) */
var13 = var_pos + var10;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
((void (*)(val*, long, long, val*, long))(self->class->vft[COLOR_array__AbstractArrayRead__copy_to]))(self, var_pos, var7, self, var11) /* copy_to on <self:AbstractArray[nullable Object]>*/;
((void (*)(val*, long, val*))(self->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(self, var_pos, var_item) /* []= on <self:AbstractArray[nullable Object]>*/;
RET_LABEL:;
}
/* method array#AbstractArray#insert for (self: Object, nullable Object, Int) */
void VIRTUAL_array__AbstractArray__insert(val* self, val* p0, long p1) {
array__AbstractArray__insert(self, p0, p1);
RET_LABEL:;
}
/* method array#AbstractArray#add for (self: AbstractArray[nullable Object], nullable Object) */
void array__AbstractArray__add(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
val* var_item /* var item: nullable Object */;
long var1 /* : Int */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa SimpleCollection#0 */
/* <p0:nullable Object> isa SimpleCollection#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__SimpleCollection_FT0];
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 198);
exit(1);
}
var_item = p0;
var1 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:AbstractArray[nullable Object]>*/;
((void (*)(val*, long, val*))(self->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(self, var1, var_item) /* []= on <self:AbstractArray[nullable Object]>*/;
RET_LABEL:;
}
/* method array#AbstractArray#add for (self: Object, nullable Object) */
void VIRTUAL_array__AbstractArray__add(val* self, val* p0) {
array__AbstractArray__add(self, p0);
RET_LABEL:;
}
/* method array#AbstractArray#clear for (self: AbstractArray[nullable Object]) */
void array__AbstractArray__clear(val* self) {
long var /* : Int */;
var = 0;
self->attrs[COLOR_array__AbstractArrayRead___length].l = var; /* _length on <self:AbstractArray[nullable Object]> */
RET_LABEL:;
}
/* method array#AbstractArray#clear for (self: Object) */
void VIRTUAL_array__AbstractArray__clear(val* self) {
array__AbstractArray__clear(self);
RET_LABEL:;
}
/* method array#AbstractArray#remove for (self: AbstractArray[nullable Object], nullable Object) */
void array__AbstractArray__remove(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
val* var_item /* var item: nullable Object */;
long var1 /* : Int */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa RemovableCollection#0 */
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 202);
exit(1);
}
var_item = p0;
var1 = ((long (*)(val*, val*))(self->class->vft[COLOR_abstract_collection__SequenceRead__index_of]))(self, var_item) /* index_of on <self:AbstractArray[nullable Object]>*/;
((void (*)(val*, long))(self->class->vft[COLOR_abstract_collection__Sequence__remove_at]))(self, var1) /* remove_at on <self:AbstractArray[nullable Object]>*/;
RET_LABEL:;
}
/* method array#AbstractArray#remove for (self: Object, nullable Object) */
void VIRTUAL_array__AbstractArray__remove(val* self, val* p0) {
array__AbstractArray__remove(self, p0);
RET_LABEL:;
}
/* method array#AbstractArray#remove_all for (self: AbstractArray[nullable Object], nullable Object) */
void array__AbstractArray__remove_all(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
val* var_item /* var item: nullable Object */;
long var1 /* : Int */;
long var_i /* var i: Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
short int var8 /* : Bool */;
long var9 /* : Int */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa RemovableCollection#0 */
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 204);
exit(1);
}
var_item = p0;
var1 = ((long (*)(val*, val*))(self->class->vft[COLOR_abstract_collection__SequenceRead__index_of]))(self, var_item) /* index_of on <self:AbstractArray[nullable Object]>*/;
var_i = var1;
for(;;) {
var2 = 0;
{ /* Inline kernel#Int#>= (var_i,var2) */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (!var5) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
}
var8 = var_i >= var2;
var3 = var8;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
if (!var3) break;
((void (*)(val*, long))(self->class->vft[COLOR_abstract_collection__Sequence__remove_at]))(self, var_i) /* remove_at on <self:AbstractArray[nullable Object]>*/;
var9 = ((long (*)(val*, val*, long))(self->class->vft[COLOR_array__AbstractArrayRead__index_of_from]))(self, var_item, var_i) /* index_of_from on <self:AbstractArray[nullable Object]>*/;
var_i = var9;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method array#AbstractArray#remove_all for (self: Object, nullable Object) */
void VIRTUAL_array__AbstractArray__remove_all(val* self, val* p0) {
array__AbstractArray__remove_all(self, p0);
RET_LABEL:;
}
/* method array#AbstractArray#remove_at for (self: AbstractArray[nullable Object], Int) */
void array__AbstractArray__remove_at(val* self, long p0) {
long var_i /* var i: Int */;
long var /* : Int */;
long var_l /* var l: Int */;
short int var1 /* : Bool */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
short int var6 /* : Bool */;
short int var_ /* var : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
short int var12 /* : Bool */;
long var13 /* : Int */;
long var14 /* : Int */;
long var16 /* : Int */;
long var_j /* var j: Int */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
short int var22 /* : Bool */;
long var23 /* : Int */;
long var24 /* : Int */;
long var26 /* : Int */;
val* var27 /* : nullable Object */;
long var28 /* : Int */;
long var29 /* : Int */;
long var31 /* : Int */;
long var32 /* : Int */;
long var33 /* : Int */;
long var35 /* : Int */;
var_i = p0;
var = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:AbstractArray[nullable Object]>*/;
var_l = var;
var2 = 0;
{ /* Inline kernel#Int#>= (var_i,var2) */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (!var5) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
}
var6 = var_i >= var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var_ = var3;
if (var3){
{ /* Inline kernel#Int#< (var_i,var_l) */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var9 = 1; /* easy <var_l:Int> isa OTHER*/
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var12 = var_i < var_l;
var7 = var12;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var1 = var7;
} else {
var1 = var_;
}
if (var1){
var13 = 1;
{ /* Inline kernel#Int#+ (var_i,var13) */
var16 = var_i + var13;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var_j = var14;
for(;;) {
{ /* Inline kernel#Int#< (var_j,var_l) */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var19 = 1; /* easy <var_l:Int> isa OTHER*/
if (!var19) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var22 = var_j < var_l;
var17 = var22;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
if (!var17) break;
var23 = 1;
{ /* Inline kernel#Int#- (var_j,var23) */
var26 = var_j - var23;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
var27 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(self, var_j) /* [] on <self:AbstractArray[nullable Object]>*/;
((void (*)(val*, long, val*))(self->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(self, var24, var27) /* []= on <self:AbstractArray[nullable Object]>*/;
var28 = 1;
{ /* Inline kernel#Int#+ (var_j,var28) */
var31 = var_j + var28;
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
var_j = var29;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var32 = 1;
{ /* Inline kernel#Int#- (var_l,var32) */
var35 = var_l - var32;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
self->attrs[COLOR_array__AbstractArrayRead___length].l = var33; /* _length on <self:AbstractArray[nullable Object]> */
} else {
}
RET_LABEL:;
}
/* method array#AbstractArray#remove_at for (self: Object, Int) */
void VIRTUAL_array__AbstractArray__remove_at(val* self, long p0) {
array__AbstractArray__remove_at(self, p0);
RET_LABEL:;
}
/* method array#AbstractArray#swap_at for (self: AbstractArray[nullable Object], Int, Int) */
void array__AbstractArray__swap_at(val* self, long p0, long p1) {
long var_a /* var a: Int */;
long var_b /* var b: Int */;
val* var /* : nullable Object */;
val* var_e /* var e: nullable Object */;
val* var1 /* : nullable Object */;
var_a = p0;
var_b = p1;
var = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(self, var_a) /* [] on <self:AbstractArray[nullable Object]>*/;
var_e = var;
var1 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(self, var_b) /* [] on <self:AbstractArray[nullable Object]>*/;
((void (*)(val*, long, val*))(self->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(self, var_a, var1) /* []= on <self:AbstractArray[nullable Object]>*/;
((void (*)(val*, long, val*))(self->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(self, var_b, var_e) /* []= on <self:AbstractArray[nullable Object]>*/;
RET_LABEL:;
}
/* method array#AbstractArray#swap_at for (self: Object, Int, Int) */
void VIRTUAL_array__AbstractArray__swap_at(val* self, long p0, long p1) {
array__AbstractArray__swap_at(self, p0, p1);
RET_LABEL:;
}
/* method array#AbstractArray#init for (self: AbstractArray[nullable Object]) */
void array__AbstractArray__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_array__AbstractArrayRead__init]))(self) /* init on <self:AbstractArray[nullable Object]>*/;
RET_LABEL:;
}
/* method array#AbstractArray#init for (self: Object) */
void VIRTUAL_array__AbstractArray__init(val* self) {
array__AbstractArray__init(self);
RET_LABEL:;
}
/* method array#Array#iterate for (self: Array[nullable Object]) */
void array__Array__iterate(val* self) {
long var /* : Int */;
long var_i /* var i: Int */;
long var1 /* : Int */;
long var_l /* var l: Int */;
val* var2 /* : nullable NativeArray[nullable Object] */;
val* var_items /* var items: nullable NativeArray[nullable Object] */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
short int var7 /* : Bool */;
long var8 /* : Int */;
long var9 /* : Int */;
long var11 /* : Int */;
var = 0;
var_i = var;
var1 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:Array[nullable Object]> */
var_l = var1;
var2 = self->attrs[COLOR_array__Array___items].val; /* _items on <self:Array[nullable Object]> */
var_items = var2;
for(;;) {
var3 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:Array[nullable Object]>*/;
{ /* Inline kernel#Int#< (var_i,var3) */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (!var6) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var7 = var_i < var3;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
if (!var4) break;
printf("NOT YET IMPLEMENTED AClosureCallExpr:lib/standard/collection/array.nit:260,4--17\n");
var8 = 1;
{ /* Inline kernel#Int#+ (var_i,var8) */
var11 = var_i + var8;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var_i = var9;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method array#Array#iterate for (self: Object) */
void VIRTUAL_array__Array__iterate(val* self) {
array__Array__iterate(self);
RET_LABEL:;
}
/* method array#Array#[] for (self: Array[nullable Object], Int): nullable Object */
val* array__Array___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
long var_index /* var index: Int */;
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
val* var14 /* : nullable NativeArray[nullable Object] */;
val* var15 /* : nullable Object */;
var_index = p0;
var2 = 0;
{ /* Inline kernel#Int#>= (var_index,var2) */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (!var5) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
}
var6 = var_index >= var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var_ = var3;
if (var3){
var7 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:Array[nullable Object]> */
{ /* Inline kernel#Int#< (var_index,var7) */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (!var10) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var13 = var_index < var7;
var8 = var13;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var1 = var8;
} else {
var1 = var_;
}
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert \'index\' failed", "lib/standard/collection/array.nit", 267);
exit(1);
}
var14 = self->attrs[COLOR_array__Array___items].val; /* _items on <self:Array[nullable Object]> */
if (var14 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "lib/standard/collection/array.nit", 268);
exit(1);
} else {
var15 = ((val* (*)(val*, long))(var14->class->vft[COLOR_array__NativeArray___91d_93d]))(var14, var_index) /* [] on <var14:nullable NativeArray[nullable Object]>*/;
}
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#Array#[] for (self: Object, Int): nullable Object */
val* VIRTUAL_array__Array___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = array__Array___91d_93d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method array#Array#[]= for (self: Array[nullable Object], Int, nullable Object) */
void array__Array___91d_93d_61d(val* self, long p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
long var_index /* var index: Int */;
val* var_item /* var item: nullable Object */;
short int var1 /* : Bool */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
long var9 /* : Int */;
long var10 /* : Int */;
long var11 /* : Int */;
long var13 /* : Int */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
short int var19 /* : Bool */;
long var20 /* : Int */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
short int var26 /* : Bool */;
long var27 /* : Int */;
long var28 /* : Int */;
long var30 /* : Int */;
long var31 /* : Int */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
short int var37 /* : Bool */;
long var38 /* : Int */;
long var39 /* : Int */;
long var41 /* : Int */;
val* var42 /* : nullable NativeArray[nullable Object] */;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 271);
exit(1);
}
var_index = p0;
var_item = p1;
var2 = 0;
{ /* Inline kernel#Int#>= (var_index,var2) */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (!var5) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
}
var8 = var_index >= var2;
var3 = var8;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var_ = var3;
if (var3){
var9 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:Array[nullable Object]> */
var10 = 1;
{ /* Inline kernel#Int#+ (var9,var10) */
var13 = var9 + var10;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
{ /* Inline kernel#Int#< (var_index,var11) */
/* Covariant cast for argument 0 (i) <var11:Int> isa OTHER */
/* <var11:Int> isa OTHER */
var16 = 1; /* easy <var11:Int> isa OTHER*/
if (!var16) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var19 = var_index < var11;
var14 = var19;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var1 = var14;
} else {
var1 = var_;
}
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert \'index\' failed", "lib/standard/collection/array.nit", 273);
exit(1);
}
var20 = self->attrs[COLOR_array__Array___capacity].l; /* _capacity on <self:Array[nullable Object]> */
{ /* Inline kernel#Int#<= (var20,var_index) */
/* Covariant cast for argument 0 (i) <var_index:Int> isa OTHER */
/* <var_index:Int> isa OTHER */
var23 = 1; /* easy <var_index:Int> isa OTHER*/
if (!var23) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 256);
exit(1);
}
var26 = var20 <= var_index;
var21 = var26;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
if (var21){
var27 = 1;
{ /* Inline kernel#Int#+ (var_index,var27) */
var30 = var_index + var27;
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
((void (*)(val*, long))(self->class->vft[COLOR_array__AbstractArray__enlarge]))(self, var28) /* enlarge on <self:Array[nullable Object]>*/;
} else {
}
var31 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:Array[nullable Object]> */
{ /* Inline kernel#Int#<= (var31,var_index) */
/* Covariant cast for argument 0 (i) <var_index:Int> isa OTHER */
/* <var_index:Int> isa OTHER */
var34 = 1; /* easy <var_index:Int> isa OTHER*/
if (!var34) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 256);
exit(1);
}
var37 = var31 <= var_index;
var32 = var37;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
if (var32){
var38 = 1;
{ /* Inline kernel#Int#+ (var_index,var38) */
var41 = var_index + var38;
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
self->attrs[COLOR_array__AbstractArrayRead___length].l = var39; /* _length on <self:Array[nullable Object]> */
} else {
}
var42 = self->attrs[COLOR_array__Array___items].val; /* _items on <self:Array[nullable Object]> */
if (var42 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "lib/standard/collection/array.nit", 280);
exit(1);
} else {
((void (*)(val*, long, val*))(var42->class->vft[COLOR_array__NativeArray___91d_93d_61d]))(var42, var_index, var_item) /* []= on <var42:nullable NativeArray[nullable Object]>*/;
}
RET_LABEL:;
}
/* method array#Array#[]= for (self: Object, Int, nullable Object) */
void VIRTUAL_array__Array___91d_93d_61d(val* self, long p0, val* p1) {
array__Array___91d_93d_61d(self, p0, p1);
RET_LABEL:;
}
/* method array#Array#add for (self: Array[nullable Object], nullable Object) */
void array__Array__add(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
val* var_item /* var item: nullable Object */;
long var1 /* : Int */;
long var_l /* var l: Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var10 /* : Int */;
long var12 /* : Int */;
long var13 /* : Int */;
long var14 /* : Int */;
long var16 /* : Int */;
val* var17 /* : nullable NativeArray[nullable Object] */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa SimpleCollection#0 */
/* <p0:nullable Object> isa SimpleCollection#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__SimpleCollection_FT0];
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 283);
exit(1);
}
var_item = p0;
var1 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:Array[nullable Object]> */
var_l = var1;
var2 = self->attrs[COLOR_array__Array___capacity].l; /* _capacity on <self:Array[nullable Object]> */
{ /* Inline kernel#Int#<= (var2,var_l) */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var5 = 1; /* easy <var_l:Int> isa OTHER*/
if (!var5) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 256);
exit(1);
}
var8 = var2 <= var_l;
var3 = var8;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
if (var3){
var9 = 1;
{ /* Inline kernel#Int#+ (var_l,var9) */
var12 = var_l + var9;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
((void (*)(val*, long))(self->class->vft[COLOR_array__AbstractArray__enlarge]))(self, var10) /* enlarge on <self:Array[nullable Object]>*/;
} else {
}
var13 = 1;
{ /* Inline kernel#Int#+ (var_l,var13) */
var16 = var_l + var13;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
self->attrs[COLOR_array__AbstractArrayRead___length].l = var14; /* _length on <self:Array[nullable Object]> */
var17 = self->attrs[COLOR_array__Array___items].val; /* _items on <self:Array[nullable Object]> */
if (var17 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "lib/standard/collection/array.nit", 290);
exit(1);
} else {
((void (*)(val*, long, val*))(var17->class->vft[COLOR_array__NativeArray___91d_93d_61d]))(var17, var_l, var_item) /* []= on <var17:nullable NativeArray[nullable Object]>*/;
}
RET_LABEL:;
}
/* method array#Array#add for (self: Object, nullable Object) */
void VIRTUAL_array__Array__add(val* self, val* p0) {
array__Array__add(self, p0);
RET_LABEL:;
}
/* method array#Array#enlarge for (self: Array[nullable Object], Int) */
void array__Array__enlarge(val* self, long p0) {
long var_cap /* var cap: Int */;
long var /* : Int */;
long var_c /* var c: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
short int var10 /* : Bool */;
long var11 /* : Int */;
long var12 /* : Int */;
long var14 /* : Int */;
long var15 /* : Int */;
long var16 /* : Int */;
long var18 /* : Int */;
val* var19 /* : NativeArray[nullable Object] */;
val* var_a /* var a: NativeArray[nullable Object] */;
long var20 /* : Int */;
long var21 /* : Int */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
short int var27 /* : Bool */;
val* var28 /* : nullable NativeArray[nullable Object] */;
long var29 /* : Int */;
var_cap = p0;
var = self->attrs[COLOR_array__Array___capacity].l; /* _capacity on <self:Array[nullable Object]> */
var_c = var;
{ /* Inline kernel#Int#<= (var_cap,var_c) */
/* Covariant cast for argument 0 (i) <var_c:Int> isa OTHER */
/* <var_c:Int> isa OTHER */
var3 = 1; /* easy <var_c:Int> isa OTHER*/
if (!var3) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 256);
exit(1);
}
var4 = var_cap <= var_c;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
if (var1){
goto RET_LABEL;
} else {
}
for(;;) {
{ /* Inline kernel#Int#<= (var_c,var_cap) */
/* Covariant cast for argument 0 (i) <var_cap:Int> isa OTHER */
/* <var_cap:Int> isa OTHER */
var7 = 1; /* easy <var_cap:Int> isa OTHER*/
if (!var7) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 256);
exit(1);
}
var10 = var_c <= var_cap;
var5 = var10;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
if (!var5) break;
var11 = 2;
{ /* Inline kernel#Int#* (var_c,var11) */
var14 = var_c * var11;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var15 = 2;
{ /* Inline kernel#Int#+ (var12,var15) */
var18 = var12 + var15;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var_c = var16;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var19 = ((val* (*)(val*, long))(self->class->vft[COLOR_array__ArrayCapable__calloc_array]))(self, var_c) /* calloc_array on <self:Array[nullable Object]>*/;
var_a = var19;
var20 = self->attrs[COLOR_array__Array___capacity].l; /* _capacity on <self:Array[nullable Object]> */
var21 = 0;
{ /* Inline kernel#Int#> (var20,var21) */
/* Covariant cast for argument 0 (i) <var21:Int> isa OTHER */
/* <var21:Int> isa OTHER */
var24 = 1; /* easy <var21:Int> isa OTHER*/
if (!var24) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 259);
exit(1);
}
var27 = var20 > var21;
var22 = var27;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
if (var22){
var28 = self->attrs[COLOR_array__Array___items].val; /* _items on <self:Array[nullable Object]> */
var29 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:Array[nullable Object]> */
if (var28 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "lib/standard/collection/array.nit", 299);
exit(1);
} else {
((void (*)(val*, val*, long))(var28->class->vft[COLOR_array__NativeArray__copy_to]))(var28, var_a, var29) /* copy_to on <var28:nullable NativeArray[nullable Object]>*/;
}
} else {
}
self->attrs[COLOR_array__Array___items].val = var_a; /* _items on <self:Array[nullable Object]> */
self->attrs[COLOR_array__Array___capacity].l = var_c; /* _capacity on <self:Array[nullable Object]> */
RET_LABEL:;
}
/* method array#Array#enlarge for (self: Object, Int) */
void VIRTUAL_array__Array__enlarge(val* self, long p0) {
array__Array__enlarge(self, p0);
RET_LABEL:;
}
/* method array#Array#init for (self: Array[nullable Object]) */
void array__Array__init(val* self) {
long var /* : Int */;
long var1 /* : Int */;
((void (*)(val*))(self->class->vft[COLOR_array__AbstractArray__init]))(self) /* init on <self:Array[nullable Object]>*/;
var = 0;
self->attrs[COLOR_array__Array___capacity].l = var; /* _capacity on <self:Array[nullable Object]> */
var1 = 0;
self->attrs[COLOR_array__AbstractArrayRead___length].l = var1; /* _length on <self:Array[nullable Object]> */
RET_LABEL:;
}
/* method array#Array#init for (self: Object) */
void VIRTUAL_array__Array__init(val* self) {
array__Array__init(self);
RET_LABEL:;
}
/* method array#Array#from for (self: Array[nullable Object], Collection[nullable Object]) */
void array__Array__from(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
val* var_items /* var items: Collection[nullable Object] */;
long var1 /* : Int */;
/* Covariant cast for argument 0 (items) <p0:Collection[nullable Object]> isa Collection[Array#0] */
/* <p0:Collection[nullable Object]> isa Collection[Array#0] */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Collectionarray__Array_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 311);
exit(1);
}
var_items = p0;
var1 = ((long (*)(val*))(var_items->class->vft[COLOR_abstract_collection__Collection__length]))(var_items) /* length on <var_items:Collection[nullable Object]>*/;
((void (*)(val*, long))(self->class->vft[COLOR_array__Array__with_capacity]))(self, var1) /* with_capacity on <self:Array[nullable Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(self, var_items) /* add_all on <self:Array[nullable Object]>*/;
RET_LABEL:;
}
/* method array#Array#from for (self: Object, Collection[nullable Object]) */
void VIRTUAL_array__Array__from(val* self, val* p0) {
array__Array__from(self, p0);
RET_LABEL:;
}
/* method array#Array#with_items for (self: Array[nullable Object], Array[nullable Object]) */
void array__Array__with_items(val* self, val* p0) {
val* var_objects /* var objects: Array[nullable Object] */;
val* var /* : nullable NativeArray[nullable Object] */;
long var1 /* : Int */;
long var2 /* : Int */;
var_objects = p0;
((void (*)(val*))(self->class->vft[COLOR_array__AbstractArray__init]))(self) /* init on <self:Array[nullable Object]>*/;
var = var_objects->attrs[COLOR_array__Array___items].val; /* _items on <var_objects:Array[nullable Object]> */
self->attrs[COLOR_array__Array___items].val = var; /* _items on <self:Array[nullable Object]> */
var1 = var_objects->attrs[COLOR_array__Array___capacity].l; /* _capacity on <var_objects:Array[nullable Object]> */
self->attrs[COLOR_array__Array___capacity].l = var1; /* _capacity on <self:Array[nullable Object]> */
var2 = ((long (*)(val*))(var_objects->class->vft[COLOR_abstract_collection__Collection__length]))(var_objects) /* length on <var_objects:Array[nullable Object]>*/;
self->attrs[COLOR_array__AbstractArrayRead___length].l = var2; /* _length on <self:Array[nullable Object]> */
RET_LABEL:;
}
/* method array#Array#with_items for (self: Object, Array[nullable Object]) */
void VIRTUAL_array__Array__with_items(val* self, val* p0) {
array__Array__with_items(self, p0);
RET_LABEL:;
}
/* method array#Array#with_capacity for (self: Array[nullable Object], Int) */
void array__Array__with_capacity(val* self, long p0) {
long var_cap /* var cap: Int */;
long var /* : Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var4 /* : Bool */;
val* var5 /* : NativeArray[nullable Object] */;
long var6 /* : Int */;
var_cap = p0;
((void (*)(val*))(self->class->vft[COLOR_array__AbstractArray__init]))(self) /* init on <self:Array[nullable Object]>*/;
var = 0;
{ /* Inline kernel#Int#>= (var_cap,var) */
/* Covariant cast for argument 0 (i) <var:Int> isa OTHER */
/* <var:Int> isa OTHER */
var3 = 1; /* easy <var:Int> isa OTHER*/
if (!var3) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
}
var4 = var_cap >= var;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert \'positive\' failed", "lib/standard/collection/array.nit", 328);
exit(1);
}
var5 = ((val* (*)(val*, long))(self->class->vft[COLOR_array__ArrayCapable__calloc_array]))(self, var_cap) /* calloc_array on <self:Array[nullable Object]>*/;
self->attrs[COLOR_array__Array___items].val = var5; /* _items on <self:Array[nullable Object]> */
self->attrs[COLOR_array__Array___capacity].l = var_cap; /* _capacity on <self:Array[nullable Object]> */
var6 = 0;
self->attrs[COLOR_array__AbstractArrayRead___length].l = var6; /* _length on <self:Array[nullable Object]> */
RET_LABEL:;
}
/* method array#Array#with_capacity for (self: Object, Int) */
void VIRTUAL_array__Array__with_capacity(val* self, long p0) {
array__Array__with_capacity(self, p0);
RET_LABEL:;
}
/* method array#Array#filled_with for (self: Array[nullable Object], nullable Object, Int) */
void array__Array__filled_with(val* self, val* p0, long p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
val* var_value /* var value: nullable Object */;
long var_count /* var count: Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
short int var7 /* : Bool */;
val* var8 /* : NativeArray[nullable Object] */;
long var9 /* : Int */;
long var_i /* var i: Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
short int var15 /* : Bool */;
long var16 /* : Int */;
long var17 /* : Int */;
long var19 /* : Int */;
/* Covariant cast for argument 0 (value) <p0:nullable Object> isa Array#0 */
/* <p0:nullable Object> isa Array#0 */
type_struct = self->type->resolution_table->types[COLOR_array__Array_FT0];
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 334);
exit(1);
}
var_value = p0;
var_count = p1;
((void (*)(val*))(self->class->vft[COLOR_array__AbstractArray__init]))(self) /* init on <self:Array[nullable Object]>*/;
var1 = 0;
{ /* Inline kernel#Int#>= (var_count,var1) */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
}
var7 = var_count >= var1;
var2 = var7;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
if (!var2) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert \'positive\' failed", "lib/standard/collection/array.nit", 337);
exit(1);
}
var8 = ((val* (*)(val*, long))(self->class->vft[COLOR_array__ArrayCapable__calloc_array]))(self, var_count) /* calloc_array on <self:Array[nullable Object]>*/;
self->attrs[COLOR_array__Array___items].val = var8; /* _items on <self:Array[nullable Object]> */
self->attrs[COLOR_array__Array___capacity].l = var_count; /* _capacity on <self:Array[nullable Object]> */
self->attrs[COLOR_array__AbstractArrayRead___length].l = var_count; /* _length on <self:Array[nullable Object]> */
var9 = 0;
var_i = var9;
for(;;) {
{ /* Inline kernel#Int#< (var_i,var_count) */
/* Covariant cast for argument 0 (i) <var_count:Int> isa OTHER */
/* <var_count:Int> isa OTHER */
var12 = 1; /* easy <var_count:Int> isa OTHER*/
if (!var12) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var15 = var_i < var_count;
var10 = var15;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
if (!var10) break;
((void (*)(val*, long, val*))(self->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(self, var_i, var_value) /* []= on <self:Array[nullable Object]>*/;
var16 = 1;
{ /* Inline kernel#Int#+ (var_i,var16) */
var19 = var_i + var16;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var_i = var17;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method array#Array#filled_with for (self: Object, nullable Object, Int) */
void VIRTUAL_array__Array__filled_with(val* self, val* p0, long p1) {
array__Array__filled_with(self, p0, p1);
RET_LABEL:;
}
/* method array#Array#with_native for (self: Array[nullable Object], NativeArray[nullable Object], Int) */
void array__Array__with_native(val* self, val* p0, long p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
val* var_nat /* var nat: NativeArray[nullable Object] */;
long var_size /* var size: Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
short int var7 /* : Bool */;
/* Covariant cast for argument 0 (nat) <p0:NativeArray[nullable Object]> isa NativeArray[Array#0] */
/* <p0:NativeArray[nullable Object]> isa NativeArray[Array#0] */
type_struct = self->type->resolution_table->types[COLOR_array__NativeArrayarray__Array_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 348);
exit(1);
}
var_nat = p0;
var_size = p1;
((void (*)(val*))(self->class->vft[COLOR_array__AbstractArray__init]))(self) /* init on <self:Array[nullable Object]>*/;
var1 = 0;
{ /* Inline kernel#Int#>= (var_size,var1) */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
}
var7 = var_size >= var1;
var2 = var7;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
if (!var2) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert \'positive\' failed", "lib/standard/collection/array.nit", 351);
exit(1);
}
self->attrs[COLOR_array__Array___items].val = var_nat; /* _items on <self:Array[nullable Object]> */
self->attrs[COLOR_array__Array___capacity].l = var_size; /* _capacity on <self:Array[nullable Object]> */
self->attrs[COLOR_array__AbstractArrayRead___length].l = var_size; /* _length on <self:Array[nullable Object]> */
RET_LABEL:;
}
/* method array#Array#with_native for (self: Object, NativeArray[nullable Object], Int) */
void VIRTUAL_array__Array__with_native(val* self, val* p0, long p1) {
array__Array__with_native(self, p0, p1);
RET_LABEL:;
}
/* method array#Array#intern_items for (self: Array[nullable Object]): NativeArray[nullable Object] */
val* array__Array__intern_items(val* self) {
val* var /* : NativeArray[nullable Object] */;
val* var1 /* : nullable NativeArray[nullable Object] */;
var1 = self->attrs[COLOR_array__Array___items].val; /* _items on <self:Array[nullable Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 362);
exit(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#Array#intern_items for (self: Object): NativeArray[nullable Object] */
val* VIRTUAL_array__Array__intern_items(val* self) {
val* var /* : NativeArray[nullable Object] */;
val* var1 /* : NativeArray[nullable Object] */;
var1 = array__Array__intern_items(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#Array#sort for (self: Array[nullable Object]) */
void array__Array__sort(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
long var5 /* : Int */;
var = 0;
var1 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:Array[nullable Object]>*/;
var2 = 1;
{ /* Inline kernel#Int#- (var1,var2) */
var5 = var1 - var2;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
((void (*)(val*, long, long))(self->class->vft[COLOR_array__Array__sub_sort]))(self, var, var3) /* sub_sort on <self:Array[nullable Object]>*/;
RET_LABEL:;
}
/* method array#Array#sort for (self: Object) */
void VIRTUAL_array__Array__sort(val* self) {
array__Array__sort(self);
RET_LABEL:;
}
/* method array#Array#sub_sort for (self: Array[nullable Object], Int, Int) */
void array__Array__sub_sort(val* self, long p0, long p1) {
long var_from /* var from: Int */;
long var_to /* var to: Int */;
short int var /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
short int var3 /* : Bool */;
long var4 /* : Int */;
long var5 /* : Int */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_pivot /* var pivot: nullable Object */;
long var_i /* var i: Int */;
long var_j /* var j: Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
short int var27 /* : Bool */;
short int var_ /* var : Bool */;
long var28 /* : Int */;
long var29 /* : Int */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
short int var35 /* : Bool */;
long var36 /* : Int */;
long var37 /* : Int */;
long var39 /* : Int */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
short int var46 /* : Bool */;
short int var_47 /* var : Bool */;
long var48 /* : Int */;
long var49 /* : Int */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
short int var55 /* : Bool */;
long var56 /* : Int */;
long var57 /* : Int */;
long var59 /* : Int */;
short int var61 /* : Bool */;
short int var63 /* : Bool */;
int cltype64;
int idtype65;
short int var66 /* : Bool */;
val* var67 /* : nullable Object */;
val* var_t /* var t: nullable Object */;
val* var68 /* : nullable Object */;
long var70 /* : Int */;
long var71 /* : Int */;
long var73 /* : Int */;
val* var74 /* : nullable Object */;
long var75 /* : Int */;
long var76 /* : Int */;
long var78 /* : Int */;
long var79 /* : Int */;
long var80 /* : Int */;
long var82 /* : Int */;
long var_i83 /* var i: Int */;
short int var84 /* : Bool */;
short int var86 /* : Bool */;
int cltype87;
int idtype88;
short int var89 /* : Bool */;
long var_min /* var min: Int */;
val* var90 /* : nullable Object */;
val* var_min_v /* var min_v: nullable Object */;
long var_j91 /* var j: Int */;
short int var92 /* : Bool */;
short int var94 /* : Bool */;
int cltype95;
int idtype96;
short int var97 /* : Bool */;
long var98 /* : Int */;
long var99 /* : Int */;
short int var100 /* : Bool */;
short int var102 /* : Bool */;
int cltype103;
int idtype104;
short int var105 /* : Bool */;
val* var106 /* : nullable Object */;
long var107 /* : Int */;
long var108 /* : Int */;
long var110 /* : Int */;
short int var112 /* : Bool */;
short int var114 /* : Bool */;
short int var115 /* : Bool */;
val* var116 /* : nullable Object */;
long var117 /* : Int */;
long var118 /* : Int */;
long var120 /* : Int */;
var_from = p0;
var_to = p1;
{ /* Inline kernel#Int#>= (var_from,var_to) */
/* Covariant cast for argument 0 (i) <var_to:Int> isa OTHER */
/* <var_to:Int> isa OTHER */
var2 = 1; /* easy <var_to:Int> isa OTHER*/
if (!var2) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
}
var3 = var_from >= var_to;
var = var3;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
if (var){
goto RET_LABEL;
} else {
var4 = 7;
{ /* Inline kernel#Int#+ (var_from,var4) */
var7 = var_from + var4;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
{ /* Inline kernel#Int#< (var5,var_to) */
/* Covariant cast for argument 0 (i) <var_to:Int> isa OTHER */
/* <var_to:Int> isa OTHER */
var10 = 1; /* easy <var_to:Int> isa OTHER*/
if (!var10) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var13 = var5 < var_to;
var8 = var13;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
if (var8){
var14 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(self, var_from) /* [] on <self:Array[nullable Object]>*/;
var_pivot = var14;
var_i = var_from;
var_j = var_to;
for(;;) {
{ /* Inline kernel#Int#> (var_j,var_i) */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var17 = 1; /* easy <var_i:Int> isa OTHER*/
if (!var17) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 259);
exit(1);
}
var20 = var_j > var_i;
var15 = var20;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
if (!var15) break;
for(;;) {
{ /* Inline kernel#Int#<= (var_i,var_to) */
/* Covariant cast for argument 0 (i) <var_to:Int> isa OTHER */
/* <var_to:Int> isa OTHER */
var24 = 1; /* easy <var_to:Int> isa OTHER*/
if (!var24) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 256);
exit(1);
}
var27 = var_i <= var_to;
var22 = var27;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
var_ = var22;
if (var22){
printf("NOT YET IMPLEMENTED AClosureCallExpr:lib/standard/collection/array.nit:385,23--41\n");
/* var28 = NOT YET AClosureCallExpr */
var29 = 0;
{ /* Inline kernel#Int#<= (var28,var29) */
/* Covariant cast for argument 0 (i) <var29:Int> isa OTHER */
/* <var29:Int> isa OTHER */
var32 = 1; /* easy <var29:Int> isa OTHER*/
if (!var32) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 256);
exit(1);
}
var35 = var28 <= var29;
var30 = var35;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
var21 = var30;
} else {
var21 = var_;
}
if (!var21) break;
var36 = 1;
{ /* Inline kernel#Int#+ (var_i,var36) */
var39 = var_i + var36;
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
var_i = var37;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
for(;;) {
{ /* Inline kernel#Int#> (var_j,var_i) */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var43 = 1; /* easy <var_i:Int> isa OTHER*/
if (!var43) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 259);
exit(1);
}
var46 = var_j > var_i;
var41 = var46;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
var_47 = var41;
if (var41){
printf("NOT YET IMPLEMENTED AClosureCallExpr:lib/standard/collection/array.nit:386,21--39\n");
/* var48 = NOT YET AClosureCallExpr */
var49 = 0;
{ /* Inline kernel#Int#>= (var48,var49) */
/* Covariant cast for argument 0 (i) <var49:Int> isa OTHER */
/* <var49:Int> isa OTHER */
var52 = 1; /* easy <var49:Int> isa OTHER*/
if (!var52) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
}
var55 = var48 >= var49;
var50 = var55;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
var40 = var50;
} else {
var40 = var_47;
}
if (!var40) break;
var56 = 1;
{ /* Inline kernel#Int#- (var_j,var56) */
var59 = var_j - var56;
var57 = var59;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
var_j = var57;
CONTINUE_label60: (void)0;
}
BREAK_label60: (void)0;
{ /* Inline kernel#Int#> (var_j,var_i) */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var63 = 1; /* easy <var_i:Int> isa OTHER*/
if (!var63) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 259);
exit(1);
}
var66 = var_j > var_i;
var61 = var66;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
if (var61){
var67 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(self, var_i) /* [] on <self:Array[nullable Object]>*/;
var_t = var67;
var68 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(self, var_j) /* [] on <self:Array[nullable Object]>*/;
((void (*)(val*, long, val*))(self->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(self, var_i, var68) /* []= on <self:Array[nullable Object]>*/;
((void (*)(val*, long, val*))(self->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(self, var_j, var_t) /* []= on <self:Array[nullable Object]>*/;
} else {
}
CONTINUE_label69: (void)0;
}
BREAK_label69: (void)0;
var70 = 1;
{ /* Inline kernel#Int#- (var_i,var70) */
var73 = var_i - var70;
var71 = var73;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
var74 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(self, var71) /* [] on <self:Array[nullable Object]>*/;
((void (*)(val*, long, val*))(self->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(self, var_from, var74) /* []= on <self:Array[nullable Object]>*/;
var75 = 1;
{ /* Inline kernel#Int#- (var_i,var75) */
var78 = var_i - var75;
var76 = var78;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
((void (*)(val*, long, val*))(self->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(self, var76, var_pivot) /* []= on <self:Array[nullable Object]>*/;
var79 = 2;
{ /* Inline kernel#Int#- (var_i,var79) */
var82 = var_i - var79;
var80 = var82;
goto RET_LABEL81;
RET_LABEL81:(void)0;
}
((void (*)(val*, long, long))(self->class->vft[COLOR_array__Array__sub_sort]))(self, var_from, var80) /* sub_sort on <self:Array[nullable Object]>*/;
((void (*)(val*, long, long))(self->class->vft[COLOR_array__Array__sub_sort]))(self, var_i, var_to) /* sub_sort on <self:Array[nullable Object]>*/;
} else {
var_i83 = var_from;
for(;;) {
{ /* Inline kernel#Int#< (var_i83,var_to) */
/* Covariant cast for argument 0 (i) <var_to:Int> isa OTHER */
/* <var_to:Int> isa OTHER */
var86 = 1; /* easy <var_to:Int> isa OTHER*/
if (!var86) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var89 = var_i83 < var_to;
var84 = var89;
goto RET_LABEL85;
RET_LABEL85:(void)0;
}
if (!var84) break;
var_min = var_i83;
var90 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(self, var_i83) /* [] on <self:Array[nullable Object]>*/;
var_min_v = var90;
var_j91 = var_i83;
for(;;) {
{ /* Inline kernel#Int#<= (var_j91,var_to) */
/* Covariant cast for argument 0 (i) <var_to:Int> isa OTHER */
/* <var_to:Int> isa OTHER */
var94 = 1; /* easy <var_to:Int> isa OTHER*/
if (!var94) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 256);
exit(1);
}
var97 = var_j91 <= var_to;
var92 = var97;
goto RET_LABEL93;
RET_LABEL93:(void)0;
}
if (!var92) break;
printf("NOT YET IMPLEMENTED AClosureCallExpr:lib/standard/collection/array.nit:404,9--27\n");
/* var98 = NOT YET AClosureCallExpr */
var99 = 0;
{ /* Inline kernel#Int#> (var98,var99) */
/* Covariant cast for argument 0 (i) <var99:Int> isa OTHER */
/* <var99:Int> isa OTHER */
var102 = 1; /* easy <var99:Int> isa OTHER*/
if (!var102) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 259);
exit(1);
}
var105 = var98 > var99;
var100 = var105;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
if (var100){
var_min = var_j91;
var106 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(self, var_j91) /* [] on <self:Array[nullable Object]>*/;
var_min_v = var106;
} else {
}
var107 = 1;
{ /* Inline kernel#Int#+ (var_j91,var107) */
var110 = var_j91 + var107;
var108 = var110;
goto RET_LABEL109;
RET_LABEL109:(void)0;
}
var_j91 = var108;
CONTINUE_label111: (void)0;
}
BREAK_label111: (void)0;
{ /* Inline kernel#Int#!= (var_min,var_i83) */
var114 = var_min == var_i83;
var115 = !var114;
var112 = var115;
goto RET_LABEL113;
RET_LABEL113:(void)0;
}
if (var112){
var116 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(self, var_i83) /* [] on <self:Array[nullable Object]>*/;
((void (*)(val*, long, val*))(self->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(self, var_min, var116) /* []= on <self:Array[nullable Object]>*/;
((void (*)(val*, long, val*))(self->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(self, var_i83, var_min_v) /* []= on <self:Array[nullable Object]>*/;
} else {
}
var117 = 1;
{ /* Inline kernel#Int#+ (var_i83,var117) */
var120 = var_i83 + var117;
var118 = var120;
goto RET_LABEL119;
RET_LABEL119:(void)0;
}
var_i83 = var118;
CONTINUE_label121: (void)0;
}
BREAK_label121: (void)0;
}
}
RET_LABEL:;
}
/* method array#Array#sub_sort for (self: Object, Int, Int) */
void VIRTUAL_array__Array__sub_sort(val* self, long p0, long p1) {
array__Array__sub_sort(self, p0, p1);
RET_LABEL:;
}
/* method array#ArrayIterator#item for (self: ArrayIterator[nullable Object]): nullable Object */
val* array__ArrayIterator__item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : AbstractArrayRead[nullable Object] */;
long var2 /* : Int */;
val* var3 /* : nullable Object */;
var1 = self->attrs[COLOR_array__ArrayIterator___array].val; /* _array on <self:ArrayIterator[nullable Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _array", "lib/standard/collection/array.nit", 424);
exit(1);
}
var2 = self->attrs[COLOR_array__ArrayIterator___index].l; /* _index on <self:ArrayIterator[nullable Object]> */
var3 = ((val* (*)(val*, long))(var1->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var1, var2) /* [] on <var1:AbstractArrayRead[nullable Object]>*/;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArrayIterator#item for (self: Object): nullable Object */
val* VIRTUAL_array__ArrayIterator__item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = array__ArrayIterator__item(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayIterator#is_ok for (self: ArrayIterator[nullable Object]): Bool */
short int array__ArrayIterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
val* var2 /* : AbstractArrayRead[nullable Object] */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
short int var7 /* : Bool */;
var1 = self->attrs[COLOR_array__ArrayIterator___index].l; /* _index on <self:ArrayIterator[nullable Object]> */
var2 = self->attrs[COLOR_array__ArrayIterator___array].val; /* _array on <self:ArrayIterator[nullable Object]> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _array", "lib/standard/collection/array.nit", 428);
exit(1);
}
var3 = ((long (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__length]))(var2) /* length on <var2:AbstractArrayRead[nullable Object]>*/;
{ /* Inline kernel#Int#< (var1,var3) */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (!var6) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var7 = var1 < var3;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArrayIterator#is_ok for (self: Object): Bool */
short int VIRTUAL_array__ArrayIterator__is_ok(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = array__ArrayIterator__is_ok(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayIterator#next for (self: ArrayIterator[nullable Object]) */
void array__ArrayIterator__next(val* self) {
val* var_ /* var : ArrayIterator[nullable Object] */;
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
long var4 /* : Int */;
var_ = self;
var = var_->attrs[COLOR_array__ArrayIterator___index].l; /* _index on <var_:ArrayIterator[nullable Object]> */
var1 = 1;
{ /* Inline kernel#Int#+ (var,var1) */
var4 = var + var1;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var_->attrs[COLOR_array__ArrayIterator___index].l = var2; /* _index on <var_:ArrayIterator[nullable Object]> */
RET_LABEL:;
}
/* method array#ArrayIterator#next for (self: Object) */
void VIRTUAL_array__ArrayIterator__next(val* self) {
array__ArrayIterator__next(self);
RET_LABEL:;
}
/* method array#ArrayIterator#init for (self: ArrayIterator[nullable Object], AbstractArrayRead[nullable Object]) */
void array__ArrayIterator__init(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
val* var_a /* var a: AbstractArrayRead[nullable Object] */;
long var1 /* : Int */;
/* Covariant cast for argument 0 (a) <p0:AbstractArrayRead[nullable Object]> isa AbstractArrayRead[ArrayIterator#0] */
/* <p0:AbstractArrayRead[nullable Object]> isa AbstractArrayRead[ArrayIterator#0] */
type_struct = self->type->resolution_table->types[COLOR_array__AbstractArrayReadarray__ArrayIterator_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 432);
exit(1);
}
var_a = p0;
self->attrs[COLOR_array__ArrayIterator___array].val = var_a; /* _array on <self:ArrayIterator[nullable Object]> */
var1 = 0;
self->attrs[COLOR_array__ArrayIterator___index].l = var1; /* _index on <self:ArrayIterator[nullable Object]> */
RET_LABEL:;
}
/* method array#ArrayIterator#init for (self: Object, AbstractArrayRead[nullable Object]) */
void VIRTUAL_array__ArrayIterator__init(val* self, val* p0) {
array__ArrayIterator__init(self, p0);
RET_LABEL:;
}
/* method array#ArrayIterator#index for (self: ArrayIterator[nullable Object]): Int */
long array__ArrayIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_array__ArrayIterator___index].l; /* _index on <self:ArrayIterator[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayIterator#index for (self: Object): Int */
long VIRTUAL_array__ArrayIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = array__ArrayIterator__index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArraySet#has for (self: ArraySet[Object], Object): Bool */
short int array__ArraySet__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
val* var_e /* var e: Object */;
val* var2 /* : Array[Object] */;
short int var3 /* : Bool */;
/* Covariant cast for argument 0 (e) <p0:Object> isa Collection#0 */
/* <p0:Object> isa Collection#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Collection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 451);
exit(1);
}
var_e = p0;
var2 = self->attrs[COLOR_array__ArraySet___array].val; /* _array on <self:ArraySet[Object]> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _array", "lib/standard/collection/array.nit", 451);
exit(1);
}
var3 = ((short int (*)(val*, val*))(var2->class->vft[COLOR_abstract_collection__Collection__has]))(var2, var_e) /* has on <var2:Array[Object]>*/;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArraySet#has for (self: Object, nullable Object): Bool */
short int VIRTUAL_array__ArraySet__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = array__ArraySet__has(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArraySet#add for (self: ArraySet[Object], Object) */
void array__ArraySet__add(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
val* var_e /* var e: Object */;
val* var1 /* : Array[Object] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : Array[Object] */;
/* Covariant cast for argument 0 (e) <p0:Object> isa SimpleCollection#0 */
/* <p0:Object> isa SimpleCollection#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__SimpleCollection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 453);
exit(1);
}
var_e = p0;
var1 = self->attrs[COLOR_array__ArraySet___array].val; /* _array on <self:ArraySet[Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _array", "lib/standard/collection/array.nit", 453);
exit(1);
}
var2 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__Collection__has]))(var1, var_e) /* has on <var1:Array[Object]>*/;
var3 = !var2;
if (var3){
var4 = self->attrs[COLOR_array__ArraySet___array].val; /* _array on <self:ArraySet[Object]> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _array", "lib/standard/collection/array.nit", 453);
exit(1);
}
((void (*)(val*, val*))(var4->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var4, var_e) /* add on <var4:Array[Object]>*/;
} else {
}
RET_LABEL:;
}
/* method array#ArraySet#add for (self: Object, nullable Object) */
void VIRTUAL_array__ArraySet__add(val* self, val* p0) {
array__ArraySet__add(self, p0);
RET_LABEL:;
}
/* method array#ArraySet#is_empty for (self: ArraySet[Object]): Bool */
short int array__ArraySet__is_empty(val* self) {
short int var /* : Bool */;
val* var1 /* : Array[Object] */;
short int var2 /* : Bool */;
var1 = self->attrs[COLOR_array__ArraySet___array].val; /* _array on <self:ArraySet[Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _array", "lib/standard/collection/array.nit", 455);
exit(1);
}
var2 = ((short int (*)(val*))(var1->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var1) /* is_empty on <var1:Array[Object]>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArraySet#is_empty for (self: Object): Bool */
short int VIRTUAL_array__ArraySet__is_empty(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = array__ArraySet__is_empty(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArraySet#length for (self: ArraySet[Object]): Int */
long array__ArraySet__length(val* self) {
long var /* : Int */;
val* var1 /* : Array[Object] */;
long var2 /* : Int */;
var1 = self->attrs[COLOR_array__ArraySet___array].val; /* _array on <self:ArraySet[Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _array", "lib/standard/collection/array.nit", 457);
exit(1);
}
var2 = ((long (*)(val*))(var1->class->vft[COLOR_abstract_collection__Collection__length]))(var1) /* length on <var1:Array[Object]>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArraySet#length for (self: Object): Int */
long VIRTUAL_array__ArraySet__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = array__ArraySet__length(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArraySet#first for (self: ArraySet[Object]): Object */
val* array__ArraySet__first(val* self) {
val* var /* : Object */;
val* var1 /* : Array[Object] */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
short int var7 /* : Bool */;
val* var8 /* : Array[Object] */;
val* var9 /* : nullable Object */;
var1 = self->attrs[COLOR_array__ArraySet___array].val; /* _array on <self:ArraySet[Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _array", "lib/standard/collection/array.nit", 461);
exit(1);
}
var2 = ((long (*)(val*))(var1->class->vft[COLOR_abstract_collection__Collection__length]))(var1) /* length on <var1:Array[Object]>*/;
var3 = 0;
{ /* Inline kernel#Int#> (var2,var3) */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (!var6) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 259);
exit(1);
}
var7 = var2 > var3;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "lib/standard/collection/array.nit", 461);
exit(1);
}
var8 = self->attrs[COLOR_array__ArraySet___array].val; /* _array on <self:ArraySet[Object]> */
if (var8 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _array", "lib/standard/collection/array.nit", 462);
exit(1);
}
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_abstract_collection__Collection__first]))(var8) /* first on <var8:Array[Object]>*/;
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArraySet#first for (self: Object): nullable Object */
val* VIRTUAL_array__ArraySet__first(val* self) {
val* var /* : nullable Object */;
val* var1 /* : Object */;
var1 = array__ArraySet__first(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArraySet#remove for (self: ArraySet[Object], Object) */
void array__ArraySet__remove(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
val* var_item /* var item: Object */;
val* var1 /* : Array[Object] */;
long var2 /* : Int */;
long var_i /* var i: Int */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
short int var9 /* : Bool */;
/* Covariant cast for argument 0 (item) <p0:Object> isa RemovableCollection#0 */
/* <p0:Object> isa RemovableCollection#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__RemovableCollection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 465);
exit(1);
}
var_item = p0;
var1 = self->attrs[COLOR_array__ArraySet___array].val; /* _array on <self:ArraySet[Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _array", "lib/standard/collection/array.nit", 467);
exit(1);
}
var2 = ((long (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__SequenceRead__index_of]))(var1, var_item) /* index_of on <var1:Array[Object]>*/;
var_i = var2;
var3 = 0;
{ /* Inline kernel#Int#>= (var_i,var3) */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (!var6) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
}
var9 = var_i >= var3;
var4 = var9;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
if (var4){
((void (*)(val*, long))(self->class->vft[COLOR_array__ArraySet__remove_at]))(self, var_i) /* remove_at on <self:ArraySet[Object]>*/;
} else {
}
RET_LABEL:;
}
/* method array#ArraySet#remove for (self: Object, nullable Object) */
void VIRTUAL_array__ArraySet__remove(val* self, val* p0) {
array__ArraySet__remove(self, p0);
RET_LABEL:;
}
/* method array#ArraySet#remove_all for (self: ArraySet[Object], Object) */
void array__ArraySet__remove_all(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
val* var_item /* var item: Object */;
/* Covariant cast for argument 0 (item) <p0:Object> isa RemovableCollection#0 */
/* <p0:Object> isa RemovableCollection#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__RemovableCollection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 471);
exit(1);
}
var_item = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_collection__RemovableCollection__remove]))(self, var_item) /* remove on <self:ArraySet[Object]>*/;
RET_LABEL:;
}
/* method array#ArraySet#remove_all for (self: Object, nullable Object) */
void VIRTUAL_array__ArraySet__remove_all(val* self, val* p0) {
array__ArraySet__remove_all(self, p0);
RET_LABEL:;
}
/* method array#ArraySet#clear for (self: ArraySet[Object]) */
void array__ArraySet__clear(val* self) {
val* var /* : Array[Object] */;
var = self->attrs[COLOR_array__ArraySet___array].val; /* _array on <self:ArraySet[Object]> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _array", "lib/standard/collection/array.nit", 473);
exit(1);
}
((void (*)(val*))(var->class->vft[COLOR_abstract_collection__RemovableCollection__clear]))(var) /* clear on <var:Array[Object]>*/;
RET_LABEL:;
}
/* method array#ArraySet#clear for (self: Object) */
void VIRTUAL_array__ArraySet__clear(val* self) {
array__ArraySet__clear(self);
RET_LABEL:;
}
/* method array#ArraySet#iterator for (self: ArraySet[Object]): Iterator[Object] */
val* array__ArraySet__iterator(val* self) {
val* var /* : Iterator[Object] */;
val* var1 /* : ArraySetIterator[Object] */;
val* var2 /* : Array[Object] */;
val* var3 /* : Iterator[nullable Object] */;
var1 = NEW_array__ArraySetIterator(self->type->resolution_table->types[COLOR_array__ArraySetIteratorarray__ArraySet_FT0]);
var2 = self->attrs[COLOR_array__ArraySet___array].val; /* _array on <self:ArraySet[Object]> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _array", "lib/standard/collection/array.nit", 475);
exit(1);
}
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__iterator]))(var2) /* iterator on <var2:Array[Object]>*/;
((void (*)(val*, val*))(var1->class->vft[COLOR_array__ArraySetIterator__init]))(var1, var3) /* init on <var1:ArraySetIterator[Object]>*/;
CHECK_NEW_array__ArraySetIterator(var1);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArraySet#iterator for (self: Object): Iterator[nullable Object] */
val* VIRTUAL_array__ArraySet__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : Iterator[Object] */;
var1 = array__ArraySet__iterator(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArraySet#enlarge for (self: ArraySet[Object], Int) */
void array__ArraySet__enlarge(val* self, long p0) {
long var_cap /* var cap: Int */;
val* var /* : Array[Object] */;
var_cap = p0;
var = self->attrs[COLOR_array__ArraySet___array].val; /* _array on <self:ArraySet[Object]> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _array", "lib/standard/collection/array.nit", 478);
exit(1);
}
((void (*)(val*, long))(var->class->vft[COLOR_array__AbstractArray__enlarge]))(var, var_cap) /* enlarge on <var:Array[Object]>*/;
RET_LABEL:;
}
/* method array#ArraySet#enlarge for (self: Object, Int) */
void VIRTUAL_array__ArraySet__enlarge(val* self, long p0) {
array__ArraySet__enlarge(self, p0);
RET_LABEL:;
}
/* method array#ArraySet#remove_at for (self: ArraySet[Object], Int) */
void array__ArraySet__remove_at(val* self, long p0) {
long var_i /* var i: Int */;
val* var /* : Array[Object] */;
val* var1 /* : Array[Object] */;
val* var2 /* : nullable Object */;
val* var3 /* : Array[Object] */;
val* var4 /* : nullable Object */;
var_i = p0;
var = self->attrs[COLOR_array__ArraySet___array].val; /* _array on <self:ArraySet[Object]> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _array", "lib/standard/collection/array.nit", 482);
exit(1);
}
var1 = self->attrs[COLOR_array__ArraySet___array].val; /* _array on <self:ArraySet[Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _array", "lib/standard/collection/array.nit", 482);
exit(1);
}
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__SequenceRead__last]))(var1) /* last on <var1:Array[Object]>*/;
((void (*)(val*, long, val*))(var->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var, var_i, var2) /* []= on <var:Array[Object]>*/;
var3 = self->attrs[COLOR_array__ArraySet___array].val; /* _array on <self:ArraySet[Object]> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _array", "lib/standard/collection/array.nit", 483);
exit(1);
}
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Sequence__pop]))(var3) /* pop on <var3:Array[Object]>*/;
var4;
RET_LABEL:;
}
/* method array#ArraySet#remove_at for (self: Object, Int) */
void VIRTUAL_array__ArraySet__remove_at(val* self, long p0) {
array__ArraySet__remove_at(self, p0);
RET_LABEL:;
}
/* method array#ArraySet#init for (self: ArraySet[Object]) */
void array__ArraySet__init(val* self) {
val* var /* : Array[Object] */;
var = NEW_array__Array(self->type->resolution_table->types[COLOR_array__Arrayarray__ArraySet_FT0]);
((void (*)(val*))(var->class->vft[COLOR_array__Array__init]))(var) /* init on <var:Array[Object]>*/;
CHECK_NEW_array__Array(var);
self->attrs[COLOR_array__ArraySet___array].val = var; /* _array on <self:ArraySet[Object]> */
RET_LABEL:;
}
/* method array#ArraySet#init for (self: Object) */
void VIRTUAL_array__ArraySet__init(val* self) {
array__ArraySet__init(self);
RET_LABEL:;
}
/* method array#ArraySet#with_capacity for (self: ArraySet[Object], Int) */
void array__ArraySet__with_capacity(val* self, long p0) {
long var_i /* var i: Int */;
val* var /* : Array[Object] */;
var_i = p0;
var = NEW_array__Array(self->type->resolution_table->types[COLOR_array__Arrayarray__ArraySet_FT0]);
((void (*)(val*, long))(var->class->vft[COLOR_array__Array__with_capacity]))(var, var_i) /* with_capacity on <var:Array[Object]>*/;
CHECK_NEW_array__Array(var);
self->attrs[COLOR_array__ArraySet___array].val = var; /* _array on <self:ArraySet[Object]> */
RET_LABEL:;
}
/* method array#ArraySet#with_capacity for (self: Object, Int) */
void VIRTUAL_array__ArraySet__with_capacity(val* self, long p0) {
array__ArraySet__with_capacity(self, p0);
RET_LABEL:;
}
/* method array#ArraySetIterator#is_ok for (self: ArraySetIterator[Object]): Bool */
short int array__ArraySetIterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : ArrayIterator[Object] */;
short int var2 /* : Bool */;
var1 = self->attrs[COLOR_array__ArraySetIterator___iter].val; /* _iter on <self:ArraySetIterator[Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _iter", "lib/standard/collection/array.nit", 497);
exit(1);
}
var2 = ((short int (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var1) /* is_ok on <var1:ArrayIterator[Object]>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArraySetIterator#is_ok for (self: Object): Bool */
short int VIRTUAL_array__ArraySetIterator__is_ok(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = array__ArraySetIterator__is_ok(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArraySetIterator#next for (self: ArraySetIterator[Object]) */
void array__ArraySetIterator__next(val* self) {
val* var /* : ArrayIterator[Object] */;
var = self->attrs[COLOR_array__ArraySetIterator___iter].val; /* _iter on <self:ArraySetIterator[Object]> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _iter", "lib/standard/collection/array.nit", 499);
exit(1);
}
((void (*)(val*))(var->class->vft[COLOR_abstract_collection__Iterator__next]))(var) /* next on <var:ArrayIterator[Object]>*/;
RET_LABEL:;
}
/* method array#ArraySetIterator#next for (self: Object) */
void VIRTUAL_array__ArraySetIterator__next(val* self) {
array__ArraySetIterator__next(self);
RET_LABEL:;
}
/* method array#ArraySetIterator#item for (self: ArraySetIterator[Object]): Object */
val* array__ArraySetIterator__item(val* self) {
val* var /* : Object */;
val* var1 /* : ArrayIterator[Object] */;
val* var2 /* : nullable Object */;
var1 = self->attrs[COLOR_array__ArraySetIterator___iter].val; /* _iter on <self:ArraySetIterator[Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _iter", "lib/standard/collection/array.nit", 501);
exit(1);
}
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__item]))(var1) /* item on <var1:ArrayIterator[Object]>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArraySetIterator#item for (self: Object): nullable Object */
val* VIRTUAL_array__ArraySetIterator__item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : Object */;
var1 = array__ArraySetIterator__item(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArraySetIterator#init for (self: ArraySetIterator[Object], ArrayIterator[Object]) */
void array__ArraySetIterator__init(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
val* var_iter /* var iter: ArrayIterator[Object] */;
/* Covariant cast for argument 0 (iter) <p0:ArrayIterator[Object]> isa ArrayIterator[ArraySetIterator#0] */
/* <p0:ArrayIterator[Object]> isa ArrayIterator[ArraySetIterator#0] */
type_struct = self->type->resolution_table->types[COLOR_array__ArrayIteratorarray__ArraySetIterator_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 503);
exit(1);
}
var_iter = p0;
self->attrs[COLOR_array__ArraySetIterator___iter].val = var_iter; /* _iter on <self:ArraySetIterator[Object]> */
RET_LABEL:;
}
/* method array#ArraySetIterator#init for (self: Object, ArrayIterator[Object]) */
void VIRTUAL_array__ArraySetIterator__init(val* self, val* p0) {
array__ArraySetIterator__init(self, p0);
RET_LABEL:;
}
/* method array#ArrayMap#[] for (self: ArrayMap[Object, nullable Object], Object): nullable Object */
val* array__ArrayMap___91d_93d(val* self, val* p0) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
val* var_key /* var key: Object */;
long var2 /* : Int */;
long var_i /* var i: Int */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
short int var9 /* : Bool */;
val* var10 /* : Array[Couple[Object, nullable Object]] */;
val* var11 /* : nullable Object */;
val* var12 /* : nullable Object */;
/* Covariant cast for argument 0 (key) <p0:Object> isa MapRead#0 */
/* <p0:Object> isa MapRead#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__MapRead_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 513);
exit(1);
}
var_key = p0;
var2 = ((long (*)(val*, val*))(self->class->vft[COLOR_array__ArrayMap__index]))(self, var_key) /* index on <self:ArrayMap[Object, nullable Object]>*/;
var_i = var2;
var3 = 0;
{ /* Inline kernel#Int#>= (var_i,var3) */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (!var6) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
}
var9 = var_i >= var3;
var4 = var9;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
if (var4){
var10 = self->attrs[COLOR_array__ArrayMap___items].val; /* _items on <self:ArrayMap[Object, nullable Object]> */
if (var10 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _items", "lib/standard/collection/array.nit", 518);
exit(1);
}
var11 = ((val* (*)(val*, long))(var10->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var10, var_i) /* [] on <var10:Array[Couple[Object, nullable Object]]>*/;
var12 = ((val* (*)(val*))(var11->class->vft[COLOR_abstract_collection__Couple__second]))(var11) /* second on <var11:nullable Object(Couple[Object, nullable Object])>*/;
var = var12;
goto RET_LABEL;
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "lib/standard/collection/array.nit", 520);
exit(1);
}
RET_LABEL:;
return var;
}
/* method array#ArrayMap#[] for (self: Object, Object): nullable Object */
val* VIRTUAL_array__ArrayMap___91d_93d(val* self, val* p0) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = array__ArrayMap___91d_93d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMap#[]= for (self: ArrayMap[Object, nullable Object], Object, nullable Object) */
void array__ArrayMap___91d_93d_61d(val* self, val* p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int var1 /* : Bool */;
int cltype2;
int idtype3;
const struct type* type_struct4;
short int is_nullable;
val* var_key /* var key: Object */;
val* var_item /* var item: nullable Object */;
long var5 /* : Int */;
long var_i /* var i: Int */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
short int var12 /* : Bool */;
val* var13 /* : Array[Couple[Object, nullable Object]] */;
val* var14 /* : nullable Object */;
val* var15 /* : Array[Couple[Object, nullable Object]] */;
val* var16 /* : Couple[Object, nullable Object] */;
/* Covariant cast for argument 0 (key) <p0:Object> isa Map#0 */
/* <p0:Object> isa Map#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Map_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 524);
exit(1);
}
/* Covariant cast for argument 1 (item) <p1:nullable Object> isa Map#1 */
/* <p1:nullable Object> isa Map#1 */
type_struct4 = self->type->resolution_table->types[COLOR_abstract_collection__Map_FT1];
cltype2 = type_struct4->color;
idtype3 = type_struct4->id;
is_nullable = type_struct4->is_nullable;
if(p1 == NULL) {
var1 = is_nullable;
} else {
if(cltype2 >= p1->type->table_size) {
var1 = 0;
} else {
var1 = p1->type->type_table[cltype2] == idtype3;
}
}
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 524);
exit(1);
}
var_key = p0;
var_item = p1;
var5 = ((long (*)(val*, val*))(self->class->vft[COLOR_array__ArrayMap__index]))(self, var_key) /* index on <self:ArrayMap[Object, nullable Object]>*/;
var_i = var5;
var6 = 0;
{ /* Inline kernel#Int#>= (var_i,var6) */
/* Covariant cast for argument 0 (i) <var6:Int> isa OTHER */
/* <var6:Int> isa OTHER */
var9 = 1; /* easy <var6:Int> isa OTHER*/
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
}
var12 = var_i >= var6;
var7 = var12;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
if (var7){
var13 = self->attrs[COLOR_array__ArrayMap___items].val; /* _items on <self:ArrayMap[Object, nullable Object]> */
if (var13 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _items", "lib/standard/collection/array.nit", 529);
exit(1);
}
var14 = ((val* (*)(val*, long))(var13->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var13, var_i) /* [] on <var13:Array[Couple[Object, nullable Object]]>*/;
((void (*)(val*, val*))(var14->class->vft[COLOR_abstract_collection__Couple__second_61d]))(var14, var_item) /* second= on <var14:nullable Object(Couple[Object, nullable Object])>*/;
} else {
var15 = self->attrs[COLOR_array__ArrayMap___items].val; /* _items on <self:ArrayMap[Object, nullable Object]> */
if (var15 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _items", "lib/standard/collection/array.nit", 531);
exit(1);
}
var16 = NEW_abstract_collection__Couple(self->type->resolution_table->types[COLOR_abstract_collection__Couplearray__ArrayMap_FT0array__ArrayMap_FT1]);
((void (*)(val*, val*, val*))(var16->class->vft[COLOR_abstract_collection__Couple__init]))(var16, var_key, var_item) /* init on <var16:Couple[Object, nullable Object]>*/;
CHECK_NEW_abstract_collection__Couple(var16);
((void (*)(val*, val*))(var15->class->vft[COLOR_abstract_collection__Sequence__push]))(var15, var16) /* push on <var15:Array[Couple[Object, nullable Object]]>*/;
}
RET_LABEL:;
}
/* method array#ArrayMap#[]= for (self: Object, Object, nullable Object) */
void VIRTUAL_array__ArrayMap___91d_93d_61d(val* self, val* p0, val* p1) {
array__ArrayMap___91d_93d_61d(self, p0, p1);
RET_LABEL:;
}
/* method array#ArrayMap#keys for (self: ArrayMap[Object, nullable Object]): ArrayMapKeys[Object, nullable Object] */
val* array__ArrayMap__keys(val* self) {
val* var /* : ArrayMapKeys[Object, nullable Object] */;
val* var1 /* : ArrayMapKeys[Object, nullable Object] */;
var1 = self->attrs[COLOR_array__ArrayMap___64dkeys].val; /* @keys on <self:ArrayMap[Object, nullable Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @keys", "lib/standard/collection/array.nit", 535);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMap#keys for (self: Object): Collection[Object] */
val* VIRTUAL_array__ArrayMap__keys(val* self) {
val* var /* : Collection[Object] */;
val* var1 /* : ArrayMapKeys[Object, nullable Object] */;
var1 = array__ArrayMap__keys(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMap#keys= for (self: ArrayMap[Object, nullable Object], ArrayMapKeys[Object, nullable Object]) */
void array__ArrayMap__keys_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
/* Covariant cast for argument 0 (keys) <p0:ArrayMapKeys[Object, nullable Object]> isa ArrayMapKeys[ArrayMap#0, ArrayMap#1] */
/* <p0:ArrayMapKeys[Object, nullable Object]> isa ArrayMapKeys[ArrayMap#0, ArrayMap#1] */
type_struct = self->type->resolution_table->types[COLOR_array__ArrayMapKeysarray__ArrayMap_FT0array__ArrayMap_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 535);
exit(1);
}
self->attrs[COLOR_array__ArrayMap___64dkeys].val = p0; /* @keys on <self:ArrayMap[Object, nullable Object]> */
RET_LABEL:;
}
/* method array#ArrayMap#keys= for (self: Object, ArrayMapKeys[Object, nullable Object]) */
void VIRTUAL_array__ArrayMap__keys_61d(val* self, val* p0) {
array__ArrayMap__keys_61d(self, p0);
RET_LABEL:;
}
/* method array#ArrayMap#values for (self: ArrayMap[Object, nullable Object]): ArrayMapValues[Object, nullable Object] */
val* array__ArrayMap__values(val* self) {
val* var /* : ArrayMapValues[Object, nullable Object] */;
val* var1 /* : ArrayMapValues[Object, nullable Object] */;
var1 = self->attrs[COLOR_array__ArrayMap___64dvalues].val; /* @values on <self:ArrayMap[Object, nullable Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @values", "lib/standard/collection/array.nit", 536);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMap#values for (self: Object): Collection[nullable Object] */
val* VIRTUAL_array__ArrayMap__values(val* self) {
val* var /* : Collection[nullable Object] */;
val* var1 /* : ArrayMapValues[Object, nullable Object] */;
var1 = array__ArrayMap__values(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMap#values= for (self: ArrayMap[Object, nullable Object], ArrayMapValues[Object, nullable Object]) */
void array__ArrayMap__values_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
/* Covariant cast for argument 0 (values) <p0:ArrayMapValues[Object, nullable Object]> isa ArrayMapValues[ArrayMap#0, ArrayMap#1] */
/* <p0:ArrayMapValues[Object, nullable Object]> isa ArrayMapValues[ArrayMap#0, ArrayMap#1] */
type_struct = self->type->resolution_table->types[COLOR_array__ArrayMapValuesarray__ArrayMap_FT0array__ArrayMap_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 536);
exit(1);
}
self->attrs[COLOR_array__ArrayMap___64dvalues].val = p0; /* @values on <self:ArrayMap[Object, nullable Object]> */
RET_LABEL:;
}
/* method array#ArrayMap#values= for (self: Object, ArrayMapValues[Object, nullable Object]) */
void VIRTUAL_array__ArrayMap__values_61d(val* self, val* p0) {
array__ArrayMap__values_61d(self, p0);
RET_LABEL:;
}
/* method array#ArrayMap#length for (self: ArrayMap[Object, nullable Object]): Int */
long array__ArrayMap__length(val* self) {
long var /* : Int */;
val* var1 /* : Array[Couple[Object, nullable Object]] */;
long var2 /* : Int */;
var1 = self->attrs[COLOR_array__ArrayMap___items].val; /* _items on <self:ArrayMap[Object, nullable Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _items", "lib/standard/collection/array.nit", 539);
exit(1);
}
var2 = ((long (*)(val*))(var1->class->vft[COLOR_abstract_collection__Collection__length]))(var1) /* length on <var1:Array[Couple[Object, nullable Object]]>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArrayMap#length for (self: Object): Int */
long VIRTUAL_array__ArrayMap__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = array__ArrayMap__length(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMap#iterator for (self: ArrayMap[Object, nullable Object]): CoupleMapIterator[Object, nullable Object] */
val* array__ArrayMap__iterator(val* self) {
val* var /* : CoupleMapIterator[Object, nullable Object] */;
val* var1 /* : CoupleMapIterator[Object, nullable Object] */;
val* var2 /* : Array[Couple[Object, nullable Object]] */;
val* var3 /* : Iterator[nullable Object] */;
var1 = NEW_abstract_collection__CoupleMapIterator(self->type->resolution_table->types[COLOR_abstract_collection__CoupleMapIteratorarray__ArrayMap_FT0array__ArrayMap_FT1]);
var2 = self->attrs[COLOR_array__ArrayMap___items].val; /* _items on <self:ArrayMap[Object, nullable Object]> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _items", "lib/standard/collection/array.nit", 541);
exit(1);
}
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__iterator]))(var2) /* iterator on <var2:Array[Couple[Object, nullable Object]]>*/;
((void (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__CoupleMapIterator__init]))(var1, var3) /* init on <var1:CoupleMapIterator[Object, nullable Object]>*/;
CHECK_NEW_abstract_collection__CoupleMapIterator(var1);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArrayMap#iterator for (self: Object): MapIterator[Object, nullable Object] */
val* VIRTUAL_array__ArrayMap__iterator(val* self) {
val* var /* : MapIterator[Object, nullable Object] */;
val* var1 /* : CoupleMapIterator[Object, nullable Object] */;
var1 = array__ArrayMap__iterator(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMap#is_empty for (self: ArrayMap[Object, nullable Object]): Bool */
short int array__ArrayMap__is_empty(val* self) {
short int var /* : Bool */;
val* var1 /* : Array[Couple[Object, nullable Object]] */;
short int var2 /* : Bool */;
var1 = self->attrs[COLOR_array__ArrayMap___items].val; /* _items on <self:ArrayMap[Object, nullable Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _items", "lib/standard/collection/array.nit", 543);
exit(1);
}
var2 = ((short int (*)(val*))(var1->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var1) /* is_empty on <var1:Array[Couple[Object, nullable Object]]>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArrayMap#is_empty for (self: Object): Bool */
short int VIRTUAL_array__ArrayMap__is_empty(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = array__ArrayMap__is_empty(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMap#clear for (self: ArrayMap[Object, nullable Object]) */
void array__ArrayMap__clear(val* self) {
val* var /* : Array[Couple[Object, nullable Object]] */;
var = self->attrs[COLOR_array__ArrayMap___items].val; /* _items on <self:ArrayMap[Object, nullable Object]> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _items", "lib/standard/collection/array.nit", 545);
exit(1);
}
((void (*)(val*))(var->class->vft[COLOR_abstract_collection__RemovableCollection__clear]))(var) /* clear on <var:Array[Couple[Object, nullable Object]]>*/;
RET_LABEL:;
}
/* method array#ArrayMap#clear for (self: Object) */
void VIRTUAL_array__ArrayMap__clear(val* self) {
array__ArrayMap__clear(self);
RET_LABEL:;
}
/* method array#ArrayMap#enlarge for (self: ArrayMap[Object, nullable Object], Int) */
void array__ArrayMap__enlarge(val* self, long p0) {
long var_cap /* var cap: Int */;
val* var /* : Array[Couple[Object, nullable Object]] */;
var_cap = p0;
var = self->attrs[COLOR_array__ArrayMap___items].val; /* _items on <self:ArrayMap[Object, nullable Object]> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _items", "lib/standard/collection/array.nit", 548);
exit(1);
}
((void (*)(val*, long))(var->class->vft[COLOR_array__AbstractArray__enlarge]))(var, var_cap) /* enlarge on <var:Array[Couple[Object, nullable Object]]>*/;
RET_LABEL:;
}
/* method array#ArrayMap#enlarge for (self: Object, Int) */
void VIRTUAL_array__ArrayMap__enlarge(val* self, long p0) {
array__ArrayMap__enlarge(self, p0);
RET_LABEL:;
}
/* method array#ArrayMap#couple_at for (self: ArrayMap[Object, nullable Object], Object): nullable Couple[Object, nullable Object] */
val* array__ArrayMap__couple_at(val* self, val* p0) {
val* var /* : nullable Couple[Object, nullable Object] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
val* var_key /* var key: Object */;
long var2 /* : Int */;
long var_i /* var i: Int */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
short int var9 /* : Bool */;
val* var10 /* : Array[Couple[Object, nullable Object]] */;
val* var11 /* : nullable Object */;
val* var12 /* : null */;
/* Covariant cast for argument 0 (key) <p0:Object> isa CoupleMap#0 */
/* <p0:Object> isa CoupleMap#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__CoupleMap_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 550);
exit(1);
}
var_key = p0;
var2 = ((long (*)(val*, val*))(self->class->vft[COLOR_array__ArrayMap__index]))(self, var_key) /* index on <self:ArrayMap[Object, nullable Object]>*/;
var_i = var2;
var3 = 0;
{ /* Inline kernel#Int#>= (var_i,var3) */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (!var6) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
}
var9 = var_i >= var3;
var4 = var9;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
if (var4){
var10 = self->attrs[COLOR_array__ArrayMap___items].val; /* _items on <self:ArrayMap[Object, nullable Object]> */
if (var10 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _items", "lib/standard/collection/array.nit", 554);
exit(1);
}
var11 = ((val* (*)(val*, long))(var10->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var10, var_i) /* [] on <var10:Array[Couple[Object, nullable Object]]>*/;
var = var11;
goto RET_LABEL;
} else {
var12 = NULL;
var = var12;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method array#ArrayMap#couple_at for (self: Object, Object): nullable Couple[Object, nullable Object] */
val* VIRTUAL_array__ArrayMap__couple_at(val* self, val* p0) {
val* var /* : nullable Couple[Object, nullable Object] */;
val* var1 /* : nullable Couple[Object, nullable Object] */;
var1 = array__ArrayMap__couple_at(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMap#remove_at_index for (self: ArrayMap[Object, nullable Object], Int) */
void array__ArrayMap__remove_at_index(val* self, long p0) {
long var_i /* var i: Int */;
val* var /* : Array[Couple[Object, nullable Object]] */;
val* var1 /* : Array[Couple[Object, nullable Object]] */;
val* var2 /* : nullable Object */;
val* var3 /* : Array[Couple[Object, nullable Object]] */;
val* var4 /* : nullable Object */;
var_i = p0;
var = self->attrs[COLOR_array__ArrayMap___items].val; /* _items on <self:ArrayMap[Object, nullable Object]> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _items", "lib/standard/collection/array.nit", 566);
exit(1);
}
var1 = self->attrs[COLOR_array__ArrayMap___items].val; /* _items on <self:ArrayMap[Object, nullable Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _items", "lib/standard/collection/array.nit", 566);
exit(1);
}
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__SequenceRead__last]))(var1) /* last on <var1:Array[Couple[Object, nullable Object]]>*/;
((void (*)(val*, long, val*))(var->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var, var_i, var2) /* []= on <var:Array[Couple[Object, nullable Object]]>*/;
var3 = self->attrs[COLOR_array__ArrayMap___items].val; /* _items on <self:ArrayMap[Object, nullable Object]> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _items", "lib/standard/collection/array.nit", 567);
exit(1);
}
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Sequence__pop]))(var3) /* pop on <var3:Array[Couple[Object, nullable Object]]>*/;
var4;
RET_LABEL:;
}
/* method array#ArrayMap#remove_at_index for (self: Object, Int) */
void VIRTUAL_array__ArrayMap__remove_at_index(val* self, long p0) {
array__ArrayMap__remove_at_index(self, p0);
RET_LABEL:;
}
/* method array#ArrayMap#index for (self: ArrayMap[Object, nullable Object], Object): Int */
long array__ArrayMap__index(val* self, val* p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
val* var_key /* var key: Object */;
long var2 /* : Int */;
long var_l /* var l: Int */;
short int var3 /* : Bool */;
val* var4 /* : Array[Couple[Object, nullable Object]] */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
short int var11 /* : Bool */;
short int var_ /* var : Bool */;
val* var12 /* : Array[Couple[Object, nullable Object]] */;
val* var13 /* : nullable Object */;
val* var14 /* : nullable Object */;
short int var15 /* : Bool */;
long var16 /* : Int */;
long var_i /* var i: Int */;
val* var17 /* : Array[Couple[Object, nullable Object]] */;
long var18 /* : Int */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
short int var24 /* : Bool */;
val* var25 /* : Array[Couple[Object, nullable Object]] */;
val* var26 /* : nullable Object */;
val* var27 /* : nullable Object */;
short int var28 /* : Bool */;
long var29 /* : Int */;
long var30 /* : Int */;
long var32 /* : Int */;
long var33 /* : Int */;
long var34 /* : Int */;
long var36 /* : Int */;
/* Covariant cast for argument 0 (key) <p0:Object> isa ArrayMap#0 */
/* <p0:Object> isa ArrayMap#0 */
type_struct = self->type->resolution_table->types[COLOR_array__ArrayMap_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 573);
exit(1);
}
var_key = p0;
var2 = self->attrs[COLOR_array__ArrayMap___last_index].l; /* _last_index on <self:ArrayMap[Object, nullable Object]> */
var_l = var2;
var4 = self->attrs[COLOR_array__ArrayMap___items].val; /* _items on <self:ArrayMap[Object, nullable Object]> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _items", "lib/standard/collection/array.nit", 578);
exit(1);
}
var5 = ((long (*)(val*))(var4->class->vft[COLOR_abstract_collection__Collection__length]))(var4) /* length on <var4:Array[Couple[Object, nullable Object]]>*/;
{ /* Inline kernel#Int#< (var_l,var5) */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var8 = 1; /* easy <var5:Int> isa OTHER*/
if (!var8) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var11 = var_l < var5;
var6 = var11;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var_ = var6;
if (var6){
var12 = self->attrs[COLOR_array__ArrayMap___items].val; /* _items on <self:ArrayMap[Object, nullable Object]> */
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _items", "lib/standard/collection/array.nit", 578);
exit(1);
}
var13 = ((val* (*)(val*, long))(var12->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var12, var_l) /* [] on <var12:Array[Couple[Object, nullable Object]]>*/;
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_abstract_collection__Couple__first]))(var13) /* first on <var13:nullable Object(Couple[Object, nullable Object])>*/;
var15 = ((short int (*)(val*, val*))(var14->class->vft[COLOR_kernel__Object___61d_61d]))(var14, var_key) /* == on <var14:nullable Object(Object)>*/;
var3 = var15;
} else {
var3 = var_;
}
if (var3){
var = var_l;
goto RET_LABEL;
} else {
}
var16 = 0;
var_i = var16;
for(;;) {
var17 = self->attrs[COLOR_array__ArrayMap___items].val; /* _items on <self:ArrayMap[Object, nullable Object]> */
if (var17 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _items", "lib/standard/collection/array.nit", 581);
exit(1);
}
var18 = ((long (*)(val*))(var17->class->vft[COLOR_abstract_collection__Collection__length]))(var17) /* length on <var17:Array[Couple[Object, nullable Object]]>*/;
{ /* Inline kernel#Int#< (var_i,var18) */
/* Covariant cast for argument 0 (i) <var18:Int> isa OTHER */
/* <var18:Int> isa OTHER */
var21 = 1; /* easy <var18:Int> isa OTHER*/
if (!var21) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var24 = var_i < var18;
var19 = var24;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
if (!var19) break;
var25 = self->attrs[COLOR_array__ArrayMap___items].val; /* _items on <self:ArrayMap[Object, nullable Object]> */
if (var25 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _items", "lib/standard/collection/array.nit", 582);
exit(1);
}
var26 = ((val* (*)(val*, long))(var25->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var25, var_i) /* [] on <var25:Array[Couple[Object, nullable Object]]>*/;
var27 = ((val* (*)(val*))(var26->class->vft[COLOR_abstract_collection__Couple__first]))(var26) /* first on <var26:nullable Object(Couple[Object, nullable Object])>*/;
var28 = ((short int (*)(val*, val*))(var27->class->vft[COLOR_kernel__Object___61d_61d]))(var27, var_key) /* == on <var27:nullable Object(Object)>*/;
if (var28){
self->attrs[COLOR_array__ArrayMap___last_index].l = var_i; /* _last_index on <self:ArrayMap[Object, nullable Object]> */
var = var_i;
goto RET_LABEL;
} else {
}
var29 = 1;
{ /* Inline kernel#Int#+ (var_i,var29) */
var32 = var_i + var29;
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
var_i = var30;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var33 = 1;
{ /* Inline kernel#Int#unary - (var33) */
var36 = -var33;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
var = var34;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArrayMap#index for (self: Object, Object): Int */
long VIRTUAL_array__ArrayMap__index(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = array__ArrayMap__index(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMap#init for (self: ArrayMap[Object, nullable Object]) */
void array__ArrayMap__init(val* self) {
val* var /* : Array[Couple[Object, nullable Object]] */;
var = NEW_array__Array(self->type->resolution_table->types[COLOR_array__Arrayabstract_collection__Couplearray__ArrayMap_FT0array__ArrayMap_FT1]);
((void (*)(val*))(var->class->vft[COLOR_array__Array__init]))(var) /* init on <var:Array[Couple[Object, nullable Object]]>*/;
CHECK_NEW_array__Array(var);
self->attrs[COLOR_array__ArrayMap___items].val = var; /* _items on <self:ArrayMap[Object, nullable Object]> */
RET_LABEL:;
}
/* method array#ArrayMap#init for (self: Object) */
void VIRTUAL_array__ArrayMap__init(val* self) {
array__ArrayMap__init(self);
RET_LABEL:;
}
/* method array#ArrayMapKeys#map for (self: ArrayMapKeys[Object, nullable Object]): ArrayMap[Object, nullable Object] */
val* array__ArrayMapKeys__map(val* self) {
val* var /* : ArrayMap[Object, nullable Object] */;
val* var1 /* : ArrayMap[Object, nullable Object] */;
var1 = self->attrs[COLOR_array__ArrayMapKeys___64dmap].val; /* @map on <self:ArrayMapKeys[Object, nullable Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @map", "lib/standard/collection/array.nit", 600);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMapKeys#map for (self: Object): ArrayMap[Object, nullable Object] */
val* VIRTUAL_array__ArrayMapKeys__map(val* self) {
val* var /* : ArrayMap[Object, nullable Object] */;
val* var1 /* : ArrayMap[Object, nullable Object] */;
var1 = array__ArrayMapKeys__map(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMapKeys#map= for (self: ArrayMapKeys[Object, nullable Object], ArrayMap[Object, nullable Object]) */
void array__ArrayMapKeys__map_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
/* Covariant cast for argument 0 (map) <p0:ArrayMap[Object, nullable Object]> isa ArrayMap[ArrayMapKeys#0, ArrayMapKeys#1] */
/* <p0:ArrayMap[Object, nullable Object]> isa ArrayMap[ArrayMapKeys#0, ArrayMapKeys#1] */
type_struct = self->type->resolution_table->types[COLOR_array__ArrayMaparray__ArrayMapKeys_FT0array__ArrayMapKeys_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 600);
exit(1);
}
self->attrs[COLOR_array__ArrayMapKeys___64dmap].val = p0; /* @map on <self:ArrayMapKeys[Object, nullable Object]> */
RET_LABEL:;
}
/* method array#ArrayMapKeys#map= for (self: Object, ArrayMap[Object, nullable Object]) */
void VIRTUAL_array__ArrayMapKeys__map_61d(val* self, val* p0) {
array__ArrayMapKeys__map_61d(self, p0);
RET_LABEL:;
}
/* method array#ArrayMapKeys#count for (self: ArrayMapKeys[Object, nullable Object], Object): Int */
long array__ArrayMapKeys__count(val* self, val* p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
val* var_k /* var k: Object */;
short int var2 /* : Bool */;
long var3 /* : Int */;
long var4 /* : Int */;
/* Covariant cast for argument 0 (k) <p0:Object> isa Collection#0 */
/* <p0:Object> isa Collection#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Collection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 602);
exit(1);
}
var_k = p0;
var2 = ((short int (*)(val*, val*))(self->class->vft[COLOR_abstract_collection__Collection__has]))(self, var_k) /* has on <self:ArrayMapKeys[Object, nullable Object]>*/;
if (var2){
var3 = 1;
var = var3;
goto RET_LABEL;
} else {
var4 = 0;
var = var4;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method array#ArrayMapKeys#count for (self: Object, nullable Object): Int */
long VIRTUAL_array__ArrayMapKeys__count(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = array__ArrayMapKeys__count(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMapKeys#first for (self: ArrayMapKeys[Object, nullable Object]): Object */
val* array__ArrayMapKeys__first(val* self) {
val* var /* : Object */;
val* var1 /* : ArrayMap[Object, nullable Object] */;
val* var2 /* : Array[Couple[Object, nullable Object]] */;
val* var3 /* : nullable Object */;
val* var4 /* : nullable Object */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_array__ArrayMapKeys__map]))(self) /* map on <self:ArrayMapKeys[Object, nullable Object]>*/;
var2 = var1->attrs[COLOR_array__ArrayMap___items].val; /* _items on <var1:ArrayMap[Object, nullable Object]> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _items", "lib/standard/collection/array.nit", 603);
exit(1);
}
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__first]))(var2) /* first on <var2:Array[Couple[Object, nullable Object]]>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Couple__first]))(var3) /* first on <var3:nullable Object(Couple[Object, nullable Object])>*/;
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArrayMapKeys#first for (self: Object): nullable Object */
val* VIRTUAL_array__ArrayMapKeys__first(val* self) {
val* var /* : nullable Object */;
val* var1 /* : Object */;
var1 = array__ArrayMapKeys__first(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMapKeys#has for (self: ArrayMapKeys[Object, nullable Object], Object): Bool */
short int array__ArrayMapKeys__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
val* var_k /* var k: Object */;
val* var2 /* : ArrayMap[Object, nullable Object] */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
short int var10 /* : Bool */;
/* Covariant cast for argument 0 (k) <p0:Object> isa Collection#0 */
/* <p0:Object> isa Collection#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Collection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 604);
exit(1);
}
var_k = p0;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_array__ArrayMapKeys__map]))(self) /* map on <self:ArrayMapKeys[Object, nullable Object]>*/;
var3 = ((long (*)(val*, val*))(var2->class->vft[COLOR_array__ArrayMap__index]))(var2, var_k) /* index on <var2:ArrayMap[Object, nullable Object]>*/;
var4 = 0;
{ /* Inline kernel#Int#>= (var3,var4) */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var7 = 1; /* easy <var4:Int> isa OTHER*/
if (!var7) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
}
var10 = var3 >= var4;
var5 = var10;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArrayMapKeys#has for (self: Object, nullable Object): Bool */
short int VIRTUAL_array__ArrayMapKeys__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = array__ArrayMapKeys__has(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMapKeys#has_only for (self: ArrayMapKeys[Object, nullable Object], Object): Bool */
short int array__ArrayMapKeys__has_only(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
val* var_k /* var k: Object */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var_ /* var : Bool */;
long var5 /* : Int */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
short int var_10 /* var : Bool */;
short int var11 /* : Bool */;
/* Covariant cast for argument 0 (k) <p0:Object> isa Collection#0 */
/* <p0:Object> isa Collection#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__Collection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 605);
exit(1);
}
var_k = p0;
var4 = ((short int (*)(val*, val*))(self->class->vft[COLOR_abstract_collection__Collection__has]))(self, var_k) /* has on <self:ArrayMapKeys[Object, nullable Object]>*/;
var_ = var4;
if (var4){
var5 = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:ArrayMapKeys[Object, nullable Object]>*/;
var6 = 1;
{ /* Inline kernel#Int#== (var5,var6) */
var9 = var5 == var6;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var3 = var7;
} else {
var3 = var_;
}
var_10 = var3;
if (var3){
var2 = var_10;
} else {
var11 = ((short int (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__is_empty]))(self) /* is_empty on <self:ArrayMapKeys[Object, nullable Object]>*/;
var2 = var11;
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArrayMapKeys#has_only for (self: Object, nullable Object): Bool */
short int VIRTUAL_array__ArrayMapKeys__has_only(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = array__ArrayMapKeys__has_only(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMapKeys#is_empty for (self: ArrayMapKeys[Object, nullable Object]): Bool */
short int array__ArrayMapKeys__is_empty(val* self) {
short int var /* : Bool */;
val* var1 /* : ArrayMap[Object, nullable Object] */;
short int var2 /* : Bool */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_array__ArrayMapKeys__map]))(self) /* map on <self:ArrayMapKeys[Object, nullable Object]>*/;
var2 = ((short int (*)(val*))(var1->class->vft[COLOR_abstract_collection__MapRead__is_empty]))(var1) /* is_empty on <var1:ArrayMap[Object, nullable Object]>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArrayMapKeys#is_empty for (self: Object): Bool */
short int VIRTUAL_array__ArrayMapKeys__is_empty(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = array__ArrayMapKeys__is_empty(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMapKeys#length for (self: ArrayMapKeys[Object, nullable Object]): Int */
long array__ArrayMapKeys__length(val* self) {
long var /* : Int */;
val* var1 /* : ArrayMap[Object, nullable Object] */;
long var2 /* : Int */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_array__ArrayMapKeys__map]))(self) /* map on <self:ArrayMapKeys[Object, nullable Object]>*/;
var2 = ((long (*)(val*))(var1->class->vft[COLOR_abstract_collection__MapRead__length]))(var1) /* length on <var1:ArrayMap[Object, nullable Object]>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArrayMapKeys#length for (self: Object): Int */
long VIRTUAL_array__ArrayMapKeys__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = array__ArrayMapKeys__length(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMapKeys#iterator for (self: ArrayMapKeys[Object, nullable Object]): Iterator[Object] */
val* array__ArrayMapKeys__iterator(val* self) {
val* var /* : Iterator[Object] */;
val* var1 /* : MapKeysIterator[Object, nullable Object] */;
val* var2 /* : ArrayMap[Object, nullable Object] */;
val* var3 /* : MapIterator[Object, nullable Object] */;
var1 = NEW_abstract_collection__MapKeysIterator(self->type->resolution_table->types[COLOR_abstract_collection__MapKeysIteratorarray__ArrayMapKeys_FT0array__ArrayMapKeys_FT1]);
var2 = ((val* (*)(val*))(self->class->vft[COLOR_array__ArrayMapKeys__map]))(self) /* map on <self:ArrayMapKeys[Object, nullable Object]>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__MapRead__iterator]))(var2) /* iterator on <var2:ArrayMap[Object, nullable Object]>*/;
((void (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__MapKeysIterator__init]))(var1, var3) /* init on <var1:MapKeysIterator[Object, nullable Object]>*/;
CHECK_NEW_abstract_collection__MapKeysIterator(var1);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArrayMapKeys#iterator for (self: Object): Iterator[nullable Object] */
val* VIRTUAL_array__ArrayMapKeys__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : Iterator[Object] */;
var1 = array__ArrayMapKeys__iterator(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMapKeys#clear for (self: ArrayMapKeys[Object, nullable Object]) */
void array__ArrayMapKeys__clear(val* self) {
val* var /* : ArrayMap[Object, nullable Object] */;
var = ((val* (*)(val*))(self->class->vft[COLOR_array__ArrayMapKeys__map]))(self) /* map on <self:ArrayMapKeys[Object, nullable Object]>*/;
((void (*)(val*))(var->class->vft[COLOR_abstract_collection__Map__clear]))(var) /* clear on <var:ArrayMap[Object, nullable Object]>*/;
RET_LABEL:;
}
/* method array#ArrayMapKeys#clear for (self: Object) */
void VIRTUAL_array__ArrayMapKeys__clear(val* self) {
array__ArrayMapKeys__clear(self);
RET_LABEL:;
}
/* method array#ArrayMapKeys#remove for (self: ArrayMapKeys[Object, nullable Object], Object) */
void array__ArrayMapKeys__remove(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
val* var_key /* var key: Object */;
val* var1 /* : ArrayMap[Object, nullable Object] */;
long var2 /* : Int */;
long var_i /* var i: Int */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
short int var9 /* : Bool */;
val* var10 /* : ArrayMap[Object, nullable Object] */;
/* Covariant cast for argument 0 (key) <p0:Object> isa RemovableCollection#0 */
/* <p0:Object> isa RemovableCollection#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__RemovableCollection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 610);
exit(1);
}
var_key = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_array__ArrayMapKeys__map]))(self) /* map on <self:ArrayMapKeys[Object, nullable Object]>*/;
var2 = ((long (*)(val*, val*))(var1->class->vft[COLOR_array__ArrayMap__index]))(var1, var_key) /* index on <var1:ArrayMap[Object, nullable Object]>*/;
var_i = var2;
var3 = 0;
{ /* Inline kernel#Int#>= (var_i,var3) */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (!var6) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
}
var9 = var_i >= var3;
var4 = var9;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
if (var4){
var10 = ((val* (*)(val*))(self->class->vft[COLOR_array__ArrayMapKeys__map]))(self) /* map on <self:ArrayMapKeys[Object, nullable Object]>*/;
((void (*)(val*, long))(var10->class->vft[COLOR_array__ArrayMap__remove_at_index]))(var10, var_i) /* remove_at_index on <var10:ArrayMap[Object, nullable Object]>*/;
} else {
}
RET_LABEL:;
}
/* method array#ArrayMapKeys#remove for (self: Object, nullable Object) */
void VIRTUAL_array__ArrayMapKeys__remove(val* self, val* p0) {
array__ArrayMapKeys__remove(self, p0);
RET_LABEL:;
}
/* method array#ArrayMapKeys#remove_all for (self: ArrayMapKeys[Object, nullable Object], Object) */
void array__ArrayMapKeys__remove_all(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
val* var_key /* var key: Object */;
/* Covariant cast for argument 0 (key) <p0:Object> isa RemovableCollection#0 */
/* <p0:Object> isa RemovableCollection#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__RemovableCollection_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 615);
exit(1);
}
var_key = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_abstract_collection__RemovableCollection__remove]))(self, var_key) /* remove on <self:ArrayMapKeys[Object, nullable Object]>*/;
RET_LABEL:;
}
/* method array#ArrayMapKeys#remove_all for (self: Object, nullable Object) */
void VIRTUAL_array__ArrayMapKeys__remove_all(val* self, val* p0) {
array__ArrayMapKeys__remove_all(self, p0);
RET_LABEL:;
}
/* method array#ArrayMapKeys#init for (self: ArrayMapKeys[Object, nullable Object], ArrayMap[Object, nullable Object]) */
void array__ArrayMapKeys__init(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
/* Covariant cast for argument 0 (map) <p0:ArrayMap[Object, nullable Object]> isa ArrayMap[ArrayMapKeys#0, ArrayMapKeys#1] */
/* <p0:ArrayMap[Object, nullable Object]> isa ArrayMap[ArrayMapKeys#0, ArrayMapKeys#1] */
type_struct = self->type->resolution_table->types[COLOR_array__ArrayMaparray__ArrayMapKeys_FT0array__ArrayMapKeys_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 598);
exit(1);
}
self->attrs[COLOR_array__ArrayMapKeys___64dmap].val = p0; /* @map on <self:ArrayMapKeys[Object, nullable Object]> */
RET_LABEL:;
}
/* method array#ArrayMapKeys#init for (self: Object, ArrayMap[Object, nullable Object]) */
void VIRTUAL_array__ArrayMapKeys__init(val* self, val* p0) {
array__ArrayMapKeys__init(self, p0);
RET_LABEL:;
}
/* method array#ArrayMapValues#map for (self: ArrayMapValues[Object, nullable Object]): ArrayMap[Object, nullable Object] */
val* array__ArrayMapValues__map(val* self) {
val* var /* : ArrayMap[Object, nullable Object] */;
val* var1 /* : ArrayMap[Object, nullable Object] */;
var1 = self->attrs[COLOR_array__ArrayMapValues___64dmap].val; /* @map on <self:ArrayMapValues[Object, nullable Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @map", "lib/standard/collection/array.nit", 620);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMapValues#map for (self: Object): ArrayMap[Object, nullable Object] */
val* VIRTUAL_array__ArrayMapValues__map(val* self) {
val* var /* : ArrayMap[Object, nullable Object] */;
val* var1 /* : ArrayMap[Object, nullable Object] */;
var1 = array__ArrayMapValues__map(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMapValues#map= for (self: ArrayMapValues[Object, nullable Object], ArrayMap[Object, nullable Object]) */
void array__ArrayMapValues__map_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
/* Covariant cast for argument 0 (map) <p0:ArrayMap[Object, nullable Object]> isa ArrayMap[ArrayMapValues#0, ArrayMapValues#1] */
/* <p0:ArrayMap[Object, nullable Object]> isa ArrayMap[ArrayMapValues#0, ArrayMapValues#1] */
type_struct = self->type->resolution_table->types[COLOR_array__ArrayMaparray__ArrayMapValues_FT0array__ArrayMapValues_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 620);
exit(1);
}
self->attrs[COLOR_array__ArrayMapValues___64dmap].val = p0; /* @map on <self:ArrayMapValues[Object, nullable Object]> */
RET_LABEL:;
}
/* method array#ArrayMapValues#map= for (self: Object, ArrayMap[Object, nullable Object]) */
void VIRTUAL_array__ArrayMapValues__map_61d(val* self, val* p0) {
array__ArrayMapValues__map_61d(self, p0);
RET_LABEL:;
}
/* method array#ArrayMapValues#first for (self: ArrayMapValues[Object, nullable Object]): nullable Object */
val* array__ArrayMapValues__first(val* self) {
val* var /* : nullable Object */;
val* var1 /* : ArrayMap[Object, nullable Object] */;
val* var2 /* : Array[Couple[Object, nullable Object]] */;
val* var3 /* : nullable Object */;
val* var4 /* : nullable Object */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_array__ArrayMapValues__map]))(self) /* map on <self:ArrayMapValues[Object, nullable Object]>*/;
var2 = var1->attrs[COLOR_array__ArrayMap___items].val; /* _items on <var1:ArrayMap[Object, nullable Object]> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _items", "lib/standard/collection/array.nit", 622);
exit(1);
}
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__first]))(var2) /* first on <var2:Array[Couple[Object, nullable Object]]>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Couple__second]))(var3) /* second on <var3:nullable Object(Couple[Object, nullable Object])>*/;
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArrayMapValues#first for (self: Object): nullable Object */
val* VIRTUAL_array__ArrayMapValues__first(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = array__ArrayMapValues__first(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMapValues#is_empty for (self: ArrayMapValues[Object, nullable Object]): Bool */
short int array__ArrayMapValues__is_empty(val* self) {
short int var /* : Bool */;
val* var1 /* : ArrayMap[Object, nullable Object] */;
short int var2 /* : Bool */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_array__ArrayMapValues__map]))(self) /* map on <self:ArrayMapValues[Object, nullable Object]>*/;
var2 = ((short int (*)(val*))(var1->class->vft[COLOR_abstract_collection__MapRead__is_empty]))(var1) /* is_empty on <var1:ArrayMap[Object, nullable Object]>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArrayMapValues#is_empty for (self: Object): Bool */
short int VIRTUAL_array__ArrayMapValues__is_empty(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = array__ArrayMapValues__is_empty(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMapValues#length for (self: ArrayMapValues[Object, nullable Object]): Int */
long array__ArrayMapValues__length(val* self) {
long var /* : Int */;
val* var1 /* : ArrayMap[Object, nullable Object] */;
long var2 /* : Int */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_array__ArrayMapValues__map]))(self) /* map on <self:ArrayMapValues[Object, nullable Object]>*/;
var2 = ((long (*)(val*))(var1->class->vft[COLOR_abstract_collection__MapRead__length]))(var1) /* length on <var1:ArrayMap[Object, nullable Object]>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArrayMapValues#length for (self: Object): Int */
long VIRTUAL_array__ArrayMapValues__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = array__ArrayMapValues__length(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMapValues#iterator for (self: ArrayMapValues[Object, nullable Object]): Iterator[nullable Object] */
val* array__ArrayMapValues__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : MapValuesIterator[Object, nullable Object] */;
val* var2 /* : ArrayMap[Object, nullable Object] */;
val* var3 /* : MapIterator[Object, nullable Object] */;
var1 = NEW_abstract_collection__MapValuesIterator(self->type->resolution_table->types[COLOR_abstract_collection__MapValuesIteratorarray__ArrayMapValues_FT0array__ArrayMapValues_FT1]);
var2 = ((val* (*)(val*))(self->class->vft[COLOR_array__ArrayMapValues__map]))(self) /* map on <self:ArrayMapValues[Object, nullable Object]>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__MapRead__iterator]))(var2) /* iterator on <var2:ArrayMap[Object, nullable Object]>*/;
((void (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__MapValuesIterator__init]))(var1, var3) /* init on <var1:MapValuesIterator[Object, nullable Object]>*/;
CHECK_NEW_abstract_collection__MapValuesIterator(var1);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArrayMapValues#iterator for (self: Object): Iterator[nullable Object] */
val* VIRTUAL_array__ArrayMapValues__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : Iterator[nullable Object] */;
var1 = array__ArrayMapValues__iterator(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMapValues#has for (self: ArrayMapValues[Object, nullable Object], nullable Object): Bool */
short int array__ArrayMapValues__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
val* var_item /* var item: nullable Object */;
val* var2 /* : ArrayMap[Object, nullable Object] */;
val* var3 /* : Array[Couple[Object, nullable Object]] */;
val* var4 /* : Iterator[nullable Object] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_i /* var i: Couple[Object, nullable Object] */;
val* var7 /* : nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa Collection#0 */
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 627);
exit(1);
}
var_item = p0;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_array__ArrayMapValues__map]))(self) /* map on <self:ArrayMapValues[Object, nullable Object]>*/;
var3 = var2->attrs[COLOR_array__ArrayMap___items].val; /* _items on <var2:ArrayMap[Object, nullable Object]> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _items", "lib/standard/collection/array.nit", 630);
exit(1);
}
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Collection__iterator]))(var3) /* iterator on <var3:Array[Couple[Object, nullable Object]]>*/;
for(;;) {
var5 = ((short int (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var4) /* is_ok on <var4:Iterator[nullable Object]>*/;
if(!var5) break;
var6 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__item]))(var4) /* item on <var4:Iterator[nullable Object]>*/;
var_i = var6;
var7 = ((val* (*)(val*))(var_i->class->vft[COLOR_abstract_collection__Couple__second]))(var_i) /* second on <var_i:Couple[Object, nullable Object]>*/;
if (var7 == NULL) {
var8 = (var_item == NULL);
} else {
var8 = ((short int (*)(val*, val*))(var7->class->vft[COLOR_kernel__Object___61d_61d]))(var7, var_item) /* == on <var7:nullable Object>*/;
}
if (var8){
var9 = 1;
var = var9;
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__next]))(var4) /* next on <var4:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var10 = 0;
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArrayMapValues#has for (self: Object, nullable Object): Bool */
short int VIRTUAL_array__ArrayMapValues__has(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = array__ArrayMapValues__has(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMapValues#has_only for (self: ArrayMapValues[Object, nullable Object], nullable Object): Bool */
short int array__ArrayMapValues__has_only(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
val* var_item /* var item: nullable Object */;
val* var2 /* : ArrayMap[Object, nullable Object] */;
val* var3 /* : Array[Couple[Object, nullable Object]] */;
val* var4 /* : Iterator[nullable Object] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_i /* var i: Couple[Object, nullable Object] */;
val* var7 /* : nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa Collection#0 */
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 634);
exit(1);
}
var_item = p0;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_array__ArrayMapValues__map]))(self) /* map on <self:ArrayMapValues[Object, nullable Object]>*/;
var3 = var2->attrs[COLOR_array__ArrayMap___items].val; /* _items on <var2:ArrayMap[Object, nullable Object]> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _items", "lib/standard/collection/array.nit", 637);
exit(1);
}
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Collection__iterator]))(var3) /* iterator on <var3:Array[Couple[Object, nullable Object]]>*/;
for(;;) {
var5 = ((short int (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var4) /* is_ok on <var4:Iterator[nullable Object]>*/;
if(!var5) break;
var6 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__item]))(var4) /* item on <var4:Iterator[nullable Object]>*/;
var_i = var6;
var7 = ((val* (*)(val*))(var_i->class->vft[COLOR_abstract_collection__Couple__second]))(var_i) /* second on <var_i:Couple[Object, nullable Object]>*/;
if (var7 == NULL) {
var8 = (var_item != NULL);
} else {
var8 = ((short int (*)(val*, val*))(var7->class->vft[COLOR_kernel__Object___33d_61d]))(var7, var_item) /* != on <var7:nullable Object>*/;
}
if (var8){
var9 = 0;
var = var9;
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__next]))(var4) /* next on <var4:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var10 = 1;
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArrayMapValues#has_only for (self: Object, nullable Object): Bool */
short int VIRTUAL_array__ArrayMapValues__has_only(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = array__ArrayMapValues__has_only(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMapValues#count for (self: ArrayMapValues[Object, nullable Object], nullable Object): Int */
long array__ArrayMapValues__count(val* self, val* p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
val* var_item /* var item: nullable Object */;
long var2 /* : Int */;
long var_nb /* var nb: Int */;
val* var3 /* : ArrayMap[Object, nullable Object] */;
val* var4 /* : Array[Couple[Object, nullable Object]] */;
val* var5 /* : Iterator[nullable Object] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_i /* var i: Couple[Object, nullable Object] */;
val* var8 /* : nullable Object */;
short int var9 /* : Bool */;
long var10 /* : Int */;
long var11 /* : Int */;
long var13 /* : Int */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa Collection#0 */
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 641);
exit(1);
}
var_item = p0;
var2 = 0;
var_nb = var2;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_array__ArrayMapValues__map]))(self) /* map on <self:ArrayMapValues[Object, nullable Object]>*/;
var4 = var3->attrs[COLOR_array__ArrayMap___items].val; /* _items on <var3:ArrayMap[Object, nullable Object]> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _items", "lib/standard/collection/array.nit", 645);
exit(1);
}
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__Collection__iterator]))(var4) /* iterator on <var4:Array[Couple[Object, nullable Object]]>*/;
for(;;) {
var6 = ((short int (*)(val*))(var5->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var5) /* is_ok on <var5:Iterator[nullable Object]>*/;
if(!var6) break;
var7 = ((val* (*)(val*))(var5->class->vft[COLOR_abstract_collection__Iterator__item]))(var5) /* item on <var5:Iterator[nullable Object]>*/;
var_i = var7;
var8 = ((val* (*)(val*))(var_i->class->vft[COLOR_abstract_collection__Couple__second]))(var_i) /* second on <var_i:Couple[Object, nullable Object]>*/;
if (var8 == NULL) {
var9 = (var_item == NULL);
} else {
var9 = ((short int (*)(val*, val*))(var8->class->vft[COLOR_kernel__Object___61d_61d]))(var8, var_item) /* == on <var8:nullable Object>*/;
}
if (var9){
var10 = 1;
{ /* Inline kernel#Int#+ (var_nb,var10) */
var13 = var_nb + var10;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var_nb = var11;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var5->class->vft[COLOR_abstract_collection__Iterator__next]))(var5) /* next on <var5:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var = var_nb;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArrayMapValues#count for (self: Object, nullable Object): Int */
long VIRTUAL_array__ArrayMapValues__count(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = array__ArrayMapValues__count(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayMapValues#clear for (self: ArrayMapValues[Object, nullable Object]) */
void array__ArrayMapValues__clear(val* self) {
val* var /* : ArrayMap[Object, nullable Object] */;
var = ((val* (*)(val*))(self->class->vft[COLOR_array__ArrayMapValues__map]))(self) /* map on <self:ArrayMapValues[Object, nullable Object]>*/;
((void (*)(val*))(var->class->vft[COLOR_abstract_collection__Map__clear]))(var) /* clear on <var:ArrayMap[Object, nullable Object]>*/;
RET_LABEL:;
}
/* method array#ArrayMapValues#clear for (self: Object) */
void VIRTUAL_array__ArrayMapValues__clear(val* self) {
array__ArrayMapValues__clear(self);
RET_LABEL:;
}
/* method array#ArrayMapValues#remove for (self: ArrayMapValues[Object, nullable Object], nullable Object) */
void array__ArrayMapValues__remove(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
val* var_item /* var item: nullable Object */;
val* var1 /* : ArrayMap[Object, nullable Object] */;
val* var_map /* var map: ArrayMap[Object, nullable Object] */;
val* var2 /* : Array[Couple[Object, nullable Object]] */;
long var3 /* : Int */;
long var4 /* : Int */;
long var5 /* : Int */;
long var7 /* : Int */;
long var_i /* var i: Int */;
long var8 /* : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
short int var14 /* : Bool */;
val* var15 /* : Array[Couple[Object, nullable Object]] */;
val* var16 /* : nullable Object */;
val* var17 /* : nullable Object */;
short int var18 /* : Bool */;
long var19 /* : Int */;
long var20 /* : Int */;
long var22 /* : Int */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa RemovableCollection#0 */
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 651);
exit(1);
}
var_item = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_array__ArrayMapValues__map]))(self) /* map on <self:ArrayMapValues[Object, nullable Object]>*/;
var_map = var1;
var2 = var_map->attrs[COLOR_array__ArrayMap___items].val; /* _items on <var_map:ArrayMap[Object, nullable Object]> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _items", "lib/standard/collection/array.nit", 654);
exit(1);
}
var3 = ((long (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__length]))(var2) /* length on <var2:Array[Couple[Object, nullable Object]]>*/;
var4 = 1;
{ /* Inline kernel#Int#- (var3,var4) */
var7 = var3 - var4;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var_i = var5;
for(;;) {
var8 = 0;
{ /* Inline kernel#Int#>= (var_i,var8) */
/* Covariant cast for argument 0 (i) <var8:Int> isa OTHER */
/* <var8:Int> isa OTHER */
var11 = 1; /* easy <var8:Int> isa OTHER*/
if (!var11) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
}
var14 = var_i >= var8;
var9 = var14;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
if (!var9) break;
var15 = var_map->attrs[COLOR_array__ArrayMap___items].val; /* _items on <var_map:ArrayMap[Object, nullable Object]> */
if (var15 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _items", "lib/standard/collection/array.nit", 656);
exit(1);
}
var16 = ((val* (*)(val*, long))(var15->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var15, var_i) /* [] on <var15:Array[Couple[Object, nullable Object]]>*/;
var17 = ((val* (*)(val*))(var16->class->vft[COLOR_abstract_collection__Couple__second]))(var16) /* second on <var16:nullable Object(Couple[Object, nullable Object])>*/;
if (var17 == NULL) {
var18 = (var_item == NULL);
} else {
var18 = ((short int (*)(val*, val*))(var17->class->vft[COLOR_kernel__Object___61d_61d]))(var17, var_item) /* == on <var17:nullable Object>*/;
}
if (var18){
((void (*)(val*, long))(var_map->class->vft[COLOR_array__ArrayMap__remove_at_index]))(var_map, var_i) /* remove_at_index on <var_map:ArrayMap[Object, nullable Object]>*/;
goto RET_LABEL;
} else {
}
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
RET_LABEL:;
}
/* method array#ArrayMapValues#remove for (self: Object, nullable Object) */
void VIRTUAL_array__ArrayMapValues__remove(val* self, val* p0) {
array__ArrayMapValues__remove(self, p0);
RET_LABEL:;
}
/* method array#ArrayMapValues#remove_all for (self: ArrayMapValues[Object, nullable Object], nullable Object) */
void array__ArrayMapValues__remove_all(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
val* var_item /* var item: nullable Object */;
val* var1 /* : ArrayMap[Object, nullable Object] */;
val* var_map /* var map: ArrayMap[Object, nullable Object] */;
val* var2 /* : Array[Couple[Object, nullable Object]] */;
long var3 /* : Int */;
long var4 /* : Int */;
long var5 /* : Int */;
long var7 /* : Int */;
long var_i /* var i: Int */;
long var8 /* : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
short int var14 /* : Bool */;
val* var15 /* : Array[Couple[Object, nullable Object]] */;
val* var16 /* : nullable Object */;
val* var17 /* : nullable Object */;
short int var18 /* : Bool */;
long var19 /* : Int */;
long var20 /* : Int */;
long var22 /* : Int */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa RemovableCollection#0 */
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 664);
exit(1);
}
var_item = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_array__ArrayMapValues__map]))(self) /* map on <self:ArrayMapValues[Object, nullable Object]>*/;
var_map = var1;
var2 = var_map->attrs[COLOR_array__ArrayMap___items].val; /* _items on <var_map:ArrayMap[Object, nullable Object]> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _items", "lib/standard/collection/array.nit", 667);
exit(1);
}
var3 = ((long (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__length]))(var2) /* length on <var2:Array[Couple[Object, nullable Object]]>*/;
var4 = 1;
{ /* Inline kernel#Int#- (var3,var4) */
var7 = var3 - var4;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var_i = var5;
for(;;) {
var8 = 0;
{ /* Inline kernel#Int#>= (var_i,var8) */
/* Covariant cast for argument 0 (i) <var8:Int> isa OTHER */
/* <var8:Int> isa OTHER */
var11 = 1; /* easy <var8:Int> isa OTHER*/
if (!var11) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
}
var14 = var_i >= var8;
var9 = var14;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
if (!var9) break;
var15 = var_map->attrs[COLOR_array__ArrayMap___items].val; /* _items on <var_map:ArrayMap[Object, nullable Object]> */
if (var15 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _items", "lib/standard/collection/array.nit", 669);
exit(1);
}
var16 = ((val* (*)(val*, long))(var15->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var15, var_i) /* [] on <var15:Array[Couple[Object, nullable Object]]>*/;
var17 = ((val* (*)(val*))(var16->class->vft[COLOR_abstract_collection__Couple__second]))(var16) /* second on <var16:nullable Object(Couple[Object, nullable Object])>*/;
if (var17 == NULL) {
var18 = (var_item == NULL);
} else {
var18 = ((short int (*)(val*, val*))(var17->class->vft[COLOR_kernel__Object___61d_61d]))(var17, var_item) /* == on <var17:nullable Object>*/;
}
if (var18){
((void (*)(val*, long))(var_map->class->vft[COLOR_array__ArrayMap__remove_at_index]))(var_map, var_i) /* remove_at_index on <var_map:ArrayMap[Object, nullable Object]>*/;
} else {
}
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
RET_LABEL:;
}
/* method array#ArrayMapValues#remove_all for (self: Object, nullable Object) */
void VIRTUAL_array__ArrayMapValues__remove_all(val* self, val* p0) {
array__ArrayMapValues__remove_all(self, p0);
RET_LABEL:;
}
/* method array#ArrayMapValues#init for (self: ArrayMapValues[Object, nullable Object], ArrayMap[Object, nullable Object]) */
void array__ArrayMapValues__init(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
/* Covariant cast for argument 0 (map) <p0:ArrayMap[Object, nullable Object]> isa ArrayMap[ArrayMapValues#0, ArrayMapValues#1] */
/* <p0:ArrayMap[Object, nullable Object]> isa ArrayMap[ArrayMapValues#0, ArrayMapValues#1] */
type_struct = self->type->resolution_table->types[COLOR_array__ArrayMaparray__ArrayMapValues_FT0array__ArrayMapValues_FT1];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 618);
exit(1);
}
self->attrs[COLOR_array__ArrayMapValues___64dmap].val = p0; /* @map on <self:ArrayMapValues[Object, nullable Object]> */
RET_LABEL:;
}
/* method array#ArrayMapValues#init for (self: Object, ArrayMap[Object, nullable Object]) */
void VIRTUAL_array__ArrayMapValues__init(val* self, val* p0) {
array__ArrayMapValues__init(self, p0);
RET_LABEL:;
}
/* method array#Iterator#to_a for (self: Iterator[nullable Object]): Array[nullable Object] */
val* array__Iterator__to_a(val* self) {
val* var /* : Array[nullable Object] */;
val* var1 /* : Array[nullable Object] */;
val* var_res /* var res: Array[nullable Object] */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
var1 = NEW_array__Array(self->type->resolution_table->types[COLOR_array__Arrayabstract_collection__Iterator_FT0]);
((void (*)(val*))(var1->class->vft[COLOR_array__Array__init]))(var1) /* init on <var1:Array[nullable Object]>*/;
CHECK_NEW_array__Array(var1);
var_res = var1;
for(;;) {
var2 = ((short int (*)(val*))(self->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(self) /* is_ok on <self:Iterator[nullable Object]>*/;
if (!var2) break;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_collection__Iterator__item]))(self) /* item on <self:Iterator[nullable Object]>*/;
((void (*)(val*, val*))(var_res->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_res, var3) /* add on <var_res:Array[nullable Object]>*/;
((void (*)(val*))(self->class->vft[COLOR_abstract_collection__Iterator__next]))(self) /* next on <self:Iterator[nullable Object]>*/;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#Iterator#to_a for (self: Object): Array[nullable Object] */
val* VIRTUAL_array__Iterator__to_a(val* self) {
val* var /* : Array[nullable Object] */;
val* var1 /* : Array[nullable Object] */;
var1 = array__Iterator__to_a(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#Collection#to_a for (self: Collection[nullable Object]): Array[nullable Object] */
val* array__Collection__to_a(val* self) {
val* var /* : Array[nullable Object] */;
val* var1 /* : Iterator[nullable Object] */;
val* var2 /* : Array[nullable Object] */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__iterator]))(self) /* iterator on <self:Collection[nullable Object]>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_array__Iterator__to_a]))(var1) /* to_a on <var1:Iterator[nullable Object]>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#Collection#to_a for (self: Object): Array[nullable Object] */
val* VIRTUAL_array__Collection__to_a(val* self) {
val* var /* : Array[nullable Object] */;
val* var1 /* : Array[nullable Object] */;
var1 = array__Collection__to_a(self);
var = var1;
RET_LABEL:;
return var;
}
/* method array#ArrayCapable#calloc_array for (self: ArrayCapable[nullable Object], Int): NativeArray[nullable Object] */
val* array__ArrayCapable__calloc_array(val* self, long p0) {
val* var /* : NativeArray[nullable Object] */;
val* var1 /* : NativeArray[nullable Object] */;
var1 = NEW_array__NativeArray(p0, self->type->resolution_table->types[COLOR_array__NativeArrayarray__ArrayCapable_FT0]);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#ArrayCapable#calloc_array for (self: Object, Int): NativeArray[nullable Object] */
val* VIRTUAL_array__ArrayCapable__calloc_array(val* self, long p0) {
val* var /* : NativeArray[nullable Object] */;
val* var1 /* : NativeArray[nullable Object] */;
val* var3 /* : NativeArray[nullable Object] */;
{ /* Inline array#ArrayCapable#calloc_array (self,p0) */
var3 = NEW_array__NativeArray(p0, self->type->resolution_table->types[COLOR_array__NativeArrayarray__ArrayCapable_FT0]);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method array#NativeArray#[] for (self: NativeArray[nullable Object], Int): nullable Object */
val* array__NativeArray___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = ((struct instance_array__NativeArray*)self)->values[p0];
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method array#NativeArray#[] for (self: Object, Int): nullable Object */
val* VIRTUAL_array__NativeArray___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
val* var3 /* : nullable Object */;
{ /* Inline array#NativeArray#[] (self,p0) */
var3 = ((struct instance_array__NativeArray*)self)->values[p0];
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method array#NativeArray#[]= for (self: NativeArray[nullable Object], Int, nullable Object) */
void array__NativeArray___91d_93d_61d(val* self, long p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
/* Covariant cast for argument 1 (item) <p1:nullable Object> isa NativeArray#0 */
/* <p1:nullable Object> isa NativeArray#0 */
type_struct = self->type->resolution_table->types[COLOR_array__NativeArray_FT0];
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 712);
exit(1);
}
((struct instance_array__NativeArray*)self)->values[p0]=p1;
RET_LABEL:;
}
/* method array#NativeArray#[]= for (self: Object, Int, nullable Object) */
void VIRTUAL_array__NativeArray___91d_93d_61d(val* self, long p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
{ /* Inline array#NativeArray#[]= (self,p0,p1) */
/* Covariant cast for argument 1 (item) <p1:nullable Object> isa NativeArray#0 */
/* <p1:nullable Object> isa NativeArray#0 */
type_struct = self->type->resolution_table->types[COLOR_array__NativeArray_FT0];
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 712);
exit(1);
}
((struct instance_array__NativeArray*)self)->values[p0]=p1;
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method array#NativeArray#copy_to for (self: NativeArray[nullable Object], NativeArray[nullable Object], Int) */
void array__NativeArray__copy_to(val* self, val* p0, long p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
/* Covariant cast for argument 0 (dest) <p0:NativeArray[nullable Object]> isa NativeArray[NativeArray#0] */
/* <p0:NativeArray[nullable Object]> isa NativeArray[NativeArray#0] */
type_struct = self->type->resolution_table->types[COLOR_array__NativeArrayarray__NativeArray_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 713);
exit(1);
}
memcpy(((struct instance_array__NativeArray*)p0)->values, ((struct instance_array__NativeArray*)self)->values, p1*sizeof(val*));
RET_LABEL:;
}
/* method array#NativeArray#copy_to for (self: Object, NativeArray[nullable Object], Int) */
void VIRTUAL_array__NativeArray__copy_to(val* self, val* p0, long p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
{ /* Inline array#NativeArray#copy_to (self,p0,p1) */
/* Covariant cast for argument 0 (dest) <p0:NativeArray[nullable Object]> isa NativeArray[NativeArray#0] */
/* <p0:NativeArray[nullable Object]> isa NativeArray[NativeArray#0] */
type_struct = self->type->resolution_table->types[COLOR_array__NativeArrayarray__NativeArray_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (!var) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/collection/array.nit", 713);
exit(1);
}
memcpy(((struct instance_array__NativeArray*)p0)->values, ((struct instance_array__NativeArray*)self)->values, p1*sizeof(val*));
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
