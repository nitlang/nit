#include "kernel.sep.0.h"
/* method kernel#Object#object_id for (self: Object): Int */
long kernel__Object__object_id(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = (long)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Object#object_id for (self: Object): Int */
long VIRTUAL_kernel__Object__object_id(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{ /* Inline kernel#Object#object_id (self) */
var3 = (long)self;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Object#is_same_type for (self: Object, Object): Bool */
short int kernel__Object__is_same_type(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = (self == p0) || (self != NULL && p0 != NULL && self->class == p0->class); /* is_same_type_test */
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Object#is_same_type for (self: Object, Object): Bool */
short int VIRTUAL_kernel__Object__is_same_type(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline kernel#Object#is_same_type (self,p0) */
var3 = (self == p0) || (self != NULL && p0 != NULL && self->class == p0->class); /* is_same_type_test */
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Object#is_same_instance for (self: Object, nullable Object): Bool */
short int kernel__Object__is_same_instance(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self == p0 || (p0 != NULL && self->class == p0->class && ((self->class->box_kind == 1 && ((struct instance_kernel__Int*)self)->value == ((struct instance_kernel__Int*)p0)->value) || (self->class->box_kind == 2 && ((struct instance_kernel__Bool*)self)->value == ((struct instance_kernel__Bool*)p0)->value) || (self->class->box_kind == 3 && ((struct instance_kernel__Char*)self)->value == ((struct instance_kernel__Char*)p0)->value) || (self->class->box_kind == 4 && ((struct instance_kernel__Float*)self)->value == ((struct instance_kernel__Float*)p0)->value) || (self->class->box_kind == 5 && ((struct instance_string__NativeString*)self)->value == ((struct instance_string__NativeString*)p0)->value) || (self->class->box_kind == 6 && ((struct instance_kernel__Pointer*)self)->value == ((struct instance_kernel__Pointer*)p0)->value)));
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Object#is_same_instance for (self: Object, nullable Object): Bool */
short int VIRTUAL_kernel__Object__is_same_instance(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline kernel#Object#is_same_instance (self,p0) */
var3 = self == p0 || (p0 != NULL && self->class == p0->class && ((self->class->box_kind == 1 && ((struct instance_kernel__Int*)self)->value == ((struct instance_kernel__Int*)p0)->value) || (self->class->box_kind == 2 && ((struct instance_kernel__Bool*)self)->value == ((struct instance_kernel__Bool*)p0)->value) || (self->class->box_kind == 3 && ((struct instance_kernel__Char*)self)->value == ((struct instance_kernel__Char*)p0)->value) || (self->class->box_kind == 4 && ((struct instance_kernel__Float*)self)->value == ((struct instance_kernel__Float*)p0)->value) || (self->class->box_kind == 5 && ((struct instance_string__NativeString*)self)->value == ((struct instance_string__NativeString*)p0)->value) || (self->class->box_kind == 6 && ((struct instance_kernel__Pointer*)self)->value == ((struct instance_kernel__Pointer*)p0)->value)));
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Object#== for (self: Object, nullable Object): Bool */
short int kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var1 /* : Bool */;
var_other = p0;
var1 = ((short int (*)(val*, val*))(self->class->vft[COLOR_kernel__Object__is_same_instance]))(self, var_other) /* is_same_instance on <self:Object>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Object#== for (self: Object, nullable Object): Bool */
short int VIRTUAL_kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = kernel__Object___61d_61d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Object#!= for (self: Object, nullable Object): Bool */
short int kernel__Object___33d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
var_other = p0;
var1 = ((short int (*)(val*, val*))(self->class->vft[COLOR_kernel__Object___61d_61d]))(self, var_other) /* == on <self:Object>*/;
var2 = !var1;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Object#!= for (self: Object, nullable Object): Bool */
short int VIRTUAL_kernel__Object___33d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = kernel__Object___33d_61d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Object#output for (self: Object) */
void kernel__Object__output(val* self) {
char var /* : Char */;
long var2 /* : Int */;
char var4 /* : Char */;
var = '<';
{ /* Inline kernel#Char#output (var) */
printf("%c", var);
RET_LABEL1:(void)0;
}
var2 = ((long (*)(val*))(self->class->vft[COLOR_kernel__Object__object_id]))(self) /* object_id on <self:Object>*/;
{ /* Inline kernel#Int#output (var2) */
printf("%ld\n", var2);
RET_LABEL3:(void)0;
}
var4 = '>';
{ /* Inline kernel#Char#output (var4) */
printf("%c", var4);
RET_LABEL5:(void)0;
}
RET_LABEL:;
}
/* method kernel#Object#output for (self: Object) */
void VIRTUAL_kernel__Object__output(val* self) {
kernel__Object__output(self);
RET_LABEL:;
}
/* method kernel#Object#output_class_name for (self: Object) */
void kernel__Object__output_class_name(val* self) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
printf("%s\n", var_class_name);
RET_LABEL:;
}
/* method kernel#Object#output_class_name for (self: Object) */
void VIRTUAL_kernel__Object__output_class_name(val* self) {
const char* var_class_name;
{ /* Inline kernel#Object#output_class_name (self) */
var_class_name = self == NULL ? "null" : self->type->name;
printf("%s\n", var_class_name);
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method kernel#Object#exit for (self: Object, Int) */
void kernel__Object__exit(val* self, long p0) {
exit(p0);
RET_LABEL:;
}
/* method kernel#Object#exit for (self: Object, Int) */
void VIRTUAL_kernel__Object__exit(val* self, long p0) {
{ /* Inline kernel#Object#exit (self,p0) */
exit(p0);
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method kernel#Object#sys for (self: Object): Sys */
val* kernel__Object__sys(val* self) {
val* var /* : Sys */;
val* var1 /* : Sys */;
var1 = glob_sys;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Object#sys for (self: Object): Sys */
val* VIRTUAL_kernel__Object__sys(val* self) {
val* var /* : Sys */;
val* var1 /* : Sys */;
val* var3 /* : Sys */;
{ /* Inline kernel#Object#sys (self) */
var3 = glob_sys;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Object#hash for (self: Object): Int */
long kernel__Object__hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
long var5 /* : Int */;
var1 = ((long (*)(val*))(self->class->vft[COLOR_kernel__Object__object_id]))(self) /* object_id on <self:Object>*/;
var2 = 8;
{ /* Inline kernel#Int#/ (var1,var2) */
var5 = var1 / var2;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Object#hash for (self: Object): Int */
long VIRTUAL_kernel__Object__hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = kernel__Object__hash(self);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Sys#main for (self: Sys) */
void kernel__Sys__main(val* self) {
RET_LABEL:;
}
/* method kernel#Sys#main for (self: Object) */
void VIRTUAL_kernel__Sys__main(val* self) {
kernel__Sys__main(self);
RET_LABEL:;
}
/* method kernel#Sys#init for (self: Sys) */
void kernel__Sys__init(val* self) {
RET_LABEL:;
}
/* method kernel#Sys#init for (self: Object) */
void VIRTUAL_kernel__Sys__init(val* self) {
kernel__Sys__init(self);
RET_LABEL:;
}
/* method kernel#Comparable#< for (self: Comparable, Comparable): Bool */
short int kernel__Comparable___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
const char* var_class_name2;
/* Covariant cast for argument 0 (other) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 99);
show_backtrace(1);
}
var_class_name2 = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "<", var_class_name2);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 99);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method kernel#Comparable#< for (self: Object, Comparable): Bool */
short int VIRTUAL_kernel__Comparable___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = kernel__Comparable___60d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Comparable#<= for (self: Comparable, Comparable): Bool */
short int kernel__Comparable___60d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_other /* var other: Comparable */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 102);
show_backtrace(1);
}
var_other = p0;
var2 = ((short int (*)(val*, val*))(var_other->class->vft[COLOR_kernel__Comparable___60d]))(var_other, self) /* < on <var_other:Comparable>*/;
var3 = !var2;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Comparable#<= for (self: Object, Comparable): Bool */
short int VIRTUAL_kernel__Comparable___60d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = kernel__Comparable___60d_61d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Comparable#>= for (self: Comparable, Comparable): Bool */
short int kernel__Comparable___62d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_other /* var other: Comparable */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 106);
show_backtrace(1);
}
var_other = p0;
var2 = ((short int (*)(val*, val*))(self->class->vft[COLOR_kernel__Comparable___60d]))(self, var_other) /* < on <self:Comparable>*/;
var3 = !var2;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Comparable#>= for (self: Object, Comparable): Bool */
short int VIRTUAL_kernel__Comparable___62d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = kernel__Comparable___62d_61d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Comparable#> for (self: Comparable, Comparable): Bool */
short int kernel__Comparable___62d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_other /* var other: Comparable */;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 110);
show_backtrace(1);
}
var_other = p0;
var2 = ((short int (*)(val*, val*))(var_other->class->vft[COLOR_kernel__Comparable___60d]))(var_other, self) /* < on <var_other:Comparable>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Comparable#> for (self: Object, Comparable): Bool */
short int VIRTUAL_kernel__Comparable___62d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = kernel__Comparable___62d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Comparable#<=> for (self: Comparable, Comparable): Int */
long kernel__Comparable___60d_61d_62d(val* self, val* p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_other /* var other: Comparable */;
short int var2 /* : Bool */;
long var3 /* : Int */;
long var4 /* : Int */;
long var6 /* : Int */;
short int var7 /* : Bool */;
long var8 /* : Int */;
long var9 /* : Int */;
/* Covariant cast for argument 0 (other) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 113);
show_backtrace(1);
}
var_other = p0;
var2 = ((short int (*)(val*, val*))(self->class->vft[COLOR_kernel__Comparable___60d]))(self, var_other) /* < on <self:Comparable>*/;
if (var2){
var3 = 1;
{ /* Inline kernel#Int#unary - (var3) */
var6 = -var3;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var = var4;
goto RET_LABEL;
} else {
var7 = ((short int (*)(val*, val*))(var_other->class->vft[COLOR_kernel__Comparable___60d]))(var_other, self) /* < on <var_other:Comparable>*/;
if (var7){
var8 = 1;
var = var8;
goto RET_LABEL;
} else {
var9 = 0;
var = var9;
goto RET_LABEL;
}
}
RET_LABEL:;
return var;
}
/* method kernel#Comparable#<=> for (self: Object, Comparable): Int */
long VIRTUAL_kernel__Comparable___60d_61d_62d(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = kernel__Comparable___60d_61d_62d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Comparable#is_between for (self: Comparable, Comparable, Comparable): Bool */
short int kernel__Comparable__is_between(val* self, val* p0, val* p1) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
const char* var_class_name6;
val* var_c /* var c: Comparable */;
val* var_d /* var d: Comparable */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
short int var9 /* : Bool */;
/* Covariant cast for argument 0 (c) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 126);
show_backtrace(1);
}
/* Covariant cast for argument 1 (d) <p1:Comparable> isa OTHER */
/* <p1:Comparable> isa OTHER */
type_struct5 = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
if(cltype3 >= p1->type->table_size) {
var2 = 0;
} else {
var2 = p1->type->type_table[cltype3] == idtype4;
}
if (!var2) {
var_class_name6 = p1 == NULL ? "null" : p1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name6);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 126);
show_backtrace(1);
}
var_c = p0;
var_d = p1;
var8 = ((short int (*)(val*, val*))(var_c->class->vft[COLOR_kernel__Comparable___60d_61d]))(var_c, self) /* <= on <var_c:Comparable>*/;
var_ = var8;
if (var8){
var9 = ((short int (*)(val*, val*))(self->class->vft[COLOR_kernel__Comparable___60d_61d]))(self, var_d) /* <= on <self:Comparable>*/;
var7 = var9;
} else {
var7 = var_;
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Comparable#is_between for (self: Object, Comparable, Comparable): Bool */
short int VIRTUAL_kernel__Comparable__is_between(val* self, val* p0, val* p1) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = kernel__Comparable__is_between(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Comparable#max for (self: Comparable, Comparable): Comparable */
val* kernel__Comparable__max(val* self, val* p0) {
val* var /* : Comparable */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_other /* var other: Comparable */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
const struct type* type_struct6;
const char* var_class_name7;
/* Covariant cast for argument 0 (other) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 132);
show_backtrace(1);
}
var_other = p0;
var2 = ((short int (*)(val*, val*))(self->class->vft[COLOR_kernel__Comparable___60d]))(self, var_other) /* < on <self:Comparable>*/;
if (var2){
var = var_other;
goto RET_LABEL;
} else {
/* <self:Comparable> isa OTHER */
type_struct6 = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
cltype4 = type_struct6->color;
idtype5 = type_struct6->id;
if(cltype4 >= self->type->table_size) {
var3 = 0;
} else {
var3 = self->type->type_table[cltype4] == idtype5;
}
if (!var3) {
var_class_name7 = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 138);
show_backtrace(1);
}
var = self;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method kernel#Comparable#max for (self: Object, Comparable): Comparable */
val* VIRTUAL_kernel__Comparable__max(val* self, val* p0) {
val* var /* : Comparable */;
val* var1 /* : Comparable */;
var1 = kernel__Comparable__max(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Comparable#min for (self: Comparable, Comparable): Comparable */
val* kernel__Comparable__min(val* self, val* p0) {
val* var /* : Comparable */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_c /* var c: Comparable */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
const struct type* type_struct6;
const char* var_class_name7;
/* Covariant cast for argument 0 (c) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 142);
show_backtrace(1);
}
var_c = p0;
var2 = ((short int (*)(val*, val*))(var_c->class->vft[COLOR_kernel__Comparable___60d]))(var_c, self) /* < on <var_c:Comparable>*/;
if (var2){
var = var_c;
goto RET_LABEL;
} else {
/* <self:Comparable> isa OTHER */
type_struct6 = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
cltype4 = type_struct6->color;
idtype5 = type_struct6->id;
if(cltype4 >= self->type->table_size) {
var3 = 0;
} else {
var3 = self->type->type_table[cltype4] == idtype5;
}
if (!var3) {
var_class_name7 = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 148);
show_backtrace(1);
}
var = self;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method kernel#Comparable#min for (self: Object, Comparable): Comparable */
val* VIRTUAL_kernel__Comparable__min(val* self, val* p0) {
val* var /* : Comparable */;
val* var1 /* : Comparable */;
var1 = kernel__Comparable__min(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Discrete#succ for (self: Discrete): Discrete */
val* kernel__Discrete__succ(val* self) {
val* var /* : Discrete */;
long var1 /* : Int */;
val* var2 /* : Discrete */;
var1 = 1;
var2 = ((val* (*)(val*, long))(self->class->vft[COLOR_kernel__Discrete___43d]))(self, var1) /* + on <self:Discrete>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Discrete#succ for (self: Object): Discrete */
val* VIRTUAL_kernel__Discrete__succ(val* self) {
val* var /* : Discrete */;
val* var1 /* : Discrete */;
var1 = kernel__Discrete__succ(self);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Discrete#prec for (self: Discrete): Discrete */
val* kernel__Discrete__prec(val* self) {
val* var /* : Discrete */;
long var1 /* : Int */;
val* var2 /* : Discrete */;
var1 = 1;
var2 = ((val* (*)(val*, long))(self->class->vft[COLOR_kernel__Discrete___45d]))(self, var1) /* - on <self:Discrete>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Discrete#prec for (self: Object): Discrete */
val* VIRTUAL_kernel__Discrete__prec(val* self) {
val* var /* : Discrete */;
val* var1 /* : Discrete */;
var1 = kernel__Discrete__prec(self);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Discrete#+ for (self: Discrete, Int): Discrete */
val* kernel__Discrete___43d(val* self, long p0) {
val* var /* : Discrete */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "+", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 165);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method kernel#Discrete#+ for (self: Object, Int): Discrete */
val* VIRTUAL_kernel__Discrete___43d(val* self, long p0) {
val* var /* : Discrete */;
val* var1 /* : Discrete */;
var1 = kernel__Discrete___43d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Discrete#- for (self: Discrete, Int): Discrete */
val* kernel__Discrete___45d(val* self, long p0) {
val* var /* : Discrete */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "-", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 168);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method kernel#Discrete#- for (self: Object, Int): Discrete */
val* VIRTUAL_kernel__Discrete___45d(val* self, long p0) {
val* var /* : Discrete */;
val* var1 /* : Discrete */;
var1 = kernel__Discrete___45d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Discrete#distance for (self: Discrete, Discrete): Int */
long kernel__Discrete__distance(val* self, val* p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_d /* var d: Discrete */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
const struct type* type_struct6;
const char* var_class_name7;
val* var_cursor /* var cursor: Discrete */;
val* var_stop /* var stop: Discrete */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const struct type* type_struct12;
const char* var_class_name13;
long var14 /* : Int */;
long var15 /* : Int */;
long var_nb /* var nb: Int */;
short int var16 /* : Bool */;
val* var17 /* : Discrete */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const struct type* type_struct21;
const char* var_class_name22;
long var23 /* : Int */;
long var24 /* : Int */;
long var26 /* : Int */;
/* Covariant cast for argument 0 (d) <p0:Discrete> isa OTHER */
/* <p0:Discrete> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 171);
show_backtrace(1);
}
var_d = p0;
var2 = ((short int (*)(val*, val*))(self->class->vft[COLOR_kernel__Comparable___60d]))(self, var_d) /* < on <self:Discrete>*/;
if (var2){
/* <self:Discrete> isa OTHER */
type_struct6 = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
cltype4 = type_struct6->color;
idtype5 = type_struct6->id;
if(cltype4 >= self->type->table_size) {
var3 = 0;
} else {
var3 = self->type->type_table[cltype4] == idtype5;
}
if (!var3) {
var_class_name7 = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 180);
show_backtrace(1);
}
var_cursor = self;
var_stop = var_d;
} else {
var8 = ((short int (*)(val*, val*))(self->class->vft[COLOR_kernel__Comparable___62d]))(self, var_d) /* > on <self:Discrete>*/;
if (var8){
var_cursor = var_d;
/* <self:Discrete> isa OTHER */
type_struct12 = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
cltype10 = type_struct12->color;
idtype11 = type_struct12->id;
if(cltype10 >= self->type->table_size) {
var9 = 0;
} else {
var9 = self->type->type_table[cltype10] == idtype11;
}
if (!var9) {
var_class_name13 = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 184);
show_backtrace(1);
}
var_stop = self;
} else {
var14 = 0;
var = var14;
goto RET_LABEL;
}
}
var15 = 0;
var_nb = var15;
for(;;) {
var16 = ((short int (*)(val*, val*))(var_cursor->class->vft[COLOR_kernel__Comparable___60d]))(var_cursor, var_stop) /* < on <var_cursor:Discrete>*/;
if (!var16) break;
var17 = ((val* (*)(val*))(var_cursor->class->vft[COLOR_kernel__Discrete__succ]))(var_cursor) /* succ on <var_cursor:Discrete>*/;
/* <var17:Discrete> isa OTHER */
type_struct21 = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
cltype19 = type_struct21->color;
idtype20 = type_struct21->id;
if(cltype19 >= var17->type->table_size) {
var18 = 0;
} else {
var18 = var17->type->type_table[cltype19] == idtype20;
}
if (!var18) {
var_class_name22 = var17 == NULL ? "null" : var17->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 191);
show_backtrace(1);
}
var_cursor = var17;
var23 = 1;
{ /* Inline kernel#Int#+ (var_nb,var23) */
var26 = var_nb + var23;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
var_nb = var24;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var = var_nb;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Discrete#distance for (self: Object, Discrete): Int */
long VIRTUAL_kernel__Discrete__distance(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = kernel__Discrete__distance(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Bool#object_id for (self: Bool): Int */
long kernel__Bool__object_id(short int self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = (long)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Bool#object_id for (self: Object): Int */
long VIRTUAL_kernel__Bool__object_id(val* self) {
long var /* : Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
long var4 /* : Int */;
{ /* Inline kernel#Bool#object_id (self) */
var3 = ((struct instance_kernel__Bool*)self)->value; /* autounbox from Object to Bool */;
var4 = (long)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Bool#== for (self: Bool, nullable Object): Bool */
short int kernel__Bool___61d_61d(short int self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
var1 = (p0 != NULL) && (p0->class == &class_kernel__Bool);
if (var1) {
var2 = ((struct instance_kernel__Bool*)p0)->value; /* autounbox from nullable Object to Bool */;
var1 = (var2 == self);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Bool#== for (self: Object, nullable Object): Bool */
short int VIRTUAL_kernel__Bool___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline kernel#Bool#== (self,p0) */
var3 = self == p0 || (p0 != NULL && self->class == p0->class && ((struct instance_kernel__Bool*)self)->value == ((struct instance_kernel__Bool*)p0)->value);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Bool#!= for (self: Bool, nullable Object): Bool */
short int kernel__Bool___33d_61d(short int self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
var1 = (p0 != NULL) && (p0->class == &class_kernel__Bool);
if (var1) {
var2 = ((struct instance_kernel__Bool*)p0)->value; /* autounbox from nullable Object to Bool */;
var1 = (var2 == self);
}
var3 = !var1;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Bool#!= for (self: Object, nullable Object): Bool */
short int VIRTUAL_kernel__Bool___33d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
{ /* Inline kernel#Bool#!= (self,p0) */
var3 = self == p0 || (p0 != NULL && self->class == p0->class && ((struct instance_kernel__Bool*)self)->value == ((struct instance_kernel__Bool*)p0)->value);
var4 = !var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Bool#output for (self: Bool) */
void kernel__Bool__output(short int self) {
printf(self?"true\n":"false\n");
RET_LABEL:;
}
/* method kernel#Bool#output for (self: Object) */
void VIRTUAL_kernel__Bool__output(val* self) {
short int var /* : Bool */;
{ /* Inline kernel#Bool#output (self) */
var = ((struct instance_kernel__Bool*)self)->value; /* autounbox from Object to Bool */;
printf(var?"true\n":"false\n");
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method kernel#Bool#hash for (self: Bool): Int */
long kernel__Bool__hash(short int self) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
if (self){
var1 = 1;
var = var1;
goto RET_LABEL;
} else {
var2 = 0;
var = var2;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method kernel#Bool#hash for (self: Object): Int */
long VIRTUAL_kernel__Bool__hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
var2 = ((struct instance_kernel__Bool*)self)->value; /* autounbox from Object to Bool */;
var1 = kernel__Bool__hash(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Float#object_id for (self: Float): Int */
long kernel__Float__object_id(double self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = (double)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Float#object_id for (self: Object): Int */
long VIRTUAL_kernel__Float__object_id(val* self) {
long var /* : Int */;
long var1 /* : Int */;
double var3 /* : Float */;
long var4 /* : Int */;
{ /* Inline kernel#Float#object_id (self) */
var3 = ((struct instance_kernel__Float*)self)->value; /* autounbox from Object to Float */;
var4 = (double)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Float#output for (self: Float) */
void kernel__Float__output(double self) {
printf("%f\n", self);
RET_LABEL:;
}
/* method kernel#Float#output for (self: Object) */
void VIRTUAL_kernel__Float__output(val* self) {
double var /* : Float */;
{ /* Inline kernel#Float#output (self) */
var = ((struct instance_kernel__Float*)self)->value; /* autounbox from Object to Float */;
printf("%f\n", var);
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method kernel#Float#<= for (self: Float, Float): Bool */
short int kernel__Float___60d_61d(double self, double p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self <= p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Float#<= for (self: Object, Float): Bool */
short int VIRTUAL_kernel__Float___60d_61d(val* self, double p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
double var3 /* : Float */;
short int var4 /* : Bool */;
{ /* Inline kernel#Float#<= (self,p0) */
var3 = ((struct instance_kernel__Float*)self)->value; /* autounbox from Object to Float */;
var4 = var3 <= p0;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Float#< for (self: Float, Float): Bool */
short int kernel__Float___60d(double self, double p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self < p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Float#< for (self: Object, Float): Bool */
short int VIRTUAL_kernel__Float___60d(val* self, double p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
double var3 /* : Float */;
short int var4 /* : Bool */;
{ /* Inline kernel#Float#< (self,p0) */
var3 = ((struct instance_kernel__Float*)self)->value; /* autounbox from Object to Float */;
var4 = var3 < p0;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Float#>= for (self: Float, Float): Bool */
short int kernel__Float___62d_61d(double self, double p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self >= p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Float#>= for (self: Object, Float): Bool */
short int VIRTUAL_kernel__Float___62d_61d(val* self, double p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
double var3 /* : Float */;
short int var4 /* : Bool */;
{ /* Inline kernel#Float#>= (self,p0) */
var3 = ((struct instance_kernel__Float*)self)->value; /* autounbox from Object to Float */;
var4 = var3 >= p0;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Float#> for (self: Float, Float): Bool */
short int kernel__Float___62d(double self, double p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self > p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Float#> for (self: Object, Float): Bool */
short int VIRTUAL_kernel__Float___62d(val* self, double p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
double var3 /* : Float */;
short int var4 /* : Bool */;
{ /* Inline kernel#Float#> (self,p0) */
var3 = ((struct instance_kernel__Float*)self)->value; /* autounbox from Object to Float */;
var4 = var3 > p0;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Float#+ for (self: Float, Float): Float */
double kernel__Float___43d(double self, double p0) {
double var /* : Float */;
double var1 /* : Float */;
var1 = self + p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Float#+ for (self: Object, Float): Float */
double VIRTUAL_kernel__Float___43d(val* self, double p0) {
double var /* : Float */;
double var1 /* : Float */;
double var3 /* : Float */;
double var4 /* : Float */;
{ /* Inline kernel#Float#+ (self,p0) */
var3 = ((struct instance_kernel__Float*)self)->value; /* autounbox from Object to Float */;
var4 = var3 + p0;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Float#unary - for (self: Float): Float */
double kernel__Float__unary_32d_45d(double self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = -self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Float#unary - for (self: Object): Float */
double VIRTUAL_kernel__Float__unary_32d_45d(val* self) {
double var /* : Float */;
double var1 /* : Float */;
double var3 /* : Float */;
double var4 /* : Float */;
{ /* Inline kernel#Float#unary - (self) */
var3 = ((struct instance_kernel__Float*)self)->value; /* autounbox from Object to Float */;
var4 = -var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Float#- for (self: Float, Float): Float */
double kernel__Float___45d(double self, double p0) {
double var /* : Float */;
double var1 /* : Float */;
var1 = self - p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Float#- for (self: Object, Float): Float */
double VIRTUAL_kernel__Float___45d(val* self, double p0) {
double var /* : Float */;
double var1 /* : Float */;
double var3 /* : Float */;
double var4 /* : Float */;
{ /* Inline kernel#Float#- (self,p0) */
var3 = ((struct instance_kernel__Float*)self)->value; /* autounbox from Object to Float */;
var4 = var3 - p0;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Float#* for (self: Float, Float): Float */
double kernel__Float___42d(double self, double p0) {
double var /* : Float */;
double var1 /* : Float */;
var1 = self * p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Float#* for (self: Object, Float): Float */
double VIRTUAL_kernel__Float___42d(val* self, double p0) {
double var /* : Float */;
double var1 /* : Float */;
double var3 /* : Float */;
double var4 /* : Float */;
{ /* Inline kernel#Float#* (self,p0) */
var3 = ((struct instance_kernel__Float*)self)->value; /* autounbox from Object to Float */;
var4 = var3 * p0;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Float#/ for (self: Float, Float): Float */
double kernel__Float___47d(double self, double p0) {
double var /* : Float */;
double var1 /* : Float */;
var1 = self / p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Float#/ for (self: Object, Float): Float */
double VIRTUAL_kernel__Float___47d(val* self, double p0) {
double var /* : Float */;
double var1 /* : Float */;
double var3 /* : Float */;
double var4 /* : Float */;
{ /* Inline kernel#Float#/ (self,p0) */
var3 = ((struct instance_kernel__Float*)self)->value; /* autounbox from Object to Float */;
var4 = var3 / p0;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Float#to_i for (self: Float): Int */
long kernel__Float__to_i(double self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = (long)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Float#to_i for (self: Object): Int */
long VIRTUAL_kernel__Float__to_i(val* self) {
long var /* : Int */;
long var1 /* : Int */;
double var3 /* : Float */;
long var4 /* : Int */;
{ /* Inline kernel#Float#to_i (self) */
var3 = ((struct instance_kernel__Float*)self)->value; /* autounbox from Object to Float */;
var4 = (long)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#object_id for (self: Int): Int */
long kernel__Int__object_id(long self) {
long var /* : Int */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#object_id for (self: Object): Int */
long VIRTUAL_kernel__Int__object_id(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{ /* Inline kernel#Int#object_id (self) */
var3 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#hash for (self: Int): Int */
long kernel__Int__hash(long self) {
long var /* : Int */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#hash for (self: Object): Int */
long VIRTUAL_kernel__Int__hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
var2 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var1 = kernel__Int__hash(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#== for (self: Int, nullable Object): Bool */
short int kernel__Int___61d_61d(long self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
long var2 /* : Int */;
var1 = (p0 != NULL) && (p0->class == &class_kernel__Int);
if (var1) {
var2 = ((struct instance_kernel__Int*)p0)->value; /* autounbox from nullable Object to Int */;
var1 = (var2 == self);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#== for (self: Object, nullable Object): Bool */
short int VIRTUAL_kernel__Int___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline kernel#Int#== (self,p0) */
var3 = self == p0 || (p0 != NULL && self->class == p0->class && ((struct instance_kernel__Int*)self)->value == ((struct instance_kernel__Int*)p0)->value);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#!= for (self: Int, nullable Object): Bool */
short int kernel__Int___33d_61d(long self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
long var2 /* : Int */;
short int var3 /* : Bool */;
var1 = (p0 != NULL) && (p0->class == &class_kernel__Int);
if (var1) {
var2 = ((struct instance_kernel__Int*)p0)->value; /* autounbox from nullable Object to Int */;
var1 = (var2 == self);
}
var3 = !var1;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#!= for (self: Object, nullable Object): Bool */
short int VIRTUAL_kernel__Int___33d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
{ /* Inline kernel#Int#!= (self,p0) */
var3 = self == p0 || (p0 != NULL && self->class == p0->class && ((struct instance_kernel__Int*)self)->value == ((struct instance_kernel__Int*)p0)->value);
var4 = !var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#output for (self: Int) */
void kernel__Int__output(long self) {
printf("%ld\n", self);
RET_LABEL:;
}
/* method kernel#Int#output for (self: Object) */
void VIRTUAL_kernel__Int__output(val* self) {
long var /* : Int */;
{ /* Inline kernel#Int#output (self) */
var = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
printf("%ld\n", var);
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method kernel#Int#<= for (self: Int, Int): Bool */
short int kernel__Int___60d_61d(long self, long p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Int> isa OTHER */
/* <p0:Int> isa OTHER */
var1 = 1; /* easy <p0:Int> isa OTHER*/
if (!var1) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 260);
show_backtrace(1);
}
var2 = self <= p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#<= for (self: Object, Comparable): Bool */
short int VIRTUAL_kernel__Int___60d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
long var4 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
{ /* Inline kernel#Int#<= (self,p0) */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var3 = 0;
} else {
var3 = p0->type->type_table[cltype] == idtype;
}
if (!var3) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 260);
show_backtrace(1);
}
var4 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var5 = ((struct instance_kernel__Int*)p0)->value; /* autounbox from Comparable to Int */;
var6 = var4 <= var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#< for (self: Int, Int): Bool */
short int kernel__Int___60d(long self, long p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Int> isa OTHER */
/* <p0:Int> isa OTHER */
var1 = 1; /* easy <p0:Int> isa OTHER*/
if (!var1) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
show_backtrace(1);
}
var2 = self < p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#< for (self: Object, Comparable): Bool */
short int VIRTUAL_kernel__Int___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
long var4 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
{ /* Inline kernel#Int#< (self,p0) */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var3 = 0;
} else {
var3 = p0->type->type_table[cltype] == idtype;
}
if (!var3) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
show_backtrace(1);
}
var4 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var5 = ((struct instance_kernel__Int*)p0)->value; /* autounbox from Comparable to Int */;
var6 = var4 < var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#>= for (self: Int, Int): Bool */
short int kernel__Int___62d_61d(long self, long p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Int> isa OTHER */
/* <p0:Int> isa OTHER */
var1 = 1; /* easy <p0:Int> isa OTHER*/
if (!var1) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 262);
show_backtrace(1);
}
var2 = self >= p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#>= for (self: Object, Comparable): Bool */
short int VIRTUAL_kernel__Int___62d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
long var4 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
{ /* Inline kernel#Int#>= (self,p0) */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var3 = 0;
} else {
var3 = p0->type->type_table[cltype] == idtype;
}
if (!var3) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 262);
show_backtrace(1);
}
var4 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var5 = ((struct instance_kernel__Int*)p0)->value; /* autounbox from Comparable to Int */;
var6 = var4 >= var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#> for (self: Int, Int): Bool */
short int kernel__Int___62d(long self, long p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Int> isa OTHER */
/* <p0:Int> isa OTHER */
var1 = 1; /* easy <p0:Int> isa OTHER*/
if (!var1) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 263);
show_backtrace(1);
}
var2 = self > p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#> for (self: Object, Comparable): Bool */
short int VIRTUAL_kernel__Int___62d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
long var4 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
{ /* Inline kernel#Int#> (self,p0) */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var3 = 0;
} else {
var3 = p0->type->type_table[cltype] == idtype;
}
if (!var3) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 263);
show_backtrace(1);
}
var4 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var5 = ((struct instance_kernel__Int*)p0)->value; /* autounbox from Comparable to Int */;
var6 = var4 > var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#+ for (self: Int, Int): Int */
long kernel__Int___43d(long self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self + p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#+ for (self: Object, Int): Discrete */
val* VIRTUAL_kernel__Int___43d(val* self, long p0) {
val* var /* : Discrete */;
long var1 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
val* var5 /* : Discrete */;
{ /* Inline kernel#Int#+ (self,p0) */
var3 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var4 = var3 + p0;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var5 = BOX_kernel__Int(var1); /* autobox from Int to Discrete */
var = var5;
RET_LABEL:;
return var;
}
/* method kernel#Int#unary - for (self: Int): Int */
long kernel__Int__unary_32d_45d(long self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = -self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#unary - for (self: Object): Int */
long VIRTUAL_kernel__Int__unary_32d_45d(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
{ /* Inline kernel#Int#unary - (self) */
var3 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var4 = -var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#- for (self: Int, Int): Int */
long kernel__Int___45d(long self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self - p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#- for (self: Object, Int): Discrete */
val* VIRTUAL_kernel__Int___45d(val* self, long p0) {
val* var /* : Discrete */;
long var1 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
val* var5 /* : Discrete */;
{ /* Inline kernel#Int#- (self,p0) */
var3 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var4 = var3 - p0;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var5 = BOX_kernel__Int(var1); /* autobox from Int to Discrete */
var = var5;
RET_LABEL:;
return var;
}
/* method kernel#Int#* for (self: Int, Int): Int */
long kernel__Int___42d(long self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self * p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#* for (self: Object, Int): Int */
long VIRTUAL_kernel__Int___42d(val* self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
{ /* Inline kernel#Int#* (self,p0) */
var3 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var4 = var3 * p0;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#/ for (self: Int, Int): Int */
long kernel__Int___47d(long self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self / p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#/ for (self: Object, Int): Int */
long VIRTUAL_kernel__Int___47d(val* self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
{ /* Inline kernel#Int#/ (self,p0) */
var3 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var4 = var3 / p0;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#% for (self: Int, Int): Int */
long kernel__Int___37d(long self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self % p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#% for (self: Object, Int): Int */
long VIRTUAL_kernel__Int___37d(val* self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
{ /* Inline kernel#Int#% (self,p0) */
var3 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var4 = var3 % p0;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#lshift for (self: Int, Int): Int */
long kernel__Int__lshift(long self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self << p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#lshift for (self: Object, Int): Int */
long VIRTUAL_kernel__Int__lshift(val* self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
{ /* Inline kernel#Int#lshift (self,p0) */
var3 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var4 = var3 << p0;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#rshift for (self: Int, Int): Int */
long kernel__Int__rshift(long self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self >> p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#rshift for (self: Object, Int): Int */
long VIRTUAL_kernel__Int__rshift(val* self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
{ /* Inline kernel#Int#rshift (self,p0) */
var3 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var4 = var3 >> p0;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#to_f for (self: Int): Float */
double kernel__Int__to_f(long self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = (double)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#to_f for (self: Object): Float */
double VIRTUAL_kernel__Int__to_f(val* self) {
double var /* : Float */;
double var1 /* : Float */;
long var3 /* : Int */;
double var4 /* : Float */;
{ /* Inline kernel#Int#to_f (self) */
var3 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var4 = (double)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#succ for (self: Int): Int */
long kernel__Int__succ(long self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self+1;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#succ for (self: Object): Discrete */
val* VIRTUAL_kernel__Int__succ(val* self) {
val* var /* : Discrete */;
long var1 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
val* var5 /* : Discrete */;
{ /* Inline kernel#Int#succ (self) */
var3 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var4 = var3+1;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var5 = BOX_kernel__Int(var1); /* autobox from Int to Discrete */
var = var5;
RET_LABEL:;
return var;
}
/* method kernel#Int#prec for (self: Int): Int */
long kernel__Int__prec(long self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self-1;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#prec for (self: Object): Discrete */
val* VIRTUAL_kernel__Int__prec(val* self) {
val* var /* : Discrete */;
long var1 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
val* var5 /* : Discrete */;
{ /* Inline kernel#Int#prec (self) */
var3 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var4 = var3-1;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var5 = BOX_kernel__Int(var1); /* autobox from Int to Discrete */
var = var5;
RET_LABEL:;
return var;
}
/* method kernel#Int#distance for (self: Int, Int): Int */
long kernel__Int__distance(long self, long p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var_i /* var i: Int */;
long var2 /* : Int */;
long var4 /* : Int */;
long var_d /* var d: Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
short int var12 /* : Bool */;
long var13 /* : Int */;
long var15 /* : Int */;
/* Covariant cast for argument 0 (i) <p0:Int> isa OTHER */
/* <p0:Int> isa OTHER */
var1 = 1; /* easy <p0:Int> isa OTHER*/
if (!var1) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 289);
show_backtrace(1);
}
var_i = p0;
{ /* Inline kernel#Int#- (self,var_i) */
var4 = self - var_i;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var_d = var2;
var5 = 0;
{ /* Inline kernel#Int#>= (var_d,var5) */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var8 = 1; /* easy <var5:Int> isa OTHER*/
if (!var8) {
var_class_name11 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 262);
show_backtrace(1);
}
var12 = var_d >= var5;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
if (var6){
var = var_d;
goto RET_LABEL;
} else {
{ /* Inline kernel#Int#unary - (var_d) */
var15 = -var_d;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var = var13;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method kernel#Int#distance for (self: Object, Discrete): Int */
long VIRTUAL_kernel__Int__distance(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
var2 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var3 = ((struct instance_kernel__Int*)p0)->value; /* autounbox from Discrete to Int */;
var1 = kernel__Int__distance(var2, var3);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#<=> for (self: Int, Int): Int */
long kernel__Int___60d_61d_62d(long self, long p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var_other /* var other: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var10 /* : Int */;
long var12 /* : Int */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
short int var19 /* : Bool */;
long var20 /* : Int */;
long var21 /* : Int */;
/* Covariant cast for argument 0 (other) <p0:Int> isa OTHER */
/* <p0:Int> isa OTHER */
var1 = 1; /* easy <p0:Int> isa OTHER*/
if (!var1) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 299);
show_backtrace(1);
}
var_other = p0;
{ /* Inline kernel#Int#< (self,var_other) */
/* Covariant cast for argument 0 (i) <var_other:Int> isa OTHER */
/* <var_other:Int> isa OTHER */
var4 = 1; /* easy <var_other:Int> isa OTHER*/
if (!var4) {
var_class_name7 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
show_backtrace(1);
}
var8 = self < var_other;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
if (var2){
var9 = 1;
{ /* Inline kernel#Int#unary - (var9) */
var12 = -var9;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var = var10;
goto RET_LABEL;
} else {
{ /* Inline kernel#Int#< (var_other,self) */
/* Covariant cast for argument 0 (i) <self:Int> isa OTHER */
/* <self:Int> isa OTHER */
var15 = 1; /* easy <self:Int> isa OTHER*/
if (!var15) {
var_class_name18 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
show_backtrace(1);
}
var19 = var_other < self;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
if (var13){
var20 = 1;
var = var20;
goto RET_LABEL;
} else {
var21 = 0;
var = var21;
goto RET_LABEL;
}
}
RET_LABEL:;
return var;
}
/* method kernel#Int#<=> for (self: Object, Comparable): Int */
long VIRTUAL_kernel__Int___60d_61d_62d(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
var2 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var3 = ((struct instance_kernel__Int*)p0)->value; /* autounbox from Comparable to Int */;
var1 = kernel__Int___60d_61d_62d(var2, var3);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#is_between for (self: Int, Int, Int): Bool */
short int kernel__Int__is_between(long self, long p0, long p1) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const char* var_class_name5;
long var_c /* var c: Int */;
long var_d /* var d: Int */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
short int var13 /* : Bool */;
short int var_ /* var : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
/* Covariant cast for argument 0 (c) <p0:Int> isa OTHER */
/* <p0:Int> isa OTHER */
var1 = 1; /* easy <p0:Int> isa OTHER*/
if (!var1) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 310);
show_backtrace(1);
}
/* Covariant cast for argument 1 (d) <p1:Int> isa OTHER */
/* <p1:Int> isa OTHER */
var2 = 1; /* easy <p1:Int> isa OTHER*/
if (!var2) {
var_class_name5 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name5);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 310);
show_backtrace(1);
}
var_c = p0;
var_d = p1;
{ /* Inline kernel#Int#< (self,var_c) */
/* Covariant cast for argument 0 (i) <var_c:Int> isa OTHER */
/* <var_c:Int> isa OTHER */
var9 = 1; /* easy <var_c:Int> isa OTHER*/
if (!var9) {
var_class_name12 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
show_backtrace(1);
}
var13 = self < var_c;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var_ = var7;
if (var7){
var6 = var_;
} else {
{ /* Inline kernel#Int#< (var_d,self) */
/* Covariant cast for argument 0 (i) <self:Int> isa OTHER */
/* <self:Int> isa OTHER */
var16 = 1; /* easy <self:Int> isa OTHER*/
if (!var16) {
var_class_name19 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
show_backtrace(1);
}
var20 = var_d < self;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var6 = var14;
}
if (var6){
var21 = 0;
var = var21;
goto RET_LABEL;
} else {
var22 = 1;
var = var22;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method kernel#Int#is_between for (self: Object, Comparable, Comparable): Bool */
short int VIRTUAL_kernel__Int__is_between(val* self, val* p0, val* p1) {
short int var /* : Bool */;
short int var1 /* : Bool */;
long var2 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
var2 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var3 = ((struct instance_kernel__Int*)p0)->value; /* autounbox from Comparable to Int */;
var4 = ((struct instance_kernel__Int*)p1)->value; /* autounbox from Comparable to Int */;
var1 = kernel__Int__is_between(var2, var3, var4);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#max for (self: Int, Int): Int */
long kernel__Int__max(long self, long p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var_other /* var other: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
short int var8 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Int> isa OTHER */
/* <p0:Int> isa OTHER */
var1 = 1; /* easy <p0:Int> isa OTHER*/
if (!var1) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 319);
show_backtrace(1);
}
var_other = p0;
{ /* Inline kernel#Int#< (self,var_other) */
/* Covariant cast for argument 0 (i) <var_other:Int> isa OTHER */
/* <var_other:Int> isa OTHER */
var4 = 1; /* easy <var_other:Int> isa OTHER*/
if (!var4) {
var_class_name7 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
show_backtrace(1);
}
var8 = self < var_other;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
if (var2){
var = var_other;
goto RET_LABEL;
} else {
var = self;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method kernel#Int#max for (self: Object, Comparable): Comparable */
val* VIRTUAL_kernel__Int__max(val* self, val* p0) {
val* var /* : Comparable */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
val* var4 /* : Comparable */;
var2 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var3 = ((struct instance_kernel__Int*)p0)->value; /* autounbox from Comparable to Int */;
var1 = kernel__Int__max(var2, var3);
var4 = BOX_kernel__Int(var1); /* autobox from Int to Comparable */
var = var4;
RET_LABEL:;
return var;
}
/* method kernel#Int#min for (self: Int, Int): Int */
long kernel__Int__min(long self, long p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var_c /* var c: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
short int var8 /* : Bool */;
/* Covariant cast for argument 0 (c) <p0:Int> isa OTHER */
/* <p0:Int> isa OTHER */
var1 = 1; /* easy <p0:Int> isa OTHER*/
if (!var1) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var_c = p0;
{ /* Inline kernel#Int#< (var_c,self) */
/* Covariant cast for argument 0 (i) <self:Int> isa OTHER */
/* <self:Int> isa OTHER */
var4 = 1; /* easy <self:Int> isa OTHER*/
if (!var4) {
var_class_name7 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
show_backtrace(1);
}
var8 = var_c < self;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
if (var2){
var = var_c;
goto RET_LABEL;
} else {
var = self;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method kernel#Int#min for (self: Object, Comparable): Comparable */
val* VIRTUAL_kernel__Int__min(val* self, val* p0) {
val* var /* : Comparable */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
val* var4 /* : Comparable */;
var2 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var3 = ((struct instance_kernel__Int*)p0)->value; /* autounbox from Comparable to Int */;
var1 = kernel__Int__min(var2, var3);
var4 = BOX_kernel__Int(var1); /* autobox from Int to Comparable */
var = var4;
RET_LABEL:;
return var;
}
/* method kernel#Int#ascii for (self: Int): Char */
char kernel__Int__ascii(long self) {
char var /* : Char */;
char var1 /* : Char */;
var1 = self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#ascii for (self: Object): Char */
char VIRTUAL_kernel__Int__ascii(val* self) {
char var /* : Char */;
char var1 /* : Char */;
long var3 /* : Int */;
char var4 /* : Char */;
{ /* Inline kernel#Int#ascii (self) */
var3 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var4 = var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#digit_count for (self: Int, Int): Int */
long kernel__Int__digit_count(long self, long p0) {
long var /* : Int */;
long var_b /* var b: Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
long var5 /* : Int */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var10 /* : Bool */;
long var11 /* : Int */;
long var_d /* var d: Int */;
long var12 /* : Int */;
long var14 /* : Int */;
long var_n /* var n: Int */;
long var15 /* : Int */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
long var19 /* : Int */;
long var20 /* : Int */;
long var21 /* : Int */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
short int var28 /* : Bool */;
long var29 /* : Int */;
long var30 /* : Int */;
long var32 /* : Int */;
long var33 /* : Int */;
long var35 /* : Int */;
var_b = p0;
var1 = 10;
{ /* Inline kernel#Int#== (var_b,var1) */
var4 = var_b == var1;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
if (var2){
var5 = kernel__Int__digit_count_base_95d10(self);
var = var5;
goto RET_LABEL;
} else {
}
var6 = 0;
{ /* Inline kernel#Int#< (self,var6) */
/* Covariant cast for argument 0 (i) <var6:Int> isa OTHER */
/* <var6:Int> isa OTHER */
var9 = 1; /* easy <var6:Int> isa OTHER*/
if (!var9) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
show_backtrace(1);
}
var10 = self < var6;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
if (var7){
var11 = 1;
var_d = var11;
{ /* Inline kernel#Int#unary - (self) */
var14 = -self;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var_n = var12;
} else {
var15 = 0;
{ /* Inline kernel#Int#== (self,var15) */
var18 = self == var15;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
if (var16){
var19 = 1;
var = var19;
goto RET_LABEL;
} else {
var20 = 0;
var_d = var20;
var_n = self;
}
}
for(;;) {
var21 = 0;
{ /* Inline kernel#Int#> (var_n,var21) */
/* Covariant cast for argument 0 (i) <var21:Int> isa OTHER */
/* <var21:Int> isa OTHER */
var24 = 1; /* easy <var21:Int> isa OTHER*/
if (!var24) {
var_class_name27 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 263);
show_backtrace(1);
}
var28 = var_n > var21;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
if (!var22) break;
var29 = 1;
{ /* Inline kernel#Int#+ (var_d,var29) */
var32 = var_d + var29;
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
var_d = var30;
{ /* Inline kernel#Int#/ (var_n,var_b) */
var35 = var_n / var_b;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
var_n = var33;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var = var_d;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Int#digit_count for (self: Object, Int): Int */
long VIRTUAL_kernel__Int__digit_count(val* self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
var2 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var1 = kernel__Int__digit_count(var2, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#digit_count_base_10 for (self: Int): Int */
long kernel__Int__digit_count_base_95d10(long self) {
long var /* : Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
long var6 /* : Int */;
long var_result /* var result: Int */;
long var7 /* : Int */;
long var9 /* : Int */;
long var_val /* var val: Int */;
long var10 /* : Int */;
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
short int var18 /* : Bool */;
long var19 /* : Int */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
short int var26 /* : Bool */;
long var27 /* : Int */;
long var28 /* : Int */;
long var30 /* : Int */;
long var31 /* : Int */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
short int var38 /* : Bool */;
long var39 /* : Int */;
long var40 /* : Int */;
long var42 /* : Int */;
long var43 /* : Int */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
short int var50 /* : Bool */;
long var51 /* : Int */;
long var52 /* : Int */;
long var54 /* : Int */;
long var55 /* : Int */;
long var56 /* : Int */;
long var58 /* : Int */;
long var59 /* : Int */;
long var60 /* : Int */;
long var62 /* : Int */;
var1 = 0;
{ /* Inline kernel#Int#< (self,var1) */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (!var4) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
show_backtrace(1);
}
var5 = self < var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
if (var2){
var6 = 2;
var_result = var6;
{ /* Inline kernel#Int#unary - (self) */
var9 = -self;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var_val = var7;
} else {
var10 = 1;
var_result = var10;
var_val = self;
}
for(;;) {
var11 = 10;
{ /* Inline kernel#Int#< (var_val,var11) */
/* Covariant cast for argument 0 (i) <var11:Int> isa OTHER */
/* <var11:Int> isa OTHER */
var14 = 1; /* easy <var11:Int> isa OTHER*/
if (!var14) {
var_class_name17 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
show_backtrace(1);
}
var18 = var_val < var11;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
if (var12){
var = var_result;
goto RET_LABEL;
} else {
}
var19 = 100;
{ /* Inline kernel#Int#< (var_val,var19) */
/* Covariant cast for argument 0 (i) <var19:Int> isa OTHER */
/* <var19:Int> isa OTHER */
var22 = 1; /* easy <var19:Int> isa OTHER*/
if (!var22) {
var_class_name25 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
show_backtrace(1);
}
var26 = var_val < var19;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
if (var20){
var27 = 1;
{ /* Inline kernel#Int#+ (var_result,var27) */
var30 = var_result + var27;
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
var = var28;
goto RET_LABEL;
} else {
}
var31 = 1000;
{ /* Inline kernel#Int#< (var_val,var31) */
/* Covariant cast for argument 0 (i) <var31:Int> isa OTHER */
/* <var31:Int> isa OTHER */
var34 = 1; /* easy <var31:Int> isa OTHER*/
if (!var34) {
var_class_name37 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
show_backtrace(1);
}
var38 = var_val < var31;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
if (var32){
var39 = 2;
{ /* Inline kernel#Int#+ (var_result,var39) */
var42 = var_result + var39;
var40 = var42;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
var = var40;
goto RET_LABEL;
} else {
}
var43 = 10000;
{ /* Inline kernel#Int#< (var_val,var43) */
/* Covariant cast for argument 0 (i) <var43:Int> isa OTHER */
/* <var43:Int> isa OTHER */
var46 = 1; /* easy <var43:Int> isa OTHER*/
if (!var46) {
var_class_name49 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
show_backtrace(1);
}
var50 = var_val < var43;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
if (var44){
var51 = 3;
{ /* Inline kernel#Int#+ (var_result,var51) */
var54 = var_result + var51;
var52 = var54;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
var = var52;
goto RET_LABEL;
} else {
}
var55 = 10000;
{ /* Inline kernel#Int#/ (var_val,var55) */
var58 = var_val / var55;
var56 = var58;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
var_val = var56;
var59 = 4;
{ /* Inline kernel#Int#+ (var_result,var59) */
var62 = var_result + var59;
var60 = var62;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
var_result = var60;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
RET_LABEL:;
return var;
}
/* method kernel#Int#digit_count_base_10 for (self: Object): Int */
long VIRTUAL_kernel__Int__digit_count_base_95d10(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
var2 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var1 = kernel__Int__digit_count_base_95d10(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#to_c for (self: Int): Char */
char kernel__Int__to_c(long self) {
char var /* : Char */;
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
long var15 /* : Int */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
short int var22 /* : Bool */;
char var23 /* : Char */;
long var24 /* : Int */;
long var26 /* : Int */;
long var27 /* : Int */;
long var29 /* : Int */;
char var30 /* : Char */;
char var32 /* : Char */;
char var33 /* : Char */;
long var34 /* : Int */;
long var36 /* : Int */;
long var37 /* : Int */;
long var38 /* : Int */;
long var40 /* : Int */;
long var41 /* : Int */;
long var43 /* : Int */;
char var44 /* : Char */;
char var46 /* : Char */;
var2 = 0;
{ /* Inline kernel#Int#>= (self,var2) */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (!var5) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 262);
show_backtrace(1);
}
var6 = self >= var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var_ = var3;
if (var3){
var7 = 36;
{ /* Inline kernel#Int#<= (self,var7) */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (!var10) {
var_class_name13 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 260);
show_backtrace(1);
}
var14 = self <= var7;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var1 = var8;
} else {
var1 = var_;
}
if (!var1) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 399);
show_backtrace(1);
}
var15 = 10;
{ /* Inline kernel#Int#< (self,var15) */
/* Covariant cast for argument 0 (i) <var15:Int> isa OTHER */
/* <var15:Int> isa OTHER */
var18 = 1; /* easy <var15:Int> isa OTHER*/
if (!var18) {
var_class_name21 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
show_backtrace(1);
}
var22 = self < var15;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
if (var16){
var23 = '0';
{ /* Inline kernel#Char#ascii (var23) */
var26 = (unsigned char)var23;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
{ /* Inline kernel#Int#+ (self,var24) */
var29 = self + var24;
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
{ /* Inline kernel#Int#ascii (var27) */
var32 = var27;
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
var = var30;
goto RET_LABEL;
} else {
var33 = 'a';
{ /* Inline kernel#Char#ascii (var33) */
var36 = (unsigned char)var33;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
var37 = 10;
{ /* Inline kernel#Int#- (var34,var37) */
var40 = var34 - var37;
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
{ /* Inline kernel#Int#+ (self,var38) */
var43 = self + var38;
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
{ /* Inline kernel#Int#ascii (var41) */
var46 = var41;
var44 = var46;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
var = var44;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method kernel#Int#to_c for (self: Object): Char */
char VIRTUAL_kernel__Int__to_c(val* self) {
char var /* : Char */;
char var1 /* : Char */;
long var2 /* : Int */;
var2 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var1 = kernel__Int__to_c(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Int#abs for (self: Int): Int */
long kernel__Int__abs(long self) {
long var /* : Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
long var6 /* : Int */;
long var7 /* : Int */;
long var9 /* : Int */;
long var10 /* : Int */;
long var12 /* : Int */;
var1 = 0;
{ /* Inline kernel#Int#>= (self,var1) */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (!var4) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 262);
show_backtrace(1);
}
var5 = self >= var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
if (var2){
var = self;
goto RET_LABEL;
} else {
var6 = 1;
{ /* Inline kernel#Int#unary - (var6) */
var9 = -var6;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
{ /* Inline kernel#Int#* (var7,self) */
var12 = var7 * self;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var = var10;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method kernel#Int#abs for (self: Object): Int */
long VIRTUAL_kernel__Int__abs(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
var2 = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
var1 = kernel__Int__abs(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Char#object_id for (self: Char): Int */
long kernel__Char__object_id(char self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = (long)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Char#object_id for (self: Object): Int */
long VIRTUAL_kernel__Char__object_id(val* self) {
long var /* : Int */;
long var1 /* : Int */;
char var3 /* : Char */;
long var4 /* : Int */;
{ /* Inline kernel#Char#object_id (self) */
var3 = ((struct instance_kernel__Char*)self)->value; /* autounbox from Object to Char */;
var4 = (long)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Char#hash for (self: Char): Int */
long kernel__Char__hash(char self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{ /* Inline kernel#Char#ascii (self) */
var3 = (unsigned char)self;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Char#hash for (self: Object): Int */
long VIRTUAL_kernel__Char__hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
char var2 /* : Char */;
var2 = ((struct instance_kernel__Char*)self)->value; /* autounbox from Object to Char */;
var1 = kernel__Char__hash(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Char#== for (self: Char, nullable Object): Bool */
short int kernel__Char___61d_61d(char self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
char var2 /* : Char */;
var1 = (p0 != NULL) && (p0->class == &class_kernel__Char);
if (var1) {
var2 = ((struct instance_kernel__Char*)p0)->value; /* autounbox from nullable Object to Char */;
var1 = (var2 == self);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Char#== for (self: Object, nullable Object): Bool */
short int VIRTUAL_kernel__Char___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline kernel#Char#== (self,p0) */
var3 = self == p0 || (p0 != NULL && self->class == p0->class && ((struct instance_kernel__Char*)self)->value == ((struct instance_kernel__Char*)p0)->value);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Char#!= for (self: Char, nullable Object): Bool */
short int kernel__Char___33d_61d(char self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
char var2 /* : Char */;
short int var3 /* : Bool */;
var1 = (p0 != NULL) && (p0->class == &class_kernel__Char);
if (var1) {
var2 = ((struct instance_kernel__Char*)p0)->value; /* autounbox from nullable Object to Char */;
var1 = (var2 == self);
}
var3 = !var1;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Char#!= for (self: Object, nullable Object): Bool */
short int VIRTUAL_kernel__Char___33d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
{ /* Inline kernel#Char#!= (self,p0) */
var3 = self == p0 || (p0 != NULL && self->class == p0->class && ((struct instance_kernel__Char*)self)->value == ((struct instance_kernel__Char*)p0)->value);
var4 = !var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Char#output for (self: Char) */
void kernel__Char__output(char self) {
printf("%c", self);
RET_LABEL:;
}
/* method kernel#Char#output for (self: Object) */
void VIRTUAL_kernel__Char__output(val* self) {
char var /* : Char */;
{ /* Inline kernel#Char#output (self) */
var = ((struct instance_kernel__Char*)self)->value; /* autounbox from Object to Char */;
printf("%c", var);
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method kernel#Char#<= for (self: Char, Char): Bool */
short int kernel__Char___60d_61d(char self, char p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Char> isa OTHER */
/* <p0:Char> isa OTHER */
var1 = 1; /* easy <p0:Char> isa OTHER*/
if (!var1) {
var_class_name = type_kernel__Char.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 436);
show_backtrace(1);
}
var2 = self <= p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Char#<= for (self: Object, Comparable): Bool */
short int VIRTUAL_kernel__Char___60d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
char var4 /* : Char */;
char var5 /* : Char */;
short int var6 /* : Bool */;
{ /* Inline kernel#Char#<= (self,p0) */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var3 = 0;
} else {
var3 = p0->type->type_table[cltype] == idtype;
}
if (!var3) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 436);
show_backtrace(1);
}
var4 = ((struct instance_kernel__Char*)self)->value; /* autounbox from Object to Char */;
var5 = ((struct instance_kernel__Char*)p0)->value; /* autounbox from Comparable to Char */;
var6 = var4 <= var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Char#< for (self: Char, Char): Bool */
short int kernel__Char___60d(char self, char p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Char> isa OTHER */
/* <p0:Char> isa OTHER */
var1 = 1; /* easy <p0:Char> isa OTHER*/
if (!var1) {
var_class_name = type_kernel__Char.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 437);
show_backtrace(1);
}
var2 = self < p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Char#< for (self: Object, Comparable): Bool */
short int VIRTUAL_kernel__Char___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
char var4 /* : Char */;
char var5 /* : Char */;
short int var6 /* : Bool */;
{ /* Inline kernel#Char#< (self,p0) */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var3 = 0;
} else {
var3 = p0->type->type_table[cltype] == idtype;
}
if (!var3) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 437);
show_backtrace(1);
}
var4 = ((struct instance_kernel__Char*)self)->value; /* autounbox from Object to Char */;
var5 = ((struct instance_kernel__Char*)p0)->value; /* autounbox from Comparable to Char */;
var6 = var4 < var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Char#>= for (self: Char, Char): Bool */
short int kernel__Char___62d_61d(char self, char p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Char> isa OTHER */
/* <p0:Char> isa OTHER */
var1 = 1; /* easy <p0:Char> isa OTHER*/
if (!var1) {
var_class_name = type_kernel__Char.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 438);
show_backtrace(1);
}
var2 = self >= p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Char#>= for (self: Object, Comparable): Bool */
short int VIRTUAL_kernel__Char___62d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
char var4 /* : Char */;
char var5 /* : Char */;
short int var6 /* : Bool */;
{ /* Inline kernel#Char#>= (self,p0) */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var3 = 0;
} else {
var3 = p0->type->type_table[cltype] == idtype;
}
if (!var3) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 438);
show_backtrace(1);
}
var4 = ((struct instance_kernel__Char*)self)->value; /* autounbox from Object to Char */;
var5 = ((struct instance_kernel__Char*)p0)->value; /* autounbox from Comparable to Char */;
var6 = var4 >= var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Char#> for (self: Char, Char): Bool */
short int kernel__Char___62d(char self, char p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Char> isa OTHER */
/* <p0:Char> isa OTHER */
var1 = 1; /* easy <p0:Char> isa OTHER*/
if (!var1) {
var_class_name = type_kernel__Char.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 439);
show_backtrace(1);
}
var2 = self > p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Char#> for (self: Object, Comparable): Bool */
short int VIRTUAL_kernel__Char___62d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
char var4 /* : Char */;
char var5 /* : Char */;
short int var6 /* : Bool */;
{ /* Inline kernel#Char#> (self,p0) */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var3 = 0;
} else {
var3 = p0->type->type_table[cltype] == idtype;
}
if (!var3) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 439);
show_backtrace(1);
}
var4 = ((struct instance_kernel__Char*)self)->value; /* autounbox from Object to Char */;
var5 = ((struct instance_kernel__Char*)p0)->value; /* autounbox from Comparable to Char */;
var6 = var4 > var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Char#succ for (self: Char): Char */
char kernel__Char__succ(char self) {
char var /* : Char */;
char var1 /* : Char */;
var1 = self+1;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Char#succ for (self: Object): Discrete */
val* VIRTUAL_kernel__Char__succ(val* self) {
val* var /* : Discrete */;
char var1 /* : Char */;
char var3 /* : Char */;
char var4 /* : Char */;
val* var5 /* : Discrete */;
{ /* Inline kernel#Char#succ (self) */
var3 = ((struct instance_kernel__Char*)self)->value; /* autounbox from Object to Char */;
var4 = var3+1;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var5 = BOX_kernel__Char(var1); /* autobox from Char to Discrete */
var = var5;
RET_LABEL:;
return var;
}
/* method kernel#Char#prec for (self: Char): Char */
char kernel__Char__prec(char self) {
char var /* : Char */;
char var1 /* : Char */;
var1 = self-1;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Char#prec for (self: Object): Discrete */
val* VIRTUAL_kernel__Char__prec(val* self) {
val* var /* : Discrete */;
char var1 /* : Char */;
char var3 /* : Char */;
char var4 /* : Char */;
val* var5 /* : Discrete */;
{ /* Inline kernel#Char#prec (self) */
var3 = ((struct instance_kernel__Char*)self)->value; /* autounbox from Object to Char */;
var4 = var3-1;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var5 = BOX_kernel__Char(var1); /* autobox from Char to Discrete */
var = var5;
RET_LABEL:;
return var;
}
/* method kernel#Char#distance for (self: Char, Char): Int */
long kernel__Char__distance(char self, char p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
char var_c /* var c: Char */;
long var2 /* : Int */;
long var4 /* : Int */;
long var5 /* : Int */;
long var7 /* : Int */;
long var8 /* : Int */;
long var10 /* : Int */;
long var_d /* var d: Int */;
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
short int var18 /* : Bool */;
long var19 /* : Int */;
long var21 /* : Int */;
/* Covariant cast for argument 0 (c) <p0:Char> isa OTHER */
/* <p0:Char> isa OTHER */
var1 = 1; /* easy <p0:Char> isa OTHER*/
if (!var1) {
var_class_name = type_kernel__Char.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 444);
show_backtrace(1);
}
var_c = p0;
{ /* Inline kernel#Char#ascii (self) */
var4 = (unsigned char)self;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
{ /* Inline kernel#Char#ascii (var_c) */
var7 = (unsigned char)var_c;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
{ /* Inline kernel#Int#- (var2,var5) */
var10 = var2 - var5;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var_d = var8;
var11 = 0;
{ /* Inline kernel#Int#>= (var_d,var11) */
/* Covariant cast for argument 0 (i) <var11:Int> isa OTHER */
/* <var11:Int> isa OTHER */
var14 = 1; /* easy <var11:Int> isa OTHER*/
if (!var14) {
var_class_name17 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 262);
show_backtrace(1);
}
var18 = var_d >= var11;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
if (var12){
var = var_d;
goto RET_LABEL;
} else {
{ /* Inline kernel#Int#unary - (var_d) */
var21 = -var_d;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var = var19;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method kernel#Char#distance for (self: Object, Discrete): Int */
long VIRTUAL_kernel__Char__distance(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
char var2 /* : Char */;
char var3 /* : Char */;
var2 = ((struct instance_kernel__Char*)self)->value; /* autounbox from Object to Char */;
var3 = ((struct instance_kernel__Char*)p0)->value; /* autounbox from Discrete to Char */;
var1 = kernel__Char__distance(var2, var3);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Char#to_i for (self: Char): Int */
long kernel__Char__to_i(char self) {
long var /* : Int */;
char var1 /* : Char */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
long var5 /* : Int */;
long var6 /* : Int */;
long var8 /* : Int */;
short int var9 /* : Bool */;
long var10 /* : Int */;
long var12 /* : Int */;
char var13 /* : Char */;
long var14 /* : Int */;
long var16 /* : Int */;
long var17 /* : Int */;
long var19 /* : Int */;
char var20 /* : Char */;
long var21 /* : Int */;
long var23 /* : Int */;
char var24 /* : Char */;
long var25 /* : Int */;
long var27 /* : Int */;
long var28 /* : Int */;
long var30 /* : Int */;
long var31 /* : Int */;
long var32 /* : Int */;
long var34 /* : Int */;
var1 = '-';
{ /* Inline kernel#Char#== (self,var1) */
var4 = self == var1;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
if (var2){
var5 = 1;
{ /* Inline kernel#Int#unary - (var5) */
var8 = -var5;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var = var6;
goto RET_LABEL;
} else {
var9 = kernel__Char__is_digit(self);
if (var9){
{ /* Inline kernel#Char#ascii (self) */
var12 = (unsigned char)self;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var13 = '0';
{ /* Inline kernel#Char#ascii (var13) */
var16 = (unsigned char)var13;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
{ /* Inline kernel#Int#- (var10,var14) */
var19 = var10 - var14;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var = var17;
goto RET_LABEL;
} else {
var20 = kernel__Char__to_lower(self);
{ /* Inline kernel#Char#ascii (var20) */
var23 = (unsigned char)var20;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var24 = 'a';
{ /* Inline kernel#Char#ascii (var24) */
var27 = (unsigned char)var24;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
{ /* Inline kernel#Int#- (var21,var25) */
var30 = var21 - var25;
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
var31 = 10;
{ /* Inline kernel#Int#+ (var28,var31) */
var34 = var28 + var31;
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
var = var32;
goto RET_LABEL;
}
}
RET_LABEL:;
return var;
}
/* method kernel#Char#to_i for (self: Object): Int */
long VIRTUAL_kernel__Char__to_i(val* self) {
long var /* : Int */;
long var1 /* : Int */;
char var2 /* : Char */;
var2 = ((struct instance_kernel__Char*)self)->value; /* autounbox from Object to Char */;
var1 = kernel__Char__to_i(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Char#ascii for (self: Char): Int */
long kernel__Char__ascii(char self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = (unsigned char)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Char#ascii for (self: Object): Int */
long VIRTUAL_kernel__Char__ascii(val* self) {
long var /* : Int */;
long var1 /* : Int */;
char var3 /* : Char */;
long var4 /* : Int */;
{ /* Inline kernel#Char#ascii (self) */
var3 = ((struct instance_kernel__Char*)self)->value; /* autounbox from Object to Char */;
var4 = (unsigned char)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Char#+ for (self: Char, Int): Char */
char kernel__Char___43d(char self, long p0) {
char var /* : Char */;
char var1 /* : Char */;
var1 = self + p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Char#+ for (self: Object, Int): Discrete */
val* VIRTUAL_kernel__Char___43d(val* self, long p0) {
val* var /* : Discrete */;
char var1 /* : Char */;
char var3 /* : Char */;
char var4 /* : Char */;
val* var5 /* : Discrete */;
{ /* Inline kernel#Char#+ (self,p0) */
var3 = ((struct instance_kernel__Char*)self)->value; /* autounbox from Object to Char */;
var4 = var3 + p0;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var5 = BOX_kernel__Char(var1); /* autobox from Char to Discrete */
var = var5;
RET_LABEL:;
return var;
}
/* method kernel#Char#- for (self: Char, Int): Char */
char kernel__Char___45d(char self, long p0) {
char var /* : Char */;
char var1 /* : Char */;
var1 = self - p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Char#- for (self: Object, Int): Discrete */
val* VIRTUAL_kernel__Char___45d(val* self, long p0) {
val* var /* : Discrete */;
char var1 /* : Char */;
char var3 /* : Char */;
char var4 /* : Char */;
val* var5 /* : Discrete */;
{ /* Inline kernel#Char#- (self,p0) */
var3 = ((struct instance_kernel__Char*)self)->value; /* autounbox from Object to Char */;
var4 = var3 - p0;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var5 = BOX_kernel__Char(var1); /* autobox from Char to Discrete */
var = var5;
RET_LABEL:;
return var;
}
/* method kernel#Char#to_lower for (self: Char): Char */
char kernel__Char__to_lower(char self) {
char var /* : Char */;
short int var1 /* : Bool */;
long var2 /* : Int */;
long var4 /* : Int */;
char var5 /* : Char */;
char var6 /* : Char */;
long var7 /* : Int */;
long var8 /* : Int */;
long var10 /* : Int */;
char var11 /* : Char */;
char var13 /* : Char */;
var1 = kernel__Char__is_upper(self);
if (var1){
{ /* Inline kernel#Char#ascii (self) */
var4 = (unsigned char)self;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var5 = 'a';
var6 = 'A';
var7 = kernel__Char__distance(var5, var6);
{ /* Inline kernel#Int#+ (var2,var7) */
var10 = var2 + var7;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
{ /* Inline kernel#Int#ascii (var8) */
var13 = var8;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var = var11;
goto RET_LABEL;
} else {
var = self;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method kernel#Char#to_lower for (self: Object): Char */
char VIRTUAL_kernel__Char__to_lower(val* self) {
char var /* : Char */;
char var1 /* : Char */;
char var2 /* : Char */;
var2 = ((struct instance_kernel__Char*)self)->value; /* autounbox from Object to Char */;
var1 = kernel__Char__to_lower(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Char#to_upper for (self: Char): Char */
char kernel__Char__to_upper(char self) {
char var /* : Char */;
short int var1 /* : Bool */;
long var2 /* : Int */;
long var4 /* : Int */;
char var5 /* : Char */;
char var6 /* : Char */;
long var7 /* : Int */;
long var8 /* : Int */;
long var10 /* : Int */;
char var11 /* : Char */;
char var13 /* : Char */;
var1 = kernel__Char__is_lower(self);
if (var1){
{ /* Inline kernel#Char#ascii (self) */
var4 = (unsigned char)self;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var5 = 'a';
var6 = 'A';
var7 = kernel__Char__distance(var5, var6);
{ /* Inline kernel#Int#- (var2,var7) */
var10 = var2 - var7;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
{ /* Inline kernel#Int#ascii (var8) */
var13 = var8;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var = var11;
goto RET_LABEL;
} else {
var = self;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method kernel#Char#to_upper for (self: Object): Char */
char VIRTUAL_kernel__Char__to_upper(val* self) {
char var /* : Char */;
char var1 /* : Char */;
char var2 /* : Char */;
var2 = ((struct instance_kernel__Char*)self)->value; /* autounbox from Object to Char */;
var1 = kernel__Char__to_upper(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Char#is_digit for (self: Char): Bool */
short int kernel__Char__is_digit(char self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
char var2 /* : Char */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
short int var_ /* var : Bool */;
char var7 /* : Char */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
var2 = '0';
{ /* Inline kernel#Char#>= (self,var2) */
/* Covariant cast for argument 0 (i) <var2:Char> isa OTHER */
/* <var2:Char> isa OTHER */
var5 = 1; /* easy <var2:Char> isa OTHER*/
if (!var5) {
var_class_name = type_kernel__Char.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 438);
show_backtrace(1);
}
var6 = self >= var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var_ = var3;
if (var3){
var7 = '9';
{ /* Inline kernel#Char#<= (self,var7) */
/* Covariant cast for argument 0 (i) <var7:Char> isa OTHER */
/* <var7:Char> isa OTHER */
var10 = 1; /* easy <var7:Char> isa OTHER*/
if (!var10) {
var_class_name13 = type_kernel__Char.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 436);
show_backtrace(1);
}
var14 = self <= var7;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var1 = var8;
} else {
var1 = var_;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Char#is_digit for (self: Object): Bool */
short int VIRTUAL_kernel__Char__is_digit(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
char var2 /* : Char */;
var2 = ((struct instance_kernel__Char*)self)->value; /* autounbox from Object to Char */;
var1 = kernel__Char__is_digit(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Char#is_lower for (self: Char): Bool */
short int kernel__Char__is_lower(char self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
char var2 /* : Char */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
short int var_ /* var : Bool */;
char var7 /* : Char */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
var2 = 'a';
{ /* Inline kernel#Char#>= (self,var2) */
/* Covariant cast for argument 0 (i) <var2:Char> isa OTHER */
/* <var2:Char> isa OTHER */
var5 = 1; /* easy <var2:Char> isa OTHER*/
if (!var5) {
var_class_name = type_kernel__Char.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 438);
show_backtrace(1);
}
var6 = self >= var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var_ = var3;
if (var3){
var7 = 'z';
{ /* Inline kernel#Char#<= (self,var7) */
/* Covariant cast for argument 0 (i) <var7:Char> isa OTHER */
/* <var7:Char> isa OTHER */
var10 = 1; /* easy <var7:Char> isa OTHER*/
if (!var10) {
var_class_name13 = type_kernel__Char.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 436);
show_backtrace(1);
}
var14 = self <= var7;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var1 = var8;
} else {
var1 = var_;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Char#is_lower for (self: Object): Bool */
short int VIRTUAL_kernel__Char__is_lower(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
char var2 /* : Char */;
var2 = ((struct instance_kernel__Char*)self)->value; /* autounbox from Object to Char */;
var1 = kernel__Char__is_lower(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Char#is_upper for (self: Char): Bool */
short int kernel__Char__is_upper(char self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
char var2 /* : Char */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
short int var_ /* var : Bool */;
char var7 /* : Char */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
var2 = 'A';
{ /* Inline kernel#Char#>= (self,var2) */
/* Covariant cast for argument 0 (i) <var2:Char> isa OTHER */
/* <var2:Char> isa OTHER */
var5 = 1; /* easy <var2:Char> isa OTHER*/
if (!var5) {
var_class_name = type_kernel__Char.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 438);
show_backtrace(1);
}
var6 = self >= var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var_ = var3;
if (var3){
var7 = 'Z';
{ /* Inline kernel#Char#<= (self,var7) */
/* Covariant cast for argument 0 (i) <var7:Char> isa OTHER */
/* <var7:Char> isa OTHER */
var10 = 1; /* easy <var7:Char> isa OTHER*/
if (!var10) {
var_class_name13 = type_kernel__Char.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 436);
show_backtrace(1);
}
var14 = self <= var7;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var1 = var8;
} else {
var1 = var_;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Char#is_upper for (self: Object): Bool */
short int VIRTUAL_kernel__Char__is_upper(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
char var2 /* : Char */;
var2 = ((struct instance_kernel__Char*)self)->value; /* autounbox from Object to Char */;
var1 = kernel__Char__is_upper(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Char#is_letter for (self: Char): Bool */
short int kernel__Char__is_letter(char self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var_ /* var : Bool */;
short int var3 /* : Bool */;
var2 = kernel__Char__is_lower(self);
var_ = var2;
if (var2){
var1 = var_;
} else {
var3 = kernel__Char__is_upper(self);
var1 = var3;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method kernel#Char#is_letter for (self: Object): Bool */
short int VIRTUAL_kernel__Char__is_letter(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
char var2 /* : Char */;
var2 = ((struct instance_kernel__Char*)self)->value; /* autounbox from Object to Char */;
var1 = kernel__Char__is_letter(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method kernel#Pointer#address_is_null for (self: Pointer): Bool */
short int kernel__Pointer__address_is_null(void* self) {
short int var /* : Bool */;
fprintf(stderr, "NOT YET IMPLEMENTED nitni for kernel#Pointer#address_is_null at lib/standard/kernel.nit:554,2--555,53\n");
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method kernel#Pointer#address_is_null for (self: Object): Bool */
short int VIRTUAL_kernel__Pointer__address_is_null(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : Pointer */;
var2 = ((struct instance_kernel__Pointer*)self)->value; /* autounbox from Object to Pointer */;
var1 = kernel__Pointer__address_is_null(var2);
var = var1;
RET_LABEL:;
return var;
}
