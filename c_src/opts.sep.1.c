#include "opts.sep.0.h"
/* method opts#Option#names for (self: Option): Array[String] */
val* opts___opts__Option___names(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_opts__Option___names].val; /* _names on <self:Option> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 19);
fatal_exit(1);
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
fatal_exit(1);
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
fatal_exit(1);
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
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 40);
fatal_exit(1);
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
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 43);
fatal_exit(1);
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
if(cltype >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var = 0;
} else {
var = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 46);
fatal_exit(1);
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
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : Array[String] */;
val* var5 /* : Array[nullable Object] */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const struct type* type_struct12;
short int is_nullable13;
const char* var_class_name14;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const struct type* type_struct19;
short int is_nullable20;
const char* var_class_name21;
/* Covariant cast for argument 1 (default) <p1:nullable Object> isa VALUE */
/* <p1:nullable Object> isa VALUE */
type_struct = self->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p1 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var = 0;
} else {
var = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 51);
fatal_exit(1);
}
var_help = p0;
var_default = p1;
var_names = p2;
if (var_names == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = standard___standard__Array___standard__kernel__Object___61d_61d(var_names, ((val*)NULL));
var1 = var2;
}
if (var1){
var3 = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[String]>*/
}
{
{ /* Inline opts#Option#names= (self,var3) on <self:Option> */
self->attrs[COLOR_opts__Option___names].val = var3; /* _names on <self:Option> */
RET_LABEL4:(void)0;
}
}
} else {
{
var5 = standard__array___Collection___to_a(var_names);
}
{
{ /* Inline opts#Option#names= (self,var5) on <self:Option> */
self->attrs[COLOR_opts__Option___names].val = var5; /* _names on <self:Option> */
RET_LABEL6:(void)0;
}
}
}
{
{ /* Inline opts#Option#helptext= (self,var_help) on <self:Option> */
self->attrs[COLOR_opts__Option___helptext].val = var_help; /* _helptext on <self:Option> */
RET_LABEL7:(void)0;
}
}
{
{ /* Inline opts#Option#default_value= (self,var_default) on <self:Option> */
/* Covariant cast for argument 0 (default_value) <var_default:nullable Object> isa VALUE */
/* <var_default:nullable Object> isa VALUE */
type_struct12 = self->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype10 = type_struct12->color;
idtype11 = type_struct12->id;
is_nullable13 = type_struct12->is_nullable;
if(var_default == NULL) {
var9 = is_nullable13;
} else {
if(cltype10 >= (((long)var_default&3)?type_info[((long)var_default&3)]:var_default->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_default&3)?type_info[((long)var_default&3)]:var_default->type)->type_table[cltype10] == idtype11;
}
}
if (unlikely(!var9)) {
var_class_name14 = var_default == NULL ? "null" : (((long)var_default&3)?type_info[((long)var_default&3)]:var_default->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 43);
fatal_exit(1);
}
self->attrs[COLOR_opts__Option___default_value].val = var_default; /* _default_value on <self:Option> */
RET_LABEL8:(void)0;
}
}
{
{ /* Inline opts#Option#value= (self,var_default) on <self:Option> */
/* Covariant cast for argument 0 (value) <var_default:nullable Object> isa VALUE */
/* <var_default:nullable Object> isa VALUE */
type_struct19 = self->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype17 = type_struct19->color;
idtype18 = type_struct19->id;
is_nullable20 = type_struct19->is_nullable;
if(var_default == NULL) {
var16 = is_nullable20;
} else {
if(cltype17 >= (((long)var_default&3)?type_info[((long)var_default&3)]:var_default->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var_default&3)?type_info[((long)var_default&3)]:var_default->type)->type_table[cltype17] == idtype18;
}
}
if (unlikely(!var16)) {
var_class_name21 = var_default == NULL ? "null" : (((long)var_default&3)?type_info[((long)var_default&3)]:var_default->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 40);
fatal_exit(1);
}
self->attrs[COLOR_opts__Option___value].val = var_default; /* _value on <self:Option> */
RET_LABEL15:(void)0;
}
}
RET_LABEL:;
}
/* method opts#Option#to_s for (self: Option): String */
val* opts___opts__Option___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
{
var1 = opts___opts__Option___pretty(self, 2l);
}
var = var1;
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
val* var4 /* : FlatString */;
val* var_text /* var text: FlatBuffer */;
val* var5 /* : Array[String] */;
val* var7 /* : Array[String] */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : FlatString */;
val* var12 /* : String */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : FlatString */;
long var17 /* : Int */;
long var19 /* : Int */;
long var20 /* : Int */;
short int var22 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var23 /* : Int */;
long var_rest /* var rest: Int */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
short int var30 /* : Bool */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
val* var34 /* : FlatString */;
val* var35 /* : String */;
val* var36 /* : String */;
val* var38 /* : String */;
val* var39 /* : String */;
var_off = p0;
var1 = NEW_standard__FlatBuffer(&type_standard__FlatBuffer);
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "  ";
var4 = standard___standard__NativeString___to_s_with_length(var3, 2l);
var2 = var4;
varonce = var2;
}
{
standard___standard__FlatBuffer___from(var1, var2); /* Direct call string#FlatBuffer#from on <var1:FlatBuffer>*/
}
var_text = var1;
{
{ /* Inline opts#Option#names (self) on <self:Option> */
var7 = self->attrs[COLOR_opts__Option___names].val; /* _names on <self:Option> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 19);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = ", ";
var11 = standard___standard__NativeString___to_s_with_length(var10, 2l);
var9 = var11;
varonce8 = var9;
}
{
var12 = standard__string___Collection___join(var5, var9);
}
{
standard___standard__FlatBuffer___Buffer__append(var_text, var12); /* Direct call string#FlatBuffer#append on <var_text:FlatBuffer>*/
}
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "  ";
var16 = standard___standard__NativeString___to_s_with_length(var15, 2l);
var14 = var16;
varonce13 = var14;
}
{
standard___standard__FlatBuffer___Buffer__append(var_text, var14); /* Direct call string#FlatBuffer#append on <var_text:FlatBuffer>*/
}
{
{ /* Inline string#FlatText#length (var_text) on <var_text:FlatBuffer> */
var19 = var_text->attrs[COLOR_standard__string__FlatText___length].l; /* _length on <var_text:FlatBuffer> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_off,var17) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var17:Int> isa OTHER */
/* <var17:Int> isa OTHER */
var22 = 1; /* easy <var17:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var23 = var_off - var17;
var20 = var23;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var_rest = var20;
{
{ /* Inline kernel#Int#> (var_rest,0l) on <var_rest:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var26 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var30 = var_rest > 0l;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
if (var24){
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = " ";
var34 = standard___standard__NativeString___to_s_with_length(var33, 1l);
var32 = var34;
varonce31 = var32;
}
{
var35 = ((val*(*)(val* self, long p0))(var32->class->vft[COLOR_standard__string__String___42d]))(var32, var_rest); /* * on <var32:String>*/
}
{
standard___standard__FlatBuffer___Buffer__append(var_text, var35); /* Direct call string#FlatBuffer#append on <var_text:FlatBuffer>*/
}
} else {
}
{
{ /* Inline opts#Option#helptext (self) on <self:Option> */
var38 = self->attrs[COLOR_opts__Option___helptext].val; /* _helptext on <self:Option> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _helptext");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 25);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
standard___standard__FlatBuffer___Buffer__append(var_text, var36); /* Direct call string#FlatBuffer#append on <var_text:FlatBuffer>*/
}
{
var39 = standard___standard__FlatBuffer___Object__to_s(var_text);
}
var = var39;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method opts#Option#read_param for (self: Option, Iterator[String]) */
void opts___opts__Option___read_param(val* self, val* p0) {
val* var_it /* var it: Iterator[String] */;
var_it = p0;
{
{ /* Inline opts#Option#read= (self,1) on <self:Option> */
self->attrs[COLOR_opts__Option___read].s = 1; /* _read on <self:Option> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method opts#OptionBool#init for (self: OptionBool, String, Array[String]) */
void opts___opts__OptionBool___init(val* self, val* p0, val* p1) {
val* var_help /* var help: String */;
val* var_names /* var names: Array[String] */;
val* var /* : nullable Object */;
var_help = p0;
var_names = p1;
{
var = (val*)((long)(0)<<2|3);
opts___opts__Option___init(self, var_help, var, var_names); /* Direct call opts#Option#init on <self:OptionBool>*/
}
RET_LABEL:;
}
/* method opts#OptionBool#read_param for (self: OptionBool, Iterator[String]) */
void opts___opts__OptionBool___Option__read_param(val* self, val* p0) {
val* var_it /* var it: Iterator[String] */;
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var2 /* : nullable Object */;
var_it = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_opts___opts__OptionBool___Option__read_param]))(self, p0); /* read_param on <self:OptionBool>*/
}
{
{ /* Inline opts#Option#value= (self,1) on <self:OptionBool> */
/* Covariant cast for argument 0 (value) <1:Bool> isa VALUE */
/* <1:Bool> isa VALUE */
type_struct = self->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (&type_standard__Bool)->table_size) {
var = 0;
} else {
var = (&type_standard__Bool)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = type_standard__Bool.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 40);
fatal_exit(1);
}
var2 = (val*)((long)(1)<<2|3);
self->attrs[COLOR_opts__Option___value].val = var2; /* _value on <self:OptionBool> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method opts#OptionCount#init for (self: OptionCount, String, Array[String]) */
void opts___opts__OptionCount___init(val* self, val* p0, val* p1) {
val* var_help /* var help: String */;
val* var_names /* var names: Array[String] */;
val* var /* : nullable Object */;
var_help = p0;
var_names = p1;
{
var = (val*)(0l<<2|1);
opts___opts__Option___init(self, var_help, var, var_names); /* Direct call opts#Option#init on <self:OptionCount>*/
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
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const struct type* type_struct;
const char* var_class_name12;
val* var13 /* : nullable Object */;
var_it = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_opts___opts__OptionCount___Option__read_param]))(self, p0); /* read_param on <self:OptionCount>*/
}
var_ = self;
{
{ /* Inline opts#Option#value (var_) on <var_:OptionCount> */
var2 = var_->attrs[COLOR_opts__Option___value].val; /* _value on <var_:OptionCount> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var,1l) on <var:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var5 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var6 = (long)(var)>>2;
var7 = var6 + 1l;
var3 = var7;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline opts#Option#value= (var_,var3) on <var_:OptionCount> */
/* Covariant cast for argument 0 (value) <var3:Int> isa VALUE */
/* <var3:Int> isa VALUE */
type_struct = var_->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype10 = type_struct->color;
idtype11 = type_struct->id;
if(cltype10 >= (&type_standard__Int)->table_size) {
var9 = 0;
} else {
var9 = (&type_standard__Int)->type_table[cltype10] == idtype11;
}
if (unlikely(!var9)) {
var_class_name12 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 40);
fatal_exit(1);
}
var13 = (val*)(var3<<2|1);
var_->attrs[COLOR_opts__Option___value].val = var13; /* _value on <var_:OptionCount> */
RET_LABEL8:(void)0;
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
short int var9 /* : Bool */;
short int var11 /* : Bool */;
uint32_t var12 /* : Char */;
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
val* var24 /* : NativeArray[String] */;
static val* varonce;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
val* var28 /* : FlatString */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
val* var32 /* : FlatString */;
val* var33 /* : Array[String] */;
val* var35 /* : Array[String] */;
val* var36 /* : nullable Object */;
val* var37 /* : String */;
var_it = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_opts___opts__OptionParameter___Option__read_param]))(self, p0); /* read_param on <self:OptionParameter>*/
}
{
var1 = ((short int(*)(val* self))((((long)var_it&3)?class_info[((long)var_it&3)]:var_it->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_it); /* is_ok on <var_it:Iterator[String]>*/
}
var_ = var1;
if (var1){
{
var3 = ((val*(*)(val* self))((((long)var_it&3)?class_info[((long)var_it&3)]:var_it->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_it); /* item on <var_it:Iterator[String]>*/
}
{
var4 = standard___standard__Text___is_empty(var3);
}
var_5 = var4;
if (var4){
var2 = var_5;
} else {
{
var6 = ((val*(*)(val* self))((((long)var_it&3)?class_info[((long)var_it&3)]:var_it->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_it); /* item on <var_it:Iterator[String]>*/
}
{
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_standard__string__Text__chars]))(var6); /* chars on <var6:nullable Object(String)>*/
}
{
var8 = ((val*(*)(val* self))((((long)var7&3)?class_info[((long)var7&3)]:var7->class)->vft[COLOR_standard__abstract_collection__Collection__first]))(var7); /* first on <var7:SequenceRead[Char]>*/
}
{
{ /* Inline kernel#Char#!= (var8,'-') on <var8:nullable Object(Char)> */
var12 = (uint32_t)((long)(var8)>>2);
var11 = (var8 != NULL) && (var12 == '-');
var13 = !var11;
var9 = var13;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var2 = var9;
}
var = var2;
} else {
var = var_;
}
if (var){
{
var14 = ((val*(*)(val* self))((((long)var_it&3)?class_info[((long)var_it&3)]:var_it->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_it); /* item on <var_it:Iterator[String]>*/
}
{
var15 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_opts__OptionParameter__convert]))(self, var14); /* convert on <self:OptionParameter>*/
}
{
{ /* Inline opts#Option#value= (self,var15) on <self:OptionParameter> */
/* Covariant cast for argument 0 (value) <var15:nullable Object> isa VALUE */
/* <var15:nullable Object> isa VALUE */
type_struct = self->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(var15 == NULL) {
var17 = is_nullable;
} else {
if(cltype >= (((long)var15&3)?type_info[((long)var15&3)]:var15->type)->table_size) {
var17 = 0;
} else {
var17 = (((long)var15&3)?type_info[((long)var15&3)]:var15->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var17)) {
var_class_name = var15 == NULL ? "null" : (((long)var15&3)?type_info[((long)var15&3)]:var15->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 40);
fatal_exit(1);
}
self->attrs[COLOR_opts__Option___value].val = var15; /* _value on <self:OptionParameter> */
RET_LABEL16:(void)0;
}
}
{
((void(*)(val* self))((((long)var_it&3)?class_info[((long)var_it&3)]:var_it->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_it); /* next on <var_it:Iterator[String]>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 28);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var24 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "Parameter expected for option ";
var28 = standard___standard__NativeString___to_s_with_length(var27, 30l);
var26 = var28;
varonce25 = var26;
}
((struct instance_standard__NativeArray*)var24)->values[0]=var26;
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = ".";
var32 = standard___standard__NativeString___to_s_with_length(var31, 1l);
var30 = var32;
varonce29 = var30;
}
((struct instance_standard__NativeArray*)var24)->values[2]=var30;
} else {
var24 = varonce;
varonce = NULL;
}
{
{ /* Inline opts#Option#names (self) on <self:OptionParameter> */
var35 = self->attrs[COLOR_opts__Option___names].val; /* _names on <self:OptionParameter> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 19);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
var36 = standard___standard__SequenceRead___Collection__first(var33);
}
((struct instance_standard__NativeArray*)var24)->values[1]=var36;
{
var37 = ((val*(*)(val* self))(var24->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var24); /* native_to_s on <var24:NativeArray[String]>*/
}
varonce = var24;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var21, var37); /* Direct call array#Array#add on <var21:Array[String]>*/
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
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
var_help = p0;
var_names = p1;
/* <((val*)NULL):null> isa VALUE */
type_struct = self->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(((val*)NULL) == NULL) {
var = is_nullable;
} else {
if(cltype >= ((val*)NULL)->type->table_size) {
var = 0;
} else {
var = ((val*)NULL)->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = ((val*)NULL) == NULL ? "null" : ((val*)NULL)->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 172);
fatal_exit(1);
}
{
opts___opts__Option___init(self, var_help, ((val*)NULL), var_names); /* Direct call opts#Option#init on <self:OptionString>*/
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
fatal_exit(1);
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
var = (val*)(var_default<<2|1);
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
var2 = (val*)(var1<<2|1);
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
fatal_exit(1);
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
fatal_exit(1);
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
fatal_exit(1);
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
fatal_exit(1);
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
fatal_exit(1);
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
fatal_exit(1);
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
fatal_exit(1);
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
fatal_exit(1);
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
fatal_exit(1);
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
fatal_exit(1);
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
fatal_exit(1);
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
long var_lmax /* var lmax: Int */;
val* var /* : Array[Option] */;
val* var2 /* : Array[Option] */;
val* var_ /* var : Array[Option] */;
val* var3 /* : ArrayIterator[nullable Object] */;
val* var_4 /* var : ArrayIterator[Option] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_i /* var i: Option */;
long var_l /* var l: Int */;
val* var7 /* : Array[String] */;
val* var9 /* : Array[String] */;
val* var_10 /* var : Array[String] */;
val* var11 /* : ArrayIterator[nullable Object] */;
val* var_12 /* var : ArrayIterator[String] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_n /* var n: String */;
long var15 /* : Int */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var19 /* : Int */;
long var20 /* : Int */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
long var26 /* : Int */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
short int var33 /* : Bool */;
val* var35 /* : Array[Option] */;
val* var37 /* : Array[Option] */;
val* var_38 /* var : Array[Option] */;
val* var39 /* : ArrayIterator[nullable Object] */;
val* var_40 /* var : ArrayIterator[Option] */;
short int var41 /* : Bool */;
val* var42 /* : nullable Object */;
val* var_i43 /* var i: Option */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
val* var48 /* : Sys */;
val* var49 /* : String */;
var_lmax = 1l;
{
{ /* Inline opts#OptionContext#options (self) on <self:OptionContext> */
var2 = self->attrs[COLOR_opts__OptionContext___options].val; /* _options on <self:OptionContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _options");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 264);
fatal_exit(1);
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
var_i = var6;
var_l = 3l;
{
{ /* Inline opts#Option#names (var_i) on <var_i:Option> */
var9 = var_i->attrs[COLOR_opts__Option___names].val; /* _names on <var_i:Option> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 19);
fatal_exit(1);
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
var15 = ((long(*)(val* self))(var_n->class->vft[COLOR_standard__string__Text__length]))(var_n); /* length on <var_n:String>*/
}
{
{ /* Inline kernel#Int#+ (var15,2l) on <var15:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var18 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var19 = var15 + 2l;
var16 = var19;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_l,var16) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var16:Int> isa OTHER */
/* <var16:Int> isa OTHER */
var22 = 1; /* easy <var16:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var26 = var_l + var16;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var_l = var20;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_12); /* Direct call array#ArrayIterator#next on <var_12:ArrayIterator[String]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_12); /* Direct call array#ArrayIterator#finish on <var_12:ArrayIterator[String]>*/
}
{
{ /* Inline kernel#Int#< (var_lmax,var_l) on <var_lmax:Int> */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var29 = 1; /* easy <var_l:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var33 = var_lmax < var_l;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
if (var27){
var_lmax = var_l;
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_4); /* Direct call array#ArrayIterator#next on <var_4:ArrayIterator[Option]>*/
}
} else {
goto BREAK_label34;
}
}
BREAK_label34: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_4); /* Direct call array#ArrayIterator#finish on <var_4:ArrayIterator[Option]>*/
}
{
{ /* Inline opts#OptionContext#options (self) on <self:OptionContext> */
var37 = self->attrs[COLOR_opts__OptionContext___options].val; /* _options on <self:OptionContext> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _options");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 264);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
var_38 = var35;
{
var39 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_38);
}
var_40 = var39;
for(;;) {
{
var41 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_40);
}
if (var41){
{
var42 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_40);
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
var48 = glob_sys;
{
var49 = opts___opts__Option___pretty(var_i43, var_lmax);
}
{
standard__file___Sys___print(var48, var49); /* Direct call file#Sys#print on <var48:Sys>*/
}
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_40); /* Direct call array#ArrayIterator#next on <var_40:ArrayIterator[Option]>*/
}
} else {
goto BREAK_label50;
}
}
BREAK_label50: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_40); /* Direct call array#ArrayIterator#finish on <var_40:ArrayIterator[Option]>*/
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
var = ((val*(*)(val* self))((((long)var_argv&3)?class_info[((long)var_argv&3)]:var_argv->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_argv); /* iterator on <var_argv:Collection[String]>*/
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
short int var_parseargs /* var parseargs: Bool */;
val* var /* : Array[String] */;
val* var2 /* : Array[String] */;
val* var_rest /* var rest: Array[String] */;
short int var3 /* : Bool */;
short int var_ /* var : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_str /* var str: String */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : FlatString */;
short int var9 /* : Bool */;
val* var10 /* : Array[nullable Object] */;
short int var11 /* : Bool */;
val* var12 /* : SequenceRead[Char] */;
val* var13 /* : nullable Object */;
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var_18 /* var : Bool */;
long var19 /* : Int */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var23 /* : Bool */;
short int var_next_called /* var next_called: Bool */;
long var_i /* var i: Int */;
long var24 /* : Int */;
long var_25 /* var : Int */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
short int var32 /* : Bool */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
val* var36 /* : FlatString */;
val* var37 /* : SequenceRead[Char] */;
val* var38 /* : nullable Object */;
val* var39 /* : String */;
uint32_t var40 /* : Char */;
val* var41 /* : String */;
val* var_short_opt /* var short_opt: String */;
val* var42 /* : HashMap[String, Option] */;
val* var44 /* : HashMap[String, Option] */;
short int var45 /* : Bool */;
val* var46 /* : HashMap[String, Option] */;
val* var48 /* : HashMap[String, Option] */;
val* var49 /* : nullable Object */;
val* var_option /* var option: Option */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
long var53 /* : Int */;
short int var54 /* : Bool */;
val* var55 /* : HashMap[String, Option] */;
val* var57 /* : HashMap[String, Option] */;
short int var58 /* : Bool */;
val* var59 /* : HashMap[String, Option] */;
val* var61 /* : HashMap[String, Option] */;
val* var62 /* : nullable Object */;
val* var_opt /* var opt: Option */;
val* var63 /* : nullable Object */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
val* var67 /* : Array[nullable Object] */;
val* var69 /* : Array[Option] */;
val* var71 /* : Array[Option] */;
val* var_72 /* var : Array[Option] */;
val* var73 /* : ArrayIterator[nullable Object] */;
val* var_74 /* var : ArrayIterator[Option] */;
short int var75 /* : Bool */;
val* var76 /* : nullable Object */;
val* var_opt77 /* var opt: Option */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
short int var81 /* : Bool */;
short int var_82 /* var : Bool */;
short int var83 /* : Bool */;
short int var85 /* : Bool */;
short int var86 /* : Bool */;
val* var87 /* : Array[String] */;
val* var89 /* : Array[String] */;
val* var91 /* : NativeArray[String] */;
static val* varonce90;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : NativeString */;
val* var95 /* : FlatString */;
static val* varonce96;
val* var97 /* : String */;
char* var98 /* : NativeString */;
val* var99 /* : FlatString */;
val* var100 /* : Array[String] */;
val* var102 /* : Array[String] */;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : NativeString */;
val* var106 /* : FlatString */;
val* var107 /* : String */;
val* var108 /* : String */;
var_it = p0;
var_parseargs = 1;
{
opts___opts__OptionContext___build(self); /* Direct call opts#OptionContext#build on <self:OptionContext>*/
}
{
{ /* Inline opts#OptionContext#rest (self) on <self:OptionContext> */
var2 = self->attrs[COLOR_opts__OptionContext___rest].val; /* _rest on <self:OptionContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _rest");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 267);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_rest = var;
for(;;) {
var_ = var_parseargs;
if (var_parseargs){
{
var4 = ((short int(*)(val* self))((((long)var_it&3)?class_info[((long)var_it&3)]:var_it->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_it); /* is_ok on <var_it:Iterator[String]>*/
}
var3 = var4;
} else {
var3 = var_;
}
if (var3){
{
var5 = ((val*(*)(val* self))((((long)var_it&3)?class_info[((long)var_it&3)]:var_it->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_it); /* item on <var_it:Iterator[String]>*/
}
var_str = var5;
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "--";
var8 = standard___standard__NativeString___to_s_with_length(var7, 2l);
var6 = var8;
varonce = var6;
}
{
var9 = ((short int(*)(val* self, val* p0))(var_str->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_str, var6); /* == on <var_str:String>*/
}
if (var9){
{
((void(*)(val* self))((((long)var_it&3)?class_info[((long)var_it&3)]:var_it->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_it); /* next on <var_it:Iterator[String]>*/
}
{
var10 = standard__array___Iterator___to_a(var_it);
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add_all(var_rest, var10); /* Direct call array#Array#add_all on <var_rest:Array[String]>*/
}
var_parseargs = 0;
} else {
{
var12 = ((val*(*)(val* self))(var_str->class->vft[COLOR_standard__string__Text__chars]))(var_str); /* chars on <var_str:String>*/
}
{
var13 = (val*)((long)('-')<<2|2);
var14 = ((long(*)(val* self, val* p0))((((long)var12&3)?class_info[((long)var12&3)]:var12->class)->vft[COLOR_standard__abstract_collection__SequenceRead__last_index_of]))(var12, var13); /* last_index_of on <var12:SequenceRead[Char]>*/
}
{
{ /* Inline kernel#Int#== (var14,0l) on <var14:Int> */
var17 = var14 == 0l;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var_18 = var15;
if (var15){
{
var19 = ((long(*)(val* self))(var_str->class->vft[COLOR_standard__string__Text__length]))(var_str); /* length on <var_str:String>*/
}
{
{ /* Inline kernel#Int#> (var19,2l) on <var19:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var22 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var23 = var19 > 2l;
var20 = var23;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var11 = var20;
} else {
var11 = var_18;
}
if (var11){
var_next_called = 0;
var_i = 1l;
{
var24 = ((long(*)(val* self))(var_str->class->vft[COLOR_standard__string__Text__length]))(var_str); /* length on <var_str:String>*/
}
var_25 = var24;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_25) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_25:Int> isa OTHER */
/* <var_25:Int> isa OTHER */
var28 = 1; /* easy <var_25:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var32 = var_i < var_25;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
if (var26){
if (likely(varonce33!=NULL)) {
var34 = varonce33;
} else {
var35 = "-";
var36 = standard___standard__NativeString___to_s_with_length(var35, 1l);
var34 = var36;
varonce33 = var34;
}
{
var37 = ((val*(*)(val* self))(var_str->class->vft[COLOR_standard__string__Text__chars]))(var_str); /* chars on <var_str:String>*/
}
{
var38 = ((val*(*)(val* self, long p0))((((long)var37&3)?class_info[((long)var37&3)]:var37->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var37, var_i); /* [] on <var37:SequenceRead[Char]>*/
}
{
var40 = (uint32_t)((long)(var38)>>2);
var39 = standard__string___Char___Object__to_s(var40);
}
{
var41 = ((val*(*)(val* self, val* p0))(var34->class->vft[COLOR_standard__string__String___43d]))(var34, var39); /* + on <var34:String>*/
}
var_short_opt = var41;
{
{ /* Inline opts#OptionContext#optmap (self) on <self:OptionContext> */
var44 = self->attrs[COLOR_opts__OptionContext___optmap].val; /* _optmap on <self:OptionContext> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _optmap");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 273);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
var45 = standard___standard__HashMap___standard__abstract_collection__MapRead__has_key(var42, var_short_opt);
}
if (var45){
{
{ /* Inline opts#OptionContext#optmap (self) on <self:OptionContext> */
var48 = self->attrs[COLOR_opts__OptionContext___optmap].val; /* _optmap on <self:OptionContext> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _optmap");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 273);
fatal_exit(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
var49 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var46, var_short_opt);
}
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
{
((void(*)(val* self))((((long)var_it&3)?class_info[((long)var_it&3)]:var_it->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_it); /* next on <var_it:Iterator[String]>*/
}
var_next_called = 1;
} else {
}
{
((void(*)(val* self, val* p0))(var_option->class->vft[COLOR_opts__Option__read_param]))(var_option, var_it); /* read_param on <var_option:Option>*/
}
} else {
}
{
var53 = standard___standard__Int___Discrete__successor(var_i, 1l);
}
var_i = var53;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var54 = !var_next_called;
if (var54){
{
((void(*)(val* self))((((long)var_it&3)?class_info[((long)var_it&3)]:var_it->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_it); /* next on <var_it:Iterator[String]>*/
}
} else {
}
} else {
{
{ /* Inline opts#OptionContext#optmap (self) on <self:OptionContext> */
var57 = self->attrs[COLOR_opts__OptionContext___optmap].val; /* _optmap on <self:OptionContext> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _optmap");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 273);
fatal_exit(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
var58 = standard___standard__HashMap___standard__abstract_collection__MapRead__has_key(var55, var_str);
}
if (var58){
{
{ /* Inline opts#OptionContext#optmap (self) on <self:OptionContext> */
var61 = self->attrs[COLOR_opts__OptionContext___optmap].val; /* _optmap on <self:OptionContext> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _optmap");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 273);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
var62 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var59, var_str);
}
var_opt = var62;
{
((void(*)(val* self))((((long)var_it&3)?class_info[((long)var_it&3)]:var_it->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_it); /* next on <var_it:Iterator[String]>*/
}
{
((void(*)(val* self, val* p0))(var_opt->class->vft[COLOR_opts__Option__read_param]))(var_opt, var_it); /* read_param on <var_opt:Option>*/
}
} else {
{
var63 = ((val*(*)(val* self))((((long)var_it&3)?class_info[((long)var_it&3)]:var_it->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_it); /* item on <var_it:Iterator[String]>*/
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_rest, var63); /* Direct call array#Array#add on <var_rest:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_it&3)?class_info[((long)var_it&3)]:var_it->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_it); /* next on <var_it:Iterator[String]>*/
}
{
{ /* Inline opts#OptionContext#options_before_rest (self) on <self:OptionContext> */
var66 = self->attrs[COLOR_opts__OptionContext___options_before_rest].s; /* _options_before_rest on <self:OptionContext> */
var64 = var66;
RET_LABEL65:(void)0;
}
}
if (var64){
{
var67 = standard__array___Iterator___to_a(var_it);
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add_all(var_rest, var67); /* Direct call array#Array#add_all on <var_rest:Array[String]>*/
}
var_parseargs = 0;
} else {
}
}
}
}
} else {
goto BREAK_label68;
}
}
BREAK_label68: (void)0;
{
{ /* Inline opts#OptionContext#options (self) on <self:OptionContext> */
var71 = self->attrs[COLOR_opts__OptionContext___options].val; /* _options on <self:OptionContext> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _options");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 264);
fatal_exit(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
var_72 = var69;
{
var73 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_72);
}
var_74 = var73;
for(;;) {
{
var75 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_74);
}
if (var75){
{
var76 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_74);
}
var_opt77 = var76;
{
{ /* Inline opts#Option#mandatory (var_opt77) on <var_opt77:Option> */
var81 = var_opt77->attrs[COLOR_opts__Option___mandatory].s; /* _mandatory on <var_opt77:Option> */
var79 = var81;
RET_LABEL80:(void)0;
}
}
var_82 = var79;
if (var79){
{
{ /* Inline opts#Option#read (var_opt77) on <var_opt77:Option> */
var85 = var_opt77->attrs[COLOR_opts__Option___read].s; /* _read on <var_opt77:Option> */
var83 = var85;
RET_LABEL84:(void)0;
}
}
var86 = !var83;
var78 = var86;
} else {
var78 = var_82;
}
if (var78){
{
{ /* Inline opts#OptionContext#errors (self) on <self:OptionContext> */
var89 = self->attrs[COLOR_opts__OptionContext___errors].val; /* _errors on <self:OptionContext> */
if (unlikely(var89 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _errors");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 270);
fatal_exit(1);
}
var87 = var89;
RET_LABEL88:(void)0;
}
}
if (unlikely(varonce90==NULL)) {
var91 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce92!=NULL)) {
var93 = varonce92;
} else {
var94 = "Mandatory option ";
var95 = standard___standard__NativeString___to_s_with_length(var94, 17l);
var93 = var95;
varonce92 = var93;
}
((struct instance_standard__NativeArray*)var91)->values[0]=var93;
if (likely(varonce96!=NULL)) {
var97 = varonce96;
} else {
var98 = " not found.";
var99 = standard___standard__NativeString___to_s_with_length(var98, 11l);
var97 = var99;
varonce96 = var97;
}
((struct instance_standard__NativeArray*)var91)->values[2]=var97;
} else {
var91 = varonce90;
varonce90 = NULL;
}
{
{ /* Inline opts#Option#names (var_opt77) on <var_opt77:Option> */
var102 = var_opt77->attrs[COLOR_opts__Option___names].val; /* _names on <var_opt77:Option> */
if (unlikely(var102 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 19);
fatal_exit(1);
}
var100 = var102;
RET_LABEL101:(void)0;
}
}
if (likely(varonce103!=NULL)) {
var104 = varonce103;
} else {
var105 = ", ";
var106 = standard___standard__NativeString___to_s_with_length(var105, 2l);
var104 = var106;
varonce103 = var104;
}
{
var107 = standard__string___Collection___join(var100, var104);
}
((struct instance_standard__NativeArray*)var91)->values[1]=var107;
{
var108 = ((val*(*)(val* self))(var91->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var91); /* native_to_s on <var91:NativeArray[String]>*/
}
varonce90 = var91;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var87, var108); /* Direct call array#Array#add on <var87:Array[String]>*/
}
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_74); /* Direct call array#ArrayIterator#next on <var_74:ArrayIterator[Option]>*/
}
} else {
goto BREAK_label109;
}
}
BREAK_label109: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_74); /* Direct call array#ArrayIterator#finish on <var_74:ArrayIterator[Option]>*/
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
fatal_exit(1);
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
fatal_exit(1);
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
fatal_exit(1);
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
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_12); /* Direct call array#ArrayIterator#finish on <var_12:ArrayIterator[String]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_4); /* Direct call array#ArrayIterator#next on <var_4:ArrayIterator[Option]>*/
}
} else {
goto BREAK_label18;
}
}
BREAK_label18: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_4); /* Direct call array#ArrayIterator#finish on <var_4:ArrayIterator[Option]>*/
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
fatal_exit(1);
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
fatal_exit(1);
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
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_14); /* Direct call array#ArrayIterator#finish on <var_14:ArrayIterator[String]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_6); /* Direct call array#ArrayIterator#next on <var_6:ArrayIterator[Option]>*/
}
} else {
goto BREAK_label17;
}
}
BREAK_label17: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_6); /* Direct call array#ArrayIterator#finish on <var_6:ArrayIterator[Option]>*/
}
var = var_errors;
goto RET_LABEL;
RET_LABEL:;
return var;
}
