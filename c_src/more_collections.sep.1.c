#include "more_collections.sep.0.h"
/* method more_collections#MultiHashMap#add_one for (self: MultiHashMap[Object, nullable Object], Object, nullable Object) */
void more_collections__MultiHashMap__add_one(val* self, val* p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var1 /* : Bool */;
int cltype2;
int idtype3;
const struct type* type_struct4;
short int is_nullable;
const char* var_class_name5;
val* var_k /* var k: Object */;
val* var_v /* var v: nullable Object */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var8 /* : Array[nullable Object] */;
long var9 /* : Int */;
val* var_ /* var : Array[nullable Object] */;
/* Covariant cast for argument 0 (k) <p0:Object> isa MultiHashMap#0 */
/* <p0:Object> isa MultiHashMap#0 */
type_struct = self->type->resolution_table->types[COLOR_more_collections__MultiHashMap_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MultiHashMap#0", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/more_collections.nit", 35);
show_backtrace(1);
}
/* Covariant cast for argument 1 (v) <p1:nullable Object> isa MultiHashMap#1 */
/* <p1:nullable Object> isa MultiHashMap#1 */
type_struct4 = self->type->resolution_table->types[COLOR_more_collections__MultiHashMap_FT1];
cltype2 = type_struct4->color;
idtype3 = type_struct4->id;
is_nullable = type_struct4->is_nullable;
if(p1 == NULL) {
var1 = is_nullable;
} else {
if(cltype2 >= p1->type->table_size) {
var1 = 0;
} else {
var1 = p1->type->type_table[cltype2] == idtype3;
}
}
if (unlikely(!var1)) {
var_class_name5 = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MultiHashMap#1", var_class_name5);
PRINT_ERROR(" (%s:%d)\n", "lib/more_collections.nit", 35);
show_backtrace(1);
}
var_k = p0;
var_v = p1;
{
var6 = abstract_collection__MapRead__has_key(self, var_k);
}
if (var6){
{
var7 = hash_collection__HashMap___91d_93d(self, var_k);
}
{
array__Array__add(var7, var_v); /* Direct call array#Array#add on <var7:nullable Object(Array[nullable Object])>*/
}
} else {
var8 = NEW_array__Array(self->type->resolution_table->types[COLOR_array__Arraymore_collections__MultiHashMap_FT1]);
var9 = 1;
{
array__Array__with_capacity(var8, var9); /* Direct call array#Array#with_capacity on <var8:Array[nullable Object]>*/
}
var_ = var8;
{
array__AbstractArray__push(var_, var_v); /* Direct call array#AbstractArray#push on <var_:Array[nullable Object]>*/
}
{
hash_collection__HashMap___91d_93d_61d(self, var_k, var_); /* Direct call hash_collection#HashMap#[]= on <self:MultiHashMap[Object, nullable Object]>*/
}
}
RET_LABEL:;
}
/* method more_collections#MultiHashMap#add_one for (self: Object, Object, nullable Object) */
void VIRTUAL_more_collections__MultiHashMap__add_one(val* self, val* p0, val* p1) {
more_collections__MultiHashMap__add_one(self, p0, p1); /* Direct call more_collections#MultiHashMap#add_one on <self:Object(MultiHashMap[Object, nullable Object])>*/
RET_LABEL:;
}
/* method more_collections#MultiHashMap#provide_default_value for (self: MultiHashMap[Object, nullable Object], Object): Array[nullable Object] */
val* more_collections__MultiHashMap__provide_default_value(val* self, val* p0) {
val* var /* : Array[nullable Object] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_key /* var key: Object */;
val* var2 /* : Array[nullable Object] */;
val* var_res /* var res: Array[nullable Object] */;
/* Covariant cast for argument 0 (key) <p0:Object> isa MapRead#0 */
/* <p0:Object> isa MapRead#0 */
type_struct = self->type->resolution_table->types[COLOR_abstract_collection__MapRead_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MapRead#0", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/more_collections.nit", 46);
show_backtrace(1);
}
var_key = p0;
var2 = NEW_array__Array(self->type->resolution_table->types[COLOR_array__Arraymore_collections__MultiHashMap_FT1]);
{
array__Array__init(var2); /* Direct call array#Array#init on <var2:Array[nullable Object]>*/
}
var_res = var2;
{
hash_collection__HashMap___91d_93d_61d(self, var_key, var_res); /* Direct call hash_collection#HashMap#[]= on <self:MultiHashMap[Object, nullable Object]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method more_collections#MultiHashMap#provide_default_value for (self: Object, Object): nullable Object */
val* VIRTUAL_more_collections__MultiHashMap__provide_default_value(val* self, val* p0) {
val* var /* : nullable Object */;
val* var1 /* : Array[nullable Object] */;
var1 = more_collections__MultiHashMap__provide_default_value(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method more_collections#MultiHashMap#init for (self: MultiHashMap[Object, nullable Object]) */
void more_collections__MultiHashMap__init(val* self) {
{
hash_collection__HashMap__init(self); /* Direct call hash_collection#HashMap#init on <self:MultiHashMap[Object, nullable Object]>*/
}
RET_LABEL:;
}
/* method more_collections#MultiHashMap#init for (self: Object) */
void VIRTUAL_more_collections__MultiHashMap__init(val* self) {
more_collections__MultiHashMap__init(self); /* Direct call more_collections#MultiHashMap#init on <self:Object(MultiHashMap[Object, nullable Object])>*/
RET_LABEL:;
}
/* method more_collections#HashMap2#level1 for (self: HashMap2[Object, Object, nullable Object]): HashMap[Object, HashMap[Object, nullable Object]] */
val* more_collections__HashMap2__level1(val* self) {
val* var /* : HashMap[Object, HashMap[Object, nullable Object]] */;
val* var1 /* : HashMap[Object, HashMap[Object, nullable Object]] */;
var1 = self->attrs[COLOR_more_collections__HashMap2___level1].val; /* _level1 on <self:HashMap2[Object, Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _level1");
PRINT_ERROR(" (%s:%d)\n", "lib/more_collections.nit", 57);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method more_collections#HashMap2#level1 for (self: Object): HashMap[Object, HashMap[Object, nullable Object]] */
val* VIRTUAL_more_collections__HashMap2__level1(val* self) {
val* var /* : HashMap[Object, HashMap[Object, nullable Object]] */;
val* var1 /* : HashMap[Object, HashMap[Object, nullable Object]] */;
val* var3 /* : HashMap[Object, HashMap[Object, nullable Object]] */;
{ /* Inline more_collections#HashMap2#level1 (self) on <self:Object(HashMap2[Object, Object, nullable Object])> */
var3 = self->attrs[COLOR_more_collections__HashMap2___level1].val; /* _level1 on <self:Object(HashMap2[Object, Object, nullable Object])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _level1");
PRINT_ERROR(" (%s:%d)\n", "lib/more_collections.nit", 57);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method more_collections#HashMap2#[] for (self: HashMap2[Object, Object, nullable Object], Object, Object): nullable Object */
val* more_collections__HashMap2___91d_93d(val* self, val* p0, val* p1) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
const char* var_class_name6;
val* var_k1 /* var k1: Object */;
val* var_k2 /* var k2: Object */;
val* var7 /* : HashMap[Object, HashMap[Object, nullable Object]] */;
val* var9 /* : HashMap[Object, HashMap[Object, nullable Object]] */;
val* var_level1 /* var level1: HashMap[Object, HashMap[Object, nullable Object]] */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : null */;
val* var13 /* : nullable Object */;
val* var_level2 /* var level2: HashMap[Object, nullable Object] */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : null */;
val* var17 /* : nullable Object */;
/* Covariant cast for argument 0 (k1) <p0:Object> isa HashMap2#0 */
/* <p0:Object> isa HashMap2#0 */
type_struct = self->type->resolution_table->types[COLOR_more_collections__HashMap2_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap2#0", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/more_collections.nit", 59);
show_backtrace(1);
}
/* Covariant cast for argument 1 (k2) <p1:Object> isa HashMap2#1 */
/* <p1:Object> isa HashMap2#1 */
type_struct5 = self->type->resolution_table->types[COLOR_more_collections__HashMap2_FT1];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
if(cltype3 >= p1->type->table_size) {
var2 = 0;
} else {
var2 = p1->type->type_table[cltype3] == idtype4;
}
if (unlikely(!var2)) {
var_class_name6 = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap2#1", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", "lib/more_collections.nit", 59);
show_backtrace(1);
}
var_k1 = p0;
var_k2 = p1;
{
{ /* Inline more_collections#HashMap2#level1 (self) on <self:HashMap2[Object, Object, nullable Object]> */
var9 = self->attrs[COLOR_more_collections__HashMap2___level1].val; /* _level1 on <self:HashMap2[Object, Object, nullable Object]> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _level1");
PRINT_ERROR(" (%s:%d)\n", "lib/more_collections.nit", 57);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_level1 = var7;
{
var10 = abstract_collection__MapRead__has_key(var_level1, var_k1);
}
var11 = !var10;
if (var11){
var12 = NULL;
var = var12;
goto RET_LABEL;
} else {
}
{
var13 = hash_collection__HashMap___91d_93d(var_level1, var_k1);
}
var_level2 = var13;
{
var14 = abstract_collection__MapRead__has_key(var_level2, var_k2);
}
var15 = !var14;
if (var15){
var16 = NULL;
var = var16;
goto RET_LABEL;
} else {
}
{
var17 = hash_collection__HashMap___91d_93d(var_level2, var_k2);
}
var = var17;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method more_collections#HashMap2#[] for (self: Object, Object, Object): nullable Object */
val* VIRTUAL_more_collections__HashMap2___91d_93d(val* self, val* p0, val* p1) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = more_collections__HashMap2___91d_93d(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method more_collections#HashMap2#[]= for (self: HashMap2[Object, Object, nullable Object], Object, Object, nullable Object) */
void more_collections__HashMap2___91d_93d_61d(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var1 /* : Bool */;
int cltype2;
int idtype3;
const struct type* type_struct4;
const char* var_class_name5;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const struct type* type_struct9;
short int is_nullable;
const char* var_class_name10;
val* var_k1 /* var k1: Object */;
val* var_k2 /* var k2: Object */;
val* var_v /* var v: nullable Object */;
val* var11 /* : HashMap[Object, HashMap[Object, nullable Object]] */;
val* var13 /* : HashMap[Object, HashMap[Object, nullable Object]] */;
val* var_level1 /* var level1: HashMap[Object, HashMap[Object, nullable Object]] */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : HashMap[Object, nullable Object] */;
val* var_level2 /* var level2: HashMap[Object, nullable Object] */;
val* var17 /* : nullable Object */;
/* Covariant cast for argument 0 (k1) <p0:Object> isa HashMap2#0 */
/* <p0:Object> isa HashMap2#0 */
type_struct = self->type->resolution_table->types[COLOR_more_collections__HashMap2_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap2#0", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/more_collections.nit", 70);
show_backtrace(1);
}
/* Covariant cast for argument 1 (k2) <p1:Object> isa HashMap2#1 */
/* <p1:Object> isa HashMap2#1 */
type_struct4 = self->type->resolution_table->types[COLOR_more_collections__HashMap2_FT1];
cltype2 = type_struct4->color;
idtype3 = type_struct4->id;
if(cltype2 >= p1->type->table_size) {
var1 = 0;
} else {
var1 = p1->type->type_table[cltype2] == idtype3;
}
if (unlikely(!var1)) {
var_class_name5 = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap2#1", var_class_name5);
PRINT_ERROR(" (%s:%d)\n", "lib/more_collections.nit", 70);
show_backtrace(1);
}
/* Covariant cast for argument 2 (v) <p2:nullable Object> isa HashMap2#2 */
/* <p2:nullable Object> isa HashMap2#2 */
type_struct9 = self->type->resolution_table->types[COLOR_more_collections__HashMap2_FT2];
cltype7 = type_struct9->color;
idtype8 = type_struct9->id;
is_nullable = type_struct9->is_nullable;
if(p2 == NULL) {
var6 = is_nullable;
} else {
if(cltype7 >= p2->type->table_size) {
var6 = 0;
} else {
var6 = p2->type->type_table[cltype7] == idtype8;
}
}
if (unlikely(!var6)) {
var_class_name10 = p2 == NULL ? "null" : p2->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap2#2", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", "lib/more_collections.nit", 70);
show_backtrace(1);
}
var_k1 = p0;
var_k2 = p1;
var_v = p2;
{
{ /* Inline more_collections#HashMap2#level1 (self) on <self:HashMap2[Object, Object, nullable Object]> */
var13 = self->attrs[COLOR_more_collections__HashMap2___level1].val; /* _level1 on <self:HashMap2[Object, Object, nullable Object]> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _level1");
PRINT_ERROR(" (%s:%d)\n", "lib/more_collections.nit", 57);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
var_level1 = var11;
{
var14 = abstract_collection__MapRead__has_key(var_level1, var_k1);
}
var15 = !var14;
if (var15){
var16 = NEW_hash_collection__HashMap(self->type->resolution_table->types[COLOR_hash_collection__HashMapmore_collections__HashMap2_FT1more_collections__HashMap2_FT2]);
{
hash_collection__HashMap__init(var16); /* Direct call hash_collection#HashMap#init on <var16:HashMap[Object, nullable Object]>*/
}
var_level2 = var16;
{
hash_collection__HashMap___91d_93d_61d(var_level1, var_k1, var_level2); /* Direct call hash_collection#HashMap#[]= on <var_level1:HashMap[Object, HashMap[Object, nullable Object]]>*/
}
} else {
{
var17 = hash_collection__HashMap___91d_93d(var_level1, var_k1);
}
var_level2 = var17;
}
{
hash_collection__HashMap___91d_93d_61d(var_level2, var_k2, var_v); /* Direct call hash_collection#HashMap#[]= on <var_level2:HashMap[Object, nullable Object]>*/
}
RET_LABEL:;
}
/* method more_collections#HashMap2#[]= for (self: Object, Object, Object, nullable Object) */
void VIRTUAL_more_collections__HashMap2___91d_93d_61d(val* self, val* p0, val* p1, val* p2) {
more_collections__HashMap2___91d_93d_61d(self, p0, p1, p2); /* Direct call more_collections#HashMap2#[]= on <self:Object(HashMap2[Object, Object, nullable Object])>*/
RET_LABEL:;
}
/* method more_collections#HashMap2#init for (self: HashMap2[Object, Object, nullable Object]) */
void more_collections__HashMap2__init(val* self) {
RET_LABEL:;
}
/* method more_collections#HashMap2#init for (self: Object) */
void VIRTUAL_more_collections__HashMap2__init(val* self) {
{ /* Inline more_collections#HashMap2#init (self) on <self:Object(HashMap2[Object, Object, nullable Object])> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method more_collections#HashMap3#level1 for (self: HashMap3[Object, Object, Object, nullable Object]): HashMap[Object, HashMap2[Object, Object, nullable Object]] */
val* more_collections__HashMap3__level1(val* self) {
val* var /* : HashMap[Object, HashMap2[Object, Object, nullable Object]] */;
val* var1 /* : HashMap[Object, HashMap2[Object, Object, nullable Object]] */;
var1 = self->attrs[COLOR_more_collections__HashMap3___level1].val; /* _level1 on <self:HashMap3[Object, Object, Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _level1");
PRINT_ERROR(" (%s:%d)\n", "lib/more_collections.nit", 87);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method more_collections#HashMap3#level1 for (self: Object): HashMap[Object, HashMap2[Object, Object, nullable Object]] */
val* VIRTUAL_more_collections__HashMap3__level1(val* self) {
val* var /* : HashMap[Object, HashMap2[Object, Object, nullable Object]] */;
val* var1 /* : HashMap[Object, HashMap2[Object, Object, nullable Object]] */;
val* var3 /* : HashMap[Object, HashMap2[Object, Object, nullable Object]] */;
{ /* Inline more_collections#HashMap3#level1 (self) on <self:Object(HashMap3[Object, Object, Object, nullable Object])> */
var3 = self->attrs[COLOR_more_collections__HashMap3___level1].val; /* _level1 on <self:Object(HashMap3[Object, Object, Object, nullable Object])> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _level1");
PRINT_ERROR(" (%s:%d)\n", "lib/more_collections.nit", 87);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method more_collections#HashMap3#[] for (self: HashMap3[Object, Object, Object, nullable Object], Object, Object, Object): nullable Object */
val* more_collections__HashMap3___91d_93d(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
const char* var_class_name6;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const struct type* type_struct10;
const char* var_class_name11;
val* var_k1 /* var k1: Object */;
val* var_k2 /* var k2: Object */;
val* var_k3 /* var k3: Object */;
val* var12 /* : HashMap[Object, HashMap2[Object, Object, nullable Object]] */;
val* var14 /* : HashMap[Object, HashMap2[Object, Object, nullable Object]] */;
val* var_level1 /* var level1: HashMap[Object, HashMap2[Object, Object, nullable Object]] */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : null */;
val* var18 /* : nullable Object */;
val* var_level2 /* var level2: HashMap2[Object, Object, nullable Object] */;
val* var19 /* : nullable Object */;
/* Covariant cast for argument 0 (k1) <p0:Object> isa HashMap3#0 */
/* <p0:Object> isa HashMap3#0 */
type_struct = self->type->resolution_table->types[COLOR_more_collections__HashMap3_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap3#0", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/more_collections.nit", 89);
show_backtrace(1);
}
/* Covariant cast for argument 1 (k2) <p1:Object> isa HashMap3#1 */
/* <p1:Object> isa HashMap3#1 */
type_struct5 = self->type->resolution_table->types[COLOR_more_collections__HashMap3_FT1];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
if(cltype3 >= p1->type->table_size) {
var2 = 0;
} else {
var2 = p1->type->type_table[cltype3] == idtype4;
}
if (unlikely(!var2)) {
var_class_name6 = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap3#1", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", "lib/more_collections.nit", 89);
show_backtrace(1);
}
/* Covariant cast for argument 2 (k3) <p2:Object> isa HashMap3#2 */
/* <p2:Object> isa HashMap3#2 */
type_struct10 = self->type->resolution_table->types[COLOR_more_collections__HashMap3_FT2];
cltype8 = type_struct10->color;
idtype9 = type_struct10->id;
if(cltype8 >= p2->type->table_size) {
var7 = 0;
} else {
var7 = p2->type->type_table[cltype8] == idtype9;
}
if (unlikely(!var7)) {
var_class_name11 = p2 == NULL ? "null" : p2->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap3#2", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", "lib/more_collections.nit", 89);
show_backtrace(1);
}
var_k1 = p0;
var_k2 = p1;
var_k3 = p2;
{
{ /* Inline more_collections#HashMap3#level1 (self) on <self:HashMap3[Object, Object, Object, nullable Object]> */
var14 = self->attrs[COLOR_more_collections__HashMap3___level1].val; /* _level1 on <self:HashMap3[Object, Object, Object, nullable Object]> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _level1");
PRINT_ERROR(" (%s:%d)\n", "lib/more_collections.nit", 87);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_level1 = var12;
{
var15 = abstract_collection__MapRead__has_key(var_level1, var_k1);
}
var16 = !var15;
if (var16){
var17 = NULL;
var = var17;
goto RET_LABEL;
} else {
}
{
var18 = hash_collection__HashMap___91d_93d(var_level1, var_k1);
}
var_level2 = var18;
{
var19 = more_collections__HashMap2___91d_93d(var_level2, var_k2, var_k3);
}
var = var19;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method more_collections#HashMap3#[] for (self: Object, Object, Object, Object): nullable Object */
val* VIRTUAL_more_collections__HashMap3___91d_93d(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = more_collections__HashMap3___91d_93d(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method more_collections#HashMap3#[]= for (self: HashMap3[Object, Object, Object, nullable Object], Object, Object, Object, nullable Object) */
void more_collections__HashMap3___91d_93d_61d(val* self, val* p0, val* p1, val* p2, val* p3) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var1 /* : Bool */;
int cltype2;
int idtype3;
const struct type* type_struct4;
const char* var_class_name5;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const struct type* type_struct9;
const char* var_class_name10;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const struct type* type_struct14;
short int is_nullable;
const char* var_class_name15;
val* var_k1 /* var k1: Object */;
val* var_k2 /* var k2: Object */;
val* var_k3 /* var k3: Object */;
val* var_v /* var v: nullable Object */;
val* var16 /* : HashMap[Object, HashMap2[Object, Object, nullable Object]] */;
val* var18 /* : HashMap[Object, HashMap2[Object, Object, nullable Object]] */;
val* var_level1 /* var level1: HashMap[Object, HashMap2[Object, Object, nullable Object]] */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : HashMap2[Object, Object, nullable Object] */;
val* var_level2 /* var level2: HashMap2[Object, Object, nullable Object] */;
val* var23 /* : nullable Object */;
/* Covariant cast for argument 0 (k1) <p0:Object> isa HashMap3#0 */
/* <p0:Object> isa HashMap3#0 */
type_struct = self->type->resolution_table->types[COLOR_more_collections__HashMap3_FT0];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap3#0", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/more_collections.nit", 99);
show_backtrace(1);
}
/* Covariant cast for argument 1 (k2) <p1:Object> isa HashMap3#1 */
/* <p1:Object> isa HashMap3#1 */
type_struct4 = self->type->resolution_table->types[COLOR_more_collections__HashMap3_FT1];
cltype2 = type_struct4->color;
idtype3 = type_struct4->id;
if(cltype2 >= p1->type->table_size) {
var1 = 0;
} else {
var1 = p1->type->type_table[cltype2] == idtype3;
}
if (unlikely(!var1)) {
var_class_name5 = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap3#1", var_class_name5);
PRINT_ERROR(" (%s:%d)\n", "lib/more_collections.nit", 99);
show_backtrace(1);
}
/* Covariant cast for argument 2 (k3) <p2:Object> isa HashMap3#2 */
/* <p2:Object> isa HashMap3#2 */
type_struct9 = self->type->resolution_table->types[COLOR_more_collections__HashMap3_FT2];
cltype7 = type_struct9->color;
idtype8 = type_struct9->id;
if(cltype7 >= p2->type->table_size) {
var6 = 0;
} else {
var6 = p2->type->type_table[cltype7] == idtype8;
}
if (unlikely(!var6)) {
var_class_name10 = p2 == NULL ? "null" : p2->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap3#2", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", "lib/more_collections.nit", 99);
show_backtrace(1);
}
/* Covariant cast for argument 3 (v) <p3:nullable Object> isa HashMap3#3 */
/* <p3:nullable Object> isa HashMap3#3 */
type_struct14 = self->type->resolution_table->types[COLOR_more_collections__HashMap3_FT3];
cltype12 = type_struct14->color;
idtype13 = type_struct14->id;
is_nullable = type_struct14->is_nullable;
if(p3 == NULL) {
var11 = is_nullable;
} else {
if(cltype12 >= p3->type->table_size) {
var11 = 0;
} else {
var11 = p3->type->type_table[cltype12] == idtype13;
}
}
if (unlikely(!var11)) {
var_class_name15 = p3 == NULL ? "null" : p3->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "HashMap3#3", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", "lib/more_collections.nit", 99);
show_backtrace(1);
}
var_k1 = p0;
var_k2 = p1;
var_k3 = p2;
var_v = p3;
{
{ /* Inline more_collections#HashMap3#level1 (self) on <self:HashMap3[Object, Object, Object, nullable Object]> */
var18 = self->attrs[COLOR_more_collections__HashMap3___level1].val; /* _level1 on <self:HashMap3[Object, Object, Object, nullable Object]> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _level1");
PRINT_ERROR(" (%s:%d)\n", "lib/more_collections.nit", 87);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_level1 = var16;
{
var19 = abstract_collection__MapRead__has_key(var_level1, var_k1);
}
var20 = !var19;
if (var20){
var21 = NEW_more_collections__HashMap2(self->type->resolution_table->types[COLOR_more_collections__HashMap2more_collections__HashMap3_FT1more_collections__HashMap3_FT2more_collections__HashMap3_FT3]);
{
{ /* Inline more_collections#HashMap2#init (var21) on <var21:HashMap2[Object, Object, nullable Object]> */
RET_LABEL22:(void)0;
}
}
var_level2 = var21;
{
hash_collection__HashMap___91d_93d_61d(var_level1, var_k1, var_level2); /* Direct call hash_collection#HashMap#[]= on <var_level1:HashMap[Object, HashMap2[Object, Object, nullable Object]]>*/
}
} else {
{
var23 = hash_collection__HashMap___91d_93d(var_level1, var_k1);
}
var_level2 = var23;
}
{
more_collections__HashMap2___91d_93d_61d(var_level2, var_k2, var_k3, var_v); /* Direct call more_collections#HashMap2#[]= on <var_level2:HashMap2[Object, Object, nullable Object]>*/
}
RET_LABEL:;
}
/* method more_collections#HashMap3#[]= for (self: Object, Object, Object, Object, nullable Object) */
void VIRTUAL_more_collections__HashMap3___91d_93d_61d(val* self, val* p0, val* p1, val* p2, val* p3) {
more_collections__HashMap3___91d_93d_61d(self, p0, p1, p2, p3); /* Direct call more_collections#HashMap3#[]= on <self:Object(HashMap3[Object, Object, Object, nullable Object])>*/
RET_LABEL:;
}
/* method more_collections#HashMap3#init for (self: HashMap3[Object, Object, Object, nullable Object]) */
void more_collections__HashMap3__init(val* self) {
RET_LABEL:;
}
/* method more_collections#HashMap3#init for (self: Object) */
void VIRTUAL_more_collections__HashMap3__init(val* self) {
{ /* Inline more_collections#HashMap3#init (self) on <self:Object(HashMap3[Object, Object, Object, nullable Object])> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
