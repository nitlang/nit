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
const char* var_class_name;
val* var_item /* var item: nullable Object */;
long var2 /* : Int */;
long var_i /* var i: Int */;
long var3 /* : Int */;
long var_l /* var l: Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name9;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
long var14 /* : Int */;
long var15 /* : Int */;
long var17 /* : Int */;
short int var18 /* : Bool */;
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 28);
show_backtrace(1);
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
var_class_name9 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name9);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
show_backtrace(1);
}
var10 = var_i < var_l;
var4 = var10;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
if (!var4) break;
var11 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(self, var_i) /* [] on <self:AbstractArrayRead[nullable Object]>*/;
if (var11 == NULL) {
var12 = (var_item == NULL);
} else {
var12 = ((short int (*)(val*, val*))(var11->class->vft[COLOR_kernel__Object___61d_61d]))(var11, var_item) /* == on <var11:nullable Object>*/;
}
if (var12){
var13 = 1;
var = var13;
goto RET_LABEL;
} else {
}
var14 = 1;
{ /* Inline kernel#Int#+ (var_i,var14) */
var17 = var_i + var14;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var_i = var15;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var18 = 0;
var = var18;
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
const char* var_class_name;
val* var_item /* var item: nullable Object */;
long var2 /* : Int */;
long var_i /* var i: Int */;
long var3 /* : Int */;
long var_l /* var l: Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name9;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
long var14 /* : Int */;
long var15 /* : Int */;
long var17 /* : Int */;
short int var18 /* : Bool */;
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 39);
show_backtrace(1);
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
var_class_name9 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name9);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
show_backtrace(1);
}
var10 = var_i < var_l;
var4 = var10;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
if (!var4) break;
var11 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(self, var_i) /* [] on <self:AbstractArrayRead[nullable Object]>*/;
if (var11 == NULL) {
var12 = (var_item != NULL);
} else {
var12 = ((short int (*)(val*, val*))(var11->class->vft[COLOR_kernel__Object___33d_61d]))(var11, var_item) /* != on <var11:nullable Object>*/;
}
if (var12){
var13 = 0;
var = var13;
goto RET_LABEL;
} else {
}
var14 = 1;
{ /* Inline kernel#Int#+ (var_i,var14) */
var17 = var_i + var14;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var_i = var15;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var18 = 1;
var = var18;
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
const char* var_class_name;
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
const char* var_class_name10;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
short int var13 /* : Bool */;
long var14 /* : Int */;
long var15 /* : Int */;
long var17 /* : Int */;
long var18 /* : Int */;
long var19 /* : Int */;
long var21 /* : Int */;
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 50);
show_backtrace(1);
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
var_class_name10 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
show_backtrace(1);
}
var11 = var_i < var_l;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
if (!var5) break;
var12 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(self, var_i) /* [] on <self:AbstractArrayRead[nullable Object]>*/;
if (var12 == NULL) {
var13 = (var_item == NULL);
} else {
var13 = ((short int (*)(val*, val*))(var12->class->vft[COLOR_kernel__Object___61d_61d]))(var12, var_item) /* == on <var12:nullable Object>*/;
}
if (var13){
var14 = 1;
{ /* Inline kernel#Int#+ (var_res,var14) */
var17 = var_res + var14;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var_res = var15;
} else {
}
var18 = 1;
{ /* Inline kernel#Int#+ (var_i,var18) */
var21 = var_i + var18;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var_i = var19;
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
const char* var_class_name;
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "SequenceRead#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 62);
show_backtrace(1);
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
const char* var_class_name;
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "AbstractArrayRead#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 64);
show_backtrace(1);
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
const char* var_class_name;
val* var_item /* var item: nullable Object */;
long var_pos /* var pos: Int */;
long var_i /* var i: Int */;
long var2 /* : Int */;
long var_len /* var len: Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
short int var11 /* : Bool */;
long var12 /* : Int */;
long var13 /* : Int */;
long var15 /* : Int */;
long var16 /* : Int */;
long var17 /* : Int */;
long var19 /* : Int */;
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "AbstractArrayRead#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 68);
show_backtrace(1);
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
var_class_name8 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name8);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
show_backtrace(1);
}
var9 = var_i < var_len;
var3 = var9;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
if (!var3) break;
var10 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(self, var_i) /* [] on <self:AbstractArrayRead[nullable Object]>*/;
if (var10 == NULL) {
var11 = (var_item == NULL);
} else {
var11 = ((short int (*)(val*, val*))(var10->class->vft[COLOR_kernel__Object___61d_61d]))(var10, var_item) /* == on <var10:nullable Object>*/;
}
if (var11){
var = var_i;
goto RET_LABEL;
} else {
}
var12 = 1;
{ /* Inline kernel#Int#+ (var_i,var12) */
var15 = var_i + var12;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var_i = var13;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var16 = 1;
{ /* Inline kernel#Int#unary - (var16) */
var19 = -var16;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var = var17;
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
const char* var_class_name;
val* var_item /* var item: nullable Object */;
long var_pos /* var pos: Int */;
long var_i /* var i: Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
short int var11 /* : Bool */;
long var12 /* : Int */;
long var13 /* : Int */;
long var15 /* : Int */;
long var16 /* : Int */;
long var17 /* : Int */;
long var19 /* : Int */;
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "AbstractArrayRead#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 83);
show_backtrace(1);
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
var_class_name8 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name8);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 262);
show_backtrace(1);
}
var9 = var_i >= var2;
var3 = var9;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
if (!var3) break;
var10 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(self, var_i) /* [] on <self:AbstractArrayRead[nullable Object]>*/;
if (var10 == NULL) {
var11 = (var_item == NULL);
} else {
var11 = ((short int (*)(val*, val*))(var10->class->vft[COLOR_kernel__Object___61d_61d]))(var10, var_item) /* == on <var10:nullable Object>*/;
}
if (var11){
var = var_i;
goto RET_LABEL;
} else {
var12 = 1;
{ /* Inline kernel#Int#- (var_i,var12) */
var15 = var_i - var12;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var_i = var13;
}
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var16 = 1;
{ /* Inline kernel#Int#unary - (var16) */
var19 = -var16;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var = var17;
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
const char* var_class_name;
short int var7 /* : Bool */;
long var8 /* : Int */;
long var9 /* : Int */;
long var11 /* : Int */;
val* var12 /* : nullable Object */;
var1 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:AbstractArrayRead[nullable Object]> */
var_cmp = var1;
var2 = NEW_array__Array(self->type->resolution_table->types[COLOR_array__Arrayarray__AbstractArrayRead_FT0]);
((void (*)(val*, long))(var2->class->vft[COLOR_array__Array__with_capacity]))(var2, var_cmp) /* with_capacity on <var2:Array[nullable Object]>*/;
var_result = var2;
for(;;) {
var3 = 0;
{ /* Inline kernel#Int#> (var_cmp,var3) */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (!var6) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 263);
show_backtrace(1);
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
const char* var_class_name;
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
const char* var_class_name7;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var10 /* : Int */;
long var12 /* : Int */;
long var13 /* : Int */;
long var15 /* : Int */;
long var16 /* : Int */;
long var18 /* : Int */;
val* var19 /* : nullable Object */;
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
var_class_name = p2 == NULL ? "null" : p2->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "AbstractArray[AbstractArrayRead#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 112);
show_backtrace(1);
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
var_class_name7 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 263);
show_backtrace(1);
}
var8 = var_i > var1;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
if (!var2) break;
var9 = 1;
{ /* Inline kernel#Int#- (var_i,var9) */
var12 = var_i - var9;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var_i = var10;
{ /* Inline kernel#Int#+ (var_new_start,var_i) */
var15 = var_new_start + var_i;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
{ /* Inline kernel#Int#+ (var_start,var_i) */
var18 = var_start + var_i;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var19 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(self, var16) /* [] on <self:AbstractArrayRead[nullable Object]>*/;
((void (*)(val*, long, val*))(var_dest->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var_dest, var13, var19) /* []= on <var_dest:AbstractArray[nullable Object]>*/;
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
const char* var_class_name;
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
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 134);
show_backtrace(1);
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
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "enlarge", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 147);
show_backtrace(1);
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
const char* var_class_name;
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Sequence#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 152);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Assert \'not_empty\' failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 156);
show_backtrace(1);
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
const char* var_class_name;
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
fprintf(stderr, "Runtime error: %s", "Assert \'not_empty\' failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 164);
show_backtrace(1);
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
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
show_backtrace(1);
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
const char* var_class_name;
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
const char* var_class_name12;
short int var13 /* : Bool */;
long var14 /* : Int */;
long var15 /* : Int */;
long var17 /* : Int */;
val* var18 /* : nullable Object */;
long var19 /* : Int */;
long var20 /* : Int */;
long var22 /* : Int */;
long var23 /* : Int */;
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Sequence#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 176);
show_backtrace(1);
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
var_class_name12 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 263);
show_backtrace(1);
}
var13 = var_i > var6;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
if (!var7) break;
var14 = 1;
{ /* Inline kernel#Int#+ (var_i,var14) */
var17 = var_i + var14;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var18 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(self, var_i) /* [] on <self:AbstractArray[nullable Object]>*/;
((void (*)(val*, long, val*))(self->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(self, var15, var18) /* []= on <self:AbstractArray[nullable Object]>*/;
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
var23 = 0;
((void (*)(val*, long, val*))(self->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(self, var23, var_item) /* []= on <self:AbstractArray[nullable Object]>*/;
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
const char* var_class_name;
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "AbstractArray#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 186);
show_backtrace(1);
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
const char* var_class_name;
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "SimpleCollection#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 198);
show_backtrace(1);
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
const char* var_class_name;
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "RemovableCollection#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 202);
show_backtrace(1);
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
const char* var_class_name;
val* var_item /* var item: nullable Object */;
long var1 /* : Int */;
long var_i /* var i: Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
short int var9 /* : Bool */;
long var10 /* : Int */;
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "RemovableCollection#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 204);
show_backtrace(1);
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
var_class_name8 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name8);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 262);
show_backtrace(1);
}
var9 = var_i >= var2;
var3 = var9;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
if (!var3) break;
((void (*)(val*, long))(self->class->vft[COLOR_abstract_collection__Sequence__remove_at]))(self, var_i) /* remove_at on <self:AbstractArray[nullable Object]>*/;
var10 = ((long (*)(val*, val*, long))(self->class->vft[COLOR_array__AbstractArrayRead__index_of_from]))(self, var_item, var_i) /* index_of_from on <self:AbstractArray[nullable Object]>*/;
var_i = var10;
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
const char* var_class_name;
short int var6 /* : Bool */;
short int var_ /* var : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
short int var13 /* : Bool */;
long var14 /* : Int */;
long var15 /* : Int */;
long var17 /* : Int */;
long var_j /* var j: Int */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
short int var24 /* : Bool */;
long var25 /* : Int */;
long var26 /* : Int */;
long var28 /* : Int */;
val* var29 /* : nullable Object */;
long var30 /* : Int */;
long var31 /* : Int */;
long var33 /* : Int */;
long var34 /* : Int */;
long var35 /* : Int */;
long var37 /* : Int */;
var_i = p0;
var = ((long (*)(val*))(self->class->vft[COLOR_abstract_collection__Collection__length]))(self) /* length on <self:AbstractArray[nullable Object]>*/;
var_l = var;
var2 = 0;
{ /* Inline kernel#Int#>= (var_i,var2) */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (!var5) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 262);
show_backtrace(1);
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
var_class_name12 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
show_backtrace(1);
}
var13 = var_i < var_l;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var1 = var7;
} else {
var1 = var_;
}
if (var1){
var14 = 1;
{ /* Inline kernel#Int#+ (var_i,var14) */
var17 = var_i + var14;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var_j = var15;
for(;;) {
{ /* Inline kernel#Int#< (var_j,var_l) */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var20 = 1; /* easy <var_l:Int> isa OTHER*/
if (!var20) {
var_class_name23 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
show_backtrace(1);
}
var24 = var_j < var_l;
var18 = var24;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
if (!var18) break;
var25 = 1;
{ /* Inline kernel#Int#- (var_j,var25) */
var28 = var_j - var25;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
var29 = ((val* (*)(val*, long))(self->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(self, var_j) /* [] on <self:AbstractArray[nullable Object]>*/;
((void (*)(val*, long, val*))(self->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(self, var26, var29) /* []= on <self:AbstractArray[nullable Object]>*/;
var30 = 1;
{ /* Inline kernel#Int#+ (var_j,var30) */
var33 = var_j + var30;
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
var_j = var31;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var34 = 1;
{ /* Inline kernel#Int#- (var_l,var34) */
var37 = var_l - var34;
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
self->attrs[COLOR_array__AbstractArrayRead___length].l = var35; /* _length on <self:AbstractArray[nullable Object]> */
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
const char* var_class_name;
short int var6 /* : Bool */;
short int var_ /* var : Bool */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
val* var15 /* : nullable NativeArray[nullable Object] */;
val* var16 /* : nullable Object */;
var_index = p0;
var2 = 0;
{ /* Inline kernel#Int#>= (var_index,var2) */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (!var5) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 262);
show_backtrace(1);
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
var_class_name13 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
show_backtrace(1);
}
var14 = var_index < var7;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var1 = var8;
} else {
var1 = var_;
}
if (!var1) {
fprintf(stderr, "Runtime error: %s", "Assert \'index\' failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 255);
show_backtrace(1);
}
var15 = self->attrs[COLOR_array__Array___items].val; /* _items on <self:Array[nullable Object]> */
if (var15 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 256);
show_backtrace(1);
} else {
var16 = ((val* (*)(val*, long))(var15->class->vft[COLOR_array__NativeArray___91d_93d]))(var15, var_index) /* [] on <var15:nullable NativeArray[nullable Object]>*/;
}
var = var16;
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
const char* var_class_name;
long var_index /* var index: Int */;
val* var_item /* var item: nullable Object */;
short int var1 /* : Bool */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
short int var9 /* : Bool */;
short int var_ /* var : Bool */;
long var10 /* : Int */;
long var11 /* : Int */;
long var12 /* : Int */;
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
long var22 /* : Int */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
short int var29 /* : Bool */;
long var30 /* : Int */;
long var31 /* : Int */;
long var33 /* : Int */;
long var34 /* : Int */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
short int var41 /* : Bool */;
long var42 /* : Int */;
long var43 /* : Int */;
long var45 /* : Int */;
val* var46 /* : nullable NativeArray[nullable Object] */;
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
var_class_name = p1 == NULL ? "null" : p1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Sequence#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 259);
show_backtrace(1);
}
var_index = p0;
var_item = p1;
var2 = 0;
{ /* Inline kernel#Int#>= (var_index,var2) */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (!var5) {
var_class_name8 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name8);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 262);
show_backtrace(1);
}
var9 = var_index >= var2;
var3 = var9;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var_ = var3;
if (var3){
var10 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:Array[nullable Object]> */
var11 = 1;
{ /* Inline kernel#Int#+ (var10,var11) */
var14 = var10 + var11;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
{ /* Inline kernel#Int#< (var_index,var12) */
/* Covariant cast for argument 0 (i) <var12:Int> isa OTHER */
/* <var12:Int> isa OTHER */
var17 = 1; /* easy <var12:Int> isa OTHER*/
if (!var17) {
var_class_name20 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
show_backtrace(1);
}
var21 = var_index < var12;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var1 = var15;
} else {
var1 = var_;
}
if (!var1) {
fprintf(stderr, "Runtime error: %s", "Assert \'index\' failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 261);
show_backtrace(1);
}
var22 = self->attrs[COLOR_array__Array___capacity].l; /* _capacity on <self:Array[nullable Object]> */
{ /* Inline kernel#Int#<= (var22,var_index) */
/* Covariant cast for argument 0 (i) <var_index:Int> isa OTHER */
/* <var_index:Int> isa OTHER */
var25 = 1; /* easy <var_index:Int> isa OTHER*/
if (!var25) {
var_class_name28 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 260);
show_backtrace(1);
}
var29 = var22 <= var_index;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
if (var23){
var30 = 1;
{ /* Inline kernel#Int#+ (var_index,var30) */
var33 = var_index + var30;
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
((void (*)(val*, long))(self->class->vft[COLOR_array__AbstractArray__enlarge]))(self, var31) /* enlarge on <self:Array[nullable Object]>*/;
} else {
}
var34 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:Array[nullable Object]> */
{ /* Inline kernel#Int#<= (var34,var_index) */
/* Covariant cast for argument 0 (i) <var_index:Int> isa OTHER */
/* <var_index:Int> isa OTHER */
var37 = 1; /* easy <var_index:Int> isa OTHER*/
if (!var37) {
var_class_name40 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 260);
show_backtrace(1);
}
var41 = var34 <= var_index;
var35 = var41;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
if (var35){
var42 = 1;
{ /* Inline kernel#Int#+ (var_index,var42) */
var45 = var_index + var42;
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
self->attrs[COLOR_array__AbstractArrayRead___length].l = var43; /* _length on <self:Array[nullable Object]> */
} else {
}
var46 = self->attrs[COLOR_array__Array___items].val; /* _items on <self:Array[nullable Object]> */
if (var46 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 268);
show_backtrace(1);
} else {
((void (*)(val*, long, val*))(var46->class->vft[COLOR_array__NativeArray___91d_93d_61d]))(var46, var_index, var_item) /* []= on <var46:nullable NativeArray[nullable Object]>*/;
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
const char* var_class_name;
val* var_item /* var item: nullable Object */;
long var1 /* : Int */;
long var_l /* var l: Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
const char* var_class_name8;
short int var9 /* : Bool */;
long var10 /* : Int */;
long var11 /* : Int */;
long var13 /* : Int */;
long var14 /* : Int */;
long var15 /* : Int */;
long var17 /* : Int */;
val* var18 /* : nullable NativeArray[nullable Object] */;
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "SimpleCollection#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 271);
show_backtrace(1);
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
var_class_name8 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name8);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 260);
show_backtrace(1);
}
var9 = var2 <= var_l;
var3 = var9;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
if (var3){
var10 = 1;
{ /* Inline kernel#Int#+ (var_l,var10) */
var13 = var_l + var10;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
((void (*)(val*, long))(self->class->vft[COLOR_array__AbstractArray__enlarge]))(self, var11) /* enlarge on <self:Array[nullable Object]>*/;
} else {
}
var14 = 1;
{ /* Inline kernel#Int#+ (var_l,var14) */
var17 = var_l + var14;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
self->attrs[COLOR_array__AbstractArrayRead___length].l = var15; /* _length on <self:Array[nullable Object]> */
var18 = self->attrs[COLOR_array__Array___items].val; /* _items on <self:Array[nullable Object]> */
if (var18 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 278);
show_backtrace(1);
} else {
((void (*)(val*, long, val*))(var18->class->vft[COLOR_array__NativeArray___91d_93d_61d]))(var18, var_l, var_item) /* []= on <var18:nullable NativeArray[nullable Object]>*/;
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
const char* var_class_name;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
short int var11 /* : Bool */;
long var12 /* : Int */;
long var13 /* : Int */;
long var15 /* : Int */;
long var16 /* : Int */;
long var17 /* : Int */;
long var19 /* : Int */;
val* var20 /* : NativeArray[nullable Object] */;
val* var_a /* var a: NativeArray[nullable Object] */;
long var21 /* : Int */;
long var22 /* : Int */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
short int var29 /* : Bool */;
val* var30 /* : nullable NativeArray[nullable Object] */;
long var31 /* : Int */;
var_cap = p0;
var = self->attrs[COLOR_array__Array___capacity].l; /* _capacity on <self:Array[nullable Object]> */
var_c = var;
{ /* Inline kernel#Int#<= (var_cap,var_c) */
/* Covariant cast for argument 0 (i) <var_c:Int> isa OTHER */
/* <var_c:Int> isa OTHER */
var3 = 1; /* easy <var_c:Int> isa OTHER*/
if (!var3) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 260);
show_backtrace(1);
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
var_class_name10 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 260);
show_backtrace(1);
}
var11 = var_c <= var_cap;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
if (!var5) break;
var12 = 2;
{ /* Inline kernel#Int#* (var_c,var12) */
var15 = var_c * var12;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var16 = 2;
{ /* Inline kernel#Int#+ (var13,var16) */
var19 = var13 + var16;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var_c = var17;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var20 = ((val* (*)(val*, long))(self->class->vft[COLOR_array__ArrayCapable__calloc_array]))(self, var_c) /* calloc_array on <self:Array[nullable Object]>*/;
var_a = var20;
var21 = self->attrs[COLOR_array__Array___capacity].l; /* _capacity on <self:Array[nullable Object]> */
var22 = 0;
{ /* Inline kernel#Int#> (var21,var22) */
/* Covariant cast for argument 0 (i) <var22:Int> isa OTHER */
/* <var22:Int> isa OTHER */
var25 = 1; /* easy <var22:Int> isa OTHER*/
if (!var25) {
var_class_name28 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 263);
show_backtrace(1);
}
var29 = var21 > var22;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
if (var23){
var30 = self->attrs[COLOR_array__Array___items].val; /* _items on <self:Array[nullable Object]> */
var31 = self->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <self:Array[nullable Object]> */
if (var30 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 287);
show_backtrace(1);
} else {
((void (*)(val*, val*, long))(var30->class->vft[COLOR_array__NativeArray__copy_to]))(var30, var_a, var31) /* copy_to on <var30:nullable NativeArray[nullable Object]>*/;
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
const char* var_class_name;
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[Array#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 299);
show_backtrace(1);
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
const char* var_class_name;
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
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 262);
show_backtrace(1);
}
var4 = var_cap >= var;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
if (!var1) {
fprintf(stderr, "Runtime error: %s", "Assert \'positive\' failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 316);
show_backtrace(1);
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
const char* var_class_name;
val* var_value /* var value: nullable Object */;
long var_count /* var count: Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
short int var8 /* : Bool */;
val* var9 /* : NativeArray[nullable Object] */;
long var10 /* : Int */;
long var_i /* var i: Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
short int var17 /* : Bool */;
long var18 /* : Int */;
long var19 /* : Int */;
long var21 /* : Int */;
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Array#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 322);
show_backtrace(1);
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
var_class_name7 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 262);
show_backtrace(1);
}
var8 = var_count >= var1;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert \'positive\' failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 325);
show_backtrace(1);
}
var9 = ((val* (*)(val*, long))(self->class->vft[COLOR_array__ArrayCapable__calloc_array]))(self, var_count) /* calloc_array on <self:Array[nullable Object]>*/;
self->attrs[COLOR_array__Array___items].val = var9; /* _items on <self:Array[nullable Object]> */
self->attrs[COLOR_array__Array___capacity].l = var_count; /* _capacity on <self:Array[nullable Object]> */
self->attrs[COLOR_array__AbstractArrayRead___length].l = var_count; /* _length on <self:Array[nullable Object]> */
var10 = 0;
var_i = var10;
for(;;) {
{ /* Inline kernel#Int#< (var_i,var_count) */
/* Covariant cast for argument 0 (i) <var_count:Int> isa OTHER */
/* <var_count:Int> isa OTHER */
var13 = 1; /* easy <var_count:Int> isa OTHER*/
if (!var13) {
var_class_name16 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
show_backtrace(1);
}
var17 = var_i < var_count;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
if (!var11) break;
((void (*)(val*, long, val*))(self->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(self, var_i, var_value) /* []= on <self:Array[nullable Object]>*/;
var18 = 1;
{ /* Inline kernel#Int#+ (var_i,var18) */
var21 = var_i + var18;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var_i = var19;
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
const char* var_class_name;
val* var_nat /* var nat: NativeArray[nullable Object] */;
long var_size /* var size: Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
short int var8 /* : Bool */;
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "NativeArray[Array#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 336);
show_backtrace(1);
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
var_class_name7 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 262);
show_backtrace(1);
}
var8 = var_size >= var1;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert \'positive\' failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 339);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 350);
show_backtrace(1);
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
/* method array#ArrayIterator#item for (self: ArrayIterator[nullable Object]): nullable Object */
val* array__ArrayIterator__item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : AbstractArrayRead[nullable Object] */;
long var2 /* : Int */;
val* var3 /* : nullable Object */;
var1 = self->attrs[COLOR_array__ArrayIterator___array].val; /* _array on <self:ArrayIterator[nullable Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _array");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 360);
show_backtrace(1);
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
const char* var_class_name;
short int var7 /* : Bool */;
var1 = self->attrs[COLOR_array__ArrayIterator___index].l; /* _index on <self:ArrayIterator[nullable Object]> */
var2 = self->attrs[COLOR_array__ArrayIterator___array].val; /* _array on <self:ArrayIterator[nullable Object]> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _array");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 364);
show_backtrace(1);
}
var3 = ((long (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__length]))(var2) /* length on <var2:AbstractArrayRead[nullable Object]>*/;
{ /* Inline kernel#Int#< (var1,var3) */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (!var6) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
show_backtrace(1);
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
const char* var_class_name;
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "AbstractArrayRead[ArrayIterator#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 368);
show_backtrace(1);
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
const char* var_class_name;
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 387);
show_backtrace(1);
}
var_e = p0;
var2 = self->attrs[COLOR_array__ArraySet___array].val; /* _array on <self:ArraySet[Object]> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _array");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 387);
show_backtrace(1);
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
const char* var_class_name;
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "SimpleCollection#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 389);
show_backtrace(1);
}
var_e = p0;
var1 = self->attrs[COLOR_array__ArraySet___array].val; /* _array on <self:ArraySet[Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _array");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 389);
show_backtrace(1);
}
var2 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__Collection__has]))(var1, var_e) /* has on <var1:Array[Object]>*/;
var3 = !var2;
if (var3){
var4 = self->attrs[COLOR_array__ArraySet___array].val; /* _array on <self:ArraySet[Object]> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _array");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 389);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _array");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 391);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _array");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 393);
show_backtrace(1);
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
const char* var_class_name;
short int var7 /* : Bool */;
val* var8 /* : Array[Object] */;
val* var9 /* : nullable Object */;
var1 = self->attrs[COLOR_array__ArraySet___array].val; /* _array on <self:ArraySet[Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _array");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 397);
show_backtrace(1);
}
var2 = ((long (*)(val*))(var1->class->vft[COLOR_abstract_collection__Collection__length]))(var1) /* length on <var1:Array[Object]>*/;
var3 = 0;
{ /* Inline kernel#Int#> (var2,var3) */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (!var6) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 263);
show_backtrace(1);
}
var7 = var2 > var3;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 397);
show_backtrace(1);
}
var8 = self->attrs[COLOR_array__ArraySet___array].val; /* _array on <self:ArraySet[Object]> */
if (var8 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _array");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 398);
show_backtrace(1);
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
const char* var_class_name;
val* var_item /* var item: Object */;
val* var1 /* : Array[Object] */;
long var2 /* : Int */;
long var_i /* var i: Int */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name9;
short int var10 /* : Bool */;
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "RemovableCollection#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 401);
show_backtrace(1);
}
var_item = p0;
var1 = self->attrs[COLOR_array__ArraySet___array].val; /* _array on <self:ArraySet[Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _array");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 403);
show_backtrace(1);
}
var2 = ((long (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__SequenceRead__index_of]))(var1, var_item) /* index_of on <var1:Array[Object]>*/;
var_i = var2;
var3 = 0;
{ /* Inline kernel#Int#>= (var_i,var3) */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (!var6) {
var_class_name9 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name9);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 262);
show_backtrace(1);
}
var10 = var_i >= var3;
var4 = var10;
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
const char* var_class_name;
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "RemovableCollection#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 407);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _array");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 409);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _array");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 411);
show_backtrace(1);
}
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__iterator]))(var2) /* iterator on <var2:Array[Object]>*/;
((void (*)(val*, val*))(var1->class->vft[COLOR_array__ArraySetIterator__init]))(var1, var3) /* init on <var1:ArraySetIterator[Object]>*/;
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _array");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 414);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _array");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 418);
show_backtrace(1);
}
var1 = self->attrs[COLOR_array__ArraySet___array].val; /* _array on <self:ArraySet[Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _array");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 418);
show_backtrace(1);
}
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__SequenceRead__last]))(var1) /* last on <var1:Array[Object]>*/;
((void (*)(val*, long, val*))(var->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var, var_i, var2) /* []= on <var:Array[Object]>*/;
var3 = self->attrs[COLOR_array__ArraySet___array].val; /* _array on <self:ArraySet[Object]> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _array");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 419);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _iter");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 433);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _iter");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 435);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _iter");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 437);
show_backtrace(1);
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
const char* var_class_name;
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "ArrayIterator[ArraySetIterator#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 439);
show_backtrace(1);
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
const char* var_class_name;
val* var_key /* var key: Object */;
long var2 /* : Int */;
long var_i /* var i: Int */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name9;
short int var10 /* : Bool */;
val* var11 /* : Array[Couple[Object, nullable Object]] */;
val* var12 /* : nullable Object */;
val* var13 /* : nullable Object */;
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MapRead#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 449);
show_backtrace(1);
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
var_class_name9 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name9);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 262);
show_backtrace(1);
}
var10 = var_i >= var3;
var4 = var10;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
if (var4){
var11 = self->attrs[COLOR_array__ArrayMap___items].val; /* _items on <self:ArrayMap[Object, nullable Object]> */
if (var11 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _items");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 454);
show_backtrace(1);
}
var12 = ((val* (*)(val*, long))(var11->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var11, var_i) /* [] on <var11:Array[Couple[Object, nullable Object]]>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_abstract_collection__Couple__second]))(var12) /* second on <var12:nullable Object(Couple[Object, nullable Object])>*/;
var = var13;
goto RET_LABEL;
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 456);
show_backtrace(1);
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
const char* var_class_name;
short int var1 /* : Bool */;
int cltype2;
int idtype3;
const struct type* type_struct4;
short int is_nullable;
const char* var_class_name5;
val* var_key /* var key: Object */;
val* var_item /* var item: nullable Object */;
long var6 /* : Int */;
long var_i /* var i: Int */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
val* var15 /* : Array[Couple[Object, nullable Object]] */;
val* var16 /* : nullable Object */;
val* var17 /* : Array[Couple[Object, nullable Object]] */;
val* var18 /* : Couple[Object, nullable Object] */;
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Map#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 460);
show_backtrace(1);
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
var_class_name5 = p1 == NULL ? "null" : p1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Map#1", var_class_name5);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 460);
show_backtrace(1);
}
var_key = p0;
var_item = p1;
var6 = ((long (*)(val*, val*))(self->class->vft[COLOR_array__ArrayMap__index]))(self, var_key) /* index on <self:ArrayMap[Object, nullable Object]>*/;
var_i = var6;
var7 = 0;
{ /* Inline kernel#Int#>= (var_i,var7) */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (!var10) {
var_class_name13 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 262);
show_backtrace(1);
}
var14 = var_i >= var7;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
if (var8){
var15 = self->attrs[COLOR_array__ArrayMap___items].val; /* _items on <self:ArrayMap[Object, nullable Object]> */
if (var15 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _items");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 465);
show_backtrace(1);
}
var16 = ((val* (*)(val*, long))(var15->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var15, var_i) /* [] on <var15:Array[Couple[Object, nullable Object]]>*/;
((void (*)(val*, val*))(var16->class->vft[COLOR_abstract_collection__Couple__second_61d]))(var16, var_item) /* second= on <var16:nullable Object(Couple[Object, nullable Object])>*/;
} else {
var17 = self->attrs[COLOR_array__ArrayMap___items].val; /* _items on <self:ArrayMap[Object, nullable Object]> */
if (var17 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _items");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 467);
show_backtrace(1);
}
var18 = NEW_abstract_collection__Couple(self->type->resolution_table->types[COLOR_abstract_collection__Couplearray__ArrayMap_FT0array__ArrayMap_FT1]);
((void (*)(val*, val*, val*))(var18->class->vft[COLOR_abstract_collection__Couple__init]))(var18, var_key, var_item) /* init on <var18:Couple[Object, nullable Object]>*/;
((void (*)(val*, val*))(var17->class->vft[COLOR_abstract_collection__Sequence__push]))(var17, var18) /* push on <var17:Array[Couple[Object, nullable Object]]>*/;
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @keys");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 471);
show_backtrace(1);
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
const char* var_class_name;
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "ArrayMapKeys[ArrayMap#0, ArrayMap#1]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 471);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @values");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 472);
show_backtrace(1);
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
const char* var_class_name;
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "ArrayMapValues[ArrayMap#0, ArrayMap#1]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 472);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _items");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 475);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _items");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 477);
show_backtrace(1);
}
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__iterator]))(var2) /* iterator on <var2:Array[Couple[Object, nullable Object]]>*/;
((void (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__CoupleMapIterator__init]))(var1, var3) /* init on <var1:CoupleMapIterator[Object, nullable Object]>*/;
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _items");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 479);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _items");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 481);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _items");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 484);
show_backtrace(1);
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
const char* var_class_name;
val* var_key /* var key: Object */;
long var2 /* : Int */;
long var_i /* var i: Int */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name9;
short int var10 /* : Bool */;
val* var11 /* : Array[Couple[Object, nullable Object]] */;
val* var12 /* : nullable Object */;
val* var13 /* : null */;
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "CoupleMap#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 486);
show_backtrace(1);
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
var_class_name9 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name9);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 262);
show_backtrace(1);
}
var10 = var_i >= var3;
var4 = var10;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
if (var4){
var11 = self->attrs[COLOR_array__ArrayMap___items].val; /* _items on <self:ArrayMap[Object, nullable Object]> */
if (var11 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _items");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 490);
show_backtrace(1);
}
var12 = ((val* (*)(val*, long))(var11->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var11, var_i) /* [] on <var11:Array[Couple[Object, nullable Object]]>*/;
var = var12;
goto RET_LABEL;
} else {
var13 = NULL;
var = var13;
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _items");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 502);
show_backtrace(1);
}
var1 = self->attrs[COLOR_array__ArrayMap___items].val; /* _items on <self:ArrayMap[Object, nullable Object]> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _items");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 502);
show_backtrace(1);
}
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__SequenceRead__last]))(var1) /* last on <var1:Array[Couple[Object, nullable Object]]>*/;
((void (*)(val*, long, val*))(var->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var, var_i, var2) /* []= on <var:Array[Couple[Object, nullable Object]]>*/;
var3 = self->attrs[COLOR_array__ArrayMap___items].val; /* _items on <self:ArrayMap[Object, nullable Object]> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _items");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 503);
show_backtrace(1);
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
const char* var_class_name;
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
const char* var_class_name11;
short int var12 /* : Bool */;
short int var_ /* var : Bool */;
val* var13 /* : Array[Couple[Object, nullable Object]] */;
val* var14 /* : nullable Object */;
val* var15 /* : nullable Object */;
short int var16 /* : Bool */;
long var17 /* : Int */;
long var_i /* var i: Int */;
val* var18 /* : Array[Couple[Object, nullable Object]] */;
long var19 /* : Int */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
short int var26 /* : Bool */;
val* var27 /* : Array[Couple[Object, nullable Object]] */;
val* var28 /* : nullable Object */;
val* var29 /* : nullable Object */;
short int var30 /* : Bool */;
long var31 /* : Int */;
long var32 /* : Int */;
long var34 /* : Int */;
long var35 /* : Int */;
long var36 /* : Int */;
long var38 /* : Int */;
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "ArrayMap#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 509);
show_backtrace(1);
}
var_key = p0;
var2 = self->attrs[COLOR_array__ArrayMap___last_index].l; /* _last_index on <self:ArrayMap[Object, nullable Object]> */
var_l = var2;
var4 = self->attrs[COLOR_array__ArrayMap___items].val; /* _items on <self:ArrayMap[Object, nullable Object]> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _items");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 514);
show_backtrace(1);
}
var5 = ((long (*)(val*))(var4->class->vft[COLOR_abstract_collection__Collection__length]))(var4) /* length on <var4:Array[Couple[Object, nullable Object]]>*/;
{ /* Inline kernel#Int#< (var_l,var5) */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var8 = 1; /* easy <var5:Int> isa OTHER*/
if (!var8) {
var_class_name11 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
show_backtrace(1);
}
var12 = var_l < var5;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var_ = var6;
if (var6){
var13 = self->attrs[COLOR_array__ArrayMap___items].val; /* _items on <self:ArrayMap[Object, nullable Object]> */
if (var13 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _items");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 514);
show_backtrace(1);
}
var14 = ((val* (*)(val*, long))(var13->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var13, var_l) /* [] on <var13:Array[Couple[Object, nullable Object]]>*/;
var15 = ((val* (*)(val*))(var14->class->vft[COLOR_abstract_collection__Couple__first]))(var14) /* first on <var14:nullable Object(Couple[Object, nullable Object])>*/;
var16 = ((short int (*)(val*, val*))(var15->class->vft[COLOR_kernel__Object___61d_61d]))(var15, var_key) /* == on <var15:nullable Object(Object)>*/;
var3 = var16;
} else {
var3 = var_;
}
if (var3){
var = var_l;
goto RET_LABEL;
} else {
}
var17 = 0;
var_i = var17;
for(;;) {
var18 = self->attrs[COLOR_array__ArrayMap___items].val; /* _items on <self:ArrayMap[Object, nullable Object]> */
if (var18 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _items");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 517);
show_backtrace(1);
}
var19 = ((long (*)(val*))(var18->class->vft[COLOR_abstract_collection__Collection__length]))(var18) /* length on <var18:Array[Couple[Object, nullable Object]]>*/;
{ /* Inline kernel#Int#< (var_i,var19) */
/* Covariant cast for argument 0 (i) <var19:Int> isa OTHER */
/* <var19:Int> isa OTHER */
var22 = 1; /* easy <var19:Int> isa OTHER*/
if (!var22) {
var_class_name25 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
show_backtrace(1);
}
var26 = var_i < var19;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
if (!var20) break;
var27 = self->attrs[COLOR_array__ArrayMap___items].val; /* _items on <self:ArrayMap[Object, nullable Object]> */
if (var27 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _items");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 518);
show_backtrace(1);
}
var28 = ((val* (*)(val*, long))(var27->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var27, var_i) /* [] on <var27:Array[Couple[Object, nullable Object]]>*/;
var29 = ((val* (*)(val*))(var28->class->vft[COLOR_abstract_collection__Couple__first]))(var28) /* first on <var28:nullable Object(Couple[Object, nullable Object])>*/;
var30 = ((short int (*)(val*, val*))(var29->class->vft[COLOR_kernel__Object___61d_61d]))(var29, var_key) /* == on <var29:nullable Object(Object)>*/;
if (var30){
self->attrs[COLOR_array__ArrayMap___last_index].l = var_i; /* _last_index on <self:ArrayMap[Object, nullable Object]> */
var = var_i;
goto RET_LABEL;
} else {
}
var31 = 1;
{ /* Inline kernel#Int#+ (var_i,var31) */
var34 = var_i + var31;
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
var_i = var32;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var35 = 1;
{ /* Inline kernel#Int#unary - (var35) */
var38 = -var35;
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
var = var36;
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @map");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 536);
show_backtrace(1);
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
const char* var_class_name;
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "ArrayMap[ArrayMapKeys#0, ArrayMapKeys#1]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 536);
show_backtrace(1);
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
const char* var_class_name;
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 538);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _items");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 539);
show_backtrace(1);
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
const char* var_class_name;
val* var_k /* var k: Object */;
val* var2 /* : ArrayMap[Object, nullable Object] */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 540);
show_backtrace(1);
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
var_class_name10 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 262);
show_backtrace(1);
}
var11 = var3 >= var4;
var5 = var11;
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
const char* var_class_name;
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 541);
show_backtrace(1);
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
const char* var_class_name;
val* var_key /* var key: Object */;
val* var1 /* : ArrayMap[Object, nullable Object] */;
long var2 /* : Int */;
long var_i /* var i: Int */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name9;
short int var10 /* : Bool */;
val* var11 /* : ArrayMap[Object, nullable Object] */;
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "RemovableCollection#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 546);
show_backtrace(1);
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
var_class_name9 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name9);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 262);
show_backtrace(1);
}
var10 = var_i >= var3;
var4 = var10;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
if (var4){
var11 = ((val* (*)(val*))(self->class->vft[COLOR_array__ArrayMapKeys__map]))(self) /* map on <self:ArrayMapKeys[Object, nullable Object]>*/;
((void (*)(val*, long))(var11->class->vft[COLOR_array__ArrayMap__remove_at_index]))(var11, var_i) /* remove_at_index on <var11:ArrayMap[Object, nullable Object]>*/;
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
const char* var_class_name;
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "RemovableCollection#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 551);
show_backtrace(1);
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
const char* var_class_name;
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "ArrayMap[ArrayMapKeys#0, ArrayMapKeys#1]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 534);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @map");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 556);
show_backtrace(1);
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
const char* var_class_name;
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "ArrayMap[ArrayMapValues#0, ArrayMapValues#1]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 556);
show_backtrace(1);
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
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _items");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 558);
show_backtrace(1);
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
const char* var_class_name;
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 563);
show_backtrace(1);
}
var_item = p0;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_array__ArrayMapValues__map]))(self) /* map on <self:ArrayMapValues[Object, nullable Object]>*/;
var3 = var2->attrs[COLOR_array__ArrayMap___items].val; /* _items on <var2:ArrayMap[Object, nullable Object]> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _items");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 566);
show_backtrace(1);
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
const char* var_class_name;
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 570);
show_backtrace(1);
}
var_item = p0;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_array__ArrayMapValues__map]))(self) /* map on <self:ArrayMapValues[Object, nullable Object]>*/;
var3 = var2->attrs[COLOR_array__ArrayMap___items].val; /* _items on <var2:ArrayMap[Object, nullable Object]> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _items");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 573);
show_backtrace(1);
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
const char* var_class_name;
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 577);
show_backtrace(1);
}
var_item = p0;
var2 = 0;
var_nb = var2;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_array__ArrayMapValues__map]))(self) /* map on <self:ArrayMapValues[Object, nullable Object]>*/;
var4 = var3->attrs[COLOR_array__ArrayMap___items].val; /* _items on <var3:ArrayMap[Object, nullable Object]> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _items");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 581);
show_backtrace(1);
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
const char* var_class_name;
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
const char* var_class_name14;
short int var15 /* : Bool */;
val* var16 /* : Array[Couple[Object, nullable Object]] */;
val* var17 /* : nullable Object */;
val* var18 /* : nullable Object */;
short int var19 /* : Bool */;
long var20 /* : Int */;
long var21 /* : Int */;
long var23 /* : Int */;
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "RemovableCollection#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 587);
show_backtrace(1);
}
var_item = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_array__ArrayMapValues__map]))(self) /* map on <self:ArrayMapValues[Object, nullable Object]>*/;
var_map = var1;
var2 = var_map->attrs[COLOR_array__ArrayMap___items].val; /* _items on <var_map:ArrayMap[Object, nullable Object]> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _items");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 590);
show_backtrace(1);
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
var_class_name14 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 262);
show_backtrace(1);
}
var15 = var_i >= var8;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
if (!var9) break;
var16 = var_map->attrs[COLOR_array__ArrayMap___items].val; /* _items on <var_map:ArrayMap[Object, nullable Object]> */
if (var16 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _items");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 592);
show_backtrace(1);
}
var17 = ((val* (*)(val*, long))(var16->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var16, var_i) /* [] on <var16:Array[Couple[Object, nullable Object]]>*/;
var18 = ((val* (*)(val*))(var17->class->vft[COLOR_abstract_collection__Couple__second]))(var17) /* second on <var17:nullable Object(Couple[Object, nullable Object])>*/;
if (var18 == NULL) {
var19 = (var_item == NULL);
} else {
var19 = ((short int (*)(val*, val*))(var18->class->vft[COLOR_kernel__Object___61d_61d]))(var18, var_item) /* == on <var18:nullable Object>*/;
}
if (var19){
((void (*)(val*, long))(var_map->class->vft[COLOR_array__ArrayMap__remove_at_index]))(var_map, var_i) /* remove_at_index on <var_map:ArrayMap[Object, nullable Object]>*/;
goto RET_LABEL;
} else {
}
var20 = 1;
{ /* Inline kernel#Int#- (var_i,var20) */
var23 = var_i - var20;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var_i = var21;
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
const char* var_class_name;
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
const char* var_class_name14;
short int var15 /* : Bool */;
val* var16 /* : Array[Couple[Object, nullable Object]] */;
val* var17 /* : nullable Object */;
val* var18 /* : nullable Object */;
short int var19 /* : Bool */;
long var20 /* : Int */;
long var21 /* : Int */;
long var23 /* : Int */;
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "RemovableCollection#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 600);
show_backtrace(1);
}
var_item = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_array__ArrayMapValues__map]))(self) /* map on <self:ArrayMapValues[Object, nullable Object]>*/;
var_map = var1;
var2 = var_map->attrs[COLOR_array__ArrayMap___items].val; /* _items on <var_map:ArrayMap[Object, nullable Object]> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _items");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 603);
show_backtrace(1);
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
var_class_name14 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 262);
show_backtrace(1);
}
var15 = var_i >= var8;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
if (!var9) break;
var16 = var_map->attrs[COLOR_array__ArrayMap___items].val; /* _items on <var_map:ArrayMap[Object, nullable Object]> */
if (var16 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _items");
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 605);
show_backtrace(1);
}
var17 = ((val* (*)(val*, long))(var16->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var16, var_i) /* [] on <var16:Array[Couple[Object, nullable Object]]>*/;
var18 = ((val* (*)(val*))(var17->class->vft[COLOR_abstract_collection__Couple__second]))(var17) /* second on <var17:nullable Object(Couple[Object, nullable Object])>*/;
if (var18 == NULL) {
var19 = (var_item == NULL);
} else {
var19 = ((short int (*)(val*, val*))(var18->class->vft[COLOR_kernel__Object___61d_61d]))(var18, var_item) /* == on <var18:nullable Object>*/;
}
if (var19){
((void (*)(val*, long))(var_map->class->vft[COLOR_array__ArrayMap__remove_at_index]))(var_map, var_i) /* remove_at_index on <var_map:ArrayMap[Object, nullable Object]>*/;
} else {
}
var20 = 1;
{ /* Inline kernel#Int#- (var_i,var20) */
var23 = var_i - var20;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var_i = var21;
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
const char* var_class_name;
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "ArrayMap[ArrayMapValues#0, ArrayMapValues#1]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 554);
show_backtrace(1);
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
const char* var_class_name;
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
var_class_name = p1 == NULL ? "null" : p1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "NativeArray#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 648);
show_backtrace(1);
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
const char* var_class_name;
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
var_class_name = p1 == NULL ? "null" : p1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "NativeArray#0", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 648);
show_backtrace(1);
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
const char* var_class_name;
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "NativeArray[NativeArray#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 649);
show_backtrace(1);
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
const char* var_class_name;
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "NativeArray[NativeArray#0]", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/collection/array.nit", 649);
show_backtrace(1);
}
memcpy(((struct instance_array__NativeArray*)p0)->values, ((struct instance_array__NativeArray*)self)->values, p1*sizeof(val*));
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
