#include "opts.sep.0.h"
/* method opts#Option#names for (self: Option): Array[String] */
val* opts___opts__Option___names(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_opts__Option___names].val; /* _names on <self:Option> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 19);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method opts#Option#names= for (self: Option, Array[String]) */
void opts___opts__Option___names_61d(val* self, val* p0) {
self->attrs[COLOR_opts__Option___names].val = p0; /* _names on <self:Option> */
RET_LABEL:;
}
/* method opts#Option#helptext for (self: Option): String */
val* opts___opts__Option___helptext(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_opts__Option___helptext].val; /* _helptext on <self:Option> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _helptext");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 25);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method opts#Option#helptext= for (self: Option, String) */
void opts___opts__Option___helptext_61d(val* self, val* p0) {
self->attrs[COLOR_opts__Option___helptext].val = p0; /* _helptext on <self:Option> */
RET_LABEL:;
}
/* method opts#Option#errors for (self: Option): Array[String] */
val* opts___opts__Option___errors(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_opts__Option___errors].val; /* _errors on <self:Option> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _errors");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 28);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method opts#Option#mandatory for (self: Option): Bool */
short int opts___opts__Option___mandatory(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_opts__Option___mandatory].s; /* _mandatory on <self:Option> */
var = var1;
RET_LABEL:;
return var;
}
/* method opts#Option#hidden for (self: Option): Bool */
short int opts___opts__Option___hidden(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_opts__Option___hidden].s; /* _hidden on <self:Option> */
var = var1;
RET_LABEL:;
return var;
}
/* method opts#Option#hidden= for (self: Option, Bool) */
void opts___opts__Option___hidden_61d(val* self, short int p0) {
self->attrs[COLOR_opts__Option___hidden].s = p0; /* _hidden on <self:Option> */
RET_LABEL:;
}
/* method opts#Option#read for (self: Option): Bool */
short int opts___opts__Option___read(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_opts__Option___read].s; /* _read on <self:Option> */
var = var1;
RET_LABEL:;
return var;
}
/* method opts#Option#read= for (self: Option, Bool) */
void opts___opts__Option___read_61d(val* self, short int p0) {
self->attrs[COLOR_opts__Option___read].s = p0; /* _read on <self:Option> */
RET_LABEL:;
}
/* method opts#Option#value for (self: Option): nullable Object */
val* opts___opts__Option___value(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = self->attrs[COLOR_opts__Option___value].val; /* _value on <self:Option> */
var = var1;
RET_LABEL:;
return var;
}
/* method opts#Option#value= for (self: Option, nullable Object) */
void opts___opts__Option___value_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
/* Covariant cast for argument 0 (value) <p0:nullable Object> isa VALUE */
/* <p0:nullable Object> isa VALUE */
type_struct = self->type->resolution_table->types[COLOR_opts__Option__VALUE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 40);
show_backtrace(1);
}
self->attrs[COLOR_opts__Option___value].val = p0; /* _value on <self:Option> */
RET_LABEL:;
}
/* method opts#Option#default_value= for (self: Option, nullable Object) */
void opts___opts__Option___default_value_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
/* Covariant cast for argument 0 (default_value) <p0:nullable Object> isa VALUE */
/* <p0:nullable Object> isa VALUE */
type_struct = self->type->resolution_table->types[COLOR_opts__Option__VALUE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 43);
show_backtrace(1);
}
self->attrs[COLOR_opts__Option___default_value].val = p0; /* _default_value on <self:Option> */
RET_LABEL:;
}
/* method opts#Option#init for (self: Option, String, nullable Object, nullable Array[String]) */
void opts___opts__Option___init(val* self, val* p0, val* p1, val* p2) {
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
type_struct = self->type->resolution_table->types[COLOR_opts__Option__VALUE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 46);
show_backtrace(1);
}
var_help = p0;
var_default = p1;
var_names = p2;
{
opts___opts__Option___init_opt(self, var_help, var_default, var_names); /* Direct call opts#Option#init_opt on <self:Option>*/
}
RET_LABEL:;
}
/* method opts#Option#init_opt for (self: Option, String, nullable Object, nullable Array[String]) */
void opts___opts__Option___init_opt(val* self, val* p0, val* p1, val* p2) {
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
type_struct = self->type->resolution_table->types[COLOR_opts__Option__VALUE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 51);
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
var3 = standard___standard__Array___standard__kernel__Object___61d_61d(var_names, var1);
var2 = var3;
}
if (var2){
var4 = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[String]>*/
}
{
{ /* Inline opts#Option#names= (self,var4) on <self:Option> */
self->attrs[COLOR_opts__Option___names].val = var4; /* _names on <self:Option> */
RET_LABEL5:(void)0;
}
}
} else {
{
var6 = standard__array___Collection___to_a(var_names);
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
type_struct13 = self->type->resolution_table->types[COLOR_opts__Option__VALUE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 43);
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
type_struct20 = self->type->resolution_table->types[COLOR_opts__Option__VALUE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 40);
show_backtrace(1);
}
self->attrs[COLOR_opts__Option___value].val = var_default; /* _value on <self:Option> */
RET_LABEL16:(void)0;
}
}
RET_LABEL:;
}
/* method opts#Option#to_s for (self: Option): String */
val* opts___opts__Option___standard__string__Object__to_s(val* self) {
val* var /* : String */;
long var1 /* : Int */;
val* var2 /* : String */;
var1 = 2;
{
var2 = opts___opts__Option___pretty(self, var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method opts#Option#pretty for (self: Option, Int): String */
val* opts___opts__Option___pretty(val* self, long p0) {
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
var1 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
if (varonce) {
var2 = varonce;
} else {
var3 = "  ";
var4 = 2;
var5 = standard___standard__NativeString___to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
{
standard___standard__FlatBuffer___from(var1, var2); /* Direct call string#FlatBuffer#from on <var1:FlatBuffer>*/
}
var_text = var1;
{
{ /* Inline opts#Option#names (self) on <self:Option> */
var8 = self->attrs[COLOR_opts__Option___names].val; /* _names on <self:Option> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 19);
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
var13 = standard___standard__NativeString___to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
{
var14 = standard__string___Collection___join(var6, var10);
}
{
standard___standard__FlatBuffer___Buffer__append(var_text, var14); /* Direct call string#FlatBuffer#append on <var_text:FlatBuffer>*/
}
if (varonce15) {
var16 = varonce15;
} else {
var17 = "  ";
var18 = 2;
var19 = standard___standard__NativeString___to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
{
standard___standard__FlatBuffer___Buffer__append(var_text, var16); /* Direct call string#FlatBuffer#append on <var_text:FlatBuffer>*/
}
{
{ /* Inline string#FlatText#length (var_text) on <var_text:FlatBuffer> */
var22 = var_text->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <var_text:FlatBuffer> */
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
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
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
var_class_name33 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
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
var39 = standard___standard__NativeString___to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
{
var40 = ((val* (*)(val* self, long p0))(var36->class->vft[COLOR_standard__string__String___42d]))(var36, var_rest) /* * on <var36:String>*/;
}
{
standard___standard__FlatBuffer___Buffer__append(var_text, var40); /* Direct call string#FlatBuffer#append on <var_text:FlatBuffer>*/
}
} else {
}
{
{ /* Inline opts#Option#helptext (self) on <self:Option> */
var43 = self->attrs[COLOR_opts__Option___helptext].val; /* _helptext on <self:Option> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _helptext");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 25);
show_backtrace(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
standard___standard__FlatBuffer___Buffer__append(var_text, var41); /* Direct call string#FlatBuffer#append on <var_text:FlatBuffer>*/
}
{
var44 = standard___standard__FlatBuffer___Object__to_s(var_text);
}
var = var44;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method opts#Option#read_param for (self: Option, Iterator[String]) */
void opts___opts__Option___read_param(val* self, val* p0) {
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
/* method opts#OptionBool#init for (self: OptionBool, String, Array[String]) */
void opts___opts__OptionBool___init(val* self, val* p0, val* p1) {
val* var_help /* var help: String */;
val* var_names /* var names: Array[String] */;
short int var /* : Bool */;
val* var1 /* : nullable Object */;
var_help = p0;
var_names = p1;
var = 0;
{
var1 = BOX_standard__Bool(var); /* autobox from Bool to nullable Object */
opts___opts__Option___init(self, var_help, var1, var_names); /* Direct call opts#Option#init on <self:OptionBool>*/
}
RET_LABEL:;
}
/* method opts#OptionBool#read_param for (self: OptionBool, Iterator[String]) */
void opts___opts__OptionBool___Option__read_param(val* self, val* p0) {
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
((void (*)(val* self, val* p0))(self->class->vft[COLOR_opts___opts__OptionBool___Option__read_param]))(self, p0) /* read_param on <self:OptionBool>*/;
}
var = 1;
{
{ /* Inline opts#Option#value= (self,var) on <self:OptionBool> */
/* Covariant cast for argument 0 (value) <var:Bool> isa VALUE */
/* <var:Bool> isa VALUE */
type_struct = self->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (&type_standard__Bool)->table_size) {
var2 = 0;
} else {
var2 = (&type_standard__Bool)->type_table[cltype] == idtype;
}
if (unlikely(!var2)) {
var_class_name = type_standard__Bool.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 40);
show_backtrace(1);
}
var3 = BOX_standard__Bool(var); /* autobox from Bool to nullable Object */
self->attrs[COLOR_opts__Option___value].val = var3; /* _value on <self:OptionBool> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method opts#OptionCount#init for (self: OptionCount, String, Array[String]) */
void opts___opts__OptionCount___init(val* self, val* p0, val* p1) {
val* var_help /* var help: String */;
val* var_names /* var names: Array[String] */;
long var /* : Int */;
val* var1 /* : nullable Object */;
var_help = p0;
var_names = p1;
var = 0;
{
var1 = BOX_standard__Int(var); /* autobox from Int to nullable Object */
opts___opts__Option___init(self, var_help, var1, var_names); /* Direct call opts#Option#init on <self:OptionCount>*/
}
RET_LABEL:;
}
/* method opts#OptionCount#read_param for (self: OptionCount, Iterator[String]) */
void opts___opts__OptionCount___Option__read_param(val* self, val* p0) {
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
((void (*)(val* self, val* p0))(self->class->vft[COLOR_opts___opts__OptionCount___Option__read_param]))(self, p0) /* read_param on <self:OptionCount>*/;
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
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var7 = ((struct instance_standard__Int*)var)->value; /* autounbox from nullable Object to Int */;
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
type_struct = var_->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype11 = type_struct->color;
idtype12 = type_struct->id;
if(cltype11 >= (&type_standard__Int)->table_size) {
var10 = 0;
} else {
var10 = (&type_standard__Int)->type_table[cltype11] == idtype12;
}
if (unlikely(!var10)) {
var_class_name13 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 40);
show_backtrace(1);
}
var14 = BOX_standard__Int(var4); /* autobox from Int to nullable Object */
var_->attrs[COLOR_opts__Option___value].val = var14; /* _value on <var_:OptionCount> */
RET_LABEL9:(void)0;
}
}
RET_LABEL:;
}
/* method opts#OptionParameter#parameter_mandatory for (self: OptionParameter): Bool */
short int opts___opts__OptionParameter___parameter_mandatory(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_opts__OptionParameter___parameter_mandatory].s; /* _parameter_mandatory on <self:OptionParameter> */
var = var1;
RET_LABEL:;
return var;
}
/* method opts#OptionParameter#read_param for (self: OptionParameter, Iterator[String]) */
void opts___opts__OptionParameter___Option__read_param(val* self, val* p0) {
val* var_it /* var it: Iterator[String] */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var_ /* var : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
short int var4 /* : Bool */;
short int var_5 /* var : Bool */;
val* var6 /* : nullable Object */;
val* var7 /* : SequenceRead[Char] */;
val* var8 /* : nullable Object */;
char var9 /* : Char */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
char var13 /* : Char */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var16 /* : nullable Object */;
short int var18 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : Array[String] */;
val* var24 /* : Array[String] */;
static val* varonce;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : FlatString */;
val* var29 /* : Array[String] */;
val* var31 /* : Array[String] */;
val* var32 /* : nullable Object */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
val* var37 /* : FlatString */;
val* var38 /* : Array[Object] */;
long var39 /* : Int */;
val* var40 /* : NativeArray[Object] */;
val* var41 /* : String */;
var_it = p0;
{
((void (*)(val* self, val* p0))(self->class->vft[COLOR_opts___opts__OptionParameter___Option__read_param]))(self, p0) /* read_param on <self:OptionParameter>*/;
}
{
var1 = ((short int (*)(val* self))(var_it->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_it) /* is_ok on <var_it:Iterator[String]>*/;
}
var_ = var1;
if (var1){
{
var3 = ((val* (*)(val* self))(var_it->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_it) /* item on <var_it:Iterator[String]>*/;
}
{
var4 = standard___standard__Text___is_empty(var3);
}
var_5 = var4;
if (var4){
var2 = var_5;
} else {
{
var6 = ((val* (*)(val* self))(var_it->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_it) /* item on <var_it:Iterator[String]>*/;
}
{
var7 = ((val* (*)(val* self))(var6->class->vft[COLOR_standard__string__Text__chars]))(var6) /* chars on <var6:nullable Object(String)>*/;
}
{
var8 = ((val* (*)(val* self))(var7->class->vft[COLOR_standard__abstract_collection__Collection__first]))(var7) /* first on <var7:SequenceRead[Char]>*/;
}
var9 = '-';
{
{ /* Inline kernel#Char#!= (var8,var9) on <var8:nullable Object(Char)> */
var12 = (var8 != NULL) && (var8->class == &class_standard__Char);
if (var12) {
var13 = ((struct instance_standard__Char*)var8)->value; /* autounbox from nullable Object to Char */;
var12 = (var13 == var9);
}
var14 = !var12;
var10 = var14;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var2 = var10;
}
var = var2;
} else {
var = var_;
}
if (var){
{
var15 = ((val* (*)(val* self))(var_it->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_it) /* item on <var_it:Iterator[String]>*/;
}
{
var16 = ((val* (*)(val* self, val* p0))(self->class->vft[COLOR_opts__OptionParameter__convert]))(self, var15) /* convert on <self:OptionParameter>*/;
}
{
{ /* Inline opts#Option#value= (self,var16) on <self:OptionParameter> */
/* Covariant cast for argument 0 (value) <var16:nullable Object> isa VALUE */
/* <var16:nullable Object> isa VALUE */
type_struct = self->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(var16 == NULL) {
var18 = is_nullable;
} else {
if(cltype >= var16->type->table_size) {
var18 = 0;
} else {
var18 = var16->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var18)) {
var_class_name = var16 == NULL ? "null" : var16->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 40);
show_backtrace(1);
}
self->attrs[COLOR_opts__Option___value].val = var16; /* _value on <self:OptionParameter> */
RET_LABEL17:(void)0;
}
}
{
((void (*)(val* self))(var_it->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_it) /* next on <var_it:Iterator[String]>*/;
}
} else {
{
{ /* Inline opts#OptionParameter#parameter_mandatory (self) on <self:OptionParameter> */
var21 = self->attrs[COLOR_opts__OptionParameter___parameter_mandatory].s; /* _parameter_mandatory on <self:OptionParameter> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
if (var19){
{
{ /* Inline opts#Option#errors (self) on <self:OptionParameter> */
var24 = self->attrs[COLOR_opts__Option___errors].val; /* _errors on <self:OptionParameter> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _errors");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 28);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
if (varonce) {
var25 = varonce;
} else {
var26 = "Parameter expected for option ";
var27 = 30;
var28 = standard___standard__NativeString___to_s_with_length(var26, var27);
var25 = var28;
varonce = var25;
}
{
{ /* Inline opts#Option#names (self) on <self:OptionParameter> */
var31 = self->attrs[COLOR_opts__Option___names].val; /* _names on <self:OptionParameter> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 19);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
var32 = standard___standard__SequenceRead___Collection__first(var29);
}
if (varonce33) {
var34 = varonce33;
} else {
var35 = ".";
var36 = 1;
var37 = standard___standard__NativeString___to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
var38 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var38 = array_instance Array[Object] */
var39 = 3;
var40 = NEW_standard__NativeArray(var39, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var40)->values[0] = (val*) var25;
((struct instance_standard__NativeArray*)var40)->values[1] = (val*) var32;
((struct instance_standard__NativeArray*)var40)->values[2] = (val*) var34;
{
((void (*)(val* self, val* p0, long p1))(var38->class->vft[COLOR_standard__array__Array__with_native]))(var38, var40, var39) /* with_native on <var38:Array[Object]>*/;
}
}
{
var41 = ((val* (*)(val* self))(var38->class->vft[COLOR_standard__string__Object__to_s]))(var38) /* to_s on <var38:Array[Object]>*/;
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var22, var41); /* Direct call array#Array#add on <var22:Array[String]>*/
}
} else {
}
}
RET_LABEL:;
}
/* method opts#OptionString#init for (self: OptionString, String, Array[String]) */
void opts___opts__OptionString___init(val* self, val* p0, val* p1) {
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
type_struct = self->type->resolution_table->types[COLOR_opts__Option__VALUE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 172);
show_backtrace(1);
}
{
opts___opts__Option___init(self, var_help, var, var_names); /* Direct call opts#Option#init on <self:OptionString>*/
}
RET_LABEL:;
}
/* method opts#OptionString#convert for (self: OptionString, String): nullable String */
val* opts___opts__OptionString___OptionParameter__convert(val* self, val* p0) {
val* var /* : nullable String */;
val* var_str /* var str: String */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var_str = p0;
/* <var_str:String> isa VALUE */
type_struct = self->type->resolution_table->types[COLOR_opts__Option__VALUE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 174);
show_backtrace(1);
}
var = var_str;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method opts#OptionInt#init for (self: OptionInt, String, Int, Array[String]) */
void opts___opts__OptionInt___init(val* self, val* p0, long p1, val* p2) {
val* var_help /* var help: String */;
long var_default /* var default: Int */;
val* var_names /* var names: Array[String] */;
val* var /* : nullable Object */;
var_help = p0;
var_default = p1;
var_names = p2;
{
var = BOX_standard__Int(var_default); /* autobox from Int to nullable Object */
opts___opts__Option___init(self, var_help, var, var_names); /* Direct call opts#Option#init on <self:OptionInt>*/
}
RET_LABEL:;
}
/* method opts#OptionInt#convert for (self: OptionInt, String): Int */
long opts___opts__OptionInt___OptionParameter__convert(val* self, val* p0) {
long var /* : Int */;
val* var_str /* var str: String */;
long var1 /* : Int */;
var_str = p0;
{
var1 = standard___standard__Text___to_i(var_str);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method opts#OptionInt#convert for (self: OptionParameter, String): nullable Object */
val* VIRTUAL_opts___opts__OptionInt___OptionParameter__convert(val* self, val* p0) {
val* var /* : nullable Object */;
long var1 /* : Int */;
val* var2 /* : nullable Object */;
var1 = opts___opts__OptionInt___OptionParameter__convert(self, p0);
var2 = BOX_standard__Int(var1); /* autobox from Int to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method opts#OptionArray#init for (self: OptionArray, String, Array[String]) */
void opts___opts__OptionArray___init(val* self, val* p0, val* p1) {
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
var = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var); /* Direct call array#Array#init on <var:Array[String]>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 254);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
/* <var2:Array[String]> isa VALUE */
type_struct = self->type->resolution_table->types[COLOR_opts__Option__VALUE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 251);
show_backtrace(1);
}
{
opts___opts__Option___init(self, var_help, var2, var_names); /* Direct call opts#Option#init on <self:OptionArray>*/
}
RET_LABEL:;
}
/* method opts#OptionArray#values for (self: OptionArray): Array[String] */
val* opts___opts__OptionArray___values(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_opts__OptionArray___values].val; /* _values on <self:OptionArray> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _values");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 254);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method opts#OptionArray#values= for (self: OptionArray, Array[String]) */
void opts___opts__OptionArray___values_61d(val* self, val* p0) {
self->attrs[COLOR_opts__OptionArray___values].val = p0; /* _values on <self:OptionArray> */
RET_LABEL:;
}
/* method opts#OptionArray#convert for (self: OptionArray, String): Array[String] */
val* opts___opts__OptionArray___OptionParameter__convert(val* self, val* p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 254);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var1, var_str); /* Direct call array#Array#add on <var1:Array[String]>*/
}
{
{ /* Inline opts#OptionArray#values (self) on <self:OptionArray> */
var6 = self->attrs[COLOR_opts__OptionArray___values].val; /* _values on <self:OptionArray> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _values");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 254);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
/* <var4:Array[String]> isa VALUE */
type_struct = self->type->resolution_table->types[COLOR_opts__Option__VALUE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 258);
show_backtrace(1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method opts#OptionContext#options for (self: OptionContext): Array[Option] */
val* opts___opts__OptionContext___options(val* self) {
val* var /* : Array[Option] */;
val* var1 /* : Array[Option] */;
var1 = self->attrs[COLOR_opts__OptionContext___options].val; /* _options on <self:OptionContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _options");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 264);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method opts#OptionContext#rest for (self: OptionContext): Array[String] */
val* opts___opts__OptionContext___rest(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_opts__OptionContext___rest].val; /* _rest on <self:OptionContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _rest");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 267);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method opts#OptionContext#errors for (self: OptionContext): Array[String] */
val* opts___opts__OptionContext___errors(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_opts__OptionContext___errors].val; /* _errors on <self:OptionContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _errors");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 270);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method opts#OptionContext#optmap for (self: OptionContext): HashMap[String, Option] */
val* opts___opts__OptionContext___optmap(val* self) {
val* var /* : HashMap[String, Option] */;
val* var1 /* : HashMap[String, Option] */;
var1 = self->attrs[COLOR_opts__OptionContext___optmap].val; /* _optmap on <self:OptionContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _optmap");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 273);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method opts#OptionContext#add_option for (self: OptionContext, Array[Option]) */
void opts___opts__OptionContext___add_option(val* self, val* p0) {
val* var_opts /* var opts: Array[Option] */;
val* var /* : Array[Option] */;
val* var2 /* : Array[Option] */;
var_opts = p0;
{
{ /* Inline opts#OptionContext#options (self) on <self:OptionContext> */
var2 = self->attrs[COLOR_opts__OptionContext___options].val; /* _options on <self:OptionContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _options");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 264);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add_all(var, var_opts); /* Direct call array#Array#add_all on <var:Array[Option]>*/
}
RET_LABEL:;
}
/* method opts#OptionContext#usage for (self: OptionContext) */
void opts___opts__OptionContext___usage(val* self) {
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
long var18 /* : Int */;
long var19 /* : Int */;
short int var21 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var22 /* : Int */;
long var23 /* : Int */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
long var29 /* : Int */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
short int var37 /* : Bool */;
val* var40 /* : Array[Option] */;
val* var42 /* : Array[Option] */;
val* var_43 /* var : Array[Option] */;
val* var44 /* : ArrayIterator[nullable Object] */;
val* var_45 /* var : ArrayIterator[Option] */;
short int var46 /* : Bool */;
val* var47 /* : nullable Object */;
val* var_i48 /* var i: Option */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
val* var53 /* : String */;
var = 1;
var_lmax = var;
{
{ /* Inline opts#OptionContext#options (self) on <self:OptionContext> */
var3 = self->attrs[COLOR_opts__OptionContext___options].val; /* _options on <self:OptionContext> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _options");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 264);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_ = var1;
{
var4 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_5 = var4;
for(;;) {
{
var6 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_5);
}
if (var6){
{
var7 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_5);
}
var_i = var7;
var8 = 3;
var_l = var8;
{
{ /* Inline opts#Option#names (var_i) on <var_i:Option> */
var11 = var_i->attrs[COLOR_opts__Option___names].val; /* _names on <var_i:Option> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 19);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_12 = var9;
{
var13 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_12);
}
var_14 = var13;
for(;;) {
{
var15 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_14);
}
if (var15){
{
var16 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_14);
}
var_n = var16;
{
var17 = ((long (*)(val* self))(var_n->class->vft[COLOR_standard__string__Text__length]))(var_n) /* length on <var_n:String>*/;
}
var18 = 2;
{
{ /* Inline kernel#Int#+ (var17,var18) on <var17:Int> */
/* Covariant cast for argument 0 (i) <var18:Int> isa OTHER */
/* <var18:Int> isa OTHER */
var21 = 1; /* easy <var18:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var22 = var17 + var18;
var19 = var22;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_l,var19) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var19:Int> isa OTHER */
/* <var19:Int> isa OTHER */
var25 = 1; /* easy <var19:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var29 = var_l + var19;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var_l = var23;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_14); /* Direct call array#ArrayIterator#next on <var_14:ArrayIterator[String]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_14) on <var_14:ArrayIterator[String]> */
RET_LABEL30:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var_lmax,var_l) on <var_lmax:Int> */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var33 = 1; /* easy <var_l:Int> isa OTHER*/
if (unlikely(!var33)) {
var_class_name36 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var37 = var_lmax < var_l;
var31 = var37;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
if (var31){
var_lmax = var_l;
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_5); /* Direct call array#ArrayIterator#next on <var_5:ArrayIterator[Option]>*/
}
} else {
goto BREAK_label38;
}
}
BREAK_label38: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_5) on <var_5:ArrayIterator[Option]> */
RET_LABEL39:(void)0;
}
}
{
{ /* Inline opts#OptionContext#options (self) on <self:OptionContext> */
var42 = self->attrs[COLOR_opts__OptionContext___options].val; /* _options on <self:OptionContext> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _options");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 264);
show_backtrace(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
var_43 = var40;
{
var44 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_43);
}
var_45 = var44;
for(;;) {
{
var46 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_45);
}
if (var46){
{
var47 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_45);
}
var_i48 = var47;
{
{ /* Inline opts#Option#hidden (var_i48) on <var_i48:Option> */
var51 = var_i48->attrs[COLOR_opts__Option___hidden].s; /* _hidden on <var_i48:Option> */
var49 = var51;
RET_LABEL50:(void)0;
}
}
var52 = !var49;
if (var52){
{
var53 = opts___opts__Option___pretty(var_i48, var_lmax);
}
{
standard__file___Object___print(self, var53); /* Direct call file#Object#print on <self:OptionContext>*/
}
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_45); /* Direct call array#ArrayIterator#next on <var_45:ArrayIterator[Option]>*/
}
} else {
goto BREAK_label54;
}
}
BREAK_label54: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_45) on <var_45:ArrayIterator[Option]> */
RET_LABEL55:(void)0;
}
}
RET_LABEL:;
}
/* method opts#OptionContext#parse for (self: OptionContext, Collection[String]) */
void opts___opts__OptionContext___parse(val* self, val* p0) {
val* var_argv /* var argv: Collection[String] */;
val* var /* : Iterator[nullable Object] */;
val* var_it /* var it: Iterator[String] */;
var_argv = p0;
{
var = ((val* (*)(val* self))(var_argv->class->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_argv) /* iterator on <var_argv:Collection[String]>*/;
}
var_it = var;
{
opts___opts__OptionContext___parse_intern(self, var_it); /* Direct call opts#OptionContext#parse_intern on <self:OptionContext>*/
}
RET_LABEL:;
}
/* method opts#OptionContext#options_before_rest for (self: OptionContext): Bool */
short int opts___opts__OptionContext___options_before_rest(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_opts__OptionContext___options_before_rest].s; /* _options_before_rest on <self:OptionContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method opts#OptionContext#parse_intern for (self: OptionContext, Iterator[String]) */
void opts___opts__OptionContext___parse_intern(val* self, val* p0) {
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
val* var12 /* : Array[nullable Object] */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : SequenceRead[Char] */;
char var16 /* : Char */;
long var17 /* : Int */;
val* var18 /* : nullable Object */;
long var19 /* : Int */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var_23 /* var : Bool */;
long var24 /* : Int */;
long var25 /* : Int */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var_next_called /* var next_called: Bool */;
long var31 /* : Int */;
long var_i /* var i: Int */;
long var32 /* : Int */;
long var_33 /* var : Int */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
short int var40 /* : Bool */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
long var44 /* : Int */;
val* var45 /* : FlatString */;
val* var46 /* : SequenceRead[Char] */;
val* var47 /* : nullable Object */;
val* var48 /* : String */;
char var49 /* : Char */;
val* var50 /* : String */;
val* var_short_opt /* var short_opt: String */;
val* var51 /* : HashMap[String, Option] */;
val* var53 /* : HashMap[String, Option] */;
short int var54 /* : Bool */;
val* var55 /* : HashMap[String, Option] */;
val* var57 /* : HashMap[String, Option] */;
val* var58 /* : nullable Object */;
val* var_option /* var option: Option */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
short int var62 /* : Bool */;
long var63 /* : Int */;
long var64 /* : Int */;
short int var65 /* : Bool */;
val* var66 /* : HashMap[String, Option] */;
val* var68 /* : HashMap[String, Option] */;
short int var69 /* : Bool */;
val* var70 /* : HashMap[String, Option] */;
val* var72 /* : HashMap[String, Option] */;
val* var73 /* : nullable Object */;
val* var_opt /* var opt: Option */;
val* var74 /* : nullable Object */;
short int var75 /* : Bool */;
short int var77 /* : Bool */;
val* var78 /* : Array[nullable Object] */;
short int var79 /* : Bool */;
val* var81 /* : Array[Option] */;
val* var83 /* : Array[Option] */;
val* var_84 /* var : Array[Option] */;
val* var85 /* : ArrayIterator[nullable Object] */;
val* var_86 /* var : ArrayIterator[Option] */;
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
opts___opts__OptionContext___build(self); /* Direct call opts#OptionContext#build on <self:OptionContext>*/
}
{
{ /* Inline opts#OptionContext#rest (self) on <self:OptionContext> */
var3 = self->attrs[COLOR_opts__OptionContext___rest].val; /* _rest on <self:OptionContext> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _rest");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 267);
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
var5 = ((short int (*)(val* self))(var_it->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_it) /* is_ok on <var_it:Iterator[String]>*/;
}
var4 = var5;
} else {
var4 = var_;
}
if (var4){
{
var6 = ((val* (*)(val* self))(var_it->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_it) /* item on <var_it:Iterator[String]>*/;
}
var_str = var6;
if (varonce) {
var7 = varonce;
} else {
var8 = "--";
var9 = 2;
var10 = standard___standard__NativeString___to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
{
var11 = ((short int (*)(val* self, val* p0))(var_str->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_str, var7) /* == on <var_str:String>*/;
}
if (var11){
{
((void (*)(val* self))(var_it->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_it) /* next on <var_it:Iterator[String]>*/;
}
{
var12 = standard__array___Iterator___to_a(var_it);
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add_all(var_rest, var12); /* Direct call array#Array#add_all on <var_rest:Array[String]>*/
}
var13 = 0;
var_parseargs = var13;
} else {
{
var15 = ((val* (*)(val* self))(var_str->class->vft[COLOR_standard__string__Text__chars]))(var_str) /* chars on <var_str:String>*/;
}
var16 = '-';
{
var18 = BOX_standard__Char(var16); /* autobox from Char to nullable Object */
var17 = ((long (*)(val* self, val* p0))(var15->class->vft[COLOR_standard__abstract_collection__SequenceRead__last_index_of]))(var15, var18) /* last_index_of on <var15:SequenceRead[Char]>*/;
}
var19 = 0;
{
{ /* Inline kernel#Int#== (var17,var19) on <var17:Int> */
var22 = var17 == var19;
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var_23 = var20;
if (var20){
{
var24 = ((long (*)(val* self))(var_str->class->vft[COLOR_standard__string__Text__length]))(var_str) /* length on <var_str:String>*/;
}
var25 = 2;
{
{ /* Inline kernel#Int#> (var24,var25) on <var24:Int> */
/* Covariant cast for argument 0 (i) <var25:Int> isa OTHER */
/* <var25:Int> isa OTHER */
var28 = 1; /* easy <var25:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var29 = var24 > var25;
var26 = var29;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var14 = var26;
} else {
var14 = var_23;
}
if (var14){
var30 = 0;
var_next_called = var30;
var31 = 1;
var_i = var31;
{
var32 = ((long (*)(val* self))(var_str->class->vft[COLOR_standard__string__Text__length]))(var_str) /* length on <var_str:String>*/;
}
var_33 = var32;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_33) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_33:Int> isa OTHER */
/* <var_33:Int> isa OTHER */
var36 = 1; /* easy <var_33:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var40 = var_i < var_33;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
if (var34){
if (varonce41) {
var42 = varonce41;
} else {
var43 = "-";
var44 = 1;
var45 = standard___standard__NativeString___to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
{
var46 = ((val* (*)(val* self))(var_str->class->vft[COLOR_standard__string__Text__chars]))(var_str) /* chars on <var_str:String>*/;
}
{
var47 = ((val* (*)(val* self, long p0))(var46->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var46, var_i) /* [] on <var46:SequenceRead[Char]>*/;
}
{
var49 = ((struct instance_standard__Char*)var47)->value; /* autounbox from nullable Object to Char */;
var48 = standard__string___Char___Object__to_s(var49);
}
{
var50 = ((val* (*)(val* self, val* p0))(var42->class->vft[COLOR_standard__string__String___43d]))(var42, var48) /* + on <var42:String>*/;
}
var_short_opt = var50;
{
{ /* Inline opts#OptionContext#optmap (self) on <self:OptionContext> */
var53 = self->attrs[COLOR_opts__OptionContext___optmap].val; /* _optmap on <self:OptionContext> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _optmap");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 273);
show_backtrace(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
var54 = standard___standard__MapRead___has_key(var51, var_short_opt);
}
if (var54){
{
{ /* Inline opts#OptionContext#optmap (self) on <self:OptionContext> */
var57 = self->attrs[COLOR_opts__OptionContext___optmap].val; /* _optmap on <self:OptionContext> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _optmap");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 273);
show_backtrace(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
var58 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var55, var_short_opt);
}
var_option = var58;
/* <var_option:Option> isa OptionParameter */
cltype60 = type_opts__OptionParameter.color;
idtype61 = type_opts__OptionParameter.id;
if(cltype60 >= var_option->type->table_size) {
var59 = 0;
} else {
var59 = var_option->type->type_table[cltype60] == idtype61;
}
if (var59){
{
((void (*)(val* self))(var_it->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_it) /* next on <var_it:Iterator[String]>*/;
}
var62 = 1;
var_next_called = var62;
} else {
}
{
((void (*)(val* self, val* p0))(var_option->class->vft[COLOR_opts__Option__read_param]))(var_option, var_it) /* read_param on <var_option:Option>*/;
}
} else {
}
var63 = 1;
{
var64 = standard___standard__Int___Discrete__successor(var_i, var63);
}
var_i = var64;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var65 = !var_next_called;
if (var65){
{
((void (*)(val* self))(var_it->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_it) /* next on <var_it:Iterator[String]>*/;
}
} else {
}
} else {
{
{ /* Inline opts#OptionContext#optmap (self) on <self:OptionContext> */
var68 = self->attrs[COLOR_opts__OptionContext___optmap].val; /* _optmap on <self:OptionContext> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _optmap");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 273);
show_backtrace(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
var69 = standard___standard__MapRead___has_key(var66, var_str);
}
if (var69){
{
{ /* Inline opts#OptionContext#optmap (self) on <self:OptionContext> */
var72 = self->attrs[COLOR_opts__OptionContext___optmap].val; /* _optmap on <self:OptionContext> */
if (unlikely(var72 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _optmap");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 273);
show_backtrace(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
{
var73 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var70, var_str);
}
var_opt = var73;
{
((void (*)(val* self))(var_it->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_it) /* next on <var_it:Iterator[String]>*/;
}
{
((void (*)(val* self, val* p0))(var_opt->class->vft[COLOR_opts__Option__read_param]))(var_opt, var_it) /* read_param on <var_opt:Option>*/;
}
} else {
{
var74 = ((val* (*)(val* self))(var_it->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_it) /* item on <var_it:Iterator[String]>*/;
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_rest, var74); /* Direct call array#Array#add on <var_rest:Array[String]>*/
}
{
((void (*)(val* self))(var_it->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_it) /* next on <var_it:Iterator[String]>*/;
}
{
{ /* Inline opts#OptionContext#options_before_rest (self) on <self:OptionContext> */
var77 = self->attrs[COLOR_opts__OptionContext___options_before_rest].s; /* _options_before_rest on <self:OptionContext> */
var75 = var77;
RET_LABEL76:(void)0;
}
}
if (var75){
{
var78 = standard__array___Iterator___to_a(var_it);
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add_all(var_rest, var78); /* Direct call array#Array#add_all on <var_rest:Array[String]>*/
}
var79 = 0;
var_parseargs = var79;
} else {
}
}
}
}
} else {
goto BREAK_label80;
}
}
BREAK_label80: (void)0;
{
{ /* Inline opts#OptionContext#options (self) on <self:OptionContext> */
var83 = self->attrs[COLOR_opts__OptionContext___options].val; /* _options on <self:OptionContext> */
if (unlikely(var83 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _options");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 264);
show_backtrace(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
var_84 = var81;
{
var85 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_84);
}
var_86 = var85;
for(;;) {
{
var87 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_86);
}
if (var87){
{
var88 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_86);
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
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 270);
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
var106 = standard___standard__NativeString___to_s_with_length(var104, var105);
var103 = var106;
varonce102 = var103;
}
{
{ /* Inline opts#Option#names (var_opt89) on <var_opt89:Option> */
var109 = var_opt89->attrs[COLOR_opts__Option___names].val; /* _names on <var_opt89:Option> */
if (unlikely(var109 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 19);
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
var114 = standard___standard__NativeString___to_s_with_length(var112, var113);
var111 = var114;
varonce110 = var111;
}
{
var115 = standard__string___Collection___join(var107, var111);
}
if (varonce116) {
var117 = varonce116;
} else {
var118 = " not found.";
var119 = 11;
var120 = standard___standard__NativeString___to_s_with_length(var118, var119);
var117 = var120;
varonce116 = var117;
}
var121 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var121 = array_instance Array[Object] */
var122 = 3;
var123 = NEW_standard__NativeArray(var122, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var123)->values[0] = (val*) var103;
((struct instance_standard__NativeArray*)var123)->values[1] = (val*) var115;
((struct instance_standard__NativeArray*)var123)->values[2] = (val*) var117;
{
((void (*)(val* self, val* p0, long p1))(var121->class->vft[COLOR_standard__array__Array__with_native]))(var121, var123, var122) /* with_native on <var121:Array[Object]>*/;
}
}
{
var124 = ((val* (*)(val* self))(var121->class->vft[COLOR_standard__string__Object__to_s]))(var121) /* to_s on <var121:Array[Object]>*/;
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var99, var124); /* Direct call array#Array#add on <var99:Array[String]>*/
}
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_86); /* Direct call array#ArrayIterator#next on <var_86:ArrayIterator[Option]>*/
}
} else {
goto BREAK_label125;
}
}
BREAK_label125: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_86) on <var_86:ArrayIterator[Option]> */
RET_LABEL126:(void)0;
}
}
RET_LABEL:;
}
/* method opts#OptionContext#build for (self: OptionContext) */
void opts___opts__OptionContext___build(val* self) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 264);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_ = var;
{
var3 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_4 = var3;
for(;;) {
{
var5 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_4);
}
if (var5){
{
var6 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_4);
}
var_o = var6;
{
{ /* Inline opts#Option#names (var_o) on <var_o:Option> */
var9 = var_o->attrs[COLOR_opts__Option___names].val; /* _names on <var_o:Option> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 19);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_10 = var7;
{
var11 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_10);
}
var_12 = var11;
for(;;) {
{
var13 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_12);
}
if (var13){
{
var14 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_12);
}
var_n = var14;
{
{ /* Inline opts#OptionContext#optmap (self) on <self:OptionContext> */
var17 = self->attrs[COLOR_opts__OptionContext___optmap].val; /* _optmap on <self:OptionContext> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _optmap");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 273);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var15, var_n, var_o); /* Direct call hash_collection#HashMap#[]= on <var15:HashMap[String, Option]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_12); /* Direct call array#ArrayIterator#next on <var_12:ArrayIterator[String]>*/
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
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_4); /* Direct call array#ArrayIterator#next on <var_4:ArrayIterator[Option]>*/
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
/* method opts#OptionContext#get_errors for (self: OptionContext): Array[String] */
val* opts___opts__OptionContext___get_errors(val* self) {
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
var1 = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[String]>*/
}
var_errors = var1;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add_all(var_errors, var_errors); /* Direct call array#Array#add_all on <var_errors:Array[String]>*/
}
{
{ /* Inline opts#OptionContext#options (self) on <self:OptionContext> */
var4 = self->attrs[COLOR_opts__OptionContext___options].val; /* _options on <self:OptionContext> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _options");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 264);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
var_ = var2;
{
var5 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_6 = var5;
for(;;) {
{
var7 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_6);
}
if (var7){
{
var8 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_6);
}
var_o = var8;
{
{ /* Inline opts#Option#errors (var_o) on <var_o:Option> */
var11 = var_o->attrs[COLOR_opts__Option___errors].val; /* _errors on <var_o:Option> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _errors");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 28);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_12 = var9;
{
var13 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_12);
}
var_14 = var13;
for(;;) {
{
var15 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_14);
}
if (var15){
{
var16 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_14);
}
var_e = var16;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_errors, var_e); /* Direct call array#Array#add on <var_errors:Array[String]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_14); /* Direct call array#ArrayIterator#next on <var_14:ArrayIterator[String]>*/
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
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_6); /* Direct call array#ArrayIterator#next on <var_6:ArrayIterator[Option]>*/
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
