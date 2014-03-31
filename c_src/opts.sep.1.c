#include "opts.sep.0.h"
/* method opts#Option#names for (self: Option): Array[String] */
val* opts__Option__names(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_opts__Option___names].val; /* _names on <self:Option> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _names");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 19);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method opts#Option#names for (self: Object): Array[String] */
val* VIRTUAL_opts__Option__names(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = opts__Option__names(self);
var = var1;
RET_LABEL:;
return var;
}
/* method opts#Option#helptext for (self: Option): String */
val* opts__Option__helptext(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_opts__Option___helptext].val; /* _helptext on <self:Option> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _helptext");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 25);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method opts#Option#helptext for (self: Object): String */
val* VIRTUAL_opts__Option__helptext(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = opts__Option__helptext(self);
var = var1;
RET_LABEL:;
return var;
}
/* method opts#Option#errors for (self: Option): Array[String] */
val* opts__Option__errors(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_opts__Option___errors].val; /* _errors on <self:Option> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _errors");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 28);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method opts#Option#errors for (self: Object): Array[String] */
val* VIRTUAL_opts__Option__errors(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = opts__Option__errors(self);
var = var1;
RET_LABEL:;
return var;
}
/* method opts#Option#mandatory for (self: Option): Bool */
short int opts__Option__mandatory(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_opts__Option___mandatory].s; /* _mandatory on <self:Option> */
var = var1;
RET_LABEL:;
return var;
}
/* method opts#Option#mandatory for (self: Object): Bool */
short int VIRTUAL_opts__Option__mandatory(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = opts__Option__mandatory(self);
var = var1;
RET_LABEL:;
return var;
}
/* method opts#Option#mandatory= for (self: Option, Bool) */
void opts__Option__mandatory_61d(val* self, short int p0) {
self->attrs[COLOR_opts__Option___mandatory].s = p0; /* _mandatory on <self:Option> */
RET_LABEL:;
}
/* method opts#Option#mandatory= for (self: Object, Bool) */
void VIRTUAL_opts__Option__mandatory_61d(val* self, short int p0) {
opts__Option__mandatory_61d(self, p0);
RET_LABEL:;
}
/* method opts#Option#read for (self: Option): Bool */
short int opts__Option__read(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_opts__Option___read].s; /* _read on <self:Option> */
var = var1;
RET_LABEL:;
return var;
}
/* method opts#Option#read for (self: Object): Bool */
short int VIRTUAL_opts__Option__read(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = opts__Option__read(self);
var = var1;
RET_LABEL:;
return var;
}
/* method opts#Option#value= for (self: Option, nullable Object) */
void opts__Option__value_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (value) <p0:nullable Object> isa nullable VALUE */
/* <p0:nullable Object> isa nullable VALUE */
type_struct = self->type->resolution_table->types[COLOR_opts__Option_VTVALUE];
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable VALUE", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 37);
show_backtrace(1);
}
self->attrs[COLOR_opts__Option___value].val = p0; /* _value on <self:Option> */
RET_LABEL:;
}
/* method opts#Option#value= for (self: Object, nullable Object) */
void VIRTUAL_opts__Option__value_61d(val* self, val* p0) {
opts__Option__value_61d(self, p0);
RET_LABEL:;
}
/* method opts#Option#value for (self: Option): nullable Object */
val* opts__Option__value(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
var1 = self->attrs[COLOR_opts__Option___value].val; /* _value on <self:Option> */
/* <var1:nullable Object> isa VALUE */
type_struct = self->type->resolution_table->types[COLOR_opts__Option_VTVALUE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(var1 == NULL) {
var2 = is_nullable;
} else {
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
}
if (!var2) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 41);
show_backtrace(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method opts#Option#value for (self: Object): nullable Object */
val* VIRTUAL_opts__Option__value(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = opts__Option__value(self);
var = var1;
RET_LABEL:;
return var;
}
/* method opts#Option#default_value for (self: Option): nullable Object */
val* opts__Option__default_value(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = self->attrs[COLOR_opts__Option___default_value].val; /* _default_value on <self:Option> */
var = var1;
RET_LABEL:;
return var;
}
/* method opts#Option#default_value for (self: Object): nullable Object */
val* VIRTUAL_opts__Option__default_value(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = opts__Option__default_value(self);
var = var1;
RET_LABEL:;
return var;
}
/* method opts#Option#default_value= for (self: Option, nullable Object) */
void opts__Option__default_value_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (default_value) <p0:nullable Object> isa nullable VALUE */
/* <p0:nullable Object> isa nullable VALUE */
type_struct = self->type->resolution_table->types[COLOR_opts__Option_VTVALUE];
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
var_class_name = p0 == NULL ? "null" : p0->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable VALUE", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 43);
show_backtrace(1);
}
self->attrs[COLOR_opts__Option___default_value].val = p0; /* _default_value on <self:Option> */
RET_LABEL:;
}
/* method opts#Option#default_value= for (self: Object, nullable Object) */
void VIRTUAL_opts__Option__default_value_61d(val* self, val* p0) {
opts__Option__default_value_61d(self, p0);
RET_LABEL:;
}
/* method opts#Option#init_opt for (self: Option, String, nullable Object, nullable Array[String]) */
void opts__Option__init_opt(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_help /* var help: String */;
val* var_default /* var default: nullable Object */;
val* var_names /* var names: nullable Array[String] */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : Array[String] */;
val* var4 /* : Array[nullable Object] */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : Array[String] */;
/* Covariant cast for argument 1 (default) <p1:nullable Object> isa nullable VALUE */
/* <p1:nullable Object> isa nullable VALUE */
type_struct = self->type->resolution_table->types[COLOR_opts__Option_VTVALUE];
cltype = type_struct->color;
idtype = type_struct->id;
if(p1 == NULL) {
var = 1;
} else {
if(cltype >= p1->type->table_size) {
var = 0;
} else {
var = p1->type->type_table[cltype] == idtype;
}
}
if (!var) {
var_class_name = p1 == NULL ? "null" : p1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable VALUE", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 46);
show_backtrace(1);
}
var_help = p0;
var_default = p1;
var_names = p2;
var1 = NULL;
if (var_names == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (var2){
var3 = NEW_array__Array(&type_array__Arraystring__String);
((void (*)(val*))(var3->class->vft[COLOR_array__Array__init]))(var3) /* init on <var3:Array[String]>*/;
self->attrs[COLOR_opts__Option___names].val = var3; /* _names on <self:Option> */
} else {
var4 = ((val* (*)(val*))(var_names->class->vft[COLOR_array__Collection__to_a]))(var_names) /* to_a on <var_names:nullable Array[String](Array[String])>*/;
self->attrs[COLOR_opts__Option___names].val = var4; /* _names on <self:Option> */
}
self->attrs[COLOR_opts__Option___helptext].val = var_help; /* _helptext on <self:Option> */
var5 = 0;
self->attrs[COLOR_opts__Option___mandatory].s = var5; /* _mandatory on <self:Option> */
var6 = 0;
self->attrs[COLOR_opts__Option___read].s = var6; /* _read on <self:Option> */
self->attrs[COLOR_opts__Option___default_value].val = var_default; /* _default_value on <self:Option> */
self->attrs[COLOR_opts__Option___value].val = var_default; /* _value on <self:Option> */
var7 = NEW_array__Array(&type_array__Arraystring__String);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[String]>*/;
self->attrs[COLOR_opts__Option___errors].val = var7; /* _errors on <self:Option> */
RET_LABEL:;
}
/* method opts#Option#init_opt for (self: Object, String, nullable Object, nullable Array[String]) */
void VIRTUAL_opts__Option__init_opt(val* self, val* p0, val* p1, val* p2) {
opts__Option__init_opt(self, p0, p1, p2);
RET_LABEL:;
}
/* method opts#Option#add_aliases for (self: Option, Array[String]) */
void opts__Option__add_aliases(val* self, val* p0) {
val* var_names /* var names: Array[String] */;
val* var /* : Array[String] */;
var_names = p0;
var = self->attrs[COLOR_opts__Option___names].val; /* _names on <self:Option> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _names");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 63);
show_backtrace(1);
}
((void (*)(val*, val*))(var->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var, var_names) /* add_all on <var:Array[String]>*/;
RET_LABEL:;
}
/* method opts#Option#add_aliases for (self: Object, Array[String]) */
void VIRTUAL_opts__Option__add_aliases(val* self, val* p0) {
opts__Option__add_aliases(self, p0);
RET_LABEL:;
}
/* method opts#Option#to_s for (self: Option): String */
val* opts__Option__to_s(val* self) {
val* var /* : String */;
long var1 /* : Int */;
val* var2 /* : String */;
var1 = 2;
var2 = ((val* (*)(val*, long))(self->class->vft[COLOR_opts__Option__pretty]))(self, var1) /* pretty on <self:Option>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method opts#Option#to_s for (self: Object): String */
val* VIRTUAL_opts__Option__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = opts__Option__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method opts#Option#pretty for (self: Option, Int): String */
val* opts__Option__pretty(val* self, long p0) {
val* var /* : String */;
long var_off /* var off: Int */;
val* var1 /* : Buffer */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
val* var_text /* var text: Buffer */;
val* var6 /* : Array[String] */;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : String */;
val* var12 /* : String */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : String */;
long var18 /* : Int */;
long var19 /* : Int */;
long var21 /* : Int */;
long var_rest /* var rest: Int */;
long var22 /* : Int */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var26 /* : Bool */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : String */;
val* var32 /* : String */;
val* var33 /* : String */;
val* var34 /* : String */;
var_off = p0;
var1 = NEW_string__Buffer(&type_string__Buffer);
if (varonce) {
var2 = varonce;
} else {
var3 = "  ";
var4 = 2;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
((void (*)(val*, val*))(var1->class->vft[COLOR_string__Buffer__from]))(var1, var2) /* from on <var1:Buffer>*/;
var_text = var1;
var6 = self->attrs[COLOR_opts__Option___names].val; /* _names on <self:Option> */
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _names");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 72);
show_backtrace(1);
}
if (varonce7) {
var8 = varonce7;
} else {
var9 = ", ";
var10 = 2;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce7 = var8;
}
var12 = ((val* (*)(val*, val*))(var6->class->vft[COLOR_string__Collection__join]))(var6, var8) /* join on <var6:Array[String]>*/;
((void (*)(val*, val*))(var_text->class->vft[COLOR_abstract_collection__Sequence__append]))(var_text, var12) /* append on <var_text:Buffer>*/;
if (varonce13) {
var14 = varonce13;
} else {
var15 = "  ";
var16 = 2;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
((void (*)(val*, val*))(var_text->class->vft[COLOR_abstract_collection__Sequence__append]))(var_text, var14) /* append on <var_text:Buffer>*/;
var18 = ((long (*)(val*))(var_text->class->vft[COLOR_abstract_collection__Collection__length]))(var_text) /* length on <var_text:Buffer>*/;
{ /* Inline kernel#Int#- (var_off,var18) */
var21 = var_off - var18;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var_rest = var19;
var22 = 0;
{ /* Inline kernel#Int#> (var_rest,var22) */
/* Covariant cast for argument 0 (i) <var22:Int> isa OTHER */
/* <var22:Int> isa OTHER */
var25 = 1; /* easy <var22:Int> isa OTHER*/
if (!var25) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 263);
show_backtrace(1);
}
var26 = var_rest > var22;
var23 = var26;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
if (var23){
if (varonce27) {
var28 = varonce27;
} else {
var29 = " ";
var30 = 1;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
var32 = ((val* (*)(val*, long))(var28->class->vft[COLOR_string__String___42d]))(var28, var_rest) /* * on <var28:String>*/;
((void (*)(val*, val*))(var_text->class->vft[COLOR_abstract_collection__Sequence__append]))(var_text, var32) /* append on <var_text:Buffer>*/;
} else {
}
var33 = ((val* (*)(val*))(self->class->vft[COLOR_opts__Option__helptext]))(self) /* helptext on <self:Option>*/;
((void (*)(val*, val*))(var_text->class->vft[COLOR_abstract_collection__Sequence__append]))(var_text, var33) /* append on <var_text:Buffer>*/;
var34 = ((val* (*)(val*))(var_text->class->vft[COLOR_string__Object__to_s]))(var_text) /* to_s on <var_text:Buffer>*/;
var = var34;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method opts#Option#pretty for (self: Object, Int): String */
val* VIRTUAL_opts__Option__pretty(val* self, long p0) {
val* var /* : String */;
val* var1 /* : String */;
var1 = opts__Option__pretty(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method opts#Option#pretty_default for (self: Option): String */
val* opts__Option__pretty_default(val* self) {
val* var /* : String */;
val* var1 /* : nullable Object */;
val* var_dv /* var dv: nullable Object */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : Array[Object] */;
long var5 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : String */;
val* var15 /* : String */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_opts__Option__default_value]))(self) /* default_value on <self:Option>*/;
var_dv = var1;
var2 = NULL;
if (var_dv == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
var5 = 3;
((void (*)(val*, long))(var4->class->vft[COLOR_array__Array__with_capacity]))(var4, var5) /* with_capacity on <var4:Array[Object]>*/;
var_ = var4;
if (varonce) {
var6 = varonce;
} else {
var7 = " (";
var8 = 2;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var6) /* add on <var_:Array[Object]>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var_dv) /* add on <var_:Array[Object]>*/;
if (varonce10) {
var11 = varonce10;
} else {
var12 = ")";
var13 = 1;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce10 = var11;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var11) /* add on <var_:Array[Object]>*/;
var15 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var = var15;
goto RET_LABEL;
} else {
}
if (varonce16) {
var17 = varonce16;
} else {
var18 = "";
var19 = 0;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
var = var17;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method opts#Option#pretty_default for (self: Object): String */
val* VIRTUAL_opts__Option__pretty_default(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = opts__Option__pretty_default(self);
var = var1;
RET_LABEL:;
return var;
}
/* method opts#Option#read_param for (self: Option, Iterator[String]) */
void opts__Option__read_param(val* self, val* p0) {
val* var_it /* var it: Iterator[String] */;
short int var /* : Bool */;
var_it = p0;
var = 1;
self->attrs[COLOR_opts__Option___read].s = var; /* _read on <self:Option> */
RET_LABEL:;
}
/* method opts#Option#read_param for (self: Object, Iterator[String]) */
void VIRTUAL_opts__Option__read_param(val* self, val* p0) {
opts__Option__read_param(self, p0);
RET_LABEL:;
}
/* method opts#OptionText#init for (self: OptionText, String) */
void opts__OptionText__init(val* self, val* p0) {
val* var_text /* var text: String */;
val* var /* : null */;
val* var1 /* : null */;
var_text = p0;
var = NULL;
var1 = NULL;
((void (*)(val*, val*, val*, val*))(self->class->vft[COLOR_opts__Option__init_opt]))(self, var_text, var, var1) /* init_opt on <self:OptionText>*/;
RET_LABEL:;
}
/* method opts#OptionText#init for (self: Object, String) */
void VIRTUAL_opts__OptionText__init(val* self, val* p0) {
opts__OptionText__init(self, p0);
RET_LABEL:;
}
/* method opts#OptionText#pretty for (self: OptionText, Int): String */
val* opts__OptionText__pretty(val* self, long p0) {
val* var /* : String */;
long var_off /* var off: Int */;
val* var1 /* : String */;
var_off = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_string__Object__to_s]))(self) /* to_s on <self:OptionText>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method opts#OptionText#pretty for (self: Object, Int): String */
val* VIRTUAL_opts__OptionText__pretty(val* self, long p0) {
val* var /* : String */;
val* var1 /* : String */;
var1 = opts__OptionText__pretty(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method opts#OptionText#to_s for (self: OptionText): String */
val* opts__OptionText__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_opts__Option__helptext]))(self) /* helptext on <self:OptionText>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method opts#OptionText#to_s for (self: Object): String */
val* VIRTUAL_opts__OptionText__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = opts__OptionText__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method opts#OptionBool#init for (self: OptionBool, String, Array[String]) */
void opts__OptionBool__init(val* self, val* p0, val* p1) {
val* var_help /* var help: String */;
val* var_names /* var names: Array[String] */;
short int var /* : Bool */;
val* var1 /* : nullable Object */;
var_help = p0;
var_names = p1;
var = 0;
var1 = BOX_kernel__Bool(var); /* autobox from Bool to nullable Object */
((void (*)(val*, val*, val*, val*))(self->class->vft[COLOR_opts__Option__init_opt]))(self, var_help, var1, var_names) /* init_opt on <self:OptionBool>*/;
RET_LABEL:;
}
/* method opts#OptionBool#init for (self: Object, String, Array[String]) */
void VIRTUAL_opts__OptionBool__init(val* self, val* p0, val* p1) {
opts__OptionBool__init(self, p0, p1);
RET_LABEL:;
}
/* method opts#OptionBool#read_param for (self: OptionBool, Iterator[String]) */
void opts__OptionBool__read_param(val* self, val* p0) {
val* var_it /* var it: Iterator[String] */;
short int var /* : Bool */;
val* var1 /* : nullable Object */;
var_it = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_opts__OptionBool__read_param]))(self, p0) /* read_param on <self:OptionBool>*/;
var = 1;
var1 = BOX_kernel__Bool(var); /* autobox from Bool to nullable Object */
((void (*)(val*, val*))(self->class->vft[COLOR_opts__Option__value_61d]))(self, var1) /* value= on <self:OptionBool>*/;
RET_LABEL:;
}
/* method opts#OptionBool#read_param for (self: Object, Iterator[String]) */
void VIRTUAL_opts__OptionBool__read_param(val* self, val* p0) {
opts__OptionBool__read_param(self, p0);
RET_LABEL:;
}
/* method opts#OptionCount#init for (self: OptionCount, String, Array[String]) */
void opts__OptionCount__init(val* self, val* p0, val* p1) {
val* var_help /* var help: String */;
val* var_names /* var names: Array[String] */;
long var /* : Int */;
val* var1 /* : nullable Object */;
var_help = p0;
var_names = p1;
var = 0;
var1 = BOX_kernel__Int(var); /* autobox from Int to nullable Object */
((void (*)(val*, val*, val*, val*))(self->class->vft[COLOR_opts__Option__init_opt]))(self, var_help, var1, var_names) /* init_opt on <self:OptionCount>*/;
RET_LABEL:;
}
/* method opts#OptionCount#init for (self: Object, String, Array[String]) */
void VIRTUAL_opts__OptionCount__init(val* self, val* p0, val* p1) {
opts__OptionCount__init(self, p0, p1);
RET_LABEL:;
}
/* method opts#OptionCount#read_param for (self: OptionCount, Iterator[String]) */
void opts__OptionCount__read_param(val* self, val* p0) {
val* var_it /* var it: Iterator[String] */;
val* var_ /* var : OptionCount */;
val* var /* : nullable Object */;
long var1 /* : Int */;
long var2 /* : Int */;
long var4 /* : Int */;
long var5 /* : Int */;
val* var6 /* : nullable Object */;
var_it = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_opts__OptionCount__read_param]))(self, p0) /* read_param on <self:OptionCount>*/;
var_ = self;
var = ((val* (*)(val*))(var_->class->vft[COLOR_opts__Option__value]))(var_) /* value on <var_:OptionCount>*/;
var1 = 1;
{ /* Inline kernel#Int#+ (var,var1) */
var4 = ((struct instance_kernel__Int*)var)->value; /* autounbox from nullable Object to Int */;
var5 = var4 + var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var6 = BOX_kernel__Int(var2); /* autobox from Int to nullable Object */
((void (*)(val*, val*))(var_->class->vft[COLOR_opts__Option__value_61d]))(var_, var6) /* value= on <var_:OptionCount>*/;
RET_LABEL:;
}
/* method opts#OptionCount#read_param for (self: Object, Iterator[String]) */
void VIRTUAL_opts__OptionCount__read_param(val* self, val* p0) {
opts__OptionCount__read_param(self, p0);
RET_LABEL:;
}
/* method opts#OptionParameter#convert for (self: OptionParameter, String): nullable Object */
val* opts__OptionParameter__convert(val* self, val* p0) {
val* var /* : nullable Object */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "convert", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 133);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method opts#OptionParameter#convert for (self: Object, String): nullable Object */
val* VIRTUAL_opts__OptionParameter__convert(val* self, val* p0) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = opts__OptionParameter__convert(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method opts#OptionParameter#parameter_mandatory for (self: OptionParameter): Bool */
short int opts__OptionParameter__parameter_mandatory(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_opts__OptionParameter___parameter_mandatory].s; /* _parameter_mandatory on <self:OptionParameter> */
var = var1;
RET_LABEL:;
return var;
}
/* method opts#OptionParameter#parameter_mandatory for (self: Object): Bool */
short int VIRTUAL_opts__OptionParameter__parameter_mandatory(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = opts__OptionParameter__parameter_mandatory(self);
var = var1;
RET_LABEL:;
return var;
}
/* method opts#OptionParameter#parameter_mandatory= for (self: OptionParameter, Bool) */
void opts__OptionParameter__parameter_mandatory_61d(val* self, short int p0) {
self->attrs[COLOR_opts__OptionParameter___parameter_mandatory].s = p0; /* _parameter_mandatory on <self:OptionParameter> */
RET_LABEL:;
}
/* method opts#OptionParameter#parameter_mandatory= for (self: Object, Bool) */
void VIRTUAL_opts__OptionParameter__parameter_mandatory_61d(val* self, short int p0) {
opts__OptionParameter__parameter_mandatory_61d(self, p0);
RET_LABEL:;
}
/* method opts#OptionParameter#read_param for (self: OptionParameter, Iterator[String]) */
void opts__OptionParameter__read_param(val* self, val* p0) {
val* var_it /* var it: Iterator[String] */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var_ /* var : Bool */;
val* var2 /* : nullable Object */;
val* var3 /* : nullable Object */;
char var4 /* : Char */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
char var8 /* : Char */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var11 /* : nullable Object */;
short int var12 /* : Bool */;
val* var13 /* : Array[String] */;
static val* varonce;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : String */;
val* var18 /* : Array[String] */;
val* var19 /* : nullable Object */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : String */;
val* var25 /* : Array[Object] */;
long var26 /* : Int */;
val* var27 /* : NativeArray[Object] */;
val* var28 /* : String */;
var_it = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_opts__OptionParameter__read_param]))(self, p0) /* read_param on <self:OptionParameter>*/;
var1 = ((short int (*)(val*))(var_it->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_it) /* is_ok on <var_it:Iterator[String]>*/;
var_ = var1;
if (var1){
var2 = ((val* (*)(val*))(var_it->class->vft[COLOR_abstract_collection__Iterator__item]))(var_it) /* item on <var_it:Iterator[String]>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__first]))(var2) /* first on <var2:nullable Object(String)>*/;
var4 = '-';
{ /* Inline kernel#Char#!= (var3,var4) */
var7 = (var3 != NULL) && (var3->class == &class_kernel__Char);
if (var7) {
var8 = ((struct instance_kernel__Char*)var3)->value; /* autounbox from nullable Object to Char */;
var7 = (var8 == var4);
}
var9 = !var7;
var5 = var9;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var = var5;
} else {
var = var_;
}
if (var){
var10 = ((val* (*)(val*))(var_it->class->vft[COLOR_abstract_collection__Iterator__item]))(var_it) /* item on <var_it:Iterator[String]>*/;
var11 = ((val* (*)(val*, val*))(self->class->vft[COLOR_opts__OptionParameter__convert]))(self, var10) /* convert on <self:OptionParameter>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_opts__Option__value_61d]))(self, var11) /* value= on <self:OptionParameter>*/;
((void (*)(val*))(var_it->class->vft[COLOR_abstract_collection__Iterator__next]))(var_it) /* next on <var_it:Iterator[String]>*/;
} else {
var12 = self->attrs[COLOR_opts__OptionParameter___parameter_mandatory].s; /* _parameter_mandatory on <self:OptionParameter> */
if (var12){
var13 = self->attrs[COLOR_opts__Option___errors].val; /* _errors on <self:OptionParameter> */
if (var13 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _errors");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 146);
show_backtrace(1);
}
if (varonce) {
var14 = varonce;
} else {
var15 = "Parameter expected for option ";
var16 = 30;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce = var14;
}
var18 = ((val* (*)(val*))(self->class->vft[COLOR_opts__Option__names]))(self) /* names on <self:OptionParameter>*/;
var19 = ((val* (*)(val*))(var18->class->vft[COLOR_abstract_collection__Collection__first]))(var18) /* first on <var18:Array[String]>*/;
if (varonce20) {
var21 = varonce20;
} else {
var22 = ".";
var23 = 1;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
var25 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var25 = array_instance Array[Object] */
var26 = 3;
var27 = NEW_array__NativeArray(var26, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var27)->values[0] = (val*) var14;
((struct instance_array__NativeArray*)var27)->values[1] = (val*) var19;
((struct instance_array__NativeArray*)var27)->values[2] = (val*) var21;
((void (*)(val*, val*, long))(var25->class->vft[COLOR_array__Array__with_native]))(var25, var27, var26) /* with_native on <var25:Array[Object]>*/;
}
var28 = ((val* (*)(val*))(var25->class->vft[COLOR_string__Object__to_s]))(var25) /* to_s on <var25:Array[Object]>*/;
((void (*)(val*, val*))(var13->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var13, var28) /* add on <var13:Array[String]>*/;
} else {
}
}
RET_LABEL:;
}
/* method opts#OptionParameter#read_param for (self: Object, Iterator[String]) */
void VIRTUAL_opts__OptionParameter__read_param(val* self, val* p0) {
opts__OptionParameter__read_param(self, p0);
RET_LABEL:;
}
/* method opts#OptionParameter#init_opt for (self: OptionParameter, String, nullable Object, nullable Array[String]) */
void opts__OptionParameter__init_opt(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_h /* var h: String */;
val* var_d /* var d: nullable Object */;
val* var_n /* var n: nullable Array[String] */;
short int var1 /* : Bool */;
/* Covariant cast for argument 1 (d) <p1:nullable Object> isa nullable VALUE */
/* <p1:nullable Object> isa nullable VALUE */
type_struct = self->type->resolution_table->types[COLOR_opts__Option_VTVALUE];
cltype = type_struct->color;
idtype = type_struct->id;
if(p1 == NULL) {
var = 1;
} else {
if(cltype >= p1->type->table_size) {
var = 0;
} else {
var = p1->type->type_table[cltype] == idtype;
}
}
if (!var) {
var_class_name = p1 == NULL ? "null" : p1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable VALUE", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 151);
show_backtrace(1);
}
var_h = p0;
var_d = p1;
var_n = p2;
((void (*)(val*, val*, val*, val*))(self->class->vft[COLOR_opts__Option__init_opt]))(self, p0, p1, p2) /* init_opt on <self:OptionParameter>*/;
var1 = 1;
self->attrs[COLOR_opts__OptionParameter___parameter_mandatory].s = var1; /* _parameter_mandatory on <self:OptionParameter> */
RET_LABEL:;
}
/* method opts#OptionParameter#init_opt for (self: Object, String, nullable Object, nullable Array[String]) */
void VIRTUAL_opts__OptionParameter__init_opt(val* self, val* p0, val* p1, val* p2) {
opts__OptionParameter__init_opt(self, p0, p1, p2);
RET_LABEL:;
}
/* method opts#OptionString#init for (self: OptionString, String, Array[String]) */
void opts__OptionString__init(val* self, val* p0, val* p1) {
val* var_help /* var help: String */;
val* var_names /* var names: Array[String] */;
val* var /* : null */;
var_help = p0;
var_names = p1;
var = NULL;
((void (*)(val*, val*, val*, val*))(self->class->vft[COLOR_opts__OptionParameter__init_opt]))(self, var_help, var, var_names) /* init_opt on <self:OptionString>*/;
RET_LABEL:;
}
/* method opts#OptionString#init for (self: Object, String, Array[String]) */
void VIRTUAL_opts__OptionString__init(val* self, val* p0, val* p1) {
opts__OptionString__init(self, p0, p1);
RET_LABEL:;
}
/* method opts#OptionString#convert for (self: OptionString, String): nullable String */
val* opts__OptionString__convert(val* self, val* p0) {
val* var /* : nullable String */;
val* var_str /* var str: String */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var_str = p0;
/* <var_str:String> isa VALUE */
type_struct = self->type->resolution_table->types[COLOR_opts__Option_VTVALUE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var_str->type->table_size) {
var1 = 0;
} else {
var1 = var_str->type->type_table[cltype] == idtype;
}
if (!var1) {
var_class_name = var_str == NULL ? "null" : var_str->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 164);
show_backtrace(1);
}
var = var_str;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method opts#OptionString#convert for (self: Object, String): nullable Object */
val* VIRTUAL_opts__OptionString__convert(val* self, val* p0) {
val* var /* : nullable Object */;
val* var1 /* : nullable String */;
var1 = opts__OptionString__convert(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method opts#OptionEnum#init for (self: OptionEnum, Array[String], String, Int, Array[String]) */
void opts__OptionEnum__init(val* self, val* p0, val* p1, long p2, val* p3) {
val* var_values /* var values: Array[String] */;
val* var_help /* var help: String */;
long var_default /* var default: Int */;
val* var_names /* var names: Array[String] */;
long var /* : Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : Array[nullable Object] */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : String */;
val* var16 /* : String */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : String */;
val* var22 /* : Array[Object] */;
long var23 /* : Int */;
val* var24 /* : NativeArray[Object] */;
val* var25 /* : String */;
val* var26 /* : nullable Object */;
var_values = p0;
var_help = p1;
var_default = p2;
var_names = p3;
var = ((long (*)(val*))(var_values->class->vft[COLOR_abstract_collection__Collection__length]))(var_values) /* length on <var_values:Array[String]>*/;
var1 = 0;
{ /* Inline kernel#Int#> (var,var1) */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (!var4) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 263);
show_backtrace(1);
}
var5 = var > var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 174);
show_backtrace(1);
}
var6 = ((val* (*)(val*))(var_values->class->vft[COLOR_array__Collection__to_a]))(var_values) /* to_a on <var_values:Array[String]>*/;
self->attrs[COLOR_opts__OptionEnum___values].val = var6; /* _values on <self:OptionEnum> */
if (varonce) {
var7 = varonce;
} else {
var8 = " <";
var9 = 2;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
if (varonce11) {
var12 = varonce11;
} else {
var13 = ", ";
var14 = 2;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
var16 = ((val* (*)(val*, val*))(var_values->class->vft[COLOR_string__Collection__join]))(var_values, var12) /* join on <var_values:Array[String]>*/;
if (varonce17) {
var18 = varonce17;
} else {
var19 = ">";
var20 = 1;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
var22 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var22 = array_instance Array[Object] */
var23 = 4;
var24 = NEW_array__NativeArray(var23, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var24)->values[0] = (val*) var_help;
((struct instance_array__NativeArray*)var24)->values[1] = (val*) var7;
((struct instance_array__NativeArray*)var24)->values[2] = (val*) var16;
((struct instance_array__NativeArray*)var24)->values[3] = (val*) var18;
((void (*)(val*, val*, long))(var22->class->vft[COLOR_array__Array__with_native]))(var22, var24, var23) /* with_native on <var22:Array[Object]>*/;
}
var25 = ((val* (*)(val*))(var22->class->vft[COLOR_string__Object__to_s]))(var22) /* to_s on <var22:Array[Object]>*/;
var26 = BOX_kernel__Int(var_default); /* autobox from Int to nullable Object */
((void (*)(val*, val*, val*, val*))(self->class->vft[COLOR_opts__OptionParameter__init_opt]))(self, var25, var26, var_names) /* init_opt on <self:OptionEnum>*/;
RET_LABEL:;
}
/* method opts#OptionEnum#init for (self: Object, Array[String], String, Int, Array[String]) */
void VIRTUAL_opts__OptionEnum__init(val* self, val* p0, val* p1, long p2, val* p3) {
opts__OptionEnum__init(self, p0, p1, p2, p3);
RET_LABEL:;
}
/* method opts#OptionEnum#convert for (self: OptionEnum, String): Int */
long opts__OptionEnum__convert(val* self, val* p0) {
long var /* : Int */;
val* var_str /* var str: String */;
val* var1 /* : Array[String] */;
long var2 /* : Int */;
long var_id /* var id: Int */;
long var3 /* : Int */;
long var4 /* : Int */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : Array[Object] */;
long var11 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : String */;
val* var16 /* : Array[String] */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : String */;
val* var22 /* : String */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : String */;
val* var28 /* : String */;
val* var_e /* var e: String */;
val* var29 /* : Array[Object] */;
long var30 /* : Int */;
val* var_31 /* var : Array[Object] */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
long var35 /* : Int */;
val* var36 /* : String */;
val* var37 /* : Array[String] */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
long var41 /* : Int */;
val* var42 /* : String */;
val* var43 /* : String */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
long var47 /* : Int */;
val* var48 /* : String */;
val* var49 /* : String */;
val* var50 /* : String */;
val* var51 /* : Array[String] */;
var_str = p0;
var1 = self->attrs[COLOR_opts__OptionEnum___values].val; /* _values on <self:OptionEnum> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _values");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 181);
show_backtrace(1);
}
var2 = ((long (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__SequenceRead__index_of]))(var1, var_str) /* index_of on <var1:Array[String]>*/;
var_id = var2;
var3 = 1;
{ /* Inline kernel#Int#unary - (var3) */
var6 = -var3;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
{ /* Inline kernel#Int#== (var_id,var4) */
var9 = var_id == var4;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
if (var7){
var10 = NEW_array__Array(&type_array__Arraykernel__Object);
var11 = 3;
((void (*)(val*, long))(var10->class->vft[COLOR_array__Array__with_capacity]))(var10, var11) /* with_capacity on <var10:Array[Object]>*/;
var_ = var10;
if (varonce) {
var12 = varonce;
} else {
var13 = "Unrecognized value for option ";
var14 = 30;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce = var12;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var12) /* add on <var_:Array[Object]>*/;
var16 = self->attrs[COLOR_opts__Option___names].val; /* _names on <self:OptionEnum> */
if (var16 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _names");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 183);
show_backtrace(1);
}
if (varonce17) {
var18 = varonce17;
} else {
var19 = ", ";
var20 = 2;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
var22 = ((val* (*)(val*, val*))(var16->class->vft[COLOR_string__Collection__join]))(var16, var18) /* join on <var16:Array[String]>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var22) /* add on <var_:Array[Object]>*/;
if (varonce23) {
var24 = varonce23;
} else {
var25 = ".\n";
var26 = 2;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var24) /* add on <var_:Array[Object]>*/;
var28 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var_e = var28;
var29 = NEW_array__Array(&type_array__Arraykernel__Object);
var30 = 3;
((void (*)(val*, long))(var29->class->vft[COLOR_array__Array__with_capacity]))(var29, var30) /* with_capacity on <var29:Array[Object]>*/;
var_31 = var29;
if (varonce32) {
var33 = varonce32;
} else {
var34 = "Expected values are: ";
var35 = 21;
var36 = string__NativeString__to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
((void (*)(val*, val*))(var_31->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_31, var33) /* add on <var_31:Array[Object]>*/;
var37 = self->attrs[COLOR_opts__OptionEnum___values].val; /* _values on <self:OptionEnum> */
if (var37 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _values");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 184);
show_backtrace(1);
}
if (varonce38) {
var39 = varonce38;
} else {
var40 = ", ";
var41 = 2;
var42 = string__NativeString__to_s_with_length(var40, var41);
var39 = var42;
varonce38 = var39;
}
var43 = ((val* (*)(val*, val*))(var37->class->vft[COLOR_string__Collection__join]))(var37, var39) /* join on <var37:Array[String]>*/;
((void (*)(val*, val*))(var_31->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_31, var43) /* add on <var_31:Array[Object]>*/;
if (varonce44) {
var45 = varonce44;
} else {
var46 = ".";
var47 = 1;
var48 = string__NativeString__to_s_with_length(var46, var47);
var45 = var48;
varonce44 = var45;
}
((void (*)(val*, val*))(var_31->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_31, var45) /* add on <var_31:Array[Object]>*/;
var49 = ((val* (*)(val*))(var_31->class->vft[COLOR_string__Object__to_s]))(var_31) /* to_s on <var_31:Array[Object]>*/;
var50 = ((val* (*)(val*, val*))(var_e->class->vft[COLOR_string__String___43d]))(var_e, var49) /* + on <var_e:String>*/;
var_e = var50;
var51 = self->attrs[COLOR_opts__Option___errors].val; /* _errors on <self:OptionEnum> */
if (var51 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _errors");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 185);
show_backtrace(1);
}
((void (*)(val*, val*))(var51->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var51, var_e) /* add on <var51:Array[String]>*/;
} else {
}
var = var_id;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method opts#OptionEnum#convert for (self: Object, String): nullable Object */
val* VIRTUAL_opts__OptionEnum__convert(val* self, val* p0) {
val* var /* : nullable Object */;
long var1 /* : Int */;
val* var2 /* : nullable Object */;
var1 = opts__OptionEnum__convert(self, p0);
var2 = BOX_kernel__Int(var1); /* autobox from Int to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method opts#OptionEnum#value_name for (self: OptionEnum): String */
val* opts__OptionEnum__value_name(val* self) {
val* var /* : String */;
val* var1 /* : Array[String] */;
val* var2 /* : nullable Object */;
val* var3 /* : nullable Object */;
long var4 /* : Int */;
var1 = self->attrs[COLOR_opts__OptionEnum___values].val; /* _values on <self:OptionEnum> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _values");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 190);
show_backtrace(1);
}
var2 = ((val* (*)(val*))(self->class->vft[COLOR_opts__Option__value]))(self) /* value on <self:OptionEnum>*/;
var4 = ((struct instance_kernel__Int*)var2)->value; /* autounbox from nullable Object to Int */;
var3 = ((val* (*)(val*, long))(var1->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var1, var4) /* [] on <var1:Array[String]>*/;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method opts#OptionEnum#value_name for (self: Object): String */
val* VIRTUAL_opts__OptionEnum__value_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = opts__OptionEnum__value_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method opts#OptionEnum#pretty_default for (self: OptionEnum): String */
val* opts__OptionEnum__pretty_default(val* self) {
val* var /* : String */;
val* var1 /* : nullable Object */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : Array[Object] */;
long var5 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
val* var10 /* : Array[String] */;
val* var11 /* : nullable Object */;
val* var12 /* : nullable Object */;
long var13 /* : Int */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : String */;
val* var19 /* : String */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_opts__Option__default_value]))(self) /* default_value on <self:OptionEnum>*/;
var2 = NULL;
if (var1 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
var4 = NEW_array__Array(&type_array__Arraykernel__Object);
var5 = 3;
((void (*)(val*, long))(var4->class->vft[COLOR_array__Array__with_capacity]))(var4, var5) /* with_capacity on <var4:Array[Object]>*/;
var_ = var4;
if (varonce) {
var6 = varonce;
} else {
var7 = " (";
var8 = 2;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var6) /* add on <var_:Array[Object]>*/;
var10 = self->attrs[COLOR_opts__OptionEnum___values].val; /* _values on <self:OptionEnum> */
if (var10 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _values");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 195);
show_backtrace(1);
}
var11 = ((val* (*)(val*))(self->class->vft[COLOR_opts__Option__default_value]))(self) /* default_value on <self:OptionEnum>*/;
if (var11 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 195);
show_backtrace(1);
}
var13 = ((struct instance_kernel__Int*)var11)->value; /* autounbox from nullable Int to Int */;
var12 = ((val* (*)(val*, long))(var10->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var10, var13) /* [] on <var10:Array[String]>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var12) /* add on <var_:Array[Object]>*/;
if (varonce14) {
var15 = varonce14;
} else {
var16 = ")";
var17 = 1;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var15) /* add on <var_:Array[Object]>*/;
var19 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var = var19;
goto RET_LABEL;
} else {
if (varonce20) {
var21 = varonce20;
} else {
var22 = "";
var23 = 0;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
var = var21;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method opts#OptionEnum#pretty_default for (self: Object): String */
val* VIRTUAL_opts__OptionEnum__pretty_default(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = opts__OptionEnum__pretty_default(self);
var = var1;
RET_LABEL:;
return var;
}
/* method opts#OptionInt#init for (self: OptionInt, String, Int, Array[String]) */
void opts__OptionInt__init(val* self, val* p0, long p1, val* p2) {
val* var_help /* var help: String */;
long var_default /* var default: Int */;
val* var_names /* var names: Array[String] */;
val* var /* : nullable Object */;
var_help = p0;
var_default = p1;
var_names = p2;
var = BOX_kernel__Int(var_default); /* autobox from Int to nullable Object */
((void (*)(val*, val*, val*, val*))(self->class->vft[COLOR_opts__OptionParameter__init_opt]))(self, var_help, var, var_names) /* init_opt on <self:OptionInt>*/;
RET_LABEL:;
}
/* method opts#OptionInt#init for (self: Object, String, Int, Array[String]) */
void VIRTUAL_opts__OptionInt__init(val* self, val* p0, long p1, val* p2) {
opts__OptionInt__init(self, p0, p1, p2);
RET_LABEL:;
}
/* method opts#OptionInt#convert for (self: OptionInt, String): Int */
long opts__OptionInt__convert(val* self, val* p0) {
long var /* : Int */;
val* var_str /* var str: String */;
long var1 /* : Int */;
var_str = p0;
var1 = ((long (*)(val*))(var_str->class->vft[COLOR_string__AbstractString__to_i]))(var_str) /* to_i on <var_str:String>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method opts#OptionInt#convert for (self: Object, String): nullable Object */
val* VIRTUAL_opts__OptionInt__convert(val* self, val* p0) {
val* var /* : nullable Object */;
long var1 /* : Int */;
val* var2 /* : nullable Object */;
var1 = opts__OptionInt__convert(self, p0);
var2 = BOX_kernel__Int(var1); /* autobox from Int to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method opts#OptionArray#init for (self: OptionArray, String, Array[String]) */
void opts__OptionArray__init(val* self, val* p0, val* p1) {
val* var_help /* var help: String */;
val* var_names /* var names: Array[String] */;
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var_help = p0;
var_names = p1;
var = NEW_array__Array(&type_array__Arraystring__String);
((void (*)(val*))(var->class->vft[COLOR_array__Array__init]))(var) /* init on <var:Array[String]>*/;
self->attrs[COLOR_opts__OptionArray___values].val = var; /* _values on <self:OptionArray> */
var1 = self->attrs[COLOR_opts__OptionArray___values].val; /* _values on <self:OptionArray> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _values");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 218);
show_backtrace(1);
}
/* <var1:Array[String]> isa nullable VALUE */
type_struct = self->type->resolution_table->types[COLOR_opts__Option_VTVALUE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
if (!var2) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable VALUE", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 218);
show_backtrace(1);
}
((void (*)(val*, val*, val*, val*))(self->class->vft[COLOR_opts__OptionParameter__init_opt]))(self, var_help, var1, var_names) /* init_opt on <self:OptionArray>*/;
RET_LABEL:;
}
/* method opts#OptionArray#init for (self: Object, String, Array[String]) */
void VIRTUAL_opts__OptionArray__init(val* self, val* p0, val* p1) {
opts__OptionArray__init(self, p0, p1);
RET_LABEL:;
}
/* method opts#OptionArray#convert for (self: OptionArray, String): Array[String] */
val* opts__OptionArray__convert(val* self, val* p0) {
val* var /* : Array[String] */;
val* var_str /* var str: String */;
val* var1 /* : Array[String] */;
val* var2 /* : Array[String] */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var_str = p0;
var1 = self->attrs[COLOR_opts__OptionArray___values].val; /* _values on <self:OptionArray> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _values");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 224);
show_backtrace(1);
}
((void (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var1, var_str) /* add on <var1:Array[String]>*/;
var2 = self->attrs[COLOR_opts__OptionArray___values].val; /* _values on <self:OptionArray> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _values");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 225);
show_backtrace(1);
}
/* <var2:Array[String]> isa VALUE */
type_struct = self->type->resolution_table->types[COLOR_opts__Option_VTVALUE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var2->type->table_size) {
var3 = 0;
} else {
var3 = var2->type->type_table[cltype] == idtype;
}
if (!var3) {
var_class_name = var2 == NULL ? "null" : var2->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 225);
show_backtrace(1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method opts#OptionArray#convert for (self: Object, String): nullable Object */
val* VIRTUAL_opts__OptionArray__convert(val* self, val* p0) {
val* var /* : nullable Object */;
val* var1 /* : Array[String] */;
var1 = opts__OptionArray__convert(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method opts#OptionContext#options for (self: OptionContext): Array[Option] */
val* opts__OptionContext__options(val* self) {
val* var /* : Array[Option] */;
val* var1 /* : Array[Option] */;
var1 = self->attrs[COLOR_opts__OptionContext___options].val; /* _options on <self:OptionContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _options");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 230);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method opts#OptionContext#options for (self: Object): Array[Option] */
val* VIRTUAL_opts__OptionContext__options(val* self) {
val* var /* : Array[Option] */;
val* var1 /* : Array[Option] */;
var1 = opts__OptionContext__options(self);
var = var1;
RET_LABEL:;
return var;
}
/* method opts#OptionContext#rest for (self: OptionContext): Array[String] */
val* opts__OptionContext__rest(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_opts__OptionContext___rest].val; /* _rest on <self:OptionContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _rest");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 231);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method opts#OptionContext#rest for (self: Object): Array[String] */
val* VIRTUAL_opts__OptionContext__rest(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = opts__OptionContext__rest(self);
var = var1;
RET_LABEL:;
return var;
}
/* method opts#OptionContext#errors for (self: OptionContext): Array[String] */
val* opts__OptionContext__errors(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_opts__OptionContext___errors].val; /* _errors on <self:OptionContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _errors");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 232);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method opts#OptionContext#errors for (self: Object): Array[String] */
val* VIRTUAL_opts__OptionContext__errors(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = opts__OptionContext__errors(self);
var = var1;
RET_LABEL:;
return var;
}
/* method opts#OptionContext#usage for (self: OptionContext) */
void opts__OptionContext__usage(val* self) {
long var /* : Int */;
long var_lmax /* var lmax: Int */;
val* var1 /* : Array[Option] */;
val* var2 /* : Iterator[nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_i /* var i: Option */;
long var5 /* : Int */;
long var_l /* var l: Int */;
val* var6 /* : Array[String] */;
val* var7 /* : Iterator[nullable Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_n /* var n: String */;
long var10 /* : Int */;
long var11 /* : Int */;
long var12 /* : Int */;
long var14 /* : Int */;
long var15 /* : Int */;
long var17 /* : Int */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var21 /* : Bool */;
val* var23 /* : Array[Option] */;
val* var24 /* : Iterator[nullable Object] */;
short int var25 /* : Bool */;
val* var26 /* : nullable Object */;
val* var_i27 /* var i: Option */;
val* var28 /* : String */;
var = 1;
var_lmax = var;
var1 = self->attrs[COLOR_opts__OptionContext___options].val; /* _options on <self:OptionContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _options");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 239);
show_backtrace(1);
}
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Collection__iterator]))(var1) /* iterator on <var1:Array[Option]>*/;
for(;;) {
var3 = ((short int (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var2) /* is_ok on <var2:Iterator[nullable Object]>*/;
if(!var3) break;
var4 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__item]))(var2) /* item on <var2:Iterator[nullable Object]>*/;
var_i = var4;
var5 = 3;
var_l = var5;
var6 = ((val* (*)(val*))(var_i->class->vft[COLOR_opts__Option__names]))(var_i) /* names on <var_i:Option>*/;
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_collection__Collection__iterator]))(var6) /* iterator on <var6:Array[String]>*/;
for(;;) {
var8 = ((short int (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var7) /* is_ok on <var7:Iterator[nullable Object]>*/;
if(!var8) break;
var9 = ((val* (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__item]))(var7) /* item on <var7:Iterator[nullable Object]>*/;
var_n = var9;
var10 = ((long (*)(val*))(var_n->class->vft[COLOR_abstract_collection__Collection__length]))(var_n) /* length on <var_n:String>*/;
var11 = 2;
{ /* Inline kernel#Int#+ (var10,var11) */
var14 = var10 + var11;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
{ /* Inline kernel#Int#+ (var_l,var12) */
var17 = var_l + var12;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var_l = var15;
CONTINUE_label: (void)0;
((void (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__next]))(var7) /* next on <var7:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
{ /* Inline kernel#Int#< (var_lmax,var_l) */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var20 = 1; /* easy <var_l:Int> isa OTHER*/
if (!var20) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
show_backtrace(1);
}
var21 = var_lmax < var_l;
var18 = var21;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
if (var18){
var_lmax = var_l;
} else {
}
CONTINUE_label22: (void)0;
((void (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__next]))(var2) /* next on <var2:Iterator[nullable Object]>*/;
}
BREAK_label22: (void)0;
var23 = self->attrs[COLOR_opts__OptionContext___options].val; /* _options on <self:OptionContext> */
if (var23 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _options");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 247);
show_backtrace(1);
}
var24 = ((val* (*)(val*))(var23->class->vft[COLOR_abstract_collection__Collection__iterator]))(var23) /* iterator on <var23:Array[Option]>*/;
for(;;) {
var25 = ((short int (*)(val*))(var24->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var24) /* is_ok on <var24:Iterator[nullable Object]>*/;
if(!var25) break;
var26 = ((val* (*)(val*))(var24->class->vft[COLOR_abstract_collection__Iterator__item]))(var24) /* item on <var24:Iterator[nullable Object]>*/;
var_i27 = var26;
var28 = ((val* (*)(val*, long))(var_i27->class->vft[COLOR_opts__Option__pretty]))(var_i27, var_lmax) /* pretty on <var_i27:Option>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_file__Object__print]))(self, var28) /* print on <self:OptionContext>*/;
CONTINUE_label29: (void)0;
((void (*)(val*))(var24->class->vft[COLOR_abstract_collection__Iterator__next]))(var24) /* next on <var24:Iterator[nullable Object]>*/;
}
BREAK_label29: (void)0;
RET_LABEL:;
}
/* method opts#OptionContext#usage for (self: Object) */
void VIRTUAL_opts__OptionContext__usage(val* self) {
opts__OptionContext__usage(self);
RET_LABEL:;
}
/* method opts#OptionContext#parse for (self: OptionContext, Collection[String]) */
void opts__OptionContext__parse(val* self, val* p0) {
val* var_argv /* var argv: Collection[String] */;
val* var /* : Iterator[nullable Object] */;
val* var_it /* var it: Iterator[String] */;
var_argv = p0;
var = ((val* (*)(val*))(var_argv->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_argv) /* iterator on <var_argv:Collection[String]>*/;
var_it = var;
((void (*)(val*, val*))(self->class->vft[COLOR_opts__OptionContext__parse_intern]))(self, var_it) /* parse_intern on <self:OptionContext>*/;
RET_LABEL:;
}
/* method opts#OptionContext#parse for (self: Object, Collection[String]) */
void VIRTUAL_opts__OptionContext__parse(val* self, val* p0) {
opts__OptionContext__parse(self, p0);
RET_LABEL:;
}
/* method opts#OptionContext#parse_intern for (self: OptionContext, Iterator[String]) */
void opts__OptionContext__parse_intern(val* self, val* p0) {
val* var_it /* var it: Iterator[String] */;
short int var /* : Bool */;
short int var_parseargs /* var parseargs: Bool */;
val* var1 /* : Array[String] */;
val* var_rest /* var rest: Array[String] */;
short int var2 /* : Bool */;
short int var_ /* var : Bool */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_str /* var str: String */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : String */;
short int var9 /* : Bool */;
val* var10 /* : Array[nullable Object] */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
char var13 /* : Char */;
long var14 /* : Int */;
val* var15 /* : nullable Object */;
long var16 /* : Int */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
short int var_20 /* var : Bool */;
long var21 /* : Int */;
long var22 /* : Int */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var_next_called /* var next_called: Bool */;
val* var28 /* : Range[Int] */;
long var29 /* : Int */;
long var30 /* : Int */;
val* var31 /* : Discrete */;
val* var32 /* : Discrete */;
val* var33 /* : Iterator[nullable Object] */;
short int var34 /* : Bool */;
val* var35 /* : nullable Object */;
long var_i /* var i: Int */;
long var36 /* : Int */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
long var40 /* : Int */;
val* var41 /* : String */;
val* var42 /* : nullable Object */;
val* var43 /* : String */;
char var44 /* : Char */;
val* var45 /* : String */;
val* var_short_opt /* var short_opt: String */;
val* var46 /* : Map[String, Option] */;
short int var47 /* : Bool */;
val* var48 /* : Map[String, Option] */;
val* var49 /* : nullable Object */;
val* var_option /* var option: Option */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
val* var55 /* : Map[String, Option] */;
short int var56 /* : Bool */;
val* var57 /* : Map[String, Option] */;
val* var58 /* : nullable Object */;
val* var_opt /* var opt: Option */;
val* var59 /* : nullable Object */;
val* var61 /* : Array[Option] */;
val* var62 /* : Iterator[nullable Object] */;
short int var63 /* : Bool */;
val* var64 /* : nullable Object */;
val* var_opt65 /* var opt: Option */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
short int var_68 /* var : Bool */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
val* var71 /* : Array[String] */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
long var75 /* : Int */;
val* var76 /* : String */;
val* var77 /* : Array[String] */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
long var81 /* : Int */;
val* var82 /* : String */;
val* var83 /* : String */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : NativeString */;
long var87 /* : Int */;
val* var88 /* : String */;
val* var89 /* : Array[Object] */;
long var90 /* : Int */;
val* var91 /* : NativeArray[Object] */;
val* var92 /* : String */;
var_it = p0;
var = 1;
var_parseargs = var;
((void (*)(val*))(self->class->vft[COLOR_opts__OptionContext__build]))(self) /* build on <self:OptionContext>*/;
var1 = self->attrs[COLOR_opts__OptionContext___rest].val; /* _rest on <self:OptionContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _rest");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 263);
show_backtrace(1);
}
var_rest = var1;
for(;;) {
var_ = var_parseargs;
if (var_parseargs){
var3 = ((short int (*)(val*))(var_it->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_it) /* is_ok on <var_it:Iterator[String]>*/;
var2 = var3;
} else {
var2 = var_;
}
if (!var2) break;
var4 = ((val* (*)(val*))(var_it->class->vft[COLOR_abstract_collection__Iterator__item]))(var_it) /* item on <var_it:Iterator[String]>*/;
var_str = var4;
if (varonce) {
var5 = varonce;
} else {
var6 = "--";
var7 = 2;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
var9 = ((short int (*)(val*, val*))(var_str->class->vft[COLOR_kernel__Object___61d_61d]))(var_str, var5) /* == on <var_str:String>*/;
if (var9){
((void (*)(val*))(var_it->class->vft[COLOR_abstract_collection__Iterator__next]))(var_it) /* next on <var_it:Iterator[String]>*/;
var10 = ((val* (*)(val*))(var_it->class->vft[COLOR_array__Iterator__to_a]))(var_it) /* to_a on <var_it:Iterator[String]>*/;
((void (*)(val*, val*))(var_rest->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var_rest, var10) /* add_all on <var_rest:Array[String]>*/;
var11 = 0;
var_parseargs = var11;
} else {
var13 = '-';
var15 = BOX_kernel__Char(var13); /* autobox from Char to nullable Object */
var14 = ((long (*)(val*, val*))(var_str->class->vft[COLOR_array__AbstractArrayRead__last_index_of]))(var_str, var15) /* last_index_of on <var_str:String>*/;
var16 = 0;
{ /* Inline kernel#Int#== (var14,var16) */
var19 = var14 == var16;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var_20 = var17;
if (var17){
var21 = ((long (*)(val*))(var_str->class->vft[COLOR_abstract_collection__Collection__length]))(var_str) /* length on <var_str:String>*/;
var22 = 2;
{ /* Inline kernel#Int#> (var21,var22) */
/* Covariant cast for argument 0 (i) <var22:Int> isa OTHER */
/* <var22:Int> isa OTHER */
var25 = 1; /* easy <var22:Int> isa OTHER*/
if (!var25) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 263);
show_backtrace(1);
}
var26 = var21 > var22;
var23 = var26;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
var12 = var23;
} else {
var12 = var_20;
}
if (var12){
var27 = 0;
var_next_called = var27;
var28 = NEW_range__Range(&type_range__Rangekernel__Int);
var29 = 1;
var30 = ((long (*)(val*))(var_str->class->vft[COLOR_abstract_collection__Collection__length]))(var_str) /* length on <var_str:String>*/;
var31 = BOX_kernel__Int(var29); /* autobox from Int to Discrete */
var32 = BOX_kernel__Int(var30); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var28->class->vft[COLOR_range__Range__init]))(var28, var31, var32) /* init on <var28:Range[Int]>*/;
var33 = ((val* (*)(val*))(var28->class->vft[COLOR_abstract_collection__Collection__iterator]))(var28) /* iterator on <var28:Range[Int]>*/;
for(;;) {
var34 = ((short int (*)(val*))(var33->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var33) /* is_ok on <var33:Iterator[nullable Object]>*/;
if(!var34) break;
var35 = ((val* (*)(val*))(var33->class->vft[COLOR_abstract_collection__Iterator__item]))(var33) /* item on <var33:Iterator[nullable Object]>*/;
var36 = ((struct instance_kernel__Int*)var35)->value; /* autounbox from nullable Object to Int */;
var_i = var36;
if (varonce37) {
var38 = varonce37;
} else {
var39 = "-";
var40 = 1;
var41 = string__NativeString__to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
var42 = ((val* (*)(val*, long))(var_str->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_str, var_i) /* [] on <var_str:String>*/;
var44 = ((struct instance_kernel__Char*)var42)->value; /* autounbox from nullable Object to Char */;
var43 = string__Char__to_s(var44);
var45 = ((val* (*)(val*, val*))(var38->class->vft[COLOR_string__String___43d]))(var38, var43) /* + on <var38:String>*/;
var_short_opt = var45;
var46 = self->attrs[COLOR_opts__OptionContext___optmap].val; /* _optmap on <self:OptionContext> */
if (var46 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _optmap");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 277);
show_backtrace(1);
}
var47 = ((short int (*)(val*, val*))(var46->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var46, var_short_opt) /* has_key on <var46:Map[String, Option]>*/;
if (var47){
var48 = self->attrs[COLOR_opts__OptionContext___optmap].val; /* _optmap on <self:OptionContext> */
if (var48 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _optmap");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 278);
show_backtrace(1);
}
var49 = ((val* (*)(val*, val*))(var48->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var48, var_short_opt) /* [] on <var48:Map[String, Option]>*/;
var_option = var49;
/* <var_option:Option> isa OptionParameter */
cltype51 = type_opts__OptionParameter.color;
idtype52 = type_opts__OptionParameter.id;
if(cltype51 >= var_option->type->table_size) {
var50 = 0;
} else {
var50 = var_option->type->type_table[cltype51] == idtype52;
}
if (var50){
((void (*)(val*))(var_it->class->vft[COLOR_abstract_collection__Iterator__next]))(var_it) /* next on <var_it:Iterator[String]>*/;
var53 = 1;
var_next_called = var53;
} else {
}
((void (*)(val*, val*))(var_option->class->vft[COLOR_opts__Option__read_param]))(var_option, var_it) /* read_param on <var_option:Option>*/;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var33->class->vft[COLOR_abstract_collection__Iterator__next]))(var33) /* next on <var33:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var54 = !var_next_called;
if (var54){
((void (*)(val*))(var_it->class->vft[COLOR_abstract_collection__Iterator__next]))(var_it) /* next on <var_it:Iterator[String]>*/;
} else {
}
} else {
var55 = self->attrs[COLOR_opts__OptionContext___optmap].val; /* _optmap on <self:OptionContext> */
if (var55 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _optmap");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 288);
show_backtrace(1);
}
var56 = ((short int (*)(val*, val*))(var55->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var55, var_str) /* has_key on <var55:Map[String, Option]>*/;
if (var56){
var57 = self->attrs[COLOR_opts__OptionContext___optmap].val; /* _optmap on <self:OptionContext> */
if (var57 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _optmap");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 289);
show_backtrace(1);
}
var58 = ((val* (*)(val*, val*))(var57->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var57, var_str) /* [] on <var57:Map[String, Option]>*/;
var_opt = var58;
((void (*)(val*))(var_it->class->vft[COLOR_abstract_collection__Iterator__next]))(var_it) /* next on <var_it:Iterator[String]>*/;
((void (*)(val*, val*))(var_opt->class->vft[COLOR_opts__Option__read_param]))(var_opt, var_it) /* read_param on <var_opt:Option>*/;
} else {
var59 = ((val* (*)(val*))(var_it->class->vft[COLOR_abstract_collection__Iterator__item]))(var_it) /* item on <var_it:Iterator[String]>*/;
((void (*)(val*, val*))(var_rest->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_rest, var59) /* add on <var_rest:Array[String]>*/;
((void (*)(val*))(var_it->class->vft[COLOR_abstract_collection__Iterator__next]))(var_it) /* next on <var_it:Iterator[String]>*/;
}
}
}
CONTINUE_label60: (void)0;
}
BREAK_label60: (void)0;
var61 = self->attrs[COLOR_opts__OptionContext___options].val; /* _options on <self:OptionContext> */
if (var61 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _options");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 300);
show_backtrace(1);
}
var62 = ((val* (*)(val*))(var61->class->vft[COLOR_abstract_collection__Collection__iterator]))(var61) /* iterator on <var61:Array[Option]>*/;
for(;;) {
var63 = ((short int (*)(val*))(var62->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var62) /* is_ok on <var62:Iterator[nullable Object]>*/;
if(!var63) break;
var64 = ((val* (*)(val*))(var62->class->vft[COLOR_abstract_collection__Iterator__item]))(var62) /* item on <var62:Iterator[nullable Object]>*/;
var_opt65 = var64;
var67 = ((short int (*)(val*))(var_opt65->class->vft[COLOR_opts__Option__mandatory]))(var_opt65) /* mandatory on <var_opt65:Option>*/;
var_68 = var67;
if (var67){
var69 = ((short int (*)(val*))(var_opt65->class->vft[COLOR_opts__Option__read]))(var_opt65) /* read on <var_opt65:Option>*/;
var70 = !var69;
var66 = var70;
} else {
var66 = var_68;
}
if (var66){
var71 = self->attrs[COLOR_opts__OptionContext___errors].val; /* _errors on <self:OptionContext> */
if (var71 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _errors");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 302);
show_backtrace(1);
}
if (varonce72) {
var73 = varonce72;
} else {
var74 = "Mandatory option ";
var75 = 17;
var76 = string__NativeString__to_s_with_length(var74, var75);
var73 = var76;
varonce72 = var73;
}
var77 = ((val* (*)(val*))(var_opt65->class->vft[COLOR_opts__Option__names]))(var_opt65) /* names on <var_opt65:Option>*/;
if (varonce78) {
var79 = varonce78;
} else {
var80 = ", ";
var81 = 2;
var82 = string__NativeString__to_s_with_length(var80, var81);
var79 = var82;
varonce78 = var79;
}
var83 = ((val* (*)(val*, val*))(var77->class->vft[COLOR_string__Collection__join]))(var77, var79) /* join on <var77:Array[String]>*/;
if (varonce84) {
var85 = varonce84;
} else {
var86 = " not found.";
var87 = 11;
var88 = string__NativeString__to_s_with_length(var86, var87);
var85 = var88;
varonce84 = var85;
}
var89 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var89 = array_instance Array[Object] */
var90 = 3;
var91 = NEW_array__NativeArray(var90, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var91)->values[0] = (val*) var73;
((struct instance_array__NativeArray*)var91)->values[1] = (val*) var83;
((struct instance_array__NativeArray*)var91)->values[2] = (val*) var85;
((void (*)(val*, val*, long))(var89->class->vft[COLOR_array__Array__with_native]))(var89, var91, var90) /* with_native on <var89:Array[Object]>*/;
}
var92 = ((val* (*)(val*))(var89->class->vft[COLOR_string__Object__to_s]))(var89) /* to_s on <var89:Array[Object]>*/;
((void (*)(val*, val*))(var71->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var71, var92) /* add on <var71:Array[String]>*/;
} else {
}
CONTINUE_label93: (void)0;
((void (*)(val*))(var62->class->vft[COLOR_abstract_collection__Iterator__next]))(var62) /* next on <var62:Iterator[nullable Object]>*/;
}
BREAK_label93: (void)0;
RET_LABEL:;
}
/* method opts#OptionContext#parse_intern for (self: Object, Iterator[String]) */
void VIRTUAL_opts__OptionContext__parse_intern(val* self, val* p0) {
opts__OptionContext__parse_intern(self, p0);
RET_LABEL:;
}
/* method opts#OptionContext#add_option for (self: OptionContext, Array[Option]) */
void opts__OptionContext__add_option(val* self, val* p0) {
val* var_opts /* var opts: Array[Option] */;
val* var /* : Iterator[nullable Object] */;
short int var1 /* : Bool */;
val* var2 /* : nullable Object */;
val* var_opt /* var opt: Option */;
val* var3 /* : Array[Option] */;
var_opts = p0;
var = ((val* (*)(val*))(var_opts->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_opts) /* iterator on <var_opts:Array[Option]>*/;
for(;;) {
var1 = ((short int (*)(val*))(var->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var) /* is_ok on <var:Iterator[nullable Object]>*/;
if(!var1) break;
var2 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_collection__Iterator__item]))(var) /* item on <var:Iterator[nullable Object]>*/;
var_opt = var2;
var3 = self->attrs[COLOR_opts__OptionContext___options].val; /* _options on <self:OptionContext> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _options");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 310);
show_backtrace(1);
}
((void (*)(val*, val*))(var3->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var3, var_opt) /* add on <var3:Array[Option]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var->class->vft[COLOR_abstract_collection__Iterator__next]))(var) /* next on <var:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method opts#OptionContext#add_option for (self: Object, Array[Option]) */
void VIRTUAL_opts__OptionContext__add_option(val* self, val* p0) {
opts__OptionContext__add_option(self, p0);
RET_LABEL:;
}
/* method opts#OptionContext#init for (self: OptionContext) */
void opts__OptionContext__init(val* self) {
val* var /* : Array[Option] */;
val* var1 /* : HashMap[String, Option] */;
val* var2 /* : Array[String] */;
val* var3 /* : Array[String] */;
var = NEW_array__Array(&type_array__Arrayopts__Option);
((void (*)(val*))(var->class->vft[COLOR_array__Array__init]))(var) /* init on <var:Array[Option]>*/;
self->attrs[COLOR_opts__OptionContext___options].val = var; /* _options on <self:OptionContext> */
var1 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapstring__Stringopts__Option);
((void (*)(val*))(var1->class->vft[COLOR_hash_collection__HashMap__init]))(var1) /* init on <var1:HashMap[String, Option]>*/;
self->attrs[COLOR_opts__OptionContext___optmap].val = var1; /* _optmap on <self:OptionContext> */
var2 = NEW_array__Array(&type_array__Arraystring__String);
((void (*)(val*))(var2->class->vft[COLOR_array__Array__init]))(var2) /* init on <var2:Array[String]>*/;
self->attrs[COLOR_opts__OptionContext___rest].val = var2; /* _rest on <self:OptionContext> */
var3 = NEW_array__Array(&type_array__Arraystring__String);
((void (*)(val*))(var3->class->vft[COLOR_array__Array__init]))(var3) /* init on <var3:Array[String]>*/;
self->attrs[COLOR_opts__OptionContext___errors].val = var3; /* _errors on <self:OptionContext> */
RET_LABEL:;
}
/* method opts#OptionContext#init for (self: Object) */
void VIRTUAL_opts__OptionContext__init(val* self) {
opts__OptionContext__init(self);
RET_LABEL:;
}
/* method opts#OptionContext#build for (self: OptionContext) */
void opts__OptionContext__build(val* self) {
val* var /* : Array[Option] */;
val* var1 /* : Iterator[nullable Object] */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
val* var_o /* var o: Option */;
val* var4 /* : Array[String] */;
val* var5 /* : Iterator[nullable Object] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_n /* var n: String */;
val* var8 /* : Map[String, Option] */;
var = self->attrs[COLOR_opts__OptionContext___options].val; /* _options on <self:OptionContext> */
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _options");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 324);
show_backtrace(1);
}
var1 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_collection__Collection__iterator]))(var) /* iterator on <var:Array[Option]>*/;
for(;;) {
var2 = ((short int (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var1) /* is_ok on <var1:Iterator[nullable Object]>*/;
if(!var2) break;
var3 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__item]))(var1) /* item on <var1:Iterator[nullable Object]>*/;
var_o = var3;
var4 = ((val* (*)(val*))(var_o->class->vft[COLOR_opts__Option__names]))(var_o) /* names on <var_o:Option>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__Collection__iterator]))(var4) /* iterator on <var4:Array[String]>*/;
for(;;) {
var6 = ((short int (*)(val*))(var5->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var5) /* is_ok on <var5:Iterator[nullable Object]>*/;
if(!var6) break;
var7 = ((val* (*)(val*))(var5->class->vft[COLOR_abstract_collection__Iterator__item]))(var5) /* item on <var5:Iterator[nullable Object]>*/;
var_n = var7;
var8 = self->attrs[COLOR_opts__OptionContext___optmap].val; /* _optmap on <self:OptionContext> */
if (var8 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _optmap");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 326);
show_backtrace(1);
}
((void (*)(val*, val*, val*))(var8->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var8, var_n, var_o) /* []= on <var8:Map[String, Option]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var5->class->vft[COLOR_abstract_collection__Iterator__next]))(var5) /* next on <var5:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
CONTINUE_label9: (void)0;
((void (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__next]))(var1) /* next on <var1:Iterator[nullable Object]>*/;
}
BREAK_label9: (void)0;
RET_LABEL:;
}
/* method opts#OptionContext#build for (self: Object) */
void VIRTUAL_opts__OptionContext__build(val* self) {
opts__OptionContext__build(self);
RET_LABEL:;
}
/* method opts#OptionContext#get_errors for (self: OptionContext): Array[String] */
val* opts__OptionContext__get_errors(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
val* var_errors /* var errors: Array[String] */;
val* var2 /* : Array[String] */;
val* var3 /* : Array[Option] */;
val* var4 /* : Iterator[nullable Object] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_o /* var o: Option */;
val* var7 /* : Array[String] */;
val* var8 /* : Iterator[nullable Object] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_e /* var e: String */;
var1 = NEW_array__Array(&type_array__Arraystring__String);
((void (*)(val*))(var1->class->vft[COLOR_array__Array__init]))(var1) /* init on <var1:Array[String]>*/;
var_errors = var1;
var2 = self->attrs[COLOR_opts__OptionContext___errors].val; /* _errors on <self:OptionContext> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _errors");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 335);
show_backtrace(1);
}
((void (*)(val*, val*))(var_errors->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var_errors, var2) /* add_all on <var_errors:Array[String]>*/;
var3 = self->attrs[COLOR_opts__OptionContext___options].val; /* _options on <self:OptionContext> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _options");
fprintf(stderr, " (%s:%d)\n", "lib/opts.nit", 337);
show_backtrace(1);
}
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Collection__iterator]))(var3) /* iterator on <var3:Array[Option]>*/;
for(;;) {
var5 = ((short int (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var4) /* is_ok on <var4:Iterator[nullable Object]>*/;
if(!var5) break;
var6 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__item]))(var4) /* item on <var4:Iterator[nullable Object]>*/;
var_o = var6;
var7 = ((val* (*)(val*))(var_o->class->vft[COLOR_opts__Option__errors]))(var_o) /* errors on <var_o:Option>*/;
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_abstract_collection__Collection__iterator]))(var7) /* iterator on <var7:Array[String]>*/;
for(;;) {
var9 = ((short int (*)(val*))(var8->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var8) /* is_ok on <var8:Iterator[nullable Object]>*/;
if(!var9) break;
var10 = ((val* (*)(val*))(var8->class->vft[COLOR_abstract_collection__Iterator__item]))(var8) /* item on <var8:Iterator[nullable Object]>*/;
var_e = var10;
((void (*)(val*, val*))(var_errors->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_errors, var_e) /* add on <var_errors:Array[String]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var8->class->vft[COLOR_abstract_collection__Iterator__next]))(var8) /* next on <var8:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
CONTINUE_label11: (void)0;
((void (*)(val*))(var4->class->vft[COLOR_abstract_collection__Iterator__next]))(var4) /* next on <var4:Iterator[nullable Object]>*/;
}
BREAK_label11: (void)0;
var = var_errors;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method opts#OptionContext#get_errors for (self: Object): Array[String] */
val* VIRTUAL_opts__OptionContext__get_errors(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = opts__OptionContext__get_errors(self);
var = var1;
RET_LABEL:;
return var;
}
