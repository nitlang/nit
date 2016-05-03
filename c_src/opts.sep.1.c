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
{
{ /* Inline kernel#Object#init (self) on <self:Option> */
RET_LABEL1:(void)0;
}
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
var2 = core___core__Array___core__kernel__Object___61d_61d(var_names, ((val*)NULL));
var1 = var2;
}
if (var1){
var3 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[String]>*/
}
{
{ /* Inline opts#Option#names= (self,var3) on <self:Option> */
self->attrs[COLOR_opts__Option___names].val = var3; /* _names on <self:Option> */
RET_LABEL4:(void)0;
}
}
} else {
{
var5 = core__array___Collection___to_a(var_names);
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
val* opts___opts__Option___core__abstract_text__Object__to_s(val* self) {
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
val* var4 /* : String */;
val* var_text /* var text: FlatBuffer */;
val* var5 /* : Array[String] */;
val* var7 /* : Array[String] */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : String */;
val* var12 /* : String */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : String */;
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
val* var34 /* : String */;
val* var35 /* : String */;
val* var36 /* : String */;
val* var38 /* : String */;
val* var39 /* : String */;
var_off = p0;
var1 = NEW_core__FlatBuffer(&type_core__FlatBuffer);
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "  ";
var4 = core__flat___NativeString___to_s_full(var3, 2l, 2l);
var2 = var4;
varonce = var2;
}
{
core___core__FlatBuffer___from(var1, var2); /* Direct call flat#FlatBuffer#from on <var1:FlatBuffer>*/
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
var11 = core__flat___NativeString___to_s_full(var10, 2l, 2l);
var9 = var11;
varonce8 = var9;
}
{
var12 = core__abstract_text___Collection___join(var5, var9);
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_text, var12); /* Direct call flat#FlatBuffer#append on <var_text:FlatBuffer>*/
}
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "  ";
var16 = core__flat___NativeString___to_s_full(var15, 2l, 2l);
var14 = var16;
varonce13 = var14;
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_text, var14); /* Direct call flat#FlatBuffer#append on <var_text:FlatBuffer>*/
}
{
{ /* Inline abstract_text#FlatText#length (var_text) on <var_text:FlatBuffer> */
var19 = var_text->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <var_text:FlatBuffer> */
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
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
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
var_class_name29 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
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
var34 = core__flat___NativeString___to_s_full(var33, 1l, 1l);
var32 = var34;
varonce31 = var32;
}
{
var35 = ((val*(*)(val* self, long p0))(var32->class->vft[COLOR_core__abstract_text__String___42d]))(var32, var_rest); /* * on <var32:String>*/
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_text, var35); /* Direct call flat#FlatBuffer#append on <var_text:FlatBuffer>*/
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
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_text, var36); /* Direct call flat#FlatBuffer#append on <var_text:FlatBuffer>*/
}
{
var39 = core___core__FlatBuffer___core__abstract_text__Object__to_s(var_text);
}
var = var39;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method opts#Option#read_param for (self: Option, OptionContext, Iterator[String]) */
void opts___opts__Option___read_param(val* self, val* p0, val* p1) {
val* var_opts /* var opts: OptionContext */;
val* var_it /* var it: Iterator[String] */;
var_opts = p0;
var_it = p1;
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
/* method opts#OptionBool#read_param for (self: OptionBool, OptionContext, Iterator[String]) */
void opts___opts__OptionBool___Option__read_param(val* self, val* p0, val* p1) {
val* var_opts /* var opts: OptionContext */;
val* var_it /* var it: Iterator[String] */;
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var2 /* : nullable Object */;
var_opts = p0;
var_it = p1;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_opts___opts__OptionBool___Option__read_param]))(self, p0, p1); /* read_param on <self:OptionBool>*/
}
{
{ /* Inline opts#Option#value= (self,1) on <self:OptionBool> */
/* Covariant cast for argument 0 (value) <1:Bool> isa VALUE */
/* <1:Bool> isa VALUE */
type_struct = self->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (&type_core__Bool)->table_size) {
var = 0;
} else {
var = (&type_core__Bool)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = type_core__Bool.name;
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
/* method opts#OptionCount#read_param for (self: OptionCount, OptionContext, Iterator[String]) */
void opts___opts__OptionCount___Option__read_param(val* self, val* p0, val* p1) {
val* var_opts /* var opts: OptionContext */;
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
var_opts = p0;
var_it = p1;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_opts___opts__OptionCount___Option__read_param]))(self, p0, p1); /* read_param on <self:OptionCount>*/
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
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
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
if(cltype10 >= (&type_core__Int)->table_size) {
var9 = 0;
} else {
var9 = (&type_core__Int)->type_table[cltype10] == idtype11;
}
if (unlikely(!var9)) {
var_class_name12 = type_core__Int.name;
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
/* method opts#OptionParameter#read_param for (self: OptionParameter, OptionContext, Iterator[String]) */
void opts___opts__OptionParameter___Option__read_param(val* self, val* p0, val* p1) {
val* var_opts /* var opts: OptionContext */;
val* var_it /* var it: Iterator[String] */;
short int var /* : Bool */;
short int var_ok /* var ok: Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var_ /* var : Bool */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var_8 /* var : Bool */;
val* var9 /* : nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var_12 /* var : Bool */;
val* var13 /* : nullable Object */;
val* var14 /* : SequenceRead[Char] */;
val* var15 /* : nullable Object */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
uint32_t var19 /* : Char */;
val* var20 /* : Array[Option] */;
val* var22 /* : Array[Option] */;
val* var_23 /* var : Array[Option] */;
val* var24 /* : IndexedIterator[nullable Object] */;
val* var_25 /* var : IndexedIterator[Option] */;
short int var26 /* : Bool */;
val* var27 /* : nullable Object */;
val* var_opt /* var opt: Option */;
val* var28 /* : Array[String] */;
val* var30 /* : Array[String] */;
val* var31 /* : nullable Object */;
short int var32 /* : Bool */;
val* var33 /* : nullable Object */;
val* var34 /* : nullable Object */;
short int var36 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var37 /* : Array[String] */;
val* var39 /* : Array[String] */;
val* var40 /* : NativeArray[String] */;
static val* varonce;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
val* var44 /* : String */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
val* var48 /* : String */;
val* var49 /* : Array[String] */;
val* var51 /* : Array[String] */;
val* var52 /* : nullable Object */;
val* var53 /* : String */;
var_opts = p0;
var_it = p1;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_opts___opts__OptionParameter___Option__read_param]))(self, p0, p1); /* read_param on <self:OptionParameter>*/
}
{
var = ((short int(*)(val* self))((((long)var_it&3)?class_info[((long)var_it&3)]:var_it->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_it); /* is_ok on <var_it:Iterator[String]>*/
}
var_ok = var;
var_ = var_ok;
if (var_ok){
{
{ /* Inline opts#OptionParameter#parameter_mandatory (self) on <self:OptionParameter> */
var6 = self->attrs[COLOR_opts__OptionParameter___parameter_mandatory].s; /* _parameter_mandatory on <self:OptionParameter> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var7 = !var4;
var3 = var7;
} else {
var3 = var_;
}
var_8 = var3;
if (var3){
{
var9 = ((val*(*)(val* self))((((long)var_it&3)?class_info[((long)var_it&3)]:var_it->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_it); /* item on <var_it:Iterator[String]>*/
}
{
var10 = ((short int(*)(val* self))(var9->class->vft[COLOR_core__abstract_text__Text__is_empty]))(var9); /* is_empty on <var9:nullable Object(String)>*/
}
var11 = !var10;
var2 = var11;
} else {
var2 = var_8;
}
var_12 = var2;
if (var2){
{
var13 = ((val*(*)(val* self))((((long)var_it&3)?class_info[((long)var_it&3)]:var_it->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_it); /* item on <var_it:Iterator[String]>*/
}
{
var14 = ((val*(*)(val* self))(var13->class->vft[COLOR_core__abstract_text__Text__chars]))(var13); /* chars on <var13:nullable Object(String)>*/
}
{
var15 = ((val*(*)(val* self))((((long)var14&3)?class_info[((long)var14&3)]:var14->class)->vft[COLOR_core__abstract_collection__Collection__first]))(var14); /* first on <var14:SequenceRead[Char]>*/
}
{
{ /* Inline kernel#Char#== (var15,'-') on <var15:nullable Object(Char)> */
var19 = (uint32_t)((long)(var15)>>2);
var18 = var19 == '-';
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var1 = var16;
} else {
var1 = var_12;
}
if (var1){
{
{ /* Inline opts#OptionContext#options (var_opts) on <var_opts:OptionContext> */
var22 = var_opts->attrs[COLOR_opts__OptionContext___options].val; /* _options on <var_opts:OptionContext> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _options");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 277);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
var_23 = var20;
{
var24 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_23);
}
var_25 = var24;
for(;;) {
{
var26 = ((short int(*)(val* self))((((long)var_25&3)?class_info[((long)var_25&3)]:var_25->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_25); /* is_ok on <var_25:IndexedIterator[Option]>*/
}
if (var26){
} else {
goto BREAK_label;
}
{
var27 = ((val*(*)(val* self))((((long)var_25&3)?class_info[((long)var_25&3)]:var_25->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_25); /* item on <var_25:IndexedIterator[Option]>*/
}
var_opt = var27;
{
{ /* Inline opts#Option#names (var_opt) on <var_opt:Option> */
var30 = var_opt->attrs[COLOR_opts__Option___names].val; /* _names on <var_opt:Option> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 19);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
var31 = ((val*(*)(val* self))((((long)var_it&3)?class_info[((long)var_it&3)]:var_it->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_it); /* item on <var_it:Iterator[String]>*/
}
{
var32 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var28, var31);
}
if (var32){
var_ok = 0;
goto BREAK_label;
} else {
}
{
((void(*)(val* self))((((long)var_25&3)?class_info[((long)var_25&3)]:var_25->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_25); /* next on <var_25:IndexedIterator[Option]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_25&3)?class_info[((long)var_25&3)]:var_25->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_25); /* finish on <var_25:IndexedIterator[Option]>*/
}
} else {
}
if (var_ok){
{
var33 = ((val*(*)(val* self))((((long)var_it&3)?class_info[((long)var_it&3)]:var_it->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_it); /* item on <var_it:Iterator[String]>*/
}
{
var34 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_opts__OptionParameter__convert]))(self, var33); /* convert on <self:OptionParameter>*/
}
{
{ /* Inline opts#Option#value= (self,var34) on <self:OptionParameter> */
/* Covariant cast for argument 0 (value) <var34:nullable Object> isa VALUE */
/* <var34:nullable Object> isa VALUE */
type_struct = self->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(var34 == NULL) {
var36 = is_nullable;
} else {
if(cltype >= (((long)var34&3)?type_info[((long)var34&3)]:var34->type)->table_size) {
var36 = 0;
} else {
var36 = (((long)var34&3)?type_info[((long)var34&3)]:var34->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var36)) {
var_class_name = var34 == NULL ? "null" : (((long)var34&3)?type_info[((long)var34&3)]:var34->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 40);
fatal_exit(1);
}
self->attrs[COLOR_opts__Option___value].val = var34; /* _value on <self:OptionParameter> */
RET_LABEL35:(void)0;
}
}
{
((void(*)(val* self))((((long)var_it&3)?class_info[((long)var_it&3)]:var_it->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_it); /* next on <var_it:Iterator[String]>*/
}
} else {
{
{ /* Inline opts#Option#errors (self) on <self:OptionParameter> */
var39 = self->attrs[COLOR_opts__Option___errors].val; /* _errors on <self:OptionParameter> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _errors");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 28);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var40 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "Parameter expected for option ";
var44 = core__flat___NativeString___to_s_full(var43, 30l, 30l);
var42 = var44;
varonce41 = var42;
}
((struct instance_core__NativeArray*)var40)->values[0]=var42;
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = ".";
var48 = core__flat___NativeString___to_s_full(var47, 1l, 1l);
var46 = var48;
varonce45 = var46;
}
((struct instance_core__NativeArray*)var40)->values[2]=var46;
} else {
var40 = varonce;
varonce = NULL;
}
{
{ /* Inline opts#Option#names (self) on <self:OptionParameter> */
var51 = self->attrs[COLOR_opts__Option___names].val; /* _names on <self:OptionParameter> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 19);
fatal_exit(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
var52 = core___core__SequenceRead___Collection__first(var49);
}
((struct instance_core__NativeArray*)var40)->values[1]=var52;
{
var53 = ((val*(*)(val* self))(var40->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var40); /* native_to_s on <var40:NativeArray[String]>*/
}
varonce = var40;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var37, var53); /* Direct call array#Array#add on <var37:Array[String]>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 184);
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
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 186);
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
var1 = core__fixed_ints___Text___to_i(var_str);
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
var = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var); /* Direct call array#Array#init on <var:Array[String]>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 267);
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
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 264);
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
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 267);
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
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 267);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var1, var_str); /* Direct call array#Array#add on <var1:Array[String]>*/
}
{
{ /* Inline opts#OptionArray#values (self) on <self:OptionArray> */
var6 = self->attrs[COLOR_opts__OptionArray___values].val; /* _values on <self:OptionArray> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _values");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 267);
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
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 271);
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
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 277);
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
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 280);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method opts#OptionContext#context_errors for (self: OptionContext): Array[String] */
val* opts___opts__OptionContext___context_errors(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_opts__OptionContext___context_errors].val; /* _context_errors on <self:OptionContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _context_errors");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 283);
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
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 286);
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
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 277);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var, var_opts); /* Direct call array#Array#add_all on <var:Array[Option]>*/
}
RET_LABEL:;
}
/* method opts#OptionContext#usage for (self: OptionContext) */
void opts___opts__OptionContext___usage(val* self) {
long var_lmax /* var lmax: Int */;
val* var /* : Array[Option] */;
val* var2 /* : Array[Option] */;
val* var_ /* var : Array[Option] */;
val* var3 /* : IndexedIterator[nullable Object] */;
val* var_4 /* var : IndexedIterator[Option] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_i /* var i: Option */;
long var_l /* var l: Int */;
val* var7 /* : Array[String] */;
val* var9 /* : Array[String] */;
val* var_10 /* var : Array[String] */;
val* var11 /* : IndexedIterator[nullable Object] */;
val* var_12 /* var : IndexedIterator[String] */;
short int var13 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_n /* var n: String */;
long var16 /* : Int */;
long var17 /* : Int */;
short int var19 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var20 /* : Int */;
long var21 /* : Int */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
long var27 /* : Int */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
short int var34 /* : Bool */;
val* var35 /* : Array[Option] */;
val* var37 /* : Array[Option] */;
val* var_38 /* var : Array[Option] */;
val* var39 /* : IndexedIterator[nullable Object] */;
val* var_40 /* var : IndexedIterator[Option] */;
short int var41 /* : Bool */;
val* var43 /* : nullable Object */;
val* var_i44 /* var i: Option */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
val* var49 /* : Sys */;
val* var50 /* : String */;
var_lmax = 1l;
{
{ /* Inline opts#OptionContext#options (self) on <self:OptionContext> */
var2 = self->attrs[COLOR_opts__OptionContext___options].val; /* _options on <self:OptionContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _options");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 277);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_ = var;
{
var3 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:IndexedIterator[Option]>*/
}
if (var5){
} else {
goto BREAK_label;
}
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:IndexedIterator[Option]>*/
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
var11 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_10);
}
var_12 = var11;
for(;;) {
{
var13 = ((short int(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_12); /* is_ok on <var_12:IndexedIterator[String]>*/
}
if (var13){
} else {
goto BREAK_label14;
}
{
var15 = ((val*(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_12); /* item on <var_12:IndexedIterator[String]>*/
}
var_n = var15;
{
var16 = ((long(*)(val* self))(var_n->class->vft[COLOR_core__abstract_text__Text__length]))(var_n); /* length on <var_n:String>*/
}
{
{ /* Inline kernel#Int#+ (var16,2l) on <var16:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var19 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var20 = var16 + 2l;
var17 = var20;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_l,var17) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var17:Int> isa OTHER */
/* <var17:Int> isa OTHER */
var23 = 1; /* easy <var17:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var27 = var_l + var17;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var_l = var21;
{
((void(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_12); /* next on <var_12:IndexedIterator[String]>*/
}
}
BREAK_label14: (void)0;
{
((void(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_12); /* finish on <var_12:IndexedIterator[String]>*/
}
{
{ /* Inline kernel#Int#< (var_lmax,var_l) on <var_lmax:Int> */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var30 = 1; /* easy <var_l:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var34 = var_lmax < var_l;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
if (var28){
var_lmax = var_l;
} else {
}
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:IndexedIterator[Option]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:IndexedIterator[Option]>*/
}
{
{ /* Inline opts#OptionContext#options (self) on <self:OptionContext> */
var37 = self->attrs[COLOR_opts__OptionContext___options].val; /* _options on <self:OptionContext> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _options");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 277);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
var_38 = var35;
{
var39 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_38);
}
var_40 = var39;
for(;;) {
{
var41 = ((short int(*)(val* self))((((long)var_40&3)?class_info[((long)var_40&3)]:var_40->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_40); /* is_ok on <var_40:IndexedIterator[Option]>*/
}
if (var41){
} else {
goto BREAK_label42;
}
{
var43 = ((val*(*)(val* self))((((long)var_40&3)?class_info[((long)var_40&3)]:var_40->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_40); /* item on <var_40:IndexedIterator[Option]>*/
}
var_i44 = var43;
{
{ /* Inline opts#Option#hidden (var_i44) on <var_i44:Option> */
var47 = var_i44->attrs[COLOR_opts__Option___hidden].s; /* _hidden on <var_i44:Option> */
var45 = var47;
RET_LABEL46:(void)0;
}
}
var48 = !var45;
if (var48){
var49 = glob_sys;
{
var50 = opts___opts__Option___pretty(var_i44, var_lmax);
}
{
core__file___Sys___print(var49, var50); /* Direct call file#Sys#print on <var49:Sys>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_40&3)?class_info[((long)var_40&3)]:var_40->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_40); /* next on <var_40:IndexedIterator[Option]>*/
}
}
BREAK_label42: (void)0;
{
((void(*)(val* self))((((long)var_40&3)?class_info[((long)var_40&3)]:var_40->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_40); /* finish on <var_40:IndexedIterator[Option]>*/
}
RET_LABEL:;
}
/* method opts#OptionContext#parse for (self: OptionContext, nullable Collection[String]) */
void opts___opts__OptionContext___parse(val* self, val* p0) {
val* var_argv /* var argv: nullable Collection[String] */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : Sys */;
val* var3 /* : Sequence[String] */;
val* var4 /* : Iterator[nullable Object] */;
val* var_it /* var it: Iterator[String] */;
var_argv = p0;
if (var_argv == NULL) {
var = 1; /* is null */
} else {
var = 0; /* arg is null but recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))((((long)var_argv&3)?class_info[((long)var_argv&3)]:var_argv->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var_argv, ((val*)NULL)); /* == on <var_argv:nullable Collection[String]>*/
var = var1;
}
if (var){
var2 = glob_sys;
{
var3 = core__abstract_text___Sys___args(var2);
}
var_argv = var3;
} else {
}
{
var4 = ((val*(*)(val* self))((((long)var_argv&3)?class_info[((long)var_argv&3)]:var_argv->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_argv); /* iterator on <var_argv:nullable Collection[String](Collection[String])>*/
}
var_it = var4;
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
val* var8 /* : String */;
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
val* var36 /* : String */;
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
val* var73 /* : IndexedIterator[nullable Object] */;
val* var_74 /* var : IndexedIterator[Option] */;
short int var75 /* : Bool */;
val* var77 /* : nullable Object */;
val* var_opt78 /* var opt: Option */;
short int var79 /* : Bool */;
short int var80 /* : Bool */;
short int var82 /* : Bool */;
short int var_83 /* var : Bool */;
short int var84 /* : Bool */;
short int var86 /* : Bool */;
short int var87 /* : Bool */;
val* var88 /* : Array[String] */;
val* var90 /* : Array[String] */;
val* var92 /* : NativeArray[String] */;
static val* varonce91;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
val* var96 /* : String */;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : NativeString */;
val* var100 /* : String */;
val* var101 /* : Array[String] */;
val* var103 /* : Array[String] */;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : NativeString */;
val* var107 /* : String */;
val* var108 /* : String */;
val* var109 /* : String */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 280);
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
var4 = ((short int(*)(val* self))((((long)var_it&3)?class_info[((long)var_it&3)]:var_it->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_it); /* is_ok on <var_it:Iterator[String]>*/
}
var3 = var4;
} else {
var3 = var_;
}
if (var3){
{
var5 = ((val*(*)(val* self))((((long)var_it&3)?class_info[((long)var_it&3)]:var_it->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_it); /* item on <var_it:Iterator[String]>*/
}
var_str = var5;
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "--";
var8 = core__flat___NativeString___to_s_full(var7, 2l, 2l);
var6 = var8;
varonce = var6;
}
{
var9 = ((short int(*)(val* self, val* p0))(var_str->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_str, var6); /* == on <var_str:String>*/
}
if (var9){
{
((void(*)(val* self))((((long)var_it&3)?class_info[((long)var_it&3)]:var_it->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_it); /* next on <var_it:Iterator[String]>*/
}
{
var10 = core__array___Iterator___to_a(var_it);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var_rest, var10); /* Direct call array#Array#add_all on <var_rest:Array[String]>*/
}
var_parseargs = 0;
} else {
{
var12 = ((val*(*)(val* self))(var_str->class->vft[COLOR_core__abstract_text__Text__chars]))(var_str); /* chars on <var_str:String>*/
}
{
var13 = (val*)((long)('-')<<2|2);
var14 = ((long(*)(val* self, val* p0))((((long)var12&3)?class_info[((long)var12&3)]:var12->class)->vft[COLOR_core__abstract_collection__SequenceRead__last_index_of]))(var12, var13); /* last_index_of on <var12:SequenceRead[Char]>*/
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
var19 = ((long(*)(val* self))(var_str->class->vft[COLOR_core__abstract_text__Text__length]))(var_str); /* length on <var_str:String>*/
}
{
{ /* Inline kernel#Int#> (var19,2l) on <var19:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var22 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
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
var24 = ((long(*)(val* self))(var_str->class->vft[COLOR_core__abstract_text__Text__length]))(var_str); /* length on <var_str:String>*/
}
var_25 = var24;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_25) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_25:Int> isa OTHER */
/* <var_25:Int> isa OTHER */
var28 = 1; /* easy <var_25:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var32 = var_i < var_25;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
if (var26){
} else {
goto BREAK_label;
}
if (likely(varonce33!=NULL)) {
var34 = varonce33;
} else {
var35 = "-";
var36 = core__flat___NativeString___to_s_full(var35, 1l, 1l);
var34 = var36;
varonce33 = var34;
}
{
var37 = ((val*(*)(val* self))(var_str->class->vft[COLOR_core__abstract_text__Text__chars]))(var_str); /* chars on <var_str:String>*/
}
{
var38 = ((val*(*)(val* self, long p0))((((long)var37&3)?class_info[((long)var37&3)]:var37->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var37, var_i); /* [] on <var37:SequenceRead[Char]>*/
}
{
var40 = (uint32_t)((long)(var38)>>2);
var39 = core__abstract_text___Char___Object__to_s(var40);
}
{
var41 = ((val*(*)(val* self, val* p0))(var34->class->vft[COLOR_core__abstract_text__String___43d]))(var34, var39); /* + on <var34:String>*/
}
var_short_opt = var41;
{
{ /* Inline opts#OptionContext#optmap (self) on <self:OptionContext> */
var44 = self->attrs[COLOR_opts__OptionContext___optmap].val; /* _optmap on <self:OptionContext> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _optmap");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 286);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
var45 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var42, var_short_opt);
}
if (var45){
{
{ /* Inline opts#OptionContext#optmap (self) on <self:OptionContext> */
var48 = self->attrs[COLOR_opts__OptionContext___optmap].val; /* _optmap on <self:OptionContext> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _optmap");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 286);
fatal_exit(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
var49 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var46, var_short_opt);
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
((void(*)(val* self))((((long)var_it&3)?class_info[((long)var_it&3)]:var_it->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_it); /* next on <var_it:Iterator[String]>*/
}
var_next_called = 1;
} else {
}
{
((void(*)(val* self, val* p0, val* p1))(var_option->class->vft[COLOR_opts__Option__read_param]))(var_option, self, var_it); /* read_param on <var_option:Option>*/
}
} else {
}
{
var53 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var53;
}
BREAK_label: (void)0;
var54 = !var_next_called;
if (var54){
{
((void(*)(val* self))((((long)var_it&3)?class_info[((long)var_it&3)]:var_it->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_it); /* next on <var_it:Iterator[String]>*/
}
} else {
}
} else {
{
{ /* Inline opts#OptionContext#optmap (self) on <self:OptionContext> */
var57 = self->attrs[COLOR_opts__OptionContext___optmap].val; /* _optmap on <self:OptionContext> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _optmap");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 286);
fatal_exit(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
var58 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var55, var_str);
}
if (var58){
{
{ /* Inline opts#OptionContext#optmap (self) on <self:OptionContext> */
var61 = self->attrs[COLOR_opts__OptionContext___optmap].val; /* _optmap on <self:OptionContext> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _optmap");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 286);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
var62 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var59, var_str);
}
var_opt = var62;
{
((void(*)(val* self))((((long)var_it&3)?class_info[((long)var_it&3)]:var_it->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_it); /* next on <var_it:Iterator[String]>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var_opt->class->vft[COLOR_opts__Option__read_param]))(var_opt, self, var_it); /* read_param on <var_opt:Option>*/
}
} else {
{
var63 = ((val*(*)(val* self))((((long)var_it&3)?class_info[((long)var_it&3)]:var_it->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_it); /* item on <var_it:Iterator[String]>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_rest, var63); /* Direct call array#Array#add on <var_rest:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_it&3)?class_info[((long)var_it&3)]:var_it->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_it); /* next on <var_it:Iterator[String]>*/
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
var67 = core__array___Iterator___to_a(var_it);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var_rest, var67); /* Direct call array#Array#add_all on <var_rest:Array[String]>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 277);
fatal_exit(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
var_72 = var69;
{
var73 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_72);
}
var_74 = var73;
for(;;) {
{
var75 = ((short int(*)(val* self))((((long)var_74&3)?class_info[((long)var_74&3)]:var_74->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_74); /* is_ok on <var_74:IndexedIterator[Option]>*/
}
if (var75){
} else {
goto BREAK_label76;
}
{
var77 = ((val*(*)(val* self))((((long)var_74&3)?class_info[((long)var_74&3)]:var_74->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_74); /* item on <var_74:IndexedIterator[Option]>*/
}
var_opt78 = var77;
{
{ /* Inline opts#Option#mandatory (var_opt78) on <var_opt78:Option> */
var82 = var_opt78->attrs[COLOR_opts__Option___mandatory].s; /* _mandatory on <var_opt78:Option> */
var80 = var82;
RET_LABEL81:(void)0;
}
}
var_83 = var80;
if (var80){
{
{ /* Inline opts#Option#read (var_opt78) on <var_opt78:Option> */
var86 = var_opt78->attrs[COLOR_opts__Option___read].s; /* _read on <var_opt78:Option> */
var84 = var86;
RET_LABEL85:(void)0;
}
}
var87 = !var84;
var79 = var87;
} else {
var79 = var_83;
}
if (var79){
{
{ /* Inline opts#OptionContext#context_errors (self) on <self:OptionContext> */
var90 = self->attrs[COLOR_opts__OptionContext___context_errors].val; /* _context_errors on <self:OptionContext> */
if (unlikely(var90 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _context_errors");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 283);
fatal_exit(1);
}
var88 = var90;
RET_LABEL89:(void)0;
}
}
if (unlikely(varonce91==NULL)) {
var92 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce93!=NULL)) {
var94 = varonce93;
} else {
var95 = "Mandatory option ";
var96 = core__flat___NativeString___to_s_full(var95, 17l, 17l);
var94 = var96;
varonce93 = var94;
}
((struct instance_core__NativeArray*)var92)->values[0]=var94;
if (likely(varonce97!=NULL)) {
var98 = varonce97;
} else {
var99 = " not found.";
var100 = core__flat___NativeString___to_s_full(var99, 11l, 11l);
var98 = var100;
varonce97 = var98;
}
((struct instance_core__NativeArray*)var92)->values[2]=var98;
} else {
var92 = varonce91;
varonce91 = NULL;
}
{
{ /* Inline opts#Option#names (var_opt78) on <var_opt78:Option> */
var103 = var_opt78->attrs[COLOR_opts__Option___names].val; /* _names on <var_opt78:Option> */
if (unlikely(var103 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 19);
fatal_exit(1);
}
var101 = var103;
RET_LABEL102:(void)0;
}
}
if (likely(varonce104!=NULL)) {
var105 = varonce104;
} else {
var106 = ", ";
var107 = core__flat___NativeString___to_s_full(var106, 2l, 2l);
var105 = var107;
varonce104 = var105;
}
{
var108 = core__abstract_text___Collection___join(var101, var105);
}
((struct instance_core__NativeArray*)var92)->values[1]=var108;
{
var109 = ((val*(*)(val* self))(var92->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var92); /* native_to_s on <var92:NativeArray[String]>*/
}
varonce91 = var92;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var88, var109); /* Direct call array#Array#add on <var88:Array[String]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_74&3)?class_info[((long)var_74&3)]:var_74->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_74); /* next on <var_74:IndexedIterator[Option]>*/
}
}
BREAK_label76: (void)0;
{
((void(*)(val* self))((((long)var_74&3)?class_info[((long)var_74&3)]:var_74->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_74); /* finish on <var_74:IndexedIterator[Option]>*/
}
RET_LABEL:;
}
/* method opts#OptionContext#build for (self: OptionContext) */
void opts___opts__OptionContext___build(val* self) {
val* var /* : Array[Option] */;
val* var2 /* : Array[Option] */;
val* var_ /* var : Array[Option] */;
val* var3 /* : IndexedIterator[nullable Object] */;
val* var_4 /* var : IndexedIterator[Option] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_o /* var o: Option */;
val* var7 /* : Array[String] */;
val* var9 /* : Array[String] */;
val* var_10 /* var : Array[String] */;
val* var11 /* : IndexedIterator[nullable Object] */;
val* var_12 /* var : IndexedIterator[String] */;
short int var13 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_n /* var n: String */;
val* var16 /* : HashMap[String, Option] */;
val* var18 /* : HashMap[String, Option] */;
{
{ /* Inline opts#OptionContext#options (self) on <self:OptionContext> */
var2 = self->attrs[COLOR_opts__OptionContext___options].val; /* _options on <self:OptionContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _options");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 277);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_ = var;
{
var3 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:IndexedIterator[Option]>*/
}
if (var5){
} else {
goto BREAK_label;
}
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:IndexedIterator[Option]>*/
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
var11 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_10);
}
var_12 = var11;
for(;;) {
{
var13 = ((short int(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_12); /* is_ok on <var_12:IndexedIterator[String]>*/
}
if (var13){
} else {
goto BREAK_label14;
}
{
var15 = ((val*(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_12); /* item on <var_12:IndexedIterator[String]>*/
}
var_n = var15;
{
{ /* Inline opts#OptionContext#optmap (self) on <self:OptionContext> */
var18 = self->attrs[COLOR_opts__OptionContext___optmap].val; /* _optmap on <self:OptionContext> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _optmap");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 286);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var16, var_n, var_o); /* Direct call hash_collection#HashMap#[]= on <var16:HashMap[String, Option]>*/
}
{
((void(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_12); /* next on <var_12:IndexedIterator[String]>*/
}
}
BREAK_label14: (void)0;
{
((void(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_12); /* finish on <var_12:IndexedIterator[String]>*/
}
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:IndexedIterator[Option]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:IndexedIterator[Option]>*/
}
RET_LABEL:;
}
/* method opts#OptionContext#errors for (self: OptionContext): Array[String] */
val* opts___opts__OptionContext___errors(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
val* var_errors /* var errors: Array[String] */;
val* var2 /* : Array[String] */;
val* var4 /* : Array[String] */;
val* var5 /* : Array[Option] */;
val* var7 /* : Array[Option] */;
val* var_ /* var : Array[Option] */;
val* var8 /* : IndexedIterator[nullable Object] */;
val* var_9 /* var : IndexedIterator[Option] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_o /* var o: Option */;
val* var12 /* : Array[String] */;
val* var14 /* : Array[String] */;
val* var_15 /* var : Array[String] */;
val* var16 /* : IndexedIterator[nullable Object] */;
val* var_17 /* var : IndexedIterator[String] */;
short int var18 /* : Bool */;
val* var20 /* : nullable Object */;
val* var_e /* var e: String */;
var1 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[String]>*/
}
var_errors = var1;
{
{ /* Inline opts#OptionContext#context_errors (self) on <self:OptionContext> */
var4 = self->attrs[COLOR_opts__OptionContext___context_errors].val; /* _context_errors on <self:OptionContext> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _context_errors");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 283);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var_errors, var2); /* Direct call array#Array#add_all on <var_errors:Array[String]>*/
}
{
{ /* Inline opts#OptionContext#options (self) on <self:OptionContext> */
var7 = self->attrs[COLOR_opts__OptionContext___options].val; /* _options on <self:OptionContext> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _options");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 277);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_ = var5;
{
var8 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_9 = var8;
for(;;) {
{
var10 = ((short int(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_9); /* is_ok on <var_9:IndexedIterator[Option]>*/
}
if (var10){
} else {
goto BREAK_label;
}
{
var11 = ((val*(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_9); /* item on <var_9:IndexedIterator[Option]>*/
}
var_o = var11;
{
{ /* Inline opts#Option#errors (var_o) on <var_o:Option> */
var14 = var_o->attrs[COLOR_opts__Option___errors].val; /* _errors on <var_o:Option> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _errors");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 28);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_15 = var12;
{
var16 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_15);
}
var_17 = var16;
for(;;) {
{
var18 = ((short int(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_17); /* is_ok on <var_17:IndexedIterator[String]>*/
}
if (var18){
} else {
goto BREAK_label19;
}
{
var20 = ((val*(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_17); /* item on <var_17:IndexedIterator[String]>*/
}
var_e = var20;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_errors, var_e); /* Direct call array#Array#add on <var_errors:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_17); /* next on <var_17:IndexedIterator[String]>*/
}
}
BREAK_label19: (void)0;
{
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_17); /* finish on <var_17:IndexedIterator[String]>*/
}
{
((void(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_9); /* next on <var_9:IndexedIterator[Option]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_9); /* finish on <var_9:IndexedIterator[Option]>*/
}
var = var_errors;
goto RET_LABEL;
RET_LABEL:;
return var;
}
