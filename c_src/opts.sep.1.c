#include "opts.sep.0.h"
/* method opts#Option#names for (self: Option): Array[String] */
val* opts__Option__names(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_opts__Option___names].val; /* _names on <self:Option> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 19);
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
val* var3 /* : Array[String] */;
{ /* Inline opts#Option#names (self) on <self:Object(Option)> */
var3 = self->attrs[COLOR_opts__Option___names].val; /* _names on <self:Object(Option)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 19);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method opts#Option#names= for (self: Option, Array[String]) */
void opts__Option__names_61d(val* self, val* p0) {
self->attrs[COLOR_opts__Option___names].val = p0; /* _names on <self:Option> */
RET_LABEL:;
}
/* method opts#Option#names= for (self: Object, Array[String]) */
void VIRTUAL_opts__Option__names_61d(val* self, val* p0) {
{ /* Inline opts#Option#names= (self,p0) on <self:Object(Option)> */
self->attrs[COLOR_opts__Option___names].val = p0; /* _names on <self:Object(Option)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method opts#Option#helptext for (self: Option): String */
val* opts__Option__helptext(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_opts__Option___helptext].val; /* _helptext on <self:Option> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _helptext");
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 25);
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
val* var3 /* : String */;
{ /* Inline opts#Option#helptext (self) on <self:Object(Option)> */
var3 = self->attrs[COLOR_opts__Option___helptext].val; /* _helptext on <self:Object(Option)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _helptext");
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 25);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method opts#Option#helptext= for (self: Option, String) */
void opts__Option__helptext_61d(val* self, val* p0) {
self->attrs[COLOR_opts__Option___helptext].val = p0; /* _helptext on <self:Option> */
RET_LABEL:;
}
/* method opts#Option#helptext= for (self: Object, String) */
void VIRTUAL_opts__Option__helptext_61d(val* self, val* p0) {
{ /* Inline opts#Option#helptext= (self,p0) on <self:Object(Option)> */
self->attrs[COLOR_opts__Option___helptext].val = p0; /* _helptext on <self:Object(Option)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method opts#Option#errors for (self: Option): Array[String] */
val* opts__Option__errors(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_opts__Option___errors].val; /* _errors on <self:Option> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _errors");
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 28);
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
val* var3 /* : Array[String] */;
{ /* Inline opts#Option#errors (self) on <self:Object(Option)> */
var3 = self->attrs[COLOR_opts__Option___errors].val; /* _errors on <self:Object(Option)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _errors");
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 28);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
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
short int var3 /* : Bool */;
{ /* Inline opts#Option#mandatory (self) on <self:Object(Option)> */
var3 = self->attrs[COLOR_opts__Option___mandatory].s; /* _mandatory on <self:Object(Option)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method opts#Option#hidden for (self: Option): Bool */
short int opts__Option__hidden(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_opts__Option___hidden].s; /* _hidden on <self:Option> */
var = var1;
RET_LABEL:;
return var;
}
/* method opts#Option#hidden for (self: Object): Bool */
short int VIRTUAL_opts__Option__hidden(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline opts#Option#hidden (self) on <self:Object(Option)> */
var3 = self->attrs[COLOR_opts__Option___hidden].s; /* _hidden on <self:Object(Option)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
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
short int var3 /* : Bool */;
{ /* Inline opts#Option#read (self) on <self:Object(Option)> */
var3 = self->attrs[COLOR_opts__Option___read].s; /* _read on <self:Object(Option)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method opts#Option#read= for (self: Option, Bool) */
void opts__Option__read_61d(val* self, short int p0) {
self->attrs[COLOR_opts__Option___read].s = p0; /* _read on <self:Option> */
RET_LABEL:;
}
/* method opts#Option#read= for (self: Object, Bool) */
void VIRTUAL_opts__Option__read_61d(val* self, short int p0) {
{ /* Inline opts#Option#read= (self,p0) on <self:Object(Option)> */
self->attrs[COLOR_opts__Option___read].s = p0; /* _read on <self:Object(Option)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method opts#Option#value for (self: Option): nullable Object */
val* opts__Option__value(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = self->attrs[COLOR_opts__Option___value].val; /* _value on <self:Option> */
var = var1;
RET_LABEL:;
return var;
}
/* method opts#Option#value for (self: Object): nullable Object */
val* VIRTUAL_opts__Option__value(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
val* var3 /* : nullable Object */;
{ /* Inline opts#Option#value (self) on <self:Object(Option)> */
var3 = self->attrs[COLOR_opts__Option___value].val; /* _value on <self:Object(Option)> */
var1 = var3;
RET_LABEL2:(void)0;
}
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
short int is_nullable;
const char* var_class_name;
/* Covariant cast for argument 0 (value) <p0:nullable Object> isa VALUE */
/* <p0:nullable Object> isa VALUE */
type_struct = self->type->resolution_table->types[COLOR_opts__Option_VTVALUE];
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
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 40);
show_backtrace(1);
}
self->attrs[COLOR_opts__Option___value].val = p0; /* _value on <self:Option> */
RET_LABEL:;
}
/* method opts#Option#value= for (self: Object, nullable Object) */
void VIRTUAL_opts__Option__value_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
{ /* Inline opts#Option#value= (self,p0) on <self:Object(Option)> */
/* Covariant cast for argument 0 (value) <p0:nullable Object> isa VALUE */
/* <p0:nullable Object> isa VALUE */
type_struct = self->type->resolution_table->types[COLOR_opts__Option_VTVALUE];
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
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 40);
show_backtrace(1);
}
self->attrs[COLOR_opts__Option___value].val = p0; /* _value on <self:Object(Option)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method opts#Option#default_value= for (self: Option, nullable Object) */
void opts__Option__default_value_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
/* Covariant cast for argument 0 (default_value) <p0:nullable Object> isa VALUE */
/* <p0:nullable Object> isa VALUE */
type_struct = self->type->resolution_table->types[COLOR_opts__Option_VTVALUE];
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
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 43);
show_backtrace(1);
}
self->attrs[COLOR_opts__Option___default_value].val = p0; /* _default_value on <self:Option> */
RET_LABEL:;
}
/* method opts#Option#default_value= for (self: Object, nullable Object) */
void VIRTUAL_opts__Option__default_value_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
{ /* Inline opts#Option#default_value= (self,p0) on <self:Object(Option)> */
/* Covariant cast for argument 0 (default_value) <p0:nullable Object> isa VALUE */
/* <p0:nullable Object> isa VALUE */
type_struct = self->type->resolution_table->types[COLOR_opts__Option_VTVALUE];
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
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 43);
show_backtrace(1);
}
self->attrs[COLOR_opts__Option___default_value].val = p0; /* _default_value on <self:Object(Option)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method opts#Option#init for (self: Option, String, nullable Object, nullable Array[String]) */
void opts__Option__init(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_help /* var help: String */;
val* var_default /* var default: nullable Object */;
val* var_names /* var names: nullable Array[String] */;
/* Covariant cast for argument 1 (default) <p1:nullable Object> isa VALUE */
/* <p1:nullable Object> isa VALUE */
type_struct = self->type->resolution_table->types[COLOR_opts__Option_VTVALUE];
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
if (unlikely(!var)) {
var_class_name = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 46);
show_backtrace(1);
}
var_help = p0;
var_default = p1;
var_names = p2;
{
opts__Option__init_opt(self, var_help, var_default, var_names); /* Direct call opts#Option#init_opt on <self:Option>*/
}
RET_LABEL:;
}
/* method opts#Option#init for (self: Object, String, nullable Object, nullable Array[String]) */
void VIRTUAL_opts__Option__init(val* self, val* p0, val* p1, val* p2) {
opts__Option__init(self, p0, p1, p2); /* Direct call opts#Option#init on <self:Object(Option)>*/
RET_LABEL:;
}
/* method opts#Option#init_opt for (self: Option, String, nullable Object, nullable Array[String]) */
void opts__Option__init_opt(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_help /* var help: String */;
val* var_default /* var default: nullable Object */;
val* var_names /* var names: nullable Array[String] */;
val* var1 /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : Array[String] */;
val* var6 /* : Array[nullable Object] */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const struct type* type_struct13;
short int is_nullable14;
const char* var_class_name15;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const struct type* type_struct20;
short int is_nullable21;
const char* var_class_name22;
/* Covariant cast for argument 1 (default) <p1:nullable Object> isa VALUE */
/* <p1:nullable Object> isa VALUE */
type_struct = self->type->resolution_table->types[COLOR_opts__Option_VTVALUE];
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
if (unlikely(!var)) {
var_class_name = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 52);
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
if (0) {
var3 = array__Array___61d_61d(var_names, var1);
var2 = var3;
}
if (var2){
var4 = NEW_array__Array(&type_array__Arraystring__String);
{
((void (*)(val*))(var4->class->vft[COLOR_kernel__Object__init]))(var4) /* init on <var4:Array[String]>*/;
}
{
{ /* Inline opts#Option#names= (self,var4) on <self:Option> */
self->attrs[COLOR_opts__Option___names].val = var4; /* _names on <self:Option> */
RET_LABEL5:(void)0;
}
}
} else {
{
var6 = array__Collection__to_a(var_names);
}
{
{ /* Inline opts#Option#names= (self,var6) on <self:Option> */
self->attrs[COLOR_opts__Option___names].val = var6; /* _names on <self:Option> */
RET_LABEL7:(void)0;
}
}
}
{
{ /* Inline opts#Option#helptext= (self,var_help) on <self:Option> */
self->attrs[COLOR_opts__Option___helptext].val = var_help; /* _helptext on <self:Option> */
RET_LABEL8:(void)0;
}
}
{
{ /* Inline opts#Option#default_value= (self,var_default) on <self:Option> */
/* Covariant cast for argument 0 (default_value) <var_default:nullable Object> isa VALUE */
/* <var_default:nullable Object> isa VALUE */
type_struct13 = self->type->resolution_table->types[COLOR_opts__Option_VTVALUE];
cltype11 = type_struct13->color;
idtype12 = type_struct13->id;
is_nullable14 = type_struct13->is_nullable;
if(var_default == NULL) {
var10 = is_nullable14;
} else {
if(cltype11 >= var_default->type->table_size) {
var10 = 0;
} else {
var10 = var_default->type->type_table[cltype11] == idtype12;
}
}
if (unlikely(!var10)) {
var_class_name15 = var_default == NULL ? "null" : var_default->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 43);
show_backtrace(1);
}
self->attrs[COLOR_opts__Option___default_value].val = var_default; /* _default_value on <self:Option> */
RET_LABEL9:(void)0;
}
}
{
{ /* Inline opts#Option#value= (self,var_default) on <self:Option> */
/* Covariant cast for argument 0 (value) <var_default:nullable Object> isa VALUE */
/* <var_default:nullable Object> isa VALUE */
type_struct20 = self->type->resolution_table->types[COLOR_opts__Option_VTVALUE];
cltype18 = type_struct20->color;
idtype19 = type_struct20->id;
is_nullable21 = type_struct20->is_nullable;
if(var_default == NULL) {
var17 = is_nullable21;
} else {
if(cltype18 >= var_default->type->table_size) {
var17 = 0;
} else {
var17 = var_default->type->type_table[cltype18] == idtype19;
}
}
if (unlikely(!var17)) {
var_class_name22 = var_default == NULL ? "null" : var_default->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 40);
show_backtrace(1);
}
self->attrs[COLOR_opts__Option___value].val = var_default; /* _value on <self:Option> */
RET_LABEL16:(void)0;
}
}
RET_LABEL:;
}
/* method opts#Option#init_opt for (self: Object, String, nullable Object, nullable Array[String]) */
void VIRTUAL_opts__Option__init_opt(val* self, val* p0, val* p1, val* p2) {
opts__Option__init_opt(self, p0, p1, p2); /* Direct call opts#Option#init_opt on <self:Object(Option)>*/
RET_LABEL:;
}
/* method opts#Option#to_s for (self: Option): String */
val* opts__Option__to_s(val* self) {
val* var /* : String */;
long var1 /* : Int */;
val* var2 /* : String */;
var1 = 2;
{
var2 = opts__Option__pretty(self, var1);
}
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
val* var1 /* : FlatBuffer */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : FlatString */;
val* var_text /* var text: FlatBuffer */;
val* var6 /* : Array[String] */;
val* var8 /* : Array[String] */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : FlatString */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : FlatString */;
long var20 /* : Int */;
long var22 /* : Int */;
long var23 /* : Int */;
short int var25 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var26 /* : Int */;
long var_rest /* var rest: Int */;
long var27 /* : Int */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
short int var34 /* : Bool */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
long var38 /* : Int */;
val* var39 /* : FlatString */;
val* var40 /* : String */;
val* var41 /* : String */;
val* var43 /* : String */;
val* var44 /* : String */;
var_off = p0;
var1 = NEW_string__FlatBuffer(&type_string__FlatBuffer);
if (varonce) {
var2 = varonce;
} else {
var3 = "  ";
var4 = 2;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
{
string__FlatBuffer__from(var1, var2); /* Direct call string#FlatBuffer#from on <var1:FlatBuffer>*/
}
var_text = var1;
{
{ /* Inline opts#Option#names (self) on <self:Option> */
var8 = self->attrs[COLOR_opts__Option___names].val; /* _names on <self:Option> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 19);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (varonce9) {
var10 = varonce9;
} else {
var11 = ", ";
var12 = 2;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
{
var14 = string__Collection__join(var6, var10);
}
{
string__FlatBuffer__append(var_text, var14); /* Direct call string#FlatBuffer#append on <var_text:FlatBuffer>*/
}
if (varonce15) {
var16 = varonce15;
} else {
var17 = "  ";
var18 = 2;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
{
string__FlatBuffer__append(var_text, var16); /* Direct call string#FlatBuffer#append on <var_text:FlatBuffer>*/
}
{
{ /* Inline string#FlatText#length (var_text) on <var_text:FlatBuffer> */
var22 = var_text->attrs[COLOR_string__FlatText___length].l; /* _length on <var_text:FlatBuffer> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_off,var20) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var20:Int> isa OTHER */
/* <var20:Int> isa OTHER */
var25 = 1; /* easy <var20:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var26 = var_off - var20;
var23 = var26;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var_rest = var23;
var27 = 0;
{
{ /* Inline kernel#Int#> (var_rest,var27) on <var_rest:Int> */
/* Covariant cast for argument 0 (i) <var27:Int> isa OTHER */
/* <var27:Int> isa OTHER */
var30 = 1; /* easy <var27:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var34 = var_rest > var27;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
if (var28){
if (varonce35) {
var36 = varonce35;
} else {
var37 = " ";
var38 = 1;
var39 = string__NativeString__to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
{
var40 = string__FlatString___42d(var36, var_rest);
}
{
string__FlatBuffer__append(var_text, var40); /* Direct call string#FlatBuffer#append on <var_text:FlatBuffer>*/
}
} else {
}
{
{ /* Inline opts#Option#helptext (self) on <self:Option> */
var43 = self->attrs[COLOR_opts__Option___helptext].val; /* _helptext on <self:Option> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _helptext");
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 25);
show_backtrace(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
string__FlatBuffer__append(var_text, var41); /* Direct call string#FlatBuffer#append on <var_text:FlatBuffer>*/
}
{
var44 = string__FlatBuffer__to_s(var_text);
}
var = var44;
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
/* method opts#Option#read_param for (self: Option, Iterator[String]) */
void opts__Option__read_param(val* self, val* p0) {
val* var_it /* var it: Iterator[String] */;
short int var /* : Bool */;
var_it = p0;
var = 1;
{
{ /* Inline opts#Option#read= (self,var) on <self:Option> */
self->attrs[COLOR_opts__Option___read].s = var; /* _read on <self:Option> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method opts#Option#read_param for (self: Object, Iterator[String]) */
void VIRTUAL_opts__Option__read_param(val* self, val* p0) {
opts__Option__read_param(self, p0); /* Direct call opts#Option#read_param on <self:Object(Option)>*/
RET_LABEL:;
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
{
var1 = BOX_kernel__Bool(var); /* autobox from Bool to nullable Object */
opts__Option__init(self, var_help, var1, var_names); /* Direct call opts#Option#init on <self:OptionBool>*/
}
RET_LABEL:;
}
/* method opts#OptionBool#init for (self: Object, String, Array[String]) */
void VIRTUAL_opts__OptionBool__init(val* self, val* p0, val* p1) {
opts__OptionBool__init(self, p0, p1); /* Direct call opts#OptionBool#init on <self:Object(OptionBool)>*/
RET_LABEL:;
}
/* method opts#OptionBool#read_param for (self: OptionBool, Iterator[String]) */
void opts__OptionBool__read_param(val* self, val* p0) {
val* var_it /* var it: Iterator[String] */;
short int var /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var3 /* : nullable Object */;
var_it = p0;
{
((void (*)(val*, val*))(self->class->vft[COLOR_opts__OptionBool__read_param]))(self, p0) /* read_param on <self:OptionBool>*/;
}
var = 1;
{
{ /* Inline opts#Option#value= (self,var) on <self:OptionBool> */
/* Covariant cast for argument 0 (value) <var:Bool> isa VALUE */
/* <var:Bool> isa VALUE */
type_struct = self->type->resolution_table->types[COLOR_opts__Option_VTVALUE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (&type_kernel__Bool)->table_size) {
var2 = 0;
} else {
var2 = (&type_kernel__Bool)->type_table[cltype] == idtype;
}
if (unlikely(!var2)) {
var_class_name = type_kernel__Bool.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 40);
show_backtrace(1);
}
var3 = BOX_kernel__Bool(var); /* autobox from Bool to nullable Object */
self->attrs[COLOR_opts__Option___value].val = var3; /* _value on <self:OptionBool> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method opts#OptionBool#read_param for (self: Object, Iterator[String]) */
void VIRTUAL_opts__OptionBool__read_param(val* self, val* p0) {
opts__OptionBool__read_param(self, p0); /* Direct call opts#OptionBool#read_param on <self:Object(OptionBool)>*/
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
{
var1 = BOX_kernel__Int(var); /* autobox from Int to nullable Object */
opts__Option__init(self, var_help, var1, var_names); /* Direct call opts#Option#init on <self:OptionCount>*/
}
RET_LABEL:;
}
/* method opts#OptionCount#init for (self: Object, String, Array[String]) */
void VIRTUAL_opts__OptionCount__init(val* self, val* p0, val* p1) {
opts__OptionCount__init(self, p0, p1); /* Direct call opts#OptionCount#init on <self:Object(OptionCount)>*/
RET_LABEL:;
}
/* method opts#OptionCount#read_param for (self: OptionCount, Iterator[String]) */
void opts__OptionCount__read_param(val* self, val* p0) {
val* var_it /* var it: Iterator[String] */;
val* var_ /* var : OptionCount */;
val* var /* : nullable Object */;
val* var2 /* : nullable Object */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const struct type* type_struct;
const char* var_class_name13;
val* var14 /* : nullable Object */;
var_it = p0;
{
((void (*)(val*, val*))(self->class->vft[COLOR_opts__OptionCount__read_param]))(self, p0) /* read_param on <self:OptionCount>*/;
}
var_ = self;
{
{ /* Inline opts#Option#value (var_) on <var_:OptionCount> */
var2 = var_->attrs[COLOR_opts__Option___value].val; /* _value on <var_:OptionCount> */
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = 1;
{
{ /* Inline kernel#Int#+ (var,var3) on <var:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var7 = ((struct instance_kernel__Int*)var)->value; /* autounbox from nullable Object to Int */;
var8 = var7 + var3;
var4 = var8;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline opts#Option#value= (var_,var4) on <var_:OptionCount> */
/* Covariant cast for argument 0 (value) <var4:Int> isa VALUE */
/* <var4:Int> isa VALUE */
type_struct = var_->type->resolution_table->types[COLOR_opts__Option_VTVALUE];
cltype11 = type_struct->color;
idtype12 = type_struct->id;
if(cltype11 >= (&type_kernel__Int)->table_size) {
var10 = 0;
} else {
var10 = (&type_kernel__Int)->type_table[cltype11] == idtype12;
}
if (unlikely(!var10)) {
var_class_name13 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 40);
show_backtrace(1);
}
var14 = BOX_kernel__Int(var4); /* autobox from Int to nullable Object */
var_->attrs[COLOR_opts__Option___value].val = var14; /* _value on <var_:OptionCount> */
RET_LABEL9:(void)0;
}
}
RET_LABEL:;
}
/* method opts#OptionCount#read_param for (self: Object, Iterator[String]) */
void VIRTUAL_opts__OptionCount__read_param(val* self, val* p0) {
opts__OptionCount__read_param(self, p0); /* Direct call opts#OptionCount#read_param on <self:Object(OptionCount)>*/
RET_LABEL:;
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
short int var3 /* : Bool */;
{ /* Inline opts#OptionParameter#parameter_mandatory (self) on <self:Object(OptionParameter)> */
var3 = self->attrs[COLOR_opts__OptionParameter___parameter_mandatory].s; /* _parameter_mandatory on <self:Object(OptionParameter)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method opts#OptionParameter#read_param for (self: OptionParameter, Iterator[String]) */
void opts__OptionParameter__read_param(val* self, val* p0) {
val* var_it /* var it: Iterator[String] */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var_ /* var : Bool */;
val* var2 /* : nullable Object */;
val* var3 /* : SequenceRead[Char] */;
val* var5 /* : SequenceRead[Char] */;
val* var6 /* : nullable Object */;
char var7 /* : Char */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
char var12 /* : Char */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var15 /* : nullable Object */;
short int var17 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : Array[String] */;
val* var23 /* : Array[String] */;
static val* varonce;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : FlatString */;
val* var28 /* : Array[String] */;
val* var30 /* : Array[String] */;
val* var31 /* : nullable Object */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
long var35 /* : Int */;
val* var36 /* : FlatString */;
val* var37 /* : Array[Object] */;
long var38 /* : Int */;
val* var39 /* : NativeArray[Object] */;
val* var40 /* : String */;
var_it = p0;
{
((void (*)(val*, val*))(self->class->vft[COLOR_opts__OptionParameter__read_param]))(self, p0) /* read_param on <self:OptionParameter>*/;
}
{
var1 = ((short int (*)(val*))(var_it->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_it) /* is_ok on <var_it:Iterator[String]>*/;
}
var_ = var1;
if (var1){
{
var2 = ((val* (*)(val*))(var_it->class->vft[COLOR_abstract_collection__Iterator__item]))(var_it) /* item on <var_it:Iterator[String]>*/;
}
{
{ /* Inline string#FlatString#chars (var2) on <var2:nullable Object(String)> */
var5 = var2->attrs[COLOR_string__FlatString___chars].val; /* _chars on <var2:nullable Object(String)> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 939);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Collection__first]))(var3) /* first on <var3:SequenceRead[Char]>*/;
}
var7 = '-';
{
{ /* Inline kernel#Char#!= (var6,var7) on <var6:nullable Object(Char)> */
var11 = (var6 != NULL) && (var6->class == &class_kernel__Char);
if (var11) {
var12 = ((struct instance_kernel__Char*)var6)->value; /* autounbox from nullable Object to Char */;
var11 = (var12 == var7);
}
var13 = !var11;
var9 = var13;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
var = var8;
} else {
var = var_;
}
if (var){
{
var14 = ((val* (*)(val*))(var_it->class->vft[COLOR_abstract_collection__Iterator__item]))(var_it) /* item on <var_it:Iterator[String]>*/;
}
{
var15 = ((val* (*)(val*, val*))(self->class->vft[COLOR_opts__OptionParameter__convert]))(self, var14) /* convert on <self:OptionParameter>*/;
}
{
{ /* Inline opts#Option#value= (self,var15) on <self:OptionParameter> */
/* Covariant cast for argument 0 (value) <var15:nullable Object> isa VALUE */
/* <var15:nullable Object> isa VALUE */
type_struct = self->type->resolution_table->types[COLOR_opts__Option_VTVALUE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(var15 == NULL) {
var17 = is_nullable;
} else {
if(cltype >= var15->type->table_size) {
var17 = 0;
} else {
var17 = var15->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var17)) {
var_class_name = var15 == NULL ? "null" : var15->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 40);
show_backtrace(1);
}
self->attrs[COLOR_opts__Option___value].val = var15; /* _value on <self:OptionParameter> */
RET_LABEL16:(void)0;
}
}
{
((void (*)(val*))(var_it->class->vft[COLOR_abstract_collection__Iterator__next]))(var_it) /* next on <var_it:Iterator[String]>*/;
}
} else {
{
{ /* Inline opts#OptionParameter#parameter_mandatory (self) on <self:OptionParameter> */
var20 = self->attrs[COLOR_opts__OptionParameter___parameter_mandatory].s; /* _parameter_mandatory on <self:OptionParameter> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (var18){
{
{ /* Inline opts#Option#errors (self) on <self:OptionParameter> */
var23 = self->attrs[COLOR_opts__Option___errors].val; /* _errors on <self:OptionParameter> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _errors");
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 28);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (varonce) {
var24 = varonce;
} else {
var25 = "Parameter expected for option ";
var26 = 30;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce = var24;
}
{
{ /* Inline opts#Option#names (self) on <self:OptionParameter> */
var30 = self->attrs[COLOR_opts__Option___names].val; /* _names on <self:OptionParameter> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 19);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
var31 = abstract_collection__SequenceRead__first(var28);
}
if (varonce32) {
var33 = varonce32;
} else {
var34 = ".";
var35 = 1;
var36 = string__NativeString__to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
var37 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var37 = array_instance Array[Object] */
var38 = 3;
var39 = NEW_array__NativeArray(var38, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var39)->values[0] = (val*) var24;
((struct instance_array__NativeArray*)var39)->values[1] = (val*) var31;
((struct instance_array__NativeArray*)var39)->values[2] = (val*) var33;
{
((void (*)(val*, val*, long))(var37->class->vft[COLOR_array__Array__with_native]))(var37, var39, var38) /* with_native on <var37:Array[Object]>*/;
}
}
{
var40 = ((val* (*)(val*))(var37->class->vft[COLOR_string__Object__to_s]))(var37) /* to_s on <var37:Array[Object]>*/;
}
{
array__Array__add(var21, var40); /* Direct call array#Array#add on <var21:Array[String]>*/
}
} else {
}
}
RET_LABEL:;
}
/* method opts#OptionParameter#read_param for (self: Object, Iterator[String]) */
void VIRTUAL_opts__OptionParameter__read_param(val* self, val* p0) {
opts__OptionParameter__read_param(self, p0); /* Direct call opts#OptionParameter#read_param on <self:Object(OptionParameter)>*/
RET_LABEL:;
}
/* method opts#OptionString#init for (self: OptionString, String, Array[String]) */
void opts__OptionString__init(val* self, val* p0, val* p1) {
val* var_help /* var help: String */;
val* var_names /* var names: Array[String] */;
val* var /* : null */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
var_help = p0;
var_names = p1;
var = NULL;
/* <var:null> isa VALUE */
type_struct = self->type->resolution_table->types[COLOR_opts__Option_VTVALUE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(var == NULL) {
var1 = is_nullable;
} else {
if(cltype >= var->type->table_size) {
var1 = 0;
} else {
var1 = var->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = var == NULL ? "null" : var->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 162);
show_backtrace(1);
}
{
opts__Option__init(self, var_help, var, var_names); /* Direct call opts#Option#init on <self:OptionString>*/
}
RET_LABEL:;
}
/* method opts#OptionString#init for (self: Object, String, Array[String]) */
void VIRTUAL_opts__OptionString__init(val* self, val* p0, val* p1) {
opts__OptionString__init(self, p0, p1); /* Direct call opts#OptionString#init on <self:Object(OptionString)>*/
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
if (unlikely(!var1)) {
var_class_name = var_str == NULL ? "null" : var_str->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 164);
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
/* method opts#OptionInt#init for (self: OptionInt, String, Int, Array[String]) */
void opts__OptionInt__init(val* self, val* p0, long p1, val* p2) {
val* var_help /* var help: String */;
long var_default /* var default: Int */;
val* var_names /* var names: Array[String] */;
val* var /* : nullable Object */;
var_help = p0;
var_default = p1;
var_names = p2;
{
var = BOX_kernel__Int(var_default); /* autobox from Int to nullable Object */
opts__Option__init(self, var_help, var, var_names); /* Direct call opts#Option#init on <self:OptionInt>*/
}
RET_LABEL:;
}
/* method opts#OptionInt#init for (self: Object, String, Int, Array[String]) */
void VIRTUAL_opts__OptionInt__init(val* self, val* p0, long p1, val* p2) {
opts__OptionInt__init(self, p0, p1, p2); /* Direct call opts#OptionInt#init on <self:Object(OptionInt)>*/
RET_LABEL:;
}
/* method opts#OptionInt#convert for (self: OptionInt, String): Int */
long opts__OptionInt__convert(val* self, val* p0) {
long var /* : Int */;
val* var_str /* var str: String */;
long var1 /* : Int */;
var_str = p0;
{
var1 = string__Text__to_i(var_str);
}
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
val* var2 /* : Array[String] */;
val* var4 /* : Array[String] */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var_help = p0;
var_names = p1;
var = NEW_array__Array(&type_array__Arraystring__String);
{
((void (*)(val*))(var->class->vft[COLOR_kernel__Object__init]))(var) /* init on <var:Array[String]>*/;
}
{
{ /* Inline opts#OptionArray#values= (self,var) on <self:OptionArray> */
self->attrs[COLOR_opts__OptionArray___values].val = var; /* _values on <self:OptionArray> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline opts#OptionArray#values (self) on <self:OptionArray> */
var4 = self->attrs[COLOR_opts__OptionArray___values].val; /* _values on <self:OptionArray> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _values");
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 233);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
/* <var2:Array[String]> isa VALUE */
type_struct = self->type->resolution_table->types[COLOR_opts__Option_VTVALUE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var2->type->table_size) {
var5 = 0;
} else {
var5 = var2->type->type_table[cltype] == idtype;
}
if (unlikely(!var5)) {
var_class_name = var2 == NULL ? "null" : var2->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 230);
show_backtrace(1);
}
{
opts__Option__init(self, var_help, var2, var_names); /* Direct call opts#Option#init on <self:OptionArray>*/
}
RET_LABEL:;
}
/* method opts#OptionArray#init for (self: Object, String, Array[String]) */
void VIRTUAL_opts__OptionArray__init(val* self, val* p0, val* p1) {
opts__OptionArray__init(self, p0, p1); /* Direct call opts#OptionArray#init on <self:Object(OptionArray)>*/
RET_LABEL:;
}
/* method opts#OptionArray#values for (self: OptionArray): Array[String] */
val* opts__OptionArray__values(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_opts__OptionArray___values].val; /* _values on <self:OptionArray> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _values");
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 233);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method opts#OptionArray#values for (self: Object): Array[String] */
val* VIRTUAL_opts__OptionArray__values(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
val* var3 /* : Array[String] */;
{ /* Inline opts#OptionArray#values (self) on <self:Object(OptionArray)> */
var3 = self->attrs[COLOR_opts__OptionArray___values].val; /* _values on <self:Object(OptionArray)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _values");
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 233);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method opts#OptionArray#values= for (self: OptionArray, Array[String]) */
void opts__OptionArray__values_61d(val* self, val* p0) {
self->attrs[COLOR_opts__OptionArray___values].val = p0; /* _values on <self:OptionArray> */
RET_LABEL:;
}
/* method opts#OptionArray#values= for (self: Object, Array[String]) */
void VIRTUAL_opts__OptionArray__values_61d(val* self, val* p0) {
{ /* Inline opts#OptionArray#values= (self,p0) on <self:Object(OptionArray)> */
self->attrs[COLOR_opts__OptionArray___values].val = p0; /* _values on <self:Object(OptionArray)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method opts#OptionArray#convert for (self: OptionArray, String): Array[String] */
val* opts__OptionArray__convert(val* self, val* p0) {
val* var /* : Array[String] */;
val* var_str /* var str: String */;
val* var1 /* : Array[String] */;
val* var3 /* : Array[String] */;
val* var4 /* : Array[String] */;
val* var6 /* : Array[String] */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var_str = p0;
{
{ /* Inline opts#OptionArray#values (self) on <self:OptionArray> */
var3 = self->attrs[COLOR_opts__OptionArray___values].val; /* _values on <self:OptionArray> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _values");
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 233);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
array__Array__add(var1, var_str); /* Direct call array#Array#add on <var1:Array[String]>*/
}
{
{ /* Inline opts#OptionArray#values (self) on <self:OptionArray> */
var6 = self->attrs[COLOR_opts__OptionArray___values].val; /* _values on <self:OptionArray> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _values");
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 233);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
/* <var4:Array[String]> isa VALUE */
type_struct = self->type->resolution_table->types[COLOR_opts__Option_VTVALUE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var4->type->table_size) {
var7 = 0;
} else {
var7 = var4->type->type_table[cltype] == idtype;
}
if (unlikely(!var7)) {
var_class_name = var4 == NULL ? "null" : var4->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 237);
show_backtrace(1);
}
var = var4;
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
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _options");
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 243);
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
val* var3 /* : Array[Option] */;
{ /* Inline opts#OptionContext#options (self) on <self:Object(OptionContext)> */
var3 = self->attrs[COLOR_opts__OptionContext___options].val; /* _options on <self:Object(OptionContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _options");
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 243);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method opts#OptionContext#rest for (self: OptionContext): Array[String] */
val* opts__OptionContext__rest(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_opts__OptionContext___rest].val; /* _rest on <self:OptionContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _rest");
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 246);
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
val* var3 /* : Array[String] */;
{ /* Inline opts#OptionContext#rest (self) on <self:Object(OptionContext)> */
var3 = self->attrs[COLOR_opts__OptionContext___rest].val; /* _rest on <self:Object(OptionContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _rest");
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 246);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method opts#OptionContext#errors for (self: OptionContext): Array[String] */
val* opts__OptionContext__errors(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_opts__OptionContext___errors].val; /* _errors on <self:OptionContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _errors");
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 249);
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
val* var3 /* : Array[String] */;
{ /* Inline opts#OptionContext#errors (self) on <self:Object(OptionContext)> */
var3 = self->attrs[COLOR_opts__OptionContext___errors].val; /* _errors on <self:Object(OptionContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _errors");
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 249);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method opts#OptionContext#optmap for (self: OptionContext): HashMap[String, Option] */
val* opts__OptionContext__optmap(val* self) {
val* var /* : HashMap[String, Option] */;
val* var1 /* : HashMap[String, Option] */;
var1 = self->attrs[COLOR_opts__OptionContext___optmap].val; /* _optmap on <self:OptionContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _optmap");
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 252);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method opts#OptionContext#optmap for (self: Object): HashMap[String, Option] */
val* VIRTUAL_opts__OptionContext__optmap(val* self) {
val* var /* : HashMap[String, Option] */;
val* var1 /* : HashMap[String, Option] */;
val* var3 /* : HashMap[String, Option] */;
{ /* Inline opts#OptionContext#optmap (self) on <self:Object(OptionContext)> */
var3 = self->attrs[COLOR_opts__OptionContext___optmap].val; /* _optmap on <self:Object(OptionContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _optmap");
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 252);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method opts#OptionContext#add_option for (self: OptionContext, Array[Option]) */
void opts__OptionContext__add_option(val* self, val* p0) {
val* var_opts /* var opts: Array[Option] */;
val* var /* : Array[Option] */;
val* var2 /* : Array[Option] */;
var_opts = p0;
{
{ /* Inline opts#OptionContext#options (self) on <self:OptionContext> */
var2 = self->attrs[COLOR_opts__OptionContext___options].val; /* _options on <self:OptionContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _options");
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 243);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
abstract_collection__SimpleCollection__add_all(var, var_opts); /* Direct call abstract_collection#SimpleCollection#add_all on <var:Array[Option]>*/
}
RET_LABEL:;
}
/* method opts#OptionContext#add_option for (self: Object, Array[Option]) */
void VIRTUAL_opts__OptionContext__add_option(val* self, val* p0) {
opts__OptionContext__add_option(self, p0); /* Direct call opts#OptionContext#add_option on <self:Object(OptionContext)>*/
RET_LABEL:;
}
/* method opts#OptionContext#usage for (self: OptionContext) */
void opts__OptionContext__usage(val* self) {
long var /* : Int */;
long var_lmax /* var lmax: Int */;
val* var1 /* : Array[Option] */;
val* var3 /* : Array[Option] */;
val* var_ /* var : Array[Option] */;
val* var4 /* : ArrayIterator[nullable Object] */;
val* var_5 /* var : ArrayIterator[Option] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_i /* var i: Option */;
long var8 /* : Int */;
long var_l /* var l: Int */;
val* var9 /* : Array[String] */;
val* var11 /* : Array[String] */;
val* var_12 /* var : Array[String] */;
val* var13 /* : ArrayIterator[nullable Object] */;
val* var_14 /* var : ArrayIterator[String] */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
val* var_n /* var n: String */;
long var17 /* : Int */;
long var19 /* : Int */;
long var20 /* : Int */;
long var21 /* : Int */;
short int var23 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var24 /* : Int */;
long var25 /* : Int */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
long var31 /* : Int */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
short int var39 /* : Bool */;
val* var42 /* : Array[Option] */;
val* var44 /* : Array[Option] */;
val* var_45 /* var : Array[Option] */;
val* var46 /* : ArrayIterator[nullable Object] */;
val* var_47 /* var : ArrayIterator[Option] */;
short int var48 /* : Bool */;
val* var49 /* : nullable Object */;
val* var_i50 /* var i: Option */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
val* var55 /* : String */;
var = 1;
var_lmax = var;
{
{ /* Inline opts#OptionContext#options (self) on <self:OptionContext> */
var3 = self->attrs[COLOR_opts__OptionContext___options].val; /* _options on <self:OptionContext> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _options");
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 243);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_ = var1;
{
var4 = array__AbstractArrayRead__iterator(var_);
}
var_5 = var4;
for(;;) {
{
var6 = array__ArrayIterator__is_ok(var_5);
}
if (var6){
{
var7 = array__ArrayIterator__item(var_5);
}
var_i = var7;
var8 = 3;
var_l = var8;
{
{ /* Inline opts#Option#names (var_i) on <var_i:Option> */
var11 = var_i->attrs[COLOR_opts__Option___names].val; /* _names on <var_i:Option> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 19);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_12 = var9;
{
var13 = array__AbstractArrayRead__iterator(var_12);
}
var_14 = var13;
for(;;) {
{
var15 = array__ArrayIterator__is_ok(var_14);
}
if (var15){
{
var16 = array__ArrayIterator__item(var_14);
}
var_n = var16;
{
{ /* Inline string#FlatText#length (var_n) on <var_n:String> */
var19 = var_n->attrs[COLOR_string__FlatText___length].l; /* _length on <var_n:String> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
var20 = 2;
{
{ /* Inline kernel#Int#+ (var17,var20) on <var17:Int> */
/* Covariant cast for argument 0 (i) <var20:Int> isa OTHER */
/* <var20:Int> isa OTHER */
var23 = 1; /* easy <var20:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var24 = var17 + var20;
var21 = var24;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_l,var21) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var21:Int> isa OTHER */
/* <var21:Int> isa OTHER */
var27 = 1; /* easy <var21:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name30 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var31 = var_l + var21;
var25 = var31;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var_l = var25;
{
array__ArrayIterator__next(var_14); /* Direct call array#ArrayIterator#next on <var_14:ArrayIterator[String]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_14) on <var_14:ArrayIterator[String]> */
RET_LABEL32:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var_lmax,var_l) on <var_lmax:Int> */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var35 = 1; /* easy <var_l:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name38 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var39 = var_lmax < var_l;
var33 = var39;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
if (var33){
var_lmax = var_l;
} else {
}
{
array__ArrayIterator__next(var_5); /* Direct call array#ArrayIterator#next on <var_5:ArrayIterator[Option]>*/
}
} else {
goto BREAK_label40;
}
}
BREAK_label40: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_5) on <var_5:ArrayIterator[Option]> */
RET_LABEL41:(void)0;
}
}
{
{ /* Inline opts#OptionContext#options (self) on <self:OptionContext> */
var44 = self->attrs[COLOR_opts__OptionContext___options].val; /* _options on <self:OptionContext> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _options");
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 243);
show_backtrace(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
var_45 = var42;
{
var46 = array__AbstractArrayRead__iterator(var_45);
}
var_47 = var46;
for(;;) {
{
var48 = array__ArrayIterator__is_ok(var_47);
}
if (var48){
{
var49 = array__ArrayIterator__item(var_47);
}
var_i50 = var49;
{
{ /* Inline opts#Option#hidden (var_i50) on <var_i50:Option> */
var53 = var_i50->attrs[COLOR_opts__Option___hidden].s; /* _hidden on <var_i50:Option> */
var51 = var53;
RET_LABEL52:(void)0;
}
}
var54 = !var51;
if (var54){
{
var55 = opts__Option__pretty(var_i50, var_lmax);
}
{
file__Object__print(self, var55); /* Direct call file#Object#print on <self:OptionContext>*/
}
} else {
}
{
array__ArrayIterator__next(var_47); /* Direct call array#ArrayIterator#next on <var_47:ArrayIterator[Option]>*/
}
} else {
goto BREAK_label56;
}
}
BREAK_label56: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_47) on <var_47:ArrayIterator[Option]> */
RET_LABEL57:(void)0;
}
}
RET_LABEL:;
}
/* method opts#OptionContext#usage for (self: Object) */
void VIRTUAL_opts__OptionContext__usage(val* self) {
opts__OptionContext__usage(self); /* Direct call opts#OptionContext#usage on <self:Object(OptionContext)>*/
RET_LABEL:;
}
/* method opts#OptionContext#parse for (self: OptionContext, Collection[String]) */
void opts__OptionContext__parse(val* self, val* p0) {
val* var_argv /* var argv: Collection[String] */;
val* var /* : Iterator[nullable Object] */;
val* var_it /* var it: Iterator[String] */;
var_argv = p0;
{
var = ((val* (*)(val*))(var_argv->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_argv) /* iterator on <var_argv:Collection[String]>*/;
}
var_it = var;
{
opts__OptionContext__parse_intern(self, var_it); /* Direct call opts#OptionContext#parse_intern on <self:OptionContext>*/
}
RET_LABEL:;
}
/* method opts#OptionContext#parse for (self: Object, Collection[String]) */
void VIRTUAL_opts__OptionContext__parse(val* self, val* p0) {
opts__OptionContext__parse(self, p0); /* Direct call opts#OptionContext#parse on <self:Object(OptionContext)>*/
RET_LABEL:;
}
/* method opts#OptionContext#parse_intern for (self: OptionContext, Iterator[String]) */
void opts__OptionContext__parse_intern(val* self, val* p0) {
val* var_it /* var it: Iterator[String] */;
short int var /* : Bool */;
short int var_parseargs /* var parseargs: Bool */;
val* var1 /* : Array[String] */;
val* var3 /* : Array[String] */;
val* var_rest /* var rest: Array[String] */;
short int var4 /* : Bool */;
short int var_ /* var : Bool */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_str /* var str: String */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : FlatString */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : Array[nullable Object] */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : SequenceRead[Char] */;
val* var18 /* : SequenceRead[Char] */;
char var19 /* : Char */;
long var20 /* : Int */;
val* var21 /* : nullable Object */;
long var22 /* : Int */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var_27 /* var : Bool */;
long var28 /* : Int */;
long var30 /* : Int */;
long var31 /* : Int */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var_next_called /* var next_called: Bool */;
long var37 /* : Int */;
long var_i /* var i: Int */;
long var38 /* : Int */;
long var40 /* : Int */;
long var_41 /* var : Int */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
short int var48 /* : Bool */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
long var52 /* : Int */;
val* var53 /* : FlatString */;
val* var54 /* : SequenceRead[Char] */;
val* var56 /* : SequenceRead[Char] */;
val* var57 /* : nullable Object */;
val* var58 /* : String */;
char var59 /* : Char */;
val* var60 /* : String */;
val* var_short_opt /* var short_opt: String */;
val* var61 /* : HashMap[String, Option] */;
val* var63 /* : HashMap[String, Option] */;
short int var64 /* : Bool */;
val* var65 /* : HashMap[String, Option] */;
val* var67 /* : HashMap[String, Option] */;
val* var68 /* : nullable Object */;
val* var_option /* var option: Option */;
short int var69 /* : Bool */;
int cltype70;
int idtype71;
short int var72 /* : Bool */;
long var73 /* : Int */;
long var74 /* : Int */;
short int var75 /* : Bool */;
val* var76 /* : HashMap[String, Option] */;
val* var78 /* : HashMap[String, Option] */;
short int var79 /* : Bool */;
val* var80 /* : HashMap[String, Option] */;
val* var82 /* : HashMap[String, Option] */;
val* var83 /* : nullable Object */;
val* var_opt /* var opt: Option */;
val* var84 /* : nullable Object */;
val* var86 /* : Array[Option] */;
val* var88 /* : Array[Option] */;
val* var_89 /* var : Array[Option] */;
val* var90 /* : ArrayIterator[nullable Object] */;
val* var_91 /* var : ArrayIterator[Option] */;
short int var92 /* : Bool */;
val* var93 /* : nullable Object */;
val* var_opt94 /* var opt: Option */;
short int var95 /* : Bool */;
short int var96 /* : Bool */;
short int var98 /* : Bool */;
short int var_99 /* var : Bool */;
short int var100 /* : Bool */;
short int var102 /* : Bool */;
short int var103 /* : Bool */;
val* var104 /* : Array[String] */;
val* var106 /* : Array[String] */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
long var110 /* : Int */;
val* var111 /* : FlatString */;
val* var112 /* : Array[String] */;
val* var114 /* : Array[String] */;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : NativeString */;
long var118 /* : Int */;
val* var119 /* : FlatString */;
val* var120 /* : String */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : NativeString */;
long var124 /* : Int */;
val* var125 /* : FlatString */;
val* var126 /* : Array[Object] */;
long var127 /* : Int */;
val* var128 /* : NativeArray[Object] */;
val* var129 /* : String */;
var_it = p0;
var = 1;
var_parseargs = var;
{
opts__OptionContext__build(self); /* Direct call opts#OptionContext#build on <self:OptionContext>*/
}
{
{ /* Inline opts#OptionContext#rest (self) on <self:OptionContext> */
var3 = self->attrs[COLOR_opts__OptionContext___rest].val; /* _rest on <self:OptionContext> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _rest");
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 246);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_rest = var1;
for(;;) {
var_ = var_parseargs;
if (var_parseargs){
{
var5 = ((short int (*)(val*))(var_it->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_it) /* is_ok on <var_it:Iterator[String]>*/;
}
var4 = var5;
} else {
var4 = var_;
}
if (var4){
{
var6 = ((val* (*)(val*))(var_it->class->vft[COLOR_abstract_collection__Iterator__item]))(var_it) /* item on <var_it:Iterator[String]>*/;
}
var_str = var6;
if (varonce) {
var7 = varonce;
} else {
var8 = "--";
var9 = 2;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
{
var12 = string__FlatString___61d_61d(var_str, var7);
var11 = var12;
}
if (var11){
{
((void (*)(val*))(var_it->class->vft[COLOR_abstract_collection__Iterator__next]))(var_it) /* next on <var_it:Iterator[String]>*/;
}
{
var13 = array__Iterator__to_a(var_it);
}
{
abstract_collection__SimpleCollection__add_all(var_rest, var13); /* Direct call abstract_collection#SimpleCollection#add_all on <var_rest:Array[String]>*/
}
var14 = 0;
var_parseargs = var14;
} else {
{
{ /* Inline string#FlatString#chars (var_str) on <var_str:String> */
var18 = var_str->attrs[COLOR_string__FlatString___chars].val; /* _chars on <var_str:String> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 939);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var19 = '-';
{
var21 = BOX_kernel__Char(var19); /* autobox from Char to nullable Object */
var20 = ((long (*)(val*, val*))(var16->class->vft[COLOR_abstract_collection__SequenceRead__last_index_of]))(var16, var21) /* last_index_of on <var16:SequenceRead[Char]>*/;
}
var22 = 0;
{
{ /* Inline kernel#Int#== (var20,var22) on <var20:Int> */
var26 = var20 == var22;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
var23 = var24;
}
var_27 = var23;
if (var23){
{
{ /* Inline string#FlatText#length (var_str) on <var_str:String> */
var30 = var_str->attrs[COLOR_string__FlatText___length].l; /* _length on <var_str:String> */
var28 = var30;
RET_LABEL29:(void)0;
}
}
var31 = 2;
{
{ /* Inline kernel#Int#> (var28,var31) on <var28:Int> */
/* Covariant cast for argument 0 (i) <var31:Int> isa OTHER */
/* <var31:Int> isa OTHER */
var34 = 1; /* easy <var31:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var35 = var28 > var31;
var32 = var35;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var15 = var32;
} else {
var15 = var_27;
}
if (var15){
var36 = 0;
var_next_called = var36;
var37 = 1;
var_i = var37;
{
{ /* Inline string#FlatText#length (var_str) on <var_str:String> */
var40 = var_str->attrs[COLOR_string__FlatText___length].l; /* _length on <var_str:String> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
var_41 = var38;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_41) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_41:Int> isa OTHER */
/* <var_41:Int> isa OTHER */
var44 = 1; /* easy <var_41:Int> isa OTHER*/
if (unlikely(!var44)) {
var_class_name47 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var48 = var_i < var_41;
var42 = var48;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
if (var42){
if (varonce49) {
var50 = varonce49;
} else {
var51 = "-";
var52 = 1;
var53 = string__NativeString__to_s_with_length(var51, var52);
var50 = var53;
varonce49 = var50;
}
{
{ /* Inline string#FlatString#chars (var_str) on <var_str:String> */
var56 = var_str->attrs[COLOR_string__FlatString___chars].val; /* _chars on <var_str:String> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/string.nit", 939);
show_backtrace(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
var57 = ((val* (*)(val*, long))(var54->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var54, var_i) /* [] on <var54:SequenceRead[Char]>*/;
}
{
var59 = ((struct instance_kernel__Char*)var57)->value; /* autounbox from nullable Object to Char */;
var58 = string__Char__to_s(var59);
}
{
var60 = string__FlatString___43d(var50, var58);
}
var_short_opt = var60;
{
{ /* Inline opts#OptionContext#optmap (self) on <self:OptionContext> */
var63 = self->attrs[COLOR_opts__OptionContext___optmap].val; /* _optmap on <self:OptionContext> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _optmap");
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 252);
show_backtrace(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
var64 = abstract_collection__MapRead__has_key(var61, var_short_opt);
}
if (var64){
{
{ /* Inline opts#OptionContext#optmap (self) on <self:OptionContext> */
var67 = self->attrs[COLOR_opts__OptionContext___optmap].val; /* _optmap on <self:OptionContext> */
if (unlikely(var67 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _optmap");
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 252);
show_backtrace(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
var68 = hash_collection__HashMap___91d_93d(var65, var_short_opt);
}
var_option = var68;
/* <var_option:Option> isa OptionParameter */
cltype70 = type_opts__OptionParameter.color;
idtype71 = type_opts__OptionParameter.id;
if(cltype70 >= var_option->type->table_size) {
var69 = 0;
} else {
var69 = var_option->type->type_table[cltype70] == idtype71;
}
if (var69){
{
((void (*)(val*))(var_it->class->vft[COLOR_abstract_collection__Iterator__next]))(var_it) /* next on <var_it:Iterator[String]>*/;
}
var72 = 1;
var_next_called = var72;
} else {
}
{
((void (*)(val*, val*))(var_option->class->vft[COLOR_opts__Option__read_param]))(var_option, var_it) /* read_param on <var_option:Option>*/;
}
} else {
}
var73 = 1;
{
var74 = kernel__Int__successor(var_i, var73);
}
var_i = var74;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var75 = !var_next_called;
if (var75){
{
((void (*)(val*))(var_it->class->vft[COLOR_abstract_collection__Iterator__next]))(var_it) /* next on <var_it:Iterator[String]>*/;
}
} else {
}
} else {
{
{ /* Inline opts#OptionContext#optmap (self) on <self:OptionContext> */
var78 = self->attrs[COLOR_opts__OptionContext___optmap].val; /* _optmap on <self:OptionContext> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _optmap");
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 252);
show_backtrace(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
{
var79 = abstract_collection__MapRead__has_key(var76, var_str);
}
if (var79){
{
{ /* Inline opts#OptionContext#optmap (self) on <self:OptionContext> */
var82 = self->attrs[COLOR_opts__OptionContext___optmap].val; /* _optmap on <self:OptionContext> */
if (unlikely(var82 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _optmap");
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 252);
show_backtrace(1);
}
var80 = var82;
RET_LABEL81:(void)0;
}
}
{
var83 = hash_collection__HashMap___91d_93d(var80, var_str);
}
var_opt = var83;
{
((void (*)(val*))(var_it->class->vft[COLOR_abstract_collection__Iterator__next]))(var_it) /* next on <var_it:Iterator[String]>*/;
}
{
((void (*)(val*, val*))(var_opt->class->vft[COLOR_opts__Option__read_param]))(var_opt, var_it) /* read_param on <var_opt:Option>*/;
}
} else {
{
var84 = ((val* (*)(val*))(var_it->class->vft[COLOR_abstract_collection__Iterator__item]))(var_it) /* item on <var_it:Iterator[String]>*/;
}
{
array__Array__add(var_rest, var84); /* Direct call array#Array#add on <var_rest:Array[String]>*/
}
{
((void (*)(val*))(var_it->class->vft[COLOR_abstract_collection__Iterator__next]))(var_it) /* next on <var_it:Iterator[String]>*/;
}
}
}
}
} else {
goto BREAK_label85;
}
}
BREAK_label85: (void)0;
{
{ /* Inline opts#OptionContext#options (self) on <self:OptionContext> */
var88 = self->attrs[COLOR_opts__OptionContext___options].val; /* _options on <self:OptionContext> */
if (unlikely(var88 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _options");
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 243);
show_backtrace(1);
}
var86 = var88;
RET_LABEL87:(void)0;
}
}
var_89 = var86;
{
var90 = array__AbstractArrayRead__iterator(var_89);
}
var_91 = var90;
for(;;) {
{
var92 = array__ArrayIterator__is_ok(var_91);
}
if (var92){
{
var93 = array__ArrayIterator__item(var_91);
}
var_opt94 = var93;
{
{ /* Inline opts#Option#mandatory (var_opt94) on <var_opt94:Option> */
var98 = var_opt94->attrs[COLOR_opts__Option___mandatory].s; /* _mandatory on <var_opt94:Option> */
var96 = var98;
RET_LABEL97:(void)0;
}
}
var_99 = var96;
if (var96){
{
{ /* Inline opts#Option#read (var_opt94) on <var_opt94:Option> */
var102 = var_opt94->attrs[COLOR_opts__Option___read].s; /* _read on <var_opt94:Option> */
var100 = var102;
RET_LABEL101:(void)0;
}
}
var103 = !var100;
var95 = var103;
} else {
var95 = var_99;
}
if (var95){
{
{ /* Inline opts#OptionContext#errors (self) on <self:OptionContext> */
var106 = self->attrs[COLOR_opts__OptionContext___errors].val; /* _errors on <self:OptionContext> */
if (unlikely(var106 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _errors");
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 249);
show_backtrace(1);
}
var104 = var106;
RET_LABEL105:(void)0;
}
}
if (varonce107) {
var108 = varonce107;
} else {
var109 = "Mandatory option ";
var110 = 17;
var111 = string__NativeString__to_s_with_length(var109, var110);
var108 = var111;
varonce107 = var108;
}
{
{ /* Inline opts#Option#names (var_opt94) on <var_opt94:Option> */
var114 = var_opt94->attrs[COLOR_opts__Option___names].val; /* _names on <var_opt94:Option> */
if (unlikely(var114 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 19);
show_backtrace(1);
}
var112 = var114;
RET_LABEL113:(void)0;
}
}
if (varonce115) {
var116 = varonce115;
} else {
var117 = ", ";
var118 = 2;
var119 = string__NativeString__to_s_with_length(var117, var118);
var116 = var119;
varonce115 = var116;
}
{
var120 = string__Collection__join(var112, var116);
}
if (varonce121) {
var122 = varonce121;
} else {
var123 = " not found.";
var124 = 11;
var125 = string__NativeString__to_s_with_length(var123, var124);
var122 = var125;
varonce121 = var122;
}
var126 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var126 = array_instance Array[Object] */
var127 = 3;
var128 = NEW_array__NativeArray(var127, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var128)->values[0] = (val*) var108;
((struct instance_array__NativeArray*)var128)->values[1] = (val*) var120;
((struct instance_array__NativeArray*)var128)->values[2] = (val*) var122;
{
((void (*)(val*, val*, long))(var126->class->vft[COLOR_array__Array__with_native]))(var126, var128, var127) /* with_native on <var126:Array[Object]>*/;
}
}
{
var129 = ((val* (*)(val*))(var126->class->vft[COLOR_string__Object__to_s]))(var126) /* to_s on <var126:Array[Object]>*/;
}
{
array__Array__add(var104, var129); /* Direct call array#Array#add on <var104:Array[String]>*/
}
} else {
}
{
array__ArrayIterator__next(var_91); /* Direct call array#ArrayIterator#next on <var_91:ArrayIterator[Option]>*/
}
} else {
goto BREAK_label130;
}
}
BREAK_label130: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_91) on <var_91:ArrayIterator[Option]> */
RET_LABEL131:(void)0;
}
}
RET_LABEL:;
}
/* method opts#OptionContext#parse_intern for (self: Object, Iterator[String]) */
void VIRTUAL_opts__OptionContext__parse_intern(val* self, val* p0) {
opts__OptionContext__parse_intern(self, p0); /* Direct call opts#OptionContext#parse_intern on <self:Object(OptionContext)>*/
RET_LABEL:;
}
/* method opts#OptionContext#build for (self: OptionContext) */
void opts__OptionContext__build(val* self) {
val* var /* : Array[Option] */;
val* var2 /* : Array[Option] */;
val* var_ /* var : Array[Option] */;
val* var3 /* : ArrayIterator[nullable Object] */;
val* var_4 /* var : ArrayIterator[Option] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_o /* var o: Option */;
val* var7 /* : Array[String] */;
val* var9 /* : Array[String] */;
val* var_10 /* var : Array[String] */;
val* var11 /* : ArrayIterator[nullable Object] */;
val* var_12 /* var : ArrayIterator[String] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_n /* var n: String */;
val* var15 /* : HashMap[String, Option] */;
val* var17 /* : HashMap[String, Option] */;
{
{ /* Inline opts#OptionContext#options (self) on <self:OptionContext> */
var2 = self->attrs[COLOR_opts__OptionContext___options].val; /* _options on <self:OptionContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _options");
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 243);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_ = var;
{
var3 = array__AbstractArrayRead__iterator(var_);
}
var_4 = var3;
for(;;) {
{
var5 = array__ArrayIterator__is_ok(var_4);
}
if (var5){
{
var6 = array__ArrayIterator__item(var_4);
}
var_o = var6;
{
{ /* Inline opts#Option#names (var_o) on <var_o:Option> */
var9 = var_o->attrs[COLOR_opts__Option___names].val; /* _names on <var_o:Option> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 19);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_10 = var7;
{
var11 = array__AbstractArrayRead__iterator(var_10);
}
var_12 = var11;
for(;;) {
{
var13 = array__ArrayIterator__is_ok(var_12);
}
if (var13){
{
var14 = array__ArrayIterator__item(var_12);
}
var_n = var14;
{
{ /* Inline opts#OptionContext#optmap (self) on <self:OptionContext> */
var17 = self->attrs[COLOR_opts__OptionContext___optmap].val; /* _optmap on <self:OptionContext> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _optmap");
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 252);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
hash_collection__HashMap___91d_93d_61d(var15, var_n, var_o); /* Direct call hash_collection#HashMap#[]= on <var15:HashMap[String, Option]>*/
}
{
array__ArrayIterator__next(var_12); /* Direct call array#ArrayIterator#next on <var_12:ArrayIterator[String]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_12) on <var_12:ArrayIterator[String]> */
RET_LABEL18:(void)0;
}
}
{
array__ArrayIterator__next(var_4); /* Direct call array#ArrayIterator#next on <var_4:ArrayIterator[Option]>*/
}
} else {
goto BREAK_label19;
}
}
BREAK_label19: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_4) on <var_4:ArrayIterator[Option]> */
RET_LABEL20:(void)0;
}
}
RET_LABEL:;
}
/* method opts#OptionContext#build for (self: Object) */
void VIRTUAL_opts__OptionContext__build(val* self) {
opts__OptionContext__build(self); /* Direct call opts#OptionContext#build on <self:Object(OptionContext)>*/
RET_LABEL:;
}
/* method opts#OptionContext#get_errors for (self: OptionContext): Array[String] */
val* opts__OptionContext__get_errors(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
val* var_errors /* var errors: Array[String] */;
val* var2 /* : Array[Option] */;
val* var4 /* : Array[Option] */;
val* var_ /* var : Array[Option] */;
val* var5 /* : ArrayIterator[nullable Object] */;
val* var_6 /* var : ArrayIterator[Option] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_o /* var o: Option */;
val* var9 /* : Array[String] */;
val* var11 /* : Array[String] */;
val* var_12 /* var : Array[String] */;
val* var13 /* : ArrayIterator[nullable Object] */;
val* var_14 /* var : ArrayIterator[String] */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
val* var_e /* var e: String */;
var1 = NEW_array__Array(&type_array__Arraystring__String);
{
((void (*)(val*))(var1->class->vft[COLOR_kernel__Object__init]))(var1) /* init on <var1:Array[String]>*/;
}
var_errors = var1;
{
abstract_collection__SimpleCollection__add_all(var_errors, var_errors); /* Direct call abstract_collection#SimpleCollection#add_all on <var_errors:Array[String]>*/
}
{
{ /* Inline opts#OptionContext#options (self) on <self:OptionContext> */
var4 = self->attrs[COLOR_opts__OptionContext___options].val; /* _options on <self:OptionContext> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _options");
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 243);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
var_ = var2;
{
var5 = array__AbstractArrayRead__iterator(var_);
}
var_6 = var5;
for(;;) {
{
var7 = array__ArrayIterator__is_ok(var_6);
}
if (var7){
{
var8 = array__ArrayIterator__item(var_6);
}
var_o = var8;
{
{ /* Inline opts#Option#errors (var_o) on <var_o:Option> */
var11 = var_o->attrs[COLOR_opts__Option___errors].val; /* _errors on <var_o:Option> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _errors");
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 28);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_12 = var9;
{
var13 = array__AbstractArrayRead__iterator(var_12);
}
var_14 = var13;
for(;;) {
{
var15 = array__ArrayIterator__is_ok(var_14);
}
if (var15){
{
var16 = array__ArrayIterator__item(var_14);
}
var_e = var16;
{
array__Array__add(var_errors, var_e); /* Direct call array#Array#add on <var_errors:Array[String]>*/
}
{
array__ArrayIterator__next(var_14); /* Direct call array#ArrayIterator#next on <var_14:ArrayIterator[String]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_14) on <var_14:ArrayIterator[String]> */
RET_LABEL17:(void)0;
}
}
{
array__ArrayIterator__next(var_6); /* Direct call array#ArrayIterator#next on <var_6:ArrayIterator[Option]>*/
}
} else {
goto BREAK_label18;
}
}
BREAK_label18: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_6) on <var_6:ArrayIterator[Option]> */
RET_LABEL19:(void)0;
}
}
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
