#include "more_collections.sep.0.h"
/* method more_collections$MultiHashMap$add_one for (self: MultiHashMap[nullable Object, nullable Object], nullable Object, nullable Object) */
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
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : Array[nullable Object] */;
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
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 37);
fatal_exit(1);
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
if(cltype2 >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype2] == idtype3;
}
}
if (unlikely(!var1)) {
var_class_name6 = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "V", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 37);
fatal_exit(1);
}
var_k = p0;
var_v = p1;
{
var7 = core___core__HashMap___core__abstract_collection__MapRead__get_or_null(self, var_k);
}
var_x = var7;
if (var_x == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_x,((val*)NULL)) on <var_x:nullable Array[nullable Object]> */
var_other = ((val*)NULL);
{
var11 = ((short int(*)(val* self, val* p0))(var_x->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_x, var_other); /* == on <var_x:nullable Array[nullable Object](Array[nullable Object])>*/
}
var12 = !var11;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
if (var8){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_x, var_v); /* Direct call array$Array$add on <var_x:nullable Array[nullable Object](Array[nullable Object])>*/
}
} else {
var13 = NEW_core__Array(self->type->resolution_table->types[COLOR_core__Array__more_collections__MultiHashMap___35dV]);
{
core___core__Array___with_capacity(var13, 1l); /* Direct call array$Array$with_capacity on <var13:Array[nullable Object]>*/
}
var_ = var13;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_v); /* Direct call array$AbstractArray$push on <var_:Array[nullable Object]>*/
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(self, var_k, var_); /* Direct call hash_collection$HashMap$[]= on <self:MultiHashMap[nullable Object, nullable Object]>*/
}
}
RET_LABEL:;
}
/* method more_collections$MultiHashMap$provide_default_value for (self: MultiHashMap[nullable Object, nullable Object], nullable Object): Array[nullable Object] */
val* more_collections___more_collections__MultiHashMap___core__abstract_collection__MapRead__provide_default_value(val* self, val* p0) {
val* var /* : Array[nullable Object] */;
val* var_key /* var key: nullable Object */;
val* var1 /* : Array[nullable Object] */;
val* var_res /* var res: Array[nullable Object] */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
var_key = p0;
var1 = NEW_core__Array(self->type->resolution_table->types[COLOR_core__Array__more_collections__MultiHashMap___35dV]);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array$Array$init on <var1:Array[nullable Object]>*/
}
var_res = var1;
/* <var_key:nullable Object> isa K */
type_struct = self->type->resolution_table->types[COLOR_more_collections__MultiHashMap___35dK];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(var_key == NULL) {
var2 = is_nullable;
} else {
if(cltype >= (((long)var_key&3)?type_info[((long)var_key&3)]:var_key->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_key&3)?type_info[((long)var_key&3)]:var_key->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
var_class_name = var_key == NULL ? "null" : (((long)var_key&3)?type_info[((long)var_key&3)]:var_key->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 51);
fatal_exit(1);
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(self, var_key, var_res); /* Direct call hash_collection$HashMap$[]= on <self:MultiHashMap[nullable Object, nullable Object]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method more_collections$HashMap2$level1 for (self: HashMap2[nullable Object, nullable Object, nullable Object]): HashMap[nullable Object, HashMap[nullable Object, nullable Object]] */
val* more_collections___more_collections__HashMap2___level1(val* self) {
val* var /* : HashMap[nullable Object, HashMap[nullable Object, nullable Object]] */;
val* var1 /* : HashMap[nullable Object, HashMap[nullable Object, nullable Object]] */;
var1 = self->attrs[COLOR_more_collections__HashMap2___level1].val; /* _level1 on <self:HashMap2[nullable Object, nullable Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _level1");
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 67);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method more_collections$HashMap2$[] for (self: HashMap2[nullable Object, nullable Object, nullable Object], nullable Object, nullable Object): nullable Object */
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
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
/* Covariant cast for argument 0 (k1) <p0:nullable Object> isa K1 */
/* <p0:nullable Object> isa K1 */
type_struct = self->type->resolution_table->types[COLOR_more_collections__HashMap2___35dK1];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K1", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 69);
fatal_exit(1);
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
if(cltype3 >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype3] == idtype4;
}
}
if (unlikely(!var2)) {
var_class_name7 = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K2", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 69);
fatal_exit(1);
}
var_k1 = p0;
var_k2 = p1;
{
{ /* Inline more_collections$HashMap2$level1 (self) on <self:HashMap2[nullable Object, nullable Object, nullable Object]> */
var10 = self->attrs[COLOR_more_collections__HashMap2___level1].val; /* _level1 on <self:HashMap2[nullable Object, nullable Object, nullable Object]> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _level1");
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 67);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_level1 = var8;
{
var11 = core___core__HashMap___core__abstract_collection__MapRead__get_or_null(var_level1, var_k1);
}
var_level2 = var11;
if (var_level2 == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
var13 = core___core__MapRead___core__kernel__Object___61d_61d(var_level2, ((val*)NULL));
var12 = var13;
}
if (var12){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var14 = core___core__HashMap___core__abstract_collection__MapRead__get_or_null(var_level2, var_k2);
}
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method more_collections$HashMap2$[]= for (self: HashMap2[nullable Object, nullable Object, nullable Object], nullable Object, nullable Object, nullable Object) */
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
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : HashMap[nullable Object, nullable Object] */;
/* Covariant cast for argument 0 (k1) <p0:nullable Object> isa K1 */
/* <p0:nullable Object> isa K1 */
type_struct = self->type->resolution_table->types[COLOR_more_collections__HashMap2___35dK1];
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K1", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 79);
fatal_exit(1);
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
if(cltype2 >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype2] == idtype3;
}
}
if (unlikely(!var1)) {
var_class_name6 = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K2", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 79);
fatal_exit(1);
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
if(cltype8 >= (((long)p2&3)?type_info[((long)p2&3)]:p2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)p2&3)?type_info[((long)p2&3)]:p2->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
var_class_name12 = p2 == NULL ? "null" : (((long)p2&3)?type_info[((long)p2&3)]:p2->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "V", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 79);
fatal_exit(1);
}
var_k1 = p0;
var_k2 = p1;
var_v = p2;
{
{ /* Inline more_collections$HashMap2$level1 (self) on <self:HashMap2[nullable Object, nullable Object, nullable Object]> */
var15 = self->attrs[COLOR_more_collections__HashMap2___level1].val; /* _level1 on <self:HashMap2[nullable Object, nullable Object, nullable Object]> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _level1");
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 67);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_level1 = var13;
{
var16 = core___core__HashMap___core__abstract_collection__MapRead__get_or_null(var_level1, var_k1);
}
var_level2 = var16;
if (var_level2 == NULL) {
var17 = 1; /* is null */
} else {
var17 = 0; /* arg is null but recv is not */
}
if (0) {
var18 = core___core__MapRead___core__kernel__Object___61d_61d(var_level2, ((val*)NULL));
var17 = var18;
}
if (var17){
var19 = NEW_core__HashMap(self->type->resolution_table->types[COLOR_core__HashMap__more_collections__HashMap2___35dK2__more_collections__HashMap2___35dV]);
{
core___core__HashMap___core__kernel__Object__init(var19); /* Direct call hash_collection$HashMap$init on <var19:HashMap[nullable Object, nullable Object]>*/
}
var_level2 = var19;
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_level1, var_k1, var_level2); /* Direct call hash_collection$HashMap$[]= on <var_level1:HashMap[nullable Object, HashMap[nullable Object, nullable Object]]>*/
}
} else {
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_level2, var_k2, var_v); /* Direct call hash_collection$HashMap$[]= on <var_level2:nullable HashMap[nullable Object, nullable Object](HashMap[nullable Object, nullable Object])>*/
}
RET_LABEL:;
}
/* method more_collections$HashMap3$level1 for (self: HashMap3[nullable Object, nullable Object, nullable Object, nullable Object]): HashMap[nullable Object, HashMap2[nullable Object, nullable Object, nullable Object]] */
val* more_collections___more_collections__HashMap3___level1(val* self) {
val* var /* : HashMap[nullable Object, HashMap2[nullable Object, nullable Object, nullable Object]] */;
val* var1 /* : HashMap[nullable Object, HashMap2[nullable Object, nullable Object, nullable Object]] */;
var1 = self->attrs[COLOR_more_collections__HashMap3___level1].val; /* _level1 on <self:HashMap3[nullable Object, nullable Object, nullable Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _level1");
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 122);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method more_collections$HashMap3$[] for (self: HashMap3[nullable Object, nullable Object, nullable Object, nullable Object], nullable Object, nullable Object, nullable Object): nullable Object */
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
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
val* var24 /* : nullable Object */;
/* Covariant cast for argument 0 (k1) <p0:nullable Object> isa K1 */
/* <p0:nullable Object> isa K1 */
type_struct = self->type->resolution_table->types[COLOR_more_collections__HashMap3___35dK1];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K1", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 124);
fatal_exit(1);
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
if(cltype3 >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype3] == idtype4;
}
}
if (unlikely(!var2)) {
var_class_name7 = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K2", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 124);
fatal_exit(1);
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
if(cltype9 >= (((long)p2&3)?type_info[((long)p2&3)]:p2->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)p2&3)?type_info[((long)p2&3)]:p2->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
var_class_name13 = p2 == NULL ? "null" : (((long)p2&3)?type_info[((long)p2&3)]:p2->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K3", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 124);
fatal_exit(1);
}
var_k1 = p0;
var_k2 = p1;
var_k3 = p2;
{
{ /* Inline more_collections$HashMap3$level1 (self) on <self:HashMap3[nullable Object, nullable Object, nullable Object, nullable Object]> */
var16 = self->attrs[COLOR_more_collections__HashMap3___level1].val; /* _level1 on <self:HashMap3[nullable Object, nullable Object, nullable Object, nullable Object]> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _level1");
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 122);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
var_level1 = var14;
{
var17 = core___core__HashMap___core__abstract_collection__MapRead__get_or_null(var_level1, var_k1);
}
var_level2 = var17;
if (var_level2 == NULL) {
var18 = 1; /* is null */
} else {
var18 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_level2,((val*)NULL)) on <var_level2:nullable HashMap2[nullable Object, nullable Object, nullable Object]> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_level2,var_other) on <var_level2:nullable HashMap2[nullable Object, nullable Object, nullable Object](HashMap2[nullable Object, nullable Object, nullable Object])> */
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
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var24 = more_collections___more_collections__HashMap2____91d_93d(var_level2, var_k2, var_k3);
}
var = var24;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method more_collections$HashMap3$[]= for (self: HashMap3[nullable Object, nullable Object, nullable Object, nullable Object], nullable Object, nullable Object, nullable Object, nullable Object) */
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
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : HashMap2[nullable Object, nullable Object, nullable Object] */;
/* Covariant cast for argument 0 (k1) <p0:nullable Object> isa K1 */
/* <p0:nullable Object> isa K1 */
type_struct = self->type->resolution_table->types[COLOR_more_collections__HashMap3___35dK1];
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K1", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 134);
fatal_exit(1);
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
if(cltype2 >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype2] == idtype3;
}
}
if (unlikely(!var1)) {
var_class_name6 = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K2", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 134);
fatal_exit(1);
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
if(cltype8 >= (((long)p2&3)?type_info[((long)p2&3)]:p2->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)p2&3)?type_info[((long)p2&3)]:p2->type)->type_table[cltype8] == idtype9;
}
}
if (unlikely(!var7)) {
var_class_name12 = p2 == NULL ? "null" : (((long)p2&3)?type_info[((long)p2&3)]:p2->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "K3", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 134);
fatal_exit(1);
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
if(cltype14 >= (((long)p3&3)?type_info[((long)p3&3)]:p3->type)->table_size) {
var13 = 0;
} else {
var13 = (((long)p3&3)?type_info[((long)p3&3)]:p3->type)->type_table[cltype14] == idtype15;
}
}
if (unlikely(!var13)) {
var_class_name18 = p3 == NULL ? "null" : (((long)p3&3)?type_info[((long)p3&3)]:p3->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "V", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 134);
fatal_exit(1);
}
var_k1 = p0;
var_k2 = p1;
var_k3 = p2;
var_v = p3;
{
{ /* Inline more_collections$HashMap3$level1 (self) on <self:HashMap3[nullable Object, nullable Object, nullable Object, nullable Object]> */
var21 = self->attrs[COLOR_more_collections__HashMap3___level1].val; /* _level1 on <self:HashMap3[nullable Object, nullable Object, nullable Object, nullable Object]> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _level1");
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 122);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
var_level1 = var19;
{
var22 = core___core__HashMap___core__abstract_collection__MapRead__get_or_null(var_level1, var_k1);
}
var_level2 = var22;
if (var_level2 == NULL) {
var23 = 1; /* is null */
} else {
var23 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_level2,((val*)NULL)) on <var_level2:nullable HashMap2[nullable Object, nullable Object, nullable Object]> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_level2,var_other) on <var_level2:nullable HashMap2[nullable Object, nullable Object, nullable Object](HashMap2[nullable Object, nullable Object, nullable Object])> */
var28 = var_level2 == var_other;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
var23 = var24;
}
if (var23){
var29 = NEW_more_collections__HashMap2(self->type->resolution_table->types[COLOR_more_collections__HashMap2__more_collections__HashMap3___35dK2__more_collections__HashMap3___35dK3__more_collections__HashMap3___35dV]);
{
{ /* Inline kernel$Object$init (var29) on <var29:HashMap2[nullable Object, nullable Object, nullable Object]> */
RET_LABEL30:(void)0;
}
}
var_level2 = var29;
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_level1, var_k1, var_level2); /* Direct call hash_collection$HashMap$[]= on <var_level1:HashMap[nullable Object, HashMap2[nullable Object, nullable Object, nullable Object]]>*/
}
} else {
}
{
more_collections___more_collections__HashMap2____91d_93d_61d(var_level2, var_k2, var_k3, var_v); /* Direct call more_collections$HashMap2$[]= on <var_level2:nullable HashMap2[nullable Object, nullable Object, nullable Object](HashMap2[nullable Object, nullable Object, nullable Object])>*/
}
RET_LABEL:;
}
/* method more_collections$BestDistance$best_distance for (self: BestDistance[nullable Object]): Int */
long more_collections___more_collections__BestDistance___best_distance(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_more_collections__BestDistance___best_distance].l; /* _best_distance on <self:BestDistance[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method more_collections$BestDistance$best_distance= for (self: BestDistance[nullable Object], Int) */
void more_collections___more_collections__BestDistance___best_distance_61d(val* self, long p0) {
self->attrs[COLOR_more_collections__BestDistance___best_distance].l = p0; /* _best_distance on <self:BestDistance[nullable Object]> */
RET_LABEL:;
}
/* method more_collections$BestDistance$best_items for (self: BestDistance[nullable Object]): Set[nullable Object] */
val* more_collections___more_collections__BestDistance___best_items(val* self) {
val* var /* : Set[nullable Object] */;
val* var1 /* : Set[nullable Object] */;
var1 = self->attrs[COLOR_more_collections__BestDistance___best_items].val; /* _best_items on <self:BestDistance[nullable Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _best_items");
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 562);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method more_collections$BestDistance$update for (self: BestDistance[nullable Object], Int, nullable Object): Bool */
short int more_collections___more_collections__BestDistance___update(val* self, long p0, val* p1) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
long var_distance /* var distance: Int */;
val* var_candidate /* var candidate: nullable Object */;
long var2 /* : Int */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
short int var11 /* : Bool */;
long var12 /* : Int */;
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
val* var23 /* : Set[nullable Object] */;
val* var25 /* : Set[nullable Object] */;
val* var26 /* : Set[nullable Object] */;
val* var28 /* : Set[nullable Object] */;
/* Covariant cast for argument 1 (candidate) <p1:nullable Object> isa E */
/* <p1:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_more_collections__BestDistance___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p1 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 565);
fatal_exit(1);
}
var_distance = p0;
var_candidate = p1;
{
{ /* Inline more_collections$BestDistance$best_distance (self) on <self:BestDistance[nullable Object]> */
var4 = self->attrs[COLOR_more_collections__BestDistance___best_distance].l; /* _best_distance on <self:BestDistance[nullable Object]> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var_distance,var2) on <var_distance:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var7 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var11 = var_distance > var2;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline more_collections$BestDistance$best_distance (self) on <self:BestDistance[nullable Object]> */
var14 = self->attrs[COLOR_more_collections__BestDistance___best_distance].l; /* _best_distance on <self:BestDistance[nullable Object]> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline kernel$Int$< (var_distance,var12) on <var_distance:Int> */
/* Covariant cast for argument 0 (i) <var12:Int> isa OTHER */
/* <var12:Int> isa OTHER */
var17 = 1; /* easy <var12:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var21 = var_distance < var12;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
{
{ /* Inline more_collections$BestDistance$best_distance= (self,var_distance) on <self:BestDistance[nullable Object]> */
self->attrs[COLOR_more_collections__BestDistance___best_distance].l = var_distance; /* _best_distance on <self:BestDistance[nullable Object]> */
RET_LABEL22:(void)0;
}
}
{
{ /* Inline more_collections$BestDistance$best_items (self) on <self:BestDistance[nullable Object]> */
var25 = self->attrs[COLOR_more_collections__BestDistance___best_items].val; /* _best_items on <self:BestDistance[nullable Object]> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _best_items");
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 562);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
((void(*)(val* self))((((long)var23&3)?class_info[((long)var23&3)]:var23->class)->vft[COLOR_core__abstract_collection__RemovableCollection__clear]))(var23); /* clear on <var23:Set[nullable Object]>*/
}
} else {
}
{
{ /* Inline more_collections$BestDistance$best_items (self) on <self:BestDistance[nullable Object]> */
var28 = self->attrs[COLOR_more_collections__BestDistance___best_items].val; /* _best_items on <self:BestDistance[nullable Object]> */
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _best_items");
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 562);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
((void(*)(val* self, val* p0))((((long)var26&3)?class_info[((long)var26&3)]:var26->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var26, var_candidate); /* add on <var26:Set[nullable Object]>*/
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method more_collections$BestDistance$init for (self: BestDistance[nullable Object]) */
void more_collections___more_collections__BestDistance___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_more_collections___more_collections__BestDistance___core__kernel__Object__init]))(self); /* init on <self:BestDistance[nullable Object]>*/
}
RET_LABEL:;
}
