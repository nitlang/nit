#include "more_collections.sep.0.h"
/* method more_collections#MultiHashMap#add_one for (self: MultiHashMap[nullable Object, nullable Object], nullable Object, nullable Object) */
void more_collections___more_collections__MultiHashMap___add_one(val* self, val* p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
short int var1 /* : Bool */;
int cltype2;
int idtype3;
const struct type* type_struct4;
short int is_nullable5;
const char* var_class_name6;
val* var_k /* var k: nullable Object */;
val* var_v /* var v: nullable Object */;
val* var7 /* : nullable Object */;
val* var_x /* var x: nullable Array[nullable Object] */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : Array[nullable Object] */;
long var15 /* : Int */;
val* var_ /* var : Array[nullable Object] */;
/* Covariant cast for argument 0 (k) <p0:nullable Object> isa K */
/* <p0:nullable Object> isa K */
type_struct = self->type->resolution_table->types[COLOR_more_collections__MultiHashMap___35dK];
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 35);
show_backtrace(1);
}
/* Covariant cast for argument 1 (v) <p1:nullable Object> isa V */
/* <p1:nullable Object> isa V */
type_struct4 = self->type->resolution_table->types[COLOR_more_collections__MultiHashMap___35dV];
cltype2 = type_struct4->color;
idtype3 = type_struct4->id;
is_nullable5 = type_struct4->is_nullable;
if(p1 == NULL) {
var1 = is_nullable5;
} else {
if(cltype2 >= p1->type->table_size) {
var1 = 0;
} else {
var1 = p1->type->type_table[cltype2] == idtype3;
}
}
if (unlikely(!var1)) {
var_class_name6 = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "V", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 35);
show_backtrace(1);
}
var_k = p0;
var_v = p1;
{
var7 = standard___standard__HashMap___standard__abstract_collection__MapRead__get_or_null(self, var_k);
}
var_x = var7;
var8 = NULL;
if (var_x == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_x,var8) on <var_x:nullable Array[nullable Object]> */
var_other = var8;
{
var12 = ((short int (*)(val* self, val* p0))(var_x->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_x, var_other) /* == on <var_x:nullable Array[nullable Object](Array[nullable Object])>*/;
}
var13 = !var12;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_x, var_v); /* Direct call array#Array#add on <var_x:nullable Array[nullable Object](Array[nullable Object])>*/
}
} else {
var14 = NEW_standard__Array(self->type->resolution_table->types[COLOR_standard__Array__more_collections__MultiHashMap___35dV]);
var15 = 1;
{
standard___standard__Array___with_capacity(var14, var15); /* Direct call array#Array#with_capacity on <var14:Array[nullable Object]>*/
}
var_ = var14;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_v); /* Direct call array#AbstractArray#push on <var_:Array[nullable Object]>*/
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(self, var_k, var_); /* Direct call hash_collection#HashMap#[]= on <self:MultiHashMap[nullable Object, nullable Object]>*/
}
}
RET_LABEL:;
}
/* method more_collections#MultiHashMap#provide_default_value for (self: MultiHashMap[nullable Object, nullable Object], nullable Object): Array[nullable Object] */
val* more_collections___more_collections__MultiHashMap___standard__abstract_collection__MapRead__provide_default_value(val* self, val* p0) {
val* var /* : Array[nullable Object] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_key /* var key: nullable Object */;
val* var2 /* : Array[nullable Object] */;
val* var_res /* var res: Array[nullable Object] */;
/* Covariant cast for argument 0 (key) <p0:nullable Object> isa K */
/* <p0:nullable Object> isa K */
type_struct = self->type->resolution_table->types[COLOR_more_collections__MultiHashMap___35dK];
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
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 47);
show_backtrace(1);
}
var_key = p0;
var2 = NEW_standard__Array(self->type->resolution_table->types[COLOR_standard__Array__more_collections__MultiHashMap___35dV]);
{
standard___standard__Array___standard__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[nullable Object]>*/
}
var_res = var2;
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(self, var_key, var_res); /* Direct call hash_collection#HashMap#[]= on <self:MultiHashMap[nullable Object, nullable Object]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method more_collections#HashMap2#level1 for (self: HashMap2[nullable Object, nullable Object, nullable Object]): HashMap[nullable Object, HashMap[nullable Object, nullable Object]] */
val* more_collections___more_collections__HashMap2___level1(val* self) {
val* var /* : HashMap[nullable Object, HashMap[nullable Object, nullable Object]] */;
val* var1 /* : HashMap[nullable Object, HashMap[nullable Object, nullable Object]] */;
var1 = self->attrs[COLOR_more_collections__HashMap2___level1].val; /* _level1 on <self:HashMap2[nullable Object, nullable Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _level1");
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 64);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method more_collections#HashMap2#[] for (self: HashMap2[nullable Object, nullable Object, nullable Object], nullable Object, nullable Object): nullable Object */
val* more_collections___more_collections__HashMap2____91d_93d(val* self, val* p0, val* p1) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
short int is_nullable6;
const char* var_class_name7;
val* var_k1 /* var k1: nullable Object */;
val* var_k2 /* var k2: nullable Object */;
val* var8 /* : HashMap[nullable Object, HashMap[nullable Object, nullable Object]] */;
val* var10 /* : HashMap[nullable Object, HashMap[nullable Object, nullable Object]] */;
val* var_level1 /* var level1: HashMap[nullable Object, HashMap[nullable Object, nullable Object]] */;
val* var11 /* : nullable Object */;
val* var_level2 /* var level2: nullable HashMap[nullable Object, nullable Object] */;
val* var12 /* : null */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : null */;
val* var20 /* : nullable Object */;
/* Covariant cast for argument 0 (k1) <p0:nullable Object> isa K1 */
/* <p0:nullable Object> isa K1 */
type_struct = self->type->resolution_table->types[COLOR_more_collections__HashMap2___35dK1];
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
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K1", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 66);
show_backtrace(1);
}
/* Covariant cast for argument 1 (k2) <p1:nullable Object> isa K2 */
/* <p1:nullable Object> isa K2 */
type_struct5 = self->type->resolution_table->types[COLOR_more_collections__HashMap2___35dK2];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
is_nullable6 = type_struct5->is_nullable;
if(p1 == NULL) {
var2 = is_nullable6;
} else {
if(cltype3 >= p1->type->table_size) {
var2 = 0;
} else {
var2 = p1->type->type_table[cltype3] == idtype4;
}
}
if (unlikely(!var2)) {
var_class_name7 = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K2", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 66);
show_backtrace(1);
}
var_k1 = p0;
var_k2 = p1;
{
{ /* Inline more_collections#HashMap2#level1 (self) on <self:HashMap2[nullable Object, nullable Object, nullable Object]> */
var10 = self->attrs[COLOR_more_collections__HashMap2___level1].val; /* _level1 on <self:HashMap2[nullable Object, nullable Object, nullable Object]> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _level1");
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 64);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_level1 = var8;
{
var11 = standard___standard__HashMap___standard__abstract_collection__MapRead__get_or_null(var_level1, var_k1);
}
var_level2 = var11;
var12 = NULL;
if (var_level2 == NULL) {
var13 = 1; /* is null */
} else {
var13 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_level2,var12) on <var_level2:nullable HashMap[nullable Object, nullable Object]> */
var_other = var12;
{
{ /* Inline kernel#Object#is_same_instance (var_level2,var_other) on <var_level2:nullable HashMap[nullable Object, nullable Object](HashMap[nullable Object, nullable Object])> */
var18 = var_level2 == var_other;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
if (var13){
var19 = NULL;
var = var19;
goto RET_LABEL;
} else {
}
{
var20 = standard___standard__HashMap___standard__abstract_collection__MapRead__get_or_null(var_level2, var_k2);
}
var = var20;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method more_collections#HashMap2#[]= for (self: HashMap2[nullable Object, nullable Object, nullable Object], nullable Object, nullable Object, nullable Object) */
void more_collections___more_collections__HashMap2____91d_93d_61d(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
short int var1 /* : Bool */;
int cltype2;
int idtype3;
const struct type* type_struct4;
short int is_nullable5;
const char* var_class_name6;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const struct type* type_struct10;
short int is_nullable11;
const char* var_class_name12;
val* var_k1 /* var k1: nullable Object */;
val* var_k2 /* var k2: nullable Object */;
val* var_v /* var v: nullable Object */;
val* var13 /* : HashMap[nullable Object, HashMap[nullable Object, nullable Object]] */;
val* var15 /* : HashMap[nullable Object, HashMap[nullable Object, nullable Object]] */;
val* var_level1 /* var level1: HashMap[nullable Object, HashMap[nullable Object, nullable Object]] */;
val* var16 /* : nullable Object */;
val* var_level2 /* var level2: nullable HashMap[nullable Object, nullable Object] */;
val* var17 /* : null */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
val* var24 /* : HashMap[nullable Object, nullable Object] */;
/* Covariant cast for argument 0 (k1) <p0:nullable Object> isa K1 */
/* <p0:nullable Object> isa K1 */
type_struct = self->type->resolution_table->types[COLOR_more_collections__HashMap2___35dK1];
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K1", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 76);
show_backtrace(1);
}
/* Covariant cast for argument 1 (k2) <p1:nullable Object> isa K2 */
/* <p1:nullable Object> isa K2 */
type_struct4 = self->type->resolution_table->types[COLOR_more_collections__HashMap2___35dK2];
cltype2 = type_struct4->color;
idtype3 = type_struct4->id;
is_nullable5 = type_struct4->is_nullable;
if(p1 == NULL) {
var1 = is_nullable5;
} else {
if(cltype2 >= p1->type->table_size) {
var1 = 0;
} else {
var1 = p1->type->type_table[cltype2] == idtype3;
}
}
if (unlikely(!var1)) {
var_class_name6 = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K2", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 76);
show_backtrace(1);
}
/* Covariant cast for argument 2 (v) <p2:nullable Object> isa V */
/* <p2:nullable Object> isa V */
type_struct10 = self->type->resolution_table->types[COLOR_more_collections__HashMap2___35dV];
cltype8 = type_struct10->color;
idtype9 = type_struct10->id;
is_nullable11 = type_struct10->is_nullable;
if(p2 == NULL) {
var7 = is_nullable11;
} else {
if(cltype8 >= p2->type->table_size) {
var7 = 0;
} else {
var7 = p2->type->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
var_class_name12 = p2 == NULL ? "null" : p2->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "V", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 76);
show_backtrace(1);
}
var_k1 = p0;
var_k2 = p1;
var_v = p2;
{
{ /* Inline more_collections#HashMap2#level1 (self) on <self:HashMap2[nullable Object, nullable Object, nullable Object]> */
var15 = self->attrs[COLOR_more_collections__HashMap2___level1].val; /* _level1 on <self:HashMap2[nullable Object, nullable Object, nullable Object]> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _level1");
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 64);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_level1 = var13;
{
var16 = standard___standard__HashMap___standard__abstract_collection__MapRead__get_or_null(var_level1, var_k1);
}
var_level2 = var16;
var17 = NULL;
if (var_level2 == NULL) {
var18 = 1; /* is null */
} else {
var18 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_level2,var17) on <var_level2:nullable HashMap[nullable Object, nullable Object]> */
var_other = var17;
{
{ /* Inline kernel#Object#is_same_instance (var_level2,var_other) on <var_level2:nullable HashMap[nullable Object, nullable Object](HashMap[nullable Object, nullable Object])> */
var23 = var_level2 == var_other;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var18 = var19;
}
if (var18){
var24 = NEW_standard__HashMap(self->type->resolution_table->types[COLOR_standard__HashMap__more_collections__HashMap2___35dK2__more_collections__HashMap2___35dV]);
{
standard___standard__HashMap___standard__kernel__Object__init(var24); /* Direct call hash_collection#HashMap#init on <var24:HashMap[nullable Object, nullable Object]>*/
}
var_level2 = var24;
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var_level1, var_k1, var_level2); /* Direct call hash_collection#HashMap#[]= on <var_level1:HashMap[nullable Object, HashMap[nullable Object, nullable Object]]>*/
}
} else {
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var_level2, var_k2, var_v); /* Direct call hash_collection#HashMap#[]= on <var_level2:nullable HashMap[nullable Object, nullable Object](HashMap[nullable Object, nullable Object])>*/
}
RET_LABEL:;
}
/* method more_collections#HashMap3#level1 for (self: HashMap3[nullable Object, nullable Object, nullable Object, nullable Object]): HashMap[nullable Object, HashMap2[nullable Object, nullable Object, nullable Object]] */
val* more_collections___more_collections__HashMap3___level1(val* self) {
val* var /* : HashMap[nullable Object, HashMap2[nullable Object, nullable Object, nullable Object]] */;
val* var1 /* : HashMap[nullable Object, HashMap2[nullable Object, nullable Object, nullable Object]] */;
var1 = self->attrs[COLOR_more_collections__HashMap3___level1].val; /* _level1 on <self:HashMap3[nullable Object, nullable Object, nullable Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _level1");
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 108);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method more_collections#HashMap3#[] for (self: HashMap3[nullable Object, nullable Object, nullable Object, nullable Object], nullable Object, nullable Object, nullable Object): nullable Object */
val* more_collections___more_collections__HashMap3____91d_93d(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
short int is_nullable6;
const char* var_class_name7;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const struct type* type_struct11;
short int is_nullable12;
const char* var_class_name13;
val* var_k1 /* var k1: nullable Object */;
val* var_k2 /* var k2: nullable Object */;
val* var_k3 /* var k3: nullable Object */;
val* var14 /* : HashMap[nullable Object, HashMap2[nullable Object, nullable Object, nullable Object]] */;
val* var16 /* : HashMap[nullable Object, HashMap2[nullable Object, nullable Object, nullable Object]] */;
val* var_level1 /* var level1: HashMap[nullable Object, HashMap2[nullable Object, nullable Object, nullable Object]] */;
val* var17 /* : nullable Object */;
val* var_level2 /* var level2: nullable HashMap2[nullable Object, nullable Object, nullable Object] */;
val* var18 /* : null */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : null */;
val* var26 /* : nullable Object */;
/* Covariant cast for argument 0 (k1) <p0:nullable Object> isa K1 */
/* <p0:nullable Object> isa K1 */
type_struct = self->type->resolution_table->types[COLOR_more_collections__HashMap3___35dK1];
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
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K1", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 110);
show_backtrace(1);
}
/* Covariant cast for argument 1 (k2) <p1:nullable Object> isa K2 */
/* <p1:nullable Object> isa K2 */
type_struct5 = self->type->resolution_table->types[COLOR_more_collections__HashMap3___35dK2];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
is_nullable6 = type_struct5->is_nullable;
if(p1 == NULL) {
var2 = is_nullable6;
} else {
if(cltype3 >= p1->type->table_size) {
var2 = 0;
} else {
var2 = p1->type->type_table[cltype3] == idtype4;
}
}
if (unlikely(!var2)) {
var_class_name7 = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K2", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 110);
show_backtrace(1);
}
/* Covariant cast for argument 2 (k3) <p2:nullable Object> isa K3 */
/* <p2:nullable Object> isa K3 */
type_struct11 = self->type->resolution_table->types[COLOR_more_collections__HashMap3___35dK3];
cltype9 = type_struct11->color;
idtype10 = type_struct11->id;
is_nullable12 = type_struct11->is_nullable;
if(p2 == NULL) {
var8 = is_nullable12;
} else {
if(cltype9 >= p2->type->table_size) {
var8 = 0;
} else {
var8 = p2->type->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
var_class_name13 = p2 == NULL ? "null" : p2->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K3", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 110);
show_backtrace(1);
}
var_k1 = p0;
var_k2 = p1;
var_k3 = p2;
{
{ /* Inline more_collections#HashMap3#level1 (self) on <self:HashMap3[nullable Object, nullable Object, nullable Object, nullable Object]> */
var16 = self->attrs[COLOR_more_collections__HashMap3___level1].val; /* _level1 on <self:HashMap3[nullable Object, nullable Object, nullable Object, nullable Object]> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _level1");
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 108);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
var_level1 = var14;
{
var17 = standard___standard__HashMap___standard__abstract_collection__MapRead__get_or_null(var_level1, var_k1);
}
var_level2 = var17;
var18 = NULL;
if (var_level2 == NULL) {
var19 = 1; /* is null */
} else {
var19 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_level2,var18) on <var_level2:nullable HashMap2[nullable Object, nullable Object, nullable Object]> */
var_other = var18;
{
{ /* Inline kernel#Object#is_same_instance (var_level2,var_other) on <var_level2:nullable HashMap2[nullable Object, nullable Object, nullable Object](HashMap2[nullable Object, nullable Object, nullable Object])> */
var24 = var_level2 == var_other;
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var19 = var20;
}
if (var19){
var25 = NULL;
var = var25;
goto RET_LABEL;
} else {
}
{
var26 = more_collections___more_collections__HashMap2____91d_93d(var_level2, var_k2, var_k3);
}
var = var26;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method more_collections#HashMap3#[]= for (self: HashMap3[nullable Object, nullable Object, nullable Object, nullable Object], nullable Object, nullable Object, nullable Object, nullable Object) */
void more_collections___more_collections__HashMap3____91d_93d_61d(val* self, val* p0, val* p1, val* p2, val* p3) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
short int var1 /* : Bool */;
int cltype2;
int idtype3;
const struct type* type_struct4;
short int is_nullable5;
const char* var_class_name6;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const struct type* type_struct10;
short int is_nullable11;
const char* var_class_name12;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const struct type* type_struct16;
short int is_nullable17;
const char* var_class_name18;
val* var_k1 /* var k1: nullable Object */;
val* var_k2 /* var k2: nullable Object */;
val* var_k3 /* var k3: nullable Object */;
val* var_v /* var v: nullable Object */;
val* var19 /* : HashMap[nullable Object, HashMap2[nullable Object, nullable Object, nullable Object]] */;
val* var21 /* : HashMap[nullable Object, HashMap2[nullable Object, nullable Object, nullable Object]] */;
val* var_level1 /* var level1: HashMap[nullable Object, HashMap2[nullable Object, nullable Object, nullable Object]] */;
val* var22 /* : nullable Object */;
val* var_level2 /* var level2: nullable HashMap2[nullable Object, nullable Object, nullable Object] */;
val* var23 /* : null */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : HashMap2[nullable Object, nullable Object, nullable Object] */;
/* Covariant cast for argument 0 (k1) <p0:nullable Object> isa K1 */
/* <p0:nullable Object> isa K1 */
type_struct = self->type->resolution_table->types[COLOR_more_collections__HashMap3___35dK1];
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K1", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 120);
show_backtrace(1);
}
/* Covariant cast for argument 1 (k2) <p1:nullable Object> isa K2 */
/* <p1:nullable Object> isa K2 */
type_struct4 = self->type->resolution_table->types[COLOR_more_collections__HashMap3___35dK2];
cltype2 = type_struct4->color;
idtype3 = type_struct4->id;
is_nullable5 = type_struct4->is_nullable;
if(p1 == NULL) {
var1 = is_nullable5;
} else {
if(cltype2 >= p1->type->table_size) {
var1 = 0;
} else {
var1 = p1->type->type_table[cltype2] == idtype3;
}
}
if (unlikely(!var1)) {
var_class_name6 = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K2", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 120);
show_backtrace(1);
}
/* Covariant cast for argument 2 (k3) <p2:nullable Object> isa K3 */
/* <p2:nullable Object> isa K3 */
type_struct10 = self->type->resolution_table->types[COLOR_more_collections__HashMap3___35dK3];
cltype8 = type_struct10->color;
idtype9 = type_struct10->id;
is_nullable11 = type_struct10->is_nullable;
if(p2 == NULL) {
var7 = is_nullable11;
} else {
if(cltype8 >= p2->type->table_size) {
var7 = 0;
} else {
var7 = p2->type->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
var_class_name12 = p2 == NULL ? "null" : p2->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K3", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 120);
show_backtrace(1);
}
/* Covariant cast for argument 3 (v) <p3:nullable Object> isa V */
/* <p3:nullable Object> isa V */
type_struct16 = self->type->resolution_table->types[COLOR_more_collections__HashMap3___35dV];
cltype14 = type_struct16->color;
idtype15 = type_struct16->id;
is_nullable17 = type_struct16->is_nullable;
if(p3 == NULL) {
var13 = is_nullable17;
} else {
if(cltype14 >= p3->type->table_size) {
var13 = 0;
} else {
var13 = p3->type->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
var_class_name18 = p3 == NULL ? "null" : p3->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "V", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 120);
show_backtrace(1);
}
var_k1 = p0;
var_k2 = p1;
var_k3 = p2;
var_v = p3;
{
{ /* Inline more_collections#HashMap3#level1 (self) on <self:HashMap3[nullable Object, nullable Object, nullable Object, nullable Object]> */
var21 = self->attrs[COLOR_more_collections__HashMap3___level1].val; /* _level1 on <self:HashMap3[nullable Object, nullable Object, nullable Object, nullable Object]> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _level1");
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 108);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
var_level1 = var19;
{
var22 = standard___standard__HashMap___standard__abstract_collection__MapRead__get_or_null(var_level1, var_k1);
}
var_level2 = var22;
var23 = NULL;
if (var_level2 == NULL) {
var24 = 1; /* is null */
} else {
var24 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_level2,var23) on <var_level2:nullable HashMap2[nullable Object, nullable Object, nullable Object]> */
var_other = var23;
{
{ /* Inline kernel#Object#is_same_instance (var_level2,var_other) on <var_level2:nullable HashMap2[nullable Object, nullable Object, nullable Object](HashMap2[nullable Object, nullable Object, nullable Object])> */
var29 = var_level2 == var_other;
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var24 = var25;
}
if (var24){
var30 = NEW_more_collections__HashMap2(self->type->resolution_table->types[COLOR_more_collections__HashMap2__more_collections__HashMap3___35dK2__more_collections__HashMap3___35dK3__more_collections__HashMap3___35dV]);
{
{ /* Inline kernel#Object#init (var30) on <var30:HashMap2[nullable Object, nullable Object, nullable Object]> */
RET_LABEL31:(void)0;
}
}
var_level2 = var30;
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var_level1, var_k1, var_level2); /* Direct call hash_collection#HashMap#[]= on <var_level1:HashMap[nullable Object, HashMap2[nullable Object, nullable Object, nullable Object]]>*/
}
} else {
}
{
more_collections___more_collections__HashMap2____91d_93d_61d(var_level2, var_k2, var_k3, var_v); /* Direct call more_collections#HashMap2#[]= on <var_level2:nullable HashMap2[nullable Object, nullable Object, nullable Object](HashMap2[nullable Object, nullable Object, nullable Object])>*/
}
RET_LABEL:;
}
