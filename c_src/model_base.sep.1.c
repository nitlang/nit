#include "model_base.sep.0.h"
/* method model_base#Model#init for (self: Model) */
void model_base__Model__init(val* self) {
RET_LABEL:;
}
/* method model_base#Model#init for (self: Object) */
void VIRTUAL_model_base__Model__init(val* self) {
model_base__Model__init(self);
RET_LABEL:;
}
/* method model_base#MVisibility#to_s for (self: MVisibility): String */
val* model_base__MVisibility__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_model_base__MVisibility___64dto_s].val; /* @to_s on <self:MVisibility> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @to_s");
fprintf(stderr, " (%s:%d)\n", "src/model/model_base.nit", 39);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#MVisibility#to_s for (self: Object): String */
val* VIRTUAL_model_base__MVisibility__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = model_base__MVisibility__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#MVisibility#to_s= for (self: MVisibility, String) */
void model_base__MVisibility__to_s_61d(val* self, val* p0) {
self->attrs[COLOR_model_base__MVisibility___64dto_s].val = p0; /* @to_s on <self:MVisibility> */
RET_LABEL:;
}
/* method model_base#MVisibility#to_s= for (self: Object, String) */
void VIRTUAL_model_base__MVisibility__to_s_61d(val* self, val* p0) {
model_base__MVisibility__to_s_61d(self, p0);
RET_LABEL:;
}
/* method model_base#MVisibility#level for (self: MVisibility): Int */
long model_base__MVisibility__level(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_model_base__MVisibility___64dlevel].l; /* @level on <self:MVisibility> */
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#MVisibility#level for (self: Object): Int */
long VIRTUAL_model_base__MVisibility__level(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = model_base__MVisibility__level(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#MVisibility#level= for (self: MVisibility, Int) */
void model_base__MVisibility__level_61d(val* self, long p0) {
self->attrs[COLOR_model_base__MVisibility___64dlevel].l = p0; /* @level on <self:MVisibility> */
RET_LABEL:;
}
/* method model_base#MVisibility#level= for (self: Object, Int) */
void VIRTUAL_model_base__MVisibility__level_61d(val* self, long p0) {
model_base__MVisibility__level_61d(self, p0);
RET_LABEL:;
}
/* method model_base#MVisibility#init for (self: MVisibility, String, Int) */
void model_base__MVisibility__init(val* self, val* p0, long p1) {
val* var_s /* var s: String */;
long var_level /* var level: Int */;
var_s = p0;
var_level = p1;
((void (*)(val*, val*))(self->class->vft[COLOR_model_base__MVisibility__to_s_61d]))(self, var_s) /* to_s= on <self:MVisibility>*/;
((void (*)(val*, long))(self->class->vft[COLOR_model_base__MVisibility__level_61d]))(self, var_level) /* level= on <self:MVisibility>*/;
RET_LABEL:;
}
/* method model_base#MVisibility#init for (self: Object, String, Int) */
void VIRTUAL_model_base__MVisibility__init(val* self, val* p0, long p1) {
model_base__MVisibility__init(self, p0, p1);
RET_LABEL:;
}
/* method model_base#MVisibility#< for (self: MVisibility, MVisibility): Bool */
short int model_base__MVisibility___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_other /* var other: MVisibility */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name9;
short int var10 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:MVisibility> isa OTHER */
/* <p0:MVisibility> isa OTHER */
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
fprintf(stderr, " (%s:%d)\n", "src/model/model_base.nit", 49);
show_backtrace(1);
}
var_other = p0;
var2 = ((long (*)(val*))(self->class->vft[COLOR_model_base__MVisibility__level]))(self) /* level on <self:MVisibility>*/;
var3 = ((long (*)(val*))(var_other->class->vft[COLOR_model_base__MVisibility__level]))(var_other) /* level on <var_other:MVisibility>*/;
{ /* Inline kernel#Int#< (var2,var3) */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (!var6) {
var_class_name9 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name9);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
show_backtrace(1);
}
var10 = var2 < var3;
var4 = var10;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_base#MVisibility#< for (self: Object, Comparable): Bool */
short int VIRTUAL_model_base__MVisibility___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = model_base__MVisibility___60d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#Object#intrude_visibility for (self: Object): MVisibility */
val* model_base__Object__intrude_visibility(val* self) {
val* var /* : MVisibility */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MVisibility */;
val* var2 /* : MVisibility */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : String */;
long var8 /* : Int */;
if (varonce_guard) {
var1 = varonce;
} else {
var2 = NEW_model_base__MVisibility(&type_model_base__MVisibility);
if (varonce3) {
var4 = varonce3;
} else {
var5 = "intrude";
var6 = 7;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce3 = var4;
}
var8 = 4;
((void (*)(val*, val*, long))(var2->class->vft[COLOR_model_base__MVisibility__init]))(var2, var4, var8) /* init on <var2:MVisibility>*/;
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_base#Object#intrude_visibility for (self: Object): MVisibility */
val* VIRTUAL_model_base__Object__intrude_visibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : MVisibility */;
var1 = model_base__Object__intrude_visibility(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#Object#public_visibility for (self: Object): MVisibility */
val* model_base__Object__public_visibility(val* self) {
val* var /* : MVisibility */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MVisibility */;
val* var2 /* : MVisibility */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : String */;
long var8 /* : Int */;
if (varonce_guard) {
var1 = varonce;
} else {
var2 = NEW_model_base__MVisibility(&type_model_base__MVisibility);
if (varonce3) {
var4 = varonce3;
} else {
var5 = "public";
var6 = 6;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce3 = var4;
}
var8 = 4;
((void (*)(val*, val*, long))(var2->class->vft[COLOR_model_base__MVisibility__init]))(var2, var4, var8) /* init on <var2:MVisibility>*/;
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_base#Object#public_visibility for (self: Object): MVisibility */
val* VIRTUAL_model_base__Object__public_visibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : MVisibility */;
var1 = model_base__Object__public_visibility(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#Object#protected_visibility for (self: Object): MVisibility */
val* model_base__Object__protected_visibility(val* self) {
val* var /* : MVisibility */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MVisibility */;
val* var2 /* : MVisibility */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : String */;
long var8 /* : Int */;
if (varonce_guard) {
var1 = varonce;
} else {
var2 = NEW_model_base__MVisibility(&type_model_base__MVisibility);
if (varonce3) {
var4 = varonce3;
} else {
var5 = "protected";
var6 = 9;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce3 = var4;
}
var8 = 3;
((void (*)(val*, val*, long))(var2->class->vft[COLOR_model_base__MVisibility__init]))(var2, var4, var8) /* init on <var2:MVisibility>*/;
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_base#Object#protected_visibility for (self: Object): MVisibility */
val* VIRTUAL_model_base__Object__protected_visibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : MVisibility */;
var1 = model_base__Object__protected_visibility(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#Object#private_visibility for (self: Object): MVisibility */
val* model_base__Object__private_visibility(val* self) {
val* var /* : MVisibility */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MVisibility */;
val* var2 /* : MVisibility */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : String */;
long var8 /* : Int */;
if (varonce_guard) {
var1 = varonce;
} else {
var2 = NEW_model_base__MVisibility(&type_model_base__MVisibility);
if (varonce3) {
var4 = varonce3;
} else {
var5 = "private";
var6 = 7;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce3 = var4;
}
var8 = 2;
((void (*)(val*, val*, long))(var2->class->vft[COLOR_model_base__MVisibility__init]))(var2, var4, var8) /* init on <var2:MVisibility>*/;
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_base#Object#private_visibility for (self: Object): MVisibility */
val* VIRTUAL_model_base__Object__private_visibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : MVisibility */;
var1 = model_base__Object__private_visibility(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model_base#Object#none_visibility for (self: Object): MVisibility */
val* model_base__Object__none_visibility(val* self) {
val* var /* : MVisibility */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MVisibility */;
val* var2 /* : MVisibility */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : String */;
long var8 /* : Int */;
if (varonce_guard) {
var1 = varonce;
} else {
var2 = NEW_model_base__MVisibility(&type_model_base__MVisibility);
if (varonce3) {
var4 = varonce3;
} else {
var5 = "none";
var6 = 4;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce3 = var4;
}
var8 = 2;
((void (*)(val*, val*, long))(var2->class->vft[COLOR_model_base__MVisibility__init]))(var2, var4, var8) /* init on <var2:MVisibility>*/;
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model_base#Object#none_visibility for (self: Object): MVisibility */
val* VIRTUAL_model_base__Object__none_visibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : MVisibility */;
var1 = model_base__Object__none_visibility(self);
var = var1;
RET_LABEL:;
return var;
}
