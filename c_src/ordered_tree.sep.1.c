#include "ordered_tree.sep.0.h"
/* method ordered_tree#OrderedTree#roots for (self: OrderedTree[Object]): Array[Object] */
val* ordered_tree___ordered_tree__OrderedTree___roots(val* self) {
val* var /* : Array[Object] */;
val* var1 /* : Array[Object] */;
var1 = self->attrs[COLOR_ordered_tree__OrderedTree___roots].val; /* _roots on <self:OrderedTree[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _roots");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 65);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ordered_tree#OrderedTree#sub for (self: OrderedTree[Object]): HashMap[Object, Array[Object]] */
val* ordered_tree___ordered_tree__OrderedTree___sub(val* self) {
val* var /* : HashMap[Object, Array[Object]] */;
val* var1 /* : HashMap[Object, Array[Object]] */;
var1 = self->attrs[COLOR_ordered_tree__OrderedTree___sub].val; /* _sub on <self:OrderedTree[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sub");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 68);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ordered_tree#OrderedTree#add for (self: OrderedTree[Object], nullable Object, Object) */
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
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : Array[Object] */;
val* var10 /* : Array[Object] */;
val* var11 /* : HashMap[Object, Array[Object]] */;
val* var13 /* : HashMap[Object, Array[Object]] */;
short int var14 /* : Bool */;
val* var15 /* : HashMap[Object, Array[Object]] */;
val* var17 /* : HashMap[Object, Array[Object]] */;
val* var18 /* : nullable Object */;
val* var19 /* : HashMap[Object, Array[Object]] */;
val* var21 /* : HashMap[Object, Array[Object]] */;
val* var22 /* : Array[Object] */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 72);
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
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 72);
fatal_exit(1);
}
var_p = p0;
var_e = p1;
if (var_p == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
var7 = ((short int(*)(val* self, val* p0))((((long)var_p&3)?class_info[((long)var_p&3)]:var_p->class)->vft[COLOR_standard__kernel__Object___61d_61d]))(var_p, ((val*)NULL)); /* == on <var_p:nullable Object>*/
var6 = var7;
}
if (var6){
{
{ /* Inline ordered_tree#OrderedTree#roots (self) on <self:OrderedTree[Object]> */
var10 = self->attrs[COLOR_ordered_tree__OrderedTree___roots].val; /* _roots on <self:OrderedTree[Object]> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _roots");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 65);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var8, var_e); /* Direct call array#Array#add on <var8:Array[Object]>*/
}
} else {
{
{ /* Inline ordered_tree#OrderedTree#sub (self) on <self:OrderedTree[Object]> */
var13 = self->attrs[COLOR_ordered_tree__OrderedTree___sub].val; /* _sub on <self:OrderedTree[Object]> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sub");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 68);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = standard___standard__HashMap___standard__abstract_collection__MapRead__has_key(var11, var_p);
}
if (var14){
{
{ /* Inline ordered_tree#OrderedTree#sub (self) on <self:OrderedTree[Object]> */
var17 = self->attrs[COLOR_ordered_tree__OrderedTree___sub].val; /* _sub on <self:OrderedTree[Object]> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sub");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 68);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var15, var_p);
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var18, var_e); /* Direct call array#Array#add on <var18:nullable Object(Array[Object])>*/
}
} else {
{
{ /* Inline ordered_tree#OrderedTree#sub (self) on <self:OrderedTree[Object]> */
var21 = self->attrs[COLOR_ordered_tree__OrderedTree___sub].val; /* _sub on <self:OrderedTree[Object]> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sub");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 68);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
var22 = NEW_standard__Array(self->type->resolution_table->types[COLOR_standard__Array__ordered_tree__OrderedTree___35dE]);
{
standard___standard__Array___with_capacity(var22, 1l); /* Direct call array#Array#with_capacity on <var22:Array[Object]>*/
}
var_ = var22;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_e); /* Direct call array#AbstractArray#push on <var_:Array[Object]>*/
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var19, var_p, var_); /* Direct call hash_collection#HashMap#[]= on <var19:HashMap[Object, Array[Object]]>*/
}
}
}
RET_LABEL:;
}
/* method ordered_tree#OrderedTree#write_to for (self: OrderedTree[Object], Writer) */
void ordered_tree___ordered_tree__OrderedTree___standard__stream__Writable__write_to(val* self, val* p0) {
val* var_stream /* var stream: Writer */;
val* var /* : Array[Object] */;
val* var2 /* : Array[Object] */;
val* var_ /* var : Array[Object] */;
val* var3 /* : ArrayIterator[nullable Object] */;
val* var_4 /* var : ArrayIterator[Object] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_r /* var r: Object */;
val* var7 /* : String */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : FlatString */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : FlatString */;
var_stream = p0;
{
{ /* Inline ordered_tree#OrderedTree#roots (self) on <self:OrderedTree[Object]> */
var2 = self->attrs[COLOR_ordered_tree__OrderedTree___roots].val; /* _roots on <self:OrderedTree[Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _roots");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 65);
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
var_r = var6;
{
var7 = ordered_tree___ordered_tree__OrderedTree___display(self, var_r);
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var_stream, var7); /* Direct call file#FileWriter#write on <var_stream:Writer>*/
}
if (likely(varonce!=NULL)) {
var8 = varonce;
} else {
var9 = "\n";
var10 = standard___standard__NativeString___to_s_with_length(var9, 1l);
var8 = var10;
varonce = var8;
}
{
standard___standard__FileWriter___standard__stream__Writer__write(var_stream, var8); /* Direct call file#FileWriter#write on <var_stream:Writer>*/
}
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "";
var14 = standard___standard__NativeString___to_s_with_length(var13, 0l);
var12 = var14;
varonce11 = var12;
}
{
ordered_tree___ordered_tree__OrderedTree___sub_write_to(self, var_stream, var_r, var12); /* Direct call ordered_tree#OrderedTree#sub_write_to on <self:OrderedTree[Object]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_4); /* Direct call array#ArrayIterator#next on <var_4:ArrayIterator[Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_4); /* Direct call array#ArrayIterator#finish on <var_4:ArrayIterator[Object]>*/
}
RET_LABEL:;
}
/* method ordered_tree#OrderedTree#sub_write_to for (self: OrderedTree[Object], Writer, Object, String) */
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
val* var10 /* : nullable Object */;
val* var_last /* var last: Object */;
val* var_ /* var : Array[Object] */;
val* var11 /* : ArrayIterator[nullable Object] */;
val* var_12 /* var : ArrayIterator[Object] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_e2 /* var e2: Object */;
short int var15 /* : Bool */;
val* var16 /* : NativeArray[String] */;
static val* varonce;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : FlatString */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
val* var24 /* : FlatString */;
val* var25 /* : String */;
val* var26 /* : String */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
val* var30 /* : FlatString */;
val* var31 /* : String */;
val* var33 /* : NativeArray[String] */;
static val* varonce32;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : FlatString */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : FlatString */;
val* var42 /* : String */;
val* var43 /* : String */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
val* var47 /* : FlatString */;
val* var48 /* : String */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 97);
fatal_exit(1);
}
var_o = p0;
var_e = p1;
var_prefix = p2;
{
{ /* Inline ordered_tree#OrderedTree#sub (self) on <self:OrderedTree[Object]> */
var3 = self->attrs[COLOR_ordered_tree__OrderedTree___sub].val; /* _sub on <self:OrderedTree[Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sub");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 68);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = standard___standard__HashMap___standard__abstract_collection__MapRead__has_key(var1, var_e);
}
var5 = !var4;
if (var5){
goto RET_LABEL;
} else {
}
{
{ /* Inline ordered_tree#OrderedTree#sub (self) on <self:OrderedTree[Object]> */
var8 = self->attrs[COLOR_ordered_tree__OrderedTree___sub].val; /* _sub on <self:OrderedTree[Object]> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sub");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 68);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var6, var_e);
}
var_subs = var9;
{
var10 = standard___standard__SequenceRead___last(var_subs);
}
var_last = var10;
var_ = var_subs;
{
var11 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
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
var_e2 = var14;
{
var15 = ((short int(*)(val* self, val* p0))((((long)var_e2&3)?class_info[((long)var_e2&3)]:var_e2->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_e2, var_last); /* != on <var_e2:Object>*/
}
if (var15){
if (unlikely(varonce==NULL)) {
var16 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "|--";
var20 = standard___standard__NativeString___to_s_with_length(var19, 3l);
var18 = var20;
varonce17 = var18;
}
((struct instance_standard__NativeArray*)var16)->values[1]=var18;
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = "\n";
var24 = standard___standard__NativeString___to_s_with_length(var23, 1l);
var22 = var24;
varonce21 = var22;
}
((struct instance_standard__NativeArray*)var16)->values[3]=var22;
} else {
var16 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var16)->values[0]=var_prefix;
{
var25 = ordered_tree___ordered_tree__OrderedTree___display(self, var_e2);
}
((struct instance_standard__NativeArray*)var16)->values[2]=var25;
{
var26 = ((val*(*)(val* self))(var16->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var16); /* native_to_s on <var16:NativeArray[String]>*/
}
varonce = var16;
{
standard___standard__FileWriter___standard__stream__Writer__write(var_o, var26); /* Direct call file#FileWriter#write on <var_o:Writer>*/
}
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "|  ";
var30 = standard___standard__NativeString___to_s_with_length(var29, 3l);
var28 = var30;
varonce27 = var28;
}
{
var31 = ((val*(*)(val* self, val* p0))(var_prefix->class->vft[COLOR_standard__string__String___43d]))(var_prefix, var28); /* + on <var_prefix:String>*/
}
{
ordered_tree___ordered_tree__OrderedTree___sub_write_to(self, var_o, var_e2, var31); /* Direct call ordered_tree#OrderedTree#sub_write_to on <self:OrderedTree[Object]>*/
}
} else {
if (unlikely(varonce32==NULL)) {
var33 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "`--";
var37 = standard___standard__NativeString___to_s_with_length(var36, 3l);
var35 = var37;
varonce34 = var35;
}
((struct instance_standard__NativeArray*)var33)->values[1]=var35;
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "\n";
var41 = standard___standard__NativeString___to_s_with_length(var40, 1l);
var39 = var41;
varonce38 = var39;
}
((struct instance_standard__NativeArray*)var33)->values[3]=var39;
} else {
var33 = varonce32;
varonce32 = NULL;
}
((struct instance_standard__NativeArray*)var33)->values[0]=var_prefix;
{
var42 = ordered_tree___ordered_tree__OrderedTree___display(self, var_e2);
}
((struct instance_standard__NativeArray*)var33)->values[2]=var42;
{
var43 = ((val*(*)(val* self))(var33->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var33); /* native_to_s on <var33:NativeArray[String]>*/
}
varonce32 = var33;
{
standard___standard__FileWriter___standard__stream__Writer__write(var_o, var43); /* Direct call file#FileWriter#write on <var_o:Writer>*/
}
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = "   ";
var47 = standard___standard__NativeString___to_s_with_length(var46, 3l);
var45 = var47;
varonce44 = var45;
}
{
var48 = ((val*(*)(val* self, val* p0))(var_prefix->class->vft[COLOR_standard__string__String___43d]))(var_prefix, var45); /* + on <var_prefix:String>*/
}
{
ordered_tree___ordered_tree__OrderedTree___sub_write_to(self, var_o, var_e2, var48); /* Direct call ordered_tree#OrderedTree#sub_write_to on <self:OrderedTree[Object]>*/
}
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_12); /* Direct call array#ArrayIterator#next on <var_12:ArrayIterator[Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_12); /* Direct call array#ArrayIterator#finish on <var_12:ArrayIterator[Object]>*/
}
RET_LABEL:;
}
/* method ordered_tree#OrderedTree#sort_with for (self: OrderedTree[Object], Comparator) */
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
{ /* Inline ordered_tree#OrderedTree#roots (self) on <self:OrderedTree[Object]> */
var2 = self->attrs[COLOR_ordered_tree__OrderedTree___roots].val; /* _roots on <self:OrderedTree[Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _roots");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 65);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
standard___standard__Comparator___sort(var_comparator, var); /* Direct call sorter#Comparator#sort on <var_comparator:Comparator>*/
}
{
{ /* Inline ordered_tree#OrderedTree#sub (self) on <self:OrderedTree[Object]> */
var5 = self->attrs[COLOR_ordered_tree__OrderedTree___sub].val; /* _sub on <self:OrderedTree[Object]> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sub");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 68);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = standard___standard__HashMap___standard__abstract_collection__MapRead__values(var3);
}
var_ = var6;
{
var7 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:RemovableCollection[Array[Object]]>*/
}
var_8 = var7;
for(;;) {
{
var9 = ((short int(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_8); /* is_ok on <var_8:Iterator[Array[Object]]>*/
}
if (var9){
{
var10 = ((val*(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_8); /* item on <var_8:Iterator[Array[Object]]>*/
}
var_a = var10;
{
standard___standard__Comparator___sort(var_comparator, var_a); /* Direct call sorter#Comparator#sort on <var_comparator:Comparator>*/
}
{
((void(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_8); /* next on <var_8:Iterator[Array[Object]]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_8); /* finish on <var_8:Iterator[Array[Object]]>*/
}
RET_LABEL:;
}
/* method ordered_tree#OrderedTree#display for (self: OrderedTree[Object], Object): String */
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
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 123);
fatal_exit(1);
}
var_e = p0;
{
var2 = ((val*(*)(val* self))((((long)var_e&3)?class_info[((long)var_e&3)]:var_e->class)->vft[COLOR_standard__string__Object__to_s]))(var_e); /* to_s on <var_e:Object>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ordered_tree#OrderedTree#to_a for (self: OrderedTree[Object]): Array[Object] */
val* ordered_tree___ordered_tree__OrderedTree___standard__array__Collection__to_a(val* self) {
val* var /* : Array[Object] */;
val* var1 /* : Array[Object] */;
val* var_res /* var res: Array[Object] */;
val* var2 /* : Array[Object] */;
val* var4 /* : Array[Object] */;
val* var_ /* var : Array[Object] */;
val* var5 /* : ArrayIterator[nullable Object] */;
val* var_6 /* var : ArrayIterator[Object] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_r /* var r: Object */;
var1 = NEW_standard__Array(self->type->resolution_table->types[COLOR_standard__Array__ordered_tree__OrderedTree___35dE]);
{
standard___standard__Array___standard__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[Object]>*/
}
var_res = var1;
{
{ /* Inline ordered_tree#OrderedTree#roots (self) on <self:OrderedTree[Object]> */
var4 = self->attrs[COLOR_ordered_tree__OrderedTree___roots].val; /* _roots on <self:OrderedTree[Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _roots");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 65);
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
var_r = var8;
{
ordered_tree___ordered_tree__OrderedTree___sub_to_a(self, var_r, var_res); /* Direct call ordered_tree#OrderedTree#sub_to_a on <self:OrderedTree[Object]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_6); /* Direct call array#ArrayIterator#next on <var_6:ArrayIterator[Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_6); /* Direct call array#ArrayIterator#finish on <var_6:ArrayIterator[Object]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ordered_tree#OrderedTree#sub_to_a for (self: OrderedTree[Object], Object, Array[Object]) */
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
val* var14 /* : ArrayIterator[nullable Object] */;
val* var_15 /* var : ArrayIterator[Object] */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 150);
fatal_exit(1);
}
/* Covariant cast for argument 1 (res) <p1:Array[Object]> isa Array[E] */
/* <p1:Array[Object]> isa Array[E] */
type_struct4 = self->type->resolution_table->types[COLOR_standard__Array__ordered_tree__OrderedTree___35dE];
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
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 150);
fatal_exit(1);
}
var_e = p0;
var_res = p1;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_res, var_e); /* Direct call array#Array#add on <var_res:Array[Object]>*/
}
{
{ /* Inline ordered_tree#OrderedTree#sub (self) on <self:OrderedTree[Object]> */
var8 = self->attrs[COLOR_ordered_tree__OrderedTree___sub].val; /* _sub on <self:OrderedTree[Object]> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sub");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 68);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = standard___standard__HashMap___standard__abstract_collection__MapRead__has_key(var6, var_e);
}
if (var9){
{
{ /* Inline ordered_tree#OrderedTree#sub (self) on <self:OrderedTree[Object]> */
var12 = self->attrs[COLOR_ordered_tree__OrderedTree___sub].val; /* _sub on <self:OrderedTree[Object]> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sub");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 68);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var10, var_e);
}
var_ = var13;
{
var14 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_15 = var14;
for(;;) {
{
var16 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_15);
}
if (var16){
{
var17 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_15);
}
var_e2 = var17;
{
ordered_tree___ordered_tree__OrderedTree___sub_to_a(self, var_e2, var_res); /* Direct call ordered_tree#OrderedTree#sub_to_a on <self:OrderedTree[Object]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_15); /* Direct call array#ArrayIterator#next on <var_15:ArrayIterator[Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_15); /* Direct call array#ArrayIterator#finish on <var_15:ArrayIterator[Object]>*/
}
} else {
}
RET_LABEL:;
}
/* method ordered_tree#OrderedTree#is_empty for (self: OrderedTree[Object]): Bool */
short int ordered_tree___ordered_tree__OrderedTree___standard__abstract_collection__Collection__is_empty(val* self) {
short int var /* : Bool */;
val* var1 /* : Array[Object] */;
val* var3 /* : Array[Object] */;
short int var4 /* : Bool */;
{
{ /* Inline ordered_tree#OrderedTree#roots (self) on <self:OrderedTree[Object]> */
var3 = self->attrs[COLOR_ordered_tree__OrderedTree___roots].val; /* _roots on <self:OrderedTree[Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _roots");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 65);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ordered_tree#OrderedTree#first for (self: OrderedTree[Object]): Object */
val* ordered_tree___ordered_tree__OrderedTree___standard__abstract_collection__Collection__first(val* self) {
val* var /* : Object */;
val* var1 /* : Array[Object] */;
val* var3 /* : Array[Object] */;
val* var4 /* : nullable Object */;
{
{ /* Inline ordered_tree#OrderedTree#roots (self) on <self:OrderedTree[Object]> */
var3 = self->attrs[COLOR_ordered_tree__OrderedTree___roots].val; /* _roots on <self:OrderedTree[Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _roots");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 65);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = standard___standard__SequenceRead___Collection__first(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ordered_tree#OrderedTree#iterator for (self: OrderedTree[Object]): Iterator[Object] */
val* ordered_tree___ordered_tree__OrderedTree___standard__abstract_collection__Collection__iterator(val* self) {
val* var /* : Iterator[Object] */;
val* var1 /* : OrderedTreeIterator[Object] */;
var1 = NEW_ordered_tree__OrderedTreeIterator(self->type->resolution_table->types[COLOR_ordered_tree__OrderedTreeIterator__ordered_tree__OrderedTree___35dE]);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_ordered_tree__OrderedTreeIterator__tree_61d]))(var1, self); /* tree= on <var1:OrderedTreeIterator[Object]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:OrderedTreeIterator[Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ordered_tree#OrderedTreeIterator#tree for (self: OrderedTreeIterator[Object]): OrderedTree[Object] */
val* ordered_tree___ordered_tree__OrderedTreeIterator___tree(val* self) {
val* var /* : OrderedTree[Object] */;
val* var1 /* : OrderedTree[Object] */;
var1 = self->attrs[COLOR_ordered_tree__OrderedTreeIterator___tree].val; /* _tree on <self:OrderedTreeIterator[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tree");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 189);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ordered_tree#OrderedTreeIterator#tree= for (self: OrderedTreeIterator[Object], OrderedTree[Object]) */
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
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 189);
fatal_exit(1);
}
self->attrs[COLOR_ordered_tree__OrderedTreeIterator___tree].val = p0; /* _tree on <self:OrderedTreeIterator[Object]> */
RET_LABEL:;
}
/* method ordered_tree#OrderedTreeIterator#iterators for (self: OrderedTreeIterator[Object]): Array[Iterator[Object]] */
val* ordered_tree___ordered_tree__OrderedTreeIterator___iterators(val* self) {
val* var /* : Array[Iterator[Object]] */;
val* var1 /* : Array[Iterator[Object]] */;
var1 = self->attrs[COLOR_ordered_tree__OrderedTreeIterator___iterators].val; /* _iterators on <self:OrderedTreeIterator[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iterators");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 191);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ordered_tree#OrderedTreeIterator#init for (self: OrderedTreeIterator[Object]) */
void ordered_tree___ordered_tree__OrderedTreeIterator___standard__kernel__Object__init(val* self) {
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
val* var14 /* : ArrayIterator[nullable Object] */;
{
{ /* Inline ordered_tree#OrderedTreeIterator#tree (self) on <self:OrderedTreeIterator[Object]> */
var2 = self->attrs[COLOR_ordered_tree__OrderedTreeIterator___tree].val; /* _tree on <self:OrderedTreeIterator[Object]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tree");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 189);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = ordered_tree___ordered_tree__OrderedTree___standard__abstract_collection__Collection__is_empty(var);
}
var4 = !var3;
if (var4){
{
{ /* Inline ordered_tree#OrderedTreeIterator#iterators (self) on <self:OrderedTreeIterator[Object]> */
var7 = self->attrs[COLOR_ordered_tree__OrderedTreeIterator___iterators].val; /* _iterators on <self:OrderedTreeIterator[Object]> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iterators");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 191);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline ordered_tree#OrderedTreeIterator#tree (self) on <self:OrderedTreeIterator[Object]> */
var10 = self->attrs[COLOR_ordered_tree__OrderedTreeIterator___tree].val; /* _tree on <self:OrderedTreeIterator[Object]> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tree");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 189);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline ordered_tree#OrderedTree#roots (var8) on <var8:OrderedTree[Object]> */
var13 = var8->attrs[COLOR_ordered_tree__OrderedTree___roots].val; /* _roots on <var8:OrderedTree[Object]> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _roots");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 65);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var11);
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var5, var14); /* Direct call array#Array#add on <var5:Array[Iterator[Object]]>*/
}
} else {
}
RET_LABEL:;
}
/* method ordered_tree#OrderedTreeIterator#is_ok for (self: OrderedTreeIterator[Object]): Bool */
short int ordered_tree___ordered_tree__OrderedTreeIterator___standard__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : Array[Iterator[Object]] */;
val* var3 /* : Array[Iterator[Object]] */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
{
{ /* Inline ordered_tree#OrderedTreeIterator#iterators (self) on <self:OrderedTreeIterator[Object]> */
var3 = self->attrs[COLOR_ordered_tree__OrderedTreeIterator___iterators].val; /* _iterators on <self:OrderedTreeIterator[Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iterators");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 191);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var1);
}
var5 = !var4;
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ordered_tree#OrderedTreeIterator#item for (self: OrderedTreeIterator[Object]): Object */
val* ordered_tree___ordered_tree__OrderedTreeIterator___standard__abstract_collection__Iterator__item(val* self) {
val* var /* : Object */;
short int var1 /* : Bool */;
val* var2 /* : Array[Iterator[Object]] */;
val* var4 /* : Array[Iterator[Object]] */;
val* var5 /* : nullable Object */;
val* var6 /* : nullable Object */;
{
var1 = ordered_tree___ordered_tree__OrderedTreeIterator___standard__abstract_collection__Iterator__is_ok(self);
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 202);
fatal_exit(1);
}
{
{ /* Inline ordered_tree#OrderedTreeIterator#iterators (self) on <self:OrderedTreeIterator[Object]> */
var4 = self->attrs[COLOR_ordered_tree__OrderedTreeIterator___iterators].val; /* _iterators on <self:OrderedTreeIterator[Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iterators");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 191);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = standard___standard__SequenceRead___last(var2);
}
{
var6 = ((val*(*)(val* self))((((long)var5&3)?class_info[((long)var5&3)]:var5->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var5); /* item on <var5:nullable Object(Iterator[Object])>*/
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ordered_tree#OrderedTreeIterator#next for (self: OrderedTreeIterator[Object]) */
void ordered_tree___ordered_tree__OrderedTreeIterator___standard__abstract_collection__Iterator__next(val* self) {
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
val* var20 /* : ArrayIterator[nullable Object] */;
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
var = ordered_tree___ordered_tree__OrderedTreeIterator___standard__abstract_collection__Iterator__is_ok(self);
}
if (unlikely(!var)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 207);
fatal_exit(1);
}
{
{ /* Inline ordered_tree#OrderedTreeIterator#tree (self) on <self:OrderedTreeIterator[Object]> */
var3 = self->attrs[COLOR_ordered_tree__OrderedTreeIterator___tree].val; /* _tree on <self:OrderedTreeIterator[Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tree");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 189);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline ordered_tree#OrderedTree#sub (var1) on <var1:OrderedTree[Object]> */
var6 = var1->attrs[COLOR_ordered_tree__OrderedTree___sub].val; /* _sub on <var1:OrderedTree[Object]> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sub");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 68);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = ordered_tree___ordered_tree__OrderedTreeIterator___standard__abstract_collection__Iterator__item(self);
}
{
var8 = standard___standard__HashMap___standard__abstract_collection__MapRead__has_key(var4, var7);
}
if (var8){
{
{ /* Inline ordered_tree#OrderedTreeIterator#iterators (self) on <self:OrderedTreeIterator[Object]> */
var11 = self->attrs[COLOR_ordered_tree__OrderedTreeIterator___iterators].val; /* _iterators on <self:OrderedTreeIterator[Object]> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iterators");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 191);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline ordered_tree#OrderedTreeIterator#tree (self) on <self:OrderedTreeIterator[Object]> */
var14 = self->attrs[COLOR_ordered_tree__OrderedTreeIterator___tree].val; /* _tree on <self:OrderedTreeIterator[Object]> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tree");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 189);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline ordered_tree#OrderedTree#sub (var12) on <var12:OrderedTree[Object]> */
var17 = var12->attrs[COLOR_ordered_tree__OrderedTree___sub].val; /* _sub on <var12:OrderedTree[Object]> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sub");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 68);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = ordered_tree___ordered_tree__OrderedTreeIterator___standard__abstract_collection__Iterator__item(self);
}
{
var19 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var15, var18);
}
{
var20 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var19);
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var9, var20); /* Direct call array#Array#add on <var9:Array[Iterator[Object]]>*/
}
} else {
{
{ /* Inline ordered_tree#OrderedTreeIterator#iterators (self) on <self:OrderedTreeIterator[Object]> */
var23 = self->attrs[COLOR_ordered_tree__OrderedTreeIterator___iterators].val; /* _iterators on <self:OrderedTreeIterator[Object]> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iterators");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 191);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = standard___standard__SequenceRead___last(var21);
}
{
((void(*)(val* self))((((long)var24&3)?class_info[((long)var24&3)]:var24->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var24); /* next on <var24:nullable Object(Iterator[Object])>*/
}
for(;;) {
{
var26 = ordered_tree___ordered_tree__OrderedTreeIterator___standard__abstract_collection__Iterator__is_ok(self);
}
var_ = var26;
if (var26){
{
{ /* Inline ordered_tree#OrderedTreeIterator#iterators (self) on <self:OrderedTreeIterator[Object]> */
var29 = self->attrs[COLOR_ordered_tree__OrderedTreeIterator___iterators].val; /* _iterators on <self:OrderedTreeIterator[Object]> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iterators");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 191);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
var30 = standard___standard__SequenceRead___last(var27);
}
{
var31 = ((short int(*)(val* self))((((long)var30&3)?class_info[((long)var30&3)]:var30->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var30); /* is_ok on <var30:nullable Object(Iterator[Object])>*/
}
var32 = !var31;
var25 = var32;
} else {
var25 = var_;
}
if (var25){
{
{ /* Inline ordered_tree#OrderedTreeIterator#iterators (self) on <self:OrderedTreeIterator[Object]> */
var35 = self->attrs[COLOR_ordered_tree__OrderedTreeIterator___iterators].val; /* _iterators on <self:OrderedTreeIterator[Object]> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iterators");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 191);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
var36 = standard___standard__AbstractArray___standard__abstract_collection__Sequence__pop(var33);
}
{
var38 = ordered_tree___ordered_tree__OrderedTreeIterator___standard__abstract_collection__Iterator__is_ok(self);
}
var_39 = var38;
if (var38){
{
{ /* Inline ordered_tree#OrderedTreeIterator#iterators (self) on <self:OrderedTreeIterator[Object]> */
var42 = self->attrs[COLOR_ordered_tree__OrderedTreeIterator___iterators].val; /* _iterators on <self:OrderedTreeIterator[Object]> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iterators");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 191);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
var43 = standard___standard__SequenceRead___last(var40);
}
{
var44 = ((short int(*)(val* self))((((long)var43&3)?class_info[((long)var43&3)]:var43->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var43); /* is_ok on <var43:nullable Object(Iterator[Object])>*/
}
var37 = var44;
} else {
var37 = var_39;
}
if (var37){
{
{ /* Inline ordered_tree#OrderedTreeIterator#iterators (self) on <self:OrderedTreeIterator[Object]> */
var47 = self->attrs[COLOR_ordered_tree__OrderedTreeIterator___iterators].val; /* _iterators on <self:OrderedTreeIterator[Object]> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iterators");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 191);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
var48 = standard___standard__SequenceRead___last(var45);
}
{
((void(*)(val* self))((((long)var48&3)?class_info[((long)var48&3)]:var48->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var48); /* next on <var48:nullable Object(Iterator[Object])>*/
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
/* method ordered_tree#OrderedTreeIterator#iterator for (self: OrderedTreeIterator[Object]): Iterator[Object] */
val* ordered_tree___ordered_tree__OrderedTreeIterator___standard__abstract_collection__Iterator__iterator(val* self) {
val* var /* : Iterator[Object] */;
val* var1 /* : OrderedTreeIterator[Object] */;
val* var2 /* : OrderedTree[Object] */;
val* var4 /* : OrderedTree[Object] */;
var1 = NEW_ordered_tree__OrderedTreeIterator(self->type->resolution_table->types[COLOR_ordered_tree__OrderedTreeIterator__ordered_tree__OrderedTreeIterator___35dE]);
{
{ /* Inline ordered_tree#OrderedTreeIterator#tree (self) on <self:OrderedTreeIterator[Object]> */
var4 = self->attrs[COLOR_ordered_tree__OrderedTreeIterator___tree].val; /* _tree on <self:OrderedTreeIterator[Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tree");
PRINT_ERROR(" (%s:%d)\n", FILE_ordered_tree, 189);
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
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:OrderedTreeIterator[Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
