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
/* method kernel#Object#== for (self: Object, nullable Object): Bool */
short int kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var1 /* : Bool */;
var_other = p0;
var1 = self == var_other || (var_other != NULL && self->class == var_other->class && ((self->class->box_kind == 1 && ((struct instance_kernel__Int*)self)->value == ((struct instance_kernel__Int*)var_other)->value) || (self->class->box_kind == 2 && ((struct instance_kernel__Bool*)self)->value == ((struct instance_kernel__Bool*)var_other)->value) || (self->class->box_kind == 3 && ((struct instance_kernel__Char*)self)->value == ((struct instance_kernel__Char*)var_other)->value) || (self->class->box_kind == 4 && ((struct instance_kernel__Float*)self)->value == ((struct instance_kernel__Float*)var_other)->value) || (self->class->box_kind == 5 && ((struct instance_string__NativeString*)self)->value == ((struct instance_string__NativeString*)var_other)->value) || (self->class->box_kind == 6 && ((struct instance_kernel__Pointer*)self)->value == ((struct instance_kernel__Pointer*)var_other)->value)));
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 95);
exit(1);
}
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Deferred method called", "lib/standard/kernel.nit", 95);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 98);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 102);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 106);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 109);
exit(1);
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
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
val* var_c /* var c: Comparable */;
val* var_d /* var d: Comparable */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
short int var8 /* : Bool */;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 122);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 122);
exit(1);
}
var_c = p0;
var_d = p1;
var7 = ((short int (*)(val*, val*))(var_c->class->vft[COLOR_kernel__Comparable___60d_61d]))(var_c, self) /* <= on <var_c:Comparable>*/;
var_ = var7;
if (var7){
var8 = ((short int (*)(val*, val*))(self->class->vft[COLOR_kernel__Comparable___60d_61d]))(self, var_d) /* <= on <self:Comparable>*/;
var6 = var8;
} else {
var6 = var_;
}
var = var6;
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
val* var_other /* var other: Comparable */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
const struct type* type_struct6;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 128);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 134);
exit(1);
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
val* var_c /* var c: Comparable */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
const struct type* type_struct6;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 138);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 144);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Deferred method called", "lib/standard/kernel.nit", 161);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Deferred method called", "lib/standard/kernel.nit", 164);
exit(1);
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
val* var_d /* var d: Discrete */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
const struct type* type_struct6;
val* var_cursor /* var cursor: Discrete */;
val* var_stop /* var stop: Discrete */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const struct type* type_struct11;
long var12 /* : Int */;
long var13 /* : Int */;
long var_nb /* var nb: Int */;
short int var14 /* : Bool */;
val* var15 /* : Discrete */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const struct type* type_struct19;
long var20 /* : Int */;
long var21 /* : Int */;
long var23 /* : Int */;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 167);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 176);
exit(1);
}
var_cursor = self;
var_stop = var_d;
} else {
var7 = ((short int (*)(val*, val*))(self->class->vft[COLOR_kernel__Comparable___62d]))(self, var_d) /* > on <self:Discrete>*/;
if (var7){
var_cursor = var_d;
/* <self:Discrete> isa OTHER */
type_struct11 = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
cltype9 = type_struct11->color;
idtype10 = type_struct11->id;
if(cltype9 >= self->type->table_size) {
var8 = 0;
} else {
var8 = self->type->type_table[cltype9] == idtype10;
}
if (!var8) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 180);
exit(1);
}
var_stop = self;
} else {
var12 = 0;
var = var12;
goto RET_LABEL;
}
}
var13 = 0;
var_nb = var13;
for(;;) {
var14 = ((short int (*)(val*, val*))(var_cursor->class->vft[COLOR_kernel__Comparable___60d]))(var_cursor, var_stop) /* < on <var_cursor:Discrete>*/;
if (!var14) break;
var15 = ((val* (*)(val*))(var_cursor->class->vft[COLOR_kernel__Discrete__succ]))(var_cursor) /* succ on <var_cursor:Discrete>*/;
/* <var15:Discrete> isa OTHER */
type_struct19 = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
cltype17 = type_struct19->color;
idtype18 = type_struct19->id;
if(cltype17 >= var15->type->table_size) {
var16 = 0;
} else {
var16 = var15->type->type_table[cltype17] == idtype18;
}
if (!var16) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 187);
exit(1);
}
var_cursor = var15;
var20 = 1;
{ /* Inline kernel#Int#+ (var_nb,var20) */
var23 = var_nb + var20;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var_nb = var21;
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
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Int> isa OTHER */
/* <p0:Int> isa OTHER */
var1 = 1; /* easy <p0:Int> isa OTHER*/
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 256);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 256);
exit(1);
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
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Int> isa OTHER */
/* <p0:Int> isa OTHER */
var1 = 1; /* easy <p0:Int> isa OTHER*/
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
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
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Int> isa OTHER */
/* <p0:Int> isa OTHER */
var1 = 1; /* easy <p0:Int> isa OTHER*/
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
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
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Int> isa OTHER */
/* <p0:Int> isa OTHER */
var1 = 1; /* easy <p0:Int> isa OTHER*/
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 259);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 259);
exit(1);
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
long var_i /* var i: Int */;
long var2 /* : Int */;
long var4 /* : Int */;
long var_d /* var d: Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
short int var11 /* : Bool */;
long var12 /* : Int */;
long var14 /* : Int */;
/* Covariant cast for argument 0 (i) <p0:Int> isa OTHER */
/* <p0:Int> isa OTHER */
var1 = 1; /* easy <p0:Int> isa OTHER*/
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 285);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
}
var11 = var_d >= var5;
var6 = var11;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
if (var6){
var = var_d;
goto RET_LABEL;
} else {
{ /* Inline kernel#Int#unary - (var_d) */
var14 = -var_d;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var = var12;
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
long var_other /* var other: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
short int var7 /* : Bool */;
long var8 /* : Int */;
long var9 /* : Int */;
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
short int var17 /* : Bool */;
long var18 /* : Int */;
long var19 /* : Int */;
/* Covariant cast for argument 0 (other) <p0:Int> isa OTHER */
/* <p0:Int> isa OTHER */
var1 = 1; /* easy <p0:Int> isa OTHER*/
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 295);
exit(1);
}
var_other = p0;
{ /* Inline kernel#Int#< (self,var_other) */
/* Covariant cast for argument 0 (i) <var_other:Int> isa OTHER */
/* <var_other:Int> isa OTHER */
var4 = 1; /* easy <var_other:Int> isa OTHER*/
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var7 = self < var_other;
var2 = var7;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
if (var2){
var8 = 1;
{ /* Inline kernel#Int#unary - (var8) */
var11 = -var8;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var = var9;
goto RET_LABEL;
} else {
{ /* Inline kernel#Int#< (var_other,self) */
/* Covariant cast for argument 0 (i) <self:Int> isa OTHER */
/* <self:Int> isa OTHER */
var14 = 1; /* easy <self:Int> isa OTHER*/
if (!var14) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var17 = var_other < self;
var12 = var17;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
if (var12){
var18 = 1;
var = var18;
goto RET_LABEL;
} else {
var19 = 0;
var = var19;
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
short int var2 /* : Bool */;
int cltype3;
int idtype4;
long var_c /* var c: Int */;
long var_d /* var d: Int */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
short int var11 /* : Bool */;
short int var_ /* var : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
/* Covariant cast for argument 0 (c) <p0:Int> isa OTHER */
/* <p0:Int> isa OTHER */
var1 = 1; /* easy <p0:Int> isa OTHER*/
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 306);
exit(1);
}
/* Covariant cast for argument 1 (d) <p1:Int> isa OTHER */
/* <p1:Int> isa OTHER */
var2 = 1; /* easy <p1:Int> isa OTHER*/
if (!var2) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 306);
exit(1);
}
var_c = p0;
var_d = p1;
{ /* Inline kernel#Int#< (self,var_c) */
/* Covariant cast for argument 0 (i) <var_c:Int> isa OTHER */
/* <var_c:Int> isa OTHER */
var8 = 1; /* easy <var_c:Int> isa OTHER*/
if (!var8) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var11 = self < var_c;
var6 = var11;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var_ = var6;
if (var6){
var5 = var_;
} else {
{ /* Inline kernel#Int#< (var_d,self) */
/* Covariant cast for argument 0 (i) <self:Int> isa OTHER */
/* <self:Int> isa OTHER */
var14 = 1; /* easy <self:Int> isa OTHER*/
if (!var14) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var17 = var_d < self;
var12 = var17;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var5 = var12;
}
if (var5){
var18 = 0;
var = var18;
goto RET_LABEL;
} else {
var19 = 1;
var = var19;
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
long var_other /* var other: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
short int var7 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Int> isa OTHER */
/* <p0:Int> isa OTHER */
var1 = 1; /* easy <p0:Int> isa OTHER*/
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 315);
exit(1);
}
var_other = p0;
{ /* Inline kernel#Int#< (self,var_other) */
/* Covariant cast for argument 0 (i) <var_other:Int> isa OTHER */
/* <var_other:Int> isa OTHER */
var4 = 1; /* easy <var_other:Int> isa OTHER*/
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var7 = self < var_other;
var2 = var7;
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
long var_c /* var c: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
short int var7 /* : Bool */;
/* Covariant cast for argument 0 (c) <p0:Int> isa OTHER */
/* <p0:Int> isa OTHER */
var1 = 1; /* easy <p0:Int> isa OTHER*/
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 324);
exit(1);
}
var_c = p0;
{ /* Inline kernel#Int#< (var_c,self) */
/* Covariant cast for argument 0 (i) <self:Int> isa OTHER */
/* <self:Int> isa OTHER */
var4 = 1; /* easy <self:Int> isa OTHER*/
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var7 = var_c < self;
var2 = var7;
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
short int var27 /* : Bool */;
long var28 /* : Int */;
long var29 /* : Int */;
long var31 /* : Int */;
long var32 /* : Int */;
long var34 /* : Int */;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 259);
exit(1);
}
var27 = var_n > var21;
var22 = var27;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
if (!var22) break;
var28 = 1;
{ /* Inline kernel#Int#+ (var_d,var28) */
var31 = var_d + var28;
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
var_d = var29;
{ /* Inline kernel#Int#/ (var_n,var_b) */
var34 = var_n / var_b;
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
var_n = var32;
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
short int var17 /* : Bool */;
long var18 /* : Int */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
short int var24 /* : Bool */;
long var25 /* : Int */;
long var26 /* : Int */;
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
long var40 /* : Int */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
short int var46 /* : Bool */;
long var47 /* : Int */;
long var48 /* : Int */;
long var50 /* : Int */;
long var51 /* : Int */;
long var52 /* : Int */;
long var54 /* : Int */;
long var55 /* : Int */;
long var56 /* : Int */;
long var58 /* : Int */;
var1 = 0;
{ /* Inline kernel#Int#< (self,var1) */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var17 = var_val < var11;
var12 = var17;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
if (var12){
var = var_result;
goto RET_LABEL;
} else {
}
var18 = 100;
{ /* Inline kernel#Int#< (var_val,var18) */
/* Covariant cast for argument 0 (i) <var18:Int> isa OTHER */
/* <var18:Int> isa OTHER */
var21 = 1; /* easy <var18:Int> isa OTHER*/
if (!var21) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var24 = var_val < var18;
var19 = var24;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
if (var19){
var25 = 1;
{ /* Inline kernel#Int#+ (var_result,var25) */
var28 = var_result + var25;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
var = var26;
goto RET_LABEL;
} else {
}
var29 = 1000;
{ /* Inline kernel#Int#< (var_val,var29) */
/* Covariant cast for argument 0 (i) <var29:Int> isa OTHER */
/* <var29:Int> isa OTHER */
var32 = 1; /* easy <var29:Int> isa OTHER*/
if (!var32) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var35 = var_val < var29;
var30 = var35;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
if (var30){
var36 = 2;
{ /* Inline kernel#Int#+ (var_result,var36) */
var39 = var_result + var36;
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
var = var37;
goto RET_LABEL;
} else {
}
var40 = 10000;
{ /* Inline kernel#Int#< (var_val,var40) */
/* Covariant cast for argument 0 (i) <var40:Int> isa OTHER */
/* <var40:Int> isa OTHER */
var43 = 1; /* easy <var40:Int> isa OTHER*/
if (!var43) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var46 = var_val < var40;
var41 = var46;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
if (var41){
var47 = 3;
{ /* Inline kernel#Int#+ (var_result,var47) */
var50 = var_result + var47;
var48 = var50;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
var = var48;
goto RET_LABEL;
} else {
}
var51 = 10000;
{ /* Inline kernel#Int#/ (var_val,var51) */
var54 = var_val / var51;
var52 = var54;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
var_val = var52;
var55 = 4;
{ /* Inline kernel#Int#+ (var_result,var55) */
var58 = var_result + var55;
var56 = var58;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
var_result = var56;
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
short int var6 /* : Bool */;
short int var_ /* var : Bool */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
short int var13 /* : Bool */;
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
short int var20 /* : Bool */;
char var21 /* : Char */;
long var22 /* : Int */;
long var24 /* : Int */;
long var25 /* : Int */;
long var27 /* : Int */;
char var28 /* : Char */;
char var30 /* : Char */;
char var31 /* : Char */;
long var32 /* : Int */;
long var34 /* : Int */;
long var35 /* : Int */;
long var36 /* : Int */;
long var38 /* : Int */;
long var39 /* : Int */;
long var41 /* : Int */;
char var42 /* : Char */;
char var44 /* : Char */;
var2 = 0;
{ /* Inline kernel#Int#>= (self,var2) */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (!var5) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 256);
exit(1);
}
var13 = self <= var7;
var8 = var13;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var1 = var8;
} else {
var1 = var_;
}
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "lib/standard/kernel.nit", 395);
exit(1);
}
var14 = 10;
{ /* Inline kernel#Int#< (self,var14) */
/* Covariant cast for argument 0 (i) <var14:Int> isa OTHER */
/* <var14:Int> isa OTHER */
var17 = 1; /* easy <var14:Int> isa OTHER*/
if (!var17) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var20 = self < var14;
var15 = var20;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
if (var15){
var21 = '0';
{ /* Inline kernel#Char#ascii (var21) */
var24 = (unsigned char)var21;
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
{ /* Inline kernel#Int#+ (self,var22) */
var27 = self + var22;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
{ /* Inline kernel#Int#ascii (var25) */
var30 = var25;
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
var = var28;
goto RET_LABEL;
} else {
var31 = 'a';
{ /* Inline kernel#Char#ascii (var31) */
var34 = (unsigned char)var31;
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
var35 = 10;
{ /* Inline kernel#Int#- (var32,var35) */
var38 = var32 - var35;
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
{ /* Inline kernel#Int#+ (self,var36) */
var41 = self + var36;
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
{ /* Inline kernel#Int#ascii (var39) */
var44 = var39;
var42 = var44;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
var = var42;
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
/* method kernel#Int#enumerate_to for (self: Int, Int) */
void kernel__Int__enumerate_to(long self, long p0) {
long var_last /* var last: Int */;
long var_cur /* var cur: Int */;
short int var /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
short int var3 /* : Bool */;
long var4 /* : Int */;
long var5 /* : Int */;
long var7 /* : Int */;
var_last = p0;
var_cur = self;
for(;;) {
{ /* Inline kernel#Int#<= (var_cur,var_last) */
/* Covariant cast for argument 0 (i) <var_last:Int> isa OTHER */
/* <var_last:Int> isa OTHER */
var2 = 1; /* easy <var_last:Int> isa OTHER*/
if (!var2) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 256);
exit(1);
}
var3 = var_cur <= var_last;
var = var3;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
if (!var) break;
printf("NOT YET IMPLEMENTED AClosureCallExpr:lib/standard/kernel.nit:409,4--12\n");
var4 = 1;
{ /* Inline kernel#Int#+ (var_cur,var4) */
var7 = var_cur + var4;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var_cur = var5;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method kernel#Int#enumerate_to for (self: Object, Int) */
void VIRTUAL_kernel__Int__enumerate_to(val* self, long p0) {
long var /* : Int */;
var = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
kernel__Int__enumerate_to(var, p0);
RET_LABEL:;
}
/* method kernel#Int#enumerate_before for (self: Int, Int) */
void kernel__Int__enumerate_before(long self, long p0) {
long var_after /* var after: Int */;
long var_cur /* var cur: Int */;
short int var /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
short int var3 /* : Bool */;
long var4 /* : Int */;
long var5 /* : Int */;
long var7 /* : Int */;
var_after = p0;
var_cur = self;
for(;;) {
{ /* Inline kernel#Int#< (var_cur,var_after) */
/* Covariant cast for argument 0 (i) <var_after:Int> isa OTHER */
/* <var_after:Int> isa OTHER */
var2 = 1; /* easy <var_after:Int> isa OTHER*/
if (!var2) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var3 = var_cur < var_after;
var = var3;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
if (!var) break;
printf("NOT YET IMPLEMENTED AClosureCallExpr:lib/standard/kernel.nit:420,4--12\n");
var4 = 1;
{ /* Inline kernel#Int#+ (var_cur,var4) */
var7 = var_cur + var4;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var_cur = var5;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method kernel#Int#enumerate_before for (self: Object, Int) */
void VIRTUAL_kernel__Int__enumerate_before(val* self, long p0) {
long var /* : Int */;
var = ((struct instance_kernel__Int*)self)->value; /* autounbox from Object to Int */;
kernel__Int__enumerate_before(var, p0);
RET_LABEL:;
}
/* method kernel#Int#abs for (self: Int): Int */
long kernel__Int__abs(long self) {
long var /* : Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
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
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Char> isa OTHER */
/* <p0:Char> isa OTHER */
var1 = 1; /* easy <p0:Char> isa OTHER*/
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 454);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 454);
exit(1);
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
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Char> isa OTHER */
/* <p0:Char> isa OTHER */
var1 = 1; /* easy <p0:Char> isa OTHER*/
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 455);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 455);
exit(1);
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
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Char> isa OTHER */
/* <p0:Char> isa OTHER */
var1 = 1; /* easy <p0:Char> isa OTHER*/
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 456);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 456);
exit(1);
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
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Char> isa OTHER */
/* <p0:Char> isa OTHER */
var1 = 1; /* easy <p0:Char> isa OTHER*/
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 457);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 457);
exit(1);
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
short int var17 /* : Bool */;
long var18 /* : Int */;
long var20 /* : Int */;
/* Covariant cast for argument 0 (c) <p0:Char> isa OTHER */
/* <p0:Char> isa OTHER */
var1 = 1; /* easy <p0:Char> isa OTHER*/
if (!var1) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 462);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
}
var17 = var_d >= var11;
var12 = var17;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
if (var12){
var = var_d;
goto RET_LABEL;
} else {
{ /* Inline kernel#Int#unary - (var_d) */
var20 = -var_d;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
var = var18;
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
long var29 /* : Int */;
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
var28 = 10;
{ /* Inline kernel#Int#+ (var25,var28) */
var31 = var25 + var28;
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
{ /* Inline kernel#Int#- (var21,var29) */
var34 = var21 - var29;
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
short int var6 /* : Bool */;
short int var_ /* var : Bool */;
char var7 /* : Char */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
short int var13 /* : Bool */;
var2 = '0';
{ /* Inline kernel#Char#>= (self,var2) */
/* Covariant cast for argument 0 (i) <var2:Char> isa OTHER */
/* <var2:Char> isa OTHER */
var5 = 1; /* easy <var2:Char> isa OTHER*/
if (!var5) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 456);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 454);
exit(1);
}
var13 = self <= var7;
var8 = var13;
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
short int var6 /* : Bool */;
short int var_ /* var : Bool */;
char var7 /* : Char */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
short int var13 /* : Bool */;
var2 = 'a';
{ /* Inline kernel#Char#>= (self,var2) */
/* Covariant cast for argument 0 (i) <var2:Char> isa OTHER */
/* <var2:Char> isa OTHER */
var5 = 1; /* easy <var2:Char> isa OTHER*/
if (!var5) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 456);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 454);
exit(1);
}
var13 = self <= var7;
var8 = var13;
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
short int var6 /* : Bool */;
short int var_ /* var : Bool */;
char var7 /* : Char */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
short int var13 /* : Bool */;
var2 = 'A';
{ /* Inline kernel#Char#>= (self,var2) */
/* Covariant cast for argument 0 (i) <var2:Char> isa OTHER */
/* <var2:Char> isa OTHER */
var5 = 1; /* easy <var2:Char> isa OTHER*/
if (!var5) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 456);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 454);
exit(1);
}
var13 = self <= var7;
var8 = var13;
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
fprintf(stderr, "NOT YET IMPLEMENTED nitni for kernel#Pointer#address_is_null at lib/standard/kernel.nit:572,2--573,53\n");
exit(1);
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
