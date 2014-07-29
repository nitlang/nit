#include "opts.sep.0.h"
/* method opts#Option#names for (self: Option): Array[String] */
val* opts__Option__names(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_opts__Option___names].val; /* _names on <self:Option> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 19);
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
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 19);
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
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 25);
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
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 25);
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
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 28);
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
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 28);
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
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 40);
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
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 40);
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
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 43);
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
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 43);
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
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 46);
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
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 52);
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
var3 = abstract_collection__SequenceRead___61d_61d(var_names, var1);
var2 = var3;
}
if (var2){
var4 = NEW_array__Array(&type_array__Arraystring__String);
{
array__Array__init(var4); /* Direct call array#Array#init on <var4:Array[String]>*/
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
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 43);
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
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 40);
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
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 19);
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
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
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
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 327);
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
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 25);
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
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 40);
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
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
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
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 40);
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
PRINT_ERROR(" (%s:%d)\n", "lib/standard/string.nit", 746);
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
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 40);
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
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 28);
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
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 19);
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
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 162);
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
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 164);
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
array__Array__init(var); /* Direct call array#Array#init on <var:Array[String]>*/
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
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 237);
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
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 234);
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
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 237);
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
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 237);
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
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 237);
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
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 237);
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
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 241);
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
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 247);
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
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 247);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method opts#OptionContext#options= for (self: OptionContext, Array[Option]) */
void opts__OptionContext__options_61d(val* self, val* p0) {
self->attrs[COLOR_opts__OptionContext___options].val = p0; /* _options on <self:OptionContext> */
RET_LABEL:;
}
/* method opts#OptionContext#options= for (self: Object, Array[Option]) */
void VIRTUAL_opts__OptionContext__options_61d(val* self, val* p0) {
{ /* Inline opts#OptionContext#options= (self,p0) on <self:Object(OptionContext)> */
self->attrs[COLOR_opts__OptionContext___options].val = p0; /* _options on <self:Object(OptionContext)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method opts#OptionContext#rest for (self: OptionContext): Array[String] */
val* opts__OptionContext__rest(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_opts__OptionContext___rest].val; /* _rest on <self:OptionContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _rest");
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 250);
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
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 250);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method opts#OptionContext#rest= for (self: OptionContext, Array[String]) */
void opts__OptionContext__rest_61d(val* self, val* p0) {
self->attrs[COLOR_opts__OptionContext___rest].val = p0; /* _rest on <self:OptionContext> */
RET_LABEL:;
}
/* method opts#OptionContext#rest= for (self: Object, Array[String]) */
void VIRTUAL_opts__OptionContext__rest_61d(val* self, val* p0) {
{ /* Inline opts#OptionContext#rest= (self,p0) on <self:Object(OptionContext)> */
self->attrs[COLOR_opts__OptionContext___rest].val = p0; /* _rest on <self:Object(OptionContext)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method opts#OptionContext#errors for (self: OptionContext): Array[String] */
val* opts__OptionContext__errors(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_opts__OptionContext___errors].val; /* _errors on <self:OptionContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _errors");
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 253);
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
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 253);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method opts#OptionContext#errors= for (self: OptionContext, Array[String]) */
void opts__OptionContext__errors_61d(val* self, val* p0) {
self->attrs[COLOR_opts__OptionContext___errors].val = p0; /* _errors on <self:OptionContext> */
RET_LABEL:;
}
/* method opts#OptionContext#errors= for (self: Object, Array[String]) */
void VIRTUAL_opts__OptionContext__errors_61d(val* self, val* p0) {
{ /* Inline opts#OptionContext#errors= (self,p0) on <self:Object(OptionContext)> */
self->attrs[COLOR_opts__OptionContext___errors].val = p0; /* _errors on <self:Object(OptionContext)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method opts#OptionContext#optmap for (self: OptionContext): Map[String, Option] */
val* opts__OptionContext__optmap(val* self) {
val* var /* : Map[String, Option] */;
val* var1 /* : Map[String, Option] */;
var1 = self->attrs[COLOR_opts__OptionContext___optmap].val; /* _optmap on <self:OptionContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _optmap");
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 256);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method opts#OptionContext#optmap for (self: Object): Map[String, Option] */
val* VIRTUAL_opts__OptionContext__optmap(val* self) {
val* var /* : Map[String, Option] */;
val* var1 /* : Map[String, Option] */;
val* var3 /* : Map[String, Option] */;
{ /* Inline opts#OptionContext#optmap (self) on <self:Object(OptionContext)> */
var3 = self->attrs[COLOR_opts__OptionContext___optmap].val; /* _optmap on <self:Object(OptionContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _optmap");
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 256);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method opts#OptionContext#optmap= for (self: OptionContext, Map[String, Option]) */
void opts__OptionContext__optmap_61d(val* self, val* p0) {
self->attrs[COLOR_opts__OptionContext___optmap].val = p0; /* _optmap on <self:OptionContext> */
RET_LABEL:;
}
/* method opts#OptionContext#optmap= for (self: Object, Map[String, Option]) */
void VIRTUAL_opts__OptionContext__optmap_61d(val* self, val* p0) {
{ /* Inline opts#OptionContext#optmap= (self,p0) on <self:Object(OptionContext)> */
self->attrs[COLOR_opts__OptionContext___optmap].val = p0; /* _optmap on <self:Object(OptionContext)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method opts#OptionContext#init for (self: OptionContext) */
void opts__OptionContext__init(val* self) {
val* var /* : Array[Option] */;
val* var2 /* : HashMap[String, Option] */;
val* var4 /* : Array[String] */;
val* var6 /* : Array[String] */;
var = NEW_array__Array(&type_array__Arrayopts__Option);
{
array__Array__init(var); /* Direct call array#Array#init on <var:Array[Option]>*/
}
{
{ /* Inline opts#OptionContext#options= (self,var) on <self:OptionContext> */
self->attrs[COLOR_opts__OptionContext___options].val = var; /* _options on <self:OptionContext> */
RET_LABEL1:(void)0;
}
}
var2 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapstring__Stringopts__Option);
{
hash_collection__HashMap__init(var2); /* Direct call hash_collection#HashMap#init on <var2:HashMap[String, Option]>*/
}
{
{ /* Inline opts#OptionContext#optmap= (self,var2) on <self:OptionContext> */
self->attrs[COLOR_opts__OptionContext___optmap].val = var2; /* _optmap on <self:OptionContext> */
RET_LABEL3:(void)0;
}
}
var4 = NEW_array__Array(&type_array__Arraystring__String);
{
array__Array__init(var4); /* Direct call array#Array#init on <var4:Array[String]>*/
}
{
{ /* Inline opts#OptionContext#rest= (self,var4) on <self:OptionContext> */
self->attrs[COLOR_opts__OptionContext___rest].val = var4; /* _rest on <self:OptionContext> */
RET_LABEL5:(void)0;
}
}
var6 = NEW_array__Array(&type_array__Arraystring__String);
{
array__Array__init(var6); /* Direct call array#Array#init on <var6:Array[String]>*/
}
{
{ /* Inline opts#OptionContext#errors= (self,var6) on <self:OptionContext> */
self->attrs[COLOR_opts__OptionContext___errors].val = var6; /* _errors on <self:OptionContext> */
RET_LABEL7:(void)0;
}
}
RET_LABEL:;
}
/* method opts#OptionContext#init for (self: Object) */
void VIRTUAL_opts__OptionContext__init(val* self) {
opts__OptionContext__init(self); /* Direct call opts#OptionContext#init on <self:Object(OptionContext)>*/
RET_LABEL:;
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
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 247);
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
val* var4 /* : ArrayIterator[nullable Object] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_i /* var i: Option */;
long var7 /* : Int */;
long var_l /* var l: Int */;
val* var8 /* : Array[String] */;
val* var10 /* : Array[String] */;
val* var11 /* : ArrayIterator[nullable Object] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_n /* var n: String */;
long var14 /* : Int */;
long var16 /* : Int */;
long var17 /* : Int */;
long var18 /* : Int */;
short int var20 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var21 /* : Int */;
long var22 /* : Int */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
long var28 /* : Int */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
short int var35 /* : Bool */;
val* var37 /* : Array[Option] */;
val* var39 /* : Array[Option] */;
val* var40 /* : ArrayIterator[nullable Object] */;
short int var41 /* : Bool */;
val* var42 /* : nullable Object */;
val* var_i43 /* var i: Option */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
val* var48 /* : String */;
var = 1;
var_lmax = var;
{
{ /* Inline opts#OptionContext#options (self) on <self:OptionContext> */
var3 = self->attrs[COLOR_opts__OptionContext___options].val; /* _options on <self:OptionContext> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _options");
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 247);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = array__AbstractArrayRead__iterator(var1);
}
for(;;) {
{
var5 = array__ArrayIterator__is_ok(var4);
}
if(!var5) break;
{
var6 = array__ArrayIterator__item(var4);
}
var_i = var6;
var7 = 3;
var_l = var7;
{
{ /* Inline opts#Option#names (var_i) on <var_i:Option> */
var10 = var_i->attrs[COLOR_opts__Option___names].val; /* _names on <var_i:Option> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 19);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = array__AbstractArrayRead__iterator(var8);
}
for(;;) {
{
var12 = array__ArrayIterator__is_ok(var11);
}
if(!var12) break;
{
var13 = array__ArrayIterator__item(var11);
}
var_n = var13;
{
{ /* Inline string#FlatText#length (var_n) on <var_n:String> */
var16 = var_n->attrs[COLOR_string__FlatText___length].l; /* _length on <var_n:String> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
var17 = 2;
{
{ /* Inline kernel#Int#+ (var14,var17) on <var14:Int> */
/* Covariant cast for argument 0 (i) <var17:Int> isa OTHER */
/* <var17:Int> isa OTHER */
var20 = 1; /* easy <var17:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var21 = var14 + var17;
var18 = var21;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_l,var18) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var18:Int> isa OTHER */
/* <var18:Int> isa OTHER */
var24 = 1; /* easy <var18:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var28 = var_l + var18;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var_l = var22;
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var11); /* Direct call array#ArrayIterator#next on <var11:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel#Int#< (var_lmax,var_l) on <var_lmax:Int> */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var31 = 1; /* easy <var_l:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 325);
show_backtrace(1);
}
var35 = var_lmax < var_l;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
if (var29){
var_lmax = var_l;
} else {
}
CONTINUE_label36: (void)0;
{
array__ArrayIterator__next(var4); /* Direct call array#ArrayIterator#next on <var4:ArrayIterator[nullable Object]>*/
}
}
BREAK_label36: (void)0;
{
{ /* Inline opts#OptionContext#options (self) on <self:OptionContext> */
var39 = self->attrs[COLOR_opts__OptionContext___options].val; /* _options on <self:OptionContext> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _options");
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 247);
show_backtrace(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
var40 = array__AbstractArrayRead__iterator(var37);
}
for(;;) {
{
var41 = array__ArrayIterator__is_ok(var40);
}
if(!var41) break;
{
var42 = array__ArrayIterator__item(var40);
}
var_i43 = var42;
{
{ /* Inline opts#Option#hidden (var_i43) on <var_i43:Option> */
var46 = var_i43->attrs[COLOR_opts__Option___hidden].s; /* _hidden on <var_i43:Option> */
var44 = var46;
RET_LABEL45:(void)0;
}
}
var47 = !var44;
if (var47){
{
var48 = opts__Option__pretty(var_i43, var_lmax);
}
{
file__Object__print(self, var48); /* Direct call file#Object#print on <self:OptionContext>*/
}
} else {
}
CONTINUE_label49: (void)0;
{
array__ArrayIterator__next(var40); /* Direct call array#ArrayIterator#next on <var40:ArrayIterator[nullable Object]>*/
}
}
BREAK_label49: (void)0;
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
val* var37 /* : Range[Int] */;
long var38 /* : Int */;
long var39 /* : Int */;
long var41 /* : Int */;
val* var42 /* : Discrete */;
val* var43 /* : Discrete */;
val* var44 /* : Iterator[Discrete] */;
short int var45 /* : Bool */;
val* var46 /* : nullable Object */;
long var_i /* var i: Int */;
long var47 /* : Int */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
long var51 /* : Int */;
val* var52 /* : FlatString */;
val* var53 /* : SequenceRead[Char] */;
val* var55 /* : SequenceRead[Char] */;
val* var56 /* : nullable Object */;
val* var57 /* : String */;
char var58 /* : Char */;
val* var59 /* : String */;
val* var_short_opt /* var short_opt: String */;
val* var60 /* : Map[String, Option] */;
val* var62 /* : Map[String, Option] */;
short int var63 /* : Bool */;
val* var64 /* : Map[String, Option] */;
val* var66 /* : Map[String, Option] */;
val* var67 /* : nullable Object */;
val* var_option /* var option: Option */;
short int var68 /* : Bool */;
int cltype69;
int idtype70;
short int var71 /* : Bool */;
short int var72 /* : Bool */;
val* var73 /* : Map[String, Option] */;
val* var75 /* : Map[String, Option] */;
short int var76 /* : Bool */;
val* var77 /* : Map[String, Option] */;
val* var79 /* : Map[String, Option] */;
val* var80 /* : nullable Object */;
val* var_opt /* var opt: Option */;
val* var81 /* : nullable Object */;
val* var83 /* : Array[Option] */;
val* var85 /* : Array[Option] */;
val* var86 /* : ArrayIterator[nullable Object] */;
short int var87 /* : Bool */;
val* var88 /* : nullable Object */;
val* var_opt89 /* var opt: Option */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
short int var93 /* : Bool */;
short int var_94 /* var : Bool */;
short int var95 /* : Bool */;
short int var97 /* : Bool */;
short int var98 /* : Bool */;
val* var99 /* : Array[String] */;
val* var101 /* : Array[String] */;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : NativeString */;
long var105 /* : Int */;
val* var106 /* : FlatString */;
val* var107 /* : Array[String] */;
val* var109 /* : Array[String] */;
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : NativeString */;
long var113 /* : Int */;
val* var114 /* : FlatString */;
val* var115 /* : String */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : NativeString */;
long var119 /* : Int */;
val* var120 /* : FlatString */;
val* var121 /* : Array[Object] */;
long var122 /* : Int */;
val* var123 /* : NativeArray[Object] */;
val* var124 /* : String */;
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
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 250);
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
if (!var4) break;
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
PRINT_ERROR(" (%s:%d)\n", "lib/standard/string.nit", 746);
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
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 327);
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
var37 = NEW_range__Range(&type_range__Rangekernel__Int);
var38 = 1;
{
{ /* Inline string#FlatText#length (var_str) on <var_str:String> */
var41 = var_str->attrs[COLOR_string__FlatText___length].l; /* _length on <var_str:String> */
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
var42 = BOX_kernel__Int(var38); /* autobox from Int to Discrete */
var43 = BOX_kernel__Int(var39); /* autobox from Int to Discrete */
range__Range__without_last(var37, var42, var43); /* Direct call range#Range#without_last on <var37:Range[Int]>*/
}
{
var44 = range__Range__iterator(var37);
}
for(;;) {
{
var45 = ((short int (*)(val*))(var44->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var44) /* is_ok on <var44:Iterator[Discrete]>*/;
}
if(!var45) break;
{
var46 = ((val* (*)(val*))(var44->class->vft[COLOR_abstract_collection__Iterator__item]))(var44) /* item on <var44:Iterator[Discrete]>*/;
}
var47 = ((struct instance_kernel__Int*)var46)->value; /* autounbox from nullable Object to Int */;
var_i = var47;
if (varonce48) {
var49 = varonce48;
} else {
var50 = "-";
var51 = 1;
var52 = string__NativeString__to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
{
{ /* Inline string#FlatString#chars (var_str) on <var_str:String> */
var55 = var_str->attrs[COLOR_string__FlatString___chars].val; /* _chars on <var_str:String> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/string.nit", 746);
show_backtrace(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
var56 = ((val* (*)(val*, long))(var53->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var53, var_i) /* [] on <var53:SequenceRead[Char]>*/;
}
{
var58 = ((struct instance_kernel__Char*)var56)->value; /* autounbox from nullable Object to Char */;
var57 = string__Char__to_s(var58);
}
{
var59 = string__FlatString___43d(var49, var57);
}
var_short_opt = var59;
{
{ /* Inline opts#OptionContext#optmap (self) on <self:OptionContext> */
var62 = self->attrs[COLOR_opts__OptionContext___optmap].val; /* _optmap on <self:OptionContext> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _optmap");
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 256);
show_backtrace(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
var63 = abstract_collection__MapRead__has_key(var60, var_short_opt);
}
if (var63){
{
{ /* Inline opts#OptionContext#optmap (self) on <self:OptionContext> */
var66 = self->attrs[COLOR_opts__OptionContext___optmap].val; /* _optmap on <self:OptionContext> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _optmap");
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 256);
show_backtrace(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
var67 = ((val* (*)(val*, val*))(var64->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var64, var_short_opt) /* [] on <var64:Map[String, Option]>*/;
}
var_option = var67;
/* <var_option:Option> isa OptionParameter */
cltype69 = type_opts__OptionParameter.color;
idtype70 = type_opts__OptionParameter.id;
if(cltype69 >= var_option->type->table_size) {
var68 = 0;
} else {
var68 = var_option->type->type_table[cltype69] == idtype70;
}
if (var68){
{
((void (*)(val*))(var_it->class->vft[COLOR_abstract_collection__Iterator__next]))(var_it) /* next on <var_it:Iterator[String]>*/;
}
var71 = 1;
var_next_called = var71;
} else {
}
{
((void (*)(val*, val*))(var_option->class->vft[COLOR_opts__Option__read_param]))(var_option, var_it) /* read_param on <var_option:Option>*/;
}
} else {
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var44->class->vft[COLOR_abstract_collection__Iterator__next]))(var44) /* next on <var44:Iterator[Discrete]>*/;
}
}
BREAK_label: (void)0;
var72 = !var_next_called;
if (var72){
{
((void (*)(val*))(var_it->class->vft[COLOR_abstract_collection__Iterator__next]))(var_it) /* next on <var_it:Iterator[String]>*/;
}
} else {
}
} else {
{
{ /* Inline opts#OptionContext#optmap (self) on <self:OptionContext> */
var75 = self->attrs[COLOR_opts__OptionContext___optmap].val; /* _optmap on <self:OptionContext> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _optmap");
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 256);
show_backtrace(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
var76 = abstract_collection__MapRead__has_key(var73, var_str);
}
if (var76){
{
{ /* Inline opts#OptionContext#optmap (self) on <self:OptionContext> */
var79 = self->attrs[COLOR_opts__OptionContext___optmap].val; /* _optmap on <self:OptionContext> */
if (unlikely(var79 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _optmap");
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 256);
show_backtrace(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
{
var80 = ((val* (*)(val*, val*))(var77->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var77, var_str) /* [] on <var77:Map[String, Option]>*/;
}
var_opt = var80;
{
((void (*)(val*))(var_it->class->vft[COLOR_abstract_collection__Iterator__next]))(var_it) /* next on <var_it:Iterator[String]>*/;
}
{
((void (*)(val*, val*))(var_opt->class->vft[COLOR_opts__Option__read_param]))(var_opt, var_it) /* read_param on <var_opt:Option>*/;
}
} else {
{
var81 = ((val* (*)(val*))(var_it->class->vft[COLOR_abstract_collection__Iterator__item]))(var_it) /* item on <var_it:Iterator[String]>*/;
}
{
array__Array__add(var_rest, var81); /* Direct call array#Array#add on <var_rest:Array[String]>*/
}
{
((void (*)(val*))(var_it->class->vft[COLOR_abstract_collection__Iterator__next]))(var_it) /* next on <var_it:Iterator[String]>*/;
}
}
}
}
CONTINUE_label82: (void)0;
}
BREAK_label82: (void)0;
{
{ /* Inline opts#OptionContext#options (self) on <self:OptionContext> */
var85 = self->attrs[COLOR_opts__OptionContext___options].val; /* _options on <self:OptionContext> */
if (unlikely(var85 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _options");
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 247);
show_backtrace(1);
}
var83 = var85;
RET_LABEL84:(void)0;
}
}
{
var86 = array__AbstractArrayRead__iterator(var83);
}
for(;;) {
{
var87 = array__ArrayIterator__is_ok(var86);
}
if(!var87) break;
{
var88 = array__ArrayIterator__item(var86);
}
var_opt89 = var88;
{
{ /* Inline opts#Option#mandatory (var_opt89) on <var_opt89:Option> */
var93 = var_opt89->attrs[COLOR_opts__Option___mandatory].s; /* _mandatory on <var_opt89:Option> */
var91 = var93;
RET_LABEL92:(void)0;
}
}
var_94 = var91;
if (var91){
{
{ /* Inline opts#Option#read (var_opt89) on <var_opt89:Option> */
var97 = var_opt89->attrs[COLOR_opts__Option___read].s; /* _read on <var_opt89:Option> */
var95 = var97;
RET_LABEL96:(void)0;
}
}
var98 = !var95;
var90 = var98;
} else {
var90 = var_94;
}
if (var90){
{
{ /* Inline opts#OptionContext#errors (self) on <self:OptionContext> */
var101 = self->attrs[COLOR_opts__OptionContext___errors].val; /* _errors on <self:OptionContext> */
if (unlikely(var101 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _errors");
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 253);
show_backtrace(1);
}
var99 = var101;
RET_LABEL100:(void)0;
}
}
if (varonce102) {
var103 = varonce102;
} else {
var104 = "Mandatory option ";
var105 = 17;
var106 = string__NativeString__to_s_with_length(var104, var105);
var103 = var106;
varonce102 = var103;
}
{
{ /* Inline opts#Option#names (var_opt89) on <var_opt89:Option> */
var109 = var_opt89->attrs[COLOR_opts__Option___names].val; /* _names on <var_opt89:Option> */
if (unlikely(var109 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 19);
show_backtrace(1);
}
var107 = var109;
RET_LABEL108:(void)0;
}
}
if (varonce110) {
var111 = varonce110;
} else {
var112 = ", ";
var113 = 2;
var114 = string__NativeString__to_s_with_length(var112, var113);
var111 = var114;
varonce110 = var111;
}
{
var115 = string__Collection__join(var107, var111);
}
if (varonce116) {
var117 = varonce116;
} else {
var118 = " not found.";
var119 = 11;
var120 = string__NativeString__to_s_with_length(var118, var119);
var117 = var120;
varonce116 = var117;
}
var121 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var121 = array_instance Array[Object] */
var122 = 3;
var123 = NEW_array__NativeArray(var122, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var123)->values[0] = (val*) var103;
((struct instance_array__NativeArray*)var123)->values[1] = (val*) var115;
((struct instance_array__NativeArray*)var123)->values[2] = (val*) var117;
{
((void (*)(val*, val*, long))(var121->class->vft[COLOR_array__Array__with_native]))(var121, var123, var122) /* with_native on <var121:Array[Object]>*/;
}
}
{
var124 = ((val* (*)(val*))(var121->class->vft[COLOR_string__Object__to_s]))(var121) /* to_s on <var121:Array[Object]>*/;
}
{
array__Array__add(var99, var124); /* Direct call array#Array#add on <var99:Array[String]>*/
}
} else {
}
CONTINUE_label125: (void)0;
{
array__ArrayIterator__next(var86); /* Direct call array#ArrayIterator#next on <var86:ArrayIterator[nullable Object]>*/
}
}
BREAK_label125: (void)0;
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
val* var3 /* : ArrayIterator[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_o /* var o: Option */;
val* var6 /* : Array[String] */;
val* var8 /* : Array[String] */;
val* var9 /* : ArrayIterator[nullable Object] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_n /* var n: String */;
val* var12 /* : Map[String, Option] */;
val* var14 /* : Map[String, Option] */;
{
{ /* Inline opts#OptionContext#options (self) on <self:OptionContext> */
var2 = self->attrs[COLOR_opts__OptionContext___options].val; /* _options on <self:OptionContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _options");
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 247);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = array__AbstractArrayRead__iterator(var);
}
for(;;) {
{
var4 = array__ArrayIterator__is_ok(var3);
}
if(!var4) break;
{
var5 = array__ArrayIterator__item(var3);
}
var_o = var5;
{
{ /* Inline opts#Option#names (var_o) on <var_o:Option> */
var8 = var_o->attrs[COLOR_opts__Option___names].val; /* _names on <var_o:Option> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 19);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = array__AbstractArrayRead__iterator(var6);
}
for(;;) {
{
var10 = array__ArrayIterator__is_ok(var9);
}
if(!var10) break;
{
var11 = array__ArrayIterator__item(var9);
}
var_n = var11;
{
{ /* Inline opts#OptionContext#optmap (self) on <self:OptionContext> */
var14 = self->attrs[COLOR_opts__OptionContext___optmap].val; /* _optmap on <self:OptionContext> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _optmap");
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 256);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
((void (*)(val*, val*, val*))(var12->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var12, var_n, var_o) /* []= on <var12:Map[String, Option]>*/;
}
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var9); /* Direct call array#ArrayIterator#next on <var9:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
CONTINUE_label15: (void)0;
{
array__ArrayIterator__next(var3); /* Direct call array#ArrayIterator#next on <var3:ArrayIterator[nullable Object]>*/
}
}
BREAK_label15: (void)0;
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
val* var5 /* : ArrayIterator[nullable Object] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_o /* var o: Option */;
val* var8 /* : Array[String] */;
val* var10 /* : Array[String] */;
val* var11 /* : ArrayIterator[nullable Object] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_e /* var e: String */;
var1 = NEW_array__Array(&type_array__Arraystring__String);
{
array__Array__init(var1); /* Direct call array#Array#init on <var1:Array[String]>*/
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
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 247);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = array__AbstractArrayRead__iterator(var2);
}
for(;;) {
{
var6 = array__ArrayIterator__is_ok(var5);
}
if(!var6) break;
{
var7 = array__ArrayIterator__item(var5);
}
var_o = var7;
{
{ /* Inline opts#Option#errors (var_o) on <var_o:Option> */
var10 = var_o->attrs[COLOR_opts__Option___errors].val; /* _errors on <var_o:Option> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _errors");
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 28);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = array__AbstractArrayRead__iterator(var8);
}
for(;;) {
{
var12 = array__ArrayIterator__is_ok(var11);
}
if(!var12) break;
{
var13 = array__ArrayIterator__item(var11);
}
var_e = var13;
{
array__Array__add(var_errors, var_e); /* Direct call array#Array#add on <var_errors:Array[String]>*/
}
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var11); /* Direct call array#ArrayIterator#next on <var11:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
CONTINUE_label14: (void)0;
{
array__ArrayIterator__next(var5); /* Direct call array#ArrayIterator#next on <var5:ArrayIterator[nullable Object]>*/
}
}
BREAK_label14: (void)0;
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
