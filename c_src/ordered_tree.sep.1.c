#include "ordered_tree.sep.0.h"
/* method ordered_tree$OrderedTree$roots for (self: OrderedTree[Object]): Array[Object] */
val* ordered_tree___ordered_tree__OrderedTree___roots(val* self) {
val* var /* : Array[Object] */;
val* var1 /* : Array[Object] */;
var1 = self->attrs[COLOR_ordered_tree__OrderedTree___roots].val; /* _roots on <self:OrderedTree[Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _roots");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 66);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ordered_tree$OrderedTree$sub for (self: OrderedTree[Object]): HashMap[Object, Array[Object]] */
val* ordered_tree___ordered_tree__OrderedTree___sub(val* self) {
val* var /* : HashMap[Object, Array[Object]] */;
val* var1 /* : HashMap[Object, Array[Object]] */;
var1 = self->attrs[COLOR_ordered_tree__OrderedTree___sub].val; /* _sub on <self:OrderedTree[Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sub");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 69);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ordered_tree$OrderedTree$parents for (self: OrderedTree[Object]): HashMap[Object, nullable Object] */
val* ordered_tree___ordered_tree__OrderedTree___parents(val* self) {
val* var /* : HashMap[Object, nullable Object] */;
val* var1 /* : HashMap[Object, nullable Object] */;
var1 = self->attrs[COLOR_ordered_tree__OrderedTree___parents].val; /* _parents on <self:OrderedTree[Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _parents");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 73);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ordered_tree$OrderedTree$length for (self: OrderedTree[Object]): Int */
long ordered_tree___ordered_tree__OrderedTree___core__abstract_collection__Collection__length(val* self) {
long var /* : Int */;
val* var1 /* : HashMap[Object, nullable Object] */;
val* var3 /* : HashMap[Object, nullable Object] */;
long var4 /* : Int */;
{
{ /* Inline ordered_tree$OrderedTree$parents (self) on <self:OrderedTree[Object]> */
var3 = self->attrs[COLOR_ordered_tree__OrderedTree___parents].val; /* _parents on <self:OrderedTree[Object]> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _parents");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 73);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__HashMap___core__abstract_collection__MapRead__length(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ordered_tree$OrderedTree$has for (self: OrderedTree[Object], nullable Object): Bool */
short int ordered_tree___ordered_tree__OrderedTree___core__abstract_collection__Collection__has(val* self, val* p0) {
short int var /* : Bool */;
val* var_e /* var e: nullable Object */;
val* var1 /* : HashMap[Object, nullable Object] */;
val* var3 /* : HashMap[Object, nullable Object] */;
short int var4 /* : Bool */;
var_e = p0;
{
{ /* Inline ordered_tree$OrderedTree$parents (self) on <self:OrderedTree[Object]> */
var3 = self->attrs[COLOR_ordered_tree__OrderedTree___parents].val; /* _parents on <self:OrderedTree[Object]> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _parents");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 73);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var1, var_e);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ordered_tree$OrderedTree$add for (self: OrderedTree[Object], nullable Object, Object) */
void ordered_tree___ordered_tree__OrderedTree___add(val* self, val* p0, val* p1) {
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
val* var_p /* var p: nullable Object */;
val* var_e /* var e: Object */;
val* var6 /* : HashMap[Object, nullable Object] */;
val* var8 /* : HashMap[Object, nullable Object] */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : Array[Object] */;
val* var13 /* : Array[Object] */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : HashMap[Object, Array[Object]] */;
val* var18 /* : HashMap[Object, Array[Object]] */;
short int var19 /* : Bool */;
val* var20 /* : HashMap[Object, Array[Object]] */;
val* var22 /* : HashMap[Object, Array[Object]] */;
val* var23 /* : nullable Object */;
val* var24 /* : HashMap[Object, Array[Object]] */;
val* var26 /* : HashMap[Object, Array[Object]] */;
val* var27 /* : Array[Object] */;
val* var_ /* var : Array[Object] */;
/* Covariant cast for argument 0 (p) <p0:nullable Object> isa nullable E */
/* <p0:nullable Object> isa nullable E */
type_struct = self->type->resolution_table->types[COLOR_nullable__ordered_tree__OrderedTree___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(p0 == NULL) {
var = 1;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 94);
fatal_exit(1);
}
/* Covariant cast for argument 1 (e) <p1:Object> isa E */
/* <p1:Object> isa E */
type_struct4 = self->type->resolution_table->types[COLOR_ordered_tree__OrderedTree___35dE];
cltype2 = type_struct4->color;
idtype3 = type_struct4->id;
if(cltype2 >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype2] == idtype3;
}
if (unlikely(!var1)) {
var_class_name5 = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name5);
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 94);
fatal_exit(1);
}
var_p = p0;
var_e = p1;
{
ordered_tree___ordered_tree__OrderedTree___detach(self, var_e); /* Direct call ordered_tree$OrderedTree$detach on <self:OrderedTree[Object]>*/
}
{
{ /* Inline ordered_tree$OrderedTree$parents (self) on <self:OrderedTree[Object]> */
var8 = self->attrs[COLOR_ordered_tree__OrderedTree___parents].val; /* _parents on <self:OrderedTree[Object]> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _parents");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 73);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var6, var_e, var_p); /* Direct call hash_collection$HashMap$[]= on <var6:HashMap[Object, nullable Object]>*/
}
if (var_p == NULL) {
var9 = 1; /* is null */
} else {
var9 = 0; /* arg is null but recv is not */
}
if (0) {
var10 = ((short int(*)(val* self, val* p0))((((long)var_p&3)?class_info[((long)var_p&3)]:var_p->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var_p, ((val*)NULL)); /* == on <var_p:nullable Object>*/
var9 = var10;
}
if (var9){
{
{ /* Inline ordered_tree$OrderedTree$roots (self) on <self:OrderedTree[Object]> */
var13 = self->attrs[COLOR_ordered_tree__OrderedTree___roots].val; /* _roots on <self:OrderedTree[Object]> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _roots");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 66);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var11, var_e); /* Direct call array$Array$add on <var11:Array[Object]>*/
}
} else {
{
var14 = ordered_tree___ordered_tree__OrderedTree___core__abstract_collection__Collection__has(self, var_p);
}
var15 = !var14;
if (var15){
{
ordered_tree___ordered_tree__OrderedTree___add(self, ((val*)NULL), var_p); /* Direct call ordered_tree$OrderedTree$add on <self:OrderedTree[Object]>*/
}
} else {
}
{
{ /* Inline ordered_tree$OrderedTree$sub (self) on <self:OrderedTree[Object]> */
var18 = self->attrs[COLOR_ordered_tree__OrderedTree___sub].val; /* _sub on <self:OrderedTree[Object]> */
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sub");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 69);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var16, var_p);
}
if (var19){
{
{ /* Inline ordered_tree$OrderedTree$sub (self) on <self:OrderedTree[Object]> */
var22 = self->attrs[COLOR_ordered_tree__OrderedTree___sub].val; /* _sub on <self:OrderedTree[Object]> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sub");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 69);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var20, var_p);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var23, var_e); /* Direct call array$Array$add on <var23:nullable Object(Array[Object])>*/
}
} else {
{
{ /* Inline ordered_tree$OrderedTree$sub (self) on <self:OrderedTree[Object]> */
var26 = self->attrs[COLOR_ordered_tree__OrderedTree___sub].val; /* _sub on <self:OrderedTree[Object]> */
if (unlikely(var26 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sub");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 69);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
var27 = NEW_core__Array(self->type->resolution_table->types[COLOR_core__Array__ordered_tree__OrderedTree___35dE]);
{
core___core__Array___with_capacity(var27, 1l); /* Direct call array$Array$with_capacity on <var27:Array[Object]>*/
}
var_ = var27;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_e); /* Direct call array$AbstractArray$push on <var_:Array[Object]>*/
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var24, var_p, var_); /* Direct call hash_collection$HashMap$[]= on <var24:HashMap[Object, Array[Object]]>*/
}
}
}
RET_LABEL:;
}
/* method ordered_tree$OrderedTree$add_all for (self: OrderedTree[Object], nullable Object, Collection[Object]) */
void ordered_tree___ordered_tree__OrderedTree___add_all(val* self, val* p0, val* p1) {
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
val* var_p /* var p: nullable Object */;
val* var_es /* var es: Collection[Object] */;
val* var_ /* var : Collection[Object] */;
val* var6 /* : Iterator[nullable Object] */;
val* var_7 /* var : Iterator[Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_e /* var e: Object */;
/* Covariant cast for argument 0 (p) <p0:nullable Object> isa nullable E */
/* <p0:nullable Object> isa nullable E */
type_struct = self->type->resolution_table->types[COLOR_nullable__ordered_tree__OrderedTree___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(p0 == NULL) {
var = 1;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 117);
fatal_exit(1);
}
/* Covariant cast for argument 1 (es) <p1:Collection[Object]> isa Collection[E] */
/* <p1:Collection[Object]> isa Collection[E] */
type_struct4 = self->type->resolution_table->types[COLOR_core__Collection__ordered_tree__OrderedTree___35dE];
cltype2 = type_struct4->color;
idtype3 = type_struct4->id;
if(cltype2 >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype2] == idtype3;
}
if (unlikely(!var1)) {
var_class_name5 = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[E]", var_class_name5);
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 117);
fatal_exit(1);
}
var_p = p0;
var_es = p1;
var_ = var_es;
{
var6 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[Object]>*/
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:Iterator[Object]>*/
}
if (var8){
} else {
goto BREAK_label;
}
{
var9 = ((val*(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:Iterator[Object]>*/
}
var_e = var9;
{
ordered_tree___ordered_tree__OrderedTree___add(self, var_p, var_e); /* Direct call ordered_tree$OrderedTree$add on <self:OrderedTree[Object]>*/
}
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:Iterator[Object]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:Iterator[Object]>*/
}
RET_LABEL:;
}
/* method ordered_tree$OrderedTree$detach for (self: OrderedTree[Object], Object) */
void ordered_tree___ordered_tree__OrderedTree___detach(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_e /* var e: Object */;
val* var1 /* : HashMap[Object, nullable Object] */;
val* var3 /* : HashMap[Object, nullable Object] */;
val* var4 /* : nullable Object */;
val* var_old_parent /* var old_parent: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : HashMap[Object, Array[Object]] */;
val* var9 /* : HashMap[Object, Array[Object]] */;
val* var10 /* : nullable Object */;
val* var_subs /* var subs: Array[Object] */;
short int var11 /* : Bool */;
val* var12 /* : HashMap[Object, Array[Object]] */;
val* var14 /* : HashMap[Object, Array[Object]] */;
val* var15 /* : RemovableCollection[nullable Object] */;
val* var16 /* : Array[Object] */;
val* var18 /* : Array[Object] */;
short int var19 /* : Bool */;
val* var20 /* : Array[Object] */;
val* var22 /* : Array[Object] */;
/* Covariant cast for argument 0 (e) <p0:Object> isa E */
/* <p0:Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_ordered_tree__OrderedTree___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 123);
fatal_exit(1);
}
var_e = p0;
{
{ /* Inline ordered_tree$OrderedTree$parents (self) on <self:OrderedTree[Object]> */
var3 = self->attrs[COLOR_ordered_tree__OrderedTree___parents].val; /* _parents on <self:OrderedTree[Object]> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _parents");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 73);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__HashMap___core__abstract_collection__MapRead__get_or_null(var1, var_e);
}
var_old_parent = var4;
if (var_old_parent == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))((((long)var_old_parent&3)?class_info[((long)var_old_parent&3)]:var_old_parent->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_old_parent, ((val*)NULL)); /* != on <var_old_parent:nullable Object>*/
var5 = var6;
}
if (var5){
{
{ /* Inline ordered_tree$OrderedTree$sub (self) on <self:OrderedTree[Object]> */
var9 = self->attrs[COLOR_ordered_tree__OrderedTree___sub].val; /* _sub on <self:OrderedTree[Object]> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sub");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 69);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var7, var_old_parent);
}
var_subs = var10;
{
core___core__AbstractArray___core__abstract_collection__RemovableCollection__remove(var_subs, var_e); /* Direct call array$AbstractArray$remove on <var_subs:Array[Object]>*/
}
{
var11 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_subs);
}
if (var11){
{
{ /* Inline ordered_tree$OrderedTree$sub (self) on <self:OrderedTree[Object]> */
var14 = self->attrs[COLOR_ordered_tree__OrderedTree___sub].val; /* _sub on <self:OrderedTree[Object]> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sub");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 69);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = core___core__HashMap___core__abstract_collection__MapRead__keys(var12);
}
{
((void(*)(val* self, val* p0))((((long)var15&3)?class_info[((long)var15&3)]:var15->class)->vft[COLOR_core__abstract_collection__RemovableCollection__remove]))(var15, var_old_parent); /* remove on <var15:RemovableCollection[nullable Object](RemovableCollection[Object])>*/
}
} else {
}
} else {
{
{ /* Inline ordered_tree$OrderedTree$roots (self) on <self:OrderedTree[Object]> */
var18 = self->attrs[COLOR_ordered_tree__OrderedTree___roots].val; /* _roots on <self:OrderedTree[Object]> */
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _roots");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 66);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var16, var_e);
}
if (var19){
{
{ /* Inline ordered_tree$OrderedTree$roots (self) on <self:OrderedTree[Object]> */
var22 = self->attrs[COLOR_ordered_tree__OrderedTree___roots].val; /* _roots on <self:OrderedTree[Object]> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _roots");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 66);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
core___core__AbstractArray___core__abstract_collection__RemovableCollection__remove(var20, var_e); /* Direct call array$AbstractArray$remove on <var20:Array[Object]>*/
}
} else {
}
}
RET_LABEL:;
}
/* method ordered_tree$OrderedTree$write_to for (self: OrderedTree[Object], Writer) */
void ordered_tree___ordered_tree__OrderedTree___core__stream__Writable__write_to(val* self, val* p0) {
val* var_stream /* var stream: Writer */;
val* var /* : Array[Object] */;
val* var2 /* : Array[Object] */;
val* var_ /* var : Array[Object] */;
val* var3 /* : IndexedIterator[nullable Object] */;
val* var_4 /* var : IndexedIterator[Object] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_r /* var r: Object */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : CString */;
val* var9 /* : String */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Int */;
val* var12 /* : nullable Bool */;
val* var13 /* : nullable Bool */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : CString */;
val* var17 /* : String */;
val* var18 /* : nullable Int */;
val* var19 /* : nullable Int */;
val* var20 /* : nullable Bool */;
val* var21 /* : nullable Bool */;
var_stream = p0;
{
{ /* Inline ordered_tree$OrderedTree$roots (self) on <self:OrderedTree[Object]> */
var2 = self->attrs[COLOR_ordered_tree__OrderedTree___roots].val; /* _roots on <self:OrderedTree[Object]> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _roots");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 66);
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
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:IndexedIterator[Object]>*/
}
if (var5){
} else {
goto BREAK_label;
}
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:IndexedIterator[Object]>*/
}
var_r = var6;
if (likely(varonce!=NULL)) {
var7 = varonce;
} else {
var8 = "";
var10 = (val*)(0l<<2|1);
var11 = (val*)(0l<<2|1);
var12 = (val*)((long)(0)<<2|3);
var13 = (val*)((long)(0)<<2|3);
var9 = core__flat___CString___to_s_unsafe(var8, var10, var11, var12, var13);
var7 = var9;
varonce = var7;
}
{
ordered_tree___ordered_tree__OrderedTree___write_line(self, var_stream, var_r, var7); /* Direct call ordered_tree$OrderedTree$write_line on <self:OrderedTree[Object]>*/
}
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "";
var18 = (val*)(0l<<2|1);
var19 = (val*)(0l<<2|1);
var20 = (val*)((long)(0)<<2|3);
var21 = (val*)((long)(0)<<2|3);
var17 = core__flat___CString___to_s_unsafe(var16, var18, var19, var20, var21);
var15 = var17;
varonce14 = var15;
}
{
ordered_tree___ordered_tree__OrderedTree___sub_write_to(self, var_stream, var_r, var15); /* Direct call ordered_tree$OrderedTree$sub_write_to on <self:OrderedTree[Object]>*/
}
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:IndexedIterator[Object]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:IndexedIterator[Object]>*/
}
RET_LABEL:;
}
/* method ordered_tree$OrderedTree$sub_write_to for (self: OrderedTree[Object], Writer, Object, String) */
void ordered_tree___ordered_tree__OrderedTree___sub_write_to(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_o /* var o: Writer */;
val* var_e /* var e: Object */;
val* var_prefix /* var prefix: String */;
val* var1 /* : HashMap[Object, Array[Object]] */;
val* var3 /* : HashMap[Object, Array[Object]] */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : HashMap[Object, Array[Object]] */;
val* var8 /* : HashMap[Object, Array[Object]] */;
val* var9 /* : nullable Object */;
val* var_subs /* var subs: Array[Object] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_last /* var last: Object */;
val* var_ /* var : Array[Object] */;
val* var12 /* : IndexedIterator[nullable Object] */;
val* var_13 /* var : IndexedIterator[Object] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_e2 /* var e2: Object */;
short int var16 /* : Bool */;
static val* varonce;
val* var17 /* : String */;
char* var18 /* : CString */;
val* var19 /* : String */;
val* var20 /* : nullable Int */;
val* var21 /* : nullable Int */;
val* var22 /* : nullable Bool */;
val* var23 /* : nullable Bool */;
val* var24 /* : Text */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : CString */;
val* var28 /* : String */;
val* var29 /* : nullable Int */;
val* var30 /* : nullable Int */;
val* var31 /* : nullable Bool */;
val* var32 /* : nullable Bool */;
val* var33 /* : Text */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : CString */;
val* var37 /* : String */;
val* var38 /* : nullable Int */;
val* var39 /* : nullable Int */;
val* var40 /* : nullable Bool */;
val* var41 /* : nullable Bool */;
val* var42 /* : Text */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : CString */;
val* var46 /* : String */;
val* var47 /* : nullable Int */;
val* var48 /* : nullable Int */;
val* var49 /* : nullable Bool */;
val* var50 /* : nullable Bool */;
val* var51 /* : Text */;
/* Covariant cast for argument 1 (e) <p1:Object> isa E */
/* <p1:Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_ordered_tree__OrderedTree___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var = 0;
} else {
var = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 155);
fatal_exit(1);
}
var_o = p0;
var_e = p1;
var_prefix = p2;
{
{ /* Inline ordered_tree$OrderedTree$sub (self) on <self:OrderedTree[Object]> */
var3 = self->attrs[COLOR_ordered_tree__OrderedTree___sub].val; /* _sub on <self:OrderedTree[Object]> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sub");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 69);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var1, var_e);
}
var5 = !var4;
if (var5){
goto RET_LABEL;
} else {
}
{
{ /* Inline ordered_tree$OrderedTree$sub (self) on <self:OrderedTree[Object]> */
var8 = self->attrs[COLOR_ordered_tree__OrderedTree___sub].val; /* _sub on <self:OrderedTree[Object]> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sub");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 69);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var6, var_e);
}
var_subs = var9;
{
var10 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_subs);
}
if (var10){
goto RET_LABEL;
} else {
}
{
var11 = core___core__SequenceRead___last(var_subs);
}
var_last = var11;
var_ = var_subs;
{
var12 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_13 = var12;
for(;;) {
{
var14 = ((short int(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_13); /* is_ok on <var_13:IndexedIterator[Object]>*/
}
if (var14){
} else {
goto BREAK_label;
}
{
var15 = ((val*(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_13); /* item on <var_13:IndexedIterator[Object]>*/
}
var_e2 = var15;
{
var16 = ((short int(*)(val* self, val* p0))((((long)var_e2&3)?class_info[((long)var_e2&3)]:var_e2->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_e2, var_last); /* != on <var_e2:Object>*/
}
if (var16){
if (likely(varonce!=NULL)) {
var17 = varonce;
} else {
var18 = "|--";
var20 = (val*)(3l<<2|1);
var21 = (val*)(3l<<2|1);
var22 = (val*)((long)(0)<<2|3);
var23 = (val*)((long)(0)<<2|3);
var19 = core__flat___CString___to_s_unsafe(var18, var20, var21, var22, var23);
var17 = var19;
varonce = var17;
}
{
var24 = ((val*(*)(val* self, val* p0))(var_prefix->class->vft[COLOR_core__abstract_text__Text___43d]))(var_prefix, var17); /* + on <var_prefix:String>*/
}
{
ordered_tree___ordered_tree__OrderedTree___write_line(self, var_o, var_e2, var24); /* Direct call ordered_tree$OrderedTree$write_line on <self:OrderedTree[Object]>*/
}
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "|  ";
var29 = (val*)(3l<<2|1);
var30 = (val*)(3l<<2|1);
var31 = (val*)((long)(0)<<2|3);
var32 = (val*)((long)(0)<<2|3);
var28 = core__flat___CString___to_s_unsafe(var27, var29, var30, var31, var32);
var26 = var28;
varonce25 = var26;
}
{
var33 = ((val*(*)(val* self, val* p0))(var_prefix->class->vft[COLOR_core__abstract_text__Text___43d]))(var_prefix, var26); /* + on <var_prefix:String>*/
}
{
ordered_tree___ordered_tree__OrderedTree___sub_write_to(self, var_o, var_e2, var33); /* Direct call ordered_tree$OrderedTree$sub_write_to on <self:OrderedTree[Object]>*/
}
} else {
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "`--";
var38 = (val*)(3l<<2|1);
var39 = (val*)(3l<<2|1);
var40 = (val*)((long)(0)<<2|3);
var41 = (val*)((long)(0)<<2|3);
var37 = core__flat___CString___to_s_unsafe(var36, var38, var39, var40, var41);
var35 = var37;
varonce34 = var35;
}
{
var42 = ((val*(*)(val* self, val* p0))(var_prefix->class->vft[COLOR_core__abstract_text__Text___43d]))(var_prefix, var35); /* + on <var_prefix:String>*/
}
{
ordered_tree___ordered_tree__OrderedTree___write_line(self, var_o, var_e2, var42); /* Direct call ordered_tree$OrderedTree$write_line on <self:OrderedTree[Object]>*/
}
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "   ";
var47 = (val*)(3l<<2|1);
var48 = (val*)(3l<<2|1);
var49 = (val*)((long)(0)<<2|3);
var50 = (val*)((long)(0)<<2|3);
var46 = core__flat___CString___to_s_unsafe(var45, var47, var48, var49, var50);
var44 = var46;
varonce43 = var44;
}
{
var51 = ((val*(*)(val* self, val* p0))(var_prefix->class->vft[COLOR_core__abstract_text__Text___43d]))(var_prefix, var44); /* + on <var_prefix:String>*/
}
{
ordered_tree___ordered_tree__OrderedTree___sub_write_to(self, var_o, var_e2, var51); /* Direct call ordered_tree$OrderedTree$sub_write_to on <self:OrderedTree[Object]>*/
}
}
{
((void(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_13); /* next on <var_13:IndexedIterator[Object]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_13); /* finish on <var_13:IndexedIterator[Object]>*/
}
RET_LABEL:;
}
/* method ordered_tree$OrderedTree$write_line for (self: OrderedTree[Object], Writer, Object, String) */
void ordered_tree___ordered_tree__OrderedTree___write_line(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_o /* var o: Writer */;
val* var_e /* var e: Object */;
val* var_prefix /* var prefix: String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
val* var10 /* : String */;
val* var11 /* : String */;
/* Covariant cast for argument 1 (e) <p1:Object> isa E */
/* <p1:Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_ordered_tree__OrderedTree___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var = 0;
} else {
var = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 172);
fatal_exit(1);
}
var_o = p0;
var_e = p1;
var_prefix = p2;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "\n";
var6 = (val*)(1l<<2|1);
var7 = (val*)(1l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[2]=var3;
} else {
var1 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var1)->values[0]=var_prefix;
{
var10 = ordered_tree___ordered_tree__OrderedTree___display(self, var_e);
}
((struct instance_core__NativeArray*)var1)->values[1]=var10;
{
var11 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
{
core___core__FileWriter___core__stream__Writer__write(var_o, var11); /* Direct call file$FileWriter$write on <var_o:Writer>*/
}
RET_LABEL:;
}
/* method ordered_tree$OrderedTree$sort_with for (self: OrderedTree[Object], Comparator) */
void ordered_tree___ordered_tree__OrderedTree___sort_with(val* self, val* p0) {
val* var_comparator /* var comparator: Comparator */;
val* var /* : Array[Object] */;
val* var2 /* : Array[Object] */;
val* var3 /* : HashMap[Object, Array[Object]] */;
val* var5 /* : HashMap[Object, Array[Object]] */;
val* var6 /* : RemovableCollection[nullable Object] */;
val* var_ /* var : RemovableCollection[Array[Object]] */;
val* var7 /* : Iterator[nullable Object] */;
val* var_8 /* var : Iterator[Array[Object]] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_a /* var a: Array[Object] */;
var_comparator = p0;
{
{ /* Inline ordered_tree$OrderedTree$roots (self) on <self:OrderedTree[Object]> */
var2 = self->attrs[COLOR_ordered_tree__OrderedTree___roots].val; /* _roots on <self:OrderedTree[Object]> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _roots");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 66);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
core___core__Comparator___sort(var_comparator, var); /* Direct call sorter$Comparator$sort on <var_comparator:Comparator>*/
}
{
{ /* Inline ordered_tree$OrderedTree$sub (self) on <self:OrderedTree[Object]> */
var5 = self->attrs[COLOR_ordered_tree__OrderedTree___sub].val; /* _sub on <self:OrderedTree[Object]> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sub");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 69);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = core___core__HashMap___core__abstract_collection__MapRead__values(var3);
}
var_ = var6;
{
var7 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:RemovableCollection[Array[Object]]>*/
}
var_8 = var7;
for(;;) {
{
var9 = ((short int(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_8); /* is_ok on <var_8:Iterator[Array[Object]]>*/
}
if (var9){
} else {
goto BREAK_label;
}
{
var10 = ((val*(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_8); /* item on <var_8:Iterator[Array[Object]]>*/
}
var_a = var10;
{
core___core__Comparator___sort(var_comparator, var_a); /* Direct call sorter$Comparator$sort on <var_comparator:Comparator>*/
}
{
((void(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_8); /* next on <var_8:Iterator[Array[Object]]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_8); /* finish on <var_8:Iterator[Array[Object]]>*/
}
RET_LABEL:;
}
/* method ordered_tree$OrderedTree$display for (self: OrderedTree[Object], Object): String */
val* ordered_tree___ordered_tree__OrderedTree___display(val* self, val* p0) {
val* var /* : String */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_e /* var e: Object */;
val* var2 /* : String */;
/* Covariant cast for argument 0 (e) <p0:Object> isa E */
/* <p0:Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_ordered_tree__OrderedTree___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 196);
fatal_exit(1);
}
var_e = p0;
{
var2 = ((val*(*)(val* self))((((long)var_e&3)?class_info[((long)var_e&3)]:var_e->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var_e); /* to_s on <var_e:Object>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ordered_tree$OrderedTree$to_a for (self: OrderedTree[Object]): Array[Object] */
val* ordered_tree___ordered_tree__OrderedTree___core__array__Collection__to_a(val* self) {
val* var /* : Array[Object] */;
val* var1 /* : Array[Object] */;
val* var_res /* var res: Array[Object] */;
val* var2 /* : Array[Object] */;
val* var4 /* : Array[Object] */;
val* var_ /* var : Array[Object] */;
val* var5 /* : IndexedIterator[nullable Object] */;
val* var_6 /* var : IndexedIterator[Object] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_r /* var r: Object */;
var1 = NEW_core__Array(self->type->resolution_table->types[COLOR_core__Array__ordered_tree__OrderedTree___35dE]);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array$Array$init on <var1:Array[Object]>*/
}
var_res = var1;
{
{ /* Inline ordered_tree$OrderedTree$roots (self) on <self:OrderedTree[Object]> */
var4 = self->attrs[COLOR_ordered_tree__OrderedTree___roots].val; /* _roots on <self:OrderedTree[Object]> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _roots");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 66);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
var_ = var2;
{
var5 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_6 = var5;
for(;;) {
{
var7 = ((short int(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_6); /* is_ok on <var_6:IndexedIterator[Object]>*/
}
if (var7){
} else {
goto BREAK_label;
}
{
var8 = ((val*(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_6); /* item on <var_6:IndexedIterator[Object]>*/
}
var_r = var8;
{
ordered_tree___ordered_tree__OrderedTree___sub_to_a(self, var_r, var_res); /* Direct call ordered_tree$OrderedTree$sub_to_a on <self:OrderedTree[Object]>*/
}
{
((void(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_6); /* next on <var_6:IndexedIterator[Object]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_6); /* finish on <var_6:IndexedIterator[Object]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ordered_tree$OrderedTree$sub_to_a for (self: OrderedTree[Object], Object, Array[Object]) */
void ordered_tree___ordered_tree__OrderedTree___sub_to_a(val* self, val* p0, val* p1) {
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
val* var_e /* var e: Object */;
val* var_res /* var res: Array[Object] */;
val* var6 /* : HashMap[Object, Array[Object]] */;
val* var8 /* : HashMap[Object, Array[Object]] */;
short int var9 /* : Bool */;
val* var10 /* : HashMap[Object, Array[Object]] */;
val* var12 /* : HashMap[Object, Array[Object]] */;
val* var13 /* : nullable Object */;
val* var_ /* var : Array[Object] */;
val* var14 /* : IndexedIterator[nullable Object] */;
val* var_15 /* var : IndexedIterator[Object] */;
short int var16 /* : Bool */;
val* var17 /* : nullable Object */;
val* var_e2 /* var e2: Object */;
/* Covariant cast for argument 0 (e) <p0:Object> isa E */
/* <p0:Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_ordered_tree__OrderedTree___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 218);
fatal_exit(1);
}
/* Covariant cast for argument 1 (res) <p1:Array[Object]> isa Array[E] */
/* <p1:Array[Object]> isa Array[E] */
type_struct4 = self->type->resolution_table->types[COLOR_core__Array__ordered_tree__OrderedTree___35dE];
cltype2 = type_struct4->color;
idtype3 = type_struct4->id;
if(cltype2 >= p1->type->table_size) {
var1 = 0;
} else {
var1 = p1->type->type_table[cltype2] == idtype3;
}
if (unlikely(!var1)) {
var_class_name5 = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Array[E]", var_class_name5);
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 218);
fatal_exit(1);
}
var_e = p0;
var_res = p1;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var_e); /* Direct call array$Array$add on <var_res:Array[Object]>*/
}
{
{ /* Inline ordered_tree$OrderedTree$sub (self) on <self:OrderedTree[Object]> */
var8 = self->attrs[COLOR_ordered_tree__OrderedTree___sub].val; /* _sub on <self:OrderedTree[Object]> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sub");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 69);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var6, var_e);
}
if (var9){
{
{ /* Inline ordered_tree$OrderedTree$sub (self) on <self:OrderedTree[Object]> */
var12 = self->attrs[COLOR_ordered_tree__OrderedTree___sub].val; /* _sub on <self:OrderedTree[Object]> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sub");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 69);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var10, var_e);
}
var_ = var13;
{
var14 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_15 = var14;
for(;;) {
{
var16 = ((short int(*)(val* self))((((long)var_15&3)?class_info[((long)var_15&3)]:var_15->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_15); /* is_ok on <var_15:IndexedIterator[Object]>*/
}
if (var16){
} else {
goto BREAK_label;
}
{
var17 = ((val*(*)(val* self))((((long)var_15&3)?class_info[((long)var_15&3)]:var_15->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_15); /* item on <var_15:IndexedIterator[Object]>*/
}
var_e2 = var17;
{
ordered_tree___ordered_tree__OrderedTree___sub_to_a(self, var_e2, var_res); /* Direct call ordered_tree$OrderedTree$sub_to_a on <self:OrderedTree[Object]>*/
}
{
((void(*)(val* self))((((long)var_15&3)?class_info[((long)var_15&3)]:var_15->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_15); /* next on <var_15:IndexedIterator[Object]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_15&3)?class_info[((long)var_15&3)]:var_15->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_15); /* finish on <var_15:IndexedIterator[Object]>*/
}
} else {
}
RET_LABEL:;
}
/* method ordered_tree$OrderedTree$is_empty for (self: OrderedTree[Object]): Bool */
short int ordered_tree___ordered_tree__OrderedTree___core__abstract_collection__Collection__is_empty(val* self) {
short int var /* : Bool */;
val* var1 /* : Array[Object] */;
val* var3 /* : Array[Object] */;
short int var4 /* : Bool */;
{
{ /* Inline ordered_tree$OrderedTree$roots (self) on <self:OrderedTree[Object]> */
var3 = self->attrs[COLOR_ordered_tree__OrderedTree___roots].val; /* _roots on <self:OrderedTree[Object]> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _roots");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 66);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ordered_tree$OrderedTree$first for (self: OrderedTree[Object]): Object */
val* ordered_tree___ordered_tree__OrderedTree___core__abstract_collection__Collection__first(val* self) {
val* var /* : Object */;
val* var1 /* : Array[Object] */;
val* var3 /* : Array[Object] */;
val* var4 /* : nullable Object */;
{
{ /* Inline ordered_tree$OrderedTree$roots (self) on <self:OrderedTree[Object]> */
var3 = self->attrs[COLOR_ordered_tree__OrderedTree___roots].val; /* _roots on <self:OrderedTree[Object]> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _roots");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 66);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__SequenceRead___Collection__first(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ordered_tree$OrderedTree$iterator for (self: OrderedTree[Object]): Iterator[Object] */
val* ordered_tree___ordered_tree__OrderedTree___core__abstract_collection__Collection__iterator(val* self) {
val* var /* : Iterator[Object] */;
val* var1 /* : OrderedTreeIterator[Object] */;
var1 = NEW_ordered_tree__OrderedTreeIterator(self->type->resolution_table->types[COLOR_ordered_tree__OrderedTreeIterator__ordered_tree__OrderedTree___35dE]);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_ordered_tree__OrderedTreeIterator__tree_61d]))(var1, self); /* tree= on <var1:OrderedTreeIterator[Object]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:OrderedTreeIterator[Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ordered_tree$OrderedTree$== for (self: OrderedTree[Object], nullable Object): Bool */
short int ordered_tree___ordered_tree__OrderedTree___core__kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : Array[Object] */;
val* var6 /* : Array[Object] */;
val* var7 /* : Array[Object] */;
val* var9 /* : Array[Object] */;
short int var10 /* : Bool */;
short int var_ /* var : Bool */;
val* var11 /* : HashMap[Object, Array[Object]] */;
val* var13 /* : HashMap[Object, Array[Object]] */;
val* var14 /* : HashMap[Object, Array[Object]] */;
val* var16 /* : HashMap[Object, Array[Object]] */;
short int var17 /* : Bool */;
var_other = p0;
/* <var_other:nullable Object> isa OrderedTree[Object] */
cltype = type_ordered_tree__OrderedTree__core__Object.color;
idtype = type_ordered_tree__OrderedTree__core__Object.id;
if(var_other == NULL) {
var1 = 0;
} else {
if(cltype >= (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->type_table[cltype] == idtype;
}
}
var2 = !var1;
if (var2){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline ordered_tree$OrderedTree$roots (self) on <self:OrderedTree[Object]> */
var6 = self->attrs[COLOR_ordered_tree__OrderedTree___roots].val; /* _roots on <self:OrderedTree[Object]> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _roots");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 66);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline ordered_tree$OrderedTree$roots (var_other) on <var_other:nullable Object(OrderedTree[Object])> */
var9 = var_other->attrs[COLOR_ordered_tree__OrderedTree___roots].val; /* _roots on <var_other:nullable Object(OrderedTree[Object])> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _roots");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 66);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = core___core__Array___core__kernel__Object___61d_61d(var4, var7);
}
var_ = var10;
if (var10){
{
{ /* Inline ordered_tree$OrderedTree$sub (self) on <self:OrderedTree[Object]> */
var13 = self->attrs[COLOR_ordered_tree__OrderedTree___sub].val; /* _sub on <self:OrderedTree[Object]> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sub");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 69);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline ordered_tree$OrderedTree$sub (var_other) on <var_other:nullable Object(OrderedTree[Object])> */
var16 = var_other->attrs[COLOR_ordered_tree__OrderedTree___sub].val; /* _sub on <var_other:nullable Object(OrderedTree[Object])> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sub");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 69);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = core___core__MapRead___core__kernel__Object___61d_61d(var11, var14);
}
var3 = var17;
} else {
var3 = var_;
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ordered_tree$OrderedTree$hash for (self: OrderedTree[Object]): Int */
long ordered_tree___ordered_tree__OrderedTree___core__kernel__Object__hash(val* self) {
long var /* : Int */;
val* var1 /* : Array[Object] */;
val* var3 /* : Array[Object] */;
long var4 /* : Int */;
val* var5 /* : HashMap[Object, Array[Object]] */;
val* var7 /* : HashMap[Object, Array[Object]] */;
long var8 /* : Int */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var12 /* : Int */;
{
{ /* Inline ordered_tree$OrderedTree$roots (self) on <self:OrderedTree[Object]> */
var3 = self->attrs[COLOR_ordered_tree__OrderedTree___roots].val; /* _roots on <self:OrderedTree[Object]> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _roots");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 66);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__SequenceRead___core__kernel__Object__hash(var1);
}
{
{ /* Inline ordered_tree$OrderedTree$sub (self) on <self:OrderedTree[Object]> */
var7 = self->attrs[COLOR_ordered_tree__OrderedTree___sub].val; /* _sub on <self:OrderedTree[Object]> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sub");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 69);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = core___core__MapRead___core__kernel__Object__hash(var5);
}
{
{ /* Inline kernel$Int$+ (var4,var8) on <var4:Int> */
/* Covariant cast for argument 0 (i) <var8:Int> isa OTHER */
/* <var8:Int> isa OTHER */
var11 = 1; /* easy <var8:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var12 = var4 + var8;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ordered_tree$OrderedTree$clone for (self: OrderedTree[Object]): OrderedTree[Object] */
val* ordered_tree___ordered_tree__OrderedTree___core__kernel__Cloneable__clone(val* self) {
val* var /* : OrderedTree[Object] */;
val* var1 /* : OrderedTree[Object] */;
val* var_res /* var res: OrderedTree[Object] */;
val* var3 /* : Array[Object] */;
val* var5 /* : Array[Object] */;
val* var6 /* : HashMap[Object, Array[Object]] */;
val* var8 /* : HashMap[Object, Array[Object]] */;
val* var_ /* var : HashMap[Object, Array[Object]] */;
val* var9 /* : MapIterator[nullable Object, nullable Object] */;
val* var_10 /* var : MapIterator[Object, Array[Object]] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_p /* var p: Object */;
val* var13 /* : nullable Object */;
val* var_es /* var es: Array[Object] */;
short int var15 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var1 = NEW_ordered_tree__OrderedTree(self->type->resolution_table->types[COLOR_ordered_tree__OrderedTree__ordered_tree__OrderedTree___35dE]);
{
{ /* Inline kernel$Object$init (var1) on <var1:OrderedTree[Object]> */
RET_LABEL2:(void)0;
}
}
var_res = var1;
{
{ /* Inline ordered_tree$OrderedTree$roots (self) on <self:OrderedTree[Object]> */
var5 = self->attrs[COLOR_ordered_tree__OrderedTree___roots].val; /* _roots on <self:OrderedTree[Object]> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _roots");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 66);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
ordered_tree___ordered_tree__OrderedTree___add_all(var_res, ((val*)NULL), var3); /* Direct call ordered_tree$OrderedTree$add_all on <var_res:OrderedTree[Object]>*/
}
{
{ /* Inline ordered_tree$OrderedTree$sub (self) on <self:OrderedTree[Object]> */
var8 = self->attrs[COLOR_ordered_tree__OrderedTree___sub].val; /* _sub on <self:OrderedTree[Object]> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sub");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 69);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_ = var6;
{
var9 = core___core__HashMap___core__abstract_collection__MapRead__iterator(var_);
}
var_10 = var9;
for(;;) {
{
var11 = ((short int(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__MapIterator__is_ok]))(var_10); /* is_ok on <var_10:MapIterator[Object, Array[Object]]>*/
}
if (var11){
} else {
goto BREAK_label;
}
{
var12 = ((val*(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__MapIterator__key]))(var_10); /* key on <var_10:MapIterator[Object, Array[Object]]>*/
}
var_p = var12;
{
var13 = ((val*(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__MapIterator__item]))(var_10); /* item on <var_10:MapIterator[Object, Array[Object]]>*/
}
var_es = var13;
{
ordered_tree___ordered_tree__OrderedTree___add_all(var_res, var_p, var_es); /* Direct call ordered_tree$OrderedTree$add_all on <var_res:OrderedTree[Object]>*/
}
{
((void(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__MapIterator__next]))(var_10); /* next on <var_10:MapIterator[Object, Array[Object]]>*/
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection$MapIterator$finish (var_10) on <var_10:MapIterator[Object, Array[Object]]> */
RET_LABEL14:(void)0;
}
}
/* <var_res:OrderedTree[Object]> isa SELF */
type_struct = self->type->resolution_table->types[COLOR_core__kernel__Object__SELF];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var_res->type->table_size) {
var15 = 0;
} else {
var15 = var_res->type->type_table[cltype] == idtype;
}
if (unlikely(!var15)) {
var_class_name = var_res == NULL ? "null" : var_res->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELF", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 288);
fatal_exit(1);
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ordered_tree$OrderedTreeIterator$tree for (self: OrderedTreeIterator[Object]): OrderedTree[Object] */
val* ordered_tree___ordered_tree__OrderedTreeIterator___tree(val* self) {
val* var /* : OrderedTree[Object] */;
val* var1 /* : OrderedTree[Object] */;
var1 = self->attrs[COLOR_ordered_tree__OrderedTreeIterator___tree].val; /* _tree on <self:OrderedTreeIterator[Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tree");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 296);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ordered_tree$OrderedTreeIterator$tree= for (self: OrderedTreeIterator[Object], OrderedTree[Object]) */
void ordered_tree___ordered_tree__OrderedTreeIterator___tree_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (tree) <p0:OrderedTree[Object]> isa OrderedTree[E] */
/* <p0:OrderedTree[Object]> isa OrderedTree[E] */
type_struct = self->type->resolution_table->types[COLOR_ordered_tree__OrderedTree__ordered_tree__OrderedTreeIterator___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OrderedTree[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 296);
fatal_exit(1);
}
self->attrs[COLOR_ordered_tree__OrderedTreeIterator___tree].val = p0; /* _tree on <self:OrderedTreeIterator[Object]> */
RET_LABEL:;
}
/* method ordered_tree$OrderedTreeIterator$iterators for (self: OrderedTreeIterator[Object]): Array[Iterator[Object]] */
val* ordered_tree___ordered_tree__OrderedTreeIterator___iterators(val* self) {
val* var /* : Array[Iterator[Object]] */;
val* var1 /* : Array[Iterator[Object]] */;
var1 = self->attrs[COLOR_ordered_tree__OrderedTreeIterator___iterators].val; /* _iterators on <self:OrderedTreeIterator[Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iterators");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 298);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ordered_tree$OrderedTreeIterator$init for (self: OrderedTreeIterator[Object]) */
void ordered_tree___ordered_tree__OrderedTreeIterator___core__kernel__Object__init(val* self) {
val* var /* : OrderedTree[Object] */;
val* var2 /* : OrderedTree[Object] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : Array[Iterator[Object]] */;
val* var7 /* : Array[Iterator[Object]] */;
val* var8 /* : OrderedTree[Object] */;
val* var10 /* : OrderedTree[Object] */;
val* var11 /* : Array[Object] */;
val* var13 /* : Array[Object] */;
val* var14 /* : IndexedIterator[nullable Object] */;
{
((void(*)(val* self))(self->class->vft[COLOR_ordered_tree___ordered_tree__OrderedTreeIterator___core__kernel__Object__init]))(self); /* init on <self:OrderedTreeIterator[Object]>*/
}
{
{ /* Inline ordered_tree$OrderedTreeIterator$tree (self) on <self:OrderedTreeIterator[Object]> */
var2 = self->attrs[COLOR_ordered_tree__OrderedTreeIterator___tree].val; /* _tree on <self:OrderedTreeIterator[Object]> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tree");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 296);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = ordered_tree___ordered_tree__OrderedTree___core__abstract_collection__Collection__is_empty(var);
}
var4 = !var3;
if (var4){
{
{ /* Inline ordered_tree$OrderedTreeIterator$iterators (self) on <self:OrderedTreeIterator[Object]> */
var7 = self->attrs[COLOR_ordered_tree__OrderedTreeIterator___iterators].val; /* _iterators on <self:OrderedTreeIterator[Object]> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iterators");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 298);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline ordered_tree$OrderedTreeIterator$tree (self) on <self:OrderedTreeIterator[Object]> */
var10 = self->attrs[COLOR_ordered_tree__OrderedTreeIterator___tree].val; /* _tree on <self:OrderedTreeIterator[Object]> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tree");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 296);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline ordered_tree$OrderedTree$roots (var8) on <var8:OrderedTree[Object]> */
var13 = var8->attrs[COLOR_ordered_tree__OrderedTree___roots].val; /* _roots on <var8:OrderedTree[Object]> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _roots");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 66);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var11);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var5, var14); /* Direct call array$Array$add on <var5:Array[Iterator[Object]]>*/
}
} else {
}
RET_LABEL:;
}
/* method ordered_tree$OrderedTreeIterator$is_ok for (self: OrderedTreeIterator[Object]): Bool */
short int ordered_tree___ordered_tree__OrderedTreeIterator___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : Array[Iterator[Object]] */;
val* var3 /* : Array[Iterator[Object]] */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
{
{ /* Inline ordered_tree$OrderedTreeIterator$iterators (self) on <self:OrderedTreeIterator[Object]> */
var3 = self->attrs[COLOR_ordered_tree__OrderedTreeIterator___iterators].val; /* _iterators on <self:OrderedTreeIterator[Object]> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iterators");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 298);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var1);
}
var5 = !var4;
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ordered_tree$OrderedTreeIterator$item for (self: OrderedTreeIterator[Object]): Object */
val* ordered_tree___ordered_tree__OrderedTreeIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : Object */;
short int var1 /* : Bool */;
val* var2 /* : Array[Iterator[Object]] */;
val* var4 /* : Array[Iterator[Object]] */;
val* var5 /* : nullable Object */;
val* var6 /* : nullable Object */;
{
var1 = ordered_tree___ordered_tree__OrderedTreeIterator___core__abstract_collection__Iterator__is_ok(self);
}
if (unlikely(!var1)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 309);
fatal_exit(1);
}
{
{ /* Inline ordered_tree$OrderedTreeIterator$iterators (self) on <self:OrderedTreeIterator[Object]> */
var4 = self->attrs[COLOR_ordered_tree__OrderedTreeIterator___iterators].val; /* _iterators on <self:OrderedTreeIterator[Object]> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iterators");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 298);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = core___core__SequenceRead___last(var2);
}
{
var6 = ((val*(*)(val* self))((((long)var5&3)?class_info[((long)var5&3)]:var5->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var5); /* item on <var5:nullable Object(Iterator[Object])>*/
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ordered_tree$OrderedTreeIterator$next for (self: OrderedTreeIterator[Object]) */
void ordered_tree___ordered_tree__OrderedTreeIterator___core__abstract_collection__Iterator__next(val* self) {
short int var /* : Bool */;
val* var1 /* : OrderedTree[Object] */;
val* var3 /* : OrderedTree[Object] */;
val* var4 /* : HashMap[Object, Array[Object]] */;
val* var6 /* : HashMap[Object, Array[Object]] */;
val* var7 /* : Object */;
short int var8 /* : Bool */;
val* var9 /* : Array[Iterator[Object]] */;
val* var11 /* : Array[Iterator[Object]] */;
val* var12 /* : OrderedTree[Object] */;
val* var14 /* : OrderedTree[Object] */;
val* var15 /* : HashMap[Object, Array[Object]] */;
val* var17 /* : HashMap[Object, Array[Object]] */;
val* var18 /* : Object */;
val* var19 /* : nullable Object */;
val* var20 /* : IndexedIterator[nullable Object] */;
val* var21 /* : Array[Iterator[Object]] */;
val* var23 /* : Array[Iterator[Object]] */;
val* var24 /* : nullable Object */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var_ /* var : Bool */;
val* var27 /* : Array[Iterator[Object]] */;
val* var29 /* : Array[Iterator[Object]] */;
val* var30 /* : nullable Object */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : Array[Iterator[Object]] */;
val* var35 /* : Array[Iterator[Object]] */;
val* var36 /* : nullable Object */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var_39 /* var : Bool */;
val* var40 /* : Array[Iterator[Object]] */;
val* var42 /* : Array[Iterator[Object]] */;
val* var43 /* : nullable Object */;
short int var44 /* : Bool */;
val* var45 /* : Array[Iterator[Object]] */;
val* var47 /* : Array[Iterator[Object]] */;
val* var48 /* : nullable Object */;
{
var = ordered_tree___ordered_tree__OrderedTreeIterator___core__abstract_collection__Iterator__is_ok(self);
}
if (unlikely(!var)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 314);
fatal_exit(1);
}
{
{ /* Inline ordered_tree$OrderedTreeIterator$tree (self) on <self:OrderedTreeIterator[Object]> */
var3 = self->attrs[COLOR_ordered_tree__OrderedTreeIterator___tree].val; /* _tree on <self:OrderedTreeIterator[Object]> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tree");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 296);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline ordered_tree$OrderedTree$sub (var1) on <var1:OrderedTree[Object]> */
var6 = var1->attrs[COLOR_ordered_tree__OrderedTree___sub].val; /* _sub on <var1:OrderedTree[Object]> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sub");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 69);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = ordered_tree___ordered_tree__OrderedTreeIterator___core__abstract_collection__Iterator__item(self);
}
{
var8 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var4, var7);
}
if (var8){
{
{ /* Inline ordered_tree$OrderedTreeIterator$iterators (self) on <self:OrderedTreeIterator[Object]> */
var11 = self->attrs[COLOR_ordered_tree__OrderedTreeIterator___iterators].val; /* _iterators on <self:OrderedTreeIterator[Object]> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iterators");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 298);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline ordered_tree$OrderedTreeIterator$tree (self) on <self:OrderedTreeIterator[Object]> */
var14 = self->attrs[COLOR_ordered_tree__OrderedTreeIterator___tree].val; /* _tree on <self:OrderedTreeIterator[Object]> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tree");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 296);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline ordered_tree$OrderedTree$sub (var12) on <var12:OrderedTree[Object]> */
var17 = var12->attrs[COLOR_ordered_tree__OrderedTree___sub].val; /* _sub on <var12:OrderedTree[Object]> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sub");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 69);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = ordered_tree___ordered_tree__OrderedTreeIterator___core__abstract_collection__Iterator__item(self);
}
{
var19 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var15, var18);
}
{
var20 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var19);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var9, var20); /* Direct call array$Array$add on <var9:Array[Iterator[Object]]>*/
}
} else {
{
{ /* Inline ordered_tree$OrderedTreeIterator$iterators (self) on <self:OrderedTreeIterator[Object]> */
var23 = self->attrs[COLOR_ordered_tree__OrderedTreeIterator___iterators].val; /* _iterators on <self:OrderedTreeIterator[Object]> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iterators");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 298);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = core___core__SequenceRead___last(var21);
}
{
((void(*)(val* self))((((long)var24&3)?class_info[((long)var24&3)]:var24->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var24); /* next on <var24:nullable Object(Iterator[Object])>*/
}
for(;;) {
{
var26 = ordered_tree___ordered_tree__OrderedTreeIterator___core__abstract_collection__Iterator__is_ok(self);
}
var_ = var26;
if (var26){
{
{ /* Inline ordered_tree$OrderedTreeIterator$iterators (self) on <self:OrderedTreeIterator[Object]> */
var29 = self->attrs[COLOR_ordered_tree__OrderedTreeIterator___iterators].val; /* _iterators on <self:OrderedTreeIterator[Object]> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iterators");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 298);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
var30 = core___core__SequenceRead___last(var27);
}
{
var31 = ((short int(*)(val* self))((((long)var30&3)?class_info[((long)var30&3)]:var30->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var30); /* is_ok on <var30:nullable Object(Iterator[Object])>*/
}
var32 = !var31;
var25 = var32;
} else {
var25 = var_;
}
if (var25){
{
{ /* Inline ordered_tree$OrderedTreeIterator$iterators (self) on <self:OrderedTreeIterator[Object]> */
var35 = self->attrs[COLOR_ordered_tree__OrderedTreeIterator___iterators].val; /* _iterators on <self:OrderedTreeIterator[Object]> */
if (unlikely(var35 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iterators");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 298);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
var36 = core___core__AbstractArray___core__abstract_collection__Sequence__pop(var33);
}
{
var38 = ordered_tree___ordered_tree__OrderedTreeIterator___core__abstract_collection__Iterator__is_ok(self);
}
var_39 = var38;
if (var38){
{
{ /* Inline ordered_tree$OrderedTreeIterator$iterators (self) on <self:OrderedTreeIterator[Object]> */
var42 = self->attrs[COLOR_ordered_tree__OrderedTreeIterator___iterators].val; /* _iterators on <self:OrderedTreeIterator[Object]> */
if (unlikely(var42 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iterators");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 298);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
var43 = core___core__SequenceRead___last(var40);
}
{
var44 = ((short int(*)(val* self))((((long)var43&3)?class_info[((long)var43&3)]:var43->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var43); /* is_ok on <var43:nullable Object(Iterator[Object])>*/
}
var37 = var44;
} else {
var37 = var_39;
}
if (var37){
{
{ /* Inline ordered_tree$OrderedTreeIterator$iterators (self) on <self:OrderedTreeIterator[Object]> */
var47 = self->attrs[COLOR_ordered_tree__OrderedTreeIterator___iterators].val; /* _iterators on <self:OrderedTreeIterator[Object]> */
if (unlikely(var47 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iterators");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 298);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
var48 = core___core__SequenceRead___last(var45);
}
{
((void(*)(val* self))((((long)var48&3)?class_info[((long)var48&3)]:var48->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var48); /* next on <var48:nullable Object(Iterator[Object])>*/
}
} else {
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
}
RET_LABEL:;
}
/* method ordered_tree$OrderedTreeIterator$iterator for (self: OrderedTreeIterator[Object]): Iterator[Object] */
val* ordered_tree___ordered_tree__OrderedTreeIterator___core__abstract_collection__Iterator__iterator(val* self) {
val* var /* : Iterator[Object] */;
val* var1 /* : OrderedTreeIterator[Object] */;
val* var2 /* : OrderedTree[Object] */;
val* var4 /* : OrderedTree[Object] */;
var1 = NEW_ordered_tree__OrderedTreeIterator(self->type->resolution_table->types[COLOR_ordered_tree__OrderedTreeIterator__ordered_tree__OrderedTreeIterator___35dE]);
{
{ /* Inline ordered_tree$OrderedTreeIterator$tree (self) on <self:OrderedTreeIterator[Object]> */
var4 = self->attrs[COLOR_ordered_tree__OrderedTreeIterator___tree].val; /* _tree on <self:OrderedTreeIterator[Object]> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tree");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 296);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_ordered_tree__OrderedTreeIterator__tree_61d]))(var1, var2); /* tree= on <var1:OrderedTreeIterator[Object]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:OrderedTreeIterator[Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
